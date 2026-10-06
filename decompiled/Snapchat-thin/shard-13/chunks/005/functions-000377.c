/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a848f1c; end: 10a848f5b;  */

void FUN_10a848f1c(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10a848f5c; end: 10a848f8f;  */

void FUN_10a848f5c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110c22770;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10a848f90; end: 10a849003;  */

void FUN_10a848f90(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_110c22770;
  if (*(char *)(param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
    param_1[2] = uVar6;
    param_1[1] = uVar5;
  }
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar5;
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
  return;
}



/* Entry: 10a849004; end: 10a8494c7;  */

/* WARNING: Removing unreachable block (ram,0x00010a849350) */
/* WARNING: Removing unreachable block (ram,0x00010a849360) */
/* WARNING: Removing unreachable block (ram,0x00010a84936c) */
/* WARNING: Removing unreachable block (ram,0x00010a849374) */
/* WARNING: Removing unreachable block (ram,0x00010a8493b0) */

void FUN_10a849004(long param_1,long param_2)

{
  ulong *puVar1;
  undefined8 *****pppppuVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  code *pcVar7;
  undefined8 *****pppppuVar8;
  undefined8 ****ppppuVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 ***pppuVar14;
  ulong uVar15;
  undefined8 *****pppppuVar16;
  undefined8 ****ppppuVar17;
  ulong *puVar18;
  undefined8 ****ppppuVar19;
  undefined8 ****ppppuStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined8 ****ppppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 ****ppppuStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 ****ppppuStack_70;
  
  ppppuStack_d8 = (undefined8 *****)0x0;
  ppppuStack_d0 = (undefined8 *****)0x0;
  ppppuStack_c8 = (undefined8 *****)0x0;
  iVar3 = *(int *)(param_1 + 0x18);
  lVar10 = (long)iVar3;
  if (iVar3 != 0) {
    if (iVar3 < 0) {
      FUN_10a702b4c();
      goto LAB_10a849438;
    }
    ppppuStack_70 = &ppppuStack_d8;
    pppppuVar8 = &ppppuStack_d8;
    FUN_10a702b60();
    pppppuVar16 = (undefined8 *****)((long)pppppuVar8 + ((long)ppppuStack_d8 - (long)ppppuStack_d0))
    ;
    func_0x00010a834a30(ppppuStack_d8,ppppuStack_d0,pppppuVar16);
    ppppuStack_80 = ppppuStack_d8;
    ppppuStack_78 = ppppuStack_c8;
    ppppuStack_90 = ppppuStack_d8;
    ppppuStack_88 = ppppuStack_d8;
    ppppuStack_d8 = pppppuVar16;
    ppppuStack_d0 = pppppuVar8;
    ppppuStack_c8 = pppppuVar8 + lVar10 * 5;
    func_0x00010a834aa4(&ppppuStack_90);
    uVar12 = *(ulong *)(param_1 + 0x10);
    puVar18 = (ulong *)(param_1 + 0x10);
    if ((uVar12 & 1) != 0) {
      puVar18 = (ulong *)(uVar12 + 7);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      puVar1 = puVar18 + *(int *)(param_1 + 0x18);
      do {
        uVar12 = *puVar18;
        puVar11 = (undefined8 *)(*(ulong *)(uVar12 + 0x78) & 0xfffffffffffffffc);
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          func_0x000107c3192c(&pppuStack_c0,*puVar11,puVar11[1]);
        }
        else {
          pppuStack_b8 = (undefined8 ***)puVar11[1];
          pppuStack_c0 = (undefined8 ***)*puVar11;
          pppuStack_b0 = (undefined8 ***)puVar11[2];
        }
        ppppuVar9 = (undefined8 ****)0x138;
        __Znwm();
        ppppuVar9[1] = (undefined8 ***)0x0;
        ppppuVar9[2] = (undefined8 ***)0x0;
        *ppppuVar9 = (undefined8 ***)&PTR_FUN_110c22408;
        ppppuVar17 = ppppuVar9 + 3;
        ppppuStack_88 = (undefined8 *****)0x0;
        ppppuStack_90 = (undefined8 *****)0x0;
        ppppuStack_78 = (undefined8 *****)0x0;
        ppppuStack_80 = (undefined8 *****)0x0;
        ppppuStack_70 = (undefined8 ****)CONCAT44(ppppuStack_70._4_4_,0x3f800000);
        FUN_10a6e5564(ppppuVar17,uVar12,&ppppuStack_90);
        func_0x00010a71259c(&ppppuStack_90);
        pppuStack_a8 = ppppuVar17;
        pppuStack_a0 = ppppuVar9;
        if (ppppuStack_d0 < ppppuStack_c8) {
          ppppuStack_d0[2] = pppuStack_b0;
          ppppuStack_d0[1] = pppuStack_b8;
          *ppppuStack_d0 = pppuStack_c0;
          pppuStack_b8 = (undefined8 ****)0x0;
          pppuStack_b0 = (undefined8 ****)0x0;
          pppuStack_c0 = (undefined8 ****)0x0;
          ppppuStack_d0[4] = pppuStack_a0;
          ppppuStack_d0[3] = pppuStack_a8;
          pppuStack_a8 = (undefined8 ****)0x0;
          pppuStack_a0 = (undefined8 ****)0x0;
          ppppuStack_d0 = ppppuStack_d0 + 5;
        }
        else {
          lVar10 = (long)ppppuStack_d0 - (long)ppppuStack_d8;
          uVar12 = (lVar10 >> 3) * -0x3333333333333333 + 1;
          if (0x666666666666666 < uVar12) {
            FUN_10a702b4c();
            goto LAB_10a849438;
          }
          lVar13 = (long)ppppuStack_c8 - (long)ppppuStack_d8 >> 3;
          uVar15 = lVar13 * -0x6666666666666666;
          if (uVar15 < uVar12 || uVar15 - uVar12 == 0) {
            uVar15 = uVar12;
          }
          if (0x333333333333332 < (ulong)(lVar13 * -0x3333333333333333)) {
            uVar15 = 0x666666666666666;
          }
          ppppuStack_70 = &ppppuStack_d8;
          pppppuVar8 = &ppppuStack_d8;
          FUN_10a702b60();
          puVar11 = (undefined8 *)((long)pppppuVar8 + lVar10);
          puVar11[2] = pppuStack_b0;
          puVar11[1] = pppuStack_b8;
          *puVar11 = pppuStack_c0;
          pppuStack_b8 = (undefined8 ****)0x0;
          pppuStack_b0 = (undefined8 ****)0x0;
          pppuStack_c0 = (undefined8 ****)0x0;
          puVar11[4] = pppuStack_a0;
          puVar11[3] = pppuStack_a8;
          pppuStack_a8 = (undefined8 ****)0x0;
          pppuStack_a0 = (undefined8 ****)0x0;
          pppppuVar16 = (undefined8 *****)(puVar11 + 5);
          pppppuVar2 = (undefined8 *****)
                       ((long)puVar11 + ((long)ppppuStack_d8 - (long)ppppuStack_d0));
          func_0x00010a834a30(ppppuStack_d8,ppppuStack_d0,pppppuVar2);
          ppppuStack_80 = ppppuStack_d8;
          ppppuStack_78 = ppppuStack_c8;
          ppppuStack_90 = ppppuStack_d8;
          ppppuStack_88 = ppppuStack_d8;
          ppppuStack_d8 = pppppuVar2;
          ppppuStack_d0 = pppppuVar16;
          ppppuStack_c8 = pppppuVar8 + uVar15 * 5;
          func_0x00010a834aa4(&ppppuStack_90);
          pppuVar6 = pppuStack_a0;
          ppppuStack_d0 = pppppuVar16;
          if ((undefined8 ****)pppuStack_a0 != (undefined8 ****)0x0) {
            ppppuVar17 = (undefined8 ****)(pppuStack_a0 + 1);
            do {
              pppuVar14 = *ppppuVar17;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppuVar17,0x10);
              if (bVar5) {
                *ppppuVar17 = (undefined8 ***)((long)pppuVar14 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (pppuVar14 == (undefined8 ***)0x0) {
              (*(code *)(*pppuStack_a0)[2])(pppuStack_a0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar6);
            }
          }
        }
        if ((long)pppuStack_b0 < 0) {
          __ZdlPv(pppuStack_c0);
        }
        puVar18 = puVar18 + 1;
      } while (puVar18 != puVar1);
    }
  }
  ppppuVar17 = ppppuStack_d0;
  pppppuVar8 = (undefined8 *****)ppppuStack_d8;
  if (ppppuStack_d8 == ppppuStack_d0) {
LAB_10a84933c:
    if (ppppuStack_d0 < pppppuVar8) {
LAB_10a849438:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a84943c);
      (*pcVar7)();
    }
    pppppuVar16 = (undefined8 *****)ppppuStack_d0;
    pppppuVar2 = (undefined8 *****)ppppuStack_d0;
    if (pppppuVar8 != (undefined8 *****)ppppuStack_d0) {
      while (pppppuVar2 = pppppuVar8, pppppuVar16 != pppppuVar8) {
        FUN_10a7028d0(pppppuVar16 + -5);
        pppppuVar16 = pppppuVar16 + -5;
      }
    }
  }
  else {
    iVar3 = *(int *)(param_2 + 0x18);
    do {
      pppppuVar16 = pppppuVar8 + 5;
      if (*(int *)(pppppuVar8[3] + 0x18) != iVar3) {
        if (pppppuVar8 != (undefined8 *****)ppppuStack_d0) {
          for (; pppppuVar16 != (undefined8 *****)ppppuVar17; pppppuVar16 = pppppuVar16 + 5) {
            if (*(int *)(pppppuVar16[3] + 0x18) == iVar3) {
              if (*(char *)((long)pppppuVar8 + 0x17) < '\0') {
                __ZdlPv(*pppppuVar8);
              }
              ppppuVar19 = pppppuVar16[1];
              ppppuVar9 = *pppppuVar16;
              pppppuVar8[2] = pppppuVar16[2];
              pppppuVar8[1] = ppppuVar19;
              *pppppuVar8 = ppppuVar9;
              *(undefined1 *)((long)pppppuVar16 + 0x17) = 0;
              *(undefined1 *)pppppuVar16 = 0;
              FUN_10a8494c8(pppppuVar8 + 3,pppppuVar16 + 3);
              pppppuVar8 = pppppuVar8 + 5;
            }
          }
        }
        goto LAB_10a84933c;
      }
      pppppuVar8 = pppppuVar16;
      pppppuVar2 = (undefined8 *****)ppppuStack_d0;
    } while (pppppuVar16 != (undefined8 *****)ppppuStack_d0);
  }
  ppppuStack_d0 = pppppuVar2;
  ppppuVar17 = *(undefined8 *****)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  ppppuStack_90 = ppppuVar17;
  FUN_10a84952c(ppppuVar17,&ppppuStack_d8);
  if (ppppuVar17 != (undefined8 ****)0x0) {
    func_0x0001092b4274(&ppppuStack_90,ppppuVar17);
  }
  ppppuStack_90 = &ppppuStack_d8;
  FUN_10a702860(&ppppuStack_90);
  return;
}



/* Entry: 10a8494c8; end: 10a84952b;  */

undefined8 * FUN_10a8494c8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a84952c; end: 10a849603;  */

void FUN_10a84952c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        puVar5 = (undefined8 *)(param_1 + 0x98);
        if (*(char *)(param_1 + 0xb0) == '\x01') {
          puStack_38 = puVar5;
          FUN_10a702860(&puStack_38);
          *(undefined1 *)(param_1 + 0xb0) = 0;
        }
        *puVar5 = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        FUN_10a702a80(puVar5,*param_2,param_2[1],(param_2[1] - *param_2 >> 3) * -0x3333333333333333)
        ;
        *(undefined1 *)(param_1 + 0xb0) = 1;
        *(undefined8 *)(param_1 + 0x10) = 2;
        uStack_78 = *(undefined8 *)(param_1 + 0x60);
        uStack_80 = *(undefined8 *)(param_1 + 0x58);
        uStack_68 = *(undefined8 *)(param_1 + 0x70);
        uStack_70 = *(undefined8 *)(param_1 + 0x68);
        uStack_58 = *(undefined8 *)(param_1 + 0x80);
        uStack_60 = *(undefined8 *)(param_1 + 0x78);
        uStack_c0 = *(undefined8 *)(param_1 + 0x18);
        uStack_b8 = *(undefined8 *)(param_1 + 0x20);
        uStack_a8 = *(undefined8 *)(param_1 + 0x30);
        uStack_b0 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 **)(param_1 + 0x88) = (undefined8 *)(param_1 + 0x18);
        *(undefined1 *)(param_1 + 0x19) = 0;
        uStack_98 = *(undefined8 *)(param_1 + 0x40);
        uStack_a0 = *(undefined8 *)(param_1 + 0x38);
        uStack_88 = *(undefined8 *)(param_1 + 0x50);
        uStack_90 = *(undefined8 *)(param_1 + 0x48);
        puVar5 = &uStack_c0;
        do {
          uVar6 = (ulong)*(byte *)((long)puVar5 + 1);
          if (uVar6 != 0) {
            puVar8 = (undefined8 *)((long)puVar5 + 0x20);
            do {
              uStack_48 = puVar8[-1];
              uStack_50 = puVar8[-2];
              uStack_40 = *puVar8;
              (*(code *)**(undefined8 **)*puVar8)((undefined8 *)*puVar8,&uStack_50);
              uVar6 = uVar6 - 1;
              puVar8 = puVar8 + 3;
            } while (uVar6 != 0);
          }
          puVar7 = *(undefined1 **)((long)puVar5 + 8);
          if (puVar5 != &uStack_c0) {
            _free(puVar5);
          }
          puVar5 = (undefined8 *)puVar7;
        } while (puVar7 != (undefined1 *)0x0);
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return;
    }
  } while( true );
}



