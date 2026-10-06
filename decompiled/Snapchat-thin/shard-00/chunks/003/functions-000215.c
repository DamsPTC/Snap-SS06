/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004dff3c; end: 1004dff9f;  */

void FUN_1004dff3c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulong *param_4,
                  undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uVar6;
  
  uVar6 = *param_3;
  uVar3 = *param_4;
  if ((uVar3 & 1) == 0) {
    uVar4 = *param_5;
    *param_2 = uVar6;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
  }
  else {
    piVar5 = (int *)(uVar3 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar4 = *param_5;
    *param_2 = uVar6;
    param_2[1] = uVar3;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    param_2[2] = uVar4;
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1004dffa0; end: 1004e00ef;  */

ulong * FUN_1004dffa0(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  ulong *puVar6;
  ulong *unaff_x22;
  ulong uStack_58;
  undefined1 uStack_49;
  ulong uStack_48;
  
  uVar3 = *param_1;
  if (1 < uVar3) {
    if (3 < uVar3) {
      uVar4 = 1;
      do {
        puVar6 = param_1 + 1;
        if ((uVar3 & 1) != 0) {
          puVar6 = (ulong *)param_1[1];
        }
        uVar3 = puVar6[uVar4 * 3];
        uStack_48 = (puVar6 + uVar4 * 3)[1];
        if ((uStack_48 & 1) != 0) {
          piVar5 = (int *)(uStack_48 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar2) {
              *piVar5 = *piVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        FUN_1004bd618(param_2,uVar3,&uStack_48,puVar6[uVar4 * 3 + 2]);
        if ((uStack_48 & 1) != 0) {
          FUN_10084dad0();
        }
        uVar4 = uVar4 + 1;
        uVar3 = *param_1;
      } while (uVar4 < uVar3 >> 1);
    }
    puVar6 = param_1 + 1;
    if ((uVar3 & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    uVar3 = *puVar6;
    uStack_58 = puVar6[1];
    if ((uStack_58 & 1) != 0) {
      piVar5 = (int *)(uStack_58 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_1004bd7e8(&uStack_49,uVar3,&uStack_58);
    if ((uStack_58 & 1) != 0) {
      FUN_10084dad0();
    }
    FUN_1004e00f0(param_1);
    return param_1;
  }
  do {
    uVar4 = *param_2;
    uVar3 = uVar4 - 1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = uVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (uVar3 != 0) {
    if (uVar4 == 0) {
      func_0x000107c2c340(param_2,"no closures to schedule");
      func_0x000104bd46a0();
      func_0x000104bd46a0();
      FUN_1004bdf74(&stack0xffffffffffffffc8);
      FUN_1004bdf74(&stack0xffffffffffffffd0);
      func_0x000107c60bd8(param_2);
      return puRam0000000113815c70;
    }
    param_2 = param_2 + 1;
    puVar6 = param_2;
    FUN_1004920d0(param_2,&stack0xffffffffffffffdf);
    while (puVar6 == (ulong *)0x0) {
      puVar6 = param_2;
      FUN_1004920d0(param_2,&stack0xffffffffffffffdf);
    }
    func_0x0001004bd8dc(&stack0xffffffffffffffd0,puVar6[3]);
    puVar6[3] = 0;
    if (((ulong)unaff_x22 & 1) != 0) {
      piVar5 = (int *)((long)unaff_x22 + -1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_1004bd778();
    if (((ulong)unaff_x22 & 1) != 0) {
      FUN_10084dad0(unaff_x22);
    }
    param_2 = unaff_x22;
    if (((ulong)unaff_x22 & 1) != 0) {
      FUN_10084dad0();
      param_2 = unaff_x22;
    }
  }
  return param_2;
}



/* Entry: 1004e00f0; end: 1004e0173;  */

void FUN_1004e00f0(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar3 = param_1 + 1;
  uVar1 = *param_1;
  puVar2 = puVar3;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar3;
  }
  if (1 < uVar1) {
    uVar1 = uVar1 >> 1;
    puVar2 = puVar2 + uVar1 * 3;
    do {
      puVar2 = puVar2 + -3;
      uVar1 = uVar1 - 1;
      FUN_1004e0174(param_1,puVar2);
    } while (uVar1 != 0);
    uVar1 = *param_1;
  }
  if ((uVar1 & 1) != 0) {
    func_0x000107c60e14(*puVar3);
  }
  *param_1 = 0;
  return;
}



/* Entry: 1004e0174; end: 1004e0193;  */

void FUN_1004e0174(undefined8 param_1,long param_2)

{
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1004e0194; end: 1004e01c7;  */

long * FUN_1004e0194(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000104a78320(param_1);
  }
  return param_1;
}



/* Entry: 1004e01c8; end: 1004e01db;  */

void FUN_1004e01c8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + 0x110) + 0x10);
  FUN_1004bd910(puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x0001004e020c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)();
  return;
}



/* Entry: 1004e01dc; end: 1004e020f;  */

void FUN_1004e01dc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  FUN_1004bd910(puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x0001004e020c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)();
  return;
}



/* Entry: 1004e0210; end: 1004e0713;  */

/* WARNING: Removing unreachable block (ram,0x0001004e2fc4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1004e0210(long param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong *puVar14;
  ulong uStack_118;
  char *pcStack_110;
  long lStack_108;
  undefined8 *apuStack_100 [19];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = *(long **)(param_1 + 0x10);
  lVar5 = plVar13[0x39];
  if (lVar5 == 0) {
    puVar8 = (undefined8 *)plVar13[0x36];
    if (puVar8 != (undefined8 *)0x0) {
      if (((ulong)puVar8 & 1) != 0) {
        piVar10 = (int *)((long)puVar8 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = *piVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      apuStack_100[0] = puVar8;
      func_0x000104adfc18(param_2,apuStack_100,plVar13[0x34]);
      if (((ulong)apuStack_100[0] & 1) != 0) {
        FUN_10084dad0();
      }
LAB_1004e0490:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return;
      }
      goto LAB_1004e0678;
    }
    bVar1 = *(byte *)(param_2 + 2);
    if ((bVar1 >> 6 & 1) == 0) {
      if ((bVar1 & 1) != 0) {
        lVar5 = 0;
LAB_1004e031c:
        if (plVar13[lVar5 * 2 + 0x3b] != 0) {
          func_0x000107c2c1f4();
          goto LAB_1004e0698;
        }
        plVar13[lVar5 * 2 + 0x3b] = (long)param_2;
        *(undefined1 *)(plVar13 + lVar5 * 2 + 0x3c) = 0;
        bVar1 = *(byte *)(param_2 + 2);
        if ((bVar1 & 1) != 0) {
          *(byte *)(plVar13 + 0x47) = *(byte *)(plVar13 + 0x47) | 1;
          apuStack_100[0] = (undefined8 *)((ulong)apuStack_100[0] & 0xffffffff00000000);
          func_0x0001004e09bc(*(undefined8 *)param_2[1],apuStack_100);
          plVar13[0x3a] = plVar13[0x3a] + ((ulong)apuStack_100[0] & 0xffffffff);
          bVar1 = *(byte *)(param_2 + 2);
        }
        if ((bVar1 >> 2 & 1) != 0) {
          *(byte *)(plVar13 + 0x47) = *(byte *)(plVar13 + 0x47) | 2;
          plVar13[0x3a] = plVar13[0x3a] + *(long *)(*(long *)(param_2[1] + 0x28) + 0x20);
          bVar1 = *(byte *)(param_2 + 2);
        }
        if ((bVar1 >> 1 & 1) != 0) {
          *(byte *)(plVar13 + 0x47) = *(byte *)(plVar13 + 0x47) | 4;
        }
        if (*(ulong *)(*plVar13 + 8) < (ulong)plVar13[0x3a]) {
          func_0x000104a872a4(plVar13,plVar13[0x38]);
        }
        bVar1 = *(byte *)(plVar13 + 0x47);
        if ((bVar1 >> 4 & 1) == 0) {
          if (plVar13[0x38] == 0) {
            if (((bVar1 & 0x28) == 8) &&
               ((plVar13[3] == 0 || (*(char *)(plVar13[3] + 0x30) == '\0')))) {
              func_0x0001008e1fcc(plVar13,plVar13 + lVar5 * 2 + 0x3b);
              FUN_1004e0fc4(apuStack_100,plVar13,*(long *)(plVar13[0x35] + 0x40) + 0x28,0);
              puVar8 = apuStack_100[0];
              apuStack_100[0] = (undefined8 *)0x0;
              puVar6 = (undefined8 *)plVar13[0x39];
              plVar13[0x39] = (long)puVar8;
              if (puVar6 != (undefined8 *)0x0) {
                (**(code **)*puVar6)();
                puVar8 = apuStack_100[0];
                apuStack_100[0] = (undefined8 *)0x0;
                if (puVar8 != (undefined8 *)0x0) {
                  (**(code **)*puVar8)();
                }
              }
              FUN_1004e2e88(plVar13[0x39],param_2);
            }
            else {
              *(byte *)(plVar13 + 0x47) = bVar1 | 0x20;
              FUN_1004e0c00(plVar13,0);
            }
          }
          else {
            FUN_1004e1890();
          }
        }
        else {
          FUN_100612044(plVar13[0x34],"added pending batch while retry timer pending");
        }
        goto LAB_1004e0490;
      }
      if ((bVar1 >> 2 & 1) != 0) {
        lVar5 = 1;
        goto LAB_1004e031c;
      }
      if ((bVar1 >> 1 & 1) != 0) {
        lVar5 = 2;
        goto LAB_1004e031c;
      }
      if ((bVar1 >> 3 & 1) != 0) {
        lVar5 = 3;
        goto LAB_1004e031c;
      }
      if ((bVar1 >> 4 & 1) != 0) {
        lVar5 = 4;
        goto LAB_1004e031c;
      }
      if ((bVar1 >> 5 & 1) != 0) {
        lVar5 = 5;
        goto LAB_1004e031c;
      }
      goto LAB_1004e067c;
    }
    lVar5 = param_2[1];
    uVar9 = *(ulong *)(lVar5 + 0x98);
    if (uVar9 != 0) {
      if ((uVar9 & 1) != 0) {
        piVar10 = (int *)(uVar9 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = *piVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar9 = *(ulong *)(lVar5 + 0x98);
      }
      plVar13[0x36] = uVar9;
      if ((uVar9 & 1) == 0) {
        if (uVar9 == 0) goto LAB_1004e0694;
      }
      else {
        piVar10 = (int *)(uVar9 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = *piVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      piVar10 = (int *)(uVar9 - 1);
      lVar5 = 0;
      apuStack_100[0] = (undefined8 *)0x0;
      do {
        lVar11 = plVar13[lVar5 * 2 + 0x3b];
        if (lVar11 != 0) {
          *(long **)(lVar11 + 0x18) = plVar13;
          *(undefined **)(lVar11 + 0x28) = &UNK_104a8741c;
          *(long *)(lVar11 + 0x30) = lVar11;
          *(undefined8 *)(lVar11 + 0x38) = 0;
          if ((uVar9 & 1) != 0) {
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar3) {
                *piVar10 = *piVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          lStack_108 = lVar11 + 0x20;
          pcStack_110 = "PendingBatchesFail";
          uStack_118 = uVar9;
          FUN_1004dfd88(apuStack_100,&lStack_108,&uStack_118,&pcStack_110);
          if ((uStack_118 & 1) != 0) {
            FUN_10084dad0();
          }
          func_0x0001008e1fcc(plVar13,plVar13 + lVar5 * 2 + 0x3b);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 6);
      FUN_100616b08(apuStack_100,plVar13[0x34]);
      FUN_1004e0194(apuStack_100);
      if ((uVar9 & 1) != 0) {
        FUN_10084dad0(uVar9);
      }
      if (plVar13[0x38] == 0) {
        if ((*(byte *)(plVar13 + 0x47) >> 4 & 1) != 0) {
          *(byte *)(plVar13 + 0x47) = *(byte *)(plVar13 + 0x47) & 0xef;
          FUN_1005a5960(plVar13 + 0x48);
          func_0x000104a87358(plVar13);
        }
        apuStack_100[0] = (undefined8 *)plVar13[0x36];
        if (((ulong)apuStack_100[0] & 1) != 0) {
          piVar10 = (int *)((long)apuStack_100[0] + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar3) {
              *piVar10 = *piVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x000104adfc18(param_2,apuStack_100,plVar13[0x34]);
        if (((ulong)apuStack_100[0] & 1) != 0) {
          FUN_10084dad0();
        }
      }
      else {
        func_0x000104a872a4(plVar13);
        lVar5 = plVar13[0x38];
        if (*(char *)(lVar5 + 0x90) != '\0') {
          *(undefined1 *)(lVar5 + 0x90) = 0;
          FUN_1005a5960(lVar5 + 0x38);
        }
        func_0x000104a8764c(lVar5);
        FUN_1004e2e88(*(undefined8 *)(lVar5 + 0x28),param_2);
      }
      goto LAB_1004e0490;
    }
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      plVar13 = *(long **)(lVar5 + 0x78);
      if (plVar13 != (long *)0x0) {
        if ((*(byte *)(param_2 + 2) >> 6 & 1) != 0) {
          uVar9 = *(ulong *)(param_2[1] + 0x98);
          if ((uVar9 & 1) != 0) {
            piVar10 = (int *)(uVar9 - 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar3) {
                *piVar10 = *piVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          (**(code **)(*plVar13 + 0x48))(plVar13,&stack0xffffffffffffffc8);
          if ((uVar9 & 1) != 0) {
            FUN_10084dad0();
          }
        }
        bVar1 = *(byte *)(param_2 + 2);
        if ((bVar1 & 1) != 0) {
          (**(code **)(**(long **)(lVar5 + 0x78) + 0x10))
                    (*(long **)(lVar5 + 0x78),*(undefined8 *)param_2[1],
                     *(undefined4 *)((undefined8 *)param_2[1] + 1));
          lVar11 = *param_2;
          *(undefined8 *)(lVar5 + 0xf8) = *(undefined8 *)(param_2[1] + 0x10);
          *(undefined **)(lVar5 + 0x108) = &UNK_104a76ec0;
          *(long *)(lVar5 + 0x110) = lVar5;
          *(undefined8 *)(lVar5 + 0x118) = 0;
          *(long *)(lVar5 + 0x120) = lVar11;
          *param_2 = lVar5 + 0x100;
          bVar1 = *(byte *)(param_2 + 2);
        }
        if ((bVar1 >> 2 & 1) != 0) {
          (**(code **)(**(long **)(lVar5 + 0x78) + 0x28))
                    (*(long **)(lVar5 + 0x78),*(undefined8 *)(param_2[1] + 0x28));
          bVar1 = *(byte *)(param_2 + 2);
        }
        if ((bVar1 >> 1 & 1) != 0) {
          (**(code **)(**(long **)(lVar5 + 0x78) + 0x20))
                    (*(long **)(lVar5 + 0x78),*(undefined8 *)(param_2[1] + 0x18));
          bVar1 = *(byte *)(param_2 + 2);
        }
        if ((bVar1 >> 3 & 1) != 0) {
          lVar11 = param_2[1];
          *(undefined8 *)(lVar5 + 0x128) = *(undefined8 *)(lVar11 + 0x38);
          uVar12 = *(undefined8 *)(lVar11 + 0x48);
          *(undefined **)(lVar5 + 0x138) = &UNK_104a76f50;
          *(long *)(lVar5 + 0x140) = lVar5;
          *(undefined8 *)(lVar5 + 0x148) = 0;
          *(undefined8 *)(lVar5 + 0x150) = uVar12;
          *(long *)(param_2[1] + 0x48) = lVar5 + 0x130;
          bVar1 = *(byte *)(param_2 + 2);
        }
        if ((bVar1 >> 4 & 1) != 0) {
          lVar11 = param_2[1];
          *(undefined8 *)(lVar5 + 0x158) = *(undefined8 *)(lVar11 + 0x60);
          uVar12 = *(undefined8 *)(lVar11 + 0x78);
          *(undefined **)(lVar5 + 0x168) = &UNK_104a76fec;
          *(long *)(lVar5 + 0x170) = lVar5;
          *(undefined8 *)(lVar5 + 0x178) = 0;
          *(undefined8 *)(lVar5 + 0x180) = uVar12;
          *(long *)(param_2[1] + 0x78) = lVar5 + 0x160;
        }
      }
      if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
        lVar11 = param_2[1];
        uVar12 = *(undefined8 *)(lVar11 + 0x80);
        *(undefined8 *)(lVar5 + 400) = *(undefined8 *)(lVar11 + 0x88);
        *(undefined8 *)(lVar5 + 0x188) = uVar12;
        uVar12 = *(undefined8 *)(lVar11 + 0x90);
        *(undefined **)(lVar5 + 0x1a0) = &UNK_104a77084;
        *(long *)(lVar5 + 0x1a8) = lVar5;
        *(undefined8 *)(lVar5 + 0x1b0) = 0;
        *(undefined8 *)(lVar5 + 0x1b8) = uVar12;
        *(long *)(param_2[1] + 0x90) = lVar5 + 0x198;
      }
      if (*(long *)(lVar5 + 0xf0) == 0) {
        puVar14 = (ulong *)(lVar5 + 0x88);
        uVar9 = *puVar14;
        if (uVar9 == 0) {
          if ((*(byte *)(param_2 + 2) >> 6 & 1) == 0) {
            FUN_1004e3228(lVar5,param_2);
            if ((*(byte *)(param_2 + 2) & 1) != 0) {
              FUN_1004e3268(lVar5,&stack0xffffffffffffffa8);
              return;
            }
            FUN_100612044(*(undefined8 *)(lVar5 + 0x50),
                          "batch does not include send_initial_metadata");
            return;
          }
          func_0x000104a75cac(puVar14,param_2[1] + 0x98);
          if ((*puVar14 & 1) != 0) {
            piVar10 = (int *)(*puVar14 - 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar3) {
                *piVar10 = *piVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          func_0x000104a76d10(lVar5,&stack0xffffffffffffffb8,&UNK_104a7731c);
          FUN_1004bdf74(&stack0xffffffffffffffb8);
          if ((*puVar14 & 1) != 0) {
            piVar10 = (int *)(*puVar14 - 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar3) {
                *piVar10 = *piVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          func_0x000104adfc18(param_2,&stack0xffffffffffffffb0,*(undefined8 *)(lVar5 + 0x50));
          puVar7 = &stack0xffffffffffffffb0;
        }
        else {
          if ((uVar9 & 1) != 0) {
            piVar10 = (int *)(uVar9 - 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar3) {
                *piVar10 = *piVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          func_0x000104adfc18(param_2,&stack0xffffffffffffffc0,*(undefined8 *)(lVar5 + 0x50));
          puVar7 = &stack0xffffffffffffffc0;
        }
        FUN_1004bdf74(puVar7);
      }
      else {
        FUN_1008dbfdc(*(long *)(lVar5 + 0xf0),param_2);
      }
      return;
    }
LAB_1004e0678:
    func_0x000107c60e78();
LAB_1004e067c:
    func_0x000104a6e964("return (size_t)-1",
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_filter.cc"
                        ,0x988);
  }
LAB_1004e0694:
  func_0x000107c2c1f8();
LAB_1004e0698:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1004e069c);
  (*pcVar4)();
}



/* Entry: 1004e0714; end: 1004e079b;  */

void FUN_1004e0714(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)0x1 < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x25;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x25;
    if ((long *)0x1 < plVar3) {
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
  }
  return;
}



/* Entry: 1004e079c; end: 1004e0a5b;  */

void FUN_1004e079c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint **ppuVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  uint *puStack_28;
  
  uVar7 = *param_1;
  puStack_28 = param_2;
  if ((uVar7 & 1) != 0) {
    FUN_1004e0714(param_2,param_1 + 0x74);
    uVar7 = *param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    func_0x000104a878e4(param_2,param_1 + 0x6c);
  }
  FUN_1004e0a5c(param_1,&puStack_28);
  if (((byte)*param_1 >> 3 & 1) != 0) {
    func_0x000104a8796c(puStack_28,param_1 + 0x69);
  }
  FUN_1004e0ae8(param_1,&puStack_28);
  if (((byte)*param_1 >> 5 & 1) != 0) {
    func_0x000104a87a2c(puStack_28,param_1 + 0x67);
  }
  ppuVar5 = &puStack_28;
  puVar3 = param_1;
  FUN_1004e0b74();
  uVar7 = *param_1;
  puVar4 = puStack_28;
  if ((uVar7 >> 7 & 1) != 0) {
    ppuVar5 = (uint **)(param_1 + 0x65);
    puVar3 = puStack_28;
    func_0x000104a87ab8();
    uVar7 = *param_1;
    puVar4 = puStack_28;
  }
  if ((uVar7 >> 8 & 1) != 0) {
    ppuVar5 = (uint **)(param_1 + 100);
    puStack_28 = puVar4;
    func_0x000104a87b78();
    uVar7 = *param_1;
    puVar3 = puVar4;
    puVar4 = puStack_28;
  }
  if ((uVar7 >> 9 & 1) != 0) {
    ppuVar5 = (uint **)(param_1 + 99);
    puStack_28 = puVar4;
    func_0x000104a87c38();
    uVar7 = *param_1;
    puVar3 = puVar4;
    puVar4 = puStack_28;
  }
  if ((uVar7 >> 10 & 1) != 0) {
    ppuVar5 = (uint **)(param_1 + 0x62);
    puStack_28 = puVar4;
    func_0x000104a87d00();
    uVar7 = *param_1;
    puVar3 = puVar4;
    puVar4 = puStack_28;
  }
  if ((uVar7 >> 0xb & 1) != 0) {
    ppuVar5 = (uint **)(param_1 + 0x60);
    puStack_28 = puVar4;
    func_0x000104a87dc0();
    uVar7 = *param_1;
    puVar3 = puVar4;
    puVar4 = puStack_28;
  }
  if ((uVar7 >> 0xc & 1) != 0) {
    ppuVar5 = (uint **)(param_1 + 0x5e);
    puStack_28 = puVar4;
    func_0x000104a87e80();
    uVar7 = *param_1;
    puVar3 = puVar4;
    puVar4 = puStack_28;
  }
  if ((uVar7 >> 0xd & 1) != 0) {
    ppuVar5 = (uint **)(param_1 + 0x5c);
    puStack_28 = puVar4;
    func_0x000104a87f40();
    uVar7 = *param_1;
    puVar3 = puVar4;
    puVar4 = puStack_28;
  }
  if ((uVar7 >> 0xe & 1) != 0) {
    ppuVar5 = (uint **)(param_1 + 0x54);
    puStack_28 = puVar4;
    func_0x000104a88000();
    uVar7 = *param_1;
    puVar3 = puVar4;
    puVar4 = puStack_28;
  }
  if ((uVar7 >> 0xf & 1) != 0) {
    ppuVar5 = (uint **)(param_1 + 0x4c);
    puStack_28 = puVar4;
    func_0x000104a88088();
    uVar7 = *param_1;
    puVar3 = puVar4;
    puVar4 = puStack_28;
  }
  if ((uVar7 >> 0x10 & 1) != 0) {
    ppuVar5 = (uint **)(param_1 + 0x44);
    puStack_28 = puVar4;
    func_0x000104a88110();
    uVar7 = *param_1;
    puVar3 = puVar4;
    puVar4 = puStack_28;
  }
  if ((uVar7 >> 0x11 & 1) != 0) {
    ppuVar5 = (uint **)(param_1 + 0x3c);
    puStack_28 = puVar4;
    func_0x000104a88198();
    uVar7 = *param_1;
    puVar3 = puVar4;
    puVar4 = puStack_28;
  }
  if ((uVar7 >> 0x12 & 1) != 0) {
    ppuVar5 = (uint **)(param_1 + 0x34);
    puStack_28 = puVar4;
    func_0x000104a88220();
    uVar7 = *param_1;
    puVar3 = puVar4;
    puVar4 = puStack_28;
  }
  if ((uVar7 >> 0x13 & 1) != 0) {
    ppuVar5 = (uint **)(param_1 + 0x2c);
    puStack_28 = puVar4;
    func_0x000104a882a8();
    uVar7 = *param_1;
    puVar3 = puVar4;
    puVar4 = puStack_28;
  }
  puStack_28 = puVar4;
  if ((uVar7 >> 0x14 & 1) != 0) {
    ppuVar5 = (uint **)(param_1 + 0x24);
    func_0x000104a88330();
    uVar7 = *param_1;
    puVar3 = puVar4;
  }
  if ((uVar7 >> 0x15 & 1) == 0) {
    if ((uVar7 >> 0x16 & 1) != 0) {
      func_0x000104a883b8(param_1 + 0x18,puStack_28);
      uVar7 = *param_1;
    }
    if ((uVar7 >> 0x17 & 1) != 0) {
      func_0x000104a884d4(puStack_28,param_1 + 0x10);
    }
    return;
  }
  func_0x000107c60ebc();
  FUN_1004e079c();
  plVar6 = *(long **)(puVar3 + 0x7e);
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    lVar8 = 0;
    uVar7 = *(uint *)ppuVar5;
    do {
      uVar1 = *(uint *)(plVar6 + lVar8 * 8 + 3) & 0xff;
      if (plVar6[lVar8 * 8 + 2] != 0) {
        uVar1 = *(uint *)(plVar6 + lVar8 * 8 + 3);
      }
      uVar2 = *(uint *)(plVar6 + lVar8 * 8 + 7) & 0xff;
      if (plVar6[lVar8 * 8 + 6] != 0) {
        uVar2 = *(uint *)(plVar6 + lVar8 * 8 + 7);
      }
      uVar7 = uVar7 + uVar2 + uVar1 + 0x20;
      *(uint *)ppuVar5 = uVar7;
      lVar8 = lVar8 + 1;
      do {
        if (lVar8 != plVar6[1]) goto LAB_1004e0a48;
        lVar8 = 0;
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
      lVar8 = 0;
LAB_1004e0a48:
    } while ((plVar6 != (long *)0x0) || (lVar8 != 0));
  }
  return;
}



/* Entry: 1004e0a5c; end: 1004e0ae7;  */

void FUN_1004e0a5c(byte *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  int *piVar13;
  ulong *puStack_148;
  long lStack_e8;
  uint uStack_e0;
  long lStack_c8;
  long lStack_98;
  uint uStack_90;
  long lStack_78;
  long lStack_48;
  uint uStack_40;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 >> 2 & 1) != 0) {
    piVar13 = (int *)*param_2;
    param_1 = (byte *)(ulong)*(uint *)(param_1 + 0x1a8);
    func_0x000104adf0a8(&lStack_48);
    uVar1 = uStack_40 & 0xff;
    if (lStack_48 != 0) {
      uVar1 = uStack_40;
    }
    *piVar13 = *piVar13 + uVar1 + 0x27;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 >> 4 & 1) != 0) {
    piVar13 = (int *)*param_2;
    param_1 = (byte *)(ulong)*(uint *)(param_1 + 0x1a0);
    func_0x000104adf034(&lStack_98);
    uVar1 = uStack_90 & 0xff;
    if (lStack_98 != 0) {
      uVar1 = uStack_90;
    }
    *piVar13 = *piVar13 + uVar1 + 0x27;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 >> 6 & 1) != 0) {
    piVar13 = (int *)*param_2;
    param_1 = (byte *)(ulong)param_1[0x198];
    FUN_100619828(&lStack_e8);
    uVar1 = uStack_e0 & 0xff;
    if (lStack_e8 != 0) {
      uVar1 = uStack_e0;
    }
    *piVar13 = *piVar13 + uVar1 + 0x22;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  puVar4 = (undefined8 *)0xbc8;
  func_0x000107c60e20();
  plVar8 = puVar4 + 1;
  *plVar8 = 1;
  *puVar4 = &PTR_DAT_1107c2fb8;
  puVar4[2] = param_1;
  puVar4[3] = &PTR_DAT_1107c3008;
  puVar4[4] = puVar4;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  *(undefined1 *)(puVar4 + 0x12) = 0;
  uVar10 = *(undefined8 *)(param_1 + 0x1a8);
  puVar4[0x13] = 0;
  *(undefined4 *)(puVar4 + 0x14) = 0;
  *(undefined4 *)(puVar4 + 0x19) = 0;
  *(undefined1 *)((long)puVar4 + 0xcc) = 0;
  puVar4[0x15] = 0;
  puVar4[0x17] = 0;
  puVar4[0x16] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x1c] = 0;
  puVar4[0x1f] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x21] = 0;
  puVar4[0x20] = 0;
  puVar4[0x23] = 0;
  puVar4[0x22] = 0;
  puVar4[0x25] = 0;
  puVar4[0x24] = 0;
  puVar4[0x26] = 0;
  puVar4[0x27] = uVar10;
  uVar10 = *(undefined8 *)(param_1 + 400);
  *(undefined4 *)(puVar4 + 0x28) = 0;
  puVar4[0x66] = uVar10;
  *(undefined4 *)(puVar4 + 0x69) = 0;
  puVar4[0x68] = 0;
  puVar4[0x67] = 0;
  puVar4[0xa7] = uVar10;
  *(undefined4 *)(puVar4 + 0xaa) = 0;
  puVar4[0xa9] = 0;
  puVar4[0xa8] = 0;
  puVar4[0xe8] = uVar10;
  puVar4[0xea] = 0;
  puVar4[0xe9] = 0;
  *(undefined1 *)(puVar4 + 0xef) = 0;
  *(undefined1 *)(puVar4 + 0xf4) = 0;
  *(undefined1 *)(puVar4 + 0x119) = 0;
  *(undefined4 *)(puVar4 + 0x11b) = 0;
  puVar4[0x159] = uVar10;
  puVar4[0x15b] = 0;
  puVar4[0x15a] = 0;
  puVar4[0x15d] = 0;
  puVar4[0x15c] = 0;
  puVar4[0x15f] = 0;
  puVar4[0x15e] = 0;
  puVar4[0x161] = 0;
  puVar4[0x160] = 0;
  puVar4[0x16f] = 0;
  puVar4[0x16c] = 0;
  puVar4[0x16b] = 0;
  puVar4[0x16e] = 0;
  puVar4[0x16d] = 0;
  *(undefined2 *)(puVar4 + 0x16a) = 0;
  puVar4[0x169] = 0;
  puVar4[0x168] = 0;
  puVar4[0x167] = 0;
  puVar4[0x166] = 0;
  *(undefined1 *)(puVar4 + 0x178) = 0;
  puVar4[0x177] = 0;
  puVar4[0x176] = 0;
  FUN_1004e0fc4(&puStack_148,param_1,puVar4 + 3,param_2);
  puVar6 = puStack_148;
  puStack_148 = (ulong *)0x0;
  puVar5 = (undefined8 *)puVar4[5];
  puVar4[5] = puVar6;
  puVar6 = (ulong *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)();
    puVar6 = puStack_148;
    puStack_148 = (ulong *)0x0;
    if (puVar6 != (ulong *)0x0) {
      (**(code **)*puVar6)();
    }
  }
  if ((*(long *)(param_1 + 0x18) == 0) || (*(char *)(*(long *)(param_1 + 0x18) + 0x30) == '\0'))
  goto LAB_1004e0e14;
  func_0x000100460dc4();
  uVar7 = *puVar6;
  FUN_1004671a4();
  lVar9 = 0x7fffffffffffffff;
  if ((uVar7 != 0x7fffffffffffffff) &&
     (((lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0x28), lVar11 != 0x7fffffffffffffff &&
       (lVar9 = -0x8000000000000000, uVar7 != 0x8000000000000000)) &&
      (lVar11 != -0x8000000000000000)))) {
    if ((long)uVar7 < 1) {
      if ((long)(-0x8000000000000000 - uVar7) <= lVar11) goto LAB_1004e0dc8;
    }
    else if ((long)(uVar7 ^ 0x7fffffffffffffff) < lVar11) {
      lVar9 = 0x7fffffffffffffff;
    }
    else {
LAB_1004e0dc8:
      lVar9 = lVar11 + uVar7;
    }
  }
  puVar4[0xf] = &UNK_104a88584;
  puVar4[0x10] = puVar4;
  puVar4[0x11] = 0;
  plVar12 = *(long **)(param_1 + 0x198);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = *plVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined1 *)(puVar4 + 0x12) = 1;
  func_0x000100480ee4(puVar4 + 7,lVar9,puVar4 + 0xe);
