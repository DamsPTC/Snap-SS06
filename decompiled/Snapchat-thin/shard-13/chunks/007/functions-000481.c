/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ab6c328; end: 10ab6c597;  */

undefined ***
FUN_10ab6c328(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  undefined ***pppuVar6;
  undefined8 *puVar7;
  undefined ***UNRECOVERED_JUMPTABLE;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  long lVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined1 auStack_200 [8];
  undefined ***pppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined ***pppuStack_1e8;
  undefined ***pppuStack_1e0;
  undefined ***pppuStack_1d8;
  undefined ***pppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  long lStack_188;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined ***pppuStack_138;
  long lStack_130;
  undefined ***pppuStack_128;
  undefined ***apppuStack_120 [2];
  char cStack_109;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  char cStack_d9;
  long lStack_38;
  
  pppuVar6 = &ppuStack_140;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 0x50) == 0) {
    FUN_10a00946c(&UNK_10f693aeb);
LAB_10ab6c50c:
    FUN_10a00946c(&UNK_10f693af9);
  }
  else {
    if (*(long *)(param_2 + 0x268) == 0) goto LAB_10ab6c50c;
    lVar11 = param_2;
    FUN_10ab6c198(param_2);
    func_0x00010ad0321c();
    func_0x000107c2b054(auStack_108,&DAT_10f685174);
    FUN_10ad016b8(apppuStack_120,lVar11,auStack_108);
    if (cStack_f1 < '\0') {
      __ZdlPv(auStack_108[0]);
    }
    uVar12 = (ulong)*(byte *)(*(long *)(param_2 + 0x50) + 0x29);
    if (5 < uVar12) goto LAB_10ab6c524;
    FUN_10aba1500(&lStack_130,*(undefined8 *)(*(long *)(param_2 + 0x50) + uVar12 * 8 + 0x30),param_2
                  ,0);
    FUN_10a12add4(auStack_108,lStack_130 + 0x10);
    puVar7 = auStack_108;
    FUN_10a1a56b4(puVar7,apppuStack_120,1);
    if (((ulong)puVar7 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x50);
      FUN_10a0ff18c(auStack_108,apppuStack_120,2);
      pppuVar10 = (undefined ***)0x0;
      FUN_10ac5fb74(&ppuStack_140,uVar14,auStack_108);
      if (cStack_d9 < '\0') {
        __ZdlPv(uStack_f0);
      }
      if (cStack_f1 < '\0') {
        __ZdlPv(auStack_108[0]);
      }
      *(undefined1 *)(ppuStack_140 + 0x51) = 1;
      UNRECOVERED_JUMPTABLE = *(undefined ****)(param_2 + 0x50);
      FUN_10a376e68(param_1);
      if (pppuStack_138 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_138 + 1;
        do {
          ppuVar13 = *pppuVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar3) {
            *pppuVar8 = (undefined **)((long)ppuVar13 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuStack_138)[2])(pppuStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          UNRECOVERED_JUMPTABLE = pppuStack_138;
        }
      }
      if (pppuStack_128 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_128 + 1;
        do {
          ppuVar13 = *pppuVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar3) {
            *pppuVar8 = (undefined **)((long)ppuVar13 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuStack_128)[2])(pppuStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          UNRECOVERED_JUMPTABLE = pppuStack_128;
        }
      }
      if (cStack_109 < '\0') {
        UNRECOVERED_JUMPTABLE = apppuStack_120[0];
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return UNRECOVERED_JUMPTABLE;
      }
      ___stack_chk_fail();
      FUN_10a0522e8(&ppuStack_140);
      func_0x00010a136de4(&lStack_130);
      if (cStack_109 < '\0') {
        __ZdlPv(apppuStack_120[0]);
      }
      __Unwind_Resume();
      pcStack_148 = FUN_10ab6c598;
      lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuVar8 = UNRECOVERED_JUMPTABLE;
      pppuVar9 = pppuVar6;
      puStack_150 = &stack0xfffffffffffffff0;
      FUN_10ab6c22c();
      if (((ulong)pppuVar8 & 1) != 0) {
        FUN_10a2e9f70(auStack_200,UNRECOVERED_JUMPTABLE);
        uStack_1ec = CONCAT31(uStack_1ec._1_3_,param_5);
        pppuStack_1e0 = (undefined ***)pppuVar6[1];
        pppuStack_1e8 = (undefined ***)*pppuVar6;
        if (pppuVar6[1] != (undefined **)0x0) {
          ppuVar13 = pppuVar6[1] + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
            if (bVar3) {
              *ppuVar13 = *ppuVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pppuStack_1d0 = (undefined ***)pppuVar10[1];
        pppuStack_1d8 = (undefined ***)*pppuVar10;
        if (pppuVar10[1] != (undefined **)0x0) {
          ppuVar13 = pppuVar10[1] + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
            if (bVar3) {
              *ppuVar13 = *ppuVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uVar12 = (ulong)*(byte *)((long)UNRECOVERED_JUMPTABLE[10] + 0x29);
        uStack_1f0 = param_4;
        if (uVar12 < 6) {
          puVar15 = UNRECOVERED_JUMPTABLE[10][uVar12 + 6];
          ppuStack_1c8 = (undefined **)FUN_10ab76fec;
          pppuVar6 = &ppuStack_1c8;
          func_0x00010ab77b5c(&ppuStack_1c0,auStack_200);
          FUN_10aba175c(puVar15,UNRECOVERED_JUMPTABLE,&ppuStack_1c8);
          pppuVar8 = &ppuStack_1c0;
          (*(code *)*ppuStack_1c0)();
          while( true ) {
            pppuVar10 = pppuStack_1d0;
            if (pppuStack_1d0 != (undefined ***)0x0) {
              pppuVar9 = pppuStack_1d0 + 1;
              do {
                ppuVar13 = *pppuVar9;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
                if (bVar3) {
                  *pppuVar9 = (undefined **)((long)ppuVar13 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (ppuVar13 == (undefined **)0x0) {
                (*(code *)(*pppuStack_1d0)[2])(pppuStack_1d0);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                pppuVar8 = pppuVar10;
              }
            }
            pppuVar10 = pppuStack_1e0;
            if (pppuStack_1e0 != (undefined ***)0x0) {
              pppuVar9 = pppuStack_1e0 + 1;
              do {
                ppuVar13 = *pppuVar9;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
                if (bVar3) {
                  *pppuVar9 = (undefined **)((long)ppuVar13 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (ppuVar13 == (undefined **)0x0) {
                (*(code *)(*pppuStack_1e0)[2])(pppuStack_1e0);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                pppuVar8 = pppuVar10;
              }
            }
            pppuVar10 = pppuStack_1f8;
            if (pppuStack_1f8 != (undefined ***)0x0) {
              pppuVar9 = pppuStack_1f8 + 1;
              do {
                ppuVar13 = *pppuVar9;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
                if (bVar3) {
                  *pppuVar9 = (undefined **)((long)ppuVar13 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (ppuVar13 == (undefined **)0x0) {
                (*(code *)(*pppuStack_1f8)[2])(pppuStack_1f8);
                pppuVar8 = pppuVar10;
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
            }
LAB_10ab6c7f0:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) break;
LAB_10ab6c824:
            ___stack_chk_fail();
            pppuVar9 = UNRECOVERED_JUMPTABLE;
            (*(code *)*ppuStack_1c0)(pppuVar6 + 1);
            if ((int)UNRECOVERED_JUMPTABLE != 1) {
              FUN_10ab6c910(auStack_200);
              __Unwind_Resume();
              func_0x00010a042b54(pppuVar8 + 5);
              FUN_10a0844ac(pppuVar8 + 3);
              ppuVar13 = pppuVar8[1];
              if (ppuVar13 != (undefined **)0x0) {
                ppuVar1 = ppuVar13 + 1;
                do {
                  puVar15 = *ppuVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
                  if (bVar3) {
                    *ppuVar1 = puVar15 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (puVar15 == (undefined *)0x0) {
                  (**(code **)(*ppuVar13 + 0x10))(ppuVar13);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
                }
              }
              return pppuVar8;
            }
            ___cxa_begin_catch();
            UNRECOVERED_JUMPTABLE = pppuVar9;
            if ((bRam000000011330a9e8 & 1) != 0) {
              (*(code *)(*pppuVar8)[2])();
              UNRECOVERED_JUMPTABLE = (undefined ***)0x1;
              func_0x00010ae06f08(0,1,&UNK_10f693b22,&UNK_10f693b55,0x132,&UNK_10f693c58,param_7,
                                  param_8,pppuVar8);
            }
            pppuVar8 = (undefined ***)*pppuVar10;
            if ((pppuVar8 == (undefined ***)0x0) || (*(char *)(pppuVar8 + 8) != '\x02')) {
              if ((pppuVar8 != (undefined ***)0x0) && (*(char *)(pppuVar8 + 8) == '\x01')) {
                (*(code *)*pppuVar8)();
              }
            }
            else {
              FUN_10a05e614();
            }
            ___cxa_end_catch();
          }
          return pppuVar8;
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab6c824);
        (*pcVar5)();
      }
      UNRECOVERED_JUMPTABLE = pppuVar9;
      if ((bRam000000011330a9e8 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = (undefined ***)0x1;
        func_0x00010ae06f08(0,1,&UNK_10f693b22,&UNK_10f693b55,0x105,&UNK_10f693c21);
      }
      pppuVar8 = (undefined ***)*pppuVar10;
      if ((pppuVar8 == (undefined ***)0x0) || (*(char *)(pppuVar8 + 8) != '\x02')) {
        if (pppuVar8 == (undefined ***)0x0) goto LAB_10ab6c7f0;
        if (*(char *)(pppuVar8 + 8) != '\x01') goto LAB_10ab6c7f0;
        UNRECOVERED_JUMPTABLE = (undefined ***)*pppuVar8;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) goto LAB_10ab6c824;
                    /* WARNING: Could not recover jumptable at 0x00010ab6c7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE)();
        return pppuVar8;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) goto LAB_10ab6c824;
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuVar6 = pppuVar8;
      FUN_10a688b40();
      if (pppuVar6 == (undefined ***)0x0) {
        pppuVar10 = (undefined ***)0x0;
        if (UNRECOVERED_JUMPTABLE != (undefined ***)0x0) {
          ppuStack_190 = pppuVar8[1];
          ppuStack_198 = *pppuVar8;
          if (pppuVar8[1] != (undefined **)0x0) {
            ppuVar13 = pppuVar8[1] + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
              if (bVar3) {
                *ppuVar13 = *ppuVar13 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppuStack_1a8 = (undefined **)FUN_10a05e8a0;
          ppuStack_1a0 = &PTR_DAT_110b9fa70;
          pppuVar6 = &ppuStack_1a8;
          uStack_1b8 = 0;
          uStack_1b0 = 0;
          FUN_10a4634ec(UNRECOVERED_JUMPTABLE,&ppuStack_1a8);
          pppuVar10 = &ppuStack_1a0;
          (*(code *)*ppuStack_1a0)();
        }
      }
      else {
        *pppuVar6 = (undefined **)CONCAT44((int)((ulong)*pppuVar6 >> 0x20) + 1,(int)*pppuVar6 + 1);
        pppuVar10 = (undefined ***)*pppuVar8;
        FUN_10a05e740();
        iVar4 = *(int *)((long)pppuVar6 + 4) + -1;
        *(int *)((long)pppuVar6 + 4) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)pppuVar6 = 0;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        return pppuVar10;
      }
      ___stack_chk_fail();
      (*(code *)*ppuStack_1a0)(pppuVar6 + 1);
      func_0x00010a004dac(&uStack_1b8);
      UNRECOVERED_JUMPTABLE = pppuVar10;
      __Unwind_Resume();
      ppuStack_1c8 = (undefined **)FUN_10a05e740;
      pppuStack_1e0 = pppuVar10;
      pppuStack_1d8 = pppuVar6;
      pppuStack_1d0 = (undefined ***)&puStack_150;
      func_0x000109884c0c(&uStack_1f0,UNRECOVERED_JUMPTABLE + 1,*UNRECOVERED_JUMPTABLE);
      func_0x000109884820(&pppuStack_1e8,&uStack_1f0,*UNRECOVERED_JUMPTABLE);
      if ((undefined8 *)CONCAT44(uStack_1ec,uStack_1f0) != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)CONCAT44(uStack_1ec,uStack_1f0))();
      }
      (**(code **)(**UNRECOVERED_JUMPTABLE + 0x30))(&uStack_1f0);
      FUN_10a05e824(*UNRECOVERED_JUMPTABLE,&uStack_1f0,&pppuStack_1e8);
      if ((undefined8 *)CONCAT44(uStack_1ec,uStack_1f0) != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)CONCAT44(uStack_1ec,uStack_1f0))();
      }
      if (pppuStack_1e8 != (undefined ***)0x0) {
        (*(code *)**pppuStack_1e8)();
      }
      return pppuStack_1e8;
    }
  }
  FUN_10a00946c(&UNK_10f693b0a);
LAB_10ab6c524:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab6c528);
  (*pcVar5)();
}



/* Entry: 10ab6c598; end: 10ab6c90f;  */

undefined ***
FUN_10ab6c598(code **UNRECOVERED_JUMPTABLE,code **param_2,undefined ***param_3,undefined4 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  code **ppcVar8;
  undefined ***pppuVar9;
  code **ppcVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined1 auStack_c0 [8];
  undefined ***pppuStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined ***pppuStack_a8;
  undefined ***pppuStack_a0;
  undefined ***pppuStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar8 = UNRECOVERED_JUMPTABLE;
  ppcVar10 = param_2;
  FUN_10ab6c22c();
  if (((ulong)ppcVar8 & 1) != 0) {
    FUN_10a2e9f70(auStack_c0,UNRECOVERED_JUMPTABLE);
    uStack_ac = CONCAT31(uStack_ac._1_3_,param_5);
    pppuStack_a0 = (undefined ***)param_2[1];
    pppuStack_a8 = (undefined ***)*param_2;
    if (param_2[1] != (code *)0x0) {
      pcVar5 = param_2[1] + 8;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
        if (bVar3) {
          *(long *)pcVar5 = *(long *)pcVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppuStack_90 = (undefined ***)param_3[1];
    pppuStack_98 = (undefined ***)*param_3;
    if (param_3[1] != (undefined **)0x0) {
      ppuVar14 = param_3[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar3) {
          *ppuVar14 = *ppuVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar13 = (ulong)(byte)UNRECOVERED_JUMPTABLE[10][0x29];
    uStack_b0 = param_4;
    if (uVar13 < 6) {
      uVar15 = *(undefined8 *)(UNRECOVERED_JUMPTABLE[10] + uVar13 * 8 + 0x30);
      pcStack_88 = FUN_10ab76fec;
      param_2 = &pcStack_88;
      func_0x00010ab77b5c(&ppuStack_80,auStack_c0);
      FUN_10aba175c(uVar15,UNRECOVERED_JUMPTABLE,&pcStack_88);
      pppuVar9 = &ppuStack_80;
      (*(code *)*ppuStack_80)();
      while( true ) {
        pppuVar6 = pppuStack_90;
        if (pppuStack_90 != (undefined ***)0x0) {
          pppuVar7 = pppuStack_90 + 1;
          do {
            ppuVar14 = *pppuVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
            if (bVar3) {
              *pppuVar7 = (undefined **)((long)ppuVar14 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppuVar14 == (undefined **)0x0) {
            (*(code *)(*pppuStack_90)[2])(pppuStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar9 = pppuVar6;
          }
        }
        pppuVar6 = pppuStack_a0;
        if (pppuStack_a0 != (undefined ***)0x0) {
          pppuVar7 = pppuStack_a0 + 1;
          do {
            ppuVar14 = *pppuVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
            if (bVar3) {
              *pppuVar7 = (undefined **)((long)ppuVar14 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppuVar14 == (undefined **)0x0) {
            (*(code *)(*pppuStack_a0)[2])(pppuStack_a0);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar9 = pppuVar6;
          }
        }
        param_3 = pppuStack_b8;
        if (pppuStack_b8 != (undefined ***)0x0) {
          pppuVar6 = pppuStack_b8 + 1;
          do {
            ppuVar14 = *pppuVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
            if (bVar3) {
              *pppuVar6 = (undefined **)((long)ppuVar14 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppuVar14 == (undefined **)0x0) {
            (*(code *)(*pppuStack_b8)[2])(pppuStack_b8);
            pppuVar9 = param_3;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
LAB_10ab6c7f0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) break;
LAB_10ab6c824:
        ___stack_chk_fail();
        ppcVar8 = UNRECOVERED_JUMPTABLE;
        (*(code *)*ppuStack_80)(param_2 + 1);
        if ((int)UNRECOVERED_JUMPTABLE != 1) {
          FUN_10ab6c910(auStack_c0);
          __Unwind_Resume();
          func_0x00010a042b54(pppuVar9 + 5);
          FUN_10a0844ac(pppuVar9 + 3);
          ppuVar14 = pppuVar9[1];
          if (ppuVar14 != (undefined **)0x0) {
            ppuVar1 = ppuVar14 + 1;
            do {
              puVar12 = *ppuVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
              if (bVar3) {
                *ppuVar1 = puVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (puVar12 == (undefined *)0x0) {
              (**(code **)(*ppuVar14 + 0x10))(ppuVar14);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
            }
          }
          return pppuVar9;
        }
        ___cxa_begin_catch();
        UNRECOVERED_JUMPTABLE = ppcVar8;
        if ((bRam000000011330a9e8 & 1) != 0) {
          (*(code *)(*pppuVar9)[2])();
          UNRECOVERED_JUMPTABLE = (code **)0x1;
          func_0x00010ae06f08(0,1,&UNK_10f693b22,&UNK_10f693b55,0x132,&UNK_10f693c58,param_7,param_8
                              ,pppuVar9);
        }
        pppuVar9 = (undefined ***)*param_3;
        if ((pppuVar9 == (undefined ***)0x0) || (*(char *)(pppuVar9 + 8) != '\x02')) {
          if ((pppuVar9 != (undefined ***)0x0) && (*(char *)(pppuVar9 + 8) == '\x01')) {
            (*(code *)*pppuVar9)();
          }
        }
        else {
          FUN_10a05e614();
        }
        ___cxa_end_catch();
      }
      return pppuVar9;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab6c824);
    (*pcVar5)();
  }
  UNRECOVERED_JUMPTABLE = ppcVar10;
  if ((bRam000000011330a9e8 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code **)0x1;
    func_0x00010ae06f08(0,1,&UNK_10f693b22,&UNK_10f693b55,0x105,&UNK_10f693c21);
  }
  pppuVar9 = (undefined ***)*param_3;
  if ((pppuVar9 == (undefined ***)0x0) || (*(char *)(pppuVar9 + 8) != '\x02')) {
    if (pppuVar9 == (undefined ***)0x0) goto LAB_10ab6c7f0;
    if (*(char *)(pppuVar9 + 8) != '\x01') goto LAB_10ab6c7f0;
    UNRECOVERED_JUMPTABLE = (code **)*pppuVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) goto LAB_10ab6c824;
                    /* WARNING: Could not recover jumptable at 0x00010ab6c7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    return pppuVar9;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) goto LAB_10ab6c824;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar6 = pppuVar9;
  FUN_10a688b40();
  if (pppuVar6 == (undefined ***)0x0) {
    pppuVar7 = (undefined ***)0x0;
    if (UNRECOVERED_JUMPTABLE != (code **)0x0) {
      ppuStack_50 = pppuVar9[1];
      ppuStack_58 = *pppuVar9;
      if (pppuVar9[1] != (undefined **)0x0) {
        ppuVar14 = pppuVar9[1] + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar3) {
            *ppuVar14 = *ppuVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      ppuStack_68 = (undefined **)FUN_10a05e8a0;
      ppuStack_60 = &PTR_DAT_110b9fa70;
      pppuVar6 = &ppuStack_68;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_10a4634ec(UNRECOVERED_JUMPTABLE,&ppuStack_68);
      pppuVar7 = &ppuStack_60;
      (*(code *)*ppuStack_60)();
    }
  }
  else {
    *pppuVar6 = (undefined **)CONCAT44((int)((ulong)*pppuVar6 >> 0x20) + 1,(int)*pppuVar6 + 1);
    pppuVar7 = (undefined ***)*pppuVar9;
    FUN_10a05e740();
    iVar4 = *(int *)((long)pppuVar6 + 4) + -1;
    *(int *)((long)pppuVar6 + 4) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)pppuVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(pppuVar6 + 1);
  func_0x00010a004dac(&uStack_78);
  pppuVar9 = pppuVar7;
  __Unwind_Resume();
  pcStack_88 = FUN_10a05e740;
  pppuStack_a0 = pppuVar7;
  pppuStack_98 = pppuVar6;
  pppuStack_90 = (undefined ***)&stack0xfffffffffffffff0;
  func_0x000109884c0c(&uStack_b0,pppuVar9 + 1,*pppuVar9);
  func_0x000109884820(&pppuStack_a8,&uStack_b0,*pppuVar9);
  if ((undefined8 *)CONCAT44(uStack_ac,uStack_b0) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_ac,uStack_b0))();
  }
  (**(code **)(**pppuVar9 + 0x30))(&uStack_b0);
  FUN_10a05e824(*pppuVar9,&uStack_b0,&pppuStack_a8);
  if ((undefined8 *)CONCAT44(uStack_ac,uStack_b0) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_ac,uStack_b0))();
  }
  if (pppuStack_a8 != (undefined ***)0x0) {
    (*(code *)**pppuStack_a8)();
  }
  return pppuStack_a8;
}



/* Entry: 10ab6c910; end: 10ab6c93f;  */

long FUN_10ab6c910(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a042b54(param_1 + 0x28);
  FUN_10a0844ac(param_1 + 0x18);
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



/* Entry: 10ab6c940; end: 10ab6cc1f;  */

void FUN_10ab6c940(undefined ***param_1,undefined ***param_2,code **param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined ***unaff_x19;
  undefined ***unaff_x20;
  undefined8 *unaff_x23;
  undefined1 *unaff_x29;
  code *unaff_x30;
  char acStack_100 [64];
  undefined ***apppuStack_c0 [2];
  undefined8 uStack_b0;
  undefined ***pppuStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined **ppuStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined ***pppuStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined ***pppuStack_58;
  long lStack_48;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = param_1;
  pppuVar7 = param_2;
  FUN_10ab6c22c();
  if (((ulong)pppuVar8 & 1) == 0) {
    param_1 = pppuVar7;
    if ((bRam000000011330a9e8 & 1) != 0) {
      param_1 = (undefined ***)0x1;
      func_0x00010ae06f08(0,1,&UNK_10f693b22,&UNK_10f693cad,0x13c,&UNK_10f693d73);
    }
    pppuVar8 = (undefined ***)*param_2;
    pppuVar7 = pppuVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) goto LAB_10ab6cb60;
  }
  else {
    unaff_x23 = &uStack_b0;
    FUN_10a2e9f70(&uStack_b0,param_1);
    uStack_a0 = SUB84(param_3,0);
    pppuStack_90 = (undefined ***)param_2[1];
    ppuStack_98 = *param_2;
    if (param_2[1] != (undefined **)0x0) {
      ppuVar10 = param_2[1] + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar4) {
          *ppuVar10 = *ppuVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar9 = (ulong)*(byte *)((long)param_1[10] + 0x29);
    uStack_9c = param_4;
    if (5 < uVar9) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab6cb60);
      (*pcVar5)();
    }
    puVar6 = param_1[10][uVar9 + 6];
    pcStack_88 = FUN_10ab77c78;
    ppuStack_80 = &PTR_DAT_110c4ea28;
    pppuStack_70 = pppuStack_a8;
    uStack_78 = uStack_b0;
    if (pppuStack_a8 != (undefined ***)0x0) {
      pppuVar8 = pppuStack_a8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar4) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_68 = CONCAT44(param_4,uStack_a0);
    if (pppuStack_90 != (undefined ***)0x0) {
      pppuVar8 = pppuStack_90 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar4) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    param_3 = &pcStack_88;
    ppuStack_60 = ppuStack_98;
    pppuStack_58 = pppuStack_90;
    FUN_10aba175c(puVar6,param_1,&pcStack_88);
    pppuVar8 = &ppuStack_80;
    (*(code *)*ppuStack_80)();
    while( true ) {
      pppuVar7 = pppuStack_90;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_90 + 1;
        do {
          ppuVar10 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar10 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar10 == (undefined **)0x0) {
          (*(code *)(*pppuStack_90)[2])(pppuStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar8 = pppuVar7;
        }
      }
      param_2 = pppuStack_a8;
      if (pppuStack_a8 != (undefined ***)0x0) {
        pppuVar7 = pppuStack_a8 + 1;
        do {
          ppuVar10 = *pppuVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)ppuVar10 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar10 == (undefined **)0x0) {
          (*(code *)(*pppuStack_a8)[2])(pppuStack_a8);
          pppuVar8 = param_2;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return;
      }
LAB_10ab6cb60:
      unaff_x19 = param_2;
      ___stack_chk_fail();
      pppuVar7 = param_1;
      (*(code *)*ppuStack_80)(param_3 + 1);
      if ((int)param_1 != 1) break;
      ___cxa_begin_catch();
      param_1 = pppuVar7;
      if ((bRam000000011330a9e8 & 1) != 0) {
        (*(code *)(*pppuVar8)[2])();
        param_1 = (undefined ***)0x1;
        apppuStack_c0[0] = pppuVar8;
        func_0x00010ae06f08(0,1,&UNK_10f693b22,&UNK_10f693cad,0x165,&UNK_10f693d9e);
      }
      pppuVar8 = (undefined ***)*unaff_x19;
      FUN_10ab6cc20();
      ___cxa_end_catch();
    }
    FUN_10a1d0104(unaff_x23 + 3);
    func_0x00010a05248c(&uStack_b0);
    unaff_x30 = FUN_10ab6cc20;
    pppuVar7 = pppuVar8;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)apppuStack_c0;
    unaff_x20 = pppuVar8;
    unaff_x29 = puVar1;
  }
  *(undefined ****)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined ****)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  ppuVar10 = *pppuVar7;
  *(undefined1 *)((long)register0x00000008 + -0x40) = 0;
  *(undefined1 *)((long)register0x00000008 + -0x28) = 0;
  (*(code *)ppuVar10)((undefined1 *)((long)register0x00000008 + -0x40),pppuVar7);
  if ((*(char *)((long)register0x00000008 + -0x28) == '\x01') &&
     (*(long *)((long)register0x00000008 + -0x40) != 0)) {
    *(long *)((long)register0x00000008 + -0x38) = *(long *)((long)register0x00000008 + -0x40);
    __ZdlPv();
  }
  return;
}



/* Entry: 10ab6cc20; end: 10ab6cc9b;  */

void FUN_10ab6cc20(undefined8 *param_1)

{
  undefined1 uStack_40;
  undefined7 uStack_3f;
  long lStack_38;
  char cStack_28;
  
  uStack_40 = 0;
  cStack_28 = '\0';
  (*(code *)*param_1)(&uStack_40,param_1);
  if ((cStack_28 == '\x01') && (lStack_38 = CONCAT71(uStack_3f,uStack_40), lStack_38 != 0)) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10ab6cc9c; end: 10ab6cddf;  */

void FUN_10ab6cc9c(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 != 0) {
    if (5 < (ulong)*(byte *)(lVar4 + 0x29)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab6cde0);
      (*pcVar2)();
    }
    (**(code **)(**(long **)(lVar4 + (ulong)*(byte *)(lVar4 + 0x29) * 8 + 0x30) + 0x58))();
  }
  FUN_10ab6cde0(param_1,0x9c4);
  if (*(long *)(param_1 + 0x288) != 0) {
    for (lVar4 = *(long *)(param_1 + 0x280); lVar4 != param_1 + 0x278; lVar4 = *(long *)(lVar4 + 8))
    {
      puVar3 = *(undefined8 **)(lVar4 + 0x20);
      if (puVar3 == (undefined8 *)0x0 || *(char *)(puVar3 + 8) != '\x02') {
        if (puVar3 != (undefined8 *)0x0 && *(char *)(puVar3 + 8) == '\x01') {
          (*(code *)*puVar3)();
        }
      }
      else {
        FUN_10a05e614();
      }
    }
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f693b22,&UNK_10f693de7,0x174,&UNK_10f693e22);
    }
  }
  FUN_10ab72350(param_1 + 0x278);
  plVar1 = (long *)(param_1 + 0x290);
  if (*(long *)(param_1 + 0x2a0) != 0) {
    for (plVar6 = *(long **)(param_1 + 0x298); plVar6 != plVar1; plVar6 = (long *)plVar6[1]) {
      FUN_10ab6cc20(plVar6[2]);
    }
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f693b22,&UNK_10f693de7,0x17c,&UNK_10f693e52);
    }
  }
  if (*(long *)(param_1 + 0x2a0) != 0) {
    plVar6 = *(long **)(param_1 + 0x298);
    plVar5 = *(long **)(*plVar1 + 8);
    lVar4 = *plVar6;
    *(long **)(lVar4 + 8) = plVar5;
    *plVar5 = lVar4;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    while (plVar6 != plVar1) {
      plVar5 = (long *)plVar6[1];
      FUN_10ab72270(plVar6 + 2);
      __ZdlPv(plVar6);
      plVar6 = plVar5;
    }
  }
  return;
}



/* Entry: 10ab6cde0; end: 10ab6d37b;  */

void FUN_10ab6cde0(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_d0;
  char cStack_c8;
  undefined7 uStack_c7;
  char cStack_b1;
  long lStack_a8;
  long *plStack_a0;
  byte abStack_98 [8];
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined1 auStack_78 [8];
  long *plStack_70;
  
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  FUN_10a2e9f70(auStack_78);
  lVar9 = param_1 + 0x278;
  if (*(long *)(param_1 + 0x280) != lVar9) {
    lVar11 = *(long *)(param_1 + 0x280);
    do {
      plVar12 = (long *)(lVar11 + 0x30);
      lVar13 = lVar9;
      if (*plVar12 == 0) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f693b22,&UNK_10f693e7c,399,&UNK_10f693ed6);
        }
        puVar4 = *(undefined8 **)(lVar11 + 0x20);
        if (puVar4 != (undefined8 *)0x0) {
          if (*(char *)(puVar4 + 8) == '\x01') {
            (*(code *)*puVar4)();
          }
          else if (*(char *)(puVar4 + 8) == '\x02') {
            FUN_10a05e614();
          }
        }
        FUN_10ab6d398(lVar9,lVar11);
      }
      else {
        plVar5 = plVar12;
        FUN_109d1a400(plVar12,param_2 * 1000000);
        if ((int)plVar5 == 0) {
          lVar13 = *(long *)(lVar11 + 8);
        }
        else {
          FUN_10a94553c(abStack_98,plVar12);
          if (abStack_98[0] == 1) {
            FUN_10a0ff18c(&plStack_e0,auStack_90,2);
            FUN_10ac5fb74(&lStack_a8,uVar10,&plStack_e0,0);
            if (cStack_b1 < '\0') {
              __ZdlPv(CONCAT71(uStack_c7,cStack_c8));
            }
            if (lStack_d0 < 0) {
              __ZdlPv(plStack_e0);
            }
            *(undefined1 *)(lStack_a8 + 0x288) = 1;
            FUN_10a376e68(&plStack_e0,uVar10,&lStack_a8);
            if (*(long *)(lVar11 + 0x10) != 0) {
              FUN_10a00bca8(*(long *)(lVar11 + 0x10),&plStack_e0);
            }
            plVar12 = plStack_d8;
            if (plStack_d8 != (long *)0x0) {
              plVar5 = plStack_d8 + 1;
              do {
                lVar7 = *plVar5;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar3) {
                  *plVar5 = lVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar7 == 0) {
                (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              }
            }
            plVar12 = plStack_a0;
            if (plStack_a0 != (long *)0x0) {
              plVar5 = plStack_a0 + 1;
              do {
                lVar7 = *plVar5;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar3) {
                  *plVar5 = lVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar7 == 0) {
                (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              }
            }
          }
          if (((abStack_98[0] & 1) == 0) &&
             (puVar4 = *(undefined8 **)(lVar11 + 0x20), puVar4 != (undefined8 *)0x0)) {
            if (*(char *)(puVar4 + 8) == '\x01') {
              (*(code *)*puVar4)();
            }
            else if (*(char *)(puVar4 + 8) == '\x02') {
              FUN_10a05e614();
            }
          }
          FUN_10ab6d398(lVar9,lVar11);
          if (cStack_79 < '\0') {
            __ZdlPv(auStack_90[0]);
          }
        }
      }
      lVar11 = lVar13;
    } while (lVar13 != lVar9);
  }
  lVar9 = param_1 + 0x290;
  if (*(long *)(param_1 + 0x298) != lVar9) {
    lVar11 = *(long *)(param_1 + 0x298);
    do {
      plVar12 = (long *)(lVar11 + 0x20);
      if (*plVar12 == 0) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f693b22,&UNK_10f693e7c,0x1bb,&UNK_10f693f39);
        }
        if (*(long *)(lVar11 + 0x10) != 0) {
          FUN_10ab6cc20();
        }
LAB_10ab6d278:
        lVar13 = lVar9;
        func_0x00010ab6d3ec(lVar9,lVar11);
      }
      else {
        plVar5 = plVar12;
        FUN_109d1a400(plVar12,param_2 * 1000000);
        if ((int)plVar5 != 0) {
          func_0x0001092af8bc(plVar12);
          plVar5 = (long *)*plVar12;
          if ((*(byte *)(plVar5 + 0x17) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab6d30c);
            (*pcVar6)();
          }
          if ((char)plVar5[0x16] == '\x01') {
            plVar15 = (long *)plVar5[0x14];
            plVar14 = (long *)plVar5[0x13];
            lVar13 = plVar5[0x15];
            plVar5[0x14] = 0;
            plVar5[0x15] = 0;
            plVar5[0x13] = 0;
            plVar5 = (long *)*plVar12;
            *plVar12 = 0;
            if (plVar5 != (long *)0x0) {
              puVar1 = (ulong *)(plVar5 + 1);
              do {
                uVar8 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar8 - 4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((uVar8 & 0x1fffffffc) == 4) {
                do {
                  uVar8 = *puVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = uVar8 - 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (uVar8 - 1 == 0) {
                  (**(code **)(*plVar5 + 8))();
                }
              }
            }
            pcVar6 = (code *)**(undefined8 **)(lVar11 + 0x10);
            cStack_c8 = '\x01';
            plStack_e0 = plVar14;
            plStack_d8 = plVar15;
            lStack_d0 = lVar13;
          }
          else {
            *plVar12 = 0;
            puVar1 = (ulong *)(plVar5 + 1);
            do {
              uVar8 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar8 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar8 & 0x1fffffffc) == 4) {
              do {
                uVar8 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar8 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar8 - 1 == 0) {
                (**(code **)(*plVar5 + 8))();
              }
            }
            cStack_c8 = '\0';
            pcVar6 = (code *)**(undefined8 **)(lVar11 + 0x10);
            plStack_e0 = (long *)((ulong)plStack_e0 & 0xffffffffffffff00);
          }
          (*pcVar6)(&plStack_e0);
          if ((cStack_c8 == '\x01') && (plStack_e0 != (long *)0x0)) {
            plStack_d8 = plStack_e0;
            __ZdlPv();
          }
          goto LAB_10ab6d278;
        }
        lVar13 = *(long *)(lVar11 + 8);
      }
      lVar11 = lVar13;
    } while (lVar13 != lVar9);
  }
  if ((*(long *)(param_1 + 0x288) == 0) && (*(long *)(param_1 + 0x2a0) == 0)) {
    FUN_10a5ae930(*(undefined8 *)(param_1 + 0xe8));
    FUN_10a5ae930(*(undefined8 *)(param_1 + 0x108));
  }
  if (plStack_70 != (long *)0x0) {
    plVar12 = plStack_70 + 1;
    do {
      lVar9 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  return;
}



/* Entry: 10ab6d37c; end: 10ab6d397;  */

void FUN_10ab6d37c(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + -0xb0);
  if (lVar4 != 0) {
    if (5 < (ulong)*(byte *)(lVar4 + 0x29)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab6cde0);
      (*pcVar2)();
    }
    (**(code **)(**(long **)(lVar4 + (ulong)*(byte *)(lVar4 + 0x29) * 8 + 0x30) + 0x58))();
  }
  FUN_10ab6cde0(param_1 + -0x100,0x9c4);
  if (*(long *)(param_1 + 0x188) != 0) {
    for (lVar4 = *(long *)(param_1 + 0x180); lVar4 != param_1 + 0x178; lVar4 = *(long *)(lVar4 + 8))
    {
      puVar3 = *(undefined8 **)(lVar4 + 0x20);
      if (puVar3 == (undefined8 *)0x0 || *(char *)(puVar3 + 8) != '\x02') {
        if (puVar3 != (undefined8 *)0x0 && *(char *)(puVar3 + 8) == '\x01') {
          (*(code *)*puVar3)();
        }
      }
      else {
        FUN_10a05e614();
      }
    }
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f693b22,&UNK_10f693de7,0x174,&UNK_10f693e22);
    }
  }
  FUN_10ab72350(param_1 + 0x178);
  plVar1 = (long *)(param_1 + 400);
  if (*(long *)(param_1 + 0x1a0) != 0) {
    for (plVar6 = *(long **)(param_1 + 0x198); plVar6 != plVar1; plVar6 = (long *)plVar6[1]) {
      FUN_10ab6cc20(plVar6[2]);
    }
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f693b22,&UNK_10f693de7,0x17c,&UNK_10f693e52);
    }
  }
  if (*(long *)(param_1 + 0x1a0) != 0) {
    plVar6 = *(long **)(param_1 + 0x198);
    plVar5 = *(long **)(*plVar1 + 8);
    lVar4 = *plVar6;
    *(long **)(lVar4 + 8) = plVar5;
    *plVar5 = lVar4;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    while (plVar6 != plVar1) {
      plVar5 = (long *)plVar6[1];
      FUN_10ab72270(plVar6 + 2);
      __ZdlPv(plVar6);
      plVar6 = plVar5;
    }
  }
  return;
}



/* Entry: 10ab6d398; end: 10ab6d43f;  */

long * FUN_10ab6d398(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  
  if (param_1 != param_2) {
    lVar1 = *param_2;
    plVar2 = (long *)param_2[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    param_1[2] = param_1[2] + -1;
    FUN_10ab723bc(param_2 + 2);
    __ZdlPv(param_2);
    return plVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab6d3ec);
  (*pcVar3)();
}



/* Entry: 10ab6d440; end: 10ab6e017;  */

undefined1  [16] FUN_10ab6d440(undefined8 *param_1,long param_2)

{
  long *****ppppplVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined ******ppppppuVar6;
  undefined1 *puVar7;
  long *plVar8;
  long *plVar9;
  long *****ppppplVar10;
  undefined **ppuVar11;
  long lVar12;
  long *plVar13;
  long ****pppplVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *plStack_3f8;
  long *plStack_3f0;
  char cStack_3e1;
  undefined8 uStack_3e0;
  char cStack_3c9;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined ****ppppuStack_3b0;
  undefined ****ppppuStack_3a8;
  undefined ****ppppuStack_3a0;
  undefined4 uStack_398;
  undefined4 uStack_394;
  ulong uStack_390;
  byte bStack_381;
  long ***ppplStack_380;
  long **pplStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long ****pppplStack_350;
  undefined ****ppppuStack_348;
  undefined ****ppppuStack_340;
  long ****pppplStack_338;
  ulong uStack_330;
  byte bStack_321;
  long ****apppplStack_320 [2];
  char cStack_309;
  long lStack_308;
  long ****pppplStack_300;
  undefined8 uStack_2f8;
  long ****pppplStack_2f0;
  long ****pppplStack_2e8;
  ulong uStack_2e0;
  byte bStack_2d1;
  long *plStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  undefined *****pppppuStack_2a0;
  undefined1 auStack_298 [15];
  char cStack_289;
  uint auStack_280 [96];
  undefined **appuStack_100 [6];
  undefined8 uStack_d0;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_2;
  func_0x00010ad0321c();
  func_0x000107c2b054(&pppppuStack_2a0,&UNK_10f6937f5);
  FUN_10ad016b8(&pppplStack_2e8,lVar12,&pppppuStack_2a0);
  if (cStack_289 < '\0') {
    __ZdlPv(pppppuStack_2a0);
  }
  FUN_10ad00cf8(&pppplStack_2e8);
  FUN_10ab6c328(&uStack_2f8,param_2);
  FUN_10a03cd44(&lStack_308,uStack_2f8);
  *(undefined1 *)(lStack_308 + 0x288) = 0;
  FUN_10a08d2e0(apppplStack_320,lStack_308 + 0x290);
  FUN_10ad02700(&pppplStack_338,apppplStack_320);
  uVar2 = uStack_2e0;
  if (-1 < (char)bStack_2d1) {
    uVar2 = (ulong)bStack_2d1;
  }
  FUN_10a003c90(&pppppuStack_2a0,uVar2 + 1,&plStack_3f8);
  ppppppuVar6 = (undefined ******)pppppuStack_2a0;
  if (-1 < cStack_289) {
    ppppppuVar6 = &pppppuStack_2a0;
  }
  if (uVar2 != 0) {
    ppppplVar10 = (long *****)pppplStack_2e8;
    if (-1 < (char)bStack_2d1) {
      ppppplVar10 = &pppplStack_2e8;
    }
    _memmove(ppppppuVar6,ppppplVar10,uVar2);
  }
  *(undefined2 *)((long)ppppppuVar6 + uVar2) = 0x2f;
  ppppplVar10 = (long *****)pppplStack_338;
  if (-1 < (char)bStack_321) {
    uStack_330 = (ulong)bStack_321;
    ppppplVar10 = &pppplStack_338;
  }
  ppppppuVar6 = &pppppuStack_2a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppuVar6,ppppplVar10,uStack_330);
  ppppuStack_348 = (undefined ****)ppppppuVar6[1];
  pppplStack_350 = (long ****)*ppppppuVar6;
  ppppuStack_340 = (undefined ****)ppppppuVar6[2];
  ppppppuVar6[1] = (undefined *****)0x0;
  ppppppuVar6[2] = (undefined *****)0x0;
  *ppppppuVar6 = (undefined *****)0x0;
  if (cStack_289 < '\0') {
    __ZdlPv(pppppuStack_2a0);
  }
  FUN_10ad01348(apppplStack_320,&pppplStack_350);
  FUN_10ad00b0c(apppplStack_320);
  ppplStack_380 = &pplStack_378;
  pplStack_378 = (long **)0x0;
  uStack_370 = 0;
  uStack_368 = 0;
  uStack_360 = 0;
  uStack_358 = 0;
  func_0x000107c2b054(&plStack_3f8,&DAT_10f693f79);
  uStack_398 = 6;
  func_0x000107c2b054(&pppppuStack_2a0,&UNK_10f56e67a);
  func_0x00010983b408(&uStack_398,&pppppuStack_2a0);
  if (cStack_289 < '\0') {
    __ZdlPv(pppppuStack_2a0);
  }
  func_0x00010983a84c(&ppplStack_380,&plStack_3f8,&uStack_398);
  func_0x000109839960(&uStack_398);
  if (cStack_3e1 < '\0') {
    __ZdlPv(plStack_3f8);
  }
  func_0x000107c2b054(&pppppuStack_2a0,"image");
  plStack_3f8 = (long *)CONCAT44(plStack_3f8._4_4_,6);
  func_0x00010983b408(&plStack_3f8,&pppplStack_338);
  func_0x00010983a84c(&ppplStack_380,&pppppuStack_2a0,&plStack_3f8);
  func_0x000109839960(&plStack_3f8);
  if (cStack_289 < '\0') {
    __ZdlPv(pppppuStack_2a0);
  }
  func_0x000109839e84(&uStack_398,&ppplStack_380);
  uVar2 = uStack_2e0;
  if (-1 < (char)bStack_2d1) {
    uVar2 = (ulong)bStack_2d1;
  }
  FUN_10a003c90(&pppppuStack_2a0,uVar2 + 1,&plStack_3f8);
  ppppppuVar6 = (undefined ******)pppppuStack_2a0;
  if (-1 < cStack_289) {
    ppppppuVar6 = &pppppuStack_2a0;
  }
  if (uVar2 != 0) {
    ppppplVar10 = (long *****)pppplStack_2e8;
    if (-1 < (char)bStack_2d1) {
      ppppplVar10 = &pppplStack_2e8;
    }
    _memmove(ppppppuVar6,ppppplVar10,uVar2);
  }
  *(undefined2 *)((long)ppppppuVar6 + uVar2) = 0x2f;
  ppppppuVar6 = &pppppuStack_2a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppuVar6,&UNK_10f56e61a,9);
  ppppuStack_3a8 = (undefined ****)ppppppuVar6[1];
  ppppuStack_3b0 = (undefined ****)*ppppppuVar6;
  ppppuStack_3a0 = (undefined ****)ppppppuVar6[2];
  ppppppuVar6[1] = (undefined *****)0x0;
  ppppppuVar6[2] = (undefined *****)0x0;
  *ppppppuVar6 = (undefined *****)0x0;
  if (cStack_289 < '\0') {
    __ZdlPv(pppppuStack_2a0);
  }
  uStack_d0 = 0;
  pppppuStack_2a0 =
       (undefined *****)&PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11087cbb0;
  appuStack_100[0] = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11087cbd8;
  __ZNSt3__18ios_base4initEPv(appuStack_100,auStack_298);
  uStack_78 = 0;
  uStack_70 = 0xffffffff;
  pppppuStack_2a0 = (undefined *****)&PTR_DAT_11087cb40;
  appuStack_100[0] = &PTR_DAT_11087cb68;
  func_0x000107c28024(auStack_298);
  func_0x000105392524(&pppppuStack_2a0,&ppppuStack_3b0,0x10);
  puVar5 = (undefined4 *)CONCAT44(uStack_394,uStack_398);
  if (-1 < (char)bStack_381) {
    uStack_390 = (ulong)bStack_381;
    puVar5 = &uStack_398;
  }
  FUN_10a002568(&pppppuStack_2a0,puVar5,uStack_390);
  puVar7 = auStack_298;
  func_0x000107c27ffc();
  if (puVar7 == (undefined1 *)0x0) {
    __ZNSt3__18ios_base5clearEj
              (auStack_298 + (long)(pppppuStack_2a0[-3] + -1),
               *(uint *)((long)auStack_280 + (long)pppppuStack_2a0[-3]) | 4);
  }
  uVar15 = *(undefined8 *)(param_2 + 0x50);
  FUN_10a0ff18c(&plStack_3f8,&pppplStack_2e8,2);
  plVar8 = (long *)0x158;
  __Znwm();
  plVar16 = plVar8 + 1;
  *plVar16 = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_DAT_110c4ea58;
  plVar13 = plVar8 + 3;
  FUN_10ac7050c(plVar13,uVar15);
  FUN_10aaea2c8(plVar8 + 0x21,&plStack_3f8);
  plVar8[3] = (long)&PTR_DAT_110c67cd8;
  plVar8[5] = (long)&PTR_DAT_110c67db0;
  plVar8[8] = (long)&PTR_DAT_110c67de0;
  plStack_3c0 = plVar13;
  plStack_3b8 = plVar8;
  if (plVar8[0xc] == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = *plVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar9 = plVar8 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar8[0xb] = (long)plVar13;
    plVar8[0xc] = (long)plVar8;
LAB_10ab6d8c0:
    do {
      lVar12 = *plVar16;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  else if (*(long *)(plVar8[0xc] + 8) == -1) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = *plVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar9 = plVar8 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar8[0xb] = (long)plVar13;
    plVar8[0xc] = (long)plVar8;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    goto LAB_10ab6d8c0;
  }
  if (cStack_3c9 < '\0') {
    __ZdlPv(uStack_3e0);
  }
  if (cStack_3e1 < '\0') {
    __ZdlPv(plStack_3f8);
  }
  plVar13 = plStack_3b8;
  plVar8 = plStack_3c0;
  *(undefined1 *)(plStack_3c0 + 0x1e) = 1;
  lVar12 = *(long *)(param_2 + 0x50);
  if (lVar12 == 0) {
    plVar9 = (long *)0x110;
    __Znwm();
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_DAT_110c23648;
    plVar16 = plVar9 + 3;
    plStack_3f8 = plVar8;
    plStack_3f0 = plVar13;
    if (plVar13 != (long *)0x0) {
      plVar13 = plVar13 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a84d124(plVar16,0,&plStack_3f8);
    plVar13 = plStack_3f0;
    if (plStack_3f0 != (long *)0x0) {
      plVar8 = plStack_3f0 + 1;
      do {
        lVar12 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_3f0 + 0x10))(plStack_3f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plStack_2b0 = plVar16;
    plStack_2a8 = plVar9;
    FUN_10a84d2c0(&plStack_2b0,plVar9 + 8,plVar16);
    FUN_10a84cfc0(param_1,&plStack_2b0);
    if (plStack_2a8 == (long *)0x0) goto LAB_10ab6dc10;
    plVar13 = plStack_2a8 + 1;
    do {
      lVar12 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar8 = plStack_2a8;
    } while (cVar3 != '\0');
  }
  else {
    plStack_2d0 = *(long **)(lVar12 + 0x858);
    plStack_2c8 = *(long **)(lVar12 + 0x860);
    if (plStack_2c8 != (long *)0x0) {
      plVar16 = plStack_2c8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = *plVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar15 = 0xf8;
    __Znwm(0xf8);
    plStack_3f8 = plVar8;
    plStack_3f0 = plVar13;
    if (plVar13 != (long *)0x0) {
      plVar13 = plVar13 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a84d124(uVar15,lVar12,&plStack_3f8);
    plVar13 = plStack_3f0;
    if (plStack_3f0 != (long *)0x0) {
      plVar8 = plStack_3f0 + 1;
      do {
        lVar12 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_3f0 + 0x10))(plStack_3f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar8 = plStack_2c8;
    plVar13 = plStack_2d0;
    plStack_2c0 = plStack_2d0;
    plStack_2b8 = plStack_2c8;
    if (plStack_2c8 != (long *)0x0) {
      plVar16 = plStack_2c8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = *plVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar16 = plStack_2c8 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = *plVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = *plVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2c8);
    }
    plStack_3f8 = plVar13;
    plStack_3f0 = plVar8;
    FUN_10a84d220(&plStack_2b0,uVar15,&plStack_3f8);
    FUN_10a84cfc0(param_1,&plStack_2b0);
    plVar13 = plStack_2a8;
    if (plStack_2a8 != (long *)0x0) {
      plVar8 = plStack_2a8 + 1;
      do {
        lVar12 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    if (plStack_3f0 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar13 = plStack_2b8;
    if (plStack_2b8 != (long *)0x0) {
      plVar8 = plStack_2b8 + 1;
      do {
        lVar12 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    if ((plStack_2d0 != (long *)0x0) && (plVar13 = (long *)*param_1, plVar13 != (long *)0x0)) {
      plStack_2a8 = (long *)param_1[1];
      if (plStack_2a8 != (long *)0x0) {
        plVar8 = plStack_2a8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plStack_2b0 = plVar13;
      FUN_10aa88c30(plStack_2d0,&plStack_2b0);
      plVar13 = plStack_2a8;
      if (plStack_2a8 != (long *)0x0) {
        plVar8 = plStack_2a8 + 1;
        do {
          lVar12 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
    }
    if (plStack_2c8 == (long *)0x0) goto LAB_10ab6dc10;
    plVar13 = plStack_2c8 + 1;
    do {
      lVar12 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar8 = plStack_2c8;
    } while (cVar3 != '\0');
  }
  if (lVar12 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
LAB_10ab6dc10:
  plVar13 = plStack_3b8;
  if (plStack_3b8 != (long *)0x0) {
    plVar8 = plStack_3b8 + 1;
    do {
      lVar12 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  pppppuStack_2a0 = (undefined *****)&PTR_DAT_11087cb40;
  appuStack_100[0] = &PTR_DAT_11087cb68;
  func_0x000107c28018(auStack_298);
  ppuVar11 = &PTR_PTR_11087cb80;
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&pppppuStack_2a0,&PTR_PTR_11087cb80);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_100);
  if ((long)ppppuStack_3a0 < 0) {
    __ZdlPv(ppppuStack_3b0);
  }
  if ((char)bStack_381 < '\0') {
    __ZdlPv(CONCAT44(uStack_394,uStack_398));
  }
  ppppplVar10 = (long *****)&ppplStack_380;
  func_0x000109839668(ppppplVar10);
  if ((long)ppppuStack_340 < 0) {
    ppppplVar10 = (long *****)pppplStack_350;
    __ZdlPv(pppplStack_350);
  }
  if ((char)bStack_321 < '\0') {
    ppppplVar10 = (long *****)pppplStack_338;
    __ZdlPv(pppplStack_338);
  }
  if (cStack_309 < '\0') {
    ppppplVar10 = (long *****)apppplStack_320[0];
    __ZdlPv(apppplStack_320[0]);
  }
  if ((long *****)pppplStack_300 != (long *****)0x0) {
    ppppplVar1 = (long *****)(pppplStack_300 + 1);
    do {
      pppplVar14 = *ppppplVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppplVar1,0x10);
      if (bVar4) {
        *ppppplVar1 = (long ****)((long)pppplVar14 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppplVar14 == (long ****)0x0) {
      (*(code *)(*pppplStack_300)[2])(pppplStack_300);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplStack_300);
      ppppplVar10 = (long *****)pppplStack_300;
    }
  }
  if ((long *****)pppplStack_2f0 != (long *****)0x0) {
    ppppplVar1 = (long *****)(pppplStack_2f0 + 1);
    do {
      pppplVar14 = *ppppplVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppplVar1,0x10);
      if (bVar4) {
        *ppppplVar1 = (long ****)((long)pppplVar14 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppplVar14 == (long ****)0x0) {
      (*(code *)(*pppplStack_2f0)[2])(pppplStack_2f0);
      ppppplVar10 = (long *****)pppplStack_2f0;
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplStack_2f0);
    }
  }
  if ((char)bStack_2d1 < '\0') {
    ppppplVar10 = (long *****)pppplStack_2e8;
    __ZdlPv(pppplStack_2e8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar17._8_8_ = ppuVar11;
    auVar17._0_8_ = ppppplVar10;
    return auVar17;
  }
  ___stack_chk_fail();
  func_0x00010a0536d4(&plStack_2b0);
  FUN_10a2f35d0(pppplStack_2f0);
  FUN_10a054c5c(&plStack_2d0);
  FUN_10ab78948(&plStack_3c0);
  func_0x000107c28010(&pppppuStack_2a0);
  if ((long)ppppuStack_3a0 < 0) {
    __ZdlPv(ppppuStack_3b0);
  }
  if ((char)bStack_381 < '\0') {
    __ZdlPv(CONCAT44(uStack_394,uStack_398));
  }
  func_0x000109839668(&ppplStack_380);
  if ((long)ppppuStack_340 < 0) {
    __ZdlPv(pppplStack_350);
  }
  if ((char)bStack_321 < '\0') {
    __ZdlPv(pppplStack_338);
  }
  if (cStack_309 < '\0') {
    __ZdlPv(apppplStack_320[0]);
  }
  FUN_10a0522e8(&lStack_308);
  func_0x00010a05248c(&uStack_2f8);
  if ((char)bStack_2d1 < '\0') {
    __ZdlPv(pppplStack_2e8);
  }
  __Unwind_Resume(ppppplVar10);
  auVar18._8_8_ = 0x1a;
  auVar18._0_8_ = &UNK_10f6941a9;
  return auVar18;
}



/* Entry: 10ab6e018; end: 10ab6e103;  */

undefined1  [16] FUN_10ab6e018(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1a;
  auVar1._0_8_ = &UNK_10f6941a9;
  return auVar1;
}



/* Entry: 10ab6e104; end: 10ab6e1bb;  */

void FUN_10ab6e104(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0xffffffff00000001;
  puStack_98 = (undefined *)0x0;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x12400000135;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10ab6e1bc(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f693808;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f6937f5;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f6937f5;
  uStack_38 = 0;
  FUN_10ab78d18();
  FUN_10ab79074(param_1);
  return;
}



/* Entry: 10ab6e1bc; end: 10ab6e293;  */

/* WARNING: Removing unreachable block (ram,0x00010ab6e254) */

undefined1  [16] FUN_10ab6e1bc(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6941a9,0x1a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab78c1c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ab6e294; end: 10ab6e34f;  */

/* WARNING: Possible PIC construction at 0x00010ab6e2bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ab6e2c0) */
/* WARNING: Removing unreachable block (ram,0x00010ab6e330) */
/* WARNING: Removing unreachable block (ram,0x00010ab6e320) */

void FUN_10ab6e294(long param_1,long *param_2)

{
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_28;
  
  puStack_80 = &stack0xfffffffffffffff0;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = 0x10ab6e2c0;
  lStack_90 = param_1;
  plStack_88 = param_2;
  (**(code **)(*param_2 + 0xa8))(&uStack_a8,param_2,&PTR_DAT_110c3fbe8,&UNK_10f68c0c1,0);
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x60) = uStack_a0;
  *(undefined8 *)(param_1 + 0x58) = uStack_a8;
  *(undefined8 *)(param_1 + 0x68) = uStack_98;
  return;
}



/* Entry: 10ab6e350; end: 10ab6e353;  */

void FUN_10ab6e350(long param_1,long *param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(*param_2 + 0xa8))(&uStack_38,param_2,&PTR_DAT_110c3fbe8,&UNK_10f68c0c1,0);
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x60) = uStack_30;
  *(undefined8 *)(param_1 + 0x58) = uStack_38;
  *(undefined8 *)(param_1 + 0x68) = uStack_28;
  return;
}



/* Entry: 10ab6e354; end: 10ab6e393;  */

void FUN_10ab6e354(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010aa70b70();
  puStack_30 = &UNK_10f633e9d;
  uStack_28 = 0xd;
  plStack_38 = *(long **)(param_1 + 0xe8);
  uStack_40 = *(undefined8 *)(param_1 + 0xe0);
  if (*(long *)(param_1 + 0xe8) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0xe8) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c4e318,&uStack_40,&puStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10ab6e394; end: 10ab6e397;  */

void FUN_10ab6e394(long *param_1,long *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  long *plStack_30;
  undefined **ppuStack_28;
  
  ppuVar2 = &PTR_DAT_110bd3000;
  (**(code **)(*param_2 + 0x140))(param_2,&PTR_DAT_110bd3000,param_1[8],param_1[9]);
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x38))();
  plStack_30 = plVar1;
  ppuStack_28 = ppuVar2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c3fe50,&plStack_30);
  FUN_10a00d760(param_2,&PTR_DAT_110c3fbe8,param_1 + 0xb);
  return;
}



/* Entry: 10ab6e398; end: 10ab6e437;  */

void FUN_10ab6e398(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *param_1 = puVar1;
  param_1[2] = 0x8000000000000020;
  param_1[1] = 0x1a;
  puVar1[1] = 0x6172546572757478;
  *puVar1 = 0x65542e7465737341;
  *(undefined8 *)((long)puVar1 + 0x12) = 0x65706f6353676e69;
  *(undefined8 *)((long)puVar1 + 10) = 0x6b63617254657275;
  *(undefined1 *)((long)puVar1 + 0x1a) = 0;
  return;
}



/* Entry: 10ab6e438; end: 10ab6e44f;  */

void FUN_10ab6e438(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar4 = *(long *)(param_1 + 0xf0);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
    lStack_28 = *(long *)(lVar4 + 0x18);
    uStack_30 = *(undefined8 *)(lVar4 + 0x10);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(uVar5,&uStack_30,&PTR_DAT_110c4f048);
    if (lStack_28 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)uVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)uVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10ab6e450; end: 10ab6e56b;  */

long * FUN_10ab6e450(long *param_1)

{
  long *plVar1;
  
  while( true ) {
    if (param_1 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar1 = param_1;
    ___dynamic_cast(param_1,&PTR_DAT_110c4efc0,&PTR_DAT_110c4f048,0);
    if (plVar1 != (long *)0x0) break;
    (**(code **)(*param_1 + 0x90))();
  }
  return plVar1;
}



/* Entry: 10ab6e56c; end: 10ab6e593;  */

undefined1  [16] FUN_10ab6e56c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x13;
  auVar1._0_8_ = &UNK_10f6941c4;
  return auVar1;
}



/* Entry: 10ab6e594; end: 10ab6e5f7;  */

void FUN_10ab6e594(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_50 = 0xffffffff00000001;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f6937f5;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0x1240000012a;
  uStack_18 = 0xffffffff;
  FUN_10ab6e5f8(param_1,&uStack_58);
  FUN_10ab792b8();
  return;
}



/* Entry: 10ab6e5f8; end: 10ab6e6cf;  */

/* WARNING: Removing unreachable block (ram,0x00010ab6e690) */

undefined1  [16] FUN_10ab6e5f8(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6941c4,0x13);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab791bc(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ab6e6d0; end: 10ab6e727;  */

void FUN_10ab6e6d0(undefined8 *param_1)

{
  *(undefined1 *)((long)param_1 + 0x17) = 0x13;
  *(undefined4 *)((long)param_1 + 0xf) = 0x65706f63;
  param_1[1] = 0x6353676e696b6361;
  *param_1 = 0x72542e7465737341;
  *(undefined1 *)((long)param_1 + 0x13) = 0;
  return;
}



/* Entry: 10ab6e728; end: 10ab6e867;  */

undefined8 FUN_10ab6e728(void)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined7 uStack_30;
  char cStack_29;
  undefined8 uStack_28;
  
  if ((bRam00000001138356f8 & 1) == 0) {
    iVar1 = 0x138356f8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2b074(&uStack_40,&PTR_DAT_110c4e5b8);
      if (cStack_29 < '\0') {
        func_0x000107c3192c(0x1138356c0,uStack_40,uStack_38);
        uRam00000001138356d8 = uStack_28;
        uRam00000001138356e0 = 0x500000000;
        uRam00000001138356e8 = 3;
        uRam00000001138356ec = 0;
        uRam00000001138356f0 = 0;
        if (cStack_29 < '\0') {
          __ZdlPv(uStack_40);
        }
      }
      else {
        uRam00000001138356c8 = uStack_38;
        uRam00000001138356c0 = uStack_40;
        uRam00000001138356d0 = CONCAT17(cStack_29,uStack_30);
        uRam00000001138356d8 = uStack_28;
        uRam00000001138356e0 = 0x500000000;
        uRam00000001138356e8 = 3;
        uRam00000001138356ec = 0;
        uRam00000001138356f0 = 0;
      }
      ___cxa_atexit(FUN_10ab6e868,0x1138356c0,0x100000000);
      ___cxa_guard_release(0x1138356f8);
    }
  }
  return 0x1138356c0;
}



/* Entry: 10ab6e868; end: 10ab6e897;  */

undefined8 * FUN_10ab6e868(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10ab6e898; end: 10ab6e9d7;  */

undefined8 FUN_10ab6e898(void)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined7 uStack_30;
  char cStack_29;
  undefined8 uStack_28;
  
  if ((bRam0000000113835738 & 1) == 0) {
    iVar1 = 0x13835738;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2b074(&uStack_40,&PTR_DAT_110c4e5b8);
      if (cStack_29 < '\0') {
        func_0x000107c3192c(0x113835700,uStack_40,uStack_38);
        uRam0000000113835718 = uStack_28;
        uRam0000000113835720 = 0x500000000;
        uRam0000000113835728 = 2;
        uRam000000011383572c = 0;
        uRam0000000113835730 = 0;
        if (cStack_29 < '\0') {
          __ZdlPv(uStack_40);
        }
      }
      else {
        uRam0000000113835708 = uStack_38;
        uRam0000000113835700 = uStack_40;
        uRam0000000113835710 = CONCAT17(cStack_29,uStack_30);
        uRam0000000113835718 = uStack_28;
        uRam0000000113835720 = 0x500000000;
        uRam0000000113835728 = 2;
        uRam000000011383572c = 0;
        uRam0000000113835730 = 0;
      }
      ___cxa_atexit(FUN_10ab6e868,0x113835700,0x100000000);
      ___cxa_guard_release(0x113835738);
    }
  }
  return 0x113835700;
}



/* Entry: 10ab6e9d8; end: 10ab6eb17;  */

undefined8 FUN_10ab6e9d8(void)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined7 uStack_30;
  char cStack_29;
  undefined8 uStack_28;
  
  if ((bRam0000000113835778 & 1) == 0) {
    iVar1 = 0x13835778;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2b074(&uStack_40,&PTR_DAT_110c4e5d0);
      if (cStack_29 < '\0') {
        func_0x000107c3192c(0x113835740,uStack_40,uStack_38);
        uRam0000000113835758 = uStack_28;
        uRam0000000113835760 = 0x500000000;
        uRam0000000113835768 = 3;
        uRam000000011383576c = 0;
        uRam0000000113835770 = 0;
        if (cStack_29 < '\0') {
          __ZdlPv(uStack_40);
        }
      }
      else {
        uRam0000000113835748 = uStack_38;
        uRam0000000113835740 = uStack_40;
        uRam0000000113835750 = CONCAT17(cStack_29,uStack_30);
        uRam0000000113835758 = uStack_28;
        uRam0000000113835760 = 0x500000000;
        uRam0000000113835768 = 3;
        uRam000000011383576c = 0;
        uRam0000000113835770 = 0;
      }
      ___cxa_atexit(FUN_10ab6e868,0x113835740,0x100000000);
      ___cxa_guard_release(0x113835778);
    }
  }
  return 0x113835740;
}



/* Entry: 10ab6eb18; end: 10ab6ec57;  */

undefined8 FUN_10ab6eb18(void)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined7 uStack_30;
  char cStack_29;
  undefined8 uStack_28;
  
  if ((bRam00000001138357b8 & 1) == 0) {
    iVar1 = 0x138357b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2b074(&uStack_40,&PTR_DAT_110c4e5e8);
      if (cStack_29 < '\0') {
        func_0x000107c3192c(0x113835780,uStack_40,uStack_38);
        uRam0000000113835798 = uStack_28;
        uRam00000001138357a0 = 0x500000000;
        uRam00000001138357a8 = 4;
        uRam00000001138357ac = 0;
        uRam00000001138357b0 = 0;
        if (cStack_29 < '\0') {
          __ZdlPv(uStack_40);
        }
      }
      else {
        uRam0000000113835788 = uStack_38;
        uRam0000000113835780 = uStack_40;
        uRam0000000113835790 = CONCAT17(cStack_29,uStack_30);
        uRam0000000113835798 = uStack_28;
        uRam00000001138357a0 = 0x500000000;
        uRam00000001138357a8 = 4;
        uRam00000001138357ac = 0;
        uRam00000001138357b0 = 0;
      }
      ___cxa_atexit(FUN_10ab6e868,0x113835780,0x100000000);
      ___cxa_guard_release(0x1138357b8);
    }
  }
  return 0x113835780;
}



/* Entry: 10ab6ec58; end: 10ab6ed97;  */

undefined8 FUN_10ab6ec58(void)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined7 uStack_30;
  char cStack_29;
  undefined8 uStack_28;
  
  if ((bRam00000001138357f8 & 1) == 0) {
    iVar1 = 0x138357f8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2b074(&uStack_40,&PTR_DAT_110c4e600);
      if (cStack_29 < '\0') {
        func_0x000107c3192c(0x1138357c0,uStack_40,uStack_38);
        uRam00000001138357d8 = uStack_28;
        uRam00000001138357e0 = 0x500000000;
        uRam00000001138357e8 = 4;
        uRam00000001138357ec = 0;
        uRam00000001138357f0 = 0;
        if (cStack_29 < '\0') {
          __ZdlPv(uStack_40);
        }
      }
      else {
        uRam00000001138357c8 = uStack_38;
        uRam00000001138357c0 = uStack_40;
        uRam00000001138357d0 = CONCAT17(cStack_29,uStack_30);
        uRam00000001138357d8 = uStack_28;
        uRam00000001138357e0 = 0x500000000;
        uRam00000001138357e8 = 4;
        uRam00000001138357ec = 0;
        uRam00000001138357f0 = 0;
      }
      ___cxa_atexit(FUN_10ab6e868,0x1138357c0,0x100000000);
      ___cxa_guard_release(0x1138357f8);
    }
  }
  return 0x1138357c0;
}



/* Entry: 10ab6ed98; end: 10ab6eedf;  */

undefined8 FUN_10ab6ed98(void)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined7 uStack_30;
  char cStack_29;
  undefined8 uStack_28;
  
  if ((bRam0000000113835838 & 1) == 0) {
    iVar1 = 0x13835838;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2b074(&uStack_40,&PTR_DAT_110c4e600);
      if (cStack_29 < '\0') {
        func_0x000107c3192c(0x113835800,uStack_40,uStack_38);
        uRam0000000113835818 = uStack_28;
        uRam0000000113835820 = 0x200000000;
        uRam0000000113835828 = 4;
        uRam000000011383582c = 1;
        uRam0000000113835830 = 0;
        if (cStack_29 < '\0') {
          __ZdlPv(uStack_40);
        }
      }
      else {
        uRam0000000113835808 = uStack_38;
        uRam0000000113835800 = uStack_40;
        uRam0000000113835810 = CONCAT17(cStack_29,uStack_30);
        uRam0000000113835818 = uStack_28;
        uRam0000000113835820 = 0x200000000;
        uRam0000000113835828 = 4;
        uRam000000011383582c = 1;
        uRam0000000113835830 = 0;
      }
      ___cxa_atexit(FUN_10ab6e868,0x113835800,0x100000000);
      ___cxa_guard_release(0x113835838);
    }
  }
  return 0x113835800;
}



/* Entry: 10ab6eee0; end: 10ab6f01f;  */

undefined8 FUN_10ab6eee0(void)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined7 uStack_30;
  char cStack_29;
  undefined8 uStack_28;
  
  if ((bRam0000000113835878 & 1) == 0) {
    iVar1 = 0x13835878;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2b074(&uStack_40,&PTR_DAT_110c4e618);
      if (cStack_29 < '\0') {
        func_0x000107c3192c(0x113835840,uStack_40,uStack_38);
        uRam0000000113835858 = uStack_28;
        uRam0000000113835860 = 0x500000000;
        uRam0000000113835868 = 4;
        uRam000000011383586c = 0;
        uRam0000000113835870 = 0;
        if (cStack_29 < '\0') {
          __ZdlPv(uStack_40);
        }
      }
      else {
        uRam0000000113835848 = uStack_38;
        uRam0000000113835840 = uStack_40;
        uRam0000000113835850 = CONCAT17(cStack_29,uStack_30);
        uRam0000000113835858 = uStack_28;
        uRam0000000113835860 = 0x500000000;
        uRam0000000113835868 = 4;
        uRam000000011383586c = 0;
        uRam0000000113835870 = 0;
      }
      ___cxa_atexit(FUN_10ab6e868,0x113835840,0x100000000);
      ___cxa_guard_release(0x113835878);
    }
  }
  return 0x113835840;
}



/* Entry: 10ab6f020; end: 10ab6f15f;  */

undefined8 FUN_10ab6f020(void)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined7 uStack_30;
  char cStack_29;
  undefined8 uStack_28;
  
  if ((bRam00000001138358b8 & 1) == 0) {
    iVar1 = 0x138358b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2b074(&uStack_40,&PTR_DAT_110c4e630);
      if (cStack_29 < '\0') {
        func_0x000107c3192c(0x113835880,uStack_40,uStack_38);
        uRam0000000113835898 = uStack_28;
        uRam00000001138358a0 = 0x500000000;
        uRam00000001138358a8 = 2;
        uRam00000001138358ac = 0;
        uRam00000001138358b0 = 0;
        if (cStack_29 < '\0') {
          __ZdlPv(uStack_40);
        }
      }
      else {
        uRam0000000113835888 = uStack_38;
        uRam0000000113835880 = uStack_40;
        uRam0000000113835890 = CONCAT17(cStack_29,uStack_30);
        uRam0000000113835898 = uStack_28;
        uRam00000001138358a0 = 0x500000000;
        uRam00000001138358a8 = 2;
        uRam00000001138358ac = 0;
        uRam00000001138358b0 = 0;
      }
      ___cxa_atexit(FUN_10ab6e868,0x113835880,0x100000000);
      ___cxa_guard_release(0x1138358b8);
    }
  }
  return 0x113835880;
}



/* Entry: 10ab6f160; end: 10ab6f29f;  */

undefined8 FUN_10ab6f160(void)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined7 uStack_30;
  char cStack_29;
  undefined8 uStack_28;
  
  if ((bRam00000001138358f8 & 1) == 0) {
    iVar1 = 0x138358f8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2b074(&uStack_40,&PTR_DAT_110c4e648);
      if (cStack_29 < '\0') {
        func_0x000107c3192c(0x1138358c0,uStack_40,uStack_38);
        uRam00000001138358d8 = uStack_28;
        uRam00000001138358e0 = 0x500000000;
        uRam00000001138358e8 = 2;
        uRam00000001138358ec = 0;
        uRam00000001138358f0 = 0;
        if (cStack_29 < '\0') {
          __ZdlPv(uStack_40);
        }
      }
      else {
        uRam00000001138358c8 = uStack_38;
        uRam00000001138358c0 = uStack_40;
        uRam00000001138358d0 = CONCAT17(cStack_29,uStack_30);
        uRam00000001138358d8 = uStack_28;
        uRam00000001138358e0 = 0x500000000;
        uRam00000001138358e8 = 2;
        uRam00000001138358ec = 0;
        uRam00000001138358f0 = 0;
      }
      ___cxa_atexit(FUN_10ab6e868,0x1138358c0,0x100000000);
      ___cxa_guard_release(0x1138358f8);
    }
  }
  return 0x1138358c0;
}



/* Entry: 10ab6f2a0; end: 10ab6f3df;  */

undefined8 FUN_10ab6f2a0(void)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined7 uStack_30;
  char cStack_29;
  undefined8 uStack_28;
  
  if ((bRam0000000113835938 & 1) == 0) {
    iVar1 = 0x13835938;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2b074(&uStack_40,&PTR_DAT_110c4e660);
      if (cStack_29 < '\0') {
        func_0x000107c3192c(0x113835900,uStack_40,uStack_38);
        uRam0000000113835918 = uStack_28;
        uRam0000000113835920 = 0x500000000;
        uRam0000000113835928 = 2;
        uRam000000011383592c = 0;
        uRam0000000113835930 = 0;
        if (cStack_29 < '\0') {
          __ZdlPv(uStack_40);
        }
      }
      else {
        uRam0000000113835908 = uStack_38;
        uRam0000000113835900 = uStack_40;
        uRam0000000113835910 = CONCAT17(cStack_29,uStack_30);
        uRam0000000113835918 = uStack_28;
        uRam0000000113835920 = 0x500000000;
        uRam0000000113835928 = 2;
        uRam000000011383592c = 0;
        uRam0000000113835930 = 0;
      }
      ___cxa_atexit(FUN_10ab6e868,0x113835900,0x100000000);
      ___cxa_guard_release(0x113835938);
    }
  }
  return 0x113835900;
}



/* Entry: 10ab6f3e0; end: 10ab6f51f;  */

undefined8 FUN_10ab6f3e0(void)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined7 uStack_30;
  char cStack_29;
  undefined8 uStack_28;
  
  if ((bRam0000000113835978 & 1) == 0) {
    iVar1 = 0x13835978;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2b074(&uStack_40,&PTR_DAT_110c4e678);
      if (cStack_29 < '\0') {
        func_0x000107c3192c(0x113835940,uStack_40,uStack_38);
        uRam0000000113835958 = uStack_28;
        uRam0000000113835960 = 0x500000000;
        uRam0000000113835968 = 2;
        uRam000000011383596c = 0;
        uRam0000000113835970 = 0;
        if (cStack_29 < '\0') {
          __ZdlPv(uStack_40);
        }
      }
      else {
        uRam0000000113835948 = uStack_38;
        uRam0000000113835940 = uStack_40;
        uRam0000000113835950 = CONCAT17(cStack_29,uStack_30);
        uRam0000000113835958 = uStack_28;
        uRam0000000113835960 = 0x500000000;
        uRam0000000113835968 = 2;
        uRam000000011383596c = 0;
        uRam0000000113835970 = 0;
      }
      ___cxa_atexit(FUN_10ab6e868,0x113835940,0x100000000);
      ___cxa_guard_release(0x113835978);
    }
  }
  return 0x113835940;
}



/* Entry: 10ab6f520; end: 10ab6f5e3;  */

undefined4 * FUN_10ab6f520(undefined4 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  puVar1 = (undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 4) = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  FUN_10a19079c(puVar1);
  *(undefined8 *)(param_1 + 10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffff;
  *param_1 = 0;
  FUN_10ab6f5e4(puVar1,param_3);
  if (param_3 != 0) {
    param_3 = param_3 * 0x38;
    do {
      FUN_10ab6f958(puVar1,param_2);
      FUN_10ab6f86c(param_1);
      param_2 = param_2 + 0x38;
      param_3 = param_3 + -0x38;
    } while (param_3 != 0);
  }
  return param_1;
}



/* Entry: 10ab6f5e4; end: 10ab6f6c7;  */

long **** FUN_10ab6f5e4(long ****param_1,long ****param_2)

{
  uint uVar1;
  code *pcVar2;
  long ****pppplVar3;
  long ***ppplVar4;
  long ***ppplVar5;
  ulong uVar6;
  ulong uVar7;
  long ***ppplStack_58;
  long **pplStack_50;
  long **pplStack_48;
  long ***ppplStack_40;
  long ***ppplStack_38;
  
  ppplVar4 = *param_1;
  if ((long ****)(((long)param_1[2] - (long)ppplVar4 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    if ((long ****)0x492492492492492 < param_2) {
      FUN_10a1907e8();
      func_0x00010ab72574(&ppplStack_58);
      __Unwind_Resume();
      if (8 < (uint)param_2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab6f720);
        (*pcVar2)();
      }
      uVar1 = *(uint *)((long)param_1 + ((ulong)param_2 & 0xffffffff) * 4 + 0x20);
      if (uVar1 == 0xffffffff) {
        return (long ****)0x0;
      }
      uVar6 = ((long)param_1[2] - (long)param_1[1] >> 3) * 0x6db6db6db6db6db7;
      if (uVar1 <= uVar6 && uVar6 - uVar1 != 0) {
        return (long ****)(param_1[1] + (ulong)uVar1 * 7);
      }
      FUN_10ab725fc();
      uVar6 = (ulong)*(uint *)(param_2 + 4);
      ppplVar4 = param_1[1];
      uVar7 = ((long)param_1[2] - (long)ppplVar4 >> 3) * 0x6db6db6db6db6db7;
      if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
        FUN_10ab725fc();
      }
      else {
        if (ppplVar4 == (long ***)0x0) {
          return (long ****)0x0;
        }
        param_1 = (long ****)(ppplVar4 + uVar6 * 7);
        if (param_1 == param_2) {
          return (long ****)0x1;
        }
      }
      if (param_1[3] != param_2[3]) {
        return (long ****)0x0;
      }
      return (long ****)
             (ulong)((*(int *)(param_1 + 5) << 0x14 | *(int *)((long)param_1 + 0x24) << 0x1b |
                      (uint)*(byte *)((long)param_1 + 0x2c) << 0xd | *(int *)(param_1 + 4) << 0xc |
                     *(uint *)(param_1 + 6)) ==
                    (*(int *)(param_2 + 5) << 0x14 | *(int *)((long)param_2 + 0x24) << 0x1b |
                     (uint)*(byte *)((long)param_2 + 0x2c) << 0xd | *(int *)(param_2 + 4) << 0xc |
                    *(uint *)(param_2 + 6)));
    }
    ppplVar5 = param_1[1];
    pppplVar3 = param_1;
    ppplStack_38 = (long ***)param_1;
    FUN_10a1907fc();
    ppplVar4 = (long ***)((long)pppplVar3 + ((long)ppplVar5 - (long)ppplVar4));
    ppplVar5 = (long ***)((long)ppplVar4 + ((long)*param_1 - (long)param_1[1]));
    ppplStack_58 = (long ***)pppplVar3;
    pplStack_50 = (long **)ppplVar4;
    pplStack_48 = (long **)ppplVar4;
    ppplStack_40 = (long ***)(pppplVar3 + (long)param_2 * 7);
    func_0x00010ab724ac(param_1,*param_1,param_1[1],ppplVar5);
    ppplStack_58 = *param_1;
    *param_1 = ppplVar5;
    param_1[1] = ppplVar4;
    ppplStack_40 = param_1[2];
    param_1[2] = (long ***)(pppplVar3 + (long)param_2 * 7);
    param_1 = &ppplStack_58;
    pplStack_50 = (long **)ppplStack_58;
    pplStack_48 = (long **)ppplStack_58;
    func_0x00010ab72574(param_1);
  }
  return param_1;
}



/* Entry: 10ab6f6c8; end: 10ab6f78b;  */

ulong FUN_10ab6f6c8(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar5 = (undefined4)(param_2 >> 0x20);
  uVar4 = (uint)param_2;
  if (8 < uVar4) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab6f720);
    (*pcVar3)();
  }
  uVar2 = *(uint *)(param_1 + (param_2 & 0xffffffff) * 4 + 0x20);
  if (uVar2 == 0xffffffff) {
    return 0;
  }
  uVar6 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x6db6db6db6db6db7;
  if (uVar2 <= uVar6 && uVar6 - uVar2 != 0) {
    return *(long *)(param_1 + 8) + (ulong)uVar2 * 0x38;
  }
  FUN_10ab725fc();
  uVar6 = (ulong)*(uint *)(CONCAT44(uVar5,uVar4) + 0x20);
  lVar1 = *(long *)(param_1 + 8);
  uVar7 = (*(long *)(param_1 + 0x10) - lVar1 >> 3) * 0x6db6db6db6db6db7;
  if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
    FUN_10ab725fc();
  }
  else {
    if (lVar1 == 0) {
      return 0;
    }
    param_1 = lVar1 + uVar6 * 0x38;
    if (param_1 == CONCAT44(uVar5,uVar4)) {
      return 1;
    }
  }
  if (*(long *)(param_1 + 0x18) != *(long *)(CONCAT44(uVar5,uVar4) + 0x18)) {
    return 0;
  }
  return (ulong)((*(int *)(param_1 + 0x28) << 0x14 | *(int *)(param_1 + 0x24) << 0x1b |
                  (uint)*(byte *)(param_1 + 0x2c) << 0xd | *(int *)(param_1 + 0x20) << 0xc |
                 *(uint *)(param_1 + 0x30)) ==
                (*(int *)(CONCAT44(uVar5,uVar4) + 0x28) << 0x14 |
                 *(int *)(CONCAT44(uVar5,uVar4) + 0x24) << 0x1b |
                 (uint)*(byte *)(CONCAT44(uVar5,uVar4) + 0x2c) << 0xd |
                 *(int *)(CONCAT44(uVar5,uVar4) + 0x20) << 0xc |
                *(uint *)(CONCAT44(uVar5,uVar4) + 0x30)));
}



/* Entry: 10ab6f78c; end: 10ab6f7f7;  */

bool FUN_10ab6f78c(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18)) {
    return (*(int *)(param_1 + 0x28) << 0x14 | *(int *)(param_1 + 0x24) << 0x1b |
            (uint)*(byte *)(param_1 + 0x2c) << 0xd | *(int *)(param_1 + 0x20) << 0xc |
           *(uint *)(param_1 + 0x30)) ==
           (*(int *)(param_2 + 0x28) << 0x14 | *(int *)(param_2 + 0x24) << 0x1b |
            (uint)*(byte *)(param_2 + 0x2c) << 0xd | *(int *)(param_2 + 0x20) << 0xc |
           *(uint *)(param_2 + 0x30));
  }
  return false;
}



/* Entry: 10ab6f7f8; end: 10ab6f86b;  */

void FUN_10ab6f7f8(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined1 uStack_29;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  uStack_29 = param_5;
  uStack_28 = param_4;
  uStack_24 = param_3;
  if (uVar1 < *(ulong *)(param_1 + 0x18)) {
    FUN_10ab6fd98(uVar1);
    lVar2 = uVar1 + 0x38;
    *(long *)(param_1 + 0x10) = lVar2;
  }
  else {
    lVar2 = param_1 + 8;
    FUN_10ab72610(lVar2,param_2,&uStack_24,&uStack_28,&uStack_29);
  }
  *(long *)(param_1 + 0x10) = lVar2;
  FUN_10ab6f86c(param_1);
  return;
}



/* Entry: 10ab6f86c; end: 10ab6f957;  */

undefined1 * FUN_10ab6f86c(int *param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  ppuVar5 = &puStack_30;
  lVar8 = *(long *)(param_1 + 2);
  lVar2 = *(long *)(param_1 + 4);
  puStack_30 = &UNK_10f694042;
  uStack_28 = 0x33;
  if (lVar8 != lVar2) {
    iVar7 = 0;
    uVar3 = (int)((ulong)(lVar2 - lVar8) >> 3) * -0x49249249 - 1;
    *(uint *)(lVar2 + -0x18) = uVar3;
    do {
      uVar4 = *(int *)(lVar8 + 0x24) - 1;
      if (uVar4 < 7) {
        iVar9 = *(int *)(&UNK_10e4fe790 + (ulong)uVar4 * 4);
      }
      else {
        iVar9 = 0;
      }
      iVar7 = (*(int *)(lVar8 + 0x28) * iVar9 + 3U & 0xfffffffc) + iVar7;
      lVar8 = lVar8 + 0x38;
    } while (lVar8 != lVar2);
    *param_1 = iVar7;
    uVar4 = *(int *)(lVar2 + -0x14) - 1;
    if (uVar4 < 7) {
      iVar9 = *(int *)(&UNK_10e4fe790 + (ulong)uVar4 * 4);
    }
    else {
      iVar9 = 0;
    }
    *(uint *)(lVar2 + -8) = iVar7 - (*(int *)(lVar2 + -0x10) * iVar9 + 3U & 0xfffffffc);
    FUN_10ab6fc68(param_1,lVar2 + -0x38);
    return (undefined1 *)(ulong)uVar3;
  }
  FUN_10a0edfc4();
  uVar1 = *(ulong *)((long)ppuVar5 + 8);
  if (uVar1 < *(ulong *)((long)ppuVar5 + 0x10)) {
    FUN_10ab728b0(uVar1);
    puVar6 = (undefined1 *)(uVar1 + 0x38);
    *(undefined1 **)((long)ppuVar5 + 8) = puVar6;
  }
  else {
    puVar6 = (undefined1 *)ppuVar5;
    FUN_10ab72770();
  }
  *(undefined1 **)((long)ppuVar5 + 8) = puVar6;
  return puVar6;
}



/* Entry: 10ab6f958; end: 10ab6f9a7;  */

void FUN_10ab6f958(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10ab728b0(uVar1);
    lVar2 = uVar1 + 0x38;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_10ab72770();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10ab6f9a8; end: 10ab6fa17;  */

undefined1 * FUN_10ab6f9a8(int *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = *(undefined8 **)(param_1 + 4);
  if (puVar2 < *(undefined8 **)(param_1 + 6)) {
    uVar13 = param_2[1];
    uVar12 = *param_2;
    puVar2[2] = param_2[2];
    puVar2[1] = uVar13;
    *puVar2 = uVar12;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar2[3] = param_2[3];
    uVar13 = param_2[5];
    uVar12 = param_2[4];
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_2 + 6);
    puVar2[5] = uVar13;
    puVar2[4] = uVar12;
    piVar8 = (int *)(puVar2 + 7);
  }
  else {
    piVar8 = param_1 + 2;
    FUN_10ab72914();
  }
  *(int **)(param_1 + 4) = piVar8;
  ppuVar6 = &puStack_30;
  lVar10 = *(long *)(param_1 + 2);
  lVar3 = *(long *)(param_1 + 4);
  puStack_30 = &UNK_10f694042;
  uStack_28 = 0x33;
  if (lVar10 != lVar3) {
    iVar9 = 0;
    uVar4 = (int)((ulong)(lVar3 - lVar10) >> 3) * -0x49249249 - 1;
    *(uint *)(lVar3 + -0x18) = uVar4;
    do {
      uVar5 = *(int *)(lVar10 + 0x24) - 1;
      if (uVar5 < 7) {
        iVar11 = *(int *)(&UNK_10e4fe790 + (ulong)uVar5 * 4);
      }
      else {
        iVar11 = 0;
      }
      iVar9 = (*(int *)(lVar10 + 0x28) * iVar11 + 3U & 0xfffffffc) + iVar9;
      lVar10 = lVar10 + 0x38;
    } while (lVar10 != lVar3);
    *param_1 = iVar9;
    uVar5 = *(int *)(lVar3 + -0x14) - 1;
    if (uVar5 < 7) {
      iVar11 = *(int *)(&UNK_10e4fe790 + (ulong)uVar5 * 4);
    }
    else {
      iVar11 = 0;
    }
    *(uint *)(lVar3 + -8) = iVar9 - (*(int *)(lVar3 + -0x10) * iVar11 + 3U & 0xfffffffc);
    FUN_10ab6fc68(param_1,lVar3 + -0x38);
    return (undefined1 *)(ulong)uVar4;
  }
  FUN_10a0edfc4();
  uVar1 = *(ulong *)((long)ppuVar6 + 8);
  if (uVar1 < *(ulong *)((long)ppuVar6 + 0x10)) {
    FUN_10ab728b0(uVar1);
    puVar7 = (undefined1 *)(uVar1 + 0x38);
    *(undefined1 **)((long)ppuVar6 + 8) = puVar7;
  }
  else {
    puVar7 = (undefined1 *)ppuVar6;
    FUN_10ab72770();
  }
  *(undefined1 **)((long)ppuVar6 + 8) = puVar7;
  return puVar7;
}



/* Entry: 10ab6fa18; end: 10ab6fb03;  */

/* WARNING: Removing unreachable block (ram,0x00010ab6fa78) */

void FUN_10ab6fa18(int *param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined1 uStack_31;
  
  FUN_10ab6fb04();
  lVar3 = *(long *)(param_1 + 2) + (ulong)*(uint *)(param_2 + 0x20) * 0x38;
  if (*(long *)(param_1 + 4) == lVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab6fb04);
    (*pcVar2)();
  }
  lVar3 = lVar3 + 0x38;
  FUN_10ab72a6c(&uStack_31);
  for (lVar6 = *(long *)(param_1 + 4); lVar6 != lVar3; lVar6 = lVar6 + -0x38) {
  }
  *(long *)(param_1 + 4) = lVar3;
  lVar6 = *(long *)(param_1 + 2);
  if (lVar6 == lVar3) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      uVar1 = *(int *)(lVar6 + 0x24) - 1;
      if (uVar1 < 7) {
        iVar5 = *(int *)(&UNK_10e4fe790 + (ulong)uVar1 * 4);
      }
      else {
        iVar5 = 0;
      }
      iVar4 = (*(int *)(lVar6 + 0x28) * iVar5 + 3U & 0xfffffffc) + iVar4;
      lVar6 = lVar6 + 0x38;
    } while (lVar6 != lVar3);
  }
  *param_1 = iVar4;
  return;
}



/* Entry: 10ab6fb04; end: 10ab6fbcf;  */

void FUN_10ab6fb04(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  
  lVar5 = 0;
  iVar3 = *(int *)(param_2 + 0x20);
  do {
    if (iVar3 == *(int *)(param_1 + 0x20 + lVar5)) {
      *(undefined4 *)(param_1 + 0x20 + lVar5) = 0xffffffff;
      iVar3 = *(int *)(param_2 + 0x20);
      break;
    }
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x24);
  uVar4 = *(int *)(param_2 + 0x24) - 1;
  if (uVar4 < 7) {
    iVar9 = *(int *)(&UNK_10e4fe790 + (ulong)uVar4 * 4);
  }
  else {
    iVar9 = 0;
  }
  lVar5 = *(long *)(param_1 + 8);
  uVar6 = (*(long *)(param_1 + 0x10) - lVar5 >> 3) * 0x6db6db6db6db6db7;
  uVar7 = (ulong)(iVar3 + 1);
  if (uVar7 <= uVar6 && uVar6 - uVar7 != 0) {
    iVar2 = *(int *)(param_2 + 0x28);
    uVar4 = iVar3 + 2;
    do {
      lVar8 = lVar5 + uVar7 * 0x38;
      *(uint *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) - (iVar2 * iVar9 + 3U & 0xfffffffc);
      *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + -1;
      uVar7 = (ulong)uVar4;
      uVar1 = (ulong)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar1 <= uVar6 && uVar6 - uVar1 != 0);
  }
  return;
}



/* Entry: 10ab6fbd0; end: 10ab6fc0b;  */

bool FUN_10ab6fbd0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10ab6f6c8();
  if (lVar1 != 0) {
    FUN_10ab6fa18(param_1,lVar1);
  }
  return lVar1 != 0;
}



/* Entry: 10ab6fc0c; end: 10ab6fc67;  */

undefined8 FUN_10ab6fc0c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar2 == lVar1) {
LAB_10ab6fc44:
    if (lVar2 != lVar1 && lVar2 != 0) {
      FUN_10ab6fa18();
      return 1;
    }
  }
  else {
    do {
      if (*(long *)(lVar2 + 0x18) == *(long *)(param_2 + 0x18)) goto LAB_10ab6fc44;
      lVar2 = lVar2 + 0x38;
    } while (lVar2 != lVar1);
  }
  return 0;
}