/* Entry: 10a849604; end: 10a84966b;  */

void FUN_10a849604(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,(long *)(param_1 + 8));
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a84966c; end: 10a8496c3;  */

void FUN_10a84966c(long param_1)

{
  undefined8 in_x6;
  undefined8 in_x7;
  
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67d0d6,0x35a,&UNK_10f67d19a,in_x6,in_x7,
                        **(undefined4 **)(param_1 + 0x10));
  }
  return;
}



/* Entry: 10a8496c4; end: 10a84971b;  */

long FUN_10a8496c4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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



/* Entry: 10a84971c; end: 10a849833;  */

void FUN_10a84971c(long param_1)

{
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uStack_2a0;
  undefined6 uStack_298;
  undefined2 uStack_292;
  undefined6 uStack_290;
  short sStack_28a;
  undefined **appuStack_288 [2];
  undefined1 auStack_278 [272];
  undefined1 auStack_168 [8];
  undefined **appuStack_160 [2];
  undefined1 auStack_150 [272];
  
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67d0d6,0x35e,&UNK_10f67d1cc,in_x6,in_x7,
                        **(undefined4 **)(param_1 + 0x18));
  }
  uStack_298 = 0x72657571206f;
  uStack_2a0 = 0x742064656c696166;
  uStack_292 = 0x2079;
  uStack_290 = 0x6e6f69676572;
  sStack_28a = 0x1600;
  FUN_10a002a94(appuStack_288,&uStack_2a0);
  appuStack_288[0] = &PTR_FUN_110b99e70;
  __ZNSt13runtime_errorC2ERKS_(appuStack_160,appuStack_288);
  _memcpy(auStack_150,auStack_278,0x110);
  appuStack_160[0] = &PTR_FUN_110b99e70;
  FUN_10a05bde0(auStack_168,appuStack_160);
  __ZNSt13runtime_errorD2Ev(appuStack_160);
  func_0x000109d1b350(*(undefined8 *)(param_1 + 0x10),auStack_168);
  __ZNSt13exception_ptrD1Ev(auStack_168);
  __ZNSt13runtime_errorD2Ev(appuStack_288);
  if (sStack_28a < 0) {
    __ZdlPv(uStack_2a0);
  }
  return;
}



/* Entry: 10a849834; end: 10a84986f;  */

void FUN_10a849834(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  func_0x00010a084504(param_1 + 0x10);
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,(long *)(param_1 + 8));
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a849870; end: 10a8498eb;  */

void FUN_10a849870(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c227d0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  return;
}



/* Entry: 10a8498ec; end: 10a8499fb;  */

void FUN_10a8498ec(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcStack_38;
  long *plStack_30;
  undefined **ppuStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_38 = FUN_10a8499fc;
  ppuStack_28 = &PTR_PTR_1132fed68;
  plStack_30 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_38);
  lVar7 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    if ((*(byte *)(*param_1 + 0xb0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8499f8);
      (*pcVar4)();
    }
    FUN_10a84952c(lVar7,*param_1 + 0x98);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_38,*param_1 + 0x90);
    func_0x000109d1b350(lVar7,&pcStack_38);
    __ZNSt13exception_ptrD1Ev(&pcStack_38);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  FUN_10a849dc0(param_1,param_1 + 3);
  return;
}



/* Entry: 10a8499fc; end: 10a849adb;  */