LAB_1004e0e14:
  plVar8 = *(long **)(param_1 + 0x1c0);
  if (plVar8 != (long *)0x0) {
    plVar12 = plVar8 + 1;
    do {
      lVar9 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  *(undefined8 **)(param_1 + 0x1c0) = puVar4;
  FUN_1004e1890(puVar4);
  return;
}



/* Entry: 1004e0ae8; end: 1004e0b73;  */

void FUN_1004e0ae8(byte *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  int *piVar13;
  ulong *puStack_f8;
  long lStack_98;
  uint uStack_90;
  long lStack_78;
  long lStack_48;
  uint uStack_40;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 >> 4 & 1) != 0) {
    piVar13 = (int *)*param_2;
    param_1 = (byte *)(ulong)*(uint *)(param_1 + 0x1a0);
    func_0x000104adf034(&lStack_48);
    uVar1 = uStack_40 & 0xff;
    if (lStack_48 != 0) {
      uVar1 = uStack_40;
    }
    *piVar13 = *piVar13 + uVar1 + 0x27;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 >> 6 & 1) != 0) {
    piVar13 = (int *)*param_2;
    param_1 = (byte *)(ulong)param_1[0x198];
    FUN_100619828(&lStack_98);
    uVar1 = uStack_90 & 0xff;
    if (lStack_98 != 0) {
      uVar1 = uStack_90;
    }
    *piVar13 = *piVar13 + uVar1 + 0x22;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  puVar4 = (undefined8 *)0xbc8;
  func_0x000107c60e20();
  plVar8 = puVar4 + 1;
  *plVar8 = 1;
  *puVar4 = &PTR_DAT_1107c2fb8;
  puVar4[2] = param_1;
  puVar4[3] = &PTR_DAT_1107c3008;
  puVar4[4] = puVar4;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  *(undefined1 *)(puVar4 + 0x12) = 0;
  uVar10 = *(undefined8 *)(param_1 + 0x1a8);
  puVar4[0x13] = 0;
  *(undefined4 *)(puVar4 + 0x14) = 0;
  *(undefined4 *)(puVar4 + 0x19) = 0;
  *(undefined1 *)((long)puVar4 + 0xcc) = 0;
  puVar4[0x15] = 0;
  puVar4[0x17] = 0;
  puVar4[0x16] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x1c] = 0;
  puVar4[0x1f] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x21] = 0;
  puVar4[0x20] = 0;
  puVar4[0x23] = 0;
  puVar4[0x22] = 0;
  puVar4[0x25] = 0;
  puVar4[0x24] = 0;
  puVar4[0x26] = 0;
  puVar4[0x27] = uVar10;
  uVar10 = *(undefined8 *)(param_1 + 400);
  *(undefined4 *)(puVar4 + 0x28) = 0;
  puVar4[0x66] = uVar10;
  *(undefined4 *)(puVar4 + 0x69) = 0;
  puVar4[0x68] = 0;
  puVar4[0x67] = 0;
  puVar4[0xa7] = uVar10;
  *(undefined4 *)(puVar4 + 0xaa) = 0;
  puVar4[0xa9] = 0;
  puVar4[0xa8] = 0;
  puVar4[0xe8] = uVar10;
  puVar4[0xea] = 0;
  puVar4[0xe9] = 0;
  *(undefined1 *)(puVar4 + 0xef) = 0;
  *(undefined1 *)(puVar4 + 0xf4) = 0;
  *(undefined1 *)(puVar4 + 0x119) = 0;
  *(undefined4 *)(puVar4 + 0x11b) = 0;
  puVar4[0x159] = uVar10;
  puVar4[0x15b] = 0;
  puVar4[0x15a] = 0;
  puVar4[0x15d] = 0;
  puVar4[0x15c] = 0;
  puVar4[0x15f] = 0;
  puVar4[0x15e] = 0;
  puVar4[0x161] = 0;
  puVar4[0x160] = 0;
  puVar4[0x16f] = 0;
  puVar4[0x16c] = 0;
  puVar4[0x16b] = 0;
  puVar4[0x16e] = 0;
  puVar4[0x16d] = 0;
  *(undefined2 *)(puVar4 + 0x16a) = 0;
  puVar4[0x169] = 0;
  puVar4[0x168] = 0;
  puVar4[0x167] = 0;
  puVar4[0x166] = 0;
  *(undefined1 *)(puVar4 + 0x178) = 0;
  puVar4[0x177] = 0;
  puVar4[0x176] = 0;
  FUN_1004e0fc4(&puStack_f8,param_1,puVar4 + 3,param_2);
  puVar6 = puStack_f8;
  puStack_f8 = (ulong *)0x0;
  puVar5 = (undefined8 *)puVar4[5];
  puVar4[5] = puVar6;
  puVar6 = (ulong *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)();
    puVar6 = puStack_f8;
    puStack_f8 = (ulong *)0x0;
    if (puVar6 != (ulong *)0x0) {
      (**(code **)*puVar6)();
    }
  }
  if ((*(long *)(param_1 + 0x18) == 0) || (*(char *)(*(long *)(param_1 + 0x18) + 0x30) == '\0'))
  goto LAB_1004e0e14;
  func_0x000100460dc4();
  uVar7 = *puVar6;
  FUN_1004671a4();
  lVar9 = 0x7fffffffffffffff;
  if ((uVar7 != 0x7fffffffffffffff) &&
     (((lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0x28), lVar11 != 0x7fffffffffffffff &&
       (lVar9 = -0x8000000000000000, uVar7 != 0x8000000000000000)) &&
      (lVar11 != -0x8000000000000000)))) {
    if ((long)uVar7 < 1) {
      if ((long)(-0x8000000000000000 - uVar7) <= lVar11) goto LAB_1004e0dc8;
    }
    else if ((long)(uVar7 ^ 0x7fffffffffffffff) < lVar11) {
      lVar9 = 0x7fffffffffffffff;
    }
    else {
LAB_1004e0dc8:
      lVar9 = lVar11 + uVar7;
    }
  }
  puVar4[0xf] = &UNK_104a88584;
  puVar4[0x10] = puVar4;
  puVar4[0x11] = 0;
  plVar12 = *(long **)(param_1 + 0x198);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = *plVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined1 *)(puVar4 + 0x12) = 1;
  func_0x000100480ee4(puVar4 + 7,lVar9,puVar4 + 0xe);
LAB_1004e0e14:
  plVar8 = *(long **)(param_1 + 0x1c0);
  if (plVar8 != (long *)0x0) {
    plVar12 = plVar8 + 1;
    do {
      lVar9 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  *(undefined8 **)(param_1 + 0x1c0) = puVar4;
  FUN_1004e1890(puVar4);
  return;
}



/* Entry: 1004e0b74; end: 1004e0bff;  */

void FUN_1004e0b74(byte *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  int *piVar13;
  ulong *puStack_a8;
  long lStack_48;
  uint uStack_40;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 >> 6 & 1) != 0) {
    piVar13 = (int *)*param_2;
    param_1 = (byte *)(ulong)param_1[0x198];
    FUN_100619828(&lStack_48);
    uVar1 = uStack_40 & 0xff;
    if (lStack_48 != 0) {
      uVar1 = uStack_40;
    }
    *piVar13 = *piVar13 + uVar1 + 0x22;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  puVar4 = (undefined8 *)0xbc8;
  func_0x000107c60e20();
  plVar8 = puVar4 + 1;
  *plVar8 = 1;
  *puVar4 = &PTR_DAT_1107c2fb8;
  puVar4[2] = param_1;
  puVar4[3] = &PTR_DAT_1107c3008;
  puVar4[4] = puVar4;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  *(undefined1 *)(puVar4 + 0x12) = 0;
  uVar10 = *(undefined8 *)(param_1 + 0x1a8);
  puVar4[0x13] = 0;
  *(undefined4 *)(puVar4 + 0x14) = 0;
  *(undefined4 *)(puVar4 + 0x19) = 0;
  *(undefined1 *)((long)puVar4 + 0xcc) = 0;
  puVar4[0x15] = 0;
  puVar4[0x17] = 0;
  puVar4[0x16] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x1c] = 0;
  puVar4[0x1f] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x21] = 0;
  puVar4[0x20] = 0;
  puVar4[0x23] = 0;
  puVar4[0x22] = 0;
  puVar4[0x25] = 0;
  puVar4[0x24] = 0;
  puVar4[0x26] = 0;
  puVar4[0x27] = uVar10;
  uVar10 = *(undefined8 *)(param_1 + 400);
  *(undefined4 *)(puVar4 + 0x28) = 0;
  puVar4[0x66] = uVar10;
  *(undefined4 *)(puVar4 + 0x69) = 0;
  puVar4[0x68] = 0;
  puVar4[0x67] = 0;
  puVar4[0xa7] = uVar10;
  *(undefined4 *)(puVar4 + 0xaa) = 0;
  puVar4[0xa9] = 0;
  puVar4[0xa8] = 0;
  puVar4[0xe8] = uVar10;
  puVar4[0xea] = 0;
  puVar4[0xe9] = 0;
  *(undefined1 *)(puVar4 + 0xef) = 0;
  *(undefined1 *)(puVar4 + 0xf4) = 0;
  *(undefined1 *)(puVar4 + 0x119) = 0;
  *(undefined4 *)(puVar4 + 0x11b) = 0;
  puVar4[0x159] = uVar10;
  puVar4[0x15b] = 0;
  puVar4[0x15a] = 0;
  puVar4[0x15d] = 0;
  puVar4[0x15c] = 0;
  puVar4[0x15f] = 0;
  puVar4[0x15e] = 0;
  puVar4[0x161] = 0;
  puVar4[0x160] = 0;
  puVar4[0x16f] = 0;
  puVar4[0x16c] = 0;
  puVar4[0x16b] = 0;
  puVar4[0x16e] = 0;
  puVar4[0x16d] = 0;
  *(undefined2 *)(puVar4 + 0x16a) = 0;
  puVar4[0x169] = 0;
  puVar4[0x168] = 0;
  puVar4[0x167] = 0;
  puVar4[0x166] = 0;
  *(undefined1 *)(puVar4 + 0x178) = 0;
  puVar4[0x177] = 0;
  puVar4[0x176] = 0;
  FUN_1004e0fc4(&puStack_a8,param_1,puVar4 + 3,param_2);
  puVar6 = puStack_a8;
  puStack_a8 = (ulong *)0x0;
  puVar5 = (undefined8 *)puVar4[5];
  puVar4[5] = puVar6;
  puVar6 = (ulong *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)();
    puVar6 = puStack_a8;
    puStack_a8 = (ulong *)0x0;
    if (puVar6 != (ulong *)0x0) {
      (**(code **)*puVar6)();
    }
  }
  if ((*(long *)(param_1 + 0x18) == 0) || (*(char *)(*(long *)(param_1 + 0x18) + 0x30) == '\0'))
  goto LAB_1004e0e14;
  func_0x000100460dc4();
  uVar7 = *puVar6;
  FUN_1004671a4();
  lVar9 = 0x7fffffffffffffff;
  if ((uVar7 != 0x7fffffffffffffff) &&
     (((lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0x28), lVar11 != 0x7fffffffffffffff &&
       (lVar9 = -0x8000000000000000, uVar7 != 0x8000000000000000)) &&
      (lVar11 != -0x8000000000000000)))) {
    if ((long)uVar7 < 1) {
      if ((long)(-0x8000000000000000 - uVar7) <= lVar11) goto LAB_1004e0dc8;
    }
    else if ((long)(uVar7 ^ 0x7fffffffffffffff) < lVar11) {
      lVar9 = 0x7fffffffffffffff;
    }
    else {
LAB_1004e0dc8:
      lVar9 = lVar11 + uVar7;
    }
  }
  puVar4[0xf] = &UNK_104a88584;
  puVar4[0x10] = puVar4;
  puVar4[0x11] = 0;
  plVar12 = *(long **)(param_1 + 0x198);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = *plVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined1 *)(puVar4 + 0x12) = 1;
  func_0x000100480ee4(puVar4 + 7,lVar9,puVar4 + 0xe);
LAB_1004e0e14:
  plVar8 = *(long **)(param_1 + 0x1c0);
  if (plVar8 != (long *)0x0) {
    plVar12 = plVar8 + 1;
    do {
      lVar9 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  *(undefined8 **)(param_1 + 0x1c0) = puVar4;
  FUN_1004e1890(puVar4);
  return;
}



/* Entry: 1004e0c00; end: 1004e0fc3;  */

void FUN_1004e0c00(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong *puStack_58;
  
  puVar3 = (undefined8 *)0xbc8;
  func_0x000107c60e20();
  plVar7 = puVar3 + 1;
  *plVar7 = 1;
  *puVar3 = &PTR_DAT_1107c2fb8;
  puVar3[2] = param_1;
  puVar3[3] = &PTR_DAT_1107c3008;
  puVar3[4] = puVar3;
  puVar3[5] = 0;
  *(undefined1 *)(puVar3 + 6) = 0;
  *(undefined1 *)(puVar3 + 0x12) = 0;
  uVar9 = *(undefined8 *)(param_1 + 0x1a8);
  puVar3[0x13] = 0;
  *(undefined4 *)(puVar3 + 0x14) = 0;
  *(undefined4 *)(puVar3 + 0x19) = 0;
  *(undefined1 *)((long)puVar3 + 0xcc) = 0;
  puVar3[0x15] = 0;
  puVar3[0x17] = 0;
  puVar3[0x16] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x21] = 0;
  puVar3[0x20] = 0;
  puVar3[0x23] = 0;
  puVar3[0x22] = 0;
  puVar3[0x25] = 0;
  puVar3[0x24] = 0;
  puVar3[0x26] = 0;
  puVar3[0x27] = uVar9;
  uVar9 = *(undefined8 *)(param_1 + 400);
  *(undefined4 *)(puVar3 + 0x28) = 0;
  puVar3[0x66] = uVar9;
  *(undefined4 *)(puVar3 + 0x69) = 0;
  puVar3[0x68] = 0;
  puVar3[0x67] = 0;
  puVar3[0xa7] = uVar9;
  *(undefined4 *)(puVar3 + 0xaa) = 0;
  puVar3[0xa9] = 0;
  puVar3[0xa8] = 0;
  puVar3[0xe8] = uVar9;
  puVar3[0xea] = 0;
  puVar3[0xe9] = 0;
  *(undefined1 *)(puVar3 + 0xef) = 0;
  *(undefined1 *)(puVar3 + 0xf4) = 0;
  *(undefined1 *)(puVar3 + 0x119) = 0;
  *(undefined4 *)(puVar3 + 0x11b) = 0;
  puVar3[0x159] = uVar9;
  puVar3[0x15b] = 0;
  puVar3[0x15a] = 0;
  puVar3[0x15d] = 0;
  puVar3[0x15c] = 0;
  puVar3[0x15f] = 0;
  puVar3[0x15e] = 0;
  puVar3[0x161] = 0;
  puVar3[0x160] = 0;
  puVar3[0x16f] = 0;
  puVar3[0x16c] = 0;
  puVar3[0x16b] = 0;
  puVar3[0x16e] = 0;
  puVar3[0x16d] = 0;
  *(undefined2 *)(puVar3 + 0x16a) = 0;
  puVar3[0x169] = 0;
  puVar3[0x168] = 0;
  puVar3[0x167] = 0;
  puVar3[0x166] = 0;
  *(undefined1 *)(puVar3 + 0x178) = 0;
  puVar3[0x177] = 0;
  puVar3[0x176] = 0;
  FUN_1004e0fc4(&puStack_58,param_1,puVar3 + 3,param_2);
  puVar5 = puStack_58;
  puStack_58 = (ulong *)0x0;
  puVar4 = (undefined8 *)puVar3[5];
  puVar3[5] = puVar5;
  puVar5 = (ulong *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
    puVar5 = puStack_58;
    puStack_58 = (ulong *)0x0;
    if (puVar5 != (ulong *)0x0) {
      (**(code **)*puVar5)();
    }
  }
  if ((*(long *)(param_1 + 0x18) == 0) || (*(char *)(*(long *)(param_1 + 0x18) + 0x30) == '\0'))
  goto LAB_1004e0e14;
  func_0x000100460dc4();
  uVar6 = *puVar5;
  FUN_1004671a4();
  lVar8 = 0x7fffffffffffffff;
  if ((uVar6 != 0x7fffffffffffffff) &&
     (((lVar10 = *(long *)(*(long *)(param_1 + 0x18) + 0x28), lVar10 != 0x7fffffffffffffff &&
       (lVar8 = -0x8000000000000000, uVar6 != 0x8000000000000000)) &&
      (lVar10 != -0x8000000000000000)))) {
    if ((long)uVar6 < 1) {
      if ((long)(-0x8000000000000000 - uVar6) <= lVar10) goto LAB_1004e0dc8;
    }
    else if ((long)(uVar6 ^ 0x7fffffffffffffff) < lVar10) {
      lVar8 = 0x7fffffffffffffff;
    }
    else {
LAB_1004e0dc8:
      lVar8 = lVar10 + uVar6;
    }
  }
  puVar3[0xf] = &UNK_104a88584;
  puVar3[0x10] = puVar3;
  puVar3[0x11] = 0;
  plVar11 = *(long **)(param_1 + 0x198);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = *plVar11 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(undefined1 *)(puVar3 + 0x12) = 1;
  func_0x000100480ee4(puVar3 + 7,lVar8,puVar3 + 0xe);
LAB_1004e0e14:
  plVar7 = *(long **)(param_1 + 0x1c0);
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 1;
    do {
      lVar8 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  *(undefined8 **)(param_1 + 0x1c0) = puVar3;
  FUN_1004e1890(puVar3);
  return;
}



/* Entry: 1004e0fc4; end: 1004e1133;  */

void FUN_1004e0fc4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_80 = param_2[0x33];
  uStack_48 = param_2[0x34];
  uStack_78 = 0;
  uStack_70 = param_2[0x35];
  puStack_68 = param_2 + 0x2d;
  uStack_60 = 0;
  uStack_50 = param_2[0x32];
  uStack_58 = param_2[0x31];
  uVar3 = param_2[1];
  uVar8 = *(undefined8 *)*param_2;
  uVar9 = param_2[0x37];
  plVar1 = (long *)(uVar9 + 8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  puVar6 = (ulong *)param_2[0x32];
  do {
    uVar7 = *puVar6;
    uVar2 = uVar7 + 0x20;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar5) {
      *puVar6 = uVar2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (puVar6[2] < uVar2) {
    FUN_1004bbee0(puVar6,0x20);
  }
  else {
    puVar6 = (ulong *)((long)puVar6 + uVar7 + 0x30);
  }
  *puVar6 = 0;
  puVar6[1] = (ulong)&UNK_104a8855c;
  puVar6[2] = uVar9;
  puVar6[3] = 0;
  FUN_1004e1134(param_1,uVar8,&uStack_80,uVar3,puVar6,param_3,param_4);
  return;
}



/* Entry: 1004e1134; end: 1004e1193;  */

void FUN_1004e1134(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  uStack_48 = param_2;
  uStack_39 = param_7;
  uStack_38 = param_6;
  uStack_30 = param_5;
  uStack_28 = param_4;
  func_0x0001004e10ac(uVar1,&uStack_48,param_3,&uStack_28,&uStack_30,&uStack_38,&uStack_39);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004e1194; end: 1004e1283;  */

undefined8 *
FUN_1004e1194(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = &PTR_DAT_1107c10b8;
  param_1[1] = 1;
  param_1[2] = param_2;
  puVar3 = (undefined8 *)param_3[3];
  plVar5 = (long *)*puVar3;
  if ((long *)0x1 < plVar5) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar7 = *puVar3;
  uVar8 = puVar3[3];
  uVar6 = puVar3[2];
  param_1[4] = puVar3[1];
  param_1[3] = uVar7;
  param_1[6] = uVar8;
  param_1[5] = uVar6;
  uVar6 = param_3[6];
  param_1[7] = param_3[5];
  param_1[8] = uVar6;
  uVar6 = param_3[7];
  param_1[9] = *param_3;
  param_1[10] = uVar6;
  lVar4 = param_3[2];
  param_1[0xb] = lVar4;
  param_1[0xc] = param_4;
  param_1[0xd] = param_5;
  param_1[0xe] = param_6;
  plVar5 = *(long **)(lVar4 + 0x20);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,param_7);
  }
  param_1[0xf] = plVar5;
  func_0x000100467750();
  param_1[0x10] = uVar7;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = 0;
  param_1[0x3d] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  return param_1;
}



/* Entry: 1004e1284; end: 1004e188f;  */

void FUN_1004e1284(ulong param_1,long *param_2,char *param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  byte bVar20;
  byte bVar21;
  long lVar22;
  long lVar23;
  undefined8 auStack_350 [19];
  long lStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  long lStack_290;
  ulong uStack_288;
  char *pcStack_280;
  long lStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + 0x10);
  if (((*(char *)(lVar13 + 0x298) == '\0') || ((*(ushort *)(param_1 + 0xb50) & 1) != 0)) ||
     ((*(byte *)(lVar13 + 0x238) & 1) != 0)) {
    uVar18 = 0;
    uVar7 = param_1;
    plVar10 = param_2;
  }
  else {
    plVar10 = (long *)0x1;
    param_3 = (char *)0x1;
    uVar18 = param_1;
    FUN_1004e1918();
    uVar7 = uVar18;
    FUN_1004e2d10();
    lVar13 = *(long *)(param_1 + 0x10);
  }
  if (((*(ulong *)(param_1 + 0xb30) < *(ulong *)(lVar13 + 0x4b8) >> 1) &&
      (*(ulong *)(param_1 + 0xb30) == *(ulong *)(param_1 + 0xb38))) &&
     ((*(byte *)(lVar13 + 0x238) >> 1 & 1) == 0)) {
    if (uVar18 == 0) {
      plVar10 = (long *)0x1;
      param_3 = (char *)0x1;
      uVar18 = param_1;
      FUN_1004e1918();
    }
    uVar7 = uVar18;
    func_0x000104a8a3f0();
    lVar13 = *(long *)(param_1 + 0x10);
  }
  if (((*(char *)(lVar13 + 0x4f0) != '\0') &&
      (*(ulong *)(param_1 + 0xb30) == *(ulong *)(lVar13 + 0x4b8) >> 1)) &&
     (((*(ushort *)(param_1 + 0xb50) >> 2 & 1) == 0 && ((*(byte *)(lVar13 + 0x238) >> 2 & 1) == 0)))
     ) {
    if (uVar18 == 0) {
      plVar10 = (long *)0x1;
      param_3 = (char *)0x1;
      uVar18 = param_1;
      FUN_1004e1918();
    }
    uVar7 = uVar18;
    func_0x000104a8a43c();
  }
  if (uVar18 != 0) {
    plVar10 = (long *)(uVar18 + 0x18);
    param_3 = "start replay batch on call attempt";
    uVar7 = param_1;
    FUN_1004e2dfc();
  }
  lVar13 = 0;
  lStack_290 = param_1 + 0xb10;
  do {
    lVar23 = *(long *)(param_1 + 0x10);
    lVar22 = lVar23 + lVar13 * 0x10;
    lVar19 = *(long *)(lVar22 + 0x1d8);
    if ((lVar19 != 0) &&
       ((bVar1 = *(byte *)(lVar19 + 0x10), (bVar1 & 1) == 0 ||
        ((*(ushort *)(param_1 + 0xb50) & 1) == 0)))) {
      if ((bVar1 >> 2 & 1) == 0) {
        bVar20 = bVar1 & 1;
joined_r0x0001004e1448:
        if ((bVar1 >> 1 & 1) != 0) {
          if ((*(long *)(param_1 + 0xb30) + ((ulong)(bVar1 >> 2) & 1) <
               *(ulong *)(lVar23 + 0x4b8) >> 1) || ((*(ushort *)(param_1 + 0xb50) >> 2 & 1) != 0))
          goto LAB_1004e1764;
          bVar20 = 1;
        }
        bVar21 = bVar20;
        if ((bVar1 >> 3 & 1) != 0) {
          if ((*(ushort *)(param_1 + 0xb50) >> 4 & 1) != 0) goto LAB_1004e1764;
          bVar21 = 1;
          if (bVar20 != 0) {
            bVar21 = 2;
          }
        }
        if ((bVar1 >> 4 & 1) != 0) {
          if ((*(ulong *)(param_1 + 0xb48) < *(ulong *)(param_1 + 0xb40)) ||
             (*(long *)(param_1 + 0xb68) != 0)) goto LAB_1004e1764;
          bVar21 = bVar21 + 1;
        }
        lVar14 = lVar23;
        if ((bVar1 >> 5 & 1) != 0) {
          if ((*(ushort *)(param_1 + 0xb50) >> 6 & 1) == 0) {
            bVar21 = bVar21 + 1;
          }
          else {
            *(byte *)(param_1 + 0xbc0) = *(byte *)(param_1 + 0xbc0) | 1;
            puVar6 = *(undefined8 **)(param_1 + 0xbb0);
            uVar7 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              if ((*(ushort *)(param_1 + 0xb50) >> 7 & 1) == 0) {
                plVar4 = puVar6 + 1;
                do {
                  lVar14 = *plVar4;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar3) {
                    *plVar4 = lVar14 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar14 + -1 == 0) {
                  (**(code **)*puVar6)();
                }
              }
              else {
                uStack_288 = *(ulong *)(param_1 + 3000);
                if ((uStack_288 & 1) != 0) {
                  piVar16 = (int *)(uStack_288 - 1);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                    if (bVar3) {
                      *piVar16 = *piVar16 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                pcStack_280 = 
                "re-executing recv_trailing_metadata_ready to propagate internally triggered result"
                ;
                lStack_278 = lStack_290;
                plVar10 = &lStack_278;
                param_3 = (char *)&uStack_288;
                FUN_1004dfd88(param_2,plVar10,param_3,&pcStack_280);
                if ((uStack_288 & 1) != 0) {
                  FUN_10084dad0();
                }
              }
              *(undefined8 *)(param_1 + 0xbb0) = 0;
              uVar7 = *(ulong *)(param_1 + 3000);
              if ((uVar7 != 0) && (*(undefined8 *)(param_1 + 3000) = 0, (uVar7 & 1) != 0)) {
                FUN_10084dad0();
              }
            }
            if (bVar21 == 0) goto LAB_1004e1764;
            lVar14 = *(long *)(param_1 + 0x10);
          }
        }
        plVar10 = (long *)(lVar22 + 0x1d8);
        if ((((*(byte *)(lVar14 + 0x238) >> 3 & 1) == 0) ||
            (*(char *)(lVar23 + lVar13 * 0x10 + 0x1e0) != '\0')) ||
           (((*(byte *)(lVar19 + 0x10) >> 5 & 1) != 0 &&
            ((*(ushort *)(param_1 + 0xb50) >> 6 & 1) != 0)))) {
          uVar7 = param_1;
          FUN_1004e1918(param_1,bVar21,bVar20);
          lVar23 = lVar23 + lVar13 * 0x10;
          if (*(char *)(lVar23 + 0x1e0) == '\0') {
            lVar22 = *(long *)(param_1 + 0x10);
            *(undefined1 *)(lVar23 + 0x1e0) = 1;
            lVar23 = *plVar10;
            bVar1 = *(byte *)(lVar23 + 0x10);
            if ((bVar1 & 1) != 0) {
              *(undefined1 *)(lVar22 + 0x298) = 1;
              FUN_1004e1dd4(&lStack_278,**(undefined8 **)(lVar23 + 8));
              FUN_1004e23e0(lVar22 + 0x2a0,&lStack_278);
              FUN_1004e2bc8(&lStack_278);
              lVar14 = *(long *)(lVar23 + 8);
              *(undefined4 *)(lVar22 + 0x4a8) = *(undefined4 *)(lVar14 + 8);
              *(undefined8 *)(lVar22 + 0x4b0) = *(undefined8 *)(lVar14 + 0x10);
              bVar1 = *(byte *)(lVar23 + 0x10);
            }
            if ((bVar1 >> 2 & 1) != 0) {
              lVar14 = *(long *)(lVar22 + 400);
              lVar15 = *(long *)(lVar23 + 8);
              uVar11 = *(undefined8 *)(lVar15 + 0x28);
              *(undefined8 *)(lVar15 + 0x28) = 0;
              func_0x000104a8ae64(lVar14,uVar11);
              uStack_270 = *(undefined4 *)(*(long *)(lVar23 + 8) + 0x30);
              if ((*(ulong *)(lVar22 + 0x4b8) & 1) == 0) {
                lVar15 = lVar22 + 0x4c0;
                uVar18 = 3;
              }
              else {
                lVar15 = *(long *)(lVar22 + 0x4c0);
                uVar18 = *(ulong *)(lVar22 + 0x4c8);
              }
              plVar10 = (long *)(lVar22 + 0x4b8);
              uVar17 = *(ulong *)(lVar22 + 0x4b8) >> 1;
              lStack_278 = lVar14;
              if (uVar17 == uVar18) {
                func_0x000104a8aeb4(plVar10,&lStack_278);
              }
              else {
                plVar4 = (long *)(lVar15 + uVar17 * 0x10);
                plVar4[1] = CONCAT44(uStack_26c,uStack_270);
                *plVar4 = lVar14;
                *plVar10 = *plVar10 + 2;
              }
              bVar1 = *(byte *)(lVar23 + 0x10);
            }
            if ((bVar1 >> 1 & 1) != 0) {
              *(undefined1 *)(lVar22 + 0x4f0) = 1;
              FUN_1004e1dd4(&lStack_278,*(undefined8 *)(*(long *)(lVar23 + 8) + 0x18));
              FUN_1004e23e0(lVar22 + 0x4f8,&lStack_278);
              FUN_1004e2bc8(&lStack_278);
            }
          }
          bVar1 = *(byte *)(lVar19 + 0x10);
          if ((bVar1 & 1) != 0) {
            FUN_1004e2d10(uVar7);
            bVar1 = *(byte *)(lVar19 + 0x10);
          }
          if ((bVar1 >> 2 & 1) != 0) {
            func_0x000104a8a3f0(uVar7);
            bVar1 = *(byte *)(lVar19 + 0x10);
          }
          if ((bVar1 >> 1 & 1) != 0) {
            func_0x000104a8a43c(uVar7);
            bVar1 = *(byte *)(lVar19 + 0x10);
          }
          if ((bVar1 >> 3 & 1) != 0) {
            if (*(long *)(*(long *)(lVar19 + 8) + 0x40) != 0) {
              func_0x000107c2c204();
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1004e1858);
              (*pcVar5)();
            }
            plVar10 = (long *)(uVar7 + 0x10);
            *(ushort *)(*plVar10 + 0xb50) = *(ushort *)(*plVar10 + 0xb50) | 0x10;
            *(byte *)(uVar7 + 0x28) = *(byte *)(uVar7 + 0x28) | 8;
            lVar22 = *plVar10;
            FUN_10083228c(lVar22 + 0x550);
            FUN_1004e2b40(lVar22 + 0x740);
            lVar22 = *plVar10;
            lVar23 = *(long *)(uVar7 + 0x20);
            *(long *)(lVar23 + 0x38) = lVar22 + 0x550;
            *(long *)(lVar23 + 0x50) = lVar22 + 0x778;
            *(undefined **)(lVar22 + 0x760) = &UNK_104a8af6c;
            *(ulong *)(lVar22 + 0x768) = uVar7;
            *(undefined8 *)(lVar22 + 0x770) = 0;
            *(long *)(*(long *)(uVar7 + 0x20) + 0x48) = *plVar10 + 0x758;
            bVar1 = *(byte *)(lVar19 + 0x10);
          }
          if ((bVar1 >> 4 & 1) != 0) {
            lVar22 = *(long *)(uVar7 + 0x10);
            *(long *)(lVar22 + 0xb40) = *(long *)(lVar22 + 0xb40) + 1;
            *(byte *)(uVar7 + 0x28) = *(byte *)(uVar7 + 0x28) | 0x10;
            lVar23 = *(long *)(uVar7 + 0x20);
            *(long *)(lVar23 + 0x60) = lVar22 + 0x7a0;
            *(long *)(lVar23 + 0x68) = lVar22 + 0x8d0;
            *(undefined8 *)(lVar23 + 0x70) = 0;
            *(undefined **)(lVar22 + 0x788) = &UNK_104a8b1f4;
            *(ulong *)(lVar22 + 0x790) = uVar7;
            *(undefined8 *)(lVar22 + 0x798) = 0;
            *(long *)(*(long *)(uVar7 + 0x20) + 0x78) = *(long *)(uVar7 + 0x10) + 0x780;
            bVar1 = *(byte *)(lVar19 + 0x10);
          }
          if (((bVar1 >> 5 & 1) != 0) && ((*(ushort *)(param_1 + 0xb50) >> 6 & 1) == 0)) {
            func_0x000104a88f34(uVar7);
          }
          plVar10 = (long *)(uVar7 + 0x18);
          uVar7 = param_1;
          param_3 = "start replayable pending batch on call attempt";
          FUN_1004e2dfc();
        }
        else {
          param_3 = "start non-replayable pending batch on call attempt after commit";
          FUN_1004e2dfc(param_1,lVar19,
                        "start non-replayable pending batch on call attempt after commit",param_2);
          uVar7 = *(ulong *)(param_1 + 0x10);
          func_0x0001008e1fcc();
        }
      }
      else if (*(ulong *)(param_1 + 0xb30) <= *(ulong *)(param_1 + 0xb38)) {
        uVar18 = *(ulong *)(lVar23 + 0x4b8) >> 1;
        if (*(char *)(lVar23 + lVar13 * 0x10 + 0x1e0) == '\0') {
          uVar18 = uVar18 + 1;
        }
        if (*(ulong *)(param_1 + 0xb38) != uVar18) {
          bVar20 = 1;
          goto joined_r0x0001004e1448;
        }
      }
    }
LAB_1004e1764:
    iVar12 = (int)param_3;
    iVar9 = (int)plVar10;
    lVar13 = lVar13 + 1;
    if (lVar13 == 6) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      func_0x000107c60e78();
      if ((iVar9 != 0) && (func_0x000104bd46a0(), (uStack_288 & 1) != 0)) {
        FUN_10084dad0();
      }
      uVar18 = uVar7;
      func_0x000107c60bd8();
      puVar6 = auStack_350;
      pcStack_298 = FUN_1004e1890;
      lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      auStack_350[0] = 0;
      uStack_2b0 = param_1;
      uStack_2a8 = uVar7;
      puStack_2a0 = &stack0xfffffffffffffff0;
      FUN_1004e1284();
      iVar9 = (int)*(undefined8 *)(*(long *)(uVar18 + 0x10) + 0x1a0);
      FUN_1004dffa0(auStack_350);
      FUN_1004e0194();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
        return;
      }
      func_0x000107c60e78();
      FUN_1004e0194(auStack_350);
      func_0x000107c60bd8();
      puVar8 = *(ulong **)(*(long *)((long)puVar6 + 0x10) + 400);
      plVar10 = (long *)((long)puVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        uVar18 = *puVar8;
        uVar7 = uVar18 + 0x80;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar3) {
          *puVar8 = uVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar8[2] < uVar7) {
        FUN_1004bbee0(puVar8,0x80);
      }
      else {
        puVar8 = (ulong *)((long)puVar8 + uVar18 + 0x30);
      }
      *puVar8 = (ulong)&PTR_FUN_1107c3050;
      puVar8[1] = (long)iVar9;
      puVar8[7] = 0;
      puVar8[6] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      puVar8[10] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[2] = (ulong)puVar6;
      *(undefined1 *)(puVar8 + 5) = 0;
      plVar10 = *(long **)(*(long *)((long)puVar6 + 0x10) + 0x198);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar8[4] = puVar8[2] + 0x98;
      if (iVar12 != 0) {
        puVar8[0xc] = (ulong)FUN_1008e1b8c;
        puVar8[0xd] = (ulong)puVar8;
        puVar8[0xe] = 0;
        puVar8[3] = (ulong)(puVar8 + 0xb);
      }
      return;
    }
  } while( true );
}



