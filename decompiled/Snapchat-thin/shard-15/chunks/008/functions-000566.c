/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bcd2cec; end: 10bcd2db3;  */

long FUN_10bcd2cec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10bcd2db4; end: 10bcd2e0b;  */

void FUN_10bcd2db4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_18;
  
  plVar1 = param_1 + 2;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + 1 == param_1[1]) {
    uStack_18 = *param_1;
    *param_1 = 0;
    func_0x000107c3150c(uStack_18,&uStack_18);
    func_0x000107c27f98(&uStack_18);
  }
  return;
}



/* Entry: 10bcd2e0c; end: 10bcd2ebb;  */

undefined8 * FUN_10bcd2e0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9a958;
  func_0x000107c27f98(param_1 + 1);
  return param_1;
}



/* Entry: 10bcd2ebc; end: 10bcd2ecf;  */

void FUN_10bcd2ebc(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bcd2ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 10bcd2ed0; end: 10bcd2f9b;  */

void FUN_10bcd2ed0(long param_1)

{
  undefined8 *puVar1;
  long lStack_28;
  
  __ZNSt13exception_ptrC1ERKS_(&lStack_28);
  puVar1 = (undefined8 *)(param_1 + 8);
  if (lStack_28 != 0) {
    FUN_10bcd38c0(*puVar1,puVar1,&lStack_28);
    __ZNSt13exception_ptrD1Ev(&lStack_28);
    return;
  }
  func_0x000107c3150c(*puVar1,puVar1);
  __ZNSt13exception_ptrD1Ev(&lStack_28);
  return;
}



/* Entry: 10bcd2f9c; end: 10bcd2fab;  */

undefined ** FUN_10bcd2f9c(void)

{
  return &PTR_DAT_110d9a9b8;
}



/* Entry: 10bcd2fac; end: 10bcd30ab;  */

bool FUN_10bcd2fac(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined *puVar12;
  
  pbVar11 = (byte *)*param_1;
  ppuVar6 = &PTR___tlv_bootstrap_11340e278;
  (*(code *)PTR___tlv_bootstrap_11340e278)();
  puVar12 = *ppuVar6;
  if (puVar12 == (undefined *)0x0) {
    func_0x000107c3a5c0();
    puVar12 = *ppuVar6;
  }
  do {
    bVar2 = *pbVar11;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar11,0x10);
    if (bVar5) {
      *pbVar11 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
  iVar3 = *(int *)(pbVar11 + 0x10);
  if (iVar3 < 1) {
    lVar7 = *(long *)(pbVar11 + 0x20);
    uVar1 = 0;
    if (*(long *)(pbVar11 + 0x28) != lVar7) {
      uVar1 = (*(long *)(pbVar11 + 0x28) - lVar7 >> 3) * 0xaa - 1;
    }
    lVar9 = *(long *)(pbVar11 + 0x40);
    uVar10 = lVar9 + *(long *)(pbVar11 + 0x38);
    if (uVar1 == uVar10) {
      func_0x000107c314f4(pbVar11 + 0x18);
      lVar7 = *(long *)(pbVar11 + 0x20);
      lVar9 = *(long *)(pbVar11 + 0x40);
      uVar10 = lVar9 + *(long *)(pbVar11 + 0x38);
    }
    puVar8 = (undefined8 *)(*(long *)(lVar7 + (uVar10 / 0xaa) * 8) + (uVar10 % 0xaa) * 0x18);
    *puVar8 = 0;
    puVar8[1] = param_2;
    puVar8[2] = puVar12;
    *(long *)(pbVar11 + 0x40) = lVar9 + 1;
  }
  else {
    *(int *)(pbVar11 + 0x10) = iVar3 + -1;
  }
  *pbVar11 = 0;
  return iVar3 < 1;
}



/* Entry: 10bcd30ac; end: 10bcd316f;  */

long * FUN_10bcd30ac(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x55;
  }
  else {
    if (uVar2 != 2) goto LAB_10bcd311c;
    lVar3 = 0xaa;
  }
  param_1[4] = lVar3;
LAB_10bcd311c:
  if (puVar4 != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      __ZdlPv(*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != puVar1);
    lVar3 = param_1[1] - param_1[2];
    if (lVar3 != 0) {
      param_1[2] = param_1[2] + (lVar3 + 7U & 0xfffffffffffffff8);
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bcd3170; end: 10bcd32e7;  */

void FUN_10bcd3170(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar13 = (undefined8 *)param_1[2];
  if (puVar13 != (undefined8 *)param_1[3]) goto LAB_10bcd32c4;
  puVar11 = (undefined8 *)*param_1;
  puVar12 = (undefined8 *)param_1[1];
  if (puVar11 <= puVar12 && (long)puVar12 - (long)puVar11 != 0) {
    lVar5 = (((long)puVar12 - (long)puVar11 >> 3) + 1) / 2;
    puVar11 = puVar12 + -lVar5;
    lVar3 = (long)puVar13 - (long)puVar12;
    if (lVar3 != 0) {
      _memmove(puVar11,puVar12,lVar3);
      puVar12 = (undefined8 *)param_1[1];
    }
    puVar13 = (undefined8 *)((long)puVar11 + lVar3);
    param_1[1] = (ulong)(puVar12 + -lVar5);
    goto LAB_10bcd32c4;
  }
  uVar6 = (long)puVar13 - (long)puVar11 >> 2;
  if ((long)puVar13 - (long)puVar11 == 0) {
    uVar6 = 1;
  }
  if (uVar6 >> 0x3d != 0) {
    func_0x000104bd35f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbcbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt13exception_ptrC1ERKS__110346190)(extraout_x8,*param_1 + 0x18);
    return;
  }
  uVar4 = uVar6 * 8;
  __Znwm();
  puVar2 = (undefined8 *)(uVar4 + (uVar6 >> 2) * 8);
  lVar3 = (long)puVar13 - (long)puVar12;
  puVar13 = puVar2;
  if (lVar3 != 0) {
    puVar13 = (undefined8 *)((long)puVar2 + lVar3);
    puVar7 = puVar2;
    if ((0x37 < lVar3 - 8U) &&
       (lVar5 = (uVar6 >> 2) * 8 + uVar4, 0x1f < (ulong)(lVar5 - (long)puVar12))) {
      uVar1 = (lVar3 - 8U >> 3) + 1;
      uVar8 = uVar1 & 0x3ffffffffffffffc;
      puVar7 = puVar12 + 2;
      puVar9 = (undefined8 *)(lVar5 + 0x10);
      uVar10 = uVar8;
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
        uVar10 = uVar10 - 4;
      } while (uVar10 != 0);
      puVar7 = puVar2 + uVar8;
      puVar12 = puVar12 + uVar8;
      if (uVar1 == uVar8) goto LAB_10bcd32ac;
    }
    do {
      puVar9 = puVar7 + 1;
      *puVar7 = *puVar12;
      puVar7 = puVar9;
      puVar12 = puVar12 + 1;
    } while (puVar9 != puVar13);
  }
LAB_10bcd32ac:
  *param_1 = uVar4;
  param_1[1] = (ulong)puVar2;
  param_1[2] = (ulong)puVar13;
  param_1[3] = uVar4 + uVar6 * 8;
  if (puVar11 != (undefined8 *)0x0) {
    __ZdlPv(puVar11);
    puVar13 = (undefined8 *)param_1[2];
  }
LAB_10bcd32c4:
  *puVar13 = param_2;
  param_1[2] = (ulong)(puVar13 + 1);
  return;
}



/* Entry: 10bcd32e8; end: 10bcd32f7;  */

void FUN_10bcd32e8(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptrC1ERKS__110346190)(param_1,*param_2 + 0x18);
  return;
}



/* Entry: 10bcd32f8; end: 10bcd3447;  */

/* WARNING: Removing unreachable block (ram,0x00010bcd335c) */

void FUN_10bcd32f8(long *param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  undefined4 uStack_34;
  
  puVar5 = PTR__mach_task_self__11034c5c8;
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 1 & 1) == 0) {
    _semaphore_create(*(undefined4 *)PTR__mach_task_self__11034c5c8,&uStack_34,0,0);
    lVar10 = *param_1;
    plVar1 = (long *)(lVar10 + 0x10);
    do {
      lVar9 = *plVar1;
      if (lVar9 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          pbVar11 = *(byte **)(lVar10 + 0x90);
          bVar2 = pbVar11[1];
          uVar8 = (ulong)bVar2;
          pbVar6 = pbVar11;
          if (bVar2 == *pbVar11) {
            uVar7 = (uint)bVar2 << 1;
            if (0x7f < uVar7) {
              uVar7 = 0x80;
            }
            pbVar6 = (byte *)(ulong)(uVar7 * 0x18 + 0x10);
            _malloc();
            uVar8 = 0;
            *pbVar6 = (byte)uVar7;
            pbVar6[1] = 0;
            pbVar6[8] = 0;
            pbVar6[9] = 0;
            pbVar6[10] = 0;
            pbVar6[0xb] = 0;
            pbVar6[0xc] = 0;
            pbVar6[0xd] = 0;
            pbVar6[0xe] = 0;
            pbVar6[0xf] = 0;
            *(byte **)(pbVar11 + 8) = pbVar6;
            *(byte **)(lVar10 + 0x90) = pbVar6;
          }
          *(code **)(pbVar6 + uVar8 * 0x18 + 0x10) = FUN_10bcd3448;
          *(undefined4 **)(pbVar6 + uVar8 * 0x18 + 0x18) = &uStack_34;
          pbVar6 = pbVar6 + uVar8 * 0x18 + 0x20;
          pbVar6[0] = 0;
          pbVar6[1] = 0;
          pbVar6[2] = 0;
          pbVar6[3] = 0;
          pbVar6[4] = 0;
          pbVar6[5] = 0;
          pbVar6[6] = 0;
          pbVar6[7] = 0;
          *(char *)(*(long *)(lVar10 + 0x90) + 1) = *(char *)(*(long *)(lVar10 + 0x90) + 1) + '\x01'
          ;
          *(undefined8 *)(lVar10 + 0x10) = 0;
          goto LAB_10bcd3404;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar9 >> 1 & 1) == 0);
    _semaphore_signal(uStack_34);
LAB_10bcd3404:
    _semaphore_wait(uStack_34);
    _semaphore_destroy(*(undefined4 *)puVar5,uStack_34);
  }
  return;
}



/* Entry: 10bcd3448; end: 10bcd3463;  */

void FUN_10bcd3448(undefined4 *param_1)

{
  _semaphore_signal(*param_1);
  return;
}



/* Entry: 10bcd3464; end: 10bcd350f;  */

void FUN_10bcd3464(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined8 uStack_18;
  
  if ((bRam0000000113847210 & 1) == 0) {
    iVar5 = 0x13847210;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_10bcd3708();
      ___cxa_atexit(&UNK_10054ebfc,0x113847208,0x100000000);
      ___cxa_guard_release(0x113847210);
    }
  }
  lVar4 = lRam0000000113847208;
  if (lRam0000000113847208 != 0) {
    plVar1 = (long *)(lRam0000000113847208 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  uStack_18 = 0;
  func_0x000107c27f9c(&uStack_18);
  return;
}



/* Entry: 10bcd3510; end: 10bcd351f;  */

/* WARNING: Removing unreachable block (ram,0x00010bcd38f4) */

undefined1 FUN_10bcd3510(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  lVar3 = *param_1;
  plVar10 = (long *)(lVar3 + 0x10);
  do {
    lVar6 = *plVar10;
    if (lVar6 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        __ZNSt13exception_ptraSERKS_(lVar3 + 0x18,param_2);
        *(undefined8 *)(lVar3 + 0x10) = 0x22;
        lVar6 = lVar3 + 0x20;
        lVar7 = lVar6;
        do {
          if (*(char *)(lVar7 + 1) != '\0') {
            uVar8 = 0;
            plVar10 = (long *)(lVar7 + 0x20);
            do {
              plVar4 = (long *)*plVar10;
              pcVar5 = (code *)plVar10[-2];
              if (plVar4 == (long *)0x0) {
                if (pcVar5 == (code *)0x0) {
                  (**(code **)plVar10[-1])();
                }
                else {
                  (*pcVar5)();
                }
              }
              else {
                (**(code **)(*plVar4 + 0x10))(plVar4,pcVar5,plVar10[-1]);
              }
              uVar8 = uVar8 + 1;
              plVar10 = plVar10 + 3;
            } while (uVar8 < *(byte *)(lVar7 + 1));
          }
          lVar9 = *(long *)(lVar7 + 8);
          if (lVar7 != lVar6) {
            _free(lVar7);
          }
          lVar7 = lVar9;
        } while (lVar9 != 0);
        *(long *)(lVar3 + 0x90) = lVar6;
        *(undefined1 *)(lVar3 + 0x21) = 0;
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10bcd3520; end: 10bcd3557;  */

undefined4 * FUN_10bcd3520(undefined4 *param_1)

{
  _semaphore_destroy(*(undefined4 *)PTR__mach_task_self__11034c5c8,*param_1);
  return param_1;
}



/* Entry: 10bcd3558; end: 10bcd3613;  */

void FUN_10bcd3558(long param_1,int param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    *(byte *)(param_1 + 0xb8) = 1;
    func_0x000107c314e4(param_1 + 0x10);
    func_0x000107c314e4(param_1 + 0x58);
  }
  if (param_2 != 0) {
    return;
  }
  pbVar1 = (byte *)(param_1 + 0xa8);
  do {
    bVar3 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar3 & 1) != 0));
  if (*(long *)(param_1 + 0xe8) != 0) {
    lVar8 = *(long *)(param_1 + 0xd8);
    do {
      (**(code **)(param_1 + 200))(*(long *)(param_1 + 0xc0) + *(long *)(param_1 + 0xd0) * lVar8);
      uVar2 = *(long *)(param_1 + 0xd8) + 1;
      uVar9 = *(ulong *)(param_1 + 0xa0);
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = uVar2 / uVar9;
      }
      lVar8 = uVar2 - uVar7 * uVar9;
      *(long *)(param_1 + 0xd8) = lVar8;
      lVar6 = *(long *)(param_1 + 0xe8) + -1;
      *(long *)(param_1 + 0xe8) = lVar6;
    } while (lVar6 != 0);
  }
  *pbVar1 = 0;
  return;
}



/* Entry: 10bcd3614; end: 10bcd3653;  */

/* WARNING: Possible PIC construction at 0x00010bcd3640: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bcd3644) */

void FUN_10bcd3614(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
    return;
  }
  *(byte *)(param_1 + 0xb8) = 1;
  pbVar1 = (byte *)(param_1 + 0x10);
  do {
    bVar2 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x48);
    puVar7 = (undefined8 *)
             ((*(undefined8 **)(param_1 + 0x30))[uVar6 / 0xaa] + (uVar6 % 0xaa) * 0x18);
    UNRECOVERED_JUMPTABLE = (code *)*puVar7;
    puVar3 = (undefined8 *)puVar7[1];
    plVar8 = (long *)puVar7[2];
    *(ulong *)(param_1 + 0x48) = uVar6 + 1;
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -1;
    if (0x153 < uVar6 + 1) {
      func_0x000107c60e14(**(undefined8 **)(param_1 + 0x30));
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 8;
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -0xaa;
    }
    *pbVar1 = 0;
    if (plVar8 == (long *)0x0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100671800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(puVar3);
        return;
      }
      (*(code *)*puVar3)(puVar3);
    }
    else {
      (**(code **)(*plVar8 + 0x10))(plVar8,UNRECOVERED_JUMPTABLE,puVar3);
    }
    return;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *pbVar1 = 0;
  return;
}



/* Entry: 10bcd3654; end: 10bcd366f;  */

bool FUN_10bcd3654(long param_1)

{
  return *(long *)(param_1 + 0xe8) == 0;
}



/* Entry: 10bcd3670; end: 10bcd3707;  */