/* Entry: 10ab6fc68; end: 10ab6fd97;  */

undefined8 *
FUN_10ab6fc68(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puStack_b8;
  uint auStack_b0 [2];
  undefined8 *puStack_a8;
  undefined4 uStack_a0;
  undefined8 *puStack_98;
  undefined4 uStack_90;
  undefined8 *puStack_88;
  undefined4 uStack_80;
  undefined8 *puStack_78;
  undefined4 uStack_70;
  undefined8 *puStack_68;
  undefined4 uStack_60;
  undefined8 *puStack_58;
  undefined4 uStack_50;
  undefined8 *puStack_48;
  undefined4 uStack_40;
  undefined8 *puStack_38;
  undefined4 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  puVar3 = param_2;
  FUN_10ab6e728();
  auStack_b0[0] = 0;
  puStack_b8 = puVar2;
  FUN_10ab6e9d8();
  uStack_a0 = 1;
  puStack_a8 = puVar2;
  FUN_10ab6eb18();
  uStack_90 = 2;
  puStack_98 = puVar2;
  FUN_10ab6ec58();
  uStack_80 = 3;
  puStack_88 = puVar2;
  FUN_10ab6eee0();
  uStack_70 = 8;
  puStack_78 = puVar2;
  FUN_10ab6f020();
  uStack_60 = 4;
  puStack_68 = puVar2;
  FUN_10ab6f160();
  uStack_50 = 5;
  puStack_58 = puVar2;
  FUN_10ab6f2a0();
  uStack_40 = 6;
  puStack_48 = puVar2;
  FUN_10ab6f3e0();
  lVar4 = 0;
  puStack_38 = puVar2;
  uStack_30 = 7;
  do {
    if (*(long *)(*(long *)((long)auStack_b0 + lVar4 + -8) + 0x18) == param_2[3]) {
      if (8 < *(uint *)((long)auStack_b0 + lVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab6fd94);
        (*pcVar1)();
      }
      *(undefined4 *)((long)param_1 + (ulong)*(uint *)((long)auStack_b0 + lVar4) * 4 + 0x20) =
           *(undefined4 *)(param_2 + 4);
      break;
    }
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x90);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      func_0x000107c3192c(puVar2,*puVar3,puVar3[1]);
    }
    else {
      uVar6 = puVar3[1];
      uVar5 = *puVar3;
      puVar2[2] = puVar3[2];
      puVar2[1] = uVar6;
      *puVar2 = uVar5;
    }
    puVar2[3] = puVar3[3];
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)((long)puVar2 + 0x24) = param_3;
    *(undefined4 *)(puVar2 + 5) = param_4;
    *(undefined1 *)((long)puVar2 + 0x2c) = param_5;
    *(undefined4 *)(puVar2 + 6) = 0;
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10ab6fd98; end: 10ab6fe17;  */

