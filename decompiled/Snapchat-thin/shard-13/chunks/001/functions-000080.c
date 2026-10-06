/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a05c890; end: 10a05c8ab;  */

void FUN_10a05c890(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a05c8ac; end: 10a05c91b;  */

void FUN_10a05c8ac(long param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a044fac(param_1,param_4);
    puVar1 = *(undefined1 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined1 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a05c91c; end: 10a05c973;  */

void FUN_10a05c91c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x68;
  __Znwm();
  FUN_10a05c974();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a05c974; end: 10a05c9db;  */

void FUN_10a05c974(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110b9f6a8;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110c5ee10;
  plVar5 = (long *)*param_2;
  lVar1 = param_2[1];
  param_1[8] = plVar5;
  param_1[9] = lVar1;
  if (lVar1 != 0) {
    plVar5 = (long *)(lVar1 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5 = (long *)*param_2;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar1 = *plVar5;
  lVar2 = plVar5[1];
  param_1[0xb] = lVar1;
  param_1[0xc] = lVar2 - lVar1;
  return;
}



/* Entry: 10a05c9dc; end: 10a05c9fb;  */

void FUN_10a05c9dc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b9f6a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05c9fc; end: 10a05ca0b;  */

void FUN_10a05c9fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a05ca04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a05ca0c; end: 10a05d0fb;  */

/* WARNING: Removing unreachable block (ram,0x00010a05cbb0) */
/* WARNING: Removing unreachable block (ram,0x00010a05cc10) */

void FUN_10a05ca0c(long *param_1,long param_2)

{
  code *****pppppcVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  char cVar8;
  long lVar9;
  undefined8 *puVar10;
  code ******ppppppcVar11;
  code ******ppppppcVar12;
  code ******ppppppcVar13;
  code ******ppppppcVar14;
  code *****pppppcVar15;
  code *****pppppcVar16;
  long lVar17;
  long *plVar18;
  code *****pppppcStack_200;
  code *****pppppcStack_1f8;
  code ****ppppcStack_1f0;
  code ****ppppcStack_1e8;
  code ****ppppcStack_1e0;
  code ****ppppcStack_1d8;
  code ****ppppcStack_1d0;
  code ****ppppcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  code *****pppppcStack_190;
  code *****pppppcStack_188;
  code *****pppppcStack_180;
  code *****pppppcStack_178;
  long *plStack_170;
  long lStack_168;
  long lStack_160;
  long *plStack_158;
  long lStack_150;
  long lStack_148;
  undefined4 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined1 auStack_128 [56];
  long lStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [16];
  long *plStack_d0;
  code *****pppppcStack_b0;
  code *****pppppcStack_a8;
  undefined8 uStack_a0;
  code ****ppppcStack_98;
  code *****pppppcStack_90;
  code *****pppppcStack_88;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_168 = param_1[1];
  plStack_170 = (long *)*param_1;
  lStack_160 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  lStack_150 = param_1[4];
  plStack_158 = (long *)param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  lStack_148 = param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  uStack_140 = (undefined4)param_1[6];
  lStack_138 = param_1[7];
  lStack_130 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_128,param_1 + 9);
  lStack_f0 = param_1[0x10];
  uStack_e8 = (undefined4)param_1[0x11];
  FUN_10a0424c4(auStack_e0,param_1 + 0x12);
  puVar5 = PTR___DefaultRuneLocale_11034bcf8;
  lVar17 = *(long *)(param_2 + 0x10);
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x3f800000;
  if (plStack_d0 != (long *)0x0) {
    plVar18 = plStack_d0;
    do {
      pppppcVar15 = (code *****)plVar18[3];
      plVar4 = (long *)plVar18[2];
      if (-1 < (char)*(byte *)((long)plVar18 + 0x27)) {
        pppppcVar15 = (code *****)(ulong)*(byte *)((long)plVar18 + 0x27);
        plVar4 = plVar18 + 2;
      }
      pppppcStack_a8 = (code *****)0x0;
      uStack_a0 = (code *****)0x0;
      pppppcStack_b0 = (code *****)0x0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (&pppppcStack_b0,pppppcVar15,0);
      if (pppppcVar15 != (code *****)0x0) {
        pppppcVar16 = (code *****)0x0;
        do {
          cVar8 = *(char *)((long)plVar4 + (long)pppppcVar16);
          lVar9 = (long)cVar8;
          if ((-1 < lVar9) && ((*(uint *)(puVar5 + lVar9 * 4 + 0x3c) >> 0xf & 1) != 0)) {
            ___tolower();
            cVar8 = (char)lVar9;
          }
          pppppcVar1 = pppppcStack_a8;
          if (-1 < (long)uStack_a0) {
            pppppcVar1 = (code *****)((ulong)uStack_a0 >> 0x38);
          }
          if (pppppcVar1 < pppppcVar16) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10a05d00c);
            (*pcVar7)();
          }
          ppppppcVar11 = (code ******)pppppcStack_b0;
          if (-1 < (long)uStack_a0) {
            ppppppcVar11 = &pppppcStack_b0;
          }
          *(char *)((long)ppppppcVar11 + (long)pppppcVar16) = cVar8;
          pppppcVar16 = (code *****)((long)pppppcVar16 + 1);
        } while (pppppcVar15 != pppppcVar16);
      }
      puVar10 = &uStack_1c0;
      pppppcStack_190 = (code *****)&pppppcStack_b0;
      func_0x000104c5bc74(puVar10,&pppppcStack_b0,&UNK_10dd5b8f9,&pppppcStack_190,&ppppcStack_1d8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (puVar10 + 5,plVar18 + 5);
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
  }
  ppppcStack_1d8 = (code ****)0x0;
  ppppcStack_1d0 = (code ****)0x0;
  ppppcStack_1c8 = (code ****)0x0;
  uStack_a0 = (code *****)CONCAT17(0xc,(undefined7)uStack_a0);
  pppppcStack_b0 = (code *****)0x2d746e65746e6f63;
  pppppcStack_a8 = (code *****)CONCAT35(pppppcStack_a8._5_3_,0x65707974);
  puVar10 = &uStack_1c0;
  FUN_109ce5028(puVar10,&pppppcStack_b0);
  if (puVar10 != (undefined8 *)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&ppppcStack_1d8,puVar10 + 5);
  }
  ppppcStack_1f0 = (code ****)0x0;
  ppppcStack_1e8 = (code ****)0x0;
  ppppcStack_1e0 = (code ****)0x0;
  if ((lStack_138 != 0) && (lStack_f0 != 0)) {
    func_0x000107c2c4d8(&ppppcStack_1f0);
  }
  uVar6 = uStack_140;
  pppppcVar15 = *(code ******)(lVar17 + 0x50);
  ppppppcVar11 = (code ******)0x90;
  __Znwm();
  ppppppcVar11[4] = (code *****)0x0;
  ppppppcVar11[3] = (code *****)0x0;
  ppppppcVar11[2] = (code *****)0x0;
  ppppppcVar11[1] = (code *****)0x0;
  *ppppppcVar11 = (code *****)&PTR_FUN_110c322b8;
  ppppppcVar11[5] = pppppcVar15;
  *(undefined4 *)(ppppppcVar11 + 6) = uVar6;
  puVar10 = &uStack_1c0;
  FUN_10a0424c4(ppppppcVar11 + 7);
  ppppppcVar11[0xd] = (code *****)ppppcStack_1d0;
  ppppppcVar11[0xc] = (code *****)ppppcStack_1d8;
  ppppppcVar11[0xe] = (code *****)ppppcStack_1c8;
  ppppcStack_1d0 = (code ****)0x0;
  ppppcStack_1c8 = (code ****)0x0;
  ppppppcVar11[0x10] = (code *****)ppppcStack_1e8;
  ppppppcVar11[0xf] = (code *****)ppppcStack_1f0;
  ppppppcVar11[0x11] = (code *****)ppppcStack_1e0;
  ppppcStack_1f0 = (code ****)0x0;
  ppppcStack_1e8 = (code ****)0x0;
  ppppcStack_1e0 = (code ****)0x0;
  ppppcStack_1d8 = (code ****)0x0;
  ppppppcVar12 = (code ******)0x20;
  pppppcStack_200 = (code *****)ppppppcVar11;
  __Znwm();
  ppppppcVar13 = ppppppcVar12 + 1;
  *ppppppcVar13 = (code *****)0x0;
  *ppppppcVar12 = (code *****)&PTR_FUN_110b9db78;
  ppppppcVar12[2] = (code *****)0x0;
  ppppppcVar12[3] = (code *****)ppppppcVar11;
  pppppcStack_1f8 = (code *****)ppppppcVar12;
  if (ppppppcVar11[4] == (code *****)0x0) {
    do {
      cVar8 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar13,0x10);
      if (bVar2) {
        *ppppppcVar13 = (code *****)((long)*ppppppcVar13 + 1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    ppppppcVar14 = ppppppcVar12 + 2;
    do {
      cVar8 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar14,0x10);
      if (bVar2) {
        *ppppppcVar14 = (code *****)((long)*ppppppcVar14 + 1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    ppppppcVar11[3] = (code *****)ppppppcVar11;
    ppppppcVar11[4] = (code *****)ppppppcVar12;
LAB_10a05cd4c:
    do {
      pppppcVar15 = *ppppppcVar13;
      cVar8 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar13,0x10);
      if (bVar2) {
        *ppppppcVar13 = (code *****)((long)pppppcVar15 + -1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (pppppcVar15 == (code *****)0x0) {
      (*(code *)(*ppppppcVar12)[2])(ppppppcVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar12);
    }
  }
  else if (ppppppcVar11[4][1] == (code ****)0xffffffffffffffff) {
    do {
      cVar8 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar13,0x10);
      if (bVar2) {
        *ppppppcVar13 = (code *****)((long)*ppppppcVar13 + 1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    ppppppcVar14 = ppppppcVar12 + 2;
    do {
      cVar8 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar14,0x10);
      if (bVar2) {
        *ppppppcVar14 = (code *****)((long)*ppppppcVar14 + 1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    ppppppcVar11[3] = (code *****)ppppppcVar11;
    ppppppcVar11[4] = (code *****)ppppppcVar12;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    goto LAB_10a05cd4c;
  }
  ppppppcVar13 = *(code *******)(param_2 + 0x18);
  if (ppppppcVar13 == (code ******)0x0 || *(char *)(ppppppcVar13 + 8) != '\x02') {
    if ((ppppppcVar13 == (code ******)0x0) || (*(char *)(ppppppcVar13 + 8) != '\x01'))
    goto LAB_10a05cf3c;
    pppppcVar15 = *ppppppcVar13;
    pppppcStack_a8 = pppppcStack_1f8;
    pppppcStack_b0 = pppppcStack_200;
    if ((code ******)pppppcStack_1f8 != (code ******)0x0) {
      ppppppcVar14 = (code ******)(pppppcStack_1f8 + 1);
      do {
        cVar8 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar14,0x10);
        if (bVar2) {
          *ppppppcVar14 = (code *****)((long)*ppppppcVar14 + 1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    (*(code *)pppppcVar15)(&pppppcStack_b0,ppppppcVar13);
    if ((code ******)pppppcStack_a8 == (code ******)0x0) goto LAB_10a05cf3c;
    ppppppcVar13 = (code ******)(pppppcStack_a8 + 1);
    do {
      pppppcVar15 = *ppppppcVar13;
      cVar8 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar13,0x10);
      if (bVar2) {
        *ppppppcVar13 = (code *****)((long)pppppcVar15 + -1);
        cVar8 = ExclusiveMonitorsStatus();
      }
      ppppppcVar14 = (code ******)pppppcStack_a8;
    } while (cVar8 != '\0');
  }
  else {
    ppppppcVar11 = ppppppcVar13;
    FUN_10a688b40();
    pppppcVar15 = pppppcStack_1f8;
    if (ppppppcVar11 != (code ******)0x0) {
      *ppppppcVar11 =
           (code *****)CONCAT44((int)((ulong)*ppppppcVar11 >> 0x20) + 1,(int)*ppppppcVar11 + 1);
      FUN_10a05d168(*ppppppcVar13,&pppppcStack_200);
      iVar3 = *(int *)((long)ppppppcVar11 + 4) + -1;
      *(int *)((long)ppppppcVar11 + 4) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)ppppppcVar11 = 0;
      }
      goto LAB_10a05cf3c;
    }
    if (puVar10 == (undefined8 *)0x0) goto LAB_10a05cf3c;
    ppppcStack_98 = (code ****)ppppppcVar13[1];
    uStack_a0 = *ppppppcVar13;
    if (ppppppcVar13[1] != (code *****)0x0) {
      pppppcVar16 = ppppppcVar13[1] + 1;
      do {
        cVar8 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppcVar16,0x10);
        if (bVar2) {
          *pppppcVar16 = (code ****)((long)*pppppcVar16 + 1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    pppppcStack_180 = pppppcStack_200;
    pppppcStack_178 = pppppcStack_1f8;
    if ((code ******)pppppcStack_1f8 != (code ******)0x0) {
      ppppppcVar11 = (code ******)(pppppcStack_1f8 + 1);
      do {
        cVar8 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar11,0x10);
        if (bVar2) {
          *ppppppcVar11 = (code *****)((long)*ppppppcVar11 + 1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    pppppcStack_b0 = (code *****)FUN_10a05d36c;
    pppppcStack_a8 = (code *****)&PTR_FUN_110b9dbe0;
    pppppcStack_190 = (code *****)0x0;
    pppppcStack_188 = (code *****)0x0;
    pppppcStack_90 = pppppcStack_200;
    pppppcStack_88 = pppppcStack_1f8;
    if ((code ******)pppppcStack_1f8 != (code ******)0x0) {
      ppppppcVar11 = (code ******)(pppppcStack_1f8 + 1);
      do {
        cVar8 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar11,0x10);
        if (bVar2) {
          *ppppppcVar11 = (code *****)((long)*ppppppcVar11 + 1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    ppppppcVar11 = &pppppcStack_190;
    ppppppcVar12 = &pppppcStack_b0;
    FUN_10a4634ec(puVar10,&pppppcStack_b0);
    (*(code *)*pppppcStack_a8)(&pppppcStack_a8);
    if ((code ******)pppppcVar15 != (code ******)0x0) {
      ppppppcVar13 = (code ******)(pppppcVar15 + 1);
      do {
        pppppcVar16 = *ppppppcVar13;
        cVar8 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar13,0x10);
        if (bVar2) {
          *ppppppcVar13 = (code *****)((long)pppppcVar16 + -1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (pppppcVar16 == (code *****)0x0) {
        (*(code *)(*pppppcVar15)[2])(pppppcVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar15);
      }
    }
    if ((code ******)pppppcStack_188 == (code ******)0x0) goto LAB_10a05cf3c;
    ppppppcVar13 = (code ******)(pppppcStack_188 + 1);
    do {
      pppppcVar15 = *ppppppcVar13;
      cVar8 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar13,0x10);
      if (bVar2) {
        *ppppppcVar13 = (code *****)((long)pppppcVar15 + -1);
        cVar8 = ExclusiveMonitorsStatus();
      }
      ppppppcVar14 = (code ******)pppppcStack_188;
    } while (cVar8 != '\0');
  }
  if (pppppcVar15 == (code *****)0x0) {
    (*(code *)(*ppppppcVar14)[2])(ppppppcVar14);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar14);
  }
LAB_10a05cf3c:
  pppppcVar15 = pppppcStack_1f8;
  if ((code ******)pppppcStack_1f8 != (code ******)0x0) {
    ppppppcVar13 = (code ******)(pppppcStack_1f8 + 1);
    do {
      pppppcVar16 = *ppppppcVar13;
      cVar8 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar13,0x10);
      if (bVar2) {
        *ppppppcVar13 = (code *****)((long)pppppcVar16 + -1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (pppppcVar16 == (code *****)0x0) {
      (*(code *)(*pppppcStack_1f8)[2])(pppppcStack_1f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar15);
    }
  }
  if ((long)ppppcStack_1e0 < 0) {
    __ZdlPv(ppppcStack_1f0);
  }
  if ((long)ppppcStack_1c8 < 0) {
    __ZdlPv(ppppcStack_1d8);
  }
  func_0x000104c4f944(&uStack_1c0);
  func_0x000104c4f944(auStack_e0);
  plVar18 = &lStack_138;
  FUN_10a042634(plVar18);
  if (lStack_148 < 0) {
    plVar18 = plStack_158;
    __ZdlPv(plStack_158);
  }
  if (lStack_160 < 0) {
    plVar18 = plStack_170;
    __ZdlPv(plStack_170);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    (*(code *)*pppppcStack_a8)(ppppppcVar12 + 1);
    FUN_10a05d3e4(ppppppcVar11 + 2);
    func_0x00010a004dac(&pppppcStack_190);
    FUN_10a05d3e4(&pppppcStack_200);
    if ((long)ppppcStack_1e0 < 0) {
      __ZdlPv(ppppcStack_1f0);
    }
    if ((long)ppppcStack_1c8 < 0) {
      __ZdlPv(ppppcStack_1d8);
    }
    func_0x000104c4f944(&uStack_1c0);
    FUN_10a05bd10(&plStack_170);
    __Unwind_Resume(plVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
    return;
  }
  return;
}



/* Entry: 10a05d0fc; end: 10a05d0ff;  */

void FUN_10a05d0fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a05d100; end: 10a05d113;  */

void FUN_10a05d100(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05d114; end: 10a05d12b;  */

void FUN_10a05d114(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a05d124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a05d12c; end: 10a05d163;  */

undefined8 FUN_10a05d12c(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110b9dbc8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a05d164; end: 10a05d167;  */

void FUN_10a05d164(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05d168; end: 10a05d36b;  */

void FUN_10a05d168(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c35408;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a05d36c; end: 10a05d37b;  */

void FUN_10a05d36c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c35408;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a05d37c; end: 10a05d3a3;  */

long FUN_10a05d37c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a05d3e4(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
    }
  }
  return param_1 + 8;
}



/* Entry: 10a05d3a4; end: 10a05d3e3;  */

void FUN_10a05d3a4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110b9dbe0;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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
  return;
}



/* Entry: 10a05d3e4; end: 10a05d43b;  */

long FUN_10a05d3e4(long param_1)

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
    }
  }
  return param_1;
}



/* Entry: 10a05d43c; end: 10a05d47b;  */

long FUN_10a05d43c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x18);
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
    }
  }
  return param_1 + 0x10;
}



/* Entry: 10a05d47c; end: 10a05d577;  */

undefined1  [16] FUN_10a05d47c(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9c218;
  puVar1 = &UNK_10f630f1d;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110b9c218;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c42c58;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a05d578; end: 10a05d5db;  */

ulong FUN_10a05d578(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a05d5dc);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a05d5dc,3,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a05d5dc; end: 10a05d9eb;  */

/* WARNING: Possible PIC construction at 0x00010a05d9e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a05d9e4) */
/* WARNING: Removing unreachable block (ram,0x00010a05d9f8) */
/* WARNING: Removing unreachable block (ram,0x00010a05d9f4) */

void FUN_10a05d5dc(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined **ppuVar18;
  long *unaff_x19;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  long lVar19;
  long *unaff_x22;
  long lVar20;
  long lVar21;
  undefined8 unaff_x23;
  undefined8 uVar22;
  long lVar23;
  ulong unaff_x24;
  ulong uVar24;
  undefined ***unaff_x25;
  ulong uVar25;
  undefined ***unaff_x26;
  undefined ***pppuVar26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_140;
  undefined ***pppuStack_138;
  undefined8 uStack_130;
  undefined ***pppuStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  undefined8 uStack_108;
  undefined ***pppuStack_100;
  undefined8 uStack_f8;
  undefined ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined **appuStack_e0 [2];
  undefined ***pppuStack_d0;
  code *pcStack_a8;
  undefined **appuStack_a0 [2];
  undefined ***pppuStack_90;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar9 == (long *)0x0) {
    puVar13 = &UNK_10f68f52e;
  }
  else {
    plVar10 = param_2;
    FUN_10a053854(param_2,plVar9);
    if ((plVar10 != (long *)0x0) && (___dynamic_cast(), plVar10 != (long *)0x0)) {
      FUN_10a05d9ec(param_5);
      FUN_10a05da10(&uStack_130,param_2,param_4);
      FUN_10a05dcbc(&uStack_140,param_2,param_4 + 0x10);
      pppuVar5 = pppuStack_138;
      lVar16 = (long)*(char *)((long)plVar10 + 0x107);
      if (lVar16 < 0) {
        lVar16 = plVar10[0x1f];
      }
      if (lVar16 != 0) {
        uVar22 = *(undefined8 *)(plVar10[0x1c] + 0x888);
        uVar14 = 3;
        if ((int)plVar10[0x1d] != 5) {
          uVar14 = 1;
        }
        uStack_f8 = uStack_130;
        pppuStack_f0 = pppuStack_128;
        if (pppuStack_128 == (undefined ***)0x0) {
          pppuStack_90 = (undefined ***)0x0;
        }
        else {
          pppuVar11 = pppuStack_128 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
            if (bVar4) {
              *pppuVar11 = (undefined **)((long)*pppuVar11 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          pppuStack_90 = pppuStack_128;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
            if (bVar4) {
              *pppuVar11 = (undefined **)((long)*pppuVar11 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        appuStack_a0[0] = &PTR_DAT_110b9dc10;
        pppuVar11 = appuStack_a0;
        pcStack_a8 = FUN_10a05e024;
        uStack_108 = uStack_140;
        pppuStack_100 = pppuStack_138;
        if (pppuStack_138 == (undefined ***)0x0) {
          pppuStack_d0 = (undefined ***)0x0;
        }
        else {
          pppuVar26 = pppuStack_138 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar26,0x10);
            if (bVar4) {
              *pppuVar26 = (undefined **)((long)*pppuVar26 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          pppuStack_d0 = pppuStack_138;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar26,0x10);
            if (bVar4) {
              *pppuVar26 = (undefined **)((long)*pppuVar26 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        appuStack_e0[0] = &PTR_DAT_110b9dc28;
        pppuVar26 = appuStack_e0;
        uStack_e8 = 0x10a05e5e4;
        func_0x000107c2b054(auStack_120,&UNK_10f630f1d);
        FUN_10a76e51c(uVar22,plVar10 + 0x1e,(ulong)uVar14,&pcStack_a8,&uStack_e8,auStack_120);
        if (cStack_109 < '\0') {
          __ZdlPv(auStack_120[0]);
        }
        (*(code *)*appuStack_e0[0])(pppuVar26);
        if (pppuVar5 != (undefined ***)0x0) {
          pppuVar12 = pppuVar5 + 1;
          do {
            ppuVar18 = *pppuVar12;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
            if (bVar4) {
              *pppuVar12 = (undefined **)((long)ppuVar18 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppuVar18 == (undefined **)0x0) {
            (*(code *)(*pppuVar5)[2])(pppuVar5);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar5);
          }
        }
        (*(code *)*appuStack_a0[0])();
        pppuVar12 = pppuStack_f0;
        if (pppuStack_f0 != (undefined ***)0x0) {
          pppuVar2 = pppuStack_f0 + 1;
          do {
            ppuVar18 = *pppuVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
            if (bVar4) {
              *pppuVar2 = (undefined **)((long)ppuVar18 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppuVar18 == (undefined **)0x0) {
            (*(code *)(*pppuStack_f0)[2])(pppuStack_f0);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar11 = pppuVar12;
          }
        }
        if (pppuStack_138 != (undefined ***)0x0) {
          pppuVar12 = pppuStack_138 + 1;
          do {
            ppuVar18 = *pppuVar12;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
            if (bVar4) {
              *pppuVar12 = (undefined **)((long)ppuVar18 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppuVar18 == (undefined **)0x0) {
            (*(code *)(*pppuStack_138)[2])(pppuStack_138);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar11 = pppuStack_138;
          }
        }
        if (pppuStack_128 != (undefined ***)0x0) {
          pppuVar12 = pppuStack_128 + 1;
          do {
            ppuVar18 = *pppuVar12;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
            if (bVar4) {
              *pppuVar12 = (undefined **)((long)ppuVar18 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppuVar18 == (undefined **)0x0) {
            (*(code *)(*pppuStack_128)[2])(pppuStack_128);
            pppuVar11 = pppuStack_128;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        *param_1 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
          ___stack_chk_fail();
          if (cStack_109 < '\0') {
            __ZdlPv(auStack_120[0]);
          }
          (*(code *)*appuStack_e0[0])(pppuVar26);
          func_0x00010a042b54(&uStack_108);
          (*(code *)*appuStack_a0[0])(pppuStack_128);
          func_0x00010a042bac(&uStack_f8);
          func_0x00010a042b54(&uStack_140);
          func_0x00010a042bac(&uStack_130);
          unaff_x30 = 0x10a05d9e4;
          register0x00000008 = (BADSPACEBASE *)&uStack_140;
          unaff_x19 = plVar8;
          unaff_x20 = pppuVar11;
          unaff_x21 = pppuStack_128;
          unaff_x22 = plVar10;
          unaff_x23 = uVar22;
          unaff_x24 = (ulong)uVar14;
          unaff_x25 = pppuVar5;
          unaff_x26 = pppuVar26;
          unaff_x29 = puVar1;
        }
        plVar9 = plVar8 + 0x4b;
        lVar16 = plVar8[0x59];
        uVar15 = lVar16 - 1;
        plVar8[0x59] = uVar15;
        if (uVar15 < 8) {
          uVar15 = plVar9[lVar16 + 2];
          if (plVar8[0x5a] == uVar15) {
            return;
          }
        }
        else {
          uVar15 = *(ulong *)(plVar8[0x57] + -8);
          plVar8[0x57] = plVar8[0x57] + -8;
          if (plVar8[0x5a] == uVar15) {
            return;
          }
        }
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined ****)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined ****)((long)register0x00000008 + -0x48) = unaff_x25;
        *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined ****)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined ****)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        lVar16 = *plVar9;
        lVar21 = plVar8[0x4c];
        lVar19 = lVar21 - lVar16;
        uVar24 = lVar19 >> 4;
        if (uVar24 < uVar15) {
          uVar25 = uVar15 - uVar24;
          lVar23 = plVar8[0x4d];
          if ((ulong)(lVar23 - lVar21 >> 4) < uVar25) {
            if (uVar15 >> 0x3c == 0) {
              uVar17 = lVar23 - lVar16 >> 3;
              if (uVar17 <= uVar15) {
                uVar17 = uVar15;
              }
              if (0x7fffffffffffffef < (ulong)(lVar23 - lVar16)) {
                uVar17 = 0xfffffffffffffff;
              }
              *(long **)((long)register0x00000008 + -0x68) = plVar9;
              if (uVar17 >> 0x3c == 0) {
                lVar7 = uVar17 << 4;
                __Znwm();
                lVar21 = lVar7 + lVar19;
                _bzero(lVar21,uVar25 * 0x10);
                lVar20 = lVar21 + uVar24 * -0x10;
                _memcpy(lVar20,lVar16,lVar19);
                *plVar9 = lVar20;
                plVar8[0x4c] = lVar21 + uVar25 * 0x10;
                plVar8[0x4d] = lVar7 + uVar17 * 0x10;
                *(long *)((long)register0x00000008 + -0x78) = lVar16;
                *(long *)((long)register0x00000008 + -0x70) = lVar23;
                *(long *)((long)register0x00000008 + -0x88) = lVar16;
                *(long *)((long)register0x00000008 + -0x80) = lVar16;
                func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar6)();
          }
          _bzero(lVar21,uVar25 * 0x10);
          plVar8[0x4c] = lVar21 + uVar25 * 0x10;
        }
        else if (uVar15 < uVar24) {
          lVar16 = lVar16 + uVar15 * 0x10;
          while (lVar21 != lVar16) {
            lVar21 = lVar21 + -0x10;
            func_0x00010988c204(lVar21);
          }
          plVar8[0x4c] = lVar16;
        }
code_r0x00010988c138:
        plVar8[0x5a] = uVar15;
        return;
      }
      FUN_10a00946c(&UNK_10f631552);
      goto LAB_10a05d960;
    }
    puVar13 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar13);
LAB_10a05d960:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a05d964);
  (*pcVar6)();
}



/* Entry: 10a05d9ec; end: 10a05da0f;  */

void FUN_10a05d9ec(undefined8 param_1)

{
  undefined8 extraout_x8;
  undefined1 auStack_58 [39];
  undefined1 uStack_31;
  
  if ((int)param_1 == 2) {
    return;
  }
  FUN_10a052ee0(2,0,param_1);
  FUN_10a05da68(auStack_58);
  FUN_10a05dba0(extraout_x8,&uStack_31,auStack_58);
  FUN_10a688c1c(auStack_58);
  return;
}



/* Entry: 10a05da10; end: 10a05da67;  */

void FUN_10a05da10(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 uStack_21;
  
  FUN_10a05da68(auStack_48);
  FUN_10a05dba0(param_1,&uStack_21,auStack_48);
  FUN_10a688c1c(auStack_48);
  return;
}



/* Entry: 10a05da68; end: 10a05db9f;  */

void FUN_10a05da68(undefined8 param_1,long *param_2,int *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plStack_50;
  int iStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*param_3 == 7) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 2));
    plVar3 = param_2;
    plStack_38 = plVar2;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_38);
    if ((int)plVar3 != 0) {
      plVar2 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar4 = plVar2[0x48];
      if ((lVar4 == 0) ||
         (___dynamic_cast(lVar4,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar4 == 0))
      goto LAB_10a05db70;
      plStack_40 = plStack_38;
      plStack_38 = (long *)0x0;
      iStack_48 = 7;
      plStack_50 = param_2;
      FUN_10a688ac0(param_1,&plStack_50,*(undefined8 *)(lVar4 + 8));
      if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
        (**(code **)*plStack_40)();
      }
    }
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    if (((ulong)plVar3 & 1) != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a05db70:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a05db80);
  (*pcVar1)();
}



/* Entry: 10a05dba0; end: 10a05dbf7;  */

void FUN_10a05dba0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  FUN_10a05dbf8();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a05dbf8; end: 10a05dc73;  */

void FUN_10a05dbf8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b9fb20;
  *(undefined1 *)(param_1 + 0xb) = 3;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar5;
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
  lVar4 = param_2[3];
  uVar5 = param_2[2];
  param_1[6] = param_2[3];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 0xb) = 2;
  return;
}



/* Entry: 10a05dc74; end: 10a05dc93;  */

void FUN_10a05dc74(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b9fb20;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05dc94; end: 10a05dcbb;  */

undefined1  [16] FUN_10a05dc94(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a05dcb8);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a05dcbc; end: 10a05dd13;  */

void FUN_10a05dcbc(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 uStack_21;
  
  FUN_10a05dd14(auStack_48);
  FUN_10a05de4c(param_1,&uStack_21,auStack_48);
  FUN_10a688c1c(auStack_48);
  return;
}



/* Entry: 10a05dd14; end: 10a05de4b;  */

void FUN_10a05dd14(undefined8 param_1,long *param_2,int *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plStack_50;
  int iStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*param_3 == 7) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 2));
    plVar3 = param_2;
    plStack_38 = plVar2;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_38);
    if ((int)plVar3 != 0) {
      plVar2 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar4 = plVar2[0x48];
      if ((lVar4 == 0) ||
         (___dynamic_cast(lVar4,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar4 == 0))
      goto LAB_10a05de1c;
      plStack_40 = plStack_38;
      plStack_38 = (long *)0x0;
      iStack_48 = 7;
      plStack_50 = param_2;
      FUN_10a688ac0(param_1,&plStack_50,*(undefined8 *)(lVar4 + 8));
      if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
        (**(code **)*plStack_40)();
      }
    }
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    if (((ulong)plVar3 & 1) != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a05de1c:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a05de2c);
  (*pcVar1)();
}



/* Entry: 10a05de4c; end: 10a05dea3;  */

void FUN_10a05de4c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  FUN_10a05dea4();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a05dea4; end: 10a05df1f;  */

void FUN_10a05dea4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b9fc20;
  *(undefined1 *)(param_1 + 0xb) = 3;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar5;
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
  lVar4 = param_2[3];
  uVar5 = param_2[2];
  param_1[6] = param_2[3];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 0xb) = 2;
  return;
}



/* Entry: 10a05df20; end: 10a05df3f;  */

void FUN_10a05df20(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b9fc20;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05df40; end: 10a05df67;  */

undefined1  [16] FUN_10a05df40(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a05df64);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a05df68; end: 10a05e023;  */

void FUN_10a05df68(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f633527,0x1a);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a05e024);
  (*pcVar4)();
}



/* Entry: 10a05e024; end: 10a05e0a7;  */

void FUN_10a05e024(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_3[1];
  uStack_30 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_10a05e0a8(*(undefined8 *)(param_4 + 0x10),&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a05e0a8; end: 10a05e0cf;  */

void FUN_10a05e0a8(code **param_1,code **param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code **ppcVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  code *pcVar11;
  long lVar12;
  undefined **ppuVar13;
  code *pcVar14;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  code *pcStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  if ((param_1 == (code **)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    if ((param_1 != (code **)0x0) && (*(char *)(param_1 + 8) == '\x01')) {
      pcVar11 = *param_1;
      pcVar14 = param_2[1];
      if (param_2[1] != (code *)0x0) {
        pcVar1 = param_2[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      (*pcVar11)(&stack0xffffffffffffffd0,param_1);
      if (pcVar14 != (code *)0x0) {
        pcVar11 = pcVar14 + 8;
        do {
          lVar12 = *(long *)pcVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
          if (bVar4) {
            *(long *)pcVar11 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*(long *)pcVar14 + 0x10))(pcVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar14);
        }
      }
      return;
    }
    return;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar6 = param_1;
  ppcVar9 = param_2;
  FUN_10a688b40();
  if (ppcVar6 == (code **)0x0) {
    ppcVar10 = (code **)0x0;
    pppuVar7 = (undefined ***)0x0;
    if (ppcVar9 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar11 = param_1[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
          if (bVar4) {
            *(long *)pcVar11 = *(long *)pcVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_88 = *param_2;
      pppuVar8 = (undefined ***)param_2[1];
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_78 = FUN_10a05e530;
      ppuStack_70 = &PTR_FUN_110b9fb88;
      pcStack_98 = (code *)0x0;
      pppuStack_90 = (undefined ***)0x0;
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppcVar6 = &pcStack_98;
      param_1 = &pcStack_78;
      ppcVar10 = &pcStack_78;
      pppuStack_80 = pppuVar8;
      pcStack_58 = pcStack_88;
      pppuStack_50 = pppuVar8;
      FUN_10a4634ec(ppcVar9,ppcVar10);
      pppuVar7 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar2 = pppuVar8 + 1;
        do {
          ppuVar13 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuVar8)[2])(pppuVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
      pppuVar8 = pppuStack_90;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_90 + 1;
        do {
          ppuVar13 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuStack_90)[2])(pppuStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
    }
  }
  else {
    *ppcVar6 = (code *)CONCAT44((int)((ulong)*ppcVar6 >> 0x20) + 1,(int)*ppcVar6 + 1);
    pppuVar7 = (undefined ***)*param_1;
    FUN_10a05e364(pppuVar7,param_2);
    iVar5 = *(int *)((long)ppcVar6 + 4) + -1;
    *(int *)((long)ppcVar6 + 4) = iVar5;
    ppcVar10 = param_2;
    if (iVar5 == 0) {
      *(undefined4 *)ppcVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_1 + 1);
  func_0x00010a0536d4(ppcVar6 + 2);
  func_0x00010a004dac(&pcStack_98);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a05e364;
  ppcStack_c0 = ppcVar6;
  pppuStack_b8 = pppuVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,pppuVar8 + 1,*pppuVar8);
  func_0x000109884820(&puStack_c8,&puStack_d0,*pppuVar8);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**pppuVar8 + 0x30))(&puStack_d0);
  FUN_10a05e450(*pppuVar8,&puStack_d0,&puStack_c8,ppcVar10);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a05e0d0; end: 10a05e173;  */

void FUN_10a05e0d0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (*pcVar5)(&uStack_30,param_1);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a05e174; end: 10a05e363;  */

void FUN_10a05e174(code **param_1,code **param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code **ppcVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  undefined **ppuVar11;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  code *pcStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar6 = param_1;
  ppcVar9 = param_2;
  FUN_10a688b40();
  if (ppcVar6 == (code **)0x0) {
    ppcVar10 = (code **)0x0;
    pppuVar7 = (undefined ***)0x0;
    if (ppcVar9 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar1 = param_1[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_88 = *param_2;
      pppuVar8 = (undefined ***)param_2[1];
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_78 = FUN_10a05e530;
      ppuStack_70 = &PTR_FUN_110b9fb88;
      pcStack_98 = (code *)0x0;
      pppuStack_90 = (undefined ***)0x0;
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppcVar6 = &pcStack_98;
      param_1 = &pcStack_78;
      ppcVar10 = &pcStack_78;
      pppuStack_80 = pppuVar8;
      pcStack_58 = pcStack_88;
      pppuStack_50 = pppuVar8;
      FUN_10a4634ec(ppcVar9,ppcVar10);
      pppuVar7 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar2 = pppuVar8 + 1;
        do {
          ppuVar11 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar11 == (undefined **)0x0) {
          (*(code *)(*pppuVar8)[2])(pppuVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
      pppuVar8 = pppuStack_90;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_90 + 1;
        do {
          ppuVar11 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar11 == (undefined **)0x0) {
          (*(code *)(*pppuStack_90)[2])(pppuStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
    }
  }
  else {
    *ppcVar6 = (code *)CONCAT44((int)((ulong)*ppcVar6 >> 0x20) + 1,(int)*ppcVar6 + 1);
    pppuVar7 = (undefined ***)*param_1;
    FUN_10a05e364(pppuVar7,param_2);
    iVar5 = *(int *)((long)ppcVar6 + 4) + -1;
    *(int *)((long)ppcVar6 + 4) = iVar5;
    ppcVar10 = param_2;
    if (iVar5 == 0) {
      *(undefined4 *)ppcVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_1 + 1);
  func_0x00010a0536d4(ppcVar6 + 2);
  func_0x00010a004dac(&pcStack_98);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a05e364;
  ppcStack_c0 = ppcVar6;
  pppuStack_b8 = pppuVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,pppuVar8 + 1,*pppuVar8);
  func_0x000109884820(&puStack_c8,&puStack_d0,*pppuVar8);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**pppuVar8 + 0x30))(&puStack_d0);
  FUN_10a05e450(*pppuVar8,&puStack_d0,&puStack_c8,ppcVar10);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a05e364; end: 10a05e44f;  */

void FUN_10a05e364(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a05e450(*param_1,&puStack_30,&puStack_28,param_2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a05e450; end: 10a05e52f;  */

void FUN_10a05e450(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  FUN_10a052f68(aiStack_70,param_1,param_4);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*param_1 + 0x58))(param_1);
  ppuStack_48 = &piStack_40;
  uStack_60 = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a05e530; end: 10a05e53f;  */

void FUN_10a05e530(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&puStack_30,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_28,&puStack_30,*puVar1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_30);
  FUN_10a05e450(*puVar1,&puStack_30,&puStack_28,param_1 + 0x20);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a05e540; end: 10a05e567;  */

long FUN_10a05e540(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a0536d4(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
    }
  }
  return param_1 + 8;
}



/* Entry: 10a05e568; end: 10a05e613;  */

void FUN_10a05e568(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110b9fb88;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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
  return;
}



/* Entry: 10a05e614; end: 10a05e73f;  */

void FUN_10a05e614(code **param_1,long param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code **ppcVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined ***pppuStack_a0;
  code **ppcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  code *pcStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar5 = param_1;
  FUN_10a688b40();
  if (ppcVar5 == (code **)0x0) {
    pppuVar6 = (undefined ***)0x0;
    if (param_2 != 0) {
      pcStack_50 = param_1[1];
      pcStack_58 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar1 = param_1[1] + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar3) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_68 = FUN_10a05e8a0;
      ppuStack_60 = &PTR_DAT_110b9fa70;
      ppcVar5 = &pcStack_68;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_10a4634ec(param_2,&pcStack_68);
      pppuVar6 = &ppuStack_60;
      (*(code *)*ppuStack_60)();
    }
  }
  else {
    *ppcVar5 = (code *)CONCAT44((int)((ulong)*ppcVar5 >> 0x20) + 1,(int)*ppcVar5 + 1);
    pppuVar6 = (undefined ***)*param_1;
    FUN_10a05e740();
    iVar4 = *(int *)((long)ppcVar5 + 4) + -1;
    *(int *)((long)ppcVar5 + 4) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)ppcVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(ppcVar5 + 1);
  func_0x00010a004dac(&uStack_78);
  pppuVar7 = pppuVar6;
  __Unwind_Resume();
  pcStack_88 = FUN_10a05e740;
  pppuStack_a0 = pppuVar6;
  ppcStack_98 = ppcVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_b0,pppuVar7 + 1,*pppuVar7);
  func_0x000109884820(&puStack_a8,&puStack_b0,*pppuVar7);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  (**(code **)(**pppuVar7 + 0x30))(&puStack_b0);
  FUN_10a05e824(*pppuVar7,&puStack_b0,&puStack_a8);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10a05e740; end: 10a05e823;  */

void FUN_10a05e740(undefined8 *param_1)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a05e824(*param_1,&puStack_30,&puStack_28);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a05e824; end: 10a05e89f;  */

void FUN_10a05e824(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  (**(code **)(*param_1 + 0x58))();
  puStack_48 = &uStack_40;
  uStack_60 = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_70);
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a05e8a0; end: 10a05e907;  */

void FUN_10a05e8a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&puStack_30,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_28,&puStack_30,*puVar1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_30);
  FUN_10a05e824(*puVar1,&puStack_30,&puStack_28);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a05e908; end: 10a05e9c7;  */

void FUN_10a05e908(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a05e9c8(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((long *)param_2[0x5c] != (long *)0x0) {
    (**(code **)(*(long *)param_2[0x5c] + 0x40))();
  }
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a05e9c8; end: 10a05ea2f;  */

void FUN_10a05e9c8(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x28;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a05e9c8(plVar4,param_2);
  FUN_10a052e3c(param_4);
  if ((long *)plVar4[0x5c] != (long *)0x0) {
    (**(code **)(*(long *)plVar4[0x5c] + 0x48))();
  }
  *extraout_x8 = 0;
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a05ea30; end: 10a05eaef;  */

void FUN_10a05ea30(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a05e9c8(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((long *)param_2[0x5c] != (long *)0x0) {
    (**(code **)(*(long *)param_2[0x5c] + 0x48))();
  }
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a05eaf0; end: 10a05ebab;  */

void FUN_10a05eaf0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a05ec9c(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 0x56);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a05ebac; end: 10a05ec9b;  */

void FUN_10a05ebac(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a05e9c8(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a05ec88);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)(param_2 + 0x56) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a05ec9c; end: 10a05ed03;  */

void FUN_10a05ec9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined1 *in_stack_ffffffffffffff70;
  ulong in_stack_ffffffffffffff78;
  ulong in_stack_ffffffffffffff80;
  undefined8 in_stack_ffffffffffffff88;
  
  lVar9 = param_1;
  func_0x000109898688();
  if (lVar9 != 0) {
    FUN_10a052c2c(param_1,lVar9);
    if (param_1 != 0) {
      param_4 = 0x28;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar4 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar4 == 1) {
    return;
  }
  plVar5 = (long *)0x1;
  uVar8 = 0;
  FUN_10a052ee0(1,0,puVar4);
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10a05ec9c(plVar5,uVar8);
  FUN_10a052e3c(param_4);
  if (*(char *)((long)plVar7 + 0x2cf) < '\0') {
    func_0x000107c3192c(&stack0xffffffffffffff70,plVar7[0x57],plVar7[0x58]);
  }
  else {
    in_stack_ffffffffffffff78 = plVar7[0x58];
    in_stack_ffffffffffffff70 = (undefined1 *)plVar7[0x57];
    in_stack_ffffffffffffff80 = plVar7[0x59];
  }
  puVar1 = in_stack_ffffffffffffff70;
  if (-1 < (long)in_stack_ffffffffffffff80) {
    in_stack_ffffffffffffff78 = in_stack_ffffffffffffff80 >> 0x38;
    puVar1 = &stack0xffffffffffffff70;
  }
  (**(code **)(*plVar5 + 0x128))(&stack0xffffffffffffff88,plVar5,puVar1,in_stack_ffffffffffffff78);
  *extraout_x8 = 6;
  *(undefined8 *)(extraout_x8 + 2) = in_stack_ffffffffffffff88;
  if ((long)in_stack_ffffffffffffff80 < 0) {
    __ZdlPv(in_stack_ffffffffffffff70);
  }
  plVar5 = plVar6 + 0x4b;
  lVar9 = plVar6[0x59];
  uVar10 = lVar9 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar5[lVar9 + 2];
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  lVar9 = *plVar5;
  lVar14 = plVar6[0x4c];
  lVar12 = lVar14 - lVar9;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar10) {
    uVar17 = uVar10 - uVar16;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar15 - lVar9 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar9)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_98 = plVar5;
        if (uVar11 >> 0x3c == 0) {
          lVar3 = uVar11 << 4;
          __Znwm();
          lVar14 = lVar3 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar9,lVar12);
          *plVar5 = lVar13;
          plVar6[0x4c] = lVar14 + uVar17 * 0x10;
          plVar6[0x4d] = lVar3 + uVar11 * 0x10;
          lStack_b8 = lVar9;
          lStack_b0 = lVar9;
          lStack_a8 = lVar9;
          lStack_a0 = lVar15;
          func_0x00010988c1b8(&lStack_b8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar14,uVar17 * 0x10);
    plVar6[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar10 < uVar16) {
    lVar9 = lVar9 + uVar10 * 0x10;
    while (lVar14 != lVar9) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar6[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a05ed04; end: 10a05ed27;  */

void FUN_10a05ed04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *in_stack_ffffffffffffff90;
  ulong in_stack_ffffffffffffff98;
  ulong in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  uVar7 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10a05ec9c(plVar4,uVar7);
  FUN_10a052e3c(param_4);
  if (*(char *)((long)plVar6 + 0x2cf) < '\0') {
    func_0x000107c3192c(&stack0xffffffffffffff90,plVar6[0x57],plVar6[0x58]);
  }
  else {
    in_stack_ffffffffffffff98 = plVar6[0x58];
    in_stack_ffffffffffffff90 = (undefined1 *)plVar6[0x57];
    in_stack_ffffffffffffffa0 = plVar6[0x59];
  }
  puVar1 = in_stack_ffffffffffffff90;
  if (-1 < (long)in_stack_ffffffffffffffa0) {
    in_stack_ffffffffffffff98 = in_stack_ffffffffffffffa0 >> 0x38;
    puVar1 = &stack0xffffffffffffff90;
  }
  (**(code **)(*plVar4 + 0x128))(&stack0xffffffffffffffa8,plVar4,puVar1,in_stack_ffffffffffffff98);
  *extraout_x8 = 6;
  *(undefined8 *)(extraout_x8 + 2) = in_stack_ffffffffffffffa8;
  if ((long)in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(in_stack_ffffffffffffff90);
  }
  plVar4 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar9 = lVar8 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar4[lVar8 + 2];
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_78 = plVar4;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar4 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_98 = lVar8;
          lStack_90 = lVar8;
          lStack_88 = lVar8;
          lStack_80 = lVar14;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10a05ed28; end: 10a05ee6f;  */

void FUN_10a05ed28(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a05ec9c(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (*(char *)((long)plVar5 + 0x2cf) < '\0') {
    func_0x000107c3192c(&stack0xffffffffffffffa0,plVar5[0x57],plVar5[0x58]);
  }
  else {
    in_stack_ffffffffffffffa8 = plVar5[0x58];
    in_stack_ffffffffffffffa0 = (undefined1 *)plVar5[0x57];
    in_stack_ffffffffffffffb0 = plVar5[0x59];
  }
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a05ee70; end: 10a05ef6b;  */

void FUN_10a05ee70(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a05e9c8(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a00e630(plVar4,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a05ef6c; end: 10a05efb3;  */

void FUN_10a05ef6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x210;
  uStack_30 = param_3;
  uStack_28 = param_2;
  FUN_10a05f1bc(lVar1,&uStack_28);
  if (lVar1 == 0) {
    FUN_10a05f2b0(param_1 + 0x1e8,&uStack_30,&uStack_30);
  }
  return;
}



/* Entry: 10a05efb4; end: 10a05f1bb;  */

void FUN_10a05efb4(ulong param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined **appuStack_c0 [2];
  char cStack_a9;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109887da8(appuStack_c0,&UNK_10e4908dd,0x52);
  pppuVar1 = (undefined ***)appuStack_c0[0];
  if (-1 < cStack_a9) {
    pppuVar1 = appuStack_c0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9dc40;
  ppuVar2 = (undefined **)&UNK_10f630f1d;
  if (pppuVar1 != (undefined ***)0x0) {
    ppuVar2 = (undefined **)pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,ppuVar2);
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a8 = (undefined **)pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110b9dc40;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_40,&ppuStack_a8);
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a05f19c;
    FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10a05fdbc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a05f19c;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10a060374,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar7 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar7) {
    uVar3 = *(undefined4 *)(lVar7 + -0x50);
    uVar5 = *(undefined4 *)(lVar7 + -0x4c);
    uVar4 = *(undefined4 *)(lVar7 + -0x48);
    uVar6 = *(undefined4 *)(lVar7 + -0x44);
    uVar8 = *(undefined4 *)(lVar7 + -0x18);
    *(long *)(param_1 + 0x170) = lVar7 + -0x68;
    uVar10 = param_1;
    FUN_10a0051e8(param_1,uVar3,uVar5,uVar8,uVar4,uVar6);
    if ((uVar10 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a05f19c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a05f1a0);
  (*pcVar9)();
}



/* Entry: 10a05f1bc; end: 10a05f2af;  */

long FUN_10a05f1bc(long *param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar6 = *(ulong *)(*param_2 + 8);
  if ((long)uVar6 < 0) {
    pbVar3 = (byte *)(uVar6 & 0x7fffffffffffffff);
    uVar7 = 0x1505;
    do {
      uVar6 = uVar7;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      uVar7 = uVar6 * 0x21 ^ (ulong)bVar1;
    } while ((ulong)bVar1 != 0);
  }
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar6;
      if (uVar7 <= uVar6) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar6 / uVar7;
        }
        uVar9 = uVar6 - uVar9 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      do {
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uVar5 = plVar4[1];
        if (uVar6 == uVar5) {
          uVar5 = plVar4[2];
          FUN_10a042ab0(uVar5,*param_2);
          if ((uVar5 & 1) != 0) {
            return (long)plVar4;
          }
        }
        else {
          if ((uVar7 & uVar8) == 0) {
            uVar5 = uVar5 & uVar8;
          }
          else if (uVar7 <= uVar5) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar5 / uVar7;
            }
            uVar5 = uVar5 - uVar2 * uVar7;
          }
          if (uVar5 != uVar9) {
            return 0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a05f2b0; end: 10a05f4eb;  */

undefined1  [16] FUN_10a05f2b0(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar3 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar3 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar11 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x24 = uVar11 & uVar5;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar8; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 == uVar11) {
          if (plVar10[2] == uVar3) {
            uVar2 = 0;
            goto LAB_10a05f4b8;
          }
        }
        else {
          if ((uVar7 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar7 <= uVar9) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar1 * uVar7;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar10 = (long *)0x18;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar11;
  plVar10[2] = *param_3;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar7) {
      uVar3 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar3 = uVar3 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    FUN_10a05f4ec(param_1,uVar3);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar3 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar10 = *plVar4;
    *plVar4 = (long)plVar10;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar10 == 0) goto LAB_10a05f4a8;
    uVar3 = *(ulong *)(*plVar10 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar3 = uVar3 & uVar7 - 1;
    }
    else if (uVar7 <= uVar3) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar3 / uVar7;
      }
      uVar3 = uVar3 - uVar11 * uVar7;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar10 = *plVar4;
  }
  *plVar4 = (long)plVar10;
LAB_10a05f4a8:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a05f4b8:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 10a05f4ec; end: 10a05f5bb;  */

void FUN_10a05f4ec(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *extraout_x8;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x25;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte bStack_80;
  long lStack_78;
  
  if ((long)param_2 - 1U == 0) {
    param_2 = (undefined8 *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  puVar14 = (undefined8 *)param_1[1];
  if (puVar14 > param_2 || param_2 == puVar14) {
    if (puVar14 <= param_2) {
      return;
    }
    puVar13 = (undefined8 *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((puVar14 < (undefined8 *)0x3) || (((ulong)puVar14 & (long)puVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((undefined8 *)0x1 < puVar13) {
      puVar13 = (undefined8 *)(1L << (-LZCOUNT((long)puVar13 - 1) & 0x3fU));
    }
    if (param_2 <= puVar13) {
      param_2 = puVar13;
    }
    if (puVar14 <= param_2) {
      return;
    }
  }
  if (param_2 == (undefined8 *)0x0) {
    lVar5 = *param_1;
    *param_1 = 0;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
    return;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar5 = (long)param_2 << 3;
    __Znwm();
    lVar6 = *param_1;
    *param_1 = lVar5;
    if (lVar6 != 0) {
      __ZdlPv();
    }
    puVar14 = (undefined8 *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar14 * 8) = 0;
      puVar14 = (undefined8 *)((long)puVar14 + 1);
    } while (param_2 != puVar14);
    plVar8 = (long *)param_1[2];
    if (plVar8 == (long *)0x0) {
      return;
    }
    puVar14 = (undefined8 *)plVar8[1];
    uVar7 = (long)param_2 - 1;
    if (((ulong)param_2 & uVar7) == 0) {
      puVar14 = (undefined8 *)((ulong)puVar14 & uVar7);
    }
    else if (param_2 <= puVar14) {
      uVar16 = 0;
      if (param_2 != (undefined8 *)0x0) {
        uVar16 = (ulong)puVar14 / (ulong)param_2;
      }
      puVar14 = (undefined8 *)((long)puVar14 - uVar16 * (long)param_2);
    }
    *(long **)(*param_1 + (long)puVar14 * 8) = param_1 + 2;
    plVar11 = (long *)*plVar8;
    while (plVar11 != (long *)0x0) {
      puVar13 = (undefined8 *)plVar11[1];
      if (((ulong)param_2 & uVar7) == 0) {
        puVar13 = (undefined8 *)((ulong)puVar13 & uVar7);
      }
      else if (param_2 <= puVar13) {
        uVar16 = 0;
        if (param_2 != (undefined8 *)0x0) {
          uVar16 = (ulong)puVar13 / (ulong)param_2;
        }
        puVar13 = (undefined8 *)((long)puVar13 - uVar16 * (long)param_2);
      }
      plVar12 = plVar11;
      if (puVar13 != puVar14) {
        lVar5 = *param_1;
        if (*(long *)(lVar5 + (long)puVar13 * 8) == 0) {
          *(long **)(lVar5 + (long)puVar13 * 8) = plVar8;
          puVar14 = puVar13;
        }
        else {
          *plVar8 = *plVar11;
          *plVar11 = **(undefined8 **)(lVar5 + (long)puVar13 * 8);
          **(long **)(lVar5 + (long)puVar13 * 8) = (long)plVar11;
          plVar12 = plVar8;
        }
      }
      plVar8 = plVar12;
      plVar11 = (long *)*plVar12;
    }
    return;
  }
  func_0x000109ffded8();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  if (param_2[1] != 0) {
    plVar8 = (long *)(param_2[1] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  if (param_2[3] != 0) {
    plVar8 = (long *)(param_2[3] + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  bStack_80 = 2;
  plVar8 = (long *)0x30;
  __Znwm();
  plVar11 = plVar8 + 1;
  *plVar11 = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110b9fc88;
  plVar12 = plVar8 + 3;
  *plVar12 = (long)&PTR_FUN_110c0f9b0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  uVar7 = ((ulong)(uint)((int)plVar12 << 3) + 8 ^ (ulong)plVar12 >> 0x20) * -0x622015f714c7d297;
  uVar7 = ((ulong)plVar12 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar16 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[4];
  plStack_d8 = plVar12;
  plStack_d0 = plVar8;
  if (uVar7 != 0) {
    uVar9 = uVar7 - 1;
    if ((uVar7 & uVar9) == 0) {
      unaff_x25 = uVar9 & uVar16;
    }
    else {
      unaff_x25 = uVar16;
      if (uVar7 <= uVar16) {
        uVar10 = 0;
        if (uVar7 != 0) {
          uVar10 = uVar16 / uVar7;
        }
        unaff_x25 = uVar16 - uVar10 * uVar7;
      }
    }
    puVar14 = *(undefined8 **)(param_1[3] + unaff_x25 * 8);
    if (puVar14 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar14; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar10 = plVar15[1];
        if (uVar10 == uVar16) {
          if ((long *)plVar15[2] == plVar12) goto LAB_10a05f940;
        }
        else {
          if ((uVar7 & uVar9) == 0) {
            uVar10 = uVar10 & uVar9;
          }
          else if (uVar7 <= uVar10) {
            uVar3 = 0;
            if (uVar7 != 0) {
              uVar3 = uVar10 / uVar7;
            }
            uVar10 = uVar10 - uVar3 * uVar7;
          }
          if (uVar10 != unaff_x25) break;
        }
      }
    }
  }
  plVar15 = (long *)0x68;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar16;
  plVar15[2] = (long)plVar12;
  plVar15[3] = (long)plVar8;
  plStack_d8 = (long *)0x0;
  plStack_d0 = (long *)0x0;
  plStack_c8 = plVar15 + 4;
  *(undefined1 *)(plVar15 + 0xc) = 3;
  FUN_10a05fae4(&plStack_c8,&uStack_c0,2);
  *(byte *)(plVar15 + 0xc) = bStack_80;
  if ((uVar7 == 0) || (*(float *)(param_1 + 7) * (float)uVar7 < (float)(param_1[6] + 1))) {
    uVar9 = 1;
    if (2 < uVar7) {
      uVar9 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar9 = uVar9 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[6] + 1) / *(float *)(param_1 + 7));
    if (uVar9 <= uVar7) {
      uVar9 = uVar7;
    }
    FUN_10a05fb5c(param_1 + 3,uVar9);
    uVar7 = param_1[4];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x25 = uVar7 - 1 & uVar16;
    }
    else {
      unaff_x25 = uVar16;
      if (uVar7 <= uVar16) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar16 / uVar7;
        }
        unaff_x25 = uVar16 - uVar9 * uVar7;
      }
    }
  }
  lVar5 = param_1[3];
  plVar8 = *(long **)(lVar5 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 5;
    *plVar15 = *plVar8;
    *plVar8 = (long)plVar15;
    *(long **)(lVar5 + unaff_x25 * 8) = plVar8;
    if (*plVar15 != 0) {
      uVar16 = *(ulong *)(*plVar15 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar16 = uVar16 & uVar7 - 1;
      }
      else if (uVar7 <= uVar16) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar16 / uVar7;
        }
        uVar16 = uVar16 - uVar9 * uVar7;
      }
      plVar8 = (long *)(param_1[3] + uVar16 * 8);
      goto LAB_10a05f9e4;
    }
  }
  else {
    *plVar15 = *plVar8;
LAB_10a05f9e4:
    *plVar8 = (long)plVar15;
  }
  param_1[6] = param_1[6] + 1;
LAB_10a05f9f4:
  if (*(char *)(param_1[9] + 8) == '\x01') {
    (*(code *)param_1[8])(param_1);
  }
  lVar5 = plVar15[3];
  lVar6 = plVar15[2];
  extraout_x8[1] = plVar15[3];
  *extraout_x8 = lVar6;
  if (lVar5 != 0) {
    plVar8 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((ulong)bStack_80 < 4) {
    puVar14 = &uStack_c0;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_80])(puVar14);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
    FUN_10a05fd2c(1,plVar15);
    FUN_10a004978(&plStack_d8);
    if ((ulong)bStack_80 < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[bStack_80])(&uStack_c0);
      __Unwind_Resume(puVar14);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a05fae4);
  (*pcVar4)();
LAB_10a05f940:
  do {
    lVar5 = *plVar11;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  goto LAB_10a05f9f4;
}



/* Entry: 10a05f5bc; end: 10a05f6f7;  */

void FUN_10a05f5bc(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *extraout_x8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x25;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte bStack_80;
  long lStack_78;
  
  if (param_2 == (undefined8 *)0x0) {
    lVar5 = *param_1;
    *param_1 = 0;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
    return;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar5 = (long)param_2 << 3;
    __Znwm();
    lVar6 = *param_1;
    *param_1 = lVar5;
    if (lVar6 != 0) {
      __ZdlPv();
    }
    puVar7 = (undefined8 *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar7 * 8) = 0;
      puVar7 = (undefined8 *)((long)puVar7 + 1);
    } while (param_2 != puVar7);
    plVar9 = (long *)param_1[2];
    if (plVar9 == (long *)0x0) {
      return;
    }
    puVar7 = (undefined8 *)plVar9[1];
    uVar8 = (long)param_2 - 1;
    if (((ulong)param_2 & uVar8) == 0) {
      puVar7 = (undefined8 *)((ulong)puVar7 & uVar8);
    }
    else if (param_2 <= puVar7) {
      uVar16 = 0;
      if (param_2 != (undefined8 *)0x0) {
        uVar16 = (ulong)puVar7 / (ulong)param_2;
      }
      puVar7 = (undefined8 *)((long)puVar7 - uVar16 * (long)param_2);
    }
    *(long **)(*param_1 + (long)puVar7 * 8) = param_1 + 2;
    plVar12 = (long *)*plVar9;
    while (plVar12 != (long *)0x0) {
      puVar14 = (undefined8 *)plVar12[1];
      if (((ulong)param_2 & uVar8) == 0) {
        puVar14 = (undefined8 *)((ulong)puVar14 & uVar8);
      }
      else if (param_2 <= puVar14) {
        uVar16 = 0;
        if (param_2 != (undefined8 *)0x0) {
          uVar16 = (ulong)puVar14 / (ulong)param_2;
        }
        puVar14 = (undefined8 *)((long)puVar14 - uVar16 * (long)param_2);
      }
      plVar13 = plVar12;
      if (puVar14 != puVar7) {
        lVar5 = *param_1;
        if (*(long *)(lVar5 + (long)puVar14 * 8) == 0) {
          *(long **)(lVar5 + (long)puVar14 * 8) = plVar9;
          puVar7 = puVar14;
        }
        else {
          *plVar9 = *plVar12;
          *plVar12 = **(undefined8 **)(lVar5 + (long)puVar14 * 8);
          **(long **)(lVar5 + (long)puVar14 * 8) = (long)plVar12;
          plVar13 = plVar9;
        }
      }
      plVar9 = plVar13;
      plVar12 = (long *)*plVar13;
    }
    return;
  }
  func_0x000109ffded8();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  if (param_2[1] != 0) {
    plVar9 = (long *)(param_2[1] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  if (param_2[3] != 0) {
    plVar9 = (long *)(param_2[3] + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  bStack_80 = 2;
  plVar9 = (long *)0x30;
  __Znwm();
  plVar12 = plVar9 + 1;
  *plVar12 = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_FUN_110b9fc88;
  plVar13 = plVar9 + 3;
  *plVar13 = (long)&PTR_FUN_110c0f9b0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  uVar8 = ((ulong)(uint)((int)plVar13 << 3) + 8 ^ (ulong)plVar13 >> 0x20) * -0x622015f714c7d297;
  uVar8 = ((ulong)plVar13 >> 0x20 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  uVar16 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = param_1[4];
  plStack_d8 = plVar13;
  plStack_d0 = plVar9;
  if (uVar8 != 0) {
    uVar10 = uVar8 - 1;
    if ((uVar8 & uVar10) == 0) {
      unaff_x25 = uVar10 & uVar16;
    }
    else {
      unaff_x25 = uVar16;
      if (uVar8 <= uVar16) {
        uVar11 = 0;
        if (uVar8 != 0) {
          uVar11 = uVar16 / uVar8;
        }
        unaff_x25 = uVar16 - uVar11 * uVar8;
      }
    }
    puVar7 = *(undefined8 **)(param_1[3] + unaff_x25 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar7; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar11 = plVar15[1];
        if (uVar11 == uVar16) {
          if ((long *)plVar15[2] == plVar13) goto LAB_10a05f940;
        }
        else {
          if ((uVar8 & uVar10) == 0) {
            uVar11 = uVar11 & uVar10;
          }
          else if (uVar8 <= uVar11) {
            uVar3 = 0;
            if (uVar8 != 0) {
              uVar3 = uVar11 / uVar8;
            }
            uVar11 = uVar11 - uVar3 * uVar8;
          }
          if (uVar11 != unaff_x25) break;
        }
      }
    }
  }
  plVar15 = (long *)0x68;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar16;
  plVar15[2] = (long)plVar13;
  plVar15[3] = (long)plVar9;
  plStack_d8 = (long *)0x0;
  plStack_d0 = (long *)0x0;
  plStack_c8 = plVar15 + 4;
  *(undefined1 *)(plVar15 + 0xc) = 3;
  FUN_10a05fae4(&plStack_c8,&uStack_c0,2);
  *(byte *)(plVar15 + 0xc) = bStack_80;
  if ((uVar8 == 0) || (*(float *)(param_1 + 7) * (float)uVar8 < (float)(param_1[6] + 1))) {
    uVar10 = 1;
    if (2 < uVar8) {
      uVar10 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar10 = uVar10 | uVar8 << 1;
    uVar8 = (ulong)((float)(param_1[6] + 1) / *(float *)(param_1 + 7));
    if (uVar10 <= uVar8) {
      uVar10 = uVar8;
    }
    FUN_10a05fb5c(param_1 + 3,uVar10);
    uVar8 = param_1[4];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x25 = uVar8 - 1 & uVar16;
    }
    else {
      unaff_x25 = uVar16;
      if (uVar8 <= uVar16) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar16 / uVar8;
        }
        unaff_x25 = uVar16 - uVar10 * uVar8;
      }
    }
  }
  lVar5 = param_1[3];
  plVar9 = *(long **)(lVar5 + unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 5;
    *plVar15 = *plVar9;
    *plVar9 = (long)plVar15;
    *(long **)(lVar5 + unaff_x25 * 8) = plVar9;
    if (*plVar15 != 0) {
      uVar16 = *(ulong *)(*plVar15 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar16 = uVar16 & uVar8 - 1;
      }
      else if (uVar8 <= uVar16) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar16 / uVar8;
        }
        uVar16 = uVar16 - uVar10 * uVar8;
      }
      plVar9 = (long *)(param_1[3] + uVar16 * 8);
      goto LAB_10a05f9e4;
    }
  }
  else {
    *plVar15 = *plVar9;
LAB_10a05f9e4:
    *plVar9 = (long)plVar15;
  }
  param_1[6] = param_1[6] + 1;
LAB_10a05f9f4:
  if (*(char *)(param_1[9] + 8) == '\x01') {
    (*(code *)param_1[8])(param_1);
  }
  lVar5 = plVar15[3];
  lVar6 = plVar15[2];
  extraout_x8[1] = plVar15[3];
  *extraout_x8 = lVar6;
  if (lVar5 != 0) {
    plVar9 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((ulong)bStack_80 < 4) {
    puVar7 = &uStack_c0;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_80])(puVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
    FUN_10a05fd2c(1,plVar15);
    FUN_10a004978(&plStack_d8);
    if ((ulong)bStack_80 < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[bStack_80])(&uStack_c0);
      __Unwind_Resume(puVar7);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a05fae4);
  (*pcVar4)();
LAB_10a05f940:
  do {
    lVar5 = *plVar12;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar2) {
      *plVar12 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
  goto LAB_10a05f9f4;
}



/* Entry: 10a05f6f8; end: 10a05fae3;  */

void FUN_10a05f6f8(long *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x25;
  long *plVar14;
  float fVar15;
  long lVar16;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte bStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  if (param_3[1] != 0) {
    plVar5 = (long *)(param_3[1] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  if (param_3[3] != 0) {
    plVar5 = (long *)(param_3[3] + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  bStack_60 = 2;
  plVar5 = (long *)0x30;
  __Znwm();
  plVar6 = plVar5 + 1;
  *plVar6 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110b9fc88;
  plVar14 = plVar5 + 3;
  *plVar14 = (long)&PTR_FUN_110c0f9b0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  uVar9 = ((ulong)(uint)((int)plVar14 << 3) + 8 ^ (ulong)plVar14 >> 0x20) * -0x622015f714c7d297;
  uVar9 = ((ulong)plVar14 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
  uVar13 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
  uVar9 = *(ulong *)(param_2 + 0x20);
  plStack_b8 = plVar14;
  plStack_b0 = plVar5;
  if (uVar9 != 0) {
    uVar7 = uVar9 - 1;
    if ((uVar9 & uVar7) == 0) {
      unaff_x25 = uVar7 & uVar13;
    }
    else {
      unaff_x25 = uVar13;
      if (uVar9 <= uVar13) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar13 / uVar9;
        }
        unaff_x25 = uVar13 - uVar11 * uVar9;
      }
    }
    puVar10 = *(undefined8 **)(*(long *)(param_2 + 0x18) + unaff_x25 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar12 = (long *)*puVar10; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        uVar11 = plVar12[1];
        if (uVar11 == uVar13) {
          if ((long *)plVar12[2] == plVar14) goto LAB_10a05f940;
        }
        else {
          if ((uVar9 & uVar7) == 0) {
            uVar11 = uVar11 & uVar7;
          }
          else if (uVar9 <= uVar11) {
            uVar3 = 0;
            if (uVar9 != 0) {
              uVar3 = uVar11 / uVar9;
            }
            uVar11 = uVar11 - uVar3 * uVar9;
          }
          if (uVar11 != unaff_x25) break;
        }
      }
    }
  }
  plVar12 = (long *)0x68;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = uVar13;
  plVar12[2] = (long)plVar14;
  plVar12[3] = (long)plVar5;
  plStack_b8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  plStack_a8 = plVar12 + 4;
  *(undefined1 *)(plVar12 + 0xc) = 3;
  FUN_10a05fae4(&plStack_a8,&uStack_a0,2);
  *(byte *)(plVar12 + 0xc) = bStack_60;
  fVar15 = (float)(*(long *)(param_2 + 0x30) + 1);
  if ((uVar9 == 0) || (*(float *)(param_2 + 0x38) * (float)uVar9 < fVar15)) {
    uVar7 = 1;
    if (2 < uVar9) {
      uVar7 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar7 = uVar7 | uVar9 << 1;
    uVar9 = (ulong)(fVar15 / *(float *)(param_2 + 0x38));
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    FUN_10a05fb5c(param_2 + 0x18,uVar7);
    uVar9 = *(ulong *)(param_2 + 0x20);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar13;
    }
    else {
      unaff_x25 = uVar13;
      if (uVar9 <= uVar13) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar13 / uVar9;
        }
        unaff_x25 = uVar13 - uVar7 * uVar9;
      }
    }
  }
  lVar8 = *(long *)(param_2 + 0x18);
  plVar5 = *(long **)(lVar8 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)(param_2 + 0x28);
    *plVar12 = *plVar5;
    *plVar5 = (long)plVar12;
    *(long **)(lVar8 + unaff_x25 * 8) = plVar5;
    if (*plVar12 != 0) {
      uVar13 = *(ulong *)(*plVar12 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar13 = uVar13 & uVar9 - 1;
      }
      else if (uVar9 <= uVar13) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar13 / uVar9;
        }
        uVar13 = uVar13 - uVar7 * uVar9;
      }
      plVar5 = (long *)(*(long *)(param_2 + 0x18) + uVar13 * 8);
      goto LAB_10a05f9e4;
    }
  }
  else {
    *plVar12 = *plVar5;
LAB_10a05f9e4:
    *plVar5 = (long)plVar12;
  }
  *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + 1;
LAB_10a05f9f4:
  if (*(char *)(*(long *)(param_2 + 0x48) + 8) == '\x01') {
    (**(code **)(param_2 + 0x40))(param_2);
  }
  lVar8 = plVar12[3];
  lVar16 = plVar12[2];
  param_1[1] = plVar12[3];
  *param_1 = lVar16;
  if (lVar8 != 0) {
    plVar5 = (long *)(lVar8 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((ulong)bStack_60 < 4) {
    puVar10 = &uStack_a0;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_60])(puVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
    FUN_10a05fd2c(1,plVar12);
    FUN_10a004978(&plStack_b8);
    if ((ulong)bStack_60 < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[bStack_60])(&uStack_a0);
      __Unwind_Resume(puVar10);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a05fae4);
  (*pcVar4)();
LAB_10a05f940:
  do {
    lVar8 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar8 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  goto LAB_10a05f9f4;
}



/* Entry: 10a05fae4; end: 10a05fb5b;  */

void FUN_10a05fae4(long *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_3 == 2) {
    puVar4 = (undefined8 *)*param_1;
    lVar5 = param_2[1];
    uVar6 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar6;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar5 = param_2[3];
    uVar6 = param_2[2];
    puVar4[3] = param_2[3];
    puVar4[2] = uVar6;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 0x10);
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
  else if (param_3 == 1) {
    puVar4 = (undefined8 *)*param_1;
    *puVar4 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010a05fb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x10))(puVar4 + 1);
    return;
  }
  return;
}



/* Entry: 10a05fb5c; end: 10a05fd2b;  */

void FUN_10a05fb5c(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = param_1;
  plVar7 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar10 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar7 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar6);
      }
      else if (param_2 <= plVar7) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar5;
      while (plVar10 != (long *)0x0) {
        plVar9 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar6);
        }
        else if (param_2 <= plVar9) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
        }
        plVar8 = plVar10;
        if (plVar9 != plVar7) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar9 * 8) = plVar5;
            plVar7 = plVar9;
          }
          else {
            *plVar5 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar9 * 8);
            **(long **)(lVar3 + (long)plVar9 * 8) = (long)plVar10;
            plVar8 = plVar5;
          }
        }
        plVar5 = plVar8;
        plVar10 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if (((ulong)plVar5 & 1) != 0) {
    if (3 < (ulong)*(byte *)(plVar7 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a05fd7c);
      (*pcVar2)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar7 + 0xc)])(plVar7 + 4);
    FUN_10a004978(plVar7 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar7);
  return;
}



/* Entry: 10a05fd2c; end: 10a05fd7b;  */

void FUN_10a05fd2c(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a05fd7c);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
    FUN_10a004978(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a05fd7c; end: 10a05fd8b;  */

void FUN_10a05fd7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9fc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a05fd8c; end: 10a05fdab;  */

void FUN_10a05fd8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9fc88;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a05fdac; end: 10a05fdbb;  */

void FUN_10a05fdac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a05fdb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a05fdbc; end: 10a05feef;  */

void FUN_10a05fdbc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a05fef0(param_2,param_3);
  FUN_10a05ff58(param_5);
  FUN_10a060000(&stack0xffffffffffffffa0,param_2,param_4);
  FUN_10a05f6f8(&lStack_70,plVar7,&stack0xffffffffffffffa0);
  FUN_10a688c1c(&stack0xffffffffffffffa0);
  FUN_10a05ff7c(param_1,param_2,&lStack_70);
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a05fef0; end: 10a05ff57;  */

void FUN_10a05fef0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = param_1;
  func_0x000109898688();
  if (lVar6 != 0) {
    FUN_10a053854(param_1,lVar6);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar4 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar4 == 1) {
    return;
  }
  puVar5 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,puVar4);
  plVar7 = (long *)puVar5[1];
  *puVar5 = 0;
  puVar5[1] = 0;
  func_0x000109899de4();
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a05ff58; end: 10a05ff7b;  */

void FUN_10a05ff58(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar4 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,param_1);
  plVar6 = (long *)puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  func_0x000109899de4();
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10a05ff7c; end: 10a05ffff;  */

void FUN_10a05ff7c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  ppuStack_38 = &PTR_DAT_110c0f9f8;
  func_0x000109899de4(param_1,&uStack_30,&ppuStack_38,0,0);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a060000; end: 10a060137;  */

void FUN_10a060000(undefined8 param_1,long *param_2,int *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plStack_50;
  int iStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*param_3 == 7) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 2));
    plVar3 = param_2;
    plStack_38 = plVar2;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_38);
    if ((int)plVar3 != 0) {
      plVar2 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar4 = plVar2[0x48];
      if ((lVar4 == 0) ||
         (___dynamic_cast(lVar4,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar4 == 0))
      goto LAB_10a060108;
      plStack_40 = plStack_38;
      plStack_38 = (long *)0x0;
      iStack_48 = 7;
      plStack_50 = param_2;
      FUN_10a688ac0(param_1,&plStack_50,*(undefined8 *)(lVar4 + 8));
      if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
        (**(code **)*plStack_40)();
      }
    }
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    if (((ulong)plVar3 & 1) != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a060108:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a060118);
  (*pcVar1)();
}



/* Entry: 10a060138; end: 10a06029f;  */

void FUN_10a060138(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar2 = (long *)(param_1 + 0x18);
  FUN_10a0602a0(plVar2,*param_2);
  if (plVar2 == (long *)0x0) goto LAB_10a06026c;
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(param_1 + 0x28)) {
LAB_10a0601d8:
    if (lVar3 == 0) {
LAB_10a06020c:
      *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10a060214;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_10a06020c;
LAB_10a06021c:
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
    if (uVar8 != uVar4) {
      *(long **)(*(long *)(param_1 + 0x18) + uVar8 * 8) = plVar7;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a0601d8;
LAB_10a060214:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_10a06021c;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  FUN_10a05fd2c(1);
LAB_10a06026c:
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a060290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10a0602a0; end: 10a060373;  */

long * FUN_10a0602a0(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar4 = ((ulong)uVar2 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a060374; end: 10a06048f;  */

void FUN_10a060374(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a05fef0(param_2,param_3);
  FUN_10a060490(param_5);
  FUN_10a0604b4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a060138(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a060490; end: 10a0604b3;  */

void FUN_10a060490(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  long *extraout_x8;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar2 = 1;
  piVar3 = (int *)0x0;
  FUN_10a052ee0(1,0,param_1);
  if (*piVar3 != 1) {
    func_0x000109898688();
    if (lVar2 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      FUN_10a06052c(extraout_x8);
      if (*extraout_x8 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a060518);
    (*pcVar1)();
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  return;
}



/* Entry: 10a0604b4; end: 10a06052b;  */

void FUN_10a0604b4(long *param_1,long param_2,int *param_3)

{
  code *pcVar1;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688();
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    FUN_10a06052c(param_1);
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a060518);
  (*pcVar1)();
}



/* Entry: 10a06052c; end: 10a0605c3;  */

void FUN_10a06052c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  func_0x00010989879c(&lStack_30);
  if ((lStack_30 != 0) &&
     (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c0f9f8,0), lStack_30 != 0)) {
    *param_1 = lStack_30;
    param_1[1] = (long)plStack_28;
    param_1 = &lStack_30;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10a0605c4; end: 10a060753;  */

void FUN_10a0605c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long *plStack_118;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  long *plStack_a0;
  int aiStack_98 [2];
  long *plStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  _strlen();
  if ((*(byte *)(param_1[1] + 0x1e0) & 1) != 0) {
    puStack_88 = &UNK_10989e1b0;
    ppuStack_80 = &PTR_DAT_110b17718;
    uStack_78 = param_3;
    (**(code **)(*(long *)*param_1 + 0x2a0))
              (&plStack_a0,(long *)*param_1,param_1[1] + 0x118,0,&puStack_88);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    aiStack_98[0] = 7;
    plStack_90 = plStack_a0;
    plStack_a0 = (long *)0x0;
    if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
      func_0x0001098849a4(aiStack_b0,*param_1,param_1 + 0x10);
      piVar9 = aiStack_98;
      func_0x000109895778(param_1,param_2,uVar5,piVar9,aiStack_b0);
      if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_a8)();
      }
      if ((3 < aiStack_98[0]) && (plStack_90 != (long *)0x0)) {
        (**(code **)*plStack_90)();
      }
      plVar6 = plStack_a0;
      if (plStack_a0 != (long *)0x0) {
        (**(code **)*plStack_a0)();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return;
      }
      ___stack_chk_fail();
      if ((int)param_2 == 0) {
        __Unwind_Resume(plVar6);
      }
      (*(code *)*ppuStack_80)(&ppuStack_80);
      func_0x000104bd46a0();
      plVar7 = plVar6;
      (**(code **)(*plVar6 + 0x58))();
      if ((ulong)plVar7[0x59] < 8) {
        plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
        plVar7[0x59] = plVar7[0x59] + 1;
      }
      else {
        func_0x00010988bfcc(plVar7 + 0x4b);
      }
      plVar8 = plVar6;
      FUN_10a05ec9c(plVar6,param_2);
      FUN_10a052e3c(piVar9);
      plVar19 = (long *)plVar8[0x5f];
      if (plVar8[0x5f] != 0) {
        plVar8 = (long *)(plVar8[0x5f] + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x000109899de4(extraout_x8,plVar6,&stack0xffffffffffffff00,&stack0xfffffffffffffef8,0,0);
      if (plVar19 != (long *)0x0) {
        plVar6 = plVar19 + 1;
        do {
          lVar12 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
      plVar6 = plVar7 + 0x4b;
      lVar12 = plVar7[0x59];
      uVar10 = lVar12 - 1;
      plVar7[0x59] = uVar10;
      if (uVar10 < 8) {
        uVar10 = plVar6[lVar12 + 2];
        if (plVar7[0x5a] == uVar10) {
          return;
        }
      }
      else {
        uVar10 = *(ulong *)(plVar7[0x57] + -8);
        plVar7[0x57] = plVar7[0x57] + -8;
        if (plVar7[0x5a] == uVar10) {
          return;
        }
      }
      lVar12 = *plVar6;
      lVar15 = plVar7[0x4c];
      lVar13 = lVar15 - lVar12;
      uVar17 = lVar13 >> 4;
      if (uVar17 < uVar10) {
        uVar18 = uVar10 - uVar17;
        lVar16 = plVar7[0x4d];
        if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
          if (uVar10 >> 0x3c == 0) {
            uVar11 = lVar16 - lVar12 >> 3;
            if (uVar11 <= uVar10) {
              uVar11 = uVar10;
            }
            if (0x7fffffffffffffef < (ulong)(lVar16 - lVar12)) {
              uVar11 = 0xfffffffffffffff;
            }
            plStack_118 = plVar6;
            if (uVar11 >> 0x3c == 0) {
              lVar4 = uVar11 << 4;
              __Znwm();
              lVar15 = lVar4 + lVar13;
              _bzero(lVar15,uVar18 * 0x10);
              lVar14 = lVar15 + uVar17 * -0x10;
              _memcpy(lVar14,lVar12,lVar13);
              *plVar6 = lVar14;
              plVar7[0x4c] = lVar15 + uVar18 * 0x10;
              plVar7[0x4d] = lVar4 + uVar11 * 0x10;
              lStack_138 = lVar12;
              lStack_130 = lVar12;
              lStack_128 = lVar12;
              lStack_120 = lVar16;
              func_0x00010988c1b8(&lStack_138);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar3)();
        }
        _bzero(lVar15,uVar18 * 0x10);
        plVar7[0x4c] = lVar15 + uVar18 * 0x10;
      }
      else if (uVar10 < uVar17) {
        lVar12 = lVar12 + uVar10 * 0x10;
        while (lVar15 != lVar12) {
          lVar15 = lVar15 + -0x10;
          func_0x00010988c204(lVar15);
        }
        plVar7[0x4c] = lVar12;
      }
code_r0x00010988c138:
      plVar7[0x5a] = uVar10;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a060728);
  (*pcVar3)();
}



/* Entry: 10a060754; end: 10a060887;  */

void FUN_10a060754(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a05ec9c(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[0x5f];
  if (plVar6[0x5f] != 0) {
    plVar6 = (long *)(plVar6[0x5f] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar16 != (long *)0x0) {
    plVar6 = plVar16 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a060888; end: 10a0608df;  */

long FUN_10a060888(long param_1)

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
    }
  }
  return param_1;
}



/* Entry: 10a0608e0; end: 10a0608ef;  */

void FUN_10a0608e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9dc68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0608f0; end: 10a06090f;  */

void FUN_10a0608f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9dc68;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a060910; end: 10a06091f;  */

void FUN_10a060910(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a060918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a060920; end: 10a0609c7;  */

undefined8 * FUN_10a060920(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9dcb8;
  (**(code **)param_1[9])();
  FUN_10a060b6c(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a0609c8; end: 10a060a2b;  */

bool FUN_10a0609c8(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x52) {
    iVar1 = 0xe4908dd;
    _memcmp(&UNK_10e4908dd);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a060a2c; end: 10a060b4b;  */

void FUN_10a060a2c(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f630f1d);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a060b4c; end: 10a060b5b;  */

undefined1  [16] FUN_10a060b4c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x52;
  auVar1._0_8_ = &UNK_10e4908dd;
  return auVar1;
}



/* Entry: 10a060b5c; end: 10a060b6b;  */

long * FUN_10a060b5c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  func_0x000105277f8c();
  plVar1 = (long *)param_2[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_2;
      *param_2 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_2;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a060bec);
  (*pcVar2)();
}



/* Entry: 10a060b6c; end: 10a060beb;  */

long * FUN_10a060b6c(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a060bec);
  (*pcVar2)();
}



/* Entry: 10a060bec; end: 10a060c43;  */

long FUN_10a060bec(long param_1)

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
    }
  }
  return param_1;
}



/* Entry: 10a060c44; end: 10a060c47;  */

void FUN_10a060c44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a060c48; end: 10a060c5b;  */

void FUN_10a060c48(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a060c5c; end: 10a060c73;  */

void FUN_10a060c5c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a060c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a060c74; end: 10a060cab;  */

undefined8 FUN_10a060c74(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110b9dd50);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a060cac; end: 10a060cef;  */

void FUN_10a060cac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a060cf0; end: 10a060e47;  */

void FUN_10a060cf0(long *param_1,code **param_2,undefined4 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined4 *puVar10;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  code **ppcStack_b0;
  undefined ***pppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1;
  ppcVar8 = param_2;
  puVar10 = param_3;
  FUN_10a688b40();
  if (plVar5 == (long *)0x0) {
    pppuVar6 = (undefined ***)0x0;
    ppcVar9 = (code **)0x0;
    if (ppcVar8 != (code **)0x0) {
      lStack_60 = param_1[1];
      lStack_68 = *param_1;
      if (param_1[1] != 0) {
        plVar1 = (long *)(param_1[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_80 = *(undefined4 *)param_2;
      uStack_7c = *param_3;
      param_2 = &pcStack_78;
      pcStack_78 = FUN_10a061064;
      ppuStack_70 = &PTR_DAT_110b9eb18;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_58 = CONCAT44(uStack_7c,uStack_80);
      ppcVar9 = &pcStack_78;
      FUN_10a4634ec(ppcVar8,ppcVar9);
      pppuVar6 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
    }
  }
  else {
    *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
    pppuVar6 = (undefined ***)*param_1;
    ppcVar9 = param_2;
    FUN_10a060e48(pppuVar6,param_2,param_3);
    iVar4 = *(int *)((long)plVar5 + 4) + -1;
    *(int *)((long)plVar5 + 4) = iVar4;
    puVar10 = param_3;
    if (iVar4 == 0) {
      *(undefined4 *)plVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_2 + 1);
  func_0x00010a004dac(&uStack_90);
  pppuVar7 = pppuVar6;
  __Unwind_Resume();
  pcStack_98 = FUN_10a060e48;
  plStack_c0 = param_1;
  plStack_b8 = plVar5;
  ppcStack_b0 = param_2;
  pppuStack_a8 = pppuVar6;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,pppuVar7 + 1,*pppuVar7);
  func_0x000109884820(&puStack_c8,&puStack_d0,*pppuVar7);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**pppuVar7 + 0x30))(&puStack_d0);
  FUN_10a060f44(*pppuVar7,&puStack_d0,&puStack_c8,ppcVar9,puVar10);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}