undefined8 * FUN_10bcd3670(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9aa10;
  _free(param_1[0x18]);
  FUN_10bcd30ac(param_1 + 0xe);
  FUN_10bcd30ac(param_1 + 5);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10bcd3708; end: 10bcd38bf;  */

/* WARNING: Removing unreachable block (ram,0x00010bcd37ac) */

void FUN_10bcd3708(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = (undefined8 *)0xa0;
  __Znwm();
  plVar11 = puVar3 + 2;
  *plVar11 = 0;
  puVar8 = puVar3 + 4;
  *(undefined2 *)puVar8 = 4;
  puVar3[3] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[5] = 0;
  puVar3[0x12] = puVar8;
  *puVar3 = &PTR_DAT_11087bc20;
  puVar3[1] = 0x200000006;
  *(undefined2 *)(puVar3 + 0x13) = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_60 = puVar3;
  puStack_58 = puVar3;
  func_0x000107c27f98(&uStack_50);
  func_0x000107c27f9c(&uStack_48);
  do {
    lVar6 = *plVar11;
    if (lVar6 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = 2;
        cVar1 = ExclusiveMonitorsStatus();
      }
      puVar7 = puVar8;
      if (cVar1 == '\0') goto LAB_10bcd37e8;
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar6 >> 1 & 1) == 0);
joined_r0x00010bcd3874:
  puRam0000000113847208 = puStack_60;
  if (puStack_60 != (undefined8 *)0x0) {
    plVar11 = puStack_60 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x000107c27f98(&puStack_58);
  func_0x000107c27f9c(&puStack_60);
  return;
LAB_10bcd37e8:
  do {
    if (*(char *)((long)puVar7 + 1) != '\0') {
      uVar9 = 0;
      plVar11 = puVar7 + 4;
      do {
        plVar4 = (long *)*plVar11;
        pcVar5 = (code *)plVar11[-2];
        if (plVar4 == (long *)0x0) {
          if (pcVar5 == (code *)0x0) {
            (**(code **)plVar11[-1])();
          }
          else {
            (*pcVar5)();
          }
        }
        else {
          (**(code **)(*plVar4 + 0x10))(plVar4,pcVar5,plVar11[-1]);
        }
        uVar9 = uVar9 + 1;
        plVar11 = plVar11 + 3;
      } while (uVar9 < *(byte *)((long)puVar7 + 1));
    }
    puVar10 = (undefined8 *)puVar7[1];
    if (puVar7 != puVar8) {
      _free(puVar7);
    }
    puVar7 = puVar10;
  } while (puVar10 != (undefined8 *)0x0);
  puVar3[0x12] = puVar8;
  *(undefined1 *)((long)puVar3 + 0x21) = 0;
  goto joined_r0x00010bcd3874;
}



/* Entry: 10bcd38c0; end: 10bcd39ef;  */

/* WARNING: Removing unreachable block (ram,0x00010bcd38f4) */

undefined1 FUN_10bcd38c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  plVar9 = (long *)(param_1 + 0x10);
  do {
    lVar5 = *plVar9;
    if (lVar5 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        __ZNSt13exception_ptraSERKS_(param_1 + 0x18,param_3);
        *(undefined8 *)(param_1 + 0x10) = 0x22;
        lVar5 = param_1 + 0x20;
        lVar6 = lVar5;
        do {
          if (*(char *)(lVar6 + 1) != '\0') {
            uVar7 = 0;
            plVar9 = (long *)(lVar6 + 0x20);
            do {
              plVar3 = (long *)*plVar9;
              pcVar4 = (code *)plVar9[-2];
              if (plVar3 == (long *)0x0) {
                if (pcVar4 == (code *)0x0) {
                  (**(code **)plVar9[-1])();
                }
                else {
                  (*pcVar4)();
                }
              }
              else {
                (**(code **)(*plVar3 + 0x10))(plVar3,pcVar4,plVar9[-1]);
              }
              uVar7 = uVar7 + 1;
              plVar9 = plVar9 + 3;
            } while (uVar7 < *(byte *)(lVar6 + 1));
          }
          lVar8 = *(long *)(lVar6 + 8);
          if (lVar6 != lVar5) {
            _free(lVar6);
          }
          lVar6 = lVar8;
        } while (lVar8 != 0);
        *(long *)(param_1 + 0x90) = lVar5;
        *(undefined1 *)(param_1 + 0x21) = 0;
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10bcd39f0; end: 10bcd3a5f;  */

undefined8 * FUN_10bcd39f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9aa50;
  __ZNSt13exception_ptrD1Ev(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10bcd3a60; end: 10bcd3a63;  */

void FUN_10bcd3a60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10bcd3a64; end: 10bcd3a77;  */

void FUN_10bcd3a64(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcd3a78; end: 10bcd3a93;  */

void FUN_10bcd3a78(byte *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  
  do {
    bVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while ((cVar2 != '\0') || ((bVar1 & 1) != 0));
  return;
}



/* Entry: 10bcd3a94; end: 10bcd3b5b;  */

void FUN_10bcd3a94(undefined8 param_1)

{
  int iVar1;
  undefined **appuStack_30 [2];
  
  if ((bRam00000001137fe118 & 1) == 0) {
    iVar1 = 0x137fe118;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      __ZNSt13runtime_errorC2EPKc(appuStack_30,&UNK_10f82fcce);
      appuStack_30[0] = &PTR_DAT_110a70850;
      FUN_10bdb4144(appuStack_30);
      __ZNSt13runtime_errorD2Ev(appuStack_30);
      ___cxa_atexit(PTR___ZNSt13exception_ptrD1Ev_110346198,0x1137fe110,0x100000000);
      ___cxa_guard_release(0x1137fe118);
    }
  }
  __ZNSt13exception_ptrC1ERKS_(param_1,0x1137fe110);
  return;
}



/* Entry: 10bcd3b5c; end: 10bcd3c53;  */

long * FUN_10bcd3b5c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)&PTR_DAT_110d9aad0;
  if ((*(byte *)(param_1 + 0xd) & 1) == 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  __ZNSt3__16threadD1Ev(param_1 + 0xc);
  _semaphore_destroy(*(undefined4 *)PTR__mach_task_self__11034c5c8,(int)param_1[10]);
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar4 = param_1[5];
    lVar2 = lVar3;
    if (lVar3 != lVar4) {
      do {
        plVar1 = *(long **)(lVar4 + -8);
        if ((long *)(lVar4 + -0x20) == plVar1) {
          lVar2 = 0x20;
LAB_10bcd3bd4:
          (**(code **)(*plVar1 + lVar2))();
        }
        else if (plVar1 != (long *)0x0) {
          lVar2 = 0x28;
          goto LAB_10bcd3bd4;
        }
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != lVar3);
      lVar2 = param_1[4];
    }
    param_1[5] = lVar3;
    __ZdlPv(lVar2);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
    return param_1;
  }
  return param_1;
}



/* Entry: 10bcd3c54; end: 10bcd3cdb;  */

long * FUN_10bcd3c54(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar4 = param_1[1];
    lVar2 = lVar3;
    if (lVar3 != lVar4) {
      do {
        plVar1 = *(long **)(lVar4 + -8);
        if ((long *)(lVar4 + -0x20) == plVar1) {
          lVar2 = 0x20;
LAB_10bcd3c88:
          (**(code **)(*plVar1 + lVar2))();
        }
        else if (plVar1 != (long *)0x0) {
          lVar2 = 0x28;
          goto LAB_10bcd3c88;
        }
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar2);
  }
  return param_1;
}



/* Entry: 10bcd3cdc; end: 10bcd3cdf;  */

long * FUN_10bcd3cdc(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)&PTR_DAT_110d9aad0;
  if ((*(byte *)(param_1 + 0xd) & 1) == 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  __ZNSt3__16threadD1Ev(param_1 + 0xc);
  _semaphore_destroy(*(undefined4 *)PTR__mach_task_self__11034c5c8,(int)param_1[10]);
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar4 = param_1[5];
    lVar2 = lVar3;
    if (lVar3 != lVar4) {
      do {
        plVar1 = *(long **)(lVar4 + -8);
        if ((long *)(lVar4 + -0x20) == plVar1) {
          lVar2 = 0x20;
LAB_10bcd3bd4:
          (**(code **)(*plVar1 + lVar2))();
        }
        else if (plVar1 != (long *)0x0) {
          lVar2 = 0x28;
          goto LAB_10bcd3bd4;
        }
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != lVar3);
      lVar2 = param_1[4];
    }
    param_1[5] = lVar3;
    __ZdlPv(lVar2);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
    return param_1;
  }
  return param_1;
}



/* Entry: 10bcd3ce0; end: 10bcd3cf3;  */

void FUN_10bcd3ce0(void)

{
  FUN_10bcd3b5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcd3cf4; end: 10bcd3d23;  */

long FUN_10bcd3cf4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(*(long *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10bcd3d24; end: 10bcd3f5f;  */

undefined8 * FUN_10bcd3d24(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar1 = (byte *)(param_1 + 0x40);
  do {
    bVar2 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
  bVar2 = *(byte *)(param_1 + 0x68);
  lVar10 = param_1;
  if ((bVar2 & 1) == 0) {
    *(byte *)(param_1 + 0x68) = 1;
    _semaphore_signal(*(undefined4 *)(param_1 + 0x50));
    *(undefined1 *)(param_1 + 0x40) = 0;
    __ZNSt3__16thread4joinEv(param_1 + 0x60);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while ((cVar4 != '\0') || ((bVar3 & 1) != 0));
    lVar10 = *(long *)(param_1 + 0x20);
    lVar9 = *(long *)(param_1 + 0x28);
    if (lVar10 != lVar9) {
      do {
        FUN_10bcd3fb4(lVar10,lVar9,(lVar9 - lVar10 >> 3) * -0x3333333333333333);
        lVar10 = *(long *)(param_1 + 0x28);
        uStack_70 = *(undefined8 *)(lVar10 + -0x28);
        plVar7 = *(long **)(lVar10 + -8);
        if (plVar7 == (long *)0x0) {
          plStack_50 = (long *)0x0;
        }
        else if (plVar7 == (long *)(lVar10 + -0x20)) {
          plStack_50 = alStack_68;
          (**(code **)(*plVar7 + 0x18))(plVar7,alStack_68);
          lVar10 = *(long *)(param_1 + 0x28);
          plVar7 = *(long **)(lVar10 + -8);
          if (plVar7 == (long *)(lVar10 + -0x20)) {
            lVar9 = 0x20;
          }
          else {
            if (plVar7 == (long *)0x0) goto LAB_10bcd3e6c;
            lVar9 = 0x28;
          }
          (**(code **)(*plVar7 + lVar9))();
        }
        else {
          *(undefined8 *)(lVar10 + -8) = 0;
          plStack_50 = plVar7;
        }
LAB_10bcd3e6c:
        *(long *)(param_1 + 0x28) = lVar10 + -0x28;
        FUN_10bcd3a94(auStack_78);
        if (plStack_50 == (long *)0x0) {
          func_0x000104bfeb48();
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10bcd3ef4);
          (*pcVar6)();
        }
        (**(code **)(*plStack_50 + 0x30))(plStack_50,auStack_78);
        __ZNSt13exception_ptrD1Ev(auStack_78);
        if (plStack_50 == alStack_68) {
          lVar10 = 0x20;
LAB_10bcd3dcc:
          (**(code **)(*plStack_50 + lVar10))();
        }
        else if (plStack_50 != (long *)0x0) {
          lVar10 = 0x28;
          goto LAB_10bcd3dcc;
        }
        lVar10 = *(long *)(param_1 + 0x20);
        lVar9 = *(long *)(param_1 + 0x28);
      } while (lVar10 != lVar9);
    }
  }
  *pbVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined8 *)(ulong)(bVar2 ^ 1);
  }
  ___stack_chk_fail();
  *pbVar1 = 0;
  __Unwind_Resume(lVar10);
  puVar8 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar8 = &PTR_FUN_110d9ab28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return puVar8;
}



/* Entry: 10bcd3f60; end: 10bcd3f73;  */

void FUN_10bcd3f60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_FUN_110d9ab28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcd3f74; end: 10bcd3f83;  */

void FUN_10bcd3f74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9ab28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcd3f84; end: 10bcd3fa3;  */

void FUN_10bcd3f84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9ab28;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcd3fa4; end: 10bcd3fb3;  */

void FUN_10bcd3fa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bcd3fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10bcd3fb4; end: 10bcd436b;  */

void FUN_10bcd3fb4(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long alStack_88 [3];
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 < 2) goto LAB_10bcd4280;
  lVar10 = *param_1;
  plStack_70 = (long *)param_1[4];
  plVar4 = alStack_88;
  if (plStack_70 == (long *)0x0) {
    plStack_70 = (long *)0x0;
  }
  else if (plStack_70 == param_1 + 1) {
    lVar9 = *plStack_70;
    plStack_70 = alStack_88;
    (**(code **)(lVar9 + 0x18))();
  }
  else {
    param_1[4] = 0;
  }
  plVar5 = param_1;
  uVar12 = 0;
  do {
    uVar2 = uVar12 << 1 | 1;
    uVar1 = uVar12 * 2 + 2;
    plVar11 = plVar5 + uVar12 * 5 + 5;
    uVar13 = uVar2;
    if (((long)uVar1 < param_3) &&
       (plVar11 = plVar5 + uVar12 * 5 + 10, uVar13 = uVar1,
       plVar5[uVar12 * 5 + 5] <= plVar5[uVar12 * 5 + 10])) {
      plVar11 = plVar5 + uVar12 * 5 + 5;
      uVar13 = uVar2;
    }
    plVar8 = plVar11 + 1;
    *plVar5 = *plVar11;
    plVar7 = plVar5 + 1;
    plVar3 = (long *)plVar5[4];
    plVar5[4] = 0;
    if (plVar3 == plVar7) {
      lVar9 = 0x20;
LAB_10bcd40d0:
      (**(code **)(*plVar3 + lVar9))();
    }
    else if (plVar3 != (long *)0x0) {
      lVar9 = 0x28;
      goto LAB_10bcd40d0;
    }
    plVar3 = (long *)plVar11[4];
    if (plVar3 == (long *)0x0) {
      plVar5[4] = 0;
    }
    else if (plVar3 == plVar8) {
      plVar5[4] = (long)plVar7;
      (**(code **)(*(long *)plVar11[4] + 0x18))();
      plVar4 = plVar7;
    }
    else {
      plVar5[4] = (long)plVar3;
      plVar11[4] = 0;
    }
    plVar5 = plVar11;
    uVar12 = uVar13;
  } while ((long)uVar13 <= (long)(param_3 - 2U >> 1));
  if (plVar11 == param_2 + -5) {
    *plVar11 = lVar10;
    plVar5 = (long *)plVar11[4];
    plVar11[4] = 0;
    if (plVar5 == plVar8) {
      lVar10 = 0x20;
LAB_10bcd42c0:
      (**(code **)(*plVar5 + lVar10))();
      param_2 = plVar4;
    }
    else {
      param_2 = plVar4;
      if (plVar5 != (long *)0x0) {
        lVar10 = 0x28;
        goto LAB_10bcd42c0;
      }
    }
    if (plStack_70 == (long *)0x0) {
      plVar11[4] = 0;
    }
    else if (plStack_70 == alStack_88) {
      plVar11[4] = (long)plVar8;
      (**(code **)(*plStack_70 + 0x18))();
      param_2 = plVar8;
    }
    else {
      plVar11[4] = (long)plStack_70;
      plStack_70 = (long *)0x0;
    }
  }
  else {
    *plVar11 = param_2[-5];
    plVar4 = (long *)plVar11[4];
    plVar11[4] = 0;
    if (plVar4 == plVar8) {
      lVar9 = 0x20;
LAB_10bcd4178:
      (**(code **)(*plVar4 + lVar9))();
    }
    else if (plVar4 != (long *)0x0) {
      lVar9 = 0x28;
      goto LAB_10bcd4178;
    }
    plVar5 = param_2 + -4;
    plVar4 = (long *)param_2[-1];
    if (plVar4 == (long *)0x0) {
      plVar11[4] = 0;
LAB_10bcd41cc:
      plVar4 = (long *)param_2[-1];
      param_2[-5] = lVar10;
      param_2[-1] = 0;
      if (plVar4 == plVar5) {
        lVar10 = 0x20;
      }
      else {
        if (plVar4 == (long *)0x0) goto LAB_10bcd4200;
        lVar10 = 0x28;
      }
      (**(code **)(*plVar4 + lVar10))();
    }
    else {
      if (plVar4 == plVar5) {
        plVar11[4] = (long)plVar8;
        (**(code **)(*(long *)param_2[-1] + 0x18))((long *)param_2[-1],plVar8);
        goto LAB_10bcd41cc;
      }
      plVar11[4] = (long)plVar4;
      param_2[-5] = lVar10;
      param_2[-1] = 0;
    }
LAB_10bcd4200:
    if (plStack_70 == (long *)0x0) {
      param_2[-1] = 0;
    }
    else if (plStack_70 == alStack_88) {
      param_2[-1] = (long)plVar5;
      (**(code **)(*plStack_70 + 0x18))(plStack_70,plVar5);
    }
    else {
      param_2[-1] = (long)plStack_70;
      plStack_70 = (long *)0x0;
    }
    param_2 = plVar11 + 5;
    func_0x000107c3152c(param_1,param_2,((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333);
  }
  param_1 = plStack_70;
  if (plStack_70 == alStack_88) {
    lVar10 = 0x20;
  }
  else {
    if (plStack_70 == (long *)0x0) goto LAB_10bcd4280;
    lVar10 = 0x28;
  }
  (**(code **)(*plStack_70 + lVar10))();
LAB_10bcd4280:
  iVar6 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume(param_1);
  }
  func_0x000104bd46a0();
  plVar4 = (long *)*param_1;
  *param_1 = 0;
  if (plVar4 != (long *)0x0) {
    lVar10 = *plVar4;
    *plVar4 = 0;
    if (lVar10 != 0) {
      __ZNSt3__115__thread_structD1Ev();
      __ZdlPv();
    }
    __ZdlPv(plVar4);
  }
  return;
}



/* Entry: 10bcd436c; end: 10bcd44c7;  */

undefined8 * FUN_10bcd436c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  *param_1 = 0;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      __ZNSt3__115__thread_structD1Ev();
      __ZdlPv();
    }
    __ZdlPv(plVar2);
  }
  return param_1;
}



/* Entry: 10bcd44c8; end: 10bcd45c3;  */

undefined8 * FUN_10bcd44c8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110d9ab98;
  *(undefined1 *)(param_1 + 0xd) = 1;
  plVar3 = (long *)param_1[10];
  plVar5 = (long *)param_1[0xb];
  if (plVar3 != plVar5) {
    do {
      if (*plVar3 != 0) {
        _semaphore_signal(*(undefined4 *)(param_1 + 3));
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar5);
    plVar3 = (long *)param_1[10];
    plVar5 = (long *)param_1[0xb];
  }
  for (; plVar3 != plVar5; plVar3 = plVar3 + 1) {
    __ZNSt3__16thread4joinEv(plVar3);
  }
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    __ZdlPv(param_1[0xe]);
  }
  lVar4 = param_1[10];
  if (lVar4 != 0) {
    lVar1 = param_1[0xb];
    lVar2 = lVar4;
    if (lVar4 != lVar1) {
      do {
        lVar1 = lVar1 + -8;
        __ZNSt3__16threadD1Ev();
      } while (lVar1 != lVar4);
      lVar2 = param_1[10];
    }
    param_1[0xb] = lVar4;
    __ZdlPv(lVar2);
  }
  FUN_10bcd4ea8(param_1 + 4);
  _semaphore_destroy(*(undefined4 *)PTR__mach_task_self__11034c5c8,*(undefined4 *)(param_1 + 3));
  return param_1;
}



/* Entry: 10bcd45c4; end: 10bcd461b;  */

long * FUN_10bcd45c4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar3 != lVar1) {
      do {
        lVar1 = lVar1 + -8;
        __ZNSt3__16threadD1Ev();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar2);
  }
  return param_1;
}



/* Entry: 10bcd461c; end: 10bcd461f;  */

undefined8 * FUN_10bcd461c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110d9ab98;
  *(undefined1 *)(param_1 + 0xd) = 1;
  plVar3 = (long *)param_1[10];
  plVar5 = (long *)param_1[0xb];
  if (plVar3 != plVar5) {
    do {
      if (*plVar3 != 0) {
        _semaphore_signal(*(undefined4 *)(param_1 + 3));
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar5);
    plVar3 = (long *)param_1[10];
    plVar5 = (long *)param_1[0xb];
  }
  for (; plVar3 != plVar5; plVar3 = plVar3 + 1) {
    __ZNSt3__16thread4joinEv(plVar3);
  }
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    __ZdlPv(param_1[0xe]);
  }
  lVar4 = param_1[10];
  if (lVar4 != 0) {
    lVar1 = param_1[0xb];
    lVar2 = lVar4;
    if (lVar4 != lVar1) {
      do {
        lVar1 = lVar1 + -8;
        __ZNSt3__16threadD1Ev();
      } while (lVar1 != lVar4);
      lVar2 = param_1[10];
    }
    param_1[0xb] = lVar4;
    __ZdlPv(lVar2);
  }
  FUN_10bcd4ea8(param_1 + 4);
  _semaphore_destroy(*(undefined4 *)PTR__mach_task_self__11034c5c8,*(undefined4 *)(param_1 + 3));
  return param_1;
}



/* Entry: 10bcd4620; end: 10bcd4633;  */

void FUN_10bcd4620(void)