undefined8 *
FUN_10ab6fd98(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 5) = param_4;
  *(undefined1 *)((long)param_1 + 0x2c) = param_5;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



/* Entry: 10ab6fe18; end: 10ab6fed3;  */

void FUN_10ab6fe18(long param_1,long *param_2)

{
  FUN_10a00d760(param_2,&PTR_DAT_110c4e338,param_1);
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c4e690,*(undefined4 *)(param_1 + 0x20));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c4e6b0,*(undefined4 *)(param_1 + 0x24));
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c4e358,*(undefined4 *)(param_1 + 0x28));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c4e378,*(undefined1 *)(param_1 + 0x2c));
                    /* WARNING: Could not recover jumptable at 0x00010ab6fed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c4e398,*(undefined4 *)(param_1 + 0x30));
  return;
}



/* Entry: 10ab6fed4; end: 10ab7084f;  */

/* WARNING: Removing unreachable block (ram,0x00010ab701b4) */
/* WARNING: Removing unreachable block (ram,0x00010ab700bc) */
/* WARNING: Removing unreachable block (ram,0x00010ab70784) */

void FUN_10ab6fed4(uint *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  byte bVar4;
  undefined **ppuVar5;
  code *pcVar6;
  bool bVar7;
  long *plVar8;
  undefined **ppuVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined **ppuVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  undefined **ppuVar24;
  ulong *puVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined *puStack_1d8;
  undefined4 uStack_1a8;
  undefined3 uStack_1a4;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined **appuStack_180 [7];
  undefined8 uStack_148;
  char cStack_131;
  undefined **appuStack_120 [20];
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  ulong uStack_70;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 200))(param_2,&PTR_DAT_110c4e3b8);
  *param_1 = (uint)plVar8;
  plVar8 = param_2;
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110c4e3d8,0);
  param_1[0x11] = (uint)plVar8;
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c4e3f8);
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x208))();
  ppuVar16 = (undefined **)(param_1 + 2);
  puVar1 = *ppuVar16;
  puVar20 = *(undefined8 **)(param_1 + 4);
  uVar23 = (ulong)plVar8 & 0xffffffff;
  lVar18 = (long)puVar20 - (long)puVar1 >> 3;
  bVar7 = uVar23 < (ulong)(lVar18 * 0x6db6db6db6db6db7);
  uVar21 = uVar23 + lVar18 * -0x6db6db6db6db6db7;
  if (bVar7 || uVar21 == 0) {
    if (bVar7) {
      for (; puVar20 != (undefined8 *)(puVar1 + uVar23 * 0x38); puVar20 = puVar20 + -7) {
      }
      *(undefined **)(param_1 + 4) = puVar1 + uVar23 * 0x38;
    }
  }
  else if ((ulong)((*(long *)(param_1 + 6) - (long)puVar20 >> 3) * 0x6db6db6db6db6db7) < uVar21) {
    lVar18 = *(long *)(param_1 + 6) - (long)puVar1 >> 3;
    uVar19 = lVar18 * -0x2492492492492492;
    if (uVar19 < uVar23 || uVar19 - uVar23 == 0) {
      uVar19 = uVar23;
    }
    if (0x249249249249248 < (ulong)(lVar18 * 0x6db6db6db6db6db7)) {
      uVar19 = 0x492492492492492;
    }
    ppuVar9 = ppuVar16;
    appuStack_180[0] = ppuVar16;
    FUN_10a1907fc();
    ppuStack_198 = (undefined **)((long)ppuVar9 + ((long)puVar20 - (long)puVar1));
    puVar26 = ppuStack_198 + (uVar21 & 0xffffffff) * 7;
    puVar20 = ppuStack_198;
    do {
      puVar20[3] = 0;
      puVar20[2] = 0;
      puVar20[5] = 0;
      puVar20[4] = 0;
      puVar20[6] = 0;
      puVar20[1] = 0;
      *puVar20 = 0;
      puVar20[3] = 0x28cd94bfde;
      puVar20[4] = 0;
      *(undefined8 *)((long)puVar20 + 0x25) = 0;
      puVar20 = puVar20 + 7;
    } while (puVar20 != puVar26);
    lVar18 = (long)ppuStack_198 + (*(long *)(param_1 + 2) - *(long *)(param_1 + 4));
    ppuStack_1a0 = ppuVar9;
    uStack_190 = (undefined **)puVar26;
    ppuStack_188 = ppuVar9 + uVar19 * 7;
    func_0x00010ab724ac(ppuVar16,*(long *)(param_1 + 2),*(long *)(param_1 + 4),lVar18);
    ppuStack_1a0 = *(undefined ***)(param_1 + 2);
    *(long *)(param_1 + 2) = lVar18;
    *(undefined8 **)(param_1 + 4) = puVar26;
    ppuStack_188 = *(undefined ***)(param_1 + 6);
    *(undefined ***)(param_1 + 6) = ppuVar9 + uVar19 * 7;
    ppuStack_198 = ppuStack_1a0;
    uStack_190 = ppuStack_1a0;
    func_0x00010ab72574(&ppuStack_1a0);
  }
  else {
    puVar26 = puVar20 + (uVar21 & 0xffffffff) * 7;
    do {
      puVar20[3] = 0;
      puVar20[2] = 0;
      puVar20[5] = 0;
      puVar20[4] = 0;
      puVar20[6] = 0;
      puVar20[1] = 0;
      *puVar20 = 0;
      puVar20[3] = 0x28cd94bfde;
      puVar20[4] = 0;
      *(undefined8 *)((long)puVar20 + 0x25) = 0;
      puVar20 = puVar20 + 7;
    } while (puVar20 != puVar26);
    *(undefined8 **)(param_1 + 4) = puVar26;
  }
  uVar17 = (uint)plVar8;
  if (uVar17 != 0) {
    uVar15 = 0;
    puStack_1d8 = &UNK_10f63b8ac;
    do {
      (**(code **)(*param_2 + 0x218))(param_2);
      (**(code **)(*param_2 + 0xa0))(&ppuStack_80,param_2,&PTR_DAT_110c4e338);
      uStack_190 = (undefined **)uStack_70;
      ppuStack_198 = ppuStack_78;
      ppuStack_1a0 = ppuStack_80;
      ppuStack_78 = (undefined **)0x0;
      uStack_70 = 0;
      ppuStack_80 = (undefined **)0x0;
      ppuStack_188 = (undefined **)0x0;
      func_0x000107c2b080(&ppuStack_1a0);
      ppuVar5 = ppuStack_188;
      uVar21 = (ulong)uStack_190;
      ppuVar3 = ppuStack_198;
      ppuVar9 = ppuStack_1a0;
      uStack_1a8 = (undefined4)uStack_190;
      uStack_1a4 = (undefined3)((ulong)uStack_190 >> 0x20);
      bVar4 = uStack_190._7_1_;
      ppuVar24 = (undefined **)(ulong)uStack_190._7_1_;
      uStack_190 = (undefined **)((ulong)uStack_190 & 0xffffffffffffff);
      ppuStack_1a0 = (undefined **)((ulong)ppuStack_1a0 & 0xffffffffffffff00);
      plVar8 = param_2;
      (**(code **)(*param_2 + 200))(param_2,&PTR_DAT_110c4e690);
      plVar10 = param_2;
      (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c4e6b0);
      plVar11 = param_2;
      (**(code **)(*param_2 + 200))(param_2,&PTR_DAT_110c4e358);
      plVar12 = param_2;
      (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c4e378);
      plVar13 = param_2;
      (**(code **)(*param_2 + 200))(param_2,&PTR_DAT_110c4e398);
      ppuVar16 = ppuVar3;
      if (-1 < (long)uVar21) {
        ppuVar16 = ppuVar24;
      }
      if (((ppuVar16 == (undefined **)0x0) || (6 < (int)plVar10 - 1U)) || (3 < (int)plVar11 - 1U)) {
LAB_10ab70760:
        FUN_10a00946c(puStack_1d8);
        goto LAB_10ab70768;
      }
      lVar27 = *(long *)(param_1 + 2);
      lVar2 = *(long *)(param_1 + 4);
      lVar18 = lVar27;
      if (lVar27 == lVar2) {
LAB_10ab702a0:
        if ((lVar18 != lVar2) && (lVar18 != 0)) goto LAB_10ab70760;
      }
      else {
        do {
          if (*(undefined ***)(lVar18 + 0x18) == ppuVar5) goto LAB_10ab702a0;
          lVar18 = lVar18 + 0x38;
        } while (lVar18 != lVar2);
      }
      if (uVar17 <= (uint)plVar8) {
        puStack_1d8 = &UNK_10f69408c;
        goto LAB_10ab70760;
      }
      uVar21 = (lVar2 - lVar27 >> 3) * 0x6db6db6db6db6db7;
      if (uVar21 < ((ulong)plVar8 & 0xffffffff) || uVar21 - ((ulong)plVar8 & 0xffffffff) == 0)
      goto LAB_10ab70768;
      uVar21 = (ulong)plVar8 & 0xffffffff;
      puVar25 = (ulong *)(lVar27 + uVar21 * 0x38);
      if (*(char *)((long)puVar25 + 0x17) < '\0') {
        __ZdlPv(*puVar25);
      }
      *puVar25 = (ulong)ppuVar9;
      puVar25[1] = (ulong)ppuVar3;
      *(uint *)((long)puVar25 + 0x13) = CONCAT31(uStack_1a4,uStack_1a8._3_1_);
      *(undefined4 *)(puVar25 + 2) = uStack_1a8;
      *(byte *)((long)puVar25 + 0x17) = bVar4;
      puVar25[3] = (ulong)ppuVar5;
      *(uint *)(puVar25 + 4) = (uint)plVar8;
      *(int *)((long)puVar25 + 0x24) = (int)plVar10;
      *(int *)(puVar25 + 5) = (int)plVar11;
      *(char *)((long)puVar25 + 0x2c) = (char)plVar12;
      *(undefined2 *)((long)puVar25 + 0x2d) = 0;
      *(undefined1 *)((long)puVar25 + 0x2f) = 0;
      *(int *)(puVar25 + 6) = (int)plVar13;
      uVar23 = (*(long *)(param_1 + 4) - *(long *)(param_1 + 2) >> 3) * 0x6db6db6db6db6db7;
      if (uVar23 < uVar21 || uVar23 - uVar21 == 0) goto LAB_10ab70768;
      FUN_10ab6fc68(param_1,*(long *)(param_1 + 2) + uVar21 * 0x38);
      (**(code **)(*param_2 + 0x220))(param_2);
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar17);
  }
  lVar18 = *(long *)(param_1 + 2);
  if (*(long *)(param_1 + 4) - lVar18 != 0) {
    uVar17 = 0;
    uVar21 = 0;
    uVar23 = (*(long *)(param_1 + 4) - lVar18 >> 3) * 0x6db6db6db6db6db7;
    do {
      lVar27 = lVar18 + uVar21 * 0x38;
      if (*(uint *)(lVar27 + 0x30) != uVar17) {
LAB_10ab70470:
        FUN_109febc44(&ppuStack_1a0);
        FUN_10a002568(&uStack_190,&UNK_10f69428c,0x26);
        FUN_10a002568(&uStack_190,&DAT_10f62a9e8,1);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
        FUN_10a002568(&uStack_190,&UNK_10f6942b3,10);
        FUN_10a002568();
        FUN_10a002568(&uStack_190,&UNK_10f6942be,0x12);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
        FUN_10a002568(&uStack_190,&UNK_10f6942d1,0x14);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
        FUN_10a002568(&uStack_190,&UNK_10f6942e6,0x15);
        uVar21 = 0;
        uVar17 = 1;
        do {
          FUN_10a002568(&uStack_190,&UNK_10f6942fc,4);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
          FUN_10a002568();
          FUN_10a002568();
          FUN_10a002568(&uStack_190," ",1);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
          FUN_10a002568(&uStack_190,&DAT_10f62b0e2,1);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
          puVar1 = &DAT_10f30a8b5;
          if (*(char *)(lVar18 + uVar21 * 0x38 + 0x2c) == '\0') {
            puVar1 = &UNK_10f6937f5;
          }
          FUN_10a002568(&uStack_190,puVar1);
          FUN_10a002568(&uStack_190,&UNK_10f5636e1,8);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
          FUN_10a002568(&uStack_190,&UNK_10f694301,10);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
          FUN_10a002568(&uStack_190,&UNK_10f69430c,10);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
          FUN_10a002568(&uStack_190,&UNK_10f694317,9);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
          uVar21 = (ulong)uVar17;
          uVar19 = (ulong)uVar17;
          uVar17 = uVar17 + 1;
        } while (uVar19 <= uVar23 && uVar23 - uVar19 != 0);
        FUN_10a002568(&uStack_190,&UNK_10f694321,0xb);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
        FUN_10a002568();
        func_0x00010a002480(&ppuStack_80,&ppuStack_188,&uStack_1a8);
        FUN_10a0029c0(&ppuStack_80);
LAB_10ab70768:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab7076c);
        (*pcVar6)();
      }
      uVar15 = *(int *)(lVar27 + 0x24) - 1;
      if (uVar15 < 7) {
        iVar22 = *(int *)(&UNK_10e4fe790 + (ulong)uVar15 * 4);
      }
      else {
        iVar22 = 0;
      }
      uVar15 = *(int *)(lVar27 + 0x28) * iVar22 + 3U & 0xfffffffc;
      if (CARRY4(uVar17,uVar15)) {
        FUN_10a00946c(&UNK_10f694271);
        goto LAB_10ab70470;
      }
      uVar17 = uVar15 + uVar17;
      uVar21 = (ulong)((int)uVar21 + 1);
    } while (uVar21 <= uVar23 && uVar23 - uVar21 != 0);
    if (*param_1 < uVar17) {
      puVar14 = (undefined4 *)&UNK_10f6940a4;
      FUN_10a00946c();
      ppuStack_1a0 = &PTR_SUB_1108a5a38;
      uStack_190 = &PTR_DAT_1108a5a60;
      appuStack_120[0] = &PTR_DAT_1108a5a88;
      ppuStack_188 = &PTR_DAT_11088d7b0;
      if (cStack_131 < '\0') {
        __ZdlPv(uStack_148);
      }
      ppuStack_188 = (undefined **)
                     (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
      __ZNSt3__16localeD1Ev(appuStack_180);
      ppuVar16 = &PTR_PTR_1108a5aa0;
      __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_1a0);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_120);
      __Unwind_Resume();
      (**(code **)(*ppuVar16 + 0x50))(ppuVar16,&PTR_DAT_110c4e3b8,*puVar14);
      if (puVar14[0x11] != 0) {
        (**(code **)(*ppuVar16 + 0x50))(ppuVar16,&PTR_DAT_110c4e3d8);
      }
      (**(code **)(*ppuVar16 + 0x18))(ppuVar16,&PTR_DAT_110c4e3f8);
      lVar27 = *(long *)(puVar14 + 4);
      for (lVar18 = *(long *)(puVar14 + 2); lVar18 != lVar27; lVar18 = lVar18 + 0x38) {
        (**(code **)(*ppuVar16 + 0x10))(ppuVar16);
        FUN_10ab6fe18(lVar18,ppuVar16);
        (**(code **)(*ppuVar16 + 0x20))(ppuVar16);
      }
                    /* WARNING: Could not recover jumptable at 0x00010ab70914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*ppuVar16 + 0x20))(ppuVar16);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010ab70460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x220))(param_2);
  return;
}



/* Entry: 10ab70850; end: 10ab70917;  */