void FUN_10a8499fc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a8498ec;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_10a849dc0(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a849adc; end: 10a849b4f;  */

long * FUN_10a849adc(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[1] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10a849b50; end: 10a849dbf;  */

undefined8 * FUN_10a849b50(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puStack_38;
  
  *param_1 = &PTR_FUN_110c22800;
  __ZNSt3__15mutexD1Ev(param_1 + 0x1c);
  if (param_1[0x19] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x18];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = (long *)param_1[0x17];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_FUN_110c14a98;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    puStack_38 = param_1 + 0x13;
    FUN_10a702860(&puStack_38);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a849dc0; end: 10a849e2f;  */

void FUN_10a849dc0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lStack_28;
  
  *param_2 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x0001092b4274(&lStack_28,lVar1);
      if (lStack_28 != 0) {
        func_0x0001092b4274(&lStack_28);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10a849e30; end: 10a84a067;  */

void FUN_10a849e30(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 ***pppuVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  lVar10 = *(long *)(param_2 + 0x10);
  lVar9 = *param_1;
  plVar3 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (lVar9 == 0) {
    FUN_10a00946c(&UNK_10f67d216);
  }
  else {
    iVar4 = *(int *)(lVar9 + 0x28);
    **(int **)(lVar10 + 0x10) = iVar4;
    if (iVar4 == 1) {
      ppuStack_60 = &PTR_FUN_110c78ec0;
      uStack_58 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      if (*(char *)(lVar9 + 0x6f) < '\0') {
        func_0x000107c3192c(&ppuStack_80,*(undefined8 *)(lVar9 + 0x58),*(undefined8 *)(lVar9 + 0x60)
                           );
      }
      else {
        uStack_78 = *(ulong *)(lVar9 + 0x60);
        ppuStack_80 = *(undefined8 ***)(lVar9 + 0x58);
        uStack_70 = *(ulong *)(lVar9 + 0x68);
      }
      uVar2 = uStack_78;
      pppuVar7 = (undefined8 ***)ppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar2 = uStack_70 >> 0x38;
        pppuVar7 = &ppuStack_80;
      }
      FUN_10a0f10ac(&ppuStack_60,pppuVar7,uVar2);
      (**(code **)(lVar10 + 0x20))(&ppuStack_60);
      if ((long)uStack_70 < 0) {
        __ZdlPv(ppuStack_80);
      }
      FUN_10ae0fc78(&ppuStack_60);
      if (plVar3 != (long *)0x0) {
        plVar1 = plVar3 + 1;
        do {
          lVar9 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      return;
    }
    if (*(char *)(lVar9 + 0x6f) < '\0') {
      func_0x000107c3192c(&ppuStack_60,*(undefined8 *)(lVar9 + 0x58),*(undefined8 *)(lVar9 + 0x60));
    }
    else {
      uStack_58 = *(undefined8 *)(lVar9 + 0x60);
      ppuStack_60 = *(undefined ***)(lVar9 + 0x58);
      uStack_50 = *(undefined8 *)(lVar9 + 0x68);
    }
    FUN_10a84a068(&ppuStack_60);
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a849f84);
  (*pcVar8)();
}



/* Entry: 10a84a068; end: 10a84a137;  */

void FUN_10a84a068(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a002a94(appuStack_150,param_1);
  appuStack_150[0] = &PTR_FUN_110b99e70;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110b99e70;
  ___cxa_throw(puVar2,&PTR_DAT_110b99e48,FUN_10a002a90);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a84a120);
  (*pcVar1)();
}



/* Entry: 10a84a138; end: 10a84a183;  */

void FUN_10a84a138(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x28))();
    func_0x00010a084504(lVar1 + 0x10);
    FUN_10a84832c(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a84a184; end: 10a84a19b;  */

void FUN_10a84a184(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a84a19c; end: 10a84a277;  */

void FUN_10a84a19c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110c22828;
  puVar4 = (undefined8 *)0x60;
  __Znwm();
  lVar5 = puVar6[1];
  uVar7 = *puVar6;
  puVar4[1] = puVar6[1];
  *puVar4 = uVar7;
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
  lVar5 = puVar6[3];
  uVar7 = puVar6[2];
  puVar4[3] = puVar6[3];
  puVar4[2] = uVar7;
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
  puVar4[4] = puVar6[4];
  (**(code **)(puVar6[5] + 0x18))(puVar4 + 5,puVar6 + 5);
  param_1[1] = puVar4;
  return;
}



/* Entry: 10a84a278; end: 10a84a31b;  */

void FUN_10a84a278(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a342ec0(*(long *)(param_1 + 0x10),param_1 + 0x20,param_1 + 0x30);
      }
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
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a84a31c; end: 10a84a35b;  */

void FUN_10a84a31c(long param_1)

{
  func_0x00010a084070(param_1 + 0x28);
  FUN_10a080f9c(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a84a35c; end: 10a84a40b;  */

void FUN_10a84a35c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c22848;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = uVar1;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  return;
}



/* Entry: 10a84a40c; end: 10a84a68f;  */

void FUN_10a84a40c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *unaff_x22;
  long lVar7;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [56];
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = *(long **)(param_2 + 0x20);
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      if (*(long *)(param_2 + 0x18) != 0) {
        lVar7 = *(long *)(*(long *)(param_2 + 0x10) + 0x18);
        uStack_f8 = param_1[1];
        uStack_100 = *param_1;
        lStack_f0 = param_1[2];
        *param_1 = 0;
        param_1[1] = 0;
        unaff_x22 = &uStack_100;
        uStack_e0 = param_1[4];
        uStack_e8 = param_1[3];
        lStack_d8 = param_1[5];
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        uStack_d0 = *(undefined4 *)(param_1 + 6);
        uStack_c8 = param_1[7];
        uStack_c0 = param_1[8];
        param_1[7] = 0;
        (**(code **)(param_1[9] + 0x10))(auStack_b8,param_1 + 9);
        uStack_80 = param_1[0x10];
        uStack_78 = *(undefined4 *)(param_1 + 0x11);
        FUN_10a0424c4(auStack_70,param_1 + 0x12);
        **(undefined4 **)(lVar7 + 0x10) = uStack_d0;
        uVar6 = 0;
        FUN_10a0f0eb8();
        if ((uVar6 & 1) == 0) goto LAB_10a84a5c8;
        ppuStack_130 = &PTR_FUN_110c78ec0;
        uStack_128 = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        FUN_10a0f10ac(&ppuStack_130,uStack_c8,uStack_80);
        (**(code **)(lVar7 + 0x20))(&ppuStack_130);
        FUN_10ae0fc78(&ppuStack_130);
        func_0x000104c4f944(auStack_70);
        FUN_10a042634(&uStack_c8);
        if (lStack_d8 < 0) {
          __ZdlPv(uStack_e8);
        }
        if (lStack_f0 < 0) {
          __ZdlPv(uStack_100);
        }
      }
      plVar1 = plVar5 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_10a84a5c8:
  FUN_10a109200(unaff_x22 + 3);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a84a5d4);
  (*pcVar4)();
}



/* Entry: 10a84a690; end: 10a84a6bb;  */

undefined8 * FUN_10a84a690(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
      }
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
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a84a6bc; end: 10a84a76b;  */

void FUN_10a84a6bc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x30) + 0x940);
  plVar6 = *(long **)(param_1 + 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a25f3f4(uVar4,&uStack_30);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10a84a76c; end: 10a84a7cf;  */

long FUN_10a84a76c(long param_1)

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



/* Entry: 10a84a7d0; end: 10a84a827;  */

long FUN_10a84a7d0(long param_1)

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



/* Entry: 10a84a828; end: 10a84af8b;  */

void FUN_10a84a828(long *param_1,long param_2)

{
  ulong *puVar1;
  undefined **ppuVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long *plVar9;
  undefined ***pppuVar10;
  undefined8 uVar11;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined *puVar24;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  double dStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 uStack_104;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  long **pplStack_70;
  
  plVar9 = *(long **)(param_2 + 0x20);
  if ((plVar9 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 != (long *)0x0))
  {
    if (*(long *)(param_2 + 0x18) != 0) {
      lVar20 = *(long *)(*(long *)(param_2 + 0x10) + 0x18);
      **(undefined4 **)(lVar20 + 0x38) = (int)param_1[6];
      lVar18 = *(long *)(lVar20 + 0x20);
      func_0x000107c2b054(&ppuStack_e0,&UNK_10f67d4a4);
      if (lVar18 != 0) {
        FUN_10a76bd40(*(undefined8 *)(lVar18 + 0x8d8),&ppuStack_e0,**(undefined4 **)(lVar20 + 0x38))
        ;
      }
      if (uStack_d0 < 0) {
        __ZdlPv(ppuStack_e0);
      }
      lVar18 = *(long *)(lVar20 + 0x20);
      if ((int)param_1[6] - 200U < 100) {
        pppuVar10 = &ppuStack_e0;
        func_0x000107c2b054(pppuVar10,&UNK_10f67d4cc);
        __ZNSt3__16chrono12steady_clock3nowEv();
        if (lVar18 != 0) {
          FUN_10a76bf84((double)((long)pppuVar10 - *(long *)(lVar20 + 0x18)) / 1000000.0,
                        *(undefined8 *)(lVar18 + 0x8d8),&ppuStack_e0);
        }
        if (uStack_d0._7_1_ < '\0') {
          __ZdlPv(ppuStack_e0);
        }
        lStack_130 = param_1[7];
        lStack_128 = (long)(int)param_1[0x10];
        ppuStack_e0 = &PTR_DAT_110b1a238;
        uStack_d8 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        puStack_b0 = &DAT_11383d918;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        func_0x000107c30348(&ppuStack_e0,&lStack_130);
        plStack_178 = (long *)0x0;
        plStack_170 = (long *)0x0;
        plStack_168 = (long *)0x0;
        uStack_160 = 3000;
        dStack_158 = 5000.0;
        uVar12 = uStack_98 & 0xffffffff;
        if ((int)uStack_98 != 0) {
          if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
            func_0x00010ae06f08(1,4,&UNK_10f67aaab,&UNK_10f67aeea,0x418,&UNK_10f67af60,in_x6,in_x7,
                                uVar12);
            uVar12 = uStack_98 & 0xffffffff;
          }
          dStack_158 = (double)uVar12;
        }
        if (0 < (int)uStack_c0) {
          lVar18 = 0;
          lVar21 = 8;
          do {
            puVar1 = &uStack_c8;
            if ((uStack_c8 & 1) != 0) {
              puVar1 = (ulong *)(uStack_c8 + lVar21 + -1);
            }
            uVar12 = *puVar1;
            iVar4 = *(int *)(uVar12 + 0x20);
            if (iVar4 < 2) {
              piVar15 = (int *)&UNK_10e4ddb34;
              piVar17 = (int *)&UNK_10e4ddb2c;
            }
            else {
              piVar15 = (int *)&UNK_10e4ddb2c;
              piVar17 = (int *)&UNK_10e4ddb3c;
            }
            if (iVar4 < 1) {
              piVar17 = piVar15;
            }
            if ((piVar17 == (int *)&UNK_10e4ddb3c) || (iVar4 < *piVar17)) {
              piVar17 = (int *)&UNK_10e4ddb3c;
            }
            if ((*(byte *)(uVar12 + 0x10) & 1) == 0) {
              if ((uRam000000011330a9e8 & 1) != 0) {
                func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67aeea,0x424,&UNK_10f67afa8);
              }
            }
            else {
              iVar5 = *(int *)(uVar12 + 0x30);
              if (iVar5 == 2) {
                if (piVar17 == (int *)&UNK_10e4ddb3c) {
                  if ((uRam000000011330a9e8 & 1) != 0) {
                    uVar11 = 0x428;
                    puVar23 = &UNK_10f67b010;
                    iVar5 = iVar4;
                    goto LAB_10a84aae8;
                  }
                }
                else {
                  ppuVar22 = *(undefined ***)(uVar12 + 0x28);
                  puVar13 = (undefined8 *)
                            (*(ulong *)(*(long *)(uVar12 + 0x18) + 0x10) & 0xfffffffffffffffc);
                  if (*(char *)((long)puVar13 + 0x17) < '\0') {
                    func_0x000107c3192c(&uStack_150,*puVar13,puVar13[1]);
                    ppuVar2 = &PTR_PTR_1132e2d78;
                    if ((undefined **)ppuVar22[3] != (undefined **)0x0) {
                      ppuVar2 = (undefined **)ppuVar22[3];
                    }
                    puVar23 = ppuVar2[2];
                    puVar24 = ppuVar2[3];
                    if (*(int *)(uVar12 + 0x30) == 2) {
                      ppuVar22 = *(undefined ***)(uVar12 + 0x28);
                    }
                    else {
                      ppuVar22 = &PTR_PTR_1132e2cc8;
                    }
                  }
                  else {
                    uStack_148 = puVar13[1];
                    uStack_150 = *puVar13;
                    lStack_140 = puVar13[2];
                    ppuVar2 = &PTR_PTR_1132e2d78;
                    if ((undefined **)ppuVar22[3] != (undefined **)0x0) {
                      ppuVar2 = (undefined **)ppuVar22[3];
                    }
                    puVar23 = ppuVar2[2];
                    puVar24 = ppuVar2[3];
                  }
                  ppuVar2 = &PTR_PTR_1132e1f58;
                  if (*(undefined ***)(uVar12 + 0x18) != (undefined **)0x0) {
                    ppuVar2 = *(undefined ***)(uVar12 + 0x18);
                  }
                  puVar13 = &uStack_150;
                  FUN_10a700b34(puVar23,puVar24,ppuVar22[4],&lStack_130,puVar13,piVar17[1],
                                (ulong)ppuVar2[3] & 0xfffffffffffffffc);
                  if (plStack_170 < plStack_168) {
                    plStack_170[2] = lStack_120;
                    plStack_170[1] = lStack_128;
                    *plStack_170 = lStack_130;
                    lStack_128 = 0;
                    lStack_120 = 0;
                    lStack_130 = 0;
                    plStack_170[4] = CONCAT44(uStack_10c,uStack_110);
                    plStack_170[3] = lStack_118;
                    *(undefined8 *)((long)plStack_170 + 0x2c) = uStack_104;
                    *(ulong *)((long)plStack_170 + 0x24) = CONCAT44(uStack_108,uStack_10c);
                    plStack_170[8] = lStack_f0;
                    plStack_170[7] = lStack_f8;
                    plStack_170[9] = lStack_e8;
                    lStack_f0 = 0;
                    lStack_e8 = 0;
                    lStack_f8 = 0;
                    plStack_170 = plStack_170 + 10;
                  }
                  else {
                    lVar19 = (long)plStack_170 - (long)plStack_178;
                    uVar12 = (lVar19 >> 4) * -0x3333333333333333 + 1;
                    if (0x333333333333333 < uVar12) {
                      FUN_10a8387ac();
                    /* WARNING: Does not return */
                      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a84aef4);
                      (*pcVar8)();
                    }
                    lVar14 = (long)plStack_168 - (long)plStack_178 >> 4;
                    uVar16 = lVar14 * -0x6666666666666666;
                    if (uVar16 < uVar12 || uVar16 - uVar12 == 0) {
                      uVar16 = uVar12;
                    }
                    if (0x199999999999998 < (ulong)(lVar14 * -0x3333333333333333)) {
                      uVar16 = 0x333333333333333;
                    }
                    pplStack_70 = &plStack_178;
                    if (uVar16 == 0) {
                      puVar13 = (undefined8 *)0x0;
                    }
                    else {
                      FUN_10a8387c0();
                    }
                    plStack_88 = (long *)(uVar16 + lVar19);
                    lStack_78 = uVar16 + (long)puVar13 * 0x50;
                    plStack_88[1] = lStack_128;
                    *plStack_88 = lStack_130;
                    plStack_88[2] = lStack_120;
                    lStack_128 = 0;
                    lStack_120 = 0;
                    lStack_130 = 0;
                    plStack_88[4] = CONCAT44(uStack_10c,uStack_110);
                    plStack_88[3] = lStack_118;
                    *(undefined8 *)((long)plStack_88 + 0x2c) = uStack_104;
                    *(ulong *)((long)plStack_88 + 0x24) = CONCAT44(uStack_108,uStack_10c);
                    plStack_88[8] = lStack_f0;
                    plStack_88[7] = lStack_f8;
                    plStack_88[9] = lStack_e8;
                    lStack_f0 = 0;
                    lStack_e8 = 0;
                    lStack_f8 = 0;
                    plStack_80 = plStack_88 + 10;
                    uStack_90 = uVar16;
                    FUN_10a8386c0(&plStack_178,&uStack_90);
                    plVar3 = plStack_170;
                    func_0x00010a838848(&uStack_90);
                    plStack_170 = plVar3;
                    if (lStack_e8 < 0) {
                      __ZdlPv(lStack_f8);
                    }
                  }
                  if (lStack_120 < 0) {
                    __ZdlPv(lStack_130);
                  }
                  if (lStack_140 < 0) {
                    __ZdlPv(uStack_150);
                  }
                }
              }
              else if ((uRam000000011330a9e8 & 1) != 0) {
                uVar11 = 0x426;
                puVar23 = &UNK_10f67afe8;
LAB_10a84aae8:
                func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67aeea,uVar11,puVar23,in_x6,in_x7,
                                    iVar5);
              }
            }
            lVar18 = lVar18 + 1;
            lVar21 = lVar21 + 8;
          } while (lVar18 < (int)uStack_c0);
        }
        func_0x0001098d37f0(&ppuStack_e0);
        if (plStack_178 == plStack_170) {
          if ((uRam000000011330a9e8 & 1) != 0) {
            lVar18 = *(long *)(lVar20 + 0x28);
            if (lVar18 == 0) {
              puVar13 = (undefined8 *)&UNK_10f67a8c5;
            }
            else {
              puVar13 = *(undefined8 **)(lVar18 + 0xe8);
              if (-1 < *(char *)(lVar18 + 0xff)) {
                puVar13 = (undefined8 *)(lVar18 + 0xe8);
              }
            }
            func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67d4f8,1099,&UNK_10f67d636,in_x6,in_x7,
                                puVar13);
          }
          (**(code **)(lVar20 + 0x88))((undefined8 *)(lVar20 + 0x88));
        }
        else {
          if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
            plVar3 = (long *)*param_1;
            if (-1 < *(char *)((long)param_1 + 0x17)) {
              plVar3 = param_1;
            }
            func_0x00010ae06f08(1,4,&UNK_10f67aaab,&UNK_10f67d4f8,0x44e,&UNK_10f67d65f,in_x6,in_x7,
                                plVar3);
          }
          (**(code **)(lVar20 + 0x48))(&plStack_178,(undefined8 *)(lVar20 + 0x48));
        }
        FUN_10a839194(&plStack_178);
      }
      else {
        pppuVar10 = &ppuStack_e0;
        func_0x000107c2b054(pppuVar10,&UNK_10f67d68c);
        __ZNSt3__16chrono12steady_clock3nowEv();
        if (lVar18 != 0) {
          FUN_10a76bf84((double)((long)pppuVar10 - *(long *)(lVar20 + 0x18)) / 1000000.0,
                        *(undefined8 *)(lVar18 + 0x8d8),&ppuStack_e0);
        }
        if (uStack_d0 < 0) {
          __ZdlPv(ppuStack_e0);
        }
        (*(code *)**(undefined8 **)(lVar20 + 200))();
      }
    }
    plVar3 = plVar9 + 1;
    do {
      lVar18 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return;
}