{
  FUN_10bcd44c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcd4634; end: 10bcd49ef;  */

void FUN_10bcd4634(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  ulong *puStack_68;
  
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar14 = puVar5 + 3;
  *puVar14 = &PTR_FUN_110d9ab98;
  *puVar5 = &PTR_FUN_110d9ac18;
  *(undefined1 *)(puVar5 + 4) = 0;
  puVar5[5] = 0;
  _semaphore_create(*(undefined4 *)PTR__mach_task_self__11034c5c8,puVar5 + 6,0,0);
  puVar5[8] = 0;
  puVar5[7] = 0;
  *(undefined8 *)((long)puVar5 + 0x79) = 0;
  *(undefined8 *)((long)puVar5 + 0x71) = 0;
  puVar5[0xc] = 0;
  puVar5[0xb] = 0;
  puVar5[0xe] = 0;
  puVar5[0xd] = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  if (0x7ffffffffffffff6 < param_4) {
    func_0x000104bd47d4();
LAB_10bcd4948:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10bcd494c);
    (*pcVar4)();
  }
  if (param_4 < 0x17) {
    puVar6 = puVar5 + 0x11;
    *(char *)((long)puVar5 + 0x9f) = (char)param_4;
    if (param_4 == 0) {
      *(undefined1 *)puVar6 = 0;
      *param_1 = (long)puVar14;
      param_1[1] = (long)puVar5;
      goto joined_r0x00010bcd4740;
    }
  }
  else {
    puVar19 = (undefined8 *)0x19;
    if ((param_4 | 7) != 0x17) {
      puVar19 = (undefined8 *)((param_4 | 7) + 1);
    }
    puVar6 = puVar19;
    __Znwm();
    puVar5[0x12] = param_4;
    puVar5[0x13] = (ulong)puVar19 | 0x8000000000000000;
    puVar5[0x11] = puVar6;
  }
  _memmove(puVar6,param_3,param_4);
  *(undefined1 *)((long)puVar6 + param_4) = 0;
  *param_1 = (long)puVar14;
  param_1[1] = (long)puVar5;
joined_r0x00010bcd4740:
  if (param_2 != 0) {
    lVar18 = 0;
    do {
      while( true ) {
        lVar20 = *param_1;
        uVar17 = *(ulong *)(lVar20 + 0x58);
        puVar8 = (ulong *)(lVar20 + 0x60);
        lStack_98 = lVar18;
        lStack_90 = lVar20;
        if (*puVar8 <= uVar17) break;
        FUN_10bcd4f6c(uVar17,&lStack_98);
        *(ulong *)(lVar20 + 0x58) = uVar17 + 8;
        *(ulong *)(lVar20 + 0x58) = uVar17 + 8;
        lVar18 = lVar18 + 1;
        if (lVar18 == param_2) {
          return;
        }
      }
      lVar16 = *(long *)(lVar20 + 0x50);
      lVar15 = uVar17 - lVar16;
      uVar13 = (lVar15 >> 3) + 1;
      if (uVar13 >> 0x3d != 0) {
        func_0x000107313de4();
        goto LAB_10bcd4948;
      }
      uVar10 = *puVar8 - lVar16;
      uVar12 = (long)uVar10 >> 2;
      if (uVar12 <= uVar13) {
        uVar12 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar10) {
        uVar12 = 0x1fffffffffffffff;
      }
      puStack_68 = puVar8;
      if (uVar12 == 0) {
        lVar7 = 0;
      }
      else {
        if (uVar12 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_10bcd4948;
        }
        lVar7 = uVar12 << 3;
        __Znwm();
      }
      lVar1 = lVar7 + lVar15;
      lVar2 = lVar7 + uVar12 * 8;
      lStack_88 = lVar7;
      lStack_80 = lVar1;
      lStack_78 = lVar1;
      lStack_70 = lVar2;
      FUN_10bcd4f6c(lVar1,&lStack_98);
      puVar5 = *(undefined8 **)(lVar20 + 0x50);
      puVar14 = *(undefined8 **)(lVar20 + 0x58);
      puVar19 = (undefined8 *)(lVar1 - ((long)puVar14 - (long)puVar5));
      lVar3 = (long)puVar14 - (long)puVar5;
      if (lVar3 != 0) {
        uVar13 = lVar3 - 8;
        puVar6 = puVar5;
        puVar11 = puVar19;
        if ((uVar13 < 0x38) ||
           (puVar19 < (undefined8 *)((long)puVar5 + (uVar13 & 0xfffffffffffffff8) + 8) &&
            puVar5 < (undefined8 *)
                     (lVar7 + (((uVar13 & 0xfffffffffffffff8) + uVar17) - (lVar3 + lVar16)) + 8))) {
LAB_10bcd48d4:
          do {
            *puVar11 = *puVar6;
            puVar9 = puVar6 + 1;
            *puVar6 = 0;
            puVar6 = puVar9;
            puVar11 = puVar11 + 1;
          } while (puVar9 != puVar14);
        }
        else {
          uVar17 = (uVar13 >> 3) + 1;
          uVar12 = uVar17 & 0x3ffffffffffffffc;
          puVar6 = (undefined8 *)(lVar7 + lVar15 + (lVar3 >> 3) * -8 + 0x10);
          puVar11 = puVar5 + 2;
          uVar13 = uVar12;
          do {
            uVar21 = puVar11[-2];
            uVar23 = puVar11[1];
            uVar22 = *puVar11;
            puVar6[-1] = puVar11[-1];
            puVar6[-2] = uVar21;
            puVar6[1] = uVar23;
            *puVar6 = uVar22;
            puVar11[-1] = 0;
            puVar11[-2] = 0;
            puVar11[1] = 0;
            *puVar11 = 0;
            puVar6 = puVar6 + 4;
            puVar11 = puVar11 + 4;
            uVar13 = uVar13 - 4;
          } while (uVar13 != 0);
          puVar6 = puVar5 + uVar12;
          puVar11 = puVar19 + uVar12;
          if (uVar17 != uVar12) goto LAB_10bcd48d4;
        }
        do {
          __ZNSt3__16threadD1Ev();
          puVar5 = puVar5 + 1;
        } while (puVar5 != puVar14);
        puVar5 = *(undefined8 **)(lVar20 + 0x50);
      }
      *(undefined8 **)(lVar20 + 0x50) = puVar19;
      *(long *)(lVar20 + 0x58) = lVar1 + 8;
      *(long *)(lVar20 + 0x60) = lVar2;
      if (puVar5 != (undefined8 *)0x0) {
        __ZdlPv();
      }
      *(long *)(lVar20 + 0x58) = lVar1 + 8;
      lVar18 = lVar18 + 1;
    } while (lVar18 != param_2);
  }
  return;
}



/* Entry: 10bcd49f0; end: 10bcd4ea3;  */

void FUN_10bcd49f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  pbVar1 = (byte *)(param_1 + 8);
  do {
    bVar3 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar3 & 1) != 0));
  if (*(char *)(param_1 + 0x68) == '\x01') {
    puVar21 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
    *puVar21 = &PTR_FUN_110d9abf0;
    ___cxa_throw(puVar21,&PTR_DAT_110d9abb0,FUN_10bcd4ea4);
    goto LAB_10bcd4e50;
  }
  puVar21 = *(undefined8 **)(param_1 + 0x28);
  puVar13 = *(undefined8 **)(param_1 + 0x30);
  puVar14 = (undefined8 *)((long)puVar13 - (long)puVar21);
  uVar12 = 0;
  if (puVar14 != (undefined8 *)0x0) {
    uVar12 = ((long)puVar13 - (long)puVar21) * 0x20 - 1;
  }
  uVar17 = *(ulong *)(param_1 + 0x40);
  lVar10 = *(long *)(param_1 + 0x48);
  uVar16 = lVar10 + uVar17;
  if (uVar12 != uVar16) goto LAB_10bcd4b54;
  if (uVar17 < 0x100) {
    puVar20 = *(undefined8 **)(param_1 + 0x38);
    puVar19 = *(undefined8 **)(param_1 + 0x20);
    if (puVar14 < (undefined8 *)((long)puVar20 - (long)puVar19)) {
      uVar11 = 0x1000;
      __Znwm();
      if (puVar20 == puVar13) {
        if (puVar21 == puVar19) {
          uVar12 = (long)puVar20 - (long)puVar21 >> 2;
          if (puVar13 == puVar21) {
            uVar12 = 1;
          }
          if (uVar12 >> 0x3d != 0) goto LAB_10bcd4e4c;
          lVar10 = uVar12 << 3;
          __Znwm();
          uVar16 = uVar12 + 3 >> 2;
          puVar20 = (undefined8 *)(lVar10 + uVar16 * 8);
          puVar9 = puVar20;
          if ((long)puVar13 - (long)puVar21 != 0) {
            puVar9 = (undefined8 *)((long)puVar20 + (long)puVar14);
            uVar17 = ((long)puVar13 - (long)puVar21) - 8;
            puVar13 = puVar20;
            puVar14 = puVar21;
            if ((0x37 < uVar17) &&
               (lVar2 = uVar16 * 8 + lVar10, 0x1f < (ulong)(lVar2 - (long)puVar21))) {
              uVar16 = (uVar17 >> 3) + 1;
              uVar18 = uVar16 & 0x3ffffffffffffffc;
              puVar13 = puVar21 + 2;
              puVar14 = (undefined8 *)(lVar2 + 0x10);
              uVar17 = uVar18;
              do {
                uVar22 = puVar13[-2];
                uVar24 = puVar13[1];
                uVar23 = *puVar13;
                puVar14[-1] = puVar13[-1];
                puVar14[-2] = uVar22;
                puVar14[1] = uVar24;
                *puVar14 = uVar23;
                puVar13 = puVar13 + 4;
                puVar14 = puVar14 + 4;
                uVar17 = uVar17 - 4;
              } while (uVar17 != 0);
              puVar13 = puVar20 + uVar18;
              puVar14 = puVar21 + uVar18;
              if (uVar16 == uVar18) goto LAB_10bcd4de0;
            }
            do {
              puVar8 = puVar13 + 1;
              *puVar13 = *puVar14;
              puVar13 = puVar8;
              puVar14 = puVar14 + 1;
            } while (puVar8 != puVar9);
          }
LAB_10bcd4de0:
          *(long *)(param_1 + 0x20) = lVar10;
          *(undefined8 **)(param_1 + 0x28) = puVar20;
          *(undefined8 **)(param_1 + 0x30) = puVar9;
          *(ulong *)(param_1 + 0x38) = lVar10 + uVar12 * 8;
          bVar5 = puVar21 != (undefined8 *)0x0;
          puVar21 = puVar20;
          if (bVar5) {
            __ZdlPv(puVar19);
            puVar21 = *(undefined8 **)(param_1 + 0x28);
          }
        }
        puVar21[-1] = uVar11;
        goto LAB_10bcd4a7c;
      }
      *puVar13 = uVar11;
      *(undefined8 **)(param_1 + 0x30) = puVar13 + 1;
    }
    else {
      uVar12 = (long)puVar20 - (long)puVar19 >> 2;
      if (puVar20 == puVar19) {
        uVar12 = 1;
      }
      if (uVar12 >> 0x3d != 0) {
LAB_10bcd4e4c:
        func_0x000104bd35f4();
LAB_10bcd4e50:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10bcd4e54);
        (*pcVar7)();
      }
      puVar9 = (undefined8 *)(uVar12 * 8);
      __Znwm();
      uVar11 = 0x1000;
      __Znwm();
      puVar20 = (undefined8 *)((long)puVar9 + (long)puVar14);
      puVar19 = puVar9 + uVar12;
      if (puVar14 == (undefined8 *)(uVar12 * 8)) {
        if (puVar13 != puVar21) {
          lVar10 = ((long)puVar14 >> 3) + 1;
          puVar20 = puVar20 + -((ulong)(lVar10 - (lVar10 >> 0x3f)) >> 1);
          goto LAB_10bcd4b1c;
        }
        puVar8 = (undefined8 *)0x8;
        __Znwm();
        puVar19 = puVar8 + 1;
        __ZdlPv(puVar9);
        puVar21 = *(undefined8 **)(param_1 + 0x28);
        puVar13 = *(undefined8 **)(param_1 + 0x30);
        puVar14 = puVar8 + 1;
        *puVar8 = uVar11;
        puVar20 = puVar8;
        if (puVar13 != puVar21) goto LAB_10bcd4bf8;
      }
      else {
LAB_10bcd4b1c:
        puVar14 = puVar20 + 1;
        *puVar20 = uVar11;
        puVar8 = puVar9;
        if (puVar13 != puVar21) {
LAB_10bcd4bf8:
          do {
            puVar21 = puVar20;
            if (puVar20 == puVar8) {
              if (puVar14 < puVar19) {
                lVar10 = ((long)puVar19 - (long)puVar14 >> 3) + 1;
                lVar2 = (long)puVar14 - (long)puVar8;
                lVar6 = (long)puVar14 - (long)puVar8;
                puVar14 = puVar14 + ((ulong)(lVar10 - (lVar10 >> 0x3f)) >> 1);
                puVar21 = (undefined8 *)((long)puVar14 - lVar2);
                if (lVar6 != 0) {
                  _memmove(puVar21,puVar20,lVar6);
                }
              }
              else {
                uVar12 = (long)puVar19 - (long)puVar8 >> 2;
                if ((long)puVar19 - (long)puVar8 == 0) {
                  uVar12 = 1;
                }
                if (uVar12 >> 0x3d != 0) {
                  func_0x000104bd35f4();
                  goto LAB_10bcd4e50;
                }
                puVar9 = (undefined8 *)(uVar12 << 3);
                __Znwm();
                uVar16 = uVar12 + 3 >> 2;
                puVar21 = puVar9 + uVar16;
                lVar10 = (long)puVar14 - (long)puVar8;
                puVar14 = puVar21;
                if (lVar10 != 0) {
                  puVar14 = (undefined8 *)((long)puVar21 + lVar10);
                  puVar19 = puVar21;
                  if ((0x17 < lVar10 - 8U) && (0x1f < (long)puVar9 + (uVar16 * 8 - (long)puVar20)))
                  {
                    uVar17 = (lVar10 - 8U >> 3) + 1;
                    uVar18 = uVar17 & 0x3ffffffffffffffc;
                    puVar19 = puVar20 + 2;
                    puVar15 = puVar9 + uVar16 + 2;
                    uVar16 = uVar18;
                    do {
                      uVar11 = puVar19[-2];
                      uVar23 = puVar19[1];
                      uVar22 = *puVar19;
                      puVar15[-1] = puVar19[-1];
                      puVar15[-2] = uVar11;
                      puVar15[1] = uVar23;
                      *puVar15 = uVar22;
                      puVar19 = puVar19 + 4;
                      puVar15 = puVar15 + 4;
                      uVar16 = uVar16 - 4;
                    } while (uVar16 != 0);
                    puVar19 = puVar21 + uVar18;
                    puVar20 = puVar20 + uVar18;
                    if (uVar17 == uVar18) goto LAB_10bcd4cb4;
                  }
                  do {
                    puVar15 = puVar19 + 1;
                    *puVar19 = *puVar20;
                    puVar19 = puVar15;
                    puVar20 = puVar20 + 1;
                  } while (puVar15 != puVar14);
                }
LAB_10bcd4cb4:
                puVar19 = puVar9 + uVar12;
                __ZdlPv(puVar8);
                puVar8 = puVar9;
              }
            }
            puVar13 = puVar13 + -1;
            puVar20 = puVar21 + -1;
            *puVar20 = *puVar13;
          } while (puVar13 != *(undefined8 **)(param_1 + 0x28));
        }
      }
      lVar10 = *(long *)(param_1 + 0x20);
      *(undefined8 **)(param_1 + 0x20) = puVar8;
      *(undefined8 **)(param_1 + 0x28) = puVar20;
      *(undefined8 **)(param_1 + 0x30) = puVar14;
      *(undefined8 **)(param_1 + 0x38) = puVar19;
      if (lVar10 != 0) {
        __ZdlPv();
      }
    }
  }
  else {
    *(ulong *)(param_1 + 0x40) = uVar17 - 0x100;
    uVar11 = *puVar21;
    puVar21 = puVar21 + 1;
LAB_10bcd4a7c:
    *(undefined8 **)(param_1 + 0x28) = puVar21;
    FUN_10bcd5334(param_1 + 0x20,uVar11);
  }
  puVar21 = *(undefined8 **)(param_1 + 0x28);
  lVar10 = *(long *)(param_1 + 0x48);
  uVar16 = lVar10 + *(long *)(param_1 + 0x40);
LAB_10bcd4b54:
  puVar21 = (undefined8 *)(puVar21[uVar16 >> 8] + (uVar16 & 0xff) * 0x10);
  *puVar21 = param_2;
  puVar21[1] = param_3;
  *(long *)(param_1 + 0x48) = lVar10 + 1;
  *(undefined1 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbfa94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__semaphore_signal_11034ca98)(*(undefined4 *)(param_1 + 0x18));
  return;
}



/* Entry: 10bcd4ea4; end: 10bcd4ea7;  */

void FUN_10bcd4ea4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10bcd4ea8; end: 10bcd4f6b;  */

long * FUN_10bcd4ea8(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x80;
  }
  else {
    if (uVar2 != 2) goto LAB_10bcd4f18;
    lVar3 = 0x100;
  }
  param_1[4] = lVar3;
LAB_10bcd4f18:
  if (puVar4 != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      __ZdlPv(*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != puVar1);
    lVar3 = param_1[1] - param_1[2];
    if (lVar3 != 0) {
      param_1[2] = param_1[2] + (lVar3 + 7U & 0xfffffffffffffff8);
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bcd4f6c; end: 10bcd5037;  */

void FUN_10bcd4f6c(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = 8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  puVar3 = (undefined8 *)0x18;
  __Znwm();
  *puVar3 = uVar2;
  uVar2 = *param_2;
  puVar3[2] = param_2[1];
  puVar3[1] = uVar2;
  _pthread_create(param_1,0,FUN_10bcd5038,puVar3);
  if ((int)param_1 == 0) {
    return;
  }
  __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bcd4ff4);
  (*pcVar1)();
}



/* Entry: 10bcd5038; end: 10bcd5297;  */

undefined8 FUN_10bcd5038(long *param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 ****ppppuVar3;
  byte bVar4;
  code *pcVar5;
  undefined *puVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  long alStack_88 [2];
  char cStack_71;
  undefined8 ***pppuStack_70;
  long lStack_68;
  long lStack_60;
  
  plVar9 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  lVar11 = *param_1;
  *param_1 = 0;
  _pthread_setspecific(*plVar9,lVar11);
  puVar6 = (undefined *)param_1[2];
  __ZNSt3__19to_stringEm(alStack_88,param_1[1]);
  uVar12 = *(ulong *)(puVar6 + 0x78);
  puVar1 = *(undefined8 **)(puVar6 + 0x70);
  if (-1 < (char)puVar6[0x87]) {
    uVar12 = (ulong)(byte)puVar6[0x87];
    puVar1 = (undefined8 *)(puVar6 + 0x70);
  }
  plVar9 = alStack_88;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar9,0,puVar1,uVar12);
  lStack_68 = plVar9[1];
  pppuStack_70 = (undefined8 ***)*plVar9;
  lStack_60 = plVar9[2];
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = 0;
  ppppuVar3 = (undefined8 ****)pppuStack_70;
  if (-1 < lStack_60) {
    ppppuVar3 = &pppuStack_70;
  }
  _pthread_setname_np(ppppuVar3);
  if (lStack_60 < 0) {
    __ZdlPv(pppuStack_70);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(alStack_88[0]);
  }
  ppuVar10 = &PTR___tlv_bootstrap_11340e278;
  (*(code *)PTR___tlv_bootstrap_11340e278)();
  puVar13 = *ppuVar10;
  *ppuVar10 = puVar6;
  pbVar2 = puVar6 + 8;
  do {
    _semaphore_wait(*(undefined4 *)(puVar6 + 0x18));
    do {
      bVar4 = *pbVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
      if (bVar8) {
        *pbVar2 = 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while ((cVar7 != '\0') || ((bVar4 & 1) != 0));
    lVar11 = *(long *)(puVar6 + 0x48);
    if (lVar11 == 0) {
      if ((puVar6[0x68] & 1) != 0) {
        *pbVar2 = 0;
        *ppuVar10 = puVar13;
        lVar11 = *param_1;
        *param_1 = 0;
        if (lVar11 != 0) {
          __ZNSt3__115__thread_structD1Ev();
          __ZdlPv();
        }
        __ZdlPv(param_1);
        return 0;
      }
      lVar11 = *(long *)(puVar6 + 0x48);
    }
    uVar12 = *(ulong *)(puVar6 + 0x40);
    puVar1 = (undefined8 *)((*(undefined8 **)(puVar6 + 0x28))[uVar12 >> 8] + (uVar12 & 0xff) * 0x10)
    ;
    pcVar5 = (code *)*puVar1;
    puVar1 = (undefined8 *)puVar1[1];
    *(ulong *)(puVar6 + 0x40) = uVar12 + 1;
    *(long *)(puVar6 + 0x48) = lVar11 + -1;
    if (0x1ff < uVar12 + 1) {
      __ZdlPv(**(undefined8 **)(puVar6 + 0x28));
      *(long *)(puVar6 + 0x28) = *(long *)(puVar6 + 0x28) + 8;
      *(long *)(puVar6 + 0x40) = *(long *)(puVar6 + 0x40) + -0x100;
    }
    *pbVar2 = 0;
    if (pcVar5 == (code *)0x0) {
      (*(code *)*puVar1)(puVar1);
    }
    else {
      (*pcVar5)(puVar1);
    }
  } while( true );
}



/* Entry: 10bcd5298; end: 10bcd52df;  */

undefined8 * FUN_10bcd5298(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  *param_1 = 0;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      __ZNSt3__115__thread_structD1Ev();
      __ZdlPv();
    }
    __ZdlPv(plVar2);
  }
  return param_1;
}