/* Entry: 1004e1890; end: 1004e1917;  */

void FUN_1004e1890(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 auStack_c0 [19];
  long lStack_28;
  
  puVar4 = auStack_c0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_c0[0] = 0;
  FUN_1004e1284(param_1,auStack_c0);
  iVar6 = (int)*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1a0);
  FUN_1004dffa0(auStack_c0);
  FUN_1004e0194();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  FUN_1004e0194(auStack_c0);
  func_0x000107c60bd8();
  puVar5 = *(ulong **)(*(long *)((long)puVar4 + 0x10) + 400);
  plVar8 = (long *)((long)puVar4 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    uVar7 = *puVar5;
    uVar1 = uVar7 + 0x80;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar3) {
      *puVar5 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar5[2] < uVar1) {
    FUN_1004bbee0(puVar5,0x80);
  }
  else {
    puVar5 = (ulong *)((long)puVar5 + uVar7 + 0x30);
  }
  *puVar5 = (ulong)&PTR_FUN_1107c3050;
  puVar5[1] = (long)iVar6;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[10] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[2] = (ulong)puVar4;
  *(undefined1 *)(puVar5 + 5) = 0;
  plVar8 = *(long **)(*(long *)((long)puVar4 + 0x10) + 0x198);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar5[4] = puVar5[2] + 0x98;
  if (param_3 != 0) {
    puVar5[0xc] = (ulong)FUN_1008e1b8c;
    puVar5[0xd] = (ulong)puVar5;
    puVar5[0xe] = 0;
    puVar5[3] = (ulong)(puVar5 + 0xb);
  }
  return;
}



/* Entry: 1004e1918; end: 1004e1a2b;  */

void FUN_1004e1918(ulong param_1,int param_2,int param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  long *plVar6;
  
  puVar4 = *(ulong **)(*(long *)(param_1 + 0x10) + 400);
  plVar6 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    uVar5 = *puVar4;
    uVar1 = uVar5 + 0x80;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *puVar4 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4[2] < uVar1) {
    FUN_1004bbee0(puVar4,0x80);
  }
  else {
    puVar4 = (ulong *)((long)puVar4 + uVar5 + 0x30);
  }
  *puVar4 = (ulong)&PTR_FUN_1107c3050;
  puVar4[1] = (long)param_2;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[10] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[2] = param_1;
  *(undefined1 *)(puVar4 + 5) = 0;
  plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 0x198);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar4[4] = puVar4[2] + 0x98;
  if (param_3 != 0) {
    puVar4[0xc] = (ulong)FUN_1008e1b8c;
    puVar4[0xd] = (ulong)puVar4;
    puVar4[0xe] = 0;
    puVar4[3] = (ulong)(puVar4 + 0xb);
  }
  return;
}



/* Entry: 1004e1a2c; end: 1004e1d2b;  */

ulong * FUN_1004e1a2c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  ulong **ppuVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  ulong *apuStack_48 [4];
  long lStack_28;
  
  uVar1 = (uint)*param_1;
  puVar5 = param_1;
  if ((uVar1 & 1) != 0) {
    puVar5 = param_2;
    FUN_1004e1ec8(param_2,param_1 + 0x3a);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    puVar5 = param_2;
    func_0x000104a8a4e4(param_2,param_1 + 0x36);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    uVar9 = param_1[0x35];
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 4;
    puVar8[0x6a] = (uint)uVar9;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    uVar1 = *(uint *)((long)param_1 + 0x1a4);
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 8;
    puVar8[0x69] = uVar1;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    uVar9 = param_1[0x34];
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x10;
    puVar8[0x68] = (uint)uVar9;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    uVar1 = *(uint *)((long)param_1 + 0x19c);
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x20;
    puVar8[0x67] = uVar1;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    uVar9 = param_1[0x33];
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x40;
    *(char *)(puVar8 + 0x66) = (char)uVar9;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 7 & 1) != 0) {
    uVar1 = *(uint *)((long)param_1 + 0x194);
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x80;
    puVar8[0x65] = uVar1;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 8 & 1) != 0) {
    uVar9 = param_1[0x32];
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x100;
    puVar8[100] = (uint)uVar9;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 9 & 1) != 0) {
    uVar2 = *(undefined1 *)((long)param_1 + 0x18c);
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x200;
    *(undefined1 *)(puVar8 + 99) = uVar2;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 10 & 1) != 0) {
    uVar9 = param_1[0x31];
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x400;
    puVar8[0x62] = (uint)uVar9;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    uVar9 = param_1[0x30];
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x800;
    *(ulong *)(puVar8 + 0x60) = uVar9;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    uVar9 = param_1[0x2f];
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x1000;
    puVar8[0x5e] = (uint)uVar9;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    uVar9 = param_1[0x2e];
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x2000;
    *(ulong *)(puVar8 + 0x5c) = uVar9;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    puVar5 = param_2;
    func_0x000104a8a5a0(param_2,param_1 + 0x2a);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    puVar5 = param_2;
    func_0x000104a8a65c(param_2,param_1 + 0x26);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0x10 & 1) != 0) {
    puVar5 = param_2;
    func_0x000104a8a718(param_2,param_1 + 0x22);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    puVar5 = param_2;
    func_0x000104a8a7d4(param_2,param_1 + 0x1e);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0x12 & 1) != 0) {
    puVar5 = param_2;
    func_0x000104a8a890(param_2,param_1 + 0x1a);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0x13 & 1) != 0) {
    puVar5 = param_2;
    func_0x000104a8a94c(param_2,param_1 + 0x16);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0x14 & 1) != 0) {
    puVar5 = param_2;
    func_0x000104a8aa08(param_2,param_1 + 0x12);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0x15 & 1) != 0) {
    uVar9 = param_1[0x11];
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x200000;
    *(ulong *)(puVar8 + 0x22) = uVar9;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0x16 & 1) != 0) {
    puVar5 = param_1 + 0xc;
    func_0x000104a8aac4(puVar5,param_2);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0x17 & 1) == 0) {
    return puVar5;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *param_2;
  FUN_1004e1e28(apuStack_48,param_1 + 8);
  ppuVar6 = apuStack_48;
  func_0x000104a79af8(uVar9);
  puVar5 = apuStack_48[0];
  if ((ulong *)0x1 < apuStack_48[0]) {
    do {
      uVar9 = *apuStack_48[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar4) {
        *apuStack_48[0] = uVar9 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar9 - 1 == 0) {
      (*(code *)apuStack_48[0][1])();
      puVar5 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if ((int)ppuVar6 != 0) {
      func_0x000104bd46a0();
      FUN_1004b6d90(apuStack_48);
    }
    __Unwind_Resume();
    do {
      uVar7 = *puVar5;
      uVar9 = uVar7 + 0x130;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar4) {
        *puVar5 = uVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar5[2] < uVar9) {
      FUN_1004bbee0();
    }
    else {
      puVar5 = (ulong *)((long)puVar5 + uVar7 + 0x30);
    }
    func_0x0001004b800c();
    FUN_1006148f8(puVar5,ppuVar6);
    return puVar5;
  }
  return puVar5;
}



/* Entry: 1004e1d2c; end: 1004e1dd3;  */

void FUN_1004e1d2c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  FUN_1004e1a2c();
  plVar1 = *(long **)(param_1 + 0x1f8);
  if ((plVar1 != (long *)0x0) && (plVar1[1] == 0)) {
    plVar1 = (long *)0x0;
  }
  lVar2 = 0;
LAB_1004e1d64:
  do {
    while (plVar1 == (long *)0x0) {
      if (lVar2 == 0) {
        return;
      }
      FUN_1004e1f84(param_2,lVar2 << 6 | 0x10,lVar2 << 6 | 0x30);
      lVar2 = lVar2 + 1;
      plVar1 = (long *)0x0;
    }
    FUN_1004e1f84(param_2,plVar1 + lVar2 * 8 + 2,plVar1 + lVar2 * 8 + 6);
    lVar2 = lVar2 + 1;
    do {
      if (lVar2 != plVar1[1]) goto LAB_1004e1d64;
      lVar2 = 0;
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
    lVar2 = 0;
  } while( true );
}



/* Entry: 1004e1dd4; end: 1004e1e27;  */

void FUN_1004e1dd4(undefined4 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 *puStack_28;
  
  uVar1 = *(undefined8 *)(param_2 + 0x1f0);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x7e) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x7c) = uVar1;
  puStack_28 = param_1;
  FUN_1004e1d2c(param_2,&puStack_28);
  return;
}



/* Entry: 1004e1e28; end: 1004e1ec7;  */