/* Entry: 10a84af8c; end: 10a84afbf;  */

undefined8 * FUN_10a84af8c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
      }
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
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a84afc0; end: 10a84b007;  */

void FUN_10a84afc0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x20))();
    FUN_10a05bd88(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a84b008; end: 10a84b01f;  */

void FUN_10a84b008(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a84b020; end: 10a84b0d3;  */

void FUN_10a84b020(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110c228b8;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  uVar7 = *puVar6;
  puVar4[1] = puVar6[1];
  *puVar4 = uVar7;
  lVar5 = puVar6[2];
  puVar4[2] = lVar5;
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
  puVar4[3] = puVar6[3];
  (**(code **)(puVar6[4] + 0x18))(puVar4 + 4,puVar6 + 4);
  param_1[1] = puVar4;
  return;
}



/* Entry: 10a84b0d4; end: 10a84b13b;  */

void FUN_10a84b0d4(long param_1)

{
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar1;
  
  if ((bRam000000011330a9e8 & 1) != 0) {
    plVar1 = (long *)(param_1 + 0x20);
    if (*(char *)(param_1 + 0x37) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67c3fe,0x46e,&UNK_10f67d6b8,in_x6,in_x7,
                        **(undefined4 **)(param_1 + 0x10),plVar1);
  }
  return;
}



/* Entry: 10a84b13c; end: 10a84b16b;  */

long FUN_10a84b13c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
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



/* Entry: 10a84b16c; end: 10a84b19f;  */

void FUN_10a84b16c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110c228d8;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10a84b1a0; end: 10a84b22b;  */

void FUN_10a84b1a0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_110c228d8;
  lVar4 = *(long *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
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
  if (*(char *)(param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 3,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20))
    ;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[5] = *(undefined8 *)(param_2 + 0x28);
    param_1[4] = uVar6;
    param_1[3] = uVar5;
  }
  return;
}



/* Entry: 10a84b22c; end: 10a84b33b;  */

void FUN_10a84b22c(long param_1)

{
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if ((bRam000000011330a9e8 & 1) != 0) {
    plVar1 = plVar2 + 3;
    if (*(char *)((long)plVar2 + 0x2f) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67c3fe,0x471,&UNK_10f67d6ec,in_x6,in_x7,
                        *(undefined4 *)plVar2[1],plVar1);
  }
  lVar3 = *plVar2;
  func_0x000107c2b054(auStack_50,&UNK_10f67d721);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x8d8);
    func_0x000107c2b054(auStack_38,"true");
    FUN_10a76bdb0(uVar4,auStack_50,auStack_38);
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  (*(code *)plVar2[6])(plVar2 + 6);
  return;
}



/* Entry: 10a84b33c; end: 10a84b397;  */

/* WARNING: Removing unreachable block (ram,0x00010a84b36c) */

void FUN_10a84b33c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  (*(code *)**(undefined8 **)(lVar1 + 0x38))((undefined8 *)(lVar1 + 0x38));
  func_0x00010a084504(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10a84b398; end: 10a84b3af;  */

void FUN_10a84b398(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a84b3b0; end: 10a84b4a3;  */

void FUN_10a84b3b0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110c228f8;
  puVar4 = (undefined8 *)0x70;
  __Znwm();
  uVar7 = *puVar6;
  puVar4[1] = puVar6[1];
  *puVar4 = uVar7;
  lVar5 = puVar6[2];
  puVar4[2] = lVar5;
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
  if (*(char *)((long)puVar6 + 0x2f) < '\0') {
    func_0x000107c3192c(puVar4 + 3,puVar6[3],puVar6[4]);
  }
  else {
    uVar8 = puVar6[4];
    uVar7 = puVar6[3];
    puVar4[5] = puVar6[5];
    puVar4[4] = uVar8;
    puVar4[3] = uVar7;
  }
  puVar4[6] = puVar6[6];
  (**(code **)(puVar6[7] + 0x18))(puVar4 + 7,puVar6 + 7);
  param_1[1] = puVar4;
  return;
}



/* Entry: 10a84b4a4; end: 10a84b4b3;  */

void FUN_10a84b4a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22928;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a84b4b4; end: 10a84b4d3;  */

void FUN_10a84b4b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22928;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a84b4d4; end: 10a84b4ef;  */

undefined8 * FUN_10a84b4d4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18));
      }
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
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10a84b4f0; end: 10a84b50f;  */