/* Entry: 10bcd52e0; end: 10bcd52f3;  */

void FUN_10bcd52e0(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcd52f4; end: 10bcd5303;  */

void FUN_10bcd52f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9ac18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcd5304; end: 10bcd5323;  */

void FUN_10bcd5304(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9ac18;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcd5324; end: 10bcd5333;  */

void FUN_10bcd5324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bcd532c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10bcd5334; end: 10bcd54ab;  */

void FUN_10bcd5334(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *extraout_x8;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar14 = (undefined8 *)param_1[2];
  if (puVar14 != (undefined8 *)param_1[3]) goto LAB_10bcd5488;
  puVar12 = (undefined8 *)*param_1;
  puVar13 = (undefined8 *)param_1[1];
  if (puVar12 <= puVar13 && (long)puVar13 - (long)puVar12 != 0) {
    lVar6 = (((long)puVar13 - (long)puVar12 >> 3) + 1) / 2;
    puVar12 = puVar13 + -lVar6;
    lVar3 = (long)puVar14 - (long)puVar13;
    if (lVar3 != 0) {
      _memmove(puVar12,puVar13,lVar3);
      puVar13 = (undefined8 *)param_1[1];
    }
    puVar14 = (undefined8 *)((long)puVar12 + lVar3);
    param_1[1] = (ulong)(puVar13 + -lVar6);
    goto LAB_10bcd5488;
  }
  uVar7 = (long)puVar14 - (long)puVar12 >> 2;
  if ((long)puVar14 - (long)puVar12 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
    func_0x000104bd35f4();
    puVar5 = param_1;
    (**(code **)(*param_1 + 0x28))();
    func_0x000107c27fdc(extraout_x8,puVar5);
    func_0x00010b4d1758(param_1,*extraout_x8,*(int *)(extraout_x8 + 1) - (int)*extraout_x8);
    return;
  }
  uVar4 = uVar7 * 8;
  __Znwm();
  puVar2 = (undefined8 *)(uVar4 + (uVar7 >> 2) * 8);
  lVar3 = (long)puVar14 - (long)puVar13;
  puVar14 = puVar2;
  if (lVar3 != 0) {
    puVar14 = (undefined8 *)((long)puVar2 + lVar3);
    puVar8 = puVar2;
    if ((0x37 < lVar3 - 8U) &&
       (lVar6 = (uVar7 >> 2) * 8 + uVar4, 0x1f < (ulong)(lVar6 - (long)puVar13))) {
      uVar1 = (lVar3 - 8U >> 3) + 1;
      uVar9 = uVar1 & 0x3ffffffffffffffc;
      puVar8 = puVar13 + 2;
      puVar10 = (undefined8 *)(lVar6 + 0x10);
      uVar11 = uVar9;
      do {
        uVar15 = puVar8[-2];
        uVar17 = puVar8[1];
        uVar16 = *puVar8;
        puVar10[-1] = puVar8[-1];
        puVar10[-2] = uVar15;
        puVar10[1] = uVar17;
        *puVar10 = uVar16;
        puVar8 = puVar8 + 4;
        puVar10 = puVar10 + 4;
        uVar11 = uVar11 - 4;
      } while (uVar11 != 0);
      puVar8 = puVar2 + uVar9;
      puVar13 = puVar13 + uVar9;
      if (uVar1 == uVar9) goto LAB_10bcd5470;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *puVar13;
      puVar8 = puVar10;
      puVar13 = puVar13 + 1;
    } while (puVar10 != puVar14);
  }
LAB_10bcd5470:
  *param_1 = uVar4;
  param_1[1] = (ulong)puVar2;
  param_1[2] = (ulong)puVar14;
  param_1[3] = uVar4 + uVar7 * 8;
  if (puVar12 != (undefined8 *)0x0) {
    __ZdlPv(puVar12);
    puVar14 = (undefined8 *)param_1[2];
  }
LAB_10bcd5488:
  *puVar14 = param_2;
  param_1[2] = (ulong)(puVar14 + 1);
  return;
}



/* Entry: 10bcd54ac; end: 10bcd550b;  */

void FUN_10bcd54ac(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x28))();
  func_0x000107c27fdc(param_1,plVar1);
  func_0x00010b4d1758(param_2,*param_1,*(int *)(param_1 + 1) - (int)*param_1);
  return;
}



/* Entry: 10bcd550c; end: 10bcd5603;  */

void FUN_10bcd550c(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined1 *puVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1);
  uVar3 = 0;
  do {
    if (param_3 <= uVar3) {
      return;
    }
    cVar2 = *(char *)(param_2 + uVar3);
    if (cVar2 == '%') {
      uVar4 = uVar3 + 2;
      if (param_3 <= uVar4) {
        cVar2 = '%';
        goto LAB_10bcd556c;
      }
      uStack_53 = *(undefined1 *)(param_2 + 1 + uVar3);
      uStack_52 = *(undefined1 *)(param_2 + uVar4);
      uStack_51 = 0;
      puVar1 = &uStack_53;
      _strtol(puVar1,0,0x10);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1,(int)(char)puVar1);
    }
    else {
      if (cVar2 == '+') {
        cVar2 = ' ';
      }
LAB_10bcd556c:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1,(int)cVar2);
      uVar4 = uVar3;
    }
    uVar3 = uVar4 + 1;
  } while( true );
}



/* Entry: 10bcd5604; end: 10bcd570f;  */

long FUN_10bcd5604(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1;
  func_0x00010bcd5948();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(long *)(param_1 + 8) = lVar1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2[1];
  if (uVar2 != 0) {
    if (0xf < uVar2) {
      uVar2 = 0x10;
    }
    _memmove((undefined8 *)(param_1 + 0x10),*param_2,uVar2);
  }
  uVar2 = param_3[1];
  if (uVar2 != 0) {
    if (0xb < uVar2) {
      uVar2 = 0xc;
    }
    _memmove((undefined8 *)(param_1 + 0x20),*param_3,uVar2);
  }
  return param_1;
}



/* Entry: 10bcd5710; end: 10bcd571b;  */

void FUN_10bcd5710(undefined1 *param_1,long *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  long *plVar4;
  ulong uVar5;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar2 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar2 + -0x50) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x27;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
    *(long *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(ulong *)(puVar2 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    func_0x00010bcd5904();
    if ((int)param_1 == 0) {
      FUN_10bcd59e8();
      func_0x00010bcd59dc();
      plVar4 = param_2;
    }
    else {
      bVar1 = *(byte *)(*(long *)(unaff_x22 + 8) + 2);
      puVar2[-0x2d0] = 0;
      param_1 = puVar2 + -0x2c8;
      plVar4 = (long *)(unaff_x20 + bVar1);
      func_0x000107c27fbc(param_1,plVar4,puVar2 + -0x2d0);
      func_0x00010bcd5958();
      func_0x000107c2b3d0();
      if ((int)param_1 == 0) {
        FUN_10bcd59e8();
        func_0x00010bcd59dc();
      }
      else {
        if (*(long *)(puVar2 + -0x2b0) != 0) {
          func_0x00010bcd59d0();
          *(undefined8 *)(puVar2 + -0x2b0) = 0;
        }
        func_0x00010bcd59c4();
      }
      func_0x00010bcd59a4();
    }
    func_0x00010bcd59ac();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bcd59a4();
    unaff_x19 = param_1;
    __Unwind_Resume();
    *(undefined8 *)(puVar2 + -0x330) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x328) = unaff_x27;
    *(undefined8 *)(puVar2 + -800) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x318) = unaff_x23;
    *(long *)(puVar2 + -0x310) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x308) = unaff_x21;
    *(ulong *)(puVar2 + -0x300) = unaff_x20;
    *(undefined1 **)(puVar2 + -0x2f8) = param_1;
    *(undefined1 **)(puVar2 + -0x2f0) = puVar2 + -0x10;
    *(code **)(puVar2 + -0x2e8) = FUN_10bcd57c8;
    unaff_x29 = puVar2 + -0x2f0;
    puVar3 = puVar2 + -0x5c0;
    func_0x00010bcd5904();
    if ((int)unaff_x19 == 0) {
      FUN_10bcd59e8();
LAB_10bcd5840:
      func_0x00010bcd59dc();
    }
    else {
      uVar5 = (ulong)*(byte *)(*(long *)(unaff_x22 + 8) + 2);
      plVar4 = (long *)(unaff_x20 - uVar5);
      in_ZR = plVar4 == (long *)0x0;
      if (unaff_x20 < uVar5) goto LAB_10bcd5840;
      puVar2[-0x5b0] = 0;
      unaff_x19 = puVar2 + -0x5a8;
      func_0x000107c27fbc(unaff_x19,plVar4,puVar2 + -0x5b0);
      func_0x00010bcd5958();
      func_0x000107c2b3d4();
      if ((int)unaff_x19 == 0) {
        FUN_10bcd59e8();
        func_0x00010bcd59dc();
      }
      else {
        if (*(long *)(puVar2 + -0x590) != 0) {
          func_0x00010bcd59d0();
          *(undefined8 *)(puVar2 + -0x590) = 0;
        }
        func_0x00010bcd59c4();
      }
      func_0x00010bcd59a4();
    }
    func_0x00010bcd59ac();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bcd59a4();
    unaff_x30 = 0x10bcd5884;
    param_1 = unaff_x19;
    __Unwind_Resume();
    in_ZR = *(char *)((long)plVar4 + 0x17) == '\0';
    puVar2 = puVar2 + -0x5c0;
    param_2 = (long *)*plVar4;
    if (-1 < *(char *)((long)plVar4 + 0x17)) {
      puVar2 = puVar3;
      param_2 = plVar4;
    }
  } while( true );
}



/* Entry: 10bcd571c; end: 10bcd57c7;  */

void FUN_10bcd571c(undefined1 *param_1,long *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  long *plVar4;
  ulong uVar5;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar2 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar2 + -0x50) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x27;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
    *(long *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(ulong *)(puVar2 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    func_0x00010bcd5904();
    if ((int)param_1 == 0) {
      FUN_10bcd59e8();
      func_0x00010bcd59dc();
      plVar4 = param_2;
    }
    else {
      bVar1 = *(byte *)(*(long *)(unaff_x22 + 8) + 2);
      puVar2[-0x2d0] = 0;
      param_1 = puVar2 + -0x2c8;
      plVar4 = (long *)(unaff_x20 + bVar1);
      func_0x000107c27fbc(param_1,plVar4,puVar2 + -0x2d0);
      func_0x00010bcd5958();
      func_0x000107c2b3d0();
      if ((int)param_1 == 0) {
        FUN_10bcd59e8();
        func_0x00010bcd59dc();
      }
      else {
        if (*(long *)(puVar2 + -0x2b0) != 0) {
          func_0x00010bcd59d0();
          *(undefined8 *)(puVar2 + -0x2b0) = 0;
        }
        func_0x00010bcd59c4();
      }
      func_0x00010bcd59a4();
    }
    func_0x00010bcd59ac();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bcd59a4();
    unaff_x19 = param_1;
    __Unwind_Resume();
    *(undefined8 *)(puVar2 + -0x330) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x328) = unaff_x27;
    *(undefined8 *)(puVar2 + -800) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x318) = unaff_x23;
    *(long *)(puVar2 + -0x310) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x308) = unaff_x21;
    *(ulong *)(puVar2 + -0x300) = unaff_x20;
    *(undefined1 **)(puVar2 + -0x2f8) = param_1;
    *(undefined1 **)(puVar2 + -0x2f0) = puVar2 + -0x10;
    *(code **)(puVar2 + -0x2e8) = FUN_10bcd57c8;
    unaff_x29 = puVar2 + -0x2f0;
    puVar3 = puVar2 + -0x5c0;
    func_0x00010bcd5904();
    if ((int)unaff_x19 == 0) {
      FUN_10bcd59e8();
LAB_10bcd5840:
      func_0x00010bcd59dc();
    }
    else {
      uVar5 = (ulong)*(byte *)(*(long *)(unaff_x22 + 8) + 2);
      plVar4 = (long *)(unaff_x20 - uVar5);
      in_ZR = plVar4 == (long *)0x0;
      if (unaff_x20 < uVar5) goto LAB_10bcd5840;
      puVar2[-0x5b0] = 0;
      unaff_x19 = puVar2 + -0x5a8;
      func_0x000107c27fbc(unaff_x19,plVar4,puVar2 + -0x5b0);
      func_0x00010bcd5958();
      func_0x000107c2b3d4();
      if ((int)unaff_x19 == 0) {
        FUN_10bcd59e8();
        func_0x00010bcd59dc();
      }
      else {
        if (*(long *)(puVar2 + -0x590) != 0) {
          func_0x00010bcd59d0();
          *(undefined8 *)(puVar2 + -0x590) = 0;
        }
        func_0x00010bcd59c4();
      }
      func_0x00010bcd59a4();
    }
    func_0x00010bcd59ac();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bcd59a4();
    unaff_x30 = 0x10bcd5884;
    param_1 = unaff_x19;
    __Unwind_Resume();
    in_ZR = *(char *)((long)plVar4 + 0x17) == '\0';
    puVar2 = puVar2 + -0x5c0;
    param_2 = (long *)*plVar4;
    if (-1 < *(char *)((long)plVar4 + 0x17)) {
      puVar2 = puVar3;
      param_2 = plVar4;
    }
  } while( true );
}



/* Entry: 10bcd57c8; end: 10bcd57d3;  */

void FUN_10bcd57c8(undefined1 *param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  undefined1 in_ZR;
  ulong uVar3;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010bcd5904();
    if ((int)param_1 == 0) {
      FUN_10bcd59e8();
LAB_10bcd5840:
      func_0x00010bcd59dc();
    }
    else {
      uVar3 = (ulong)*(byte *)(*(long *)(unaff_x22 + 8) + 2);
      param_2 = (long *)(unaff_x20 - uVar3);
      in_ZR = param_2 == (long *)0x0;
      if (unaff_x20 < uVar3) goto LAB_10bcd5840;
      *(undefined1 *)((long)register0x00000008 + -0x2d0) = 0;
      param_1 = (undefined1 *)((long)register0x00000008 + -0x2c8);
      func_0x000107c27fbc(param_1,param_2,(undefined1 *)((long)register0x00000008 + -0x2d0));
      func_0x00010bcd5958();
      func_0x000107c2b3d4();
      if ((int)param_1 == 0) {
        FUN_10bcd59e8();
        func_0x00010bcd59dc();
      }
      else {
        if (*(long *)((long)register0x00000008 + -0x2b0) != 0) {
          func_0x00010bcd59d0();
          *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0;
        }
        func_0x00010bcd59c4();
      }
      func_0x00010bcd59a4();
    }
    func_0x00010bcd59ac();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bcd59a4();
    unaff_x19 = param_1;
    __Unwind_Resume();
    in_ZR = *(char *)((long)param_2 + 0x17) == '\0';
    plVar2 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    *(undefined8 *)((long)register0x00000008 + -0x330) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x328) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -800) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x318) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x310) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x308) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x300) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x2f8) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x2f0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0x10bcd5884;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x2f0);
    func_0x00010bcd5904();
    if ((int)unaff_x19 == 0) {
      FUN_10bcd59e8();
      func_0x00010bcd59dc();
    }
    else {
      bVar1 = *(byte *)(*(long *)(unaff_x22 + 8) + 2);
      *(undefined1 *)((long)register0x00000008 + -0x5b0) = 0;
      unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x5a8);
      param_2 = (long *)(unaff_x20 + bVar1);
      func_0x000107c27fbc(unaff_x19,param_2,(undefined1 *)((long)register0x00000008 + -0x5b0));
      func_0x00010bcd5958();
      func_0x000107c2b3d0();
      if ((int)unaff_x19 == 0) {
        FUN_10bcd59e8();
        func_0x00010bcd59dc();
      }
      else {
        if (*(long *)((long)register0x00000008 + -0x590) != 0) {
          func_0x00010bcd59d0();
          *(undefined8 *)((long)register0x00000008 + -0x590) = 0;
        }
        func_0x00010bcd59c4();
      }
      func_0x00010bcd59a4();
    }
    func_0x00010bcd59ac();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bcd59a4();
    unaff_x30 = FUN_10bcd57c8;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x5c0);
  } while( true );
}



/* Entry: 10bcd57d4; end: 10bcd5883;  */

void FUN_10bcd57d4(undefined1 *param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  undefined1 in_ZR;
  ulong uVar3;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010bcd5904();
    if ((int)param_1 == 0) {
      FUN_10bcd59e8();
LAB_10bcd5840:
      func_0x00010bcd59dc();
    }
    else {
      uVar3 = (ulong)*(byte *)(*(long *)(unaff_x22 + 8) + 2);
      param_2 = (long *)(unaff_x20 - uVar3);
      in_ZR = param_2 == (long *)0x0;
      if (unaff_x20 < uVar3) goto LAB_10bcd5840;
      *(undefined1 *)((long)register0x00000008 + -0x2d0) = 0;
      param_1 = (undefined1 *)((long)register0x00000008 + -0x2c8);
      func_0x000107c27fbc(param_1,param_2,(undefined1 *)((long)register0x00000008 + -0x2d0));
      func_0x00010bcd5958();
      func_0x000107c2b3d4();
      if ((int)param_1 == 0) {
        FUN_10bcd59e8();
        func_0x00010bcd59dc();
      }
      else {
        if (*(long *)((long)register0x00000008 + -0x2b0) != 0) {
          func_0x00010bcd59d0();
          *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0;
        }
        func_0x00010bcd59c4();
      }
      func_0x00010bcd59a4();
    }
    func_0x00010bcd59ac();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bcd59a4();
    unaff_x19 = param_1;
    __Unwind_Resume();
    in_ZR = *(char *)((long)param_2 + 0x17) == '\0';
    plVar2 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    *(undefined8 *)((long)register0x00000008 + -0x330) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x328) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -800) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x318) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x310) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x308) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x300) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x2f8) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x2f0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0x10bcd5884;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x2f0);
    func_0x00010bcd5904();
    if ((int)unaff_x19 == 0) {
      FUN_10bcd59e8();
      func_0x00010bcd59dc();
    }
    else {
      bVar1 = *(byte *)(*(long *)(unaff_x22 + 8) + 2);
      *(undefined1 *)((long)register0x00000008 + -0x5b0) = 0;
      unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x5a8);
      param_2 = (long *)(unaff_x20 + bVar1);
      func_0x000107c27fbc(unaff_x19,param_2,(undefined1 *)((long)register0x00000008 + -0x5b0));
      func_0x00010bcd5958();
      func_0x000107c2b3d0();
      if ((int)unaff_x19 == 0) {
        FUN_10bcd59e8();
        func_0x00010bcd59dc();
      }
      else {
        if (*(long *)((long)register0x00000008 + -0x590) != 0) {
          func_0x00010bcd59d0();
          *(undefined8 *)((long)register0x00000008 + -0x590) = 0;
        }
        func_0x00010bcd59c4();
      }
      func_0x00010bcd59a4();
    }
    func_0x00010bcd59ac();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bcd59a4();
    unaff_x30 = FUN_10bcd57c8;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x5c0);
  } while( true );
}



/* Entry: 10bcd5884; end: 10bcd59e7;  */