uint * FUN_1004e1e28(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  uint *puVar5;
  uint **ppuVar6;
  uint *puVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  uint *apuStack_b8 [4];
  long lStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = (uint *)&uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = *(long **)param_2;
  if (plVar9 == (long *)0x1) {
    uStack_68 = *(undefined8 *)(param_2 + 2);
    uStack_70 = *(undefined8 *)param_2;
    uStack_58 = *(undefined8 *)(param_2 + 6);
    uStack_60 = *(undefined8 *)(param_2 + 4);
    FUN_1004bcbf4(&uStack_48);
  }
  else {
    if ((plVar9 != (long *)0x0) && ((long *)0x1 < plVar9)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_40 = *(undefined8 *)(param_2 + 2);
    uStack_48 = *(undefined8 *)param_2;
    uStack_30 = *(undefined8 *)(param_2 + 6);
    uStack_38 = *(undefined8 *)(param_2 + 4);
    puVar5 = param_2;
  }
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[3] = uStack_30;
  param_1[2] = uStack_38;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  func_0x000107c60e78();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)puVar5;
  FUN_1004e1e28(apuStack_b8,param_3);
  ppuVar6 = apuStack_b8;
  FUN_1004b8034(uVar11);
  puVar5 = apuStack_b8[0];
  if ((uint *)0x1 < apuStack_b8[0]) {
    do {
      lVar10 = *(long *)apuStack_b8[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(apuStack_b8[0],0x10);
      if (bVar4) {
        *(long *)apuStack_b8[0] = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(apuStack_b8[0] + 2))();
      puVar5 = apuStack_b8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return puVar5;
  }
  func_0x000107c60e78();
  if ((int)ppuVar6 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(apuStack_b8);
  }
  func_0x000107c60bd8();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)puVar5;
  puVar5 = (uint *)((ulong)ppuVar6[1] & 0xff);
  puVar7 = (uint *)((long)ppuVar6 + 9);
  if (*ppuVar6 != (uint *)0x0) {
    puVar5 = ppuVar6[1];
    puVar7 = ppuVar6[2];
  }
  plVar9 = (long *)*param_4;
  if ((long *)0x1 < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_108 = param_4[1];
  puStack_110 = (uint *)*param_4;
  uStack_f8 = param_4[3];
  uStack_100 = param_4[2];
  FUN_1004bd340(lVar10 + 0x1f0,puVar7,puVar5,&puStack_110);
  puVar5 = puStack_110;
  if ((uint *)0x1 < puStack_110) {
    do {
      lVar10 = *(long *)puStack_110;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puStack_110,0x10);
      if (bVar4) {
        *(long *)puStack_110 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(puStack_110 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return puVar5;
  }
  func_0x000107c60e78();
  if ((int)puVar7 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&puStack_110);
  }
  func_0x000107c60bd8();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*puVar7 & 1) == 0) {
    uVar8 = *puVar5;
    *puVar5 = uVar8 & 0xfffffffe;
    if ((uVar8 & 1) != 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        plVar9 = *(long **)(puVar5 + 0x74);
        if ((long *)0x1 < plVar9) {
          do {
            lVar10 = *plVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 + -1 == 0) {
            (*(code *)plVar9[1])();
          }
        }
        return puVar5 + 0x74;
      }
      goto LAB_1004e212c;
    }
  }
  else {
    puVar1 = puVar7 + 0x74;
    puVar2 = puVar5 + 0x74;
    uVar8 = *puVar5;
    *puVar5 = uVar8 | 1;
    if ((uVar8 & 1) == 0) {
      uVar14 = *(undefined8 *)(puVar7 + 0x76);
      uVar13 = *(undefined8 *)puVar1;
      uVar12 = *(undefined8 *)(puVar7 + 0x7a);
      uVar11 = *(undefined8 *)(puVar7 + 0x78);
      puVar7[0x76] = 0;
      puVar7[0x77] = 0;
      puVar1[0] = 0;
      puVar1[1] = 0;
      puVar7[0x7a] = 0;
      puVar7[0x7b] = 0;
      puVar7[0x78] = 0;
      puVar7[0x79] = 0;
      *(undefined8 *)(puVar5 + 0x76) = uVar14;
      *(undefined8 *)puVar2 = uVar13;
      *(undefined8 *)(puVar5 + 0x7a) = uVar12;
      *(undefined8 *)(puVar5 + 0x78) = uVar11;
    }
    else {
      uVar14 = *(undefined8 *)(puVar5 + 0x76);
      uVar13 = *(undefined8 *)puVar2;
      uVar12 = *(undefined8 *)(puVar5 + 0x7a);
      uVar11 = *(undefined8 *)(puVar5 + 0x78);
      uVar17 = *(undefined8 *)puVar1;
      uVar16 = *(undefined8 *)(puVar7 + 0x7a);
      uVar15 = *(undefined8 *)(puVar7 + 0x78);
      *(undefined8 *)(puVar5 + 0x76) = *(undefined8 *)(puVar7 + 0x76);
      *(undefined8 *)puVar2 = uVar17;
      *(undefined8 *)(puVar5 + 0x7a) = uVar16;
      *(undefined8 *)(puVar5 + 0x78) = uVar15;
      *(undefined8 *)(puVar7 + 0x76) = uVar14;
      *(undefined8 *)puVar1 = uVar13;
      *(undefined8 *)(puVar7 + 0x7a) = uVar12;
      *(undefined8 *)(puVar7 + 0x78) = uVar11;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return puVar5;
  }
LAB_1004e212c:
  func_0x000107c60e78();
  FUN_1004e2070();
  FUN_1004e243c(puVar5,puVar7);
  if (((byte)*puVar7 >> 2 & 1) == 0) {
    uVar8 = *puVar5 & 0xfffffffb;
  }
  else {
    uVar8 = *puVar5 | 4;
    puVar5[0x6a] = puVar7[0x6a];
  }
  *puVar5 = uVar8;
  if (((byte)*puVar7 >> 3 & 1) == 0) {
    uVar8 = uVar8 & 0xfffffff7;
    *puVar5 = uVar8;
  }
  else {
    uVar8 = uVar8 | 8;
    *puVar5 = uVar8;
    puVar5[0x69] = puVar7[0x69];
  }
  if (((byte)*puVar7 >> 4 & 1) == 0) {
    uVar8 = uVar8 & 0xffffffef;
  }
  else {
    uVar8 = uVar8 | 0x10;
    puVar5[0x68] = puVar7[0x68];
  }
  *puVar5 = uVar8;
  if (((byte)*puVar7 >> 5 & 1) == 0) {
    uVar8 = uVar8 & 0xffffffdf;
  }
  else {
    uVar8 = uVar8 | 0x20;
    puVar5[0x67] = puVar7[0x67];
  }
  *puVar5 = uVar8;
  if (((byte)*puVar7 >> 6 & 1) == 0) {
    uVar8 = uVar8 & 0xffffffbf;
  }
  else {
    uVar8 = uVar8 | 0x40;
    *(byte *)(puVar5 + 0x66) = (byte)puVar7[0x66];
  }
  *puVar5 = uVar8;
  if ((char)(byte)*puVar7 < '\0') {
    uVar8 = uVar8 | 0x80;
    puVar5[0x65] = puVar7[0x65];
  }
  else {
    uVar8 = uVar8 & 0xffffff7f;
  }
  *puVar5 = uVar8;
  if ((*puVar7 & 0x100) == 0) {
    uVar8 = uVar8 & 0xfffffeff;
  }
  else {
    uVar8 = uVar8 | 0x100;
    puVar5[100] = puVar7[100];
  }
  *puVar5 = uVar8;
  if ((*(byte *)((long)puVar7 + 1) >> 1 & 1) == 0) {
    uVar8 = uVar8 & 0xfffffdff;
    *puVar5 = uVar8;
  }
  else {
    uVar8 = uVar8 | 0x200;
    *puVar5 = uVar8;
    *(byte *)(puVar5 + 99) = (byte)puVar7[99];
  }
  if ((*(byte *)((long)puVar7 + 1) >> 2 & 1) == 0) {
    uVar8 = uVar8 & 0xfffffbff;
  }
  else {
    uVar8 = uVar8 | 0x400;
    puVar5[0x62] = puVar7[0x62];
  }
  *puVar5 = uVar8;
  if ((*(byte *)((long)puVar7 + 1) >> 3 & 1) == 0) {
    uVar8 = uVar8 & 0xfffff7ff;
  }
  else {
    uVar8 = uVar8 | 0x800;
    *(undefined8 *)(puVar5 + 0x60) = *(undefined8 *)(puVar7 + 0x60);
  }
  *puVar5 = uVar8;
  if ((*(byte *)((long)puVar7 + 1) >> 4 & 1) == 0) {
    uVar8 = uVar8 & 0xffffefff;
    *puVar5 = uVar8;
  }
  else {
    uVar8 = uVar8 | 0x1000;
    *puVar5 = uVar8;
    puVar5[0x5e] = puVar7[0x5e];
  }
  if ((*(byte *)((long)puVar7 + 1) >> 5 & 1) == 0) {
    uVar8 = uVar8 & 0xffffdfff;
  }
  else {
    uVar8 = uVar8 | 0x2000;
    *(undefined8 *)(puVar5 + 0x5c) = *(undefined8 *)(puVar7 + 0x5c);
  }
  *puVar5 = uVar8;
  func_0x0001004e24fc(puVar5,puVar7);
  func_0x0001004e25bc(puVar5,puVar7);
  func_0x0001004e267c(puVar5,puVar7);
  func_0x0001004e273c(puVar5,puVar7);
  func_0x0001004e27f8(puVar5,puVar7);
  func_0x0001004e28b4(puVar5,puVar7);
  func_0x0001004e2970(puVar5,puVar7);
  if ((*(byte *)((long)puVar7 + 2) >> 5 & 1) == 0) {
    *puVar5 = *puVar5 & 0xffdfffff;
  }
  else {
    *puVar5 = *puVar5 | 0x200000;
    *(undefined8 *)(puVar5 + 0x22) = *(undefined8 *)(puVar7 + 0x22);
  }
  FUN_1004e2a2c(puVar5,puVar7);
  FUN_1004e2a58(puVar5,puVar7);
  if ((*puVar7 & 0x1000000) == 0) {
    uVar8 = *puVar5 & 0xfeffffff;
  }
  else {
    uVar8 = *puVar5 | 0x1000000;
    *(byte *)(puVar5 + 0xe) = (byte)puVar7[0xe];
  }
  *puVar5 = uVar8;
  if ((*(byte *)((long)puVar7 + 3) >> 1 & 1) == 0) {
    *puVar5 = uVar8 & 0xfdffffff;
  }
  else {
    *puVar5 = uVar8 | 0x2000000;
    uVar11 = *(undefined8 *)(puVar7 + 10);
    *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(puVar7 + 0xc);
    *(undefined8 *)(puVar5 + 10) = uVar11;
  }
  if ((*(byte *)((long)puVar7 + 3) >> 2 & 1) != 0) {
    uVar8 = *puVar5;
    *puVar5 = uVar8 | 0x4000000;
    if ((uVar8 >> 0x1a & 1) == 0) {
      func_0x000104a8a0b8();
    }
    else {
      func_0x000104a89d80(puVar5 + 2,puVar7 + 2);
    }
    return puVar5 + 2;
  }
  uVar8 = *puVar5;
  *puVar5 = uVar8 & 0xfbffffff;
  if ((uVar8 >> 0x1a & 1) != 0) {
    puVar5 = puVar5 + 2;
    if (*(long *)puVar5 != 0) {
      func_0x000104a875bc(puVar5);
    }
    return puVar5;
  }
  return puVar5;
}



/* Entry: 1004e1ec8; end: 1004e1f83;  */

uint * FUN_1004e1ec8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  uint *puVar5;
  uint **ppuVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  uint *apuStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *param_1;
  FUN_1004e1e28(apuStack_48,param_2);
  ppuVar6 = apuStack_48;
  FUN_1004b8034(uVar11);
  puVar5 = apuStack_48[0];
  if ((uint *)0x1 < apuStack_48[0]) {
    do {
      lVar9 = *(long *)apuStack_48[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar4) {
        *(long *)apuStack_48[0] = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(apuStack_48[0] + 2))();
      puVar5 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  func_0x000107c60e78();
  if ((int)ppuVar6 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(apuStack_48);
  }
  func_0x000107c60bd8();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)puVar5;
  puVar5 = (uint *)((ulong)ppuVar6[1] & 0xff);
  puVar7 = (uint *)((long)ppuVar6 + 9);
  if (*ppuVar6 != (uint *)0x0) {
    puVar5 = ppuVar6[1];
    puVar7 = ppuVar6[2];
  }
  plVar10 = (long *)*param_3;
  if ((long *)0x1 < plVar10) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_98 = param_3[1];
  puStack_a0 = (uint *)*param_3;
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  FUN_1004bd340(lVar9 + 0x1f0,puVar7,puVar5,&puStack_a0);
  puVar5 = puStack_a0;
  if ((uint *)0x1 < puStack_a0) {
    do {
      lVar9 = *(long *)puStack_a0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puStack_a0,0x10);
      if (bVar4) {
        *(long *)puStack_a0 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(puStack_a0 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar5;
  }
  func_0x000107c60e78();
  if ((int)puVar7 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&puStack_a0);
  }
  func_0x000107c60bd8();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*puVar7 & 1) == 0) {
    uVar8 = *puVar5;
    *puVar5 = uVar8 & 0xfffffffe;
    if ((uVar8 & 1) != 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
        plVar10 = *(long **)(puVar5 + 0x74);
        if ((long *)0x1 < plVar10) {
          do {
            lVar9 = *plVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 + -1 == 0) {
            (*(code *)plVar10[1])();
          }
        }
        return puVar5 + 0x74;
      }
      goto LAB_1004e212c;
    }
  }
  else {
    puVar1 = puVar7 + 0x74;
    puVar2 = puVar5 + 0x74;
    uVar8 = *puVar5;
    *puVar5 = uVar8 | 1;
    if ((uVar8 & 1) == 0) {
      uVar14 = *(undefined8 *)(puVar7 + 0x76);
      uVar13 = *(undefined8 *)puVar1;
      uVar12 = *(undefined8 *)(puVar7 + 0x7a);
      uVar11 = *(undefined8 *)(puVar7 + 0x78);
      puVar7[0x76] = 0;
      puVar7[0x77] = 0;
      puVar1[0] = 0;
      puVar1[1] = 0;
      puVar7[0x7a] = 0;
      puVar7[0x7b] = 0;
      puVar7[0x78] = 0;
      puVar7[0x79] = 0;
      *(undefined8 *)(puVar5 + 0x76) = uVar14;
      *(undefined8 *)puVar2 = uVar13;
      *(undefined8 *)(puVar5 + 0x7a) = uVar12;
      *(undefined8 *)(puVar5 + 0x78) = uVar11;
    }
    else {
      uVar14 = *(undefined8 *)(puVar5 + 0x76);
      uVar13 = *(undefined8 *)puVar2;
      uVar12 = *(undefined8 *)(puVar5 + 0x7a);
      uVar11 = *(undefined8 *)(puVar5 + 0x78);
      uVar17 = *(undefined8 *)puVar1;
      uVar16 = *(undefined8 *)(puVar7 + 0x7a);
      uVar15 = *(undefined8 *)(puVar7 + 0x78);
      *(undefined8 *)(puVar5 + 0x76) = *(undefined8 *)(puVar7 + 0x76);
      *(undefined8 *)puVar2 = uVar17;
      *(undefined8 *)(puVar5 + 0x7a) = uVar16;
      *(undefined8 *)(puVar5 + 0x78) = uVar15;
      *(undefined8 *)(puVar7 + 0x76) = uVar14;
      *(undefined8 *)puVar1 = uVar13;
      *(undefined8 *)(puVar7 + 0x7a) = uVar12;
      *(undefined8 *)(puVar7 + 0x78) = uVar11;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar5;
  }
LAB_1004e212c:
  func_0x000107c60e78();
  FUN_1004e2070();
  FUN_1004e243c(puVar5,puVar7);
  if (((byte)*puVar7 >> 2 & 1) == 0) {
    uVar8 = *puVar5 & 0xfffffffb;
  }
  else {
    uVar8 = *puVar5 | 4;
    puVar5[0x6a] = puVar7[0x6a];
  }
  *puVar5 = uVar8;
  if (((byte)*puVar7 >> 3 & 1) == 0) {
    uVar8 = uVar8 & 0xfffffff7;
    *puVar5 = uVar8;
  }
  else {
    uVar8 = uVar8 | 8;
    *puVar5 = uVar8;
    puVar5[0x69] = puVar7[0x69];
  }
  if (((byte)*puVar7 >> 4 & 1) == 0) {
    uVar8 = uVar8 & 0xffffffef;
  }
  else {
    uVar8 = uVar8 | 0x10;
    puVar5[0x68] = puVar7[0x68];
  }
  *puVar5 = uVar8;
  if (((byte)*puVar7 >> 5 & 1) == 0) {
    uVar8 = uVar8 & 0xffffffdf;
  }
  else {
    uVar8 = uVar8 | 0x20;
    puVar5[0x67] = puVar7[0x67];
  }
  *puVar5 = uVar8;
  if (((byte)*puVar7 >> 6 & 1) == 0) {
    uVar8 = uVar8 & 0xffffffbf;
  }
  else {
    uVar8 = uVar8 | 0x40;
    *(byte *)(puVar5 + 0x66) = (byte)puVar7[0x66];
  }
  *puVar5 = uVar8;
  if ((char)(byte)*puVar7 < '\0') {
    uVar8 = uVar8 | 0x80;
    puVar5[0x65] = puVar7[0x65];
  }
  else {
    uVar8 = uVar8 & 0xffffff7f;
  }
  *puVar5 = uVar8;
  if ((*puVar7 & 0x100) == 0) {
    uVar8 = uVar8 & 0xfffffeff;
  }
  else {
    uVar8 = uVar8 | 0x100;
    puVar5[100] = puVar7[100];
  }
  *puVar5 = uVar8;
  if ((*(byte *)((long)puVar7 + 1) >> 1 & 1) == 0) {
    uVar8 = uVar8 & 0xfffffdff;
    *puVar5 = uVar8;
  }
  else {
    uVar8 = uVar8 | 0x200;
    *puVar5 = uVar8;
    *(byte *)(puVar5 + 99) = (byte)puVar7[99];
  }
  if ((*(byte *)((long)puVar7 + 1) >> 2 & 1) == 0) {
    uVar8 = uVar8 & 0xfffffbff;
  }
  else {
    uVar8 = uVar8 | 0x400;
    puVar5[0x62] = puVar7[0x62];
  }
  *puVar5 = uVar8;
  if ((*(byte *)((long)puVar7 + 1) >> 3 & 1) == 0) {
    uVar8 = uVar8 & 0xfffff7ff;
  }
  else {
    uVar8 = uVar8 | 0x800;
    *(undefined8 *)(puVar5 + 0x60) = *(undefined8 *)(puVar7 + 0x60);
  }
  *puVar5 = uVar8;
  if ((*(byte *)((long)puVar7 + 1) >> 4 & 1) == 0) {
    uVar8 = uVar8 & 0xffffefff;
    *puVar5 = uVar8;
  }
  else {
    uVar8 = uVar8 | 0x1000;
    *puVar5 = uVar8;
    puVar5[0x5e] = puVar7[0x5e];
  }
  if ((*(byte *)((long)puVar7 + 1) >> 5 & 1) == 0) {
    uVar8 = uVar8 & 0xffffdfff;
  }
  else {
    uVar8 = uVar8 | 0x2000;
    *(undefined8 *)(puVar5 + 0x5c) = *(undefined8 *)(puVar7 + 0x5c);
  }
  *puVar5 = uVar8;
  func_0x0001004e24fc(puVar5,puVar7);
  func_0x0001004e25bc(puVar5,puVar7);
  func_0x0001004e267c(puVar5,puVar7);
  func_0x0001004e273c(puVar5,puVar7);
  func_0x0001004e27f8(puVar5,puVar7);
  func_0x0001004e28b4(puVar5,puVar7);
  func_0x0001004e2970(puVar5,puVar7);
  if ((*(byte *)((long)puVar7 + 2) >> 5 & 1) == 0) {
    *puVar5 = *puVar5 & 0xffdfffff;
  }
  else {
    *puVar5 = *puVar5 | 0x200000;
    *(undefined8 *)(puVar5 + 0x22) = *(undefined8 *)(puVar7 + 0x22);
  }
  FUN_1004e2a2c(puVar5,puVar7);
  FUN_1004e2a58(puVar5,puVar7);
  if ((*puVar7 & 0x1000000) == 0) {
    uVar8 = *puVar5 & 0xfeffffff;
  }
  else {
    uVar8 = *puVar5 | 0x1000000;
    *(byte *)(puVar5 + 0xe) = (byte)puVar7[0xe];
  }
  *puVar5 = uVar8;
  if ((*(byte *)((long)puVar7 + 3) >> 1 & 1) == 0) {
    *puVar5 = uVar8 & 0xfdffffff;
  }
  else {
    *puVar5 = uVar8 | 0x2000000;
    uVar11 = *(undefined8 *)(puVar7 + 10);
    *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(puVar7 + 0xc);
    *(undefined8 *)(puVar5 + 10) = uVar11;
  }
  if ((*(byte *)((long)puVar7 + 3) >> 2 & 1) != 0) {
    uVar8 = *puVar5;
    *puVar5 = uVar8 | 0x4000000;
    if ((uVar8 >> 0x1a & 1) == 0) {
      func_0x000104a8a0b8();
    }
    else {
      func_0x000104a89d80(puVar5 + 2,puVar7 + 2);
    }
    return puVar5 + 2;
  }
  uVar8 = *puVar5;
  *puVar5 = uVar8 & 0xfbffffff;
  if ((uVar8 >> 0x1a & 1) != 0) {
    puVar5 = puVar5 + 2;
    if (*(long *)puVar5 != 0) {
      func_0x000104a875bc(puVar5);
    }
    return puVar5;
  }
  return puVar5;
}



/* Entry: 1004e1f84; end: 1004e206f;  */

uint * FUN_1004e1f84(long *param_1,long *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *param_1;
  uVar3 = param_2[1] & 0xff;
  pbVar7 = (byte *)((long)param_2 + 9);
  if (*param_2 != 0) {
    uVar3 = param_2[1];
    pbVar7 = (byte *)param_2[2];
  }
  plVar10 = (long *)*param_3;
  if ((long *)0x1 < plVar10) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_48 = param_3[1];
  puStack_50 = (uint *)*param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
  FUN_1004bd340(lVar9 + 0x1f0,pbVar7,uVar3,&puStack_50);
  puVar6 = puStack_50;
  if ((uint *)0x1 < puStack_50) {
    do {
      lVar9 = *(long *)puStack_50;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puStack_50,0x10);
      if (bVar5) {
        *(long *)puStack_50 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(puStack_50 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  func_0x000107c60e78();
  if ((int)pbVar7 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&puStack_50);
  }
  func_0x000107c60bd8();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*pbVar7 & 1) == 0) {
    uVar8 = *puVar6;
    *puVar6 = uVar8 & 0xfffffffe;
    if ((uVar8 & 1) != 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
        plVar10 = *(long **)(puVar6 + 0x74);
        if ((long *)0x1 < plVar10) {
          do {
            lVar9 = *plVar10;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = lVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar9 + -1 == 0) {
            (*(code *)plVar10[1])();
          }
        }
        return puVar6 + 0x74;
      }
      goto LAB_1004e212c;
    }
  }
  else {
    pbVar1 = pbVar7 + 0x1d0;
    puVar2 = puVar6 + 0x74;
    uVar8 = *puVar6;
    *puVar6 = uVar8 | 1;
    if ((uVar8 & 1) == 0) {
      uVar14 = *(undefined8 *)(pbVar7 + 0x1d8);
      uVar13 = *(undefined8 *)pbVar1;
      uVar12 = *(undefined8 *)(pbVar7 + 0x1e8);
      uVar11 = *(undefined8 *)(pbVar7 + 0x1e0);
      pbVar7[0x1d8] = 0;
      pbVar7[0x1d9] = 0;
      pbVar7[0x1da] = 0;
      pbVar7[0x1db] = 0;
      pbVar7[0x1dc] = 0;
      pbVar7[0x1dd] = 0;
      pbVar7[0x1de] = 0;
      pbVar7[0x1df] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      pbVar7[0x1e8] = 0;
      pbVar7[0x1e9] = 0;
      pbVar7[0x1ea] = 0;
      pbVar7[0x1eb] = 0;
      pbVar7[0x1ec] = 0;
      pbVar7[0x1ed] = 0;
      pbVar7[0x1ee] = 0;
      pbVar7[0x1ef] = 0;
      pbVar7[0x1e0] = 0;
      pbVar7[0x1e1] = 0;
      pbVar7[0x1e2] = 0;
      pbVar7[0x1e3] = 0;
      pbVar7[0x1e4] = 0;
      pbVar7[0x1e5] = 0;
      pbVar7[0x1e6] = 0;
      pbVar7[0x1e7] = 0;
      *(undefined8 *)(puVar6 + 0x76) = uVar14;
      *(undefined8 *)puVar2 = uVar13;
      *(undefined8 *)(puVar6 + 0x7a) = uVar12;
      *(undefined8 *)(puVar6 + 0x78) = uVar11;
    }
    else {
      uVar14 = *(undefined8 *)(puVar6 + 0x76);
      uVar13 = *(undefined8 *)puVar2;
      uVar12 = *(undefined8 *)(puVar6 + 0x7a);
      uVar11 = *(undefined8 *)(puVar6 + 0x78);
      uVar17 = *(undefined8 *)pbVar1;
      uVar16 = *(undefined8 *)(pbVar7 + 0x1e8);
      uVar15 = *(undefined8 *)(pbVar7 + 0x1e0);
      *(undefined8 *)(puVar6 + 0x76) = *(undefined8 *)(pbVar7 + 0x1d8);
      *(undefined8 *)puVar2 = uVar17;
      *(undefined8 *)(puVar6 + 0x7a) = uVar16;
      *(undefined8 *)(puVar6 + 0x78) = uVar15;
      *(undefined8 *)(pbVar7 + 0x1d8) = uVar14;
      *(undefined8 *)pbVar1 = uVar13;
      *(undefined8 *)(pbVar7 + 0x1e8) = uVar12;
      *(undefined8 *)(pbVar7 + 0x1e0) = uVar11;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar6;
  }
LAB_1004e212c:
  func_0x000107c60e78();
  FUN_1004e2070();
  FUN_1004e243c(puVar6,pbVar7);
  if ((*pbVar7 >> 2 & 1) == 0) {
    uVar8 = *puVar6 & 0xfffffffb;
  }
  else {
    uVar8 = *puVar6 | 4;
    puVar6[0x6a] = *(uint *)(pbVar7 + 0x1a8);
  }
  *puVar6 = uVar8;
  if ((*pbVar7 >> 3 & 1) == 0) {
    uVar8 = uVar8 & 0xfffffff7;
    *puVar6 = uVar8;
  }
  else {
    uVar8 = uVar8 | 8;
    *puVar6 = uVar8;
    puVar6[0x69] = *(uint *)(pbVar7 + 0x1a4);
  }
  if ((*pbVar7 >> 4 & 1) == 0) {
    uVar8 = uVar8 & 0xffffffef;
  }
  else {
    uVar8 = uVar8 | 0x10;
    puVar6[0x68] = *(uint *)(pbVar7 + 0x1a0);
  }
  *puVar6 = uVar8;
  if ((*pbVar7 >> 5 & 1) == 0) {
    uVar8 = uVar8 & 0xffffffdf;
  }
  else {
    uVar8 = uVar8 | 0x20;
    puVar6[0x67] = *(uint *)(pbVar7 + 0x19c);
  }
  *puVar6 = uVar8;
  if ((*pbVar7 >> 6 & 1) == 0) {
    uVar8 = uVar8 & 0xffffffbf;
  }
  else {
    uVar8 = uVar8 | 0x40;
    *(byte *)(puVar6 + 0x66) = pbVar7[0x198];
  }
  *puVar6 = uVar8;
  if ((char)*pbVar7 < '\0') {
    uVar8 = uVar8 | 0x80;
    puVar6[0x65] = *(uint *)(pbVar7 + 0x194);
  }
  else {
    uVar8 = uVar8 & 0xffffff7f;
  }
  *puVar6 = uVar8;
  if ((pbVar7[1] & 1) == 0) {
    uVar8 = uVar8 & 0xfffffeff;
  }
  else {
    uVar8 = uVar8 | 0x100;
    puVar6[100] = *(uint *)(pbVar7 + 400);
  }
  *puVar6 = uVar8;
  if ((pbVar7[1] >> 1 & 1) == 0) {
    uVar8 = uVar8 & 0xfffffdff;
    *puVar6 = uVar8;
  }
  else {
    uVar8 = uVar8 | 0x200;
    *puVar6 = uVar8;
    *(byte *)(puVar6 + 99) = pbVar7[0x18c];
  }
  if ((pbVar7[1] >> 2 & 1) == 0) {
    uVar8 = uVar8 & 0xfffffbff;
  }
  else {
    uVar8 = uVar8 | 0x400;
    puVar6[0x62] = *(uint *)(pbVar7 + 0x188);
  }
  *puVar6 = uVar8;
  if ((pbVar7[1] >> 3 & 1) == 0) {
    uVar8 = uVar8 & 0xfffff7ff;
  }
  else {
    uVar8 = uVar8 | 0x800;
    *(undefined8 *)(puVar6 + 0x60) = *(undefined8 *)(pbVar7 + 0x180);
  }
  *puVar6 = uVar8;
  if ((pbVar7[1] >> 4 & 1) == 0) {
    uVar8 = uVar8 & 0xffffefff;
    *puVar6 = uVar8;
  }
  else {
    uVar8 = uVar8 | 0x1000;
    *puVar6 = uVar8;
    puVar6[0x5e] = *(uint *)(pbVar7 + 0x178);
  }
  if ((pbVar7[1] >> 5 & 1) == 0) {
    uVar8 = uVar8 & 0xffffdfff;
  }
  else {
    uVar8 = uVar8 | 0x2000;
    *(undefined8 *)(puVar6 + 0x5c) = *(undefined8 *)(pbVar7 + 0x170);
  }
  *puVar6 = uVar8;
  func_0x0001004e24fc(puVar6,pbVar7);
  func_0x0001004e25bc(puVar6,pbVar7);
  func_0x0001004e267c(puVar6,pbVar7);
  func_0x0001004e273c(puVar6,pbVar7);
  func_0x0001004e27f8(puVar6,pbVar7);
  func_0x0001004e28b4(puVar6,pbVar7);
  func_0x0001004e2970(puVar6,pbVar7);
  if ((pbVar7[2] >> 5 & 1) == 0) {
    *puVar6 = *puVar6 & 0xffdfffff;
  }
  else {
    *puVar6 = *puVar6 | 0x200000;
    *(undefined8 *)(puVar6 + 0x22) = *(undefined8 *)(pbVar7 + 0x88);
  }
  FUN_1004e2a2c(puVar6,pbVar7);
  FUN_1004e2a58(puVar6,pbVar7);
  if ((pbVar7[3] & 1) == 0) {
    uVar8 = *puVar6 & 0xfeffffff;
  }
  else {
    uVar8 = *puVar6 | 0x1000000;
    *(byte *)(puVar6 + 0xe) = pbVar7[0x38];
  }
  *puVar6 = uVar8;
  if ((pbVar7[3] >> 1 & 1) == 0) {
    *puVar6 = uVar8 & 0xfdffffff;
  }
  else {
    *puVar6 = uVar8 | 0x2000000;
    uVar11 = *(undefined8 *)(pbVar7 + 0x28);
    *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(pbVar7 + 0x30);
    *(undefined8 *)(puVar6 + 10) = uVar11;
  }
  if ((pbVar7[3] >> 2 & 1) != 0) {
    uVar8 = *puVar6;
    *puVar6 = uVar8 | 0x4000000;
    if ((uVar8 >> 0x1a & 1) == 0) {
      func_0x000104a8a0b8();
    }
    else {
      func_0x000104a89d80(puVar6 + 2,pbVar7 + 8);
    }
    return puVar6 + 2;
  }
  uVar8 = *puVar6;
  *puVar6 = uVar8 & 0xfbffffff;
  if ((uVar8 >> 0x1a & 1) != 0) {
    puVar6 = puVar6 + 2;
    if (*(long *)puVar6 != 0) {
      func_0x000104a875bc(puVar6);
    }
    return puVar6;
  }
  return puVar6;
}



/* Entry: 1004e2070; end: 1004e212f;  */

uint * FUN_1004e2070(uint *param_1,byte *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_2 & 1) == 0) {
    uVar6 = *param_1;
    *param_1 = uVar6 & 0xfffffffe;
    if ((uVar6 & 1) != 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
        plVar5 = *(long **)(param_1 + 0x74);
        if ((long *)0x1 < plVar5) {
          do {
            lVar7 = *plVar5;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 + -1 == 0) {
            (*(code *)plVar5[1])();
          }
        }
        return param_1 + 0x74;
      }
      goto LAB_1004e212c;
    }
  }
  else {
    pbVar1 = param_2 + 0x1d0;
    puVar2 = param_1 + 0x74;
    uVar6 = *param_1;
    *param_1 = uVar6 | 1;
    if ((uVar6 & 1) == 0) {
      uVar11 = *(undefined8 *)(param_2 + 0x1d8);
      uVar10 = *(undefined8 *)pbVar1;
      uVar9 = *(undefined8 *)(param_2 + 0x1e8);
      uVar8 = *(undefined8 *)(param_2 + 0x1e0);
      param_2[0x1d8] = 0;
      param_2[0x1d9] = 0;
      param_2[0x1da] = 0;
      param_2[0x1db] = 0;
      param_2[0x1dc] = 0;
      param_2[0x1dd] = 0;
      param_2[0x1de] = 0;
      param_2[0x1df] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_2[0x1e8] = 0;
      param_2[0x1e9] = 0;
      param_2[0x1ea] = 0;
      param_2[0x1eb] = 0;
      param_2[0x1ec] = 0;
      param_2[0x1ed] = 0;
      param_2[0x1ee] = 0;
      param_2[0x1ef] = 0;
      param_2[0x1e0] = 0;
      param_2[0x1e1] = 0;
      param_2[0x1e2] = 0;
      param_2[0x1e3] = 0;
      param_2[0x1e4] = 0;
      param_2[0x1e5] = 0;
      param_2[0x1e6] = 0;
      param_2[0x1e7] = 0;
      *(undefined8 *)(param_1 + 0x76) = uVar11;
      *(undefined8 *)puVar2 = uVar10;
      *(undefined8 *)(param_1 + 0x7a) = uVar9;
      *(undefined8 *)(param_1 + 0x78) = uVar8;
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + 0x76);
      uVar10 = *(undefined8 *)puVar2;
      uVar9 = *(undefined8 *)(param_1 + 0x7a);
      uVar8 = *(undefined8 *)(param_1 + 0x78);
      uVar14 = *(undefined8 *)pbVar1;
      uVar13 = *(undefined8 *)(param_2 + 0x1e8);
      uVar12 = *(undefined8 *)(param_2 + 0x1e0);
      *(undefined8 *)(param_1 + 0x76) = *(undefined8 *)(param_2 + 0x1d8);
      *(undefined8 *)puVar2 = uVar14;
      *(undefined8 *)(param_1 + 0x7a) = uVar13;
      *(undefined8 *)(param_1 + 0x78) = uVar12;
      *(undefined8 *)(param_2 + 0x1d8) = uVar11;
      *(undefined8 *)pbVar1 = uVar10;
      *(undefined8 *)(param_2 + 0x1e8) = uVar9;
      *(undefined8 *)(param_2 + 0x1e0) = uVar8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_1;
  }