void FUN_10a84b4f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c22978;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a84b510; end: 10a84b523;  */

undefined8 * FUN_10a84b510(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18));
      }
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
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10a84b524; end: 10a84b583;  */

void FUN_10a84b524(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010a82353c(puVar1 + 0xd);
    func_0x00010a823594(puVar1 + 0xb);
    if (*(char *)((long)puVar1 + 0x4f) < '\0') {
      __ZdlPv(puVar1[7]);
    }
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      __ZdlPv(*puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a84b584; end: 10a84b59b;  */

void FUN_10a84b584(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a84b59c; end: 10a84b6b7;  */

void FUN_10a84b59c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar6 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110c229b8;
  puVar4 = (undefined8 *)0x78;
  __Znwm();
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    func_0x000107c3192c(puVar4,*puVar6,puVar6[1]);
  }
  else {
    uVar8 = puVar6[1];
    uVar7 = *puVar6;
    puVar4[2] = puVar6[2];
    puVar4[1] = uVar8;
    *puVar4 = uVar7;
  }
  uVar8 = puVar6[4];
  uVar7 = puVar6[3];
  uVar9 = *(undefined8 *)((long)puVar6 + 0x24);
  *(undefined8 *)((long)puVar4 + 0x2c) = *(undefined8 *)((long)puVar6 + 0x2c);
  *(undefined8 *)((long)puVar4 + 0x24) = uVar9;
  puVar4[4] = uVar8;
  puVar4[3] = uVar7;
  if (*(char *)((long)puVar6 + 0x4f) < '\0') {
    func_0x000107c3192c(puVar4 + 7,puVar6[7],puVar6[8]);
  }
  else {
    uVar8 = puVar6[8];
    uVar7 = puVar6[7];
    puVar4[9] = puVar6[9];
    puVar4[8] = uVar8;
    puVar4[7] = uVar7;
  }
  uVar7 = puVar6[10];
  puVar4[0xb] = puVar6[0xb];
  puVar4[10] = uVar7;
  lVar5 = puVar6[0xc];
  puVar4[0xc] = lVar5;
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
  lVar5 = puVar6[0xe];
  uVar7 = puVar6[0xd];
  puVar4[0xe] = puVar6[0xe];
  puVar4[0xd] = uVar7;
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
  param_1[1] = puVar4;
  return;
}



/* Entry: 10a84b6b8; end: 10a84b717;  */

void FUN_10a84b6b8(long param_1)

{
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar1;
  
  if ((bRam000000011330a9e8 & 1) != 0) {
    plVar1 = (long *)(param_1 + 0x10);
    if (*(char *)(param_1 + 0x27) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67c598,0x4b2,&UNK_10f67d74f,in_x6,in_x7,plVar1);
  }
  return;
}



/* Entry: 10a84b718; end: 10a84b787;  */

void FUN_10a84b718(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10a84b788; end: 10a84b88f;  */

void FUN_10a84b788(long param_1)

{
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if ((bRam000000011330a9e8 & 1) != 0) {
    puVar1 = puVar2;
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      puVar1 = (undefined8 *)*puVar2;
    }
    func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67c598,0x4b5,&UNK_10f67d789,in_x6,in_x7,puVar1);
  }
  lVar3 = puVar2[3];
  func_0x000107c2b054(auStack_50,&UNK_10f67b256);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x8d8);
    func_0x000107c2b054(auStack_38,"true");
    FUN_10a76bdb0(uVar4,auStack_50,auStack_38);
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  (*(code *)puVar2[4])(puVar2 + 4);
  return;
}



/* Entry: 10a84b890; end: 10a84b8e3;  */

/* WARNING: Removing unreachable block (ram,0x00010a84b8c0) */

void FUN_10a84b890(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  (*(code *)**(undefined8 **)(lVar1 + 0x28))((undefined8 *)(lVar1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10a84b8e4; end: 10a84b8fb;  */

void FUN_10a84b8e4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a84b8fc; end: 10a84b9c7;  */

void FUN_10a84b8fc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110c229f8;
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*puVar2,puVar2[1]);
  }
  else {
    uVar4 = puVar2[1];
    uVar3 = *puVar2;
    puVar1[2] = puVar2[2];
    puVar1[1] = uVar4;
    *puVar1 = uVar3;
  }
  puVar1[3] = puVar2[3];
  puVar1[4] = puVar2[4];
  (**(code **)(puVar2[5] + 0x18))(puVar1 + 5,puVar2 + 5);
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a84b9c8; end: 10a84ba03;  */

void FUN_10a84b9c8(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_30;
  long *plStack_28;
  
  plVar8 = *(long **)(param_2 + 0x10);
  lVar11 = *param_1;
  lVar10 = plVar8[0x51];
  if (lVar11 == lVar10) {
    return;
  }
  if (lVar11 != 0) {
    if ((lVar10 != 0) && (*(char *)(lVar11 + 0xe0) == *(char *)(lVar10 + 0xe0))) {
      bVar4 = *(byte *)(lVar11 + 0xff);
      uVar1 = *(ulong *)(lVar11 + 0xf0);
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      bVar5 = *(byte *)(lVar10 + 0xff);
      uVar2 = *(ulong *)(lVar10 + 0xf0);
      if (-1 < (char)bVar5) {
        uVar2 = (ulong)bVar5;
      }
      if (uVar1 == uVar2) {
        plVar9 = (long *)*(long *)(lVar11 + 0xe8);
        if (-1 < (char)bVar4) {
          plVar9 = (long *)(lVar11 + 0xe8);
        }
        plVar3 = (long *)*(long *)(lVar10 + 0xe8);
        if (-1 < (char)bVar5) {
          plVar3 = (long *)(lVar10 + 0xe8);
        }
        _memcmp(plVar9,plVar3);
        if ((int)plVar9 == 0) {
          return;
        }
      }
    }
    plVar9 = plVar8;
    (**(code **)(*plVar8 + 0x138))(plVar8,param_1);
    if (((ulong)plVar9 & 1) == 0) {
      func_0x00010ae06f08(1,0x14,&UNK_10f69e32c,&UNK_10f69e32c,0xffffffff,&UNK_10f69e9af);
      uStack_30 = 0;
      plStack_28 = (long *)0x0;
      FUN_10a6eef74(plVar8 + 0x51,&uStack_30);
      plVar9 = plStack_28;
      if (plStack_28 != (long *)0x0) {
        plVar3 = plStack_28 + 1;
        do {
          lVar10 = *plVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = lVar10 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_28 + 0x10))(plStack_28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      goto LAB_10ac62d70;
    }
  }
  FUN_10a6e467c(plVar8 + 0x51,param_1);
LAB_10ac62d70:
  *(undefined1 *)(plVar8 + 0x5c) = 0;
  (**(code **)(*plVar8 + 0x50))(plVar8);
  return;
}



/* Entry: 10a84ba04; end: 10a84ba23;  */

void FUN_10a84ba04(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c22a40;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a84ba24; end: 10a84ba9f;  */

undefined8 * FUN_10a84ba24(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  if ((*(char *)(param_1 + 0x308) == '\x01') &&
     (plVar5 = *(long **)(param_1 + 0x300), plVar5 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  puVar2 = (undefined8 *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_110c213e0;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_110c679b8;
  *(undefined ***)(param_1 + 0x40) = &PTR_DAT_110c679e8;
  *(undefined ***)(param_1 + 0x310) = &PTR_DAT_110c21580;
  *(undefined8 *)(param_1 + 0xc0) = &PTR_DAT_110c67a40;
  FUN_10a004cfc(param_1 + 0x2e8);
  FUN_10a004cfc(param_1 + 0x2d8);
  if (*(char *)(param_1 + 0x2d7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x2c0));
  }
  FUN_10a0522e8(param_1 + 0x2b0);
  FUN_10a0772f0(param_1 + 0x2a0);
  *puVar2 = &PTR_FUN_110c215d0;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_110bb3968;
  *(undefined ***)(param_1 + 0x40) = &PTR_DAT_110bb3998;
  *(undefined ***)(param_1 + 0x310) = &PTR_DAT_110c21730;
  *(undefined ***)(param_1 + 0xc0) = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x280);
  func_0x00010a042c64(param_1 + 600);
  func_0x00010a0523dc(param_1 + 0x240);
  if (*(char *)(param_1 + 0x1f8) == '\x01') {
    func_0x00010a042d30(param_1 + 0x1e8);
  }
  *(undefined ***)(param_1 + 0xc0) = &PTR_FUN_110b9f768;
  FUN_10a1c00f4((undefined8 *)(param_1 + 0xc0));
  *puVar2 = &PTR_DAT_110c21780;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_110b9f848;
  *(undefined ***)(param_1 + 0x40) = &PTR_DAT_110b9f878;
  *(undefined ***)(param_1 + 0x310) = &PTR_DAT_110c21850;
  FUN_10a042dcc(param_1 + 0xb0);
  *puVar2 = &PTR_DAT_110c60a00;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110c60a88;
  *(undefined ***)(param_1 + 0x40) = &PTR_DAT_110c60ab8;
  ppuVar8 = (undefined **)(param_1 + 0x70);
  puVar10 = *(undefined8 **)(param_1 + 0x78);
  for (puVar9 = (undefined8 *)*ppuVar8; puVar9 != puVar10; puVar9 = puVar9 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar9,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar8);
  plVar5 = (long *)(param_1 + 0x68);
  if ((*plVar5 != 0) && (*(undefined ***)(*(long *)(*plVar5 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 0x30);
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0xa8) + 0x828), lVar6 != 0)) {
    FUN_10a1dfb2c(lVar6,puVar2);
  }
  if (*(char *)(param_1 + 0xa7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x90));
  }
  appuStack_180[0] = ppuVar8;
  FUN_10ac78cf4(appuStack_180);
  lVar6 = *plVar5;
  *plVar5 = 0;
  if (lVar6 != 0) {
    FUN_10ac7d690(plVar5);
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x40) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x48);
  *(undefined ***)(param_1 + 0x28) = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 0x30);
  return puVar2;
}