void FUN_10bcd5884(undefined1 *param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    uVar3 = *(char *)((long)param_2 + 0x17) == '\0';
    plVar2 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010bcd5904();
    if ((int)param_1 == 0) {
      FUN_10bcd59e8();
      func_0x00010bcd59dc();
    }
    else {
      bVar1 = *(byte *)(*(long *)(unaff_x22 + 8) + 2);
      *(undefined1 *)((long)register0x00000008 + -0x2d0) = 0;
      param_1 = (undefined1 *)((long)register0x00000008 + -0x2c8);
      param_2 = (long *)(unaff_x20 + bVar1);
      func_0x000107c27fbc(param_1,param_2,(undefined1 *)((long)register0x00000008 + -0x2d0));
      func_0x00010bcd5958();
      func_0x000107c2b3d0();
      if ((int)param_1 == 0) {
        FUN_10bcd59e8();
        func_0x00010bcd59dc();
      }
      else {
        if (*(long *)((long)register0x00000008 + -0x2b0) != 0) {
          func_0x00010bcd59d0();
          *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0;
        }
        func_0x00010bcd59c4();
      }
      func_0x00010bcd59a4();
    }
    func_0x00010bcd59ac();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bcd59a4();
    unaff_x19 = param_1;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x330) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x328) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -800) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x318) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x310) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x308) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x300) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x2f8) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x2f0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x2e8) = FUN_10bcd57c8;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x2f0);
    func_0x00010bcd5904();
    if ((int)unaff_x19 == 0) {
      FUN_10bcd59e8();
LAB_10bcd5840:
      func_0x00010bcd59dc();
    }
    else {
      uVar4 = (ulong)*(byte *)(*(long *)(unaff_x22 + 8) + 2);
      param_2 = (long *)(unaff_x20 - uVar4);
      uVar3 = param_2 == (long *)0x0;
      if (unaff_x20 < uVar4) goto LAB_10bcd5840;
      *(undefined1 *)((long)register0x00000008 + -0x5b0) = 0;
      unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x5a8);
      func_0x000107c27fbc(unaff_x19,param_2,(undefined1 *)((long)register0x00000008 + -0x5b0));
      func_0x00010bcd5958();
      func_0x000107c2b3d4();
      if ((int)unaff_x19 == 0) {
        FUN_10bcd59e8();
        func_0x00010bcd59dc();
      }
      else {
        if (*(long *)((long)register0x00000008 + -0x590) != 0) {
          func_0x00010bcd59d0();
          *(undefined8 *)((long)register0x00000008 + -0x590) = 0;
        }
        func_0x00010bcd59c4();
      }
      func_0x00010bcd59a4();
    }
    func_0x00010bcd59ac();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bcd59a4();
    unaff_x30 = FUN_10bcd5884;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x5c0);
  } while( true );
}



/* Entry: 10bcd59e8; end: 10bcd59ff;  */

void FUN_10bcd59e8(int param_1)

{
  do {
    func_0x00010ae29af8();
  } while (param_1 != 0);
  return;
}



/* Entry: 10bcd5a00; end: 10bcd5abf;  */

long * FUN_10bcd5a00(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 unaff_x19;
  long unaff_x20;
  
  if (0xbffffffffffffffc < param_3 - 1U) {
    puVar3 = &UNK_10f82fd61;
    func_0x00010002b82c(param_1,&UNK_10f82fd61);
    func_0x000107c613d0(puVar3);
    func_0x000107c60c50(unaff_x20,unaff_x19,puVar3);
    return (long *)unaff_x20;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc
            (param_1,(param_3 + 2U) / 3 << 2 | 1,0);
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  func_0x000107c2b1c4(plVar1,param_2,param_3);
  uVar2 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  func_0x000107c281b8(param_1,uVar2 - 1);
  return param_1;
}



/* Entry: 10bcd5ac0; end: 10bcd5aef;  */

long * FUN_10bcd5ac0(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 unaff_x19;
  long unaff_x20;
  
  lVar3 = *param_2;
  lVar5 = param_2[1] - lVar3;
  if (0xbffffffffffffffc < lVar5 - 1U) {
    puVar4 = &UNK_10f82fd61;
    func_0x00010002b82c(param_1,&UNK_10f82fd61);
    func_0x000107c613d0(puVar4);
    func_0x000107c60c50(unaff_x20,unaff_x19,puVar4);
    return (long *)unaff_x20;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc
            (param_1,(lVar5 + 2U) / 3 << 2 | 1,0);
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  func_0x000107c2b1c4(plVar1,lVar3,lVar5);
  uVar2 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  func_0x000107c281b8(param_1,uVar2 - 1);
  return param_1;
}



/* Entry: 10bcd5af0; end: 10bcd5bdf;  */

undefined1 * FUN_10bcd5af0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x10;
  undefined1 *extraout_x10_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  undefined8 *unaff_x19;
  undefined1 *puVar3;
  undefined8 unaff_x22;
  undefined1 auStack_48 [8];
  ulong uStack_40;
  byte bStack_31;
  
  func_0x000107c3a5e4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(auStack_48,param_2 + 4)
  ;
  func_0x000107c3a5d4();
  func_0x000107c3a5c8();
  uVar1 = extraout_x11;
  uVar2 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
    uVar2 = unaff_x22;
  }
  func_0x000107c3a5cc(uVar1,uVar2);
  func_0x000107c3a5c8();
  uVar1 = extraout_x11_00;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8_00;
  }
  func_0x000107c3a5d0(uVar1);
  func_0x000107c3a5c8();
  uVar1 = extraout_x11_01;
  puVar3 = extraout_x10_00;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8_01;
    puVar3 = auStack_48;
  }
  func_0x000107c3a5cc(uVar1,puVar3);
  func_0x000107c3a5c8();
  uVar1 = extraout_x11_02;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8_02;
  }
  func_0x000107c3a5d0(uVar1);
  puVar3 = auStack_48;
  FUN_10bcd5be0(puVar3);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
  }
  if (uStack_40 == 0) {
    unaff_x19[1] = *unaff_x19;
    puVar3 = (undefined1 *)0x1;
  }
  else {
    func_0x000107c3a5ec();
  }
  func_0x000107c3a5e0();
  return puVar3;
}



/* Entry: 10bcd5be0; end: 10bcd5c5f;  */

void FUN_10bcd5be0(char *param_1)

{
  char *pcVar1;
  ulong uVar2;
  char cVar3;
  
  uVar2 = *(ulong *)(param_1 + 8);
  pcVar1 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    uVar2 = (ulong)(byte)param_1[0x17];
    pcVar1 = param_1;
  }
  do {
    if (uVar2 == 0) {
      if (param_1[0x17] < '\0') {
        uVar2 = *(ulong *)(param_1 + 8) & 3;
        if (uVar2 == 0) {
          return;
        }
      }
      else {
        uVar2 = (ulong)(byte)param_1[0x17] & 3;
        if ((int)uVar2 == 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc_1103462a8)
                (param_1,4 - uVar2,0x3d);
      return;
    }
    if (*pcVar1 == '-') {
      cVar3 = '+';
LAB_10bcd5c1c:
      *pcVar1 = cVar3;
    }
    else if (*pcVar1 == '_') {
      cVar3 = '/';
      goto LAB_10bcd5c1c;
    }
    uVar2 = uVar2 - 1;
    pcVar1 = pcVar1 + 1;
  } while( true );
}



/* Entry: 10bcd5c60; end: 10bcd5c87;  */

void FUN_10bcd5c60(void)

{
  func_0x00010bcd5d58();
  FUN_10bcd5be0();
  return;
}



/* Entry: 10bcd5c88; end: 10bcd5caf;  */

void FUN_10bcd5c88(void)

{
  func_0x00010bcd5d58();
  FUN_10bcd5cb0();
  return;
}



/* Entry: 10bcd5cb0; end: 10bcd5d43;  */

void FUN_10bcd5cb0(char *param_1)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  
  pcVar3 = param_1;
  func_0x000107c27fb0(param_1,0x3d,0xffffffffffffffff);
  if (pcVar3 == (char *)0xffffffffffffffff) {
    if (param_1[0x17] < '\0') {
      **(undefined1 **)param_1 = 0;
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      return;
    }
    *param_1 = '\0';
    param_1[0x17] = '\0';
    return;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  pcVar2 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    uVar1 = (ulong)(byte)param_1[0x17];
    pcVar2 = param_1;
  }
  do {
    if (uVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbcdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc_1103462e8)
                (param_1,pcVar3 + 1,0);
      return;
    }
    if (*pcVar2 == '+') {
      cVar4 = '-';
LAB_10bcd5d10:
      *pcVar2 = cVar4;
    }
    else if (*pcVar2 == '/') {
      cVar4 = '_';
      goto LAB_10bcd5d10;
    }
    uVar1 = uVar1 - 1;
    pcVar2 = pcVar2 + 1;
  } while( true );
}



/* Entry: 10bcd5d44; end: 10bcd5d83;  */

void FUN_10bcd5d44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10bcd5d84; end: 10bcd5d97;  */

void FUN_10bcd5d84(void)

{
  func_0x000107c316b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcd5d98; end: 10bcd5dff;  */

long FUN_10bcd5d98(long param_1)

{
  func_0x000107c278a8(param_1 + 0x60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  return param_1;
}



/* Entry: 10bcd5e00; end: 10bcd5e23;  */

bool FUN_10bcd5e00(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_20;
  long lStack_18;
  
  lVar4 = (long)*(char *)(param_1 + 0x1f);
  if (lVar4 < 0) {
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  else {
    lVar3 = param_1 + 8;
  }
  iVar1 = (int)&uStack_20;
  if (param_3 == lVar4) {
    uStack_20 = param_2;
    lStack_18 = param_3;
    func_0x000100067218(&uStack_20,lVar3,lVar4);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10bcd5e24; end: 10bcd5e67;  */

ulong FUN_10bcd5e24(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bcd5dcc();
  if ((uVar1 & 1) == 0) {
    FUN_10bcd5e68(param_1,param_4,param_5);
  }
  return uVar1;
}



/* Entry: 10bcd5e68; end: 10bcd5e7b;  */

void FUN_10bcd5e68(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  long *plVar5;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined4 *)(*param_1 + 0x20);
  uVar3 = *(undefined4 *)(*param_1 + 0x24);
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uStack_50 = param_2;
    uStack_48 = param_3;
    FUN_10bcd65f8(auStack_68,&uStack_50);
    func_0x00010bcdd620();
    uVar1 = extraout_x11;
    puVar4 = extraout_x10;
    if (in_NG == in_OV) {
      uVar1 = extraout_x8;
      puVar4 = auStack_68;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,uVar2,uVar3,puVar4,uVar1);
    func_0x00010bcdd044();
  }
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* Entry: 10bcd5e7c; end: 10bcd5ea7;  */

void FUN_10bcd5e7c(void)

{
  FUN_10bcd5e24();
  return;
}



/* Entry: 10bcd5ea8; end: 10bcd5efb;  */

bool FUN_10bcd5ea8(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1;
  if (iVar1 == 2) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_2,(int *)*param_1 + 2);
    func_0x00010bcdd074();
  }
  else {
    func_0x00010bcdd190(param_1);
  }
  return iVar1 == 2;
}



/* Entry: 10bcd5efc; end: 10bcd5f7f;  */

bool FUN_10bcd5efc(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uStack_38;
  
  piVar3 = (int *)*param_1;
  iVar1 = *piVar3;
  if (iVar1 == 3) {
    uStack_38 = 0;
    piVar2 = piVar3 + 2;
    FUN_10bd3e86c(piVar2,0x7fffffff,&uStack_38);
    if (((ulong)piVar2 & 1) == 0) {
      func_0x00010bcdce7c(param_1,&UNK_10f82fd7e);
      piVar3 = (int *)*param_1;
    }
    *param_2 = (int)uStack_38;
    FUN_10bd3df70(piVar3);
  }
  else {
    func_0x00010bcdd190(param_1);
  }
  return iVar1 == 3;
}



/* Entry: 10bcd5f80; end: 10bcd6003;  */

void FUN_10bcd5f80(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  uVar3 = param_1;
  func_0x00010bcdcd34();
  uVar1 = 0x7fffffff;
  if ((int)uVar3 != 0) {
    uVar1 = 0x80000000;
  }
  uStack_48 = 0;
  FUN_10bcd6004(param_1,uVar1,&uStack_48,param_3,param_4);
  if ((int)param_1 != 0) {
    iVar2 = -(int)uStack_48;
    if ((int)uVar3 == 0) {
      iVar2 = (int)uStack_48;
    }
    *param_2 = iVar2;
  }
  return;
}



/* Entry: 10bcd6004; end: 10bcd61e3;  */

bool FUN_10bcd6004(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)*param_1;
  if (iVar1 == 3) {
    piVar2 = (int *)*param_1 + 2;
    FUN_10bd3e86c();
    if (((ulong)piVar2 & 1) == 0) {
      func_0x00010bcdccd4();
      *param_3 = 0;
    }
    func_0x00010bcdd074();
  }
  else {
    FUN_10bcd5e68(param_1,param_4,param_5);
  }
  return iVar1 == 3;
}



/* Entry: 10bcd61e4; end: 10bcd651f;  */

undefined8 * FUN_10bcd61e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined1 auStack_78 [40];
  
  puVar3 = (undefined8 *)*param_1;
  FUN_10bcd5e00();
  if ((int)puVar3 != 0) {
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    lStack_150 = 0;
    lStack_148 = 0;
    uStack_140 = 0;
    FUN_10bd3e364(*param_1,&uStack_130,&lStack_150,&uStack_110);
    uVar11 = param_1[10];
    uVar7 = param_1[9];
    uVar6 = param_1[0xb];
    param_1[10] = uStack_108;
    param_1[9] = uStack_110;
    param_1[0xb] = uStack_100;
    uStack_110 = uVar7;
    uStack_108 = uVar11;
    uStack_100 = uVar6;
    if (param_4 == 0) {
      func_0x000107c27944(param_2,param_3,&DAT_10f2da10d,1);
      if ((int)param_2 == 0) {
        lVar5 = lStack_148 - lStack_150;
        if (0 < lVar5) {
          lVar9 = param_1[0xd];
          if (param_1[0xe] - lVar9 < lVar5) {
            puVar4 = param_1 + 0xc;
            func_0x000107c2794c(puVar4,(lVar9 - param_1[0xc]) / 0x18 + lVar5 / 0x18);
            func_0x000107c27948(auStack_78,puVar4,(lVar9 - param_1[0xc]) / 0x18,param_1 + 0xe);
            func_0x00010a186c2c();
            func_0x000107c283bc(param_1 + 0xc,auStack_78,lVar9);
            func_0x000107c31938(auStack_78);
          }
          else {
            func_0x00010b351394(param_1 + 0xc,lStack_150,lStack_148,lVar5 / 0x18);
          }
        }
      }
      else {
        func_0x00010bcdd200();
      }
    }
    else {
      func_0x00010bcdd200();
      lVar5 = *(long *)(param_4 + 0x10);
      uVar2 = *(uint *)(lVar5 + 0x10);
      if ((uVar2 & 1) != 0) {
        func_0x00010bcdd2c0();
        FUN_10bdb2a88();
LAB_10bcd64e4:
        func_0x00010ae6c700();
        func_0x000107c31938(auStack_78);
        func_0x000107c278a8(&lStack_150);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_130);
        puVar3 = &uStack_110;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x00010bcdcf24();
        FUN_10bcd61e4();
        if (((ulong)puVar3 & 1) == 0) {
          func_0x00010bcdd584();
        }
        return puVar3;
      }
      if ((uVar2 >> 1 & 1) != 0) {
        func_0x00010bcdd2c0();
        FUN_10bdb2a88();
        goto LAB_10bcd64e4;
      }
      uVar6 = uStack_108;
      if (-1 < (long)uStack_100) {
        uVar6 = uStack_100 >> 0x38;
      }
      if (uVar6 != 0) {
        *(uint *)(lVar5 + 0x10) = uVar2 | 1;
        uVar6 = *(ulong *)(lVar5 + 8);
        if ((uVar6 & 1) != 0) {
          uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
        }
        puVar4 = (undefined8 *)(lVar5 + 0x60);
        func_0x000107c30250(puVar4,uVar6);
        uVar6 = puVar4[2];
        uVar11 = puVar4[1];
        uVar7 = *puVar4;
        puVar4[1] = uStack_108;
        *puVar4 = uStack_110;
        puVar4[2] = uStack_100;
        uStack_110 = uVar7;
        uStack_108 = uVar11;
        uStack_100 = uVar6;
      }
      uVar6 = uStack_128;
      if (-1 < (long)uStack_120) {
        uVar6 = uStack_120 >> 0x38;
      }
      if (uVar6 != 0) {
        lVar5 = *(long *)(param_4 + 0x10);
        *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 2;
        uVar6 = *(ulong *)(lVar5 + 8);
        if ((uVar6 & 1) != 0) {
          uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
        }
        puVar4 = (undefined8 *)(lVar5 + 0x68);
        func_0x000107c30250(puVar4,uVar6);
        uVar6 = puVar4[2];
        uVar11 = puVar4[1];
        uVar7 = *puVar4;
        puVar4[1] = uStack_128;
        *puVar4 = uStack_130;
        puVar4[2] = uStack_120;
        uStack_130 = uVar7;
        uStack_128 = uVar11;
        uStack_120 = uVar6;
      }
      lVar5 = 0;
      for (uVar6 = 0; uVar6 < (ulong)((lStack_148 - lStack_150) / 0x18); uVar6 = uVar6 + 1) {
        puVar4 = (undefined8 *)(*(long *)(param_4 + 0x10) + 0x48);
        func_0x000107c303b4();
        puVar1 = (undefined8 *)(lStack_150 + lVar5);
        uVar7 = puVar4[2];
        uVar12 = puVar4[1];
        uVar10 = *puVar4;
        uVar8 = puVar1[2];
        uVar13 = *puVar1;
        puVar4[1] = puVar1[1];
        *puVar4 = uVar13;
        puVar4[2] = uVar8;
        puVar1[1] = uVar12;
        *puVar1 = uVar10;
        puVar1[2] = uVar7;
        lVar5 = lVar5 + 0x18;
      }
      func_0x000107c278b0(&lStack_150);
    }
    func_0x000107c278a8(&lStack_150);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_130);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_110);
  }
  return puVar3;
}



/* Entry: 10bcd6520; end: 10bcd6567;  */

ulong FUN_10bcd6520(ulong param_1)

{
  FUN_10bcd61e4();
  if ((param_1 & 1) == 0) {
    func_0x00010bcdd584();
  }
  return param_1;
}



/* Entry: 10bcd6568; end: 10bcd65f7;  */

void FUN_10bcd6568(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  long *plVar3;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 != (long *)0x0) {
    uStack_50 = param_4;
    uStack_48 = param_5;
    FUN_10bcd65f8(auStack_68,&uStack_50);
    func_0x00010bcdd620();
    uVar1 = extraout_x11;
    puVar2 = extraout_x10;
    if (in_NG == in_OV) {
      uVar1 = extraout_x8;
      puVar2 = auStack_68;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2,param_3,puVar2,uVar1);
    func_0x00010bcdd044();
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10bcd65f8; end: 10bcd6613;  */

void FUN_10bcd65f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((code *)param_2[1] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bcd6608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_2[1])(param_1,param_2);
    return;
  }
  uVar1 = *param_2;
  func_0x00010002b82c(param_1,uVar1);
  func_0x000107c613d0(uVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 10bcd6614; end: 10bcd668f;  */

void FUN_10bcd6614(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1 != (long *)0x0) {
    uStack_40 = param_4;
    uStack_38 = param_5;
    FUN_10bcd65f8(auStack_58,&uStack_40);
    func_0x00010bcdd620();
    uVar1 = extraout_x11;
    puVar2 = extraout_x10;
    if (in_NG == in_OV) {
      uVar1 = extraout_x8;
      puVar2 = auStack_58;
    }
    (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,puVar2,uVar1);
    func_0x00010bcdd044();
  }
  return;
}