LAB_1004e212c:
  func_0x000107c60e78();
  FUN_1004e2070();
  FUN_1004e243c(param_1,param_2);
  if ((*param_2 >> 2 & 1) == 0) {
    uVar6 = *param_1 & 0xfffffffb;
  }
  else {
    uVar6 = *param_1 | 4;
    param_1[0x6a] = *(uint *)(param_2 + 0x1a8);
  }
  *param_1 = uVar6;
  if ((*param_2 >> 3 & 1) == 0) {
    uVar6 = uVar6 & 0xfffffff7;
    *param_1 = uVar6;
  }
  else {
    uVar6 = uVar6 | 8;
    *param_1 = uVar6;
    param_1[0x69] = *(uint *)(param_2 + 0x1a4);
  }
  if ((*param_2 >> 4 & 1) == 0) {
    uVar6 = uVar6 & 0xffffffef;
  }
  else {
    uVar6 = uVar6 | 0x10;
    param_1[0x68] = *(uint *)(param_2 + 0x1a0);
  }
  *param_1 = uVar6;
  if ((*param_2 >> 5 & 1) == 0) {
    uVar6 = uVar6 & 0xffffffdf;
  }
  else {
    uVar6 = uVar6 | 0x20;
    param_1[0x67] = *(uint *)(param_2 + 0x19c);
  }
  *param_1 = uVar6;
  if ((*param_2 >> 6 & 1) == 0) {
    uVar6 = uVar6 & 0xffffffbf;
  }
  else {
    uVar6 = uVar6 | 0x40;
    *(byte *)(param_1 + 0x66) = param_2[0x198];
  }
  *param_1 = uVar6;
  if ((char)*param_2 < '\0') {
    uVar6 = uVar6 | 0x80;
    param_1[0x65] = *(uint *)(param_2 + 0x194);
  }
  else {
    uVar6 = uVar6 & 0xffffff7f;
  }
  *param_1 = uVar6;
  if ((param_2[1] & 1) == 0) {
    uVar6 = uVar6 & 0xfffffeff;
  }
  else {
    uVar6 = uVar6 | 0x100;
    param_1[100] = *(uint *)(param_2 + 400);
  }
  *param_1 = uVar6;
  if ((param_2[1] >> 1 & 1) == 0) {
    uVar6 = uVar6 & 0xfffffdff;
    *param_1 = uVar6;
  }
  else {
    uVar6 = uVar6 | 0x200;
    *param_1 = uVar6;
    *(byte *)(param_1 + 99) = param_2[0x18c];
  }
  if ((param_2[1] >> 2 & 1) == 0) {
    uVar6 = uVar6 & 0xfffffbff;
  }
  else {
    uVar6 = uVar6 | 0x400;
    param_1[0x62] = *(uint *)(param_2 + 0x188);
  }
  *param_1 = uVar6;
  if ((param_2[1] >> 3 & 1) == 0) {
    uVar6 = uVar6 & 0xfffff7ff;
  }
  else {
    uVar6 = uVar6 | 0x800;
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x180);
  }
  *param_1 = uVar6;
  if ((param_2[1] >> 4 & 1) == 0) {
    uVar6 = uVar6 & 0xffffefff;
    *param_1 = uVar6;
  }
  else {
    uVar6 = uVar6 | 0x1000;
    *param_1 = uVar6;
    param_1[0x5e] = *(uint *)(param_2 + 0x178);
  }
  if ((param_2[1] >> 5 & 1) == 0) {
    uVar6 = uVar6 & 0xffffdfff;
  }
  else {
    uVar6 = uVar6 | 0x2000;
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x170);
  }
  *param_1 = uVar6;
  func_0x0001004e24fc(param_1,param_2);
  func_0x0001004e25bc(param_1,param_2);
  func_0x0001004e267c(param_1,param_2);
  func_0x0001004e273c(param_1,param_2);
  func_0x0001004e27f8(param_1,param_2);
  func_0x0001004e28b4(param_1,param_2);
  func_0x0001004e2970(param_1,param_2);
  if ((param_2[2] >> 5 & 1) == 0) {
    *param_1 = *param_1 & 0xffdfffff;
  }
  else {
    *param_1 = *param_1 | 0x200000;
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x88);
  }
  FUN_1004e2a2c(param_1,param_2);
  FUN_1004e2a58(param_1,param_2);
  if ((param_2[3] & 1) == 0) {
    uVar6 = *param_1 & 0xfeffffff;
  }
  else {
    uVar6 = *param_1 | 0x1000000;
    *(byte *)(param_1 + 0xe) = param_2[0x38];
  }
  *param_1 = uVar6;
  if ((param_2[3] >> 1 & 1) == 0) {
    *param_1 = uVar6 & 0xfdffffff;
  }
  else {
    *param_1 = uVar6 | 0x2000000;
    uVar8 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 10) = uVar8;
  }
  if ((param_2[3] >> 2 & 1) == 0) {
    uVar6 = *param_1;
    *param_1 = uVar6 & 0xfbffffff;
    if ((uVar6 >> 0x1a & 1) == 0) {
      return param_1;
    }
    param_1 = param_1 + 2;
    if (*(long *)param_1 != 0) {
      func_0x000104a875bc(param_1);
    }
    return param_1;
  }
  uVar6 = *param_1;
  *param_1 = uVar6 | 0x4000000;
  if ((uVar6 >> 0x1a & 1) == 0) {
    func_0x000104a8a0b8();
  }
  else {
    func_0x000104a89d80(param_1 + 2,param_2 + 8);
  }
  return param_1 + 2;
}



/* Entry: 1004e2130; end: 1004e23df;  */

uint * FUN_1004e2130(uint *param_1,byte *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  FUN_1004e2070();
  FUN_1004e243c(param_1,param_2);
  if ((*param_2 >> 2 & 1) == 0) {
    uVar1 = *param_1 & 0xfffffffb;
  }
  else {
    uVar1 = *param_1 | 4;
    param_1[0x6a] = *(uint *)(param_2 + 0x1a8);
  }
  *param_1 = uVar1;
  if ((*param_2 >> 3 & 1) == 0) {
    uVar1 = uVar1 & 0xfffffff7;
    *param_1 = uVar1;
  }
  else {
    uVar1 = uVar1 | 8;
    *param_1 = uVar1;
    param_1[0x69] = *(uint *)(param_2 + 0x1a4);
  }
  if ((*param_2 >> 4 & 1) == 0) {
    uVar1 = uVar1 & 0xffffffef;
  }
  else {
    uVar1 = uVar1 | 0x10;
    param_1[0x68] = *(uint *)(param_2 + 0x1a0);
  }
  *param_1 = uVar1;
  if ((*param_2 >> 5 & 1) == 0) {
    uVar1 = uVar1 & 0xffffffdf;
  }
  else {
    uVar1 = uVar1 | 0x20;
    param_1[0x67] = *(uint *)(param_2 + 0x19c);
  }
  *param_1 = uVar1;
  if ((*param_2 >> 6 & 1) == 0) {
    uVar1 = uVar1 & 0xffffffbf;
  }
  else {
    uVar1 = uVar1 | 0x40;
    *(byte *)(param_1 + 0x66) = param_2[0x198];
  }
  *param_1 = uVar1;
  if ((char)*param_2 < '\0') {
    uVar1 = uVar1 | 0x80;
    param_1[0x65] = *(uint *)(param_2 + 0x194);
  }
  else {
    uVar1 = uVar1 & 0xffffff7f;
  }
  *param_1 = uVar1;
  if ((param_2[1] & 1) == 0) {
    uVar1 = uVar1 & 0xfffffeff;
  }
  else {
    uVar1 = uVar1 | 0x100;
    param_1[100] = *(uint *)(param_2 + 400);
  }
  *param_1 = uVar1;
  if ((param_2[1] >> 1 & 1) == 0) {
    uVar1 = uVar1 & 0xfffffdff;
    *param_1 = uVar1;
  }
  else {
    uVar1 = uVar1 | 0x200;
    *param_1 = uVar1;
    *(byte *)(param_1 + 99) = param_2[0x18c];
  }
  if ((param_2[1] >> 2 & 1) == 0) {
    uVar1 = uVar1 & 0xfffffbff;
  }
  else {
    uVar1 = uVar1 | 0x400;
    param_1[0x62] = *(uint *)(param_2 + 0x188);
  }
  *param_1 = uVar1;
  if ((param_2[1] >> 3 & 1) == 0) {
    uVar1 = uVar1 & 0xfffff7ff;
  }
  else {
    uVar1 = uVar1 | 0x800;
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x180);
  }
  *param_1 = uVar1;
  if ((param_2[1] >> 4 & 1) == 0) {
    uVar1 = uVar1 & 0xffffefff;
    *param_1 = uVar1;
  }
  else {
    uVar1 = uVar1 | 0x1000;
    *param_1 = uVar1;
    param_1[0x5e] = *(uint *)(param_2 + 0x178);
  }
  if ((param_2[1] >> 5 & 1) == 0) {
    uVar1 = uVar1 & 0xffffdfff;
  }
  else {
    uVar1 = uVar1 | 0x2000;
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x170);
  }
  *param_1 = uVar1;
  func_0x0001004e24fc(param_1,param_2);
  func_0x0001004e25bc(param_1,param_2);
  func_0x0001004e267c(param_1,param_2);
  func_0x0001004e273c(param_1,param_2);
  func_0x0001004e27f8(param_1,param_2);
  func_0x0001004e28b4(param_1,param_2);
  func_0x0001004e2970(param_1,param_2);
  if ((param_2[2] >> 5 & 1) == 0) {
    *param_1 = *param_1 & 0xffdfffff;
  }
  else {
    *param_1 = *param_1 | 0x200000;
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x88);
  }
  FUN_1004e2a2c(param_1,param_2);
  FUN_1004e2a58(param_1,param_2);
  if ((param_2[3] & 1) == 0) {
    uVar1 = *param_1 & 0xfeffffff;
  }
  else {
    uVar1 = *param_1 | 0x1000000;
    *(byte *)(param_1 + 0xe) = param_2[0x38];
  }
  *param_1 = uVar1;
  if ((param_2[3] >> 1 & 1) == 0) {
    *param_1 = uVar1 & 0xfdffffff;
  }
  else {
    *param_1 = uVar1 | 0x2000000;
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 10) = uVar2;
  }
  if ((param_2[3] >> 2 & 1) == 0) {
    uVar1 = *param_1;
    *param_1 = uVar1 & 0xfbffffff;
    if ((uVar1 >> 0x1a & 1) == 0) {
      return param_1;
    }
    param_1 = param_1 + 2;
    if (*(long *)param_1 != 0) {
      func_0x000104a875bc(param_1);
    }
    return param_1;
  }
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x4000000;
  if ((uVar1 >> 0x1a & 1) == 0) {
    func_0x000104a8a0b8();
  }
  else {
    func_0x000104a89d80(param_1 + 2,param_2 + 8);
  }
  return param_1 + 2;
}



/* Entry: 1004e23e0; end: 1004e243b;  */

long FUN_1004e23e0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_1004e2130();
  uVar1 = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined8 *)(param_2 + 0x1f0) = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x200);
  *(undefined8 *)(param_2 + 0x200) = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = uVar1;
  return param_1;
}



/* Entry: 1004e243c; end: 1004e2a2b;  */

uint * FUN_1004e243c(uint *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long *plVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 ***unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_2a0 [72];
  long lStack_258;
  undefined8 **ppuStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [72];
  long lStack_1f8;
  undefined8 **ppuStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [72];
  long lStack_198;
  undefined8 **ppuStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [72];
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [72];
  long lStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [72];
  long lStack_78;
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [72];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_2 >> 1 & 1) == 0) {
    uVar2 = *param_1;
    *param_1 = uVar2 & 0xfffffffd;
    if ((uVar2 >> 1 & 1) == 0) goto LAB_1004e24d4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
      param_1 = param_1 + 0x6c;
      puVar5 = (undefined1 *)register0x00000008;
      goto FUN_1004b6d90;
    }
  }
  else {
    pbVar1 = param_2 + 0x1b0;
    puVar7 = param_1 + 0x6c;
    uVar2 = *param_1;
    *param_1 = uVar2 | 2;
    if ((uVar2 >> 1 & 1) == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x1b8);
      uVar12 = *(undefined8 *)pbVar1;
      uVar11 = *(undefined8 *)(param_2 + 0x1c8);
      uVar10 = *(undefined8 *)(param_2 + 0x1c0);
      param_2[0x1b8] = 0;
      param_2[0x1b9] = 0;
      param_2[0x1ba] = 0;
      param_2[0x1bb] = 0;
      param_2[0x1bc] = 0;
      param_2[0x1bd] = 0;
      param_2[0x1be] = 0;
      param_2[0x1bf] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_2[0x1c8] = 0;
      param_2[0x1c9] = 0;
      param_2[0x1ca] = 0;
      param_2[0x1cb] = 0;
      param_2[0x1cc] = 0;
      param_2[0x1cd] = 0;
      param_2[0x1ce] = 0;
      param_2[0x1cf] = 0;
      param_2[0x1c0] = 0;
      param_2[0x1c1] = 0;
      param_2[0x1c2] = 0;
      param_2[0x1c3] = 0;
      param_2[0x1c4] = 0;
      param_2[0x1c5] = 0;
      param_2[0x1c6] = 0;
      param_2[0x1c7] = 0;
      *(undefined8 *)(param_1 + 0x6e) = uVar13;
      *(undefined8 *)puVar7 = uVar12;
      *(undefined8 *)(param_1 + 0x72) = uVar11;
      *(undefined8 *)(param_1 + 0x70) = uVar10;
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0x6e);
      uVar12 = *(undefined8 *)puVar7;
      uVar11 = *(undefined8 *)(param_1 + 0x72);
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      uVar16 = *(undefined8 *)pbVar1;
      uVar15 = *(undefined8 *)(param_2 + 0x1c8);
      uVar14 = *(undefined8 *)(param_2 + 0x1c0);
      *(undefined8 *)(param_1 + 0x6e) = *(undefined8 *)(param_2 + 0x1b8);
      *(undefined8 *)puVar7 = uVar16;
      *(undefined8 *)(param_1 + 0x72) = uVar15;
      *(undefined8 *)(param_1 + 0x70) = uVar14;
      *(undefined8 *)(param_2 + 0x1b8) = uVar13;
      *(undefined8 *)pbVar1 = uVar12;
      *(undefined8 *)(param_2 + 0x1c8) = uVar11;
      *(undefined8 *)(param_2 + 0x1c0) = uVar10;
    }
LAB_1004e24d4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
      return param_1;
    }
  }
  func_0x000107c60e78();
  uStack_68 = 0x1004e24fc;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_70 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((param_2[1] >> 6 & 1) == 0) {
    uVar2 = *param_1;
    *param_1 = uVar2 & 0xffffbfff;
    if ((uVar2 >> 0xe & 1) == 0) goto LAB_1004e2594;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      param_1 = param_1 + 0x54;
      unaff_x30 = 0x1004e24fc;
      puVar5 = auStack_60;
      unaff_x29 = (undefined8 ***)&stack0xfffffffffffffff0;
      goto FUN_1004b6d90;
    }
  }
  else {
    pbVar1 = param_2 + 0x150;
    puVar7 = param_1 + 0x54;
    uVar2 = *param_1;
    *param_1 = uVar2 | 0x4000;
    if ((uVar2 >> 0xe & 1) == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x158);
      uVar12 = *(undefined8 *)pbVar1;
      uVar11 = *(undefined8 *)(param_2 + 0x168);
      uVar10 = *(undefined8 *)(param_2 + 0x160);
      param_2[0x158] = 0;
      param_2[0x159] = 0;
      param_2[0x15a] = 0;
      param_2[0x15b] = 0;
      param_2[0x15c] = 0;
      param_2[0x15d] = 0;
      param_2[0x15e] = 0;
      param_2[0x15f] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_2[0x168] = 0;
      param_2[0x169] = 0;
      param_2[0x16a] = 0;
      param_2[0x16b] = 0;
      param_2[0x16c] = 0;
      param_2[0x16d] = 0;
      param_2[0x16e] = 0;
      param_2[0x16f] = 0;
      param_2[0x160] = 0;
      param_2[0x161] = 0;
      param_2[0x162] = 0;
      param_2[0x163] = 0;
      param_2[0x164] = 0;
      param_2[0x165] = 0;
      param_2[0x166] = 0;
      param_2[0x167] = 0;
      *(undefined8 *)(param_1 + 0x56) = uVar13;
      *(undefined8 *)puVar7 = uVar12;
      *(undefined8 *)(param_1 + 0x5a) = uVar11;
      *(undefined8 *)(param_1 + 0x58) = uVar10;
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0x56);
      uVar12 = *(undefined8 *)puVar7;
      uVar11 = *(undefined8 *)(param_1 + 0x5a);
      uVar10 = *(undefined8 *)(param_1 + 0x58);
      uVar16 = *(undefined8 *)pbVar1;
      uVar15 = *(undefined8 *)(param_2 + 0x168);
      uVar14 = *(undefined8 *)(param_2 + 0x160);
      *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_2 + 0x158);
      *(undefined8 *)puVar7 = uVar16;
      *(undefined8 *)(param_1 + 0x5a) = uVar15;
      *(undefined8 *)(param_1 + 0x58) = uVar14;
      *(undefined8 *)(param_2 + 0x158) = uVar13;
      *(undefined8 *)pbVar1 = uVar12;
      *(undefined8 *)(param_2 + 0x168) = uVar11;
      *(undefined8 *)(param_2 + 0x160) = uVar10;
    }
LAB_1004e2594:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return param_1;
    }
  }
  func_0x000107c60e78();
  uStack_c8 = 0x1004e25bc;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d0 = &ppuStack_70;
  if ((char)param_2[1] < '\0') {
    pbVar1 = param_2 + 0x130;
    puVar7 = param_1 + 0x4c;
    uVar2 = *param_1;
    *param_1 = uVar2 | 0x8000;
    if ((uVar2 >> 0xf & 1) == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x138);
      uVar12 = *(undefined8 *)pbVar1;
      uVar11 = *(undefined8 *)(param_2 + 0x148);
      uVar10 = *(undefined8 *)(param_2 + 0x140);
      param_2[0x138] = 0;
      param_2[0x139] = 0;
      param_2[0x13a] = 0;
      param_2[0x13b] = 0;
      param_2[0x13c] = 0;
      param_2[0x13d] = 0;
      param_2[0x13e] = 0;
      param_2[0x13f] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_2[0x148] = 0;
      param_2[0x149] = 0;
      param_2[0x14a] = 0;
      param_2[0x14b] = 0;
      param_2[0x14c] = 0;
      param_2[0x14d] = 0;
      param_2[0x14e] = 0;
      param_2[0x14f] = 0;
      param_2[0x140] = 0;
      param_2[0x141] = 0;
      param_2[0x142] = 0;
      param_2[0x143] = 0;
      param_2[0x144] = 0;
      param_2[0x145] = 0;
      param_2[0x146] = 0;
      param_2[0x147] = 0;
      *(undefined8 *)(param_1 + 0x4e) = uVar13;
      *(undefined8 *)puVar7 = uVar12;
      *(undefined8 *)(param_1 + 0x52) = uVar11;
      *(undefined8 *)(param_1 + 0x50) = uVar10;
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0x4e);
      uVar12 = *(undefined8 *)puVar7;
      uVar11 = *(undefined8 *)(param_1 + 0x52);
      uVar10 = *(undefined8 *)(param_1 + 0x50);
      uVar16 = *(undefined8 *)pbVar1;
      uVar15 = *(undefined8 *)(param_2 + 0x148);
      uVar14 = *(undefined8 *)(param_2 + 0x140);
      *(undefined8 *)(param_1 + 0x4e) = *(undefined8 *)(param_2 + 0x138);
      *(undefined8 *)puVar7 = uVar16;
      *(undefined8 *)(param_1 + 0x52) = uVar15;
      *(undefined8 *)(param_1 + 0x50) = uVar14;
      *(undefined8 *)(param_2 + 0x138) = uVar13;
      *(undefined8 *)pbVar1 = uVar12;
      *(undefined8 *)(param_2 + 0x148) = uVar11;
      *(undefined8 *)(param_2 + 0x140) = uVar10;
    }
LAB_1004e2654:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return param_1;
    }
  }
  else {
    uVar2 = *param_1;
    *param_1 = uVar2 & 0xffff7fff;
    if ((uVar2 >> 0xf & 1) == 0) goto LAB_1004e2654;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      param_1 = param_1 + 0x4c;
      unaff_x30 = 0x1004e25bc;
      puVar5 = auStack_c0;
      unaff_x29 = &ppuStack_70;
      goto FUN_1004b6d90;
    }
  }
  func_0x000107c60e78();
  uStack_128 = 0x1004e267c;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_130 = &ppuStack_d0;
  if ((param_2[2] & 1) == 0) {
    uVar2 = *param_1;
    *param_1 = uVar2 & 0xfffeffff;
    if ((uVar2 >> 0x10 & 1) == 0) goto LAB_1004e2714;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
      param_1 = param_1 + 0x44;
      unaff_x30 = 0x1004e267c;
      puVar5 = auStack_120;
      unaff_x29 = &ppuStack_d0;
      goto FUN_1004b6d90;
    }
  }
  else {
    pbVar1 = param_2 + 0x110;
    puVar7 = param_1 + 0x44;
    uVar2 = *param_1;
    *param_1 = uVar2 | 0x10000;
    if ((uVar2 >> 0x10 & 1) == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x118);
      uVar12 = *(undefined8 *)pbVar1;
      uVar11 = *(undefined8 *)(param_2 + 0x128);
      uVar10 = *(undefined8 *)(param_2 + 0x120);
      param_2[0x118] = 0;
      param_2[0x119] = 0;
      param_2[0x11a] = 0;
      param_2[0x11b] = 0;
      param_2[0x11c] = 0;
      param_2[0x11d] = 0;
      param_2[0x11e] = 0;
      param_2[0x11f] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_2[0x128] = 0;
      param_2[0x129] = 0;
      param_2[0x12a] = 0;
      param_2[299] = 0;
      param_2[300] = 0;
      param_2[0x12d] = 0;
      param_2[0x12e] = 0;
      param_2[0x12f] = 0;
      param_2[0x120] = 0;
      param_2[0x121] = 0;
      param_2[0x122] = 0;
      param_2[0x123] = 0;
      param_2[0x124] = 0;
      param_2[0x125] = 0;
      param_2[0x126] = 0;
      param_2[0x127] = 0;
      *(undefined8 *)(param_1 + 0x46) = uVar13;
      *(undefined8 *)puVar7 = uVar12;
      *(undefined8 *)(param_1 + 0x4a) = uVar11;
      *(undefined8 *)(param_1 + 0x48) = uVar10;
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0x46);
      uVar12 = *(undefined8 *)puVar7;
      uVar11 = *(undefined8 *)(param_1 + 0x4a);
      uVar10 = *(undefined8 *)(param_1 + 0x48);
      uVar16 = *(undefined8 *)pbVar1;
      uVar15 = *(undefined8 *)(param_2 + 0x128);
      uVar14 = *(undefined8 *)(param_2 + 0x120);
      *(undefined8 *)(param_1 + 0x46) = *(undefined8 *)(param_2 + 0x118);
      *(undefined8 *)puVar7 = uVar16;
      *(undefined8 *)(param_1 + 0x4a) = uVar15;
      *(undefined8 *)(param_1 + 0x48) = uVar14;
      *(undefined8 *)(param_2 + 0x118) = uVar13;
      *(undefined8 *)pbVar1 = uVar12;
      *(undefined8 *)(param_2 + 0x128) = uVar11;
      *(undefined8 *)(param_2 + 0x120) = uVar10;
    }
LAB_1004e2714:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
      return param_1;
    }
  }
  func_0x000107c60e78();
  uStack_188 = 0x1004e273c;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_190 = &ppuStack_130;
  if ((param_2[2] >> 1 & 1) == 0) {
    uVar2 = *param_1;
    *param_1 = uVar2 & 0xfffdffff;
    puVar7 = param_1;
    if ((uVar2 >> 0x11 & 1) == 0) goto LAB_1004e27d0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
      param_1 = param_1 + 0x3c;
      unaff_x30 = 0x1004e273c;
      puVar5 = auStack_180;
      unaff_x29 = &ppuStack_130;
      goto FUN_1004b6d90;
    }
  }
  else {
    pbVar1 = param_2 + 0xf0;
    uVar2 = *param_1;
    puVar7 = param_1 + 0x3c;
    *param_1 = uVar2 | 0x20000;
    if ((uVar2 >> 0x11 & 1) == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0xf8);
      uVar12 = *(undefined8 *)pbVar1;
      uVar11 = *(undefined8 *)(param_2 + 0x108);
      uVar10 = *(undefined8 *)(param_2 + 0x100);
      param_2[0xf8] = 0;
      param_2[0xf9] = 0;
      param_2[0xfa] = 0;
      param_2[0xfb] = 0;
      param_2[0xfc] = 0;
      param_2[0xfd] = 0;
      param_2[0xfe] = 0;
      param_2[0xff] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_2[0x108] = 0;
      param_2[0x109] = 0;
      param_2[0x10a] = 0;
      param_2[0x10b] = 0;
      param_2[0x10c] = 0;
      param_2[0x10d] = 0;
      param_2[0x10e] = 0;
      param_2[0x10f] = 0;
      param_2[0x100] = 0;
      param_2[0x101] = 0;
      param_2[0x102] = 0;
      param_2[0x103] = 0;
      param_2[0x104] = 0;
      param_2[0x105] = 0;
      param_2[0x106] = 0;
      param_2[0x107] = 0;
      *(undefined8 *)(param_1 + 0x3e) = uVar13;
      *(undefined8 *)puVar7 = uVar12;
      *(undefined8 *)(param_1 + 0x42) = uVar11;
      *(undefined8 *)(param_1 + 0x40) = uVar10;
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0x3e);
      uVar12 = *(undefined8 *)puVar7;
      uVar11 = *(undefined8 *)(param_1 + 0x42);
      uVar10 = *(undefined8 *)(param_1 + 0x40);
      uVar16 = *(undefined8 *)pbVar1;
      uVar15 = *(undefined8 *)(param_2 + 0x108);
      uVar14 = *(undefined8 *)(param_2 + 0x100);
      *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(param_2 + 0xf8);
      *(undefined8 *)puVar7 = uVar16;
      *(undefined8 *)(param_1 + 0x42) = uVar15;
      *(undefined8 *)(param_1 + 0x40) = uVar14;
      *(undefined8 *)(param_2 + 0xf8) = uVar13;
      *(undefined8 *)pbVar1 = uVar12;
      *(undefined8 *)(param_2 + 0x108) = uVar11;
      *(undefined8 *)(param_2 + 0x100) = uVar10;
    }