/* Entry: 10a84baa0; end: 10a84baa3;  */

void FUN_10a84baa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a84baa4; end: 10a84bafb;  */

long FUN_10a84baa4(long param_1)

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



/* Entry: 10a84bafc; end: 10a84bb33;  */

void FUN_10a84bafc(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar1 = *(ushort *)(lVar2 + 0x209);
    if ((uVar1 & 0x7f) != 0) {
      *(ushort *)(lVar2 + 0x209) = uVar1 & 0xff00 | uVar1 - 1 & 0x7f;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      *(undefined8 *)(lVar2 + 0x218) = 0;
      FUN_10a1cc408(lVar2 + 0x220,(ulong)&uStack_60 | 8);
    }
    return;
  }
  return;
}



/* Entry: 10a84bb34; end: 10a84bc2f;  */

undefined1  [16] FUN_10a84bb34(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c21888;
  puVar1 = &UNK_10f67a8c5;
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
    ppuStack_40 = &PTR_DAT_110c21888;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110bb3788;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a84bc30; end: 10a84bc87;  */

ulong FUN_10a84bc30(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a84bc88,FUN_10a84bdf0);
  }
  return param_1;
}



/* Entry: 10a84bc88; end: 10a84bdef;  */

void FUN_10a84bc88(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
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
  plVar9 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar9 == (long *)0x0) {
    puVar7 = &UNK_10f68f52e;
  }
  else {
    plVar6 = param_2;
    FUN_10a052c2c(param_2,plVar9);
    if ((plVar6 != (long *)0x0) && (___dynamic_cast(), plVar6 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      plVar9 = (long *)plVar6[0x52];
      if (plVar9 != (long *)0x0) {
        plVar6 = plVar9 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10a080b34(param_1,param_2,&stack0xffffffffffffffb0);
      if (plVar9 != (long *)0x0) {
        plVar6 = plVar9 + 1;
        do {
          lVar11 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = plVar5 + 0x4b;
      lVar11 = plVar5[0x59];
      uVar8 = lVar11 - 1;
      plVar5[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar9[lVar11 + 2];
        if (plVar5[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar8) {
          return;
        }
      }
      lVar11 = *plVar9;
      lVar14 = plVar5[0x4c];
      lVar12 = lVar14 - lVar11;
      uVar16 = lVar12 >> 4;
      if (uVar16 < uVar8) {
        uVar17 = uVar8 - uVar16;
        lVar15 = plVar5[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar8 >> 0x3c == 0) {
            uVar10 = lVar15 - lVar11 >> 3;
            if (uVar10 <= uVar8) {
              uVar10 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar9;
            if (uVar10 >> 0x3c == 0) {
              lVar4 = uVar10 << 4;
              __Znwm();
              lVar14 = lVar4 + lVar12;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar11,lVar12);
              *plVar9 = lVar13;
              plVar5[0x4c] = lVar14 + uVar17 * 0x10;
              plVar5[0x4d] = lVar4 + uVar10 * 0x10;
              lStack_88 = lVar11;
              lStack_80 = lVar11;
              lStack_78 = lVar11;
              lStack_70 = lVar15;
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
        _bzero(lVar14,uVar17 * 0x10);
        plVar5[0x4c] = lVar14 + uVar17 * 0x10;
      }
      else if (uVar8 < uVar16) {
        lVar11 = lVar11 + uVar8 * 0x10;
        while (lVar14 != lVar11) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar11;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar8;
      return;
    }
    puVar7 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar7);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a84bddc);
  (*pcVar3)();
}



/* Entry: 10a84bdf0; end: 10a84bf57;  */

void FUN_10a84bdf0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
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
  func_0x000109898688(param_2,param_3);
  if (plVar6 == (long *)0x0) {
    puVar8 = &UNK_10f68f52e;
  }
  else {
    plVar7 = param_2;
    FUN_10a053854(param_2,plVar6);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10a080bb8(param_5);
      FUN_10a079938(&stack0xffffffffffffffb0,param_2,param_4);
      FUN_10ac62cbc(plVar7,&stack0xffffffffffffffb0);
      if (in_stack_ffffffffffffffb8 != (long *)0x0) {
        plVar6 = in_stack_ffffffffffffffb8 + 1;
        do {
          lVar11 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
        }
      }
      *param_1 = 0;
      plVar6 = plVar5 + 0x4b;
      lVar11 = plVar5[0x59];
      uVar9 = lVar11 - 1;
      plVar5[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar6[lVar11 + 2];
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
      lVar11 = *plVar6;
      lVar14 = plVar5[0x4c];
      lVar12 = lVar14 - lVar11;
      uVar16 = lVar12 >> 4;
      if (uVar16 < uVar9) {
        uVar17 = uVar9 - uVar16;
        lVar15 = plVar5[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar15 - lVar11 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar10 >> 0x3c == 0) {
              lVar4 = uVar10 << 4;
              __Znwm();
              lVar14 = lVar4 + lVar12;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar11,lVar12);
              *plVar6 = lVar13;
              plVar5[0x4c] = lVar14 + uVar17 * 0x10;
              plVar5[0x4d] = lVar4 + uVar10 * 0x10;
              lStack_88 = lVar11;
              lStack_80 = lVar11;
              lStack_78 = lVar11;
              lStack_70 = lVar15;
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
        _bzero(lVar14,uVar17 * 0x10);
        plVar5[0x4c] = lVar14 + uVar17 * 0x10;
      }
      else if (uVar9 < uVar16) {
        lVar11 = lVar11 + uVar9 * 0x10;
        while (lVar14 != lVar11) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar11;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar9;
      return;
    }
    puVar8 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a84bf34);
  (*pcVar3)();
}



/* Entry: 10a84bf58; end: 10a84c0af;  */

void FUN_10a84bf58(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f67c95f,0x20);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a84c014);
  (*pcVar4)();
}



/* Entry: 10a84c0b0; end: 10a84c1b7;  */

void FUN_10a84c0b0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  code *extraout_x9;
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
  long *in_stack_ffffffffffffffb8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  ppuVar7 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (*extraout_x9)(&stack0xffffffffffffffb0,*ppuVar7);
  FUN_10a05b924(param_1,param_2,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar1 = in_stack_ffffffffffffffb8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  plVar1 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar1[lVar10 + 2];
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
  lVar10 = *plVar1;
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
        plStack_68 = plVar1;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar1 = lVar12;
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



/* Entry: 10a84c1b8; end: 10a84c1d3;  */

void FUN_10a84c1b8(void)

{
  return;
}



/* Entry: 10a84c1d4; end: 10a84c31b;  */

void FUN_10a84c1d4(long param_1)

{
  FUN_10a838e84(param_1 + 0x88);
  FUN_10a838e84(param_1 + 0x30);
  FUN_10a839194(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a84c31c; end: 10a84c34f;  */

void FUN_10a84c31c(void)

{
  return;
}



/* Entry: 10a84c350; end: 10a84c54b;  */

void FUN_10a84c350(long *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  code **unaff_x21;
  code **unaff_x22;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined7 uStack_1a8;
  char cStack_1a1;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  char cStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  long *plStack_e8;
  long *plStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  puVar14 = *(undefined8 **)(param_2 + 0x10);
  if (*(char *)(puVar14 + 0x12) == '\x01') {
    FUN_10a839194(puVar14 + 0xd);
    *(undefined1 *)(puVar14 + 0x12) = 0;
  }
  puVar14[0xd] = 0;
  puVar14[0xe] = 0;
  puVar14[0xf] = 0;
  lVar13 = *param_1;
  lVar5 = param_1[1];
  lVar17 = lVar5 - lVar13;
  if (lVar17 != 0) {
    uVar11 = (lVar17 >> 4) * -0x3333333333333333;
    if (0x333333333333333 < uVar11) {
      FUN_10a8387ac();
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a84c4e0);
      (*pcVar8)();
    }
    FUN_10a8387c0();
    lVar17 = 0;
    puVar14[0xd] = uVar11;
    puVar14[0xe] = uVar11;
    puVar14[0xf] = uVar11 + param_2 * 0x50;
    do {
      puVar15 = (undefined8 *)(lVar13 + lVar17);
      puVar9 = (undefined8 *)(uVar11 + lVar17);
      if (*(char *)((long)puVar15 + 0x17) < '\0') {
        func_0x000107c3192c(puVar9,*puVar15,puVar15[1]);
      }
      else {
        uVar18 = puVar15[1];
        uVar16 = *puVar15;
        puVar9[2] = puVar15[2];
        puVar9[1] = uVar18;
        *puVar9 = uVar16;
      }
      lVar3 = uVar11 + lVar17;
      lVar4 = lVar13 + lVar17;
      uVar18 = *(undefined8 *)(lVar4 + 0x20);
      uVar16 = *(undefined8 *)(lVar4 + 0x18);
      uVar19 = *(undefined8 *)(lVar4 + 0x24);
      *(undefined8 *)(lVar3 + 0x2c) = *(undefined8 *)(lVar4 + 0x2c);
      *(undefined8 *)(lVar3 + 0x24) = uVar19;
      *(undefined8 *)(lVar3 + 0x20) = uVar18;
      *(undefined8 *)(lVar3 + 0x18) = uVar16;
      if (*(char *)(lVar4 + 0x4f) < '\0') {
        func_0x000107c3192c(lVar3 + 0x38,*(undefined8 *)(lVar4 + 0x38),*(undefined8 *)(lVar4 + 0x40)
                           );
      }
      else {
        uVar18 = *(undefined8 *)(lVar4 + 0x40);
        uVar16 = *(undefined8 *)(lVar4 + 0x38);
        *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar4 + 0x48);
        *(undefined8 *)(lVar3 + 0x40) = uVar18;
        *(undefined8 *)(lVar3 + 0x38) = uVar16;
      }
      lVar17 = lVar17 + 0x50;
    } while (lVar13 + lVar17 != lVar5);
    puVar14[0xe] = uVar11 + lVar17;
  }
  lVar13 = param_1[3];
  puVar14[0x11] = param_1[4];
  puVar14[0x10] = lVar13;
  *(undefined1 *)(puVar14 + 0x12) = 1;
  plVar12 = (long *)0xe8;
  __Znwm();
  lVar13 = param_1[3];
  plVar12[1] = param_1[4];
  *plVar12 = lVar13;
  *(undefined1 *)(plVar12 + 0x10) = 0;
  *(undefined1 *)(plVar12 + 0x11) = 0;
  *(undefined1 *)(plVar12 + 0x1b) = 0;
  plVar12[4] = 0;
  plVar12[5] = 0;
  plVar12[3] = 0;
  *(undefined1 *)(plVar12 + 6) = 0;
  plVar12[0x1c] = -0x8000000000000000;
  lVar13 = puVar14[0x13];
  puVar14[0x13] = plVar12;
  if (lVar13 != 0) {
    FUN_10a84c1d4(lVar13);
  }
  func_0x000109472e20();
  *(undefined1 *)(puVar14 + 0x19) = 1;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar14;
  if ((*(char *)(puVar14 + 0x19) == '\x01') && (*(char *)(puVar14 + 9) == '\x01')) {
    puVar15 = (undefined8 *)puVar14[0x13];
    puVar9 = puVar14;
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x000109472f14(puVar15,puVar14 + 7,puVar9);
    if ((int)puVar15 != 0) {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f67b144,&UNK_10f67b282,0x110,&UNK_10f67b2ed);
      }
      func_0x0001094735c0(&uStack_1b8,puVar14[0x13] + 0x30);
      if (cStack_168 == '\x01') {
        puVar14[0xb] = uStack_198;
        puVar14[10] = uStack_1a0;
        if ((*(byte *)(puVar14 + 0xc) & 1) == 0) {
          *(undefined1 *)(puVar14 + 0xc) = 1;
        }
        plVar12 = (long *)0x20;
        __Znwm();
        plVar12[1] = 0;
        plVar12[2] = 0;
        *plVar12 = (long)&PTR_DAT_110c22b20;
        plStack_e8 = plVar12 + 3;
        *plStack_e8 = 0;
        plVar10 = (long *)0x20;
        plStack_e0 = plVar12;
        __Znwm();
        plVar10[1] = 0;
        plVar10[2] = 0;
        *plVar10 = (long)&PTR_FUN_110c22b70;
        plStack_130 = plVar10 + 3;
        *plStack_130 = 0;
        plStack_128 = plVar10;
        FUN_10a827088(puVar14 + 0x17,&plStack_130);
        plVar12 = plStack_128;
        if (plStack_128 != (long *)0x0) {
          plVar10 = plStack_128 + 1;
          do {
            lVar13 = *plVar10;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_128 + 0x10))(plStack_128);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        FUN_10a8270ec(&plStack_130);
        plVar12 = plStack_e8;
        FUN_10a838ed0(puVar14[0x17],plStack_e8,&plStack_130);
        if (plStack_128 != (long *)0x0) {
          func_0x0001092b4274(&plStack_128);
        }
        if (plStack_130 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_130 + 1);
          do {
            uVar11 = *puVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar7) {
              *puVar1 = uVar11 - 4;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar7) {
                *puVar1 = uVar11 - 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plStack_130 + 8))();
            }
          }
        }
        plVar10 = plStack_e0;
        plStack_130 = plVar12;
        plStack_128 = plStack_e0;
        if (plStack_e0 != (long *)0x0) {
          plVar2 = plStack_e0 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = *plVar2 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        plStack_118 = (long *)puVar14[0x18];
        uStack_120 = puVar14[0x17];
        if (puVar14[0x18] != 0) {
          plVar2 = (long *)(puVar14[0x18] + 8);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = *plVar2 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (cStack_1a1 < '\0') {
          func_0x000107c3192c(&uStack_110,uStack_1b8,uStack_1b0);
        }
        else {
          uStack_108 = uStack_1b0;
          uStack_110 = uStack_1b8;
          uStack_100 = CONCAT17(cStack_1a1,uStack_1a8);
        }
        plStack_160 = plVar12;
        plStack_158 = plVar10;
        if (plVar10 != (long *)0x0) {
          plVar10 = plVar10 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = *plVar10 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        puStack_f8 = puVar14;
        if (cStack_1a1 < '\0') {
          func_0x000107c3192c(&uStack_150,uStack_1b8,uStack_1b0);
        }
        else {
          uStack_148 = uStack_1b0;
          uStack_150 = uStack_1b8;
          uStack_140 = CONCAT17(cStack_1a1,uStack_1a8);
        }
        uVar16 = puVar14[1];
        pcStack_98 = FUN_10a84c78c;
        ppuStack_90 = &PTR_DAT_110c22be8;
        puVar15 = (undefined8 *)0x40;
        __Znwm();
        puVar15[1] = plStack_128;
        *puVar15 = plStack_130;
        if (plStack_128 != (long *)0x0) {
          plVar12 = plStack_128 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar7) {
              *plVar12 = *plVar12 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        puVar15[3] = plStack_118;
        puVar15[2] = uStack_120;
        if (plStack_118 != (long *)0x0) {
          plVar12 = plStack_118 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar7) {
              *plVar12 = *plVar12 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (uStack_100 < 0) {
          func_0x000107c3192c(puVar15 + 4,uStack_110,uStack_108);
        }
        else {
          puVar15[5] = uStack_108;
          puVar15[4] = uStack_110;
          puVar15[6] = uStack_100;
        }
        puVar15[7] = puStack_f8;
        pcStack_d8 = FUN_10a84caa8;
        ppuStack_d0 = &PTR_FUN_110c22c08;
        plStack_c0 = plStack_158;
        plStack_c8 = plStack_160;
        if (plStack_158 != (long *)0x0) {
          plVar12 = plStack_158 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar7) {
              *plVar12 = *plVar12 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        unaff_x22 = &pcStack_d8;
        unaff_x21 = &pcStack_98;
        puStack_88 = puVar15;
        if (uStack_140 < 0) {
          func_0x000107c3192c(&uStack_b8,uStack_150,uStack_148);
        }
        else {
          uStack_b0 = uStack_148;
          uStack_b8 = uStack_150;
          lStack_a8 = uStack_140;
        }
        FUN_10a822788(uVar16,&uStack_1b8,&pcStack_98,&pcStack_d8,puVar14[0x15]);
        (*(code *)*ppuStack_d0)(&ppuStack_d0);
        (*(code *)*ppuStack_90)(&ppuStack_90);
        if (uStack_140._7_1_ < '\0') {
          __ZdlPv(uStack_150);
        }
        plVar12 = plStack_158;
        if (plStack_158 != (long *)0x0) {
          plVar10 = plStack_158 + 1;
          do {
            lVar13 = *plVar10;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_158 + 0x10))(plStack_158);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        if (uStack_100._7_1_ < '\0') {
          __ZdlPv(uStack_110);
        }
        plVar12 = plStack_118;
        if (plStack_118 != (long *)0x0) {
          plVar10 = plStack_118 + 1;
          do {
            lVar13 = *plVar10;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_118 + 0x10))(plStack_118);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        plVar12 = plStack_128;
        if (plStack_128 != (long *)0x0) {
          plVar10 = plStack_128 + 1;
          do {
            lVar13 = *plVar10;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_128 + 0x10))(plStack_128);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        plVar12 = plStack_e0;
        if (plStack_e0 != (long *)0x0) {
          plVar10 = plStack_e0 + 1;
          do {
            lVar13 = *plVar10;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
      }
      puVar15 = &uStack_1b8;
      FUN_10a838e84();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a84c600(unaff_x22 + 2);
  (*(code *)*ppuStack_90)(unaff_x21 + 1);
  FUN_10a82715c(&plStack_160);
  func_0x00010a82718c(&plStack_130);
  FUN_10a84c600(&plStack_e8);
  FUN_10a838e84(&uStack_1b8);
  __Unwind_Resume();
  plVar12 = (long *)puVar15[1];
  *puVar15 = 0;
  puVar15[1] = 0;
  if (plVar12 != (long *)0x0) {
    plVar10 = plVar12 + 1;
    do {
      lVar13 = *plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar12);
      return;
    }
  }
  return;
}



/* Entry: 10a84c54c; end: 10a84c5cb;  */

void FUN_10a84c54c(void)

{
  return;
}



/* Entry: 10a84c5cc; end: 10a84c5eb;  */

void FUN_10a84c5cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c22b20;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a84c5ec; end: 10a84c5ff;  */

void FUN_10a84c5ec(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,(long *)(param_1 + 0x18));
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a84c600; end: 10a84c657;  */

long FUN_10a84c600(long param_1)

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



/* Entry: 10a84c658; end: 10a84c667;  */

void FUN_10a84c658(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22b70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a84c668; end: 10a84c687;  */

void FUN_10a84c668(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22b70;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a84c688; end: 10a84c6d7;  */

void FUN_10a84c688(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a84c6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 8))();
        return;
      }
    }
  }
  return;
}



/* Entry: 10a84c6d8; end: 10a84c78b;  */

undefined8 * FUN_10a84c6d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22bc0;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_10a2f35d0(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a84c78c; end: 10a84c8af;  */

void FUN_10a84c78c(undefined8 param_1,long param_2)

{
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  puVar4 = *(undefined8 **)(param_2 + 0x10);
  lVar2 = puVar4[7];
  FUN_10a84c8b0(*(undefined8 *)*puVar4,param_1);
  if (puVar4[2] != *(long *)(lVar2 + 0xb8)) {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      plVar1 = puVar4 + 4;
      if (*(char *)((long)puVar4 + 0x37) < '\0') {
        plVar1 = (long *)*plVar1;
      }
      func_0x00010ae06f08(1,4,&UNK_10f67b144,&UNK_10f67d7c4,0x125,&UNK_10f67d8a8,in_x6,in_x7,plVar1)
      ;
    }
    lVar2 = *(long *)(lVar2 + 8);
    func_0x000107c2b054(auStack_50,&UNK_10f67d8e4);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x8d8);
      func_0x000107c2b054(auStack_38,"true");
      FUN_10a76bdb0(uVar3,auStack_50,auStack_38);
      if (cStack_21 < '\0') {
        __ZdlPv(auStack_38[0]);
      }
    }
    if (cStack_39 < '\0') {
      __ZdlPv(auStack_50[0]);
    }
  }
  return;
}



/* Entry: 10a84c8b0; end: 10a84c9af;  */

void FUN_10a84c8b0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(param_1 + 0xa8) == '\x01') {
          FUN_10a2f35d0(param_1 + 0x98);
          *(undefined1 *)(param_1 + 0xa8) = 0;
        }
        lVar4 = param_2[1];
        uVar9 = *param_2;
        *(undefined8 *)(param_1 + 0xa0) = param_2[1];
        *(undefined8 *)(param_1 + 0x98) = uVar9;
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
        *(undefined1 *)(param_1 + 0xa8) = 1;
        *(undefined8 *)(param_1 + 0x10) = 2;
        uStack_78 = *(undefined8 *)(param_1 + 0x60);
        uStack_80 = *(undefined8 *)(param_1 + 0x58);
        uStack_68 = *(undefined8 *)(param_1 + 0x70);
        uStack_70 = *(undefined8 *)(param_1 + 0x68);
        uStack_58 = *(undefined8 *)(param_1 + 0x80);
        uStack_60 = *(undefined8 *)(param_1 + 0x78);
        uStack_c0 = *(undefined8 *)(param_1 + 0x18);
        uStack_b8 = *(undefined8 *)(param_1 + 0x20);
        uStack_a8 = *(undefined8 *)(param_1 + 0x30);
        uStack_b0 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 **)(param_1 + 0x88) = (undefined8 *)(param_1 + 0x18);
        *(undefined1 *)(param_1 + 0x19) = 0;
        uStack_98 = *(undefined8 *)(param_1 + 0x40);
        uStack_a0 = *(undefined8 *)(param_1 + 0x38);
        uStack_88 = *(undefined8 *)(param_1 + 0x50);
        uStack_90 = *(undefined8 *)(param_1 + 0x48);
        puVar5 = &uStack_c0;
        do {
          uVar6 = (ulong)*(byte *)((long)puVar5 + 1);
          if (uVar6 != 0) {
            puVar8 = (undefined8 *)((long)puVar5 + 0x20);
            do {
              uStack_48 = puVar8[-1];
              uStack_50 = puVar8[-2];
              uStack_40 = *puVar8;
              (*(code *)**(undefined8 **)*puVar8)((undefined8 *)*puVar8,&uStack_50);
              uVar6 = uVar6 - 1;
              puVar8 = puVar8 + 3;
            } while (uVar6 != 0);
          }
          puVar7 = *(undefined1 **)((long)puVar5 + 8);
          if (puVar5 != &uStack_c0) {
            _free(puVar5);
          }
          puVar5 = (undefined8 *)puVar7;
        } while (puVar7 != (undefined1 *)0x0);
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return;
    }
  } while( true );
}