/* Entry: 10bcd6690; end: 10bcd66a3;  */

void FUN_10bcd6690(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 != (long *)0x0) {
    uStack_40 = param_4;
    uStack_38 = param_5;
    FUN_10bcd65f8(auStack_58,&uStack_40);
    func_0x00010bcdd620();
    uVar1 = extraout_x11;
    puVar2 = extraout_x10;
    if (in_NG == in_OV) {
      uVar1 = extraout_x8;
      puVar2 = auStack_58;
    }
    (**(code **)(*param_3 + 0x18))(param_3,param_1,param_2,puVar2,uVar1);
    func_0x00010bcdd044();
  }
  return;
}



/* Entry: 10bcd66a4; end: 10bcd675b;  */

undefined8 FUN_10bcd66a4(undefined8 param_1)

{
  func_0x00010bcdd4f0();
  return param_1;
}



/* Entry: 10bcd675c; end: 10bcd67a7;  */

long FUN_10bcd675c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bcdd4f0();
  func_0x000107c2845c(*(long *)(param_1 + 0x10) + 0x18,param_3);
  func_0x00010bcdd49c(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 10bcd67a8; end: 10bcd67bb;  */

undefined1  [16] FUN_10bcd67a8(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_2 == param_1) {
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = param_1;
    return auVar9;
  }
  *param_1 = 0;
  iVar3 = *param_2;
  if (iVar3 != 0) {
    func_0x000105992abc(param_1,*param_1 + iVar3);
    iVar1 = *param_1;
    *param_1 = iVar1 + iVar3;
    puVar4 = (undefined4 *)(*(long *)(param_1 + 2) + (long)iVar1 * 4);
    puVar2 = *(undefined4 **)(param_2 + 2);
    puVar5 = puVar2;
    puVar6 = puVar4;
    while (0 < iVar3) {
      *puVar6 = *puVar5;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    }
    auVar7._8_8_ = puVar4;
    auVar7._0_8_ = puVar2;
    return auVar7;
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 10bcd67bc; end: 10bcd67ff;  */

undefined8 * FUN_10bcd67bc(undefined8 *param_1)

{
  if (*(int *)(param_1[2] + 0x30) < 3) {
    FUN_10bcd6800(param_1,*(long *)*param_1 + 0x30);
  }
  return param_1;
}



/* Entry: 10bcd6800; end: 10bcd684b;  */

/* WARNING: Possible PIC construction at 0x00010bcd6830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bcd6834) */

void FUN_10bcd6800(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar3 = *(int *)(param_2 + 0x20);
  lVar6 = *(long *)(param_1 + 0x10);
  if (iVar3 == **(int **)(lVar6 + 0x38)) {
    iVar3 = *(int *)(param_2 + 0x28);
  }
  else {
    unaff_x30 = 0x10bcd6834;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    unaff_x29 = puVar1;
  }
  piVar4 = (int *)(lVar6 + 0x30);
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  iVar5 = *piVar4;
  iVar2 = *(int *)(lVar6 + 0x34);
  if (iVar5 == iVar2) {
    func_0x00010056a14c(piVar4,iVar2,iVar2 + 1);
    iVar5 = *piVar4;
  }
  *piVar4 = iVar5 + 1;
  *(int *)(*(long *)(lVar6 + 0x38) + (long)iVar5 * 4) = iVar3;
  return;
}



/* Entry: 10bcd684c; end: 10bcd695b;  */

void FUN_10bcd684c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  byte bVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong *unaff_x19;
  uint6 uVar9;
  byte bVar10;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined8 uVar11;
  byte bVar17;
  undefined8 unaff_d8;
  long lStack_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (param_1 != (undefined8 *)0x0) {
    plVar8 = &lStack_40;
    func_0x00010bcdd694();
    Hint_Prefetch(*param_1,0,2,0);
    iStack_38 = param_4;
    FUN_10bcdc780(*param_1);
    lVar4 = 0;
    uVar5 = *unaff_x19 >> 0xc ^ (ulong)plVar8 >> 7;
    bVar2 = (byte)plVar8;
    uVar9 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
            0x7f7f7f7f7f7f;
    while( true ) {
      uVar5 = uVar5 & unaff_x19[2];
      uVar11 = *(undefined8 *)(*unaff_x19 + uVar5);
      cVar12 = (char)((ulong)uVar11 >> 8);
      cVar13 = (char)((ulong)uVar11 >> 0x10);
      cVar14 = (char)((ulong)uVar11 >> 0x18);
      cVar15 = (char)((ulong)uVar11 >> 0x20);
      cVar16 = (char)((ulong)uVar11 >> 0x28);
      bVar10 = (byte)((ulong)uVar11 >> 0x30);
      bVar17 = (byte)((ulong)uVar11 >> 0x38);
      for (uVar6 = CONCAT17(-(bVar17 == (bVar2 & 0x7f)),
                            CONCAT16(-(bVar10 == (bVar2 & 0x7f)),
                                     CONCAT15(-(cVar16 == (char)(uVar9 >> 0x28)),
                                              CONCAT14(-(cVar15 == (char)(uVar9 >> 0x20)),
                                                       CONCAT13(-(cVar14 == (char)(uVar9 >> 0x18)),
                                                                CONCAT12(-(cVar13 ==
                                                                          (char)(uVar9 >> 0x10)),
                                                                         CONCAT11(-(cVar12 ==
                                                                                   (char)(uVar9 >> 8
                                                                                         )),
                                                                                  -((char)uVar11 ==
                                                                                   (char)uVar9))))))
                                    )) & 0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6)
      {
        uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar7 = unaff_x19[1];
        puVar3 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) &
                          unaff_x19[2]);
        plVar8 = (long *)(uVar7 + (long)puVar3 * 0x18);
        if (*plVar8 == lStack_40 && (int)plVar8[1] == iStack_38) goto LAB_10bcd693c;
      }
      bVar10 = NEON_umaxv(CONCAT17(-(bVar17 == 0x80),
                                   CONCAT16(-(bVar10 == 0x80),
                                            CONCAT15(-(cVar16 == -0x80),
                                                     CONCAT14(-(cVar15 == -0x80),
                                                              CONCAT13(-(cVar14 == -0x80),
                                                                       CONCAT12(-(cVar13 == -0x80),
                                                                                CONCAT11(-(cVar12 ==
                                                                                          -0x80),-((
                                                  char)uVar11 == -0x80)))))))),1);
      if ((bVar10 & 1) != 0) break;
      lVar4 = lVar4 + 8;
      uVar5 = lVar4 + uVar5;
    }
    puVar3 = unaff_x19;
    FUN_10bcdc828();
    plVar8 = (long *)(unaff_x19[1] + (long)puVar3 * 0x18);
    plVar8[1] = CONCAT44(uStack_34,iStack_38);
    *plVar8 = lStack_40;
    plVar8[2] = 0;
    uVar7 = unaff_x19[1];
LAB_10bcd693c:
    *(undefined8 *)(uVar7 + (long)puVar3 * 0x18 + 0x10) = unaff_d8;
  }
  return;
}



/* Entry: 10bcd695c; end: 10bcd6adb;  */

void FUN_10bcd695c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x19;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte bVar12;
  undefined8 unaff_d8;
  uint6 uVar13;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  undefined8 uVar14;
  byte bVar20;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  plVar5 = &lStack_a0;
  if (param_1 != 0) {
    func_0x00010bcdd694();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&lStack_98,param_4);
    puVar6 = (undefined8 *)(unaff_x19 + 0x20);
    Hint_Prefetch(*puVar6,0,2,0);
    FUN_10bcdc7ec(*puVar6);
    lVar11 = 0;
    uVar9 = *(ulong *)(unaff_x19 + 0x20);
    uVar10 = *(ulong *)(unaff_x19 + 0x30);
    uVar3 = uVar9 >> 0xc ^ (ulong)plVar5 >> 7;
    bVar2 = (byte)plVar5;
    uVar13 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar3 = uVar3 & uVar10;
      uVar14 = *(undefined8 *)(uVar9 + uVar3);
      cVar15 = (char)((ulong)uVar14 >> 8);
      cVar16 = (char)((ulong)uVar14 >> 0x10);
      cVar17 = (char)((ulong)uVar14 >> 0x18);
      cVar18 = (char)((ulong)uVar14 >> 0x20);
      cVar19 = (char)((ulong)uVar14 >> 0x28);
      bVar12 = (byte)((ulong)uVar14 >> 0x30);
      bVar20 = (byte)((ulong)uVar14 >> 0x38);
      for (uVar8 = CONCAT17(-(bVar20 == (bVar2 & 0x7f)),
                            CONCAT16(-(bVar12 == (bVar2 & 0x7f)),
                                     CONCAT15(-(cVar19 == (char)(uVar13 >> 0x28)),
                                              CONCAT14(-(cVar18 == (char)(uVar13 >> 0x20)),
                                                       CONCAT13(-(cVar17 == (char)(uVar13 >> 0x18)),
                                                                CONCAT12(-(cVar16 ==
                                                                          (char)(uVar13 >> 0x10)),
                                                                         CONCAT11(-(cVar15 ==
                                                                                   (char)(uVar13 >>
                                                                                         8)),
                                                                                  -((char)uVar14 ==
                                                                                   (char)uVar13)))))
                                             ))) & 0x8080808080808080; uVar8 != 0;
          uVar8 = uVar8 - 1 & uVar8) {
        uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        puVar7 = (undefined8 *)
                 (uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar10);
        plVar4 = (long *)(*(long *)(unaff_x19 + 0x28) + (long)puVar7 * 0x28);
        if (*plVar4 == lStack_a0) {
          plVar4 = plVar4 + 1;
          func_0x000107c278d0(plVar4,&lStack_98);
          if (((ulong)plVar4 & 1) != 0) goto LAB_10bcd6a94;
        }
      }
      bVar12 = NEON_umaxv(CONCAT17(-(bVar20 == 0x80),
                                   CONCAT16(-(bVar12 == 0x80),
                                            CONCAT15(-(cVar19 == -0x80),
                                                     CONCAT14(-(cVar18 == -0x80),
                                                              CONCAT13(-(cVar17 == -0x80),
                                                                       CONCAT12(-(cVar16 == -0x80),
                                                                                CONCAT11(-(cVar15 ==
                                                                                          -0x80),-((
                                                  char)uVar14 == -0x80)))))))),1);
      if ((bVar12 & 1) != 0) break;
      lVar11 = lVar11 + 8;
      uVar3 = lVar11 + uVar3;
    }
    FUN_10bcdc938(puVar6,plVar5);
    plVar5 = (long *)(*(long *)(unaff_x19 + 0x28) + (long)puVar6 * 0x28);
    *plVar5 = lStack_a0;
    plVar5[3] = lStack_88;
    plVar5[2] = lStack_90;
    plVar5[1] = lStack_98;
    lStack_90 = 0;
    lStack_88 = 0;
    lStack_98 = 0;
    plVar5[4] = 0;
    puVar7 = puVar6;
LAB_10bcd6a94:
    *(undefined8 *)(*(long *)(unaff_x19 + 0x28) + (long)puVar7 * 0x28 + 0x20) = unaff_d8;
    func_0x00010bcdd568();
  }
  return;
}



/* Entry: 10bcd6adc; end: 10bcd6bbb;  */

void FUN_10bcd6adc(ulong *param_1)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  
  do {
    piVar1 = (int *)*param_1;
    if (*piVar1 == 6) {
      func_0x00010bcdd07c();
      func_0x00010bcdcc58();
      if (((ulong)piVar1 & 1) != 0) {
        return;
      }
      func_0x00010bcdccec();
      func_0x00010bcd5dcc();
      if ((int)piVar1 != 0) {
        lVar3 = 1;
        do {
          if (*(int *)*param_1 == 6) {
            func_0x00010bcdd07c();
            func_0x00010bcdcc58();
            if ((int)piVar1 == 0) {
              func_0x00010bcdccec();
              func_0x00010bcd5dcc();
              lVar3 = lVar3 + ((ulong)piVar1 & 0xffffffff);
            }
            else {
              lVar3 = lVar3 + -1;
              if (lVar3 == 0) {
                return;
              }
            }
          }
          else if (*(int *)*param_1 == 1) {
            return;
          }
          func_0x00010bcdd074();
        } while( true );
      }
      uVar2 = *param_1;
      func_0x00010bcdcf1c(uVar2,&DAT_10f2da10d);
      if ((uVar2 & 1) != 0) {
        return;
      }
      piVar1 = (int *)*param_1;
    }
    else if (*piVar1 == 1) {
      return;
    }
    FUN_10bd3df70(piVar1);
  } while( true );
}



/* Entry: 10bcd6bbc; end: 10bcd78cb;  */