LAB_1004e27d0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
      return puVar7;
    }
  }
  func_0x000107c60e78();
  uStack_1e8 = 0x1004e27f8;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1f0 = &ppuStack_190;
  if ((param_2[2] >> 2 & 1) == 0) {
    uVar2 = *puVar7;
    *puVar7 = uVar2 & 0xfffbffff;
    param_1 = puVar7;
    if ((uVar2 >> 0x12 & 1) == 0) goto LAB_1004e288c;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
      param_1 = puVar7 + 0x34;
      unaff_x30 = 0x1004e27f8;
      puVar5 = auStack_1e0;
      unaff_x29 = &ppuStack_190;
      goto FUN_1004b6d90;
    }
  }
  else {
    pbVar1 = param_2 + 0xd0;
    uVar2 = *puVar7;
    param_1 = puVar7 + 0x34;
    *puVar7 = uVar2 | 0x40000;
    if ((uVar2 >> 0x12 & 1) == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0xd8);
      uVar12 = *(undefined8 *)pbVar1;
      uVar11 = *(undefined8 *)(param_2 + 0xe8);
      uVar10 = *(undefined8 *)(param_2 + 0xe0);
      param_2[0xd8] = 0;
      param_2[0xd9] = 0;
      param_2[0xda] = 0;
      param_2[0xdb] = 0;
      param_2[0xdc] = 0;
      param_2[0xdd] = 0;
      param_2[0xde] = 0;
      param_2[0xdf] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_2[0xe8] = 0;
      param_2[0xe9] = 0;
      param_2[0xea] = 0;
      param_2[0xeb] = 0;
      param_2[0xec] = 0;
      param_2[0xed] = 0;
      param_2[0xee] = 0;
      param_2[0xef] = 0;
      param_2[0xe0] = 0;
      param_2[0xe1] = 0;
      param_2[0xe2] = 0;
      param_2[0xe3] = 0;
      param_2[0xe4] = 0;
      param_2[0xe5] = 0;
      param_2[0xe6] = 0;
      param_2[0xe7] = 0;
      *(undefined8 *)(puVar7 + 0x36) = uVar13;
      *(undefined8 *)param_1 = uVar12;
      *(undefined8 *)(puVar7 + 0x3a) = uVar11;
      *(undefined8 *)(puVar7 + 0x38) = uVar10;
    }
    else {
      uVar13 = *(undefined8 *)(puVar7 + 0x36);
      uVar12 = *(undefined8 *)param_1;
      uVar11 = *(undefined8 *)(puVar7 + 0x3a);
      uVar10 = *(undefined8 *)(puVar7 + 0x38);
      uVar16 = *(undefined8 *)pbVar1;
      uVar15 = *(undefined8 *)(param_2 + 0xe8);
      uVar14 = *(undefined8 *)(param_2 + 0xe0);
      *(undefined8 *)(puVar7 + 0x36) = *(undefined8 *)(param_2 + 0xd8);
      *(undefined8 *)param_1 = uVar16;
      *(undefined8 *)(puVar7 + 0x3a) = uVar15;
      *(undefined8 *)(puVar7 + 0x38) = uVar14;
      *(undefined8 *)(param_2 + 0xd8) = uVar13;
      *(undefined8 *)pbVar1 = uVar12;
      *(undefined8 *)(param_2 + 0xe8) = uVar11;
      *(undefined8 *)(param_2 + 0xe0) = uVar10;
    }
LAB_1004e288c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
      return param_1;
    }
  }
  func_0x000107c60e78();
  puVar5 = auStack_2a0;
  uStack_248 = 0x1004e28b4;
  unaff_x29 = &ppuStack_250;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_250 = &ppuStack_1f0;
  if ((param_2[2] >> 3 & 1) == 0) {
    uVar2 = *param_1;
    *param_1 = uVar2 & 0xfff7ffff;
    puVar7 = param_1;
    if ((uVar2 >> 0x13 & 1) == 0) goto LAB_1004e2948;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
      param_1 = param_1 + 0x2c;
      unaff_x30 = 0x1004e28b4;
      puVar5 = auStack_240;
      unaff_x29 = &ppuStack_1f0;
      goto FUN_1004b6d90;
    }
  }
  else {
    pbVar1 = param_2 + 0xb0;
    uVar2 = *param_1;
    puVar7 = param_1 + 0x2c;
    *param_1 = uVar2 | 0x80000;
    if ((uVar2 >> 0x13 & 1) == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0xb8);
      uVar12 = *(undefined8 *)pbVar1;
      uVar11 = *(undefined8 *)(param_2 + 200);
      uVar10 = *(undefined8 *)(param_2 + 0xc0);
      param_2[0xb8] = 0;
      param_2[0xb9] = 0;
      param_2[0xba] = 0;
      param_2[0xbb] = 0;
      param_2[0xbc] = 0;
      param_2[0xbd] = 0;
      param_2[0xbe] = 0;
      param_2[0xbf] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_2[200] = 0;
      param_2[0xc9] = 0;
      param_2[0xca] = 0;
      param_2[0xcb] = 0;
      param_2[0xcc] = 0;
      param_2[0xcd] = 0;
      param_2[0xce] = 0;
      param_2[0xcf] = 0;
      param_2[0xc0] = 0;
      param_2[0xc1] = 0;
      param_2[0xc2] = 0;
      param_2[0xc3] = 0;
      param_2[0xc4] = 0;
      param_2[0xc5] = 0;
      param_2[0xc6] = 0;
      param_2[199] = 0;
      *(undefined8 *)(param_1 + 0x2e) = uVar13;
      *(undefined8 *)puVar7 = uVar12;
      *(undefined8 *)(param_1 + 0x32) = uVar11;
      *(undefined8 *)(param_1 + 0x30) = uVar10;
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0x2e);
      uVar12 = *(undefined8 *)puVar7;
      uVar11 = *(undefined8 *)(param_1 + 0x32);
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      uVar16 = *(undefined8 *)pbVar1;
      uVar15 = *(undefined8 *)(param_2 + 200);
      uVar14 = *(undefined8 *)(param_2 + 0xc0);
      *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0xb8);
      *(undefined8 *)puVar7 = uVar16;
      *(undefined8 *)(param_1 + 0x32) = uVar15;
      *(undefined8 *)(param_1 + 0x30) = uVar14;
      *(undefined8 *)(param_2 + 0xb8) = uVar13;
      *(undefined8 *)pbVar1 = uVar12;
      *(undefined8 *)(param_2 + 200) = uVar11;
      *(undefined8 *)(param_2 + 0xc0) = uVar10;
    }
LAB_1004e2948:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
      return puVar7;
    }
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_2[2] >> 4 & 1) == 0) {
    uVar2 = *puVar7;
    *puVar7 = uVar2 & 0xffefffff;
    puVar8 = puVar7;
    if ((uVar2 >> 0x14 & 1) != 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
        param_1 = puVar7 + 0x24;
        unaff_x30 = 0x1004e2970;
FUN_1004b6d90:
        *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
        *(undefined8 *)(puVar5 + -0x18) = unaff_x19;
        *(undefined8 ****)(puVar5 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar5 + -8) = unaff_x30;
        plVar6 = *(long **)param_1;
        if ((long *)0x1 < plVar6) {
          do {
            lVar9 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 + -1 == 0) {
            (*(code *)plVar6[1])();
          }
        }
        return param_1;
      }
      goto LAB_1004e2a28;
    }
  }
  else {
    pbVar1 = param_2 + 0x90;
    uVar2 = *puVar7;
    puVar8 = puVar7 + 0x24;
    *puVar7 = uVar2 | 0x100000;
    if ((uVar2 >> 0x14 & 1) == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x98);
      uVar12 = *(undefined8 *)pbVar1;
      uVar11 = *(undefined8 *)(param_2 + 0xa8);
      uVar10 = *(undefined8 *)(param_2 + 0xa0);
      param_2[0x98] = 0;
      param_2[0x99] = 0;
      param_2[0x9a] = 0;
      param_2[0x9b] = 0;
      param_2[0x9c] = 0;
      param_2[0x9d] = 0;
      param_2[0x9e] = 0;
      param_2[0x9f] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_2[0xa8] = 0;
      param_2[0xa9] = 0;
      param_2[0xaa] = 0;
      param_2[0xab] = 0;
      param_2[0xac] = 0;
      param_2[0xad] = 0;
      param_2[0xae] = 0;
      param_2[0xaf] = 0;
      param_2[0xa0] = 0;
      param_2[0xa1] = 0;
      param_2[0xa2] = 0;
      param_2[0xa3] = 0;
      param_2[0xa4] = 0;
      param_2[0xa5] = 0;
      param_2[0xa6] = 0;
      param_2[0xa7] = 0;
      *(undefined8 *)(puVar7 + 0x26) = uVar13;
      *(undefined8 *)puVar8 = uVar12;
      *(undefined8 *)(puVar7 + 0x2a) = uVar11;
      *(undefined8 *)(puVar7 + 0x28) = uVar10;
    }
    else {
      uVar13 = *(undefined8 *)(puVar7 + 0x26);
      uVar12 = *(undefined8 *)puVar8;
      uVar11 = *(undefined8 *)(puVar7 + 0x2a);
      uVar10 = *(undefined8 *)(puVar7 + 0x28);
      uVar16 = *(undefined8 *)pbVar1;
      uVar15 = *(undefined8 *)(param_2 + 0xa8);
      uVar14 = *(undefined8 *)(param_2 + 0xa0);
      *(undefined8 *)(puVar7 + 0x26) = *(undefined8 *)(param_2 + 0x98);
      *(undefined8 *)puVar8 = uVar16;
      *(undefined8 *)(puVar7 + 0x2a) = uVar15;
      *(undefined8 *)(puVar7 + 0x28) = uVar14;
      *(undefined8 *)(param_2 + 0x98) = uVar13;
      *(undefined8 *)pbVar1 = uVar12;
      *(undefined8 *)(param_2 + 0xa8) = uVar11;
      *(undefined8 *)(param_2 + 0xa0) = uVar10;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar8;
  }
LAB_1004e2a28:
  func_0x000107c60e78();
  if ((param_2[2] >> 6 & 1) != 0) {
    uVar2 = *puVar8;
    *puVar8 = uVar2 | 0x400000;
    if ((uVar2 >> 0x16 & 1) == 0) {
      func_0x000104a89cc4();
    }
    else {
      func_0x000104a89a04(puVar8 + 0x18,param_2 + 0x60);
    }
    return puVar8 + 0x18;
  }
  uVar2 = *puVar8;
  *puVar8 = uVar2 & 0xffbfffff;
  if ((uVar2 >> 0x16 & 1) == 0) {
    return puVar8;
  }
  puVar8 = puVar8 + 0x18;
  if (*(long *)puVar8 != 0) {
    func_0x000104a874fc(puVar8);
  }
  return puVar8;
}



/* Entry: 1004e2a2c; end: 1004e2a57;  */

uint * FUN_1004e2a2c(uint *param_1,long param_2)

{
  uint uVar1;
  
  if ((*(byte *)(param_2 + 2) >> 6 & 1) != 0) {
    uVar1 = *param_1;
    *param_1 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      func_0x000104a89cc4();
    }
    else {
      func_0x000104a89a04(param_1 + 0x18,param_2 + 0x60);
    }
    return param_1 + 0x18;
  }
  uVar1 = *param_1;
  *param_1 = uVar1 & 0xffbfffff;
  if ((uVar1 >> 0x16 & 1) == 0) {
    return param_1;
  }
  param_1 = param_1 + 0x18;
  if (*(long *)param_1 != 0) {
    func_0x000104a874fc(param_1);
  }
  return param_1;
}



/* Entry: 1004e2a58; end: 1004e2b13;  */

uint * FUN_1004e2a58(uint *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_2 + 2) < '\0') {
    puVar1 = (undefined8 *)(param_2 + 0x40);
    uVar2 = *param_1;
    puVar6 = param_1 + 0x10;
    *param_1 = uVar2 | 0x800000;
    if ((uVar2 >> 0x17 & 1) == 0) {
      uVar11 = *(undefined8 *)(param_2 + 0x48);
      uVar10 = *puVar1;
      uVar9 = *(undefined8 *)(param_2 + 0x58);
      uVar8 = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_2 + 0x48) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x12) = uVar11;
      *(undefined8 *)puVar6 = uVar10;
      *(undefined8 *)(param_1 + 0x16) = uVar9;
      *(undefined8 *)(param_1 + 0x14) = uVar8;
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + 0x12);
      uVar10 = *(undefined8 *)puVar6;
      uVar9 = *(undefined8 *)(param_1 + 0x16);
      uVar8 = *(undefined8 *)(param_1 + 0x14);
      uVar14 = *puVar1;
      uVar13 = *(undefined8 *)(param_2 + 0x58);
      uVar12 = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x48);
      *(undefined8 *)puVar6 = uVar14;
      *(undefined8 *)(param_1 + 0x16) = uVar13;
      *(undefined8 *)(param_1 + 0x14) = uVar12;
      *(undefined8 *)(param_2 + 0x48) = uVar11;
      *puVar1 = uVar10;
      *(undefined8 *)(param_2 + 0x58) = uVar9;
      *(undefined8 *)(param_2 + 0x50) = uVar8;
    }
  }
  else {
    uVar2 = *param_1;
    *param_1 = uVar2 & 0xff7fffff;
    puVar6 = param_1;
    if ((uVar2 >> 0x17 & 1) != 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
        plVar5 = *(long **)(param_1 + 0x10);
        if ((long *)0x1 < plVar5) {
          do {
            lVar7 = *plVar5;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 + -1 == 0) {
            (*(code *)plVar5[1])();
          }
        }
        return param_1 + 0x10;
      }
      goto LAB_1004e2b10;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return puVar6;
  }
LAB_1004e2b10:
  func_0x000107c60e78();
  if ((*(byte *)(param_2 + 3) >> 2 & 1) != 0) {
    uVar2 = *puVar6;
    *puVar6 = uVar2 | 0x4000000;
    if ((uVar2 >> 0x1a & 1) == 0) {
      func_0x000104a8a0b8();
    }
    else {
      func_0x000104a89d80(puVar6 + 2,param_2 + 8);
    }
    return puVar6 + 2;
  }
  uVar2 = *puVar6;
  *puVar6 = uVar2 & 0xfbffffff;
  if ((uVar2 >> 0x1a & 1) == 0) {
    return puVar6;
  }
  puVar6 = puVar6 + 2;
  if (*(long *)puVar6 != 0) {
    func_0x000104a875bc(puVar6);
  }
  return puVar6;
}



/* Entry: 1004e2b14; end: 1004e2b3f;  */

uint * FUN_1004e2b14(uint *param_1,long param_2)

{
  uint uVar1;
  
  if ((*(byte *)(param_2 + 3) >> 2 & 1) != 0) {
    uVar1 = *param_1;
    *param_1 = uVar1 | 0x4000000;
    if ((uVar1 >> 0x1a & 1) == 0) {
      func_0x000104a8a0b8();
    }
    else {
      func_0x000104a89d80(param_1 + 2,param_2 + 8);
    }
    return param_1 + 2;
  }
  uVar1 = *param_1;
  *param_1 = uVar1 & 0xfbffffff;
  if ((uVar1 >> 0x1a & 1) == 0) {
    return param_1;
  }
  param_1 = param_1 + 2;
  if (*(long *)param_1 != 0) {
    func_0x000104a875bc(param_1);
  }
  return param_1;
}



/* Entry: 1004e2b40; end: 1004e2bc7;  */