void FUN_10ab70850(undefined4 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c4e3b8,*param_1);
  if (param_1[0x11] != 0) {
    (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c4e3d8);
  }
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c4e3f8);
  lVar1 = *(long *)(param_1 + 4);
  for (lVar2 = *(long *)(param_1 + 2); lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10ab6fe18(lVar2,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010ab70914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10ab70918; end: 10ab70a17;  */

undefined1  [16] FUN_10ab70918(ulong param_1,long param_2)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar6 = *(long *)(param_2 + 8);
  uVar4 = (*(long *)(param_2 + 0x10) - lVar6 >> 3) * 0x6db6db6db6db6db7;
  iVar3 = (int)uVar4;
  if (iVar3 == 0) {
    param_1 = 0;
    goto LAB_10ab70a0c;
  }
  if (*(long *)(param_2 + 0x10) != lVar6) {
    param_1 = *(ulong *)(lVar6 + 0x18);
    param_1 = param_1 * 0x40 + (param_1 >> 2) + 0x9e3779b9 +
              (ulong)(*(int *)(lVar6 + 0x28) << 0x14 | *(int *)(lVar6 + 0x24) << 0x1b |
                      (uint)*(byte *)(lVar6 + 0x2c) << 0xd | *(int *)(lVar6 + 0x20) << 0xc |
                     *(uint *)(lVar6 + 0x30)) ^ param_1;
    if (iVar3 == 1) {
LAB_10ab70a0c:
      auVar8._8_8_ = param_2;
      auVar8._0_8_ = param_1;
      return auVar8;
    }
    if ((ulong)(iVar3 - 2) < uVar4 - 1) {
      lVar5 = (uVar4 & 0xffffffff) - 1;
      puVar2 = (uint *)(lVar6 + 0x68);
      do {
        uVar4 = *(ulong *)(puVar2 + -6);
        param_1 = param_1 * 0x40 + 0x9e3779b9 + (param_1 >> 2) +
                  (uVar4 * 0x40 + 0x9e3779b9 + (uVar4 >> 2) +
                   (ulong)(puVar2[-2] << 0x14 | puVar2[-3] << 0x1b | (uint)(byte)puVar2[-1] << 0xd |
                           puVar2[-4] << 0xc | *puVar2) ^ uVar4) ^ param_1;
        lVar5 = lVar5 + -1;
        puVar2 = puVar2 + 0xe;
      } while (lVar5 != 0);
      goto LAB_10ab70a0c;
    }
  }
  FUN_10ab725fc();
  if (*(int *)(param_1 + 0x44) == *(int *)(param_2 + 0x44)) {
    lVar6 = *(long *)(param_1 + 8);
    uVar7 = (*(long *)(param_1 + 0x10) - lVar6 >> 3) * 0x6db6db6db6db6db7;
    uVar4 = uVar7 & 0xffffffff;
    lVar5 = *(long *)(param_2 + 8);
    if (uVar4 == (*(long *)(param_2 + 0x10) - lVar5 >> 3) * 0x6db6db6db6db6db7) {
      if (uVar4 == 0) {
        lVar1 = 1;
      }
      else {
        do {
          uVar4 = uVar4 - 1;
          if (uVar7 == 0) {
            FUN_10ab725fc();
            auVar10._8_8_ = 0x14;
            auVar10._0_8_ = &UNK_10f69432d;
            return auVar10;
          }
          lVar1 = lVar6;
          param_2 = lVar5;
          FUN_10ab6f78c(lVar6,lVar5);
          if ((int)lVar1 == 0) break;
          lVar6 = lVar6 + 0x38;
          lVar5 = lVar5 + 0x38;
          uVar7 = uVar7 - 1;
        } while (uVar4 != 0);
      }
      goto LAB_10ab70ab0;
    }
  }
  lVar1 = 0;
LAB_10ab70ab0:
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = lVar1;
  return auVar9;
}



/* Entry: 10ab70a18; end: 10ab70acb;  */

undefined1  [16] FUN_10ab70a18(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (*(int *)(param_1 + 0x44) == *(int *)(param_2 + 0x44)) {
    lVar3 = *(long *)(param_1 + 8);
    uVar5 = (*(long *)(param_1 + 0x10) - lVar3 >> 3) * 0x6db6db6db6db6db7;
    uVar2 = uVar5 & 0xffffffff;
    lVar4 = *(long *)(param_2 + 8);
    if (uVar2 == (*(long *)(param_2 + 0x10) - lVar4 >> 3) * 0x6db6db6db6db6db7) {
      if (uVar2 == 0) {
        lVar1 = 1;
      }
      else {
        do {
          uVar2 = uVar2 - 1;
          if (uVar5 == 0) {
            FUN_10ab725fc();
            auVar7._8_8_ = 0x14;
            auVar7._0_8_ = &UNK_10f69432d;
            return auVar7;
          }
          lVar1 = lVar3;
          param_2 = lVar4;
          FUN_10ab6f78c(lVar3,lVar4);
          if ((int)lVar1 == 0) break;
          lVar3 = lVar3 + 0x38;
          lVar4 = lVar4 + 0x38;
          uVar5 = uVar5 - 1;
        } while (uVar2 != 0);
      }
      goto LAB_10ab70ab0;
    }
  }
  lVar1 = 0;
LAB_10ab70ab0:
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = lVar1;
  return auVar6;
}



/* Entry: 10ab70acc; end: 10ab70b47;  */

undefined1  [16] FUN_10ab70acc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10f69432d;
  return auVar1;
}