undefined ***** FUN_10bcd6bbc(undefined *****param_1,undefined ****param_2,undefined *****param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined ****ppppuVar3;
  undefined *****pppppuVar4;
  undefined *****pppppuVar5;
  char *pcVar6;
  undefined *****pppppuVar7;
  undefined8 ****ppppuVar8;
  ulong uVar9;
  undefined8 ***pppuVar10;
  undefined8 uVar11;
  undefined8 extraout_x8;
  undefined ****ppppuVar12;
  uint uVar13;
  uint unaff_w24;
  undefined ****ppppuStack_198;
  undefined ***pppuStack_190;
  undefined ***pppuStack_188;
  undefined ***pppuStack_180;
  undefined ***pppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined ****appppuStack_150 [2];
  char cStack_139;
  undefined8 ***pppuStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 **appuStack_120 [4];
  uint uStack_100;
  undefined4 uStack_fc;
  long alStack_f0 [2];
  undefined8 uStack_e0;
  uint uStack_d4;
  undefined8 ***pppuStack_d0;
  ulong uStack_c8;
  undefined ***pppuStack_a0;
  undefined ****ppppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_70;
  
  pppppuVar4 = param_1;
  func_0x00010bcdcc7c();
  *pppppuVar4 = param_2;
  *(char *)(pppppuVar4 + 4) = '\0';
  uStack_70 = extraout_x8;
  func_0x000107c27fa8(pppppuVar4 + 5);
  pppuStack_180 = (undefined ***)&PTR_FUN_110d9c160;
  pppuStack_178 = (undefined ***)0x0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  pppuStack_190 = (undefined ***)&pppuStack_180;
  param_1[2] = (undefined ****)pppuStack_190;
  if (*(int *)*param_1 == 0) {
    func_0x00010bcdd35c();
    pppuStack_190 = (undefined ***)param_1[2];
  }
  ppppuVar3 = (undefined ****)(pppuStack_190 + 2);
  ppppuStack_198 = (undefined ****)param_1;
  FUN_10bcdb348();
  pppuStack_188 = (undefined ***)ppppuVar3;
  func_0x000107c2845c(ppppuVar3 + 6,*(undefined4 *)(*param_1 + 4));
  func_0x000107c2845c(ppppuVar3 + 6,*(undefined4 *)((long)*param_1 + 0x24));
  func_0x00010bcdd4e8(param_1[3],ppppuVar3,param_3);
  if ((*(byte *)((long)param_1 + 0x21) & 1) == 0) {
    ppppuVar3 = *param_1;
    func_0x00010bcdcf3c(ppppuVar3,&DAT_10f529f71);
    if (((ulong)ppppuVar3 & 1) != 0) goto LAB_10bcd6ca8;
    pppppuVar4 = (undefined *****)*param_1;
    pcVar6 = "edition";
    func_0x00010bcdd144(pppppuVar4,"edition");
    if ((int)pppppuVar4 != 0) goto LAB_10bcd6ca8;
    if ((*(byte *)((long)param_1 + 0x22) & 1) == 0) {
      func_0x00010bcdd2c0();
      FUN_10bdb2980(appuStack_120);
      pppuVar10 = appuStack_120;
      func_0x00010b4d165c(pppuVar10,&UNK_10f82fe81);
      func_0x00010ae6c448();
      func_0x00010ae6bd08(pppuVar10,&UNK_10f82feaa,0x22);
      FUN_10bcd78cc(pppuVar10,&UNK_10f82fecd);
      func_0x00010b4d184c();
      FUN_10bdb2990(appuStack_120);
      pcVar6 = &UNK_10f82ff21;
      pppppuVar4 = param_1 + 5;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (pppppuVar4,&UNK_10f82ff21);
    }
LAB_10bcd6e80:
    if ((*(byte *)((long)param_1 + 0x22) & 1) == 0) {
      uVar13 = 0xf27c79b;
LAB_10bcd6f04:
      do {
        func_0x00010bcdcea4();
        if ((bool)in_ZR) goto LAB_10bcd7664;
        func_0x00010bcdcfc8();
        func_0x00010bcdcc58();
        if (((ulong)pppppuVar4 & 1) == 0) {
          ppppuVar3 = *param_1;
          func_0x00010bcdd144(ppppuVar3,"message");
          pppppuVar4 = param_1;
          if ((int)ppppuVar3 == 0) {
            ppppuVar3 = *param_1;
            func_0x00010bcdd560(ppppuVar3,&DAT_10f5af6c7);
            if ((int)ppppuVar3 != 0) {
              func_0x00010bcdd324();
              FUN_10bcd675c();
              pcVar6 = (char *)(param_3 + 9);
              FUN_10bcdb45c(pcVar6);
              FUN_10bcd7a84(param_1,pcVar6,appuStack_120);
              pppppuVar5 = pppppuVar4;
              goto LAB_10bcd6f94;
            }
            ppppuVar3 = *param_1;
            func_0x00010bcdd144(ppppuVar3,"service");
            if ((int)ppppuVar3 == 0) {
              ppppuVar3 = *param_1;
              func_0x00010bcdcf3c(ppppuVar3,&UNK_10f82ffa7);
              if ((int)ppppuVar3 == 0) {
                ppppuVar3 = *param_1;
                func_0x00010bcdcf3c(ppppuVar3,&DAT_10f545dc4);
                if ((int)ppppuVar3 != 0) {
                  func_0x00010bcdd324();
                  FUN_10bcd675c();
                  func_0x00010bcdd14c(param_1,&DAT_10f545dc4);
                  if (((ulong)pppppuVar4 & 1) != 0) {
                    ppppuVar3 = *param_1;
                    func_0x00010bcdcf3c(ppppuVar3,&DAT_10f380868);
                    if ((int)ppppuVar3 == 0) {
                      ppppuVar3 = *param_1;
                      func_0x00010bcdd560(ppppuVar3,&UNK_10f5aee07);
                      if ((int)ppppuVar3 != 0) {
                        FUN_10bcd675c(&pppuStack_a0,&ppppuStack_198,0xb,
                                      *(undefined4 *)(param_3 + 0x14));
                        func_0x000107c278b8(&pppuStack_d0,&UNK_10f5aee07);
                        func_0x00010bcdd134();
                        FUN_10bcd695c();
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                                  (&pppuStack_d0);
                        pppppuVar4 = param_1;
                        FUN_10bcd5e7c(param_1,&UNK_10f5aee07,4);
                        if (((ulong)pppppuVar4 & 1) == 0) goto LAB_10bcd7614;
                        unaff_w24 = *(uint *)(param_3 + 4);
                        pppppuVar4 = param_3 + 0x14;
                        FUN_10bcdb304();
                        goto LAB_10bcd7594;
                      }
                    }
                    else {
                      FUN_10bcd675c(&pppuStack_a0,&ppppuStack_198,10,*(undefined4 *)(param_3 + 0x12)
                                   );
                      pppppuVar4 = param_1;
                      func_0x00010bcdd14c(param_1,&DAT_10f380868);
                      if (((ulong)pppppuVar4 & 1) == 0) {
LAB_10bcd7614:
                        func_0x00010bcdce8c();
                        goto LAB_10bcd7618;
                      }
                      unaff_w24 = *(uint *)(param_3 + 4);
                      pppppuVar4 = param_3 + 0x12;
                      FUN_10bcdb304();
LAB_10bcd7594:
                      *(uint *)pppppuVar4 = unaff_w24;
                      func_0x00010bcdce8c();
                    }
                    pppuStack_a0 = (undefined ***)0x0;
                    ppppuStack_98 = (undefined ****)0x0;
                    uStack_90 = 0;
                    pppppuVar4 = param_1;
                    func_0x00010bcdd180(param_1,&pppuStack_a0,&UNK_10f830ad9);
                    if (((ulong)pppppuVar4 & 1) != 0) {
                      pppppuVar5 = param_3 + 3;
                      func_0x000107c303b4();
                      pcVar6 = (char *)&pppuStack_a0;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
                      func_0x00010bcdcd54();
                      FUN_10bcd695c();
                      func_0x00010bcdccec();
                      FUN_10bcd6520();
                      pppppuVar4 = pppppuVar5;
                      func_0x00010bcdd088();
                      goto LAB_10bcd6f94;
                    }
LAB_10bcd75f4:
                    func_0x00010bcdd088();
                  }
LAB_10bcd7618:
                  ppppuVar8 = (undefined8 ****)appuStack_120;
                  goto LAB_10bcd761c;
                }
                ppppuVar3 = *param_1;
                func_0x00010bcdd144(ppppuVar3,&DAT_10f529ee5);
                if ((int)ppppuVar3 != 0) {
                  if ((*(byte *)(param_3 + 2) >> 1 & 1) != 0) {
                    func_0x00010bcdce7c(param_1,&UNK_10f830abb);
                    func_0x000107c3025c(param_3 + 0x17);
                    *(uint *)(param_3 + 2) = *(uint *)(param_3 + 2) & 0xfffffffd;
                  }
                  func_0x00010bcdd324();
                  func_0x00010bcdcf58();
                  func_0x00010bcdcd54();
                  func_0x00010bcdd06c();
                  func_0x00010bcdd26c(param_1,&DAT_10f529ee5);
                  unaff_w24 = 0xf830346;
                  if ((int)pppppuVar4 == 0) goto LAB_10bcd7618;
                  while( true ) {
                    pppuStack_a0 = (undefined ***)0x0;
                    ppppuStack_98 = (undefined ****)0x0;
                    uStack_90 = 0;
                    pppppuVar4 = param_1;
                    func_0x00010bcdcec4(param_1,&pppuStack_a0,&UNK_10f830346);
                    if (((ulong)pppppuVar4 & 1) == 0) break;
                    func_0x00010bcdc350(param_3);
                    func_0x000107c27fc4();
                    pppppuVar4 = param_1;
                    pcVar6 = &DAT_10f62a9de;
                    func_0x00010bcdce94(param_1,&DAT_10f62a9de);
                    if ((int)pppppuVar4 == 0) {
                      func_0x00010bcdd088();
                      func_0x00010bcdccec();
                      FUN_10bcd6520();
                      goto LAB_10bcd7374;
                    }
                    func_0x00010bcdc350(param_3);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
                    func_0x00010bcdd088();
                  }
                  goto LAB_10bcd75f4;
                }
                iVar2 = (int)*param_1;
                func_0x00010bcdccc4();
                if (iVar2 != 0) {
                  func_0x00010bcdd324();
                  func_0x00010bcd6730();
                  pppppuVar4 = param_3;
                  FUN_10bcd8af8();
                  pcVar6 = (char *)pppppuVar4;
                  func_0x00010bcdcdd8();
                  goto LAB_10bcd7374;
                }
                func_0x00010bcdce7c(param_1,&UNK_10f82ffae);
              }
              else {
                func_0x00010bcdd324();
                func_0x00010bcdd504();
                pcVar6 = (char *)(param_3 + 0xf);
                FUN_10bcd82f0(param_1,pcVar6,param_3 + 6,&ppppuStack_198,4,appuStack_120);
LAB_10bcd7374:
                func_0x00010bcdcdcc();
                if ((unaff_w24 & 1) != 0) goto LAB_10bcd6f04;
              }
            }
            else {
              FUN_10bcd675c(&pppuStack_d0,&ppppuStack_198,6,*(undefined4 *)(param_3 + 0xd));
              pppppuVar4 = param_3 + 0xc;
              func_0x00010bcdb468();
              pppppuVar5 = param_1;
              func_0x00010bcdd26c(param_1,"service");
              if ((int)pppppuVar5 != 0) {
                uVar9 = 0;
                func_0x00010bcdcf34(appuStack_120);
                func_0x00010bcdcd54();
                func_0x00010bcdd06c();
                func_0x00010bcdd1a4();
                if ((uVar9 & 1) != 0) {
                  func_0x00010bcdd6a8();
                }
                pppppuVar5 = pppppuVar4 + 6;
                func_0x000107c30250(pppppuVar5);
                pppppuVar7 = param_1;
                func_0x00010bcdcec4(param_1,pppppuVar5,&UNK_10f830880);
                iVar2 = (int)pppppuVar7;
                func_0x00010bcdcf2c();
                if ((((ulong)pppppuVar7 & 1) != 0) && (func_0x00010bcdcdf8(), iVar2 != 0)) {
LAB_10bcd7040:
                  do {
                    pppppuVar5 = param_1;
                    pcVar6 = &DAT_10f2da10d;
                    func_0x00010bcdcc58(param_1,&DAT_10f2da10d);
                    if (((ulong)pppppuVar5 & 1) != 0) goto LAB_10bcd7500;
                    func_0x00010bcdcea4();
                    if ((bool)in_ZR) {
                      func_0x00010bcdce7c(param_1,&UNK_10f830897);
                      break;
                    }
                    func_0x00010bcdcfc8();
                    func_0x00010bcdcc58();
                    if (((ulong)pppppuVar5 & 1) == 0) {
                      iVar2 = (int)*param_1;
                      func_0x00010bcdccc4();
                      if (iVar2 == 0) {
                        func_0x00010bcdd3c0(&pppuStack_a0,&pppuStack_d0);
                        pppppuVar5 = pppppuVar4 + 3;
                        FUN_10bcdbf98();
                        pppppuVar7 = param_1;
                        FUN_10bcd5e7c(param_1,&DAT_10f37da5b,3);
                        if ((int)pppppuVar7 != 0) {
                          func_0x00010bcdd318();
                          func_0x00010bcdcf34();
                          func_0x00010bcdcd54();
                          func_0x00010bcdd06c();
                          *(uint *)(pppppuVar5 + 2) = *(uint *)(pppppuVar5 + 2) | 1;
                          if (((ulong)pppppuVar5[1] & 1) != 0) {
                            func_0x00010bcdd6a8();
                          }
                          pppppuVar7 = pppppuVar5 + 3;
                          func_0x000107c30250(pppppuVar7);
                          func_0x00010bcdcec4(param_1,pppppuVar7,&UNK_10f8308d1);
                          func_0x00010bcdcdcc();
                          if ((unaff_w24 & 1) != 0) {
                            pppppuVar7 = param_1;
                            func_0x00010bcdd640();
                            iVar2 = (int)pppppuVar7;
                            func_0x00010bcdce84();
                            if (iVar2 != 0) {
                              ppppuVar3 = *param_1;
                              func_0x00010bcdcf3c(ppppuVar3,&DAT_10f34fa9f);
                              if ((int)ppppuVar3 != 0) {
                                func_0x00010bcdd318();
                                func_0x00010bcd6730();
                                func_0x00010bcdcd54();
                                func_0x00010bcdd4e8();
                                *(char *)(pppppuVar5 + 7) = '\x01';
                                *(uint *)(pppppuVar5 + 2) = *(uint *)(pppppuVar5 + 2) | 0x10;
                                func_0x00010bcdd14c(param_1,&DAT_10f34fa9f);
                                func_0x00010bcdcdcc();
                                if ((unaff_w24 & 1) == 0) goto LAB_10bcd7304;
                              }
                              func_0x00010bcdd318();
                              func_0x00010bcdcf58();
                              func_0x00010bcdcd54();
                              FUN_10bcd684c();
                              FUN_10bcdbfe8(pppppuVar5);
                              func_0x00010bcdd570();
                              func_0x00010bcdcdcc();
                              if (((unaff_w24 != 0) &&
                                  (pppppuVar7 = param_1, func_0x00010bcdce84(param_1,&DAT_10f684600)
                                  , (int)pppppuVar7 != 0)) &&
                                 (pppppuVar7 = param_1, func_0x00010bcdd26c(param_1,"returns"),
                                 (int)pppppuVar7 != 0)) {
                                pppppuVar7 = param_1;
                                func_0x00010bcdd640();
                                iVar2 = (int)pppppuVar7;
                                func_0x00010bcdce84();
                                if (iVar2 != 0) {
                                  ppppuVar3 = *param_1;
                                  func_0x00010bcdcf3c(ppppuVar3,&DAT_10f34fa9f);
                                  if ((int)ppppuVar3 != 0) {
                                    func_0x00010bcdd318();
                                    func_0x00010bcdd54c();
                                    func_0x00010bcdcd54();
                                    func_0x00010bcdd4e8();
                                    pppppuVar7 = param_1;
                                    func_0x00010bcdd14c(param_1,&DAT_10f34fa9f);
                                    if (((ulong)pppppuVar7 & 1) == 0) {
                                      func_0x00010bcdcf2c();
                                      goto LAB_10bcd7304;
                                    }
                                    *(char *)((long)pppppuVar5 + 0x39) = '\x01';
                                    *(uint *)(pppppuVar5 + 2) = *(uint *)(pppppuVar5 + 2) | 0x20;
                                    func_0x00010bcdcf2c();
                                  }
                                  func_0x00010bcdd318();
                                  func_0x00010bcdd19c();
                                  func_0x00010bcdcd54();
                                  FUN_10bcd684c();
                                  func_0x00010bcdc010(pppppuVar5);
                                  func_0x00010bcdd570();
                                  func_0x00010bcdcdcc();
                                  if ((unaff_w24 != 0) &&
                                     (pppppuVar7 = param_1,
                                     func_0x00010bcdce84(param_1,&DAT_10f684600),
                                     (int)pppppuVar7 != 0)) {
                                    iVar2 = (int)*param_1;
                                    func_0x00010bcdceb4();
                                    FUN_10bcd5e00();
                                    if (iVar2 == 0) {
                                      func_0x00010bcdccec();
                                      FUN_10bcd6520();
                                      if (iVar2 == 0) goto LAB_10bcd7304;
                                    }
                                    else {
                                      func_0x00010bcdaf30(pppppuVar5);
                                      func_0x00010bcdcdf8();
                                      while (pppppuVar7 = param_1,
                                            func_0x00010bcdcc58(param_1,&DAT_10f2da10d),
                                            ((ulong)pppppuVar7 & 1) == 0) {
                                        func_0x00010bcdcea4();
                                        if ((bool)in_ZR) {
                                          func_0x00010bcdce7c(param_1,&UNK_10f8308e7);
                                          goto LAB_10bcd7304;
                                        }
                                        func_0x00010bcdcfc8();
                                        func_0x00010bcdcc58();
                                        if (((ulong)pppppuVar7 & 1) == 0) {
                                          func_0x00010bcdd318();
                                          func_0x00010bcdd5ac();
                                          pppppuVar7 = param_1;
                                          FUN_10bcd851c(param_1,pppppuVar5,appuStack_120,1);
                                          if (((ulong)pppppuVar7 & 1) == 0) {
                                            func_0x00010bcdd0ac();
                                          }
                                          func_0x00010bcdcf2c();
                                        }
                                      }
                                    }
                                    func_0x00010bcdce8c();
                                    goto LAB_10bcd7040;
                                  }
                                }
                              }
                            }
                          }
                        }
LAB_10bcd7304:
                        func_0x00010bcdce8c();
                      }
                      else {
                        func_0x00010bcdd19c(appuStack_120,&pppuStack_d0);
                        pppppuVar5 = pppppuVar4;
                        func_0x00010bcdaf20();
                        func_0x00010bcdcdd8();
                        func_0x00010bcdcf2c();
                        if (((ulong)pppppuVar5 & 1) != 0) goto LAB_10bcd7040;
                      }
                      func_0x00010bcdd0ac();
                    }
                  } while( true );
                }
              }
              ppppuVar8 = &pppuStack_d0;
LAB_10bcd761c:
              FUN_10bcd67bc(ppppuVar8);
            }
          }
          else {
            func_0x00010bcdd324();
            FUN_10bcd675c();
            pcVar6 = (char *)((long)param_1 + 0x44);
            pcVar6[0] = ' ';
            pcVar6[1] = '\0';
            pcVar6[2] = '\0';
            pcVar6[3] = '\0';
            pcVar6 = (char *)(param_3 + 6);
            func_0x00010bcdc378(pcVar6);
            FUN_10bcd7904(param_1,pcVar6,appuStack_120);
            pppppuVar5 = pppppuVar4;
LAB_10bcd6f94:
            func_0x00010bcdcf2c();
            if (((ulong)pppppuVar5 & 1) != 0) goto LAB_10bcd6f04;
          }
          func_0x00010bcdd0ac();
          pppppuVar4 = (undefined *****)*param_1;
          pcVar6 = &DAT_10f2da10d;
          func_0x00010bcdcf1c(pppppuVar4,&DAT_10f2da10d);
          if ((int)pppppuVar4 != 0) {
            pcVar6 = &UNK_10f82ff28;
            func_0x00010bcdce7c(param_1,&UNK_10f82ff28);
            pppppuVar4 = (undefined *****)*param_1;
            func_0x00010bcdd35c();
          }
        }
      } while( true );
    }
    bVar1 = false;
    uVar13 = *(byte *)(param_1 + 4) ^ 1;
  }
  else {
LAB_10bcd6ca8:
    func_0x00010bcd6730(alStack_f0,&ppppuStack_198,0xc);
    FUN_10bcd684c(*(undefined8 *)(alStack_f0[0] + 0x18),uStack_e0,param_3,10);
    pcVar6 = "edition";
    pppppuVar4 = param_1;
    func_0x00010bcd5dcc(param_1,"edition",7);
    if (((ulong)pppppuVar4 & 1) == 0) {
      pcVar6 = &DAT_10f529f71;
      pppppuVar5 = param_1;
      func_0x00010bcdd4b4(param_1,&DAT_10f529f71,6,&UNK_10f82ff37);
      if ((int)pppppuVar5 != 0) goto LAB_10bcd6d0c;
    }
    else {
LAB_10bcd6d0c:
      func_0x00010bcdd330();
      pppppuVar5 = param_1;
      func_0x00010bcdce84();
      if ((int)pppppuVar5 != 0) {
        func_0x00010bcdb424(appuStack_120,*param_1);
        pppuStack_138 = (undefined8 ****)0x0;
        uStack_130 = 0;
        uStack_128 = 0;
        pcVar6 = (char *)&pppuStack_138;
        pppppuVar5 = param_1;
        func_0x00010bcdd180(param_1,pcVar6,&UNK_10f82ff7b);
        iVar2 = (int)pppppuVar5;
        if (((ulong)pppppuVar5 & 1) != 0) {
          pcVar6 = ";";
          func_0x00010bcdd1dc();
          FUN_10bcd6520();
          if (iVar2 != 0) {
            if ((int)pppppuVar4 == 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (param_1 + 5,&pppuStack_138);
              pcVar6 = &UNK_10f82ff21;
              ppppuVar8 = &pppuStack_138;
              func_0x000107c27cf4(ppppuVar8,&UNK_10f82ff21);
              if (((ulong)ppppuVar8 & 1) == 0) {
                func_0x00010bcdd5e0();
                uVar9 = 0;
                func_0x000107c27cf4();
                if (((uVar9 & 1) == 0) && ((*(byte *)((long)param_1 + 0x22) & 1) == 0)) {
                  uVar11 = 0x10bcdc5b8;
                  goto LAB_10bcd6df0;
                }
              }
LAB_10bcd76c4:
              func_0x00010bcdd46c();
              func_0x00010bcdcf44(appuStack_120);
              pppppuVar4 = (undefined *****)0x0;
              FUN_10bcd67bc();
              if (param_3 != (undefined *****)0x0) {
                *(uint *)(param_3 + 2) = *(uint *)(param_3 + 2) | 4;
                if (((ulong)param_3[1] & 1) != 0) {
                  func_0x00010bcdd054();
                }
                pppppuVar4 = param_3 + 0x18;
                pcVar6 = (char *)(param_1 + 5);
                func_0x000107c30248(pppppuVar4,pcVar6);
                func_0x00010bcdd0b4();
                func_0x00010bcdd5a4();
                if ((int)pppppuVar4 != 0) {
                  *(undefined4 *)(param_3 + 0x1b) = *(undefined4 *)(param_1 + 8);
                  *(uint *)(param_3 + 2) = *(uint *)(param_3 + 2) | 0x20;
                }
              }
              goto LAB_10bcd6e80;
            }
            ppppuVar3 = (undefined ****)&UNK_10f82ff97;
            func_0x000107c284bc();
            uStack_c8 = uStack_130;
            pppuStack_d0 = pppuStack_138;
            if (-1 < (long)uStack_128) {
              uStack_c8 = uStack_128 >> 0x38;
              pppuStack_d0 = &pppuStack_138;
            }
            ppppuVar12 = &pppuStack_a0;
            pppuStack_a0 = (undefined ***)ppppuVar3;
            ppppuStack_98 = (undefined ****)pcVar6;
            func_0x000107c2ba40(appppuStack_150,ppppuVar12,&pppuStack_d0);
            func_0x00010bd0c884();
            in_ZR = cStack_139 == '\0';
            pcVar6 = (char *)appppuStack_150[0];
            if (-1 < cStack_139) {
              pcVar6 = (char *)appppuStack_150;
            }
            func_0x00010bd1b7bc();
            if (((ulong)ppppuVar12 & 1) == 0) {
LAB_10bcd6de4:
              func_0x00010bcdd474();
            }
            else {
              *(uint *)(param_1 + 8) = uStack_d4;
              in_ZR = (uStack_d4 & 0xfffffffe) == 0x3e6;
              if ((bool)in_ZR) goto LAB_10bcd6de4;
              func_0x00010bcdd474();
              if (uStack_d4 != 0) {
                func_0x00010bcdd0b4();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                          (param_1 + 5);
                goto LAB_10bcd76c4;
              }
            }
            uVar11 = 0x10bcdc560;
LAB_10bcd6df0:
            pcVar6 = (char *)(ulong)uStack_100;
            FUN_10bcd6568(param_1,pcVar6,uStack_fc,&pppuStack_138,uVar11);
          }
        }
        func_0x00010bcdd46c();
        func_0x00010bcdcf44(appuStack_120);
      }
    }
    FUN_10bcd67bc(alStack_f0);
    bVar1 = false;
    uVar13 = 0;
  }
LAB_10bcd6e1c:
  func_0x00010bcdcfec();
  if (bVar1) {
    *param_1 = (undefined ****)0x0;
    param_1[2] = (undefined ****)0x0;
    pcVar6 = (char *)param_3;
    FUN_10bcd78f4();
    in_ZR = (undefined ****)pcVar6 == &pppuStack_180;
    if (!(bool)in_ZR) {
      ppppuVar3 = (undefined ****)pppuStack_178;
      if (((ulong)pppuStack_178 & 1) != 0) {
        ppppuVar3 = *(undefined *****)((ulong)pppuStack_178 & 0xfffffffffffffffe);
      }
      ppppuVar12 = *(undefined *****)((long)pcVar6 + 8);
      if (((ulong)ppppuVar12 & 1) != 0) {
        ppppuVar12 = *(undefined *****)((ulong)ppppuVar12 & 0xfffffffffffffffe);
      }
      in_ZR = ppppuVar3 == ppppuVar12;
      if ((bool)in_ZR) {
        FUN_10bd134dc(&pppuStack_180);
      }
      else {
        FUN_10bd2dbf8(&pppuStack_180);
      }
    }
    uVar13 = *(byte *)(param_1 + 4) ^ 1;
  }
  FUN_10bd1337c();
  func_0x00010bcdcb14(uStack_70);
  if ((bool)in_ZR) {
    return (undefined *****)(ulong)(uVar13 & 1);
  }
  ___stack_chk_fail();
  func_0x00010bcdcf2c();
  FUN_10bcd67bc(&pppuStack_a0);
  FUN_10bcd67bc(&pppuStack_d0);
  func_0x00010bcdcfec();
  FUN_10bd1337c(&pppuStack_180);
  func_0x00010bcdcf24();
  func_0x00010bcdd2b4();
  _strlen(pcVar6);
  func_0x00010bcdd2cc();
  return param_3;
LAB_10bcd7664:
  bVar1 = true;
  in_ZR = 1;
  goto LAB_10bcd6e1c;
LAB_10bcd7500:
  pppppuVar4 = (undefined *****)0x0;
  FUN_10bcd67bc();
  goto LAB_10bcd6f04;
}