/* Entry: 10a84c9b0; end: 10a84c9c7;  */

void FUN_10a84c9b0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a84c9c8; end: 10a84caa7;  */

void FUN_10a84c9c8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_DAT_110c22be8;
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  lVar5 = puVar6[1];
  uVar7 = *puVar6;
  puVar4[1] = puVar6[1];
  *puVar4 = uVar7;
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
  lVar5 = puVar6[3];
  uVar7 = puVar6[2];
  puVar4[3] = puVar6[3];
  puVar4[2] = uVar7;
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
  if (*(char *)((long)puVar6 + 0x37) < '\0') {
    func_0x000107c3192c(puVar4 + 4,puVar6[4],puVar6[5]);
  }
  else {
    uVar8 = puVar6[5];
    uVar7 = puVar6[4];
    puVar4[6] = puVar6[6];
    puVar4[5] = uVar8;
    puVar4[4] = uVar7;
  }
  puVar4[7] = puVar6[7];
  param_1[1] = puVar4;
  return;
}



/* Entry: 10a84caa8; end: 10a84cc2f;  */

void FUN_10a84caa8(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined **appuStack_158 [36];
  undefined1 auStack_38 [8];
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  puVar3 = (undefined8 *)0x28;
  __Znwm();
  lStack_198 = -0x7fffffffffffffd8;
  uStack_1a0 = 0x25;
  puVar3[1] = 0x6d2064616f6c206f;
  *puVar3 = 0x742064656c696146;
  puVar3[3] = 0x6874697720746573;
  puVar3[2] = 0x73612072656b7261;
  *(undefined8 *)((long)puVar3 + 0x1d) = 0x206c727520687469;
  *(undefined1 *)((long)puVar3 + 0x25) = 0;
  uVar1 = *(ulong *)(param_1 + 0x28);
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (-1 < (char)*(byte *)(param_1 + 0x37)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x37);
    puVar2 = (undefined8 *)(param_1 + 0x20);
  }
  ppuVar4 = &puStack_1a8;
  puStack_1a8 = puVar3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(ppuVar4,puVar2,uVar1)
  ;
  puStack_188 = ppuVar4[1];
  puStack_190 = *ppuVar4;
  puStack_180 = ppuVar4[2];
  ppuVar4[1] = (undefined8 *)0x0;
  ppuVar4[2] = (undefined8 *)0x0;
  *ppuVar4 = (undefined8 *)0x0;
  ppuVar4 = &puStack_190;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar4,&UNK_10f67d925,0xb);
  uStack_168 = ppuVar4[1];
  uStack_170 = *ppuVar4;
  lStack_160 = (long)ppuVar4[2];
  ppuVar4[1] = (undefined8 *)0x0;
  ppuVar4[2] = (undefined8 *)0x0;
  *ppuVar4 = (undefined8 *)0x0;
  FUN_10a002a94(appuStack_158,&uStack_170);
  appuStack_158[0] = &PTR_FUN_110b99e70;
  FUN_10a05bde0(auStack_38,appuStack_158);
  func_0x000109d1b350(*puVar5,auStack_38);
  __ZNSt13exception_ptrD1Ev(auStack_38);
  __ZNSt13runtime_errorD2Ev(appuStack_158);
  if (lStack_160 < 0) {
    __ZdlPv(uStack_170);
  }
  if ((long)puStack_180 < 0) {
    __ZdlPv(puStack_190);
  }
  if (lStack_198 < 0) {
    __ZdlPv(puStack_1a8);
  }
  return;
}