/* Entry: 10ab70b48; end: 10ab70c2f;  */

void FUN_10ab70b48(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_5c = 0x13c;
  uStack_58 = 0xffffffff;
  FUN_10ab70c30(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f6940c3;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f6937f5;
  uStack_38 = 0;
  FUN_10ab79470();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f6940ce;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f6937f5;
  uStack_38 = 0;
  func_0x00010ab79738(param_1,&puStack_98);
  FUN_10ab79930(param_1);
  return;
}



/* Entry: 10ab70c30; end: 10ab70d07;  */

/* WARNING: Removing unreachable block (ram,0x00010ab70cc8) */

undefined1  [16] FUN_10ab70c30(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f69432d,0x14);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab79374(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ab70d08; end: 10ab70d1f;  */

undefined4 FUN_10ab70d08(long param_1)

{
  return *(undefined4 *)(param_1 + 0xe0);
}



/* Entry: 10ab70d20; end: 10ab70e47;  */

void FUN_10ab70d20(undefined8 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  long *param_5)

{
  undefined4 uVar1;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  func_0x00010aa70acc();
  uVar1 = 0x42800000;
  uStack_30 = 0x4280000042800000;
  uStack_28 = 0x42800000;
  (**(code **)(*param_5 + 0xf0))(param_5,&PTR_DAT_110c4e418,&uStack_30);
  *(undefined4 *)(param_4 + 0xe0) = uVar1;
  *(undefined4 *)(param_4 + 0xe4) = param_2;
  *(undefined4 *)(param_4 + 0xe8) = param_3;
  uVar1 = 0x40000000;
  uStack_30 = 0x4000000040000000;
  uStack_28 = 0x40000000;
  (**(code **)(*param_5 + 0xf0))(param_5,&PTR_DAT_110c4e6d0,&uStack_30);
  *(undefined4 *)(param_4 + 0xec) = uVar1;
  *(undefined4 *)(param_4 + 0xf0) = param_2;
  *(undefined4 *)(param_4 + 0xf4) = param_3;
  (**(code **)(*param_5 + 0xd0))(param_5,&PTR_DAT_110c4e438,0);
  *(int *)(param_4 + 0x120) = (int)param_5;
  return;
}



/* Entry: 10ab70e48; end: 10ab70eb7;  */

void FUN_10ab70e48(undefined8 *param_1)

{
  *(undefined1 *)((long)param_1 + 0x17) = 0x14;
  *(undefined4 *)(param_1 + 2) = 0x74657373;
  param_1[1] = 0x41617461446c6578;
  *param_1 = 0x6f562e7465737341;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10ab70eb8; end: 10ab71237;  */

undefined8 * FUN_10ab70eb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4eeb8;
  param_1[2] = &PTR_DAT_110c4ef58;
  param_1[7] = &PTR_DAT_110c4efb0;
  func_0x00010a004e5c(param_1 + 0x25);
  func_0x00010a05248c(param_1 + 0x22);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10ab71238; end: 10ab7126b;  */

undefined8 FUN_10ab71238(void)

{
  return 0;
}



/* Entry: 10ab7126c; end: 10ab7127f;  */

void FUN_10ab7126c(void)

{
  func_0x00010aa71c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab71280; end: 10ab7128f;  */

undefined8 FUN_10ab71280(void)

{
  return 0;
}



/* Entry: 10ab71290; end: 10ab712a7;  */

void FUN_10ab71290(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab712a8; end: 10ab712af;  */

undefined8 * FUN_10ab712a8(undefined8 *param_1)

{
  param_1[-7] = &PTR_FUN_110c3ec18;
  param_1[-5] = &PTR_DAT_110c3ecb8;
  *param_1 = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10ab712b0; end: 10ab712c7;  */

void FUN_10ab712b0(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab712c8; end: 10ab714a3;  */

undefined8 * FUN_10ab712c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4ed98;
  param_1[2] = &PTR_DAT_110c4ee40;
  param_1[7] = &PTR_DAT_110c4ee98;
  func_0x00010a004e5c(param_1 + 0x1e);
  func_0x00010a05248c(param_1 + 0x1c);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10ab714a4; end: 10ab71793;  */

long * FUN_10ab714a4(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *unaff_x26;
  long lVar12;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10ab71794(param_1,*(undefined8 *)(param_2 + 8));
  plVar10 = *(long **)(param_2 + 0x10);
  if (plVar10 != (long *)0x0) {
    plVar1 = param_1 + 2;
    do {
      plVar8 = param_1;
      func_0x000107c2b05c(param_1,plVar10 + 2);
      plVar11 = (long *)param_1[1];
      if (plVar11 != (long *)0x0) {
        uVar9 = (long)plVar11 - 1;
        if (((ulong)plVar11 & uVar9) == 0) {
          unaff_x26 = (long *)(uVar9 & (ulong)plVar8);
        }
        else {
          unaff_x26 = plVar8;
          if (plVar11 <= plVar8) {
            uVar7 = 0;
            if (plVar11 != (long *)0x0) {
              uVar7 = (ulong)plVar8 / (ulong)plVar11;
            }
            unaff_x26 = (long *)((long)plVar8 - uVar7 * (long)plVar11);
          }
        }
        plVar4 = *(long **)(*param_1 + (long)unaff_x26 * 8);
        if (plVar4 != (long *)0x0) {
          for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
            plVar5 = (long *)plVar4[1];
            if (plVar5 == plVar8) {
              plVar5 = param_1;
              func_0x000107c2b068(param_1,plVar4 + 2,plVar10 + 2);
              if (((ulong)plVar5 & 1) != 0) goto LAB_10ab71724;
            }
            else {
              if (((ulong)plVar11 & uVar9) == 0) {
                plVar5 = (long *)((ulong)plVar5 & uVar9);
              }
              else if (plVar11 <= plVar5) {
                uVar7 = 0;
                if (plVar11 != (long *)0x0) {
                  uVar7 = (ulong)plVar5 / (ulong)plVar11;
                }
                plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar11);
              }
              if (plVar5 != unaff_x26) break;
            }
          }
        }
      }
      plVar4 = (long *)0x50;
      __Znwm();
      *plVar4 = 0;
      plVar4[1] = (long)plVar8;
      if (*(char *)((long)plVar10 + 0x27) < '\0') {
        func_0x000107c3192c(plVar4 + 2,plVar10[2],plVar10[3]);
      }
      else {
        lVar12 = plVar10[3];
        lVar6 = plVar10[2];
        plVar4[4] = plVar10[4];
        plVar4[3] = lVar12;
        plVar4[2] = lVar6;
      }
      if (*(char *)((long)plVar10 + 0x3f) < '\0') {
        func_0x000107c3192c(plVar4 + 5,plVar10[5],plVar10[6]);
      }
      else {
        lVar12 = plVar10[6];
        lVar6 = plVar10[5];
        plVar4[7] = plVar10[7];
        plVar4[6] = lVar12;
        plVar4[5] = lVar6;
      }
      lVar6 = plVar10[9];
      lVar12 = plVar10[8];
      plVar4[9] = plVar10[9];
      plVar4[8] = lVar12;
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if ((plVar11 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar11 < (float)(param_1[3] + 1))) {
        uVar9 = 1;
        if ((long *)0x2 < plVar11) {
          uVar9 = (ulong)(((ulong)plVar11 & (long)plVar11 - 1U) != 0);
        }
        uVar9 = uVar9 | (long)plVar11 << 1;
        uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        FUN_10ab71794(param_1,uVar9);
        plVar11 = (long *)param_1[1];
        if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
          unaff_x26 = (long *)((long)plVar11 - 1U & (ulong)plVar8);
        }
        else {
          unaff_x26 = plVar8;
          if (plVar11 <= plVar8) {
            uVar9 = 0;
            if (plVar11 != (long *)0x0) {
              uVar9 = (ulong)plVar8 / (ulong)plVar11;
            }
            unaff_x26 = (long *)((long)plVar8 - uVar9 * (long)plVar11);
          }
        }
      }
      lVar6 = *param_1;
      plVar8 = *(long **)(lVar6 + (long)unaff_x26 * 8);
      if (plVar8 == (long *)0x0) {
        *plVar4 = *plVar1;
        *plVar1 = (long)plVar4;
        *(long **)(lVar6 + (long)unaff_x26 * 8) = plVar1;
        if (*plVar4 != 0) {
          plVar8 = *(long **)(*plVar4 + 8);
          if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
            plVar8 = (long *)((ulong)plVar8 & (long)plVar11 - 1U);
          }
          else if (plVar11 <= plVar8) {
            uVar9 = 0;
            if (plVar11 != (long *)0x0) {
              uVar9 = (ulong)plVar8 / (ulong)plVar11;
            }
            plVar8 = (long *)((long)plVar8 - uVar9 * (long)plVar11);
          }
          *(long **)(*param_1 + (long)plVar8 * 8) = plVar4;
        }
      }
      else {
        *plVar4 = *plVar8;
        *plVar8 = (long)plVar4;
      }
      param_1[3] = param_1[3] + 1;
LAB_10ab71724:
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
  return param_1;
}



/* Entry: 10ab71794; end: 10ab71963;  */

void FUN_10ab71794(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000109ffded8();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    func_0x00010ab719ac(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10ab71964; end: 10ab71aa3;  */

void FUN_10ab71964(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010ab719ac(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ab71aa4; end: 10ab71b47;  */

long * FUN_10ab71aa4(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    param_2 = param_2 & 0xff;
    uVar6 = uVar4 - 1;
    uVar3 = (uint)uVar4;
    uVar5 = (uint)param_2;
    if ((uVar4 & uVar6) == 0) {
      uVar7 = uVar3 - 1 & param_2;
    }
    else {
      uVar7 = param_2;
      if (uVar4 <= param_2) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar5 / uVar3;
        }
        uVar7 = (ulong)(uVar5 - uVar1 * uVar3);
      }
    }
    plVar8 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      do {
        if (plVar8 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar9 = plVar8[1];
        if (uVar9 == param_2) {
          if (*(byte *)(plVar8 + 2) == uVar5) {
            return plVar8;
          }
        }
        else {
          if ((uVar4 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar4 <= uVar9) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar2 * uVar4;
          }
          if (uVar9 != uVar7) {
            return (long *)0x0;
          }
        }
        plVar8 = (long *)*plVar8;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10ab71b48; end: 10ab71fa3;  */

long * FUN_10ab71b48(long *param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  uint uVar16;
  long *plVar17;
  long *unaff_x26;
  float fVar18;
  
  lVar13 = *(long *)(param_2 + 0x10);
  plVar11 = (long *)(lVar13 + 0x160);
  bVar1 = *(byte *)(param_2 + 0x30);
  plVar17 = (long *)(ulong)bVar1;
  plVar15 = *(long **)(lVar13 + 0x168);
  uVar16 = (uint)bVar1;
  if (plVar15 != (long *)0x0) {
    uVar5 = (long)plVar15 - 1;
    uVar14 = (uint)plVar15;
    if (((ulong)plVar15 & uVar5) == 0) {
      unaff_x26 = (long *)((ulong)(uVar14 - 1) & (ulong)plVar17);
    }
    else {
      unaff_x26 = plVar17;
      if (plVar15 <= plVar17) {
        uVar4 = 0;
        if (uVar14 != 0) {
          uVar4 = uVar16 / uVar14;
        }
        unaff_x26 = (long *)(ulong)(uVar16 - uVar4 * uVar14);
      }
    }
    puVar7 = *(undefined8 **)(*plVar11 + (long)unaff_x26 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar12 = (long *)*puVar7; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        plVar8 = (long *)plVar12[1];
        if (plVar8 == plVar17) {
          if (*(byte *)(plVar12 + 2) == uVar16) goto LAB_10ab71d4c;
        }
        else {
          if (((ulong)plVar15 & uVar5) == 0) {
            plVar8 = (long *)((ulong)plVar8 & uVar5);
          }
          else if (plVar15 <= plVar8) {
            uVar9 = 0;
            if (plVar15 != (long *)0x0) {
              uVar9 = (ulong)plVar8 / (ulong)plVar15;
            }
            plVar8 = (long *)((long)plVar8 - uVar9 * (long)plVar15);
          }
          if (plVar8 != unaff_x26) break;
        }
      }
    }
  }
  plVar12 = (long *)0x40;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = (long)plVar17;
  *(byte *)(plVar12 + 2) = bVar1;
  plVar12[4] = 0;
  plVar12[3] = 0;
  plVar12[6] = 0;
  plVar12[5] = 0;
  *(undefined4 *)(plVar12 + 7) = 0x3f800000;
  fVar18 = (float)(*(long *)(lVar13 + 0x178) + 1);
  if ((plVar15 == (long *)0x0) || (*(float *)(lVar13 + 0x180) * (float)plVar15 < fVar18)) {
    uVar5 = 1;
    if ((long *)0x2 < plVar15) {
      uVar5 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
    }
    uVar5 = uVar5 | (long)plVar15 << 1;
    uVar9 = (ulong)(fVar18 / *(float *)(lVar13 + 0x180));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    FUN_10ab71fa4(plVar11,uVar5);
    plVar15 = *(long **)(lVar13 + 0x168);
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      unaff_x26 = (long *)((ulong)((int)plVar15 - 1) & (ulong)plVar17);
    }
    else {
      unaff_x26 = plVar17;
      if (plVar15 <= plVar17) {
        uVar5 = 0;
        if (plVar15 != (long *)0x0) {
          uVar5 = (ulong)plVar17 / (ulong)plVar15;
        }
        unaff_x26 = (long *)((long)plVar17 - uVar5 * (long)plVar15);
      }
    }
  }
  lVar10 = *plVar11;
  plVar17 = *(long **)(lVar10 + (long)unaff_x26 * 8);
  if (plVar17 == (long *)0x0) {
    *plVar12 = *(long *)(lVar13 + 0x170);
    *(long **)(lVar13 + 0x170) = plVar12;
    *(long *)(lVar10 + (long)unaff_x26 * 8) = lVar13 + 0x170;
    if (*plVar12 == 0) goto LAB_10ab71d40;
    plVar17 = *(long **)(*plVar12 + 8);
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      plVar17 = (long *)((ulong)plVar17 & (long)plVar15 - 1U);
    }
    else if (plVar15 <= plVar17) {
      uVar5 = 0;
      if (plVar15 != (long *)0x0) {
        uVar5 = (ulong)plVar17 / (ulong)plVar15;
      }
      plVar17 = (long *)((long)plVar17 - uVar5 * (long)plVar15);
    }
    plVar17 = (long *)(*plVar11 + (long)plVar17 * 8);
  }
  else {
    *plVar12 = *plVar17;
  }
  *plVar17 = (long)plVar12;
LAB_10ab71d40:
  *(long *)(lVar13 + 0x178) = *(long *)(lVar13 + 0x178) + 1;
LAB_10ab71d4c:
  plVar11 = plVar12 + 3;
  plVar15 = plVar11;
  func_0x000107c2b05c(plVar11,param_2 + 0x18);
  plVar17 = (long *)plVar12[4];
  if (plVar17 != (long *)0x0) {
    uVar5 = (long)plVar17 - 1;
    if (((ulong)plVar17 & uVar5) == 0) {
      unaff_x26 = (long *)(uVar5 & (ulong)plVar15);
    }
    else {
      unaff_x26 = plVar15;
      if (plVar17 <= plVar15) {
        uVar9 = 0;
        if (plVar17 != (long *)0x0) {
          uVar9 = (ulong)plVar15 / (ulong)plVar17;
        }
        unaff_x26 = (long *)((long)plVar15 - uVar9 * (long)plVar17);
      }
    }
    puVar7 = *(undefined8 **)(*plVar11 + (long)unaff_x26 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar7; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        plVar6 = (long *)plVar8[1];
        if (plVar6 == plVar15) {
          plVar6 = plVar11;
          func_0x000107c2b068(plVar11,plVar8 + 2,param_2 + 0x18);
          if (((ulong)plVar6 & 1) != 0) goto LAB_10ab71f54;
        }
        else {
          if (((ulong)plVar17 & uVar5) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar5);
          }
          else if (plVar17 <= plVar6) {
            uVar9 = 0;
            if (plVar17 != (long *)0x0) {
              uVar9 = (ulong)plVar6 / (ulong)plVar17;
            }
            plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar17);
          }
          if (plVar6 != unaff_x26) break;
        }
      }
    }
  }
  plVar8 = (long *)0x50;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = (long)plVar15;
  if (*(char *)(param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(plVar8 + 2,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  }
  else {
    lVar13 = *(long *)(param_2 + 0x18);
    plVar8[3] = *(long *)(param_2 + 0x20);
    plVar8[2] = lVar13;
    plVar8[4] = *(long *)(param_2 + 0x28);
  }
  plVar8[9] = 0;
  plVar8[8] = 0;
  plVar8[7] = 0;
  plVar8[6] = 0;
  plVar8[5] = 0;
  if ((plVar17 == (long *)0x0) ||
     (*(float *)(plVar12 + 7) * (float)plVar17 < (float)(plVar12[6] + 1))) {
    uVar5 = 1;
    if ((long *)0x2 < plVar17) {
      uVar5 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
    }
    uVar5 = uVar5 | (long)plVar17 << 1;
    uVar9 = (ulong)((float)(plVar12[6] + 1) / *(float *)(plVar12 + 7));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    FUN_10ab71794(plVar11,uVar5);
    plVar17 = (long *)plVar12[4];
    if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar17 - 1U & (ulong)plVar15);
    }
    else {
      unaff_x26 = plVar15;
      if (plVar17 <= plVar15) {
        uVar5 = 0;
        if (plVar17 != (long *)0x0) {
          uVar5 = (ulong)plVar15 / (ulong)plVar17;
        }
        unaff_x26 = (long *)((long)plVar15 - uVar5 * (long)plVar17);
      }
    }
  }
  lVar13 = *plVar11;
  plVar15 = *(long **)(lVar13 + (long)unaff_x26 * 8);
  if (plVar15 == (long *)0x0) {
    plVar15 = plVar12 + 5;
    *plVar8 = *plVar15;
    *plVar15 = (long)plVar8;
    *(long **)(lVar13 + (long)unaff_x26 * 8) = plVar15;
    if (*plVar8 != 0) {
      plVar15 = *(long **)(*plVar8 + 8);
      if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
        plVar15 = (long *)((ulong)plVar15 & (long)plVar17 - 1U);
      }
      else if (plVar17 <= plVar15) {
        uVar5 = 0;
        if (plVar17 != (long *)0x0) {
          uVar5 = (ulong)plVar15 / (ulong)plVar17;
        }
        plVar15 = (long *)((long)plVar15 - uVar5 * (long)plVar17);
      }
      *(long **)(*plVar11 + (long)plVar15 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar15;
    *plVar15 = (long)plVar8;
  }
  plVar12[6] = plVar12[6] + 1;
LAB_10ab71f54:
  lVar10 = param_1[1];
  lVar13 = *param_1;
  if (param_1[1] != 0) {
    plVar11 = (long *)(param_1[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar11 = (long *)plVar8[9];
  plVar8[9] = lVar10;
  plVar8[8] = lVar13;
  if (plVar11 != (long *)0x0) {
    plVar15 = plVar11 + 1;
    do {
      lVar13 = *plVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return plVar8 + 8;
}



/* Entry: 10ab71fa4; end: 10ab72173;  */

void FUN_10ab71fa4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000109ffded8();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    func_0x00010ab71a30(lVar2 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10ab72174; end: 10ab721bb;  */

void FUN_10ab72174(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010ab71a30(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ab721bc; end: 10ab72203;  */

void FUN_10ab721bc(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10ab72204; end: 10ab7226f;  */

void FUN_10ab72204(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      FUN_10ab72270(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10ab72270; end: 10ab7234f;  */

long FUN_10ab72270(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  func_0x00010a05248c(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    puVar2 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ab72350; end: 10ab723bb;  */

void FUN_10ab72350(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      FUN_10ab723bc(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10ab723bc; end: 10ab725fb;  */

long FUN_10ab723bc(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  func_0x00010a05248c(param_1 + 0x28);
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
    puVar2 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x00010a042b54(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ab725fc; end: 10ab7260f;  */

long * FUN_10ab725fc(undefined8 param_1,long *param_2,undefined4 *param_3,undefined4 *param_4,
                    undefined1 *param_5)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar2 = (long *)&UNK_10f6940f2;
  FUN_109ffdddc();
  lVar7 = plVar2[1] - *plVar2;
  uVar5 = (lVar7 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (uVar5 < 0x492492492492493) {
    lVar4 = plVar2[2] - *plVar2 >> 3;
    uVar6 = lVar4 * -0x2492492492492492;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x249249249249248 < (ulong)(lVar4 * 0x6db6db6db6db6db7)) {
      uVar6 = 0x492492492492492;
    }
    plStack_58 = plVar2;
    if (uVar6 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = plVar2;
      FUN_10a1907fc();
    }
    lVar7 = (long)plVar3 + lVar7;
    plStack_60 = plVar3 + uVar6 * 7;
    plStack_78 = plVar3;
    plStack_70 = (long *)lVar7;
    plStack_68 = (long *)lVar7;
    FUN_10ab6fd98(lVar7,param_2,*param_3,*param_4,*param_5);
    plStack_68 = (long *)(lVar7 + 0x38);
    lVar7 = lVar7 + (*plVar2 - plVar2[1]);
    func_0x00010ab724ac(plVar2,*plVar2,plVar2[1],lVar7);
    plVar3 = plStack_68;
    plStack_78 = (long *)*plVar2;
    *plVar2 = lVar7;
    lVar7 = plVar2[2];
    plVar2[2] = (long)plStack_60;
    plVar2[1] = (long)plStack_68;
    plStack_70 = plStack_78;
    plStack_68 = plStack_78;
    plStack_60 = (long *)lVar7;
    func_0x00010ab72574(&plStack_78);
    return plVar3;
  }
  FUN_10a1907e8();
  func_0x00010ab72574(&plStack_78);
  __Unwind_Resume();
  lVar7 = plVar2[1] - *plVar2;
  uVar5 = (lVar7 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (uVar5 < 0x492492492492493) {
    lVar4 = plVar2[2] - *plVar2 >> 3;
    uVar6 = lVar4 * -0x2492492492492492;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x249249249249248 < (ulong)(lVar4 * 0x6db6db6db6db6db7)) {
      uVar6 = 0x492492492492492;
    }
    plStack_c8 = plVar2;
    if (uVar6 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = plVar2;
      FUN_10a1907fc();
    }
    puVar1 = (undefined *)((long)plVar3 + lVar7);
    plStack_d0 = plVar3 + uVar6 * 7;
    plStack_e8 = plVar3;
    plStack_e0 = (long *)puVar1;
    plStack_d8 = (long *)puVar1;
    FUN_10ab728b0(puVar1,param_2);
    plStack_d8 = (long *)(puVar1 + 0x38);
    lVar7 = *plVar2;
    lVar4 = plVar2[1];
    func_0x00010ab724ac(plVar2,lVar7,lVar4,puVar1 + (lVar7 - lVar4));
    plVar3 = plStack_d8;
    plStack_e8 = (long *)*plVar2;
    *plVar2 = (long)(puVar1 + (lVar7 - lVar4));
    lVar7 = plVar2[2];
    plVar2[2] = (long)plStack_d0;
    plVar2[1] = (long)plStack_d8;
    plStack_e0 = plStack_e8;
    plStack_d8 = plStack_e8;
    plStack_d0 = (long *)lVar7;
    func_0x00010ab72574(&plStack_e8);
    return plVar3;
  }
  FUN_10a1907e8();
  func_0x00010ab72574(&plStack_e8);
  __Unwind_Resume();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(plVar2,*param_2,param_2[1]);
  }
  else {
    lVar4 = param_2[1];
    lVar7 = *param_2;
    plVar2[2] = param_2[2];
    plVar2[1] = lVar4;
    *plVar2 = lVar7;
  }
  plVar2[3] = param_2[3];
  lVar4 = param_2[5];
  lVar7 = param_2[4];
  *(int *)(plVar2 + 6) = (int)param_2[6];
  plVar2[5] = lVar4;
  plVar2[4] = lVar7;
  return plVar2;
}



/* Entry: 10ab72610; end: 10ab7276f;  */

long * FUN_10ab72610(long *param_1,long *param_2,undefined4 *param_3,undefined4 *param_4,
                    undefined1 *param_5)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (uVar3 < 0x492492492492493) {
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar2 * -0x2492492492492492;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x249249249249248 < (ulong)(lVar2 * 0x6db6db6db6db6db7)) {
      uVar4 = 0x492492492492492;
    }
    plStack_48 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a1907fc();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_50 = plVar1 + uVar4 * 7;
    plStack_68 = plVar1;
    plStack_60 = (long *)lVar5;
    plStack_58 = (long *)lVar5;
    FUN_10ab6fd98(lVar5,param_2,*param_3,*param_4,*param_5);
    plStack_58 = (long *)(lVar5 + 0x38);
    lVar5 = lVar5 + (*param_1 - param_1[1]);
    func_0x00010ab724ac(param_1,*param_1,param_1[1],lVar5);
    plVar1 = plStack_58;
    plStack_68 = (long *)*param_1;
    *param_1 = lVar5;
    lVar5 = param_1[2];
    param_1[2] = (long)plStack_50;
    param_1[1] = (long)plStack_58;
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    plStack_50 = (long *)lVar5;
    func_0x00010ab72574(&plStack_68);
    return plVar1;
  }
  FUN_10a1907e8();
  func_0x00010ab72574(&plStack_68);
  __Unwind_Resume();
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (uVar3 < 0x492492492492493) {
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar2 * -0x2492492492492492;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x249249249249248 < (ulong)(lVar2 * 0x6db6db6db6db6db7)) {
      uVar4 = 0x492492492492492;
    }
    plStack_b8 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a1907fc();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_c0 = plVar1 + uVar4 * 7;
    plStack_d8 = plVar1;
    plStack_d0 = (long *)lVar5;
    plStack_c8 = (long *)lVar5;
    FUN_10ab728b0(lVar5,param_2);
    plStack_c8 = (long *)(lVar5 + 0x38);
    lVar5 = lVar5 + (*param_1 - param_1[1]);
    func_0x00010ab724ac(param_1,*param_1,param_1[1],lVar5);
    plVar1 = plStack_c8;
    plStack_d8 = (long *)*param_1;
    *param_1 = lVar5;
    lVar5 = param_1[2];
    param_1[2] = (long)plStack_c0;
    param_1[1] = (long)plStack_c8;
    plStack_d0 = plStack_d8;
    plStack_c8 = plStack_d8;
    plStack_c0 = (long *)lVar5;
    func_0x00010ab72574(&plStack_d8);
    return plVar1;
  }
  FUN_10a1907e8();
  func_0x00010ab72574(&plStack_d8);
  __Unwind_Resume();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    lVar2 = param_2[1];
    lVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = lVar2;
    *param_1 = lVar5;
  }
  param_1[3] = param_2[3];
  lVar2 = param_2[5];
  lVar5 = param_2[4];
  *(int *)(param_1 + 6) = (int)param_2[6];
  param_1[5] = lVar2;
  param_1[4] = lVar5;
  return param_1;
}



/* Entry: 10ab72770; end: 10ab728af;  */

long * FUN_10ab72770(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (uVar3 < 0x492492492492493) {
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar2 * -0x2492492492492492;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x249249249249248 < (ulong)(lVar2 * 0x6db6db6db6db6db7)) {
      uVar4 = 0x492492492492492;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a1907fc();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_40 = plVar1 + uVar4 * 7;
    plStack_58 = plVar1;
    plStack_50 = (long *)lVar5;
    plStack_48 = (long *)lVar5;
    FUN_10ab728b0(lVar5,param_2);
    plStack_48 = (long *)(lVar5 + 0x38);
    lVar5 = lVar5 + (*param_1 - param_1[1]);
    func_0x00010ab724ac(param_1,*param_1,param_1[1],lVar5);
    plVar1 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar5;
    lVar5 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar5;
    func_0x00010ab72574(&plStack_58);
    return plVar1;
  }
  FUN_10a1907e8();
  func_0x00010ab72574(&plStack_58);
  __Unwind_Resume();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    lVar2 = param_2[1];
    lVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = lVar2;
    *param_1 = lVar5;
  }
  param_1[3] = param_2[3];
  lVar2 = param_2[5];
  lVar5 = param_2[4];
  *(int *)(param_1 + 6) = (int)param_2[6];
  param_1[5] = lVar2;
  param_1[4] = lVar5;
  return param_1;
}



/* Entry: 10ab728b0; end: 10ab72913;  */

undefined8 * FUN_10ab728b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = param_2[3];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 10ab72914; end: 10ab72a6b;  */

undefined1  [16]
FUN_10ab72914(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (uVar4 < 0x492492492492493) {
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar3 * -0x2492492492492492;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x249249249249248 < (ulong)(lVar3 * 0x6db6db6db6db6db7)) {
      uVar5 = 0x492492492492492;
    }
    plStack_38 = param_1;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a1907fc();
    }
    plStack_50 = (long *)((long)plVar2 + lVar6);
    uVar8 = param_2[1];
    uVar7 = *param_2;
    plStack_50[2] = param_2[2];
    plStack_50[1] = uVar8;
    *plStack_50 = uVar7;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    plStack_50[3] = param_2[3];
    uVar8 = param_2[5];
    uVar7 = param_2[4];
    *(undefined4 *)(plStack_50 + 6) = *(undefined4 *)(param_2 + 6);
    plStack_50[5] = uVar8;
    plStack_50[4] = uVar7;
    puVar1 = plStack_50 + 7;
    lVar3 = *param_1;
    lVar6 = (long)plStack_50 + (lVar3 - param_1[1]);
    plStack_58 = plVar2;
    plStack_48 = puVar1;
    plStack_40 = plVar2 + uVar5 * 7;
    func_0x00010ab724ac(param_1,lVar3,param_1[1],lVar6);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar1;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar5 * 7);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00010ab72574(&plStack_58);
    auVar9._8_8_ = lVar3;
    auVar9._0_8_ = puVar1;
    return auVar9;
  }
  FUN_10a1907e8();
  func_0x00010ab72574(&plStack_58);
  __Unwind_Resume(param_1);
  puVar1 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 7) {
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      __ZdlPv(*param_4);
    }
    uVar8 = param_2[1];
    uVar7 = *param_2;
    param_4[2] = param_2[2];
    param_4[1] = uVar8;
    *param_4 = uVar7;
    *(undefined1 *)((long)param_2 + 0x17) = 0;
    *(undefined1 *)param_2 = 0;
    param_4[3] = param_2[3];
    uVar8 = param_2[5];
    uVar7 = param_2[4];
    *(undefined4 *)(param_4 + 6) = *(undefined4 *)(param_2 + 6);
    param_4[5] = uVar8;
    param_4[4] = uVar7;
    param_4 = param_4 + 7;
    puVar1 = param_3;
  }
  auVar10._8_8_ = param_4;
  auVar10._0_8_ = puVar1;
  return auVar10;
}



/* Entry: 10ab72a6c; end: 10ab72afb;  */

undefined1  [16]
FUN_10ab72a6c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 7) {
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      __ZdlPv(*param_4);
    }
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_4[2] = param_2[2];
    param_4[1] = uVar3;
    *param_4 = uVar2;
    *(undefined1 *)((long)param_2 + 0x17) = 0;
    *(undefined1 *)param_2 = 0;
    param_4[3] = param_2[3];
    uVar3 = param_2[5];
    uVar2 = param_2[4];
    *(undefined4 *)(param_4 + 6) = *(undefined4 *)(param_2 + 6);
    param_4[5] = uVar3;
    param_4[4] = uVar2;
    param_4 = param_4 + 7;
    puVar1 = param_3;
  }
  auVar4._8_8_ = param_4;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10ab72afc; end: 10ab72bbb;  */

void FUN_10ab72afc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
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
  FUN_10ab72ca8(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)(param_2[3] + 0x1a0);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
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



/* Entry: 10ab72bbc; end: 10ab72ca7;  */

void FUN_10ab72bbc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar2[0x59] < 8) {
    plVar2[plVar2[0x59] + 0x4e] = plVar2[0x5a];
    plVar2[0x59] = plVar2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar2 + 0x4b);
  }
  plVar3 = param_2;
  func_0x00010ab72d10(param_2,param_3);
  FUN_10a8e7c74(param_5);
  func_0x000109898518(param_2,param_4);
  lVar4 = plVar3[3];
  lStack_50 = lVar4 + 0x198;
  uStack_48 = 0;
  uVar1 = SUB84(param_2,0);
  *(undefined4 *)(lVar4 + 0x1a0) = uVar1;
  *(undefined4 *)(lVar4 + 0x1a4) = uVar1;
  *(undefined4 *)(lVar4 + 0x1a8) = uVar1;
  FUN_10ab735e0(&lStack_50);
  *param_1 = 0;
  func_0x00010988c170(plVar2 + 0x4b);
  return;
}



/* Entry: 10ab72ca8; end: 10ab72d77;  */

void FUN_10ab72ca8(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
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
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar4 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar5 = ppuVar4;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a053854(ppuVar4,ppuVar5);
    param_2 = ppuVar5;
    if (ppuVar4 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (ppuVar4 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar6 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10ab72ca8(plVar6,param_2);
  FUN_10a052e3c(param_4);
  iVar1 = *(int *)(plVar6[3] + 0x1a0);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)iVar1;
  plVar6 = plVar7 + 0x4b;
  lVar8 = plVar7[0x59];
  uVar9 = lVar8 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar8 + 2];
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar13 = plVar7[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar7[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_a8 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar6 = lVar12;
          plVar7[0x4c] = lVar13 + uVar16 * 0x10;
          plVar7[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_c8 = lVar8;
          lStack_c0 = lVar8;
          lStack_b8 = lVar8;
          lStack_b0 = lVar14;
          func_0x00010988c1b8(&lStack_c8);
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
    plVar7[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar7[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10ab72d78; end: 10ab72e37;  */

void FUN_10ab72d78(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
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
  FUN_10ab72ca8(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)(param_2[3] + 0x1a0);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
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



/* Entry: 10ab72e38; end: 10ab72f1b;  */

void FUN_10ab72e38(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  func_0x00010ab72d10(param_2,param_3);
  FUN_10a8e7c74(param_5);
  func_0x000109898518(param_2,param_4);
  lStack_50 = plVar2[3] + 0x198;
  uStack_48 = 0;
  *(int *)(plVar2[3] + 0x1a0) = (int)param_2;
  FUN_10ab735e0(&lStack_50);
  *param_1 = 0;
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10ab72f1c; end: 10ab72fdb;  */

void FUN_10ab72f1c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
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
  FUN_10ab72ca8(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)(param_2[3] + 0x1a4);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
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



/* Entry: 10ab72fdc; end: 10ab730bf;  */

void FUN_10ab72fdc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  func_0x00010ab72d10(param_2,param_3);
  FUN_10a8e7c74(param_5);
  func_0x000109898518(param_2,param_4);
  lStack_50 = plVar2[3] + 0x198;
  uStack_48 = 0;
  *(int *)(plVar2[3] + 0x1a4) = (int)param_2;
  FUN_10ab735e0(&lStack_50);
  *param_1 = 0;
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10ab730c0; end: 10ab7317f;  */

void FUN_10ab730c0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
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
  FUN_10ab72ca8(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)(param_2[3] + 0x1a8);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
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



/* Entry: 10ab73180; end: 10ab73263;  */

void FUN_10ab73180(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  func_0x00010ab72d10(param_2,param_3);
  FUN_10a8e7c74(param_5);
  func_0x000109898518(param_2,param_4);
  lStack_50 = plVar2[3] + 0x198;
  uStack_48 = 0;
  *(int *)(plVar2[3] + 0x1a8) = (int)param_2;
  FUN_10ab735e0(&lStack_50);
  *param_1 = 0;
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10ab73264; end: 10ab73323;  */

void FUN_10ab73264(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
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
  FUN_10ab72ca8(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)(param_2[3] + 0x19c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
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



/* Entry: 10ab73324; end: 10ab73407;  */

void FUN_10ab73324(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  func_0x00010ab72d10(param_2,param_3);
  FUN_10a8e7ac0(param_5);
  func_0x000109898518(param_2,param_4);
  lStack_50 = plVar2[3] + 0x198;
  uStack_48 = 0;
  *(int *)(plVar2[3] + 0x19c) = (int)param_2;
  FUN_10ab735e0(&lStack_50);
  *param_1 = 0;
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10ab73408; end: 10ab734c3;  */

void FUN_10ab73408(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab72ca8(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a05b924(param_1,param_2,plVar4[3] + 0x188);
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



/* Entry: 10ab734c4; end: 10ab735df;  */

void FUN_10ab734c4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010ab72d10(param_2,param_3);
  FUN_10a1f9134(param_5);
  FUN_10a065cdc(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a32f140(plVar6[3],&stack0xffffffffffffffb0);
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