/* Entry: 10bcd78cc; end: 10bcd78f3;  */

void FUN_10bcd78cc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bcdd2b4();
  _strlen(param_2);
  func_0x00010bcdd2cc();
  return;
}



/* Entry: 10bcd78f4; end: 10bcd7903;  */

void FUN_10bcd78f4(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
  if (*(long *)(param_1 + 0xd0) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010bcdd0e4();
    }
    func_0x00010bcdb3e0();
    *(ulong *)(param_1 + 0xd0) = uVar1;
  }
  return;
}



/* Entry: 10bcd7904; end: 10bcd7a83;  */

void FUN_10bcd7904(long *param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  byte *pbVar6;
  long alStack_48 [2];
  ulong uStack_38;
  
  iVar3 = *(int *)((long)param_1 + 0x44);
  iVar2 = iVar3 + -1;
  *(int *)((long)param_1 + 0x44) = iVar2;
  if (iVar2 == 0 || iVar3 < 1) {
    func_0x00010bcdccd4(param_1,&UNK_10f82ffdd);
  }
  else {
    plVar4 = param_1;
    func_0x00010bcdd26c(param_1,"message");
    if ((int)plVar4 != 0) {
      func_0x00010bcdcf34(alStack_48,param_3);
      func_0x00010bcdd06c(*(undefined8 *)(alStack_48[0] + 0x18),uStack_38,param_2);
      func_0x00010bcdd600();
      if ((uStack_38 & 1) != 0) {
        func_0x00010bcdd6a8();
      }
      lVar5 = param_2 + 0xd8;
      func_0x000107c30250(lVar5);
      plVar4 = param_1;
      func_0x00010bcdcec4(param_1,lVar5,&UNK_10f830012);
      if (((ulong)plVar4 & 1) == 0) {
        func_0x00010bcdcfec();
      }
      else {
        pbVar6 = (byte *)(*(ulong *)(param_2 + 0xd8) & 0xfffffffffffffffc);
        lVar5 = (long)(char)pbVar6[0x17];
        if (lVar5 < 0) {
          lVar5 = *(long *)(pbVar6 + 8);
          pbVar6 = *(byte **)pbVar6;
        }
        if (lVar5 != 0) {
          if (*pbVar6 - 0x41 < 0x1a) {
            do {
              if (lVar5 == 0) goto LAB_10bcd7a10;
              bVar1 = *pbVar6;
              lVar5 = lVar5 + -1;
              pbVar6 = pbVar6 + 1;
            } while (bVar1 != 0x5f);
          }
          plVar4 = (long *)(ulong)*(uint *)(*param_1 + 0x20);
          FUN_10bcd6690(plVar4,*(undefined4 *)(*param_1 + 0x24),param_1[1],param_2,0x10bcdc610);
        }
LAB_10bcd7a10:
        func_0x00010bcdcfec();
        func_0x00010bcdd07c();
        FUN_10bcd8b08();
        iVar3 = (int)plVar4;
        if (((ulong)plVar4 & 1) != 0) {
          func_0x00010bcdd5e0();
          func_0x00010bcdd5a4();
          if (iVar3 != 0) {
            FUN_10bcd9878(param_2);
          }
        }
      }
    }
  }
  *(int *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) + 1;
  return;
}



/* Entry: 10bcd7a84; end: 10bcd82ef;  */

undefined8 FUN_10bcd7a84(int param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 in_ZR;
  bool bVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined4 uVar13;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar14;
  long *extraout_x9;
  undefined **extraout_x9_00;
  byte *pbVar15;
  byte *pbVar16;
  undefined **unaff_x19;
  undefined8 uVar17;
  undefined **unaff_x20;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  undefined **ppuVar22;
  undefined4 auStack_148 [4];
  undefined8 uStack_138;
  uint auStack_130 [12];
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  ulong uStack_98;
  
  func_0x00010bcdd060();
  FUN_10bcd5e7c();
  if (param_1 == 0) {
    return 0;
  }
  uVar12 = param_3;
  func_0x00010bcdcf34(&puStack_c8);
  func_0x00010bcdd1c0();
  func_0x00010bcdd06c();
  func_0x00010bcdd600();
  if ((uVar12 & 1) != 0) {
    func_0x00010bcdd6a8();
  }
  func_0x000107c30250(unaff_x20 + 0xc);
  ppuVar7 = unaff_x19;
  func_0x00010bcdcec4();
  iVar6 = (int)ppuVar7;
  func_0x00010bcdce9c();
  if (((ulong)ppuVar7 & 1) == 0) {
    return 0;
  }
  func_0x00010bcdd0d8();
  func_0x00010bcdd1dc();
  FUN_10bcd6520();
  if (iVar6 == 0) {
    return 0;
  }
  ppuVar7 = unaff_x20 + 3;
LAB_10bcd7b38:
  while (ppuVar22 = unaff_x19, func_0x00010bcdcc58(), ((ulong)ppuVar22 & 1) == 0) {
    func_0x00010bcdcea4();
    if ((bool)in_ZR) goto LAB_10bcd8048;
    func_0x00010bcdcba0();
    FUN_10bcd61e4();
    if (((ulong)ppuVar22 & 1) == 0) {
      iVar6 = (int)*unaff_x19;
      func_0x00010bcdccc4();
      if (iVar6 != 0) {
        func_0x00010bcdd19c(&puStack_c8,param_3);
        ppuVar22 = unaff_x20;
        func_0x00010bcdaf00();
        func_0x00010bcdcdd8();
        func_0x00010bcdce9c();
        goto joined_r0x00010bcd7d30;
      }
      puVar8 = *unaff_x19;
      func_0x00010bcdd024(puVar8,&DAT_10f52a05c);
      if ((int)puVar8 != 0) {
        func_0x00010bcdb424(auStack_130,*unaff_x19);
        ppuVar22 = unaff_x19;
        func_0x00010bcdd534();
        if (((ulong)ppuVar22 & 1) == 0) {
LAB_10bcd7f94:
          func_0x00010bcdcf44(auStack_130);
          goto LAB_10bcd7f9c;
        }
        in_ZR = *(int *)*unaff_x19 == 2;
        if ((bool)in_ZR) {
          func_0x00010bcdcd74();
          if (((ulong)ppuVar22 & 1) == 0) goto LAB_10bcd7f90;
          func_0x00010bcdd3a8();
          func_0x00010bcdd00c(uStack_d0);
          do {
            func_0x00010bcdd554();
            func_0x000107c303b4(unaff_x20 + 9);
            ppuVar9 = unaff_x19;
            func_0x00010bcdcec4();
            ppuVar22 = ppuVar9;
            func_0x00010bcdce9c();
            if (((ulong)ppuVar9 & 1) == 0) goto LAB_10bcd7f68;
            func_0x00010bcdcd64();
          } while (((ulong)ppuVar22 & 1) != 0);
          func_0x00010bcdcb28();
          goto LAB_10bcd7f6c;
        }
        in_ZR = *(int *)*unaff_x19 == 5;
        if ((bool)in_ZR) {
          func_0x00010bcdcd74();
          if (((ulong)ppuVar22 & 1) == 0) {
            func_0x00010bcdd3a8();
            func_0x00010bcdd00c(uStack_d0);
            do {
              func_0x00010bcdd554();
              func_0x000107c303b4(unaff_x20 + 9);
              ppuVar9 = unaff_x19;
              FUN_10bcdad74();
              ppuVar22 = ppuVar9;
              func_0x00010bcdce9c();
              if (((ulong)ppuVar9 & 1) == 0) goto LAB_10bcd7f68;
              func_0x00010bcdcd64();
            } while (((ulong)ppuVar22 & 1) != 0);
            func_0x00010bcdcb28();
            goto LAB_10bcd7f6c;
          }
LAB_10bcd7f90:
          func_0x00010bcdd584();
          goto LAB_10bcd7f94;
        }
        func_0x00010bcdd5ac(auStack_148,param_3);
        func_0x00010bcdd00c(uStack_138);
        bVar5 = true;
        do {
          func_0x00010bcd6730(&uStack_e0,auStack_148,*(undefined4 *)(unaff_x20 + 7));
          ppuVar22 = unaff_x20 + 6;
          FUN_10bcdbd7c();
          func_0x00010bcdcf6c(*(undefined8 *)(CONCAT44(uStack_dc,uStack_e0) + 0x18),uStack_d0);
          uStack_c0 = 0;
          uStack_b8 = 0;
          lStack_b0 = 0;
          func_0x00010bcdcf34(auStack_100,&uStack_e0);
          func_0x00010bcdad2c(&puStack_c8,*unaff_x19);
          in_ZR = !bVar5;
          ppuVar9 = unaff_x19;
          FUN_10bcd5f80();
          iVar6 = (int)ppuVar9;
          func_0x00010bcdd250();
          if (((ulong)ppuVar9 & 1) == 0) {
LAB_10bcd7ed8:
            bVar4 = false;
          }
          else {
            func_0x00010bcdce0c();
            if (iVar6 == 0) {
              func_0x00010bcdcf58(auStack_100,&uStack_e0);
              func_0x00010bcdd0cc(uStack_f0);
              *(undefined4 *)(extraout_x8 + 4) = uStack_a4;
              FUN_10bcd6800(auStack_100,&puStack_c8);
              uVar21 = uStack_e4;
              uStack_e8 = uStack_e4;
              func_0x00010bcdd250();
              uVar13 = uVar21;
            }
            else {
              puVar10 = auStack_100;
              func_0x00010bcdcf58(puVar10,&uStack_e0);
              iVar6 = (int)puVar10;
              func_0x00010bcdcde4();
              if (iVar6 == 0) {
                func_0x00010bcdcf08();
                FUN_10bcd5f80();
                if (iVar6 == 0) {
                  func_0x00010bcdd250();
                  goto LAB_10bcd7ed8;
                }
              }
              else {
                uStack_e8 = 0x7fffffff;
              }
              uVar21 = uStack_e8;
              func_0x00010bcdd250();
              uVar13 = uStack_e4;
            }
            bVar5 = false;
            *(undefined4 *)(ppuVar22 + 3) = uVar13;
            *(undefined4 *)((long)ppuVar22 + 0x1c) = uVar21;
            *(uint *)(ppuVar22 + 2) = *(uint *)(ppuVar22 + 2) | 3;
            bVar4 = true;
          }
          func_0x00010bcdd274();
          ppuVar22 = (undefined **)0x0;
          FUN_10bcd67bc();
          if (!bVar4) {
            ppuVar22 = (undefined **)0x0;
            goto LAB_10bcd7f08;
          }
          func_0x00010bcdcd64();
        } while (((ulong)ppuVar22 & 1) != 0);
        func_0x00010bcdcb28();
LAB_10bcd7f08:
        puVar11 = auStack_148;
        goto LAB_10bcd7f70;
      }
      uVar12 = param_3;
      func_0x00010bcdd3c0(auStack_130);
      ppuVar9 = ppuVar7;
      FUN_10bcdbea8();
      func_0x00010bcdd458();
      func_0x00010bcdcf34();
      func_0x00010bcdd1c0();
      func_0x00010bcdd06c();
      func_0x00010bcdd1a4();
      if ((uVar12 & 1) != 0) {
        func_0x00010bcdd6a8();
      }
      func_0x000107c30250(ppuVar9 + 3);
      ppuVar22 = unaff_x19;
      func_0x00010bcdcec4();
      func_0x00010bcdce9c();
      if (((ulong)ppuVar22 & 1) != 0) {
        ppuVar22 = unaff_x19;
        func_0x00010bcdd330();
        func_0x00010bcdd4b4();
        if ((int)ppuVar22 != 0) {
          func_0x00010bcdd458();
          func_0x00010bcdcf58();
          func_0x00010bcdd1c0();
          func_0x00010bcdcf6c();
          func_0x00010bcdcf08();
          FUN_10bcd5f80();
          if (((ulong)ppuVar22 & 1) != 0) {
            *(undefined4 *)(ppuVar9 + 5) = uStack_e0;
            *(uint *)(ppuVar9 + 2) = *(uint *)(ppuVar9 + 2) | 4;
            func_0x00010bcdce9c();
            ppuVar22 = (undefined **)*unaff_x19;
            func_0x00010bcdd3c8();
            func_0x00010bcdcf1c();
            if ((int)ppuVar22 != 0) {
              func_0x00010bcdd458();
              func_0x00010bcdd19c();
              ppuVar22 = unaff_x19;
              func_0x00010bcdd3c8();
              iVar6 = (int)ppuVar22;
              func_0x00010bcdce84();
              if (iVar6 == 0) goto LAB_10bcd7d38;
              do {
                func_0x00010bcdaf10(ppuVar9);
                ppuVar22 = unaff_x19;
                func_0x00010bcdd544();
                if ((int)ppuVar22 == 0) goto LAB_10bcd7d38;
                func_0x00010bcdcd64();
              } while (((ulong)ppuVar22 & 1) != 0);
              ppuVar9 = unaff_x19;
              func_0x00010bcdce84();
              ppuVar22 = ppuVar9;
              func_0x00010bcdce9c();
              if (((ulong)ppuVar9 & 1) == 0) goto LAB_10bcd7d3c;
            }
            func_0x00010bcdcb28();
            func_0x00010bcdd188();
            goto joined_r0x00010bcd7d30;
          }
LAB_10bcd7d38:
          func_0x00010bcdce9c();
        }
      }
LAB_10bcd7d3c:
      func_0x00010bcdd188();
      goto LAB_10bcd7f9c;
    }
  }
  lVar19 = 0;
  do {
    ppuVar9 = &PTR_PTR_113406410;
    if ((undefined **)unaff_x20[0xd] != (undefined **)0x0) {
      ppuVar9 = (undefined **)unaff_x20[0xd];
    }
    lVar20 = (long)*(int *)(ppuVar9 + 7);
    if (lVar20 <= lVar19) goto LAB_10bcd8098;
    func_0x00010bcdd43c();
    ppuVar22 = &puStack_c8;
    FUN_10bd12124(ppuVar22,0,*extraout_x8_00);
    bVar5 = iStack_a8 == 1;
    if (iStack_a8 < 2) {
      func_0x00010bcdd23c(lStack_b0);
      plVar1 = &lStack_b0;
      if (!bVar5) {
        plVar1 = extraout_x9;
      }
      if (((*(byte *)(*plVar1 + 0x20) & 1) == 0) &&
         (func_0x00010bcdd33c(), ((ulong)ppuVar22 & 1) != 0)) goto LAB_10bcd8074;
    }
    ppuVar22 = &puStack_c8;
    FUN_10bd121a4();
    lVar19 = lVar19 + 1;
  } while( true );
LAB_10bcd7f68:
  ppuVar22 = (undefined **)0x0;
LAB_10bcd7f6c:
  puVar11 = &uStack_e0;
LAB_10bcd7f70:
  FUN_10bcd67bc(puVar11);
  func_0x00010bcdcf44(auStack_130);
joined_r0x00010bcd7d30:
  if (((ulong)ppuVar22 & 1) == 0) {
LAB_10bcd7f9c:
    func_0x00010bcdd0ac();
  }
  goto LAB_10bcd7b38;
LAB_10bcd8074:
  uVar12 = uStack_98 & 0xfffffffffffffffc;
  func_0x000107c27cf4(uVar12,"true");
  ppuVar22 = &puStack_c8;
  FUN_10bd121a4();
  if ((uVar12 & 1) == 0) {
    func_0x00010bcdd07c();
LAB_10bcd8048:
    FUN_10bcd5e68();
    return 0;
  }
LAB_10bcd8098:
  lVar18 = 0;
  puStack_c8 = &UNK_10e52b660;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  do {
    lVar14 = (long)*(int *)(unaff_x20 + 4);
    bVar5 = lVar18 == lVar14;
    if (lVar14 <= lVar18) {
      if (lVar19 < lVar20) {
        func_0x00010bcdd07c();
        FUN_10bcd5e68();
        uVar17 = 0;
      }
      else {
LAB_10bcd8170:
        if (((ulong)*ppuVar7 & 1) != 0) {
          ppuVar7 = (undefined **)(*ppuVar7 + 7);
        }
        ppuVar22 = ppuVar7 + lVar14;
        for (; ppuVar7 != ppuVar22; ppuVar7 = ppuVar7 + 1) {
          pbVar16 = (byte *)(*(ulong *)(*ppuVar7 + 0x18) & 0xfffffffffffffffc);
          lVar19 = (long)(char)pbVar16[0x17];
          if (lVar19 < 0) {
            lVar19 = *(long *)(pbVar16 + 8);
            pbVar16 = *(byte **)pbVar16;
          }
          do {
            if (lVar19 == 0) goto LAB_10bcd81ec;
            pbVar15 = pbVar16 + 1;
            bVar2 = *pbVar16;
            lVar19 = lVar19 + -1;
            pbVar16 = pbVar15;
          } while ((bVar2 - 0x30 < 10) || (bVar2 == 0x5f || bVar2 - 0x41 < 0x1a));
          FUN_10bcd6690(*(undefined4 *)(*unaff_x19 + 0x20),*(undefined4 *)(*unaff_x19 + 0x24),
                        unaff_x19[1],*ppuVar7,0x10bcdc514);
LAB_10bcd81ec:
        }
LAB_10bcd815c:
        uVar17 = 1;
      }
      func_0x00010bcdb384(&puStack_c8);
      return uVar17;
    }
    func_0x00010bcdd41c(*ppuVar7);
    ppuVar9 = ppuVar7;
    if (!bVar5) {
      ppuVar9 = extraout_x9_00;
    }
    puVar8 = *ppuVar9;
    auStack_130[0] = *(uint *)(puVar8 + 0x28);
    Hint_Prefetch(puStack_c8,0,2,0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)auStack_130[0];
    func_0x00010bcdd458(SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8));
    func_0x00010941ec38();
    if (ppuVar22 != (undefined **)0x0) {
      if (lVar19 < lVar20) goto LAB_10bcd815c;
      lVar14 = (long)*(int *)(unaff_x20 + 4);
      goto LAB_10bcd8170;
    }
    uStack_e0 = *(undefined4 *)(puVar8 + 0x28);
    ppuVar22 = &puStack_c8;
    FUN_10bcdc448(auStack_130,ppuVar22,&uStack_e0);
    lVar18 = lVar18 + 1;
  } while( true );
}