/* Entry: 10a84cc30; end: 10a84cc5f;  */

long FUN_10a84cc30(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
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



/* Entry: 10a84cc60; end: 10a84cc93;  */

void FUN_10a84cc60(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110c22c08;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10a84cc94; end: 10a84cd1f;  */

void FUN_10a84cc94(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_110c22c08;
  lVar4 = *(long *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
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
  if (*(char *)(param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 3,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20))
    ;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[5] = *(undefined8 *)(param_2 + 0x28);
    param_1[4] = uVar6;
    param_1[3] = uVar5;
  }
  return;
}



/* Entry: 10a84cd20; end: 10a84cf27;  */

void FUN_10a84cd20(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  plVar5 = (long *)0x170;
  __Znwm();
  plVar7 = plVar5 + 1;
  *plVar7 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c22c38;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&lStack_60,*param_3,param_3[1]);
  }
  else {
    lStack_58 = param_3[1];
    lStack_60 = *param_3;
    lStack_50 = param_3[2];
  }
  plVar1 = plVar5 + 3;
  FUN_10ac7050c(plVar1,param_2);
  plVar5[3] = (long)&PTR_FUN_110c20680;
  plVar5[5] = (long)&PTR_DAT_110c20758;
  plVar5[8] = (long)&PTR_DAT_110c20788;
  plVar5[0x22] = 0;
  plVar5[0x21] = 0;
  plVar5[0x24] = 0;
  plVar5[0x23] = 0;
  *(undefined4 *)(plVar5 + 0x25) = 0x3f800000;
  plVar5[0x27] = 0;
  plVar5[0x26] = 0;
  plVar5[0x29] = 0;
  plVar5[0x28] = 0;
  *(undefined4 *)(plVar5 + 0x2a) = 0x3f800000;
  if (lStack_50 < 0) {
    func_0x000107c3192c(plVar5 + 0x2b,lStack_60,lStack_58);
    if (lStack_50 < 0) {
      __ZdlPv(lStack_60);
    }
  }
  else {
    plVar5[0x2c] = lStack_58;
    plVar5[0x2b] = lStack_60;
    plVar5[0x2d] = lStack_50;
  }
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar5;
  if (plVar5[0xc] == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar2 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[0xb] = (long)plVar1;
    plVar5[0xc] = (long)plVar5;
  }
  else {
    if (*(long *)(plVar5[0xc] + 8) != -1) {
      return;
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar2 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[0xb] = (long)plVar1;
    plVar5[0xc] = (long)plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 != 0) {
    return;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
  return;
}



/* Entry: 10a84cf28; end: 10a84cf37;  */

void FUN_10a84cf28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22c38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a84cf38; end: 10a84cf57;  */

void FUN_10a84cf38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22c38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a84cf58; end: 10a84cf67;  */

void FUN_10a84cf58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a84cf60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a84cf68; end: 10a84cfbf;  */

long FUN_10a84cf68(long param_1)

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



/* Entry: 10a84cfc0; end: 10a84d123;  */

void FUN_10a84cfc0(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a84d124; end: 10a84d21f;  */

undefined8 * FUN_10a84d124(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar6 = param_1;
  uVar7 = param_2;
  func_0x00010a0fda30();
  uVar2 = *param_3;
  plVar3 = (long *)param_3[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10aa7093c(param_1,param_2,puVar6,uVar7);
  *param_1 = &PTR_FUN_110c49cd0;
  param_1[2] = &PTR_DAT_110c49d70;
  param_1[7] = &PTR_DAT_110c49dc8;
  param_1[0x1c] = uVar2;
  param_1[0x1d] = plVar3;
  if (plVar3 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  }
  else {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return param_1;
}



/* Entry: 10a84d220; end: 10a84d2bf;  */

long * FUN_10a84d220(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  *puVar2 = &PTR_DAT_110c235e8;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a84d2c0(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a84d2c0; end: 10a84d3e3;  */

void FUN_10a84d2c0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a84d3e4; end: 10a84d423;  */

void FUN_10a84d3e4(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a84d424; end: 10a84d45f;  */

long FUN_10a84d424(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c23628);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}