void FUN_1004e2b40(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    do {
      if (plVar3[1] == 0) break;
      uVar4 = 0;
      plVar2 = plVar3 + 6;
      do {
        FUN_1004b6d90(plVar2);
        FUN_1004b6d90(plVar2 + -4);
        uVar4 = uVar4 + 1;
        plVar2 = plVar2 + 8;
      } while (uVar4 < (ulong)plVar3[1]);
      plVar3[1] = 0;
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



/* Entry: 1004e2bc8; end: 1004e2bff;  */

long FUN_1004e2bc8(long param_1)

{
  FUN_1004e2b40(param_1 + 0x1f0);
  FUN_1004e2c00(param_1);
  return param_1;
}



/* Entry: 1004e2c00; end: 1004e2d0f;  */

uint * FUN_1004e2c00(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = *param_1;
  puVar2 = param_1;
  if ((uVar1 & 1) != 0) {
    puVar2 = param_1 + 0x74;
    FUN_1004b6d90(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    puVar2 = param_1 + 0x6c;
    FUN_1004b6d90(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    puVar2 = param_1 + 0x54;
    FUN_1004b6d90(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    puVar2 = param_1 + 0x4c;
    FUN_1004b6d90(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0x10 & 1) != 0) {
    puVar2 = param_1 + 0x44;
    FUN_1004b6d90(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    puVar2 = param_1 + 0x3c;
    FUN_1004b6d90(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0x12 & 1) != 0) {
    puVar2 = param_1 + 0x34;
    FUN_1004b6d90(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0x13 & 1) != 0) {
    puVar2 = param_1 + 0x2c;
    FUN_1004b6d90(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0x14 & 1) != 0) {
    puVar2 = param_1 + 0x24;
    FUN_1004b6d90(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0x16 & 1) != 0) {
    puVar2 = param_1 + 0x18;
    func_0x000104a874c8(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0x17 & 1) != 0) {
    puVar2 = param_1 + 0x10;
    FUN_1004b6d90(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0x1a & 1) == 0) {
    return puVar2;
  }
  param_1 = param_1 + 2;
  if (*(long *)param_1 != 0) {
    func_0x000104a875bc(param_1);
  }
  return param_1;
}



/* Entry: 1004e2d10; end: 1004e2dfb;  */

void FUN_1004e2d10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  long lStack_260;
  long lStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined1 auStack_240 [520];
  long lStack_38;
  
  puVar2 = auStack_240;
  puVar1 = auStack_240;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_1004e1dd4(auStack_240,lVar5 + 0x2a0);
  FUN_1004e23e0(*(long *)(param_1 + 0x10) + 0x140);
  FUN_1004e2bc8();
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar5 + 0x23c) < 1) {
    *(uint *)(lVar3 + 0x140) = *(uint *)(lVar3 + 0x140) & 0xffffefff;
  }
  else {
    *(uint *)(lVar3 + 0x140) = *(uint *)(lVar3 + 0x140) | 0x1000;
    *(undefined4 *)(lVar3 + 0x2b8) = *(undefined4 *)(lVar5 + 0x23c);
  }
  *(ushort *)(lVar3 + 0xb50) = *(ushort *)(lVar3 + 0xb50) | 1;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 1;
  plVar4 = *(long **)(param_1 + 0x20);
  *plVar4 = *(long *)(param_1 + 0x10) + 0x140;
  *(undefined4 *)(plVar4 + 1) = *(undefined4 *)(lVar5 + 0x4a8);
  plVar4[2] = *(long *)(lVar5 + 0x4b0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  pcStack_248 = FUN_1004e2dfc;
  lStack_260 = lVar5;
  lStack_258 = param_1;
  puStack_250 = &stack0xfffffffffffffff0;
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(puVar1 + 0x28);
  puStack_268 = puVar2 + 0x20;
  *(code **)(puVar2 + 0x28) = FUN_1004e2e7c;
  *(undefined1 **)(puVar2 + 0x30) = puVar2;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  uStack_278 = 0;
  uStack_270 = param_3;
  FUN_1004dfd88(param_4,&puStack_268,&uStack_278,&uStack_270);
  if ((uStack_278 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1004e2dfc; end: 1004e2e7b;  */

void FUN_1004e2dfc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x28);
  lStack_28 = param_2 + 0x20;
  *(code **)(param_2 + 0x28) = FUN_1004e2e7c;
  *(long *)(param_2 + 0x30) = param_2;
  *(undefined8 *)(param_2 + 0x38) = 0;
  uStack_38 = 0;
  uStack_30 = param_3;
  FUN_1004dfd88(param_4,&lStack_28,&uStack_38,&uStack_30);
  if ((uStack_38 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1004e2e7c; end: 1004e2e87;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1004e2e7c(long *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  lVar4 = param_1[3];
  plVar5 = *(long **)(lVar4 + 0x78);
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(param_1 + 2) >> 6 & 1) != 0) {
      uStack_38 = *(ulong *)(param_1[1] + 0x98);
      if ((uStack_38 & 1) != 0) {
        piVar6 = (int *)(uStack_38 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      (**(code **)(*plVar5 + 0x48))(plVar5,&uStack_38);
      if ((uStack_38 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    bVar1 = *(byte *)(param_1 + 2);
    if ((bVar1 & 1) != 0) {
      (**(code **)(**(long **)(lVar4 + 0x78) + 0x10))
                (*(long **)(lVar4 + 0x78),*(undefined8 *)param_1[1],
                 *(undefined4 *)((undefined8 *)param_1[1] + 1));
      lVar7 = *param_1;
      *(undefined8 *)(lVar4 + 0xf8) = *(undefined8 *)(param_1[1] + 0x10);
      *(undefined **)(lVar4 + 0x108) = &UNK_104a76ec0;
      *(long *)(lVar4 + 0x110) = lVar4;
      *(undefined8 *)(lVar4 + 0x118) = 0;
      *(long *)(lVar4 + 0x120) = lVar7;
      *param_1 = lVar4 + 0x100;
      bVar1 = *(byte *)(param_1 + 2);
    }
    if ((bVar1 >> 2 & 1) != 0) {
      (**(code **)(**(long **)(lVar4 + 0x78) + 0x28))
                (*(long **)(lVar4 + 0x78),*(undefined8 *)(param_1[1] + 0x28));
      bVar1 = *(byte *)(param_1 + 2);
    }
    if ((bVar1 >> 1 & 1) != 0) {
      (**(code **)(**(long **)(lVar4 + 0x78) + 0x20))
                (*(long **)(lVar4 + 0x78),*(undefined8 *)(param_1[1] + 0x18));
      bVar1 = *(byte *)(param_1 + 2);
    }
    if ((bVar1 >> 3 & 1) != 0) {
      lVar7 = param_1[1];
      *(undefined8 *)(lVar4 + 0x128) = *(undefined8 *)(lVar7 + 0x38);
      uVar8 = *(undefined8 *)(lVar7 + 0x48);
      *(undefined **)(lVar4 + 0x138) = &UNK_104a76f50;
      *(long *)(lVar4 + 0x140) = lVar4;
      *(undefined8 *)(lVar4 + 0x148) = 0;
      *(undefined8 *)(lVar4 + 0x150) = uVar8;
      *(long *)(param_1[1] + 0x48) = lVar4 + 0x130;
      bVar1 = *(byte *)(param_1 + 2);
    }
    if ((bVar1 >> 4 & 1) != 0) {
      lVar7 = param_1[1];
      *(undefined8 *)(lVar4 + 0x158) = *(undefined8 *)(lVar7 + 0x60);
      uVar8 = *(undefined8 *)(lVar7 + 0x78);
      *(undefined **)(lVar4 + 0x168) = &UNK_104a76fec;
      *(long *)(lVar4 + 0x170) = lVar4;
      *(undefined8 *)(lVar4 + 0x178) = 0;
      *(undefined8 *)(lVar4 + 0x180) = uVar8;
      *(long *)(param_1[1] + 0x78) = lVar4 + 0x160;
    }
  }
  if ((*(byte *)(param_1 + 2) >> 5 & 1) != 0) {
    lVar7 = param_1[1];
    uVar8 = *(undefined8 *)(lVar7 + 0x80);
    *(undefined8 *)(lVar4 + 400) = *(undefined8 *)(lVar7 + 0x88);
    *(undefined8 *)(lVar4 + 0x188) = uVar8;
    uVar8 = *(undefined8 *)(lVar7 + 0x90);
    *(undefined **)(lVar4 + 0x1a0) = &UNK_104a77084;
    *(long *)(lVar4 + 0x1a8) = lVar4;
    *(undefined8 *)(lVar4 + 0x1b0) = 0;
    *(undefined8 *)(lVar4 + 0x1b8) = uVar8;
    *(long *)(param_1[1] + 0x90) = lVar4 + 0x198;
  }
  if (*(long *)(lVar4 + 0xf0) == 0) {
    puVar10 = (ulong *)(lVar4 + 0x88);
    uVar9 = *puVar10;
    if (uVar9 == 0) {
      if ((*(byte *)(param_1 + 2) >> 6 & 1) == 0) {
        FUN_1004e3228(lVar4,param_1);
        if ((*(byte *)(param_1 + 2) & 1) == 0) {
          FUN_100612044(*(undefined8 *)(lVar4 + 0x50),"batch does not include send_initial_metadata"
                       );
          return;
        }
        uStack_58 = 0;
        FUN_1004e3268(lVar4,&uStack_58);
        if ((uStack_58 & 1) == 0) {
          return;
        }
        FUN_10084dad0();
        return;
      }
      func_0x000104a75cac(puVar10,param_1[1] + 0x98);
      uStack_48 = *puVar10;
      if ((uStack_48 & 1) != 0) {
        piVar6 = (int *)(uStack_48 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000104a76d10(lVar4,&uStack_48,&UNK_104a7731c);
      FUN_1004bdf74(&uStack_48);
      uStack_50 = *puVar10;
      if ((uStack_50 & 1) != 0) {
        piVar6 = (int *)(uStack_50 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000104adfc18(param_1,&uStack_50,*(undefined8 *)(lVar4 + 0x50));
      puVar10 = &uStack_50;
    }
    else {
      if ((uVar9 & 1) != 0) {
        piVar6 = (int *)(uVar9 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_40 = uVar9;
      func_0x000104adfc18(param_1,&uStack_40,*(undefined8 *)(lVar4 + 0x50));
      puVar10 = &uStack_40;
    }
    FUN_1004bdf74(puVar10);
  }
  else {
    FUN_1008dbfdc(*(long *)(lVar4 + 0xf0),param_1);
  }
  return;
}



/* Entry: 1004e2e88; end: 1004e31b7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1004e2e88(long param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  plVar4 = *(long **)(param_1 + 0x78);
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(param_2 + 2) >> 6 & 1) != 0) {
      uStack_38 = *(ulong *)(param_2[1] + 0x98);
      if ((uStack_38 & 1) != 0) {
        piVar5 = (int *)(uStack_38 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = *piVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      (**(code **)(*plVar4 + 0x48))(plVar4,&uStack_38);
      if ((uStack_38 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    bVar1 = *(byte *)(param_2 + 2);
    if ((bVar1 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x78) + 0x10))
                (*(long **)(param_1 + 0x78),*(undefined8 *)param_2[1],
                 *(undefined4 *)((undefined8 *)param_2[1] + 1));
      lVar6 = *param_2;
      *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2[1] + 0x10);
      *(undefined **)(param_1 + 0x108) = &UNK_104a76ec0;
      *(long *)(param_1 + 0x110) = param_1;
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(long *)(param_1 + 0x120) = lVar6;
      *param_2 = param_1 + 0x100;
      bVar1 = *(byte *)(param_2 + 2);
    }
    if ((bVar1 >> 2 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x78) + 0x28))
                (*(long **)(param_1 + 0x78),*(undefined8 *)(param_2[1] + 0x28));
      bVar1 = *(byte *)(param_2 + 2);
    }
    if ((bVar1 >> 1 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x78) + 0x20))
                (*(long **)(param_1 + 0x78),*(undefined8 *)(param_2[1] + 0x18));
      bVar1 = *(byte *)(param_2 + 2);
    }
    if ((bVar1 >> 3 & 1) != 0) {
      lVar6 = param_2[1];
      *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(lVar6 + 0x38);
      uVar7 = *(undefined8 *)(lVar6 + 0x48);
      *(undefined **)(param_1 + 0x138) = &UNK_104a76f50;
      *(long *)(param_1 + 0x140) = param_1;
      *(undefined8 *)(param_1 + 0x148) = 0;
      *(undefined8 *)(param_1 + 0x150) = uVar7;
      *(long *)(param_2[1] + 0x48) = param_1 + 0x130;
      bVar1 = *(byte *)(param_2 + 2);
    }
    if ((bVar1 >> 4 & 1) != 0) {
      lVar6 = param_2[1];
      *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(lVar6 + 0x60);
      uVar7 = *(undefined8 *)(lVar6 + 0x78);
      *(undefined **)(param_1 + 0x168) = &UNK_104a76fec;
      *(long *)(param_1 + 0x170) = param_1;
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined8 *)(param_1 + 0x180) = uVar7;
      *(long *)(param_2[1] + 0x78) = param_1 + 0x160;
    }
  }
  if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
    lVar6 = param_2[1];
    uVar7 = *(undefined8 *)(lVar6 + 0x80);
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(lVar6 + 0x88);
    *(undefined8 *)(param_1 + 0x188) = uVar7;
    uVar7 = *(undefined8 *)(lVar6 + 0x90);
    *(undefined **)(param_1 + 0x1a0) = &UNK_104a77084;
    *(long *)(param_1 + 0x1a8) = param_1;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = uVar7;
    *(long *)(param_2[1] + 0x90) = param_1 + 0x198;
  }
  if (*(long *)(param_1 + 0xf0) == 0) {
    puVar9 = (ulong *)(param_1 + 0x88);
    uVar8 = *puVar9;
    if (uVar8 == 0) {
      if ((*(byte *)(param_2 + 2) >> 6 & 1) == 0) {
        FUN_1004e3228(param_1,param_2);
        if ((*(byte *)(param_2 + 2) & 1) == 0) {
          FUN_100612044(*(undefined8 *)(param_1 + 0x50),
                        "batch does not include send_initial_metadata");
          return;
        }
        uStack_58 = 0;
        FUN_1004e3268(param_1,&uStack_58);
        if ((uStack_58 & 1) == 0) {
          return;
        }
        FUN_10084dad0();
        return;
      }
      func_0x000104a75cac(puVar9,param_2[1] + 0x98);
      uStack_48 = *puVar9;
      if ((uStack_48 & 1) != 0) {
        piVar5 = (int *)(uStack_48 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = *piVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000104a76d10(param_1,&uStack_48,&UNK_104a7731c);
      FUN_1004bdf74(&uStack_48);
      uStack_50 = *puVar9;
      if ((uStack_50 & 1) != 0) {
        piVar5 = (int *)(uStack_50 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = *piVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000104adfc18(param_2,&uStack_50,*(undefined8 *)(param_1 + 0x50));
      puVar9 = &uStack_50;
    }
    else {
      if ((uVar8 & 1) != 0) {
        piVar5 = (int *)(uVar8 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = *piVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_40 = uVar8;
      func_0x000104adfc18(param_2,&uStack_40,*(undefined8 *)(param_1 + 0x50));
      puVar9 = &uStack_40;
    }
    FUN_1004bdf74(puVar9);
  }
  else {
    FUN_1008dbfdc(*(long *)(param_1 + 0xf0),param_2);
  }
  return;
}



/* Entry: 1004e31b8; end: 1004e3227;  */

char * FUN_1004e31b8(long param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  char *pcStack_68;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((bVar1 & 1) == 0) {
    if ((bVar1 >> 2 & 1) == 0) {
      if ((bVar1 >> 1 & 1) == 0) {
        if ((bVar1 >> 3 & 1) == 0) {
          if ((bVar1 >> 4 & 1) == 0) {
            if ((bVar1 >> 5 & 1) == 0) {
              pcVar4 = "return (size_t)-1";
              pcVar6 = 
              "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
              ;
              func_0x000104a6e964("return (size_t)-1",
                                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                                  ,0xa74);
              pcVar5 = pcVar6;
              pcVar8 = pcVar6;
              FUN_1004e31b8();
              if (*(long *)(pcVar4 + (long)pcVar5 * 8 + 0x1c0) == 0) {
                *(char **)(pcVar4 + (long)pcVar5 * 8 + 0x1c0) = pcVar6;
                return pcVar5;
              }
              func_0x000107c2c1a0();
              pcVar4 = (char *)(*(long *)(pcVar5 + 0x10) + 0xe0);
              FUN_100460448(pcVar4);
              pcVar6 = pcVar5;
              FUN_1004e332c(pcVar5,pcVar8);
              func_0x000100466b80(pcVar4);
              if ((int)pcVar6 != 0) {
                pcVar8 = *(char **)pcVar8;
                if (((ulong)pcVar8 & 1) != 0) {
                  piVar7 = (int *)(pcVar8 + -1);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
                    if (bVar3) {
                      *piVar7 = *piVar7 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                pcStack_68 = pcVar8;
                FUN_1008db498(pcVar5,&pcStack_68);
                pcVar4 = pcVar5;
                if (((ulong)pcVar8 & 1) != 0) {
                  FUN_10084dad0(pcVar8);
                  pcVar4 = pcVar8;
                }
              }
              return pcVar4;
            }
            pcVar4 = (char *)0x5;
          }
          else {
            pcVar4 = (char *)0x4;
          }
        }
        else {
          pcVar4 = (char *)0x3;
        }
      }
      else {
        pcVar4 = (char *)0x2;
      }
    }
    else {
      pcVar4 = (char *)0x1;
    }
  }
  else {
    pcVar4 = (char *)0x0;
  }
  return pcVar4;
}



/* Entry: 1004e3228; end: 1004e3267;  */

void FUN_1004e3228(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  int *piVar7;
  ulong uStack_58;
  
  puVar3 = param_2;
  puVar5 = param_2;
  FUN_1004e31b8();
  param_1 = param_1 + (long)puVar3 * 8;
  if (*(long *)(param_1 + 0x1c0) == 0) {
    *(ulong **)(param_1 + 0x1c0) = param_2;
    return;
  }
  func_0x000107c2c1a0();
  uVar6 = puVar3[2];
  FUN_100460448(uVar6 + 0xe0);
  puVar4 = puVar3;
  FUN_1004e332c(puVar3,puVar5);
  func_0x000100466b80(uVar6 + 0xe0);
  if ((int)puVar4 != 0) {
    uVar6 = *puVar5;
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
    uStack_58 = uVar6;
    FUN_1008db498(puVar3,&uStack_58);
    if ((uVar6 & 1) != 0) {
      FUN_10084dad0(uVar6);
    }
  }
  return;
}



/* Entry: 1004e3268; end: 1004e332b;  */

void FUN_1004e3268(long param_1,ulong *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  ulong uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x10) + 0xe0;
  FUN_100460448(lVar1);
  lVar4 = param_1;
  FUN_1004e332c(param_1,param_2);
  func_0x000100466b80(lVar1);
  if ((int)lVar4 != 0) {
    uVar6 = *param_2;
    if ((uVar6 & 1) != 0) {
      piVar5 = (int *)(uVar6 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = uVar6;
    FUN_1008db498(param_1,&uStack_38);
    if ((uVar6 & 1) != 0) {
      FUN_10084dad0(uVar6);
    }
  }
  return;
}



/* Entry: 1004e332c; end: 1004e36d7;  */

undefined *** FUN_1004e332c(undefined **param_1,undefined *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  long lVar5;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined ***pppuStack_110;
  undefined ***pppuStack_108;
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined ***pppuStack_a0;
  undefined **appuStack_98 [3];
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined ***pppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = param_2;
  if (param_1[0x1b] != (undefined *)0x0) {
    func_0x000107c2c190();
    goto LAB_1004e35e8;
  }
  if (param_1[0x1e] != (undefined *)0x0) {
    func_0x000107c2c18c();
    goto LAB_1004e35e8;
  }
  uStack_e0 = **(undefined8 **)(param_1[0x38] + 8);
  if (param_1[3] == (undefined *)0x0) {
    puStack_120 = (undefined *)((long)param_1 + 0x21);
    puStack_118 = (undefined *)(ulong)*(byte *)(param_1 + 4);
  }
  else {
    puStack_118 = param_1[4];
    puStack_120 = param_1[5];
  }
  uVar1 = *(undefined4 *)(*(undefined8 **)(param_1[0x38] + 8) + 1);
  ppuStack_d8 = &PTR_DAT_1107c1330;
  ppuStack_e8 = &PTR_DAT_1107c1228;
  pppuStack_110 = &ppuStack_e8;
  pppuStack_108 = &ppuStack_d8;
  ppuStack_d0 = param_1;
  (**(code **)(**(long **)(param_1[2] + 0x120) + 0x10))
            (auStack_100,*(long **)(param_1[2] + 0x120),&puStack_120);
  ppuStack_58 = &PTR_DAT_1107c1ce0;
  pppuStack_40 = &ppuStack_58;
  ppuStack_78 = &PTR_DAT_1107c1d70;
  pppuStack_60 = &ppuStack_78;
  pppuStack_80 = (undefined ***)0x0;
  pppuVar3 = (undefined ***)0x20;
  ppuStack_70 = param_1;
  ppuStack_50 = param_1;
  func_0x000107c60e20();
  *pppuVar3 = &PTR_DAT_1107c1e00;
  pppuVar3[1] = param_1;
  *(undefined4 *)(pppuVar3 + 2) = uVar1;
  ppuStack_a8 = &puStack_c8;
  pppuVar3[3] = ppuStack_a8;
  ppuStack_b8 = &PTR_DAT_1107c1e90;
  pppuStack_a0 = &ppuStack_b8;
  ppuStack_b0 = param_1;
  pppuStack_80 = pppuVar3;
  switch(uStack_f0) {
  case 0:
    puStack_c0 = auStack_100;
    pppuVar3 = &ppuStack_58;
    FUN_1008db254(pppuVar3,&puStack_c0);
    break;
  case 1:
    FUN_1004e3790(param_1);
    pppuVar3 = (undefined ***)0x0;
    break;
  case 2:
    puStack_c0 = auStack_100;
    func_0x000104a80eac();
    break;
  case 3:
    puStack_c0 = auStack_100;
    pppuVar3 = &ppuStack_b8;
    func_0x000104a810b4(pppuVar3,&puStack_c0);
    break;
  default:
    goto LAB_1004e35bc;
  }
  if (pppuStack_a0 == &ppuStack_b8) {
    lVar5 = 4;
    pppuVar4 = &ppuStack_b8;
code_r0x0001004e34d4:
    (*(code *)(*pppuVar4)[lVar5])();
  }
  else if (pppuStack_a0 != (undefined ***)0x0) {
    lVar5 = 5;
    pppuVar4 = pppuStack_a0;
    goto code_r0x0001004e34d4;
  }
  if (pppuStack_80 == appuStack_98) {
    lVar5 = 4;
    pppuVar4 = appuStack_98;
code_r0x0001004e3504:
    (*(code *)(*pppuVar4)[lVar5])();
  }
  else if (pppuStack_80 != (undefined ***)0x0) {
    lVar5 = 5;
    pppuVar4 = pppuStack_80;
    goto code_r0x0001004e3504;
  }
  if (pppuStack_60 == &ppuStack_78) {
    lVar5 = 4;
    pppuVar4 = &ppuStack_78;
code_r0x0001004e3534:
    (*(code *)(*pppuVar4)[lVar5])();
  }
  else if (pppuStack_60 != (undefined ***)0x0) {
    lVar5 = 5;
    pppuVar4 = pppuStack_60;
    goto code_r0x0001004e3534;
  }
  if (pppuStack_40 == &ppuStack_58) {
    lVar5 = 4;
    pppuVar4 = &ppuStack_58;
code_r0x0001004e3564:
    (*(code *)(*pppuVar4)[lVar5])();
  }
  else if (pppuStack_40 != (undefined ***)0x0) {
    lVar5 = 5;
    pppuVar4 = pppuStack_40;
    goto code_r0x0001004e3564;
  }
  FUN_1004e38fc(auStack_100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar3;
  }
  func_0x000107c60e78();
LAB_1004e35bc:
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                ,0x695,2,"assertion failed: %s");
  func_0x000107c60ebc();
LAB_1004e35e8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1004e35ec);
  (*pcVar2)();
}



/* Entry: 1004e36d8; end: 1004e378f;  */

void FUN_1004e36d8(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uStack_30;
  undefined1 uStack_21;
  
  if ((*(char *)(param_2 + 0x10) == '\0') && (lVar5 = *(long *)(param_2 + 8), lVar5 != 0)) {
    *(undefined1 *)(param_2 + 0x10) = 1;
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar4 = (undefined8 *)0x30;
    FUN_100460200();
    *puVar4 = FUN_1004e3954;
    puVar4[1] = lVar5;
    puVar4[3] = FUN_1004be1e0;
    puVar4[4] = puVar4;
    puVar4[5] = 0;
    uStack_30 = 0;
    FUN_1004bd7e8(&uStack_21,puVar4 + 2,&uStack_30);
    if ((uStack_30 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 1004e3790; end: 1004e3867;  */

void FUN_1004e3790(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plStack_28;
  
  if ((char)param_1[0x19] == '\0') {
    *(undefined1 *)(param_1 + 0x19) = 1;
    lVar5 = param_1[2];
    lVar4 = param_1[0xc];
    lVar6 = *(long *)(lVar5 + 0x128);
    param_1[0x17] = (long)param_1;
    param_1[0x18] = lVar6;
    *(long **)(lVar5 + 0x128) = param_1 + 0x17;
    FUN_1004bdfa0(lVar4,*(undefined8 *)(lVar5 + 0x60));
    lVar4 = 0x28;
    func_0x000107c60e20();
    plVar1 = param_1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_28 = param_1;
    FUN_1004e3868(lVar4,&plStack_28);
    param_1[0x1a] = lVar4;
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
      if (lVar4 + -1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  return;
}



/* Entry: 1004e3868; end: 1004e38e7;  */

long * FUN_1004e3868(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  plVar3 = *(long **)(*param_1 + 0x48);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  param_1[2] = (long)&UNK_104a7ea10;
  param_1[3] = (long)param_1;
  param_1[4] = 0;
  FUN_1004be0b8(*(undefined8 *)(*param_1 + 0x50),param_1 + 1);
  return param_1;
}



/* Entry: 1004e38e8; end: 1004e38fb;  */

void FUN_1004e38e8(void)

{
  return;
}



/* Entry: 1004e38fc; end: 1004e3953;  */

long FUN_1004e38fc(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107c1158)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return param_1;
}



/* Entry: 1004e3954; end: 1004e3a97;  */

void FUN_1004e3954(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  pppuVar8 = *(undefined ****)(param_1 + 0x18);
  if (pppuVar8 != (undefined ***)0x0) {
    pppuVar4 = pppuVar8 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
      if (bVar2) {
        *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_48 = &PTR_DAT_1107c2240;
  lStack_40 = param_1;
  pppuStack_30 = &ppuStack_48;
  FUN_1004be2c8(uVar3,&ppuStack_48,&uStack_49);
  if (pppuStack_30 == &ppuStack_48) {
    lVar6 = 4;
    pppuVar4 = &ppuStack_48;
LAB_1004e39d8:
    (*(code *)(*pppuVar4)[lVar6])();
  }
  else {
    pppuVar4 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar6 = 5;
      goto LAB_1004e39d8;
    }
  }
  if (pppuVar8 != (undefined ***)0x0) {
    pppuVar5 = pppuVar8 + 1;
    do {
      ppuVar7 = *pppuVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar2) {
        *pppuVar5 = (undefined **)((long)ppuVar7 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (ppuVar7 == (undefined **)0x0) {
      (*(code *)(*pppuVar8)[2])(pppuVar8);
      pppuVar4 = pppuVar8;
      func_0x000107c60d68();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  if (pppuStack_30 == &ppuStack_48) {
    lVar6 = 4;
    pppuVar5 = &ppuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_1004e3a78;
    lVar6 = 5;
    pppuVar5 = pppuStack_30;
  }
  (*(code *)(*pppuVar5)[lVar6])();
LAB_1004e3a78:
  func_0x000107c2c1c0(pppuVar8 == (undefined ***)0x0);
  func_0x000107c60bd8();
  ppuVar7 = pppuVar4[1];
  *pppuVar8 = &PTR_DAT_1107c2240;
  pppuVar8[1] = ppuVar7;
  return;
}



/* Entry: 1004e3a98; end: 1004e3aab;  */

void FUN_1004e3a98(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1107c2240;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1004e3aac; end: 1004e3b0b;  */

void FUN_1004e3aac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  plVar4 = *(long **)(param_1 + 8);
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
  if (lVar5 + -1 != 0 || plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001004e3b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x10))();
  return;
}



/* Entry: 1004e3b0c; end: 1004e3b2b;  */

void FUN_1004e3b0c(long param_1)

{
  ulong uVar1;
  long *****ppppplVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *******ppppppplVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  long lVar12;
  long ******pppppplVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long *****ppppplVar17;
  ulong uVar18;
  int *piVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 uVar23;
  long *plVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long *plStack_238;
  long *plStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  long ******pppppplStack_1e0;
  ulong uStack_1d8;
  byte bStack_1c9;
  long *plStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  ulong *puStack_118;
  undefined8 uStack_110;
  long lStack_70;
  
  if ((*(char *)(param_1 + 0x91) != '\0') || (*(char *)(param_1 + 0x90) == '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x90) = 0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  if (*(long *)(param_1 + 0x30) == 0 && &uStack_228 != (ulong *)(param_1 + 0x38)) {
    FUN_1004c88c8(&uStack_228,*(long *)(param_1 + 0x38),*(long *)(param_1 + 0x40),
                  (*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 3) * -0x30c30c30c30c30c3
                 );
  }
  uVar23 = *(undefined8 *)(param_1 + 0x70);
  puVar11 = (undefined8 *)0x48;
  func_0x000107c60e20();
  uStack_1e8 = uStack_218;
  uVar9 = uStack_220;
  uVar18 = uStack_228;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_228 = 0;
  uStack_200 = 0;
  uStack_1f8 = uVar18;
  uStack_1f0 = uVar9;
  uStack_210 = 0;
  uStack_208 = 0;
  plVar25 = *(long **)(param_1 + 0x28);
  *puVar11 = &PTR_DAT_1107c25f0;
  puVar11[1] = 1;
  puVar11[2] = param_1;
  puVar11[4] = 0;
  puVar11[3] = 0;
  puVar11[6] = 0;
  puVar11[5] = 0;
  *(undefined1 *)(puVar11 + 7) = 0;
  if (uVar9 - uVar18 != 0) {
    lVar15 = (long)(uVar9 - uVar18) >> 3;
    if (0x555555555555555 < (ulong)(lVar15 * -0x30c30c30c30c30c3)) goto LAB_1004c921c;
    lVar12 = lVar15 * -0x2492492492492490;
    func_0x000107c60e20();
    puVar11[4] = lVar12;
    puVar11[5] = lVar12;
    puVar11[6] = lVar12 + lVar15 * -0x2492492492492490;
    do {
      FUN_1004c5150(&puStack_118,uVar18);
      FUN_1004c5150(&lStack_1c0,&puStack_118);
      (**(code **)(*plVar25 + 0x10))(&plStack_1c8,plVar25,&lStack_1c0,uVar23);
      FUN_1004d79ec(&lStack_1c0);
      lVar15 = puVar11[3];
      if (plStack_1c8 == (long *)0x0) {
        if (lVar15 != 0) {
          func_0x000104aca84c(&pppppplStack_1e0,&puStack_118);
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                        ,0x17f,1,"[%s %p] could not create subchannel for address %s, ignoring");
          if ((char)bStack_1c9 < '\0') {
            func_0x000107c60e14(pppppplStack_1e0);
          }
          goto LAB_1004c8d60;
        }
      }
      else {
        if (lVar15 != 0) {
          func_0x000104aca84c(&pppppplStack_1e0,&puStack_118);
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                        ,0x186,1,
                        "[%s %p] subchannel list %p index %lu: Created subchannel %p for address %s"
                       );
          if ((char)bStack_1c9 < '\0') {
            func_0x000107c60e14(pppppplStack_1e0);
          }
        }
        puVar14 = (undefined8 *)puVar11[5];
        if (puVar14 < (undefined8 *)puVar11[6]) {
          puVar14[3] = 0;
          puVar14[2] = 0;
          puVar14[5] = 0;
          puVar14[4] = 0;
          puVar16 = puVar14 + 6;
          puVar14[1] = 0;
          *puVar14 = 0;
        }
        else {
          puVar26 = (undefined8 *)puVar11[4];
          lVar15 = (long)puVar14 - (long)puVar26 >> 4;
          uVar1 = lVar15 * -0x5555555555555555 + 1;
          if (0x555555555555555 < uVar1) {
            func_0x000104a845b0();
            goto LAB_1004c9220;
          }
          lVar12 = (long)puVar11[6] - (long)puVar26 >> 4;
          uVar21 = lVar12 * 0x5555555555555556;
          if (uVar21 < uVar1 || uVar21 - uVar1 == 0) {
            uVar21 = uVar1;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
            uVar21 = 0x555555555555555;
          }
          if (uVar21 == 0) {
            lVar12 = 0;
          }
          else {
            if (0x555555555555555 < uVar21) {
              func_0x000104a7757c();
              goto LAB_1004c9220;
            }
            lVar12 = uVar21 * 0x30;
            func_0x000107c60e20();
          }
          puVar16 = (undefined8 *)(lVar12 + lVar15 * 0x10);
          puVar16[3] = 0;
          puVar16[2] = 0;
          puVar16[5] = 0;
          puVar16[4] = 0;
          puVar16[1] = 0;
          *puVar16 = 0;
          puVar20 = puVar16;
          if (puVar14 != puVar26) {
            do {
              uVar28 = puVar14[-5];
              uVar27 = puVar14[-6];
              puVar7 = puVar14 + -3;
              uVar29 = puVar14[-4];
              uVar31 = puVar14[-1];
              uVar30 = puVar14[-2];
              puVar14 = puVar14 + -6;
              puVar20[-3] = *puVar7;
              puVar20[-4] = uVar29;
              puVar20[-1] = uVar31;
              puVar20[-2] = uVar30;
              puVar20[-5] = uVar28;
              puVar20[-6] = uVar27;
              puVar20 = puVar20 + -6;
            } while (puVar14 != puVar26);
            puVar14 = (undefined8 *)puVar11[4];
          }
          puVar16 = puVar16 + 6;
          puVar11[4] = puVar20;
          puVar11[5] = puVar16;
          puVar11[6] = lVar12 + uVar21 * 0x30;
          if (puVar14 != (undefined8 *)0x0) {
            func_0x000107c60e14(puVar14);
          }
        }
        plVar24 = plStack_1c8;
        puVar11[5] = puVar16;
        plStack_1c8 = (long *)0x0;
        puVar16[-4] = plVar24;
        puVar16[-3] = 0;
        *(undefined1 *)(puVar16 + -2) = 0;
        *(undefined1 *)((long)puVar16 + -0xc) = 0;
        puVar16[-1] = 0;
        puVar16[-6] = &PTR_DAT_1107c2620;
        puVar16[-5] = puVar11;
LAB_1004c8d60:
        if (plStack_1c8 != (long *)0x0) {
          plVar24 = plStack_1c8 + 1;
          do {
            lVar15 = *plVar24;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar6) {
              *plVar24 = lVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar15 + -1 == 0) {
            (**(code **)(*plStack_1c8 + 8))();
          }
        }
      }
      FUN_1004d79ec(&puStack_118);
      uVar18 = uVar18 + 0xa8;
    } while (uVar18 != uVar9);
    ppppplVar4 = (long *****)puVar11[5];
    for (ppppplVar3 = (long *****)puVar11[4]; ppppplVar3 != ppppplVar4; ppppplVar3 = ppppplVar3 + 6)
    {
      if (ppppplVar3[1][3] != (long ***)0x0) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                      ,0x13f,1,
                      "[%s %p] subchannel list %p index %lu of %lu (subchannel %p): starting watch")
        ;
      }
      if (ppppplVar3[3] != (long ****)0x0) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                      ,0x146,2,"assertion failed: %s");
        func_0x000107c60ebc();
        goto LAB_1004c9220;
      }
      pppppplVar13 = (long ******)0x18;
      func_0x000107c60e20();
      ppppplVar17 = (long *****)ppppplVar3[1];
      ppppplVar2 = ppppplVar17 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppplVar2,0x10);
        if (bVar6) {
          *ppppplVar2 = (long ****)((long)*ppppplVar2 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *pppppplVar13 = (long *****)&PTR_DAT_1107c26d8;
      pppppplVar13[1] = ppppplVar3;
      pppppplVar13[2] = ppppplVar17;
      ppppplVar3[3] = (long ****)pppppplVar13;
      pppppplStack_1e0 = pppppplVar13;
      (*(code *)(*ppppplVar3[2])[2])(ppppplVar3[2],&pppppplStack_1e0);
      pppppplVar13 = pppppplStack_1e0;
      pppppplStack_1e0 = (long ******)0x0;
      if (pppppplVar13 != (long ******)0x0) {
        (*(code *)(*pppppplVar13)[1])();
      }
    }
  }
  puStack_118 = &uStack_1f8;
  FUN_1004c4cbc(&puStack_118);
  *puVar11 = &PTR_DAT_1107c2578;
  *(undefined1 *)((long)puVar11 + 0x39) = 0;
  puVar11[8] = 0;
  plVar25 = (long *)(param_1 + 8);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar6) {
      *plVar25 = *plVar25 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puStack_118 = &uStack_210;
  FUN_1004c4cbc(&puStack_118);
  plVar24 = (long *)(param_1 + 0x80);
  puVar14 = (undefined8 *)*plVar24;
  *plVar24 = (long)puVar11;
  if (puVar14 != (undefined8 *)0x0) {
    (**(code **)*puVar14)();
    puVar11 = (undefined8 *)*plVar24;
  }
  if (puVar11[5] == puVar11[4]) {
    uVar18 = *(ulong *)(param_1 + 0x30);
    if (uVar18 == 0) {
      puStack_118 = (ulong *)0x10f230fb4;
      uStack_110 = 0x14;
      uStack_1b8 = *(ulong *)(param_1 + 0x60);
      lStack_1c0 = *(long *)(param_1 + 0x58);
      if (-1 < (char)*(byte *)(param_1 + 0x6f)) {
        uStack_1b8 = (ulong)*(byte *)(param_1 + 0x6f);
        lStack_1c0 = param_1 + 0x58;
      }
      FUN_10047c83c(&pppppplStack_1e0,&puStack_118,&lStack_1c0);
      ppppppplVar8 = (long *******)pppppplStack_1e0;
      if (-1 < (char)bStack_1c9) {
        uStack_1d8 = (ulong)bStack_1c9;
        ppppppplVar8 = &pppppplStack_1e0;
      }
      func_0x000107c2b9cc(&uStack_1f8,ppppppplVar8,uStack_1d8);
      if ((char)bStack_1c9 < '\0') {
        func_0x000107c60e14(pppppplStack_1e0);
      }
    }
    else {
      uStack_1f8 = uVar18;
      if ((uVar18 & 1) != 0) {
        piVar19 = (int *)(uVar18 - 1);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar6) {
            *piVar19 = *piVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    plVar22 = *(long **)(param_1 + 0x28);
    plVar25 = (long *)0x10;
    func_0x000107c60e20();
    if ((uStack_1f8 & 1) == 0) {
      *plVar25 = (long)&PTR_DAT_1107c1550;
      plVar25[1] = uStack_1f8;
    }
    else {
      piVar19 = (int *)(uStack_1f8 - 1);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar6) {
          *piVar19 = *piVar19 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *plVar25 = (long)&PTR_DAT_1107c1550;
      plVar25[1] = uStack_1f8;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar6) {
          *piVar19 = *piVar19 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      FUN_10084dad0();
    }
    plStack_230 = plVar25;
    (**(code **)(*plVar22 + 0x18))(plVar22,3,&uStack_1f8,&plStack_230);
    plVar25 = plStack_230;
    plStack_230 = (long *)0x0;
    if (plVar25 != (long *)0x0) {
      (**(code **)(*plVar25 + 8))();
    }
    if ((uStack_1f8 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else if (*(long *)(param_1 + 0x78) == 0) {
    plVar22 = *(long **)(param_1 + 0x28);
    puStack_118 = (ulong *)0x0;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar6) {
        *plVar25 = *plVar25 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar25 = (long *)0x18;
    func_0x000107c60e20();
    *plVar25 = (long)&PTR_DAT_1107c21d0;
    plVar25[1] = param_1;
    *(undefined1 *)(plVar25 + 2) = 0;
    plStack_238 = plVar25;
    (**(code **)(*plVar22 + 0x18))(plVar22,1,&puStack_118,&plStack_238);
    plVar25 = plStack_238;
    plStack_238 = (long *)0x0;
    if (plVar25 != (long *)0x0) {
      (**(code **)(*plVar25 + 8))();
    }
    if (((ulong)puStack_118 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  if ((*(long *)(*plVar24 + 0x28) == *(long *)(*plVar24 + 0x20)) || (*(long *)(param_1 + 0x88) == 0)
     ) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    FUN_1004d8960(param_1 + 0x78,plVar24);
  }
  puStack_118 = &uStack_228;
  FUN_1004c4cbc(&puStack_118);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
LAB_1004c921c:
  func_0x000104a845b0();
LAB_1004c9220:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1004c9224);
  (*pcVar10)();
}



/* Entry: 1004e3b2c; end: 1004e3c4f;  */

void FUN_1004e3b2c(long *param_1,ulong *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  
  lVar1 = *(long *)(*param_1 + 0x10);
  lVar5 = *(long *)(*param_1 + 8) + 0x70;
  FUN_100460448(lVar5);
  if ((*(long **)(lVar1 + 0xd8) == param_1) && (uVar7 = *param_2, uVar7 != 0)) {
    if (*(char *)(lVar1 + 0xc1) != '\0') {
      FUN_1004da040(*(undefined8 *)(*param_1 + 8),lVar1 + 200,*(undefined8 *)(lVar1 + 0x98));
      *(undefined1 *)(lVar1 + 0xc1) = 0;
      *(undefined8 *)(lVar1 + 0xd8) = 0;
      uVar7 = *param_2;
    }
    if ((uVar7 & 1) != 0) {
      piVar6 = (int *)(uVar7 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104a76694(lVar1);
    if ((uVar7 & 1) != 0) {
      FUN_10084dad0(uVar7);
    }
  }
  func_0x000100466b80(lVar5);
  plVar4 = *(long **)(lVar1 + 0x80);
  do {
    lVar5 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    FUN_100836ca4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1004e3c50; end: 1004e3c97;  */

/* WARNING: Possible PIC construction at 0x0001004e3c84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004e3c88) */

void FUN_1004e3c50(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3b4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1004e3c98; end: 1004e3d67; -[SCPagePageViewReporter _didChangeCurrentPageEvent:] */

void FUN_1004e3c98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_28,param_1);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4c730(param_3);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1004e3d68; end: 1004e3d6b;  */

void FUN_1004e3d68(void)

{
  return;
}



/* Entry: 1004e3d6c; end: 1004e3dd7;  */

void FUN_1004e3d6c(void)

{
  int iVar1;
  
  if ((bRam00000001137fe098 & 1) == 0) {
    iVar1 = 0x137fe098;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001137fe0a0 = 0x32aaaba7;
      uRam00000001137fe0b0 = 0;
      uRam00000001137fe0a8 = 0;
      uRam00000001137fe0c0 = 0;
      uRam00000001137fe0b8 = 0;
      uRam00000001137fe0d0 = 0;
      uRam00000001137fe0c8 = 0;
      uRam00000001137fe0e0 = 0;
      uRam00000001137fe0d8 = 0;
      uRam00000001137fe0f0 = 0;
      uRam00000001137fe0e8 = 0;
      uRam00000001137fe100 = 0;
      uRam00000001137fe0f8 = 0;
      uRam00000001137fe108 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1137fe098);
      return;
    }
  }
  return;
}



/* Entry: 1004e3dd8; end: 1004e422b;  */

void FUN_1004e3dd8(long *param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long **pplVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long alStack_d0 [3];
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  
  FUN_1004e3d6c();
  FUN_1004e422c();
  func_0x000107c60da0();
  pplVar9 = &plStack_e8;
  FUN_10002b838();
  plVar10 = plRam00000001137fe0f8;
  plVar13 = plRam00000001137fe0f0;
  plVar6 = plRam00000001137fe0e8;
  plVar7 = plRam00000001137fe0e0;
  uVar2 = (long)plRam00000001137fe0f0 - (long)plRam00000001137fe0e8;
  lVar8 = 0;
  if (uVar2 != 0) {
    lVar8 = ((long)plRam00000001137fe0f0 - (long)plRam00000001137fe0e8 >> 3) * 0x66 + -1;
  }
  if (lVar8 != uRam00000001137fe108 + uRam00000001137fe100) goto LAB_1004e4050;
  if (uRam00000001137fe100 < 0x66) {
    if ((ulong)((long)plRam00000001137fe0f8 - (long)plRam00000001137fe0e0) <= uVar2) {
      plVar7 = (long *)((long)plRam00000001137fe0f8 - (long)plRam00000001137fe0e0 >> 2);
      if (plRam00000001137fe0f8 == plRam00000001137fe0e0) {
        plVar7 = (long *)0x1;
      }
      uStack_98 = 0x1137fe0f8;
      FUN_1004e4238();
      plVar10 = (long *)((long)plVar7 + uVar2);
      plVar12 = plVar7 + param_3;
      lVar5 = 0xff0;
      lVar8 = param_3;
      plStack_b8 = plVar7;
      plStack_b0 = plVar10;
      plStack_a8 = plVar10;
      plStack_a0 = plVar12;
      func_0x000107c60e20();
      alStack_d0[1] = 0x1137fe108;
      alStack_d0[2] = 0x66;
      plVar11 = plVar10;
      if (uVar2 == param_3 * 8) {
        if (plVar13 == plVar6) {
          alStack_d0[0] = lVar5;
          func_0x000107c3a454();
          plVar6 = (long *)0x1;
          FUN_1004e4238();
          plStack_78 = plVar6 + lVar8;
          plStack_90 = plVar6;
          plStack_88 = plVar6;
          plStack_80 = plVar6;
          func_0x000107c313ac(&plStack_90,plVar10,plVar10);
          plVar1 = plStack_78;
          plVar11 = plStack_80;
          plVar13 = plStack_88;
          plVar6 = plStack_90;
          plStack_b8 = plStack_90;
          plStack_b0 = plStack_88;
          plStack_a0 = plStack_78;
          plStack_90 = plVar7;
          plStack_88 = plVar10;
          plStack_80 = plVar10;
          plStack_78 = plVar12;
          func_0x000107c3a458();
          plVar7 = plVar6;
          plVar10 = plVar13;
          plVar12 = plVar1;
        }
        else {
          plVar10 = plVar10 + (((long)plVar10 - (long)plVar7 >> 3) + 1) / -2;
          plVar11 = plVar10;
          plStack_b0 = plVar10;
        }
      }
      plVar6 = plVar11 + 1;
      *plVar11 = lVar5;
      alStack_d0[0] = 0;
      plVar13 = plRam00000001137fe0f0;
      plStack_a8 = plVar6;
      while (plVar13 != plRam00000001137fe0e8) {
        plVar11 = plVar10;
        if (plVar10 == plVar7) {
          if (plVar6 < plVar12) {
            lVar8 = (long)plVar6 - (long)plVar7;
            plVar1 = plVar6 + (((long)plVar12 - (long)plVar6 >> 3) + 1) / 2;
            plVar11 = (long *)((long)plVar1 - ((long)plVar6 - (long)plVar7));
            plVar6 = plVar1;
            if (lVar8 != 0) {
              func_0x000107c610b8(plVar11,plVar10,lVar8);
            }
          }
          else {
            lVar8 = (long)plVar12 - (long)plVar7 >> 2;
            if ((long)plVar12 - (long)plVar7 == 0) {
              lVar8 = 1;
            }
            func_0x000107c3a454();
            FUN_1004e4238(lVar8);
            func_0x000107c3a44c(lVar8 << 1);
            func_0x000107c313ac(&plStack_90,plVar7,plVar6);
            plVar4 = plStack_78;
            plVar3 = plStack_80;
            plVar11 = plStack_88;
            plVar1 = plStack_90;
            plStack_90 = plVar7;
            plStack_88 = plVar10;
            plStack_80 = plVar6;
            plStack_78 = plVar12;
            func_0x000107c3a458();
            plVar7 = plVar1;
            plVar6 = plVar3;
            plVar12 = plVar4;
          }
        }
        plVar13 = plVar13 + -1;
        plVar10 = plVar11 + -1;
        *plVar10 = *plVar13;
      }
      plStack_b8 = plRam00000001137fe0e0;
      plStack_b0 = plRam00000001137fe0e8;
      plStack_a0 = plRam00000001137fe0f8;
      plStack_a8 = plRam00000001137fe0f0;
      plRam00000001137fe0e0 = plVar7;
      plRam00000001137fe0e8 = plVar10;
      plRam00000001137fe0f0 = plVar6;
      plRam00000001137fe0f8 = plVar12;
      func_0x0001004e426c(alStack_d0);
      pplVar9 = &plStack_b8;
      func_0x0001004e429c();
      goto LAB_1004e4050;
    }
    pplVar9 = (long **)0xff0;
    func_0x000107c60e20();
    if (plVar10 != plVar13) {
      plRam00000001137fe0f0 = plVar13 + 1;
      *plVar13 = (long)pplVar9;
      goto LAB_1004e4050;
    }
    if (plVar6 == plVar7) {
      lVar8 = (long)plVar10 - (long)plVar6 >> 2;
      if (plVar13 == plVar6) {
        lVar8 = 1;
      }
      func_0x000107c3a454();
      FUN_1004e4238(lVar8);
      func_0x000107c3a44c(lVar8 << 1);
      func_0x000107c313ac(&plStack_90,plRam00000001137fe0e8,plRam00000001137fe0f0);
      plVar10 = plRam00000001137fe0f8;
      plVar13 = plRam00000001137fe0f0;
      plVar6 = plRam00000001137fe0e8;
      plVar7 = plRam00000001137fe0e0;
      plRam00000001137fe0e8 = plStack_88;
      plRam00000001137fe0e0 = plStack_90;
      plRam00000001137fe0f8 = plStack_78;
      plRam00000001137fe0f0 = plStack_80;
      plStack_88 = plVar6;
      plStack_90 = plVar7;
      plStack_78 = plVar10;
      plStack_80 = plVar13;
      func_0x000107c3a458();
      plVar6 = plRam00000001137fe0e8;
    }
    plVar6[-1] = (long)pplVar9;
  }
  else {
    plVar6 = plRam00000001137fe0e8 + 1;
    pplVar9 = (long **)*plRam00000001137fe0e8;
    uRam00000001137fe100 = uRam00000001137fe100 - 0x66;
  }
  plRam00000001137fe0e8 = plVar6;
  func_0x000107c313a8();
LAB_1004e4050:
  FUN_1004e42e0();
  *(undefined4 *)(pplVar9 + 1) = param_2;
  *pplVar9 = param_1;
  pplVar9[3] = plStack_e0;
  pplVar9[2] = plStack_e8;
  pplVar9[4] = plStack_d8;
  plStack_e0 = (long *)0x0;
  plStack_d8 = (long *)0x0;
  plStack_e8 = (long *)0x0;
  uRam00000001137fe108 = uRam00000001137fe108 + 1;
  func_0x000107c60ca0(&plStack_e8);
  if (0x80 < uRam00000001137fe108) {
    func_0x000107c60ca0(plRam00000001137fe0e8[uRam00000001137fe100 / 0x66] +
                        (uRam00000001137fe100 % 0x66) * 0x28 + 0x10);
    uRam00000001137fe100 = uRam00000001137fe100 + 1;
    uRam00000001137fe108 = uRam00000001137fe108 - 1;
    if (0xcb < uRam00000001137fe100) {
      func_0x000107c60e14(*plRam00000001137fe0e8);
      plRam00000001137fe0e8 = plRam00000001137fe0e8 + 1;
      uRam00000001137fe100 = uRam00000001137fe100 - 0x66;
    }
  }
  func_0x0001004e4328();
  return;
}



/* Entry: 1004e422c; end: 1004e4237;  */

void FUN_1004e422c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)(0x1137fe0a0);
  return;
}



/* Entry: 1004e4238; end: 1004e42df;  */

undefined1  [16] FUN_1004e4238(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    func_0x000107c60e20(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1004e42e0; end: 1004e4333;  */

long FUN_1004e42e0(void)

{
  if (lRam00000001137fe0f0 == lRam00000001137fe0e8) {
    return 0;
  }
  return *(long *)(lRam00000001137fe0e8 +
                  ((ulong)(lRam00000001137fe100 + lRam00000001137fe108) / 0x66) * 8) +
         ((ulong)(lRam00000001137fe100 + lRam00000001137fe108) % 0x66) * 0x28;
}



/* Entry: 1004e4334; end: 1004e43bb;  */

void FUN_1004e4334(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c45aec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1004e43bc; end: 1004e4803; +[SCUserInfoCoreUserData immutableObjectParse:bufferSize:] */

void FUN_1004e43bc(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  ushort *puVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126b8990;
  func_0x000107c610f4(PTR_PTR_1126b8990);
  puVar15 = (undefined *)0x0;
  puVar14 = (undefined *)0x0;
  lVar12 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar12);
  if (4 < uVar3) {
    uVar13 = (ulong)((ushort *)((long)piVar1 - lVar12))[2];
    if (uVar13 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar13);
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      func_0x000107c61180();
      lVar12 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar12);
    }
    if ((uVar3 < 7) || (uVar13 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar12)), uVar13 == 0)) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar13);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      func_0x000107c61180();
    }
  }
  piVar5 = piVar1;
  FUN_1004e4804();
  piVar6 = piVar1;
  func_0x0001004e4850();
  piVar7 = piVar1;
  func_0x0001004e489c();
  piVar8 = piVar1;
  func_0x0001004e48e8();
  piVar9 = piVar1;
  func_0x0001004e4934();
  puVar17 = PTR_PTR_1126b8998;
  puVar10 = (ushort *)((long)piVar1 - (long)*piVar1);
  if (((*puVar10 < 9) || ((ulong)puVar10[4] == 0)) ||
     (*puVar10 < 0xb || *(char *)((long)piVar1 + (ulong)puVar10[4]) != '\x06')) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = (int *)0x0;
    if ((ulong)puVar10[5] != 0) {
      puVar2 = (uint *)((long)piVar1 + (ulong)puVar10[5]);
      piVar11 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  if (piVar5 == (int *)0x0) {
    if (piVar6 == (int *)0x0) {
      if (piVar7 == (int *)0x0) {
        if (piVar8 == (int *)0x0) {
          if (piVar9 == (int *)0x0) {
            if (piVar11 == (int *)0x0) {
              puVar17 = (undefined *)0x0;
              goto LAB_1004e4608;
            }
            FUN_1005276b4(piVar11);
            func_0x000107c61180();
            func_0x000107c41278(puVar17,param_2,piVar11);
            func_0x000107c61180();
          }
          else {
            FUN_100552a60();
            func_0x000107c61180();
            func_0x000107c42a0c(puVar17,param_2,piVar9);
            func_0x000107c61180();
            piVar11 = piVar9;
          }
        }
        else {
          piVar11 = (int *)PTR_PTR_1126b8a68;
          func_0x000107c610f4(PTR_PTR_1126b8a68);
          uVar18 = 0;
          if ((4 < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
             (uVar13 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar13 != 0)) {
            uVar18 = *(undefined8 *)((long)piVar8 + uVar13);
          }
          func_0x000107c49470(uVar18);
          func_0x000107c42234(puVar17,param_2,piVar11);
          func_0x000107c61180();
        }
      }
      else {
        piVar11 = (int *)PTR_PTR_1126b89b0;
        func_0x000107c610f4(PTR_PTR_1126b89b0);
        func_0x000107c49470();
        func_0x000107c3ebc8(puVar17,param_2,piVar11);
        func_0x000107c61180();
      }
    }
    else {
      piVar11 = (int *)PTR_PTR_1126b89a0;
      func_0x000107c610f4(PTR_PTR_1126b89a0);
      if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
         (uVar13 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar13 == 0)) {
        puVar16 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar6 + uVar13);
        puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        func_0x000107c61180();
      }
      func_0x000107c49470(piVar11,param_2,puVar16);
      func_0x000107c61170(puVar16);
      func_0x000107c5c1cc(puVar17,param_2,piVar11);
      func_0x000107c61180();
    }
  }
  else {
    piVar11 = (int *)PTR_PTR_1126b89a8;
    func_0x000107c610f4(PTR_PTR_1126b89a8);
    func_0x000107c49470();
    func_0x000107c4c0c0(puVar17,param_2,piVar11);
    func_0x000107c61180();
  }
  func_0x000107c61170(piVar11);
LAB_1004e4608:
  func_0x000107c46d40(puVar4,param_2,puVar14,puVar15,puVar17);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1004e4804; end: 1004e497f;  */

long FUN_1004e4804(int *param_1)

{
  uint *puVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)((long)param_1 - (long)*param_1);
  if ((((8 < *puVar2) && ((ulong)puVar2[4] != 0)) &&
      (10 < *puVar2 && *(char *)((long)param_1 + (ulong)puVar2[4]) == '\x01')) &&
     ((ulong)puVar2[5] != 0)) {
    puVar1 = (uint *)((long)param_1 + (ulong)puVar2[5]);
    return (long)puVar1 + (ulong)*puVar1;
  }
  return 0;
}



/* Entry: 1004e4980; end: 1004e49f7; -[SCUserInfoStringProperty initWithValue:] */

undefined1 * FUN_1004e4980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e8328;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004e49f8; end: 1004e4a63; +[SCUserInfoProperty stringPropertyWithStringProperty:] */

void FUN_1004e49f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126b8998;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1004e4a64; end: 1004e4aa7; -[SCUserInfoProperty internalInit] */

void FUN_1004e4a64(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_1126e8318;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1004e4aa8; end: 1004e4b9b; -[SCUserInfoCoreUserData initWithId:name:property:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1004e4aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126e8310;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112723074);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112723074) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112723078);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112723078) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272307c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272307c) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004e4b9c; end: 1004e4bbf; -[SCUserInfoProperty copyWithZone:] */

undefined8 FUN_1004e4b9c(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 1004e4bc0; end: 1004e4c57;  */

undefined8 * FUN_1004e4bc0(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_110862700;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_1004c2ee8(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1004e4c58; end: 1004e4ecf;  */

void FUN_1004e4c58(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  lVar2 = param_2;
  func_0x000107c3e1b8();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c40808();
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x000107c40808();
  func_0x000107c61170(lVar2);
  if (lVar3 == lVar4) {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    lVar4 = param_2;
    func_0x000107c3e1b8();
    func_0x000107c61180();
    lVar2 = lVar4;
    func_0x000107c4080c();
    lVar3 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          func_0x000107c61128(lVar4);
        }
        uVar10 = *(undefined8 *)(lVar11 * 8);
        uVar8 = uVar10;
        func_0x000107c4f4f4(uVar10);
        func_0x000107c61180();
        func_0x000107c44fc8(uVar10);
        func_0x000107c61180();
        func_0x000107c56bd8(puVar5);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar8);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar4;
      func_0x000107c4080c();
    }
    func_0x000107c61170(lVar4);
    puVar6 = *(undefined **)(param_1 + 0x30);
    (**(code **)(puVar6 + 0x10))(puVar6,puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
  }
  else {
    puVar6 = *(undefined **)(param_1 + 0x28);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      (**(code **)(puVar6 + 0x10))();
      func_0x000107c61180();
    }
  }
  lVar2 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    func_0x000107c60e78();
    func_0x000107c61170(param_2);
    func_0x000107c60bd8();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x000107c61180();
    puVar1 = *(undefined8 **)(lVar2 + 0x10);
    for (puVar9 = *(undefined8 **)(lVar2 + 8); puVar9 != puVar1; puVar9 = puVar9 + 1) {
      uVar8 = *puVar9;
      func_0x000107c61174(uVar8);
      func_0x000107c3d798(puVar5);
      func_0x000107c61170(uVar8);
    }
    puVar6 = puVar5;
    func_0x000107c40794(puVar5);
    func_0x000107c61170(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1004e4ed0; end: 1004e4f83; -[SCDocObjectFetchedResult asArray] */

void FUN_1004e4ed0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3);
  func_0x000107c61180();
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  for (puVar5 = *(undefined8 **)(param_1 + 8); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    uVar4 = *puVar5;
    func_0x000107c61174(uVar4);
    func_0x000107c3d798(puVar2,param_2,uVar4);
    func_0x000107c61170(uVar4);
  }
  puVar3 = puVar2;
  func_0x000107c40794(puVar2);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1004e4f84; end: 1004e4f93; -[SCUserInfoCoreUserData property] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1004e4f84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272307c);
}



/* Entry: 1004e4f94; end: 1004e4fa3; -[SCUserInfoCoreUserData id] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1004e4f94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112723074);
}



/* Entry: 1004e4fa4; end: 1004e502f;  */

void FUN_1004e4fa4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_2);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf758;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf758);
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c4d9e8(param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  uVar3 = uVar2;
  FUN_1004e5030(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1004e5030; end: 1004e5133;  */

void FUN_1004e5030(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_1053f5648;
  puStack_30 = &UNK_1053f5658;
  uStack_28 = 0;
  func_0x000107c4c694(param_1);
  lVar1 = puStack_48[5];
  func_0x000107c4adac();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = puStack_48[5];
  }
  func_0x000107c61174(uVar2);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1004e5134; end: 1004e527f; -[SCUserInfoProperty matchLongProperty:stringProperty:boolProperty:doubleProperty:epochTimeMsProperty:dataProperty:] */

/* WARNING: Possible PIC construction at 0x0001004e5240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e5250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e5260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004e5254) */
/* WARNING: Removing unreachable block (ram,0x0001004e5244) */
/* WARNING: Removing unreachable block (ram,0x0001004e5264) */

void FUN_1004e5134(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 4) {
    if (lVar1 == 1) {
      if (param_3 == 0) goto LAB_1004e523c;
      lVar1 = 0x10;
      param_6 = param_3;
    }
    else if (lVar1 == 2) {
      if (param_4 == 0) goto LAB_1004e523c;
      lVar1 = 0x18;
      param_6 = param_4;
    }
    else {
      if ((lVar1 != 3) || (param_5 == 0)) goto LAB_1004e523c;
      lVar1 = 0x20;
      param_6 = param_5;
    }
  }
  else if (lVar1 == 4) {
    if (param_6 == 0) goto LAB_1004e523c;
    lVar1 = 0x28;
  }
  else if (lVar1 == 5) {
    if (param_7 == 0) goto LAB_1004e523c;
    lVar1 = 0x30;
    param_6 = param_7;
  }
  else {
    if ((lVar1 != 6) || (param_8 == 0)) goto LAB_1004e523c;
    lVar1 = 0x38;
    param_6 = param_8;
  }
  (**(code **)(param_6 + 0x10))(param_6,*(undefined8 *)(param_1 + lVar1));
LAB_1004e523c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 1004e5280; end: 1004e52bf;  */

void FUN_1004e5280(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c5dc0c();
  func_0x000107c61180();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1004e52c0; end: 1004e52c7; -[SCUserInfoStringProperty value] */

undefined8 FUN_1004e52c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1004e52c8; end: 1004e5317; -[SCUserInfoCoreUserData .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001004e52ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004e52f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004e52c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272307c,0);
  return;
}



/* Entry: 1004e5318; end: 1004e5377; -[SCUserInfoProperty .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001004e5330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e5348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e5360: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004e534c) */
/* WARNING: Removing unreachable block (ram,0x0001004e5334) */
/* WARNING: Removing unreachable block (ram,0x0001004e5364) */

void FUN_1004e5318(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,0);
  return;
}



/* Entry: 1004e5378; end: 1004e5383; -[SCUserInfoStringProperty .cxx_destruct] */

void FUN_1004e5378(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1004e5384; end: 1004e5427; -[SCUnlockableDataStoreFilterFactory initWithUserPreferences:userName:] */

undefined1 *
FUN_1004e5384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112701760;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004e5428; end: 1004e54bb; -[SCUnlockableDataStoreFilterFactory removedLensFilter] */

void FUN_1004e5428(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) {
    puVar2 = PTR_PTR_1126de8b0;
    func_0x000107c610f4();
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar3 = PTR_PTR_1126aeea8;
    func_0x000107c61160(PTR_PTR_1126aeea8);
    func_0x000107c492f4(puVar2,param_2,uVar4,uVar1,puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    lVar5 = *(long *)(param_1 + 0x20);
  }
  func_0x000107c61174(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1004e54bc; end: 1004e5587; -[SCUnlockableDataStoreBaseFilter initWithUserPreferences:userName:currentDateProvider:] */

undefined1 *
FUN_1004e54bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112701740;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004e5588; end: 1004e561b; -[SCUnlockableDataStoreFilterFactory blocklistFilter] */

void FUN_1004e5588(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) {
    puVar2 = PTR_PTR_1126de8a8;
    func_0x000107c610f4();
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar3 = PTR_PTR_1126aeea8;
    func_0x000107c61160(PTR_PTR_1126aeea8);
    func_0x000107c492f4(puVar2,param_2,uVar4,uVar1,puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    lVar5 = *(long *)(param_1 + 0x18);
  }
  func_0x000107c61174(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1004e561c; end: 1004e56fb; +[SCUnlockableDataStore storeFromSavedStateWithRemoteFetcher:lensUserProvider:archiveUtils:removedLensesFilter:creatorBlacklistFilter:lensMetadataStoreEvents:] */

void FUN_1004e561c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c490ac();
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c3c3cc(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1004e56fc; end: 1004e58cf; -[SCUnlockableDataStore initWithUnlockableRemoteFetcher:lensUserProvider:archiveUtils:removedLensesFilter:creatorBlacklistFilter:lensMetadataStoreEvents:] */

undefined1 *
FUN_1004e56fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_112701758;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = (undefined1 *)puVar1;
    func_0x000107c61158(puVar1);
    func_0x000107c60b14();
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c3b5f8(puVar1);
    func_0x000107c3c994(puVar1);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004e58d0; end: 1004e5acf; -[SCUnlockableDataStore _ensureNonNilObjectsWithState:] */

void FUN_1004e58d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar1 = PTR_PTR_1126de898;
    func_0x000107c610f4();
    uVar2 = param_3;
    func_0x000107c5d308(param_3);
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126de388;
    func_0x000107c61160(PTR_PTR_1126de388);
    func_0x000107c490c8();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c53fcc(*(undefined8 *)(param_1 + 0x10));
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar1 = PTR_PTR_1126de3d0;
    func_0x000107c610f4(PTR_PTR_1126de3d0);
    func_0x000107c47430();
    puVar3 = PTR_PTR_1126de8a0;
    func_0x000107c610f4();
    uVar2 = param_3;
    func_0x000107c43348(param_3);
    func_0x000107c61180();
    func_0x000107c480cc();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c43360(uVar4);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_50,auStack_48);
    uVar2 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1004e5ad0; end: 1004e5b9b; -[SCUnlockLensController initWithUnlockedLenses:updateResolver:] */

undefined1 *
FUN_1004e5ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112701738;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e16c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c3b5f4(puVar1);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004e5b9c; end: 1004e5c9b; -[SCUnlockLensController _ensureNonNilObjects] */

/* WARNING: Possible PIC construction at 0x0001004e5bd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e5c38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004e5c3c) */

void FUN_1004e5b9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
  }
  else if (*(long *)(param_1 + 0x18) == 0) {
    puVar1 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f6d524e);
    func_0x000107c61180();
    func_0x000107c470d0(puVar1,param_2,puVar2,0x15,0,0xe);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
  }
  else {
    if (*(long *)(param_1 + 0x20) != 0) {
      return;
    }
    puVar1 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1004e5c9c; end: 1004e5ca7; -[SCUnlockLensController setDelegate:] */

void FUN_1004e5c9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 1004e5ca8; end: 1004e5dd7; -[SCLensMetadataFetcher initWithPreviousUpdateTimestamp:infoProvider:remoteFetcher:checksumsDataSource:fetchingQOS:] */

undefined1 *
FUN_1004e5ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_1127015c8;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4(PTR_PTR_1126ae790);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c3b154(puVar1);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004e5dd8; end: 1004e5f13; -[SCLensMetadataFetcher _configureWithPreviousUpdateTimestamp:infoProvider:remoteFetcher:checksumsDataSource:fetchPerformer:] */

/* WARNING: Possible PIC construction at 0x0001004e5e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e5e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e5e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e5e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e5eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e5ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e5edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e5eec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004e5ee0) */
/* WARNING: Removing unreachable block (ram,0x0001004e5ec4) */
/* WARNING: Removing unreachable block (ram,0x0001004e5eb0) */
/* WARNING: Removing unreachable block (ram,0x0001004e5e98) */
/* WARNING: Removing unreachable block (ram,0x0001004e5e80) */
/* WARNING: Removing unreachable block (ram,0x0001004e5e68) */
/* WARNING: Removing unreachable block (ram,0x0001004e5e50) */
/* WARNING: Removing unreachable block (ram,0x0001004e5ef0) */

void FUN_1004e5dd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  puVar1 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c61174(param_6);
  func_0x000107c61160();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1004e5f14; end: 1004e5f3b; -[SCLensMetadataFetcher fetchingResult] */

void FUN_1004e5f14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004e5f3c; end: 1004e601f; -[SCUnlockableDataStore _subscribeForLensDataStoreEvents:] */

void FUN_1004e5f3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x000107c61144(auStack_38,param_1);
    func_0x000107c6111c(auStack_40,auStack_38);
    uVar1 = param_3;
    func_0x000107c5c320(param_3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar1);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1004e6020; end: 1004e6077; -[SCUnlockableDataStore _restoreSavedState] */

void FUN_1004e6020(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1004e60c0;
  puStack_28 = &UNK_110848c48;
  uStack_18 = 0;
  lStack_20 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x58),param_2,&puStack_40);
  return;
}



/* Entry: 1004e6078; end: 1004e60b7; -[SCUnlockableDataStoreServicesEntryPoint setUnlockableDataStore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004e6078(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112784994;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1004e60b8; end: 1004e60bf;  */

void FUN_1004e60b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e60bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}


