/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a00a184; end: 10a00a213;  */

void FUN_10a00a184(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
  }
  return;
}



/* Entry: 10a00a214; end: 10a00a917;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a00a214(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong **ppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long ***ppplVar5;
  long *plVar6;
  long ***ppplVar7;
  long *plVar8;
  long lVar9;
  ulong **ppuVar10;
  ulong **ppuVar11;
  long ***ppplStack_d0;
  long *plStack_c8;
  ulong **ppuStack_c0;
  long *plStack_b8;
  ulong **ppuStack_b0;
  long *plStack_a8;
  ulong **ppuStack_a0;
  long *plStack_98;
  ulong **ppuStack_90;
  long *plStack_88;
  long ***ppplStack_80;
  long *plStack_78;
  long ***ppplStack_70;
  long *plStack_68;
  
  ppuStack_90 = (ulong **)((ulong)ppuStack_90 & 0xffffffffffffff00);
  ppplStack_70 = (long ***)&ppuStack_90;
  lVar9 = param_2 + 0x140;
  FUN_10a814778(lVar9,&ppuStack_90,&UNK_10dd5b8f9,&ppplStack_70,&ppplStack_80);
  ppuVar1 = *(ulong ***)(lVar9 + 0x18);
  plVar2 = *(long **)(lVar9 + 0x20);
  if (plVar2 != (long *)0x0) {
    plVar8 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuVar10 = *(ulong ***)(param_2 + 0x120);
  plStack_b8 = *(long **)(param_2 + 0x128);
  if (plStack_b8 != (long *)0x0) {
    plVar8 = plStack_b8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar9 = *(long *)(param_2 + 0x50);
  ppuStack_c0 = ppuVar10;
  ppuStack_b0 = ppuVar1;
  plStack_a8 = plVar2;
  if (lVar9 == 0) {
    plVar8 = (long *)0x190;
    __Znwm();
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_DAT_110b9d9b8;
    ppplVar5 = (long ***)(plVar8 + 3);
    FUN_10a0099bc(ppplVar5,0);
    ppplStack_70 = ppplVar5;
    plStack_68 = plVar8;
    FUN_10a054a7c(&ppplStack_70,plVar8 + 8,ppplVar5);
    FUN_10a054918(&ppplStack_d0,&ppplStack_70);
    if (plStack_68 == (long *)0x0) goto joined_r0x00010a00a4f0;
    plVar8 = plStack_68 + 1;
    do {
      lVar9 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_68;
    } while (cVar3 != '\0');
  }
  else {
    ppuVar11 = *(ulong ***)(lVar9 + 0x858);
    plVar8 = *(long **)(lVar9 + 0x860);
    if (plVar8 != (long *)0x0) {
      plVar6 = plVar8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppplVar5 = (long ***)0x178;
    ppuStack_a0 = ppuVar11;
    plStack_98 = plVar8;
    __Znwm();
    FUN_10a0099bc();
    ppuStack_90 = ppuVar11;
    plStack_88 = plVar8;
    if (plVar8 != (long *)0x0) {
      plVar6 = plVar8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar6 = plVar8 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    plVar6 = (long *)0x30;
    ppplStack_80 = (long ***)ppuVar11;
    plStack_78 = plVar8;
    ppplStack_70 = ppplVar5;
    __Znwm();
    ppplStack_80 = (long ***)0x0;
    plStack_78 = (long *)0x0;
    *plVar6 = (long)&PTR_DAT_110b9d958;
    plVar6[1] = 0;
    plVar6[2] = 0;
    plVar6[3] = (long)ppplVar5;
    plVar6[4] = (long)ppuVar11;
    plVar6[5] = (long)plVar8;
    plStack_68 = plVar6;
    FUN_10a054a7c(&ppplStack_70,ppplVar5 + 5,ppplVar5);
    FUN_10a054918(&ppplStack_d0,&ppplStack_70);
    plVar8 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar6 = plStack_68 + 1;
      do {
        lVar9 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (plStack_78 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar8 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar6 = plStack_88 + 1;
      do {
        lVar9 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if ((ppuStack_a0 != (ulong **)0x0) && (ppplStack_d0 != (long ***)0x0)) {
      ppplStack_70 = ppplStack_d0;
      plStack_68 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar8 = plStack_c8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10aa88c30(ppuStack_a0,&ppplStack_70);
      plVar8 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar6 = plStack_68 + 1;
        do {
          lVar9 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    if (plStack_98 == (long *)0x0) goto joined_r0x00010a00a4f0;
    plVar8 = plStack_98 + 1;
    do {
      lVar9 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_98;
    } while (cVar3 != '\0');
  }
  if (lVar9 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
joined_r0x00010a00a4f0:
  if (ppuVar1 != (ulong **)0x0) {
    if (plVar2 != (long *)0x0) {
      plVar8 = plVar2 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppplStack_80 = (long ***)ppuVar1;
    plStack_78 = plVar2;
    FUN_10a5726c4(&ppplStack_70,param_4,&ppplStack_80);
    if (plVar2 != (long *)0x0) {
      plVar8 = plVar2 + 1;
      do {
        lVar9 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    ppplVar5 = ppplStack_d0;
    if ((ppplStack_70 == (long ***)0x0) ||
       (ppplVar7 = ppplStack_70,
       ___dynamic_cast(ppplStack_70,&PTR_DAT_110bf32c0,&PTR_DAT_110c46558,0),
       ppplVar7 == (long ***)0x0)) {
      ppplStack_80 = (long ***)0x0;
      plStack_78 = (long *)0x0;
    }
    else {
      plStack_78 = plStack_68;
      ppplStack_80 = ppplVar7;
      if (plStack_68 != (long *)0x0) {
        plVar2 = plStack_68 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    func_0x00010a7e2008(ppplVar5 + 0x24,0,&ppplStack_80);
    plVar2 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar8 = plStack_78 + 1;
      do {
        lVar9 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = plStack_68;
    ppuVar10 = ppuStack_c0;
    if (plStack_68 != (long *)0x0) {
      plVar8 = plStack_68 + 1;
      do {
        lVar9 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        ppuVar10 = ppuStack_c0;
      }
    }
  }
  plVar2 = plStack_b8;
  if (ppuVar10 != (ulong **)0x0) {
    plStack_78 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar8 = plStack_b8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppplStack_80 = (long ***)ppuVar10;
    FUN_10a5726c4(&ppplStack_70,param_4,&ppplStack_80);
    if (plVar2 != (long *)0x0) {
      plVar8 = plVar2 + 1;
      do {
        lVar9 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    ppplVar5 = ppplStack_d0;
    if ((ppplStack_70 == (long ***)0x0) ||
       (ppplVar7 = ppplStack_70,
       ___dynamic_cast(ppplStack_70,&PTR_DAT_110bf32c0,&PTR_DAT_110c46558,0),
       ppplVar7 == (long ***)0x0)) {
      ppplStack_80 = (long ***)0x0;
      plStack_78 = (long *)0x0;
    }
    else {
      plStack_78 = plStack_68;
      ppplStack_80 = ppplVar7;
      if (plStack_68 != (long *)0x0) {
        plVar2 = plStack_68 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    func_0x00010a7e1f90(ppplVar5 + 0x24,&ppplStack_80);
    (*(code *)(*ppplVar5)[0x12])(ppplVar5);
    plVar2 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar8 = plStack_78 + 1;
      do {
        lVar9 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar8 = plStack_68 + 1;
      do {
        lVar9 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  plVar2 = plStack_b8;
  param_1[1] = plStack_c8;
  *param_1 = ppplStack_d0;
  if (plStack_b8 != (long *)0x0) {
    plVar8 = plStack_b8 + 1;
    do {
      lVar9 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar8 = plStack_a8 + 1;
    do {
      lVar9 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return;
}



/* Entry: 10a00a918; end: 10a00a99b;  */

undefined8 FUN_10a00a918(void)

{
  return 0x40000;
}



/* Entry: 10a00a99c; end: 10a00ae23;  */

void FUN_10a00a99c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6334f8,0x14);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9c200;
  pppuVar2 = (undefined8 ***)&UNK_10f630f1d;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x12400000131;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110b9c200;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,4);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a00ae04;
    FUN_10a054dac(param_1,"fetch",FUN_10a054ebc,3,*(undefined8 *)(param_1 + 0x40));
  }
  iVar4 = *(int *)(param_1 + 0x160);
  iVar5 = iVar4;
  if (iVar4 != 100) {
    iVar5 = 0x19;
  }
  uVar10 = 6;
  uVar9 = uVar10;
  if (iVar4 != 100) {
    uVar9 = 0xffffffff;
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,iVar5,1,0xffffffff,0xffffffff,uVar9);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a00ae04;
    FUN_10a054dac(param_1,&UNK_10f630f43,FUN_10a05838c,2,*(undefined8 *)(param_1 + 0x40));
  }
  iVar5 = *(int *)(param_1 + 0x160);
  if (iVar5 != 100) {
    iVar5 = 0x19;
    uVar10 = 0xffffffff;
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,iVar5,3,0x16a,0xffffffff,uVar10);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a00ae04;
    FUN_10a054dac(param_1,&UNK_10f630f57,FUN_10a058570,2,*(undefined8 *)(param_1 + 0x40));
  }
  iVar5 = *(int *)(param_1 + 0x160);
  bVar7 = iVar5 != 100;
  if (bVar7) {
    iVar5 = 0x19;
  }
  uVar9 = 6;
  if (bVar7) {
    uVar9 = 0xffffffff;
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,iVar5,1,0xffffffff,0xffffffff,uVar9);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a00ae04;
    FUN_10a054dac(param_1,&UNK_10f630f6c,FUN_10a0587c0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,0x400,0xffffffff,0xffffffff,4);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a00ae04;
    FUN_10a054dac(param_1,&UNK_10f630f7f,FUN_10a058fb0,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,6);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a00ae04;
    FUN_10a054dac(param_1,&UNK_10f630f8d,FUN_10a059944,4,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) == lVar3) {
LAB_10a00ae04:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a00ae08);
    (*pcVar6)();
  }
  uStack_98 = *(undefined8 *)(lVar3 + -0x60);
  ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
  puStack_78 = *(undefined **)(lVar3 + -0x40);
  uVar11 = *(ulong *)(lVar3 + -0x48);
  uVar12 = *(ulong *)(lVar3 + -0x50);
  uStack_90 = *(undefined8 *)(lVar3 + -0x58);
  uStack_68 = *(undefined8 *)(lVar3 + -0x30);
  uStack_70 = *(undefined8 *)(lVar3 + -0x38);
  uStack_58 = *(undefined8 *)(lVar3 + -0x20);
  uStack_60 = *(undefined8 *)(lVar3 + -0x28);
  uStack_40 = *(undefined8 *)(lVar3 + -8);
  uStack_48 = *(undefined8 *)(lVar3 + -0x10);
  uStack_50 = *(ulong *)(lVar3 + -0x18);
  *(long *)(param_1 + 0x170) = lVar3 + -0x68;
  uStack_88._4_4_ = (undefined4)(uVar12 >> 0x20);
  uVar9 = uStack_88._4_4_;
  uStack_80._4_4_ = (undefined4)(uVar11 >> 0x20);
  uVar10 = uStack_80._4_4_;
  uVar8 = param_1;
  uStack_88 = uVar12;
  uStack_80 = uVar11;
  FUN_10a0051e8(param_1,uVar12 & 0xffffffff,uVar9,uStack_50 & 0xffffffff,uVar11 & 0xffffffff,uVar10)
  ;
  if ((uVar8 & 1) == 0) {
    func_0x000109894f40(param_1,0);
    FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6334f8,0x14);
    FUN_10a05431c(param_1);
  }
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f630f9d;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a004eb4(param_1,&ppuStack_a0);
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,0x400,0xffffffff,0xffffffff,4);
  if ((uVar8 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a00ae04;
    FUN_10a054dac(param_1,&UNK_10f630fac,FUN_10a05a220,1,*(long *)(param_1 + 0x18) + -8);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,6);
  if ((uVar8 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a00ae04;
    FUN_10a054dac(param_1,&UNK_10f630fc1,FUN_10a05a49c,0,*(long *)(param_1 + 0x18) + -8);
  }
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a00ae24; end: 10a00af1b;  */

undefined8 * FUN_10a00ae24(undefined8 *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 uStack_31;
  
  puVar3 = param_1;
  lVar6 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar3,lVar6);
  *param_1 = &PTR_FUN_110b9a3b0;
  param_1[2] = &PTR_DAT_110b9a450;
  param_1[7] = &PTR_DAT_110b9a4a8;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FUN_10a05a5d4(param_1 + 0x1f,&uStack_31);
  if (param_2 != 0) {
    plVar4 = *(long **)(*(long *)(param_2 + 0x100) + 0x1c8);
    (**(code **)(*plVar4 + 0x60))();
    lVar7 = plVar4[1];
    lVar6 = *plVar4;
    if (plVar4[1] != 0) {
      plVar4 = (long *)(plVar4[1] + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lVar5 = param_1[0x1e];
    param_1[0x1e] = lVar7;
    param_1[0x1d] = lVar6;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a00af1c; end: 10a00aff3;  */

undefined8 * FUN_10a00af1c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 uStack_21;
  
  puVar3 = param_1;
  FUN_10aa7093c();
  *puVar3 = &PTR_FUN_110b9a3b0;
  puVar3[2] = &PTR_DAT_110b9a450;
  puVar3[7] = &PTR_DAT_110b9a4a8;
  *(undefined4 *)(puVar3 + 0x1c) = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  FUN_10a05a5d4(puVar3 + 0x1f,&uStack_21);
  if (param_2 != 0) {
    plVar4 = *(long **)(*(long *)(param_2 + 0x100) + 0x1c8);
    (**(code **)(*plVar4 + 0x60))();
    lVar7 = plVar4[1];
    lVar6 = *plVar4;
    if (plVar4[1] != 0) {
      plVar4 = (long *)(plVar4[1] + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lVar5 = param_1[0x1e];
    param_1[0x1e] = lVar7;
    param_1[0x1d] = lVar6;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a00aff4; end: 10a00b003;  */

void FUN_10a00aff4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a00b004; end: 10a00b0ff;  */

bool FUN_10a00b004(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  undefined8 *puStack_30;
  ulong uStack_28;
  
  if (*(int *)(param_1 + 0xe0) == 1) {
    return true;
  }
  uVar4 = 0;
  iVar2 = (int)&puStack_30;
  uStack_28 = param_2[1];
  puStack_30 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_28 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_30 = param_2;
  }
  FUN_10a04236c(&puStack_30,&DAT_10f35dd1b,7);
  if ((uVar4 & 1) == 0) {
    uStack_28 = param_2[1];
    puStack_30 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uStack_28 = (ulong)*(byte *)((long)param_2 + 0x17);
      puStack_30 = param_2;
    }
    FUN_10a04236c(&puStack_30,&UNK_10f633521,5);
    if (iVar2 == 0) {
      return true;
    }
  }
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x100) + 0x268);
  if (lVar7 == 0) {
    bVar3 = false;
  }
  else {
    piVar5 = *(int **)(lVar7 + 0x20);
    iVar2 = *(int *)(lVar7 + 0x18);
    piVar1 = piVar5 + iVar2;
    piVar6 = piVar5;
    if (iVar2 != 0) {
      lVar7 = (long)iVar2 << 2;
      do {
        piVar6 = piVar5;
        if (*piVar5 == 1) break;
        piVar5 = piVar5 + 1;
        lVar7 = lVar7 + -4;
        piVar6 = piVar1;
      } while (lVar7 != 0);
    }
    bVar3 = piVar6 != piVar1;
  }
  return bVar3;
}



/* Entry: 10a00b100; end: 10a00b33f;  */

void FUN_10a00b100(undefined8 param_1,undefined4 param_2,undefined4 param_3,ulong param_4,
                  undefined8 param_5,ulong *param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *extraout_x8;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 auStack_c8 [72];
  long lStack_80;
  long *plStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  byte bStack_58;
  char cStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_4 + 0xe0) == 1) {
LAB_10a00b158:
    uVar5 = param_4;
    FUN_10a00b004(param_4,param_5);
    if ((uVar5 & 1) != 0) {
      lStack_80 = 0;
      plStack_78 = (long *)0x0;
      plVar6 = *(long **)(param_4 + 0xf0);
      if (plVar6 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count4lockEv();
        plStack_78 = plVar6;
        if ((plVar6 != (long *)0x0) && (lStack_80 = *(long *)(param_4 + 0xe8), lStack_80 != 0)) {
          uVar11 = *(undefined8 *)(param_4 + 0x50);
          uStack_70 = uStack_70 & 0xffffffffffffff00;
          cStack_50 = '\0';
          if ((char)param_6[4] == '\x01') {
            bStack_58 = (byte)param_6[3];
            if ((bStack_58 == 1) || (bStack_58 == 0)) {
              uStack_68 = param_6[1];
              uStack_70 = *param_6;
              uStack_60 = param_6[2];
              *param_6 = 0;
              param_6[1] = 0;
              param_6[2] = 0;
            }
            cStack_50 = '\x01';
          }
          FUN_10a042418(auStack_c8,param_7);
          param_2 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_d0 = 0x3f800000;
          FUN_10a9744c4(param_1,param_5,&lStack_80,uVar11,&uStack_70,auStack_c8,&uStack_f0);
          func_0x000104c4f944(&uStack_f0);
          FUN_10a042530(auStack_c8);
          if (cStack_50 == '\x01') {
            if (2 < (ulong)bStack_58) goto LAB_10a00b328;
            (*(code *)(&PTR_FUN_110b9f188)[bStack_58])(&uStack_70);
          }
          plVar6 = plStack_78;
          if (plStack_78 != (long *)0x0) {
            plVar1 = plStack_78 + 1;
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
              (**(code **)(*plStack_78 + 0x10))(plStack_78);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
            return;
          }
          goto LAB_10a00b2d4;
        }
      }
      FUN_10a00946c(&UNK_10f631051);
      goto LAB_10a00b328;
    }
    FUN_10a00946c(&UNK_10f631004);
LAB_10a00b2d4:
    ___stack_chk_fail();
  }
  else {
    uVar5 = *(ulong *)(param_4 + 0x50);
    FUN_10a3df7b0(uVar5,2);
    if ((uVar5 & 1) != 0) goto LAB_10a00b158;
  }
  puVar7 = &UNK_10f630fd8;
  FUN_10a00946c();
  func_0x000104c4f944(&uStack_f0);
  FUN_10a042530(auStack_c8);
  if (cStack_50 == '\x01') {
    if (2 < (ulong)bStack_58) {
LAB_10a00b328:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a00b32c);
      (*pcVar4)();
    }
    (*(code *)(&PTR_FUN_110b9f188)[bStack_58])(&uStack_70);
  }
  func_0x00010a05a8c4(&lStack_80);
  __Unwind_Resume(puVar7);
  puVar8 = (undefined8 *)0x60;
  __Znwm();
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_DAT_110b9da58;
  puVar8[3] = &PTR_DAT_110c32658;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[7] = 0;
  puVar8[6] = 0;
  puVar8[9] = 0;
  puVar8[8] = 0;
  puVar8[0xb] = 0;
  puVar8[10] = 0;
  puVar9 = (undefined8 *)0x48;
  __Znwm();
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110b9daa8;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[3] = &PTR_DAT_110c32600;
  *(undefined4 *)(puVar9 + 6) = param_2;
  *(undefined4 *)((long)puVar9 + 0x34) = param_3;
  puVar9[7] = puVar8 + 3;
  puVar9[8] = puVar8;
  *extraout_x8 = puVar9 + 3;
  extraout_x8[1] = puVar9;
  return;
}



/* Entry: 10a00b340; end: 10a00b407;  */

void FUN_10a00b340(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110b9da58;
  puVar1[3] = &PTR_DAT_110c32658;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110b9daa8;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[3] = &PTR_DAT_110c32600;
  *(uint *)(puVar2 + 6) =
       CONCAT13(in_register_00005003,
                CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  *(undefined4 *)((long)puVar2 + 0x34) = param_2;
  puVar2[7] = puVar1 + 3;
  puVar2[8] = puVar1;
  *param_1 = puVar2 + 3;
  param_1[1] = puVar2;
  return;
}



/* Entry: 10a00b408; end: 10a00bca7;  */

/* WARNING: Removing unreachable block (ram,0x00010a00b9cc) */
/* WARNING: Removing unreachable block (ram,0x00010a00b9d0) */
/* WARNING: Removing unreachable block (ram,0x00010a00b9d8) */
/* WARNING: Removing unreachable block (ram,0x00010a00b9e0) */
/* WARNING: Removing unreachable block (ram,0x00010a00b9e4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a00b408(float param_1,float param_2,undefined *****param_3,undefined *****param_4,
                  long *param_5,code ****param_6)

{
  undefined ****ppppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined ****ppppuVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code ****ppppcVar10;
  code ****ppppcVar11;
  undefined ****ppppuVar12;
  undefined *****pppppuVar13;
  undefined *****pppppuVar14;
  undefined *****pppppuVar15;
  long lVar16;
  undefined ***pppuVar17;
  code ***pppcVar18;
  undefined ****ppppuVar19;
  long *plVar20;
  undefined ****ppppuVar21;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  code ****ppppcStack_210;
  undefined ****ppppuStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  code ***pppcStack_1e8;
  undefined ****ppppuStack_1e0;
  undefined ****ppppuStack_1d8;
  undefined ****ppppuStack_1d0;
  undefined ****ppppuStack_1c8;
  undefined ***pppuStack_1c0;
  code ***pppcStack_1b8;
  code ***pppcStack_1b0;
  undefined ****ppppuStack_1a8;
  undefined ****ppppuStack_1a0;
  long lStack_188;
  code ****ppppcStack_180;
  undefined *****pppppuStack_178;
  undefined *****pppppuStack_170;
  code ****ppppcStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined ****ppppuStack_150;
  long *plStack_148;
  code ****ppppcStack_140;
  undefined *****pppppuStack_138;
  undefined ****ppppuStack_130;
  long *plStack_128;
  code ****ppppcStack_120;
  undefined *****pppppuStack_118;
  code ****ppppcStack_110;
  undefined *****pppppuStack_108;
  code ****ppppcStack_100;
  undefined *****pppppuStack_f8;
  long lStack_f0;
  undefined **appuStack_e8 [8];
  code ****ppppcStack_a8;
  undefined *****pppppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar13 = param_4;
  if (*(int *)(param_3 + 0x1c) != 1) {
    ppppuVar6 = param_3[10];
    pppppuVar13 = (undefined *****)0x2;
    FUN_10a3df7b0();
    if (((ulong)ppppuVar6 & 1) == 0) goto LAB_10a00bbac;
  }
  ppppuVar6 = *param_4;
  if (ppppuVar6 == (undefined ****)0x0) {
    FUN_10a00946c(&UNK_10f631076);
LAB_10a00bb90:
    FUN_10a00946c(&UNK_10f631096);
LAB_10a00bb9c:
    FUN_10a00946c(&UNK_10f6310be);
  }
  else {
    if (*param_5 == 0) goto LAB_10a00bb90;
    pppcVar18 = *param_6;
    param_6 = (code ****)0x0;
    if (pppcVar18 == (code ***)0x0) goto LAB_10a00bb9c;
    FUN_10a9765bc(ppppuVar6);
    if ((param_1 <= 0.0) || (param_2 <= 0.0)) {
      func_0x000107c2b054(&ppppcStack_100,&UNK_10f6310e6);
      if (*(char *)(pppcVar18 + 8) == '\x01') {
        (*(code *)*pppcVar18)(&ppppcStack_100,pppcVar18);
      }
      else if (*(char *)(pppcVar18 + 8) == '\x02') {
        FUN_10a05aad0(pppcVar18,&ppppcStack_100);
      }
      if (lStack_f0 < 0) {
        __ZdlPv(ppppcStack_100);
      }
      ppppuVar6 = *param_4;
    }
    ppppuVar19 = param_3[10];
    ppppuVar21 = param_4[1];
    plVar7 = (long *)0x320;
    __Znwm();
    plVar20 = plVar7 + 1;
    *plVar20 = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110b9daf8;
    ppppuVar12 = (undefined ****)(plVar7 + 3);
    if (ppppuVar21 != (undefined ****)0x0) {
      ppppuVar1 = ppppuVar21 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar4) {
          *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppppcStack_100 = (code ****)ppppuVar6;
    pppppuStack_f8 = (undefined *****)ppppuVar21;
    FUN_10ac8da9c(ppppuVar12,ppppuVar19,&ppppcStack_100);
    pppppuVar13 = pppppuStack_f8;
    if (pppppuStack_f8 != (undefined *****)0x0) {
      ppppuVar6 = (undefined ****)(pppppuStack_f8 + 1);
      do {
        pppuVar17 = *ppppuVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppuVar6,0x10);
        if (bVar4) {
          *ppppuVar6 = (undefined ***)((long)pppuVar17 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppuVar17 == (undefined ***)0x0) {
        (*(code *)(*pppppuStack_f8)[2])(pppppuStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar13);
      }
    }
    ppppuStack_130 = ppppuVar12;
    plStack_128 = plVar7;
    if (plVar7[0xc] == 0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *plVar20 = *plVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar2 = plVar7 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar7[0xb] = (long)ppppuVar12;
      plVar7[0xc] = (long)plVar7;
LAB_10a00b5f0:
      do {
        lVar16 = *plVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *plVar20 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    else if (*(long *)(plVar7[0xc] + 8) == -1) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *plVar20 = *plVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar2 = plVar7 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar7[0xb] = (long)ppppuVar12;
      plVar7[0xc] = (long)plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      goto LAB_10a00b5f0;
    }
    plVar7 = plStack_128;
    ppppuVar6 = param_3[10];
    if (ppppuVar6 == (undefined ****)0x0) {
      plStack_148 = plStack_128;
      ppppuStack_150 = ppppuStack_130;
      ppppcVar10 = (code ****)0x2c0;
      __Znwm();
      ppppcVar10[1] = (code ***)0x0;
      ppppcVar10[2] = (code ***)0x0;
      *ppppcVar10 = (code ***)&PTR_DAT_110b9fda0;
      param_6 = ppppcVar10 + 3;
      pppppuStack_f8 = (undefined *****)plStack_148;
      ppppcStack_100 = (code ****)ppppuStack_150;
      if (plVar7 != (long *)0x0) {
        plVar20 = plVar7 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *plVar20 = *plVar20 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppppcVar11 = ppppcVar10;
      func_0x00010a0fda30();
      FUN_10ab6a888(param_6,0,&ppppcStack_100,ppppcVar11,ppppuVar19);
      if (plVar7 != (long *)0x0) {
        plVar20 = plVar7 + 1;
        do {
          lVar16 = *plVar20;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *plVar20 = lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      ppppcStack_a8 = param_6;
      pppppuStack_a0 = (undefined *****)ppppcVar10;
      FUN_10a05b2a8(&ppppcStack_a8,ppppcVar10 + 8,param_6);
      FUN_10a05b04c(&ppppcStack_110,&ppppcStack_a8);
      pppppuVar13 = pppppuStack_a0;
      if (pppppuStack_a0 != (undefined *****)0x0) {
        ppppcVar10 = (code ****)(pppppuStack_a0 + 1);
        do {
          pppcVar18 = *ppppcVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppcVar10,0x10);
          if (bVar4) {
            *ppppcVar10 = (code ***)((long)pppcVar18 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (pppcVar18 == (code ***)0x0) {
          (*(code *)(*pppppuStack_a0)[2])(pppppuStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar13);
        }
      }
      if (pppppuStack_108 == (undefined *****)0x0) {
        pppppuStack_f8 = (undefined *****)0x0;
      }
      else {
        pppppuVar13 = pppppuStack_108 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
          if (bVar4) {
            *pppppuVar13 = (undefined ****)((long)*pppppuVar13 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        pppppuStack_f8 = pppppuStack_108;
        if (pppppuStack_108 != (undefined *****)0x0) {
          pppppuVar13 = pppppuStack_108 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
            if (bVar4) {
              *pppppuVar13 = (undefined ****)((long)*pppppuVar13 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      param_4 = (undefined *****)0x0;
      uStack_90 = 0;
      uStack_98 = 0;
      ppppcStack_a8 = (code ****)&UNK_1053a6a3c;
      appuStack_e8[0] = &PTR_DAT_110b9db38;
      lStack_f0 = 0x10a05b48c;
      ppppcStack_100 = ppppcStack_110;
      pppppuStack_a0 = (undefined *****)&PTR_DAT_110ae9180;
      FUN_10a044790(&ppppcStack_a8);
      (*(code *)*pppppuStack_a0)(&pppppuStack_a0);
      pppppuVar13 = pppppuStack_108;
      if (pppppuStack_108 != (undefined *****)0x0) {
        pppppuVar14 = pppppuStack_108 + 1;
        do {
          ppppuVar6 = *pppppuVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppuVar14,0x10);
          if (bVar4) {
            *pppppuVar14 = (undefined ****)((long)ppppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppppuVar6 == (undefined ****)0x0) {
          (*(code *)(*pppppuStack_108)[2])(pppppuStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar13);
        }
      }
      pppppuStack_138 = pppppuStack_f8;
      ppppcStack_140 = ppppcStack_100;
      if (pppppuStack_f8 != (undefined *****)0x0) {
        pppppuVar13 = pppppuStack_f8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
          if (bVar4) {
            *pppppuVar13 = (undefined ****)((long)*pppppuVar13 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a044790(&lStack_f0);
      (*(code *)*appuStack_e8[0])(appuStack_e8);
      param_3 = pppppuStack_f8;
      if (pppppuStack_f8 != (undefined *****)0x0) {
        pppppuVar13 = pppppuStack_f8 + 1;
        do {
          ppppuVar6 = *pppppuVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
          if (bVar4) {
            *pppppuVar13 = (undefined ****)((long)ppppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_10a00bab4;
      }
    }
    else {
      ppppcStack_120 = (code ****)ppppuVar6[0x10b];
      pppppuStack_118 = (undefined *****)ppppuVar6[0x10c];
      if (pppppuStack_118 != (undefined *****)0x0) {
        pppppuVar13 = pppppuStack_118 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
          if (bVar4) {
            *pppppuVar13 = (undefined ****)((long)*pppppuVar13 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plStack_148 = plStack_128;
      ppppuStack_150 = ppppuStack_130;
      uVar8 = 0x2a8;
      __Znwm(0x2a8);
      pppppuStack_f8 = (undefined *****)plStack_148;
      ppppcStack_100 = (code ****)ppppuStack_150;
      if (plVar7 != (long *)0x0) {
        plVar20 = plVar7 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *plVar20 = *plVar20 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar9 = uVar8;
      func_0x00010a0fda30();
      FUN_10ab6a888(uVar8,ppppuVar6,&ppppcStack_100,uVar9,ppppuVar19);
      if (plVar7 != (long *)0x0) {
        plVar20 = plVar7 + 1;
        do {
          lVar16 = *plVar20;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *plVar20 = lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      param_4 = pppppuStack_118;
      param_6 = ppppcStack_120;
      ppppcStack_110 = ppppcStack_120;
      pppppuStack_108 = pppppuStack_118;
      if (pppppuStack_118 != (undefined *****)0x0) {
        pppppuVar13 = pppppuStack_118 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
          if (bVar4) {
            *pppppuVar13 = (undefined ****)((long)*pppppuVar13 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        pppppuVar13 = pppppuStack_118 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
          if (bVar4) {
            *pppppuVar13 = (undefined ****)((long)*pppppuVar13 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
          if (bVar4) {
            *pppppuVar13 = (undefined ****)((long)*pppppuVar13 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuStack_118);
      }
      ppppcStack_100 = param_6;
      pppppuStack_f8 = param_4;
      FUN_10a05b208(&ppppcStack_a8,uVar8,&ppppcStack_100);
      FUN_10a05b04c(&ppppcStack_140);
      pppppuVar13 = pppppuStack_a0;
      if (pppppuStack_a0 != (undefined *****)0x0) {
        pppppuVar14 = pppppuStack_a0 + 1;
        do {
          ppppuVar6 = *pppppuVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppuVar14,0x10);
          if (bVar4) {
            *pppppuVar14 = (undefined ****)((long)ppppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppppuVar6 == (undefined ****)0x0) {
          (*(code *)(*pppppuStack_a0)[2])(pppppuStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar13);
        }
      }
      if (pppppuStack_f8 != (undefined *****)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      pppppuVar13 = pppppuStack_108;
      if (pppppuStack_108 != (undefined *****)0x0) {
        pppppuVar14 = pppppuStack_108 + 1;
        do {
          ppppuVar6 = *pppppuVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppuVar14,0x10);
          if (bVar4) {
            *pppppuVar14 = (undefined ****)((long)ppppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppppuVar6 == (undefined ****)0x0) {
          (*(code *)(*pppppuStack_108)[2])(pppppuStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar13);
        }
      }
      if ((ppppcStack_120 != (code ****)0x0) && (ppppcStack_140 != (code ****)0x0)) {
        ppppcStack_a8 = ppppcStack_140;
        pppppuStack_a0 = pppppuStack_138;
        if (pppppuStack_138 != (undefined *****)0x0) {
          pppppuVar13 = pppppuStack_138 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
            if (bVar4) {
              *pppppuVar13 = (undefined ****)((long)*pppppuVar13 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_10aa88c30(ppppcStack_120,&ppppcStack_a8);
        pppppuVar13 = pppppuStack_a0;
        if (pppppuStack_a0 != (undefined *****)0x0) {
          pppppuVar14 = pppppuStack_a0 + 1;
          do {
            ppppuVar6 = *pppppuVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppuVar14,0x10);
            if (bVar4) {
              *pppppuVar14 = (undefined ****)((long)ppppuVar6 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppuVar6 == (undefined ****)0x0) {
            (*(code *)(*pppppuStack_a0)[2])(pppppuStack_a0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar13);
          }
        }
      }
      param_3 = pppppuStack_118;
      if (pppppuStack_118 != (undefined *****)0x0) {
        pppppuVar13 = pppppuStack_118 + 1;
        do {
          ppppuVar6 = *pppppuVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
          if (bVar4) {
            *pppppuVar13 = (undefined ****)((long)ppppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_10a00bab4:
        if (ppppuVar6 == (undefined ****)0x0) {
          (*(code *)(*param_3)[2])(param_3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
        }
      }
    }
    pppppuVar13 = &ppppcStack_140;
    FUN_10a00bca8(*param_5);
    pppppuVar14 = pppppuStack_138;
    if (pppppuStack_138 != (undefined *****)0x0) {
      pppppuVar15 = pppppuStack_138 + 1;
      do {
        ppppuVar6 = *pppppuVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppuVar15,0x10);
        if (bVar4) {
          *pppppuVar15 = (undefined ****)((long)ppppuVar6 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppuVar6 == (undefined ****)0x0) {
        (*(code *)(*pppppuStack_138)[2])(pppppuStack_138);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar14);
      }
    }
    plVar7 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar20 = plStack_128 + 1;
      do {
        lVar16 = *plVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *plVar20 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_10a00bbac:
  ppppcVar10 = (code ****)&UNK_10f630fd8;
  FUN_10a00946c();
  func_0x00010a0536d4(&ppppcStack_a8);
  func_0x00010a05248c(&ppppcStack_140);
  FUN_10a054c5c(&ppppcStack_120);
  FUN_10a05aff4(&ppppuStack_130);
  ppppcVar11 = ppppcVar10;
  __Unwind_Resume();
  pppppuStack_170 = param_3;
  ppppcStack_168 = ppppcVar10;
  puStack_160 = &stack0xfffffffffffffff0;
  if ((ppppcVar11 == (code ****)0x0) || (*(char *)(ppppcVar11 + 8) != '\x02')) {
    if ((ppppcVar11 != (code ****)0x0) && (*(char *)(ppppcVar11 + 8) == '\x01')) {
      pcStack_158 = FUN_10a00bca8;
      pppcVar18 = *ppppcVar11;
      pppppuStack_178 = (undefined *****)pppppuVar13[1];
      ppppcStack_180 = (code ****)*pppppuVar13;
      if (pppppuVar13[1] != (undefined ****)0x0) {
        ppppuVar6 = pppppuVar13[1] + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppuVar6,0x10);
          if (bVar4) {
            *ppppuVar6 = (undefined ***)((long)*ppppuVar6 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      (*(code *)pppcVar18)(&ppppcStack_180,ppppcVar11);
      pppppuVar13 = pppppuStack_178;
      if (pppppuStack_178 != (undefined *****)0x0) {
        ppppuVar6 = (undefined ****)(pppppuStack_178 + 1);
        do {
          pppuVar17 = *ppppuVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppuVar6,0x10);
          if (bVar4) {
            *ppppuVar6 = (undefined ***)((long)pppuVar17 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (pppuVar17 == (undefined ***)0x0) {
          (*(code *)(*pppppuStack_178)[2])(pppppuStack_178);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar13);
        }
      }
      return;
    }
    return;
  }
  pcStack_158 = FUN_10a00bca8;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar10 = ppppcVar11;
  pppppuVar14 = pppppuVar13;
  ppppcStack_180 = param_6;
  pppppuStack_178 = param_4;
  FUN_10a688b40();
  if (ppppcVar10 == (code ****)0x0) {
    pppppuVar15 = (undefined *****)0x0;
    ppppuVar6 = (undefined ****)0x0;
    if (pppppuVar14 != (undefined *****)0x0) {
      pppcStack_1b0 = ppppcVar11[1];
      pppcStack_1b8 = *ppppcVar11;
      if (ppppcVar11[1] != (code ***)0x0) {
        pppcVar18 = ppppcVar11[1] + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppcVar18,0x10);
          if (bVar4) {
            *pppcVar18 = (code **)((long)*pppcVar18 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppppuStack_1d8 = *pppppuVar13;
      ppppuVar12 = pppppuVar13[1];
      if (ppppuVar12 != (undefined ****)0x0) {
        ppppuVar6 = ppppuVar12 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppuVar6,0x10);
          if (bVar4) {
            *ppppuVar6 = (undefined ***)((long)*ppppuVar6 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppppuStack_1c8 = (undefined ****)FUN_10a05b9a8;
      pppuStack_1c0 = (undefined ***)&PTR_FUN_110b9f3f0;
      pppcStack_1e8 = (code ***)0x0;
      ppppuStack_1e0 = (undefined ****)0x0;
      if (ppppuVar12 != (undefined ****)0x0) {
        ppppuVar6 = ppppuVar12 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppuVar6,0x10);
          if (bVar4) {
            *ppppuVar6 = (undefined ***)((long)*ppppuVar6 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppppcVar10 = &pppcStack_1e8;
      ppppcVar11 = (code ****)&ppppuStack_1c8;
      pppppuVar15 = &ppppuStack_1c8;
      ppppuStack_1d0 = ppppuVar12;
      ppppuStack_1a8 = ppppuStack_1d8;
      ppppuStack_1a0 = ppppuVar12;
      FUN_10a4634ec(pppppuVar14,pppppuVar15);
      ppppuVar6 = &pppuStack_1c0;
      (*(code *)*pppuStack_1c0)();
      if (ppppuVar12 != (undefined ****)0x0) {
        ppppuVar19 = ppppuVar12 + 1;
        do {
          pppuVar17 = *ppppuVar19;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppuVar19,0x10);
          if (bVar4) {
            *ppppuVar19 = (undefined ***)((long)pppuVar17 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (pppuVar17 == (undefined ***)0x0) {
          (*(code *)(*ppppuVar12)[2])(ppppuVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppuVar6 = ppppuVar12;
        }
      }
      ppppuVar12 = ppppuStack_1e0;
      if (ppppuStack_1e0 != (undefined ****)0x0) {
        ppppuVar19 = ppppuStack_1e0 + 1;
        do {
          pppuVar17 = *ppppuVar19;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppuVar19,0x10);
          if (bVar4) {
            *ppppuVar19 = (undefined ***)((long)pppuVar17 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (pppuVar17 == (undefined ***)0x0) {
          (*(code *)(*ppppuStack_1e0)[2])(ppppuStack_1e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppuVar6 = ppppuVar12;
        }
      }
    }
  }
  else {
    *ppppcVar10 = (code ***)CONCAT44((int)((ulong)*ppppcVar10 >> 0x20) + 1,(int)*ppppcVar10 + 1);
    ppppuVar6 = (undefined ****)*ppppcVar11;
    FUN_10a05b758(ppppuVar6,pppppuVar13);
    iVar5 = *(int *)((long)ppppcVar10 + 4) + -1;
    *(int *)((long)ppppcVar10 + 4) = iVar5;
    pppppuVar15 = pppppuVar13;
    if (iVar5 == 0) {
      *(undefined4 *)ppppcVar10 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    (*(code *)*pppuStack_1c0)(ppppcVar11 + 1);
    func_0x00010a05248c(ppppcVar10 + 2);
    func_0x00010a004dac(&pppcStack_1e8);
    ppppuVar12 = ppppuVar6;
    __Unwind_Resume();
    pcStack_1f8 = FUN_10a05b758;
    ppppcStack_210 = ppppcVar10;
    ppppuStack_208 = ppppuVar6;
    ppuStack_200 = &puStack_160;
    func_0x000109884c0c(&puStack_220,ppppuVar12 + 1,*ppppuVar12);
    func_0x000109884820(&puStack_218,&puStack_220,*ppppuVar12);
    if (puStack_220 != (undefined8 *)0x0) {
      (**(code **)*puStack_220)();
    }
    (*(code *)(**ppppuVar12)[6])(&puStack_220);
    FUN_10a05b844(*ppppuVar12,&puStack_220,&puStack_218,pppppuVar15);
    if (puStack_220 != (undefined8 *)0x0) {
      (**(code **)*puStack_220)();
    }
    if (puStack_218 != (undefined8 *)0x0) {
      (**(code **)*puStack_218)();
    }
    return;
  }
  return;
}



/* Entry: 10a00bca8; end: 10a00bccf;  */

void FUN_10a00bca8(code **param_1,code **param_2)

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
      pcStack_78 = FUN_10a05b9a8;
      ppuStack_70 = &PTR_FUN_110b9f3f0;
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
    FUN_10a05b758(pppuVar7,param_2);
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
  func_0x00010a05248c(ppcVar6 + 2);
  func_0x00010a004dac(&pcStack_98);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a05b758;
  ppcStack_c0 = ppcVar6;
  pppuStack_b8 = pppuVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,pppuVar8 + 1,*pppuVar8);
  func_0x000109884820(&puStack_c8,&puStack_d0,*pppuVar8);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**pppuVar8 + 0x30))(&puStack_d0);
  FUN_10a05b844(*pppuVar8,&puStack_d0,&puStack_c8,ppcVar10);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a00bcd0; end: 10a00c743;  */

long * FUN_10a00bcd0(undefined8 *param_1,ulong param_2,long *param_3,long param_4)

{
  undefined **ppuVar1;
  ulong *puVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined1 **ppuVar7;
  code *pcVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  long *plVar14;
  undefined1 **ppuVar15;
  undefined8 uVar16;
  undefined1 **ppuVar17;
  undefined *puVar18;
  long lVar19;
  undefined1 *puVar20;
  long lStack_380;
  long *plStack_378;
  long lStack_370;
  long *plStack_368;
  long lStack_360;
  long *plStack_358;
  long *plStack_350;
  undefined1 **ppuStack_348;
  long *plStack_340;
  undefined1 **ppuStack_338;
  long *plStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined1 uStack_2f1;
  code *pcStack_2f0;
  undefined **ppuStack_2e8;
  long *plStack_2e0;
  undefined1 *puStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_268;
  undefined1 uStack_190;
  undefined6 uStack_18f;
  undefined1 uStack_189;
  int iStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  char cStack_178;
  undefined8 uStack_148;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_2 + 0xe0) != 1) {
    uVar10 = *(ulong *)(param_2 + 0x50);
    FUN_10a3df7b0(uVar10,2);
    if ((uVar10 & 1) == 0) goto LAB_10a00c5a0;
  }
  if ((char)param_3[3] == '\0') {
    plVar11 = (long *)0xb0;
    __Znwm();
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&PTR_FUN_110b9f1b0;
    ppuVar17 = (undefined1 **)(plVar11 + 3);
    uStack_190 = 0;
    cStack_178 = '\0';
    FUN_10a96f370(ppuVar17,param_3,&uStack_190);
    plStack_340 = plVar11;
    if (((cStack_178 == '\x01') && (3 < iStack_188)) && (uStack_180 != (undefined8 *)0x0)) {
      (**(code **)*uStack_180)();
    }
LAB_10a00bdcc:
    ppuStack_348 = ppuVar17;
    if (*(char *)((long)ppuVar17 + 0x1f) < '\0') {
      func_0x000107c3192c(&uStack_190,ppuVar17[1],ppuVar17[2]);
    }
    else {
      puVar20 = ppuVar17[1];
      uStack_180 = (undefined8 *)ppuVar17[3];
      iStack_188 = (int)ppuVar17[2];
      uStack_184 = (undefined4)((ulong)ppuVar17[2] >> 0x20);
      uStack_190 = SUB81(puVar20,0);
      uStack_18f = (undefined6)((ulong)puVar20 >> 8);
      uStack_189 = (undefined1)((ulong)puVar20 >> 0x38);
    }
    uVar10 = param_2;
    FUN_10a00b004(param_2,&uStack_190);
    if ((long)uStack_180 < 0) {
      __ZdlPv(CONCAT17(uStack_189,CONCAT61(uStack_18f,uStack_190)));
    }
    if ((uVar10 & 1) != 0) goto LAB_10a00be18;
  }
  else {
    if ((char)param_3[3] != '\x01') {
      FUN_10a05bab8(&UNK_10f6347d3);
LAB_10a00c5a0:
      plVar11 = (long *)&UNK_10f630fd8;
      FUN_10a00946c();
      FUN_10a05bd88(&lStack_380);
      func_0x00010a05a8c4(&pcStack_2f0);
      FUN_10a05bd88(&lStack_370);
      if (lStack_360 != 0) {
        func_0x0001092b4274(&lStack_360);
      }
      FUN_10a00c744(&plStack_358);
      FUN_10a05ba20(&ppuStack_348);
      __Unwind_Resume();
      if (plVar11[1] != 0) {
        func_0x0001092b4274();
      }
      plVar14 = (long *)*plVar11;
      if (plVar14 != (long *)0x0) {
        puVar2 = (ulong *)(plVar14 + 1);
        do {
          uVar10 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar10 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar10 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar14 + 8))();
          }
        }
      }
      return plVar11;
    }
    ppuVar17 = (undefined1 **)*param_3;
    plStack_340 = (long *)param_3[1];
    if (plStack_340 != (long *)0x0) {
      plVar11 = plStack_340 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    ppuStack_348 = ppuVar17;
    if (ppuVar17 != (undefined1 **)0x0) goto LAB_10a00bdcc;
LAB_10a00be18:
    if (*(char *)(param_4 + 0x18) == '\x01') {
      FUN_10a96f4a8(ppuVar17,param_4);
    }
    plVar11 = (long *)0xb0;
    __Znwm();
    ppuVar17 = ppuStack_348;
    plVar14 = plVar11 + 1;
    plVar11[2] = 0;
    *plVar14 = 0x200000006;
    *(undefined2 *)(plVar11 + 3) = 4;
    plVar11[5] = 0;
    plVar11[4] = 0;
    plVar11[7] = 0;
    plVar11[6] = 0;
    plVar11[9] = 0;
    plVar11[8] = 0;
    plVar11[0xb] = 0;
    plVar11[10] = 0;
    plVar11[0xd] = 0;
    plVar11[0xc] = 0;
    plVar11[0xf] = 0;
    plVar11[0xe] = 0;
    plVar11[0x10] = 0;
    plVar11[0x11] = (long)(plVar11 + 3);
    plVar11[0x12] = 0;
    *plVar11 = (long)&PTR_FUN_110b9eba8;
    *(undefined1 *)(plVar11 + 0x13) = 0;
    *(undefined1 *)(plVar11 + 0x15) = 0;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = *plVar14 + 0x200000000;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    pcStack_2f0 = FUN_10a05bb40;
    ppuStack_2e8 = &PTR_FUN_110b9db50;
    lStack_360 = 0;
    plStack_358 = plVar11;
    plStack_350 = plVar11;
    plStack_2e0 = plVar11;
    if (ppuStack_348 == (undefined1 **)0x0) {
      FUN_10a00946c(&UNK_10f6312c7);
      goto LAB_10a00c590;
    }
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_300 = 0x3f800000;
    FUN_10a96e7fc(&uStack_190,ppuStack_348[0xc]);
    ppuVar7 = (undefined1 **)CONCAT44(uStack_184,iStack_188);
    for (ppuVar15 = (undefined1 **)CONCAT17(uStack_189,CONCAT61(uStack_18f,uStack_190));
        ppuVar15 != ppuVar7; ppuVar15 = ppuVar15 + 3) {
      FUN_10a96e56c(&puStack_2b0,ppuVar17[0xc],ppuVar15);
      puVar12 = &uStack_320;
      ppuStack_338 = ppuVar15;
      FUN_109cf993c(puVar12,ppuVar15,&UNK_10dd5b8f9,&ppuStack_338,&uStack_2f1);
      if (*(char *)((long)puVar12 + 0x3f) < '\0') {
        __ZdlPv(puVar12[5]);
      }
      puVar20 = puStack_2b0;
      puVar12[6] = puStack_2a8;
      puVar12[5] = puVar20;
      puVar12[7] = uStack_2a0;
    }
    puStack_2b0 = &uStack_190;
    FUN_10a0426d8(&puStack_2b0);
    __ZNSt3__19to_stringEi(&uStack_190,*(undefined1 *)(ppuVar17 + 0xf));
    uStack_2a0 = (undefined1 *)CONCAT17(0x10,(undefined7)uStack_2a0);
    puStack_2a8 = (undefined1 *)0x6576696c61706565;
    puStack_2b0 = (undefined1 *)0x6b5f68637465663a;
    uStack_2a0 = (undefined1 *)((ulong)uStack_2a0 & 0xffffffffffffff00);
    puVar12 = &uStack_320;
    ppuStack_338 = &puStack_2b0;
    func_0x000104c5bc74(puVar12,&puStack_2b0,&UNK_10dd5b8f9,&ppuStack_338,&uStack_2f1);
    if (*(char *)((long)puVar12 + 0x3f) < '\0') {
      __ZdlPv(puVar12[5]);
    }
    uVar16 = CONCAT17(uStack_189,CONCAT61(uStack_18f,uStack_190));
    puVar12[6] = CONCAT44(uStack_184,iStack_188);
    puVar12[5] = uVar16;
    puVar12[7] = uStack_180;
    uStack_180 = (undefined8 *)((ulong)uStack_180 & 0xffffffffffffff);
    uStack_190 = 0;
    if (((long)uStack_2a0 < 0) && (__ZdlPv(puStack_2b0), (long)uStack_180 < 0)) {
      __ZdlPv(CONCAT17(uStack_189,CONCAT61(uStack_18f,uStack_190)));
    }
    uVar4 = *(uint *)((long)ppuVar17 + 0x74);
    if (2 < uVar4) {
      FUN_10a00946c(&UNK_10f685ce2);
      goto LAB_10a00c590;
    }
    uVar16 = *(undefined8 *)(&UNK_10e492f20 + (ulong)uVar4 * 8);
    puVar18 = (&PTR_DAT_110b9fe70)[uVar4];
    uStack_180 = (undefined8 *)CONCAT17(0xf,(undefined7)uStack_180);
    uStack_190 = 0x3a;
    uStack_18f = 0x5f6863746566;
    uStack_189 = 0x72;
    iStack_188 = 0x72696465;
    uStack_184 = 0x746365;
    puStack_2b0 = &uStack_190;
    puVar12 = &uStack_320;
    func_0x000104c5bc74(puVar12,&uStack_190,&UNK_10dd5b8f9,&puStack_2b0,&ppuStack_338);
    func_0x000107c2c4d8(puVar12 + 5,puVar18,uVar16);
    if ((long)uStack_180 < 0) {
      __ZdlPv(CONCAT17(uStack_189,CONCAT61(uStack_18f,uStack_190)));
    }
    FUN_10a3bf120(&uStack_190);
    iVar9 = (int)ppuVar17 + 0x28;
    FUN_10a97147c();
    if (iVar9 == 0) {
      ppuStack_338 = ppuVar17;
      plStack_330 = plStack_340;
      if (plStack_340 != (long *)0x0) {
        plVar11 = plStack_340 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a9714e0(&puStack_2b0,&ppuStack_338);
      uStack_148 = uStack_268;
      ppuVar15 = &puStack_2b0;
      FUN_10a0425b4(&uStack_190,ppuVar15);
      FUN_10a042634(&puStack_2b0);
      plVar11 = plStack_330;
      ppuVar17 = ppuStack_348;
      if (plStack_330 != (long *)0x0) {
        plVar14 = plStack_330 + 1;
        do {
          lVar19 = *plVar14;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *plVar14 = lVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_330 + 0x10))(plStack_330);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          ppuVar17 = ppuStack_348;
        }
      }
    }
    else {
      uStack_2a0 = (undefined1 *)CONCAT17(0xc,(undefined7)uStack_2a0);
      puStack_2b0 = (undefined1 *)0x2d746e65746e6f63;
      puStack_2a8 = (undefined1 *)CONCAT35(puStack_2a8._5_3_,0x65707974);
      ppuVar15 = &puStack_2b0;
      FUN_10a05be70(&uStack_320,ppuVar15);
      if ((long)uStack_2a0 < 0) {
        __ZdlPv(puStack_2b0);
      }
    }
    if (*(char *)((long)ppuVar17 + 0x1f) < '\0') {
      ppuVar15 = (undefined1 **)ppuVar17[1];
      func_0x000107c3192c(&puStack_2b0,ppuVar15,ppuVar17[2]);
    }
    else {
      puStack_2a8 = ppuVar17[2];
      puStack_2b0 = ppuVar17[1];
      uStack_2a0 = ppuVar17[3];
    }
    uVar10 = (ulong)*(uint *)(ppuVar17 + 4);
    FUN_10a971eb8(uVar10);
    lVar19 = *(long *)(*(long *)(param_2 + 0x50) + 0x100);
    FUN_10a00ce20(&ppuStack_338,*(undefined8 *)(param_2 + 0xf8),&pcStack_2f0);
    FUN_10a05c194(&lStack_370,&puStack_2b0,uVar10,ppuVar15,&uStack_190,2,&uStack_320,lVar19 + 0x208,
                  &ppuStack_338);
    func_0x00010a05c07c(&ppuStack_338);
    if ((long)uStack_2a0 < 0) {
      __ZdlPv(puStack_2b0);
    }
    FUN_10a042634(&uStack_190);
    func_0x000104c4f944(&uStack_320);
    (*(code *)*ppuStack_2e8)(&ppuStack_2e8);
    if (lStack_370 == 0) {
      FUN_10a009538(&puStack_2b0,&UNK_10f6310f9);
      __ZNSt13runtime_errorC2ERKS_(&uStack_190,&puStack_2b0);
      _memcpy(&uStack_180,&uStack_2a0,0x110);
      uStack_190 = 0x70;
      uStack_18f = 0x110b99e;
      uStack_189 = 0;
      FUN_10a05bde0(&pcStack_2f0,&uStack_190);
      __ZNSt13runtime_errorD2Ev(&uStack_190);
      func_0x000109d1b350(plStack_350,&pcStack_2f0);
      __ZNSt13exception_ptrD1Ev(&pcStack_2f0);
      __ZNSt13runtime_errorD2Ev(&puStack_2b0);
      *param_1 = plStack_358;
      if (plStack_358 != (long *)0x0) {
        plVar11 = plStack_358 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    else {
      pcStack_2f0 = (code *)0x0;
      ppuStack_2e8 = (undefined **)0x0;
      ppuVar13 = *(undefined ***)(param_2 + 0xf0);
      if (((ppuVar13 == (undefined **)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_2e8 = ppuVar13,
          ppuVar13 == (undefined **)0x0)) ||
         (pcStack_2f0 = *(code **)(param_2 + 0xe8), pcStack_2f0 == (code *)0x0)) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f631118,&UNK_10f631159,0xaf,&UNK_10f6311d9);
        }
        FUN_10a009538(&puStack_2b0,&UNK_10f631215);
        __ZNSt13runtime_errorC2ERKS_(&uStack_190,&puStack_2b0);
        _memcpy(&uStack_180,&uStack_2a0,0x110);
        uStack_190 = 0x70;
        uStack_18f = 0x110b99e;
        uStack_189 = 0;
        FUN_10a05bde0(&uStack_320,&uStack_190);
        __ZNSt13runtime_errorD2Ev(&uStack_190);
        func_0x000109d1b350(plStack_350,&uStack_320);
        __ZNSt13exception_ptrD1Ev(&uStack_320);
        __ZNSt13runtime_errorD2Ev(&puStack_2b0);
      }
      else {
        lStack_380 = lStack_370;
        plStack_378 = plStack_368;
        if (plStack_368 != (long *)0x0) {
          plVar11 = plStack_368 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar6) {
              *plVar11 = *plVar11 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        (*(code *)**(undefined8 **)pcStack_2f0)(pcStack_2f0,&lStack_380);
        plVar11 = plStack_378;
        if (plStack_378 != (long *)0x0) {
          plVar14 = plStack_378 + 1;
          do {
            lVar19 = *plVar14;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar6) {
              *plVar14 = lVar19 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plStack_378 + 0x10))(plStack_378);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
      }
      ppuVar13 = ppuStack_2e8;
      *param_1 = plStack_358;
      if (plStack_358 != (long *)0x0) {
        plVar11 = plStack_358 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (ppuStack_2e8 != (undefined **)0x0) {
        ppuVar1 = ppuStack_2e8 + 1;
        do {
          puVar18 = *ppuVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar6) {
            *ppuVar1 = puVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar18 == (undefined *)0x0) {
          (**(code **)(*ppuStack_2e8 + 0x10))(ppuStack_2e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
        }
      }
    }
    if (plStack_368 != (long *)0x0) {
      plVar11 = plStack_368 + 1;
      do {
        lVar19 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_368 + 0x10))(plStack_368);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_368);
      }
    }
    if (lStack_360 != 0) {
      func_0x0001092b4274(&lStack_360);
    }
    if (plStack_350 != (long *)0x0) {
      func_0x0001092b4274(&plStack_350);
    }
    plVar11 = plStack_358;
    if (plStack_358 != (long *)0x0) {
      puVar2 = (ulong *)(plStack_358 + 1);
      do {
        uVar10 = *puVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = uVar10 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar10 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*plStack_358 + 8))();
        }
      }
    }
    plVar14 = plStack_340;
    if (plStack_340 != (long *)0x0) {
      plVar3 = plStack_340 + 1;
      do {
        lVar19 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_340 + 0x10))(plStack_340);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        plVar11 = plVar14;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return plVar11;
    }
    ___stack_chk_fail();
  }
  FUN_10a00946c(&UNK_10f631004);
LAB_10a00c590:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a00c594);
  (*pcVar8)();
}



/* Entry: 10a00c744; end: 10a00c7b7;  */

long * FUN_10a00c744(long *param_1)

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



/* Entry: 10a00c7b8; end: 10a00cde3;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000537dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a00cc10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */
/* WARNING: Removing unreachable block (ram,0x00010a00cc14) */
/* WARNING: Removing unreachable block (ram,0x00010a00c920) */
/* WARNING: Removing unreachable block (ram,0x00010a00c9e4) */

undefined1  [16]
FUN_10a00c7b8(undefined8 param_1,undefined8 ******param_2,long *param_3,long *param_4,long param_5)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  undefined8 ******ppppppuVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *****pppppuVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 ******ppppppuVar14;
  undefined8 uVar15;
  undefined8 ******extraout_x8;
  long *plVar16;
  undefined8 ******ppppppuVar17;
  undefined8 ****ppppuVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_178 [24];
  undefined8 *****pppppuStack_160;
  long *plStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 *****pppppuStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long *plStack_f0;
  undefined8 uStack_c8;
  undefined8 *****pppppuStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar4 = PTR___DefaultRuneLocale_11034bcf8;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_3 == 0) {
    FUN_10a00946c(&UNK_10f631235);
LAB_10a00ccf0:
    FUN_10a00946c(&UNK_10f63126b);
LAB_10a00ccfc:
    ___stack_chk_fail();
LAB_10a00cd00:
    plVar16 = (long *)&UNK_10f63129a;
    FUN_10a00946c();
    (*(code *)*ppuStack_108)(&ppuStack_108);
    FUN_10a042634(&pppppuStack_c0);
    func_0x000104c4f944(&uStack_140);
    __Unwind_Resume();
    ppppppuVar17 = extraout_x8;
    if ((char)plVar16[3] != '\x01') {
      ppppppuVar8 = param_2;
      ppppppuVar14 = param_2;
      func_0x000107c613d0();
      if ((undefined8 ******)0x7ffffffffffffff7 < ppppppuVar8) {
        func_0x000107c2b040();
        if ((bRam00000001132ffc88 & 1) == 0) {
          ppppppuVar8 = (undefined8 ******)0x1132ffc88;
          func_0x000107c60e48();
          if ((int)ppppppuVar8 != 0) {
            puVar9 = (undefined8 *)0x30;
            func_0x000107c60e20();
            uVar15 = 0x1132ffc28;
            uRam00000001132ffc38 = 0x8000000000000030;
            uRam00000001132ffc30 = 0x2c;
            puRam00000001132ffc28 = puVar9;
            puVar9[1] = 0x434948504152475f;
            *puVar9 = 0x45524f43534e454c;
            puVar9[3] = 0x525f595a414c5f54;
            puVar9[2] = 0x5845544e4f435f53;
            *(undefined8 *)((long)puVar9 + 0x24) = 0x54494e495f454352;
            *(undefined8 *)((long)puVar9 + 0x1c) = 0x554f5345525f595a;
            *(undefined1 *)((long)puVar9 + 0x2c) = 0;
            uRam00000001132ffc40 = 0;
            pcRam00000001132ffc48 = FUN_10a09e854;
            ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
            func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
            uVar13 = 0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
            auVar25._8_8_ = uVar15;
            auVar25._0_8_ = uVar13;
            return auVar25;
          }
        }
        auVar22._8_8_ = ppppppuVar14;
        auVar22._0_8_ = ppppppuVar8;
        return auVar22;
      }
      if (ppppppuVar8 < (undefined8 ******)0x17) {
        *(char *)((long)extraout_x8 + 0x17) = (char)ppppppuVar8;
        if (ppppppuVar8 == (undefined8 ******)0x0) {
          *(undefined1 *)extraout_x8 = 0;
          auVar21._8_8_ = ppppppuVar14;
          auVar21._0_8_ = extraout_x8;
          return auVar21;
        }
      }
      else {
        ppppppuVar14 = (undefined8 ******)0x19;
        if (((ulong)ppppppuVar8 | 7) != 0x17) {
          ppppppuVar14 = (undefined8 ******)(((ulong)ppppppuVar8 | 7) + 1);
        }
        ppppppuVar17 = ppppppuVar14;
        func_0x000107c60e20();
        extraout_x8[1] = ppppppuVar8;
        extraout_x8[2] = (undefined8 *****)((ulong)ppppppuVar14 | 0x8000000000000000);
        *extraout_x8 = ppppppuVar17;
      }
      goto code_r0x000107c610b8;
    }
    if (-1 < *(char *)((long)plVar16 + 0x17)) {
      pppppuVar11 = (undefined8 *****)*plVar16;
      extraout_x8[1] = (undefined8 *****)plVar16[1];
      *extraout_x8 = pppppuVar11;
      extraout_x8[2] = (undefined8 *****)plVar16[2];
      auVar24._8_8_ = param_2;
      auVar24._0_8_ = plVar16;
      return auVar24;
    }
    param_2 = (undefined8 ******)*plVar16;
    uVar12 = plVar16[1];
  }
  else {
    if (*param_4 == 0) goto LAB_10a00ccf0;
    if (*(char *)(param_5 + 0x18) == '\x01') {
      uVar12 = *(ulong *)(param_5 + 8);
      if (-1 < (char)*(byte *)(param_5 + 0x17)) {
        uVar12 = (ulong)*(byte *)(param_5 + 0x17);
      }
      if (uVar12 != 0) goto LAB_10a00c82c;
      goto LAB_10a00cd00;
    }
LAB_10a00c82c:
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_120 = 0x3f800000;
    plVar16 = *(long **)(*param_3 + 0x70);
    if (plVar16 != (long *)0x0) {
      do {
        uVar12 = plVar16[3];
        plVar3 = (long *)plVar16[2];
        if (-1 < (char)*(byte *)((long)plVar16 + 0x27)) {
          uVar12 = (ulong)*(byte *)((long)plVar16 + 0x27);
          plVar3 = plVar16 + 2;
        }
        uStack_b8 = 0;
        uStack_b0 = 0;
        pppppuStack_c0 = (undefined8 ******)0x0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                  (&pppppuStack_c0,uVar12,0);
        if (uVar12 != 0) {
          uVar19 = 0;
          do {
            cVar6 = *(char *)((long)plVar3 + uVar19);
            lVar10 = (long)cVar6;
            if ((-1 < lVar10) && ((*(uint *)(puVar4 + lVar10 * 4 + 0x3c) >> 0xf & 1) != 0)) {
              ___tolower();
              cVar6 = (char)lVar10;
            }
            uVar1 = uStack_b8;
            if (-1 < (long)uStack_b0) {
              uVar1 = uStack_b0 >> 0x38;
            }
            if (uVar1 < uVar19) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10a00cce4);
              (*pcVar5)();
            }
            ppppppuVar17 = (undefined8 ******)pppppuStack_c0;
            if (-1 < (long)uStack_b0) {
              ppppppuVar17 = &pppppuStack_c0;
            }
            *(char *)((long)ppppppuVar17 + uVar19) = cVar6;
            uVar19 = uVar19 + 1;
          } while (uVar12 != uVar19);
        }
        puVar9 = &uStack_140;
        pppppuStack_110 = &pppppuStack_c0;
        func_0x000104c5bc74(puVar9,&pppppuStack_c0,&UNK_10dd5b8f9,&pppppuStack_110,&pppppuStack_160)
        ;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (puVar9 + 5,plVar16 + 5);
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
    FUN_10a00cde4(&pppppuStack_c0,param_5,&UNK_10f630f1d);
    pppppuVar11 = (undefined8 *****)0x20;
    __Znwm();
    uStack_100._0_7_ = 0x20;
    uStack_100._7_1_ = -0x80;
    ppuStack_108 = (undefined **)0x1e;
    pppppuVar11[1] = (undefined8 ****)0x6f6d65722d736573;
    *pppppuVar11 = (undefined8 ****)0x6e656c2d63732d78;
    *(undefined8 *)((long)pppppuVar11 + 0x16) = 0x64692d636570732d;
    *(undefined8 *)((long)pppppuVar11 + 0xe) = 0x6970612d65746f6d;
    *(undefined1 *)((long)pppppuVar11 + 0x1e) = 0;
    pppppuStack_160 = &pppppuStack_110;
    puVar9 = &uStack_140;
    pppppuStack_110 = pppppuVar11;
    func_0x000104c5bc74(puVar9,&pppppuStack_110,&UNK_10dd5b8f9,&pppppuStack_160,auStack_178);
    if (*(char *)((long)puVar9 + 0x3f) < '\0') {
      __ZdlPv(puVar9[5]);
    }
    pppppuVar11 = pppppuStack_c0;
    puVar9[6] = uStack_b8;
    puVar9[5] = pppppuVar11;
    puVar9[7] = uStack_b0;
    uStack_b0 = uStack_b0 & 0xffffffffffffff;
    pppppuStack_c0 = (undefined8 *****)((ulong)pppppuStack_c0 & 0xffffffffffffff00);
    if (uStack_100._7_1_ < '\0') {
      __ZdlPv(pppppuStack_110);
    }
    FUN_10a3bf120(&pppppuStack_c0);
    iVar7 = (int)*param_3 + 0x28;
    FUN_10a97147c();
    if (iVar7 == 0) {
      ppppppuVar17 = (undefined8 ******)*param_3;
      pppppuVar11 = ppppppuVar17[0x12];
      if (-1 < (char)*(byte *)((long)ppppppuVar17 + 0x9f)) {
        pppppuVar11 = (undefined8 *****)(ulong)*(byte *)((long)ppppppuVar17 + 0x9f);
      }
      if (pppppuVar11 != (undefined8 *****)0x0) {
        uStack_100._7_1_ = '\f';
        pppppuStack_110 = (undefined8 *****)0x2d746e65746e6f63;
        ppuStack_108 = (undefined **)CONCAT35(ppuStack_108._5_3_,0x65707974);
        pppppuStack_160 = &pppppuStack_110;
        puVar9 = &uStack_140;
        func_0x000104c5bc74(puVar9,&pppppuStack_110,&UNK_10dd5b8f9,&pppppuStack_160,auStack_178);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (puVar9 + 5,ppppppuVar17 + 0x11);
        if (uStack_100._7_1_ < '\0') {
          __ZdlPv(pppppuStack_110);
        }
        ppppppuVar17 = (undefined8 ******)*param_3;
      }
      plStack_158 = (long *)param_3[1];
      if (plStack_158 != (long *)0x0) {
        plVar16 = plStack_158 + 1;
        do {
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar2) {
            *plVar16 = *plVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      pppppuStack_160 = ppppppuVar17;
      FUN_10a9714e0(&pppppuStack_110,&pppppuStack_160);
      uStack_78 = uStack_c8;
      ppppppuVar17 = &pppppuStack_110;
      FUN_10a0425b4(&pppppuStack_c0);
      FUN_10a042634(&pppppuStack_110);
      plVar16 = plStack_158;
      if (plStack_158 != (long *)0x0) {
        plVar3 = plStack_158 + 1;
        do {
          lVar10 = *plVar3;
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar10 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_158 + 0x10))(plStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
    }
    else {
      uStack_100._7_1_ = '\f';
      pppppuStack_110 = (undefined8 *****)0x2d746e65746e6f63;
      ppuStack_108 = (undefined **)CONCAT35(ppuStack_108._5_3_,0x65707974);
      ppppppuVar17 = &pppppuStack_110;
      FUN_10a05be70(&uStack_140);
      if (uStack_100._7_1_ < '\0') {
        __ZdlPv(pppppuStack_110);
      }
    }
    lStack_f8 = *param_4;
    plVar16 = (long *)param_4[1];
    uStack_100 = param_2;
    if (plVar16 == (long *)0x0) {
      pppppuStack_110 = (undefined8 *****)FUN_10a05ca0c;
      ppuStack_108 = &PTR_FUN_110b9dbf8;
      plStack_f0 = (long *)0x0;
    }
    else {
      plVar3 = plVar16 + 1;
      do {
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      pppppuStack_110 = (undefined8 *****)FUN_10a05ca0c;
      ppuStack_108 = &PTR_FUN_110b9dbf8;
      do {
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        lVar10 = *plVar3;
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plStack_f0 = plVar16;
      if (lVar10 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    lVar10 = *param_3;
    if (-1 < *(char *)(lVar10 + 0x1f)) {
      plStack_158 = *(long **)(lVar10 + 0x10);
      pppppuStack_160 = *(undefined8 ******)(lVar10 + 8);
      lStack_150 = *(long *)(lVar10 + 0x18);
      uVar12 = (ulong)*(uint *)(lVar10 + 0x20);
      FUN_10a971eb8();
      ppppuVar18 = param_2[10][0x20];
      FUN_10a00ce20(auStack_178,param_2[0x1f],&pppppuStack_110);
      param_2 = &pppppuStack_160;
      FUN_10a05c194(param_1,param_2,uVar12,ppppppuVar17,&pppppuStack_c0,2,&uStack_140,
                    ppppuVar18 + 0x41);
      func_0x00010a05c07c(auStack_178);
      if (lStack_150 < 0) {
        __ZdlPv(pppppuStack_160);
      }
      (*(code *)*ppuStack_108)(&ppuStack_108);
      FUN_10a042634(&pppppuStack_c0);
      puVar9 = &uStack_140;
      func_0x000104c4f944(puVar9);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        auVar23._8_8_ = param_2;
        auVar23._0_8_ = puVar9;
        return auVar23;
      }
      goto LAB_10a00ccfc;
    }
    param_2 = *(undefined8 *******)(lVar10 + 8);
    uVar12 = *(ulong *)(lVar10 + 0x10);
    ppppppuVar17 = &pppppuStack_160;
  }
  if (0x16 < uVar12) {
    if (uVar12 < 0x7ffffffffffffff7) {
      param_2 = (undefined8 ******)0x19;
      if ((uVar12 | 7) != 0x17) {
        param_2 = (undefined8 ******)((uVar12 | 7) + 1);
      }
    }
    else {
      func_0x000104bd47d4();
    }
    ppppppuVar17 = param_2;
    func_0x000107c60e20(param_2);
    auVar20._8_8_ = param_2;
    auVar20._0_8_ = ppppppuVar17;
    return auVar20;
  }
  *(char *)((long)ppppppuVar17 + 0x17) = (char)uVar12;
  ppppppuVar8 = (undefined8 ******)(uVar12 + 1);
code_r0x000107c610b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(ppppppuVar17,param_2,ppppppuVar8);
  auVar26._8_8_ = param_2;
  auVar26._0_8_ = ppppppuVar17;
  return auVar26;
}



/* Entry: 10a00cde4; end: 10a00ce1f;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000537dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

undefined1  [16] FUN_10a00cde4(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  puVar2 = param_1;
  if ((char)param_2[3] == '\x01') {
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      uVar7 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar7;
      param_1[2] = param_2[2];
      auVar11._8_8_ = param_3;
      auVar11._0_8_ = param_2;
      return auVar11;
    }
    param_3 = *param_2;
    uVar7 = param_2[1];
    if (0x16 < uVar7) {
      if (uVar7 < 0x7ffffffffffffff7) {
        param_3 = 0x19;
        if ((uVar7 | 7) != 0x17) {
          param_3 = (uVar7 | 7) + 1;
        }
      }
      else {
        func_0x000104bd47d4();
      }
      uVar7 = param_3;
      func_0x000107c60e20(param_3);
      auVar8._8_8_ = param_3;
      auVar8._0_8_ = uVar7;
      return auVar8;
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar7;
    uVar7 = uVar7 + 1;
  }
  else {
    uVar7 = param_3;
    uVar5 = param_3;
    func_0x000107c613d0();
    if (0x7ffffffffffffff7 < uVar7) {
      func_0x000107c2b040();
      if ((bRam00000001132ffc88 & 1) == 0) {
        uVar7 = 0x1132ffc88;
        func_0x000107c60e48();
        if ((int)uVar7 != 0) {
          puVar3 = (undefined8 *)0x30;
          func_0x000107c60e20();
          uVar6 = 0x1132ffc28;
          uRam00000001132ffc38 = 0x8000000000000030;
          uRam00000001132ffc30 = 0x2c;
          puRam00000001132ffc28 = puVar3;
          puVar3[1] = 0x434948504152475f;
          *puVar3 = 0x45524f43534e454c;
          puVar3[3] = 0x525f595a414c5f54;
          puVar3[2] = 0x5845544e4f435f53;
          *(undefined8 *)((long)puVar3 + 0x24) = 0x54494e495f454352;
          *(undefined8 *)((long)puVar3 + 0x1c) = 0x554f5345525f595a;
          *(undefined1 *)((long)puVar3 + 0x2c) = 0;
          uRam00000001132ffc40 = 0;
          pcRam00000001132ffc48 = FUN_10a09e854;
          ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
          func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
          uVar4 = 0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
          auVar12._8_8_ = uVar6;
          auVar12._0_8_ = uVar4;
          return auVar12;
        }
      }
      auVar10._8_8_ = uVar5;
      auVar10._0_8_ = uVar7;
      return auVar10;
    }
    if (uVar7 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar7;
      if (uVar7 == 0) {
        *(undefined1 *)param_1 = 0;
        auVar9._8_8_ = uVar5;
        auVar9._0_8_ = param_1;
        return auVar9;
      }
    }
    else {
      puVar1 = (ulong *)0x19;
      if ((uVar7 | 7) != 0x17) {
        puVar1 = (ulong *)((uVar7 | 7) + 1);
      }
      puVar2 = puVar1;
      func_0x000107c60e20();
      param_1[1] = uVar7;
      param_1[2] = (ulong)puVar1 | 0x8000000000000000;
      *param_1 = (ulong)puVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(puVar2,param_3,uVar7);
  auVar13._8_8_ = param_3;
  auVar13._0_8_ = puVar2;
  return auVar13;
}



/* Entry: 10a00ce20; end: 10a00cf8b;  */

void FUN_10a00ce20(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 **ppuVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *extraout_x8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 auStack_110 [2];
  char cStack_f9;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  uStack_88 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_80,param_3 + 1);
  puVar6 = (undefined8 *)0x40;
  __Znwm();
  *puVar6 = uStack_88;
  ppuVar8 = apuStack_80;
  (*(code *)apuStack_80[0][2])(puVar6 + 1);
  plVar7 = (long *)0x48;
  __Znwm();
  plVar7[2] = (long)&PTR_FUN_110b9f358;
  plVar7[3] = (long)puVar6;
  puVar3 = (undefined8 *)param_2[0xb];
  lVar9 = param_2[0xc];
  *plVar7 = (long)(param_2 + 10);
  plVar7[1] = (long)puVar3;
  *puVar3 = plVar7;
  param_2[0xb] = (long)plVar7;
  param_2[0xc] = lVar9 + 1;
  (*(code *)*apuStack_80[0])(apuStack_80);
  lVar9 = param_2[0xb];
  plVar7 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  lVar11 = param_2[1];
  lVar10 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = lVar9;
  param_1[2] = lVar11;
  param_1[1] = lVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)**(undefined8 **)(lVar9 + 8))(puVar6 + 1);
  __ZdlPv(lVar9);
  (*(code *)*apuStack_80[0])(apuStack_80);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume(plVar7);
  pcStack_98 = FUN_10a00cf8c;
  plStack_b0 = plVar7;
  plStack_a8 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    ppuVar2 = (undefined8 **)*ppuVar8;
    if (-1 < *(char *)((long)ppuVar8 + 0x17)) {
      ppuVar2 = ppuVar8;
    }
    func_0x00010ae06f08(1,8,&UNK_10f631118,&UNK_10f6312ed,0x11c,&UNK_10f63136d,in_x6,in_x7,ppuVar2);
  }
  if (*(char *)((long)ppuVar8 + 0x17) < '\0') {
    func_0x000107c3192c(&puStack_e0,*ppuVar8,ppuVar8[1]);
  }
  else {
    puStack_d8 = ppuVar8[1];
    puStack_e0 = *ppuVar8;
    puStack_d0 = ppuVar8[2];
  }
  func_0x000107c2b054(auStack_f8,&UNK_10f630f1d);
  func_0x000107c2b054(auStack_110,&UNK_10f630f1d);
  FUN_10a00d0e0(&uStack_c0,&puStack_e0,auStack_f8,auStack_110);
  extraout_x8[1] = uStack_b8;
  *extraout_x8 = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  if (cStack_f9 < '\0') {
    __ZdlPv(auStack_110[0]);
  }
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  if ((long)puStack_d0 < 0) {
    __ZdlPv(puStack_e0);
  }
  return;
}



/* Entry: 10a00cf8c; end: 10a00d0df;  */

void FUN_10a00cf8c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    puVar1 = (undefined8 *)*param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      puVar1 = param_3;
    }
    func_0x00010ae06f08(1,8,&UNK_10f631118,&UNK_10f6312ed,0x11c,&UNK_10f63136d,in_x6,in_x7,puVar1);
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_50,*param_3,param_3[1]);
  }
  else {
    uStack_48 = param_3[1];
    uStack_50 = *param_3;
    lStack_40 = param_3[2];
  }
  func_0x000107c2b054(auStack_68,&UNK_10f630f1d);
  func_0x000107c2b054(auStack_80,&UNK_10f630f1d);
  FUN_10a00d0e0(&uStack_30,&uStack_50,auStack_68,auStack_80);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  return;
}



/* Entry: 10a00d0e0; end: 10a00d14f;  */

long * FUN_10a00d0e0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = 0x80;
  __Znwm();
  FUN_10a042764();
  *param_1 = lVar2;
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  *puVar3 = &PTR_FUN_110b9f490;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = lVar2;
  param_1[1] = (long)puVar3;
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  FUN_10a042994(param_1,lVar1,lVar2);
  return param_1;
}



/* Entry: 10a00d150; end: 10a00d407;  */

undefined1  [16] FUN_10a00d150(undefined1 *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  char cStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar9 = &lStack_80;
  if (*(int *)(param_1 + 0xe0) != 1) {
    uVar4 = *(ulong *)(param_1 + 0x50);
    FUN_10a3df7b0(uVar4,2);
    if ((uVar4 & 1) == 0) goto LAB_10a00d3ac;
  }
  lVar10 = *param_2;
  if (lVar10 != 0) {
    if (*(char *)(lVar10 + 0x1f) < '\0') {
      func_0x000107c3192c(&plStack_70,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
    }
    else {
      plStack_68 = *(long **)(lVar10 + 0x10);
      plStack_70 = *(long **)(lVar10 + 8);
      lStack_60 = *(long *)(lVar10 + 0x18);
    }
    puVar5 = param_1;
    FUN_10a00b004(param_1,&plStack_70);
    if (lStack_60 < 0) {
      __ZdlPv(plStack_70);
    }
    if (((ulong)puVar5 & 1) == 0) {
      FUN_10a00946c(&UNK_10f631004);
LAB_10a00d3ac:
      puVar8 = &UNK_10f630fd8;
      FUN_10a00946c(&UNK_10f630fd8);
      FUN_10a05bd88(&lStack_80);
      func_0x00010a05a8c4(&plStack_70);
      FUN_10a05bd88(&lStack_50);
      __Unwind_Resume(puVar8);
      auVar12._8_8_ = 0x1a;
      auVar12._0_8_ = &UNK_10f633527;
      return auVar12;
    }
  }
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(&plStack_70,*param_4,param_4[1]);
  }
  else {
    plStack_68 = (long *)param_4[1];
    plStack_70 = (long *)*param_4;
    lStack_60 = param_4[2];
  }
  cStack_58 = '\x01';
  plVar6 = &lStack_50;
  puVar5 = param_1;
  FUN_10a00c7b8(plVar6,param_1,param_2,param_3,&plStack_70);
  if ((cStack_58 == '\x01') && (lStack_60 < 0)) {
    plVar6 = plStack_70;
    __ZdlPv(plStack_70);
  }
  if (lStack_50 == 0) goto LAB_10a00d350;
  plStack_70 = (long *)0x0;
  plStack_68 = (long *)0x0;
  plVar6 = *(long **)(param_1 + 0xf0);
  if (plVar6 == (long *)0x0) {
LAB_10a00d2e4:
    plVar9 = (long *)puVar5;
    if ((bRam000000011330a9e8 & 1) != 0) {
      plVar6 = (long *)0x0;
      plVar9 = (long *)0x1;
      func_0x00010ae06f08(0,1,&UNK_10f631118,&UNK_10f6313c7,0x155,&UNK_10f6311d9);
    }
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_68 = plVar6;
    if (plVar6 == (long *)0x0) goto LAB_10a00d2e4;
    plVar6 = *(long **)(param_1 + 0xe8);
    plStack_70 = plVar6;
    if (plVar6 == (long *)0x0) goto LAB_10a00d2e4;
    lStack_80 = lStack_50;
    plStack_78 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar7 = plStack_48 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)*plVar6)(plVar6,&lStack_80);
    plVar7 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        plVar6 = plVar7;
      }
    }
  }
  plVar7 = plStack_68;
  puVar5 = (undefined1 *)plVar9;
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
      plVar6 = plVar7;
      puVar5 = (undefined1 *)plVar9;
    }
  }
LAB_10a00d350:
  if (plStack_48 != (long *)0x0) {
    plVar9 = plStack_48 + 1;
    do {
      lVar10 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      plVar6 = plStack_48;
    }
  }
  auVar11._8_8_ = puVar5;
  auVar11._0_8_ = plVar6;
  return auVar11;
}



/* Entry: 10a00d408; end: 10a00d497;  */

undefined1  [16] FUN_10a00d408(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1a;
  auVar1._0_8_ = &UNK_10f633527;
  return auVar1;
}



/* Entry: 10a00d498; end: 10a00d573;  */

void FUN_10a00d498(undefined8 param_1)

{
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  ppuStack_a0 = (undefined **)0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f630f1d;
  uStack_88 = 0;
  puStack_80 = &UNK_10f630f1d;
  uStack_78 = 0;
  uStack_70 = 0xb6;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10a00d574(param_1,&puStack_a8);
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_b8 = &UNK_10f63153c;
  puStack_b0 = &UNK_10f631549;
  ppuStack_a0 = &puStack_b8;
  puStack_a8 = &UNK_10f63152e;
  uStack_98 = 2;
  puStack_80 = &UNK_10f630f1d;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xb6;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a05d578();
  FUN_10a05df68(param_1);
  return;
}



/* Entry: 10a00d574; end: 10a00d64b;  */

/* WARNING: Removing unreachable block (ram,0x00010a00d60c) */

undefined1  [16] FUN_10a00d574(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f633527,0x1a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a05d47c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a00d64c; end: 10a00d75f;  */

void FUN_10a00d64c(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0xa0))(&uStack_38,param_2,&PTR_DAT_110b9a5d0);
  if (*(char *)(param_1 + 0x107) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xf0));
  }
  *(undefined8 *)(param_1 + 0xf8) = uStack_30;
  *(undefined8 *)(param_1 + 0xf0) = uStack_38;
  *(undefined8 *)(param_1 + 0x100) = uStack_28;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110b9a5f0,*(undefined4 *)(param_1 + 0x108));
  *(int *)(param_1 + 0x108) = (int)plVar1;
  (**(code **)(*param_2 + 0x38))
            (param_2,&PTR_s_sourceType_110b9a610,*(undefined4 *)(param_1 + 0xe8));
  *(int *)(param_1 + 0xe8) = (int)param_2;
  return;
}



/* Entry: 10a00d760; end: 10a00d7a7;  */

void FUN_10a00d760(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = (long)*(char *)((long)param_3 + 0x17);
  puStack_20 = param_3;
  if (lStack_18 < 0) {
    puStack_20 = (undefined8 *)*param_3;
    lStack_18 = param_3[1];
    if (lStack_18 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a00d7a8);
      (*pcVar1)();
    }
  }
  (**(code **)(*param_1 + 0x30))(param_1,param_2,&puStack_20);
  return;
}



/* Entry: 10a00d7a8; end: 10a00d7c7;  */

undefined1  [16] FUN_10a00d7a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x27;
  auVar1._0_8_ = &UNK_10f633550;
  return auVar1;
}



/* Entry: 10a00d7c8; end: 10a00d82f;  */

bool FUN_10a00d7c8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x27) {
    iVar2 = 0xf633550;
    _memcmp(&UNK_10f633550,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a00d830; end: 10a00d837;  */

bool FUN_10a00d830(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x27) {
    iVar2 = 0xf633550;
    _memcmp(&UNK_10f633550,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a00d838; end: 10a00db67;  */

void FUN_10a00d838(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f633550,0x27);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9c500;
  pppuVar2 = (undefined8 ***)&UNK_10f630f1d;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110b9c500;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb3788;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a00db48;
    FUN_10a054dac(param_1,&DAT_10f2ee806,FUN_10a05e908,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a00db48;
    FUN_10a054dac(param_1,&DAT_10f2ee801,FUN_10a05ea30,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f350e61,FUN_10a05eaf0,FUN_10a05ebac);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f63157e,FUN_10a05ed28,FUN_10a05ee70);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9dc40,FUN_10a05efb4);
    FUN_10a0605c4(param_1,&UNK_10f63158c,FUN_10a060754,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f633550,0x27);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a00db48:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a00db4c);
  (*pcVar6)();
}



/* Entry: 10a00db68; end: 10a00dc2b;  */

undefined8 * FUN_10a00db68(undefined8 *param_1,undefined8 param_2,ushort *param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_110b9f740;
  param_1[1] = param_2;
  *(undefined2 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
  puVar2 = (undefined8 *)0x58;
  __Znwm();
  puVar2[4] = 0;
  puVar2[3] = 0;
  param_1[3] = puVar2 + 3;
  param_1[4] = puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110bf7fc8;
  puVar2[8] = 0;
  puVar2[7] = 0;
  *(undefined8 *)((long)puVar2 + 0x4d) = 0;
  *(undefined8 *)((long)puVar2 + 0x45) = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  FUN_10a5cf1fc(param_1 + 3);
  uVar1 = *param_3;
  *(ushort *)(param_1 + 2) = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_10a5ae998(param_1[3],&PTR_DAT_110b9f720,param_1[1],param_1);
  }
  return param_1;
}



/* Entry: 10a00dc2c; end: 10a00dc6f;  */

undefined8 * FUN_10a00dc2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f740;
  FUN_10a5ae930(param_1[3]);
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a00dc70; end: 10a00dd3f;  */

long * FUN_10a00dc70(long *param_1,long *param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110bb3968;
  param_1[5] = (long)&PTR_DAT_110bb3998;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  param_1[0x15] = (long)&PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if ((char)param_1[0x3c] == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = (long)&PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110b9f848;
  param_1[5] = (long)&PTR_DAT_110b9f878;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = (long)&PTR_DAT_110c60a00;
  param_1[2] = (long)&PTR_DAT_110c60a88;
  param_1[5] = (long)&PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = (long)&PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = (long)&PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a00dd40; end: 10a00df33;  */

undefined8 * FUN_10a00dd40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 uStack_32;
  
  param_1[99] = &PTR_FUN_110c383b8;
  param_1[0x65] = 0;
  param_1[100] = 0;
  *(undefined2 *)(param_1 + 0x66) = 0x100;
  puVar1 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110b9a8c0,param_2);
  uStack_32 = 0x101;
  FUN_10a00db68(puVar1 + 0x51,param_2,&uStack_32);
  *param_1 = &PTR_DAT_110b9a648;
  param_1[2] = &PTR_FUN_110b9a780;
  param_1[5] = &PTR_FUN_110b9a7b0;
  param_1[99] = &PTR_FUN_110b9a880;
  param_1[0x15] = &PTR_DAT_110b9a808;
  param_1[0x51] = &PTR_FUN_110b9a828;
  *(undefined4 *)(param_1 + 0x56) = 0x3f800000;
  param_1[0x5d] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b9dc68;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b9dcb8;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a060b5c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x5e] = puVar1 + 3;
  param_1[0x5f] = puVar1;
  param_1[0x60] = 0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x61] = puVar1 + 3;
  param_1[0x62] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x61);
  FUN_10a5ae998(param_1[0x61],&PTR_DAT_110b9c500,param_2,param_1);
  return param_1;
}



/* Entry: 10a00df34; end: 10a00df67;  */

void FUN_10a00df34(long param_1)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x50))();
  }
  if (*(long *)(param_1 + 600) != 0) {
    FUN_10a20f5c0(param_1 + 0x240);
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    FUN_10a1c054c(param_1 + 0xa8,&uStack_70);
  }
  return;
}



/* Entry: 10a00df68; end: 10a00df6f;  */

void FUN_10a00df68(void)

{
  return;
}



/* Entry: 10a00df70; end: 10a00e09f;  */

void FUN_10a00df70(undefined4 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plStack_38;
  
  *(undefined4 *)(param_2 + 0x2b0) = param_1;
  plVar4 = *(long **)(*(long *)(*(long *)(param_2 + 0x90) + 0x100) + 0x1c8);
  (**(code **)(*plVar4 + 0x88))();
  plVar5 = (long *)plVar4[1];
  if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0))
  {
    plVar4 = (long *)*plVar4;
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x28))(&plStack_38,plVar4,param_2 + 0x2b8);
      FUN_10a00e0a0((long *)(param_2 + 0x2e0),&plStack_38);
      plVar4 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = *(long **)(param_2 + 0x2e0);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(0x3f800000,*(undefined4 *)(param_2 + 0x2b0),0,plVar4,0);
        *(undefined4 *)(param_2 + 0x74) = 2;
      }
    }
  }
  return;
}



/* Entry: 10a00e0a0; end: 10a00e133;  */

long * FUN_10a00e0a0(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    *puVar4 = &PTR_FUN_110b9dd10;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = lVar6;
  }
  *param_2 = 0;
  plVar5 = (long *)param_1[1];
  *param_1 = lVar6;
  param_1[1] = (long)puVar4;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a00e134; end: 10a00e163;  */

void FUN_10a00e134(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plStack_38;
  
  if (*(long *)(param_1 + 0x2e0) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_1 + 0x2b0);
  plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x1c8);
  (**(code **)(*plVar4 + 0x88))();
  plVar5 = (long *)plVar4[1];
  if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0))
  {
    plVar4 = (long *)*plVar4;
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x28))(&plStack_38,plVar4,param_1 + 0x2b8);
      FUN_10a00e0a0((long *)(param_1 + 0x2e0),&plStack_38);
      plVar4 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = *(long **)(param_1 + 0x2e0);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(0x3f800000,*(undefined4 *)(param_1 + 0x2b0),0,plVar4,0);
        *(undefined4 *)(param_1 + 0x74) = 2;
      }
    }
  }
  return;
}



/* Entry: 10a00e164; end: 10a00e1b7;  */

ulong FUN_10a00e164(long param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  uint uVar3;
  long lVar4;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar2 = &puStack_20;
  if (*(long *)(param_1 + 0x2d0) == 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x260);
    puStack_20 = &UNK_10f653c20;
    uStack_18 = 0x21;
    if (lVar4 == 0) {
      FUN_10a0edfc4();
      uVar3 = 0;
      if (*(long *)((long)ppuVar2 + 0x2e0) != 0) {
        uVar3 = 2;
      }
      return (ulong)uVar3;
    }
    uVar1 = lVar4 + 0x128;
  }
  else {
    uVar1 = param_1 + 0x2d0;
  }
  return uVar1;
}



/* Entry: 10a00e1b8; end: 10a00e1cb;  */

undefined4 FUN_10a00e1b8(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x2e0) != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 10a00e1cc; end: 10a00e5c3;  */

void FUN_10a00e1cc(long param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x26;
  long lVar17;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  float fStack_70;
  long *plStack_68;
  
  plVar6 = *(long **)(param_1 + 0x2e0);
  if ((plVar6 != (long *)0x0) && ((**(code **)(*plVar6 + 0x60))(), (int)plVar6 != 0)) {
    (**(code **)(**(long **)(param_1 + 0x2e0) + 0x10))(&lStack_90);
    FUN_10a00e5c4((undefined8 *)(param_1 + 0x2d0),&lStack_90);
    if (plStack_88 != (long *)0x0) {
      plVar6 = plStack_88 + 1;
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
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      }
    }
    plVar6 = *(long **)(param_1 + 0x2d0);
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6;
      (**(code **)(*plVar6 + 0x28))();
      uVar4 = (uint)plVar7;
      if (uVar4 < 2) {
        uVar4 = 1;
      }
      (**(code **)(*plVar6 + 0x30))();
      uVar5 = (uint)plVar6;
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      uStack_98 = CONCAT44(uVar5,uVar4);
      if (uVar4 != *(uint *)(param_1 + 0x300) || uVar5 != *(uint *)(param_1 + 0x304)) {
        lVar11 = *(long *)(param_1 + 0x2f0);
        plStack_88 = (long *)0x0;
        lStack_90 = 0;
        lStack_78 = 0;
        plStack_80 = (long *)0x0;
        fStack_70 = *(float *)(lVar11 + 0x38);
        FUN_10a05fb5c(&lStack_90,*(undefined8 *)(lVar11 + 0x20));
        plVar6 = *(long **)(lVar11 + 0x28);
        if (plVar6 != (long *)0x0) {
          do {
            plVar7 = plStack_88;
            uVar9 = plVar6[2];
            uVar14 = ((ulong)(uint)((int)uVar9 << 3) + 8 ^ uVar9 >> 0x20) * -0x622015f714c7d297;
            uVar14 = (uVar9 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
            uVar14 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
            if (plStack_88 != (long *)0x0) {
              uVar12 = (long)plStack_88 - 1;
              if (((ulong)plStack_88 & uVar12) == 0) {
                unaff_x26 = uVar14 & uVar12;
              }
              else {
                unaff_x26 = uVar14;
                if (plStack_88 <= uVar14) {
                  uVar16 = 0;
                  if (plStack_88 != (long *)0x0) {
                    uVar16 = uVar14 / (ulong)plStack_88;
                  }
                  unaff_x26 = uVar14 - uVar16 * (long)plStack_88;
                }
              }
              plVar15 = *(long **)(lStack_90 + unaff_x26 * 8);
              if (plVar15 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar15 = (long *)*plVar15;
                    if (plVar15 == (long *)0x0) goto LAB_10a00e3b0;
                    uVar16 = plVar15[1];
                    if (uVar16 != uVar14) break;
                    if (plVar15[2] == uVar9) goto LAB_10a00e510;
                  }
                  if (((ulong)plStack_88 & uVar12) == 0) {
                    uVar16 = uVar16 & uVar12;
                  }
                  else if (plStack_88 <= uVar16) {
                    uVar3 = 0;
                    if (plStack_88 != (long *)0x0) {
                      uVar3 = uVar16 / (ulong)plStack_88;
                    }
                    uVar16 = uVar16 - uVar3 * (long)plStack_88;
                  }
                } while (uVar16 == unaff_x26);
              }
            }
LAB_10a00e3b0:
            plVar15 = (long *)0x68;
            __Znwm();
            *plVar15 = 0;
            plVar15[1] = uVar14;
            lVar10 = plVar6[3];
            lVar17 = plVar6[2];
            plVar15[3] = plVar6[3];
            plVar15[2] = lVar17;
            if (lVar10 != 0) {
              plVar13 = (long *)(lVar10 + 8);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar2) {
                  *plVar13 = *plVar13 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            plStack_68 = plVar15 + 4;
            *(undefined1 *)(plVar15 + 0xc) = 3;
            if ((char)plVar6[0xc] == '\0') {
              uVar8 = 0;
            }
            else {
              FUN_10a005398(&plStack_68,plVar6 + 4);
              uVar8 = (undefined1)plVar6[0xc];
            }
            *(undefined1 *)(plVar15 + 0xc) = uVar8;
            if ((plVar7 == (long *)0x0) || (fStack_70 * (float)plVar7 < (float)(lStack_78 + 1))) {
              uVar9 = 1;
              if (2 < plVar7) {
                uVar9 = (ulong)(((ulong)plVar7 & (long)plVar7 - 1U) != 0);
              }
              uVar9 = uVar9 | (long)plVar7 << 1;
              uVar12 = (ulong)((float)(lStack_78 + 1) / fStack_70);
              if (uVar9 <= uVar12) {
                uVar9 = uVar12;
              }
              FUN_10a05fb5c(&lStack_90,uVar9);
              plVar7 = plStack_88;
              if (((ulong)plStack_88 & (long)plStack_88 - 1U) == 0) {
                unaff_x26 = (long)plStack_88 - 1U & uVar14;
              }
              else {
                unaff_x26 = uVar14;
                if (plStack_88 <= uVar14) {
                  uVar9 = 0;
                  if (plStack_88 != (long *)0x0) {
                    uVar9 = uVar14 / (ulong)plStack_88;
                  }
                  unaff_x26 = uVar14 - uVar9 * (long)plStack_88;
                }
              }
            }
            plVar13 = *(long **)(lStack_90 + unaff_x26 * 8);
            if (plVar13 == (long *)0x0) {
              *plVar15 = (long)plStack_80;
              *(long ***)(lStack_90 + unaff_x26 * 8) = &plStack_80;
              plStack_80 = plVar15;
              if (*plVar15 != 0) {
                uVar9 = *(ulong *)(*plVar15 + 8);
                if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
                  uVar9 = uVar9 & (long)plVar7 - 1U;
                }
                else if (plVar7 <= uVar9) {
                  uVar14 = 0;
                  if (plVar7 != (long *)0x0) {
                    uVar14 = uVar9 / (ulong)plVar7;
                  }
                  uVar9 = uVar9 - uVar14 * (long)plVar7;
                }
                *(long **)(lStack_90 + uVar9 * 8) = plVar15;
              }
            }
            else {
              *plVar15 = *plVar13;
              *plVar13 = (long)plVar15;
            }
            lStack_78 = lStack_78 + 1;
LAB_10a00e510:
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
        if (plStack_80 != (long *)0x0) {
          plVar6 = plStack_80;
          do {
            lVar10 = lVar11 + 0x18;
            FUN_10a0602a0(lVar10,plVar6[2]);
            if (lVar10 != 0) {
              FUN_10a060cac(plVar6 + 4,&uStack_98,(ulong)&uStack_98 | 4);
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
        FUN_10a060b6c(&lStack_90);
        *(undefined8 *)(param_1 + 0x300) = uStack_98;
      }
    }
  }
  return;
}



/* Entry: 10a00e5c4; end: 10a00e627;  */

undefined8 * FUN_10a00e5c4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a00e628; end: 10a00e62f;  */

void FUN_10a00e628(long param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x26;
  long lVar17;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  float fStack_70;
  long *plStack_68;
  
  plVar6 = *(long **)(param_1 + 0x58);
  if ((plVar6 != (long *)0x0) && ((**(code **)(*plVar6 + 0x60))(), (int)plVar6 != 0)) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x10))(&lStack_90);
    FUN_10a00e5c4((undefined8 *)(param_1 + 0x48),&lStack_90);
    if (plStack_88 != (long *)0x0) {
      plVar6 = plStack_88 + 1;
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
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      }
    }
    plVar6 = *(long **)(param_1 + 0x48);
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6;
      (**(code **)(*plVar6 + 0x28))();
      uVar4 = (uint)plVar7;
      if (uVar4 < 2) {
        uVar4 = 1;
      }
      (**(code **)(*plVar6 + 0x30))();
      uVar5 = (uint)plVar6;
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      uStack_98 = CONCAT44(uVar5,uVar4);
      if (uVar4 != *(uint *)(param_1 + 0x78) || uVar5 != *(uint *)(param_1 + 0x7c)) {
        lVar11 = *(long *)(param_1 + 0x68);
        plStack_88 = (long *)0x0;
        lStack_90 = 0;
        lStack_78 = 0;
        plStack_80 = (long *)0x0;
        fStack_70 = *(float *)(lVar11 + 0x38);
        FUN_10a05fb5c(&lStack_90,*(undefined8 *)(lVar11 + 0x20));
        plVar6 = *(long **)(lVar11 + 0x28);
        if (plVar6 != (long *)0x0) {
          do {
            plVar7 = plStack_88;
            uVar9 = plVar6[2];
            uVar14 = ((ulong)(uint)((int)uVar9 << 3) + 8 ^ uVar9 >> 0x20) * -0x622015f714c7d297;
            uVar14 = (uVar9 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
            uVar14 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
            if (plStack_88 != (long *)0x0) {
              uVar12 = (long)plStack_88 - 1;
              if (((ulong)plStack_88 & uVar12) == 0) {
                unaff_x26 = uVar14 & uVar12;
              }
              else {
                unaff_x26 = uVar14;
                if (plStack_88 <= uVar14) {
                  uVar16 = 0;
                  if (plStack_88 != (long *)0x0) {
                    uVar16 = uVar14 / (ulong)plStack_88;
                  }
                  unaff_x26 = uVar14 - uVar16 * (long)plStack_88;
                }
              }
              plVar15 = *(long **)(lStack_90 + unaff_x26 * 8);
              if (plVar15 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar15 = (long *)*plVar15;
                    if (plVar15 == (long *)0x0) goto LAB_10a00e3b0;
                    uVar16 = plVar15[1];
                    if (uVar16 != uVar14) break;
                    if (plVar15[2] == uVar9) goto LAB_10a00e510;
                  }
                  if (((ulong)plStack_88 & uVar12) == 0) {
                    uVar16 = uVar16 & uVar12;
                  }
                  else if (plStack_88 <= uVar16) {
                    uVar3 = 0;
                    if (plStack_88 != (long *)0x0) {
                      uVar3 = uVar16 / (ulong)plStack_88;
                    }
                    uVar16 = uVar16 - uVar3 * (long)plStack_88;
                  }
                } while (uVar16 == unaff_x26);
              }
            }
LAB_10a00e3b0:
            plVar15 = (long *)0x68;
            __Znwm();
            *plVar15 = 0;
            plVar15[1] = uVar14;
            lVar10 = plVar6[3];
            lVar17 = plVar6[2];
            plVar15[3] = plVar6[3];
            plVar15[2] = lVar17;
            if (lVar10 != 0) {
              plVar13 = (long *)(lVar10 + 8);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar2) {
                  *plVar13 = *plVar13 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            plStack_68 = plVar15 + 4;
            *(undefined1 *)(plVar15 + 0xc) = 3;
            if ((char)plVar6[0xc] == '\0') {
              uVar8 = 0;
            }
            else {
              FUN_10a005398(&plStack_68,plVar6 + 4);
              uVar8 = (undefined1)plVar6[0xc];
            }
            *(undefined1 *)(plVar15 + 0xc) = uVar8;
            if ((plVar7 == (long *)0x0) || (fStack_70 * (float)plVar7 < (float)(lStack_78 + 1))) {
              uVar9 = 1;
              if (2 < plVar7) {
                uVar9 = (ulong)(((ulong)plVar7 & (long)plVar7 - 1U) != 0);
              }
              uVar9 = uVar9 | (long)plVar7 << 1;
              uVar12 = (ulong)((float)(lStack_78 + 1) / fStack_70);
              if (uVar9 <= uVar12) {
                uVar9 = uVar12;
              }
              FUN_10a05fb5c(&lStack_90,uVar9);
              plVar7 = plStack_88;
              if (((ulong)plStack_88 & (long)plStack_88 - 1U) == 0) {
                unaff_x26 = (long)plStack_88 - 1U & uVar14;
              }
              else {
                unaff_x26 = uVar14;
                if (plStack_88 <= uVar14) {
                  uVar9 = 0;
                  if (plStack_88 != (long *)0x0) {
                    uVar9 = uVar14 / (ulong)plStack_88;
                  }
                  unaff_x26 = uVar14 - uVar9 * (long)plStack_88;
                }
              }
            }
            plVar13 = *(long **)(lStack_90 + unaff_x26 * 8);
            if (plVar13 == (long *)0x0) {
              *plVar15 = (long)plStack_80;
              *(long ***)(lStack_90 + unaff_x26 * 8) = &plStack_80;
              plStack_80 = plVar15;
              if (*plVar15 != 0) {
                uVar9 = *(ulong *)(*plVar15 + 8);
                if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
                  uVar9 = uVar9 & (long)plVar7 - 1U;
                }
                else if (plVar7 <= uVar9) {
                  uVar14 = 0;
                  if (plVar7 != (long *)0x0) {
                    uVar14 = uVar9 / (ulong)plVar7;
                  }
                  uVar9 = uVar9 - uVar14 * (long)plVar7;
                }
                *(long **)(lStack_90 + uVar9 * 8) = plVar15;
              }
            }
            else {
              *plVar15 = *plVar13;
              *plVar13 = (long)plVar15;
            }
            lStack_78 = lStack_78 + 1;
LAB_10a00e510:
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
        if (plStack_80 != (long *)0x0) {
          plVar6 = plStack_80;
          do {
            lVar10 = lVar11 + 0x18;
            FUN_10a0602a0(lVar10,plVar6[2]);
            if (lVar10 != 0) {
              FUN_10a060cac(plVar6 + 4,&uStack_98,(ulong)&uStack_98 | 4);
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
        FUN_10a060b6c(&lStack_90);
        *(undefined8 *)(param_1 + 0x78) = uStack_98;
      }
    }
  }
  return;
}



/* Entry: 10a00e630; end: 10a00e95f;  */

void FUN_10a00e630(long param_1,undefined8 param_2)

{
  undefined1 **ppuVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  byte bStack_99;
  undefined1 *puStack_90;
  ulong uStack_88;
  byte bStack_79;
  long *plStack_78;
  long *plStack_70;
  undefined1 uStack_61;
  undefined1 **ppuStack_60;
  undefined1 *puStack_58;
  
  plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x1c8);
  (**(code **)(*plVar8 + 0xf8))();
  plVar9 = (long *)plVar8[1];
  __ZNSt3__119__shared_weak_count4lockEv();
  plStack_78 = (long *)*plVar8;
  plStack_70 = plVar9;
  (**(code **)(*plStack_78 + 0x10))(&puStack_90,plStack_78,param_2);
  if ((char)bStack_79 < '\0') {
    func_0x000107c3192c(&puStack_b0,puStack_90,uStack_88);
  }
  else {
    uStack_a8 = uStack_88;
    puStack_b0 = puStack_90;
    bStack_99 = bStack_79;
  }
  if ((bRam00000001137e9300 & 1) == 0) {
    iVar7 = 0x137e9300;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001098998d4(0x1137e9388,&PTR_DAT_110b9cfe0);
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                    ,0x1137e9388,0x100000000);
      ___cxa_guard_release(0x1137e9300);
    }
  }
  if (lRam00000001137e92f8 != -1) {
    puStack_58 = &uStack_61;
    ppuStack_60 = &puStack_58;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137e92f8,&ppuStack_60,FUN_10a042f18);
  }
  if ((bRam00000001137e9308 & 1) == 0) {
    iVar7 = 0x137e9308;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      uVar10 = uRam00000001137e9388;
      uVar4 = uRam00000001137e9390;
      if (-1 < (char)bRam00000001137e939f) {
        uVar10 = 0x1137e9388;
        uVar4 = (ulong)bRam00000001137e939f;
      }
      FUN_10a042e24(uVar10,uVar4);
      ___cxa_atexit(FUN_10a042ee8,0x1137e93a0,0x100000000);
      ___cxa_guard_release(0x1137e9308);
    }
  }
  puVar5 = puRam00000001137e93a8;
  puVar13 = puRam00000001137e93a0;
  if (puRam00000001137e93a0 != puRam00000001137e93a8) {
    puVar12 = puRam00000001137e93a0;
    uVar4 = uStack_a8;
    ppuVar1 = (undefined1 **)puStack_b0;
    if (-1 < (char)bStack_99) {
      uVar4 = (ulong)bStack_99;
      ppuVar1 = &puStack_b0;
    }
    do {
      if (puVar12[1] == uVar4) {
        uVar10 = *puVar12;
        _memcmp(uVar10,ppuVar1,uVar4);
        puVar13 = puVar12;
        if ((int)uVar10 == 0) break;
      }
      puVar12 = puVar12 + 2;
      puVar13 = puVar5;
    } while (puVar12 != puVar5);
  }
  if ((char)bStack_99 < '\0') {
    __ZdlPv(puStack_b0);
  }
  if (puVar13 != puVar5) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0x2b8,param_2);
    FUN_10a00df70(*(undefined4 *)(param_1 + 0x2b0),param_1);
    if ((char)bStack_79 < '\0') {
      __ZdlPv(puStack_90);
    }
    plVar8 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      plVar9 = plStack_70 + 1;
      do {
        lVar11 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return;
  }
  uVar10 = 0x120;
  ___cxa_allocate_exception(0x120);
  FUN_10a009538();
  ___cxa_throw(uVar10,&PTR_DAT_110b99e48,FUN_10a002a90);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a00e8e8);
  (*pcVar6)();
}



/* Entry: 10a00e960; end: 10a00ea03;  */

ulong * FUN_10a00e960(ulong *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined8 ****ppppuVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  int *piVar3;
  uint *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  uint *puVar17;
  long lVar18;
  int *piVar19;
  int *piVar20;
  ulong *puVar21;
  undefined8 ***apppuStack_b8 [2];
  char cStack_a1;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_3;
      puVar5 = param_1;
      if (param_3 == 0) goto LAB_10a00e9dc;
    }
    else {
      puVar21 = (ulong *)0x19;
      if ((param_3 | 7) != 0x17) {
        puVar21 = (ulong *)((param_3 | 7) + 1);
      }
      puVar5 = puVar21;
      __Znwm();
      param_1[1] = param_3;
      param_1[2] = (ulong)puVar21 | 0x8000000000000000;
      *param_1 = (ulong)puVar5;
    }
    _memmove(puVar5,param_2,param_3);
LAB_10a00e9dc:
    *(undefined1 *)((long)puVar5 + param_3) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[4] = 0;
    return param_1;
  }
  func_0x000109ffde50();
  puVar10 = (undefined8 *)param_1[3];
  puVar11 = (undefined8 *)param_1[4];
  if (puVar11 == puVar10) {
    uVar8 = 0;
  }
  else {
    uVar8 = param_1[6];
    puVar16 = puVar10 + uVar8 / 0x66;
    piVar3 = (int *)*puVar16;
    piVar20 = piVar3 + (uVar8 % 0x66) * 10;
    piVar19 = (int *)(puVar10[(param_1[7] + uVar8) / 0x66] + ((param_1[7] + uVar8) % 0x66) * 0x28);
    if (piVar20 == piVar19) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        if (*piVar20 != 0) {
          if (*(char *)((long)piVar20 + 0x1f) < '\0') {
            if (*(long *)(piVar20 + 4) != 0) goto LAB_10a00eab8;
          }
          else if (*(char *)((long)piVar20 + 0x1f) != '\0') {
LAB_10a00eab8:
            uVar8 = uVar8 * 0x40 + 0x9e3779b9 + (uVar8 >> 2) + (long)*piVar20 ^ uVar8;
            ppppuVar2 = apppuStack_b8;
            func_0x000107c2b05c(ppppuVar2,piVar20 + 2);
            uVar8 = uVar8 * 0x40 + 0x9e3779b9 + (uVar8 >> 2) + (long)ppppuVar2 ^ uVar8;
            uVar8 = (long)piVar20[8] + 0x9e3779b9 + uVar8 * 0x40 + (uVar8 >> 2) ^ uVar8;
            piVar3 = (int *)*puVar16;
          }
        }
        piVar20 = piVar20 + 10;
        if ((long)piVar20 - (long)piVar3 == 0xff0) {
          puVar16 = puVar16 + 1;
          piVar3 = (int *)*puVar16;
          piVar20 = piVar3;
        }
      } while (piVar20 != piVar19);
      puVar10 = (undefined8 *)param_1[3];
      puVar11 = (undefined8 *)param_1[4];
    }
  }
  uVar7 = *param_1;
  if (uVar8 != *(ulong *)(uVar7 + 0x20)) {
    if (puVar11 != puVar10) {
      uVar9 = param_1[6];
      puVar4 = (uint *)puVar10[uVar9 / 0x66];
      puVar17 = puVar4 + (uVar9 % 0x66) * 10;
      puVar14 = (uint *)(puVar10[(param_1[7] + uVar9) / 0x66] + ((param_1[7] + uVar9) % 0x66) * 0x28
                        );
      if (puVar17 != puVar14) {
        puVar10 = puVar10 + uVar9 / 0x66;
        do {
          puVar12 = puVar17 + 2;
          uVar1 = *puVar17;
          if (uVar1 != 0) {
            if (*(char *)((long)puVar17 + 0x1f) < '\0') {
              if (*(long *)(puVar17 + 4) != 0) goto LAB_10a00ebd0;
            }
            else if (*(char *)((long)puVar17 + 0x1f) != '\0') {
LAB_10a00ebd0:
              puVar5 = (ulong *)*param_1;
              puVar21 = puVar5;
              if (*(char *)((long)puVar5 + 0x17) < '\0') {
                puVar21 = (ulong *)*puVar5;
              }
              uVar7 = puVar5[3];
              FUN_10a00280c(apppuStack_b8,(long)(int)puVar17[8] << 1,0x20);
              ppppuVar2 = (undefined8 ****)apppuStack_b8[0];
              if (-1 < cStack_a1) {
                ppppuVar2 = apppuStack_b8;
              }
              if (*(char *)((long)puVar17 + 0x1f) < '\0') {
                puVar12 = *(uint **)puVar12;
              }
              func_0x00010ae06f08(0,(uint)uVar7 | uVar1,&UNK_10f630f1d,&UNK_10f630f1d,0xffffffff,
                                  &UNK_10f627db8,in_x6,in_x7,puVar21,ppppuVar2,puVar12);
              if (cStack_a1 < '\0') {
                __ZdlPv(apppuStack_b8[0]);
              }
              puVar4 = (uint *)*puVar10;
            }
          }
          puVar17 = puVar17 + 10;
          if ((long)puVar17 - (long)puVar4 == 0xff0) {
            puVar10 = puVar10 + 1;
            puVar4 = (uint *)*puVar10;
            puVar17 = puVar4;
          }
        } while (puVar17 != puVar14);
        uVar7 = *param_1;
        puVar10 = (undefined8 *)param_1[3];
        puVar11 = (undefined8 *)param_1[4];
      }
    }
    *(ulong *)(uVar7 + 0x20) = uVar8;
  }
  if (puVar11 != puVar10) {
    uVar8 = param_1[6];
    plVar15 = puVar10 + uVar8 / 0x66;
    lVar6 = *plVar15;
    lVar18 = lVar6 + (uVar8 % 0x66) * 0x28;
    lVar13 = puVar10[(param_1[7] + uVar8) / 0x66] + ((param_1[7] + uVar8) % 0x66) * 0x28;
    if (lVar18 != lVar13) {
      do {
        if (*(char *)(lVar18 + 0x1f) < '\0') {
          __ZdlPv(*(undefined8 *)(lVar18 + 8));
          lVar6 = *plVar15;
        }
        lVar18 = lVar18 + 0x28;
        if (lVar18 - lVar6 == 0xff0) {
          plVar15 = plVar15 + 1;
          lVar6 = *plVar15;
          lVar18 = lVar6;
        }
      } while (lVar18 != lVar13);
      puVar10 = (undefined8 *)param_1[3];
      puVar11 = (undefined8 *)param_1[4];
    }
  }
  param_1[7] = 0;
  lVar18 = (long)puVar11 - (long)puVar10;
  while (uVar8 = lVar18 >> 3, 2 < uVar8) {
    __ZdlPv(*puVar10);
    puVar11 = (undefined8 *)param_1[4];
    puVar10 = (undefined8 *)(param_1[3] + 8);
    param_1[3] = (ulong)puVar10;
    lVar18 = (long)puVar11 - (long)puVar10;
  }
  if (uVar8 == 1) {
    uVar8 = 0x33;
  }
  else {
    if (uVar8 != 2) goto LAB_10a00ed84;
    uVar8 = 0x66;
  }
  param_1[6] = uVar8;
LAB_10a00ed84:
  if (puVar10 != puVar11) {
    do {
      puVar16 = puVar10 + 1;
      __ZdlPv(*puVar10);
      puVar10 = puVar16;
    } while (puVar16 != puVar11);
    uVar8 = param_1[4];
    if (uVar8 != param_1[3]) {
      param_1[4] = uVar8 + ((param_1[3] - uVar8) + 7 & 0xfffffffffffffff8);
    }
  }
  if (param_1[2] != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a00ea04; end: 10a00edef;  */

long * FUN_10a00ea04(long *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 ****ppppuVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  int *piVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint *puVar13;
  long lVar14;
  uint *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  uint *puVar18;
  int *piVar19;
  int *piVar20;
  undefined8 ***apppuStack_78 [2];
  char cStack_61;
  
  puVar11 = (undefined8 *)param_1[3];
  puVar12 = (undefined8 *)param_1[4];
  if (puVar12 == puVar11) {
    uVar9 = 0;
  }
  else {
    uVar9 = param_1[6];
    puVar17 = puVar11 + uVar9 / 0x66;
    piVar4 = (int *)*puVar17;
    piVar20 = piVar4 + (uVar9 % 0x66) * 10;
    piVar19 = (int *)(puVar11[(param_1[7] + uVar9) / 0x66] + ((param_1[7] + uVar9) % 0x66) * 0x28);
    if (piVar20 == piVar19) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      do {
        if (*piVar20 != 0) {
          if (*(char *)((long)piVar20 + 0x1f) < '\0') {
            if (*(long *)(piVar20 + 4) != 0) goto LAB_10a00eab8;
          }
          else if (*(char *)((long)piVar20 + 0x1f) != '\0') {
LAB_10a00eab8:
            uVar9 = uVar9 * 0x40 + 0x9e3779b9 + (uVar9 >> 2) + (long)*piVar20 ^ uVar9;
            ppppuVar3 = apppuStack_78;
            func_0x000107c2b05c(ppppuVar3,piVar20 + 2);
            uVar9 = uVar9 * 0x40 + 0x9e3779b9 + (uVar9 >> 2) + (long)ppppuVar3 ^ uVar9;
            uVar9 = (long)piVar20[8] + 0x9e3779b9 + uVar9 * 0x40 + (uVar9 >> 2) ^ uVar9;
            piVar4 = (int *)*puVar17;
          }
        }
        piVar20 = piVar20 + 10;
        if ((long)piVar20 - (long)piVar4 == 0xff0) {
          puVar17 = puVar17 + 1;
          piVar4 = (int *)*puVar17;
          piVar20 = piVar4;
        }
      } while (piVar20 != piVar19);
      puVar11 = (undefined8 *)param_1[3];
      puVar12 = (undefined8 *)param_1[4];
    }
  }
  lVar8 = *param_1;
  if (uVar9 != *(ulong *)(lVar8 + 0x20)) {
    if (puVar12 != puVar11) {
      uVar10 = param_1[6];
      puVar5 = (uint *)puVar11[uVar10 / 0x66];
      puVar18 = puVar5 + (uVar10 % 0x66) * 10;
      puVar15 = (uint *)(puVar11[(param_1[7] + uVar10) / 0x66] +
                        ((param_1[7] + uVar10) % 0x66) * 0x28);
      if (puVar18 != puVar15) {
        puVar11 = puVar11 + uVar10 / 0x66;
        do {
          puVar13 = puVar18 + 2;
          uVar2 = *puVar18;
          if (uVar2 != 0) {
            if (*(char *)((long)puVar18 + 0x1f) < '\0') {
              if (*(long *)(puVar18 + 4) != 0) goto LAB_10a00ebd0;
            }
            else if (*(char *)((long)puVar18 + 0x1f) != '\0') {
LAB_10a00ebd0:
              plVar6 = (long *)*param_1;
              plVar16 = plVar6;
              if (*(char *)((long)plVar6 + 0x17) < '\0') {
                plVar16 = (long *)*plVar6;
              }
              uVar1 = *(uint *)(plVar6 + 3);
              FUN_10a00280c(apppuStack_78,(long)(int)puVar18[8] << 1,0x20);
              ppppuVar3 = (undefined8 ****)apppuStack_78[0];
              if (-1 < cStack_61) {
                ppppuVar3 = apppuStack_78;
              }
              if (*(char *)((long)puVar18 + 0x1f) < '\0') {
                puVar13 = *(uint **)puVar13;
              }
              func_0x00010ae06f08(0,uVar1 | uVar2,&UNK_10f630f1d,&UNK_10f630f1d,0xffffffff,
                                  &UNK_10f627db8,in_x6,in_x7,plVar16,ppppuVar3,puVar13);
              if (cStack_61 < '\0') {
                __ZdlPv(apppuStack_78[0]);
              }
              puVar5 = (uint *)*puVar11;
            }
          }
          puVar18 = puVar18 + 10;
          if ((long)puVar18 - (long)puVar5 == 0xff0) {
            puVar11 = puVar11 + 1;
            puVar5 = (uint *)*puVar11;
            puVar18 = puVar5;
          }
        } while (puVar18 != puVar15);
        lVar8 = *param_1;
        puVar11 = (undefined8 *)param_1[3];
        puVar12 = (undefined8 *)param_1[4];
      }
    }
    *(ulong *)(lVar8 + 0x20) = uVar9;
  }
  if (puVar12 != puVar11) {
    uVar9 = param_1[6];
    plVar16 = puVar11 + uVar9 / 0x66;
    lVar7 = *plVar16;
    lVar8 = lVar7 + (uVar9 % 0x66) * 0x28;
    lVar14 = puVar11[(param_1[7] + uVar9) / 0x66] + ((param_1[7] + uVar9) % 0x66) * 0x28;
    if (lVar8 != lVar14) {
      do {
        if (*(char *)(lVar8 + 0x1f) < '\0') {
          __ZdlPv(*(undefined8 *)(lVar8 + 8));
          lVar7 = *plVar16;
        }
        lVar8 = lVar8 + 0x28;
        if (lVar8 - lVar7 == 0xff0) {
          plVar16 = plVar16 + 1;
          lVar7 = *plVar16;
          lVar8 = lVar7;
        }
      } while (lVar8 != lVar14);
      puVar11 = (undefined8 *)param_1[3];
      puVar12 = (undefined8 *)param_1[4];
    }
  }
  param_1[7] = 0;
  lVar8 = (long)puVar12 - (long)puVar11;
  while (uVar9 = lVar8 >> 3, 2 < uVar9) {
    __ZdlPv(*puVar11);
    puVar12 = (undefined8 *)param_1[4];
    puVar11 = (undefined8 *)(param_1[3] + 8);
    param_1[3] = (long)puVar11;
    lVar8 = (long)puVar12 - (long)puVar11;
  }
  if (uVar9 == 1) {
    lVar8 = 0x33;
  }
  else {
    if (uVar9 != 2) goto LAB_10a00ed84;
    lVar8 = 0x66;
  }
  param_1[6] = lVar8;
LAB_10a00ed84:
  if (puVar11 != puVar12) {
    do {
      puVar17 = puVar11 + 1;
      __ZdlPv(*puVar11);
      puVar11 = puVar17;
    } while (puVar17 != puVar12);
    lVar8 = param_1[4];
    if (lVar8 != param_1[3]) {
      param_1[4] = lVar8 + ((param_1[3] - lVar8) + 7U & 0xfffffffffffffff8);
    }
  }
  if (param_1[2] != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a00edf0; end: 10a00f227;  */

undefined ***
FUN_10a00edf0(ulong *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
             undefined4 *param_5)

{
  long *plVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined **ppuVar6;
  long lVar7;
  code *pcVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 ***apppuStack_1b8 [2];
  char cStack_1a1;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 ***pppuStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined4 *puStack_110;
  undefined ***pppuStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  code *pcStack_c8;
  long lStack_98;
  undefined4 *puStack_90;
  ulong *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  puVar24 = (undefined8 *)param_1[1];
  puVar21 = (undefined8 *)param_1[2];
  puVar20 = (undefined8 *)((long)puVar21 - (long)puVar24);
  uVar18 = 0;
  if (puVar20 != (undefined8 *)0x0) {
    uVar18 = ((long)puVar21 - (long)puVar24 >> 3) * 0x66 - 1;
  }
  uVar5 = param_1[4];
  uVar19 = param_1[5] + uVar5;
  puVar9 = param_1;
  if (uVar18 == uVar19) {
    if (uVar5 < 0x66) {
      puVar26 = (undefined8 *)param_1[3];
      puVar27 = (undefined8 *)*param_1;
      uStack_68 = param_3;
      if (puVar20 < (undefined8 *)((long)puVar26 - (long)puVar27)) {
        puVar9 = (ulong *)0xff0;
        puVar17 = param_2;
        __Znwm();
        if (puVar26 == puVar21) {
          if (puVar24 == puVar27) {
            uVar18 = (long)puVar26 - (long)puVar24 >> 2;
            if (puVar21 == puVar24) {
              uVar18 = 1;
            }
            lVar23 = uVar18 * 2;
            FUN_10a0611f8();
            puVar24 = (undefined8 *)(uVar18 + (lVar23 + 6U & 0xfffffffffffffff8));
            lVar23 = param_1[2] - (long)param_1[1];
            puVar21 = puVar24;
            if (lVar23 != 0) {
              puVar21 = (undefined8 *)((long)puVar24 + lVar23);
              puVar26 = (undefined8 *)param_1[1];
              puVar27 = puVar24;
              do {
                *puVar27 = *puVar26;
                lVar23 = lVar23 + -8;
                puVar26 = puVar26 + 1;
                puVar27 = puVar27 + 1;
              } while (lVar23 != 0);
            }
            uVar19 = *param_1;
            *param_1 = uVar18;
            param_1[1] = (ulong)puVar24;
            param_1[2] = (ulong)puVar21;
            param_1[3] = uVar18 + (long)puVar17 * 8;
            if (uVar19 != 0) {
              __ZdlPv(uVar19);
              puVar24 = (undefined8 *)param_1[1];
            }
          }
          puVar24[-1] = puVar9;
          uVar18 = param_1[1];
          param_1[1] = uVar18 - 8;
          uVar14 = *(undefined8 *)(uVar18 - 8);
          param_1[1] = uVar18;
          puVar9 = param_1;
          FUN_10a0610fc(param_1,uVar14);
          param_3 = uStack_68;
        }
        else {
          *puVar21 = puVar9;
          param_1[2] = param_1[2] + 8;
          param_3 = uStack_68;
        }
      }
      else {
        puVar17 = (undefined8 *)((long)puVar26 - (long)puVar27 >> 2);
        if (puVar26 == puVar27) {
          puVar17 = (undefined8 *)0x1;
        }
        puVar15 = param_2;
        puStack_70 = param_5;
        FUN_10a0611f8();
        uVar14 = 0xff0;
        puVar16 = puVar15;
        __Znwm();
        puVar26 = (undefined8 *)((long)puVar17 + (long)puVar20);
        puVar27 = puVar17 + (long)puVar15;
        puVar10 = puVar17;
        if (puVar20 == (undefined8 *)((long)puVar15 * 8)) {
          if ((long)puVar20 < 1) {
            puVar20 = (undefined8 *)((long)puVar26 - (long)puVar17 >> 2);
            if (puVar21 == puVar24) {
              puVar20 = (undefined8 *)0x1;
            }
            puVar10 = puVar20;
            FUN_10a0611f8();
            puVar26 = puVar10 + ((ulong)puVar20 >> 2);
            puVar27 = puVar10 + (long)puVar16;
            if (puVar17 != (undefined8 *)0x0) {
              __ZdlPv(puVar17);
            }
          }
          else {
            lVar23 = ((long)puVar26 - (long)puVar17 >> 3) + 1;
            puVar26 = puVar26 + -((ulong)(lVar23 - (lVar23 >> 0x3f)) >> 1);
          }
        }
        puVar24 = puVar26 + 1;
        *puVar26 = uVar14;
        puVar21 = (undefined8 *)param_1[2];
        puVar20 = puVar10;
        if (puVar21 != (undefined8 *)param_1[1]) {
          do {
            puVar10 = puVar20;
            puVar17 = puVar26;
            if (puVar26 == puVar20) {
              if (puVar24 < puVar27) {
                lVar23 = ((long)puVar27 - (long)puVar24 >> 3) + 1;
                lVar22 = (long)puVar24 - (long)puVar20;
                lVar7 = (long)puVar24 - (long)puVar20;
                puVar24 = puVar24 + ((ulong)(lVar23 - (lVar23 >> 0x3f)) >> 1);
                puVar17 = (undefined8 *)((long)puVar24 - lVar22);
                if (lVar7 != 0) {
                  _memmove(puVar17,puVar26,lVar7);
                  puVar16 = puVar26;
                }
              }
              else {
                puVar17 = (undefined8 *)((long)puVar27 - (long)puVar20 >> 2);
                if ((long)puVar27 - (long)puVar20 == 0) {
                  puVar17 = (undefined8 *)0x1;
                }
                puVar10 = puVar17;
                FUN_10a0611f8();
                puVar17 = (undefined8 *)
                          ((long)puVar10 + ((long)puVar17 * 2 + 6U & 0xfffffffffffffff8));
                lVar23 = (long)puVar24 - (long)puVar20;
                puVar24 = puVar17;
                if (lVar23 != 0) {
                  puVar24 = (undefined8 *)((long)puVar17 + lVar23);
                  puVar27 = puVar17;
                  do {
                    *puVar27 = *puVar26;
                    lVar23 = lVar23 + -8;
                    puVar27 = puVar27 + 1;
                    puVar26 = puVar26 + 1;
                  } while (lVar23 != 0);
                }
                puVar27 = puVar10 + (long)puVar16;
                if (puVar20 != (undefined8 *)0x0) {
                  __ZdlPv(puVar20);
                }
              }
            }
            puVar21 = puVar21 + -1;
            puVar26 = puVar17 + -1;
            *puVar26 = *puVar21;
            puVar20 = puVar10;
          } while (puVar21 != (undefined8 *)param_1[1]);
        }
        param_3 = uStack_68;
        param_5 = puStack_70;
        puVar9 = (ulong *)*param_1;
        *param_1 = (ulong)puVar10;
        param_1[1] = (ulong)puVar26;
        param_1[2] = (ulong)puVar24;
        param_1[3] = (ulong)puVar27;
        puVar20 = puVar26;
        if (puVar9 != (ulong *)0x0) {
          __ZdlPv();
        }
      }
    }
    else {
      param_1[4] = uVar5 - 0x66;
      uVar14 = *puVar24;
      param_1[1] = (ulong)(puVar24 + 1);
      FUN_10a0610fc(param_1,uVar14);
    }
    puVar24 = (undefined8 *)param_1[1];
    uVar19 = param_1[5] + param_1[4];
  }
  puVar25 = (undefined4 *)(puVar24[uVar19 / 0x66] + (uVar19 % 0x66) * 0x28);
  puVar11 = puVar25 + 2;
  *puVar25 = (int)param_2;
  if (0x7ffffffffffffff7 < param_4) {
    func_0x000109ffde50();
    __ZdlPv(puVar20);
    if (puVar11 != (undefined4 *)0x0) {
      __ZdlPv(puVar11);
    }
    __Unwind_Resume(puVar9);
    pcStack_78 = FUN_10a00f228;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcStack_d8 = FUN_10a061484;
    ppuStack_d0 = &PTR_DAT_110b9ec98;
    pcStack_c8 = FUN_10a06122c;
    puStack_e8 = &UNK_10f633e59;
    uStack_e0 = 0x18;
    puStack_90 = puVar25;
    puStack_88 = puVar9;
    puStack_80 = &stack0xfffffffffffffff0;
    FUN_10a57077c();
    pppuVar12 = &ppuStack_d0;
    (*(code *)*ppuStack_d0)();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      return pppuVar12;
    }
    ___stack_chk_fail();
    (*(code *)*ppuStack_d0)(&ppuStack_d0);
    pppuVar13 = pppuVar12;
    __Unwind_Resume();
    uStack_120 = 0xa0a0a0a0a0a0a0a1;
    pcStack_f8 = FUN_10a00f2ec;
    uStack_118 = param_4;
    puStack_110 = puVar25;
    pppuStack_108 = pppuVar12;
    ppuStack_100 = &puStack_80;
    func_0x000109887da8(apppuStack_1b8,&UNK_10f633e59,0x18);
    ppppuVar2 = (undefined8 ****)apppuStack_1b8[0];
    if (-1 < cStack_1a1) {
      ppppuVar2 = apppuStack_1b8;
    }
    pppuVar13[0x36] = &PTR_DAT_110b9ec80;
    ppppuVar3 = (undefined8 ****)&UNK_10f630f1d;
    if (ppppuVar2 != (undefined8 ****)0x0) {
      ppppuVar3 = ppppuVar2;
    }
    func_0x000107c2c4dc(pppuVar13 + 0x37,ppppuVar3);
    puStack_188 = (undefined *)0x0;
    puStack_180 = (undefined *)0x0;
    uStack_170 = (undefined *)0xffffffffffffffff;
    uStack_178 = (undefined *)0x100000064;
    puStack_160 = (undefined *)0x0;
    puStack_168 = (undefined *)0x0;
    puStack_150 = (undefined *)0x0;
    puStack_158 = (undefined *)0x0;
    puStack_148 = (undefined *)0x0;
    puStack_140 = (undefined *)CONCAT44(puStack_140._4_4_,0xffffffff);
    puStack_138 = (undefined *)0x0;
    puStack_130 = (undefined *)0x0;
    pppuStack_190 = ppppuVar2;
    func_0x00010a052690(pppuVar13 + 0x2d,&pppuStack_190);
    pppuVar12 = pppuVar13;
    FUN_10a0051e8(pppuVar13,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar12 & 1) == 0) {
      ppuStack_1a0 = &PTR_DAT_110b9ec80;
      uStack_198 = 0;
      pppuStack_190 = (undefined8 ***)&PTR_DAT_110c42c58;
      puStack_188 = (undefined *)0x0;
      puStack_180 = (undefined *)CONCAT71(puStack_180._1_7_,1);
      func_0x0001098949cc(pppuVar13,ppppuVar2,&ppuStack_1a0,&pppuStack_190);
    }
    if (cStack_1a1 < '\0') {
      __ZdlPv(apppuStack_1b8[0]);
    }
    pppuVar12 = pppuVar13;
    FUN_10a0051e8(pppuVar13,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar12 & 1) == 0) {
      FUN_10a052828(pppuVar13,"enabled",FUN_10a068dcc,FUN_10a068e84);
    }
    pppuVar12 = pppuVar13;
    FUN_10a0051e8(pppuVar13,100,0x40,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar12 & 1) == 0) {
      FUN_10a0605c4(pppuVar13,&DAT_10f6326f2,FUN_10a068ff8,0);
    }
    pppuVar12 = pppuVar13;
    FUN_10a0051e8(pppuVar13,100,0x40,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar12 & 1) == 0) {
      FUN_10a0605c4(pppuVar13,&UNK_10f6326fe,FUN_10a069150,0);
    }
    pppuVar12 = pppuVar13;
    FUN_10a0051e8(pppuVar13,100,0x40,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar12 & 1) == 0) {
      FUN_10a0605c4(pppuVar13,&DAT_10f415adf,FUN_10a069208,0);
    }
    pppuVar12 = pppuVar13;
    FUN_10a0051e8(pppuVar13,0x19,8,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar12 & 1) == 0) {
      FUN_10a0605c4(pppuVar13,&DAT_10f632711,FUN_10a0692c0,0);
    }
    pppuVar13[0x36] = (undefined **)PTR___ZTIDn_1103469e8;
    ppuVar6 = pppuVar13[0x2e];
    if (pppuVar13[0x2d] == ppuVar6) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a00f5c8);
      (*pcVar8)();
    }
    puStack_188 = ppuVar6[-0xc];
    pppuStack_190 = (undefined8 ***)ppuVar6[-0xd];
    puStack_168 = ppuVar6[-8];
    uStack_170 = ppuVar6[-9];
    uStack_178 = ppuVar6[-10];
    puStack_180 = ppuVar6[-0xb];
    puStack_158 = ppuVar6[-6];
    puStack_160 = ppuVar6[-7];
    puStack_148 = ppuVar6[-4];
    puStack_150 = ppuVar6[-5];
    puStack_130 = ppuVar6[-1];
    puStack_138 = ppuVar6[-2];
    puStack_140 = ppuVar6[-3];
    pppuVar13[0x2e] = ppuVar6 + -0xd;
    pppuVar12 = pppuVar13;
    FUN_10a0051e8(pppuVar13,(ulong)uStack_178 & 0xffffffff,uStack_178._4_4_,
                  (ulong)puStack_140 & 0xffffffff,(ulong)uStack_170 & 0xffffffff,uStack_170._4_4_);
    if (((ulong)pppuVar12 & 1) == 0) {
      func_0x000109894f40(pppuVar13,0);
      FUN_10a054234(pppuVar13,&pppuStack_190,pppuVar13 + 0x37,&UNK_10f633e59,0x18);
      FUN_10a05431c(pppuVar13);
      pppuVar12 = pppuVar13;
    }
    return pppuVar12;
  }
  if (param_4 < 0x17) {
    *(char *)((long)puVar25 + 0x1f) = (char)param_4;
    if (param_4 == 0) goto LAB_10a00f17c;
  }
  else {
    puVar4 = (undefined4 *)0x19;
    if ((param_4 | 7) != 0x17) {
      puVar4 = (undefined4 *)((param_4 | 7) + 1);
    }
    puVar11 = puVar4;
    __Znwm();
    *(ulong *)(puVar25 + 4) = param_4;
    *(ulong *)(puVar25 + 6) = (ulong)puVar4 | 0x8000000000000000;
    *(undefined4 **)(puVar25 + 2) = puVar11;
  }
  _memmove(puVar11,param_3,param_4);
LAB_10a00f17c:
  *(undefined1 *)((long)puVar11 + param_4) = 0;
  puVar25[8] = *param_5;
  uVar18 = param_1[5];
  param_1[5] = uVar18 + 1;
  uVar18 = param_1[4] + uVar18 + 1;
  plVar1 = (long *)(param_1[1] + (uVar18 / 0x66) * 8);
  lVar22 = *plVar1;
  lVar23 = 0;
  if (param_1[2] != param_1[1]) {
    lVar23 = lVar22 + (uVar18 % 0x66) * 0x28;
  }
  if (lVar23 == lVar22) {
    lVar23 = plVar1[-1] + 0xff0;
  }
  return (undefined ***)(lVar23 + -0x28);
}



/* Entry: 10a00f228; end: 10a00f2eb;  */

void FUN_10a00f228(undefined8 param_1,undefined8 param_2)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  undefined **ppuVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined8 ***apppuStack_148 [2];
  char cStack_131;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10a06122c;
  puStack_78 = &UNK_10f633e59;
  uStack_70 = 0x18;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,100,param_2);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  func_0x000109887da8(apppuStack_148,&UNK_10f633e59,0x18);
  ppppuVar1 = (undefined8 ****)apppuStack_148[0];
  if (-1 < cStack_131) {
    ppppuVar1 = apppuStack_148;
  }
  pppuVar5[0x36] = &PTR_DAT_110b9ec80;
  ppppuVar2 = (undefined8 ****)&UNK_10f630f1d;
  if (ppppuVar1 != (undefined8 ****)0x0) {
    ppppuVar2 = ppppuVar1;
  }
  func_0x000107c2c4dc(pppuVar5 + 0x37,ppppuVar2);
  puStack_118 = (undefined *)0x0;
  puStack_110 = (undefined *)0x0;
  uStack_100 = (undefined *)0xffffffffffffffff;
  uStack_108 = (undefined *)0x100000064;
  puStack_f0 = (undefined *)0x0;
  puStack_f8 = (undefined *)0x0;
  puStack_e0 = (undefined *)0x0;
  puStack_e8 = (undefined *)0x0;
  puStack_d8 = (undefined *)0x0;
  puStack_d0 = (undefined *)CONCAT44(puStack_d0._4_4_,0xffffffff);
  puStack_c8 = (undefined *)0x0;
  puStack_c0 = (undefined *)0x0;
  pppuStack_120 = ppppuVar1;
  func_0x00010a052690(pppuVar5 + 0x2d,&pppuStack_120);
  pppuVar6 = pppuVar5;
  FUN_10a0051e8(pppuVar5,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar6 & 1) == 0) {
    ppuStack_130 = &PTR_DAT_110b9ec80;
    uStack_128 = 0;
    pppuStack_120 = (undefined8 ***)&PTR_DAT_110c42c58;
    puStack_118 = (undefined *)0x0;
    puStack_110 = (undefined *)CONCAT71(puStack_110._1_7_,1);
    func_0x0001098949cc(pppuVar5,ppppuVar1,&ppuStack_130,&pppuStack_120);
  }
  if (cStack_131 < '\0') {
    __ZdlPv(apppuStack_148[0]);
  }
  pppuVar6 = pppuVar5;
  FUN_10a0051e8(pppuVar5,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar6 & 1) == 0) {
    FUN_10a052828(pppuVar5,"enabled",FUN_10a068dcc,FUN_10a068e84);
  }
  pppuVar6 = pppuVar5;
  FUN_10a0051e8(pppuVar5,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar6 & 1) == 0) {
    FUN_10a0605c4(pppuVar5,&DAT_10f6326f2,FUN_10a068ff8,0);
  }
  pppuVar6 = pppuVar5;
  FUN_10a0051e8(pppuVar5,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar6 & 1) == 0) {
    FUN_10a0605c4(pppuVar5,&UNK_10f6326fe,FUN_10a069150,0);
  }
  pppuVar6 = pppuVar5;
  FUN_10a0051e8(pppuVar5,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar6 & 1) == 0) {
    FUN_10a0605c4(pppuVar5,&DAT_10f415adf,FUN_10a069208,0);
  }
  pppuVar6 = pppuVar5;
  FUN_10a0051e8(pppuVar5,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar6 & 1) == 0) {
    FUN_10a0605c4(pppuVar5,&DAT_10f632711,FUN_10a0692c0,0);
  }
  pppuVar5[0x36] = (undefined **)PTR___ZTIDn_1103469e8;
  ppuVar3 = pppuVar5[0x2e];
  if (pppuVar5[0x2d] != ppuVar3) {
    puStack_118 = ppuVar3[-0xc];
    pppuStack_120 = (undefined8 ***)ppuVar3[-0xd];
    puStack_f8 = ppuVar3[-8];
    uStack_100 = ppuVar3[-9];
    uStack_108 = ppuVar3[-10];
    puStack_110 = ppuVar3[-0xb];
    puStack_e8 = ppuVar3[-6];
    puStack_f0 = ppuVar3[-7];
    puStack_d8 = ppuVar3[-4];
    puStack_e0 = ppuVar3[-5];
    puStack_c0 = ppuVar3[-1];
    puStack_c8 = ppuVar3[-2];
    puStack_d0 = ppuVar3[-3];
    pppuVar5[0x2e] = ppuVar3 + -0xd;
    pppuVar6 = pppuVar5;
    FUN_10a0051e8(pppuVar5,(ulong)uStack_108 & 0xffffffff,uStack_108._4_4_,
                  (ulong)puStack_d0 & 0xffffffff,(ulong)uStack_100 & 0xffffffff,uStack_100._4_4_);
    if (((ulong)pppuVar6 & 1) == 0) {
      func_0x000109894f40(pppuVar5,0);
      FUN_10a054234(pppuVar5,&pppuStack_120,pppuVar5 + 0x37,&UNK_10f633e59,0x18);
      FUN_10a05431c(pppuVar5);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a00f5c8);
  (*pcVar4)();
}



/* Entry: 10a00f2ec; end: 10a00f5e3;  */

void FUN_10a00f2ec(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f633e59,0x18);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9ec80;
  pppuVar2 = (undefined8 ***)&UNK_10f630f1d;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110b9ec80;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"enabled",FUN_10a068dcc,FUN_10a068e84);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f6326f2,FUN_10a068ff8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6326fe,FUN_10a069150,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f415adf,FUN_10a069208,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f632711,FUN_10a0692c0,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f633e59,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a00f5c8);
  (*pcVar6)();
}



/* Entry: 10a00f5e4; end: 10a00f613;  */

long * FUN_10a00f5e4(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a00f614; end: 10a00fdff;  */

void FUN_10a00f614(char *param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  long *plVar11;
  undefined2 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  undefined8 *puVar24;
  short *psVar25;
  undefined4 uVar26;
  long *plStack_1a0;
  long *plStack_198;
  long *aplStack_190 [6];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  long alStack_110 [2];
  char *apcStack_100 [7];
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  long *aplStack_80 [2];
  
  if (param_2 == 0) {
    *param_1 = '\0';
  }
  else {
    cVar4 = *(char *)(param_2 + 0xe0);
    *param_1 = cVar4;
    if (cVar4 == '\x01') {
      alStack_110[1] = *(undefined8 *)(param_2 + 0xf0);
      alStack_110[0] = *(long *)(param_2 + 0xe8);
      if (*(long *)(param_2 + 0xf0) != 0) {
        plVar21 = (long *)(*(long *)(param_2 + 0xf0) + 8);
        do {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar9) {
            *plVar21 = *plVar21 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      apcStack_100[0] = param_1 + 0x48;
      apcStack_100[1] = param_1 + 1;
      apcStack_100[2] = param_1 + 4;
      apcStack_100[3] = param_1 + 8;
      apcStack_100[5] = (char *)*(undefined8 *)(param_2 + 0x100);
      apcStack_100[4] = (char *)*(undefined8 *)(param_2 + 0xf8);
      if (*(long *)(param_2 + 0x100) != 0) {
        plVar21 = (long *)(*(long *)(param_2 + 0x100) + 8);
        do {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar9) {
            *plVar21 = *plVar21 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      apcStack_100[6] = param_1 + 0x220;
      pcStack_c8 = param_1 + 3;
      pcStack_c0 = param_1 + 0x24;
      pcStack_b8 = param_1 + 0x28;
      lStack_a8 = *(long *)(param_2 + 0x110);
      uStack_b0 = *(undefined8 *)(param_2 + 0x108);
      if (lStack_a8 != 0) {
        plVar21 = (long *)(lStack_a8 + 8);
        do {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar9) {
            *plVar21 = *plVar21 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lVar16 = 0;
      pcStack_a0 = param_1 + 0x3f8;
      pcStack_98 = param_1 + 2;
      pcStack_90 = param_1 + 0x1c;
      pcStack_88 = param_1 + 0x20;
      do {
        lVar15 = *(long *)((long)alStack_110 + lVar16);
        cVar4 = *(char *)(lVar15 + 0x21);
        **(char **)((long)apcStack_100 + lVar16 + 8) = cVar4;
        if (cVar4 == '\x01') {
          puVar1 = *(undefined4 **)((long)apcStack_100 + lVar16 + 0x18);
          **(undefined4 **)((long)apcStack_100 + lVar16 + 0x10) = *(undefined4 *)(lVar15 + 0x24);
          *puVar1 = *(undefined4 *)(lVar15 + 0x28);
          uVar26 = *(undefined4 *)(lVar15 + 0x34);
          puVar24 = *(undefined8 **)((long)apcStack_100 + lVar16);
          *puVar24 = *(undefined8 *)(lVar15 + 0x2c);
          *(undefined4 *)(puVar24 + 1) = uVar26;
          uVar26 = *(undefined4 *)(lVar15 + 0x40);
          *(undefined8 *)((long)puVar24 + 0xc) = *(undefined8 *)(lVar15 + 0x38);
          *(undefined4 *)((long)puVar24 + 0x14) = uVar26;
          *(undefined4 *)(puVar24 + 3) = *(undefined4 *)(lVar15 + 0x44);
          aplStack_190[1] = *(long **)(lVar15 + 0x50);
          aplStack_190[0] = *(long **)(lVar15 + 0x48);
          if (*(long *)(lVar15 + 0x50) != 0) {
            plVar21 = (long *)(*(long *)(lVar15 + 0x50) + 8);
            do {
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar9) {
                *plVar21 = *plVar21 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          aplStack_190[2] = puVar24 + 4;
          aplStack_190[4] = *(long **)(lVar15 + 0x60);
          aplStack_190[3] = *(long **)(lVar15 + 0x58);
          if (*(long *)(lVar15 + 0x60) != 0) {
            plVar21 = (long *)(*(long *)(lVar15 + 0x60) + 8);
            do {
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar9) {
                *plVar21 = *plVar21 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          aplStack_190[5] = puVar24 + 5;
          uStack_158 = *(undefined8 *)(lVar15 + 0x70);
          uStack_160 = *(undefined8 *)(lVar15 + 0x68);
          if (*(long *)(lVar15 + 0x70) != 0) {
            plVar21 = (long *)(*(long *)(lVar15 + 0x70) + 8);
            do {
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar9) {
                *plVar21 = *plVar21 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puStack_150 = puVar24 + 6;
          uStack_140 = *(undefined8 *)(lVar15 + 0x80);
          uStack_148 = *(undefined8 *)(lVar15 + 0x78);
          if (*(long *)(lVar15 + 0x80) != 0) {
            plVar21 = (long *)(*(long *)(lVar15 + 0x80) + 8);
            do {
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar9) {
                *plVar21 = *plVar21 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puStack_138 = puVar24 + 7;
          uStack_128 = *(undefined8 *)(lVar15 + 0x90);
          uStack_130 = *(undefined8 *)(lVar15 + 0x88);
          if (*(long *)(lVar15 + 0x90) != 0) {
            plVar21 = (long *)(*(long *)(lVar15 + 0x90) + 8);
            do {
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar9) {
                *plVar21 = *plVar21 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar19 = 0;
          puStack_120 = puVar24 + 8;
          do {
            **(undefined8 **)((long)aplStack_190 + lVar19 + 0x10) = 0;
            if (*(long *)((long)aplStack_190 + lVar19) != 0) {
              lVar10 = *(long *)(*(long *)((long)aplStack_190 + lVar19) + 0x268);
              if (lVar10 != 0) {
                ___dynamic_cast(lVar10,&PTR_DAT_110bb3788,&PTR_DAT_110bb2dc8,0);
              }
              **(long **)((long)aplStack_190 + lVar19 + 0x10) = lVar10;
            }
            lVar19 = lVar19 + 0x18;
          } while (lVar19 != 0x78);
          lVar19 = 0x60;
          do {
            func_0x00010a05248c((long)aplStack_190 + lVar19);
            lVar19 = lVar19 + -0x18;
          } while (lVar19 != -0x18);
          *(undefined2 *)(puVar24 + 9) = 0xffff;
          plVar21 = *(long **)(lVar15 + 0x98);
          plVar2 = *(long **)(lVar15 + 0xa0);
          aplStack_190[0] = plVar21;
          aplStack_190[1] = plVar2;
          if (plVar2 != (long *)0x0) {
            plVar11 = plVar2 + 1;
            do {
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar9) {
                *plVar11 = *plVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          if ((plVar21 != (long *)0x0) && ((long *)plVar21[0x46] != (long *)plVar21[0x45])) {
            lVar19 = *(long *)plVar21[0x45];
            lVar15 = *(long *)(lVar19 + 600);
            *(undefined8 *)(lVar15 + 0x30) = 0;
            *(undefined8 *)(lVar15 + 0x28) = 6;
            *(undefined8 *)(lVar15 + 0x40) = 0;
            *(undefined8 *)(lVar15 + 0x38) = 0;
            *(undefined8 *)(lVar15 + 0x50) = 0;
            *(undefined8 *)(lVar15 + 0x48) = 0;
            *(undefined4 *)(lVar19 + 0x21e) = 0x1010101;
            func_0x00010a332748(lVar19 + 0x219,1);
            func_0x00010a332790(lVar19,5);
            func_0x00010a332700(lVar19 + 0x21a,0);
            lVar15 = *(long *)(lVar19 + 0x268);
            *(undefined1 *)(lVar15 + 0x28) = 1;
            *(undefined4 *)(lVar15 + 0x29) = 0;
            *(undefined1 *)(lVar15 + 0x2d) = 7;
            *(undefined8 *)(lVar15 + 0x30) = 0xff00000000;
            *(undefined4 *)(lVar15 + 0x38) = 0;
            plVar11 = *(long **)(param_3 + 0x18);
            plStack_1a0 = plVar21;
            if (plVar11 == (long *)0x0) {
              FUN_10a06186c();
              goto LAB_10a00fda0;
            }
            (**(code **)(*plVar11 + 0x30))(plVar11,&plStack_1a0);
            *(short *)(puVar24 + 9) = (short)plVar11;
          }
          if (plVar2 != (long *)0x0) {
            plVar21 = plVar2 + 1;
            do {
              lVar15 = *plVar21;
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar9) {
                *plVar21 = lVar15 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
            }
          }
          lVar15 = *(long *)((long)apcStack_100 + lVar16);
          *(undefined8 *)(lVar15 + 0x50) = 0;
          lVar19 = *(long *)((long)alStack_110 + lVar16);
          plVar21 = *(long **)(lVar19 + 0xa8);
          plVar2 = *(long **)(lVar19 + 0xb0);
          if (plVar2 != (long *)0x0) {
            plVar11 = plVar2 + 1;
            do {
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar9) {
                *plVar11 = *plVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          plStack_1a0 = plVar21;
          plStack_198 = plVar2;
          if (plVar21 != (long *)0x0) {
            lVar10 = plVar21[0x46];
            lVar22 = plVar21[0x45];
            aplStack_190[0] = (long *)0x0;
            aplStack_190[1] = (long *)0x0;
            aplStack_190[2] = (undefined8 *)0x0;
            FUN_10a04a2d8(aplStack_190,*(long *)(lVar19 + 0xb8),*(long *)(lVar19 + 0xc0),
                          (*(long *)(lVar19 + 0xc0) - *(long *)(lVar19 + 0xb8) >> 3) *
                          -0x5555555555555555);
            plVar7 = aplStack_190[1];
            plVar6 = aplStack_190[0];
            plVar23 = aplStack_190[0];
            for (plVar11 = aplStack_190[0]; plVar11 != plVar7; plVar11 = plVar11 + 3) {
              plVar3 = (long *)plVar11[1];
              plVar17 = (long *)*plVar11;
              while (plVar17 != plVar3) {
                plVar23 = plVar11;
                if (((*plVar17 == 0) || (lVar19 = *(long *)(*plVar17 + 0x268), lVar19 == 0)) ||
                   (___dynamic_cast(lVar19,&PTR_DAT_110bb3788,&PTR_DAT_110bb2dc8,0),
                   plVar17 = plVar17 + 2, lVar19 == 0)) goto LAB_10a00fa88;
              }
              plVar23 = plVar7;
            }
LAB_10a00fa88:
            uVar14 = lVar10 - lVar22 >> 4;
            if (uVar14 - 1 < (ulong)(((long)plVar23 - (long)plVar6) / 0x18)) {
              lVar19 = 0;
              uVar20 = 0;
              do {
                if ((ulong)(plVar21[0x46] - plVar21[0x45] >> 4) <= uVar20) {
                  FUN_10a00946c(&UNK_10f6921f0);
                  goto LAB_10a00fda0;
                }
                lVar22 = *(long *)(plVar21[0x45] + lVar19);
                lVar10 = *(long *)(lVar22 + 600);
                *(undefined8 *)(lVar10 + 0x30) = 0;
                *(undefined8 *)(lVar10 + 0x28) = 6;
                *(undefined8 *)(lVar10 + 0x40) = 0;
                *(undefined8 *)(lVar10 + 0x38) = 0;
                *(undefined8 *)(lVar10 + 0x50) = 0;
                *(undefined8 *)(lVar10 + 0x48) = 0;
                *(undefined4 *)(lVar22 + 0x21e) = 0x1010101;
                func_0x00010a332748(lVar22 + 0x219,1);
                func_0x00010a332790(lVar22,5);
                func_0x00010a332700(lVar22 + 0x21a,0);
                lVar10 = *(long *)(lVar22 + 0x268);
                *(undefined1 *)(lVar10 + 0x28) = 1;
                *(undefined4 *)(lVar10 + 0x29) = 0;
                *(undefined1 *)(lVar10 + 0x2d) = 7;
                *(undefined8 *)(lVar10 + 0x30) = 0xff00000000;
                *(undefined4 *)(lVar10 + 0x38) = 0;
                uVar20 = uVar20 + 1;
                lVar19 = lVar19 + 0x10;
              } while (uVar14 != uVar20);
              uVar20 = *(ulong *)(lVar15 + 0x50);
              lVar19 = uVar20 - uVar14;
              if ((uVar20 < uVar14 || lVar19 == 0) && (uVar14 != uVar20)) {
                puVar12 = (undefined2 *)(lVar15 + uVar20 * 0x30 + 0x58);
                do {
                  *puVar12 = 0xffff;
                  *(undefined8 *)(puVar12 + 4) = 0;
                  puVar12 = puVar12 + 0x18;
                  bVar9 = lVar19 != -1;
                  lVar19 = lVar19 + 1;
                } while (bVar9);
              }
              *(ulong *)(lVar15 + 0x50) = uVar14;
              plVar11 = *(long **)(param_3 + 0x18);
              aplStack_80[0] = plVar21;
              if (plVar11 == (long *)0x0) {
                FUN_10a06186c();
LAB_10a00fda0:
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10a00fda4);
                (*pcVar8)();
              }
              (**(code **)(*plVar11 + 0x30))(plVar11,aplStack_80);
              uVar20 = 0;
              psVar25 = (short *)(lVar15 + 0x58);
              *psVar25 = (short)plVar11;
              lVar15 = lVar15 + 0x68;
              do {
                psVar25[uVar20 * 0x18] = *psVar25 + (short)uVar20;
                uVar13 = ((long)aplStack_190[1] - (long)aplStack_190[0] >> 3) * -0x5555555555555555;
                if (uVar13 < uVar20 || uVar13 - uVar20 == 0) goto LAB_10a00fda0;
                plVar21 = aplStack_190[0] + uVar20 * 3;
                lVar19 = *plVar21;
                lVar10 = plVar21[1];
                uVar13 = lVar10 - lVar19 >> 4;
                *(ulong *)(psVar25 + uVar20 * 0x18 + 4) = uVar13;
                if (lVar10 - lVar19 != 0) {
                  lVar19 = 0;
                  uVar18 = 0;
                  do {
                    if ((ulong)(plVar21[1] - *plVar21 >> 4) <= uVar18) goto LAB_10a00fda0;
                    lVar10 = *(long *)(*(long *)(*plVar21 + lVar19) + 0x268);
                    if (lVar10 != 0) {
                      ___dynamic_cast(lVar10,&PTR_DAT_110bb3788,&PTR_DAT_110bb2dc8,0);
                    }
                    *(long *)(lVar15 + uVar18 * 8) = lVar10;
                    uVar18 = uVar18 + 1;
                    lVar19 = lVar19 + 0x10;
                  } while (uVar13 != uVar18);
                }
                uVar20 = uVar20 + 1;
                lVar15 = lVar15 + 0x30;
              } while (uVar20 != uVar14);
            }
            FUN_10a0431a4(aplStack_190);
          }
          if (plVar2 != (long *)0x0) {
            plVar21 = plVar2 + 1;
            do {
              lVar15 = *plVar21;
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar9) {
                *plVar21 = lVar15 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
            }
          }
        }
        lVar16 = lVar16 + 0x30;
      } while (lVar16 != 0x90);
      lVar16 = 0x60;
      do {
        func_0x00010a061814((long)alStack_110 + lVar16);
        lVar16 = lVar16 + -0x30;
      } while (lVar16 != -0x30);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0x128);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x130);
      lVar16 = *(long *)(param_2 + 0x118);
      param_1[0x38] = *(char *)(lVar16 + 0x21);
      param_1[0x3d] = *(char *)(lVar16 + 0x22);
      *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(lVar16 + 0x23);
      param_1[0x3e] = *(char *)(lVar16 + 0x27);
      param_1[0x3f] = *(byte *)(lVar16 + 0x28) ^ 1;
      param_1[0x40] = *(char *)(lVar16 + 0x29);
      uVar5 = *(byte *)(lVar16 + 0x2a) - 1;
      if (uVar5 < 3) {
        uVar26 = *(undefined4 *)(&UNK_10e492f38 + ((ulong)uVar5 & 0xff) * 4);
      }
      else {
        uVar26 = 0;
      }
      *(undefined4 *)(param_1 + 0x30) = uVar26;
      *(uint *)(param_1 + 0x34) = (uint)*(byte *)(lVar16 + 0x2b);
    }
  }
  return;
}



/* Entry: 10a00fe00; end: 10a00ff17;  */

void FUN_10a00fe00(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  param_1[1] = *(undefined8 *)(param_2 + 0x50);
  *param_1 = uVar5;
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



/* Entry: 10a00ff18; end: 10a00ff8b;  */

void FUN_10a00ff18(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c2b054(auStack_38,&UNK_10f5fa02a);
  FUN_10a3c8548(param_1,param_2,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a00ff8c; end: 10a00ffe3;  */

long FUN_10a00ff8c(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x260) == 0) {
    return 0;
  }
  plVar3 = *(long **)(*(long *)(param_1 + 0x260) + 0xe0);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x90))();
    lVar4 = *plVar3;
    if ((lVar4 != 0) && (uVar1 = *(uint *)(lVar4 + 0xf0), uVar1 != 0)) {
      iVar2 = 0;
      if ((ulong)uVar1 != 0) {
        iVar2 = (int)((ulong)(*(long *)(lVar4 + 0x18) - *(long *)(lVar4 + 0x10)) / (ulong)uVar1);
      }
      if (iVar2 != 0) {
        return lVar4;
      }
    }
  }
  return 0;
}



/* Entry: 10a00ffe4; end: 10a01007f;  */

bool FUN_10a00ffe4(long param_1)

{
  ulong *puVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if ((*(byte *)(param_1 + 0x410) & 1) != 0) {
    return true;
  }
  if (((*(byte *)(param_1 + 0x3a0) & 1) != 0) || ((*(byte *)(param_1 + 0x460) & 1) != 0)) {
    if (*(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18) < 0xf7) {
      return true;
    }
    if (((*(long **)(param_1 + 0x2a0) == *(long **)(param_1 + 0x2a8)) ||
        (lVar5 = **(long **)(param_1 + 0x2a0), lVar5 == 0)) ||
       (*(long **)(lVar5 + 0x228) == *(long **)(lVar5 + 0x230))) {
      lVar5 = 0;
    }
    else {
      lVar5 = **(long **)(lVar5 + 0x228);
    }
    lVar6 = *(long *)(param_1 + 0x3f0);
    if (lVar6 != 0) {
      if (*(long **)(lVar6 + 0x228) == *(long **)(lVar6 + 0x230)) {
        return false;
      }
      lVar5 = **(long **)(lVar6 + 0x228);
    }
    if (lVar5 != 0) {
      plVar3 = *(long **)(lVar5 + 0x188);
      bVar2 = false;
      plVar7 = plVar3;
      if (plVar3 != (long *)0x0) {
        do {
          plVar4 = plVar7;
          (**(code **)(*plVar7 + 0x80))();
          if ((int)plVar4 != 2) {
            FUN_10a044920(plVar3,1);
            break;
          }
          puVar1 = (ulong *)(plVar7 + 0x13);
          plVar7 = (long *)*puVar1;
        } while ((long *)*puVar1 != (long *)0x0);
        (**(code **)(*plVar3 + 0x90))(plVar3);
        bVar2 = ((ulong)plVar3 & 1) != 0;
      }
      return bVar2;
    }
  }
  return false;
}



/* Entry: 10a010080; end: 10a010147;  */

bool FUN_10a010080(long param_1,long param_2)

{
  ulong *puVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if ((((*(byte *)(param_1 + 0x3a1) & 1) != 0) || ((*(byte *)(param_1 + 0x411) & 1) != 0)) ||
     (*(char *)(param_1 + 0x461) == '\x01')) {
    if (*(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18) < 0xf7) {
      return true;
    }
    if (param_2 != 0) {
      plVar3 = *(long **)(param_2 + 0x160);
      bVar2 = false;
      plVar6 = plVar3;
      if (plVar3 != (long *)0x0) {
        do {
          plVar7 = plVar6;
          (**(code **)(*plVar6 + 0x80))();
          if ((int)plVar7 != 2) {
            FUN_10a044920(plVar3,1);
            break;
          }
          puVar1 = (ulong *)(plVar6 + 0x13);
          plVar6 = (long *)*puVar1;
        } while ((long *)*puVar1 != (long *)0x0);
        (**(code **)(*plVar3 + 0x90))(plVar3);
        bVar2 = ((ulong)plVar3 & 2) != 0;
      }
      return bVar2;
    }
    plVar3 = *(long **)(param_1 + 0x2a8);
    for (plVar6 = *(long **)(param_1 + 0x2a0); plVar6 != plVar3; plVar6 = plVar6 + 2) {
      lVar5 = *plVar6;
      if (lVar5 != 0) {
        plVar8 = *(long **)(lVar5 + 0x230);
        for (plVar7 = *(long **)(lVar5 + 0x228); plVar7 != plVar8; plVar7 = plVar7 + 2) {
          if (*plVar7 != 0) {
            uVar4 = *(ulong *)(*plVar7 + 0x188);
            FUN_10a0448a8(uVar4,2);
            if ((uVar4 & 1) != 0) {
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}



/* Entry: 10a010148; end: 10a0101ef;  */

undefined8 * FUN_10a010148(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10a062f08(&uStack_30);
  plVar5 = (long *)param_1[1];
  uVar7 = param_1[1];
  uVar6 = *param_1;
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
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
      uStack_30 = uVar6;
      uStack_28 = uVar7;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a0101f0; end: 10a01066b;  */

void FUN_10a0101f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5,long param_6,long *param_7,long *param_8,ulong param_9)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  long *plStack_d8;
  long lStack_d0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long **pplStack_80;
  int *piStack_78;
  int iStack_6c;
  long *plStack_68;
  
  lVar4 = param_6;
  plStack_68 = param_7;
  FUN_10a410af8();
  if ((*(byte *)(lVar4 + 0x40) & 1) == 0) {
    param_4[1] = 0xff7fffff00000000;
    *param_4 = 0;
    param_4[2] = 0xff7fffffff7fffff;
  }
  else {
    plVar5 = (long *)0x1;
    FUN_10a061940(*(undefined8 *)(*(long *)(param_6 + 0x260) + 0xe0));
    if (plVar5 == (long *)0x0) {
      lStack_d0 = 0;
    }
    else {
      lStack_d0 = *plVar5;
    }
    lVar7 = param_6;
    FUN_10a00ff8c();
    lVar15 = *(long *)(param_5 + 0x100);
    FUN_10a410af8(param_6);
    FUN_10a429208();
    uVar9 = (ulong)*(uint *)(lVar7 + 0xf0);
    uVar10 = uVar9;
    if (*(uint *)(lVar7 + 0xf0) != 0) {
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = (ulong)(*(long *)(lVar7 + 0x18) - *(long *)(lVar7 + 0x10)) / uVar9;
      }
    }
    uVar9 = uVar10 & 0xffffffff;
    iVar8 = (int)uVar10;
    iStack_6c = iVar8 * 0x18;
    plStack_d8 = param_8;
    if (param_7 != (long *)0x0) {
      (**(code **)(*param_7 + 0x30))();
      param_9 = uVar9;
      plStack_d8 = param_7;
    }
    pplStack_80 = &plStack_68;
    piStack_78 = &iStack_6c;
    uVar2 = *(uint *)(lVar7 + 0x110);
    if ((uVar2 != 0xffffffff) &&
       (uVar10 = (*(long *)(lVar7 + 0x100) - *(long *)(lVar7 + 0xf8) >> 3) * 0x6db6db6db6db6db7,
       uVar10 < uVar2 || uVar10 - uVar2 == 0)) {
      FUN_10ab725fc();
LAB_10a0105fc:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a010600);
      (*pcVar3)();
    }
    uVar2 = *(uint *)(lVar7 + 0x114);
    if (uVar2 == 0xffffffff) {
      lVar13 = 0;
    }
    else {
      uVar10 = (*(long *)(lVar7 + 0x100) - *(long *)(lVar7 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
      if (uVar10 < uVar2 || uVar10 - uVar2 == 0) {
        FUN_10ab725fc();
        goto LAB_10a0105fc;
      }
      lVar13 = *(long *)(lVar7 + 0xf8) + (ulong)uVar2 * 0x38;
    }
    func_0x00010ab4d7d8(&plStack_88,lVar7);
    func_0x00010ab4d7d8(&plStack_90,lVar7,lVar13);
    param_4[1] = 0xff7fffff00000000;
    *param_4 = 0;
    param_4[2] = 0xff7fffffff7fffff;
    if (iVar8 != 0) {
      uVar10 = 0;
      plVar5 = plStack_d8;
      uVar19 = 0;
      do {
        uVar16 = (undefined4)uVar19;
        if (param_9 == uVar10) goto LAB_10a0105fc;
        (**(code **)(*plStack_88 + 0x10))(plStack_88,uVar10);
        *(undefined4 *)plVar5 = uVar16;
        *(int *)((long)plVar5 + 4) = (int)param_2;
        *(int *)(plVar5 + 1) = (int)param_3;
        (**(code **)(*plStack_90 + 0x10))(plStack_90,uVar10);
        *(undefined4 *)((long)plVar5 + 0xc) = uVar16;
        *(int *)(plVar5 + 2) = (int)param_2;
        *(int *)((long)plVar5 + 0x14) = (int)param_3;
        func_0x00010a01069c(&uStack_a8,param_4,plVar5);
        param_4[1] = uStack_a0;
        *param_4 = uStack_a8;
        param_4[2] = uStack_98;
        uVar10 = uVar10 + 1;
        plVar5 = plVar5 + 3;
        uVar19 = uStack_a8;
      } while (uVar9 != uVar10);
    }
    puVar1 = *(undefined8 **)(lVar7 + 0x48);
    for (puVar14 = *(undefined8 **)(lVar7 + 0x40); puVar14 != puVar1; puVar14 = puVar14 + 9) {
      lVar7 = (long)*(char *)((long)puVar14 + 0x17);
      puVar6 = puVar14;
      if (lVar7 < 0) {
        lVar7 = puVar14[1];
        puVar6 = (undefined8 *)*puVar14;
      }
      lVar13 = *(long *)(lVar15 + 0xc0);
      func_0x00010a42939c(lVar13,(*(long *)(lVar15 + 200) - lVar13 >> 3) * -0x5555555555555555,
                          puVar6,lVar7);
      if (lVar13 != 0) {
        fVar17 = *(float *)(lVar13 + 0x10);
        lVar7 = lStack_d0 + 0x48;
        FUN_10a043614(lVar7,puVar14);
        if ((*(byte *)(lVar4 + 0x38) & 1) == 0) {
          if (iVar8 != 0) {
            pfVar12 = (float *)(**(long **)(lVar7 + 0x10) + 8);
            plVar5 = plStack_d8;
            uVar10 = param_9;
            uVar11 = uVar9;
            do {
              if (uVar10 == 0) goto LAB_10a0105fc;
              fVar18 = *pfVar12;
              *plVar5 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar12 + -2) >> 0x20) * fVar17 +
                                 (float)((ulong)*plVar5 >> 0x20),
                                 (float)*(undefined8 *)(pfVar12 + -2) * fVar17 + (float)*plVar5);
              *(float *)(plVar5 + 1) = fVar17 * fVar18 + *(float *)(plVar5 + 1);
              func_0x00010a01069c(&uStack_a8,param_4,plVar5);
              param_4[1] = uStack_a0;
              *param_4 = uStack_a8;
              param_4[2] = uStack_98;
              plVar5 = plVar5 + 3;
              pfVar12 = pfVar12 + 6;
              uVar10 = uVar10 - 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        else if (iVar8 != 0) {
          uVar11 = param_9;
          plVar5 = plStack_d8;
          puVar6 = (undefined8 *)(**(long **)(lVar7 + 0x10) + 0xc);
          uVar10 = uVar9;
          do {
            if (uVar11 == 0) goto LAB_10a0105fc;
            fVar18 = *(float *)((long)puVar6 + -4);
            *plVar5 = CONCAT44((float)((ulong)*(undefined8 *)((long)puVar6 + -0xc) >> 0x20) * fVar17
                               + (float)((ulong)*plVar5 >> 0x20),
                               (float)*(undefined8 *)((long)puVar6 + -0xc) * fVar17 + (float)*plVar5
                              );
            *(float *)(plVar5 + 1) = fVar17 * fVar18 + *(float *)(plVar5 + 1);
            fVar18 = *(float *)(puVar6 + 1);
            *(ulong *)((long)plVar5 + 0xc) =
                 CONCAT44((float)((ulong)*puVar6 >> 0x20) * fVar17 +
                          (float)((ulong)*(undefined8 *)((long)plVar5 + 0xc) >> 0x20),
                          (float)*puVar6 * fVar17 + (float)*(undefined8 *)((long)plVar5 + 0xc));
            *(float *)((long)plVar5 + 0x14) = fVar17 * fVar18 + *(float *)((long)plVar5 + 0x14);
            func_0x00010a01069c(&uStack_a8,param_4,plVar5);
            param_4[1] = uStack_a0;
            *param_4 = uStack_a8;
            param_4[2] = uStack_98;
            uVar11 = uVar11 - 1;
            plVar5 = plVar5 + 3;
            uVar10 = uVar10 - 1;
            puVar6 = puVar6 + 3;
          } while (uVar10 != 0);
        }
      }
    }
    if (plStack_90 != (long *)0x0) {
      (**(code **)(*plStack_90 + 8))();
    }
    if (plStack_88 != (long *)0x0) {
      (**(code **)(*plStack_88 + 8))();
    }
    FUN_10a010718(&pplStack_80);
  }
  return;
}



/* Entry: 10a01066c; end: 10a010717;  */

undefined1  [16] FUN_10a01066c(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long lStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  uVar9 = param_1[1] - *param_1 >> 6;
  if (param_2 <= uVar9) {
    if (param_2 < uVar9) {
      param_1[1] = *param_1 + param_2 * 0x40;
    }
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = param_1;
    return auVar14;
  }
  plVar5 = (long *)(param_2 - uVar9);
  puVar7 = (undefined8 *)param_1[1];
  if ((long *)(param_1[2] - (long)puVar7 >> 6) < plVar5) {
    lVar12 = (long)puVar7 - *param_1;
    pcVar3 = (char *)((long)plVar5 + (lVar12 >> 6));
    if ((ulong)pcVar3 >> 0x3a != 0) {
      plVar6 = plVar5;
      FUN_10a0435cc();
      pcStack_38 = FUN_10a0435cc;
      plVar2 = (long *)&UNK_10f6334ac;
      puStack_40 = &stack0xfffffffffffffff0;
      FUN_109ffde64();
      pcStack_48 = FUN_10a0435e0;
      plStack_60 = plVar5;
      plStack_58 = param_1;
      if ((ulong)plVar6 >> 0x3a == 0) {
        lVar12 = (long)plVar6 << 6;
        puStack_50 = (undefined1 *)&puStack_40;
        __Znwm(lVar12);
        auVar16._8_8_ = plVar6;
        auVar16._0_8_ = lVar12;
        return auVar16;
      }
      puStack_50 = (undefined1 *)&puStack_40;
      func_0x000109ffded8();
      pcStack_68 = FUN_10a043614;
      plVar5 = &lStack_78;
      ppuStack_70 = &puStack_50;
      FUN_10a043650();
      if (*plVar2 != 0) {
        auVar17._8_8_ = plVar5;
        auVar17._0_8_ = *plVar2 + 0x38;
        return auVar17;
      }
      pcVar3 = "map::at:  key not found";
      FUN_109ffdddc();
      pcVar10 = *(char **)(pcVar3 + 8);
      pcVar3 = pcVar3 + 8;
      plVar2 = plVar5;
      while (pcVar13 = pcVar3, pcVar10 != (char *)0x0) {
        while( true ) {
          pcVar13 = pcVar10;
          plVar2 = (long *)(pcVar13 + 0x20);
          plVar4 = plVar6;
          FUN_10a003e3c(plVar6,plVar2);
          if (((uint)plVar4 >> 7 & 1) != 0) break;
          pcVar10 = pcVar13 + 0x20;
          plVar2 = plVar6;
          FUN_10a003e3c(pcVar10,plVar6);
          if (((uint)pcVar10 >> 7 & 1) == 0) goto LAB_10a0436bc;
          pcVar3 = pcVar13 + 8;
          pcVar10 = *(char **)pcVar3;
          if (*(char **)pcVar3 == (char *)0x0) goto LAB_10a0436bc;
        }
        pcVar3 = pcVar13;
        pcVar10 = *(char **)pcVar13;
      }
LAB_10a0436bc:
      *plVar5 = (long)pcVar13;
      auVar18._8_8_ = plVar2;
      auVar18._0_8_ = pcVar3;
      return auVar18;
    }
    uVar9 = param_1[2] - *param_1;
    pcVar10 = (char *)((long)uVar9 >> 5);
    if (pcVar10 <= pcVar3) {
      pcVar10 = pcVar3;
    }
    if (0x7fffffffffffffbf < uVar9) {
      pcVar10 = (char *)0x3ffffffffffffff;
    }
    if (pcVar10 == (char *)0x0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a0435e0();
    }
    puVar8 = (undefined8 *)((long)plVar2 + lVar12);
    lVar1 = (long)plVar5 * 8;
    lVar12 = (long)plVar5 * 0x40;
    puVar7 = puVar8;
    do {
      puVar7[1] = 0;
      *puVar7 = 0x3f800000;
      puVar7[3] = 0;
      puVar7[2] = 0x3f80000000000000;
      puVar7[5] = 0x3f800000;
      puVar7[4] = 0;
      puVar7[7] = 0x3f80000000000000;
      puVar7[6] = 0;
      puVar7 = puVar7 + 8;
      lVar12 = lVar12 + -0x40;
    } while (lVar12 != 0);
    plVar5 = (long *)*param_1;
    lVar11 = (long)puVar8 - (param_1[1] - (long)plVar5);
    _memcpy(lVar11);
    lVar12 = *param_1;
    *param_1 = lVar11;
    param_1[1] = (long)(puVar8 + lVar1);
    param_1[2] = (long)(plVar2 + (long)pcVar10 * 8);
    param_1 = (long *)0x0;
    if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar19._8_8_ = plVar5;
      auVar19._0_8_ = lVar12;
      return auVar19;
    }
  }
  else {
    puVar8 = puVar7;
    if (plVar5 != (long *)0x0) {
      puVar8 = puVar7 + (long)plVar5 * 8;
      lVar12 = (long)plVar5 * 0x40;
      do {
        puVar7[1] = 0;
        *puVar7 = 0x3f800000;
        puVar7[3] = 0;
        puVar7[2] = 0x3f80000000000000;
        puVar7[5] = 0x3f800000;
        puVar7[4] = 0;
        puVar7[7] = 0x3f80000000000000;
        puVar7[6] = 0;
        puVar7 = puVar7 + 8;
        lVar12 = lVar12 + -0x40;
      } while (lVar12 != 0);
    }
    param_1[1] = (long)puVar8;
  }
  auVar15._8_8_ = plVar5;
  auVar15._0_8_ = param_1;
  return auVar15;
}



/* Entry: 10a010718; end: 10a0107c3;  */

undefined8 * FUN_10a010718(undefined8 *param_1)

{
  if (*(long **)*param_1 != (long *)0x0) {
    (**(code **)(**(long **)*param_1 + 0x38))();
    (**(code **)(**(long **)*param_1 + 0x40))(*(long **)*param_1,0,0,*(undefined4 *)param_1[1],0);
  }
  return param_1;
}



/* Entry: 10a0107c4; end: 10a012daf;  */

/* WARNING: Removing unreachable block (ram,0x00010a012660) */
/* WARNING: Removing unreachable block (ram,0x00010a011ef8) */
/* WARNING: Removing unreachable block (ram,0x00010a011910) */
/* WARNING: Removing unreachable block (ram,0x00010a01204c) */
/* WARNING: Removing unreachable block (ram,0x00010a011fac) */
/* WARNING: Removing unreachable block (ram,0x00010a011920) */
/* WARNING: Removing unreachable block (ram,0x00010a011930) */

void FUN_10a0107c4(char *param_1,long param_2,long *param_3,long *param_4)

{
  undefined *******pppppppuVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  undefined8 ******ppppppuVar11;
  int iVar12;
  code *pcVar13;
  undefined *******pppppppuVar14;
  undefined *puVar15;
  long lVar16;
  undefined *******pppppppuVar17;
  undefined8 in_x7;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  char *pcVar21;
  ushort uVar22;
  long lVar23;
  short *psVar24;
  undefined8 *puVar25;
  undefined *******pppppppuVar26;
  long *plVar27;
  undefined *****pppppuVar28;
  undefined ******ppppppuVar29;
  uint uVar30;
  long *plVar31;
  long *plVar32;
  undefined ******ppppppuVar33;
  undefined *******pppppppuVar34;
  undefined ******ppppppuVar35;
  undefined ******ppppppuVar36;
  int iVar37;
  long *plVar38;
  undefined *******pppppppuVar39;
  undefined ******ppppppuVar40;
  undefined *******pppppppuVar41;
  long *plVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  long lVar46;
  short sVar47;
  undefined *******pppppppuVar48;
  undefined *puVar49;
  undefined8 *puVar50;
  undefined *******pppppppuVar51;
  undefined ******ppppppuVar52;
  ulong uVar53;
  undefined *******pppppppuVar54;
  undefined ******ppppppuVar55;
  undefined1 auVar56 [16];
  long *plStack_320;
  long *plStack_318;
  undefined ******ppppppuStack_2f8;
  undefined ******ppppppuStack_2e8;
  undefined ******ppppppuStack_2c8;
  undefined ******ppppppuStack_2b0;
  undefined ******ppppppuStack_290;
  long lStack_278;
  ulong uStack_270;
  undefined ******ppppppuStack_260;
  undefined ******ppppppuStack_258;
  undefined *****pppppuStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  char cStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  undefined2 uStack_208;
  undefined ******ppppppuStack_200;
  undefined ******ppppppuStack_1f8;
  undefined ******ppppppuStack_1f0;
  undefined ******ppppppuStack_1e8;
  undefined ******appppppuStack_1e0 [7];
  undefined8 uStack_1a8;
  char cStack_191;
  undefined **appuStack_180 [20];
  undefined8 *****pppppuStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined ******ppppppuStack_c8;
  undefined *****pppppuStack_c0;
  undefined ******ppppppuStack_b0;
  undefined ******ppppppuStack_a8;
  undefined *****pppppuStack_a0;
  undefined ******ppppppuStack_90;
  long *plStack_88;
  undefined ******ppppppuStack_80;
  undefined ******ppppppuStack_78;
  undefined ******ppppppuStack_70;
  
  pppppppuVar1 = (undefined *******)(param_1 + 0xa0);
  lVar16 = param_2;
  if (*(long *)(param_1 + 0xb8) != 0) {
    lVar16 = *(long *)(param_1 + 0xb0);
    func_0x00010a061ce0(pppppppuVar1);
    param_1[0xb0] = '\0';
    param_1[0xb1] = '\0';
    param_1[0xb2] = '\0';
    param_1[0xb3] = '\0';
    param_1[0xb4] = '\0';
    param_1[0xb5] = '\0';
    param_1[0xb6] = '\0';
    param_1[0xb7] = '\0';
    lVar19 = *(long *)(param_1 + 0xa8);
    if (lVar19 != 0) {
      lVar23 = 0;
      do {
        (*pppppppuVar1)[lVar23] = (undefined *****)0x0;
        lVar23 = lVar23 + 1;
      } while (lVar19 != lVar23);
    }
    param_1[0xb8] = '\0';
    param_1[0xb9] = '\0';
    param_1[0xba] = '\0';
    param_1[0xbb] = '\0';
    param_1[0xbc] = '\0';
    param_1[0xbd] = '\0';
    param_1[0xbe] = '\0';
    param_1[0xbf] = '\0';
  }
  plVar38 = *(long **)(param_1 + 0x40);
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x46] = '\0';
  param_1[0x47] = '\0';
  if (plVar38 != (long *)0x0) {
    plVar42 = plVar38 + 1;
    do {
      lVar19 = *plVar42;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar42,0x10);
      if (bVar8) {
        *plVar42 = lVar19 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar38 + 0x10))(plVar38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar38);
    }
  }
  uVar43 = (param_4[1] - *param_4 >> 4) * 0xc4ec4ec5;
  iVar37 = (int)uVar43;
  if ((uVar43 & 0xffffffff) == 0) {
    ppppppuStack_2e8 = (undefined ******)0x0;
    ppppppuStack_2f8 = (undefined ******)0x0;
    ppppppuStack_290 = (undefined ******)0x0;
    ppppppuStack_2b0 = (undefined ******)0x0;
    ppppppuStack_80 = (undefined ******)0x0;
    ppppppuStack_78 = (undefined ******)0x0;
    ppppppuStack_70 = (undefined ******)0x0;
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
LAB_10a0109a0:
    iVar12 = iRam00000001132e8220;
    plStack_318 = (long *)(param_1 + 0x88);
    plStack_320 = (long *)(param_1 + 0x90);
    ppppppuStack_2c8 = ppppppuStack_2e8;
    if (0 < iVar37) {
      lVar16 = 0;
      uVar53 = 0;
      uVar43 = uVar43 & 0x7fffffff;
      uStack_270 = (ulong)(iVar37 - 1);
      pppppppuVar39 = (undefined *******)(param_1 + 0xb0);
      uVar45 = uStack_270 + 1;
      lStack_278 = 0x150;
      pppppppuVar17 = (undefined *******)ppppppuStack_290;
      do {
        lVar19 = *param_4;
        uVar44 = (param_4[1] - lVar19 >> 4) * 0x4ec4ec4ec4ec4ec5;
        if (uVar44 < uVar53 || uVar44 - uVar53 == 0) goto LAB_10a012a78;
        lVar46 = lVar19 + uVar53 * 0xd0;
        plVar38 = (long *)(lVar46 + 0x48);
        lVar23 = *plVar38;
        pppppppuVar41 = pppppppuVar1;
        FUN_10a063a28(pppppppuVar1,lVar23);
        if (pppppppuVar41 == (undefined *******)0x0) {
          if (*(short *)(lVar46 + 0x82) != 0 && *(short *)(lVar46 + 0x80) == 0) {
            lVar20 = uVar44 + lVar16;
            psVar24 = (short *)(lVar19 + lStack_278);
            uVar44 = uStack_270;
            do {
              if (uVar44 == 0) {
                uVar18 = 0xd;
                bVar8 = uVar43 <= uVar45;
                goto LAB_10a010acc;
              }
              lVar20 = lVar20 + -1;
              if (lVar20 == 0) goto LAB_10a012a78;
              uVar44 = uVar44 - 1;
              plVar42 = (long *)(psVar24 + -0x1c);
              sVar47 = *psVar24;
              psVar24 = psVar24 + 0x68;
            } while (lVar23 != *plVar42 || sVar47 == 0);
          }
          uVar18 = 5;
          bVar8 = false;
LAB_10a010acc:
          pppppppuVar41 = (undefined *******)(lVar46 + 0x50);
          ppppppuStack_90 = (undefined ******)pppppppuVar41;
          if (*(char *)(lVar46 + 0x67) < '\0') {
            ppppppuStack_90 = *pppppppuVar41;
          }
          puVar50 = *(undefined8 **)(param_1 + 0x18);
          pppppppuVar51 = (undefined *******)*puVar50;
          pppppppuVar48 = (undefined *******)puVar50[1];
          ppppppuStack_b0 = (undefined ******)pppppppuVar51;
          if ((pppppppuVar48 == (undefined *******)0x0) ||
             (__ZNSt3__119__shared_weak_count4lockEv(),
             ppppppuStack_a8 = (undefined ******)pppppppuVar48,
             pppppppuVar48 == (undefined *******)0x0)) {
            FUN_10a043ecc();
            goto LAB_10a012a78;
          }
          pppppppuVar14 = (undefined *******)0x30;
          __Znwm();
          pppppppuVar14[1] = (undefined ******)0x0;
          pppppppuVar14[2] = (undefined ******)0x0;
          *pppppppuVar14 = (undefined ******)&PTR_FUN_110b9d090;
          ppppppuStack_b0 = (undefined ******)0x0;
          ppppppuStack_a8 = (undefined ******)0x0;
          ppppppuVar40 = pppppppuVar51[2];
          pppppppuVar54 = &ppppppuStack_90;
          ppppppuStack_200 = (undefined ******)pppppppuVar51;
          ppppppuStack_1f8 = (undefined ******)pppppppuVar48;
          func_0x0001099f082c(ppppppuVar40,pppppppuVar54,&pppppuStack_e0);
          if ((int)ppppppuVar40 != 0) {
            puVar50 = (undefined8 *)0x10;
            ___cxa_allocate_exception();
            *puVar50 = &PTR_DAT_110b9d018;
            *(undefined4 *)(puVar50 + 1) = 1;
            ___cxa_throw();
            goto LAB_10a012a78;
          }
          pppppppuVar26 = pppppppuVar14 + 3;
          pppppppuVar14[3] = (undefined ******)pppppuStack_e0;
          pppppppuVar14[4] = (undefined ******)pppppppuVar51;
          pppppppuVar14[5] = (undefined ******)pppppppuVar48;
          pppppppuVar51 = pppppppuVar48 + 1;
          do {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar51,0x10);
            if (bVar9) {
              *pppppppuVar51 = (undefined ******)((long)*pppppppuVar51 + 1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          do {
            ppppppuVar40 = *pppppppuVar51;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar51,0x10);
            if (bVar9) {
              *pppppppuVar51 = (undefined ******)((long)ppppppuVar40 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (ppppppuVar40 == (undefined ******)0x0) {
            (*(code *)(*pppppppuVar48)[2])(pppppppuVar48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar48);
          }
          pppppppuVar51 = (undefined *******)ppppppuStack_a8;
          ppppppuStack_260 = (undefined ******)pppppppuVar26;
          ppppppuStack_258 = (undefined ******)pppppppuVar14;
          if ((undefined *******)ppppppuStack_a8 != (undefined *******)0x0) {
            pppppppuVar48 = (undefined *******)(ppppppuStack_a8 + 1);
            do {
              ppppppuVar40 = *pppppppuVar48;
              cVar7 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar48,0x10);
              if (bVar9) {
                *pppppppuVar48 = (undefined ******)((long)ppppppuVar40 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (ppppppuVar40 == (undefined ******)0x0) {
              (*(code *)(*ppppppuStack_a8)[2])(ppppppuStack_a8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar51);
            }
          }
          ppppppuVar29 = ppppppuStack_258;
          ppppppuVar40 = ppppppuStack_260;
          ppppppuVar33 = (undefined ******)*ppppppuStack_260;
          uVar44 = ((ulong)(uint)((int)ppppppuVar33 << 3) + 8 ^ (ulong)ppppppuVar33 >> 0x20) *
                   -0x622015f714c7d297;
          uVar44 = ((ulong)ppppppuVar33 >> 0x20 ^ uVar44 >> 0x2f ^ uVar44) * -0x622015f714c7d297;
          pppppppuVar14 = (undefined *******)((uVar44 ^ uVar44 >> 0x2f) * -0x622015f714c7d297);
          pppppppuVar48 = (undefined *******)puVar50[4];
          if (pppppppuVar48 != (undefined *******)0x0) {
            pcVar21 = (char *)((long)pppppppuVar48 + -1);
            if (((ulong)pppppppuVar48 & (ulong)pcVar21) == 0) {
              pppppppuVar51 = (undefined *******)((ulong)pppppppuVar14 & (ulong)pcVar21);
            }
            else {
              pppppppuVar51 = pppppppuVar14;
              if (pppppppuVar48 <= pppppppuVar14) {
                uVar44 = 0;
                if (pppppppuVar48 != (undefined *******)0x0) {
                  uVar44 = (ulong)pppppppuVar14 / (ulong)pppppppuVar48;
                }
                pppppppuVar51 =
                     (undefined *******)((long)pppppppuVar14 - uVar44 * (long)pppppppuVar48);
              }
            }
            puVar25 = *(undefined8 **)(puVar50[3] + (long)pppppppuVar51 * 8);
            if (puVar25 != (undefined8 *)0x0) {
              for (plVar42 = (long *)*puVar25; plVar42 != (long *)0x0; plVar42 = (long *)*plVar42) {
                pppppppuVar26 = (undefined *******)plVar42[1];
                if (pppppppuVar26 == pppppppuVar14) {
                  if ((undefined ******)plVar42[2] == ppppppuVar33) goto LAB_10a010f54;
                }
                else {
                  if (((ulong)pppppppuVar48 & (ulong)pcVar21) == 0) {
                    pppppppuVar26 = (undefined *******)((ulong)pppppppuVar26 & (ulong)pcVar21);
                  }
                  else if (pppppppuVar48 <= pppppppuVar26) {
                    uVar44 = 0;
                    if (pppppppuVar48 != (undefined *******)0x0) {
                      uVar44 = (ulong)pppppppuVar26 / (ulong)pppppppuVar48;
                    }
                    pppppppuVar26 =
                         (undefined *******)((long)pppppppuVar26 - uVar44 * (long)pppppppuVar48);
                  }
                  if (pppppppuVar26 != pppppppuVar51) break;
                }
              }
            }
          }
          plVar42 = (long *)0x28;
          __Znwm();
          *plVar42 = 0;
          plVar42[1] = (long)pppppppuVar14;
          plVar42[2] = (long)ppppppuVar33;
          plVar42[3] = (long)ppppppuVar40;
          plVar42[4] = (long)ppppppuVar29;
          if ((undefined *******)ppppppuVar29 != (undefined *******)0x0) {
            pppppppuVar26 = (undefined *******)(ppppppuVar29 + 2);
            do {
              cVar7 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar26,0x10);
              if (bVar9) {
                *pppppppuVar26 = (undefined ******)((long)*pppppppuVar26 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          if ((pppppppuVar48 == (undefined *******)0x0) ||
             (*(float *)(puVar50 + 7) * (float)pppppppuVar48 < (float)(puVar50[6] + 1))) {
            uVar44 = 1;
            if ((undefined *******)0x2 < pppppppuVar48) {
              uVar44 = (ulong)(((ulong)pppppppuVar48 & (ulong)((long)pppppppuVar48 + -1)) != 0);
            }
            pppppppuVar51 = (undefined *******)(uVar44 | (long)pppppppuVar48 << 1);
            pppppppuVar48 =
                 (undefined *******)(long)((float)(puVar50[6] + 1) / *(float *)(puVar50 + 7));
            if (pppppppuVar51 <= pppppppuVar48) {
              pppppppuVar51 = pppppppuVar48;
            }
            if ((char *)((long)pppppppuVar51 + -1) == (char *)0x0) {
              pppppppuVar51 = (undefined *******)0x2;
            }
            else if (((ulong)pppppppuVar51 & (ulong)((long)pppppppuVar51 + -1)) != 0) {
              __ZNSt3__112__next_primeEm();
            }
            pppppppuVar48 = (undefined *******)puVar50[4];
            if (pppppppuVar48 < pppppppuVar51) {
LAB_10a010d60:
              if ((ulong)pppppppuVar51 >> 0x3d != 0) {
                func_0x000109ffded8();
                goto LAB_10a012a78;
              }
              lVar19 = (long)pppppppuVar51 << 3;
              __Znwm();
              lVar23 = puVar50[3];
              puVar50[3] = lVar19;
              if (lVar23 != 0) {
                __ZdlPv();
              }
              pppppppuVar48 = (undefined *******)0x0;
              puVar50[4] = pppppppuVar51;
              do {
                *(undefined8 *)(puVar50[3] + (long)pppppppuVar48 * 8) = 0;
                pppppppuVar48 = (undefined *******)((long)pppppppuVar48 + 1);
              } while (pppppppuVar51 != pppppppuVar48);
              plVar27 = (long *)puVar50[5];
              pppppppuVar48 = pppppppuVar51;
              if (plVar27 != (long *)0x0) {
                pppppppuVar26 = (undefined *******)plVar27[1];
                pcVar21 = (char *)((long)pppppppuVar51 + -1);
                if (((ulong)pppppppuVar51 & (ulong)pcVar21) == 0) {
                  pppppppuVar26 = (undefined *******)((ulong)pppppppuVar26 & (ulong)pcVar21);
                }
                else if (pppppppuVar51 <= pppppppuVar26) {
                  uVar44 = 0;
                  if (pppppppuVar51 != (undefined *******)0x0) {
                    uVar44 = (ulong)pppppppuVar26 / (ulong)pppppppuVar51;
                  }
                  pppppppuVar26 =
                       (undefined *******)((long)pppppppuVar26 - uVar44 * (long)pppppppuVar51);
                }
                *(undefined8 **)(puVar50[3] + (long)pppppppuVar26 * 8) = puVar50 + 5;
                plVar31 = (long *)*plVar27;
                while (plVar31 != (long *)0x0) {
                  pppppppuVar34 = (undefined *******)plVar31[1];
                  if (((ulong)pppppppuVar51 & (ulong)pcVar21) == 0) {
                    pppppppuVar34 = (undefined *******)((ulong)pppppppuVar34 & (ulong)pcVar21);
                  }
                  else if (pppppppuVar51 <= pppppppuVar34) {
                    uVar44 = 0;
                    if (pppppppuVar51 != (undefined *******)0x0) {
                      uVar44 = (ulong)pppppppuVar34 / (ulong)pppppppuVar51;
                    }
                    pppppppuVar34 =
                         (undefined *******)((long)pppppppuVar34 - uVar44 * (long)pppppppuVar51);
                  }
                  plVar32 = plVar31;
                  if (pppppppuVar34 != pppppppuVar26) {
                    lVar19 = puVar50[3];
                    if (*(long *)(lVar19 + (long)pppppppuVar34 * 8) == 0) {
                      *(long **)(lVar19 + (long)pppppppuVar34 * 8) = plVar27;
                      pppppppuVar26 = pppppppuVar34;
                    }
                    else {
                      *plVar27 = *plVar31;
                      *plVar31 = **(undefined8 **)(lVar19 + (long)pppppppuVar34 * 8);
                      **(long **)(lVar19 + (long)pppppppuVar34 * 8) = (long)plVar31;
                      plVar32 = plVar27;
                    }
                  }
                  plVar27 = plVar32;
                  plVar31 = (long *)*plVar32;
                }
              }
            }
            else if (pppppppuVar51 < pppppppuVar48) {
              pppppppuVar26 =
                   (undefined *******)(long)((float)(ulong)puVar50[6] / *(float *)(puVar50 + 7));
              if ((pppppppuVar48 < (undefined *******)0x3) ||
                 (((ulong)pppppppuVar48 & (ulong)((long)pppppppuVar48 + -1)) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((undefined *******)0x1 < pppppppuVar26) {
                pppppppuVar26 =
                     (undefined *******)
                     (1L << (-LZCOUNT((char *)((long)pppppppuVar26 + -1)) & 0x3fU));
              }
              if (pppppppuVar51 <= pppppppuVar26) {
                pppppppuVar51 = pppppppuVar26;
              }
              if (pppppppuVar51 < pppppppuVar48) {
                if (pppppppuVar51 != (undefined *******)0x0) goto LAB_10a010d60;
                lVar19 = puVar50[3];
                puVar50[3] = 0;
                if (lVar19 != 0) {
                  __ZdlPv();
                }
                puVar50[4] = 0;
                pppppppuVar48 = (undefined *******)0x0;
              }
              else {
                pppppppuVar48 = (undefined *******)puVar50[4];
              }
            }
            if (((ulong)pppppppuVar48 & (ulong)((long)pppppppuVar48 + -1)) == 0) {
              pppppppuVar51 =
                   (undefined *******)((ulong)((long)pppppppuVar48 + -1) & (ulong)pppppppuVar14);
            }
            else {
              pppppppuVar51 = pppppppuVar14;
              if (pppppppuVar48 <= pppppppuVar14) {
                uVar44 = 0;
                if (pppppppuVar48 != (undefined *******)0x0) {
                  uVar44 = (ulong)pppppppuVar14 / (ulong)pppppppuVar48;
                }
                pppppppuVar51 =
                     (undefined *******)((long)pppppppuVar14 - uVar44 * (long)pppppppuVar48);
              }
            }
          }
          lVar19 = puVar50[3];
          plVar27 = *(long **)(lVar19 + (long)pppppppuVar51 * 8);
          if (plVar27 == (long *)0x0) {
            plVar27 = puVar50 + 5;
            *plVar42 = *plVar27;
            *plVar27 = (long)plVar42;
            *(long **)(lVar19 + (long)pppppppuVar51 * 8) = plVar27;
            if (*plVar42 != 0) {
              pppppppuVar51 = *(undefined ********)(*plVar42 + 8);
              if (((ulong)pppppppuVar48 & (ulong)((long)pppppppuVar48 + -1)) == 0) {
                pppppppuVar51 =
                     (undefined *******)((ulong)pppppppuVar51 & (ulong)((long)pppppppuVar48 + -1));
              }
              else if (pppppppuVar48 <= pppppppuVar51) {
                uVar44 = 0;
                if (pppppppuVar48 != (undefined *******)0x0) {
                  uVar44 = (ulong)pppppppuVar51 / (ulong)pppppppuVar48;
                }
                pppppppuVar51 =
                     (undefined *******)((long)pppppppuVar51 - uVar44 * (long)pppppppuVar48);
              }
              plVar27 = (long *)(puVar50[3] + (long)pppppppuVar51 * 8);
              goto LAB_10a010f44;
            }
          }
          else {
            *plVar42 = *plVar27;
LAB_10a010f44:
            *plVar27 = (long)plVar42;
          }
          puVar50[6] = puVar50[6] + 1;
LAB_10a010f54:
          ppppppuVar40 = (undefined ******)plVar42[4];
          if ((ppppppuVar40 == (undefined ******)0x0) ||
             (__ZNSt3__119__shared_weak_count4lockEv(), ppppppuVar40 == (undefined ******)0x0)) {
            ppppppuStack_c8 = (undefined ******)0x0;
          }
          else {
            ppppppuStack_c8 = (undefined ******)plVar42[3];
          }
          pppppuStack_c0 = (undefined *****)ppppppuVar40;
          if ((undefined *******)ppppppuVar29 != (undefined *******)0x0) {
            pppppppuVar51 = (undefined *******)(ppppppuVar29 + 1);
            do {
              ppppppuVar40 = *pppppppuVar51;
              cVar7 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar51,0x10);
              if (bVar9) {
                *pppppppuVar51 = (undefined ******)((long)ppppppuVar40 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (ppppppuVar40 == (undefined ******)0x0) {
              (*(code *)(*ppppppuVar29)[2])(ppppppuVar29);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar29);
            }
          }
          lVar19 = *(long *)(lVar46 + 0x10);
          if ((*(int *)(lVar19 + 0x16c) == iVar12) &&
             (bVar8 || ((*(byte *)(lVar19 + 0x170) ^ 0xff) & 1) != 0)) {
            ppppppuVar40 = *(undefined *******)(lVar19 + 0x178);
            ppppppuVar29 = (undefined ******)(*(long *)(lVar19 + 0x180) - (long)ppppppuVar40);
          }
          else {
            ppppppuVar29 = (undefined ******)0x0;
            ppppppuVar40 = (undefined ******)0x0;
          }
          ppppppuVar36 = (undefined ******)*ppppppuStack_c8;
          ppppppuVar35 = *(undefined *******)(lVar46 + 0x18);
          uVar5 = *(undefined4 *)(lVar46 + 0x20);
          ppppppuVar55 = *(undefined *******)(lVar19 + 0x28);
          ppppppuVar33 = *(undefined *******)(lVar46 + 0x30);
          uVar30 = *(uint *)(lVar46 + 0x38);
          pppppppuVar51 = (undefined *******)(ulong)uVar30;
          uVar4 = *(undefined4 *)(lVar46 + 0x3c);
          uVar6 = *(undefined4 *)(lVar46 + 0x40);
          ppppppuVar52 = *(undefined *******)(lVar19 + 0x10);
          if (pppppppuVar17 < ppppppuStack_2b0) {
            *pppppppuVar17 = ppppppuVar36;
            pppppppuVar17[1] = ppppppuVar40;
            pppppppuVar17[2] = ppppppuVar29;
            pppppppuVar17[3] = ppppppuVar35;
            pppppppuVar17[4] = (undefined ******)0x0;
            *(undefined4 *)((long)pppppppuVar17 + 0x2c) = 0;
            *(undefined4 *)(pppppppuVar17 + 6) = 0;
            *(undefined4 *)(pppppppuVar17 + 5) = uVar5;
            pppppppuVar17[7] = ppppppuVar55;
            pppppppuVar17[8] = ppppppuVar33;
            pppppppuVar17[9] = (undefined ******)0x0;
            *(uint *)(pppppppuVar17 + 10) = uVar30;
            *(undefined4 *)((long)pppppppuVar17 + 0x54) = uVar4;
            *(undefined4 *)(pppppppuVar17 + 0xb) = uVar6;
            pppppppuVar17[0xc] = ppppppuVar52;
            *(undefined4 *)(pppppppuVar17 + 0xd) = uVar18;
            pppppppuVar14 = (undefined *******)ppppppuStack_290;
          }
          else {
            pppppppuVar48 =
                 (undefined *******)
                 (((long)pppppppuVar17 - (long)ppppppuStack_290 >> 4) * 0x6db6db6db6db6db7 + 1);
            if ((undefined *******)0x249249249249249 < pppppppuVar48) {
              FUN_10a043a98();
              goto LAB_10a012a78;
            }
            lVar19 = (long)ppppppuStack_2b0 - (long)ppppppuStack_290 >> 4;
            pppppppuVar14 = (undefined *******)(lVar19 * -0x2492492492492492);
            if (pppppppuVar14 < pppppppuVar48 || (long)pppppppuVar14 - (long)pppppppuVar48 == 0) {
              pppppppuVar14 = pppppppuVar48;
            }
            if (0x124924924924923 < (ulong)(lVar19 * 0x6db6db6db6db6db7)) {
              pppppppuVar14 = (undefined *******)0x249249249249249;
            }
            FUN_10a043aac();
            pppppppuVar17 =
                 (undefined *******)
                 ((long)pppppppuVar14 + ((long)pppppppuVar17 - (long)ppppppuStack_290));
            *pppppppuVar17 = ppppppuVar36;
            pppppppuVar17[1] = ppppppuVar40;
            ppppppuStack_2b0 = (undefined ******)(pppppppuVar14 + (long)pppppppuVar54 * 0xe);
            pppppppuVar17[2] = ppppppuVar29;
            pppppppuVar17[3] = ppppppuVar35;
            pppppppuVar17[4] = (undefined ******)0x0;
            *(undefined4 *)((long)pppppppuVar17 + 0x2c) = 0;
            *(undefined4 *)(pppppppuVar17 + 6) = 0;
            *(undefined4 *)(pppppppuVar17 + 5) = uVar5;
            pppppppuVar17[7] = ppppppuVar55;
            pppppppuVar17[8] = ppppppuVar33;
            pppppppuVar17[9] = (undefined ******)0x0;
            *(uint *)(pppppppuVar17 + 10) = uVar30;
            *(undefined4 *)((long)pppppppuVar17 + 0x54) = uVar4;
            *(undefined4 *)(pppppppuVar17 + 0xb) = uVar6;
            pppppppuVar17[0xc] = ppppppuVar52;
            *(undefined4 *)(pppppppuVar17 + 0xd) = uVar18;
            pppppppuVar54 = (undefined *******)ppppppuStack_290;
            _memcpy();
            if ((undefined *******)ppppppuStack_290 != (undefined *******)0x0) {
              __ZdlPv(ppppppuStack_290);
            }
          }
          ppppppuVar29 = ppppppuStack_78;
          ppppppuVar40 = (undefined ******)pppppuStack_c0;
          pppppppuVar48 = (undefined *******)ppppppuStack_c8;
          pppppppuVar17 = pppppppuVar17 + 0xe;
          if (ppppppuStack_78 < ppppppuStack_70) {
            FUN_10a043f58(ppppppuStack_78,ppppppuStack_c8,pppppuStack_c0,plVar38,pppppppuVar41);
            pppppppuVar41 = (undefined *******)(ppppppuVar29 + 6);
          }
          else {
            lVar19 = (long)ppppppuStack_78 - (long)ppppppuStack_80;
            ppppppuVar40 = (undefined ******)((lVar19 >> 4) * -0x5555555555555555 + 1);
            if ((undefined ******)0x555555555555555 < ppppppuVar40) {
              FUN_10a043af4();
              goto LAB_10a012a78;
            }
            lVar23 = (long)ppppppuStack_70 - (long)ppppppuStack_80 >> 4;
            ppppppuVar29 = (undefined ******)(lVar23 * 0x5555555555555556);
            if (ppppppuVar29 < ppppppuVar40 || (long)ppppppuVar29 - (long)ppppppuVar40 == 0) {
              ppppppuVar29 = ppppppuVar40;
            }
            if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar23 * -0x5555555555555555)) {
              ppppppuVar29 = (undefined ******)0x555555555555555;
            }
            appppppuStack_1e0[0] = (undefined ******)&ppppppuStack_80;
            if (ppppppuVar29 == (undefined ******)0x0) {
              ppppppuVar29 = (undefined ******)0x0;
              pppppppuVar54 = (undefined *******)0x0;
            }
            else {
              FUN_10a043b08();
            }
            ppppppuVar40 = (undefined ******)pppppuStack_c0;
            ppppppuVar33 = (undefined ******)((long)ppppppuVar29 + lVar19);
            pppppppuVar51 = (undefined *******)(ppppppuVar29 + (long)pppppppuVar54 * 6);
            ppppppuStack_200 = ppppppuVar29;
            ppppppuStack_1f8 = ppppppuVar33;
            ppppppuStack_1f0 = ppppppuVar33;
            ppppppuStack_1e8 = (undefined ******)pppppppuVar51;
            FUN_10a043f58(ppppppuVar33,ppppppuStack_c8,pppppuStack_c0,plVar38,pppppppuVar41);
            pppppppuVar41 = (undefined *******)(ppppppuVar33 + 6);
            pppppppuVar48 =
                 (undefined *******)
                 ((long)ppppppuVar33 - ((long)ppppppuStack_78 - (long)ppppppuStack_80));
            _memcpy(pppppppuVar48);
            ppppppuStack_1f0 = ppppppuStack_80;
            ppppppuStack_1e8 = ppppppuStack_70;
            ppppppuStack_200 = ppppppuStack_80;
            ppppppuStack_1f8 = ppppppuStack_80;
            ppppppuStack_80 = (undefined ******)pppppppuVar48;
            ppppppuStack_78 = (undefined ******)pppppppuVar41;
            ppppppuStack_70 = (undefined ******)pppppppuVar51;
            func_0x00010a043b4c(&ppppppuStack_200);
            pppppppuVar48 = (undefined *******)ppppppuStack_c8;
          }
          pppppppuVar26 = (undefined *******)*plVar38;
          pppppppuVar54 = *(undefined ********)(param_1 + 0xa8);
          ppppppuStack_78 = (undefined ******)pppppppuVar41;
          if (pppppppuVar54 != (undefined *******)0x0) {
            uVar44 = (long)pppppppuVar54 - 1;
            if (((ulong)pppppppuVar54 & uVar44) == 0) {
              pppppppuVar51 = (undefined *******)(uVar44 & (ulong)pppppppuVar26);
            }
            else {
              pppppppuVar51 = pppppppuVar26;
              if (pppppppuVar54 <= pppppppuVar26) {
                uVar10 = 0;
                if (pppppppuVar54 != (undefined *******)0x0) {
                  uVar10 = (ulong)pppppppuVar26 / (ulong)pppppppuVar54;
                }
                pppppppuVar51 =
                     (undefined *******)((long)pppppppuVar26 - uVar10 * (long)pppppppuVar54);
              }
            }
            pppppuVar28 = (*pppppppuVar1)[(long)pppppppuVar51];
            if (pppppuVar28 != (undefined *****)0x0) {
              do {
                while( true ) {
                  pppppuVar28 = (undefined *****)*pppppuVar28;
                  if (pppppuVar28 == (undefined *****)0x0) goto LAB_10a011300;
                  pppppppuVar41 = (undefined *******)pppppuVar28[1];
                  if (pppppppuVar41 != pppppppuVar26) break;
                  if ((undefined *******)pppppuVar28[2] == pppppppuVar26) goto LAB_10a0115c8;
                }
                if (((ulong)pppppppuVar54 & uVar44) == 0) {
                  pppppppuVar41 = (undefined *******)((ulong)pppppppuVar41 & uVar44);
                }
                else if (pppppppuVar54 <= pppppppuVar41) {
                  uVar10 = 0;
                  if (pppppppuVar54 != (undefined *******)0x0) {
                    uVar10 = (ulong)pppppppuVar41 / (ulong)pppppppuVar54;
                  }
                  pppppppuVar41 =
                       (undefined *******)((long)pppppppuVar41 - uVar10 * (long)pppppppuVar54);
                }
              } while (pppppppuVar41 == pppppppuVar51);
            }
          }
LAB_10a011300:
          pppppppuVar41 = (undefined *******)0x28;
          __Znwm();
          ppppppuStack_1f0 = (undefined ******)0x1;
          *pppppppuVar41 = (undefined ******)0x0;
          pppppppuVar41[1] = (undefined ******)pppppppuVar26;
          pppppppuVar41[2] = (undefined ******)pppppppuVar26;
          pppppppuVar41[3] = (undefined ******)pppppppuVar48;
          pppppppuVar41[4] = ppppppuVar40;
          if (ppppppuVar40 != (undefined ******)0x0) {
            ppppppuVar29 = ppppppuVar40 + 1;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppuVar29,0x10);
              if (bVar8) {
                *ppppppuVar29 = (undefined *****)((long)*ppppppuVar29 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          ppppppuStack_200 = (undefined ******)pppppppuVar41;
          ppppppuStack_1f8 = (undefined ******)pppppppuVar1;
          if ((pppppppuVar54 == (undefined *******)0x0) ||
             (*(float *)(param_1 + 0xc0) * (float)pppppppuVar54 <
              (float)(*(long *)(param_1 + 0xb8) + 1))) {
            uVar44 = 1;
            if ((undefined *******)0x2 < pppppppuVar54) {
              uVar44 = (ulong)(((ulong)pppppppuVar54 & (long)pppppppuVar54 - 1U) != 0);
            }
            pppppppuVar51 = (undefined *******)(uVar44 | (long)pppppppuVar54 << 1);
            pppppppuVar48 =
                 (undefined *******)
                 (long)((float)(*(long *)(param_1 + 0xb8) + 1) / *(float *)(param_1 + 0xc0));
            if (pppppppuVar51 <= pppppppuVar48) {
              pppppppuVar51 = pppppppuVar48;
            }
            if ((long)pppppppuVar51 - 1U == 0) {
              pppppppuVar51 = (undefined *******)0x2;
            }
            else if (((ulong)pppppppuVar51 & (long)pppppppuVar51 - 1U) != 0) {
              __ZNSt3__112__next_primeEm();
            }
            pppppppuVar54 = *(undefined ********)(param_1 + 0xa8);
            if (pppppppuVar54 < pppppppuVar51) {
LAB_10a0113cc:
              if ((ulong)pppppppuVar51 >> 0x3d != 0) {
                func_0x000109ffded8();
                goto LAB_10a012a78;
              }
              ppppppuVar29 = (undefined ******)((long)pppppppuVar51 << 3);
              __Znwm();
              ppppppuVar33 = *pppppppuVar1;
              *pppppppuVar1 = ppppppuVar29;
              if (ppppppuVar33 != (undefined ******)0x0) {
                __ZdlPv();
              }
              pppppppuVar48 = (undefined *******)0x0;
              *(undefined ********)(param_1 + 0xa8) = pppppppuVar51;
              do {
                (*pppppppuVar1)[(long)pppppppuVar48] = (undefined *****)0x0;
                pppppppuVar48 = (undefined *******)((long)pppppppuVar48 + 1);
              } while (pppppppuVar51 != pppppppuVar48);
              ppppppuVar29 = *pppppppuVar39;
              pppppppuVar54 = pppppppuVar51;
              if (ppppppuVar29 != (undefined ******)0x0) {
                pppppppuVar48 = (undefined *******)ppppppuVar29[1];
                uVar44 = (long)pppppppuVar51 - 1;
                if (((ulong)pppppppuVar51 & uVar44) == 0) {
                  pppppppuVar48 = (undefined *******)((ulong)pppppppuVar48 & uVar44);
                }
                else if (pppppppuVar51 <= pppppppuVar48) {
                  uVar10 = 0;
                  if (pppppppuVar51 != (undefined *******)0x0) {
                    uVar10 = (ulong)pppppppuVar48 / (ulong)pppppppuVar51;
                  }
                  pppppppuVar48 =
                       (undefined *******)((long)pppppppuVar48 - uVar10 * (long)pppppppuVar51);
                }
                (*pppppppuVar1)[(long)pppppppuVar48] = (undefined *****)pppppppuVar39;
                ppppppuVar33 = (undefined ******)*ppppppuVar29;
                while (ppppppuVar33 != (undefined ******)0x0) {
                  pppppppuVar34 = (undefined *******)ppppppuVar33[1];
                  if (((ulong)pppppppuVar51 & uVar44) == 0) {
                    pppppppuVar34 = (undefined *******)((ulong)pppppppuVar34 & uVar44);
                  }
                  else if (pppppppuVar51 <= pppppppuVar34) {
                    uVar10 = 0;
                    if (pppppppuVar51 != (undefined *******)0x0) {
                      uVar10 = (ulong)pppppppuVar34 / (ulong)pppppppuVar51;
                    }
                    pppppppuVar34 =
                         (undefined *******)((long)pppppppuVar34 - uVar10 * (long)pppppppuVar51);
                  }
                  ppppppuVar35 = ppppppuVar33;
                  if (pppppppuVar34 != pppppppuVar48) {
                    ppppppuVar36 = *pppppppuVar1;
                    if (ppppppuVar36[(long)pppppppuVar34] == (undefined *****)0x0) {
                      ppppppuVar36[(long)pppppppuVar34] = (undefined *****)ppppppuVar29;
                      pppppppuVar48 = pppppppuVar34;
                    }
                    else {
                      *ppppppuVar29 = *ppppppuVar33;
                      *ppppppuVar33 = (undefined *****)*ppppppuVar36[(long)pppppppuVar34];
                      *ppppppuVar36[(long)pppppppuVar34] = (undefined ****)ppppppuVar33;
                      ppppppuVar35 = ppppppuVar29;
                    }
                  }
                  ppppppuVar29 = ppppppuVar35;
                  ppppppuVar33 = (undefined ******)*ppppppuVar35;
                }
              }
            }
            else if (pppppppuVar51 < pppppppuVar54) {
              pppppppuVar48 =
                   (undefined *******)
                   (long)((float)*(ulong *)(param_1 + 0xb8) / *(float *)(param_1 + 0xc0));
              if ((pppppppuVar54 < (undefined *******)0x3) ||
                 (((ulong)pppppppuVar54 & (long)pppppppuVar54 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((undefined *******)0x1 < pppppppuVar48) {
                pppppppuVar48 =
                     (undefined *******)(1L << (-LZCOUNT((long)pppppppuVar48 + -1) & 0x3fU));
              }
              if (pppppppuVar51 <= pppppppuVar48) {
                pppppppuVar51 = pppppppuVar48;
              }
              if (pppppppuVar51 < pppppppuVar54) {
                if (pppppppuVar51 != (undefined *******)0x0) goto LAB_10a0113cc;
                ppppppuVar29 = *pppppppuVar1;
                *pppppppuVar1 = (undefined ******)0x0;
                if (ppppppuVar29 != (undefined ******)0x0) {
                  __ZdlPv();
                }
                param_1[0xa8] = '\0';
                param_1[0xa9] = '\0';
                param_1[0xaa] = '\0';
                param_1[0xab] = '\0';
                param_1[0xac] = '\0';
                param_1[0xad] = '\0';
                param_1[0xae] = '\0';
                param_1[0xaf] = '\0';
                pppppppuVar54 = (undefined *******)0x0;
              }
              else {
                pppppppuVar54 = *(undefined ********)(param_1 + 0xa8);
              }
            }
            if (((ulong)pppppppuVar54 & (long)pppppppuVar54 - 1U) == 0) {
              pppppppuVar51 = (undefined *******)((long)pppppppuVar54 - 1U & (ulong)pppppppuVar26);
            }
            else {
              pppppppuVar51 = pppppppuVar26;
              if (pppppppuVar54 <= pppppppuVar26) {
                uVar44 = 0;
                if (pppppppuVar54 != (undefined *******)0x0) {
                  uVar44 = (ulong)pppppppuVar26 / (ulong)pppppppuVar54;
                }
                pppppppuVar51 =
                     (undefined *******)((long)pppppppuVar26 - uVar44 * (long)pppppppuVar54);
              }
            }
          }
          ppppppuVar33 = *pppppppuVar1;
          ppppppuVar29 = (undefined ******)ppppppuVar33[(long)pppppppuVar51];
          if (ppppppuVar29 == (undefined ******)0x0) {
            *pppppppuVar41 = *pppppppuVar39;
            *pppppppuVar39 = (undefined ******)pppppppuVar41;
            ppppppuVar33[(long)pppppppuVar51] = (undefined *****)pppppppuVar39;
            if (*pppppppuVar41 != (undefined ******)0x0) {
              pppppppuVar51 = (undefined *******)(*pppppppuVar41)[1];
              if (((ulong)pppppppuVar54 & (long)pppppppuVar54 - 1U) == 0) {
                pppppppuVar51 = (undefined *******)((ulong)pppppppuVar51 & (long)pppppppuVar54 - 1U)
                ;
              }
              else if (pppppppuVar54 <= pppppppuVar51) {
                uVar44 = 0;
                if (pppppppuVar54 != (undefined *******)0x0) {
                  uVar44 = (ulong)pppppppuVar51 / (ulong)pppppppuVar54;
                }
                pppppppuVar51 =
                     (undefined *******)((long)pppppppuVar51 - uVar44 * (long)pppppppuVar54);
              }
              ppppppuVar29 = *pppppppuVar1 + (long)pppppppuVar51;
              goto LAB_10a0115b8;
            }
          }
          else {
            *pppppppuVar41 = (undefined ******)*ppppppuVar29;
LAB_10a0115b8:
            *ppppppuVar29 = (undefined *****)pppppppuVar41;
          }
          *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
LAB_10a0115c8:
          ppppppuStack_290 = (undefined ******)pppppppuVar14;
          if (ppppppuVar40 != (undefined ******)0x0) {
            ppppppuVar29 = ppppppuVar40 + 1;
            do {
              pppppuVar28 = *ppppppuVar29;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppuVar29,0x10);
              if (bVar8) {
                *ppppppuVar29 = (undefined *****)((long)pppppuVar28 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (pppppuVar28 == (undefined *****)0x0) {
              (*(code *)(*ppppppuVar40)[2])(ppppppuVar40);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar40);
            }
          }
        }
        uVar53 = uVar53 + 1;
        lVar16 = lVar16 + -1;
        uStack_270 = uStack_270 - 1;
        lStack_278 = lStack_278 + 0xd0;
      } while (uVar53 != uVar43);
      puVar49 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20;
      if ((undefined *******)ppppppuStack_290 != pppppppuVar17) {
        FUN_10a2421c8();
        FUN_10a244d68();
        ppppppuStack_200 = (undefined ******)&UNK_10f631816;
        ppppppuStack_1f8 = (undefined ******)0x14;
        if (param_3 == (long *)0x0) goto LAB_10a012a70;
        plVar42 = param_3;
        (**(code **)(*param_3 + 0xe0))(param_3);
        (**(code **)(*param_3 + 0xe8))();
        plVar38 = (long *)*param_3;
        lVar16 = param_3[1];
        __ZNSt3__115recursive_mutex4lockEv(lVar16);
        FUN_10a012fec(&ppppppuStack_90,plVar42,plVar38);
        pppppppuVar41 = (undefined *******)ppppppuStack_90;
        ___dynamic_cast(ppppppuStack_90,&PTR_DAT_110ae2620,&PTR_DAT_110b98940,0);
        uVar53 = ((long)pppppppuVar17 - (long)ppppppuStack_290 >> 4) * 0x6db6db6db6db6db7;
        func_0x000109a03bf4(**(undefined8 **)(*(long *)(param_1 + 0x18) + 0x10),pppppppuVar41[0x1e],
                            ppppppuStack_290,uVar53,0,FUN_10a044030,*(undefined8 *)(param_1 + 0x28))
        ;
        uVar45 = 0;
        pppppppuVar17 =
             (undefined *******)
             (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
        do {
          uVar44 = ((long)ppppppuStack_78 - (long)ppppppuStack_80 >> 4) * -0x5555555555555555;
          if (uVar44 < uVar45 || uVar44 - uVar45 == 0) goto LAB_10a012a78;
          pppppppuVar41 = (undefined *******)(ppppppuStack_80 + uVar45 * 6);
          uVar30 = *(uint *)(ppppppuStack_290 + uVar45 * 0xe + 0xd);
          if ((uVar30 >> 3 & 1) == 0) {
            if ((*(uint *)(***pppppppuVar41)[3] >> 1 & 1) == 0) {
              __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                        (&ppppppuStack_c8,&UNK_10f63187f,pppppppuVar41 + 3);
              pppppppuVar51 = &ppppppuStack_c8;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (pppppppuVar51,&UNK_10f6318a0,7);
              ppppppuStack_b0 = *pppppppuVar51;
              ppppppuStack_a8 = pppppppuVar51[1];
              pppppuStack_a0 = (undefined *****)pppppppuVar51[2];
              pppppppuVar51[1] = (undefined ******)0x0;
              pppppppuVar51[2] = (undefined ******)0x0;
              *pppppppuVar51 = (undefined ******)0x0;
              __ZNSt3__19to_stringEj
                        (&pppppuStack_e0,(ulong)*(uint *)(ppppppuStack_290 + uVar45 * 0xe + 5) / 3);
              uVar44 = uStack_d8;
              ppppppuVar11 = (undefined8 ******)pppppuStack_e0;
              if (-1 < (char)bStack_c9) {
                uVar44 = (ulong)bStack_c9;
                ppppppuVar11 = &pppppuStack_e0;
              }
              pppppppuVar51 = &ppppppuStack_b0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (pppppppuVar51,ppppppuVar11,uVar44);
              ppppppuStack_260 = *pppppppuVar51;
              ppppppuStack_258 = pppppppuVar51[1];
              pppppuStack_250 = (undefined *****)pppppppuVar51[2];
              pppppppuVar51[1] = (undefined ******)0x0;
              pppppppuVar51[2] = (undefined ******)0x0;
              *pppppppuVar51 = (undefined ******)0x0;
              pppppppuVar51 = &ppppppuStack_260;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (pppppppuVar51,&UNK_10f6318a8,10);
              ppppppuStack_1f0 = pppppppuVar51[2];
              ppppppuStack_200 = *pppppppuVar51;
              ppppppuStack_1f8 = pppppppuVar51[1];
              pppppppuVar51[1] = (undefined ******)0x0;
              pppppppuVar51[2] = (undefined ******)0x0;
              *pppppppuVar51 = (undefined ******)0x0;
              ppppppuVar29 = ppppppuStack_1f0;
              ppppppuVar40 = ppppppuStack_200;
              pppppppuVar51 = (undefined *******)ppppppuStack_1f8;
              pppppppuVar48 = (undefined *******)ppppppuStack_200;
              if (-1 < (long)ppppppuStack_1f0) {
                pppppppuVar51 = (undefined *******)((ulong)ppppppuStack_1f0 >> 0x38);
                pppppppuVar48 = &ppppppuStack_200;
              }
              FUN_10a00edf0(param_2 + 0x10,1,pppppppuVar48,pppppppuVar51,param_2 + 8);
              if ((long)ppppppuVar29 < 0) {
                __ZdlPv(ppppppuVar40);
              }
              if ((long)pppppuStack_250 < 0) {
                __ZdlPv(ppppppuStack_260);
              }
              pppppppuVar51 = pppppppuVar1;
              func_0x00010a063a2c(pppppppuVar1,pppppppuVar41[2]);
              ppppppuVar40 = pppppppuVar51[4];
              pppppppuVar51[3] = (undefined ******)0x0;
              pppppppuVar51[4] = (undefined ******)0x0;
              if (ppppppuVar40 != (undefined ******)0x0) {
                ppppppuVar29 = ppppppuVar40 + 1;
                do {
                  pppppuVar28 = *ppppppuVar29;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(ppppppuVar29,0x10);
                  if (bVar8) {
                    *ppppppuVar29 = (undefined *****)((long)pppppuVar28 + -1);
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (pppppuVar28 == (undefined *****)0x0) {
                  (*(code *)(*ppppppuVar40)[2])(ppppppuVar40);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar40);
                }
              }
            }
            else {
LAB_10a011a50:
              if (*param_1 == '\x01') {
                FUN_109febc44(&ppppppuStack_200);
                pppppppuVar41 = &ppppppuStack_1f0;
                FUN_10a002568(pppppppuVar41,&UNK_10f6318b3,6);
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
                FUN_10a002568();
                *(uint *)((long)pppppppuVar41 + (long)((*pppppppuVar41)[-3] + 1)) =
                     *(uint *)((long)pppppppuVar41 + (long)((*pppppppuVar41)[-3] + 1)) & 0xffffffb5
                     | 8;
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv();
                FUN_10a002568();
                FUN_10a002568();
                FUN_10a002568();
                if ((uVar30 >> 3 & 1) != 0) {
                  FUN_10a002568(&ppppppuStack_1f0,&UNK_10f6318d0,7);
                }
                func_0x00010a002480(&ppppppuStack_260,&ppppppuStack_1e8,&ppppppuStack_b0);
                pppppppuVar41 = (undefined *******)ppppppuStack_258;
                pppppppuVar51 = (undefined *******)ppppppuStack_260;
                if (-1 < (long)pppppuStack_250) {
                  pppppppuVar41 = (undefined *******)((ulong)pppppuStack_250 >> 0x38);
                  pppppppuVar51 = &ppppppuStack_260;
                }
                FUN_10a00edf0(param_2 + 0x10,4,pppppppuVar51,pppppppuVar41,param_2 + 8);
                if ((long)pppppuStack_250 < 0) {
                  __ZdlPv(ppppppuStack_260);
                }
                ppppppuStack_200 = (undefined ******)&PTR_SUB_1108a5a38;
                appuStack_180[0] = &PTR_DAT_1108a5a88;
                ppppppuStack_1f0 = (undefined ******)&PTR_DAT_1108a5a60;
                ppppppuStack_1e8 = (undefined ******)&PTR_DAT_11088d7b0;
                if (cStack_191 < '\0') {
                  __ZdlPv(uStack_1a8);
                }
                ppppppuStack_1e8 = (undefined ******)pppppppuVar17;
                __ZNSt3__16localeD1Ev(appppppuStack_1e0);
                __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev
                          (&ppppppuStack_200,&PTR_PTR_1108a5aa0);
                __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_180);
              }
            }
          }
          else {
            if ((*(uint *)(***pppppppuVar41)[3] & 1) != 0) goto LAB_10a011a50;
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (&ppppppuStack_260,&UNK_10f63182b,pppppppuVar41 + 3);
            pppppppuVar51 = &ppppppuStack_260;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppppuVar51,&UNK_10f631848,0x36);
            ppppppuStack_1f0 = pppppppuVar51[2];
            ppppppuStack_200 = *pppppppuVar51;
            ppppppuStack_1f8 = pppppppuVar51[1];
            pppppppuVar51[1] = (undefined ******)0x0;
            pppppppuVar51[2] = (undefined ******)0x0;
            *pppppppuVar51 = (undefined ******)0x0;
            ppppppuVar29 = ppppppuStack_1f0;
            ppppppuVar40 = ppppppuStack_200;
            pppppppuVar51 = (undefined *******)ppppppuStack_1f8;
            pppppppuVar48 = (undefined *******)ppppppuStack_200;
            if (-1 < (long)ppppppuStack_1f0) {
              pppppppuVar51 = (undefined *******)((ulong)ppppppuStack_1f0 >> 0x38);
              pppppppuVar48 = &ppppppuStack_200;
            }
            FUN_10a00edf0(param_2 + 0x10,2,pppppppuVar48,pppppppuVar51,param_2 + 8);
            if ((long)ppppppuVar29 < 0) {
              __ZdlPv(ppppppuVar40);
            }
            if ((long)pppppuStack_250 < 0) {
              __ZdlPv(ppppppuStack_260);
            }
            pppppppuVar51 = pppppppuVar1;
            func_0x00010a063a2c(pppppppuVar1,pppppppuVar41[2]);
            if (pppppppuVar51 == (undefined *******)0x0) goto LAB_10a011ccc;
            ppppppuVar29 = *(undefined *******)(param_1 + 0xa8);
            ppppppuVar40 = pppppppuVar51[1];
            uVar44 = (long)ppppppuVar29 - 1;
            if (((ulong)ppppppuVar29 & uVar44) == 0) {
              ppppppuVar40 = (undefined ******)(uVar44 & (ulong)ppppppuVar40);
            }
            else if (ppppppuVar29 <= ppppppuVar40) {
              uVar10 = 0;
              if (ppppppuVar29 != (undefined ******)0x0) {
                uVar10 = (ulong)ppppppuVar40 / (ulong)ppppppuVar29;
              }
              ppppppuVar40 = (undefined ******)((long)ppppppuVar40 - uVar10 * (long)ppppppuVar29);
            }
            ppppppuVar33 = *pppppppuVar51;
            pppppppuVar41 = (undefined *******)(*pppppppuVar1)[(long)ppppppuVar40];
            do {
              pppppppuVar48 = pppppppuVar41;
              pppppppuVar41 = (undefined *******)*pppppppuVar48;
            } while ((undefined *******)*pppppppuVar48 != pppppppuVar51);
            if (pppppppuVar48 == pppppppuVar39) {
LAB_10a011c28:
              if (ppppppuVar33 == (undefined ******)0x0) {
LAB_10a011c5c:
                (*pppppppuVar1)[(long)ppppppuVar40] = (undefined *****)0x0;
                ppppppuVar33 = *pppppppuVar51;
                goto LAB_10a011c64;
              }
              ppppppuVar35 = (undefined ******)ppppppuVar33[1];
              if (((ulong)ppppppuVar29 & uVar44) == 0) {
                ppppppuVar36 = (undefined ******)((ulong)ppppppuVar35 & uVar44);
              }
              else {
                ppppppuVar36 = ppppppuVar35;
                if (ppppppuVar29 <= ppppppuVar35) {
                  uVar10 = 0;
                  if (ppppppuVar29 != (undefined ******)0x0) {
                    uVar10 = (ulong)ppppppuVar35 / (ulong)ppppppuVar29;
                  }
                  ppppppuVar36 = (undefined ******)
                                 ((long)ppppppuVar35 - uVar10 * (long)ppppppuVar29);
                }
              }
              if (ppppppuVar36 != ppppppuVar40) goto LAB_10a011c5c;
LAB_10a011c6c:
              if (((ulong)ppppppuVar29 & uVar44) == 0) {
                ppppppuVar35 = (undefined ******)((ulong)ppppppuVar35 & uVar44);
              }
              else if (ppppppuVar29 <= ppppppuVar35) {
                uVar44 = 0;
                if (ppppppuVar29 != (undefined ******)0x0) {
                  uVar44 = (ulong)ppppppuVar35 / (ulong)ppppppuVar29;
                }
                ppppppuVar35 = (undefined ******)((long)ppppppuVar35 - uVar44 * (long)ppppppuVar29);
              }
              if (ppppppuVar35 != ppppppuVar40) {
                (*pppppppuVar1)[(long)ppppppuVar35] = (undefined *****)pppppppuVar48;
                ppppppuVar33 = *pppppppuVar51;
              }
            }
            else {
              ppppppuVar35 = pppppppuVar48[1];
              if (((ulong)ppppppuVar29 & uVar44) == 0) {
                ppppppuVar35 = (undefined ******)((ulong)ppppppuVar35 & uVar44);
              }
              else if (ppppppuVar29 <= ppppppuVar35) {
                uVar10 = 0;
                if (ppppppuVar29 != (undefined ******)0x0) {
                  uVar10 = (ulong)ppppppuVar35 / (ulong)ppppppuVar29;
                }
                ppppppuVar35 = (undefined ******)((long)ppppppuVar35 - uVar10 * (long)ppppppuVar29);
              }
              if (ppppppuVar35 != ppppppuVar40) goto LAB_10a011c28;
LAB_10a011c64:
              if (ppppppuVar33 != (undefined ******)0x0) {
                ppppppuVar35 = (undefined ******)ppppppuVar33[1];
                goto LAB_10a011c6c;
              }
            }
            *pppppppuVar48 = ppppppuVar33;
            *pppppppuVar51 = (undefined ******)0x0;
            *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + -1;
            func_0x00010a061518(pppppppuVar51 + 3);
            __ZdlPv(pppppppuVar51);
          }
LAB_10a011ccc:
          uVar45 = uVar45 + 1;
        } while (uVar45 != uVar53);
        ppppppuStack_200 = ppppppuStack_90;
        (**(code **)(*plVar38 + 0x30))(plVar38,0,0,0,0,&ppppppuStack_200,1,in_x7,0,0,0);
        puVar49 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20;
        if (plStack_88 != (long *)0x0) {
          plVar38 = plStack_88 + 1;
          do {
            lVar19 = *plVar38;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar38,0x10);
            if (bVar8) {
              *plVar38 = lVar19 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
          }
        }
        __ZNSt3__115recursive_mutex6unlockEv(lVar16);
      }
      uVar45 = 0;
      uVar30 = 2;
      do {
        uVar53 = (param_4[1] - *param_4 >> 4) * 0x4ec4ec4ec4ec4ec5;
        if (uVar53 < uVar45 || uVar53 - uVar45 == 0) goto LAB_10a012a78;
        puVar50 = (undefined8 *)(*param_4 + uVar45 * 0xd0);
        ppppppuStack_260 = (undefined ******)0x0;
        cStack_230 = '\0';
        uStack_218 = 0;
        plStack_210 = (long *)0x0;
        plStack_220 = (long *)0x0;
        ppppppuStack_258 = (undefined ******)*puVar50;
        pppppuStack_250 = (undefined *****)puVar50[1];
        uStack_248 = puVar50[3];
        auVar56 = NEON_ext(*(undefined1 (*) [16])(puVar50 + 5),*(undefined1 (*) [16])(puVar50 + 5),8
                           ,1);
        uStack_238 = auVar56._8_8_;
        uStack_240 = auVar56._0_8_;
        FUN_10a012e6c(&uStack_228,puVar50[0x16],puVar50[0x17]);
        FUN_10a012e6c(&uStack_218,puVar50[0x18],puVar50[0x19]);
        lVar16 = *(long *)(param_1 + 0x70);
        lVar19 = *(long *)(param_1 + 0x78);
        pppppppuVar17 = (undefined *******)puVar50[9];
        pppppppuVar39 = pppppppuVar1;
        func_0x00010a063a2c();
        if (pppppppuVar39 == (undefined *******)0x0) {
          pcVar21 = param_1 + 0x48;
          FUN_10a063728(pcVar21,puVar50[0x14],puVar50[0x15],puVar50 + 0x14);
LAB_10a012064:
          uVar18 = 0xfffffffe;
LAB_10a012068:
          *(undefined4 *)(pcVar21 + 0x20) = uVar18;
        }
        else {
          if (pppppppuVar39[3] == (undefined ******)0x0) {
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (&ppppppuStack_b0,&UNK_10f6318d8,puVar50 + 0xd);
            pppppppuVar39 = &ppppppuStack_b0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppppuVar39,&DAT_10f638984,1);
            ppppppuStack_1f0 = pppppppuVar39[2];
            ppppppuStack_200 = *pppppppuVar39;
            ppppppuStack_1f8 = pppppppuVar39[1];
            pppppppuVar39[1] = (undefined ******)0x0;
            pppppppuVar39[2] = (undefined ******)0x0;
            *pppppppuVar39 = (undefined ******)0x0;
            ppppppuVar29 = ppppppuStack_1f0;
            ppppppuVar40 = ppppppuStack_200;
            pppppppuVar39 = (undefined *******)ppppppuStack_1f8;
            pppppppuVar17 = (undefined *******)ppppppuStack_200;
            if (-1 < (long)ppppppuStack_1f0) {
              pppppppuVar39 = (undefined *******)((ulong)ppppppuStack_1f0 >> 0x38);
              pppppppuVar17 = &ppppppuStack_200;
            }
            FUN_10a00edf0(param_2 + 0x10,2,pppppppuVar17,pppppppuVar39,param_2 + 8);
            if ((long)ppppppuVar29 < 0) {
              __ZdlPv(ppppppuVar40);
            }
            pcVar21 = param_1 + 0x48;
            FUN_10a063728(pcVar21,puVar50[0x14],puVar50[0x15],puVar50 + 0x14);
            uVar18 = 0xfffffffa;
            goto LAB_10a012068;
          }
          pppppppuVar39 = (undefined *******)*pppppppuVar39[3];
          uVar22 = *(ushort *)(puVar50 + 0x10);
          sVar47 = *(short *)((long)puVar50 + 0x82);
          ppppppuStack_260 = (undefined ******)pppppppuVar39;
          if ((sVar47 == 0) || (((ulong)*(*pppppppuVar39)[3] & 1) == 0)) {
            if (uVar22 == 0) {
              if (*param_1 == '\x01') {
                __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                          (&ppppppuStack_b0,&UNK_10f631962,puVar50 + 0xd);
                pppppppuVar39 = &ppppppuStack_b0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (pppppppuVar39,&DAT_10f638984,1);
                ppppppuStack_1f0 = pppppppuVar39[2];
                ppppppuStack_200 = *pppppppuVar39;
                ppppppuStack_1f8 = pppppppuVar39[1];
                pppppppuVar39[1] = (undefined ******)0x0;
                pppppppuVar39[2] = (undefined ******)0x0;
                *pppppppuVar39 = (undefined ******)0x0;
                ppppppuVar29 = ppppppuStack_1f0;
                ppppppuVar40 = ppppppuStack_200;
                pppppppuVar39 = (undefined *******)ppppppuStack_1f8;
                pppppppuVar17 = (undefined *******)ppppppuStack_200;
                if (-1 < (long)ppppppuStack_1f0) {
                  pppppppuVar39 = (undefined *******)((ulong)ppppppuStack_1f0 >> 0x38);
                  pppppppuVar17 = &ppppppuStack_200;
                }
                FUN_10a00edf0(param_2 + 0x10,4,pppppppuVar17,pppppppuVar39,param_2 + 8);
                if ((long)ppppppuVar29 < 0) {
                  __ZdlPv(ppppppuVar40);
                }
              }
              pcVar21 = param_1 + 0x48;
              FUN_10a063728(pcVar21,puVar50[0x14],puVar50[0x15],puVar50 + 0x14);
              goto LAB_10a012064;
            }
            sVar47 = 0;
            bVar8 = true;
LAB_10a012100:
            if ((*(byte *)((long)puVar50 + 0x85) & 1) == 0) {
              uVar18 = 2;
              if (*(char *)((long)puVar50 + 0x84) != '\0') {
                uVar18 = 0;
              }
            }
            else {
              uVar18 = 1;
            }
            ppppppuVar40 = (undefined ******)(puVar50 + 0xd);
            if (*(char *)((long)puVar50 + 0x7f) < '\0') {
              ppppppuVar40 = (undefined ******)*ppppppuVar40;
            }
            if (ppppppuStack_2e8 < ppppppuStack_2f8) {
              *ppppppuStack_2e8 = (undefined *****)pppppppuVar39;
              *(undefined4 *)(ppppppuStack_2e8 + 1) = uVar18;
              *(ushort *)((long)ppppppuStack_2e8 + 0xc) = uVar22;
              *(short *)((long)ppppppuStack_2e8 + 0xe) = sVar47;
              ppppppuStack_2e8[2] = (undefined *****)ppppppuVar40;
              pppppppuVar51 = (undefined *******)ppppppuStack_2c8;
            }
            else {
              pppppppuVar41 =
                   (undefined *******)
                   (((long)ppppppuStack_2e8 - (long)ppppppuStack_2c8 >> 3) * -0x5555555555555555 + 1
                   );
              if ((undefined *******)0xaaaaaaaaaaaaaaa < pppppppuVar41) {
                FUN_10a043bc8();
                goto LAB_10a012a78;
              }
              lVar23 = (long)ppppppuStack_2f8 - (long)ppppppuStack_2c8 >> 3;
              pppppppuVar51 = (undefined *******)(lVar23 * 0x5555555555555556);
              if (pppppppuVar51 < pppppppuVar41 || (long)pppppppuVar51 - (long)pppppppuVar41 == 0) {
                pppppppuVar51 = pppppppuVar41;
              }
              if (0x555555555555554 < (ulong)(lVar23 * -0x5555555555555555)) {
                pppppppuVar51 = (undefined *******)0xaaaaaaaaaaaaaaa;
              }
              FUN_10a043bdc();
              ppppppuStack_2e8 =
                   (undefined ******)
                   ((long)pppppppuVar51 + ((long)ppppppuStack_2e8 - (long)ppppppuStack_2c8));
              *ppppppuStack_2e8 = (undefined *****)pppppppuVar39;
              *(undefined4 *)(ppppppuStack_2e8 + 1) = uVar18;
              ppppppuStack_2f8 = (undefined ******)(pppppppuVar51 + (long)pppppppuVar17 * 3);
              *(ushort *)((long)ppppppuStack_2e8 + 0xc) = uVar22;
              *(short *)((long)ppppppuStack_2e8 + 0xe) = sVar47;
              ppppppuStack_2e8[2] = (undefined *****)ppppppuVar40;
              pppppppuVar17 = (undefined *******)ppppppuStack_2c8;
              _memcpy();
              if ((undefined *******)ppppppuStack_2c8 != (undefined *******)0x0) {
                __ZdlPv(ppppppuStack_2c8);
              }
            }
            ppppppuStack_2c8 = (undefined ******)pppppppuVar51;
            ppppppuStack_2e8 = ppppppuStack_2e8 + 3;
            puVar25 = *(undefined8 **)(param_1 + 0x78);
            if (puVar25 < *(undefined8 **)(param_1 + 0x80)) {
              *(char *)(puVar25 + 6) = cStack_230;
              puVar25[3] = uStack_248;
              puVar25[2] = pppppuStack_250;
              puVar25[5] = uStack_238;
              puVar25[4] = uStack_240;
              puVar25[1] = ppppppuStack_258;
              *puVar25 = ppppppuStack_260;
              puVar25[8] = plStack_220;
              puVar25[7] = uStack_228;
              if (plStack_220 != (long *)0x0) {
                plVar38 = plStack_220 + 1;
                do {
                  cVar7 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar38,0x10);
                  if (bVar9) {
                    *plVar38 = *plVar38 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              puVar25[10] = plStack_210;
              puVar25[9] = uStack_218;
              if (plStack_210 != (long *)0x0) {
                plVar38 = plStack_210 + 1;
                do {
                  cVar7 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar38,0x10);
                  if (bVar9) {
                    *plVar38 = *plVar38 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              *(undefined2 *)(puVar25 + 0xb) = uStack_208;
              puVar25 = puVar25 + 0xc;
            }
            else {
              ppppppuVar40 = *(undefined *******)(param_1 + 0x70);
              lVar23 = (long)puVar25 - (long)ppppppuVar40;
              uVar53 = (lVar23 >> 5) * -0x5555555555555555 + 1;
              if (0x2aaaaaaaaaaaaaa < uVar53) {
                FUN_10a0438e8();
                goto LAB_10a012a78;
              }
              lVar46 = (long)*(undefined8 **)(param_1 + 0x80) - (long)ppppppuVar40 >> 5;
              uVar44 = lVar46 * 0x5555555555555556;
              if (uVar44 < uVar53 || uVar44 - uVar53 == 0) {
                uVar44 = uVar53;
              }
              if (0x155555555555554 < (ulong)(lVar46 * -0x5555555555555555)) {
                uVar44 = 0x2aaaaaaaaaaaaaa;
              }
              appppppuStack_1e0[0] = (undefined ******)(param_1 + 0x70);
              FUN_10a0438fc();
              puVar2 = (undefined8 *)(uVar44 + lVar23);
              *(char *)(puVar2 + 6) = cStack_230;
              puVar2[3] = uStack_248;
              puVar2[2] = pppppuStack_250;
              puVar2[5] = uStack_238;
              puVar2[4] = uStack_240;
              puVar2[1] = ppppppuStack_258;
              *puVar2 = ppppppuStack_260;
              puVar2[8] = plStack_220;
              puVar2[7] = uStack_228;
              if (plStack_220 != (long *)0x0) {
                plVar38 = plStack_220 + 1;
                do {
                  cVar7 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar38,0x10);
                  if (bVar9) {
                    *plVar38 = *plVar38 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              puVar2[10] = plStack_210;
              puVar2[9] = uStack_218;
              if (plStack_210 != (long *)0x0) {
                plVar38 = plStack_210 + 1;
                do {
                  cVar7 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar38,0x10);
                  if (bVar9) {
                    *plVar38 = *plVar38 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              *(undefined2 *)(puVar2 + 0xb) = uStack_208;
              puVar25 = puVar2 + 0xc;
              lVar23 = (long)puVar2 + (*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x78));
              func_0x00010a043940(*(long *)(param_1 + 0x70),*(long *)(param_1 + 0x78),lVar23);
              ppppppuStack_200 = *(undefined *******)(param_1 + 0x70);
              *(long *)(param_1 + 0x70) = lVar23;
              *(undefined8 **)(param_1 + 0x78) = puVar25;
              ppppppuStack_1e8 = *(undefined *******)(param_1 + 0x80);
              *(ulong *)(param_1 + 0x80) = uVar44 + (long)pppppppuVar17 * 0x60;
              ppppppuStack_1f8 = ppppppuStack_200;
              ppppppuStack_1f0 = ppppppuStack_200;
              FUN_10a0439d0(&ppppppuStack_200);
            }
            *(undefined8 **)(param_1 + 0x78) = puVar25;
            pcVar21 = param_1 + 0x48;
            FUN_10a063728(pcVar21,puVar50[0x14],puVar50[0x15]);
            cVar7 = cStack_230;
            iVar37 = (int)(lVar19 - lVar16 >> 5) * -0x55555555;
            *(int *)(pcVar21 + 0x20) = iVar37;
            if ((ulong)(*plStack_320 - *plStack_318) <= (ulong)(long)iVar37) goto LAB_10a012a78;
            *(char *)(*plStack_318 + (long)iVar37) = cStack_230;
            if (*param_1 == '\x01') {
              FUN_109febc44(&ppppppuStack_200);
              FUN_10a002568(&ppppppuStack_1f0,&UNK_10f631991,10);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
              pppppppuVar39 = &ppppppuStack_1f0;
              FUN_10a002568(pppppppuVar39,&UNK_10f63199c,0xb);
              FUN_10a0130f4();
              ppppppuVar40 = *pppppppuVar39;
              *(undefined8 *)((long)pppppppuVar39 + (long)(ppppppuVar40[-3] + 3)) = 4;
              pppppuVar28 = ppppppuVar40[-3];
              *(uint *)((long)pppppppuVar39 + (long)(pppppuVar28 + 1)) =
                   *(uint *)((long)pppppppuVar39 + (long)(pppppuVar28 + 1)) & 0xffffffb5 | 8;
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEt();
              FUN_10a002568(&ppppppuStack_1f0,&UNK_10f6319a8,0xb);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv();
              pppppppuVar39 = &ppppppuStack_1f0;
              FUN_10a002568(pppppppuVar39,&UNK_10f6319b4,6);
              FUN_10a0130f4();
              ppppppuVar40 = *pppppppuVar39;
              *(undefined8 *)((long)pppppppuVar39 + (long)(ppppppuVar40[-3] + 3)) = 4;
              pppppuVar28 = ppppppuVar40[-3];
              *(uint *)((long)pppppppuVar39 + (long)(pppppuVar28 + 1)) =
                   *(uint *)((long)pppppppuVar39 + (long)(pppppuVar28 + 1)) & 0xffffffb5 | 2;
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
              FUN_10a002568();
              FUN_10a002568(&ppppppuStack_1f0,&UNK_10f6319c7,0xd);
              FUN_10a002568();
              FUN_10a002568();
              puVar15 = &UNK_10f6319f3;
              if (cVar7 != '\0') {
                puVar15 = &UNK_10f6319e1;
              }
              puVar3 = &UNK_10f6319d8;
              if (!bVar8) {
                puVar3 = puVar15;
              }
              puVar15 = puVar3;
              _strlen(puVar3);
              FUN_10a002568(&ppppppuStack_1f0,puVar3,puVar15);
              if (*(char *)((long)puVar50 + 0x85) == '\x01') {
                FUN_10a002568(&ppppppuStack_1f0,&UNK_10f631a15,0xc);
              }
              if (*(char *)((long)puVar50 + 0x84) == '\0') {
                FUN_10a002568(&ppppppuStack_1f0,&UNK_10f631a22,0x13);
              }
              func_0x00010a002480(&ppppppuStack_b0,&ppppppuStack_1e8,&ppppppuStack_c8);
              pppppppuVar39 = (undefined *******)ppppppuStack_a8;
              pppppppuVar17 = (undefined *******)ppppppuStack_b0;
              if (-1 < (long)pppppuStack_a0) {
                pppppppuVar39 = (undefined *******)((ulong)pppppuStack_a0 >> 0x38);
                pppppppuVar17 = &ppppppuStack_b0;
              }
              FUN_10a00edf0(param_2 + 0x10,4,pppppppuVar17,pppppppuVar39,param_2 + 8);
              ppppppuStack_200 = (undefined ******)&PTR_SUB_1108a5a38;
              appuStack_180[0] = &PTR_DAT_1108a5a88;
              ppppppuStack_1f0 = (undefined ******)&PTR_DAT_1108a5a60;
              ppppppuStack_1e8 = (undefined ******)&PTR_DAT_11088d7b0;
              if (cStack_191 < '\0') {
                __ZdlPv(uStack_1a8);
              }
              ppppppuStack_1e8 = (undefined ******)(puVar49 + 0x10);
              __ZNSt3__16localeD1Ev(appppppuStack_1e0);
              __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev
                        (&ppppppuStack_200,&PTR_PTR_1108a5aa0);
              __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_180);
            }
          }
          else {
            if (uVar30 < 0x1e) {
              bVar8 = false;
              uVar22 = uVar22 | 0x8000;
              cStack_230 = (char)uVar30;
              uVar30 = uVar30 + 1;
              goto LAB_10a012100;
            }
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (&ppppppuStack_b0,&UNK_10f631905,puVar50 + 0xd);
            pppppppuVar39 = &ppppppuStack_b0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppppuVar39,&UNK_10f631910,0x51);
            ppppppuStack_1f0 = pppppppuVar39[2];
            ppppppuStack_200 = *pppppppuVar39;
            ppppppuStack_1f8 = pppppppuVar39[1];
            pppppppuVar39[1] = (undefined ******)0x0;
            pppppppuVar39[2] = (undefined ******)0x0;
            *pppppppuVar39 = (undefined ******)0x0;
            ppppppuVar29 = ppppppuStack_1f0;
            ppppppuVar40 = ppppppuStack_200;
            pppppppuVar39 = (undefined *******)ppppppuStack_1f8;
            pppppppuVar17 = (undefined *******)ppppppuStack_200;
            if (-1 < (long)ppppppuStack_1f0) {
              pppppppuVar39 = (undefined *******)((ulong)ppppppuStack_1f0 >> 0x38);
              pppppppuVar17 = &ppppppuStack_200;
            }
            FUN_10a00edf0(param_2 + 0x10,2,pppppppuVar17,pppppppuVar39,param_2 + 8);
            if ((long)ppppppuVar29 < 0) {
              __ZdlPv(ppppppuVar40);
            }
          }
        }
        plVar38 = plStack_210;
        if (plStack_210 != (long *)0x0) {
          plVar42 = plStack_210 + 1;
          do {
            lVar16 = *plVar42;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar42,0x10);
            if (bVar8) {
              *plVar42 = lVar16 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_210 + 0x10))(plStack_210);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar38);
          }
        }
        plVar38 = plStack_220;
        if (plStack_220 != (long *)0x0) {
          plVar42 = plStack_220 + 1;
          do {
            lVar16 = *plVar42;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar42,0x10);
            if (bVar8) {
              *plVar42 = lVar16 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_220 + 0x10))(plStack_220);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar38);
          }
        }
        uVar45 = uVar45 + 1;
      } while (uVar45 != uVar43);
    }
    pppppuStack_c0 =
         (undefined *****)
         (((long)ppppppuStack_2e8 - (long)ppppppuStack_2c8 >> 3) * -0x5555555555555555);
    pppppppuVar1 = (undefined *******)**(undefined8 **)(param_1 + 0x18);
    pppppppuVar39 = (undefined *******)(*(undefined8 **)(param_1 + 0x18))[1];
    ppppppuStack_c8 = ppppppuStack_2c8;
    ppppppuStack_b0 = (undefined ******)pppppppuVar1;
    if ((pppppppuVar39 == (undefined *******)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), ppppppuStack_a8 = (undefined ******)pppppppuVar39,
       pppppppuVar39 == (undefined *******)0x0)) {
      FUN_10a043ecc();
    }
    else {
      puVar50 = (undefined8 *)0x48;
      __Znwm();
      puVar50[1] = 0;
      puVar50[2] = 0;
      *puVar50 = &PTR_FUN_110b9d150;
      ppppppuStack_b0 = (undefined ******)0x0;
      ppppppuStack_a8 = (undefined ******)0x0;
      ppppppuVar40 = pppppppuVar1[2];
      ppppppuStack_260 = (undefined ******)pppppppuVar1;
      ppppppuStack_258 = (undefined ******)pppppppuVar39;
      func_0x0001099f08f8(ppppppuVar40,&ppppppuStack_c8,&ppppppuStack_200);
      if ((int)ppppppuVar40 == 0) {
        puVar50[4] = pppppppuVar1;
        puVar50[3] = ppppppuStack_200;
        puVar50[5] = pppppppuVar39;
        pppppppuVar17 = pppppppuVar39 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
          if (bVar8) {
            *pppppppuVar17 = (undefined ******)((long)*pppppppuVar17 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        puVar50[6] = 0;
        puVar50[7] = 0;
        puVar50[8] = 0;
        if ((undefined ******)pppppuStack_c0 != (undefined ******)0x0) {
          lVar16 = 0;
          ppppppuVar40 = (undefined ******)0x0;
          do {
            pppppppuVar41 = pppppppuVar1 + 3;
            FUN_10a043dc4(pppppppuVar41,*(undefined8 *)((long)ppppppuStack_c8 + lVar16));
            ppppppuStack_200 = (undefined ******)0x0;
            ppppppuStack_1f8 = (undefined ******)0x0;
            pppppppuVar51 = (undefined *******)pppppppuVar41[4];
            if ((pppppppuVar51 == (undefined *******)0x0) ||
               (__ZNSt3__119__shared_weak_count4lockEv(),
               ppppppuStack_1f8 = (undefined ******)pppppppuVar51,
               pppppppuVar51 == (undefined *******)0x0)) {
              pppppppuVar41 = (undefined *******)0x0;
            }
            else {
              pppppppuVar41 = (undefined *******)pppppppuVar41[3];
              ppppppuStack_200 = (undefined ******)pppppppuVar41;
            }
            ppppppuVar29 = ppppppuStack_1f8;
            puVar25 = (undefined8 *)puVar50[7];
            if (puVar25 < (undefined8 *)puVar50[8]) {
              *puVar25 = pppppppuVar41;
              puVar25[1] = ppppppuStack_1f8;
              puVar25 = puVar25 + 2;
            }
            else {
              lVar19 = puVar50[6];
              lVar23 = (long)puVar25 - lVar19;
              uVar43 = (lVar23 >> 4) + 1;
              if (uVar43 >> 0x3c != 0) {
                FUN_10a0445d4();
                goto LAB_10a012a78;
              }
              uVar53 = (long)puVar50[8] - lVar19;
              uVar45 = (long)uVar53 >> 3;
              if (uVar45 <= uVar43) {
                uVar45 = uVar43;
              }
              if (0x7fffffffffffffef < uVar53) {
                uVar45 = 0xfffffffffffffff;
              }
              if (uVar45 >> 0x3c != 0) {
                func_0x000109ffded8();
                goto LAB_10a012a78;
              }
              lVar46 = uVar45 << 4;
              __Znwm();
              puVar2 = (undefined8 *)(lVar46 + lVar23);
              *puVar2 = pppppppuVar41;
              puVar2[1] = ppppppuVar29;
              puVar25 = puVar2 + 2;
              _memcpy(puVar2 + (lVar23 >> 4) * -2,lVar19,lVar23);
              puVar50[6] = puVar2 + (lVar23 >> 4) * -2;
              puVar50[7] = puVar25;
              puVar50[8] = lVar46 + uVar45 * 0x10;
              if (lVar19 != 0) {
                __ZdlPv(lVar19);
              }
            }
            puVar50[7] = puVar25;
            ppppppuVar40 = (undefined ******)((long)ppppppuVar40 + 1);
            lVar16 = lVar16 + 0x18;
          } while (ppppppuVar40 < pppppuStack_c0);
        }
        do {
          ppppppuVar40 = *pppppppuVar17;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
          if (bVar8) {
            *pppppppuVar17 = (undefined ******)((long)ppppppuVar40 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (ppppppuVar40 == (undefined ******)0x0) {
          (*(code *)(*pppppppuVar39)[2])(pppppppuVar39);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar39);
        }
        ppppppuVar40 = ppppppuStack_a8;
        if ((undefined *******)ppppppuStack_a8 != (undefined *******)0x0) {
          pppppppuVar1 = (undefined *******)(ppppppuStack_a8 + 1);
          do {
            ppppppuVar29 = *pppppppuVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pppppppuVar1,0x10);
            if (bVar8) {
              *pppppppuVar1 = (undefined ******)((long)ppppppuVar29 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (ppppppuVar29 == (undefined ******)0x0) {
            (*(code *)(*ppppppuStack_a8)[2])(ppppppuStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar40);
          }
        }
        plVar38 = *(long **)(param_1 + 0x40);
        *(undefined8 **)(param_1 + 0x38) = puVar50 + 3;
        *(undefined8 **)(param_1 + 0x40) = puVar50;
        if (plVar38 != (long *)0x0) {
          plVar42 = plVar38 + 1;
          do {
            lVar16 = *plVar42;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar42,0x10);
            if (bVar8) {
              *plVar42 = lVar16 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plVar38 + 0x10))(plVar38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar38);
          }
        }
        if ((undefined *******)ppppppuStack_2c8 != (undefined *******)0x0) {
          __ZdlPv(ppppppuStack_2c8);
        }
        FUN_10a044644(&ppppppuStack_80);
        if ((undefined *******)ppppppuStack_290 != (undefined *******)0x0) {
          __ZdlPv(ppppppuStack_290);
        }
        return;
      }
      puVar50 = (undefined8 *)0x10;
      ___cxa_allocate_exception();
      *puVar50 = &PTR_DAT_110b9d018;
      *(int *)(puVar50 + 1) = (int)ppppppuVar40;
      ___cxa_throw();
    }
  }
  else {
    pppppppuVar39 = (undefined *******)(long)iVar37;
    if (pppppppuVar39 < (undefined *******)0x24924924924924a) {
      ppppppuStack_290 = (undefined ******)pppppppuVar39;
      FUN_10a043aac();
      ppppppuStack_80 = (undefined ******)0x0;
      ppppppuStack_78 = (undefined ******)0x0;
      ppppppuStack_70 = (undefined ******)0x0;
      appppppuStack_1e0[0] = (undefined ******)&ppppppuStack_80;
      pppppppuVar17 = pppppppuVar39;
      lVar19 = lVar16;
      FUN_10a043b08();
      pppppppuVar51 =
           (undefined *******)
           ((long)pppppppuVar17 - ((long)ppppppuStack_78 - (long)ppppppuStack_80));
      pppppppuVar41 = (undefined *******)ppppppuStack_80;
      _memcpy(pppppppuVar51);
      ppppppuStack_1f0 = ppppppuStack_80;
      ppppppuStack_1e8 = ppppppuStack_70;
      ppppppuStack_200 = ppppppuStack_80;
      ppppppuStack_1f8 = ppppppuStack_80;
      ppppppuStack_80 = (undefined ******)pppppppuVar51;
      ppppppuStack_78 = (undefined ******)pppppppuVar17;
      ppppppuStack_70 = (undefined ******)(pppppppuVar17 + lVar19 * 6);
      func_0x00010a043b4c(&ppppppuStack_200);
      ppppppuStack_2e8 = (undefined ******)pppppppuVar39;
      FUN_10a043bdc();
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
      func_0x000107c27d58(param_1 + 0x88,pppppppuVar39);
      ppppppuStack_2b0 = ppppppuStack_290 + lVar16 * 0xe;
      ppppppuStack_2f8 = ppppppuStack_2e8 + (long)pppppppuVar41 * 3;
      goto LAB_10a0109a0;
    }
    FUN_10a043a98();
LAB_10a012a70:
    FUN_10a0edfc4(&ppppppuStack_200);
  }
LAB_10a012a78:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10a012a7c);
  (*pcVar13)();
}



/* Entry: 10a012db0; end: 10a012e0b;  */

void FUN_10a012db0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _strlen(param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,param_3,uVar1);
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10a012e0c; end: 10a012e6b;  */

undefined8 * FUN_10a012e0c(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  
  if (param_2 == 1) {
    lVar6 = 0x10;
  }
  else if (param_2 == 4) {
    lVar6 = 0xd0;
  }
  else {
    if (param_2 != 2) {
      puVar4 = (undefined8 *)0x8;
      ___cxa_allocate_exception();
      *puVar4 = &UNK_10f63289b;
      lVar6 = 0;
      puVar5 = PTR___ZTIPKc_110346a28;
      ___cxa_throw();
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar7 = (long *)puVar4[1];
      *puVar4 = puVar5;
      puVar4[1] = lVar6;
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
      return puVar4;
    }
    lVar6 = 0x80;
  }
  return (undefined8 *)(param_1 + lVar6);
}



/* Entry: 10a012e6c; end: 10a012edf;  */

undefined8 * FUN_10a012e6c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a012ee0; end: 10a012f87;  */

void FUN_10a012ee0(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  *puVar4 = &PTR_DAT_110b9ddc0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = param_2;
  plVar6 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = puVar4;
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



/* Entry: 10a012f88; end: 10a012feb;  */

undefined8 * FUN_10a012f88(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a012fec; end: 10a0130f3;  */

void FUN_10a012fec(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long alStack_48 [2];
  undefined8 uStack_38;
  long lStack_30;
  long *plStack_28;
  
  alStack_48[1] = 1;
  uStack_38 = CONCAT44(uStack_38._4_4_,2);
  alStack_48[0] = param_3;
  (**(code **)(*param_2 + 0x48))(&lStack_30,param_2,alStack_48);
  if (lStack_30 == 0) {
    FUN_10a00946c(&UNK_10f6335c6);
  }
  else {
    alStack_48[0] = lStack_30;
    alStack_48[1] = 0;
    uStack_38 = 0xffffffffffffffff;
    (**(code **)(*param_2 + 0x40))(param_1,param_2,alStack_48);
    if (*param_1 != 0) {
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
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
        }
      }
      return;
    }
    FUN_10a00946c(&UNK_10f633603);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0130cc);
  (*pcVar4)();
}



/* Entry: 10a0130f4; end: 10a013197;  */

long * FUN_10a0130f4(long *param_1,char param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  if (*(int *)(lVar1 + 0x90) == -1) {
    __ZNKSt3__18ios_base6getlocEv(&lStack_38,lVar1);
    plVar2 = &lStack_38;
    __ZNKSt3__16locale9use_facetERNS0_2idE(plVar2,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (**(code **)(*plVar2 + 0x38))();
    __ZNSt3__16localeD1Ev(&lStack_38);
    *(int *)(lVar1 + 0x90) = (int)plVar2;
  }
  *(int *)(lVar1 + 0x90) = (int)param_2;
  return param_1;
}



/* Entry: 10a013198; end: 10a01514f;  */

/* WARNING: Removing unreachable block (ram,0x00010a01383c) */
/* WARNING: Removing unreachable block (ram,0x00010a014a78) */

void FUN_10a013198(undefined8 param_1,float param_2,ulong param_3,ulong param_4,byte *param_5,
                  long param_6,long param_7,uint ******param_8,uint *****param_9,undefined4 param_10
                  ,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint *****pppppuVar11;
  uint ****ppppuVar12;
  undefined8 uVar13;
  uint uVar14;
  byte bVar15;
  undefined1 uVar16;
  char cVar17;
  undefined1 auVar18 [12];
  code *pcVar19;
  long lVar20;
  uint ******ppppppuVar21;
  uint ******ppppppuVar22;
  uint ******ppppppuVar23;
  byte *pbVar24;
  long *plVar25;
  long lVar26;
  uint ******ppppppuVar27;
  uint ******ppppppuVar28;
  uint ******ppppppuVar29;
  uint ******ppppppuVar30;
  uint *****pppppuVar31;
  undefined **ppuVar32;
  long *plVar33;
  long *plVar34;
  uint uVar35;
  uint uVar36;
  long lVar37;
  undefined8 *puVar38;
  undefined4 *puVar39;
  undefined8 *puVar40;
  float *pfVar41;
  undefined *puVar42;
  uint uVar43;
  ulong uVar44;
  uint *****pppppuVar45;
  ulong uVar46;
  uint ****ppppuVar47;
  ushort uVar48;
  uint uVar49;
  ulong uVar50;
  ulong uVar51;
  uint uVar52;
  ulong uVar53;
  ulong uVar54;
  undefined8 uVar55;
  bool bVar56;
  int iVar57;
  uint uVar58;
  uint uVar59;
  ulong uVar60;
  byte *pbVar62;
  undefined8 *puVar63;
  long lVar64;
  uint ******ppppppuVar65;
  byte bVar66;
  uint uVar67;
  long lVar68;
  long *plVar69;
  uint *****pppppuVar70;
  uint ******ppppppuVar71;
  undefined8 uVar72;
  undefined4 uVar73;
  float fVar74;
  float fVar75;
  undefined4 uVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  uint uStack_3ac;
  uint uStack_3a8;
  uint ****ppppuStack_3a0;
  uint ****ppppuStack_360;
  uint ****ppppuStack_358;
  int iStack_338;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined **ppuStack_2d8;
  ulong uStack_2d0;
  long lStack_2c8;
  ulong uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_298;
  char cStack_281;
  undefined **appuStack_270 [20];
  uint *****pppppuStack_1d0;
  uint ****ppppuStack_1c8;
  uint ****ppppuStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_190 [24];
  uint *puStack_178;
  char cStack_170;
  int iStack_16c;
  int iStack_168;
  undefined1 auStack_160 [24];
  uint ****ppppuStack_148;
  undefined8 uStack_140;
  int iStack_138;
  uint *****pppppuStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined4 uStack_f4;
  long *plStack_f0;
  uint auStack_e4 [3];
  undefined8 uStack_d8;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  byte bStack_c1;
  long lStack_b8;
  ulong uVar61;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar60 = (*(long *)(param_5 + 0x78) - *(long *)(param_5 + 0x70) >> 5) * -0x5555555555555555;
  lVar20 = param_6 + 0x10;
  FUN_10a00edf0(lVar20,4,&UNK_10f630f1d,0,param_6 + 8);
  bVar15 = *param_5;
  if (bVar15 == 1) {
    *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + 1;
  }
  plVar69 = *(long **)(param_5 + 0x100);
  lVar64 = plVar69[3];
  plVar69[4] = lVar64;
  iVar57 = (int)uVar60;
  uVar61 = (ulong)iVar57;
  if ((uVar60 & 0xffffffff) == 0) {
    lVar64 = plVar69[6];
LAB_10a013438:
    plVar69[7] = lVar64;
LAB_10a01343c:
    plVar69[10] = plVar69[9];
    func_0x000108262984(plVar69 + 9,uVar61);
    plVar69[0xd] = plVar69[0xc];
    func_0x000108262984(plVar69 + 0xc,uVar61);
    lVar64 = *(long *)(param_7 + 0x200);
    if (*(long *)(param_7 + 0x208) == lVar64) {
      iStack_338 = 0;
    }
    else {
      uVar60 = 0;
      iStack_338 = 0;
      ppuVar32 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
      do {
        pbVar62 = (byte *)(lVar64 + uVar60 * 0x1b8);
        if ((*pbVar62 | 4) == 0x16) {
          uVar61 = *(ulong *)(pbVar62 + 0x30);
          puVar38 = &uStack_2e8;
          uStack_2f0 = (undefined **)param_8;
          uStack_2e8 = param_9;
          FUN_10a3c8d60(puVar38,pbVar62 + 0x38);
          if ((uVar61 & (ulong)param_8) != 0 || ((ulong)puVar38 & 0xffff) != 0) {
            ppppppuVar71 = *(uint *******)(pbVar62 + 0x1a8);
            ppppppuVar21 = ppppppuVar71 + 0x72;
            FUN_10a012e0c(ppppppuVar21,param_10);
            ppppppuVar22 = ppppppuVar71;
            FUN_10a00ffe4();
            ppppppuVar23 = ppppppuVar71;
            FUN_10a010080(ppppppuVar71,0);
            pbVar24 = param_5 + 0x48;
            FUN_10a0618a0(pbVar24,ppppppuVar71[8],ppppppuVar71[9]);
            if (pbVar24 != (byte *)0x0) {
              uVar14 = *(uint *)(pbVar24 + 0x20);
              uVar61 = (ulong)uVar14;
              if ((int)uVar14 < 0) {
                if ((((uint)(uVar14 == 0xffffffff) & (uint)*param_5 & (uint)ppppppuVar22) != 1) ||
                   (*(byte *)ppppppuVar21 != 1)) goto LAB_10a014b94;
                FUN_10a00ff18(&uStack_d8,ppppppuVar71[0x2d]);
                puVar38 = &uStack_d8;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                          (puVar38,0,&UNK_10f631a36,0x12);
                uStack_128 = puVar38[1];
                pppppuStack_130 = (uint *****)*puVar38;
                uStack_120 = puVar38[2];
                puVar38[1] = 0;
                puVar38[2] = 0;
                *puVar38 = 0;
                ppppppuVar21 = &pppppuStack_130;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (ppppppuVar21,&UNK_10f631a49,0x2f);
                uStack_2e0 = (undefined **)ppppppuVar21[2];
                uStack_2e8 = ppppppuVar21[1];
                uStack_2f0 = (undefined **)*ppppppuVar21;
                ppppppuVar21[1] = (uint *****)0x0;
                ppppppuVar21[2] = (uint *****)0x0;
                *ppppppuVar21 = (uint *****)0x0;
                ppppppuVar22 = (uint ******)uStack_2f0;
                bVar66 = uStack_2e0._7_1_;
                pppppuVar45 = uStack_2e8;
                ppppppuVar21 = (uint ******)uStack_2f0;
                if (-1 < (long)uStack_2e0) {
                  pppppuVar45 = (uint *****)(ulong)uStack_2e0._7_1_;
                  ppppppuVar21 = (uint ******)&uStack_2f0;
                }
                FUN_10a00edf0(param_6 + 0x10,2,ppppppuVar21,pppppuVar45,param_6 + 8);
              }
              else {
                uVar50 = (*(long *)(param_5 + 0x78) - *(long *)(param_5 + 0x70) >> 5) *
                         -0x5555555555555555;
                if (uVar50 < uVar61 || uVar50 - uVar61 == 0) goto LAB_10a014ee8;
                if ((((ulong)ppppppuVar71[0x30] & 0x17) != 0) ||
                   (((puVar38 = (undefined8 *)(*(long *)(param_5 + 0x70) + uVar61 * 0x60),
                     (uint)ppppppuVar22 == 0 || (((ulong)*ppppppuVar21 & 1) == 0)) &&
                    (*(char *)(puVar38 + 6) == '\0')))) goto LAB_10a014b94;
                lVar64 = *(long *)(pbVar62 + 0x1a8);
                pbVar24 = param_5 + 0x48;
                FUN_10a0618a0(pbVar24,*(undefined8 *)(lVar64 + 0x40),*(undefined8 *)(lVar64 + 0x48))
                ;
                if (pbVar24 == (byte *)0x0) {
                  uVar50 = 0xfffffffffffffffd;
                }
                else {
                  uVar50 = (ulong)*(int *)(pbVar24 + 0x20);
                }
                if (*(long *)(lVar64 + 0x260) != 0) {
                  iVar57 = (int)*(undefined8 *)(*(long *)(lVar64 + 0x260) + 0xe0);
                  plVar34 = (long *)0x1;
                  FUN_10a061940();
                  if (plVar34 == (long *)0x0) {
                    plVar34 = (long *)0x0;
                  }
                  else {
                    plVar34 = (long *)*plVar34;
                  }
                  uVar44 = (*(long *)(param_5 + 0x78) - *(long *)(param_5 + 0x70) >> 5) *
                           -0x5555555555555555;
                  if (uVar44 < uVar50 || uVar44 - uVar50 == 0) goto LAB_10a014ee8;
                  lVar64 = *(long *)(param_5 + 0x70) + (long)(int)uVar50 * 0x60;
                  if (iVar57 == 2) {
                    plVar25 = plVar34;
                    (**(code **)(*plVar34 + 0x30))();
                    if (plVar25[1] == 0) {
LAB_10a014ec4:
                      func_0x000105688514(&UNK_10f697757);
                      goto LAB_10a014ee8;
                    }
                    lVar68 = *(long *)(plVar25[1] + 0x48);
                    lVar37 = *(long *)(lVar64 + 0x20);
                    uStack_3ac = 0;
                    if (*(long *)(lVar64 + 0x18) != lVar68) {
                      uStack_3ac = 4;
                    }
                    if ((pbVar62[0x18] >> 5 & 1) == 0) {
                      lVar26 = *(long *)(pbVar62 + 0x1a8);
                      FUN_10a00ff8c();
                      if (((pbVar62[0x18] >> 3 & 1) == 0) ||
                         (*(long *)(lVar26 + 0x40) == *(long *)(lVar26 + 0x48))) {
                        (**(code **)(*plVar34 + 0x28))();
                        if (param_5[1] == 1) {
                          param_5[1] = 0;
                          uStack_3ac = uStack_3ac | 1;
                        }
                        else if (*(long *)(lVar64 + 0x18) != lVar68) {
                          uStack_3ac = uStack_3ac | 8;
                        }
                        if (plVar34[1] == 0) goto LAB_10a014ec4;
                        lVar37 = *(long *)(plVar34[1] + 0x48);
                      }
                    }
                    lVar26 = *(long *)(lVar64 + 0x20);
                    *(long *)(lVar64 + 0x18) = lVar68;
                    *(long *)(lVar64 + 0x20) = lVar37;
                    lVar64 = param_7;
                    FUN_10a015150(param_7,uVar60);
                    uStack_1a8 = *(uint ******)(lVar64 + 100);
                    uStack_1b0 = *(uint *******)(lVar64 + 0x5c);
                    fVar79 = SUB84(uStack_1b0,0);
                    uStack_1a0 = *(uint ******)(lVar64 + 0x6c);
                    uVar14 = *(uint *)(pbVar62 + 0x18);
                    lVar68 = *(long *)(pbVar62 + 0x1a8);
                    FUN_10a00ff8c();
                    if ((pbVar62[0x18] >> 3 & 1) == 0) {
                      uStack_3a8 = 0;
                      if ((uVar14 >> 5 & 1) != 0) goto LAB_10a0138f0;
LAB_10a0139f4:
                      func_0x00010a424420(&uStack_2f0,ppppppuVar71);
                      uVar50 = (plVar69[4] - plVar69[3] >> 4) * -0x5555555555555555;
                      if (uVar50 < uVar61 || uVar50 - uVar61 == 0) goto LAB_10a014ee8;
                      puVar39 = (undefined4 *)(plVar69[3] + uVar61 * 0x30);
                      *puVar39 = (int)uStack_2f0;
                      puVar39[1] = (int)uStack_2e0;
                      puVar39[2] = (int)uStack_2d0;
                      puVar39[3] = (int)uStack_2c0;
                      puVar39[4] = (int)((ulong)uStack_2f0 >> 0x20);
                      puVar39[5] = (int)((ulong)uStack_2e0 >> 0x20);
                      puVar39[6] = (int)(uStack_2d0 >> 0x20);
                      puVar39[7] = (int)(uStack_2c0 >> 0x20);
                      puVar39[8] = (float)uStack_2e8;
                      puVar39[9] = ppuStack_2d8._0_4_;
                      puVar39[10] = (undefined4)lStack_2c8;
                      puVar39[0xb] = uStack_2b8;
                      FUN_10a005448(&uStack_2f0,&uStack_1b0,lVar64 + 4);
                    }
                    else {
                      uStack_3a8 = (uint)(*(long *)(lVar68 + 0x40) != *(long *)(lVar68 + 0x48));
                      if ((uVar14 >> 5 & 1) == 0) {
                        if (*(long *)(lVar68 + 0x40) == *(long *)(lVar68 + 0x48)) {
                          uStack_3a8 = 0;
                        }
                        else {
                          FUN_10a0101f0(&uStack_2f0,param_5,ppppppuVar71,puVar38[7],0,0);
                          uStack_1a8 = uStack_2e8;
                          uStack_1b0 = (uint ******)uStack_2f0;
                          uStack_1a0 = (uint *****)uStack_2e0;
                          uStack_3a8 = 1;
                        }
                        goto LAB_10a0139f4;
                      }
LAB_10a0138f0:
                      ppppppuVar65 = (uint ******)puVar38[7];
                      ppppppuVar27 = ppppppuVar71;
                      FUN_10a00ff8c();
                      ppppppuVar28 = ppppppuVar71;
                      FUN_10a425ccc();
                      if ((ppppppuVar28 == (uint ******)0x0) ||
                         (((ulong)ppppppuVar28[0x30] & 0x12) != 0)) {
                        if (uStack_3a8 == 0) {
                          ppppuStack_1c8 = (uint ****)0xff7fffff00000000;
                          pppppuStack_1d0 = (uint *****)0x0;
                          ppppuStack_1c0 = (uint ****)0xff7fffffff7fffff;
                        }
                        else {
                          FUN_10a0101f0(&pppppuStack_1d0,param_5,ppppppuVar71,ppppppuVar65,0,0);
                        }
                      }
                      else {
                        uVar59 = *(uint *)(ppppppuVar27 + 0x22);
                        if (uVar59 != 0xffffffff) {
                          uVar50 = ((long)ppppppuVar27[0x20] - (long)ppppppuVar27[0x1f] >> 3) *
                                   0x6db6db6db6db6db7;
                          if (uVar59 <= uVar50 && uVar50 - uVar59 != 0) {
                            ppppuStack_358 = (uint ****)(ppppppuVar27[0x1f] + (ulong)uVar59 * 7);
                            goto LAB_10a013a7c;
                          }
LAB_10a014ee4:
                          FUN_10ab725fc();
                          goto LAB_10a014ee8;
                        }
                        ppppuStack_358 = (uint ****)0x0;
LAB_10a013a7c:
                        uVar59 = *(uint *)((long)ppppppuVar27 + 0x114);
                        if (uVar59 == 0xffffffff) {
                          ppppuStack_360 = (uint ****)0x0;
                        }
                        else {
                          uVar50 = ((long)ppppppuVar27[0x20] - (long)ppppppuVar27[0x1f] >> 3) *
                                   0x6db6db6db6db6db7;
                          if (uVar50 < uVar59 || uVar50 - uVar59 == 0) goto LAB_10a014ee4;
                          ppppuStack_360 = (uint ****)(ppppppuVar27[0x1f] + (ulong)uVar59 * 7);
                        }
                        uVar59 = *(uint *)(ppppppuVar27 + 0x26);
                        if (uVar59 == 0xffffffff) {
                          ppppuStack_3a0 = (uint ****)0x0;
                        }
                        else {
                          uVar50 = ((long)ppppppuVar27[0x20] - (long)ppppppuVar27[0x1f] >> 3) *
                                   0x6db6db6db6db6db7;
                          if (uVar50 < uVar59 || uVar50 - uVar59 == 0) goto LAB_10a014ee4;
                          ppppuStack_3a0 = (uint ****)(ppppppuVar27[0x1f] + (ulong)uVar59 * 7);
                        }
                        uVar59 = *(uint *)(ppppppuVar27 + 0x1e);
                        if (uVar59 == 0) {
                          uVar58 = 0;
                        }
                        else {
                          uVar58 = 0;
                          if ((ulong)uVar59 != 0) {
                            uVar58 = (uint)((ulong)((long)ppppppuVar27[3] - (long)ppppppuVar27[2]) /
                                           (ulong)uVar59);
                          }
                        }
                        lVar64 = *(long *)(param_5 + 0x100);
                        ppppppuVar29 = ppppppuVar65;
                        (*(code *)(*ppppppuVar65)[6])();
                        uVar50 = (ulong)uVar58;
                        *(undefined8 *)(lVar64 + 0x80) = 0;
                        ppppppuVar30 = ppppppuVar29;
                        if ((uStack_3a8 == 0) ||
                           (ppppppuVar30 = ppppppuVar71, FUN_10a410af8(),
                           *(char *)(ppppppuVar30 + 8) != '\x01')) {
                          bVar56 = false;
                        }
                        else {
                          ppppppuVar30 = (uint ******)&uStack_2f0;
                          FUN_10a0101f0(ppppppuVar30,param_5,ppppppuVar71,0,ppppppuVar29,uVar50);
                          bVar56 = true;
                        }
                        if (*(ulong *)(lVar64 + 0x80) != uVar50) {
                          ppppppuVar30 = (uint ******)(lVar64 + 0x78);
                          func_0x000104bec9f0(ppppppuVar30,uVar50,0);
                        }
                        if (!bVar56) {
                          uVar44 = 0;
                          pfVar41 = (float *)((long)ppppppuVar29 + 0xc);
                          while( true ) {
                            uVar59 = *(uint *)(ppppppuVar27 + 0x1e);
                            if (uVar59 == 0) {
                              uVar46 = 0;
                            }
                            else {
                              uVar46 = 0;
                              if ((ulong)uVar59 != 0) {
                                uVar46 = (ulong)((long)ppppppuVar27[3] - (long)ppppppuVar27[2]) /
                                         (ulong)uVar59;
                              }
                              uVar46 = uVar46 & 0xffffffff;
                            }
                            if (uVar46 <= uVar44) break;
                            iVar57 = *(int *)(ppppuStack_358 + 5);
                            FUN_10ab6e898();
                            if (iVar57 == *(int *)(ppppppuVar30 + 5)) {
                              func_0x00010ab4d4d0(&uStack_2f0,ppppppuVar27,ppppuStack_358);
                              ppppppuVar30 = (uint ******)uStack_2f0;
                              (*(code *)*(uint *****)((long)*uStack_2f0 + 0x10))(uStack_2f0,uVar44);
                              fVar80 = fVar79;
                              fVar81 = param_2;
                              (*(code *)(*ppppppuVar30)[1])();
                              fVar84 = 0.0;
                              fVar82 = fVar79;
                              fVar83 = param_2;
                            }
                            else {
                              iVar57 = *(int *)(ppppuStack_358 + 5);
                              FUN_10ab6e728();
                              fVar84 = 0.0;
                              fVar80 = fVar79;
                              fVar81 = param_2;
                              fVar82 = 0.0;
                              fVar83 = 0.0;
                              if (iVar57 == *(int *)(ppppppuVar30 + 5)) {
                                func_0x00010ab4d7d8(&uStack_2f0,ppppppuVar27,ppppuStack_358);
                                ppppppuVar30 = (uint ******)uStack_2f0;
                                (*(code *)*(uint *****)((long)*uStack_2f0 + 0x10))
                                          (uStack_2f0,uVar44);
                                fVar84 = (float)param_3;
                                fVar80 = fVar79;
                                fVar81 = param_2;
                                (*(code *)(*ppppppuVar30)[1])();
                                fVar82 = fVar79;
                                fVar83 = param_2;
                              }
                            }
                            if (uVar50 == uVar44) goto LAB_10a014ee8;
                            pfVar41[-3] = fVar82;
                            pfVar41[-2] = fVar83;
                            pfVar41[-1] = fVar84;
                            iVar57 = *(int *)(ppppuStack_360 + 5);
                            FUN_10ab6e9d8();
                            fVar84 = 0.0;
                            fVar79 = fVar80;
                            param_2 = fVar81;
                            fVar82 = 0.0;
                            fVar83 = 0.0;
                            if (iVar57 == *(int *)(ppppppuVar30 + 5)) {
                              func_0x00010ab4d7d8(&uStack_2f0,ppppppuVar27,ppppuStack_360);
                              ppppppuVar30 = (uint ******)uStack_2f0;
                              (*(code *)*(uint *****)((long)*uStack_2f0 + 0x10))(uStack_2f0,uVar44);
                              fVar84 = (float)param_3;
                              fVar79 = fVar80;
                              param_2 = fVar81;
                              (*(code *)(*ppppppuVar30)[1])();
                              fVar82 = fVar81;
                              fVar83 = fVar80;
                            }
                            *pfVar41 = fVar83;
                            pfVar41[1] = fVar82;
                            uVar44 = uVar44 + 1;
                            pfVar41[2] = fVar84;
                            pfVar41 = pfVar41 + 6;
                          }
                        }
                        func_0x00010ab4dae0(&plStack_f0,ppppppuVar27,ppppuStack_3a0);
                        FUN_10ab4ccac(&uStack_d8,ppppppuVar27);
                        if (0 < *(long *)(lVar64 + 0x80)) {
                          uStack_2f0 = *(undefined ***)(lVar64 + 0x78);
                          uStack_2e8 = (uint *****)((ulong)uStack_2e8 & 0xffffffff00000000);
                          FUN_10a0433f4(&uStack_2f0);
                        }
                        pppppuVar11 = ppppppuVar27[0x12];
                        for (pppppuVar45 = ppppppuVar27[0x11]; pppppuVar45 != pppppuVar11;
                            pppppuVar45 = pppppuVar45 + 6) {
                          ppppuVar47 = *pppppuVar45;
                          ppppuVar12 = pppppuVar45[1];
                          if (ppppuVar47 != ppppuVar12) {
                            *(undefined8 *)(lVar64 + 0x98) = *(undefined8 *)(lVar64 + 0x90);
                            *(undefined8 *)(lVar64 + 0xb0) = *(undefined8 *)(lVar64 + 0xa8);
                            FUN_10a01066c(lVar64 + 0x90,(long)ppppuVar12 - (long)ppppuVar47 >> 2);
                            FUN_10a01066c(lVar64 + 0xa8,
                                          (long)pppppuVar45[1] - (long)*pppppuVar45 >> 2);
                            ppppuVar47 = *pppppuVar45;
                            if (pppppuVar45[1] != ppppuVar47) {
                              uVar44 = 0;
                              do {
                                uVar46 = (ulong)*(uint *)((long)ppppuVar47 + uVar44 * 4);
                                uVar51 = ((long)ppppppuVar27[0xc] - (long)ppppppuVar27[0xb] >> 5) *
                                         -0x5555555555555555;
                                if (uVar46 <= uVar51 && uVar51 - uVar46 != 0) {
                                  pppppuVar70 = ppppppuVar27[0xb] + uVar46 * 0xc;
                                  ppppppuVar30 = ppppppuVar28 + 0x3e;
                                  FUN_10a063240(ppppppuVar30,pppppuVar70);
                                  if (((ppppppuVar30 != (uint ******)0x0) &&
                                      (pppppuVar31 = ppppppuVar30[7], pppppuVar31 != (uint *****)0x0
                                      )) && (__ZNSt3__119__shared_weak_count4lockEv(),
                                            uStack_140 = pppppuVar31, pppppuVar31 != (uint *****)0x0
                                            )) {
                                    ppppuStack_148 = (uint ****)ppppppuVar30[6];
                                    if ((uint *****)ppppuStack_148 != (uint *****)0x0) {
                                      ppppuVar47 = (uint ****)ppppuStack_148[0x28];
                                      if ((*(byte *)((long)ppppuVar47 + 0x2a) & 0x24) != 0) {
                                        FUN_10a3e8fd4(ppppuVar47);
                                      }
                                      func_0x000109519fd0(&uStack_2f0,ppppuVar47 + 0x18,
                                                          pppppuVar70 + 4);
                                      if ((ulong)(*(long *)(lVar64 + 0x98) -
                                                  *(long *)(lVar64 + 0x90) >> 6) <= uVar44)
                                      goto LAB_10a014ee8;
                                      puVar40 = (undefined8 *)
                                                (*(long *)(lVar64 + 0x90) + uVar44 * 0x40);
                                      puVar40[5] = lStack_2c8;
                                      puVar40[4] = uStack_2d0;
                                      puVar40[7] = CONCAT44(uStack_2b4,uStack_2b8);
                                      puVar40[6] = uStack_2c0;
                                      puVar40[1] = uStack_2e8;
                                      *puVar40 = uStack_2f0;
                                      puVar40[3] = ppuStack_2d8;
                                      puVar40[2] = uStack_2e0;
                                      if (((ulong)(*(long *)(lVar64 + 0x98) -
                                                   *(long *)(lVar64 + 0x90) >> 6) <= uVar44) ||
                                         ((ulong)(*(long *)(lVar64 + 0xb0) -
                                                  *(long *)(lVar64 + 0xa8) >> 6) <= uVar44))
                                      goto LAB_10a014ee8;
                                      puVar40 = (undefined8 *)
                                                (*(long *)(lVar64 + 0x90) + uVar44 * 0x40);
                                      uVar55 = puVar40[3];
                                      uVar13 = puVar40[2];
                                      uVar10 = puVar40[5];
                                      uStack_128 = *(ulong *)*(undefined1 (*) [12])(puVar40 + 4);
                                      auVar18 = *(undefined1 (*) [12])(puVar40 + 4);
                                      uStack_118 = (undefined4)(uStack_128 >> 0x20);
                                      uVar72 = *puVar40;
                                      uVar73 = *(undefined4 *)((long)puVar40 + 0x14);
                                      puVar63 = (undefined8 *)
                                                (*(long *)(lVar64 + 0xa8) + uVar44 * 0x40);
                                      uStack_110 = *(undefined4 *)(puVar40 + 1);
                                      uStack_100 = *(undefined4 *)((long)puVar40 + 0xc);
                                      uVar76 = *(undefined4 *)((long)puVar40 + 4);
                                      puVar63[1] = puVar40[1];
                                      *puVar63 = uVar72;
                                      puVar63[3] = uVar55;
                                      puVar63[2] = uVar13;
                                      puVar63[5] = uVar10;
                                      puVar63[4] = uStack_128;
                                      puVar63[7] = 0x3f80000000000000;
                                      puVar63[6] = 0;
                                      pppppuStack_130 =
                                           (uint *****)CONCAT44((int)uVar13,(int)uVar72);
                                      uStack_128 = uStack_128 & 0xffffffff;
                                      uStack_120 = CONCAT44(uVar73,uVar76);
                                      uStack_114 = 0;
                                      uStack_10c = CONCAT44(auVar18._8_4_,(int)uVar55);
                                      uStack_104 = 0;
                                      uStack_fc = CONCAT44((int)((ulong)uVar10 >> 0x20),
                                                           (int)((ulong)uVar55 >> 0x20));
                                      uStack_f4 = 0x3f800000;
                                      func_0x0001094f5708(&uStack_2f0,&pppppuStack_130);
                                      if ((ulong)(*(long *)(lVar64 + 0xb0) -
                                                  *(long *)(lVar64 + 0xa8) >> 6) <= uVar44)
                                      goto LAB_10a014ee8;
                                      puVar40 = (undefined8 *)
                                                (*(long *)(lVar64 + 0xa8) + uVar44 * 0x40);
                                      fVar79 = SUB84(uStack_2f0,0);
                                      param_2 = SUB84(uStack_2e0,0);
                                      puVar40[5] = lStack_2c8;
                                      puVar40[4] = uStack_2d0;
                                      puVar40[7] = CONCAT44(uStack_2b4,uStack_2b8);
                                      puVar40[6] = uStack_2c0;
                                      puVar40[1] = uStack_2e8;
                                      *puVar40 = uStack_2f0;
                                      puVar40[3] = ppuStack_2d8;
                                      puVar40[2] = uStack_2e0;
                                      param_3 = uStack_2d0;
                                      param_4 = uStack_2c0;
                                    }
                                    pppppuVar70 = pppppuVar31 + 1;
                                    do {
                                      ppppuVar47 = *pppppuVar70;
                                      cVar17 = '\x01';
                                      bVar56 = (bool)ExclusiveMonitorPass(pppppuVar70,0x10);
                                      if (bVar56) {
                                        *pppppuVar70 = (uint ****)((long)ppppuVar47 + -1);
                                        cVar17 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar17 != '\0');
                                    if (ppppuVar47 == (uint ****)0x0) {
                                      (*(code *)(*pppppuVar31)[2])(pppppuVar31);
                                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar31)
                                      ;
                                    }
                                  }
                                }
                                uVar44 = uVar44 + 1;
                                ppppuVar47 = *pppppuVar45;
                              } while (uVar44 < (ulong)((long)pppppuVar45[1] - (long)ppppuVar47 >> 2
                                                       ));
                            }
                            plVar34 = plStack_f0;
                            ppppuVar12 = pppppuVar45[4];
                            for (ppppuVar47 = pppppuVar45[3]; ppppuVar47 != ppppuVar12;
                                ppppuVar47 = (uint ****)((long)ppppuVar47 + 0xc)) {
                              if (2 < *(uint *)((long)ppppuVar47 + 4)) {
                                uVar59 = 0;
                                uVar67 = *(uint *)ppppuVar47 / 3;
                                do {
                                  FUN_10ab4e710(&pppppuStack_130,&uStack_d8,uVar59 + uVar67);
                                  FUN_10ab4e794(&uStack_2f0,&pppppuStack_130,0);
                                  if ((uint ******)uStack_2f0 == (uint ******)0x0) {
                                    auStack_e4[0] = (uint)uStack_2e8._4_4_;
                                  }
                                  else {
                                    if ((char)uStack_2e8 == '\x02') {
                                      uVar35 = (uint)*(ushort *)uStack_2f0;
                                    }
                                    else {
                                      if ((char)uStack_2e8 != '\x04') {
                                        auStack_e4[0] = 0;
                                        goto LAB_10a013ee0;
                                      }
                                      uVar35 = *(uint *)uStack_2f0;
                                    }
                                    auStack_e4[0] = (int)(float)uStack_2e0 + uVar35;
                                  }
LAB_10a013ee0:
                                  FUN_10ab4e710(auStack_160,&uStack_d8,uVar59 + uVar67);
                                  FUN_10ab4e794(&ppppuStack_148,auStack_160,1);
                                  if ((uint *****)ppppuStack_148 == (uint *****)0x0) {
                                    auStack_e4[1] = uStack_140._4_4_;
                                  }
                                  else {
                                    if ((char)uStack_140 == '\x02') {
                                      uVar35 = (uint)*(ushort *)ppppuStack_148;
                                    }
                                    else {
                                      if ((char)uStack_140 != '\x04') {
                                        auStack_e4[1] = 0;
                                        goto LAB_10a013f44;
                                      }
                                      uVar35 = *(uint *)ppppuStack_148;
                                    }
                                    auStack_e4[1] = iStack_138 + uVar35;
                                  }
LAB_10a013f44:
                                  FUN_10ab4e710(auStack_190,&uStack_d8,uVar59 + uVar67);
                                  FUN_10ab4e794(&puStack_178,auStack_190,2);
                                  auStack_e4[2] = iStack_16c;
                                  if (puStack_178 != (uint *)0x0) {
                                    if (cStack_170 == '\x02') {
                                      uVar35 = (uint)(ushort)*puStack_178;
                                    }
                                    else {
                                      if (cStack_170 != '\x04') {
                                        auStack_e4[2] = 0;
                                        goto LAB_10a013fa8;
                                      }
                                      uVar35 = *puStack_178;
                                    }
                                    auStack_e4[2] = iStack_168 + uVar35;
                                  }
LAB_10a013fa8:
                                  lVar68 = 0;
                                  do {
                                    uVar35 = *(uint *)((long)auStack_e4 + lVar68);
                                    uVar44 = (ulong)uVar35;
                                    if (uVar35 < uVar58 && uVar44 < *(ulong *)(lVar64 + 0x80)) {
                                      uVar46 = 1L << (uVar44 & 0x3f);
                                      uVar51 = *(ulong *)(*(long *)(lVar64 + 0x78) +
                                                         (ulong)(uVar35 >> 6) * 8);
                                      if ((uVar51 & uVar46) == 0) {
                                        *(ulong *)(*(long *)(lVar64 + 0x78) +
                                                  (ulong)(uVar35 >> 6) * 8) = uVar51 | uVar46;
                                        (**(code **)(*plVar34 + 0x10))(plVar34,uVar44);
                                        fVar81 = (float)param_3;
                                        uVar36 = (uint)fVar81;
                                        uVar52 = (uint)param_2;
                                        fVar80 = (float)param_4;
                                        uVar43 = (uint)fVar80;
                                        uVar49 = (uint)fVar79;
                                        uVar7 = uVar49;
                                        if ((int)uVar49 <= (int)uVar52) {
                                          uVar7 = uVar52;
                                        }
                                        if ((int)uVar7 <= (int)uVar36) {
                                          uVar7 = uVar36;
                                        }
                                        if ((int)uVar7 <= (int)uVar43) {
                                          uVar7 = uVar43;
                                        }
                                        if (0x7fffffff < uVar7) {
                                          uVar7 = 0xffffffff;
                                        }
                                        lVar8 = *(long *)(lVar64 + 0x90);
                                        uVar44 = *(long *)(lVar64 + 0x98) - lVar8 >> 6;
                                        if ((int)uVar7 < (int)uVar44) {
                                          if (((uVar44 <= (ulong)(long)(int)uVar49) ||
                                              (uVar44 <= (ulong)(long)(int)uVar52)) ||
                                             ((uVar44 <= (ulong)(long)(int)uVar36 ||
                                              (uVar46 = (ulong)(int)uVar43, uVar44 <= uVar46))))
                                          goto LAB_10a014ee8;
                                          uVar44 = (ulong)(int)uVar49;
                                          lVar9 = *(long *)(lVar64 + 0xa8);
                                          uVar51 = *(long *)(lVar64 + 0xb0) - lVar9 >> 6;
                                          if ((((uVar51 <= uVar44) ||
                                               (uVar53 = (ulong)(int)uVar52, uVar51 <= uVar53)) ||
                                              (uVar54 = (ulong)(int)uVar36, uVar51 <= uVar54)) ||
                                             (uVar51 <= uVar46)) goto LAB_10a014ee8;
                                          fVar81 = fVar81 - (float)(int)fVar81;
                                          param_2 = param_2 - (float)(int)param_2;
                                          fVar80 = fVar80 - (float)(int)fVar80;
                                          fVar77 = 1.0 - (fVar80 + fVar81 + param_2);
                                          ppppppuVar30 = ppppppuVar29 + (ulong)uVar35 * 3;
                                          fVar86 = *(float *)ppppppuVar30;
                                          fVar85 = *(float *)((long)ppppppuVar30 + 4);
                                          fVar78 = *(float *)(ppppppuVar30 + 1);
                                          fVar75 = *(float *)((long)ppppppuVar30 + 0xc);
                                          fVar84 = *(float *)(ppppppuVar30 + 2);
                                          fVar83 = *(float *)((long)ppppppuVar30 + 0x14);
                                          puVar40 = (undefined8 *)(lVar8 + uVar44 * 0x40);
                                          puVar63 = (undefined8 *)(lVar8 + uVar53 * 0x40);
                                          puVar1 = (undefined8 *)(lVar8 + uVar54 * 0x40);
                                          fVar88 = *(float *)(puVar40 + 1);
                                          fVar89 = *(float *)(puVar40 + 3);
                                          fVar90 = *(float *)(puVar40 + 5);
                                          fVar94 = *(float *)(puVar40 + 7);
                                          fVar91 = *(float *)(puVar63 + 1);
                                          fVar95 = *(float *)(puVar63 + 3);
                                          fVar96 = *(float *)(puVar63 + 5);
                                          fVar101 = *(float *)(puVar63 + 7);
                                          fVar92 = *(float *)(puVar1 + 1);
                                          fVar97 = *(float *)(puVar1 + 3);
                                          fVar98 = *(float *)(puVar1 + 5);
                                          fVar102 = *(float *)(puVar1 + 7);
                                          puVar2 = (undefined8 *)(lVar8 + uVar46 * 0x40);
                                          fVar93 = *(float *)(puVar2 + 1);
                                          fVar99 = *(float *)(puVar2 + 3);
                                          fVar100 = *(float *)(puVar2 + 5);
                                          fVar103 = *(float *)(puVar2 + 7);
                                          puVar3 = (undefined8 *)(lVar9 + uVar44 * 0x40);
                                          puVar4 = (undefined8 *)(lVar9 + uVar53 * 0x40);
                                          puVar5 = (undefined8 *)(lVar9 + uVar54 * 0x40);
                                          puVar6 = (undefined8 *)(lVar9 + uVar46 * 0x40);
                                          fVar87 = fVar77 * (fVar75 * *(float *)(puVar3 + 1) +
                                                             fVar84 * *(float *)(puVar3 + 3) +
                                                            fVar83 * *(float *)(puVar3 + 5) +
                                                            *(float *)(puVar3 + 7)) +
                                                   param_2 * (fVar75 * *(float *)(puVar4 + 1) +
                                                              fVar84 * *(float *)(puVar4 + 3) +
                                                             fVar83 * *(float *)(puVar4 + 5) +
                                                             *(float *)(puVar4 + 7)) +
                                                   fVar81 * (fVar75 * *(float *)(puVar5 + 1) +
                                                             fVar84 * *(float *)(puVar5 + 3) +
                                                            fVar83 * *(float *)(puVar5 + 5) +
                                                            *(float *)(puVar5 + 7)) +
                                                   fVar80 * (fVar75 * *(float *)(puVar6 + 1) +
                                                             fVar84 * *(float *)(puVar6 + 3) +
                                                            fVar83 * *(float *)(puVar6 + 5) +
                                                            *(float *)(puVar6 + 7));
                                          fVar79 = ((float)*puVar3 * fVar75 +
                                                    (float)puVar3[2] * fVar84 +
                                                   (float)puVar3[4] * fVar83 + (float)puVar3[6]) *
                                                   fVar77 + ((float)*puVar4 * fVar75 +
                                                             (float)puVar4[2] * fVar84 +
                                                            (float)puVar4[4] * fVar83 +
                                                            (float)puVar4[6]) * param_2 +
                                                   ((float)*puVar5 * fVar75 +
                                                    (float)puVar5[2] * fVar84 +
                                                   (float)puVar5[4] * fVar83 + (float)puVar5[6]) *
                                                   fVar81;
                                          fVar82 = ((float)((ulong)*puVar3 >> 0x20) * fVar75 +
                                                    (float)((ulong)puVar3[2] >> 0x20) * fVar84 +
                                                   (float)((ulong)puVar3[4] >> 0x20) * fVar83 +
                                                   (float)((ulong)puVar3[6] >> 0x20)) * fVar77 +
                                                   ((float)((ulong)*puVar4 >> 0x20) * fVar75 +
                                                    (float)((ulong)puVar4[2] >> 0x20) * fVar84 +
                                                   (float)((ulong)puVar4[4] >> 0x20) * fVar83 +
                                                   (float)((ulong)puVar4[6] >> 0x20)) * param_2 +
                                                   ((float)((ulong)*puVar5 >> 0x20) * fVar75 +
                                                    (float)((ulong)puVar5[2] >> 0x20) * fVar84 +
                                                   (float)((ulong)puVar5[4] >> 0x20) * fVar83 +
                                                   (float)((ulong)puVar5[6] >> 0x20)) * fVar81;
                                          param_3 = CONCAT44(fVar82,fVar79);
                                          fVar74 = (float)*puVar6 * fVar75 +
                                                   (float)puVar6[2] * fVar84;
                                          fVar84 = (float)((ulong)*puVar6 >> 0x20) * fVar75 +
                                                   (float)((ulong)puVar6[2] >> 0x20) * fVar84;
                                          param_4 = CONCAT44(fVar84,fVar74);
                                          fVar79 = fVar79 + (fVar74 + (float)puVar6[4] * fVar83 +
                                                                      (float)puVar6[6]) * fVar80;
                                          fVar82 = fVar82 + (fVar84 + (float)((ulong)puVar6[4] >>
                                                                             0x20) * fVar83 +
                                                                      (float)((ulong)puVar6[6] >>
                                                                             0x20)) * fVar80;
                                          *ppppppuVar30 =
                                               (uint *****)
                                               CONCAT44(((float)((ulong)*puVar40 >> 0x20) * fVar86 +
                                                         (float)((ulong)puVar40[2] >> 0x20) * fVar85
                                                        + (float)((ulong)puVar40[4] >> 0x20) *
                                                          fVar78 + (float)((ulong)puVar40[6] >> 0x20
                                                                          )) * fVar77 +
                                                        ((float)((ulong)*puVar63 >> 0x20) * fVar86 +
                                                         (float)((ulong)puVar63[2] >> 0x20) * fVar85
                                                        + (float)((ulong)puVar63[4] >> 0x20) *
                                                          fVar78 + (float)((ulong)puVar63[6] >> 0x20
                                                                          )) * param_2 +
                                                        ((float)((ulong)*puVar1 >> 0x20) * fVar86 +
                                                         (float)((ulong)puVar1[2] >> 0x20) * fVar85
                                                        + (float)((ulong)puVar1[4] >> 0x20) * fVar78
                                                          + (float)((ulong)puVar1[6] >> 0x20)) *
                                                        fVar81 + ((float)((ulong)*puVar2 >> 0x20) *
                                                                  fVar86 + (float)((ulong)puVar2[2]
                                                                                  >> 0x20) * fVar85
                                                                 + (float)((ulong)puVar2[4] >> 0x20)
                                                                   * fVar78 +
                                                                   (float)((ulong)puVar2[6] >> 0x20)
                                                                 ) * fVar80,
                                                        ((float)*puVar40 * fVar86 +
                                                         (float)puVar40[2] * fVar85 +
                                                        (float)puVar40[4] * fVar78 +
                                                        (float)puVar40[6]) * fVar77 +
                                                        ((float)*puVar63 * fVar86 +
                                                         (float)puVar63[2] * fVar85 +
                                                        (float)puVar63[4] * fVar78 +
                                                        (float)puVar63[6]) * param_2 +
                                                        ((float)*puVar1 * fVar86 +
                                                         (float)puVar1[2] * fVar85 +
                                                        (float)puVar1[4] * fVar78 + (float)puVar1[6]
                                                        ) * fVar81 +
                                                        ((float)*puVar2 * fVar86 +
                                                         (float)puVar2[2] * fVar85 +
                                                        (float)puVar2[4] * fVar78 + (float)puVar2[6]
                                                        ) * fVar80);
                                          *(float *)(ppppppuVar30 + 1) =
                                               fVar77 * (fVar86 * fVar88 + fVar85 * fVar89 +
                                                        fVar78 * fVar90 + fVar94) +
                                               param_2 * (fVar86 * fVar91 + fVar85 * fVar95 +
                                                         fVar78 * fVar96 + fVar101) +
                                               fVar81 * (fVar86 * fVar92 + fVar85 * fVar97 +
                                                        fVar78 * fVar98 + fVar102) +
                                               fVar80 * (fVar86 * fVar93 + fVar85 * fVar99 +
                                                        fVar78 * fVar100 + fVar103);
                                          fVar80 = 1.0 / SQRT(fVar79 * fVar79 + fVar82 * fVar82 +
                                                              fVar87 * fVar87);
                                          fVar79 = fVar79 * fVar80;
                                          param_2 = fVar87 * fVar80;
                                          *(ulong *)((long)ppppppuVar30 + 0xc) =
                                               CONCAT44(fVar82 * fVar80,fVar79);
                                          *(float *)((long)ppppppuVar30 + 0x14) = param_2;
                                        }
                                      }
                                    }
                                    lVar68 = lVar68 + 4;
                                  } while (lVar68 != 0xc);
                                  uVar59 = uVar59 + 1;
                                } while (uVar59 < *(uint *)((long)ppppuVar47 + 4) / 3);
                              }
                            }
                          }
                        }
                        ppppuStack_1c8 = (uint ****)0xff7fffff00000000;
                        pppppuStack_1d0 = (uint *****)0x0;
                        ppppuStack_1c0 = (uint ****)0xff7fffffff7fffff;
                        if (uVar58 != 0) {
                          lVar64 = uVar50 * 0x18;
                          do {
                            func_0x00010a01069c(&uStack_2f0,&pppppuStack_1d0,ppppppuVar29);
                            ppppuStack_1c8 = (uint ****)uStack_2e8;
                            pppppuStack_1d0 = (uint *****)uStack_2f0;
                            ppppuStack_1c0 = (uint ****)uStack_2e0;
                            ppppppuVar29 = ppppppuVar29 + 3;
                            lVar64 = lVar64 + -0x18;
                          } while (lVar64 != 0);
                        }
                        if (plStack_f0 != (long *)0x0) {
                          (**(code **)(*plStack_f0 + 8))();
                        }
                        (*(code *)(*ppppppuVar65)[7])(ppppppuVar65);
                        (*(code *)(*ppppppuVar65)[8])(ppppppuVar65,0,0,uVar58 * 0x18,0);
                      }
                      uStack_1a8 = (uint *****)ppppuStack_1c8;
                      uStack_1b0 = (uint ******)pppppuStack_1d0;
                      uStack_1a0 = (uint *****)ppppuStack_1c0;
                      uVar50 = (plVar69[4] - plVar69[3] >> 4) * -0x5555555555555555;
                      if (uVar50 < uVar61 || uVar50 - uVar61 == 0) goto LAB_10a014ee8;
                      puVar40 = (undefined8 *)(plVar69[3] + uVar61 * 0x30);
                      puVar40[1] = 0;
                      *puVar40 = 0x3f800000;
                      puVar40[3] = 0;
                      puVar40[2] = 0x3f80000000000000;
                      puVar40[5] = 0x3f800000;
                      puVar40[4] = 0;
                      uStack_2e8 = (uint *****)ppppuStack_1c8;
                      uStack_2f0 = (undefined **)pppppuStack_1d0;
                      uStack_2e0 = (undefined **)ppppuStack_1c0;
                    }
                    uVar50 = (plVar69[7] - plVar69[6] >> 3) * -0x5555555555555555;
                    if (uVar50 < uVar61 || uVar50 - uVar61 == 0) goto LAB_10a014ee8;
                    uStack_3ac = uStack_3ac | lVar37 != lVar26;
                    param_4 = (ulong)(uint)uStack_2e8._4_4_;
                    param_2 = uStack_2f0._4_4_ - (float)uStack_2e0;
                    param_3 = (ulong)(uint)((float)uStack_2f0 - uStack_2e8._4_4_);
                    pfVar41 = (float *)(plVar69[6] + uVar61 * 0x18);
                    *pfVar41 = (float)uStack_2f0 - uStack_2e8._4_4_;
                    pfVar41[1] = param_2;
                    pfVar41[2] = (float)uStack_2e8 - uStack_2e0._4_4_;
                    pfVar41[3] = (float)uStack_2f0 + uStack_2e8._4_4_;
                    pfVar41[4] = uStack_2f0._4_4_ + (float)uStack_2e0;
                    pfVar41[5] = (float)uStack_2e8 + uStack_2e0._4_4_;
                    uStack_3a8 = uStack_3a8 | (uVar14 & 0x20) >> 5;
                    if (uStack_3ac != 0) {
                      uStack_3a8 = 1;
                    }
                    if (uStack_3a8 == 1) {
                      param_3 = (ulong)(uint)uStack_1a8._4_4_;
                      param_4 = (ulong)uStack_1a8 & 0xffffffff;
                      fVar82 = (float)uStack_1b0 - uStack_1a8._4_4_;
                      fVar84 = uStack_1b0._4_4_ - (float)uStack_1a0;
                      fVar83 = (float)uStack_1a8 - uStack_1a0._4_4_;
                      fVar81 = (float)uStack_1b0 + uStack_1a8._4_4_;
                      fVar80 = uStack_1b0._4_4_ + (float)uStack_1a0;
                      fVar79 = (float)uStack_1a8 + uStack_1a0._4_4_;
                      uVar55 = *puVar38;
                      uVar10 = puVar38[3];
                      uVar13 = puVar38[4];
                      puVar40 = (undefined8 *)plVar69[1];
                      param_2 = uStack_1b0._4_4_;
                      if (puVar40 < (undefined8 *)plVar69[2]) {
                        *puVar40 = uVar55;
                        *(uint *)(puVar40 + 1) = uStack_3ac;
                        *(float *)((long)puVar40 + 0xc) = fVar82;
                        *(float *)(puVar40 + 2) = fVar84;
                        *(float *)((long)puVar40 + 0x14) = fVar83;
                        *(float *)(puVar40 + 3) = fVar81;
                        *(float *)((long)puVar40 + 0x1c) = fVar80;
                        *(float *)(puVar40 + 4) = fVar79;
                        puVar40[5] = uVar13;
                        puVar40[6] = 0;
                        puVar63 = puVar40 + 8;
                        puVar40[7] = uVar10;
                      }
                      else {
                        lVar64 = *plVar69;
                        lVar37 = (long)puVar40 - lVar64;
                        uVar50 = (lVar37 >> 6) + 1;
                        if (uVar50 >> 0x3a != 0) {
                          FUN_10a044718();
                          goto LAB_10a014ee8;
                        }
                        uVar46 = plVar69[2] - lVar64;
                        uVar44 = (long)uVar46 >> 5;
                        if (uVar44 <= uVar50) {
                          uVar44 = uVar50;
                        }
                        if (0x7fffffffffffffbf < uVar46) {
                          uVar44 = 0x3ffffffffffffff;
                        }
                        if (uVar44 >> 0x3a != 0) {
                          func_0x000109ffded8();
                          goto LAB_10a014ee8;
                        }
                        lVar68 = uVar44 << 6;
                        __Znwm();
                        puVar40 = (undefined8 *)(lVar68 + lVar37);
                        *puVar40 = uVar55;
                        *(uint *)(puVar40 + 1) = uStack_3ac;
                        *(float *)((long)puVar40 + 0xc) = fVar82;
                        *(float *)(puVar40 + 2) = fVar84;
                        *(float *)((long)puVar40 + 0x14) = fVar83;
                        *(float *)(puVar40 + 3) = fVar81;
                        *(float *)((long)puVar40 + 0x1c) = fVar80;
                        *(float *)(puVar40 + 4) = fVar79;
                        puVar63 = puVar40 + 8;
                        puVar40[5] = uVar13;
                        puVar40[6] = 0;
                        puVar40[7] = uVar10;
                        _memcpy(puVar40 + (lVar37 >> 6) * -8,lVar64,lVar37);
                        *plVar69 = (long)(puVar40 + (lVar37 >> 6) * -8);
                        plVar69[1] = (long)puVar63;
                        plVar69[2] = lVar68 + uVar44 * 0x40;
                        if (lVar64 != 0) {
                          __ZdlPv(lVar64);
                        }
                      }
                      plVar69[1] = (long)puVar63;
                    }
                    if (((ulong)ppppppuVar22 & 1) == 0) {
                      lVar64 = plVar69[9];
                      lVar37 = plVar69[10];
                    }
                    else {
                      lVar64 = plVar69[9];
                      lVar37 = plVar69[10];
                      if (*(byte *)ppppppuVar21 == 1) {
                        if ((ulong)(lVar37 - lVar64 >> 1) <= uVar61) goto LAB_10a014ee8;
                        *(ushort *)(lVar64 + uVar61 * 2) = *(ushort *)(ppppppuVar21 + 9);
                      }
                    }
                    uVar50 = lVar37 - lVar64 >> 1;
                    if (*(char *)(puVar38 + 6) != '\0') {
                      if (uVar50 <= uVar61) goto LAB_10a014ee8;
                      *(ushort *)(lVar64 + uVar61 * 2) = *(ushort *)(lVar64 + uVar61 * 2) | 0x8000;
                      uVar48 = 0;
                      if ((int)ppppppuVar23 != 0) {
                        if (*(byte *)((long)ppppppuVar21 + 1) == 1) {
                          uVar48 = *(ushort *)((long)ppppppuVar21 + 0x4a);
                        }
                        else {
                          uVar48 = 0;
                        }
                      }
                      if ((ulong)(plVar69[0xd] - plVar69[0xc] >> 1) <= uVar61) goto LAB_10a014ee8;
                      *(ushort *)(plVar69[0xc] + uVar61 * 2) = uVar48;
                    }
                    if (uVar61 < uVar50) {
                      *(undefined2 *)(puVar38 + 0xb) = *(undefined2 *)(lVar64 + uVar61 * 2);
                      if (*param_5 == 1) {
                        FUN_109febc44(&uStack_2f0);
                        plVar34 = &uStack_2e0;
                        FUN_10a002568(plVar34,&UNK_10f631991,10);
                        __ZNSt3__19to_stringEi(&pppppuStack_130,uVar61);
                        uVar61 = uStack_128;
                        ppppppuVar21 = (uint ******)pppppuStack_130;
                        if (-1 < (long)uStack_120) {
                          uVar61 = uStack_120 >> 0x38;
                          ppppppuVar21 = &pppppuStack_130;
                        }
                        FUN_10a002568(plVar34,ppppppuVar21,uVar61);
                        FUN_10a002568();
                        *(uint *)((long)plVar34 + *(long *)(*plVar34 + -0x18) + 8) =
                             *(uint *)((long)plVar34 + *(long *)(*plVar34 + -0x18) + 8) & 0xffffffb5
                             | 8;
                        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEt();
                        FUN_10a002568();
                        FUN_10a00ff18(&uStack_d8,ppppppuVar71[0x2d]);
                        uVar61 = CONCAT17(uStack_c9,uStack_d0);
                        puVar40 = (undefined8 *)CONCAT17(uStack_d8._7_1_,(undefined7)uStack_d8);
                        if (-1 < (char)bStack_c1) {
                          uVar61 = (ulong)bStack_c1;
                          puVar40 = &uStack_d8;
                        }
                        FUN_10a002568(plVar34,puVar40,uVar61);
                        FUN_10a002568();
                        if ((long)uStack_120 < 0) {
                          __ZdlPv(pppppuStack_130);
                        }
                        if (*(char *)(puVar38 + 6) != '\0') {
                          FUN_10a002568(&uStack_2e0,&UNK_10f6318d0,7);
                        }
                        if (uStack_3a8 != 0) {
                          FUN_10a002568(&uStack_2e0,&UNK_10f631ad4,0x13);
                        }
                        func_0x00010a002480(&pppppuStack_130,&ppuStack_2d8,&uStack_d8);
                        uVar61 = uStack_128;
                        ppppppuVar21 = (uint ******)pppppuStack_130;
                        if (-1 < (long)uStack_120) {
                          uVar61 = uStack_120 >> 0x38;
                          ppppppuVar21 = &pppppuStack_130;
                        }
                        FUN_10a00edf0(param_6 + 0x10,4,ppppppuVar21,uVar61,param_6 + 8);
                        if ((long)uStack_120 < 0) {
                          __ZdlPv(pppppuStack_130);
                        }
                        uStack_2f0 = &PTR_SUB_1108a5a38;
                        appuStack_270[0] = &PTR_DAT_1108a5a88;
                        uStack_2e0 = &PTR_DAT_1108a5a60;
                        ppuStack_2d8 = &PTR_DAT_11088d7b0;
                        if (cStack_281 < '\0') {
                          __ZdlPv(uStack_298);
                        }
                        ppuStack_2d8 = ppuVar32;
                        __ZNSt3__16localeD1Ev(&uStack_2d0);
                        __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev
                                  (&uStack_2f0,&PTR_PTR_1108a5aa0);
                        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_270);
                      }
                      iStack_338 = iStack_338 + 1;
                      goto LAB_10a014b94;
                    }
                    goto LAB_10a014ee8;
                  }
                  *(undefined8 *)(lVar64 + 0x18) = 0;
                  *(undefined8 *)(lVar64 + 0x20) = 0;
                }
                if (*param_5 != 1) goto LAB_10a014b94;
                FUN_10a00ff18(&uStack_d8,ppppppuVar71[0x2d]);
                puVar38 = &uStack_d8;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                          (puVar38,0,&UNK_10f631a79,0x13);
                uStack_128 = puVar38[1];
                pppppuStack_130 = (uint *****)*puVar38;
                uStack_120 = puVar38[2];
                puVar38[1] = 0;
                puVar38[2] = 0;
                *puVar38 = 0;
                ppppppuVar21 = &pppppuStack_130;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (ppppppuVar21,&UNK_10f631a8d,0x38);
                uStack_2e0 = (undefined **)ppppppuVar21[2];
                uStack_2e8 = ppppppuVar21[1];
                uStack_2f0 = (undefined **)*ppppppuVar21;
                ppppppuVar21[1] = (uint *****)0x0;
                ppppppuVar21[2] = (uint *****)0x0;
                *ppppppuVar21 = (uint *****)0x0;
                ppppppuVar22 = (uint ******)uStack_2f0;
                bVar66 = uStack_2e0._7_1_;
                pppppuVar45 = uStack_2e8;
                ppppppuVar21 = (uint ******)uStack_2f0;
                if (-1 < (long)uStack_2e0) {
                  pppppuVar45 = (uint *****)(ulong)uStack_2e0._7_1_;
                  ppppppuVar21 = (uint ******)&uStack_2f0;
                }
                FUN_10a00edf0(param_6 + 0x10,2,ppppppuVar21,pppppuVar45,param_6 + 8);
              }
              if ((char)bVar66 < '\0') {
                __ZdlPv(ppppppuVar22);
              }
              if ((long)uStack_120 < 0) {
                __ZdlPv(pppppuStack_130);
              }
            }
          }
        }
LAB_10a014b94:
        uVar60 = uVar60 + 1;
        lVar64 = *(long *)(param_7 + 0x200);
        uVar61 = (*(long *)(param_7 + 0x208) - lVar64 >> 3) * 0x6fb586fb586fb587;
      } while (uVar60 <= uVar61 && uVar61 - uVar60 != 0);
    }
    ppuVar32 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puVar42 = *ppuVar32;
    if (((puVar42 != (undefined *)0x0) && (puVar42[0xc0] == '\x01')) &&
       (*(long *)(puVar42 + 0x80) != 0)) {
      FUN_10a08dbac(puVar42 + 0x18);
    }
    plVar34 = (long *)0x0;
    FUN_10a2421c8();
    FUN_10a244d68();
    uStack_2f0 = (undefined **)&UNK_10f631816;
    uStack_2e8 = (uint *****)0x14;
    if (plVar34 == (long *)0x0) {
      FUN_10a0edfc4(&uStack_2f0);
      goto LAB_10a014ee8;
    }
    plVar33 = plVar34;
    (**(code **)(*plVar34 + 0xe0))(plVar34);
    (**(code **)(*plVar34 + 0xe8))();
    plVar25 = (long *)*plVar34;
    lVar64 = plVar34[1];
    __ZNSt3__115recursive_mutex4lockEv(lVar64);
    if (*plVar69 != plVar69[1]) {
      FUN_10a012fec(&uStack_2f0,plVar33,plVar25);
      ppppppuVar21 = (uint ******)uStack_2f0;
      ___dynamic_cast(uStack_2f0,&PTR_DAT_110ae2620,&PTR_DAT_110b98940,0);
      func_0x000109a03e48(**(undefined8 **)(*(long *)(param_5 + 0x18) + 0x10),ppppppuVar21[0x1e],
                          *plVar69,plVar69[1] - *plVar69 >> 6);
      plVar69[1] = *plVar69;
      pppppuStack_130 = (uint *****)uStack_2f0;
      (**(code **)(*plVar25 + 0x30))(plVar25,0,0,0,0,&pppppuStack_130,1,param_12,0,0,0);
      pppppuVar45 = uStack_2e8;
      if (uStack_2e8 != (uint *****)0x0) {
        pppppuVar11 = uStack_2e8 + 1;
        do {
          ppppuVar47 = *pppppuVar11;
          cVar17 = '\x01';
          bVar56 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
          if (bVar56) {
            *pppppuVar11 = (uint ****)((long)ppppuVar47 + -1);
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        if (ppppuVar47 == (uint ****)0x0) {
          (*(code *)(*uStack_2e8)[2])(uStack_2e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar45);
        }
      }
    }
    if (*param_5 == 1) {
      __ZNSt3__19to_stringEi(&pppppuStack_130,iStack_338);
      ppppppuVar21 = &pppppuStack_130;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (ppppppuVar21,0,&UNK_10f631ae8,0x11);
      uStack_2e8 = ppppppuVar21[1];
      uStack_2f0 = (undefined **)*ppppppuVar21;
      uStack_2e0 = (undefined **)ppppppuVar21[2];
      ppppppuVar21[1] = (uint *****)0x0;
      ppppppuVar21[2] = (uint *****)0x0;
      *ppppppuVar21 = (uint *****)0x0;
      puVar38 = &uStack_2f0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar38,&UNK_10f631afa,10);
      uVar10 = *puVar38;
      uStack_d8._0_7_ = (undefined7)puVar38[1];
      uStack_d8._7_1_ = (undefined1)*(undefined8 *)((long)puVar38 + 0xf);
      uStack_d0 = (undefined7)((ulong)*(undefined8 *)((long)puVar38 + 0xf) >> 8);
      uVar16 = *(undefined1 *)((long)puVar38 + 0x17);
      puVar38[1] = 0;
      puVar38[2] = 0;
      *puVar38 = 0;
      if (*(char *)(lVar20 + 0x1f) < '\0') {
        __ZdlPv(*(undefined8 *)(lVar20 + 8));
      }
      *(undefined8 *)(lVar20 + 8) = uVar10;
      *(ulong *)(lVar20 + 0x10) = CONCAT17(uStack_d8._7_1_,(undefined7)uStack_d8);
      *(ulong *)(lVar20 + 0x17) = CONCAT71(uStack_d0,uStack_d8._7_1_);
      *(undefined1 *)(lVar20 + 0x1f) = uVar16;
      if ((long)uStack_2e0 < 0) {
        __ZdlPv(uStack_2f0);
      }
      if ((long)uStack_120 < 0) {
        __ZdlPv(pppppuStack_130);
      }
    }
    uStack_2f0 = (undefined **)**(undefined8 **)(param_5 + 0x38);
    uStack_2e8 = (uint *****)CONCAT44(uStack_2e8._4_4_,3);
    uStack_2e0 = (undefined **)plVar69[3];
    ppuStack_2d8 = (undefined **)plVar69[6];
    uStack_2d0 = plVar69[9];
    lStack_2c8 = plVar69[0xc];
    func_0x000109a13fc8(*uStack_2f0,&uStack_2f0);
    __ZNSt3__115recursive_mutex6unlockEv(lVar64);
    if (bVar15 != 0) {
      iVar57 = *(int *)(param_6 + 8);
      if (iVar57 < 2) {
        iVar57 = 1;
      }
      *(int *)(param_6 + 8) = iVar57 + -1;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar37 = plVar69[5] - lVar64 >> 4;
    uVar60 = lVar37 * -0x5555555555555555;
    if (uVar61 <= uVar60) {
      lVar37 = (((long)iVar57 * 0x30 - 0x30U) / 0x30) * 0x30 + 0x30;
      _bzero(lVar64,lVar37);
      plVar69[4] = lVar64 + lVar37;
LAB_10a013350:
      lVar64 = plVar69[6];
      plVar69[7] = lVar64;
      lVar37 = plVar69[8] - lVar64 >> 3;
      uVar60 = lVar37 * -0x5555555555555555;
      if (uVar61 <= uVar60) {
        lVar37 = (((long)iVar57 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
        _bzero(lVar64,lVar37);
        lVar64 = lVar64 + lVar37;
        goto LAB_10a013438;
      }
      if (0xaaaaaaaaaaaaaaa < uVar61) {
        func_0x00010a0446c0();
        goto LAB_10a014ee8;
      }
      uVar50 = lVar37 * 0x5555555555555556;
      if (uVar50 < uVar61 || uVar50 - uVar61 == 0) {
        uVar50 = uVar61;
      }
      if (0x555555555555554 < uVar60) {
        uVar50 = 0xaaaaaaaaaaaaaaa;
      }
      if (0xaaaaaaaaaaaaaaa < uVar50) goto LAB_10a014eac;
      lVar37 = uVar50 * 0x18;
      __Znwm();
      _bzero();
      plVar69[6] = lVar37;
      plVar69[7] = lVar37 + (((long)iVar57 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
      plVar69[8] = lVar37 + uVar50 * 0x18;
      if (lVar64 != 0) {
        __ZdlPv(lVar64);
      }
      goto LAB_10a01343c;
    }
    if (0x555555555555555 < uVar61) {
      func_0x00010a0446ac();
      goto LAB_10a014ee8;
    }
    uVar50 = lVar37 * 0x5555555555555556;
    if (uVar50 < uVar61 || uVar50 - uVar61 == 0) {
      uVar50 = uVar61;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar60) {
      uVar50 = 0x555555555555555;
    }
    if (uVar50 < 0x555555555555556) {
      lVar37 = uVar50 * 0x30;
      __Znwm();
      _bzero();
      plVar69[3] = lVar37;
      plVar69[4] = lVar37 + (((long)iVar57 * 0x30 - 0x30U) / 0x30) * 0x30 + 0x30;
      plVar69[5] = lVar37 + uVar50 * 0x30;
      if (lVar64 != 0) {
        __ZdlPv(lVar64);
      }
      goto LAB_10a013350;
    }
  }
LAB_10a014eac:
  func_0x000109ffded8();
LAB_10a014ee8:
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x10a014eec);
  (*pcVar19)();
}



/* Entry: 10a015150; end: 10a0151c3;  */

long FUN_10a015150(long param_1,uint param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((int)param_2 < -1) {
    uVar2 = (ulong)(param_2 & 0x7fffffff);
    uVar3 = (*(long *)(param_1 + 0x788) - *(long *)(param_1 + 0x780) >> 4) * -0x1111111111111111;
    if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
      return *(long *)(param_1 + 0x780) + uVar2 * 0xf0;
    }
  }
  else {
    uVar2 = (*(long *)(param_1 + 0x5e0) - *(long *)(param_1 + 0x5d8) >> 4) * -0x1111111111111111;
    if (param_2 <= uVar2 && uVar2 - param_2 != 0) {
      return *(long *)(param_1 + 0x5d8) + (ulong)param_2 * 0xf0;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0151c4);
  (*pcVar1)();
}



/* Entry: 10a0151c4; end: 10a015a03;  */

void FUN_10a0151c4(undefined4 param_1,long param_2,ulong param_3,long *param_4,long *param_5,
                  long *param_6,long *param_7,undefined8 *param_8,undefined8 *param_9)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  float fVar20;
  long *plStack_e8;
  long lStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  
  if (param_4 == (long *)0x0) {
    plVar18 = (long *)0x0;
    if (param_5 == (long *)0x0) goto LAB_10a015278;
LAB_10a015224:
    (**(code **)(*param_5 + 0xb8))();
    lVar19 = param_5[0x13];
  }
  else {
    (**(code **)(*param_4 + 0xb8))();
    plVar18 = (long *)param_4[0x13];
    if (param_5 != (long *)0x0) goto LAB_10a015224;
LAB_10a015278:
    lVar19 = 0;
  }
  plVar17 = (long *)0x0;
  if (param_6 != (long *)0x0) {
    (**(code **)(*param_6 + 0xb8))();
    plVar17 = (long *)param_6[0x13];
  }
  if (param_7 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    (**(code **)(*param_7 + 0xb8))();
    lVar7 = param_7[0x13];
  }
  plVar9 = (long *)((param_3 >> 0x20) +
                   ((lVar7 + ((long)plVar17 + (lVar19 + (long)plVar18 * 0x3c1) * 0x1f) * 0x1f) *
                    0x1f + (param_3 & 0xffffffff)) * 0x1f);
  plVar6 = (long *)(param_2 + 200);
  plVar8 = *(long **)(param_2 + 0xd0);
  if (plVar8 != (long *)0x0) {
    uVar10 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar10) == 0) {
      plVar11 = (long *)((ulong)plVar9 & uVar10);
    }
    else {
      plVar11 = plVar9;
      if (plVar8 <= plVar9) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar9 / (ulong)plVar8;
        }
        plVar11 = (long *)((long)plVar9 - uVar3 * (long)plVar8);
      }
    }
    puVar13 = *(undefined8 **)(*plVar6 + (long)plVar11 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar16 = (long *)*puVar13; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        plVar14 = (long *)plVar16[1];
        if (plVar14 == plVar9) {
          if ((long *)plVar16[2] == plVar9) goto LAB_10a0157a4;
        }
        else {
          if (((ulong)plVar8 & uVar10) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar10);
          }
          else if (plVar8 <= plVar14) {
            uVar3 = 0;
            if (plVar8 != (long *)0x0) {
              uVar3 = (ulong)plVar14 / (ulong)plVar8;
            }
            plVar14 = (long *)((long)plVar14 - uVar3 * (long)plVar8);
          }
          if (plVar14 != plVar11) break;
        }
      }
    }
  }
  uStack_d8 = SUB84(plVar17,0);
  uStack_d4 = (undefined4)((ulong)plVar17 >> 0x20);
  uStack_d0 = (undefined4)lVar7;
  uStack_cc = (undefined4)((ulong)lVar7 >> 0x20);
  uStack_c8 = (undefined4)param_3;
  uStack_c4 = (undefined4)(param_3 >> 0x20);
  plVar8 = (long *)**(undefined8 **)(param_2 + 0x18);
  plVar11 = (long *)(*(undefined8 **)(param_2 + 0x18))[1];
  plStack_e8 = plVar18;
  lStack_e0 = lVar19;
  plStack_a8 = plVar8;
  if ((plVar11 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_a0 = plVar11, plVar11 == (long *)0x0)) {
    FUN_10a043ecc();
LAB_10a015950:
    iVar5 = (int)plVar17;
    FUN_10a0edfc4(&plStack_e8);
  }
  else {
    plVar18 = (long *)0x30;
    __Znwm();
    plVar18[1] = 0;
    plVar18[2] = 0;
    *plVar18 = (long)&PTR_FUN_110b9d1a0;
    plStack_a8 = (long *)0x0;
    plStack_a0 = (long *)0x0;
    lVar19 = plVar8[2];
    plStack_90 = plVar8;
    plStack_88 = plVar11;
    func_0x0001099f09b0(lVar19,&plStack_e8,&lStack_98);
    iVar5 = (int)lVar19;
    if (iVar5 == 0) {
      plVar17 = plVar18 + 3;
      plVar18[3] = lStack_98;
      plVar18[4] = (long)plVar8;
      plVar18[5] = (long)plVar11;
      plVar8 = plVar11 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar19 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = lVar19 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
      plVar8 = plStack_a0;
      plStack_c0 = plVar17;
      plStack_b8 = plVar18;
      if (plStack_a0 != (long *)0x0) {
        plVar18 = plStack_a0 + 1;
        do {
          lVar19 = *plVar18;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar2) {
            *plVar18 = lVar19 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar17 = *(long **)(param_2 + 0xd0);
      if (plVar17 != (long *)0x0) {
        uVar10 = (long)plVar17 - 1;
        if (((ulong)plVar17 & uVar10) == 0) {
          plVar11 = (long *)(uVar10 & (ulong)plVar9);
        }
        else {
          plVar11 = plVar9;
          if (plVar17 <= plVar9) {
            uVar3 = 0;
            if (plVar17 != (long *)0x0) {
              uVar3 = (ulong)plVar9 / (ulong)plVar17;
            }
            plVar11 = (long *)((long)plVar9 - uVar3 * (long)plVar17);
          }
        }
        puVar13 = *(undefined8 **)(*plVar6 + (long)plVar11 * 8);
        if (puVar13 != (undefined8 *)0x0) {
          for (plVar16 = (long *)*puVar13; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
            plVar18 = (long *)plVar16[1];
            if (plVar18 == plVar9) {
              if ((long *)plVar16[2] == plVar9) goto LAB_10a01576c;
            }
            else {
              if (((ulong)plVar17 & uVar10) == 0) {
                plVar18 = (long *)((ulong)plVar18 & uVar10);
              }
              else if (plVar17 <= plVar18) {
                uVar3 = 0;
                if (plVar17 != (long *)0x0) {
                  uVar3 = (ulong)plVar18 / (ulong)plVar17;
                }
                plVar18 = (long *)((long)plVar18 - uVar3 * (long)plVar17);
              }
              if (plVar18 != plVar11) break;
            }
          }
        }
      }
      plVar16 = (long *)0x28;
      __Znwm();
      uStack_80 = 1;
      *plVar16 = 0;
      plVar16[1] = (long)plVar9;
      plVar16[2] = (long)plVar9;
      plVar16[4] = (long)plStack_b8;
      plVar16[3] = (long)plStack_c0;
      plStack_c0 = (long *)0x0;
      plStack_b8 = (long *)0x0;
      fVar20 = (float)(*(long *)(param_2 + 0xe0) + 1);
      plStack_90 = plVar16;
      plStack_88 = plVar6;
      if ((plVar17 == (long *)0x0) || (*(float *)(param_2 + 0xe8) * (float)plVar17 < fVar20)) {
        uVar10 = 1;
        if ((long *)0x2 < plVar17) {
          uVar10 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
        }
        plVar18 = (long *)(uVar10 | (long)plVar17 << 1);
        plVar8 = (long *)(long)(fVar20 / *(float *)(param_2 + 0xe8));
        if (plVar18 <= plVar8) {
          plVar18 = plVar8;
        }
        if ((long)plVar18 - 1U == 0) {
          plVar18 = (long *)0x2;
        }
        else if (((ulong)plVar18 & (long)plVar18 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          plVar17 = *(long **)(param_2 + 0xd0);
        }
        if (plVar17 < plVar18) {
LAB_10a015580:
          if ((ulong)plVar18 >> 0x3d != 0) {
            func_0x000109ffded8();
            goto LAB_10a01598c;
          }
          lVar19 = (long)plVar18 << 3;
          __Znwm();
          lVar7 = *plVar6;
          *plVar6 = lVar19;
          if (lVar7 != 0) {
            __ZdlPv();
          }
          plVar17 = (long *)0x0;
          *(long **)(param_2 + 0xd0) = plVar18;
          do {
            *(undefined8 *)(*plVar6 + (long)plVar17 * 8) = 0;
            plVar17 = (long *)((long)plVar17 + 1);
          } while (plVar18 != plVar17);
          plVar8 = *(long **)(param_2 + 0xd8);
          plVar17 = plVar18;
          if (plVar8 != (long *)0x0) {
            plVar11 = (long *)plVar8[1];
            uVar10 = (long)plVar18 - 1;
            if (((ulong)plVar18 & uVar10) == 0) {
              plVar11 = (long *)((ulong)plVar11 & uVar10);
            }
            else if (plVar18 <= plVar11) {
              uVar3 = 0;
              if (plVar18 != (long *)0x0) {
                uVar3 = (ulong)plVar11 / (ulong)plVar18;
              }
              plVar11 = (long *)((long)plVar11 - uVar3 * (long)plVar18);
            }
            *(undefined8 **)(*plVar6 + (long)plVar11 * 8) = (undefined8 *)(param_2 + 0xd8);
            plVar14 = (long *)*plVar8;
            while (plVar14 != (long *)0x0) {
              plVar15 = (long *)plVar14[1];
              if (((ulong)plVar18 & uVar10) == 0) {
                plVar15 = (long *)((ulong)plVar15 & uVar10);
              }
              else if (plVar18 <= plVar15) {
                uVar3 = 0;
                if (plVar18 != (long *)0x0) {
                  uVar3 = (ulong)plVar15 / (ulong)plVar18;
                }
                plVar15 = (long *)((long)plVar15 - uVar3 * (long)plVar18);
              }
              plVar12 = plVar14;
              if (plVar15 != plVar11) {
                lVar19 = *plVar6;
                if (*(long *)(lVar19 + (long)plVar15 * 8) == 0) {
                  *(long **)(lVar19 + (long)plVar15 * 8) = plVar8;
                  plVar11 = plVar15;
                }
                else {
                  *plVar8 = *plVar14;
                  *plVar14 = **(undefined8 **)(lVar19 + (long)plVar15 * 8);
                  **(long **)(lVar19 + (long)plVar15 * 8) = (long)plVar14;
                  plVar12 = plVar8;
                }
              }
              plVar8 = plVar12;
              plVar14 = (long *)*plVar12;
            }
          }
        }
        else if (plVar18 < plVar17) {
          plVar8 = (long *)(long)((float)*(ulong *)(param_2 + 0xe0) / *(float *)(param_2 + 0xe8));
          if ((plVar17 < (long *)0x3) || (((ulong)plVar17 & (long)plVar17 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar8) {
            plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
          }
          if (plVar18 <= plVar8) {
            plVar18 = plVar8;
          }
          if (plVar18 < plVar17) {
            if (plVar18 != (long *)0x0) goto LAB_10a015580;
            lVar19 = *plVar6;
            *plVar6 = 0;
            if (lVar19 != 0) {
              __ZdlPv();
            }
            *(undefined8 *)(param_2 + 0xd0) = 0;
            plVar17 = (long *)0x0;
          }
          else {
            plVar17 = *(long **)(param_2 + 0xd0);
          }
        }
        if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
          plVar11 = (long *)((long)plVar17 - 1U & (ulong)plVar9);
        }
        else {
          plVar11 = plVar9;
          if (plVar17 <= plVar9) {
            uVar10 = 0;
            if (plVar17 != (long *)0x0) {
              uVar10 = (ulong)plVar9 / (ulong)plVar17;
            }
            plVar11 = (long *)((long)plVar9 - uVar10 * (long)plVar17);
          }
        }
      }
      lVar19 = *plVar6;
      plVar18 = *(long **)(lVar19 + (long)plVar11 * 8);
      if (plVar18 == (long *)0x0) {
        plVar18 = (long *)(param_2 + 0xd8);
        *plVar16 = *plVar18;
        *plVar18 = (long)plVar16;
        *(long **)(lVar19 + (long)plVar11 * 8) = plVar18;
        if (*plVar16 != 0) {
          plVar18 = *(long **)(*plVar16 + 8);
          if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
            plVar18 = (long *)((ulong)plVar18 & (long)plVar17 - 1U);
          }
          else if (plVar17 <= plVar18) {
            uVar10 = 0;
            if (plVar17 != (long *)0x0) {
              uVar10 = (ulong)plVar18 / (ulong)plVar17;
            }
            plVar18 = (long *)((long)plVar18 - uVar10 * (long)plVar17);
          }
          plVar18 = (long *)(*plVar6 + (long)plVar18 * 8);
          goto LAB_10a01575c;
        }
      }
      else {
        *plVar16 = *plVar18;
LAB_10a01575c:
        *plVar18 = (long)plVar16;
      }
      *(long *)(param_2 + 0xe0) = *(long *)(param_2 + 0xe0) + 1;
LAB_10a01576c:
      plVar18 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar6 = plStack_b8 + 1;
        do {
          lVar19 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar19 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
LAB_10a0157a4:
      plVar18 = (long *)0x0;
      FUN_10a2421c8();
      FUN_10a244d68();
      plStack_e8 = (long *)&UNK_10f631816;
      lStack_e0 = 0x14;
      if (plVar18 != (long *)0x0) {
        plVar6 = plVar18;
        (**(code **)(*plVar18 + 0xe0))();
        (**(code **)(*plVar18 + 0xe8))();
        plVar17 = (long *)*plVar18;
        lVar19 = plVar18[1];
        __ZNSt3__115recursive_mutex4lockEv(lVar19);
        FUN_10a012fec(&plStack_90,plVar6,plVar17);
        plVar18 = plStack_90;
        ___dynamic_cast(plStack_90,&PTR_DAT_110ae2620,&PTR_DAT_110b98940,0);
        plStack_e8 = *(long **)plVar16[3];
        lStack_e0 = *param_8;
        uStack_d8 = *(undefined4 *)(param_8 + 1);
        uStack_d4 = (undefined4)*param_9;
        uStack_d0 = (undefined4)((ulong)*param_9 >> 0x20);
        uStack_cc = *(undefined4 *)(param_9 + 1);
        uStack_c4 = CONCAT22(uStack_c4._2_2_,0xfff);
        uStack_c8 = param_1;
        func_0x000109a1430c(*(undefined8 *)**(undefined8 **)(param_2 + 0x38),plVar18[0x1e],
                            &plStack_e8);
        plStack_e8 = plStack_90;
        (**(code **)(*plVar17 + 0x30))(plVar17,0,0,0,0,&plStack_e8,1);
        plVar18 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          plVar17 = plStack_88 + 1;
          do {
            lVar7 = *plVar17;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar2) {
              *plVar17 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
        __ZNSt3__115recursive_mutex6unlockEv(lVar19);
        return;
      }
      goto LAB_10a015950;
    }
  }
  puVar13 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  *puVar13 = &PTR_DAT_110b9d018;
  *(int *)(puVar13 + 1) = iVar5;
  ___cxa_throw();
LAB_10a01598c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a015990);
  (*pcVar4)();
}



/* Entry: 10a015a04; end: 10a015beb;  */

/* WARNING: Removing unreachable block (ram,0x00010a015b18) */
/* WARNING: Removing unreachable block (ram,0x00010a015b1c) */
/* WARNING: Removing unreachable block (ram,0x00010a015b24) */
/* WARNING: Removing unreachable block (ram,0x00010a015b2c) */
/* WARNING: Removing unreachable block (ram,0x00010a015b30) */

undefined *** FUN_10a015a04(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined ***pppuStack_78;
  undefined1 uStack_69;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined8 *)&uStack_81;
  FUN_10a063d54(&puStack_68,&uStack_69,puVar5,param_2,param_3);
  FUN_10a05b04c(&uStack_80,&puStack_68);
  if (ppuStack_60 != (undefined **)0x0) {
    ppuVar7 = ppuStack_60 + 1;
    do {
      puVar6 = *ppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
      if (bVar3) {
        *ppuVar7 = puVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar6 == (undefined *)0x0) {
      (**(code **)(*ppuStack_60 + 0x10))(ppuStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_60);
    }
  }
  if (pppuStack_78 == (undefined ***)0x0) {
    *param_1 = uStack_80;
    param_1[1] = 0;
  }
  else {
    pppuVar4 = pppuStack_78 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
      if (bVar3) {
        *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_1 = uStack_80;
    param_1[1] = pppuStack_78;
    if (pppuStack_78 != (undefined ***)0x0) {
      pppuVar4 = pppuStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
        if (bVar3) {
          *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  pppuVar4 = &ppuStack_60;
  param_1[2] = FUN_10a063ec4;
  param_1[3] = &PTR_DAT_110b9fde0;
  param_1[4] = uStack_80;
  param_1[5] = pppuStack_78;
  uStack_50 = 0;
  uStack_58 = 0;
  puStack_68 = &UNK_1053a6a3c;
  ppuStack_60 = &PTR_DAT_110ae9180;
  FUN_10a044790(&puStack_68);
  (*(code *)*ppuStack_60)();
  if (pppuStack_78 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_78 + 1;
    do {
      ppuVar7 = *pppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar3) {
        *pppuVar1 = (undefined **)((long)ppuVar7 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar7 == (undefined **)0x0) {
      (*(code *)(*pppuStack_78)[2])(pppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar4 = pppuStack_78;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&puStack_68);
  __Unwind_Resume();
  ppuVar9 = (undefined **)puVar5[1];
  ppuVar8 = (undefined **)*puVar5;
  *puVar5 = 0;
  puVar5[1] = 0;
  ppuVar7 = pppuVar4[1];
  pppuVar4[1] = ppuVar9;
  *pppuVar4 = ppuVar8;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar8 = ppuVar7 + 1;
    do {
      puVar6 = *ppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar3) {
        *ppuVar8 = puVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar6 == (undefined *)0x0) {
      (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
    }
  }
  return pppuVar4;
}



/* Entry: 10a015bec; end: 10a015dcb;  */

undefined8 * FUN_10a015bec(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a015dcc; end: 10a01615b;  */

void FUN_10a015dcc(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar9 = *(ulong *)(param_1 + 0xb0);
  if (uVar9 < *(ulong *)(param_1 + 0xa0)) {
    uVar4 = (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555;
    uVar6 = uVar9;
    if (uVar9 <= uVar4) {
      uVar6 = uVar4;
    }
    piVar5 = (int *)(*(long *)(param_1 + 0x88) + uVar9 * 0x18 + 0x10);
    do {
      if (uVar6 == uVar9) goto LAB_10a015fe0;
      if (*(long *)(piVar5 + -4) == *(long *)(param_2 + 0x18)) {
        if ((short)piVar5[-2] != 9) {
          return;
        }
        if (uVar9 < *(ulong *)(param_1 + 0xa8)) {
          if ((*piVar5 == 0x10) &&
             (plVar10 = (long *)(*(long *)(param_1 + 0xb8) + (ulong)(uint)piVar5[-1]),
             *plVar10 == *param_3 && plVar10[1] == param_3[1])) {
            return;
          }
          FUN_10a048bc4(param_1);
          uVar9 = *(long *)(param_1 + 0xb0) + uVar9;
        }
        plVar10 = (long *)(param_1 + 0xb8);
        lVar3 = *plVar10;
        uVar1 = *(uint *)(param_1 + 0xd0);
        uVar6 = (ulong)uVar1 + 0x10;
        uVar4 = *(long *)(param_1 + 0xc0) - lVar3;
        lVar7 = uVar6 - uVar4;
        if (uVar4 <= uVar6 && lVar7 != 0) {
          func_0x0001092bf294(plVar10,lVar7);
          lVar3 = *plVar10;
        }
        lVar7 = *param_3;
        plVar10 = (long *)(lVar3 + (ulong)uVar1);
        plVar10[1] = param_3[1];
        *plVar10 = lVar7;
        *(int *)(param_1 + 0xd0) = (int)uVar6;
        uVar6 = (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555;
        if (uVar9 <= uVar6 && uVar6 - uVar9 != 0) {
          lVar7 = *(long *)(param_1 + 0x88) + uVar9 * 0x18;
          *(uint *)(lVar7 + 0xc) = uVar1;
          *(undefined4 *)(lVar7 + 0x10) = 0x10;
          return;
        }
        goto LAB_10a015fe0;
      }
      uVar9 = uVar9 + 1;
      piVar5 = piVar5 + 6;
    } while (*(ulong *)(param_1 + 0xa0) != uVar9);
  }
  plVar10 = (long *)(param_1 + 0xb8);
  lVar3 = *plVar10;
  uVar1 = *(uint *)(param_1 + 0xd0);
  uVar9 = (ulong)uVar1 + 0x10;
  uVar6 = *(long *)(param_1 + 0xc0) - lVar3;
  lVar7 = uVar9 - uVar6;
  if (uVar6 <= uVar9 && lVar7 != 0) {
    func_0x0001092bf294(plVar10,lVar7);
    lVar3 = *plVar10;
  }
  lVar7 = *param_3;
  plVar10 = (long *)(lVar3 + (ulong)uVar1);
  plVar10[1] = param_3[1];
  *plVar10 = lVar7;
  lVar7 = *(long *)(param_1 + 0x88);
  *(int *)(param_1 + 0xd0) = (int)uVar9;
  uVar9 = *(ulong *)(param_1 + 0xa0);
  if (uVar9 < (ulong)((*(long *)(param_1 + 0x90) - lVar7 >> 3) * -0x5555555555555555)) {
    puVar8 = (undefined8 *)(lVar7 + uVar9 * 0x18);
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10a063efc((long *)(param_1 + 0x88),&uStack_58);
    if (*(long *)(param_1 + 0x88) == *(long *)(param_1 + 0x90)) {
LAB_10a015fe0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a015fe4);
      (*pcVar2)();
    }
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x90) + -0x18);
    uVar9 = *(ulong *)(param_1 + 0xa0);
  }
  *puVar8 = *(undefined8 *)(param_2 + 0x18);
  *(undefined2 *)(puVar8 + 1) = 9;
  *(uint *)((long)puVar8 + 0xc) = uVar1;
  *(undefined4 *)(puVar8 + 2) = 0x10;
  *(ulong *)(param_1 + 0xa0) = uVar9 + 1;
  return;
}



/* Entry: 10a01615c; end: 10a016277;  */

void FUN_10a01615c(long param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined4 uStack_44;
  
  plVar1 = param_2 + 4;
  uStack_44 = param_4;
  FUN_10a5dfd94(plVar1,*(undefined8 *)(param_1 + 0x60));
  plVar2 = param_2 + 4;
  FUN_10a01eacc(plVar2,plVar1);
  *(undefined4 *)((long)plVar2 + 0x5c) = param_5;
  func_0x000107c2b07c(auStack_68,&UNK_10f631b27);
  FUN_10a016278(plVar2,auStack_68,&uStack_44);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x110),param_3);
  lVar3 = 0;
  FUN_10a2421c8();
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(lVar3 + 0x208),plVar1,&UNK_10e482b48,3);
  lVar3 = *(long *)(param_1 + 0x110);
  FUN_10a18cbd8(lVar3 + 0x288);
  FUN_10a1da3a4(lVar3,0,0,0,4,0,0,0);
  return;
}



/* Entry: 10a016278; end: 10a0165ff;  */

void FUN_10a016278(long param_1,long param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar9 = *(ulong *)(param_1 + 0xb0);
  if (uVar9 < *(ulong *)(param_1 + 0xa0)) {
    uVar4 = (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555;
    uVar6 = uVar9;
    if (uVar9 <= uVar4) {
      uVar6 = uVar4;
    }
    piVar5 = (int *)(*(long *)(param_1 + 0x88) + uVar9 * 0x18 + 0x10);
    do {
      if (uVar6 == uVar9) goto LAB_10a016484;
      if (*(long *)(piVar5 + -4) == *(long *)(param_2 + 0x18)) {
        if ((short)piVar5[-2] != 2) {
          return;
        }
        if (uVar9 < *(ulong *)(param_1 + 0xa8)) {
          if ((*piVar5 == 4) &&
             (*(int *)(*(long *)(param_1 + 0xb8) + (ulong)(uint)piVar5[-1]) == *param_3)) {
            return;
          }
          FUN_10a048bc4(param_1);
          uVar9 = *(long *)(param_1 + 0xb0) + uVar9;
        }
        plVar10 = (long *)(param_1 + 0xb8);
        lVar3 = *plVar10;
        uVar1 = *(uint *)(param_1 + 0xd0);
        uVar6 = (ulong)uVar1 + 4;
        uVar4 = *(long *)(param_1 + 0xc0) - lVar3;
        lVar7 = uVar6 - uVar4;
        if (uVar4 <= uVar6 && lVar7 != 0) {
          func_0x0001092bf294(plVar10,lVar7);
          lVar3 = *plVar10;
        }
        *(int *)(lVar3 + (ulong)uVar1) = *param_3;
        *(int *)(param_1 + 0xd0) = (int)uVar6;
        uVar6 = (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555;
        if (uVar9 <= uVar6 && uVar6 - uVar9 != 0) {
          lVar7 = *(long *)(param_1 + 0x88) + uVar9 * 0x18;
          *(uint *)(lVar7 + 0xc) = uVar1;
          *(undefined4 *)(lVar7 + 0x10) = 4;
          return;
        }
        goto LAB_10a016484;
      }
      uVar9 = uVar9 + 1;
      piVar5 = piVar5 + 6;
    } while (*(ulong *)(param_1 + 0xa0) != uVar9);
  }
  plVar10 = (long *)(param_1 + 0xb8);
  lVar3 = *plVar10;
  uVar1 = *(uint *)(param_1 + 0xd0);
  uVar9 = (ulong)uVar1 + 4;
  uVar6 = *(long *)(param_1 + 0xc0) - lVar3;
  lVar7 = uVar9 - uVar6;
  if (uVar6 <= uVar9 && lVar7 != 0) {
    func_0x0001092bf294(plVar10,lVar7);
    lVar3 = *plVar10;
  }
  *(int *)(lVar3 + (ulong)uVar1) = *param_3;
  lVar7 = *(long *)(param_1 + 0x88);
  *(int *)(param_1 + 0xd0) = (int)uVar9;
  uVar9 = *(ulong *)(param_1 + 0xa0);
  if (uVar9 < (ulong)((*(long *)(param_1 + 0x90) - lVar7 >> 3) * -0x5555555555555555)) {
    puVar8 = (undefined8 *)(lVar7 + uVar9 * 0x18);
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10a063efc((long *)(param_1 + 0x88),&uStack_58);
    if (*(long *)(param_1 + 0x88) == *(long *)(param_1 + 0x90)) {
LAB_10a016484:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a016488);
      (*pcVar2)();
    }
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x90) + -0x18);
    uVar9 = *(ulong *)(param_1 + 0xa0);
  }
  *puVar8 = *(undefined8 *)(param_2 + 0x18);
  *(undefined2 *)(puVar8 + 1) = 2;
  *(uint *)((long)puVar8 + 0xc) = uVar1;
  *(undefined4 *)(puVar8 + 2) = 4;
  *(ulong *)(param_1 + 0xa0) = uVar9 + 1;
  return;
}



/* Entry: 10a016600; end: 10a01671b;  */

void FUN_10a016600(undefined4 param_1,long param_2,long *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined4 uStack_44;
  
  plVar1 = param_3 + 4;
  uStack_44 = param_1;
  FUN_10a5dfd94(plVar1,*(undefined8 *)(param_2 + 0x90));
  plVar2 = param_3 + 4;
  FUN_10a01eacc(plVar2,plVar1);
  func_0x000107c2b07c(auStack_68,&UNK_10f631b33);
  FUN_10a01671c(plVar2,auStack_68,&uStack_44);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *(undefined4 *)(plVar2 + 0xb) = param_5;
  *(undefined4 *)((long)plVar2 + 0x5c) = param_5;
  FUN_10a1db4cc(*(undefined8 *)(param_2 + 0x110),param_4);
  lVar3 = 0;
  FUN_10a2421c8();
  (**(code **)(*param_3 + 0x58))(param_3,*(undefined8 *)(lVar3 + 0x208),plVar1,&UNK_10e482b48,3);
  lVar3 = *(long *)(param_2 + 0x110);
  FUN_10a18cbd8(lVar3 + 0x288);
  FUN_10a1da3a4(lVar3,0,0,0,4,0,0,0);
  return;
}



/* Entry: 10a01671c; end: 10a01692b;  */

void FUN_10a01671c(long param_1,long param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar9 = *(ulong *)(param_1 + 0xb0);
  if (uVar9 < *(ulong *)(param_1 + 0xa0)) {
    uVar4 = (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555;
    uVar6 = uVar9;
    if (uVar9 <= uVar4) {
      uVar6 = uVar4;
    }
    piVar5 = (int *)(*(long *)(param_1 + 0x88) + uVar9 * 0x18 + 0x10);
    do {
      if (uVar6 == uVar9) goto LAB_10a016928;
      if (*(long *)(piVar5 + -4) == *(long *)(param_2 + 0x18)) {
        if ((short)piVar5[-2] != 3) {
          return;
        }
        if (uVar9 < *(ulong *)(param_1 + 0xa8)) {
          if ((*piVar5 == 4) &&
             (*(int *)(*(long *)(param_1 + 0xb8) + (ulong)(uint)piVar5[-1]) == *param_3)) {
            return;
          }
          FUN_10a048bc4(param_1);
          uVar9 = *(long *)(param_1 + 0xb0) + uVar9;
        }
        plVar10 = (long *)(param_1 + 0xb8);
        lVar3 = *plVar10;
        uVar1 = *(uint *)(param_1 + 0xd0);
        uVar6 = (ulong)uVar1 + 4;
        uVar4 = *(long *)(param_1 + 0xc0) - lVar3;
        lVar7 = uVar6 - uVar4;
        if (uVar4 <= uVar6 && lVar7 != 0) {
          func_0x0001092bf294(plVar10,lVar7);
          lVar3 = *plVar10;
        }
        *(int *)(lVar3 + (ulong)uVar1) = *param_3;
        *(int *)(param_1 + 0xd0) = (int)uVar6;
        uVar6 = (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555;
        if (uVar9 <= uVar6 && uVar6 - uVar9 != 0) {
          lVar7 = *(long *)(param_1 + 0x88) + uVar9 * 0x18;
          *(uint *)(lVar7 + 0xc) = uVar1;
          *(undefined4 *)(lVar7 + 0x10) = 4;
          return;
        }
        goto LAB_10a016928;
      }
      uVar9 = uVar9 + 1;
      piVar5 = piVar5 + 6;
    } while (*(ulong *)(param_1 + 0xa0) != uVar9);
  }
  plVar10 = (long *)(param_1 + 0xb8);
  lVar3 = *plVar10;
  uVar1 = *(uint *)(param_1 + 0xd0);
  uVar9 = (ulong)uVar1 + 4;
  uVar6 = *(long *)(param_1 + 0xc0) - lVar3;
  lVar7 = uVar9 - uVar6;
  if (uVar6 <= uVar9 && lVar7 != 0) {
    func_0x0001092bf294(plVar10,lVar7);
    lVar3 = *plVar10;
  }
  *(int *)(lVar3 + (ulong)uVar1) = *param_3;
  lVar7 = *(long *)(param_1 + 0x88);
  *(int *)(param_1 + 0xd0) = (int)uVar9;
  uVar9 = *(ulong *)(param_1 + 0xa0);
  if (uVar9 < (ulong)((*(long *)(param_1 + 0x90) - lVar7 >> 3) * -0x5555555555555555)) {
    puVar8 = (undefined8 *)(lVar7 + uVar9 * 0x18);
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10a063efc((long *)(param_1 + 0x88),&uStack_58);
    if (*(long *)(param_1 + 0x88) == *(long *)(param_1 + 0x90)) {
LAB_10a016928:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a01692c);
      (*pcVar2)();
    }
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x90) + -0x18);
    uVar9 = *(ulong *)(param_1 + 0xa0);
  }
  *puVar8 = *(undefined8 *)(param_2 + 0x18);
  *(undefined2 *)(puVar8 + 1) = 3;
  *(uint *)((long)puVar8 + 0xc) = uVar1;
  *(undefined4 *)(puVar8 + 2) = 4;
  *(ulong *)(param_1 + 0xa0) = uVar9 + 1;
  return;
}



/* Entry: 10a01692c; end: 10a016a3f;  */

void FUN_10a01692c(undefined4 param_1,long param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined4 uStack_44;
  
  plVar1 = param_3 + 4;
  uStack_44 = param_1;
  FUN_10a5dfd94(plVar1,*(undefined8 *)(param_2 + 0xa0));
  plVar2 = param_3 + 4;
  FUN_10a01eacc(plVar2,plVar1);
  func_0x000107c2b07c(auStack_68,&DAT_10f631b41);
  FUN_10a01671c(plVar2,auStack_68,&uStack_44);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  FUN_10a1db4cc(*(undefined8 *)(param_2 + 0x110),param_4);
  lVar3 = 0;
  FUN_10a2421c8();
  (**(code **)(*param_3 + 0x58))(param_3,*(undefined8 *)(lVar3 + 0x208),plVar1,&UNK_10e482b48,3);
  lVar3 = *(long *)(param_2 + 0x110);
  FUN_10a18cbd8(lVar3 + 0x288);
  FUN_10a1da3a4(lVar3,0,0,0,4,0,0,0);
  return;
}



/* Entry: 10a016a40; end: 10a016cfb;  */

undefined *** FUN_10a016a40(long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  undefined4 uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  undefined ***pppuVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *unaff_x26;
  long lStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined4 *puStack_100;
  undefined4 *puStack_f8;
  undefined4 *puStack_f0;
  undefined8 uStack_e8;
  undefined4 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [8];
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  long lStack_68;
  
  plVar7 = param_2 + 4;
  FUN_10a5dfd94(plVar7,*(undefined8 *)(param_1 + 0xd0));
  FUN_10a01eacc(param_2 + 4,plVar7);
  FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x110),param_3);
  lVar5 = 0;
  FUN_10a2421c8();
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(lVar5 + 0x208),plVar7,&UNK_10e482b48,3);
  lVar16 = *(long *)(param_1 + 0x110);
  FUN_10a18cbd8(lVar16 + 0x288);
  lVar5 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar15 = 4;
  iVar12 = 0;
  uVar13 = 0;
  puVar18 = (undefined4 *)0x0;
  puVar19 = (undefined4 *)0x4;
  puVar20 = (undefined4 *)0x0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_98 = lVar16 + 0xa8;
  uVar2 = *(ushort *)(lVar16 + 0x101);
  *(ushort *)(lVar16 + 0x101) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
  uStack_90 = 1;
  pcStack_a8 = FUN_10a1d0710;
  ppuStack_a0 = &PTR_FUN_110bad6c8;
  if (*(int *)(lVar16 + 0x1e8) != 0) {
    unaff_x26 = (undefined4 *)(lVar16 + 0x1e8);
    *unaff_x26 = 0;
    uVar15 = 4;
    uVar13 = 0;
    iVar12 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20efac(unaff_x26);
  }
  if (*(int *)(lVar16 + 0x1ec) != 0) {
    unaff_x26 = (undefined4 *)(lVar16 + 0x1ec);
    *unaff_x26 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f0c4(unaff_x26);
  }
  if (*(int *)(lVar16 + 0x1f8) != 4) {
    puVar20 = (undefined4 *)(lVar16 + 0x1f8);
    *puVar20 = 4;
    func_0x00010a1bd170(auStack_b0);
    FUN_10a1fd58c(puVar20);
  }
  if (*(int *)(lVar16 + 0x1fc) != 0) {
    puVar19 = (undefined4 *)(lVar16 + 0x1fc);
    *puVar19 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f1dc(puVar19);
  }
  *(undefined1 *)(lVar16 + 0x200) = 0;
  if (*(int *)(lVar16 + 0x1f0) != 0) {
    puVar18 = (undefined4 *)(lVar16 + 0x1f0);
    *puVar18 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f328(puVar18);
  }
  *(undefined4 *)(lVar16 + 500) = 0;
  *(undefined1 *)(lVar16 + 0x201) = 1;
  if (*(char *)(lVar16 + 0x1e0) == '\x01') {
    func_0x00010a042d30(lVar16 + 0x1d0);
    *(undefined1 *)(lVar16 + 0x1e0) = 0;
  }
  FUN_10a044790(&pcStack_a8);
  pppuVar17 = &ppuStack_a0;
  (*(code *)*ppuStack_a0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar17;
  }
  ___stack_chk_fail();
  FUN_10a044790(&pcStack_a8);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pppuVar6 = pppuVar17;
  __Unwind_Resume();
  uStack_e8 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  pcStack_b8 = FUN_10a1da580;
  puStack_100 = unaff_x26;
  puStack_f8 = puVar20;
  puStack_f0 = puVar19;
  puStack_e0 = puVar18;
  pppuStack_c8 = pppuVar17;
  puStack_c0 = &stack0xfffffffffffffff0;
  pppuVar6[0x58] = &PTR_FUN_110c383b8;
  *(undefined2 *)(pppuVar6 + 0x5b) = 0x100;
  pppuVar6[0x5a] = (undefined **)0x0;
  pppuVar6[0x59] = (undefined **)0x0;
  pppuVar17 = pppuVar6;
  FUN_10a1da04c();
  *pppuVar17 = &PTR_DAT_110bae008;
  pppuVar17[2] = &PTR_FUN_110bae138;
  pppuVar17[5] = &PTR_FUN_110bae168;
  pppuVar17[0x58] = &PTR_FUN_110bae210;
  pppuVar17[0x15] = &PTR_FUN_110bae1c0;
  uVar1 = 4;
  if (0x26 < uVar15 - 0x30) {
    uVar1 = uVar15;
  }
  pppuVar17[0x52] = (undefined **)0x0;
  pppuVar17[0x51] = (undefined **)0x0;
  pppuVar17[0x54] = (undefined **)0x0;
  pppuVar17[0x53] = (undefined **)0x0;
  pppuVar17[0x56] = (undefined **)0x0;
  pppuVar17[0x55] = (undefined **)0x0;
  pppuVar17[0x57] = (undefined **)0x0;
  lVar16 = lVar5;
  FUN_10a2421c8();
  plVar7 = *(long **)(lVar16 + 0x228);
  (**(code **)(*plVar7 + 0x68))();
  uVar15 = *(uint *)(plVar7 + 0x11);
  if ((0 < (int)uVar15) && (uVar15 < (uint)uVar10 || uVar15 < (uint)uVar11)) {
    FUN_10a0ee900(&lStack_148,&UNK_10f643e2d,0x5c);
    FUN_10a0029c0(&lStack_148);
LAB_10a1da858:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1da85c);
    (*pcVar4)();
  }
  uVar15 = uVar1;
  if (uVar1 == 0x22) {
    uVar15 = 0x25;
  }
  uVar3 = 0x24;
  if (uVar1 != 0x21) {
    uVar3 = uVar15;
  }
  uVar15 = 1;
  FUN_109fc8e58(1,1,uVar3);
  if (uVar15 != 0) {
    uVar14 = (uVar11 & 0xffffffff) * (uVar10 & 0xffffffff);
    uVar3 = 0;
    if (uVar15 != 0) {
      uVar3 = 0xffffffff / uVar15;
    }
    if (uVar3 <= uVar14 && uVar14 - uVar3 != 0) {
      FUN_10a0ee900(&lStack_148,&UNK_10f643e8a,0x8b);
      FUN_10a0029c0(&lStack_148);
      goto LAB_10a1da858;
    }
  }
  FUN_10a1da3a4(pppuVar6,uVar10,uVar11,0,0,uVar1,0,0);
  FUN_10a2421c8();
  plVar7 = *(long **)(lVar5 + 0x228);
  lStack_148 = uVar10 << 0x20;
  uStack_140 = CONCAT44(1,(uint)uVar11);
  uStack_138 = (ulong)uVar1;
  uStack_12c = 0x100000001;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = uVar13;
  (**(code **)(*plVar7 + 0x20))(plVar7,&lStack_148);
  FUN_10a099d88(pppuVar17 + 0x51,plVar7);
  if (iVar12 != 0) {
    lStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    pppuVar17 = pppuVar6;
    (*(code *)(*pppuVar6)[0x1d])();
    if ((int)pppuVar17 == 0x21) {
      pppuVar17 = (undefined ***)0x24;
    }
    else if ((int)pppuVar17 == 0x22) {
      pppuVar17 = (undefined ***)0x25;
    }
    pppuVar8 = pppuVar6;
    (*(code *)(*pppuVar6)[0x16])();
    pppuVar9 = pppuVar6;
    (*(code *)(*pppuVar6)[0x17])(pppuVar6);
    FUN_109fc8e58(pppuVar8,pppuVar9,pppuVar17);
    if (((ulong)pppuVar8 & 0xffffffff) != 0) {
      func_0x000107c27d58(&lStack_148);
    }
    pppuVar17 = pppuVar6;
    (*(code *)(*pppuVar6)[0x16])();
    pppuVar8 = pppuVar6;
    (*(code *)(*pppuVar6)[0x17])();
    uStack_108 = (ulong)pppuVar17 & 0xffffffff | (long)pppuVar8 << 0x20;
    uStack_110 = 0;
    FUN_10a1daa20(pppuVar6,&uStack_110,lStack_148);
    if (lStack_148 != 0) {
      uStack_140 = lStack_148;
      __ZdlPv();
    }
  }
  return pppuVar6;
}



/* Entry: 10a016cfc; end: 10a017147;  */

undefined8 * FUN_10a016cfc(undefined8 *param_1)

{
  undefined8 uStack_50;
  undefined1 uStack_41;
  
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0x38000000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0x3e4ccccd40000000;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3e4ccccd3f800000;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x700000037;
  *(undefined8 *)((long)param_1 + 0x6c) = 0x3f0000003f800000;
  *(undefined8 *)((long)param_1 + 100) = 0x3f8000003f800000;
  *(undefined4 *)((long)param_1 + 0x74) = 0x3f800000;
  param_1[0xf] = 0;
  *(undefined8 *)((long)param_1 + 0x7f) = 0;
  *(undefined2 *)((long)param_1 + 0x87) = 1;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0xffff;
  param_1[0x1c] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x55] = 0;
  *(undefined2 *)(param_1 + 0x56) = 0xffff;
  param_1[0x57] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  *(undefined2 *)(param_1 + 0x91) = 0xffff;
  param_1[0x92] = 0;
  FUN_10a00e960(param_1 + 0xc4,&UNK_10f631b4a,0xd);
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0x3f800000;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xd4] = 0;
  *(undefined2 *)(param_1 + 0xd5) = 0xffff;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  param_1[0xd9] = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xda) = 0x3f800000;
  param_1[0xdc] = 0;
  param_1[0xdb] = 0;
  param_1[0xde] = 0;
  param_1[0xdd] = 0;
  param_1[0xe0] = 0;
  param_1[0xdf] = 0;
  param_1[0xe2] = 0;
  param_1[0xe1] = 0;
  param_1[0xe4] = 0;
  param_1[0xe3] = 0;
  param_1[0xe6] = 0;
  param_1[0xe5] = 0;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  param_1[0xec] = 0;
  param_1[0xeb] = 0;
  param_1[0xee] = 0;
  param_1[0xed] = 0;
  param_1[0xf0] = 0;
  param_1[0xef] = 0;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  param_1[0xf4] = 0;
  param_1[0xf3] = 0;
  param_1[0xf6] = 0;
  param_1[0xf5] = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  uStack_50 = 0;
  FUN_10a063b58(param_1 + 0xf9,&uStack_41,&uStack_50);
  uStack_50 = 0;
  FUN_10a063b58(param_1 + 0xfb,&uStack_41,&uStack_50);
  uStack_50 = 0;
  FUN_10a063b58(param_1 + 0xfd,&uStack_41,&uStack_50);
  uStack_50 = 0;
  FUN_10a063b58(param_1 + 0xff,&uStack_41,&uStack_50);
  uStack_50 = 0;
  FUN_10a063b58(param_1 + 0x101,&uStack_41,&uStack_50);
  uStack_50 = 0;
  FUN_10a063b58(param_1 + 0x103,&uStack_41,&uStack_50);
  uStack_50 = 0;
  FUN_10a063b58(param_1 + 0x105,&uStack_41,&uStack_50);
  uStack_50 = 0;
  FUN_10a063b58(param_1 + 0x107,&uStack_41,&uStack_50);
  uStack_50 = 0;
  FUN_10a063b58(param_1 + 0x109,&uStack_41,&uStack_50);
  uStack_50 = 0;
  FUN_10a063b58(param_1 + 0x10b,&uStack_41,&uStack_50);
  uStack_50 = 0;
  FUN_10a063b58(param_1 + 0x10d,&uStack_41,&uStack_50);
  uStack_50 = 0;
  FUN_10a063b58(param_1 + 0x10f,&uStack_41,&uStack_50);
  uStack_50 = 0;
  FUN_10a063b58(param_1 + 0x111,&uStack_41,&uStack_50);
  uStack_50 = 0;
  FUN_10a063b58(param_1 + 0x113,&uStack_41,&uStack_50);
  param_1[0x117] = 0;
  param_1[0x116] = 0;
  param_1[0x115] = 0;
  return param_1;
}



/* Entry: 10a017148; end: 10a01739b;  */

long FUN_10a017148(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x8a8;
  FUN_10a044868(&lStack_28);
  func_0x00010a061678(param_1 + 0x898);
  func_0x00010a061678(param_1 + 0x888);
  func_0x00010a061678(param_1 + 0x878);
  func_0x00010a061678(param_1 + 0x868);
  func_0x00010a061678(param_1 + 0x858);
  func_0x00010a061678(param_1 + 0x848);
  func_0x00010a061678(param_1 + 0x838);
  func_0x00010a061678(param_1 + 0x828);
  func_0x00010a061678(param_1 + 0x818);
  func_0x00010a061678(param_1 + 0x808);
  func_0x00010a061678(param_1 + 0x7f8);
  func_0x00010a061678(param_1 + 0x7e8);
  func_0x00010a061678(param_1 + 0x7d8);
  func_0x00010a061678(param_1 + 0x7c8);
  FUN_10a0617bc(param_1 + 0x7b8);
  FUN_10a0617bc(param_1 + 0x7a8);
  FUN_10a0617bc(param_1 + 0x798);
  FUN_10a0617bc(param_1 + 0x788);
  FUN_10a0617bc(param_1 + 0x778);
  FUN_10a0617bc(param_1 + 0x768);
  FUN_10a0617bc(param_1 + 0x758);
  FUN_10a0617bc(param_1 + 0x748);
  FUN_10a0617bc(param_1 + 0x738);
  FUN_10a0617bc(param_1 + 0x728);
  func_0x00010a0523dc(param_1 + 0x718);
  func_0x00010a0523dc(param_1 + 0x708);
  FUN_10a0617bc(param_1 + 0x6f8);
  FUN_10a0617bc(param_1 + 0x6e8);
  FUN_10a0617bc(param_1 + 0x6d8);
  func_0x00010a064070(param_1 + 0x6b0);
  if (*(long *)(param_1 + 0x690) != 0) {
    *(long *)(param_1 + 0x698) = *(long *)(param_1 + 0x690);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x678) != 0) {
    *(long *)(param_1 + 0x680) = *(long *)(param_1 + 0x678);
    __ZdlPv();
  }
  func_0x00010a063ff4(param_1 + 0x648);
  if (*(char *)(param_1 + 0x637) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x620));
  }
  FUN_10a0196b0(param_1 + 8,0);
  func_0x00010a0196d8(param_1,0);
  return param_1;
}



/* Entry: 10a01739c; end: 10a01961b;  */

/* WARNING: Removing unreachable block (ram,0x00010a018c78) */
/* WARNING: Removing unreachable block (ram,0x00010a017d28) */
/* WARNING: Removing unreachable block (ram,0x00010a017a74) */
/* WARNING: Removing unreachable block (ram,0x00010a017aa4) */
/* WARNING: Removing unreachable block (ram,0x00010a018058) */
/* WARNING: Removing unreachable block (ram,0x00010a018db4) */

void FUN_10a01739c(long param_1)

{
  long *plVar1;
  undefined8 **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 **ppuVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 auStack_248 [2];
  char cStack_231;
  undefined8 uStack_228;
  long *plStack_220;
  undefined1 auStack_218 [7];
  char cStack_211;
  undefined8 *apuStack_210 [7];
  undefined8 uStack_1d8;
  long *plStack_1d0;
  undefined1 auStack_1c8 [7];
  char cStack_1c1;
  undefined8 *apuStack_1c0 [7];
  undefined8 uStack_188;
  long *plStack_180;
  undefined1 auStack_178 [7];
  char cStack_171;
  undefined8 *apuStack_170 [7];
  undefined8 uStack_138;
  long *plStack_130;
  undefined1 auStack_128 [7];
  char cStack_121;
  undefined8 *apuStack_120 [7];
  undefined1 auStack_e8 [8];
  long *plStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 *apuStack_d0 [7];
  undefined1 auStack_98 [8];
  undefined8 **ppuStack_90;
  undefined1 auStack_88 [8];
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10ab451f4(auStack_98,0,&UNK_10f631c50,0x14,&UNK_10f631c65,0x13,&UNK_10f631c79,0x22,1);
  func_0x00010a015c50(param_1 + 0x6d8,auStack_98);
  plVar6 = *(long **)(*(long *)(param_1 + 0x6d8) + 0x228);
  if (plVar6 == *(long **)(*(long *)(param_1 + 0x6d8) + 0x230)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *plVar6;
  }
  lVar7 = *(long *)(lVar9 + 600);
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 6;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined4 *)(lVar9 + 0x21e) = 0x1010101;
  uStack_138 = 0;
  FUN_10a015a04(auStack_e8,&uStack_138,param_1 + 0x7f8);
  func_0x000107c2b07c(&uStack_138,&DAT_10f631c9c);
  FUN_10a3368d0(lVar9,&uStack_138,auStack_e8,&UNK_10e4ac8d0,0xd);
  if (cStack_121 < '\0') {
    __ZdlPv(uStack_138);
  }
  uStack_188 = 0;
  FUN_10a015a04(&uStack_138,&uStack_188,param_1 + 0x808);
  func_0x000107c2b07c(&uStack_188,&DAT_10f631caa);
  FUN_10a3368d0(lVar9,&uStack_188,&uStack_138,&UNK_10e4ac8d0,0xd);
  if (cStack_171 < '\0') {
    __ZdlPv(uStack_188);
  }
  uStack_1d8 = 0;
  FUN_10a015a04(&uStack_188,&uStack_1d8,param_1 + 0x878);
  func_0x000107c2b07c(&uStack_1d8,&UNK_10f631cb8);
  FUN_10a3368d0(lVar9,&uStack_1d8,&uStack_188,&UNK_10e4ac8d0,0xd);
  if (cStack_1c1 < '\0') {
    __ZdlPv(uStack_1d8);
  }
  uStack_228 = 0;
  FUN_10a015a04(&uStack_1d8,&uStack_228,param_1 + 0x888);
  func_0x000107c2b07c(&uStack_228,&UNK_10f631cca);
  FUN_10a3368d0(lVar9,&uStack_228,&uStack_1d8,&UNK_10e4ac8d0,0xd);
  if (cStack_211 < '\0') {
    __ZdlPv(uStack_228);
  }
  func_0x00010a332748(lVar9 + 0x219,1);
  func_0x00010a332790(lVar9,7);
  func_0x00010a332700(lVar9 + 0x21a,0);
  lVar9 = *(long *)(lVar9 + 0x268);
  *(undefined4 *)(lVar9 + 0x28) = 1;
  *(undefined2 *)(lVar9 + 0x2c) = 0x700;
  *(undefined8 *)(lVar9 + 0x30) = 0x1f00000000;
  *(undefined4 *)(lVar9 + 0x38) = 0;
  FUN_10a044790(auStack_1c8);
  (*(code *)*apuStack_1c0[0])(apuStack_1c0);
  plVar6 = plStack_1d0;
  if (plStack_1d0 != (long *)0x0) {
    plVar1 = plStack_1d0 + 1;
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
      (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_178);
  (*(code *)*apuStack_170[0])(apuStack_170);
  plVar6 = plStack_180;
  if (plStack_180 != (long *)0x0) {
    plVar1 = plStack_180 + 1;
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
      (**(code **)(*plStack_180 + 0x10))(plStack_180);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_128);
  (*(code *)*apuStack_120[0])(apuStack_120);
  plVar6 = plStack_130;
  if (plStack_130 != (long *)0x0) {
    plVar1 = plStack_130 + 1;
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
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_d8);
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  plVar6 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar1 = plStack_e0 + 1;
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
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_88);
  (*(code *)*apuStack_80[0])(apuStack_80);
  ppuVar5 = ppuStack_90;
  if (ppuStack_90 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_90 + 1;
    do {
      puVar8 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = (undefined8 *)((long)puVar8 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_90)[2])(ppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
    }
  }
  FUN_10ab451f4(auStack_98,0,&UNK_10f631cd9,0x18,&UNK_10f631cf2,0xe,&UNK_10f631d01,0x1e,1);
  func_0x00010a015c50(param_1 + 0x6f8,auStack_98);
  plVar6 = *(long **)(*(long *)(param_1 + 0x6f8) + 0x228);
  if (plVar6 == *(long **)(*(long *)(param_1 + 0x6f8) + 0x230)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *plVar6;
  }
  lVar7 = *(long *)(lVar9 + 600);
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 6;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined4 *)(lVar9 + 0x21e) = 0x1010101;
  uStack_138 = 0;
  FUN_10a015a04(auStack_e8,&uStack_138,param_1 + 0x7f8);
  func_0x000107c2b07c(&uStack_138,&DAT_10f631c9c);
  FUN_10a3368d0(lVar9,&uStack_138,auStack_e8,&UNK_10e4ac8d0,0xd);
  if (cStack_121 < '\0') {
    __ZdlPv(uStack_138);
  }
  uStack_188 = 0;
  FUN_10a015a04(&uStack_138,&uStack_188,param_1 + 0x808);
  func_0x000107c2b07c(&uStack_188,&DAT_10f631caa);
  FUN_10a3368d0(lVar9,&uStack_188,&uStack_138,&UNK_10e4ac8d0,0xd);
  if (cStack_171 < '\0') {
    __ZdlPv(uStack_188);
  }
  func_0x00010a332748(lVar9 + 0x219,1);
  func_0x00010a332790(lVar9,7);
  func_0x00010a332700(lVar9 + 0x21a,0);
  lVar9 = *(long *)(lVar9 + 0x268);
  *(undefined4 *)(lVar9 + 0x28) = 1;
  *(undefined2 *)(lVar9 + 0x2c) = 0x700;
  *(undefined8 *)(lVar9 + 0x30) = 0x8000000000;
  *(undefined4 *)(lVar9 + 0x38) = 0;
  FUN_10a044790(auStack_128);
  (*(code *)*apuStack_120[0])(apuStack_120);
  plVar6 = plStack_130;
  if (plStack_130 != (long *)0x0) {
    plVar1 = plStack_130 + 1;
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
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_d8);
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  plVar6 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar1 = plStack_e0 + 1;
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
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_88);
  (*(code *)*apuStack_80[0])(apuStack_80);
  ppuVar5 = ppuStack_90;
  if (ppuStack_90 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_90 + 1;
    do {
      puVar8 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = (undefined8 *)((long)puVar8 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_90)[2])(ppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
    }
  }
  FUN_10ab451f4(auStack_98,0,&UNK_10f631d20,0x15,&UNK_10f631d36,0x11,&UNK_10f631d48,0x1b,1);
  func_0x00010a015c50(param_1 + 0x728,auStack_98);
  plVar6 = *(long **)(*(long *)(param_1 + 0x728) + 0x228);
  if (plVar6 == *(long **)(*(long *)(param_1 + 0x728) + 0x230)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *plVar6;
  }
  func_0x000107c2b074(auStack_e8,&PTR_DAT_110b9d360);
  FUN_10a047898(lVar9 + 0x200,auStack_e8,auStack_e8);
  func_0x000107c2b074(auStack_e8,&PTR_DAT_110b9d378);
  FUN_10a047898(lVar9 + 0x200,auStack_e8,auStack_e8);
  lVar7 = *(long *)(lVar9 + 600);
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 6;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined4 *)(lVar9 + 0x21e) = 0x1010101;
  uStack_138 = 0;
  FUN_10a015a04(auStack_e8,&uStack_138,param_1 + 0x7c8);
  func_0x000107c2b07c(&uStack_138,&UNK_10f631d64);
  FUN_10a3368d0(lVar9,&uStack_138,auStack_e8,&UNK_10e4ac8d0,0xd);
  if (cStack_121 < '\0') {
    __ZdlPv(uStack_138);
  }
  uStack_188 = 0;
  FUN_10a015a04(&uStack_138,&uStack_188,param_1 + 0x7f8);
  func_0x000107c2b07c(&uStack_188,&DAT_10f631c9c);
  FUN_10a3368d0(lVar9,&uStack_188,&uStack_138,&UNK_10e4ac8d0,0xd);
  if (cStack_171 < '\0') {
    __ZdlPv(uStack_188);
  }
  func_0x00010a332748(lVar9 + 0x219,1);
  func_0x00010a332790(lVar9,7);
  func_0x00010a332700(lVar9 + 0x21a,1);
  lVar9 = *(long *)(lVar9 + 0x268);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  *(undefined8 *)(lVar9 + 0x30) = 0xff00000000;
  *(undefined4 *)(lVar9 + 0x38) = 0xff;
  FUN_10a044790(auStack_128);
  (*(code *)*apuStack_120[0])(apuStack_120);
  plVar6 = plStack_130;
  if (plStack_130 != (long *)0x0) {
    plVar1 = plStack_130 + 1;
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
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_d8);
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  plVar6 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar1 = plStack_e0 + 1;
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
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_88);
  (*(code *)*apuStack_80[0])(apuStack_80);
  ppuVar5 = ppuStack_90;
  if (ppuStack_90 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_90 + 1;
    do {
      puVar8 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = (undefined8 *)((long)puVar8 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_90)[2])(ppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
    }
  }
  FUN_10ab451f4(auStack_98,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631d48,0x1b,1);
  func_0x00010a015c50(param_1 + 0x748,auStack_98);
  plVar6 = *(long **)(*(long *)(param_1 + 0x748) + 0x228);
  if (plVar6 == *(long **)(*(long *)(param_1 + 0x748) + 0x230)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *plVar6;
  }
  func_0x000107c2b074(auStack_e8,&PTR_DAT_110b9d390);
  FUN_10a047898(lVar9 + 0x200,auStack_e8,auStack_e8);
  uStack_138 = 0;
  FUN_10a015a04(auStack_e8,&uStack_138,param_1 + 0x7e8);
  func_0x000107c2b07c(&uStack_138,&UNK_10f631d7e);
  FUN_10a3368d0(lVar9,&uStack_138,auStack_e8,&UNK_10e4ac8d0,0xd);
  if (cStack_121 < '\0') {
    __ZdlPv(uStack_138);
  }
  uStack_188 = 0;
  FUN_10a015a04(&uStack_138,&uStack_188,param_1 + 0x7f8);
  func_0x000107c2b07c(&uStack_188,&DAT_10f631c9c);
  FUN_10a3368d0(lVar9,&uStack_188,&uStack_138,&UNK_10e4ac8d0,0xd);
  if (cStack_171 < '\0') {
    __ZdlPv(uStack_188);
  }
  uStack_1d8 = 0;
  FUN_10a015a04(&uStack_188,&uStack_1d8,param_1 + 0x808);
  func_0x000107c2b07c(&uStack_1d8,&DAT_10f631caa);
  FUN_10a3368d0(lVar9,&uStack_1d8,&uStack_188,&UNK_10e4ac8d0,0xd);
  if (cStack_1c1 < '\0') {
    __ZdlPv(uStack_1d8);
  }
  lVar7 = *(long *)(lVar9 + 600);
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 6;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined4 *)(lVar9 + 0x21e) = 0x1010101;
  func_0x00010a332748(lVar9 + 0x219,1);
  func_0x00010a332790(lVar9,5);
  func_0x00010a332700(lVar9 + 0x21a,0);
  lVar9 = *(long *)(lVar9 + 0x268);
  *(undefined4 *)(lVar9 + 0x28) = 1;
  *(undefined2 *)(lVar9 + 0x2c) = 0x700;
  *(undefined8 *)(lVar9 + 0x30) = 0x1f00000000;
  *(undefined4 *)(lVar9 + 0x38) = 0;
  FUN_10a044790(auStack_178);
  (*(code *)*apuStack_170[0])(apuStack_170);
  plVar6 = plStack_180;
  if (plStack_180 != (long *)0x0) {
    plVar1 = plStack_180 + 1;
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
      (**(code **)(*plStack_180 + 0x10))(plStack_180);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_128);
  (*(code *)*apuStack_120[0])(apuStack_120);
  plVar6 = plStack_130;
  if (plStack_130 != (long *)0x0) {
    plVar1 = plStack_130 + 1;
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
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_d8);
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  plVar6 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar1 = plStack_e0 + 1;
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
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_88);
  (*(code *)*apuStack_80[0])(apuStack_80);
  ppuVar5 = ppuStack_90;
  if (ppuStack_90 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_90 + 1;
    do {
      puVar8 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = (undefined8 *)((long)puVar8 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_90)[2])(ppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
    }
  }
  FUN_10ab451f4(auStack_98,0,&UNK_10f631d8a,0x20,&UNK_10f631dab,0xb,&UNK_10f631d48,0x1b,1);
  func_0x00010a015c50(param_1 + 0x758,auStack_98);
  plVar6 = *(long **)(*(long *)(param_1 + 0x758) + 0x228);
  if (plVar6 == *(long **)(*(long *)(param_1 + 0x758) + 0x230)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *plVar6;
  }
  func_0x000107c2b074(auStack_e8,&PTR_DAT_110b9d3a8);
  FUN_10a047898(lVar9 + 0x200,auStack_e8,auStack_e8);
  lVar7 = *(long *)(lVar9 + 600);
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 6;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined4 *)(lVar9 + 0x21e) = 0x1010101;
  uStack_138 = 0;
  FUN_10a015a04(auStack_e8,&uStack_138,param_1 + 0x7f8);
  func_0x000107c2b07c(&uStack_138,&DAT_10f631c9c);
  FUN_10a3368d0(lVar9,&uStack_138,auStack_e8,&UNK_10e4ac8d0,0xd);
  if (cStack_121 < '\0') {
    __ZdlPv(uStack_138);
  }
  uStack_188 = 0;
  FUN_10a015a04(&uStack_138,&uStack_188,param_1 + 0x808);
  func_0x000107c2b07c(&uStack_188,&DAT_10f631caa);
  FUN_10a3368d0(lVar9,&uStack_188,&uStack_138,&UNK_10e4ac8d0,0xd);
  if (cStack_171 < '\0') {
    __ZdlPv(uStack_188);
  }
  uStack_1d8 = 0;
  FUN_10a015a04(&uStack_188,&uStack_1d8,param_1 + 0x7e8);
  func_0x000107c2b07c(&uStack_1d8,&UNK_10f631d7e);
  FUN_10a3368d0(lVar9,&uStack_1d8,&uStack_188,&UNK_10e4ac8d0,0xd);
  if (cStack_1c1 < '\0') {
    __ZdlPv(uStack_1d8);
  }
  uStack_228 = 0;
  FUN_10a015a04(&uStack_1d8,&uStack_228,param_1 + 0x828);
  func_0x000107c2b07c(&uStack_228,&UNK_10f631db7);
  FUN_10a3368d0(lVar9,&uStack_228,&uStack_1d8,&UNK_10e4ac998,0xd);
  if (cStack_211 < '\0') {
    __ZdlPv(uStack_228);
  }
  auStack_248[0] = 0;
  FUN_10a015a04(&uStack_228,auStack_248,param_1 + 0x838);
  func_0x000107c2b07c(auStack_248,&UNK_10f631dc6);
  FUN_10a3368d0(lVar9,auStack_248,&uStack_228,&UNK_10e4ac998,0xd);
  if (cStack_231 < '\0') {
    __ZdlPv(auStack_248[0]);
  }
  func_0x00010a332748(lVar9 + 0x219,1);
  func_0x00010a332790(lVar9,5);
  func_0x00010a332700(lVar9 + 0x21a,0);
  lVar9 = *(long *)(lVar9 + 0x268);
  *(undefined4 *)(lVar9 + 0x28) = 1;
  *(undefined2 *)(lVar9 + 0x2c) = 0x700;
  *(undefined8 *)(lVar9 + 0x30) = 0x1f00000000;
  *(undefined4 *)(lVar9 + 0x38) = 0;
  FUN_10a044790(auStack_218);
  (*(code *)*apuStack_210[0])(apuStack_210);
  plVar6 = plStack_220;
  if (plStack_220 != (long *)0x0) {
    plVar1 = plStack_220 + 1;
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
      (**(code **)(*plStack_220 + 0x10))(plStack_220);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_1c8);
  (*(code *)*apuStack_1c0[0])(apuStack_1c0);
  plVar6 = plStack_1d0;
  if (plStack_1d0 != (long *)0x0) {
    plVar1 = plStack_1d0 + 1;
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
      (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_178);
  (*(code *)*apuStack_170[0])(apuStack_170);
  plVar6 = plStack_180;
  if (plStack_180 != (long *)0x0) {
    plVar1 = plStack_180 + 1;
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
      (**(code **)(*plStack_180 + 0x10))(plStack_180);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_128);
  (*(code *)*apuStack_120[0])(apuStack_120);
  plVar6 = plStack_130;
  if (plStack_130 != (long *)0x0) {
    plVar1 = plStack_130 + 1;
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
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_d8);
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  plVar6 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar1 = plStack_e0 + 1;
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
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_88);
  (*(code *)*apuStack_80[0])(apuStack_80);
  ppuVar5 = ppuStack_90;
  if (ppuStack_90 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_90 + 1;
    do {
      puVar8 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = (undefined8 *)((long)puVar8 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_90)[2])(ppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
    }
  }
  FUN_10ab451f4(auStack_98,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631dd2,0x21,1);
  func_0x00010a015c50(param_1 + 0x768,auStack_98);
  plVar6 = *(long **)(*(long *)(param_1 + 0x768) + 0x228);
  if (plVar6 == *(long **)(*(long *)(param_1 + 0x768) + 0x230)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *plVar6;
  }
  uStack_138 = 0;
  FUN_10a015a04(auStack_e8,&uStack_138,param_1 + 0x7e8);
  func_0x000107c2b07c(&uStack_138,&UNK_10f631d7e);
  FUN_10a3368d0(lVar9,&uStack_138,auStack_e8,&UNK_10e4ac8d0,0xd);
  if (cStack_121 < '\0') {
    __ZdlPv(uStack_138);
  }
  uStack_188 = 0;
  FUN_10a015a04(&uStack_138,&uStack_188,param_1 + 0x868);
  func_0x000107c2b07c(&uStack_188,&UNK_10f631df4);
  FUN_10a3368d0(lVar9,&uStack_188,&uStack_138,&UNK_10e4ac8d0,0xd);
  if (cStack_171 < '\0') {
    __ZdlPv(uStack_188);
  }
  lVar7 = *(long *)(lVar9 + 600);
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 6;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined4 *)(lVar9 + 0x21e) = 0x1010101;
  func_0x00010a332748(lVar9 + 0x219,1);
  func_0x00010a332790(lVar9,7);
  func_0x00010a332700(lVar9 + 0x21a,0);
  lVar9 = *(long *)(lVar9 + 0x268);
  *(undefined4 *)(lVar9 + 0x28) = 1;
  *(undefined2 *)(lVar9 + 0x2c) = 0x700;
  *(undefined8 *)(lVar9 + 0x30) = 0x8000000000;
  *(undefined4 *)(lVar9 + 0x38) = 0;
  FUN_10a044790(auStack_128);
  (*(code *)*apuStack_120[0])(apuStack_120);
  plVar6 = plStack_130;
  if (plStack_130 != (long *)0x0) {
    plVar1 = plStack_130 + 1;
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
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_d8);
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  plVar6 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar1 = plStack_e0 + 1;
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
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_88);
  (*(code *)*apuStack_80[0])(apuStack_80);
  ppuVar5 = ppuStack_90;
  if (ppuStack_90 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_90 + 1;
    do {
      puVar8 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = (undefined8 *)((long)puVar8 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_90)[2])(ppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
    }
  }
  FUN_10ab451f4(auStack_98,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631e05,0x22,1);
  func_0x00010a015c50(param_1 + 0x778,auStack_98);
  plVar6 = *(long **)(*(long *)(param_1 + 0x778) + 0x228);
  if (plVar6 == *(long **)(*(long *)(param_1 + 0x778) + 0x230)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *plVar6;
  }
  uStack_138 = 0;
  FUN_10a015a04(auStack_e8,&uStack_138,param_1 + 0x7e8);
  func_0x000107c2b07c(&uStack_138,&UNK_10f631d7e);
  FUN_10a3368d0(lVar9,&uStack_138,auStack_e8,&UNK_10e4ac8d0,0xd);
  if (cStack_121 < '\0') {
    __ZdlPv(uStack_138);
  }
  uStack_188 = 0;
  FUN_10a015a04(&uStack_138,&uStack_188,param_1 + 0x868);
  func_0x000107c2b07c(&uStack_188,&UNK_10f631df4);
  FUN_10a3368d0(lVar9,&uStack_188,&uStack_138,&UNK_10e4ac8d0,0xd);
  if (cStack_171 < '\0') {
    __ZdlPv(uStack_188);
  }
  uStack_1d8 = 0;
  FUN_10a015a04(&uStack_188,&uStack_1d8,param_1 + 0x858);
  func_0x000107c2b07c(&uStack_1d8,&UNK_10f631db7);
  FUN_10a3368d0(lVar9,&uStack_1d8,&uStack_188,&UNK_10e4ac8d0,0xd);
  if (cStack_1c1 < '\0') {
    __ZdlPv(uStack_1d8);
  }
  lVar7 = *(long *)(lVar9 + 600);
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 6;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined4 *)(lVar9 + 0x21e) = 0x1010101;
  func_0x00010a332748(lVar9 + 0x219,1);
  func_0x00010a332790(lVar9,7);
  func_0x00010a332700(lVar9 + 0x21a,0);
  lVar9 = *(long *)(lVar9 + 0x268);
  *(undefined4 *)(lVar9 + 0x28) = 1;
  *(undefined2 *)(lVar9 + 0x2c) = 0x700;
  *(undefined8 *)(lVar9 + 0x30) = 0x8000000000;
  *(undefined4 *)(lVar9 + 0x38) = 0;
  FUN_10a044790(auStack_178);
  (*(code *)*apuStack_170[0])(apuStack_170);
  plVar6 = plStack_180;
  if (plStack_180 != (long *)0x0) {
    plVar1 = plStack_180 + 1;
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
      (**(code **)(*plStack_180 + 0x10))(plStack_180);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_128);
  (*(code *)*apuStack_120[0])(apuStack_120);
  plVar6 = plStack_130;
  if (plStack_130 != (long *)0x0) {
    plVar1 = plStack_130 + 1;
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
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_d8);
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  plVar6 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar1 = plStack_e0 + 1;
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
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_88);
  (*(code *)*apuStack_80[0])(apuStack_80);
  ppuVar5 = ppuStack_90;
  if (ppuStack_90 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_90 + 1;
    do {
      puVar8 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = (undefined8 *)((long)puVar8 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_90)[2])(ppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
    }
  }
  FUN_10ab451f4(auStack_98,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631e28,0x1e,1);
  func_0x00010a015c50(param_1 + 0x788,auStack_98);
  plVar6 = *(long **)(*(long *)(param_1 + 0x788) + 0x228);
  if (plVar6 == *(long **)(*(long *)(param_1 + 0x788) + 0x230)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *plVar6;
  }
  uStack_138 = 0;
  FUN_10a015a04(auStack_e8,&uStack_138,param_1 + 0x7e8);
  func_0x000107c2b07c(&uStack_138,&UNK_10f631d7e);
  FUN_10a3368d0(lVar9,&uStack_138,auStack_e8,&UNK_10e4ac8d0,0xd);
  if (cStack_121 < '\0') {
    __ZdlPv(uStack_138);
  }
  uStack_188 = 0;
  FUN_10a015a04(&uStack_138,&uStack_188,param_1 + 0x868);
  func_0x000107c2b07c(&uStack_188,&UNK_10f631df4);
  FUN_10a3368d0(lVar9,&uStack_188,&uStack_138,&UNK_10e4ac8d0,0xd);
  if (cStack_171 < '\0') {
    __ZdlPv(uStack_188);
  }
  lVar7 = *(long *)(lVar9 + 600);
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 6;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined4 *)(lVar9 + 0x21e) = 0x1010101;
  func_0x00010a332748(lVar9 + 0x219,1);
  func_0x00010a332790(lVar9,7);
  func_0x00010a332700(lVar9 + 0x21a,0);
  lVar9 = *(long *)(lVar9 + 0x268);
  *(undefined4 *)(lVar9 + 0x28) = 1;
  *(undefined2 *)(lVar9 + 0x2c) = 0x700;
  *(undefined8 *)(lVar9 + 0x30) = 0x8000000000;
  *(undefined4 *)(lVar9 + 0x38) = 0;
  FUN_10a044790(auStack_128);
  (*(code *)*apuStack_120[0])(apuStack_120);
  plVar6 = plStack_130;
  if (plStack_130 != (long *)0x0) {
    plVar1 = plStack_130 + 1;
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
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_d8);
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  plVar6 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar1 = plStack_e0 + 1;
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
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_88);
  (*(code *)*apuStack_80[0])(apuStack_80);
  ppuVar5 = ppuStack_90;
  if (ppuStack_90 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_90 + 1;
    do {
      puVar8 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = (undefined8 *)((long)puVar8 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_90)[2])(ppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
    }
  }
  FUN_10ab451f4(auStack_98,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631d48,0x1b,1);
  func_0x00010a015c50(param_1 + 0x798,auStack_98);
  plVar6 = *(long **)(*(long *)(param_1 + 0x798) + 0x228);
  if (plVar6 == *(long **)(*(long *)(param_1 + 0x798) + 0x230)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *plVar6;
  }
  func_0x000107c2b074(auStack_e8,&PTR_DAT_110b9d3c0);
  FUN_10a047898(lVar9 + 0x200,auStack_e8,auStack_e8);
  lVar7 = *(long *)(lVar9 + 600);
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 6;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined4 *)(lVar9 + 0x21e) = 0x1010101;
  func_0x00010a332748(lVar9 + 0x219,1);
  func_0x00010a332790(lVar9,2);
  func_0x00010a332700(lVar9 + 0x21a,0);
  lVar9 = *(long *)(lVar9 + 0x268);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  *(undefined8 *)(lVar9 + 0x30) = 0xff00000000;
  *(undefined4 *)(lVar9 + 0x38) = 0xff;
  FUN_10a044790(auStack_88);
  (*(code *)*apuStack_80[0])(apuStack_80);
  ppuVar5 = ppuStack_90;
  if (ppuStack_90 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_90 + 1;
    do {
      puVar8 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = (undefined8 *)((long)puVar8 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_90)[2])(ppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
    }
  }
  FUN_10ab451f4(auStack_98,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631d48,0x1b,1);
  func_0x00010a015c50(param_1 + 0x7a8,auStack_98);
  plVar6 = *(long **)(*(long *)(param_1 + 0x7a8) + 0x228);
  if (plVar6 == *(long **)(*(long *)(param_1 + 0x7a8) + 0x230)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *plVar6;
  }
  func_0x000107c2b074(auStack_e8,&PTR_DAT_110b9d3d8);
  FUN_10a047898(lVar9 + 0x200,auStack_e8,auStack_e8);
  uStack_138 = 0;
  FUN_10a015a04(auStack_e8,&uStack_138,param_1 + 0x7e8);
  func_0x000107c2b07c(&uStack_138,&UNK_10f631d7e);
  FUN_10a3368d0(lVar9,&uStack_138,auStack_e8,&UNK_10e4ac8d0,0xd);
  if (cStack_121 < '\0') {
    __ZdlPv(uStack_138);
  }
  lVar7 = *(long *)(lVar9 + 600);
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 6;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined4 *)(lVar9 + 0x21e) = 0x1010101;
  func_0x00010a332748(lVar9 + 0x219,1);
  func_0x00010a332790(lVar9,7);
  func_0x00010a332700(lVar9 + 0x21a,0);
  lVar9 = *(long *)(lVar9 + 0x268);
  *(undefined4 *)(lVar9 + 0x28) = 1;
  *(undefined2 *)(lVar9 + 0x2c) = 0x700;
  *(undefined8 *)(lVar9 + 0x30) = 0x4000000000;
  *(undefined4 *)(lVar9 + 0x38) = 0;
  FUN_10a044790(auStack_d8);
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  plVar6 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar1 = plStack_e0 + 1;
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
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a044790(auStack_88);
  (*(code *)*apuStack_80[0])(apuStack_80);
  ppuVar5 = ppuStack_90;
  if (ppuStack_90 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_90 + 1;
    do {
      puVar8 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = (undefined8 *)((long)puVar8 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_90)[2])(ppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
    }
  }
  FUN_10ab451f4(auStack_98,0,&UNK_10f631e47,0x1c,&UNK_10f631e64,7,&UNK_10f631e6c,0x1c,1);
  func_0x00010a015c50(param_1 + 0x7b8,auStack_98);
  plVar6 = *(long **)(*(long *)(param_1 + 0x7b8) + 0x228);
  if (plVar6 == *(long **)(*(long *)(param_1 + 0x7b8) + 0x230)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *plVar6;
  }
  lVar7 = *(long *)(lVar9 + 600);
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 6;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined4 *)(lVar9 + 0x21e) = 0x1010101;
  uStack_138 = 0;
  FUN_10a015a04(auStack_e8,&uStack_138,param_1 + 0x7f8);
  func_0x000107c2b07c(&uStack_138,&DAT_10f631c9c);
  FUN_10a3368d0(lVar9,&uStack_138,auStack_e8,&UNK_10e4ac8d0,0xd);
  if (cStack_121 < '\0') {
    __ZdlPv(uStack_138);
  }
  uStack_188 = 0;
  FUN_10a015a04(&uStack_138,&uStack_188,param_1 + 0x808);
  func_0x000107c2b07c(&uStack_188,&DAT_10f631caa);
  FUN_10a3368d0(lVar9,&uStack_188,&uStack_138,&UNK_10e4ac8d0,0xd);
  if (cStack_171 < '\0') {
    __ZdlPv(uStack_188);
  }
  uStack_1d8 = 0;
  FUN_10a015a04(&uStack_188,&uStack_1d8,param_1 + 0x7e8);
  func_0x000107c2b07c(&uStack_1d8,&UNK_10f631d7e);
  FUN_10a3368d0(lVar9,&uStack_1d8,&uStack_188,&UNK_10e4ac8d0,0xd);
  if (cStack_1c1 < '\0') {
    __ZdlPv(uStack_1d8);
  }
  uStack_228 = 0;
  FUN_10a015a04(&uStack_1d8,&uStack_228,param_1 + 0x838);
  func_0x000107c2b07c(&uStack_228,&UNK_10f631dc6);
  FUN_10a3368d0(lVar9,&uStack_228,&uStack_1d8,&UNK_10e4ac998,0xd);
  if (cStack_211 < '\0') {
    __ZdlPv(uStack_228);
  }
  auStack_248[0] = 0;
  FUN_10a015a04(&uStack_228,auStack_248,param_1 + 0x828);
  func_0x000107c2b07c(auStack_248,&UNK_10f631db7);
  FUN_10a3368d0(lVar9,auStack_248,&uStack_228,&UNK_10e4ac998,0xd);
  if (cStack_231 < '\0') {
    __ZdlPv(auStack_248[0]);
  }
  func_0x00010a332748(lVar9 + 0x219,1);
  func_0x00010a332790(lVar9,5);
  func_0x00010a332700(lVar9 + 0x21a,0);
  lVar9 = *(long *)(lVar9 + 0x268);
  *(undefined4 *)(lVar9 + 0x28) = 1;
  *(undefined2 *)(lVar9 + 0x2c) = 0x700;
  *(undefined8 *)(lVar9 + 0x30) = 0x4000000000;
  *(undefined4 *)(lVar9 + 0x38) = 0;
  FUN_10a044790(auStack_218);
  (*(code *)*apuStack_210[0])(apuStack_210);
  if (plStack_220 != (long *)0x0) {
    plVar6 = plStack_220 + 1;
    do {
      lVar9 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_220 + 0x10))(plStack_220);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_220);
    }
  }
  FUN_10a044790(auStack_1c8);
  (*(code *)*apuStack_1c0[0])(apuStack_1c0);
  if (plStack_1d0 != (long *)0x0) {
    plVar6 = plStack_1d0 + 1;
    do {
      lVar9 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1d0);
    }
  }
  FUN_10a044790(auStack_178);
  (*(code *)*apuStack_170[0])(apuStack_170);
  if (plStack_180 != (long *)0x0) {
    plVar6 = plStack_180 + 1;
    do {
      lVar9 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_180 + 0x10))(plStack_180);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_180);
    }
  }
  FUN_10a044790(auStack_128);
  (*(code *)*apuStack_120[0])(apuStack_120);
  if (plStack_130 != (long *)0x0) {
    plVar6 = plStack_130 + 1;
    do {
      lVar9 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_130);
    }
  }
  FUN_10a044790(auStack_d8);
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  if (plStack_e0 != (long *)0x0) {
    plVar6 = plStack_e0 + 1;
    do {
      lVar9 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
    }
  }
  FUN_10a044790(auStack_88);
  ppuVar5 = apuStack_80;
  (*(code *)*apuStack_80[0])(ppuVar5);
  if (ppuStack_90 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_90 + 1;
    do {
      puVar8 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = (undefined8 *)((long)puVar8 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_90)[2])(ppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_90);
      ppuVar5 = ppuStack_90;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (cStack_231 < '\0') {
      __ZdlPv(auStack_248[0]);
    }
    func_0x00010a015cec(&uStack_228);
    func_0x00010a015cec(&uStack_1d8);
    func_0x00010a015cec(&uStack_188);
    func_0x00010a015cec(&uStack_138);
    func_0x00010a015cec(auStack_e8);
    func_0x00010a015cb4(auStack_98);
    do {
      __Unwind_Resume(ppuVar5);
    } while( true );
  }
  return;
}



/* Entry: 10a01961c; end: 10a0196af;  */

void FUN_10a01961c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a0196b0(param_1 + 8,0);
  func_0x00010a0196d8(param_1,0);
  *(undefined8 *)(param_1 + 0x640) = 0;
  func_0x00010a064250(param_1 + 0x648);
  FUN_10a019700(param_1 + 0x6d8);
  FUN_10a019700(param_1 + 0x6f8);
  FUN_10a019700(param_1 + 0x728);
  FUN_10a019700(param_1 + 0x748);
  FUN_10a019700(param_1 + 0x758);
  FUN_10a019700(param_1 + 0x768);
  FUN_10a019700(param_1 + 0x778);
  FUN_10a019700(param_1 + 0x788);
  FUN_10a019700(param_1 + 0x798);
  FUN_10a019700(param_1 + 0x7a8);
  plVar5 = *(long **)(param_1 + 0x7c0);
  *(undefined8 *)(param_1 + 0x7b8) = 0;
  *(undefined8 *)(param_1 + 0x7c0) = 0;
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
  return;
}



/* Entry: 10a0196b0; end: 10a0196ff;  */

void FUN_10a0196b0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010a015d24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a019700; end: 10a01975b;  */

void FUN_10a019700(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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
  return;
}



/* Entry: 10a01975c; end: 10a01e6eb;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10a01975c(undefined ********param_1,undefined8 param_2,long param_3)

{
  undefined8 *****pppppuVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  uint uVar4;
  undefined *****pppppuVar5;
  undefined *****pppppuVar6;
  char cVar7;
  ushort uVar8;
  char cVar9;
  uint uVar10;
  ushort uVar11;
  bool bVar12;
  uint uVar13;
  undefined8 *******pppppppuVar14;
  undefined *****pppppuVar15;
  code *pcVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  undefined ********ppppppppuVar21;
  undefined ******ppppppuVar22;
  undefined8 uVar23;
  undefined2 *puVar24;
  undefined8 **ppuVar25;
  long *plVar26;
  undefined8 ******ppppppuVar27;
  undefined8 *******pppppppuVar28;
  undefined **ppuVar29;
  float *pfVar30;
  long *plVar31;
  undefined ********ppppppppuVar32;
  undefined1 *puVar33;
  undefined8 *puVar34;
  long *plVar35;
  byte bVar36;
  undefined *puVar37;
  undefined ********ppppppppuVar38;
  undefined ********ppppppppuVar39;
  long *plVar40;
  long *plVar41;
  long *plVar42;
  long *plVar43;
  long *plVar44;
  long *plVar45;
  ulong uVar46;
  undefined *******pppppppuVar47;
  undefined ********ppppppppuVar48;
  undefined *******pppppppuVar49;
  undefined ******ppppppuVar50;
  undefined ********ppppppppuVar51;
  undefined ****ppppuVar52;
  long lVar53;
  undefined4 uVar54;
  undefined ********ppppppppuVar55;
  ulong uVar56;
  undefined *******pppppppuVar57;
  undefined2 *puVar58;
  long *plVar59;
  uint uVar60;
  undefined8 ******ppppppuVar61;
  long lVar62;
  ulong uVar63;
  long *plVar64;
  long *plVar65;
  byte bVar66;
  undefined *******pppppppuVar67;
  undefined8 *******pppppppuVar68;
  long *plVar69;
  long lVar70;
  long *plVar71;
  uint uVar72;
  int iVar73;
  long *plVar74;
  byte *pbVar75;
  char *pcVar76;
  long *plVar77;
  byte *pbVar78;
  undefined *******pppppppuVar79;
  long *plVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 auVar85 [16];
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  ulong uStack_4e8;
  ushort uStack_4e0;
  long lStack_4d0;
  undefined *puStack_4c0;
  undefined ********ppppppppuStack_490;
  undefined ********ppppppppuStack_488;
  undefined ********ppppppppuStack_480;
  int aiStack_478 [2];
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined ********ppppppppuStack_440;
  undefined ******ppppppuStack_438;
  undefined ******ppppppuStack_430;
  undefined8 *****pppppuStack_428;
  undefined8 *****pppppuStack_420;
  undefined8 *******pppppppuStack_418;
  ulong uStack_410;
  byte bStack_401;
  undefined8 *******apppppppuStack_400 [2];
  char cStack_3e9;
  undefined8 *apuStack_3e8 [2];
  char cStack_3d1;
  undefined8 *******pppppppuStack_3d0;
  undefined ********ppppppppuStack_3c8;
  undefined ******ppppppuStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 *******pppppppuStack_390;
  undefined8 *******pppppppuStack_388;
  undefined8 uStack_380;
  undefined *******pppppppuStack_340;
  undefined ********ppppppppuStack_338;
  undefined8 ******ppppppuStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined ********ppppppppuStack_300;
  undefined ********ppppppppuStack_2f8;
  undefined ********ppppppppuStack_2f0;
  undefined ********ppppppppuStack_2b0;
  undefined ********ppppppppuStack_2a8;
  undefined ********ppppppppuStack_2a0;
  long lStack_298;
  float fStack_290;
  undefined ********ppppppppuStack_270;
  undefined *puStack_268;
  undefined **ppuStack_260;
  undefined8 uStack_220;
  float fStack_218;
  float fStack_214;
  undefined8 uStack_210;
  undefined ******ppppppuStack_208;
  undefined ********ppppppppuStack_200;
  undefined1 auStack_1e0 [72];
  long lStack_198;
  undefined ********ppppppppuStack_190;
  undefined8 uStack_188;
  float fStack_180;
  undefined4 uStack_17c;
  undefined ******ppppppuStack_178;
  undefined ********ppppppppuStack_170;
  undefined *****pppppuStack_168;
  undefined *****pppppuStack_160;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined *****pppppuStack_148;
  undefined8 *******pppppppuStack_140;
  undefined *****pppppuStack_138;
  undefined8 uStack_130;
  undefined *****pppppuStack_128;
  undefined *****pppppuStack_120;
  undefined ********ppppppppuStack_118;
  undefined8 uStack_110;
  undefined *****pppppuStack_108;
  undefined *****pppppuStack_100;
  undefined ********ppppppppuStack_f8;
  undefined *****pppppuStack_f0;
  undefined *****pppppuStack_e8;
  undefined *****pppppuStack_e0;
  undefined *****pppppuStack_d8;
  undefined *****pppppuStack_d0;
  undefined *****pppppuStack_c8;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[0xdb] == (undefined *******)0x0) {
    FUN_10a01739c(param_1);
  }
  ppppppppuStack_480 = param_1 + 0xc4;
  ppppppppuStack_488 = (undefined ********)0x0;
  aiStack_478[0] = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  *(byte *)(param_1 + 0xc3) = 0;
  iVar73 = *(int *)(param_3 + 0x20);
  ppppppppuStack_490 = (undefined ********)0x0;
  lVar62 = *(long *)(param_3 + 0x198);
  ppppppppuVar55 = param_1;
  if (*(long *)(param_3 + 0x1a0) == lVar62) {
LAB_10a01dd64:
    iVar20 = (int)ppppppppuVar55;
    FUN_10a00ea04(&ppppppppuStack_480);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lStack_4d0 = 0;
    ppppppppuVar55 = (undefined ********)0x0;
    bVar36 = 0;
    uVar56 = 0;
    bVar17 = false;
    bVar19 = false;
    bVar12 = false;
    bVar66 = 0;
    uStack_4e8 = 0;
    do {
      if (((*(ushort *)((long)ppppppppuVar55 + lVar62 + 0x20) & 0x45) == 1) &&
         (*(byte *)((long)ppppppppuVar55 + lVar62 + 0x200) == 1)) {
        ppppppppuStack_490 =
             (undefined ********)
             ((ulong)ppppppppuStack_490 | *(ulong *)((long)ppppppppuVar55 + lVar62 + 0x28));
        ppppppppuVar21 = (undefined ********)((ulong)&ppppppppuStack_490 | 8);
        FUN_10a3c8ddc(ppppppppuVar21,(byte *)((long)ppppppppuVar55 + lVar62 + 0x30));
        if (lStack_4d0 == 0) {
          if ((uStack_4e8 & 0xffff) == 0) {
            lStack_4d0 = *(long *)((long)ppppppppuVar55 + lVar62 + 0x28);
            uStack_4e8 = *(ulong *)((long)ppppppppuVar55 + lVar62 + 0x30);
          }
          else {
            lStack_4d0 = 0;
          }
        }
        bVar17 = *(byte *)((long)ppppppppuVar55 + lVar62 + 0x239) != 0 || bVar17;
        bVar36 = *(byte *)(param_1 + 0xc3) | *(byte *)((long)ppppppppuVar55 + lVar62 + 0x238);
        *(byte *)(param_1 + 0xc3) = bVar36;
        if (*(byte *)((long)ppppppppuVar55 + lVar62 + 0x201) == 1) {
          bVar66 = bVar66 | 1;
          bVar19 = (bool)(bVar19 | *(short *)((long)ppppppppuVar55 + lVar62 + 0x290) == -1);
        }
        if (*(byte *)((long)ppppppppuVar55 + lVar62 + 0x202) == 1) {
          bVar66 = bVar66 | 2;
          bVar19 = (bool)(bVar19 | *(short *)((long)ppppppppuVar55 + lVar62 + 0x640) == -1);
        }
        if (*(byte *)((long)ppppppppuVar55 + lVar62 + 0x203) == 1) {
          bVar66 = bVar66 | 4;
          bVar19 = (bool)(bVar19 | *(short *)((long)ppppppppuVar55 + lVar62 + 0x468) == -1);
        }
        ppppppppuStack_488 = ppppppppuVar21;
        if (*(int *)((long)ppppppppuVar55 + lVar62 + 0x234) != 0) {
          bVar12 = (bool)((*(int *)((long)ppppppppuVar55 + lVar62 + 0x230) != 0 || iVar73 < 0xdd) |
                         bVar12);
        }
      }
      uVar56 = uVar56 + 1;
      lVar62 = *(long *)(param_3 + 0x198);
      uVar46 = (*(long *)(param_3 + 0x1a0) - lVar62 >> 3) * 0x28cbfbeb9a020a33;
      ppppppppuVar55 = ppppppppuVar55 + 0xfb;
    } while (uVar56 <= uVar46 && uVar46 - uVar56 != 0);
    if (bVar66 == 0) goto LAB_10a01dd64;
    pppppppuVar47 = *param_1;
    if (pppppppuVar47 != (undefined *******)0x0) {
      pbVar75 = *(byte **)(param_3 + 0x200);
      pbVar78 = *(byte **)(param_3 + 0x208);
      if (pbVar75 != pbVar78) {
        do {
          ppppppppuVar21 = ppppppppuStack_490;
          if ((*pbVar75 | 4) == 0x16) {
            uStack_188._0_4_ = SUB84(ppppppppuStack_488,0);
            uStack_188._4_4_ = (float)((ulong)ppppppppuStack_488 >> 0x20);
            ppppppppuStack_190 = ppppppppuStack_490;
            uVar46 = *(ulong *)(pbVar75 + 0x30);
            uVar56 = (ulong)&ppppppppuStack_190 | 8;
            FUN_10a3c8d60(uVar56,pbVar75 + 0x38);
            ppppppppuVar55 = ppppppppuVar21;
            if (((uVar46 & (ulong)ppppppppuVar21) != 0 || (uVar56 & 0xffff) != 0) &&
               ((pbVar75[0x19] >> 6 & 1) == 0)) {
              ppppppppuVar21 = *(undefined *********)(pbVar75 + 0x1a8);
              if ((ppppppppuVar21[0x4c] != (undefined *******)0x0) &&
                 ((ppppppuVar22 = ppppppppuVar21[0x4c][0x1c], ppppppuVar22 != (undefined ******)0x0
                  && ((*(code *)(*ppppppuVar22)[0x13])(),
                     !bVar17 && (((uint)ppppppuVar22 ^ 0xffffffff) & 1) == 0)))) {
                pppppppuVar67 = *param_1;
                uVar56 = *(ulong *)(pbVar75 + 0x1a8);
                pppppppuVar47 = pppppppuVar67 + 9;
                FUN_10a0618a0(pppppppuVar47,*(undefined8 *)(uVar56 + 0x40),
                              *(undefined8 *)(uVar56 + 0x48));
                if (pppppppuVar47 == (undefined *******)0x0) {
                  FUN_10a00ffe4(uVar56);
                  FUN_10a010080(uVar56,0);
LAB_10a019ad0:
                  puStack_4c0 = &UNK_10f6315ec;
                }
                else {
                  uVar72 = *(uint *)(pppppppuVar47 + 4);
                  ppppppppuVar55 = (undefined ********)(ulong)uVar72;
                  if ((int)uVar72 < 0) {
                    uVar46 = uVar56;
                    FUN_10a00ffe4();
                    FUN_10a010080(uVar56,0);
                    if (-3 < (int)uVar72) {
                      if (uVar72 == 0xfffffffe) {
                        puStack_4c0 = &UNK_10f631602;
                        if ((uVar46 & 1) != 0) goto LAB_10a019ae8;
                      }
                      else if ((uVar72 == 0xffffffff) &&
                              (puStack_4c0 = &UNK_10f631621,
                              (((uint)uVar46 | (uint)uVar56) & 1) != 0)) goto LAB_10a019ae8;
                      goto LAB_10a019b08;
                    }
                    if (uVar72 != 0xfffffffb) {
                      if (uVar72 == 0xfffffffd) goto LAB_10a019ad0;
                      goto LAB_10a019b08;
                    }
                    puStack_4c0 = &UNK_10f6315d4;
                  }
                  else {
                    ppppppppuVar48 =
                         (undefined ********)
                         (((long)pppppppuVar67[0xf] - (long)pppppppuVar67[0xe] >> 5) *
                         -0x5555555555555555);
                    if (ppppppppuVar48 < ppppppppuVar55 ||
                        (long)ppppppppuVar48 - (long)ppppppppuVar55 == 0) goto LAB_10a01e454;
                    ppppppppuVar55 = (undefined ********)(pppppppuVar67[0xe] + (ulong)uVar72 * 0xc);
                    if ((*(undefined ********)(*(long *)(uVar56 + 0x260) + 0x40) ==
                         ppppppppuVar55[1]) &&
                       (*(undefined ********)(*(long *)(uVar56 + 0x260) + 0x48) == ppppppppuVar55[2]
                       )) {
                      pppppppuVar47 = ppppppppuVar55[9];
                      if ((pbVar75[0x18] >> 5 & 1) == 0) {
                        uVar46 = uVar56;
                        FUN_10a00ff8c();
                        if ((pbVar75[0x18] >> 3 & 1) == 0) {
                          bVar18 = false;
                        }
                        else {
                          bVar18 = *(long *)(uVar46 + 0x40) != *(long *)(uVar46 + 0x48);
                        }
                      }
                      else {
                        bVar18 = true;
                      }
                      puStack_4c0 = &UNK_10f631657;
                      if (bVar18 == (pppppppuVar47 != (undefined *******)0x0)) {
                        if (*(long *)(uVar56 + 0x260) == 0) {
                          uVar23 = 0;
                        }
                        else {
                          uVar23 = *(undefined8 *)(*(long *)(uVar56 + 0x260) + 0xe0);
                        }
                        plVar35 = (long *)0x1;
                        FUN_10a061940(uVar23);
                        plVar35 = (long *)*plVar35;
                        (**(code **)(*plVar35 + 0x30))();
                        puStack_4c0 = &UNK_10f63166e;
                        if (ppppppppuVar55[5] == (undefined *******)(ulong)*(uint *)(plVar35 + 0xf))
                        goto LAB_10a019b08;
                      }
                    }
                    else {
                      puStack_4c0 = &UNK_10f63163b;
                    }
                  }
                }
LAB_10a019ae8:
                ppppppppuVar55 = ppppppppuVar21;
                FUN_10a00ffe4();
                ppppppppuVar48 = ppppppppuVar21;
                FUN_10a010080(ppppppppuVar21,0);
                if ((((uint)ppppppppuVar55 | (uint)ppppppppuVar48) & 1) != 0) {
                  if (*(byte *)(param_1 + 0xc3) == 1) {
                    FUN_10a00ff18(&ppppppppuStack_300,ppppppppuVar21[0x2d]);
                    ppppppppuVar55 = (undefined ********)&ppppppppuStack_300;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                              (ppppppppuVar55,0,&UNK_10f631e89,0x17);
                    ppppppppuStack_2a8 = (undefined ********)ppppppppuVar55[1];
                    ppppppppuStack_2b0 = (undefined ********)*ppppppppuVar55;
                    ppppppppuStack_2a0 = (undefined ********)ppppppppuVar55[2];
                    ppppppppuVar55[1] = (undefined *******)0x0;
                    ppppppppuVar55[2] = (undefined *******)0x0;
                    *ppppppppuVar55 = (undefined *******)0x0;
                    ppppppppuVar55 = (undefined ********)&ppppppppuStack_2b0;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (ppppppppuVar55,&UNK_10f594a73,3);
                    pppppppuVar47 = *ppppppppuVar55;
                    uStack_210 = (undefined ********)ppppppppuVar55[2];
                    fStack_218 = SUB84(ppppppppuVar55[1],0);
                    fStack_214 = (float)((ulong)ppppppppuVar55[1] >> 0x20);
                    uStack_220._0_2_ = SUB82(pppppppuVar47,0);
                    uStack_220._2_2_ = (undefined2)((ulong)pppppppuVar47 >> 0x10);
                    uStack_220._4_4_ = (float)((ulong)pppppppuVar47 >> 0x20);
                    ppppppppuVar55[1] = (undefined *******)0x0;
                    ppppppppuVar55[2] = (undefined *******)0x0;
                    *ppppppppuVar55 = (undefined *******)0x0;
                    puVar37 = puStack_4c0;
                    _strlen(puStack_4c0);
                    puVar34 = &uStack_220;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (puVar34,puStack_4c0,puVar37);
                    fStack_180 = (float)puVar34[2];
                    uStack_17c = (float)((ulong)puVar34[2] >> 0x20);
                    ppppppppuStack_190 = (undefined ********)*puVar34;
                    uStack_188._0_4_ = (float)puVar34[1];
                    uStack_188._4_4_ = (float)((ulong)puVar34[1] >> 0x20);
                    puVar34[1] = 0;
                    puVar34[2] = 0;
                    *puVar34 = 0;
                    fVar86 = uStack_17c;
                    uVar56 = CONCAT44(uStack_188._4_4_,(float)uStack_188);
                    ppppppppuVar55 = ppppppppuStack_190;
                    if (-1 < (int)uStack_17c) {
                      uVar56 = (ulong)uStack_17c._3_1_;
                      ppppppppuVar55 = (undefined ********)&ppppppppuStack_190;
                    }
                    FUN_10a00edf0(&uStack_470,2,ppppppppuVar55,uVar56,aiStack_478);
                    if ((int)fVar86 < 0) {
                      __ZdlPv();
                    }
                    if ((long)uStack_210 < 0) {
                      __ZdlPv();
                    }
                    if ((long)ppppppppuStack_2a0 < 0) {
                      __ZdlPv();
                    }
                    if ((long)ppppppppuStack_2f0 < 0) {
                      __ZdlPv();
                    }
                    bVar36 = *(byte *)(param_1 + 0xc3);
                  }
                  else {
                    bVar36 = 0;
                  }
                  *(byte *)*param_1 = bVar36;
                  goto LAB_10a019fbc;
                }
              }
            }
          }
LAB_10a019b08:
          pbVar75 = pbVar75 + 0x1b8;
        } while (pbVar75 != pbVar78);
        pppppppuVar47 = *param_1;
        bVar36 = *(byte *)(param_1 + 0xc3);
      }
      *(byte *)pppppppuVar47 = bVar36;
LAB_10a01b89c:
      ppppppppuVar48 = ppppppppuStack_488;
      ppppppppuVar21 = ppppppppuStack_490;
      if (0 < (int)((ulong)((long)pppppppuVar47[0xf] - (long)pppppppuVar47[0xe]) >> 5) * -0x55555555
         ) {
        if (bVar19) {
          uStack_188._0_4_ = 0.0;
          uStack_188._4_4_ = -3.4028235e+38;
          ppppppppuStack_190 = (undefined ********)0x0;
          fStack_180 = -3.4028235e+38;
          uStack_17c = -3.4028235e+38;
          fStack_218 = 0.0;
          fStack_214 = -3.4028235e+38;
          uStack_220._0_2_ = 0;
          uStack_220._2_2_ = 0;
          uStack_220._4_4_ = 0.0;
          uStack_210 = (undefined ********)0xff7fffffff7fffff;
          lVar62 = *(long *)(param_3 + 0x200);
          if (*(long *)(param_3 + 0x208) == lVar62) {
            uVar81 = 0;
            uVar82 = 0;
            uVar83 = 0;
            uVar84 = 0;
          }
          else {
            uVar56 = 0;
            lVar70 = 0x1a8;
            do {
              lVar53 = lVar62 + lVar70;
              if (*(char *)(lVar53 + -0x1a8) == '\x12') {
                ppppppppuStack_2b0 = ppppppppuVar21;
                ppppppppuStack_2a8 = ppppppppuVar48;
                uVar46 = *(ulong *)(lVar53 + -0x178);
                ppppppppuVar55 = (undefined ********)&ppppppppuStack_2a8;
                FUN_10a3c8d60(ppppppppuVar55,lVar53 + -0x170);
                if ((uVar46 & (ulong)ppppppppuVar21) != 0 || ((ulong)ppppppppuVar55 & 0xffff) != 0)
                {
                  uVar63 = *(ulong *)(lVar62 + lVar70);
                  uVar46 = uVar63;
                  FUN_10a00ffe4();
                  if (((uVar46 & 1) != 0) ||
                     (uVar46 = uVar63, FUN_10a010080(uVar63,0), (int)uVar46 != 0)) {
                    lVar62 = param_3;
                    FUN_10a015150(param_3,uVar56);
                    FUN_10a005448(&ppppppppuStack_2b0,lVar62 + 0x5c,lVar62 + 4);
                    FUN_10a01e958(&ppppppppuStack_300,&ppppppppuStack_190,&ppppppppuStack_2b0);
                    uStack_188._0_4_ = SUB84(ppppppppuStack_2f8,0);
                    uStack_188._4_4_ = (float)((ulong)ppppppppuStack_2f8 >> 0x20);
                    ppppppppuStack_190 = ppppppppuStack_300;
                    fStack_180 = SUB84(ppppppppuStack_2f0,0);
                    uStack_17c = (float)((ulong)ppppppppuStack_2f0 >> 0x20);
                    FUN_10a010080(uVar63,0);
                    if ((int)uVar63 != 0) {
                      FUN_10a01e958(&ppppppppuStack_300,&uStack_220,&ppppppppuStack_2b0);
                      fStack_218 = SUB84(ppppppppuStack_2f8,0);
                      fStack_214 = (float)((ulong)ppppppppuStack_2f8 >> 0x20);
                      uStack_220._0_2_ = SUB82(ppppppppuStack_300,0);
                      uStack_220._2_2_ = (undefined2)((ulong)ppppppppuStack_300 >> 0x10);
                      uStack_220._4_4_ = (float)((ulong)ppppppppuStack_300 >> 0x20);
                      uStack_210 = ppppppppuStack_2f0;
                    }
                  }
                }
              }
              uVar56 = uVar56 + 1;
              lVar62 = *(long *)(param_3 + 0x200);
              uVar46 = (*(long *)(param_3 + 0x208) - lVar62 >> 3) * 0x6fb586fb586fb587;
              lVar70 = lVar70 + 0x1b8;
            } while (uVar56 <= uVar46 && uVar46 - uVar56 != 0);
            uVar81 = (undefined1)(undefined2)uStack_220;
            uVar82 = (undefined1)((ushort)(undefined2)uStack_220 >> 8);
            uVar83 = (undefined1)uStack_220._2_2_;
            uVar84 = (undefined1)((ushort)uStack_220._2_2_ >> 8);
          }
          fVar90 = SQRT(uStack_17c * uStack_17c +
                        fStack_180 * fStack_180 + uStack_188._4_4_ * uStack_188._4_4_) *
                   0.0009765625;
          *(float *)((long)param_1 + 0x3c) = fVar90;
          fVar89 = (uStack_17c + fVar90) * 1.2;
          fVar88 = (fStack_214 + fVar90) * 1.2;
          fVar86 = (uStack_188._4_4_ + fVar90) * 1.2;
          fVar87 = (fStack_180 + fVar90) * 1.2;
          fVar89 = SQRT(fVar89 * fVar89 + fVar86 * fVar86 + fVar87 * fVar87);
          fVar86 = (SUB84(uStack_210,0) + fVar90) * 1.2;
          fVar87 = ((float)((ulong)uStack_210 >> 0x20) + fVar90) * 1.2;
          *(ulong *)((long)param_1 + 0x34) = CONCAT44(fStack_218 - fVar87,uStack_220._4_4_ - fVar86)
          ;
          auVar85._0_4_ = fVar89 + fVar89;
          auVar85._4_4_ = fVar88 + fVar88;
          auVar85._8_4_ = fVar86 + fVar86;
          auVar85._12_4_ = fVar87 + fVar87;
          *(ulong *)((long)param_1 + 0x1c) =
               CONCAT44(65535.0 / auVar85._12_4_,65535.0 / auVar85._8_4_);
          *(ulong *)((long)param_1 + 0x14) =
               CONCAT44(65535.0 / auVar85._4_4_,16777215.0 / auVar85._0_4_);
          auVar85 = NEON_ext(auVar85,ZEXT416(CONCAT13(uVar84,CONCAT12(uVar83,CONCAT11(uVar82,uVar81)
                                                                     ))),4,1);
          *(ulong *)((long)param_1 + 0x2c) =
               CONCAT44((float)CONCAT13(uVar84,CONCAT12(uVar83,CONCAT11(uVar82,uVar81))) - fVar88,
                        auVar85._8_4_ / 65535.0);
          *(ulong *)((long)param_1 + 0x24) =
               CONCAT44(auVar85._4_4_ / 65535.0,(fVar88 + fVar88) / 65535.0);
          ppppppppuVar55 = ppppppppuVar21;
        }
        ppppppppuVar48 = ppppppppuStack_488;
        ppppppppuVar21 = ppppppppuStack_490;
        pbVar75 = pbRam00000001137e9348;
        if ((*(byte *)((long)param_1 + 0x676) & 1) == 0) {
          if (*(byte *)((long)param_1 + 0x677) == 1) {
            if (pbRam00000001137e9340 != pbRam00000001137e9348) {
              pbVar78 = pbRam00000001137e9340;
              do {
                bVar36 = *pbVar78;
                if ((bVar36 & bVar66) != 0) {
                  uStack_188 = (undefined ********)0x0;
                  uStack_17c = 0.0;
                  fStack_180 = 0.0;
                  fStack_214 = 0.0;
                  fStack_218 = 0.0;
                  uStack_210 = (undefined ********)0x0;
                  uStack_220._0_2_ = SUB82(&fStack_218,0);
                  uStack_220._2_2_ = (undefined2)((ulong)&fStack_218 >> 0x10);
                  uStack_220._4_4_ = (float)((ulong)&fStack_218 >> 0x20);
                  ppppppppuStack_2a8 = (undefined ********)0x0;
                  ppppppppuStack_2a0 = (undefined ********)0x0;
                  lVar62 = *(long *)(param_3 + 0x208);
                  lVar70 = *(long *)(param_3 + 0x200);
                  ppppppppuStack_2b0 = (undefined ********)&ppppppppuStack_2a8;
                  ppppppppuStack_190 = (undefined ********)&uStack_188;
                  if (lVar62 == lVar70) {
                    uStack_4e0 = 0;
                    uVar11 = 0;
                  }
                  else {
                    uVar56 = 0;
                    uVar60 = 0;
                    uVar13 = 0;
                    uVar72 = 1;
                    do {
                      ppppppppuVar55 = (undefined ********)(lVar70 + uVar56 * 0x1b8);
                      if ((*(byte *)ppppppppuVar55 | 4) == 0x16) {
                        ppppppppuStack_300 = ppppppppuVar21;
                        ppppppppuStack_2f8 = ppppppppuVar48;
                        pppppppuVar47 = ppppppppuVar55[6];
                        ppppppppuVar39 = (undefined ********)&ppppppppuStack_2f8;
                        FUN_10a3c8d60(ppppppppuVar39,ppppppppuVar55 + 7);
                        if ((((ulong)pppppppuVar47 & (ulong)ppppppppuVar21) != 0 ||
                             ((ulong)ppppppppuVar39 & 0xffff) != 0) &&
                           (pppppppuVar47 = ppppppppuVar55[0x35],
                           pppppppuVar47 != (undefined *******)0x0)) {
                          (*(code *)(*pppppppuVar47)[0x1f])(pppppppuVar47,0x240ea0ea4778e8cd);
                          if (pppppppuVar47 != (undefined *******)0x0) {
                            pppppppuVar67 = pppppppuVar47 + 0x72;
                            FUN_10a012e0c(pppppppuVar67,bVar36);
                            *(undefined2 *)((long)pppppppuVar67 + 0x4a) = 0;
                            if (((ulong)*pppppppuVar67 & 0x100) != 0) {
                              cVar7 = *(char *)((long)pppppppuVar67 + 2);
                              if (cVar7 == '\0') {
                                bVar19 = (uVar13 & 0xffff) == 0;
                                uVar4 = uVar72;
                                if (!bVar19) {
                                  uVar4 = uVar13;
                                }
                                uVar72 = uVar72 << bVar19;
                                *(short *)((long)pppppppuVar67 + 0x4a) = (short)uVar4;
                                uVar13 = uVar4;
                              }
                              else {
                                lVar62 = 0x20;
                                if (cVar7 != '\x02') {
                                  lVar62 = 8;
                                }
                                plVar35 = (long *)((long)pppppppuVar67 + lVar62);
                                lVar70 = plVar35[1] - *plVar35 >> 4;
                                ppppppppuStack_2f8 = (undefined ********)0x0;
                                ppppppppuStack_300 = (undefined ********)0x0;
                                ppppppppuStack_2f0 = (undefined ********)0x0;
                                FUN_10a01e6ec(&ppppppppuStack_300,lVar70);
                                lVar62 = 0x9e3779b9;
                                uVar46 = lVar70 + 0x9e3779b9;
                                if (cVar7 == '\x02') {
                                  lVar62 = 0x9e3779ba;
                                }
                                ppppppppuVar55 =
                                     (undefined ********)
                                     (lVar62 + uVar46 * 0x40 + (uVar46 >> 2) ^ uVar46);
                                plVar45 = (long *)plVar35[1];
                                for (plVar35 = (long *)*plVar35; ppppppppuVar39 = ppppppppuStack_2f8
                                    , plVar35 != plVar45; plVar35 = plVar35 + 2) {
                                  plVar31 = (long *)plVar35[1];
                                  if ((plVar31 != (long *)0x0) && (plVar31[1] != -1)) {
                                    __ZNSt3__119__shared_weak_count4lockEv();
                                    lVar62 = *plVar35;
                                    plVar26 = plVar31 + 1;
                                    do {
                                      lVar70 = *plVar26;
                                      cVar9 = '\x01';
                                      bVar19 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                                      if (bVar19) {
                                        *plVar26 = lVar70 + -1;
                                        cVar9 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar9 != '\0');
                                    if (lVar70 == 0) {
                                      (**(code **)(*plVar31 + 0x10))(plVar31);
                                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
                                    }
                                    if (*(char *)(lVar62 + 0x3a0) == '\x01') {
                                      pppppppuStack_388 = *(undefined8 ********)(lVar62 + 0x48);
                                      pppppppuStack_390 = *(undefined8 ********)(lVar62 + 0x40);
                                      func_0x00010a01e778(&ppppppppuStack_300,&pppppppuStack_390);
                                      pbVar3 = (byte *)((long)ppppppppuVar55 + 0x9e3779b9);
                                      ppppppppuVar55 =
                                           (undefined ********)
                                           ((long)pbVar3 * 0x40 + 0x9e3779b9 + ((ulong)pbVar3 >> 2)
                                            + *(long *)(lVar62 + 0x48) ^ (ulong)pbVar3);
                                    }
                                  }
                                }
                                uVar4 = uVar72;
                                if ((cVar7 == '\x02') && (ppppppppuStack_300 == ppppppppuStack_2f8))
                                {
                                  bVar19 = (uVar13 & 0xffff) == 0;
                                  if (!bVar19) {
                                    uVar4 = uVar13;
                                  }
                                  uVar72 = uVar72 << bVar19;
                                  *(short *)((long)pppppppuVar67 + 0x4a) = (short)uVar4;
                                }
                                else {
                                  ppppppppuVar38 = (undefined ********)&ppppppppuStack_2a8;
                                  ppppppppuVar51 = ppppppppuStack_2a8;
                                  if (ppppppppuStack_2a8 != (undefined ********)0x0) {
                                    do {
                                      lVar62 = 8;
                                      if (ppppppppuVar55 <= ppppppppuVar51[4]) {
                                        lVar62 = 0;
                                        ppppppppuVar38 = ppppppppuVar51;
                                      }
                                      pbVar3 = (byte *)((long)ppppppppuVar51 + lVar62);
                                      ppppppppuVar51 = *(undefined *********)pbVar3;
                                    } while (*(undefined *********)pbVar3 != (undefined ********)0x0
                                            );
                                    if (((undefined *********)ppppppppuVar38 != &ppppppppuStack_2a8)
                                       && (ppppppppuVar38[4] <= ppppppppuVar55)) {
                                      *(undefined2 *)((long)pppppppuVar67 + 0x4a) =
                                           *(undefined2 *)(ppppppppuVar38 + 5);
                                      uVar4 = uVar13;
                                      goto LAB_10a01c050;
                                    }
                                  }
                                  if ((uVar72 >> 0xf & 1) == 0) {
                                    ppppppppuVar38 = (undefined ********)&uStack_220;
                                    if (cVar7 != '\x02') {
                                      ppppppppuVar38 = (undefined ********)&ppppppppuStack_190;
                                    }
                                    uVar11 = (ushort)uVar72;
                                    for (ppppppppuVar51 = ppppppppuStack_300;
                                        ppppppppuVar51 != ppppppppuVar39;
                                        ppppppppuVar51 = ppppppppuVar51 + 2) {
                                      pppppppuStack_388 = (undefined8 *******)ppppppppuVar51[1];
                                      pppppppuStack_390 = (undefined8 *******)*ppppppppuVar51;
                                      ppppppppuVar32 = ppppppppuVar38;
                                      FUN_10a06436c(ppppppppuVar38,pppppppuStack_390,
                                                    pppppppuStack_388,&pppppppuStack_390);
                                      *(ushort *)(ppppppppuVar32 + 6) =
                                           *(ushort *)(ppppppppuVar32 + 6) | uVar11;
                                    }
                                    *(ushort *)((long)pppppppuVar67 + 0x4a) = uVar11;
                                    ppppppppuVar39 = (undefined ********)&ppppppppuStack_2a8;
                                    ppppppppuVar38 = ppppppppuStack_2a8;
                                    while (ppppppppuVar51 = ppppppppuVar39,
                                          ppppppppuVar38 != (undefined ********)0x0) {
                                      while (ppppppppuVar32 = ppppppppuVar38,
                                            ppppppppuVar32[4] <= ppppppppuVar55) {
                                        if (ppppppppuVar55 <= ppppppppuVar32[4]) goto LAB_10a01c028;
                                        ppppppppuVar38 = (undefined ********)ppppppppuVar32[1];
                                        if ((undefined ********)ppppppppuVar32[1] ==
                                            (undefined ********)0x0) {
                                          ppppppppuVar39 = ppppppppuVar32 + 1;
                                          ppppppppuVar51 = ppppppppuVar32;
                                          goto LAB_10a01be84;
                                        }
                                      }
                                      ppppppppuVar39 = ppppppppuVar32;
                                      ppppppppuVar38 = (undefined ********)*ppppppppuVar32;
                                    }
LAB_10a01be84:
                                    ppppppppuVar32 = (undefined ********)0x30;
                                    __Znwm();
                                    ppppppppuVar32[4] = (undefined *******)ppppppppuVar55;
                                    *(undefined2 *)(ppppppppuVar32 + 5) = 0;
                                    *ppppppppuVar32 = (undefined *******)0x0;
                                    ppppppppuVar32[1] = (undefined *******)0x0;
                                    ppppppppuVar32[2] = (undefined *******)ppppppppuVar51;
                                    *ppppppppuVar39 = (undefined *******)ppppppppuVar32;
                                    ppppppppuVar38 = ppppppppuVar32;
                                    if ((undefined ********)*ppppppppuStack_2b0 !=
                                        (undefined ********)0x0) {
                                      ppppppppuVar38 = (undefined ********)*ppppppppuVar39;
                                      ppppppppuStack_2b0 = (undefined ********)*ppppppppuStack_2b0;
                                    }
                                    func_0x000107c2b058(ppppppppuStack_2a8,ppppppppuVar38);
                                    ppppppppuStack_2a0 =
                                         (undefined ********)((long)ppppppppuStack_2a0 + 1);
LAB_10a01c028:
                                    *(ushort *)(ppppppppuVar32 + 5) = uVar11;
                                    if (cVar7 != '\x02') {
                                      uVar4 = 0;
                                    }
                                    uVar60 = uVar4 | uVar60;
                                    uVar72 = uVar72 << 1;
                                    uVar4 = uVar13;
                                  }
                                  else {
                                    FUN_10a00ff18(&pppppppuStack_3d0,pppppppuVar47[0x2d]);
                                    pppppppuVar68 = &pppppppuStack_3d0;
                                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                              (pppppppuVar68,0,&UNK_10f631f29,0x3e);
                                    ppppppppuStack_338 = (undefined ********)pppppppuVar68[1];
                                    pppppppuStack_340 = (undefined *******)*pppppppuVar68;
                                    ppppppuStack_330 = pppppppuVar68[2];
                                    pppppppuVar68[1] = (undefined8 ******)0x0;
                                    pppppppuVar68[2] = (undefined8 ******)0x0;
                                    *pppppppuVar68 = (undefined8 ******)0x0;
                                    pppppppuVar47 = (undefined *******)&pppppppuStack_340;
                                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                              (pppppppuVar47,&DAT_10f638984,1);
                                    uStack_380 = (undefined **)pppppppuVar47[2];
                                    pppppppuStack_388 = (undefined8 *******)pppppppuVar47[1];
                                    pppppppuStack_390 = (undefined8 *******)*pppppppuVar47;
                                    pppppppuVar47[1] = (undefined ******)0x0;
                                    pppppppuVar47[2] = (undefined ******)0x0;
                                    *pppppppuVar47 = (undefined ******)0x0;
                                    pppppppuVar14 = pppppppuStack_390;
                                    uVar10 = (uint)(char)uStack_380._7_1_;
                                    ppppppppuVar55 = (undefined ********)(ulong)uVar10;
                                    pppppppuVar68 = pppppppuStack_388;
                                    pppppppuVar28 = pppppppuStack_390;
                                    if (-1 < (int)uVar10) {
                                      pppppppuVar68 = (undefined8 *******)(ulong)uStack_380._7_1_;
                                      pppppppuVar28 = &pppppppuStack_390;
                                    }
                                    FUN_10a00edf0(&uStack_470,2,pppppppuVar28,pppppppuVar68,
                                                  aiStack_478);
                                    if ((int)uVar10 < 0) {
                                      __ZdlPv(pppppppuVar14);
                                    }
                                    if ((long)ppppppuStack_330 < 0) {
                                      __ZdlPv(pppppppuStack_340);
                                    }
                                    if ((long)ppppppuStack_3c0 < 0) {
                                      __ZdlPv(pppppppuStack_3d0);
                                    }
                                    bVar19 = (uVar13 & 0xffff) == 0;
                                    if (!bVar19) {
                                      uVar4 = uVar13;
                                    }
                                    uVar72 = uVar72 << bVar19;
                                    *(short *)((long)pppppppuVar67 + 0x4a) = (short)uVar4;
                                  }
                                }
LAB_10a01c050:
                                uVar13 = uVar4;
                                if (ppppppppuStack_300 != (undefined ********)0x0) {
                                  ppppppppuStack_2f8 = ppppppppuStack_300;
                                  __ZdlPv();
                                }
                              }
                            }
                          }
                        }
                      }
                      uVar11 = (ushort)uVar60;
                      uStack_4e0 = (ushort)uVar13;
                      uVar56 = uVar56 + 1;
                      lVar62 = *(long *)(param_3 + 0x208);
                      lVar70 = *(long *)(param_3 + 0x200);
                      uVar46 = (lVar62 - lVar70 >> 3) * 0x6fb586fb586fb587;
                    } while (uVar56 <= uVar46 && uVar46 - uVar56 != 0);
                  }
                  if (lVar62 != lVar70) {
                    ppppppppuVar55 = (undefined ********)0x0;
                    lVar62 = 0x1a8;
                    do {
                      lVar53 = lVar70 + lVar62;
                      if ((*(byte *)(lVar53 + -0x1a8) | 4) == 0x16) {
                        ppppppppuStack_300 = ppppppppuVar21;
                        ppppppppuStack_2f8 = ppppppppuVar48;
                        uVar56 = *(ulong *)(lVar53 + -0x178);
                        ppppppppuVar39 = (undefined ********)&ppppppppuStack_2f8;
                        FUN_10a3c8d60(ppppppppuVar39,lVar53 + -0x170);
                        if ((uVar56 & (ulong)ppppppppuVar21) != 0 ||
                            ((ulong)ppppppppuVar39 & 0xffff) != 0) {
                          lVar70 = *(long *)(lVar70 + lVar62);
                          pcVar76 = (char *)(lVar70 + 0x390);
                          FUN_10a012e0c(pcVar76,bVar36);
                          if (*pcVar76 == '\x01') {
                            ppppppppuVar38 = *(undefined *********)(lVar70 + 0x40);
                            ppppppppuVar51 = *(undefined *********)(lVar70 + 0x48);
                            ppppppppuVar39 = (undefined ********)&ppppppppuStack_190;
                            ppppppppuStack_300 = ppppppppuVar38;
                            ppppppppuStack_2f8 = ppppppppuVar51;
                            FUN_10a06436c(ppppppppuVar39,ppppppppuVar38,ppppppppuVar51,
                                          &ppppppppuStack_300);
                            uVar8 = *(ushort *)(ppppppppuVar39 + 6);
                            puVar24 = (undefined2 *)&uStack_220;
                            FUN_10a06436c(puVar24,ppppppppuVar38,ppppppppuVar51,&ppppppppuStack_300)
                            ;
                            *(ushort *)(pcVar76 + 0x48) =
                                 uVar8 | uStack_4e0 | uVar11 & (puVar24[0x18] ^ 0xffff);
                          }
                        }
                      }
                      ppppppppuVar55 = (undefined ********)((long)ppppppppuVar55 + 1);
                      lVar70 = *(long *)(param_3 + 0x200);
                      ppppppppuVar39 =
                           (undefined ********)
                           ((*(long *)(param_3 + 0x208) - lVar70 >> 3) * 0x6fb586fb586fb587);
                      lVar62 = lVar62 + 0x1b8;
                    } while (ppppppppuVar55 <= ppppppppuVar39 &&
                             (long)ppppppppuVar39 - (long)ppppppppuVar55 != 0);
                  }
                  func_0x00010a0642dc(ppppppppuStack_2a8);
                  func_0x00010a0642a4(CONCAT44(fStack_214,fStack_218));
                  func_0x00010a0642a4(uStack_188);
                }
                pbVar78 = pbVar78 + 1;
              } while (pbVar78 != pbVar75);
            }
          }
          else if (pbRam00000001137e9340 != pbRam00000001137e9348) {
            ppppppppuVar55 = (undefined ********)&uStack_220;
            pbVar78 = pbRam00000001137e9340;
            do {
              fVar87 = fStack_214;
              fVar86 = fStack_218;
              bVar36 = *pbVar78;
              if ((bVar36 & bVar66) != 0) {
                pppppppuStack_390 = (undefined8 *******)0x0;
                pppppppuStack_388 = (undefined8 *******)0x0;
                pppppppuStack_340 = (undefined *******)0x0;
                ppppppppuStack_338 = (undefined ********)0x0;
                lVar62 = *(long *)(param_3 + 0x200);
                fStack_218 = SUB84(ppppppppuVar48,0);
                fVar89 = fStack_218;
                fStack_214 = (float)((ulong)ppppppppuVar48 >> 0x20);
                fVar88 = fStack_214;
                fStack_218 = fVar86;
                fStack_214 = fVar87;
                if (*(long *)(param_3 + 0x208) != lVar62) {
                  uVar56 = 0;
                  lVar70 = 0x1a8;
                  do {
                    lVar53 = lVar62 + lVar70;
                    if ((*(byte *)(lVar53 + -0x1a8) | 4) == 0x16) {
                      ppppppppuStack_190 = ppppppppuVar21;
                      uVar46 = *(ulong *)(lVar53 + -0x178);
                      ppppppppuVar39 = (undefined ********)&uStack_188;
                      uStack_188._0_4_ = fVar89;
                      uStack_188._4_4_ = fVar88;
                      FUN_10a3c8d60(&uStack_188,lVar53 + -0x170);
                      if ((uVar46 & (ulong)ppppppppuVar21) != 0 ||
                          ((ulong)ppppppppuVar39 & 0xffff) != 0) {
                        pcVar76 = (char *)(*(long *)(lVar62 + lVar70) + 0x390);
                        FUN_10a012e0c(pcVar76,bVar36);
                        if (*pcVar76 == '\x01') {
                          pppppppuStack_390 =
                               (undefined8 *******)
                               ((ulong)pppppppuStack_390 | *(ulong *)(lVar53 + -0x178));
                          pppppppuVar68 = &pppppppuStack_388;
                          FUN_10a3c8ddc(pppppppuVar68,lVar53 + -0x170);
                          pppppppuStack_388 = pppppppuVar68;
                        }
                        if (pcVar76[1] == '\x01') {
                          pppppppuStack_340 =
                               (undefined *******)
                               ((ulong)pppppppuStack_340 | *(ulong *)(pcVar76 + 0x38));
                          ppppppppuVar39 = (undefined ********)&ppppppppuStack_338;
                          FUN_10a3c8ddc(ppppppppuVar39,pcVar76 + 0x40);
                          ppppppppuStack_338 = ppppppppuVar39;
                        }
                      }
                    }
                    uVar56 = uVar56 + 1;
                    lVar62 = *(long *)(param_3 + 0x200);
                    uVar46 = (*(long *)(param_3 + 0x208) - lVar62 >> 3) * 0x6fb586fb586fb587;
                    lVar70 = lVar70 + 0x1b8;
                  } while (uVar56 <= uVar46 && uVar46 - uVar56 != 0);
                }
                pppppppuVar47 = pppppppuStack_340;
                pppppppuVar68 = pppppppuStack_390;
                uStack_188._0_4_ = SUB84(ppppppppuStack_338,0);
                uStack_188._4_4_ = (float)((ulong)ppppppppuStack_338 >> 0x20);
                ppppppppuVar39 = (undefined ********)&uStack_188;
                ppppppppuStack_190 = (undefined ********)pppppppuStack_340;
                FUN_10a3c8d60(&uStack_188,&pppppppuStack_388);
                uStack_188._4_4_ = 0.0;
                uStack_188._0_4_ = 0.0;
                uStack_17c = 0.0;
                fStack_180 = 0.0;
                pppppppuVar68 = (undefined8 *******)((ulong)pppppppuVar47 & (ulong)pppppppuVar68);
                pppppppuStack_3d0 = pppppppuVar68;
                ppppppppuStack_3c8 = ppppppppuVar39;
                ppppppppuStack_190 = (undefined ********)&uStack_188;
                if (pppppppuVar68 != (undefined8 *******)0x0) {
                  uVar56 = 0;
                  do {
                    pppppppuVar28 = pppppppuStack_3d0;
                    if (uVar56 == 0x40) {
                      FUN_10a00946c(&UNK_10f633850);
                      goto LAB_10a01e454;
                    }
                    uVar46 = 1L << (uVar56 & 0x3f);
                    uStack_220._0_2_ = (undefined2)uVar46;
                    uStack_220._2_2_ = (undefined2)(uVar46 >> 0x10);
                    uStack_220._4_4_ = (float)(uVar46 >> 0x20);
                    fStack_218 = 0.0;
                    fStack_214 = 0.0;
                    pfVar30 = &fStack_218;
                    FUN_10a3c8d60(pfVar30,&ppppppppuStack_3c8);
                    fVar86 = fStack_180;
                    if (((ulong)pppppppuVar28 & uVar46) != 0 || ((ulong)pfVar30 & 0xffff) != 0) {
                      if (CONCAT44(uStack_17c,fStack_180) < 0x10) {
                        ppppppppuVar39 = (undefined ********)&ppppppppuStack_190;
                        uStack_220._0_2_ = (short)uVar56;
                        FUN_10a0644a0(ppppppppuVar39,uVar56,&uStack_220);
                        *(short *)((long)ppppppppuVar39 + 0x1c) =
                             (short)(1L << ((ulong)(uint)fVar86 & 0x3f));
                      }
                      else {
                        __ZNSt3__19to_stringEm(&ppppppppuStack_300,uVar56);
                        ppppppppuVar39 = (undefined ********)&ppppppppuStack_300;
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                  (ppppppppuVar39,0,&UNK_10f42a41f,6);
                        ppppppppuStack_2a8 = (undefined ********)ppppppppuVar39[1];
                        ppppppppuStack_2b0 = (undefined ********)*ppppppppuVar39;
                        ppppppppuStack_2a0 = (undefined ********)ppppppppuVar39[2];
                        ppppppppuVar39[1] = (undefined *******)0x0;
                        ppppppppuVar39[2] = (undefined *******)0x0;
                        *ppppppppuVar39 = (undefined *******)0x0;
                        ppppppppuVar39 = (undefined ********)&ppppppppuStack_2b0;
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                  (ppppppppuVar39,&UNK_10f631f68,0x68);
                        uStack_210 = (undefined ********)ppppppppuVar39[2];
                        pppppppuVar47 = *ppppppppuVar39;
                        fStack_218 = SUB84(ppppppppuVar39[1],0);
                        fStack_214 = (float)((ulong)ppppppppuVar39[1] >> 0x20);
                        uStack_220._0_2_ = SUB82(pppppppuVar47,0);
                        uStack_220._2_2_ = (undefined2)((ulong)pppppppuVar47 >> 0x10);
                        uStack_220._4_4_ = (float)((ulong)pppppppuVar47 >> 0x20);
                        ppppppppuVar39[1] = (undefined *******)0x0;
                        ppppppppuVar39[2] = (undefined *******)0x0;
                        *ppppppppuVar39 = (undefined *******)0x0;
                        ppppppppuVar51 = uStack_210;
                        ppppppppuVar38 =
                             (undefined ********)
                             CONCAT44(uStack_220._4_4_,
                                      CONCAT22(uStack_220._2_2_,(undefined2)uStack_220));
                        uVar46 = CONCAT44(fStack_214,fStack_218);
                        ppppppppuVar39 = ppppppppuVar38;
                        if (-1 < (long)uStack_210) {
                          uVar46 = (ulong)uStack_210 >> 0x38;
                          ppppppppuVar39 = ppppppppuVar55;
                        }
                        FUN_10a00edf0(&uStack_470,2,ppppppppuVar39,uVar46,aiStack_478);
                        if ((long)ppppppppuVar51 < 0) {
                          __ZdlPv(ppppppppuVar38);
                        }
                        if ((long)ppppppppuStack_2a0 < 0) {
                          __ZdlPv(ppppppppuStack_2b0);
                        }
                        if ((long)ppppppppuStack_2f0 < 0) {
                          __ZdlPv(ppppppppuStack_300);
                        }
                        ppppppppuVar39 = (undefined ********)&ppppppppuStack_190;
                        uStack_220._0_2_ = (short)uVar56;
                        FUN_10a0644a0(ppppppppuVar39,uVar56,&uStack_220);
                        *(undefined2 *)((long)ppppppppuVar39 + 0x1c) = 0x7fff;
                      }
                    }
                    uVar56 = uVar56 + 1;
                    bVar19 = (undefined8 *******)0x1 < pppppppuVar68;
                    pppppppuVar68 = (undefined8 *******)((ulong)pppppppuVar68 >> 1);
                  } while (bVar19);
                }
                ppppppppuStack_2b0 = (undefined ********)&pppppppuStack_3d0;
                ppppppppuStack_2a8 = (undefined ********)&ppppppppuStack_190;
                lVar62 = *(long *)(param_3 + 0x200);
                if (*(long *)(param_3 + 0x208) != lVar62) {
                  uVar56 = 0;
                  lVar70 = 0x1a8;
                  do {
                    lVar53 = lVar62 + lVar70;
                    if ((*(byte *)(lVar53 + -0x1a8) | 4) == 0x16) {
                      uStack_220._0_2_ = SUB82(ppppppppuVar21,0);
                      uStack_220._2_2_ = (undefined2)((ulong)ppppppppuVar21 >> 0x10);
                      uStack_220._4_4_ = (float)((ulong)ppppppppuVar21 >> 0x20);
                      uVar46 = *(ulong *)(lVar53 + -0x178);
                      pfVar30 = &fStack_218;
                      fStack_218 = fVar89;
                      fStack_214 = fVar88;
                      FUN_10a3c8d60(pfVar30,lVar53 + -0x170);
                      if ((uVar46 & (ulong)ppppppppuVar21) != 0 || ((ulong)pfVar30 & 0xffff) != 0) {
                        puVar33 = (undefined1 *)(*(long *)(lVar62 + lVar70) + 0x390);
                        FUN_10a012e0c(puVar33,bVar36);
                        ppppppppuVar39 = (undefined ********)&ppppppppuStack_2b0;
                        FUN_10a01e840(ppppppppuVar39,*puVar33,(ulong *)(lVar53 + -0x178));
                        *(short *)(puVar33 + 0x48) = (short)ppppppppuVar39;
                        ppppppppuVar39 = (undefined ********)&ppppppppuStack_2b0;
                        FUN_10a01e840(ppppppppuVar39,puVar33[1],puVar33 + 0x38);
                        *(short *)(puVar33 + 0x4a) = (short)ppppppppuVar39;
                      }
                    }
                    uVar56 = uVar56 + 1;
                    lVar62 = *(long *)(param_3 + 0x200);
                    uVar46 = (*(long *)(param_3 + 0x208) - lVar62 >> 3) * 0x6fb586fb586fb587;
                    lVar70 = lVar70 + 0x1b8;
                  } while (uVar56 <= uVar46 && uVar46 - uVar56 != 0);
                }
                FUN_10a064468(CONCAT44(uStack_188._4_4_,(float)uStack_188));
              }
              pbVar78 = pbVar78 + 1;
            } while (pbVar78 != pbVar75);
          }
        }
        if ((bVar66 & 1) != 0) {
          FUN_10a013198(*param_1,&ppppppppuStack_480,param_3,lStack_4d0,uStack_4e8,1);
        }
        if ((bVar12) && (param_1[1] == (undefined *******)0x0)) {
          plVar35 = (long *)0x120;
          __Znwm();
          plVar80 = plVar35 + 2;
          plVar35[3] = 0;
          *plVar80 = 0;
          plVar45 = plVar35 + 4;
          plVar35[5] = 0;
          *plVar45 = 0;
          plVar31 = plVar35 + 6;
          plVar35[7] = 0;
          *plVar31 = 0;
          plVar26 = plVar35 + 8;
          plVar35[9] = 0;
          *plVar26 = 0;
          plVar40 = plVar35 + 10;
          plVar35[0xb] = 0;
          *plVar40 = 0;
          plVar41 = plVar35 + 0xc;
          plVar35[0xd] = 0;
          *plVar41 = 0;
          plVar42 = plVar35 + 0xe;
          plVar35[0xf] = 0;
          *plVar42 = 0;
          plVar43 = plVar35 + 0x10;
          plVar35[0x11] = 0;
          *plVar43 = 0;
          plVar59 = plVar35 + 0x12;
          plVar35[0x13] = 0;
          *plVar59 = 0;
          plVar64 = plVar35 + 0x14;
          plVar35[0x15] = 0;
          *plVar64 = 0;
          plVar65 = plVar35 + 0x16;
          plVar35[0x17] = 0;
          *plVar65 = 0;
          plVar69 = plVar35 + 0x18;
          plVar35[0x19] = 0;
          *plVar69 = 0;
          plVar71 = plVar35 + 0x1a;
          plVar35[0x1b] = 0;
          *plVar71 = 0;
          plVar74 = plVar35 + 0x1c;
          plVar35[0x1d] = 0;
          *plVar74 = 0;
          plVar77 = plVar35 + 0x1e;
          plVar35[0x1f] = 0;
          *plVar77 = 0;
          plVar35[0x21] = 0;
          plVar35[0x20] = 0;
          plVar35[1] = 0;
          *plVar35 = 0;
          ppppppppuStack_190 = (undefined ********)0x0;
          FUN_10a063b58(plVar35 + 0x22,&uStack_220,&ppppppppuStack_190);
          uStack_220._0_2_ = 0;
          uStack_220._2_2_ = 0;
          uStack_220._4_4_ = 0.0;
          FUN_10a015a04(&ppppppppuStack_190,&uStack_220,plVar35 + 0x22);
          FUN_10a015bec(plVar35 + 0x20,&ppppppppuStack_190);
          FUN_10ab451f4(&uStack_220,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631b05,0x18,1);
          func_0x00010a015c50(plVar80,&uStack_220);
          plVar44 = *(long **)(*plVar80 + 0x228);
          if (plVar44 == *(long **)(*plVar80 + 0x230)) {
            lVar62 = 0;
          }
          else {
            lVar62 = *plVar44;
          }
          func_0x000107c2b074(&ppppppppuStack_2b0,&PTR_DAT_110b9d1e0);
          FUN_10a047898(lVar62 + 0x200,&ppppppppuStack_2b0,&ppppppppuStack_2b0);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          lVar70 = *(long *)(lVar62 + 600);
          *(undefined8 *)(lVar70 + 0x30) = 0;
          *(undefined8 *)(lVar70 + 0x28) = 6;
          *(undefined8 *)(lVar70 + 0x40) = 0;
          *(undefined8 *)(lVar70 + 0x38) = 0;
          *(undefined8 *)(lVar70 + 0x50) = 0;
          *(undefined8 *)(lVar70 + 0x48) = 0;
          func_0x00010a332748(lVar62 + 0x219,0);
          func_0x00010a332700(lVar62 + 0x21a,0);
          lVar62 = *(long *)(lVar62 + 0x268);
          *(undefined1 *)(lVar62 + 0x28) = 1;
          *(undefined4 *)(lVar62 + 0x29) = 0;
          *(undefined1 *)(lVar62 + 0x2d) = 7;
          *(undefined8 *)(lVar62 + 0x30) = 0xff00000000;
          *(undefined4 *)(lVar62 + 0x38) = 0xff;
          FUN_10a044790(&uStack_210);
          (*(code *)*ppppppuStack_208)(&ppppppuStack_208);
          plVar44 = (long *)CONCAT44(fStack_214,fStack_218);
          if (plVar44 != (long *)0x0) {
            plVar80 = plVar44 + 1;
            do {
              lVar62 = *plVar80;
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar80,0x10);
              if (bVar19) {
                *plVar80 = lVar62 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar62 == 0) {
              (**(code **)(*plVar44 + 0x10))(plVar44);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar44);
            }
          }
          FUN_10ab451f4(&uStack_220,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631b05,0x18,1);
          func_0x00010a015c50(plVar45,&uStack_220);
          plVar44 = *(long **)(*plVar45 + 0x228);
          if (plVar44 == *(long **)(*plVar45 + 0x230)) {
            lVar62 = 0;
          }
          else {
            lVar62 = *plVar44;
          }
          func_0x000107c2b074(&ppppppppuStack_2b0,&PTR_DAT_110b9d1f8);
          FUN_10a047898(lVar62 + 0x200,&ppppppppuStack_2b0,&ppppppppuStack_2b0);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          lVar70 = *(long *)(lVar62 + 600);
          *(undefined8 *)(lVar70 + 0x30) = 0;
          *(undefined8 *)(lVar70 + 0x28) = 6;
          *(undefined8 *)(lVar70 + 0x40) = 0;
          *(undefined8 *)(lVar70 + 0x38) = 0;
          *(undefined8 *)(lVar70 + 0x50) = 0;
          *(undefined8 *)(lVar70 + 0x48) = 0;
          func_0x00010a332748(lVar62 + 0x219,0);
          func_0x00010a332700(lVar62 + 0x21a,0);
          lVar70 = *(long *)(lVar62 + 0x268);
          *(undefined1 *)(lVar70 + 0x28) = 1;
          *(undefined4 *)(lVar70 + 0x29) = 0;
          *(undefined1 *)(lVar70 + 0x2d) = 7;
          *(undefined8 *)(lVar70 + 0x30) = 0xff00000000;
          *(undefined4 *)(lVar70 + 0x38) = 0xff;
          func_0x000107c2b07c(&ppppppppuStack_2b0,&UNK_10f631b1e);
          FUN_10a3368d0(lVar62,&ppppppppuStack_2b0,plVar35 + 0x20,&UNK_10e4ac8d0,0xd);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          FUN_10a044790(&uStack_210);
          (*(code *)*ppppppuStack_208)(&ppppppuStack_208);
          plVar45 = (long *)CONCAT44(fStack_214,fStack_218);
          if (plVar45 != (long *)0x0) {
            plVar44 = plVar45 + 1;
            do {
              lVar62 = *plVar44;
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar44,0x10);
              if (bVar19) {
                *plVar44 = lVar62 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar62 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
            }
          }
          FUN_10ab451f4(&uStack_220,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631b05,0x18,1);
          func_0x00010a015c50(plVar31,&uStack_220);
          plVar45 = *(long **)(*plVar31 + 0x228);
          if (plVar45 == *(long **)(*plVar31 + 0x230)) {
            lVar62 = 0;
          }
          else {
            lVar62 = *plVar45;
          }
          func_0x000107c2b074(&ppppppppuStack_2b0,&PTR_DAT_110b9d210);
          FUN_10a047898(lVar62 + 0x200,&ppppppppuStack_2b0,&ppppppppuStack_2b0);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          lVar70 = *(long *)(lVar62 + 600);
          *(undefined8 *)(lVar70 + 0x30) = 0;
          *(undefined8 *)(lVar70 + 0x28) = 6;
          *(undefined8 *)(lVar70 + 0x40) = 0;
          *(undefined8 *)(lVar70 + 0x38) = 0;
          *(undefined8 *)(lVar70 + 0x50) = 0;
          *(undefined8 *)(lVar70 + 0x48) = 0;
          func_0x00010a332748(lVar62 + 0x219,0);
          func_0x00010a332700(lVar62 + 0x21a,0);
          func_0x000107c2b07c(&ppppppppuStack_2b0,&UNK_10f631b1e);
          FUN_10a3368d0(lVar62,&ppppppppuStack_2b0,plVar35 + 0x20,&UNK_10e4ac8d0,0xd);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          FUN_10a044790(&uStack_210);
          (*(code *)*ppppppuStack_208)(&ppppppuStack_208);
          plVar45 = (long *)CONCAT44(fStack_214,fStack_218);
          if (plVar45 != (long *)0x0) {
            plVar31 = plVar45 + 1;
            do {
              lVar62 = *plVar31;
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar19) {
                *plVar31 = lVar62 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar62 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
            }
          }
          FUN_10ab451f4(&uStack_220,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631b05,0x18,1);
          func_0x00010a015c50(plVar35,&uStack_220);
          plVar45 = *(long **)(*plVar35 + 0x228);
          if (plVar45 == *(long **)(*plVar35 + 0x230)) {
            lVar62 = 0;
          }
          else {
            lVar62 = *plVar45;
          }
          func_0x000107c2b074(&ppppppppuStack_2b0,&PTR_DAT_110b9d228);
          FUN_10a047898(lVar62 + 0x200,&ppppppppuStack_2b0,&ppppppppuStack_2b0);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          lVar70 = *(long *)(lVar62 + 600);
          *(undefined8 *)(lVar70 + 0x30) = 0;
          *(undefined8 *)(lVar70 + 0x28) = 6;
          *(undefined8 *)(lVar70 + 0x40) = 0;
          *(undefined8 *)(lVar70 + 0x38) = 0;
          *(undefined8 *)(lVar70 + 0x50) = 0;
          *(undefined8 *)(lVar70 + 0x48) = 0;
          func_0x00010a332748(lVar62 + 0x219,0);
          func_0x00010a332700(lVar62 + 0x21a,0);
          func_0x000107c2b07c(&ppppppppuStack_2b0,&DAT_10f6397cc);
          FUN_10a3368d0(lVar62,&ppppppppuStack_2b0,plVar35 + 0x20,&UNK_10e4ac8d0,0xd);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          FUN_10a044790(&uStack_210);
          (*(code *)*ppppppuStack_208)(&ppppppuStack_208);
          plVar45 = (long *)CONCAT44(fStack_214,fStack_218);
          if (plVar45 != (long *)0x0) {
            plVar31 = plVar45 + 1;
            do {
              lVar62 = *plVar31;
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar19) {
                *plVar31 = lVar62 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar62 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
            }
          }
          FUN_10ab451f4(&uStack_220,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631b05,0x18,1);
          func_0x00010a015c50(plVar26,&uStack_220);
          plVar45 = *(long **)(*plVar26 + 0x228);
          if (plVar45 == *(long **)(*plVar26 + 0x230)) {
            lVar62 = 0;
          }
          else {
            lVar62 = *plVar45;
          }
          func_0x000107c2b074(&ppppppppuStack_2b0,&PTR_DAT_110b9d240);
          FUN_10a047898(lVar62 + 0x200,&ppppppppuStack_2b0,&ppppppppuStack_2b0);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          lVar70 = *(long *)(lVar62 + 600);
          *(undefined8 *)(lVar70 + 0x30) = 0;
          *(undefined8 *)(lVar70 + 0x28) = 6;
          *(undefined8 *)(lVar70 + 0x40) = 0;
          *(undefined8 *)(lVar70 + 0x38) = 0;
          *(undefined8 *)(lVar70 + 0x50) = 0;
          *(undefined8 *)(lVar70 + 0x48) = 0;
          func_0x00010a332748(lVar62 + 0x219,0);
          func_0x00010a332700(lVar62 + 0x21a,0);
          lVar70 = *(long *)(lVar62 + 0x268);
          *(undefined1 *)(lVar70 + 0x28) = 1;
          *(undefined4 *)(lVar70 + 0x29) = 0;
          *(undefined1 *)(lVar70 + 0x2d) = 7;
          *(undefined8 *)(lVar70 + 0x30) = 0xff00000000;
          *(undefined4 *)(lVar70 + 0x38) = 0xff;
          func_0x000107c2b07c(&ppppppppuStack_2b0,&UNK_10f631b1e);
          FUN_10a3368d0(lVar62,&ppppppppuStack_2b0,plVar35 + 0x20,&UNK_10e4ac8d0,0xd);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          FUN_10a044790(&uStack_210);
          (*(code *)*ppppppuStack_208)(&ppppppuStack_208);
          plVar45 = (long *)CONCAT44(fStack_214,fStack_218);
          if (plVar45 != (long *)0x0) {
            plVar31 = plVar45 + 1;
            do {
              lVar62 = *plVar31;
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar19) {
                *plVar31 = lVar62 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar62 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
            }
          }
          FUN_10ab451f4(&uStack_220,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631b05,0x18,1);
          func_0x00010a015c50(plVar40,&uStack_220);
          plVar45 = *(long **)(*plVar40 + 0x228);
          if (plVar45 == *(long **)(*plVar40 + 0x230)) {
            lVar62 = 0;
          }
          else {
            lVar62 = *plVar45;
          }
          func_0x000107c2b074(&ppppppppuStack_2b0,&PTR_DAT_110b9d258);
          FUN_10a047898(lVar62 + 0x200,&ppppppppuStack_2b0,&ppppppppuStack_2b0);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          lVar70 = *(long *)(lVar62 + 600);
          *(undefined8 *)(lVar70 + 0x30) = 0;
          *(undefined8 *)(lVar70 + 0x28) = 6;
          *(undefined8 *)(lVar70 + 0x40) = 0;
          *(undefined8 *)(lVar70 + 0x38) = 0;
          *(undefined8 *)(lVar70 + 0x50) = 0;
          *(undefined8 *)(lVar70 + 0x48) = 0;
          func_0x00010a332748(lVar62 + 0x219,0);
          func_0x00010a332700(lVar62 + 0x21a,0);
          lVar70 = *(long *)(lVar62 + 0x268);
          *(undefined1 *)(lVar70 + 0x28) = 1;
          *(undefined4 *)(lVar70 + 0x29) = 0;
          *(undefined1 *)(lVar70 + 0x2d) = 7;
          *(undefined8 *)(lVar70 + 0x30) = 0xff00000000;
          *(undefined4 *)(lVar70 + 0x38) = 0xff;
          func_0x000107c2b07c(&ppppppppuStack_2b0,&DAT_10f6397cc);
          FUN_10a3368d0(lVar62,&ppppppppuStack_2b0,plVar35 + 0x20,&UNK_10e4ac8d0,0xd);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          FUN_10a044790(&uStack_210);
          (*(code *)*ppppppuStack_208)(&ppppppuStack_208);
          plVar45 = (long *)CONCAT44(fStack_214,fStack_218);
          if (plVar45 != (long *)0x0) {
            plVar31 = plVar45 + 1;
            do {
              lVar62 = *plVar31;
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar19) {
                *plVar31 = lVar62 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar62 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
            }
          }
          FUN_10ab451f4(&uStack_220,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631b05,0x18,1);
          func_0x00010a015c50(plVar41,&uStack_220);
          plVar45 = *(long **)(*plVar41 + 0x228);
          if (plVar45 == *(long **)(*plVar41 + 0x230)) {
            lVar62 = 0;
          }
          else {
            lVar62 = *plVar45;
          }
          func_0x000107c2b074(&ppppppppuStack_2b0,&PTR_DAT_110b9d270);
          FUN_10a047898(lVar62 + 0x200,&ppppppppuStack_2b0,&ppppppppuStack_2b0);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          lVar70 = *(long *)(lVar62 + 600);
          *(undefined8 *)(lVar70 + 0x30) = 0;
          *(undefined8 *)(lVar70 + 0x28) = 6;
          *(undefined8 *)(lVar70 + 0x40) = 0;
          *(undefined8 *)(lVar70 + 0x38) = 0;
          *(undefined8 *)(lVar70 + 0x50) = 0;
          *(undefined8 *)(lVar70 + 0x48) = 0;
          func_0x00010a332748(lVar62 + 0x219,0);
          func_0x00010a332700(lVar62 + 0x21a,0);
          lVar70 = *(long *)(lVar62 + 0x268);
          *(undefined1 *)(lVar70 + 0x28) = 1;
          *(undefined4 *)(lVar70 + 0x29) = 0;
          *(undefined1 *)(lVar70 + 0x2d) = 7;
          *(undefined8 *)(lVar70 + 0x30) = 0xff00000000;
          *(undefined4 *)(lVar70 + 0x38) = 0xff;
          func_0x000107c2b07c(&ppppppppuStack_2b0,&UNK_10f631b1e);
          FUN_10a3368d0(lVar62,&ppppppppuStack_2b0,plVar35 + 0x20,&UNK_10e4ac8d0,0xd);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          FUN_10a044790(&uStack_210);
          (*(code *)*ppppppuStack_208)(&ppppppuStack_208);
          plVar45 = (long *)CONCAT44(fStack_214,fStack_218);
          if (plVar45 != (long *)0x0) {
            plVar31 = plVar45 + 1;
            do {
              lVar62 = *plVar31;
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar19) {
                *plVar31 = lVar62 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar62 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
            }
          }
          FUN_10ab451f4(&uStack_220,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631b05,0x18,1);
          func_0x00010a015c50(plVar42,&uStack_220);
          plVar45 = *(long **)(*plVar42 + 0x228);
          if (plVar45 == *(long **)(*plVar42 + 0x230)) {
            lVar62 = 0;
          }
          else {
            lVar62 = *plVar45;
          }
          func_0x000107c2b074(&ppppppppuStack_2b0,&PTR_DAT_110b9d288);
          FUN_10a047898(lVar62 + 0x200,&ppppppppuStack_2b0,&ppppppppuStack_2b0);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          lVar70 = *(long *)(lVar62 + 600);
          *(undefined8 *)(lVar70 + 0x30) = 0;
          *(undefined8 *)(lVar70 + 0x28) = 6;
          *(undefined8 *)(lVar70 + 0x40) = 0;
          *(undefined8 *)(lVar70 + 0x38) = 0;
          *(undefined8 *)(lVar70 + 0x50) = 0;
          *(undefined8 *)(lVar70 + 0x48) = 0;
          func_0x00010a332748(lVar62 + 0x219,0);
          func_0x00010a332700(lVar62 + 0x21a,0);
          lVar70 = *(long *)(lVar62 + 0x268);
          *(undefined1 *)(lVar70 + 0x28) = 1;
          *(undefined4 *)(lVar70 + 0x29) = 0;
          *(undefined1 *)(lVar70 + 0x2d) = 7;
          *(undefined8 *)(lVar70 + 0x30) = 0xff00000000;
          *(undefined4 *)(lVar70 + 0x38) = 0xff;
          func_0x000107c2b07c(&ppppppppuStack_2b0,&UNK_10f631b1e);
          FUN_10a3368d0(lVar62,&ppppppppuStack_2b0,plVar35 + 0x20,&UNK_10e4ac8d0,0xd);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          FUN_10a044790(&uStack_210);
          (*(code *)*ppppppuStack_208)(&ppppppuStack_208);
          plVar45 = (long *)CONCAT44(fStack_214,fStack_218);
          if (plVar45 != (long *)0x0) {
            plVar31 = plVar45 + 1;
            do {
              lVar62 = *plVar31;
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar19) {
                *plVar31 = lVar62 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar62 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
            }
          }
          FUN_10ab451f4(&uStack_220,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631b05,0x18,1);
          func_0x00010a015c50(plVar43,&uStack_220);
          plVar45 = *(long **)(*plVar43 + 0x228);
          if (plVar45 == *(long **)(*plVar43 + 0x230)) {
            lVar62 = 0;
          }
          else {
            lVar62 = *plVar45;
          }
          func_0x000107c2b074(&ppppppppuStack_2b0,&PTR_DAT_110b9d2a0);
          FUN_10a047898(lVar62 + 0x200,&ppppppppuStack_2b0,&ppppppppuStack_2b0);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          lVar70 = *(long *)(lVar62 + 600);
          *(undefined8 *)(lVar70 + 0x30) = 0;
          *(undefined8 *)(lVar70 + 0x28) = 6;
          *(undefined8 *)(lVar70 + 0x40) = 0;
          *(undefined8 *)(lVar70 + 0x38) = 0;
          *(undefined8 *)(lVar70 + 0x50) = 0;
          *(undefined8 *)(lVar70 + 0x48) = 0;
          func_0x00010a332748(lVar62 + 0x219,0);
          func_0x00010a332700(lVar62 + 0x21a,0);
          lVar70 = *(long *)(lVar62 + 0x268);
          *(undefined1 *)(lVar70 + 0x28) = 1;
          *(undefined4 *)(lVar70 + 0x29) = 0;
          *(undefined1 *)(lVar70 + 0x2d) = 7;
          *(undefined8 *)(lVar70 + 0x30) = 0xff00000000;
          *(undefined4 *)(lVar70 + 0x38) = 0xff;
          func_0x000107c2b07c(&ppppppppuStack_2b0,&UNK_10f631b1e);
          FUN_10a3368d0(lVar62,&ppppppppuStack_2b0,plVar35 + 0x20,&UNK_10e4ac8d0,0xd);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          FUN_10a044790(&uStack_210);
          (*(code *)*ppppppuStack_208)(&ppppppuStack_208);
          plVar45 = (long *)CONCAT44(fStack_214,fStack_218);
          if (plVar45 != (long *)0x0) {
            plVar31 = plVar45 + 1;
            do {
              lVar62 = *plVar31;
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar19) {
                *plVar31 = lVar62 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar62 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
            }
          }
          FUN_10ab451f4(&uStack_220,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631b05,0x18,1);
          func_0x00010a015c50(plVar59,&uStack_220);
          plVar45 = *(long **)(*plVar59 + 0x228);
          if (plVar45 == *(long **)(*plVar59 + 0x230)) {
            lVar62 = 0;
          }
          else {
            lVar62 = *plVar45;
          }
          func_0x000107c2b074(&ppppppppuStack_2b0,&PTR_DAT_110b9d2b8);
          FUN_10a047898(lVar62 + 0x200,&ppppppppuStack_2b0,&ppppppppuStack_2b0);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          lVar70 = *(long *)(lVar62 + 600);
          *(undefined8 *)(lVar70 + 0x30) = 0;
          *(undefined8 *)(lVar70 + 0x28) = 6;
          *(undefined8 *)(lVar70 + 0x40) = 0;
          *(undefined8 *)(lVar70 + 0x38) = 0;
          *(undefined8 *)(lVar70 + 0x50) = 0;
          *(undefined8 *)(lVar70 + 0x48) = 0;
          func_0x00010a332748(lVar62 + 0x219,1);
          func_0x00010a332790(lVar62,5);
          func_0x00010a332700(lVar62 + 0x21a,0);
          func_0x000107c2b07c(&ppppppppuStack_2b0,&UNK_10f631b1e);
          FUN_10a3368d0(lVar62,&ppppppppuStack_2b0,plVar35 + 0x20,&UNK_10e4ac8d0,0xd);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          FUN_10a044790(&uStack_210);
          (*(code *)*ppppppuStack_208)(&ppppppuStack_208);
          plVar45 = (long *)CONCAT44(fStack_214,fStack_218);
          if (plVar45 != (long *)0x0) {
            plVar31 = plVar45 + 1;
            do {
              lVar62 = *plVar31;
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar19) {
                *plVar31 = lVar62 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar62 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
            }
          }
          FUN_10ab451f4(&uStack_220,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631b05,0x18,1);
          func_0x00010a015c50(plVar64,&uStack_220);
          plVar45 = *(long **)(*plVar64 + 0x228);
          if (plVar45 == *(long **)(*plVar64 + 0x230)) {
            lVar62 = 0;
          }
          else {
            lVar62 = *plVar45;
          }
          func_0x000107c2b074(&ppppppppuStack_2b0,&PTR_DAT_110b9d2d0);
          FUN_10a047898(lVar62 + 0x200,&ppppppppuStack_2b0,&ppppppppuStack_2b0);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          lVar70 = *(long *)(lVar62 + 600);
          *(undefined8 *)(lVar70 + 0x30) = 0;
          *(undefined8 *)(lVar70 + 0x28) = 6;
          *(undefined8 *)(lVar70 + 0x40) = 0;
          *(undefined8 *)(lVar70 + 0x38) = 0;
          *(undefined8 *)(lVar70 + 0x50) = 0;
          *(undefined8 *)(lVar70 + 0x48) = 0;
          func_0x00010a332748(lVar62 + 0x219,0);
          func_0x000107c2b07c(&ppppppppuStack_2b0,&DAT_10f6397cc);
          FUN_10a3368d0(lVar62,&ppppppppuStack_2b0,plVar35 + 0x20,&UNK_10e4ac8d0,0xd);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          FUN_10a044790(&uStack_210);
          (*(code *)*ppppppuStack_208)(&ppppppuStack_208);
          plVar45 = (long *)CONCAT44(fStack_214,fStack_218);
          if (plVar45 != (long *)0x0) {
            plVar31 = plVar45 + 1;
            do {
              lVar62 = *plVar31;
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar19) {
                *plVar31 = lVar62 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar62 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
            }
          }
          FUN_10ab451f4(&uStack_220,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631b05,0x18,1);
          func_0x00010a015c50(plVar71,&uStack_220);
          plVar45 = *(long **)(*plVar71 + 0x228);
          if (plVar45 == *(long **)(*plVar71 + 0x230)) {
            lVar62 = 0;
          }
          else {
            lVar62 = *plVar45;
          }
          func_0x000107c2b074(&ppppppppuStack_2b0,&PTR_DAT_110b9d2e8);
          FUN_10a047898(lVar62 + 0x200,&ppppppppuStack_2b0,&ppppppppuStack_2b0);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          lVar70 = *(long *)(lVar62 + 600);
          *(undefined8 *)(lVar70 + 0x30) = 0;
          *(undefined8 *)(lVar70 + 0x28) = 6;
          *(undefined8 *)(lVar70 + 0x40) = 0;
          *(undefined8 *)(lVar70 + 0x38) = 0;
          *(undefined8 *)(lVar70 + 0x50) = 0;
          *(undefined8 *)(lVar70 + 0x48) = 0;
          func_0x00010a332748(lVar62 + 0x219,1);
          func_0x00010a332790(lVar62,5);
          func_0x00010a332700(lVar62 + 0x21a,0);
          func_0x000107c2b07c(&ppppppppuStack_2b0,&DAT_10f6397cc);
          FUN_10a3368d0(lVar62,&ppppppppuStack_2b0,plVar35 + 0x20,&UNK_10e4ac8d0,0xd);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          FUN_10a044790(&uStack_210);
          (*(code *)*ppppppuStack_208)(&ppppppuStack_208);
          plVar45 = (long *)CONCAT44(fStack_214,fStack_218);
          if (plVar45 != (long *)0x0) {
            plVar31 = plVar45 + 1;
            do {
              lVar62 = *plVar31;
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar19) {
                *plVar31 = lVar62 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar62 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
            }
          }
          FUN_10ab451f4(&uStack_220,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631b05,0x18,1);
          func_0x00010a015c50(plVar65,&uStack_220);
          plVar45 = *(long **)(*plVar65 + 0x228);
          if (plVar45 == *(long **)(*plVar65 + 0x230)) {
            lVar62 = 0;
          }
          else {
            lVar62 = *plVar45;
          }
          func_0x000107c2b074(&ppppppppuStack_2b0,&PTR_DAT_110b9d300);
          FUN_10a047898(lVar62 + 0x200,&ppppppppuStack_2b0,&ppppppppuStack_2b0);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          lVar70 = *(long *)(lVar62 + 600);
          *(undefined8 *)(lVar70 + 0x30) = 0;
          *(undefined8 *)(lVar70 + 0x28) = 6;
          *(undefined8 *)(lVar70 + 0x40) = 0;
          *(undefined8 *)(lVar70 + 0x38) = 0;
          *(undefined8 *)(lVar70 + 0x50) = 0;
          *(undefined8 *)(lVar70 + 0x48) = 0;
          func_0x00010a332748(lVar62 + 0x219,1);
          func_0x00010a332790(lVar62,5);
          func_0x00010a332700(lVar62 + 0x21a,0);
          func_0x000107c2b07c(&ppppppppuStack_2b0,&DAT_10f6397cc);
          FUN_10a3368d0(lVar62,&ppppppppuStack_2b0,plVar35 + 0x20,&UNK_10e4ac8d0,0xd);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          FUN_10a044790(&uStack_210);
          (*(code *)*ppppppuStack_208)(&ppppppuStack_208);
          plVar45 = (long *)CONCAT44(fStack_214,fStack_218);
          if (plVar45 != (long *)0x0) {
            plVar31 = plVar45 + 1;
            do {
              lVar62 = *plVar31;
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar19) {
                *plVar31 = lVar62 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar62 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
            }
          }
          FUN_10ab451f4(&uStack_220,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631b05,0x18,1);
          func_0x00010a015c50(plVar69,&uStack_220);
          plVar45 = *(long **)(*plVar69 + 0x228);
          if (plVar45 == *(long **)(*plVar69 + 0x230)) {
            lVar62 = 0;
          }
          else {
            lVar62 = *plVar45;
          }
          func_0x000107c2b074(&ppppppppuStack_2b0,&PTR_DAT_110b9d318);
          FUN_10a047898(lVar62 + 0x200,&ppppppppuStack_2b0,&ppppppppuStack_2b0);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          lVar70 = *(long *)(lVar62 + 600);
          *(undefined8 *)(lVar70 + 0x30) = 0;
          *(undefined8 *)(lVar70 + 0x28) = 6;
          *(undefined8 *)(lVar70 + 0x40) = 0;
          *(undefined8 *)(lVar70 + 0x38) = 0;
          *(undefined8 *)(lVar70 + 0x50) = 0;
          *(undefined8 *)(lVar70 + 0x48) = 0;
          func_0x00010a332748(lVar62 + 0x219,1);
          func_0x00010a332790(lVar62,5);
          func_0x00010a332700(lVar62 + 0x21a,0);
          func_0x000107c2b07c(&ppppppppuStack_2b0,&DAT_10f6397cc);
          FUN_10a3368d0(lVar62,&ppppppppuStack_2b0,plVar35 + 0x20,&UNK_10e4ac8d0,0xd);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          FUN_10a044790(&uStack_210);
          (*(code *)*ppppppuStack_208)(&ppppppuStack_208);
          plVar45 = (long *)CONCAT44(fStack_214,fStack_218);
          if (plVar45 != (long *)0x0) {
            plVar31 = plVar45 + 1;
            do {
              lVar62 = *plVar31;
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar19) {
                *plVar31 = lVar62 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar62 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
            }
          }
          FUN_10ab451f4(&uStack_220,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631b05,0x18,1);
          func_0x00010a015c50(plVar74,&uStack_220);
          plVar45 = *(long **)(*plVar74 + 0x228);
          if (plVar45 == *(long **)(*plVar74 + 0x230)) {
            lVar62 = 0;
          }
          else {
            lVar62 = *plVar45;
          }
          func_0x000107c2b074(&ppppppppuStack_2b0,&PTR_DAT_110b9d330);
          FUN_10a047898(lVar62 + 0x200,&ppppppppuStack_2b0,&ppppppppuStack_2b0);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          lVar70 = *(long *)(lVar62 + 600);
          *(undefined8 *)(lVar70 + 0x30) = 0;
          *(undefined8 *)(lVar70 + 0x28) = 6;
          *(undefined8 *)(lVar70 + 0x40) = 0;
          *(undefined8 *)(lVar70 + 0x38) = 0;
          *(undefined8 *)(lVar70 + 0x50) = 0;
          *(undefined8 *)(lVar70 + 0x48) = 0;
          func_0x00010a332748(lVar62 + 0x219,0);
          func_0x00010a332700(lVar62 + 0x21a,0);
          lVar70 = *(long *)(lVar62 + 0x268);
          *(undefined1 *)(lVar70 + 0x28) = 1;
          *(undefined4 *)(lVar70 + 0x29) = 0;
          *(undefined1 *)(lVar70 + 0x2d) = 7;
          *(undefined8 *)(lVar70 + 0x30) = 0xff00000000;
          *(undefined4 *)(lVar70 + 0x38) = 0xff;
          func_0x000107c2b07c(&ppppppppuStack_2b0,&DAT_10f6397cc);
          FUN_10a3368d0(lVar62,&ppppppppuStack_2b0,plVar35 + 0x20,&UNK_10e4ac8d0,0xd);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          FUN_10a044790(&uStack_210);
          (*(code *)*ppppppuStack_208)(&ppppppuStack_208);
          plVar45 = (long *)CONCAT44(fStack_214,fStack_218);
          if (plVar45 != (long *)0x0) {
            plVar31 = plVar45 + 1;
            do {
              lVar62 = *plVar31;
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar19) {
                *plVar31 = lVar62 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar62 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
            }
          }
          FUN_10ab451f4(&uStack_220,0,&UNK_10f630f1d,0,&UNK_10f630f1d,0,&UNK_10f631b05,0x18,1);
          func_0x00010a015c50(plVar77,&uStack_220);
          plVar45 = *(long **)(*plVar77 + 0x228);
          if (plVar45 == *(long **)(*plVar77 + 0x230)) {
            lVar62 = 0;
          }
          else {
            lVar62 = *plVar45;
          }
          func_0x000107c2b074(&ppppppppuStack_2b0,&PTR_DAT_110b9d348);
          FUN_10a047898(lVar62 + 0x200,&ppppppppuStack_2b0,&ppppppppuStack_2b0);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          lVar70 = *(long *)(lVar62 + 600);
          *(undefined8 *)(lVar70 + 0x30) = 0;
          *(undefined8 *)(lVar70 + 0x28) = 6;
          *(undefined8 *)(lVar70 + 0x40) = 0;
          *(undefined8 *)(lVar70 + 0x38) = 0;
          *(undefined8 *)(lVar70 + 0x50) = 0;
          *(undefined8 *)(lVar70 + 0x48) = 0;
          func_0x00010a332748(lVar62 + 0x219,0);
          func_0x00010a332700(lVar62 + 0x21a,0);
          lVar70 = *(long *)(lVar62 + 0x268);
          *(undefined1 *)(lVar70 + 0x28) = 1;
          *(undefined4 *)(lVar70 + 0x29) = 0;
          *(undefined1 *)(lVar70 + 0x2d) = 7;
          *(undefined8 *)(lVar70 + 0x30) = 0xff00000000;
          *(undefined4 *)(lVar70 + 0x38) = 0xff;
          func_0x000107c2b07c(&ppppppppuStack_2b0,&DAT_10f6397cc);
          FUN_10a3368d0(lVar62,&ppppppppuStack_2b0,plVar35 + 0x20,&UNK_10e4ac8d0,0xd);
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv(ppppppppuStack_2b0);
          }
          FUN_10a044790(&uStack_210);
          (*(code *)*ppppppuStack_208)(&ppppppuStack_208);
          plVar45 = (long *)CONCAT44(fStack_214,fStack_218);
          if (plVar45 != (long *)0x0) {
            plVar31 = plVar45 + 1;
            do {
              lVar62 = *plVar31;
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar19) {
                *plVar31 = lVar62 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar62 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
            }
          }
          ppppppppuVar55 = (undefined ********)&ppppppppuStack_190;
          FUN_10a044790(&fStack_180);
          (*(code *)*ppppppuStack_178)(&ppppppuStack_178);
          ppppppppuVar21 = uStack_188;
          if (uStack_188 != (undefined ********)0x0) {
            ppppppppuVar48 = uStack_188 + 1;
            do {
              pppppppuVar47 = *ppppppppuVar48;
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(ppppppppuVar48,0x10);
              if (bVar19) {
                *ppppppppuVar48 = (undefined *******)((long)pppppppuVar47 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (pppppppuVar47 == (undefined *******)0x0) {
              (*(code *)(*uStack_188)[2])(uStack_188);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar21);
            }
          }
          FUN_10a0196b0(param_1 + 1,plVar35);
        }
      }
      goto LAB_10a01dd64;
    }
    puVar24 = (undefined2 *)0x108;
    __Znwm();
    *puVar24 = 0;
    *(undefined8 *)(puVar24 + 8) = 0;
    *(undefined8 *)(puVar24 + 4) = 0;
    *(undefined8 *)(puVar24 + 0x10) = 0;
    *(undefined8 *)(puVar24 + 0xc) = 0;
    *(undefined8 *)(puVar24 + 0x18) = 0;
    *(undefined8 *)(puVar24 + 0x14) = 0;
    *(undefined8 *)(puVar24 + 0x20) = 0;
    *(undefined8 *)(puVar24 + 0x1c) = 0;
    *(undefined8 *)(puVar24 + 0x28) = 0;
    *(undefined8 *)(puVar24 + 0x24) = 0;
    *(undefined8 *)(puVar24 + 0x30) = 0;
    *(undefined8 *)(puVar24 + 0x2c) = 0;
    *(undefined8 *)(puVar24 + 0x3c) = 0;
    *(undefined8 *)(puVar24 + 0x38) = 0;
    *(undefined8 *)(puVar24 + 0x54) = 0;
    *(undefined8 *)(puVar24 + 0x50) = 0;
    *(undefined4 *)(puVar24 + 0x34) = 0x3f800000;
    *(undefined8 *)(puVar24 + 0x44) = 0;
    *(undefined8 *)(puVar24 + 0x40) = 0;
    *(undefined8 *)(puVar24 + 0x4c) = 0;
    *(undefined8 *)(puVar24 + 0x48) = 0;
    *(undefined8 *)(puVar24 + 0x5c) = 0;
    *(undefined8 *)(puVar24 + 0x58) = 0;
    *(undefined4 *)(puVar24 + 0x60) = 0x3f800000;
    *(undefined8 *)(puVar24 + 0x68) = 0;
    *(undefined8 *)(puVar24 + 100) = 0;
    *(undefined8 *)(puVar24 + 0x70) = 0;
    *(undefined8 *)(puVar24 + 0x6c) = 0;
    *(undefined4 *)(puVar24 + 0x74) = 0x3f800000;
    *(undefined8 *)(puVar24 + 0x78) = 0;
    *(undefined8 *)(puVar24 + 0x7c) = 0;
    puVar34 = (undefined8 *)0xd8;
    __Znwm();
    puVar34[0x1a] = 0;
    puVar34[0x17] = 0;
    puVar34[0x16] = 0;
    puVar34[0x19] = 0;
    puVar34[0x18] = 0;
    puVar34[0x13] = 0;
    puVar34[0x12] = 0;
    puVar34[0x15] = 0;
    puVar34[0x14] = 0;
    puVar34[0xf] = 0;
    puVar34[0xe] = 0;
    puVar34[0x11] = 0;
    puVar34[0x10] = 0;
    puVar34[0xb] = 0;
    puVar34[10] = 0;
    puVar34[0xd] = 0;
    puVar34[0xc] = 0;
    puVar34[7] = 0;
    puVar34[6] = 0;
    puVar34[9] = 0;
    puVar34[8] = 0;
    puVar34[3] = 0;
    puVar34[2] = 0;
    puVar34[5] = 0;
    puVar34[4] = 0;
    puVar34[1] = 0;
    *puVar34 = 0;
    *(undefined8 **)(puVar24 + 0x80) = puVar34;
    puVar34 = (undefined8 *)0x60;
    __Znwm();
    puVar34[1] = 0;
    puVar34[2] = 0;
    *puVar34 = &PTR_FUN_110b9dd70;
    apuStack_3e8[0] = puVar34 + 3;
    *apuStack_3e8[0] = puVar24;
    *(undefined8 **)(puVar24 + 4) = apuStack_3e8[0];
    *(undefined8 **)(puVar24 + 8) = puVar34;
    puVar34[4] = FUN_10a043220;
    puVar34[5] = 0x10a043228;
    puVar34[6] = 0x10a04322c;
    puVar34[7] = 0x10a043238;
    puVar34[8] = 0x10a043244;
    puVar34[9] = 0x10a043248;
    puVar34[10] = 0x10a043280;
    puVar34[0xb] = 0x10a043288;
    ppuVar25 = apuStack_3e8;
    func_0x0001099f07bc(ppuVar25,&ppppppppuStack_190);
    iVar20 = (int)ppuVar25;
    if (iVar20 == 0) {
      plVar35 = (long *)0x58;
      __Znwm();
      plVar45 = plVar35 + 1;
      *plVar45 = 0;
      plVar35[2] = 0;
      *plVar35 = (long)&PTR_DAT_110b9d040;
      plVar35[5] = (long)ppppppppuStack_190;
      plVar35[7] = 0;
      plVar35[6] = 0;
      plVar35[9] = 0;
      plVar35[8] = 0;
      *(undefined4 *)(plVar35 + 10) = 0x3f800000;
      do {
        cVar7 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar45,0x10);
        if (bVar17) {
          *plVar45 = *plVar45 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar31 = plVar35 + 2;
      do {
        cVar7 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar17) {
          *plVar31 = *plVar31 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar35[3] = (long)(plVar35 + 3);
      plVar35[4] = (long)plVar35;
      do {
        lVar62 = *plVar45;
        cVar7 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar45,0x10);
        if (bVar17) {
          *plVar45 = lVar62 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar45 = plVar35;
      if (lVar62 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar31 = *(long **)(puVar24 + 0x10);
      *(long **)(puVar24 + 0xc) = plVar35 + 3;
      *(long **)(puVar24 + 0x10) = plVar35;
      if (plVar31 != (long *)0x0) {
        plVar35 = plVar31 + 1;
        do {
          lVar62 = *plVar35;
          cVar7 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar17) {
            *plVar35 = lVar62 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar62 == 0) {
          (**(code **)(*plVar31 + 0x10))(plVar31);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar45 = plVar31;
        }
      }
      FUN_109d1a80c();
      ppppppppuStack_300 = (undefined ********)*plVar45;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_328 = 0;
      ppppppuStack_330 = (undefined8 ******)0x0;
      pppppppuStack_340 = (undefined *******)&UNK_1053a6a3c;
      ppppppppuStack_338 = (undefined ********)&PTR_DAT_110ae9180;
      ppppppppuStack_2b0 = (undefined ********)FUN_10a062c68;
      ppppppppuStack_2a8 = (undefined ********)&PTR_DAT_110b9f9f8;
      puStack_268 = &UNK_1053a6a3c;
      ppuStack_260 = &PTR_DAT_110ae9180;
      ppppppppuStack_2f8 = (undefined ********)&UNK_1053a6a3c;
      ppppppppuStack_2f0 = (undefined ********)&PTR_DAT_110ae9180;
      ppppppppuStack_270 = ppppppppuStack_300;
      __ZNSt3__16thread20hardware_concurrencyEv();
      FUN_10a102184();
      pppppppuStack_390 = (undefined8 *******)plVar45[9];
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_3b8 = 0;
      ppppppuStack_3c0 = (undefined ******)0x0;
      pppppppuStack_3d0 = (undefined8 *******)&UNK_1053a6a3c;
      ppppppppuStack_3c8 = (undefined ********)&PTR_DAT_110ae9180;
      pppppppuStack_388 = (undefined8 *******)&UNK_1053a6a3c;
      uStack_380 = &PTR_DAT_110ae9180;
      uVar23 = 0xb8;
      __Znwm(0xb8);
      FUN_109d228cc();
      FUN_10a061dc8(&uStack_220,&ppppppppuStack_2b0);
      FUN_10a062bb4(&ppppppppuStack_190,uVar23,&uStack_220);
      if (lStack_198 != 0) {
        func_0x0001092b4274(&lStack_198);
      }
      func_0x0001092ba41c(auStack_1e0);
      (**(code **)CONCAT44(fStack_214,fStack_218))(&fStack_218);
      FUN_10a010148(puVar24 + 0x14,&ppppppppuStack_190);
      FUN_10a062c88(&ppppppppuStack_190);
      func_0x0001092ba41c(&pppppppuStack_390);
      (*(code *)*ppppppppuStack_3c8)(&ppppppppuStack_3c8);
      func_0x0001092ba41c(&ppppppppuStack_270);
      (*(code *)*ppppppppuStack_2a8)(&ppppppppuStack_2a8);
      func_0x0001092ba41c(&ppppppppuStack_300);
      (*(code *)*ppppppppuStack_338)(&ppppppppuStack_338);
      func_0x00010a0196d8(param_1,puVar24);
      *(byte *)*param_1 = *(byte *)(param_1 + 0xc3);
LAB_10a019fbc:
      *(undefined4 *)(param_1 + 0xce) = 0;
      *(bool *)((long)param_1 + 0x674) = 0xca < iVar73;
      *(bool *)((long)param_1 + 0x675) = iVar73 < 0xd2;
      *(bool *)((long)param_1 + 0x676) = iVar73 < 0xde;
      if (iVar73 < 0xde) {
        __ZNSt3__19to_stringEi(&ppppppppuStack_2b0,iVar73);
        ppppppppuVar55 = (undefined ********)&ppppppppuStack_2b0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (ppppppppuVar55,0,&UNK_10f631ea1,0x3a);
        pppppppuVar47 = *ppppppppuVar55;
        uStack_210 = (undefined ********)ppppppppuVar55[2];
        fStack_218 = SUB84(ppppppppuVar55[1],0);
        fStack_214 = (float)((ulong)ppppppppuVar55[1] >> 0x20);
        uStack_220._0_2_ = SUB82(pppppppuVar47,0);
        uStack_220._2_2_ = (undefined2)((ulong)pppppppuVar47 >> 0x10);
        uStack_220._4_4_ = (float)((ulong)pppppppuVar47 >> 0x20);
        ppppppppuVar55[1] = (undefined *******)0x0;
        ppppppppuVar55[2] = (undefined *******)0x0;
        *ppppppppuVar55 = (undefined *******)0x0;
        puVar34 = &uStack_220;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar34,&UNK_10f631edc,6);
        fStack_180 = (float)puVar34[2];
        uStack_17c = (float)((ulong)puVar34[2] >> 0x20);
        ppppppppuStack_190 = (undefined ********)*puVar34;
        uStack_188._0_4_ = (float)puVar34[1];
        uStack_188._4_4_ = (float)((ulong)puVar34[1] >> 0x20);
        puVar34[1] = 0;
        puVar34[2] = 0;
        *puVar34 = 0;
        fVar86 = uStack_17c;
        uVar56 = CONCAT44(uStack_188._4_4_,(float)uStack_188);
        ppppppppuVar55 = ppppppppuStack_190;
        if (-1 < (int)uStack_17c) {
          uVar56 = (ulong)uStack_17c._3_1_;
          ppppppppuVar55 = (undefined ********)&ppppppppuStack_190;
        }
        FUN_10a00edf0(&uStack_470,4,ppppppppuVar55,uVar56,aiStack_478);
        if ((int)fVar86 < 0) {
          __ZdlPv();
        }
        if ((long)uStack_210 < 0) {
          __ZdlPv();
        }
        if ((long)ppppppppuStack_2a0 < 0) {
          __ZdlPv();
        }
        *(byte *)((long)param_1 + 0x677) = 0;
      }
      else {
        *(bool *)((long)param_1 + 0x677) = iVar73 - 0xdeU < 0x29;
        if (iVar73 - 0xdeU < 0x29) {
          __ZNSt3__19to_stringEi(&ppppppppuStack_2b0,iVar73);
          ppppppppuVar55 = (undefined ********)&ppppppppuStack_2b0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (ppppppppuVar55,0,&UNK_10f631ee3,0x3e);
          pppppppuVar47 = *ppppppppuVar55;
          uStack_210 = (undefined ********)ppppppppuVar55[2];
          fStack_218 = SUB84(ppppppppuVar55[1],0);
          fStack_214 = (float)((ulong)ppppppppuVar55[1] >> 0x20);
          uStack_220._0_2_ = SUB82(pppppppuVar47,0);
          uStack_220._2_2_ = (undefined2)((ulong)pppppppuVar47 >> 0x10);
          uStack_220._4_4_ = (float)((ulong)pppppppuVar47 >> 0x20);
          ppppppppuVar55[1] = (undefined *******)0x0;
          ppppppppuVar55[2] = (undefined *******)0x0;
          *ppppppppuVar55 = (undefined *******)0x0;
          puVar34 = &uStack_220;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar34,&UNK_10f631f22,6);
          fStack_180 = (float)puVar34[2];
          uStack_17c = (float)((ulong)puVar34[2] >> 0x20);
          ppppppppuStack_190 = (undefined ********)*puVar34;
          uStack_188._0_4_ = (float)puVar34[1];
          uStack_188._4_4_ = (float)((ulong)puVar34[1] >> 0x20);
          puVar34[1] = 0;
          puVar34[2] = 0;
          *puVar34 = 0;
          fVar86 = uStack_17c;
          uVar56 = CONCAT44(uStack_188._4_4_,(float)uStack_188);
          ppppppppuVar55 = ppppppppuStack_190;
          if (-1 < (int)uStack_17c) {
            uVar56 = (ulong)uStack_17c._3_1_;
            ppppppppuVar55 = (undefined ********)&ppppppppuStack_190;
          }
          FUN_10a00edf0(&uStack_470,4,ppppppppuVar55,uVar56,aiStack_478);
          if ((int)fVar86 < 0) {
            __ZdlPv();
          }
          if ((long)uStack_210 < 0) {
            __ZdlPv();
          }
          if ((long)ppppppppuStack_2a0 < 0) {
            __ZdlPv();
          }
        }
      }
      pppppppuVar47 = *param_1;
      __ZNSt3__16chrono12steady_clock3nowEv();
      puVar34 = &uStack_470;
      FUN_10a00edf0(puVar34,0,&UNK_10f630f1d,0,aiStack_478);
      ppppppppuVar21 = (undefined ********)(ulong)*(byte *)pppppppuVar47;
      uVar72 = (uint)*(byte *)pppppppuVar47;
      if (uVar72 == 1) {
        aiStack_478[0] = aiStack_478[0] + 1;
      }
      ppppppppuVar48 = (undefined ********)(pppppppuVar47 + 0xe);
      ppppppppuStack_2a8 = (undefined ********)0x0;
      ppppppppuStack_2b0 = (undefined ********)0x0;
      lStack_298 = 0;
      ppppppppuStack_2a0 = (undefined ********)0x0;
      fStack_290 = 1.0;
      FUN_10a0632e4(&ppppppppuStack_2b0,
                    ((long)pppppppuVar47[0xf] - (long)*ppppppppuVar48 >> 5) * -0x5555555555555555);
      lVar62 = *(long *)(param_3 + 0x208);
      lVar70 = *(long *)(param_3 + 0x200);
      if (lVar62 != lVar70) {
        uVar56 = 0;
        do {
          ppppppppuVar55 = ppppppppuStack_2a8;
          ppppppppuVar39 = (undefined ********)pppppppuVar47[10];
          if (ppppppppuVar39 != (undefined ********)0x0) {
            lVar53 = *(long *)(lVar70 + uVar56 * 0x1b8 + 0x1a8);
            ppppppppuVar38 = *(undefined *********)(lVar53 + 0x48);
            pbVar75 = (byte *)((long)ppppppppuVar39 + -1);
            if (((ulong)ppppppppuVar39 & (ulong)pbVar75) == 0) {
              ppppppppuVar51 = (undefined ********)((ulong)pbVar75 & (ulong)ppppppppuVar38);
            }
            else {
              ppppppppuVar51 = ppppppppuVar38;
              if (ppppppppuVar39 <= ppppppppuVar38) {
                uVar46 = 0;
                if (ppppppppuVar39 != (undefined ********)0x0) {
                  uVar46 = (ulong)ppppppppuVar38 / (ulong)ppppppppuVar39;
                }
                ppppppppuVar51 =
                     (undefined ********)((long)ppppppppuVar38 - uVar46 * (long)ppppppppuVar39);
              }
            }
            if ((pppppppuVar47[9][(long)ppppppppuVar51] != (undefined *****)0x0) &&
               (ppppuVar52 = *pppppppuVar47[9][(long)ppppppppuVar51],
               ppppuVar52 != (undefined ****)0x0)) {
              pppppppuVar67 = *(undefined ********)(lVar53 + 0x40);
LAB_10a01a2b0:
              ppppppppuVar32 = (undefined ********)ppppuVar52[1];
              if (ppppppppuVar32 != ppppppppuVar38) {
                if (((ulong)ppppppppuVar39 & (ulong)pbVar75) == 0) {
                  ppppppppuVar32 = (undefined ********)((ulong)ppppppppuVar32 & (ulong)pbVar75);
                }
                else if (ppppppppuVar39 <= ppppppppuVar32) {
                  uVar46 = 0;
                  if (ppppppppuVar39 != (undefined ********)0x0) {
                    uVar46 = (ulong)ppppppppuVar32 / (ulong)ppppppppuVar39;
                  }
                  ppppppppuVar32 =
                       (undefined ********)((long)ppppppppuVar32 - uVar46 * (long)ppppppppuVar39);
                }
                if (ppppppppuVar32 == ppppppppuVar51) goto LAB_10a01a2f8;
                goto LAB_10a01a580;
              }
              if ((undefined *******)ppppuVar52[2] != pppppppuVar67 ||
                  (undefined ********)ppppuVar52[3] != ppppppppuVar38) goto LAB_10a01a2f8;
              uVar60 = *(uint *)(ppppuVar52 + 4);
              if ((int)uVar60 < 0) goto LAB_10a01a580;
              ppppppuVar22 = pppppppuVar47[0xe];
              uVar46 = ((long)pppppppuVar47[0xf] - (long)ppppppuVar22 >> 5) * -0x5555555555555555;
              if (uVar46 < uVar60 || uVar46 - uVar60 == 0) goto LAB_10a01e454;
              pppppppuVar79 = (undefined *******)ppppppuVar22[(ulong)uVar60 * 0xc + 7];
              uStack_220._0_2_ = SUB82(pppppppuVar79,0);
              uStack_220._2_2_ = (undefined2)((ulong)pppppppuVar79 >> 0x10);
              uStack_220._4_4_ = (float)((ulong)pppppppuVar79 >> 0x20);
              pppppppuVar57 = (undefined *******)ppppppuVar22[(ulong)uVar60 * 0xc + 8];
              fStack_218 = SUB84(pppppppuVar57,0);
              fStack_214 = (float)((ulong)pppppppuVar57 >> 0x20);
              if (pppppppuVar57 != (undefined *******)0x0) {
                pppppppuVar49 = pppppppuVar57 + 1;
                do {
                  cVar7 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(pppppppuVar49,0x10);
                  if (bVar17) {
                    *pppppppuVar49 = (undefined ******)((long)*pppppppuVar49 + 1);
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              if (pppppppuVar79 != (undefined *******)0x0) {
                if (ppppppppuStack_2a8 != (undefined ********)0x0) {
                  pbVar75 = (byte *)((long)ppppppppuStack_2a8 + -1);
                  if (((ulong)ppppppppuStack_2a8 & (ulong)pbVar75) == 0) {
                    ppppppppuVar21 = (undefined ********)((ulong)pbVar75 & (ulong)ppppppppuVar38);
                  }
                  else {
                    ppppppppuVar21 = ppppppppuVar38;
                    if (ppppppppuStack_2a8 <= ppppppppuVar38) {
                      uVar46 = 0;
                      if (ppppppppuStack_2a8 != (undefined ********)0x0) {
                        uVar46 = (ulong)ppppppppuVar38 / (ulong)ppppppppuStack_2a8;
                      }
                      ppppppppuVar21 =
                           (undefined ********)
                           ((long)ppppppppuVar38 - uVar46 * (long)ppppppppuStack_2a8);
                    }
                  }
                  pppppppuVar49 = ppppppppuStack_2b0[(long)ppppppppuVar21];
                  if (pppppppuVar49 != (undefined *******)0x0) {
                    do {
                      while( true ) {
                        pppppppuVar49 = (undefined *******)*pppppppuVar49;
                        if (pppppppuVar49 == (undefined *******)0x0) goto LAB_10a01a3f0;
                        ppppppppuVar39 = (undefined ********)pppppppuVar49[1];
                        if (ppppppppuVar39 != ppppppppuVar38) break;
                        if ((undefined *******)pppppppuVar49[2] == pppppppuVar67 &&
                            (undefined ********)pppppppuVar49[3] == ppppppppuVar38)
                        goto LAB_10a01a534;
                      }
                      if (((ulong)ppppppppuStack_2a8 & (ulong)pbVar75) == 0) {
                        ppppppppuVar39 =
                             (undefined ********)((ulong)ppppppppuVar39 & (ulong)pbVar75);
                      }
                      else if (ppppppppuStack_2a8 <= ppppppppuVar39) {
                        uVar46 = 0;
                        if (ppppppppuStack_2a8 != (undefined ********)0x0) {
                          uVar46 = (ulong)ppppppppuVar39 / (ulong)ppppppppuStack_2a8;
                        }
                        ppppppppuVar39 =
                             (undefined ********)
                             ((long)ppppppppuVar39 - uVar46 * (long)ppppppppuStack_2a8);
                      }
                    } while (ppppppppuVar39 == ppppppppuVar21);
                  }
                }
LAB_10a01a3f0:
                ppppppppuVar39 = (undefined ********)0x30;
                __Znwm();
                uStack_188 = (undefined ********)&ppppppppuStack_2b0;
                fStack_180 = 1.4013e-45;
                uStack_17c = 0.0;
                *ppppppppuVar39 = (undefined *******)0x0;
                ppppppppuVar39[1] = (undefined *******)ppppppppuVar38;
                ppppppppuVar39[2] = pppppppuVar67;
                ppppppppuVar39[3] = (undefined *******)ppppppppuVar38;
                ppppppppuVar39[4] = pppppppuVar79;
                ppppppppuVar39[5] = pppppppuVar57;
                if (pppppppuVar57 != (undefined *******)0x0) {
                  pppppppuVar67 = pppppppuVar57 + 1;
                  do {
                    cVar7 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(pppppppuVar67,0x10);
                    if (bVar17) {
                      *pppppppuVar67 = (undefined ******)((long)*pppppppuVar67 + 1);
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                }
                ppppppppuStack_190 = ppppppppuVar39;
                if ((ppppppppuVar55 == (undefined ********)0x0) ||
                   (fStack_290 * (float)ppppppppuVar55 < (float)(lStack_298 + 1))) {
                  uVar46 = 1;
                  if ((undefined ********)0x2 < ppppppppuVar55) {
                    uVar46 = (ulong)(((ulong)ppppppppuVar55 & (ulong)((long)ppppppppuVar55 + -1)) !=
                                    0);
                  }
                  uVar46 = uVar46 | (long)ppppppppuVar55 << 1;
                  uVar63 = (ulong)((float)(lStack_298 + 1) / fStack_290);
                  if (uVar46 <= uVar63) {
                    uVar46 = uVar63;
                  }
                  FUN_10a0632e4(&ppppppppuStack_2b0,uVar46);
                  ppppppppuVar55 = ppppppppuStack_2a8;
                  if (((ulong)ppppppppuStack_2a8 & (ulong)((long)ppppppppuStack_2a8 + -1)) == 0) {
                    ppppppppuVar21 =
                         (undefined ********)
                         ((ulong)((long)ppppppppuStack_2a8 + -1) & (ulong)ppppppppuVar38);
                  }
                  else {
                    ppppppppuVar21 = ppppppppuVar38;
                    if (ppppppppuStack_2a8 <= ppppppppuVar38) {
                      uVar46 = 0;
                      if (ppppppppuStack_2a8 != (undefined ********)0x0) {
                        uVar46 = (ulong)ppppppppuVar38 / (ulong)ppppppppuStack_2a8;
                      }
                      ppppppppuVar21 =
                           (undefined ********)
                           ((long)ppppppppuVar38 - uVar46 * (long)ppppppppuStack_2a8);
                    }
                  }
                }
                ppppppppuVar38 = (undefined ********)ppppppppuStack_2b0[(long)ppppppppuVar21];
                if (ppppppppuVar38 == (undefined ********)0x0) {
                  *ppppppppuVar39 = (undefined *******)ppppppppuStack_2a0;
                  ppppppppuStack_2b0[(long)ppppppppuVar21] = (undefined *******)&ppppppppuStack_2a0;
                  ppppppppuStack_2a0 = ppppppppuVar39;
                  if (*ppppppppuVar39 != (undefined *******)0x0) {
                    ppppppppuVar38 = (undefined ********)(*ppppppppuVar39)[1];
                    if (((ulong)ppppppppuVar55 & (ulong)((long)ppppppppuVar55 + -1)) == 0) {
                      ppppppppuVar38 =
                           (undefined ********)
                           ((ulong)ppppppppuVar38 & (ulong)((long)ppppppppuVar55 + -1));
                    }
                    else if (ppppppppuVar55 <= ppppppppuVar38) {
                      uVar46 = 0;
                      if (ppppppppuVar55 != (undefined ********)0x0) {
                        uVar46 = (ulong)ppppppppuVar38 / (ulong)ppppppppuVar55;
                      }
                      ppppppppuVar38 =
                           (undefined ********)
                           ((long)ppppppppuVar38 - uVar46 * (long)ppppppppuVar55);
                    }
                    ppppppppuVar38 = ppppppppuStack_2b0 + (long)ppppppppuVar38;
                    goto LAB_10a01a524;
                  }
                }
                else {
                  *ppppppppuVar39 = *ppppppppuVar38;
LAB_10a01a524:
                  *ppppppppuVar38 = (undefined *******)ppppppppuVar39;
                }
                lStack_298 = lStack_298 + 1;
              }
LAB_10a01a534:
              ppppppppuVar21 = (undefined ********)(ulong)uVar72;
              if (pppppppuVar57 != (undefined *******)0x0) {
                pppppppuVar67 = pppppppuVar57 + 1;
                do {
                  ppppppuVar22 = *pppppppuVar67;
                  cVar7 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(pppppppuVar67,0x10);
                  if (bVar17) {
                    *pppppppuVar67 = (undefined ******)((long)ppppppuVar22 + -1);
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (ppppppuVar22 == (undefined ******)0x0) {
                  (*(code *)(*pppppppuVar57)[2])(pppppppuVar57);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar57);
                }
              }
              lVar62 = *(long *)(param_3 + 0x208);
              lVar70 = *(long *)(param_3 + 0x200);
            }
          }
LAB_10a01a580:
          uVar56 = uVar56 + 1;
          uVar46 = (lVar62 - lVar70 >> 3) * 0x6fb586fb586fb587;
        } while (uVar56 <= uVar46 && uVar46 - uVar56 != 0);
      }
      iVar73 = (int)ppppppppuVar21;
      ppppppppuStack_440 = (undefined ********)0x0;
      ppppppuStack_438 = (undefined ******)0x0;
      ppppppuStack_430 = (undefined ******)0x0;
      if (pppppppuVar47[0xc] != (undefined ******)0x0) {
        ppppppuVar22 = pppppppuVar47[0xb];
        while (ppppppuVar22 != (undefined ******)0x0) {
          ppppppuVar22 = (undefined ******)*ppppppuVar22;
          __ZdlPv();
        }
        pppppppuVar47[0xb] = (undefined ******)0x0;
        ppppppuVar22 = pppppppuVar47[10];
        if (ppppppuVar22 != (undefined ******)0x0) {
          ppppppuVar50 = (undefined ******)0x0;
          do {
            pppppppuVar47[9][(long)ppppppuVar50] = (undefined *****)0x0;
            ppppppuVar50 = (undefined ******)((long)ppppppuVar50 + 1);
          } while (ppppppuVar22 != ppppppuVar50);
        }
        pppppppuVar47[0xc] = (undefined ******)0x0;
      }
      func_0x00010a0436d4(ppppppppuVar48,pppppppuVar47[0xe]);
      ppppppuVar50 = (undefined ******)
                     (long)((float)(ulong)((*(long *)(param_3 + 0x208) - *(long *)(param_3 + 0x200)
                                           >> 3) * 0x6fb586fb586fb587) /
                           *(float *)(pppppppuVar47 + 0xd));
      FUN_10a063558(pppppppuVar47 + 9);
      ppppppuVar22 = ppppppuStack_438;
      ppppppppuVar55 = ppppppppuStack_440;
      lVar62 = *(long *)(param_3 + 0x208);
      lVar70 = *(long *)(param_3 + 0x200);
      uVar56 = (lVar62 - lVar70 >> 3) * 0x6fb586fb586fb587;
      if ((ulong)(((long)ppppppuStack_430 - (long)ppppppppuStack_440 >> 4) * 0x4ec4ec4ec4ec4ec5) <
          uVar56) {
        if (0x13b13b13b13b13b < uVar56) {
          FUN_10a04372c();
          goto LAB_10a01e454;
        }
        ppppppppuStack_170 = (undefined ********)&ppppppppuStack_440;
        FUN_10a043740();
        ppppppuVar22 = (undefined ******)((long)ppppppuVar22 + (uVar56 - (long)ppppppppuVar55));
        lVar62 = (long)ppppppuVar50 * 0xd0;
        ppppppppuVar55 =
             (undefined ********)
             ((long)ppppppuVar22 + ((long)ppppppppuStack_440 - (long)ppppppuStack_438));
        func_0x00010a043788(ppppppppuStack_440,ppppppuStack_438,ppppppppuVar55);
        fStack_180 = SUB84(ppppppppuStack_440,0);
        uStack_17c = (float)((ulong)ppppppppuStack_440 >> 0x20);
        ppppppuStack_178 = ppppppuStack_430;
        ppppppppuStack_190 = ppppppppuStack_440;
        ppppppuVar50 = ppppppuStack_438;
        ppppppppuStack_440 = ppppppppuVar55;
        ppppppuStack_438 = ppppppuVar22;
        ppppppuStack_430 = (undefined ******)(uVar56 + lVar62);
        uStack_188._0_4_ = fStack_180;
        uStack_188._4_4_ = uStack_17c;
        func_0x00010a04389c(&ppppppppuStack_190);
        lVar62 = *(long *)(param_3 + 0x208);
        lVar70 = *(long *)(param_3 + 0x200);
        uVar56 = (lVar62 - lVar70 >> 3) * 0x6fb586fb586fb587;
      }
      ppppppppuVar55 = (undefined ********)pppppppuVar47[0xe];
      if ((ulong)(((long)pppppppuVar47[0x10] - (long)ppppppppuVar55 >> 5) * -0x5555555555555555) <
          uVar56) {
        if (0x2aaaaaaaaaaaaaa < uVar56) {
          FUN_10a0438e8();
          goto LAB_10a01e454;
        }
        ppppppuVar22 = pppppppuVar47[0xf];
        ppppppppuStack_170 = ppppppppuVar48;
        FUN_10a0438fc();
        ppppppuVar22 = (undefined ******)((long)ppppppuVar22 + (uVar56 - (long)ppppppppuVar55));
        ppppppppuVar55 =
             (undefined ********)
             ((long)ppppppuVar22 + ((long)pppppppuVar47[0xe] - (long)pppppppuVar47[0xf]));
        func_0x00010a043940(pppppppuVar47[0xe],pppppppuVar47[0xf],ppppppppuVar55);
        ppppppppuStack_190 = (undefined ********)pppppppuVar47[0xe];
        pppppppuVar47[0xe] = (undefined ******)ppppppppuVar55;
        pppppppuVar47[0xf] = ppppppuVar22;
        ppppppuStack_178 = pppppppuVar47[0x10];
        pppppppuVar47[0x10] = (undefined ******)(uVar56 + (long)ppppppuVar50 * 0x60);
        fStack_180 = SUB84(ppppppppuStack_190,0);
        uStack_17c = (float)((ulong)ppppppppuStack_190 >> 0x20);
        uStack_188._0_4_ = fStack_180;
        uStack_188._4_4_ = uStack_17c;
        FUN_10a0439d0();
        lVar62 = *(long *)(param_3 + 0x208);
        lVar70 = *(long *)(param_3 + 0x200);
      }
      if (lVar62 != lVar70) {
        uVar56 = 0;
        do {
          pcVar76 = (char *)(lVar70 + uVar56 * 0x1b8);
          if (((byte)pcVar76[0x19] >> 6 & 1) == 0) {
            uStack_188._0_4_ = -NAN;
            uStack_188._4_4_ = -NAN;
            ppppppppuStack_190 = (undefined ********)0xffffffffffffffff;
            pppppuStack_100 = (undefined *****)0x0;
            ppppppppuStack_f8 = (undefined ********)0x0;
            pppppuStack_108 = (undefined *****)0x0;
            pppppuStack_138 = (undefined *****)0x0;
            pppppppuStack_140 = (undefined8 *******)0x0;
            pppppuStack_128 = (undefined *****)0x0;
            uStack_130 = (undefined ********)0x0;
            ppppppppuStack_118 = (undefined ********)0x0;
            pppppuStack_120 = (undefined *****)0x0;
                    /* WARNING: Ignoring partial resolution of indirect */
            uStack_110._0_4_ = 0;
            func_0x00010a0fda30();
            pppppuStack_d8 = (undefined *****)0x0;
            pppppuStack_e0 = (undefined *****)0x0;
            pppppuStack_c8 = (undefined *****)0x0;
            pppppuStack_d0 = (undefined *****)0x0;
            plVar35 = *(long **)(pcVar76 + 0x1a8);
            pppppuVar5 = (undefined *****)plVar35[8];
            pppppuVar6 = (undefined *****)plVar35[9];
            pppppuStack_f0 = pppppuVar5;
            pppppuStack_e8 = pppppuVar6;
            if (*pcVar76 == '\x12') {
              plVar45 = plVar35;
              FUN_10a00ffe4();
              plVar31 = plVar35;
              FUN_10a010080(plVar35,0);
              uVar60 = (uint)plVar45;
              if (((uVar60 | (uint)plVar31) & 1) == 0) {
                uVar54 = 0xffffffff;
                goto LAB_10a01aa18;
              }
              if ((plVar35[0x4c] == 0) ||
                 (plVar45 = *(long **)(plVar35[0x4c] + 0xe0), plVar45 == (long *)0x0)) {
LAB_10a01a948:
                FUN_10a00ff18(&pppppppuStack_390,plVar35[0x2d]);
                pppppppuVar68 = &pppppppuStack_390;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                          (pppppppuVar68,0,&UNK_10f63170e,8);
                ppppppppuStack_2f8 = (undefined ********)pppppppuVar68[1];
                ppppppppuStack_300 = (undefined ********)*pppppppuVar68;
                ppppppppuStack_2f0 = (undefined ********)pppppppuVar68[2];
                pppppppuVar68[1] = (undefined8 ******)0x0;
                pppppppuVar68[2] = (undefined8 ******)0x0;
                *pppppppuVar68 = (undefined8 ******)0x0;
                ppppppppuVar55 = (undefined ********)&ppppppppuStack_300;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (ppppppppuVar55,&UNK_10f631717,0x28);
                uStack_210 = (undefined ********)ppppppppuVar55[2];
                pppppppuVar67 = *ppppppppuVar55;
                fStack_218 = SUB84(ppppppppuVar55[1],0);
                fStack_214 = (float)((ulong)ppppppppuVar55[1] >> 0x20);
                uStack_220._0_2_ = SUB82(pppppppuVar67,0);
                uStack_220._2_2_ = (undefined2)((ulong)pppppppuVar67 >> 0x10);
                uStack_220._4_4_ = (float)((ulong)pppppppuVar67 >> 0x20);
                ppppppppuVar55[1] = (undefined *******)0x0;
                ppppppppuVar55[2] = (undefined *******)0x0;
                *ppppppppuVar55 = (undefined *******)0x0;
                ppppppppuVar55 = uStack_210;
                puVar58 = (undefined2 *)
                          CONCAT44(uStack_220._4_4_,
                                   CONCAT22(uStack_220._2_2_,(undefined2)uStack_220));
                uVar46 = CONCAT44(fStack_214,fStack_218);
                puVar24 = puVar58;
                if (-1 < (long)uStack_210) {
                  uVar46 = (ulong)uStack_210 >> 0x38;
                  puVar24 = (undefined2 *)&uStack_220;
                }
                FUN_10a00edf0(&uStack_470,2,puVar24,uVar46,aiStack_478);
                if ((long)ppppppppuVar55 < 0) {
                  __ZdlPv(puVar58);
                }
                if ((long)ppppppppuStack_2f0 < 0) {
                  __ZdlPv(ppppppppuStack_300);
                }
                if ((long)uStack_380 < 0) {
                  __ZdlPv(pppppppuStack_390);
                }
                uVar54 = 0xfffffffb;
                goto LAB_10a01aa18;
              }
              plVar26 = plVar45;
              (**(code **)(*plVar45 + 0x90))();
              lVar62 = *plVar26;
              if (lVar62 == 0) goto LAB_10a01a948;
              if ((uVar60 != 0) && (*(long *)(lVar62 + 0xd0) != *(long *)(lVar62 + 0xd8))) {
                FUN_10a00ff18(&pppppppuStack_390,plVar35[0x2d]);
                pppppppuVar68 = &pppppppuStack_390;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                          (pppppppuVar68,0,&UNK_10f63170e,8);
                ppppppppuStack_2f8 = (undefined ********)pppppppuVar68[1];
                ppppppppuStack_300 = (undefined ********)*pppppppuVar68;
                ppppppppuStack_2f0 = (undefined ********)pppppppuVar68[2];
                pppppppuVar68[1] = (undefined8 ******)0x0;
                pppppppuVar68[2] = (undefined8 ******)0x0;
                *pppppppuVar68 = (undefined8 ******)0x0;
                ppppppppuVar55 = (undefined ********)&ppppppppuStack_300;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (ppppppppuVar55,&UNK_10f631740,0x29);
                uStack_210 = (undefined ********)ppppppppuVar55[2];
                pppppppuVar67 = *ppppppppuVar55;
                fStack_218 = SUB84(ppppppppuVar55[1],0);
                fStack_214 = (float)((ulong)ppppppppuVar55[1] >> 0x20);
                uStack_220._0_2_ = SUB82(pppppppuVar67,0);
                uStack_220._2_2_ = (undefined2)((ulong)pppppppuVar67 >> 0x10);
                uStack_220._4_4_ = (float)((ulong)pppppppuVar67 >> 0x20);
                ppppppppuVar55[1] = (undefined *******)0x0;
                ppppppppuVar55[2] = (undefined *******)0x0;
                *ppppppppuVar55 = (undefined *******)0x0;
                bVar36 = uStack_210._7_1_;
                puVar58 = (undefined2 *)
                          CONCAT44(uStack_220._4_4_,
                                   CONCAT22(uStack_220._2_2_,(undefined2)uStack_220));
                uVar46 = CONCAT44(fStack_214,fStack_218);
                puVar24 = puVar58;
                if (-1 < (long)uStack_210) {
                  uVar46 = (ulong)uStack_210._7_1_;
                  puVar24 = (undefined2 *)&uStack_220;
                }
                FUN_10a00edf0(&uStack_470,2,puVar24,uVar46,aiStack_478);
LAB_10a01ac20:
                if ((char)bVar36 < '\0') {
                  __ZdlPv(puVar58);
                }
                pppppppuVar68 = pppppppuStack_390;
                ppppppuVar22 = (undefined ******)uStack_380;
                if ((long)ppppppppuStack_2f0 < 0) {
                  __ZdlPv(ppppppppuStack_300);
                  pppppppuVar68 = pppppppuStack_390;
                  ppppppuVar22 = (undefined ******)uStack_380;
                }
joined_r0x00010a01ac40:
                if ((long)ppppppuVar22 < 0) {
LAB_10a01b164:
                  __ZdlPv(pppppppuVar68);
                }
LAB_10a01b168:
                uVar54 = 0xfffffffc;
                goto LAB_10a01aa18;
              }
              uVar46 = (ulong)*(uint *)(lVar62 + 0x110);
              uVar63 = (*(long *)(lVar62 + 0x100) - *(long *)(lVar62 + 0xf8) >> 3) *
                       0x6db6db6db6db6db7;
              if (uVar63 < uVar46 || uVar63 - uVar46 == 0) {
                FUN_10ab725fc();
                goto LAB_10a01e454;
              }
              iVar73 = *(int *)(*(long *)(lVar62 + 0xf8) + uVar46 * 0x38 + 0x24);
              if (((byte)pcVar76[0x18] >> 5 & 1) == 0) {
                lVar70 = *(long *)(pcVar76 + 0x1a8);
                FUN_10a00ff8c();
                if (((byte)pcVar76[0x18] >> 3 & 1) == 0) {
                  bVar17 = false;
                }
                else {
                  bVar17 = *(long *)(lVar70 + 0x40) != *(long *)(lVar70 + 0x48);
                }
                if ((!bVar17) && (1 < iVar73 - 5U)) {
                  FUN_10a00ff18(&pppppppuStack_390,plVar35[0x2d]);
                  pppppppuVar68 = &pppppppuStack_390;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                            (pppppppuVar68,0,&UNK_10f63170e,8);
                  ppppppppuStack_2f8 = (undefined ********)pppppppuVar68[1];
                  ppppppppuStack_300 = (undefined ********)*pppppppuVar68;
                  ppppppppuStack_2f0 = (undefined ********)pppppppuVar68[2];
                  pppppppuVar68[1] = (undefined8 ******)0x0;
                  pppppppuVar68[2] = (undefined8 ******)0x0;
                  *pppppppuVar68 = (undefined8 ******)0x0;
                  ppppppppuVar55 = (undefined ********)&ppppppppuStack_300;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (ppppppppuVar55,&UNK_10f63176a,0x30);
                  uStack_210 = (undefined ********)ppppppppuVar55[2];
                  pppppppuVar67 = *ppppppppuVar55;
                  fStack_218 = SUB84(ppppppppuVar55[1],0);
                  fStack_214 = (float)((ulong)ppppppppuVar55[1] >> 0x20);
                  uStack_220._0_2_ = SUB82(pppppppuVar67,0);
                  uStack_220._2_2_ = (undefined2)((ulong)pppppppuVar67 >> 0x10);
                  uStack_220._4_4_ = (float)((ulong)pppppppuVar67 >> 0x20);
                  ppppppppuVar55[1] = (undefined *******)0x0;
                  ppppppppuVar55[2] = (undefined *******)0x0;
                  *ppppppppuVar55 = (undefined *******)0x0;
                  bVar36 = uStack_210._7_1_;
                  puVar58 = (undefined2 *)
                            CONCAT44(uStack_220._4_4_,
                                     CONCAT22(uStack_220._2_2_,(undefined2)uStack_220));
                  uVar46 = CONCAT44(fStack_214,fStack_218);
                  puVar24 = puVar58;
                  if (-1 < (long)uStack_210) {
                    uVar46 = (ulong)uStack_210._7_1_;
                    puVar24 = (undefined2 *)&uStack_220;
                  }
                  FUN_10a00edf0(&uStack_470,2,puVar24,uVar46,aiStack_478);
                  goto LAB_10a01ac20;
                }
              }
              FUN_10a00ff18(&uStack_220,plVar35[0x2d]);
              if ((long)ppppppppuStack_118 < 0) {
                __ZdlPv(pppppuStack_128);
              }
              pppppuStack_120 = (undefined *****)CONCAT44(fStack_214,fStack_218);
              pppppuStack_128 =
                   (undefined *****)
                   CONCAT44(uStack_220._4_4_,CONCAT22(uStack_220._2_2_,(undefined2)uStack_220));
              ppppppppuStack_118 = uStack_210;
              plVar26 = plVar35;
              func_0x00010a4262a4(plVar35);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (&pppppppuStack_140,plVar26);
              pbVar78 = pbRam00000001137e9348;
              for (pbVar75 = pbRam00000001137e9340; pppppuVar15 = (undefined *****)uStack_110,
                  pbVar75 != pbVar78; pbVar75 = pbVar75 + 1) {
                bVar36 = *pbVar75;
                plVar26 = plVar35 + 0x72;
                FUN_10a012e0c(plVar26,bVar36);
                if ((uVar60 != 0) && ((char)*plVar26 == '\x01')) {
                  uStack_110 = (undefined **)CONCAT62(uStack_110._2_6_,(ushort)uStack_110 | bVar36);
                }
                if (((((uint)(bVar36 == 1) & (uint)plVar31) == 1) &&
                    (*(char *)((long)plVar26 + 1) == '\x01')) && ((char)plVar26[0xc] == '\x01')) {
                  uStack_110 = (undefined **)((ulong)uStack_110 | 0x10000);
                }
              }
              if ((ushort)uStack_110 == 0 && uStack_110._2_2_ == 0) {
                uVar54 = 0xfffffffe;
                ppppppppuVar21 = (undefined ********)(ulong)uVar72;
                goto LAB_10a01aa18;
              }
              ppppppppuVar21 = (undefined ********)(ulong)uVar72;
              if ((long *)plVar35[0x54] == (long *)plVar35[0x55]) {
                uVar82 = 0;
                uVar81 = 1;
              }
              else {
                lVar70 = *(long *)plVar35[0x54];
                if (((lVar70 == 0) || (*(long **)(lVar70 + 0x228) == *(long **)(lVar70 + 0x230))) ||
                   (lVar70 = **(long **)(lVar70 + 0x228), lVar70 == 0)) {
                  uVar82 = 0;
                  uVar81 = 1;
                }
                else {
                  uVar81 = *(undefined1 *)(lVar70 + 0x244);
                  uVar82 = *(undefined1 *)(lVar70 + 0x218);
                }
              }
              uStack_110._0_5_ = CONCAT14(uVar81,(undefined4)uStack_110);
              uStack_110._6_2_ = SUB82(pppppuVar15,6);
              uStack_110 = (undefined **)
                           (CONCAT26(uStack_110._6_2_,CONCAT15(uVar82,(undefined5)uStack_110)) &
                           0xffff01ffffffffff);
              pppppppuVar68 = (undefined8 *******)0x1;
              FUN_10a061940(plVar45);
              if (pppppppuVar68 == (undefined8 *******)0x0) {
                ppppppuVar61 = (undefined8 ******)0x0;
              }
              else {
                ppppppuVar61 = *pppppppuVar68;
              }
              uVar23 = *(undefined8 *)(plVar35[0x4c] + 0x48);
              ppppppppuStack_190 = *(undefined *********)(plVar35[0x4c] + 0x40);
              uStack_188._0_4_ = (float)uVar23;
              uStack_188._4_4_ = (float)((ulong)uVar23 >> 0x20);
              fStack_180 = (float)lVar62;
              uStack_17c = (float)((ulong)lVar62 >> 0x20);
              if (*(int *)(lVar62 + 0xe8) != 1) {
                FUN_10a00ff18(&pppppppuStack_3d0,plVar35[0x2d]);
                pppppppuVar68 = &pppppppuStack_3d0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                          (pppppppuVar68,0,&UNK_10f63170e,8);
                ppppppppuStack_338 = (undefined ********)pppppppuVar68[1];
                pppppppuStack_340 = (undefined *******)*pppppppuVar68;
                ppppppuStack_330 = pppppppuVar68[2];
                pppppppuVar68[1] = (undefined8 ******)0x0;
                pppppppuVar68[2] = (undefined8 ******)0x0;
                *pppppppuVar68 = (undefined8 ******)0x0;
                pppppppuVar67 = (undefined *******)&pppppppuStack_340;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (pppppppuVar67,&UNK_10f63179b,0xd);
                pppppppuStack_388 = (undefined8 *******)pppppppuVar67[1];
                pppppppuStack_390 = (undefined8 *******)*pppppppuVar67;
                uStack_380 = (undefined **)pppppppuVar67[2];
                pppppppuVar67[1] = (undefined ******)0x0;
                pppppppuVar67[2] = (undefined ******)0x0;
                *pppppppuVar67 = (undefined ******)0x0;
                pppppuVar5 = pppppuStack_138;
                if (-1 < (long)uStack_130) {
                  pppppuVar5 = (undefined *****)((ulong)uStack_130 >> 0x38);
                  pppppppuStack_140 = &pppppppuStack_140;
                }
                pppppppuVar68 = &pppppppuStack_390;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (pppppppuVar68,pppppppuStack_140,pppppuVar5);
                ppppppppuStack_2f8 = (undefined ********)pppppppuVar68[1];
                ppppppppuStack_300 = (undefined ********)*pppppppuVar68;
                ppppppppuStack_2f0 = (undefined ********)pppppppuVar68[2];
                pppppppuVar68[1] = (undefined8 ******)0x0;
                pppppppuVar68[2] = (undefined8 ******)0x0;
                *pppppppuVar68 = (undefined8 ******)0x0;
                ppppppppuVar55 = (undefined ********)&ppppppppuStack_300;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (ppppppppuVar55,&UNK_10f6317a9,0x2d);
                uStack_210 = (undefined ********)ppppppppuVar55[2];
                pppppppuVar67 = *ppppppppuVar55;
                fStack_218 = SUB84(ppppppppuVar55[1],0);
                fStack_214 = (float)((ulong)ppppppppuVar55[1] >> 0x20);
                uStack_220._0_2_ = SUB82(pppppppuVar67,0);
                uStack_220._2_2_ = (undefined2)((ulong)pppppppuVar67 >> 0x10);
                uStack_220._4_4_ = (float)((ulong)pppppppuVar67 >> 0x20);
                ppppppppuVar55[1] = (undefined *******)0x0;
                ppppppppuVar55[2] = (undefined *******)0x0;
                *ppppppppuVar55 = (undefined *******)0x0;
                ppppppppuVar55 = uStack_210;
                puVar58 = (undefined2 *)
                          CONCAT44(uStack_220._4_4_,
                                   CONCAT22(uStack_220._2_2_,(undefined2)uStack_220));
                uVar46 = CONCAT44(fStack_214,fStack_218);
                puVar24 = puVar58;
                if (-1 < (long)uStack_210) {
                  uVar46 = (ulong)uStack_210 >> 0x38;
                  puVar24 = (undefined2 *)&uStack_220;
                }
                FUN_10a00edf0(&uStack_470,2,puVar24,uVar46,aiStack_478);
                if ((long)ppppppppuVar55 < 0) {
                  __ZdlPv(puVar58);
                }
                if ((long)ppppppppuStack_2f0 < 0) {
                  __ZdlPv(ppppppppuStack_300);
                }
                if ((long)uStack_380 < 0) {
                  __ZdlPv(pppppppuStack_390);
                }
                pppppppuVar68 = pppppppuStack_3d0;
                ppppppuVar22 = ppppppuStack_3c0;
                if ((long)ppppppuStack_330 < 0) {
                  __ZdlPv(pppppppuStack_340);
                  pppppppuVar68 = pppppppuStack_3d0;
                  ppppppuVar22 = ppppppuStack_3c0;
                }
                goto joined_r0x00010a01ac40;
              }
              lVar70 = lVar62;
              FUN_10ab4a5b4();
              ppppppppuStack_170 =
                   (undefined ********)CONCAT44(ppppppppuStack_170._4_4_,(int)lVar70);
              ppppppuVar27 = ppppppuVar61;
              (*(code *)(*ppppppuVar61)[6])();
              ppppppppuVar55 = ppppppppuStack_170;
              if (ppppppuVar27[1] == (undefined8 *****)0x0) goto LAB_10a01df44;
              ppppppuStack_178 = (undefined ******)ppppppuVar27[1][9];
              pppppuStack_168 = (undefined *****)(ulong)*(uint *)(ppppppuVar27 + 0xf);
              if (0x2fffc < (uint)ppppppppuStack_170) {
                FUN_10a00ff18(apppppppuStack_400,plVar35[0x2d]);
                FUN_109feb280(apuStack_3e8,&UNK_10f63170e,apppppppuStack_400);
                ppuVar25 = apuStack_3e8;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (ppuVar25,&UNK_10f63179b,0xd);
                ppppppppuStack_3c8 = (undefined ********)ppuVar25[1];
                pppppppuStack_3d0 = (undefined8 *******)*ppuVar25;
                ppppppuStack_3c0 = (undefined ******)ppuVar25[2];
                ppuVar25[1] = (undefined8 *)0x0;
                ppuVar25[2] = (undefined8 *)0x0;
                *ppuVar25 = (undefined8 *)0x0;
                pppppuVar5 = pppppuStack_138;
                if (-1 < (long)uStack_130) {
                  pppppuVar5 = (undefined *****)((ulong)uStack_130 >> 0x38);
                  pppppppuStack_140 = &pppppppuStack_140;
                }
                pppppppuVar68 = &pppppppuStack_3d0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (pppppppuVar68,pppppppuStack_140,pppppuVar5);
                ppppppppuStack_338 = (undefined ********)pppppppuVar68[1];
                pppppppuStack_340 = (undefined *******)*pppppppuVar68;
                ppppppuStack_330 = pppppppuVar68[2];
                pppppppuVar68[1] = (undefined8 ******)0x0;
                pppppppuVar68[2] = (undefined8 ******)0x0;
                *pppppppuVar68 = (undefined8 ******)0x0;
                pppppppuVar67 = (undefined *******)&pppppppuStack_340;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (pppppppuVar67,&UNK_10f6317d7,0xe);
                pppppppuStack_388 = (undefined8 *******)pppppppuVar67[1];
                pppppppuStack_390 = (undefined8 *******)*pppppppuVar67;
                uStack_380 = (undefined **)pppppppuVar67[2];
                pppppppuVar67[1] = (undefined ******)0x0;
                pppppppuVar67[2] = (undefined ******)0x0;
                *pppppppuVar67 = (undefined ******)0x0;
                __ZNSt3__19to_stringEi(&pppppppuStack_418,((ulong)ppppppppuVar55 & 0xffffffff) / 3);
                uVar46 = uStack_410;
                pppppppuVar68 = pppppppuStack_418;
                if (-1 < (char)bStack_401) {
                  uVar46 = (ulong)bStack_401;
                  pppppppuVar68 = &pppppppuStack_418;
                }
                pppppppuVar28 = &pppppppuStack_390;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (pppppppuVar28,pppppppuVar68,uVar46);
                ppppppppuStack_2f8 = (undefined ********)pppppppuVar28[1];
                ppppppppuStack_300 = (undefined ********)*pppppppuVar28;
                ppppppppuStack_2f0 = (undefined ********)pppppppuVar28[2];
                pppppppuVar28[1] = (undefined8 ******)0x0;
                pppppppuVar28[2] = (undefined8 ******)0x0;
                *pppppppuVar28 = (undefined8 ******)0x0;
                ppppppppuVar55 = (undefined ********)&ppppppppuStack_300;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (ppppppppuVar55,&UNK_10f6317e6,0x22);
                uStack_210 = (undefined ********)ppppppppuVar55[2];
                pppppppuVar67 = *ppppppppuVar55;
                fStack_218 = SUB84(ppppppppuVar55[1],0);
                fStack_214 = (float)((ulong)ppppppppuVar55[1] >> 0x20);
                uStack_220._0_2_ = SUB82(pppppppuVar67,0);
                uStack_220._2_2_ = (undefined2)((ulong)pppppppuVar67 >> 0x10);
                uStack_220._4_4_ = (float)((ulong)pppppppuVar67 >> 0x20);
                ppppppppuVar55[1] = (undefined *******)0x0;
                ppppppppuVar55[2] = (undefined *******)0x0;
                *ppppppppuVar55 = (undefined *******)0x0;
                ppppppppuVar55 = uStack_210;
                puVar58 = (undefined2 *)
                          CONCAT44(uStack_220._4_4_,
                                   CONCAT22(uStack_220._2_2_,(undefined2)uStack_220));
                uVar46 = CONCAT44(fStack_214,fStack_218);
                puVar24 = puVar58;
                if (-1 < (long)uStack_210) {
                  uVar46 = (ulong)uStack_210 >> 0x38;
                  puVar24 = (undefined2 *)&uStack_220;
                }
                FUN_10a00edf0(&uStack_470,2,puVar24,uVar46,aiStack_478);
                if ((long)ppppppppuVar55 < 0) {
                  __ZdlPv(puVar58);
                }
                if ((long)ppppppppuStack_2f0 < 0) {
                  __ZdlPv(ppppppppuStack_300);
                }
                if ((char)bStack_401 < '\0') {
                  __ZdlPv(pppppppuStack_418);
                }
                if ((long)uStack_380 < 0) {
                  __ZdlPv(pppppppuStack_390);
                }
                if ((long)ppppppuStack_330 < 0) {
                  __ZdlPv(pppppppuStack_340);
                }
                if ((long)ppppppuStack_3c0 < 0) {
                  __ZdlPv(pppppppuStack_3d0);
                }
                if (cStack_3d1 < '\0') {
                  __ZdlPv(apuStack_3e8[0]);
                }
                pppppppuVar68 = apppppppuStack_400[0];
                if (cStack_3e9 < '\0') goto LAB_10a01b164;
                goto LAB_10a01b168;
              }
              uVar60 = *(uint *)(lVar62 + 0xf0);
              uStack_154 = 0;
              if (uVar60 != 0) {
                uStack_154 = 0;
                if ((ulong)uVar60 != 0) {
                  uStack_154 = (uint)((ulong)(*(long *)(lVar62 + 0x18) - *(long *)(lVar62 + 0x10)) /
                                     (ulong)uVar60);
                }
              }
              uVar60 = *(uint *)(pcVar76 + 0x18);
              lVar70 = *(long *)(pcVar76 + 0x1a8);
              FUN_10a00ff8c();
              if (((byte)pcVar76[0x18] >> 3 & 1) == 0) {
                bVar17 = false;
              }
              else {
                bVar17 = *(long *)(lVar70 + 0x40) != *(long *)(lVar70 + 0x48);
              }
              if (((uVar60 >> 5 & 1) != 0) || (bVar17)) {
                ppppppppuVar55 = ppppppppuStack_2b0;
                FUN_10a063928(ppppppppuStack_2b0,ppppppppuStack_2a8,pppppuVar5,pppppuVar6);
                if (ppppppppuVar55 == (undefined ********)0x0) {
                  FUN_10a2421c8();
                  pppppppuVar67 = ppppppppuVar55[0x45];
                  (*(code *)(*pppppppuVar67)[9])();
                  FUN_10a012ee0(&pppppuStack_e0,pppppppuVar67);
                }
                else {
                  FUN_10a012e6c(&pppppuStack_e0,ppppppppuVar55[4],ppppppppuVar55[5]);
                }
                uStack_158 = 0x18;
                uStack_150 = 0;
                (*(code *)(*pppppuStack_e0)[3])(pppppuStack_e0,uStack_154 * 0x18,1);
                *(byte *)((long)pppppppuVar47 + 1) = 1;
                if (pppppuStack_e0[1] == (undefined ****)0x0) goto LAB_10a01df44;
                pppppuStack_160 = (undefined *****)pppppuStack_e0[1][9];
                pppppuStack_428 = ppppppuVar61[5];
                pppppuStack_420 = ppppppuVar61[6];
                if (pppppuStack_420 != (undefined8 *****)0x0) {
                  pppppuVar1 = pppppuStack_420 + 1;
                  do {
                    cVar7 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
                    if (bVar18) {
                      *pppppuVar1 = (undefined8 ****)((long)*pppppuVar1 + 1);
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  do {
                    cVar7 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
                    if (bVar18) {
                      *pppppuVar1 = (undefined8 ****)((long)*pppppuVar1 + 1);
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                }
                uStack_220._0_2_ = SUB82(pppppuStack_428,0);
                uStack_220._2_2_ = (undefined2)((ulong)pppppuStack_428 >> 0x10);
                uStack_220._4_4_ = (float)((ulong)pppppuStack_428 >> 0x20);
                fStack_218 = SUB84(pppppuStack_420,0);
                fStack_214 = (float)((ulong)pppppuStack_420 >> 0x20);
                pppppppuVar68 = (undefined8 *******)&uStack_220;
                FUN_10a012f88(&pppppuStack_d0);
                func_0x00010a061c50(&uStack_220);
                func_0x00010a0616d0(&pppppuStack_428);
                (**(code **)(*plVar35 + 400))(&uStack_220);
                pppppuStack_100 = (undefined *****)CONCAT44(fStack_214,fStack_218);
                pppppuStack_108 =
                     (undefined *****)
                     CONCAT44(uStack_220._4_4_,CONCAT22(uStack_220._2_2_,(undefined2)uStack_220));
                ppppppppuStack_f8 = uStack_210;
                if ((uVar60 >> 5 & 1) != 0) {
                  pppppppuVar68 = &pppppppuStack_140;
                  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                            (&uStack_220);
                  if ((long)uStack_130 < 0) {
                    __ZdlPv();
                  }
                  pppppuStack_138 = (undefined *****)CONCAT44(fStack_214,fStack_218);
                  pppppppuStack_140 =
                       (undefined8 *******)
                       CONCAT44(uStack_220._4_4_,CONCAT22(uStack_220._2_2_,(undefined2)uStack_220));
                  uStack_130 = uStack_210;
                }
                if (bVar17) {
                  pppppppuVar68 = &pppppppuStack_140;
                  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                            (&uStack_220);
                  if ((long)uStack_130 < 0) {
                    __ZdlPv();
                  }
                  pppppuStack_138 = (undefined *****)CONCAT44(fStack_214,fStack_218);
                  pppppppuStack_140 =
                       (undefined8 *******)
                       CONCAT44(uStack_220._4_4_,CONCAT22(uStack_220._2_2_,(undefined2)uStack_220));
                  uStack_130 = uStack_210;
                }
              }
              else {
                (*(code *)(*ppppppuVar61)[5])();
                *(byte *)((long)pppppppuVar47 + 1) = 0;
                if (ppppppuVar61[1] == (undefined8 *****)0x0) {
LAB_10a01df44:
                  func_0x000105688514(&UNK_10f697757);
                  goto LAB_10a01e454;
                }
                pppppuStack_160 = (undefined *****)ppppppuVar61[1][9];
                uStack_158 = *(uint *)(lVar62 + 0xf0);
                uStack_150 = (uint)(iVar73 != 5);
                (**(code **)(*plVar35 + 0x198))(&uStack_220);
                pppppuStack_100 = (undefined *****)CONCAT44(fStack_214,fStack_218);
                pppppuStack_108 =
                     (undefined *****)
                     CONCAT44(uStack_220._4_4_,CONCAT22(uStack_220._2_2_,(undefined2)uStack_220));
                ppppppppuStack_f8 = uStack_210;
              }
              pppppuStack_148 =
                   (undefined *****)
                   ((ulong)uStack_158 +
                   ((ulong)uStack_154 +
                   (long)((long)pppppuStack_160 +
                         (((ulong)ppppppppuStack_170 & 0xffffffff) +
                         ((long)ppppppuStack_178 +
                         CONCAT44(uStack_188._4_4_,(float)uStack_188) * 0x3c1) * 0x1f) * 0x1f) *
                   0x1f) * 0x1f);
              if (ppppppuStack_438 < ppppppuStack_430) {
                ppppppuStack_438[1] = (undefined *****)CONCAT44(uStack_188._4_4_,(float)uStack_188);
                *ppppppuStack_438 = (undefined *****)ppppppppuStack_190;
                ppppppuStack_438[7] = (undefined *****)CONCAT44(uStack_154,uStack_158);
                ppppppuStack_438[6] = pppppuStack_160;
                ppppppuStack_438[9] = pppppuStack_148;
                ppppppuStack_438[8] = (undefined *****)CONCAT44(uStack_14c,uStack_150);
                ppppppuStack_438[3] = (undefined *****)ppppppuStack_178;
                ppppppuStack_438[2] = (undefined *****)CONCAT44(uStack_17c,fStack_180);
                ppppppuStack_438[5] = pppppuStack_168;
                ppppppuStack_438[4] = (undefined *****)ppppppppuStack_170;
                ppppppuStack_438[0xc] = (undefined *****)uStack_130;
                ppppppuStack_438[0xb] = pppppuStack_138;
                ppppppuStack_438[10] = (undefined *****)pppppppuStack_140;
                pppppuStack_138 = (undefined *****)0x0;
                uStack_130 = (undefined ********)0x0;
                ppppppuStack_438[0xf] = (undefined *****)ppppppppuStack_118;
                ppppppuStack_438[0xe] = pppppuStack_120;
                ppppppuStack_438[0xd] = pppppuStack_128;
                pppppuStack_120 = (undefined *****)0x0;
                ppppppppuStack_118 = (undefined ********)0x0;
                pppppuStack_128 = (undefined *****)0x0;
                ppppppuStack_438[0x13] = (undefined *****)ppppppppuStack_f8;
                ppppppuStack_438[0x12] = pppppuStack_100;
                ppppppuStack_438[0x15] = pppppuStack_e8;
                ppppppuStack_438[0x14] = pppppuStack_f0;
                ppppppuStack_438[0x11] = pppppuStack_108;
                ppppppuStack_438[0x10] = (undefined *****)uStack_110;
                ppppppuStack_438[0x17] = pppppuStack_d8;
                ppppppuStack_438[0x16] = pppppuStack_e0;
                pppppuStack_e0 = (undefined *****)0x0;
                pppppuStack_d8 = (undefined *****)0x0;
                ppppppuStack_438[0x19] = pppppuStack_c8;
                ppppppuStack_438[0x18] = pppppuStack_d0;
                pppppuStack_d0 = (undefined *****)0x0;
                pppppuStack_c8 = (undefined *****)0x0;
                ppppppuStack_438 = ppppppuStack_438 + 0x1a;
              }
              else {
                lVar62 = (long)ppppppuStack_438 - (long)ppppppppuStack_440;
                uVar46 = (lVar62 >> 4) * 0x4ec4ec4ec4ec4ec5 + 1;
                if (0x13b13b13b13b13b < uVar46) {
                  FUN_10a04372c();
                  goto LAB_10a01e454;
                }
                lVar70 = (long)ppppppuStack_430 - (long)ppppppppuStack_440 >> 4;
                uVar63 = lVar70 * -0x6276276276276276;
                if (uVar63 < uVar46 || uVar63 - uVar46 == 0) {
                  uVar63 = uVar46;
                }
                if (0x9d89d89d89d89c < (ulong)(lVar70 * 0x4ec4ec4ec4ec4ec5)) {
                  uVar63 = 0x13b13b13b13b13b;
                }
                ppppppppuStack_200 = (undefined ********)&ppppppppuStack_440;
                FUN_10a043740();
                puVar2 = (undefined8 *)(uVar63 + lVar62);
                puVar2[1] = CONCAT44(uStack_188._4_4_,(float)uStack_188);
                *puVar2 = ppppppppuStack_190;
                puVar2[7] = CONCAT44(uStack_154,uStack_158);
                puVar2[6] = pppppuStack_160;
                puVar2[9] = pppppuStack_148;
                puVar2[8] = CONCAT44(uStack_14c,uStack_150);
                puVar2[3] = ppppppuStack_178;
                puVar2[2] = CONCAT44(uStack_17c,fStack_180);
                puVar2[5] = pppppuStack_168;
                puVar2[4] = ppppppppuStack_170;
                puVar2[0xc] = uStack_130;
                puVar2[0xb] = pppppuStack_138;
                puVar2[10] = pppppppuStack_140;
                pppppuStack_138 = (undefined *****)0x0;
                uStack_130 = (undefined ********)0x0;
                puVar2[0xf] = ppppppppuStack_118;
                puVar2[0xe] = pppppuStack_120;
                puVar2[0xd] = pppppuStack_128;
                pppppuStack_120 = (undefined *****)0x0;
                ppppppppuStack_118 = (undefined ********)0x0;
                pppppuStack_128 = (undefined *****)0x0;
                puVar2[0x13] = ppppppppuStack_f8;
                puVar2[0x12] = pppppuStack_100;
                puVar2[0x15] = pppppuStack_e8;
                puVar2[0x14] = pppppuStack_f0;
                puVar2[0x11] = pppppuStack_108;
                puVar2[0x10] = uStack_110;
                puVar2[0x17] = pppppuStack_d8;
                puVar2[0x16] = pppppuStack_e0;
                pppppuStack_e0 = (undefined *****)0x0;
                pppppuStack_d8 = (undefined *****)0x0;
                puVar2[0x19] = pppppuStack_c8;
                puVar2[0x18] = pppppuStack_d0;
                pppppuStack_d0 = (undefined *****)0x0;
                pppppuStack_c8 = (undefined *****)0x0;
                ppppppppuVar55 =
                     (undefined ********)
                     ((long)puVar2 + ((long)ppppppppuStack_440 - (long)ppppppuStack_438));
                func_0x00010a043788(ppppppppuStack_440,ppppppuStack_438,ppppppppuVar55);
                uStack_210 = ppppppppuStack_440;
                ppppppuStack_208 = ppppppuStack_430;
                fStack_218 = SUB84(ppppppppuStack_440,0);
                fStack_214 = (float)((ulong)ppppppppuStack_440 >> 0x20);
                uStack_220._0_2_ = SUB82(ppppppppuStack_440,0);
                uStack_220._2_2_ = (undefined2)((ulong)ppppppppuStack_440 >> 0x10);
                ppppppppuStack_440 = ppppppppuVar55;
                ppppppuStack_438 = (undefined ******)(puVar2 + 0x1a);
                ppppppuStack_430 = (undefined ******)(uVar63 + (long)pppppppuVar68 * 0xd0);
                uStack_220._4_4_ = fStack_214;
                func_0x00010a04389c();
                ppppppuStack_438 = (undefined ******)(puVar2 + 0x1a);
              }
            }
            else {
              uVar54 = 0xffffffff;
LAB_10a01aa18:
              pppppppuVar67 = pppppppuVar47 + 9;
              FUN_10a063728(pppppppuVar67,pppppuStack_f0,pppppuStack_e8,&pppppuStack_f0);
              *(undefined4 *)(pppppppuVar67 + 4) = uVar54;
            }
            if (pppppuStack_c8 != (undefined *****)0x0) {
              pppppuVar5 = pppppuStack_c8 + 1;
              do {
                ppppuVar52 = *pppppuVar5;
                cVar7 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(pppppuVar5,0x10);
                if (bVar17) {
                  *pppppuVar5 = (undefined ****)((long)ppppuVar52 + -1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (ppppuVar52 == (undefined ****)0x0) {
                (*(code *)(*pppppuStack_c8)[2])(pppppuStack_c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
            }
            if (pppppuStack_d8 != (undefined *****)0x0) {
              pppppuVar5 = pppppuStack_d8 + 1;
              do {
                ppppuVar52 = *pppppuVar5;
                cVar7 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(pppppuVar5,0x10);
                if (bVar17) {
                  *pppppuVar5 = (undefined ****)((long)ppppuVar52 + -1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (ppppuVar52 == (undefined ****)0x0) {
                (*(code *)(*pppppuStack_d8)[2])(pppppuStack_d8);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
            }
            if ((long)ppppppppuStack_118 < 0) {
              __ZdlPv();
            }
            if ((long)uStack_130 < 0) {
              __ZdlPv();
            }
            lVar62 = *(long *)(param_3 + 0x208);
            lVar70 = *(long *)(param_3 + 0x200);
          }
          iVar73 = (int)ppppppppuVar21;
          ppppppppuVar55 = (undefined ********)0x1b8;
          uVar56 = uVar56 + 1;
          uVar46 = (lVar62 - lVar70 >> 3) * 0x6fb586fb586fb587;
        } while (uVar56 <= uVar46 && uVar46 - uVar56 != 0);
      }
      ppuVar29 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      puVar37 = *ppuVar29;
      if (((puVar37 != (undefined *)0x0) && (puVar37[0xc0] == '\x01')) &&
         (*(long *)(puVar37 + 0x80) != 0)) {
        FUN_10a08dbac(puVar37 + 0x18);
      }
      pppppppuVar67 = pppppppuVar47;
      FUN_10a0107c4(pppppppuVar47,&ppppppppuStack_480,param_2,&ppppppppuStack_440);
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (*(byte *)pppppppuVar47 == 1) {
        if ((int)((ulong)((long)pppppppuVar47[0xf] - (long)pppppppuVar47[0xe]) >> 5) * -0x55555555
            == 0) {
          *(undefined4 *)puVar34 = 2;
          func_0x000107c2c4d8(puVar34 + 1,&UNK_10f63169d,0x30);
        }
        else {
          for (ppppppuVar22 = pppppppuVar47[0x16]; ppppppuVar22 != (undefined ******)0x0;
              ppppppuVar22 = (undefined ******)*ppppppuVar22) {
            pppppuVar5 = ppppppuVar22[4];
            if (pppppuVar5 != (undefined *****)0x0) {
              pppppuVar6 = pppppuVar5 + 1;
              do {
                cVar7 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(pppppuVar6,0x10);
                if (bVar17) {
                  *pppppuVar6 = (undefined ****)((long)*pppppuVar6 + 1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              do {
                ppppuVar52 = *pppppuVar6;
                cVar7 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(pppppuVar6,0x10);
                if (bVar17) {
                  *pppppuVar6 = (undefined ****)((long)ppppuVar52 + -1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (ppppuVar52 == (undefined ****)0x0) {
                (*(code *)(*pppppuVar5)[2])(pppppuVar5);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar5);
              }
            }
          }
          FUN_109febc44(&ppppppppuStack_190);
          pfVar30 = &fStack_180;
          FUN_10a002568(pfVar30,&UNK_10f6316ce,0x18);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
          FUN_10a002568();
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
          FUN_10a002568();
          lVar62 = *(long *)pfVar30;
          lVar70 = *(long *)(lVar62 + -0x18);
          *(uint *)((long)pfVar30 + lVar70 + 8) =
               *(uint *)((long)pfVar30 + lVar70 + 8) & 0xfffffeff | 4;
          *(undefined8 *)((long)pfVar30 + *(long *)(lVar62 + -0x18) + 0x10) = 2;
          if (pppppppuVar67 == (undefined *******)0x0) {
            __ZNSt3__16chrono12steady_clock3nowEv();
          }
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(pfVar30);
          FUN_10a002568();
          *(undefined4 *)puVar34 = 4;
          func_0x00010a002480(&uStack_220,&ppppppuStack_178,&ppppppppuStack_300);
          if (*(char *)((long)puVar34 + 0x1f) < '\0') {
            __ZdlPv(puVar34[1]);
          }
          uVar23 = CONCAT44(uStack_220._4_4_,CONCAT22(uStack_220._2_2_,(undefined2)uStack_220));
          puVar34[2] = CONCAT44(fStack_214,fStack_218);
          puVar34[1] = uVar23;
          puVar34[3] = uStack_210;
          ppppppppuVar55 = (undefined ********)&ppppppppuStack_190;
          ppppppppuStack_190 = (undefined ********)&PTR_SUB_1108a5a38;
          fStack_180 = 5.457065e-29;
          uStack_17c = 1.4013e-45;
          uStack_110 = &PTR_DAT_1108a5a88;
          ppppppuStack_178 = (undefined ******)&PTR_DAT_11088d7b0;
          if ((long)pppppuStack_128 < 0) {
            __ZdlPv(pppppuStack_138);
          }
          ppppppuStack_178 =
               (undefined ******)
               (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
          __ZNSt3__16localeD1Ev(&ppppppppuStack_170);
          __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev
                    (&ppppppppuStack_190,&PTR_PTR_1108a5aa0);
          __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(&uStack_110);
        }
      }
      func_0x00010a043a30(&ppppppppuStack_440);
      func_0x00010a0634b4(&ppppppppuStack_2b0);
      if (iVar73 != 0) {
        if (aiStack_478[0] < 2) {
          aiStack_478[0] = 1;
        }
        aiStack_478[0] = aiStack_478[0] + -1;
      }
      pppppppuVar47 = *param_1;
      if (pppppppuVar47 == (undefined *******)0x0) goto LAB_10a01dd64;
      goto LAB_10a01b89c;
    }
  }
  puVar34 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  *puVar34 = &PTR_DAT_110b9d018;
  *(int *)(puVar34 + 1) = iVar20;
  ___cxa_throw();
LAB_10a01e454:
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x10a01e458);
  (*pcVar16)();
LAB_10a01a2f8:
  ppppuVar52 = (undefined ****)*ppppuVar52;
  if (ppppuVar52 == (undefined ****)0x0) goto LAB_10a01a580;
  goto LAB_10a01a2b0;
}



/* Entry: 10a01e6ec; end: 10a01e83f;  */

long * FUN_10a01e6ec(long *param_1,undefined8 *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 ****ppppuVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *extraout_x8;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined2 uStack_e2;
  ulong uStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  undefined8 ***pppuStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  
  lVar8 = *param_1;
  if ((undefined8 *)(param_1[2] - lVar8 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      func_0x00010a044abc();
      puVar13 = (undefined8 *)param_1[1];
      if (puVar13 < (undefined8 *)param_1[2]) {
        uVar15 = *param_2;
        puVar13[1] = param_2[1];
        *puVar13 = uVar15;
        puVar13 = puVar13 + 2;
        plVar3 = param_1;
      }
      else {
        lVar8 = (long)puVar13 - *param_1;
        uVar4 = (lVar8 >> 4) + 1;
        if (uVar4 >> 0x3c != 0) {
          func_0x00010a044abc();
          plStack_d0 = (long *)0x0;
          pppuStack_c8 = (undefined8 ****)0x0;
          plVar6 = (long *)0x0;
          if ((int)param_2 != 0) {
            puVar10 = (ulong *)*param_1;
            uStack_b8 = puVar10[1];
            uStack_c0 = *puVar10;
            puVar7 = param_3 + 1;
            uVar12 = *param_3 & *puVar10;
            uVar4 = (ulong)&uStack_c0 | 8;
            FUN_10a3c8d60();
            if (uVar12 == 0) {
              plVar6 = (long *)0x0;
            }
            else {
              uVar9 = 0;
              uStack_e0 = uVar12;
              uStack_d8 = uVar4;
              do {
                if (uVar9 == 0x40) {
                  plVar6 = (long *)&UNK_10f633850;
                  FUN_10a00946c();
                  fVar16 = *(float *)(plVar6 + 1) - *(float *)((long)plVar6 + 0x14);
                  fVar24 = *(float *)(puVar7 + 1) - *(float *)((long)puVar7 + 0x14);
                  if (fVar16 <= fVar24) {
                    fVar24 = fVar16;
                  }
                  fVar14 = *(float *)(plVar6 + 1) + *(float *)((long)plVar6 + 0x14);
                  fVar16 = *(float *)(puVar7 + 1) + *(float *)((long)puVar7 + 0x14);
                  if (fVar16 <= fVar14) {
                    fVar16 = fVar14;
                  }
                  fVar24 = (fVar24 + fVar16) * 0.5;
                  fVar14 = (float)*plVar6;
                  fVar19 = (float)*(undefined8 *)((long)plVar6 + 0xc);
                  fVar22 = fVar14 - fVar19;
                  fVar17 = (float)((ulong)*plVar6 >> 0x20);
                  fVar20 = (float)((ulong)*(undefined8 *)((long)plVar6 + 0xc) >> 0x20);
                  fVar23 = fVar17 - fVar20;
                  uVar12 = CONCAT44(fVar23,fVar22);
                  fVar18 = (float)*puVar7;
                  fVar25 = (float)*(undefined8 *)((long)puVar7 + 0xc);
                  fVar27 = fVar18 - fVar25;
                  fVar21 = (float)(*puVar7 >> 0x20);
                  fVar26 = (float)((ulong)*(undefined8 *)((long)puVar7 + 0xc) >> 0x20);
                  fVar28 = fVar21 - fVar26;
                  uVar12 = uVar12 ^ (uVar12 ^ CONCAT44(fVar28,fVar27)) &
                                    CONCAT44(-(uint)(fVar28 < fVar23),-(uint)(fVar27 < fVar22));
                  fVar14 = fVar14 + fVar19;
                  fVar17 = fVar17 + fVar20;
                  uVar4 = CONCAT44(fVar17,fVar14);
                  fVar18 = fVar18 + fVar25;
                  fVar21 = fVar21 + fVar26;
                  uVar4 = uVar4 ^ (uVar4 ^ CONCAT44(fVar21,fVar18)) &
                                  CONCAT44(-(uint)(fVar17 < fVar21),-(uint)(fVar14 < fVar18));
                  fVar14 = (float)uVar4;
                  fVar17 = (float)(uVar4 >> 0x20);
                  fVar19 = ((float)uVar12 + fVar14) * 0.5;
                  fVar18 = ((float)(uVar12 >> 0x20) + fVar17) * 0.5;
                  *extraout_x8 = CONCAT44(fVar18,fVar19);
                  *(float *)(extraout_x8 + 1) = fVar24;
                  *(ulong *)((long)extraout_x8 + 0xc) = CONCAT44(fVar17 - fVar18,fVar14 - fVar19);
                  *(float *)((long)extraout_x8 + 0x14) = fVar16 - fVar24;
                  return plVar6;
                }
                uStack_c0 = 1L << (uVar9 & 0x3f);
                uStack_b8 = 0;
                uVar4 = uStack_e0 & uStack_c0;
                puVar10 = &uStack_b8;
                puVar7 = &uStack_d8;
                FUN_10a3c8d60();
                if (uVar4 != 0 || ((ulong)puVar10 & 0xffff) != 0) {
                  lVar8 = param_1[1];
                  uStack_e2 = (undefined2)uVar9;
                  FUN_10a0644a0(lVar8,uVar9,&uStack_e2);
                  uStack_c0 = (ulong)*(ushort *)(lVar8 + 0x1c);
                  uStack_b8 = 0;
                  plStack_d0 = (long *)((ulong)plStack_d0 | uStack_c0);
                  ppppuVar5 = &pppuStack_c8;
                  puVar7 = &uStack_b8;
                  FUN_10a3c8ddc();
                  pppuStack_c8 = ppppuVar5;
                }
                uVar9 = uVar9 + 1;
                bVar2 = 1 < uVar12;
                uVar12 = uVar12 >> 1;
                plVar6 = plStack_d0;
              } while (bVar2);
            }
          }
          return plVar6;
        }
        uVar9 = param_1[2] - *param_1;
        uVar12 = (long)uVar9 >> 3;
        if (uVar12 <= uVar4) {
          uVar12 = uVar4;
        }
        if (0x7fffffffffffffef < uVar9) {
          uVar12 = 0xfffffffffffffff;
        }
        plVar6 = param_1;
        FUN_10a044ad0();
        puVar1 = (undefined8 *)((long)plVar6 + lVar8);
        uVar15 = *param_2;
        puVar1[1] = param_2[1];
        *puVar1 = uVar15;
        puVar13 = puVar1 + 2;
        lVar8 = (long)puVar1 - (param_1[1] - *param_1);
        _memcpy(lVar8);
        plVar3 = (long *)*param_1;
        *param_1 = lVar8;
        param_1[1] = (long)puVar13;
        param_1[2] = (long)(plVar6 + uVar12 * 2);
        if (plVar3 != (long *)0x0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar13;
      return plVar3;
    }
    lVar11 = param_1[1];
    plVar6 = param_1;
    FUN_10a044ad0();
    lVar8 = (long)plVar6 + (lVar11 - lVar8);
    lVar11 = lVar8 - (param_1[1] - *param_1);
    _memcpy(lVar11);
    plVar3 = (long *)*param_1;
    *param_1 = lVar11;
    param_1[1] = lVar8;
    param_1[2] = (long)(plVar6 + (long)param_2 * 2);
    param_1 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar3;
    }
  }
  return param_1;
}



/* Entry: 10a01e840; end: 10a01e957;  */

undefined8 * FUN_10a01e840(long *param_1,int param_2,ulong *param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *extraout_x8;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined2 uStack_82;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 *puStack_70;
  undefined8 ***pppuStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  puStack_70 = (undefined8 *)0x0;
  pppuStack_68 = (undefined8 ****)0x0;
  puVar5 = (undefined8 *)0x0;
  if (param_2 != 0) {
    puVar7 = (ulong *)*param_1;
    uStack_58 = puVar7[1];
    uStack_60 = *puVar7;
    puVar6 = param_3 + 1;
    uVar9 = *param_3 & *puVar7;
    uVar2 = (ulong)&uStack_60 | 8;
    FUN_10a3c8d60();
    if (uVar9 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      uVar8 = 0;
      uStack_80 = uVar9;
      uStack_78 = uVar2;
      do {
        if (uVar8 == 0x40) {
          puVar5 = (undefined8 *)&UNK_10f633850;
          FUN_10a00946c();
          fVar11 = *(float *)(puVar5 + 1) - *(float *)((long)puVar5 + 0x14);
          fVar19 = *(float *)(puVar6 + 1) - *(float *)((long)puVar6 + 0x14);
          if (fVar11 <= fVar19) {
            fVar19 = fVar11;
          }
          fVar10 = *(float *)(puVar5 + 1) + *(float *)((long)puVar5 + 0x14);
          fVar11 = *(float *)(puVar6 + 1) + *(float *)((long)puVar6 + 0x14);
          if (fVar11 <= fVar10) {
            fVar11 = fVar10;
          }
          fVar19 = (fVar19 + fVar11) * 0.5;
          fVar10 = (float)*puVar5;
          fVar14 = (float)*(undefined8 *)((long)puVar5 + 0xc);
          fVar17 = fVar10 - fVar14;
          fVar12 = (float)((ulong)*puVar5 >> 0x20);
          fVar15 = (float)((ulong)*(undefined8 *)((long)puVar5 + 0xc) >> 0x20);
          fVar18 = fVar12 - fVar15;
          uVar9 = CONCAT44(fVar18,fVar17);
          fVar13 = (float)*puVar6;
          fVar20 = (float)*(undefined8 *)((long)puVar6 + 0xc);
          fVar22 = fVar13 - fVar20;
          fVar16 = (float)(*puVar6 >> 0x20);
          fVar21 = (float)((ulong)*(undefined8 *)((long)puVar6 + 0xc) >> 0x20);
          fVar23 = fVar16 - fVar21;
          uVar9 = uVar9 ^ (uVar9 ^ CONCAT44(fVar23,fVar22)) &
                          CONCAT44(-(uint)(fVar23 < fVar18),-(uint)(fVar22 < fVar17));
          fVar10 = fVar10 + fVar14;
          fVar12 = fVar12 + fVar15;
          uVar2 = CONCAT44(fVar12,fVar10);
          fVar13 = fVar13 + fVar20;
          fVar16 = fVar16 + fVar21;
          uVar2 = uVar2 ^ (uVar2 ^ CONCAT44(fVar16,fVar13)) &
                          CONCAT44(-(uint)(fVar12 < fVar16),-(uint)(fVar10 < fVar13));
          fVar10 = (float)uVar2;
          fVar12 = (float)(uVar2 >> 0x20);
          fVar14 = ((float)uVar9 + fVar10) * 0.5;
          fVar13 = ((float)(uVar9 >> 0x20) + fVar12) * 0.5;
          *extraout_x8 = CONCAT44(fVar13,fVar14);
          *(float *)(extraout_x8 + 1) = fVar19;
          *(ulong *)((long)extraout_x8 + 0xc) = CONCAT44(fVar12 - fVar13,fVar10 - fVar14);
          *(float *)((long)extraout_x8 + 0x14) = fVar11 - fVar19;
          return puVar5;
        }
        uStack_60 = 1L << (uVar8 & 0x3f);
        uStack_58 = 0;
        uVar2 = uStack_80 & uStack_60;
        puVar7 = &uStack_58;
        puVar6 = &uStack_78;
        FUN_10a3c8d60();
        if (uVar2 != 0 || ((ulong)puVar7 & 0xffff) != 0) {
          lVar3 = param_1[1];
          uStack_82 = (undefined2)uVar8;
          FUN_10a0644a0(lVar3,uVar8,&uStack_82);
          uStack_60 = (ulong)*(ushort *)(lVar3 + 0x1c);
          uStack_58 = 0;
          puStack_70 = (undefined8 *)((ulong)puStack_70 | uStack_60);
          ppppuVar4 = &pppuStack_68;
          puVar6 = &uStack_58;
          FUN_10a3c8ddc();
          pppuStack_68 = ppppuVar4;
        }
        uVar8 = uVar8 + 1;
        bVar1 = 1 < uVar9;
        uVar9 = uVar9 >> 1;
        puVar5 = puStack_70;
      } while (bVar1);
    }
  }
  return puVar5;
}



/* Entry: 10a01e958; end: 10a01eacb;  */

void FUN_10a01e958(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar4;
  ulong uVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  ulong uVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar2 = *(float *)(param_2 + 1) - *(float *)((long)param_2 + 0x14);
  fVar12 = *(float *)(param_3 + 1) - *(float *)((long)param_3 + 0x14);
  if (fVar2 <= fVar12) {
    fVar12 = fVar2;
  }
  fVar1 = *(float *)(param_2 + 1) + *(float *)((long)param_2 + 0x14);
  fVar2 = *(float *)(param_3 + 1) + *(float *)((long)param_3 + 0x14);
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar12 = (fVar12 + fVar2) * 0.5;
  fVar1 = (float)*param_2;
  fVar6 = (float)*(undefined8 *)((long)param_2 + 0xc);
  fVar9 = fVar1 - fVar6;
  fVar4 = (float)((ulong)*param_2 >> 0x20);
  fVar7 = (float)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
  fVar11 = fVar4 - fVar7;
  uVar10 = CONCAT44(fVar11,fVar9);
  fVar5 = (float)*param_3;
  fVar13 = (float)*(undefined8 *)((long)param_3 + 0xc);
  fVar15 = fVar5 - fVar13;
  fVar8 = (float)((ulong)*param_3 >> 0x20);
  fVar14 = (float)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
  fVar16 = fVar8 - fVar14;
  uVar10 = uVar10 ^ (uVar10 ^ CONCAT44(fVar16,fVar15)) &
                    CONCAT44(-(uint)(fVar16 < fVar11),-(uint)(fVar15 < fVar9));
  fVar1 = fVar1 + fVar6;
  fVar4 = fVar4 + fVar7;
  uVar3 = CONCAT44(fVar4,fVar1);
  fVar5 = fVar5 + fVar13;
  fVar8 = fVar8 + fVar14;
  uVar3 = uVar3 ^ (uVar3 ^ CONCAT44(fVar8,fVar5)) &
                  CONCAT44(-(uint)(fVar4 < fVar8),-(uint)(fVar1 < fVar5));
  fVar1 = (float)uVar3;
  fVar4 = (float)(uVar3 >> 0x20);
  fVar6 = ((float)uVar10 + fVar1) * 0.5;
  fVar5 = ((float)(uVar10 >> 0x20) + fVar4) * 0.5;
  *param_1 = CONCAT44(fVar5,fVar6);
  *(float *)(param_1 + 1) = fVar12;
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(fVar4 - fVar5,fVar1 - fVar6);
  *(float *)((long)param_1 + 0x14) = fVar2 - fVar12;
  return;
}



/* Entry: 10a01eacc; end: 10a01ebbb;  */

long FUN_10a01eacc(long param_1,ulong param_2)

{
  long lVar1;
  short sVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  param_2 = param_2 & 0xffffffff;
  lVar5 = *(long *)(param_1 + 0x608);
  if (param_2 < (ulong)(*(long *)(param_1 + 0x610) - lVar5 >> 1)) {
    sVar2 = *(short *)(lVar5 + param_2 * 2);
    uVar7 = (ulong)sVar2;
    if (-1 < (long)uVar7) {
      lVar1 = *(long *)(param_1 + 0x1e0);
      uVar6 = (*(long *)(param_1 + 0x1e8) - lVar1 >> 3) * 0x51b3bea3677d46cf;
      if (uVar6 < uVar7 || uVar6 - uVar7 == 0) goto LAB_10a01ebb8;
      uVar6 = *(ulong *)(param_1 + 0x638);
      uVar3 = (uint)uVar6 | 0xffff8000;
      uVar7 = (ulong)uVar3;
      *(short *)(lVar5 + param_2 * 2) = (short)uVar3;
      if (uVar6 < (ulong)((*(long *)(param_1 + 0x628) - *(long *)(param_1 + 0x620) >> 3) *
                         0x51b3bea3677d46cf)) {
        func_0x00010a044b04(*(long *)(param_1 + 0x620) + uVar6 * 0x178);
      }
      else {
        FUN_10a044c3c(param_1 + 0x620,lVar1 + (long)(int)sVar2 * 0x178);
      }
      *(long *)(param_1 + 0x638) = *(long *)(param_1 + 0x638) + 1;
    }
    uVar7 = uVar7 & 0x7fff;
    uVar6 = (*(long *)(param_1 + 0x628) - *(long *)(param_1 + 0x620) >> 3) * 0x51b3bea3677d46cf;
    if (uVar7 <= uVar6 && uVar6 - uVar7 != 0) {
      return *(long *)(param_1 + 0x620) + uVar7 * 0x178;
    }
  }
LAB_10a01ebb8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a01ebbc);
  (*pcVar4)();
}



/* Entry: 10a01ebbc; end: 10a01efe7;  */

void FUN_10a01ebbc(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar9 = *(ulong *)(param_1 + 0xb0);
  if (uVar9 < *(ulong *)(param_1 + 0xa0)) {
    uVar4 = (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555;
    uVar6 = uVar9;
    if (uVar9 <= uVar4) {
      uVar6 = uVar4;
    }
    piVar5 = (int *)(*(long *)(param_1 + 0x88) + uVar9 * 0x18 + 0x10);
    do {
      if (uVar6 == uVar9) goto LAB_10a01edd0;
      if (*(long *)(piVar5 + -4) == *(long *)(param_2 + 0x18)) {
        if ((short)piVar5[-2] != 0x26) {
          return;
        }
        if (uVar9 < *(ulong *)(param_1 + 0xa8)) {
          if ((*piVar5 == 0x10) &&
             (plVar10 = (long *)(*(long *)(param_1 + 0xb8) + (ulong)(uint)piVar5[-1]),
             *plVar10 == *param_3 && plVar10[1] == param_3[1])) {
            return;
          }
          FUN_10a048bc4(param_1);
          uVar9 = *(long *)(param_1 + 0xb0) + uVar9;
        }
        plVar10 = (long *)(param_1 + 0xb8);
        lVar3 = *plVar10;
        uVar1 = *(uint *)(param_1 + 0xd0);
        uVar6 = (ulong)uVar1 + 0x10;
        uVar4 = *(long *)(param_1 + 0xc0) - lVar3;
        lVar7 = uVar6 - uVar4;
        if (uVar4 <= uVar6 && lVar7 != 0) {
          func_0x0001092bf294(plVar10,lVar7);
          lVar3 = *plVar10;
        }
        lVar7 = *param_3;
        plVar10 = (long *)(lVar3 + (ulong)uVar1);
        plVar10[1] = param_3[1];
        *plVar10 = lVar7;
        *(int *)(param_1 + 0xd0) = (int)uVar6;
        uVar6 = (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555;
        if (uVar9 <= uVar6 && uVar6 - uVar9 != 0) {
          lVar7 = *(long *)(param_1 + 0x88) + uVar9 * 0x18;
          *(uint *)(lVar7 + 0xc) = uVar1;
          *(undefined4 *)(lVar7 + 0x10) = 0x10;
          return;
        }
        goto LAB_10a01edd0;
      }
      uVar9 = uVar9 + 1;
      piVar5 = piVar5 + 6;
    } while (*(ulong *)(param_1 + 0xa0) != uVar9);
  }
  plVar10 = (long *)(param_1 + 0xb8);
  lVar3 = *plVar10;
  uVar1 = *(uint *)(param_1 + 0xd0);
  uVar9 = (ulong)uVar1 + 0x10;
  uVar6 = *(long *)(param_1 + 0xc0) - lVar3;
  lVar7 = uVar9 - uVar6;
  if (uVar6 <= uVar9 && lVar7 != 0) {
    func_0x0001092bf294(plVar10,lVar7);
    lVar3 = *plVar10;
  }
  lVar7 = *param_3;
  plVar10 = (long *)(lVar3 + (ulong)uVar1);
  plVar10[1] = param_3[1];
  *plVar10 = lVar7;
  lVar7 = *(long *)(param_1 + 0x88);
  *(int *)(param_1 + 0xd0) = (int)uVar9;
  uVar9 = *(ulong *)(param_1 + 0xa0);
  if (uVar9 < (ulong)((*(long *)(param_1 + 0x90) - lVar7 >> 3) * -0x5555555555555555)) {
    puVar8 = (undefined8 *)(lVar7 + uVar9 * 0x18);
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10a063efc((long *)(param_1 + 0x88),&uStack_58);
    if (*(long *)(param_1 + 0x88) == *(long *)(param_1 + 0x90)) {
LAB_10a01edd0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a01edd4);
      (*pcVar2)();
    }
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x90) + -0x18);
    uVar9 = *(ulong *)(param_1 + 0xa0);
  }
  *puVar8 = *(undefined8 *)(param_2 + 0x18);
  *(undefined2 *)(puVar8 + 1) = 0x26;
  *(uint *)((long)puVar8 + 0xc) = uVar1;
  *(undefined4 *)(puVar8 + 2) = 0x10;
  *(ulong *)(param_1 + 0xa0) = uVar9 + 1;
  return;
}



/* Entry: 10a01efe8; end: 10a01f13f;  */

long FUN_10a01efe8(ulong param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined1 uStack_31;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  if (param_2 < 0x141) {
    if ((bRam00000001137e9310 & 1) == 0) {
      iVar1 = 0x137e9310;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        ___cxa_atexit(0x10a047a90,0x1132ff740,0x100000000);
        ___cxa_guard_release(0x1137e9310);
      }
    }
    if (lRam00000001137e9318 != -1) {
      puStack_28 = &uStack_31;
      ppuStack_30 = &puStack_28;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137e9318,&ppuStack_30,0x10a047ad0);
    }
    lVar2 = 0x1132ff740;
  }
  else {
    if ((bRam00000001137e9320 & 1) == 0) {
      iVar1 = 0x137e9320;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        ___cxa_atexit(0x10a047a90,0x1132ff8a0,0x100000000);
        ___cxa_guard_release(0x1137e9320);
      }
    }
    if (lRam00000001137e9328 != -1) {
      puStack_28 = &uStack_31;
      ppuStack_30 = &puStack_28;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137e9328,&ppuStack_30,0x10a047d88);
    }
    lVar2 = 0x1132ff8a0;
  }
  return lVar2 + (param_1 & 0xffffffff) * 0x20;
}



/* Entry: 10a01f140; end: 10a01f1b3;  */

long FUN_10a01f140(long param_1,uint param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 == 0xffffffff) {
    return 0x113835438;
  }
  uVar3 = (*(long *)(param_1 + 0x5e0) - *(long *)(param_1 + 0x5d8) >> 4) * -0x1111111111111111;
  if (param_2 <= uVar3 && uVar3 - param_2 != 0) {
    uVar2 = (ulong)*(ushort *)(*(long *)(param_1 + 0x5d8) + (ulong)param_2 * 0xf0 + 2);
    uVar3 = (*(long *)(param_1 + 0x5f8) - *(long *)(param_1 + 0x5f0) >> 3) * -0x1111111111111111;
    if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
      return *(long *)(param_1 + 0x5f0) + uVar2 * 0x78;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a01f1b4);
  (*pcVar1)();
}



/* Entry: 10a01f1b4; end: 10a01f5fb;  */

void FUN_10a01f1b4(long param_1,long param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar9 = *(ulong *)(param_1 + 0xb0);
  if (uVar9 < *(ulong *)(param_1 + 0xa0)) {
    uVar4 = (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555;
    uVar6 = uVar9;
    if (uVar9 <= uVar4) {
      uVar6 = uVar4;
    }
    piVar5 = (int *)(*(long *)(param_1 + 0x88) + uVar9 * 0x18 + 0x10);
    do {
      if (uVar6 == uVar9) goto LAB_10a01f3c0;
      if (*(long *)(piVar5 + -4) == *(long *)(param_2 + 0x18)) {
        if ((short)piVar5[-2] != 6) {
          return;
        }
        if (uVar9 < *(ulong *)(param_1 + 0xa8)) {
          if ((*piVar5 == 4) &&
             (*(int *)(*(long *)(param_1 + 0xb8) + (ulong)(uint)piVar5[-1]) == *param_3)) {
            return;
          }
          FUN_10a048bc4(param_1);
          uVar9 = *(long *)(param_1 + 0xb0) + uVar9;
        }
        plVar10 = (long *)(param_1 + 0xb8);
        lVar3 = *plVar10;
        uVar1 = *(uint *)(param_1 + 0xd0);
        uVar6 = (ulong)uVar1 + 4;
        uVar4 = *(long *)(param_1 + 0xc0) - lVar3;
        lVar7 = uVar6 - uVar4;
        if (uVar4 <= uVar6 && lVar7 != 0) {
          func_0x0001092bf294(plVar10,lVar7);
          lVar3 = *plVar10;
        }
        *(int *)(lVar3 + (ulong)uVar1) = *param_3;
        *(int *)(param_1 + 0xd0) = (int)uVar6;
        uVar6 = (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555;
        if (uVar9 <= uVar6 && uVar6 - uVar9 != 0) {
          lVar7 = *(long *)(param_1 + 0x88) + uVar9 * 0x18;
          *(uint *)(lVar7 + 0xc) = uVar1;
          *(undefined4 *)(lVar7 + 0x10) = 4;
          return;
        }
        goto LAB_10a01f3c0;
      }
      uVar9 = uVar9 + 1;
      piVar5 = piVar5 + 6;
    } while (*(ulong *)(param_1 + 0xa0) != uVar9);
  }
  plVar10 = (long *)(param_1 + 0xb8);
  lVar3 = *plVar10;
  uVar1 = *(uint *)(param_1 + 0xd0);
  uVar9 = (ulong)uVar1 + 4;
  uVar6 = *(long *)(param_1 + 0xc0) - lVar3;
  lVar7 = uVar9 - uVar6;
  if (uVar6 <= uVar9 && lVar7 != 0) {
    func_0x0001092bf294(plVar10,lVar7);
    lVar3 = *plVar10;
  }
  *(int *)(lVar3 + (ulong)uVar1) = *param_3;
  lVar7 = *(long *)(param_1 + 0x88);
  *(int *)(param_1 + 0xd0) = (int)uVar9;
  uVar9 = *(ulong *)(param_1 + 0xa0);
  if (uVar9 < (ulong)((*(long *)(param_1 + 0x90) - lVar7 >> 3) * -0x5555555555555555)) {
    puVar8 = (undefined8 *)(lVar7 + uVar9 * 0x18);
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10a063efc((long *)(param_1 + 0x88),&uStack_58);
    if (*(long *)(param_1 + 0x88) == *(long *)(param_1 + 0x90)) {
LAB_10a01f3c0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a01f3c4);
      (*pcVar2)();
    }
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x90) + -0x18);
    uVar9 = *(ulong *)(param_1 + 0xa0);
  }
  *puVar8 = *(undefined8 *)(param_2 + 0x18);
  *(undefined2 *)(puVar8 + 1) = 6;
  *(uint *)((long)puVar8 + 0xc) = uVar1;
  *(undefined4 *)(puVar8 + 2) = 4;
  *(ulong *)(param_1 + 0xa0) = uVar9 + 1;
  return;
}



/* Entry: 10a01f5fc; end: 10a01f6d3;  */

ulong * FUN_10a01f5fc(ulong *param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *in_stack_ffffffffffffffc8;
  long in_stack_ffffffffffffffd8;
  
  iVar5 = (int)param_2;
  if (iVar5 == 4) {
    puVar6 = (ulong *)&UNK_10f633ac8;
  }
  else if (iVar5 == 2) {
    puVar6 = (ulong *)&UNK_10f63273e;
  }
  else {
    if (iVar5 != 1) {
      __ZNSt3__19to_stringEi(&stack0xffffffffffffffc8,param_2);
      puVar6 = (ulong *)&stack0xffffffffffffffc8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar6,0,&UNK_10f633adc,0x20);
      uVar8 = puVar6[1];
      uVar7 = *puVar6;
      param_1[2] = puVar6[2];
      param_1[1] = uVar8;
      *param_1 = uVar7;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      if (in_stack_ffffffffffffffd8 < 0) {
        __ZdlPv(in_stack_ffffffffffffffc8);
        puVar6 = in_stack_ffffffffffffffc8;
      }
      return puVar6;
    }
    puVar6 = (ulong *)&UNK_10f63271f;
  }
  puVar2 = puVar6;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar6 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar6;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,puVar6,puVar2);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 10a01f6d4; end: 10a01f757;  */

long FUN_10a01f6d4(long param_1,uint param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((short)param_2 < -1) {
    uVar2 = (ulong)param_2 & 0x7fff;
    uVar3 = (*(long *)(param_1 + 0x740) - *(long *)(param_1 + 0x738) >> 3) * 0x28cbfbeb9a020a33;
    if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
      return *(long *)(param_1 + 0x738) + uVar2 * 0x7d8;
    }
  }
  else {
    uVar2 = (*(long *)(param_1 + 0x1a0) - *(long *)(param_1 + 0x198) >> 3) * 0x28cbfbeb9a020a33;
    if (param_2 <= uVar2 && uVar2 - param_2 != 0) {
      return *(long *)(param_1 + 0x198) + (ulong)param_2 * 0x7d8;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a01f758);
  (*pcVar1)();
}



/* Entry: 10a01f758; end: 10a01f917;  */

void FUN_10a01f758(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 auStack_78 [2];
  char cStack_61;
  float fStack_54;
  
  plVar1 = param_2 + 4;
  FUN_10a5dfd94(plVar1,param_1[0xe5]);
  plVar2 = param_2 + 4;
  FUN_10a01eacc(plVar2,plVar1);
  fStack_54 = *(float *)(param_1 + 2) *
              (float)((int)((ulong)(*(long *)(*param_1 + 0x78) - *(long *)(*param_1 + 0x70)) >> 5) *
                      -0x55555555 + 1);
  func_0x000107c2b07c(auStack_78,&UNK_10f632114);
  FUN_10a01671c(plVar2,auStack_78,&fStack_54);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  func_0x000107c2b07c(auStack_78,&DAT_10f63211d);
  FUN_10a01671c(plVar2,auStack_78,param_1 + 2);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  FUN_10a1db4cc(param_1[0xf9],param_3);
  FUN_10a1db4cc(param_1[0xff],param_4);
  lVar3 = 0;
  FUN_10a2421c8();
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(lVar3 + 0x208),plVar1,&UNK_10e482b48,3);
  lVar3 = param_1[0xf9];
  FUN_10a18cbd8(lVar3 + 0x288);
  FUN_10a1da3a4(lVar3,0,0,0,4,0,0,0);
  lVar3 = param_1[0xff];
  FUN_10a18cbd8(lVar3 + 0x288);
  FUN_10a1da3a4(lVar3,0,0,0,4,0,0,0);
  return;
}



/* Entry: 10a01f918; end: 10a021d3b;  */

/* WARNING: Removing unreachable block (ram,0x00010a020908) */
/* WARNING: Removing unreachable block (ram,0x00010a0206e4) */
/* WARNING: Removing unreachable block (ram,0x00010a02089c) */
/* WARNING: Removing unreachable block (ram,0x00010a020ab4) */
/* WARNING: Removing unreachable block (ram,0x00010a020458) */

void FUN_10a01f918(long *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  int param_6)

{
  undefined **ppuVar1;
  int ******ppppppiVar2;
  ushort *puVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 uVar9;
  byte bVar10;
  undefined1 uVar11;
  byte bVar12;
  short sVar13;
  char cVar14;
  bool bVar15;
  undefined8 *******pppppppuVar16;
  long lVar17;
  code *pcVar18;
  int iVar19;
  long *plVar20;
  undefined4 *puVar21;
  ulong uVar22;
  char *pcVar23;
  byte *pbVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined4 *puVar27;
  uint *puVar28;
  long *plVar29;
  undefined ********ppppppppuVar30;
  int *piVar31;
  float *pfVar32;
  int *******pppppppiVar33;
  undefined8 *puVar34;
  undefined *******pppppppuVar35;
  int *****pppppiVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  int ****ppppiVar40;
  int *****pppppiVar41;
  undefined ********ppppppppuVar42;
  long lVar43;
  undefined2 *puVar44;
  short *psVar45;
  undefined4 uVar46;
  ulong uVar47;
  long lVar48;
  undefined ********ppppppppuVar49;
  long lVar50;
  byte bVar51;
  ulong uVar52;
  long lVar53;
  byte *pbVar54;
  long lVar55;
  uint *puVar56;
  long *plVar57;
  int ******ppppppiVar58;
  long lVar59;
  float fVar60;
  int iStack_300;
  int *****pppppiStack_2c0;
  int *****pppppiStack_2b8;
  int ******ppppppiStack_2b0;
  ulong uStack_2a8;
  undefined *******pppppppuStack_2a0;
  int *****pppppiStack_298;
  undefined8 ******ppppppuStack_290;
  ulong uStack_288;
  byte bStack_279;
  int iStack_278;
  undefined4 uStack_274;
  ulong uStack_270;
  byte bStack_261;
  int ******ppppppiStack_260;
  int *****pppppiStack_258;
  ulong uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  int *****pppppiStack_230;
  undefined7 uStack_228;
  undefined1 uStack_221;
  undefined7 uStack_220;
  long lStack_219;
  undefined *******pppppppuStack_1f0;
  int *****pppppiStack_1e8;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [40];
  undefined1 auStack_1a0 [8];
  undefined8 uStack_198;
  char cStack_181;
  undefined1 auStack_178 [8];
  undefined **appuStack_170 [4];
  undefined1 auStack_150 [40];
  undefined1 auStack_128 [40];
  undefined1 auStack_100 [40];
  undefined1 auStack_d8 [40];
  float fStack_b0;
  undefined4 uStack_ac;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  int *****pppppiStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar20 = param_3 + 4;
  FUN_10a01f6d4(plVar20,(short)param_1[8]);
  puVar21 = (undefined4 *)(param_2 + 0x10);
  FUN_10a00edf0(puVar21,0,&UNK_10f630f1d,0,param_2 + 8);
  lVar17 = param_1[0xc3];
  if ((char)lVar17 == '\x01') {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if ((ulong)((param_3[0xc9] - param_3[200] >> 3) * 0x51b3bea3677d46cf) < param_3[0xcb] + 1U) {
    FUN_10a021d3c(param_3 + 200);
  }
  FUN_10a1db4cc(param_1[0xf9],param_4);
  FUN_10a1db4cc(param_1[0xfb],param_5);
  lVar55 = param_3[0x44];
  lVar50 = param_3[0x45] - lVar55;
  if (lVar50 == 0) {
    iStack_300 = 0;
  }
  else {
    lVar59 = 0;
    iStack_300 = 0;
    lVar43 = param_3[0xbf];
    lVar37 = param_3[0xc0];
    iVar8 = (int)param_3[8];
    ppuVar1 = (undefined **)
              (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    do {
      if (lVar59 == (lVar37 - lVar43 >> 4) * -0x1111111111111111) goto LAB_10a021884;
      pbVar54 = (byte *)(lVar55 + lVar59 * 0x1b8);
      if ((*pbVar54 | 4) == 0x16) {
        pppppiStack_1e8 = (int *****)plVar20[6];
        pppppppuStack_1f0 = (undefined *******)plVar20[5];
        uVar47 = plVar20[5];
        uVar52 = *(ulong *)(pbVar54 + 0x30);
        uVar22 = (ulong)&pppppppuStack_1f0 | 8;
        FUN_10a3c8d60(uVar22,pbVar54 + 0x38);
        if ((uVar52 & uVar47) != 0 || (uVar22 & 0xffff) != 0) {
          lVar48 = lVar43 + lVar59 * 0xf0;
          if (*(long *)(lVar48 + 0xb8) != *(long *)(lVar48 + 0xc0)) {
            lVar53 = *(long *)(pbVar54 + 0x1a8);
            pcVar23 = (char *)(lVar53 + 0x390);
            FUN_10a012e0c(pcVar23,param_6);
            if (*pcVar23 == '\x01') {
              if ((param_6 == 2) ||
                 (*(int *)(*(long *)(*(long *)(lVar53 + 0x170) + 0xa20) + 0x18) < 0xf7)) {
LAB_10a01fbe0:
                pbVar24 = (byte *)(lVar53 + 0x390);
                FUN_10a012e0c(pbVar24,param_6);
                if ((*pbVar24 & 1) != 0) {
                  lVar38 = *param_1 + 0x48;
                  FUN_10a0618a0(lVar38,*(undefined8 *)(*(long *)(pbVar54 + 0x1a8) + 0x40),
                                *(undefined8 *)(*(long *)(pbVar54 + 0x1a8) + 0x48));
                  if (lVar38 != 0) {
                    uVar5 = *(uint *)(lVar38 + 0x20);
                    uVar22 = (ulong)uVar5;
                    if (-1 < (int)uVar5) {
                      if (*(long *)(lVar53 + 0x3f0) == 0) {
                        puVar3 = *(ushort **)(lVar48 + 0xb8);
                        if (*(ushort **)(lVar48 + 0xc0) == puVar3) goto LAB_10a021884;
                        plVar29 = (long *)(ulong)*puVar3;
                      }
                      else {
                        plVar29 = param_3 + 4;
                        FUN_10a5dfd94();
                      }
                      if ((int)plVar29 == 0xffff) {
                        if ((char)param_1[0xc3] == '\x01') {
                          FUN_10a00ff18(&pppppiStack_2c0,
                                        *(undefined8 *)(*(long *)(pbVar54 + 0x1a8) + 0x168));
                          ppppppiVar58 = &pppppiStack_2c0;
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                    (ppppppiVar58,0,&UNK_10f632128,8);
                          uStack_238 = ppppppiVar58[1];
                          uStack_240 = (int ******)*ppppppiVar58;
                          pppppiStack_230 = ppppppiVar58[2];
                          ppppppiVar58[1] = (int *****)0x0;
                          ppppppiVar58[2] = (int *****)0x0;
                          *ppppppiVar58 = (int *****)0x0;
                          plVar29 = &uStack_240;
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                    (plVar29,&UNK_10f632131,0x20);
                          uStack_1e0 = (undefined **)plVar29[2];
                          pppppiStack_1e8 = (int *****)plVar29[1];
                          pppppppuStack_1f0 = (undefined *******)*plVar29;
                          plVar29[1] = 0;
                          plVar29[2] = 0;
                          *plVar29 = 0;
                          ppppppppuVar30 = (undefined ********)pppppppuStack_1f0;
                          bVar51 = uStack_1e0._7_1_;
                          ppppppiVar58 = (int ******)pppppiStack_1e8;
                          ppppppppuVar42 = (undefined ********)pppppppuStack_1f0;
                          if (-1 < (long)uStack_1e0) {
                            ppppppiVar58 = (int ******)(ulong)uStack_1e0._7_1_;
                            ppppppppuVar42 = &pppppppuStack_1f0;
                          }
                          FUN_10a00edf0(param_2 + 0x10,2,ppppppppuVar42,ppppppiVar58,param_2 + 8);
LAB_10a020290:
                          if ((char)bVar51 < '\0') {
                            __ZdlPv(ppppppppuVar30);
                          }
                          if ((long)pppppiStack_230 < 0) {
                            __ZdlPv(uStack_240);
                          }
                          if ((long)ppppppiStack_2b0 < 0) {
LAB_10a02157c:
                            __ZdlPv(pppppiStack_2c0);
                          }
                        }
                      }
                      else {
                        plVar25 = param_3 + 4;
                        FUN_10a021e20(plVar25,plVar29);
                        plVar29 = plVar25;
                        func_0x00010abf3eb4();
                        if (((ulong)plVar29 & 1) == 0) {
                          if ((char)param_1[0xc3] == '\x01') {
                            FUN_10a00ff18(&pppppiStack_2c0,
                                          *(undefined8 *)(*(long *)(pbVar54 + 0x1a8) + 0x168));
                            ppppppiVar58 = &pppppiStack_2c0;
                            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                      (ppppppiVar58,0,&UNK_10f632128,8);
                            uStack_238 = ppppppiVar58[1];
                            uStack_240 = (int ******)*ppppppiVar58;
                            pppppiStack_230 = ppppppiVar58[2];
                            ppppppiVar58[1] = (int *****)0x0;
                            ppppppiVar58[2] = (int *****)0x0;
                            *ppppppiVar58 = (int *****)0x0;
                            plVar29 = &uStack_240;
                            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                      (plVar29,&UNK_10f632152,0x21);
                            uStack_1e0 = (undefined **)plVar29[2];
                            pppppiStack_1e8 = (int *****)plVar29[1];
                            pppppppuStack_1f0 = (undefined *******)*plVar29;
                            plVar29[1] = 0;
                            plVar29[2] = 0;
                            *plVar29 = 0;
                            ppppppppuVar30 = (undefined ********)pppppppuStack_1f0;
                            bVar51 = uStack_1e0._7_1_;
                            ppppppiVar58 = (int ******)pppppiStack_1e8;
                            ppppppppuVar42 = (undefined ********)pppppppuStack_1f0;
                            if (-1 < (long)uStack_1e0) {
                              ppppppiVar58 = (int ******)(ulong)uStack_1e0._7_1_;
                              ppppppppuVar42 = &pppppppuStack_1f0;
                            }
                            FUN_10a00edf0(param_2 + 0x10,2,ppppppppuVar42,ppppppiVar58,param_2 + 8);
                            goto LAB_10a020290;
                          }
                        }
                        else {
                          FUN_10a021eb4(param_1 + 0x115);
                          uStack_240 = (int ******)0x0;
                          FUN_10a015a04(&pppppppuStack_1f0,&uStack_240,param_1 + 0xf9);
                          pppppiStack_2c0 = (int *****)0x0;
                          FUN_10a015a04(&uStack_240,&pppppiStack_2c0,param_1 + 0xfb);
                          uVar26 = 1;
                          FUN_10a01efe8(1,iVar8);
                          if ((undefined ********)pppppppuStack_1f0 == (undefined ********)0x0) {
                            pppppppuVar35 = (undefined *******)0x0;
                          }
                          else {
                            pppppppuVar35 = (undefined *******)pppppppuStack_1f0[0x4d];
                          }
                          FUN_10a5e17a8(plVar25,uVar26,pppppppuVar35,&UNK_10e4ac8d0);
                          uVar26 = 7;
                          FUN_10a01efe8(7,iVar8);
                          if (uStack_240 == (int ******)0x0) {
                            pppppiVar36 = (int *****)0x0;
                          }
                          else {
                            pppppiVar36 = uStack_240[0x4d];
                          }
                          FUN_10a5e17a8(plVar25,uVar26,pppppiVar36,&UNK_10e4ac8d0);
                          FUN_10a044790(&pppppiStack_230);
                          (**(code **)CONCAT17(uStack_221,uStack_228))(&uStack_228);
                          pppppiVar36 = uStack_238;
                          if (uStack_238 != (int *****)0x0) {
                            pppppiVar41 = uStack_238 + 1;
                            do {
                              ppppiVar40 = *pppppiVar41;
                              cVar14 = '\x01';
                              bVar15 = (bool)ExclusiveMonitorPass(pppppiVar41,0x10);
                              if (bVar15) {
                                *pppppiVar41 = (int ****)((long)ppppiVar40 + -1);
                                cVar14 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar14 != '\0');
                            if (ppppiVar40 == (int ****)0x0) {
                              (*(code *)(*uStack_238)[2])(uStack_238);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppiVar36);
                            }
                          }
                          FUN_10a044790(&uStack_1e0);
                          (*(code *)*ppuStack_1d8)(&ppuStack_1d8);
                          pppppiVar36 = pppppiStack_1e8;
                          if ((int ******)pppppiStack_1e8 != (int ******)0x0) {
                            ppppppiVar58 = (int ******)(pppppiStack_1e8 + 1);
                            do {
                              pppppiVar41 = *ppppppiVar58;
                              cVar14 = '\x01';
                              bVar15 = (bool)ExclusiveMonitorPass(ppppppiVar58,0x10);
                              if (bVar15) {
                                *ppppppiVar58 = (int *****)((long)pppppiVar41 + -1);
                                cVar14 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar14 != '\0');
                            if (pppppiVar41 == (int *****)0x0) {
                              (*(code *)(*pppppiStack_1e8)[2])(pppppiStack_1e8);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppiVar36);
                            }
                          }
                          pbVar24 = (byte *)(plVar25 + 4);
                          if (*pbVar24 < 9 && (1 << (ulong)(*pbVar24 & 0x1f) & 0x160U) != 0) {
                            uVar26 = 0;
                            FUN_10a01efe8(0,iVar8);
                            FUN_10a047898(plVar25[0x2b],uVar26,uVar26);
                          }
                          puVar27 = (undefined4 *)(param_2 + 0x10);
                          FUN_10a00edf0(puVar27,0,&UNK_10f630f1d,0,param_2 + 8);
                          lVar48 = *(long *)(pbVar54 + 0x1a0);
                          if (lVar48 == 0) {
                            if ((char)param_1[0xc3] == '\x01') {
                              FUN_10a00ff18(&pppppiStack_2c0,
                                            *(undefined8 *)(*(long *)(pbVar54 + 0x1a8) + 0x168));
                              ppppppiVar58 = &pppppiStack_2c0;
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                        (ppppppiVar58,0,&UNK_10f632128,8);
                              uStack_238 = ppppppiVar58[1];
                              uStack_240 = (int ******)*ppppppiVar58;
                              pppppiStack_230 = ppppppiVar58[2];
                              ppppppiVar58[1] = (int *****)0x0;
                              ppppppiVar58[2] = (int *****)0x0;
                              *ppppppiVar58 = (int *****)0x0;
                              plVar29 = &uStack_240;
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                        (plVar29,&UNK_10f632174,0x23);
                              uStack_1e0 = (undefined **)plVar29[2];
                              pppppiStack_1e8 = (int *****)plVar29[1];
                              pppppppuStack_1f0 = (undefined *******)*plVar29;
                              plVar29[1] = 0;
                              plVar29[2] = 0;
                              *plVar29 = 0;
                              ppppppppuVar30 = (undefined ********)pppppppuStack_1f0;
                              bVar51 = uStack_1e0._7_1_;
                              ppppppiVar58 = (int ******)pppppiStack_1e8;
                              ppppppppuVar42 = (undefined ********)pppppppuStack_1f0;
                              if (-1 < (long)uStack_1e0) {
                                ppppppiVar58 = (int ******)(ulong)uStack_1e0._7_1_;
                                ppppppppuVar42 = &pppppppuStack_1f0;
                              }
                              FUN_10a00edf0(param_2 + 0x10,2,ppppppppuVar42,ppppppiVar58,param_2 + 8
                                           );
                              goto LAB_10a020290;
                            }
                          }
                          else {
                            puVar34 = (undefined8 *)0x1;
                            FUN_10a061940();
                            if (puVar34 == (undefined8 *)0x0) {
                              puVar56 = (uint *)0x0;
                            }
                            else {
                              puVar56 = (uint *)*puVar34;
                            }
                            if ((int)lVar48 == 2) {
                              puVar28 = puVar56;
                              (**(code **)(*(long *)puVar56 + 0x20))();
                              uVar26 = 2;
                              FUN_10a01efe8(2,iVar8);
                              plVar29 = *(long **)(puVar56 + 0xe);
                              (**(code **)(*plVar29 + 0x20))();
                              FUN_10a5e19b4(plVar25,uVar26,0,plVar29,puVar56 + 0xe);
                              uVar26 = 10;
                              FUN_10a01efe8(10,iVar8);
                              plVar29 = *(long **)(puVar56 + 10);
                              (**(code **)(*plVar29 + 0x20))();
                              FUN_10a5e19b4(plVar25,uVar26,0,plVar29,puVar56 + 10);
                              lVar48 = *(long *)(*param_1 + 0x70);
                              uVar47 = (*(long *)(*param_1 + 0x78) - lVar48 >> 5) *
                                       -0x5555555555555555;
                              if (uVar47 < uVar22 || uVar47 - uVar22 == 0) {
                                FUN_10a04320c();
                              }
                              else {
                                lVar48 = lVar48 + uVar22 * 0x60;
                                ppppppppuVar42 = *(undefined *********)(lVar48 + 0x38);
                                ppppppiVar58 = *(int *******)(lVar48 + 0x40);
                                if (ppppppiVar58 != (int ******)0x0) {
                                  ppppppiVar2 = ppppppiVar58 + 1;
                                  do {
                                    cVar14 = '\x01';
                                    bVar15 = (bool)ExclusiveMonitorPass(ppppppiVar2,0x10);
                                    if (bVar15) {
                                      *ppppppiVar2 = (int *****)((long)*ppppppiVar2 + 1);
                                      cVar14 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar14 != '\0');
                                }
                                pppppppuStack_2a0 = (undefined *******)ppppppppuVar42;
                                pppppiStack_298 = (int *****)ppppppiVar58;
                                if (ppppppppuVar42 == (undefined ********)0x0) {
                                  uVar46 = 1;
                                }
                                else {
                                  uVar26 = 3;
                                  FUN_10a01efe8(3,iVar8);
                                  if (ppppppiVar58 != (int ******)0x0) {
                                    ppppppiVar2 = ppppppiVar58 + 1;
                                    do {
                                      cVar14 = '\x01';
                                      bVar15 = (bool)ExclusiveMonitorPass(ppppppiVar2,0x10);
                                      if (bVar15) {
                                        *ppppppiVar2 = (int *****)((long)*ppppppiVar2 + 1);
                                        cVar14 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar14 != '\0');
                                  }
                                  ppppppppuVar30 = ppppppppuVar42;
                                  pppppppuStack_1f0 = (undefined *******)ppppppppuVar42;
                                  pppppiStack_1e8 = (int *****)ppppppiVar58;
                                  (*(code *)(*ppppppppuVar42)[4])();
                                  FUN_10a5e19b4(plVar25,uVar26,0,ppppppppuVar30,&pppppppuStack_1f0);
                                  if (ppppppiVar58 != (int ******)0x0) {
                                    ppppppiVar2 = ppppppiVar58 + 1;
                                    do {
                                      pppppiVar36 = *ppppppiVar2;
                                      cVar14 = '\x01';
                                      bVar15 = (bool)ExclusiveMonitorPass(ppppppiVar2,0x10);
                                      if (bVar15) {
                                        *ppppppiVar2 = (int *****)((long)pppppiVar36 + -1);
                                        cVar14 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar14 != '\0');
                                    if (pppppiVar36 == (int *****)0x0) {
                                      (*(code *)(*ppppppiVar58)[2])(ppppppiVar58);
                                      __ZNSt3__119__shared_weak_count14__release_weakEv
                                                (ppppppiVar58);
                                    }
                                  }
                                  uVar46 = 2;
                                }
                                (**(code **)(*(long *)puVar56 + 0x70))();
                                uVar6 = *puVar28;
                                lVar48 = param_1[0xc3];
                                if ((char)lVar48 == '\x01') {
                                  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
                                }
                                uStack_238 = (int *****)0x0;
                                uStack_240 = (int ******)0x0;
                                uStack_228 = 0;
                                uStack_221 = 0;
                                pppppiStack_230 = (int *****)0x0;
                                pppppiStack_2b8 = (int *****)0x0;
                                pppppiStack_2c0 = (int *****)0x0;
                                uStack_2a8 = 0;
                                ppppppiStack_2b0 = (int ******)0x0;
                                plVar29 = param_3;
                                ___dynamic_cast(param_3,&PTR_DAT_110c558e0,&PTR_DAT_110c545a0,0);
                                if (plVar29 == (long *)0x0) {
                                  FUN_10a0ee06c(&UNK_10f633a98);
                                }
                                else {
                                  FUN_10abc09b0();
                                  for (plVar29 = (long *)plVar29[2]; plVar29 != (long *)0x0;
                                      plVar29 = (long *)*plVar29) {
                                    sVar13 = *(short *)(plVar29 + 7);
                                    if ((ushort)(sVar13 - 10U) < 0xfffd) {
                                      if ((char)param_1[0xc3] == '\x01') {
                                        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                                  (&fStack_b0,&UNK_10f5fa59c,plVar29 + 2);
                                        pfVar32 = &fStack_b0;
                                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                                  (pfVar32,&UNK_10f633afd,0x23);
                                        pppppiStack_258 = *(int ******)(pfVar32 + 2);
                                        ppppppiStack_260 = *(int *******)pfVar32;
                                        uStack_250 = *(ulong *)(pfVar32 + 4);
                                        pfVar32[2] = 0.0;
                                        pfVar32[3] = 0.0;
                                        pfVar32[4] = 0.0;
                                        pfVar32[5] = 0.0;
                                        pfVar32[0] = 0.0;
                                        pfVar32[1] = 0.0;
                                        __ZNSt3__19to_stringEi(&iStack_278,(long)sVar13);
                                        uVar47 = uStack_270;
                                        piVar31 = (int *)CONCAT44(uStack_274,iStack_278);
                                        if (-1 < (char)bStack_261) {
                                          uVar47 = (ulong)bStack_261;
                                          piVar31 = &iStack_278;
                                        }
                                        pppppppiVar33 = &ppppppiStack_260;
                                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                                  (pppppppiVar33,piVar31,uVar47);
                                        uStack_1e0 = (undefined **)pppppppiVar33[2];
                                        pppppiStack_1e8 = (int *****)pppppppiVar33[1];
                                        pppppppuStack_1f0 = (undefined *******)*pppppppiVar33;
                                        pppppppiVar33[1] = (int ******)0x0;
                                        pppppppiVar33[2] = (int ******)0x0;
                                        *pppppppiVar33 = (int ******)0x0;
                                        ppppppiVar2 = (int ******)uStack_1e0;
                                        pppppppuVar35 = pppppppuStack_1f0;
                                        ppppppiVar58 = (int ******)pppppiStack_1e8;
                                        ppppppppuVar30 = (undefined ********)pppppppuStack_1f0;
                                        if (-1 < (long)uStack_1e0) {
                                          ppppppiVar58 = (int ******)((ulong)uStack_1e0 >> 0x38);
                                          ppppppppuVar30 = &pppppppuStack_1f0;
                                        }
                                        FUN_10a00edf0(param_2 + 0x10,2,ppppppppuVar30,ppppppiVar58,
                                                      param_2 + 8);
                                        if ((long)ppppppiVar2 < 0) {
                                          __ZdlPv(pppppppuVar35);
                                        }
                                        if ((char)bStack_261 < '\0') {
                                          __ZdlPv(CONCAT44(uStack_274,iStack_278));
                                        }
                                        if ((long)uStack_250 < 0) {
                                          __ZdlPv(ppppppiStack_260);
                                        }
                                      }
                                      goto LAB_10a020798;
                                    }
                                    plVar57 = *(long **)(puVar28 + 2);
                                    plVar4 = *(long **)(puVar28 + 4);
                                    if (plVar57 == plVar4) {
LAB_10a020490:
                                      if ((plVar57 == plVar4) || (plVar57 == (long *)0x0))
                                      goto LAB_10a0204c0;
                                      if (*(int *)((long)plVar57 + 0x24) - 5U < 2) {
                                        if ((int)plVar57[5] - 2U < 3) goto LAB_10a0205b0;
LAB_10a0206fc:
                                        if ((char)param_1[0xc3] != '\x01') goto LAB_10a020798;
                                        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                                  (&ppppppiStack_260,&UNK_10f5fa59c,plVar29 + 2);
                                        pppppppiVar33 = &ppppppiStack_260;
                                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                                  (pppppppiVar33,&UNK_10f633b42,0x20);
                                        uStack_1e0 = (undefined **)pppppppiVar33[2];
                                        pppppiStack_1e8 = (int *****)pppppppiVar33[1];
                                        pppppppuStack_1f0 = (undefined *******)*pppppppiVar33;
                                        pppppppiVar33[1] = (int ******)0x0;
                                        pppppppiVar33[2] = (int ******)0x0;
                                        *pppppppiVar33 = (int ******)0x0;
                                        ppppppppuVar49 = (undefined ********)pppppppuStack_1f0;
                                        bVar51 = uStack_1e0._7_1_;
                                        ppppppiVar58 = (int ******)pppppiStack_1e8;
                                        ppppppppuVar30 = (undefined ********)pppppppuStack_1f0;
                                        if (-1 < (long)uStack_1e0) {
                                          ppppppiVar58 = (int ******)(ulong)uStack_1e0._7_1_;
                                          ppppppppuVar30 = &pppppppuStack_1f0;
                                        }
                                        FUN_10a00edf0(param_2 + 0x10,2,ppppppppuVar30,ppppppiVar58,
                                                      param_2 + 8);
                                        goto LAB_10a02077c;
                                      }
                                      if ((*(int *)((long)plVar57 + 0x24) != 2) ||
                                         ((int)plVar57[5] != 4)) goto LAB_10a0206fc;
LAB_10a0205b0:
                                      if ((*(byte *)(plVar57 + 6) & 3) == 0) {
                                        if (iVar8 < 0x141) {
                                          if (*(char *)((long)plVar57 + 0x17) < '\0') {
                                            func_0x000107c3192c(&ppppppiStack_260,*plVar57,
                                                                plVar57[1]);
                                          }
                                          else {
                                            pppppiStack_258 = (int *****)plVar57[1];
                                            ppppppiStack_260 = (int ******)*plVar57;
                                            uStack_250 = plVar57[2];
                                          }
                                          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                                    (&fStack_b0,&UNK_10f633bb8,&ppppppiStack_260);
                                          uStack_1e0 = (undefined **)pppppiStack_a0;
                                          pppppiStack_1e8 = (int *****)CONCAT17(uStack_a1,uStack_a8)
                                          ;
                                          pppppppuStack_1f0 =
                                               (undefined *******)CONCAT44(uStack_ac,fStack_b0);
                                          uStack_a8 = 0;
                                          uStack_a1 = 0;
                                          pppppiStack_a0 = (int *****)0x0;
                                          fStack_b0 = 0.0;
                                          uStack_ac = 0;
                                          ppuStack_1d8 = (undefined **)0x0;
                                          func_0x000107c2b080(&pppppppuStack_1f0);
                                          iVar19 = (int)plVar57[6];
                                          iStack_278 = iVar19 + 3;
                                          if (-1 < iVar19) {
                                            iStack_278 = iVar19;
                                          }
                                          iStack_278 = iStack_278 >> 2;
                                          FUN_10a016278(plVar25,&pppppppuStack_1f0,&iStack_278);
                                          if ((long)uStack_1e0 < 0) {
                                            __ZdlPv(pppppppuStack_1f0);
                                          }
                                          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                                    (&fStack_b0,&UNK_10f633bc6,&ppppppiStack_260);
                                          uStack_1e0 = (undefined **)pppppiStack_a0;
                                          pppppiStack_1e8 = (int *****)CONCAT17(uStack_a1,uStack_a8)
                                          ;
                                          pppppppuStack_1f0 =
                                               (undefined *******)CONCAT44(uStack_ac,fStack_b0);
                                          uStack_a8 = 0;
                                          uStack_a1 = 0;
                                          pppppiStack_a0 = (int *****)0x0;
                                          fStack_b0 = 0.0;
                                          uStack_ac = 0;
                                          ppuStack_1d8 = (undefined **)0x0;
                                          func_0x000107c2b080(&pppppppuStack_1f0);
                                          iStack_278 = *(int *)((long)plVar57 + 0x24);
                                          FUN_10a016278(plVar25,&pppppppuStack_1f0,&iStack_278);
                                          if ((long)uStack_1e0 < 0) {
                                            __ZdlPv(pppppppuStack_1f0);
                                          }
                                          goto LAB_10a020788;
                                        }
                                        if ((bRam00000001137e9330 & 1) == 0) {
                                          iVar19 = 0x137e9330;
                                          ___cxa_guard_acquire();
                                          if (iVar19 != 0) {
                                            FUN_10ab6e728();
                                            FUN_10a0484f8(&pppppppuStack_1f0,0x1138356c0,0);
                                            FUN_10ab6e9d8();
                                            FUN_10a0484f8(auStack_1c8,0x113835740,1);
                                            FUN_10ab6eb18();
                                            FUN_10a0484f8(auStack_1a0,0x113835780,2);
                                            FUN_10ab6ec58();
                                            FUN_10a0484f8(auStack_178,0x1138357c0,3);
                                            FUN_10ab6f020();
                                            FUN_10a0484f8(auStack_150,0x113835880,4);
                                            FUN_10ab6f160();
                                            FUN_10a0484f8(auStack_128,0x1138358c0,5);
                                            FUN_10ab6f2a0();
                                            FUN_10a0484f8(auStack_100,0x113835900,6);
                                            FUN_10ab6f3e0();
                                            FUN_10a0484f8(auStack_d8,0x113835940,7);
                                            FUN_10a04855c(&pppppppuStack_1f0,8);
                                            lVar53 = 0x140;
                                            do {
                                              lVar53 = lVar53 + -0x28;
                                            } while (lVar53 != 0);
                                            ___cxa_atexit(0x10a0484f4,0x1137e93d0,0x100000000);
                                            ___cxa_guard_release(0x1137e9330);
                                          }
                                        }
                                        lVar53 = 0x1137e93d0;
                                        FUN_10a048b24(0x1137e93d0,plVar57);
                                        if (lVar53 != 0) {
                                          uVar47 = *(ulong *)(lVar53 + 0x30);
                                          if (uVar47 < 8) {
                                            *(uint *)((long)&uStack_240 + uVar47 * 4) =
                                                 *(uint *)(plVar57 + 6) >> 2;
                                            *(undefined4 *)((long)&pppppiStack_2c0 + uVar47 * 4) =
                                                 *(undefined4 *)((long)plVar57 + 0x24);
                                            goto LAB_10a020798;
                                          }
                                          goto LAB_10a021884;
                                        }
                                        if ((char)param_1[0xc3] == '\x01') {
                                          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                                    (&ppppppiStack_260,&UNK_10f5fa59c,plVar57);
                                          pppppppiVar33 = &ppppppiStack_260;
                                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                                    (pppppppiVar33,&UNK_10f633b91,0x26);
                                          uStack_1e0 = (undefined **)pppppppiVar33[2];
                                          pppppiStack_1e8 = (int *****)pppppppiVar33[1];
                                          pppppppuStack_1f0 = (undefined *******)*pppppppiVar33;
                                          pppppppiVar33[1] = (int ******)0x0;
                                          pppppppiVar33[2] = (int ******)0x0;
                                          *pppppppiVar33 = (int ******)0x0;
                                          ppppppppuVar49 = (undefined ********)pppppppuStack_1f0;
                                          bVar51 = uStack_1e0._7_1_;
                                          ppppppiVar58 = (int ******)pppppiStack_1e8;
                                          ppppppppuVar30 = (undefined ********)pppppppuStack_1f0;
                                          if (-1 < (long)uStack_1e0) {
                                            ppppppiVar58 = (int ******)(ulong)uStack_1e0._7_1_;
                                            ppppppppuVar30 = &pppppppuStack_1f0;
                                          }
                                          FUN_10a00edf0(param_2 + 0x10,2,ppppppppuVar30,ppppppiVar58
                                                        ,param_2 + 8);
                                          goto LAB_10a02077c;
                                        }
                                      }
                                      else {
                                        if ((char)param_1[0xc3] != '\x01') goto LAB_10a020798;
                                        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                                  (&iStack_278,&UNK_10f5fa59c,plVar29 + 2);
                                        piVar31 = &iStack_278;
                                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                                  (piVar31,&UNK_10f633b63,0x2d);
                                        pppppiStack_a0 = *(int ******)(piVar31 + 4);
                                        uStack_a8 = (undefined7)*(undefined8 *)(piVar31 + 2);
                                        uStack_a1 = (undefined1)
                                                    ((ulong)*(undefined8 *)(piVar31 + 2) >> 0x38);
                                        fStack_b0 = (float)*(undefined8 *)piVar31;
                                        uStack_ac = (undefined4)
                                                    ((ulong)*(undefined8 *)piVar31 >> 0x20);
                                        piVar31[2] = 0;
                                        piVar31[3] = 0;
                                        piVar31[4] = 0;
                                        piVar31[5] = 0;
                                        piVar31[0] = 0;
                                        piVar31[1] = 0;
                                        __ZNSt3__19to_stringEj(&ppppppuStack_290,(int)plVar57[6]);
                                        uVar47 = uStack_288;
                                        pppppppuVar16 = (undefined8 *******)ppppppuStack_290;
                                        if (-1 < (char)bStack_279) {
                                          uVar47 = (ulong)bStack_279;
                                          pppppppuVar16 = &ppppppuStack_290;
                                        }
                                        pfVar32 = &fStack_b0;
                                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                                  (pfVar32,pppppppuVar16,uVar47);
                                        pppppiStack_258 = *(int ******)(pfVar32 + 2);
                                        ppppppiStack_260 = *(int *******)pfVar32;
                                        uStack_250 = *(ulong *)(pfVar32 + 4);
                                        pfVar32[2] = 0.0;
                                        pfVar32[3] = 0.0;
                                        pfVar32[4] = 0.0;
                                        pfVar32[5] = 0.0;
                                        pfVar32[0] = 0.0;
                                        pfVar32[1] = 0.0;
                                        pppppppiVar33 = &ppppppiStack_260;
                                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                                  (pppppppiVar33,&DAT_10f684600,1);
                                        uStack_1e0 = (undefined **)pppppppiVar33[2];
                                        pppppiStack_1e8 = (int *****)pppppppiVar33[1];
                                        pppppppuStack_1f0 = (undefined *******)*pppppppiVar33;
                                        pppppppiVar33[1] = (int ******)0x0;
                                        pppppppiVar33[2] = (int ******)0x0;
                                        *pppppppiVar33 = (int ******)0x0;
                                        ppppppiVar2 = (int ******)uStack_1e0;
                                        pppppppuVar35 = pppppppuStack_1f0;
                                        ppppppiVar58 = (int ******)pppppiStack_1e8;
                                        ppppppppuVar30 = (undefined ********)pppppppuStack_1f0;
                                        if (-1 < (long)uStack_1e0) {
                                          ppppppiVar58 = (int ******)((ulong)uStack_1e0 >> 0x38);
                                          ppppppppuVar30 = &pppppppuStack_1f0;
                                        }
                                        FUN_10a00edf0(param_2 + 0x10,2,ppppppppuVar30,ppppppiVar58,
                                                      param_2 + 8);
                                        if ((long)ppppppiVar2 < 0) {
                                          __ZdlPv(pppppppuVar35);
                                        }
                                        if ((long)uStack_250 < 0) {
                                          __ZdlPv(ppppppiStack_260);
                                        }
                                        if ((char)bStack_279 < '\0') {
                                          __ZdlPv(ppppppuStack_290);
                                        }
                                        if (-1 < (char)bStack_261) goto LAB_10a020798;
                                        pppppppiVar33 = (int *******)CONCAT44(uStack_274,iStack_278)
                                        ;
LAB_10a020794:
                                        __ZdlPv(pppppppiVar33);
                                      }
                                    }
                                    else {
                                      do {
                                        if (plVar57[3] == plVar29[5]) goto LAB_10a020490;
                                        plVar57 = plVar57 + 7;
                                      } while (plVar57 != plVar4);
LAB_10a0204c0:
                                      if ((char)param_1[0xc3] == '\x01') {
                                        FUN_10ab6f160();
                                        if ((plVar29[5] == lRam00000001138358d8) &&
                                           (uVar7 = puVar28[0xc], uVar7 != 0xffffffff)) {
                                          uVar47 = (*(long *)(puVar28 + 4) - *(long *)(puVar28 + 2)
                                                   >> 3) * 0x6db6db6db6db6db7;
                                          if (uVar47 < uVar7 || uVar47 - uVar7 == 0)
                                          goto LAB_10a021858;
                                          if (*(long *)(puVar28 + 2) != 0) goto LAB_10a020798;
                                        }
                                        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                                  (&ppppppiStack_260,&UNK_10f5fa59c,plVar29 + 2);
                                        pppppppiVar33 = &ppppppiStack_260;
                                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                                  (pppppppiVar33,&UNK_10f633b21,0x20);
                                        uStack_1e0 = (undefined **)pppppppiVar33[2];
                                        pppppiStack_1e8 = (int *****)pppppppiVar33[1];
                                        pppppppuStack_1f0 = (undefined *******)*pppppppiVar33;
                                        pppppppiVar33[1] = (int ******)0x0;
                                        pppppppiVar33[2] = (int ******)0x0;
                                        *pppppppiVar33 = (int ******)0x0;
                                        ppppppppuVar49 = (undefined ********)pppppppuStack_1f0;
                                        bVar51 = uStack_1e0._7_1_;
                                        ppppppiVar58 = (int ******)pppppiStack_1e8;
                                        ppppppppuVar30 = (undefined ********)pppppppuStack_1f0;
                                        if (-1 < (long)uStack_1e0) {
                                          ppppppiVar58 = (int ******)(ulong)uStack_1e0._7_1_;
                                          ppppppppuVar30 = &pppppppuStack_1f0;
                                        }
                                        FUN_10a00edf0(param_2 + 0x10,2,ppppppppuVar30,ppppppiVar58,
                                                      param_2 + 8);
LAB_10a02077c:
                                        if ((char)bVar51 < '\0') {
                                          __ZdlPv(ppppppppuVar49);
                                        }
LAB_10a020788:
                                        pppppppiVar33 = (int *******)ppppppiStack_260;
                                        if ((long)uStack_250 < 0) goto LAB_10a020794;
                                      }
                                    }
LAB_10a020798:
                                  }
                                  if (0x140 < iVar8) {
                                    func_0x000107c2b07c(&pppppppuStack_1f0,&DAT_10f6321b4);
                                    pppppiStack_258 = uStack_238;
                                    ppppppiStack_260 = uStack_240;
                                    FUN_10a01ebbc(plVar25,&pppppppuStack_1f0,&ppppppiStack_260);
                                    if ((long)uStack_1e0 < 0) {
                                      __ZdlPv(pppppppuStack_1f0);
                                    }
                                    func_0x000107c2b07c(&pppppppuStack_1f0,&DAT_10f6321d2);
                                    pppppiStack_258 = pppppiStack_2b8;
                                    ppppppiStack_260 = (int ******)pppppiStack_2c0;
                                    FUN_10a01ebbc(plVar25,&pppppppuStack_1f0,&ppppppiStack_260);
                                    if ((long)uStack_1e0 < 0) {
                                      __ZdlPv(pppppppuStack_1f0);
                                    }
                                    func_0x000107c2b07c(&pppppppuStack_1f0,&DAT_10f6321f0);
                                    pppppiStack_258 = (int *****)CONCAT17(uStack_221,uStack_228);
                                    ppppppiStack_260 = (int ******)pppppiStack_230;
                                    FUN_10a01ebbc(plVar25,&pppppppuStack_1f0,&ppppppiStack_260);
                                    if ((long)uStack_1e0 < 0) {
                                      __ZdlPv(pppppppuStack_1f0);
                                    }
                                    func_0x000107c2b07c(&pppppppuStack_1f0,&DAT_10f632211);
                                    pppppiStack_258 = (int *****)uStack_2a8;
                                    ppppppiStack_260 = ppppppiStack_2b0;
                                    FUN_10a01ebbc(plVar25,&pppppppuStack_1f0,&ppppppiStack_260);
                                    if ((long)uStack_1e0 < 0) {
                                      __ZdlPv(pppppppuStack_1f0);
                                    }
                                  }
                                  pppppiVar36 = pppppiStack_298;
                                  if ((char)lVar48 != '\0') {
                                    iVar19 = *(int *)(param_2 + 8);
                                    if (iVar19 < 2) {
                                      iVar19 = 1;
                                    }
                                    *(int *)(param_2 + 8) = iVar19 + -1;
                                  }
                                  if ((int ******)pppppiStack_298 != (int ******)0x0) {
                                    ppppppiVar58 = (int ******)(pppppiStack_298 + 1);
                                    do {
                                      pppppiVar41 = *ppppppiVar58;
                                      cVar14 = '\x01';
                                      bVar15 = (bool)ExclusiveMonitorPass(ppppppiVar58,0x10);
                                      if (bVar15) {
                                        *ppppppiVar58 = (int *****)((long)pppppiVar41 + -1);
                                        cVar14 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar14 != '\0');
                                    if (pppppiVar41 == (int *****)0x0) {
                                      (*(code *)(*pppppiStack_298)[2])(pppppiStack_298);
                                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppiVar36)
                                      ;
                                    }
                                  }
                                  uVar5 = uVar5 + 1;
                                  iVar19 = (int)puVar56 + -1;
                                  fVar60 = *(float *)(param_1 + 2) * (float)uVar5 * 2.0 + -1.0;
                                  fStack_b0 = fVar60;
                                  if (iVar8 < 0x141) {
                                    if (*(char *)((long)param_1 + 0x674) == '\x01') {
                                      func_0x000107c2b07c(&pppppppuStack_1f0,&UNK_10f631ff2);
                                      uStack_240 = (int ******)CONCAT71(uStack_240._1_7_,1);
                                      func_0x00010a01edd4(plVar25,&pppppppuStack_1f0,&uStack_240);
                                    }
                                    else {
                                      func_0x000107c2b074(&pppppppuStack_1f0,&PTR_DAT_110b9d420);
                                      FUN_10a047898(plVar25[0x2b],&pppppppuStack_1f0,
                                                    &pppppppuStack_1f0);
                                    }
                                    if ((long)uStack_1e0 < 0) {
                                      __ZdlPv(pppppppuStack_1f0);
                                    }
                                    func_0x000107c2b07c(&pppppppuStack_1f0,&UNK_10f63223b);
                                    uStack_240 = (int ******)
                                                 CONCAT71(uStack_240._1_7_,
                                                          ppppppppuVar42 != (undefined ********)0x0)
                                    ;
                                    func_0x00010a01edd4(plVar25,&pppppppuStack_1f0,&uStack_240);
                                    if ((long)uStack_1e0 < 0) {
                                      __ZdlPv(pppppppuStack_1f0);
                                    }
                                    func_0x000107c2b07c(&pppppppuStack_1f0,&DAT_10f63224b);
                                    uStack_240 = (int ******)CONCAT44(uStack_240._4_4_,uVar5);
                                    FUN_10a016278(plVar25,&pppppppuStack_1f0,&uStack_240);
                                    if ((long)uStack_1e0 < 0) {
                                      __ZdlPv(pppppppuStack_1f0);
                                    }
                                    func_0x000107c2b07c(&pppppppuStack_1f0,&UNK_10f632257);
                                    uStack_240 = (int ******)CONCAT44(uStack_240._4_4_,iVar19);
                                    FUN_10a016278(plVar25,&pppppppuStack_1f0,&uStack_240);
                                    if ((long)uStack_1e0 < 0) {
                                      __ZdlPv(pppppppuStack_1f0);
                                    }
                                    func_0x000107c2b07c(&pppppppuStack_1f0,&UNK_10f63226b);
                                    uStack_240 = (int ******)CONCAT44(uStack_240._4_4_,uVar6 >> 2);
                                    FUN_10a016278(plVar25,&pppppppuStack_1f0,&uStack_240);
                                    if ((long)uStack_1e0 < 0) {
                                      __ZdlPv(pppppppuStack_1f0);
                                    }
                                    func_0x000107c2b07c(&pppppppuStack_1f0,&UNK_10f632232);
                                    FUN_10a01671c(plVar25,&pppppppuStack_1f0,&fStack_b0);
                                  }
                                  else {
                                    func_0x000107c2b07c(&pppppppuStack_1f0,&DAT_10f631fd1);
                                    uStack_240 = (int ******)
                                                 CONCAT44(uVar5 & 0xffff | (uVar6 >> 2) << 0x10,
                                                          uVar46);
                                    uStack_238 = (int *****)CONCAT44(fVar60,iVar19);
                                    FUN_10a01ebbc(plVar25,&pppppppuStack_1f0,&uStack_240);
                                    if ((long)uStack_1e0 < 0) {
                                      __ZdlPv(pppppppuStack_1f0);
                                    }
                                    func_0x000107c2b07c(&pppppppuStack_1f0,&UNK_10f632232);
                                    FUN_10a01671c(plVar25,&pppppppuStack_1f0,&fStack_b0);
                                  }
                                  if ((long)uStack_1e0 < 0) {
                                    __ZdlPv(pppppppuStack_1f0);
                                  }
                                  uVar9 = *(undefined1 *)((long)plVar25 + 0x1c);
                                  bVar51 = *(byte *)(plVar25 + 4);
                                  uStack_238 = *(int ******)((long)plVar25 + 0x29);
                                  uStack_240 = *(int *******)((long)plVar25 + 0x21);
                                  pppppiStack_230 = *(int ******)((long)plVar25 + 0x31);
                                  uStack_228 = (undefined7)*(undefined8 *)((long)plVar25 + 0x39);
                                  lStack_219 = plVar25[9];
                                  uStack_221 = (undefined1)plVar25[8];
                                  uStack_220 = (undefined7)((ulong)plVar25[8] >> 8);
                                  bVar10 = *(byte *)(plVar25 + 3);
                                  uVar11 = *(undefined1 *)((long)plVar25 + 0x65);
                                  bVar12 = *(byte *)((long)plVar25 + 0x1b);
                                  *(undefined1 *)((long)plVar25 + 0x1c) = 1;
                                  if ((8 < bVar51) || ((1 << (ulong)(bVar51 & 0x1f) & 0x160U) == 0))
                                  {
                                    plVar25[5] = 0;
                                    pbVar24[0] = 6;
                                    pbVar24[1] = 0;
                                    pbVar24[2] = 0;
                                    pbVar24[3] = 0;
                                    pbVar24[4] = 0;
                                    pbVar24[5] = 0;
                                    pbVar24[6] = 0;
                                    pbVar24[7] = 0;
                                    plVar25[7] = 0;
                                    plVar25[6] = 0;
                                    plVar25[9] = 0;
                                    plVar25[8] = 0;
                                  }
                                  *(byte *)((long)plVar25 + 0x1b) = bVar12 | 8;
                                  *(byte *)(plVar25 + 3) = bVar10 & 0xf9 | 4;
                                  *(undefined1 *)((long)plVar25 + 0x65) = 2;
                                  if (iVar8 < 0x13e) {
                                    func_0x000107c2b074(&pppppppuStack_1f0,&PTR_DAT_110c52528);
                                    pppppiStack_2c0 =
                                         (int *****)((ulong)pppppiStack_2c0 & 0xffffffffffffff00);
                                    func_0x00010a01edd4(plVar25,&pppppppuStack_1f0,&pppppiStack_2c0)
                                    ;
                                    if ((long)uStack_1e0 < 0) {
                                      __ZdlPv(pppppppuStack_1f0);
                                    }
                                    func_0x000107c2b074(&pppppppuStack_1f0,&PTR_DAT_110c52550);
                                    pppppiStack_2c0 =
                                         (int *****)((ulong)pppppiStack_2c0 & 0xffffffffffffff00);
                                    func_0x00010a01edd4(plVar25,&pppppppuStack_1f0,&pppppiStack_2c0)
                                    ;
                                    if ((long)uStack_1e0 < 0) {
                                      __ZdlPv(pppppppuStack_1f0);
                                    }
                                    func_0x000107c2b074(&pppppppuStack_1f0,&PTR_DAT_110c52578);
                                    pppppiStack_2c0 =
                                         (int *****)((ulong)pppppiStack_2c0 & 0xffffffffffffff00);
                                    func_0x00010a01edd4(plVar25,&pppppppuStack_1f0,&pppppiStack_2c0)
                                    ;
                                  }
                                  else {
                                    func_0x000107c2b074(&pppppppuStack_1f0,&PTR_DAT_110c52618);
                                    pppppiStack_2c0 =
                                         (int *****)((ulong)pppppiStack_2c0 & 0xffffffff00000000);
                                    FUN_10a016278(plVar25,&pppppppuStack_1f0,&pppppiStack_2c0);
                                  }
                                  if ((long)uStack_1e0 < 0) {
                                    __ZdlPv(pppppppuStack_1f0);
                                  }
                                  FUN_109ffe1f4(&pppppiStack_2c0,
                                                (plVar25[0x1e] - plVar25[0x1d] >> 3) *
                                                0x4ec4ec4ec4ec4ec5);
                                  lVar48 = plVar25[0x1e] - plVar25[0x1d];
                                  if (lVar48 != 0) {
                                    lVar48 = (lVar48 >> 3) * 0x4ec4ec4ec4ec4ec5;
                                    lVar53 = (long)pppppiStack_2b8 - (long)pppppiStack_2c0 >> 2;
                                    psVar45 = (short *)(plVar25[0x1d] + 0x62);
                                    ppppppiVar58 = (int ******)pppppiStack_2c0;
                                    do {
                                      if (lVar53 == 0) goto LAB_10a021884;
                                      sVar13 = *psVar45;
                                      *(int *)ppppppiVar58 = (int)sVar13;
                                      if (sVar13 != 1000) {
                                        *psVar45 = 2;
                                      }
                                      ppppppiVar58 = (int ******)((long)ppppppiVar58 + 4);
                                      lVar53 = lVar53 + -1;
                                      psVar45 = psVar45 + 0x34;
                                      lVar48 = lVar48 + -1;
                                    } while (lVar48 != 0);
                                  }
                                  if ((*(byte *)(param_1 + 0xc3) & 1) != 0) {
                                    FUN_109febc44(&pppppppuStack_1f0);
                                    FUN_10a002568(&uStack_1e0,&UNK_10f63227a,8);
                                    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
                                    plVar29 = &uStack_1e0;
                                    FUN_10a002568(plVar29,&UNK_10f632283,9);
                                    *(uint *)((long)plVar29 + *(long *)(*plVar29 + -0x18) + 8) =
                                         *(uint *)((long)plVar29 + *(long *)(*plVar29 + -0x18) + 8)
                                         & 0xffffffb5 | 8;
                                    uVar47 = (*(long *)(*param_1 + 0x78) -
                                              *(long *)(*param_1 + 0x70) >> 5) * -0x5555555555555555
                                    ;
                                    if (uVar47 < uVar22 || uVar47 - uVar22 == 0) goto LAB_10a021884;
                                    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEt();
                                    FUN_10a002568();
                                    puVar34 = &uStack_1e0;
                                    FUN_10a002568(puVar34,&DAT_10f638984,1);
                                    FUN_10a00ff18(&ppppppiStack_260,
                                                  *(undefined8 *)
                                                   (*(long *)(pbVar54 + 0x1a8) + 0x168));
                                    pppppiVar36 = pppppiStack_258;
                                    pppppppiVar33 = (int *******)ppppppiStack_260;
                                    if (-1 < (long)uStack_250) {
                                      pppppiVar36 = (int *****)(uStack_250 >> 0x38);
                                      pppppppiVar33 = &ppppppiStack_260;
                                    }
                                    FUN_10a002568(puVar34,pppppppiVar33,pppppiVar36);
                                    FUN_10a002568();
                                    if ((long)uStack_250 < 0) {
                                      __ZdlPv(ppppppiStack_260);
                                    }
                                    FUN_10a002568(&uStack_1e0,&UNK_10f63228d,0xd);
                                    FUN_10a002568();
                                    FUN_10a002568();
                                    FUN_10a002568(&uStack_1e0,&UNK_10f63229b,0xf);
                                    FUN_10a002568();
                                    FUN_10a002568();
                                    *puVar27 = 4;
                                    func_0x00010a002480(&ppppppiStack_260,&ppuStack_1d8,&iStack_278)
                                    ;
                                    if (*(char *)((long)puVar27 + 0x1f) < '\0') {
                                      __ZdlPv(*(undefined8 *)(puVar27 + 2));
                                    }
                                    *(int ******)(puVar27 + 4) = pppppiStack_258;
                                    *(int *******)(puVar27 + 2) = ppppppiStack_260;
                                    *(ulong *)(puVar27 + 6) = uStack_250;
                                    pppppppuStack_1f0 = (undefined *******)&PTR_SUB_1108a5a38;
                                    appuStack_170[0] = &PTR_DAT_1108a5a88;
                                    uStack_1e0 = &PTR_DAT_1108a5a60;
                                    ppuStack_1d8 = &PTR_DAT_11088d7b0;
                                    if (cStack_181 < '\0') {
                                      __ZdlPv(uStack_198);
                                    }
                                    iStack_300 = iStack_300 + 1;
                                    ppuStack_1d8 = ppuVar1;
                                    __ZNSt3__16localeD1Ev(auStack_1d0);
                                    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev
                                              (&pppppppuStack_1f0,&PTR_PTR_1108a5aa0);
                                    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_170);
                                  }
                                  plVar29 = param_3;
                                  ___dynamic_cast(param_3,&PTR_DAT_110c558e0,&PTR_DAT_110c545a0,0);
                                  if (plVar29 != (long *)0x0) {
                                    FUN_10abc07e8();
                                    *(int ******)((long)plVar25 + 0x29) = uStack_238;
                                    *(int *******)((long)plVar25 + 0x21) = uStack_240;
                                    *(undefined1 *)((long)plVar25 + 0x1c) = uVar9;
                                    *(byte *)(plVar25 + 4) = bVar51;
                                    *(ulong *)((long)plVar25 + 0x39) =
                                         CONCAT17(uStack_221,uStack_228);
                                    *(int ******)((long)plVar25 + 0x31) = pppppiStack_230;
                                    plVar25[9] = lStack_219;
                                    plVar25[8] = CONCAT71(uStack_220,uStack_221);
                                    *(byte *)((long)plVar25 + 0x1b) = bVar12;
                                    *(byte *)(plVar25 + 3) =
                                         *(byte *)(plVar25 + 3) & 0xf9 | bVar10 & 6;
                                    *(undefined1 *)((long)plVar25 + 0x65) = uVar11;
                                    if (iVar8 < 0x141) {
                                      if (*(char *)((long)param_1 + 0x674) == '\x01') {
                                        func_0x000107c2b07c(&pppppppuStack_1f0,&UNK_10f631ff2);
                                        ppppppiStack_260 =
                                             (int ******)
                                             ((ulong)ppppppiStack_260 & 0xffffffffffffff00);
                                        func_0x00010a01edd4(plVar25,&pppppppuStack_1f0,
                                                            &ppppppiStack_260);
                                      }
                                      else {
                                        func_0x000107c2b074(&pppppppuStack_1f0,&PTR_DAT_110b9d420);
                                        FUN_10a048040(plVar25[0x2b],&pppppppuStack_1f0);
                                      }
                                    }
                                    else {
                                      func_0x000107c2b07c(&pppppppuStack_1f0,&DAT_10f631fd1);
                                      ppppppiStack_260 = (int ******)0x0;
                                      pppppiStack_258 = (int *****)0x0;
                                      FUN_10a01ebbc(plVar25,&pppppppuStack_1f0,&ppppppiStack_260);
                                    }
                                    if ((long)uStack_1e0 < 0) {
                                      __ZdlPv(pppppppuStack_1f0);
                                    }
                                    uVar26 = 1;
                                    FUN_10a01efe8(1,iVar8);
                                    FUN_10a5e18f4(plVar25,uVar26);
                                    uVar26 = 7;
                                    FUN_10a01efe8(7,iVar8);
                                    FUN_10a5e18f4(plVar25,uVar26);
                                    uVar26 = 3;
                                    FUN_10a01efe8(3,iVar8);
                                    FUN_10a021f00(plVar25,uVar26);
                                    uVar26 = 10;
                                    FUN_10a01efe8(10,iVar8);
                                    FUN_10a021f00(plVar25,uVar26);
                                    uVar26 = 2;
                                    FUN_10a01efe8(2,iVar8);
                                    FUN_10a021f00(plVar25,uVar26);
                                    if (iVar8 < 0x13e) {
                                      func_0x000107c2b074(&pppppppuStack_1f0,&PTR_DAT_110c52528);
                                      FUN_10a021f48(plVar25,ppuStack_1d8);
                                      if ((long)uStack_1e0 < 0) {
                                        __ZdlPv(pppppppuStack_1f0);
                                      }
                                      func_0x000107c2b074(&pppppppuStack_1f0,&PTR_DAT_110c52550);
                                      FUN_10a021f48(plVar25,ppuStack_1d8);
                                      if ((long)uStack_1e0 < 0) {
                                        __ZdlPv(pppppppuStack_1f0);
                                      }
                                      func_0x000107c2b074(&pppppppuStack_1f0,&PTR_DAT_110c52578);
                                      FUN_10a021f48(plVar25,ppuStack_1d8);
                                    }
                                    else {
                                      func_0x000107c2b074(&pppppppuStack_1f0,&PTR_DAT_110c52618);
                                      FUN_10a021f48(plVar25,ppuStack_1d8);
                                    }
                                    if ((long)uStack_1e0 < 0) {
                                      __ZdlPv(pppppppuStack_1f0);
                                    }
                                    lVar48 = plVar25[0x1e] - plVar25[0x1d];
                                    if (lVar48 == 0) {
                                      if ((int ******)pppppiStack_2c0 == (int ******)0x0)
                                      goto LAB_10a021580;
                                    }
                                    else {
                                      lVar48 = (lVar48 >> 3) * 0x4ec4ec4ec4ec4ec5;
                                      lVar53 = (long)pppppiStack_2b8 - (long)pppppiStack_2c0 >> 2;
                                      puVar44 = (undefined2 *)(plVar25[0x1d] + 0x62);
                                      ppppppiVar58 = (int ******)pppppiStack_2c0;
                                      do {
                                        if (lVar53 == 0) goto LAB_10a021884;
                                        *puVar44 = (short)*(int *)ppppppiVar58;
                                        lVar53 = lVar53 + -1;
                                        lVar48 = lVar48 + -1;
                                        puVar44 = puVar44 + 0x34;
                                        ppppppiVar58 = (int ******)((long)ppppppiVar58 + 4);
                                      } while (lVar48 != 0);
                                    }
                                    pppppiStack_2b8 = pppppiStack_2c0;
                                    goto LAB_10a02157c;
                                  }
                                  FUN_10a0ee06c(&UNK_10f633a98);
                                }
                              }
                              goto LAB_10a021884;
                            }
                            if ((char)param_1[0xc3] == '\x01') {
                              FUN_10a00ff18(&pppppiStack_2c0,
                                            *(undefined8 *)(*(long *)(pbVar54 + 0x1a8) + 0x168));
                              ppppppiVar58 = &pppppiStack_2c0;
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                        (ppppppiVar58,0,&UNK_10f632128,8);
                              uStack_238 = ppppppiVar58[1];
                              uStack_240 = (int ******)*ppppppiVar58;
                              pppppiStack_230 = ppppppiVar58[2];
                              ppppppiVar58[1] = (int *****)0x0;
                              ppppppiVar58[2] = (int *****)0x0;
                              *ppppppiVar58 = (int *****)0x0;
                              plVar29 = &uStack_240;
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                        (plVar29,&UNK_10f632198,0x1b);
                              uStack_1e0 = (undefined **)plVar29[2];
                              pppppiStack_1e8 = (int *****)plVar29[1];
                              pppppppuStack_1f0 = (undefined *******)*plVar29;
                              plVar29[1] = 0;
                              plVar29[2] = 0;
                              *plVar29 = 0;
                              ppppppppuVar30 = (undefined ********)pppppppuStack_1f0;
                              bVar51 = uStack_1e0._7_1_;
                              ppppppiVar58 = (int ******)pppppiStack_1e8;
                              ppppppppuVar42 = (undefined ********)pppppppuStack_1f0;
                              if (-1 < (long)uStack_1e0) {
                                ppppppiVar58 = (int ******)(ulong)uStack_1e0._7_1_;
                                ppppppppuVar42 = &pppppppuStack_1f0;
                              }
                              FUN_10a00edf0(param_2 + 0x10,2,ppppppppuVar42,ppppppiVar58,param_2 + 8
                                           );
                              goto LAB_10a020290;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if ((*(long **)(lVar53 + 0x2a0) == *(long **)(lVar53 + 0x2a8)) ||
                   ((lVar38 = **(long **)(lVar53 + 0x2a0), lVar38 == 0 ||
                    (*(long **)(lVar38 + 0x228) == *(long **)(lVar38 + 0x230))))) {
                  lVar38 = 0;
                }
                else {
                  lVar38 = **(long **)(lVar38 + 0x228);
                }
                lVar39 = *(long *)(lVar53 + 0x3f0);
                if (lVar39 != 0) {
                  if (*(long **)(lVar39 + 0x228) == *(long **)(lVar39 + 0x230)) goto LAB_10a021580;
                  lVar38 = **(long **)(lVar39 + 0x228);
                }
                if (lVar38 != 0) {
                  uVar22 = *(ulong *)(lVar38 + 0x188);
                  FUN_10a0448a8(uVar22,1);
                  if ((uVar22 & 1) != 0) goto LAB_10a01fbe0;
                }
              }
            }
          }
        }
      }
LAB_10a021580:
      lVar59 = lVar59 + 1;
    } while (lVar59 != (lVar50 >> 3) * 0x6fb586fb586fb587);
  }
  if ((*(byte *)(param_1 + 0xc3) & 1) != 0) {
    *puVar21 = 4;
    FUN_10a01f5fc(&pppppiStack_2c0,param_6);
    ppppppiVar58 = &pppppiStack_2c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppppiVar58,": ",2);
    uStack_238 = ppppppiVar58[1];
    uStack_240 = (int ******)*ppppppiVar58;
    pppppiStack_230 = ppppppiVar58[2];
    ppppppiVar58[1] = (int *****)0x0;
    ppppppiVar58[2] = (int *****)0x0;
    *ppppppiVar58 = (int *****)0x0;
    __ZNSt3__19to_stringEi(&ppppppiStack_260,iStack_300);
    pppppiVar36 = pppppiStack_258;
    pppppppiVar33 = (int *******)ppppppiStack_260;
    if (-1 < (long)uStack_250) {
      pppppiVar36 = (int *****)(uStack_250 >> 0x38);
      pppppppiVar33 = &ppppppiStack_260;
    }
    plVar20 = &uStack_240;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar20,pppppppiVar33,pppppiVar36);
    pppppiStack_1e8 = (int *****)plVar20[1];
    pppppppuStack_1f0 = (undefined *******)*plVar20;
    uStack_1e0 = (undefined **)plVar20[2];
    plVar20[1] = 0;
    plVar20[2] = 0;
    *plVar20 = 0;
    ppppppppuVar42 = &pppppppuStack_1f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppppppuVar42,&UNK_10f6322ab,0xb);
    pppppppuVar35 = *ppppppppuVar42;
    fStack_b0 = SUB84(ppppppppuVar42[1],0);
    uStack_ac._0_3_ = (undefined3)((ulong)ppppppppuVar42[1] >> 0x20);
    uStack_ac._3_1_ = (undefined1)*(undefined8 *)((long)ppppppppuVar42 + 0xf);
    uStack_a8 = (undefined7)((ulong)*(undefined8 *)((long)ppppppppuVar42 + 0xf) >> 8);
    uVar9 = *(undefined1 *)((long)ppppppppuVar42 + 0x17);
    ppppppppuVar42[1] = (undefined *******)0x0;
    ppppppppuVar42[2] = (undefined *******)0x0;
    *ppppppppuVar42 = (undefined *******)0x0;
    if (*(char *)((long)puVar21 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(puVar21 + 2));
    }
    *(undefined ********)(puVar21 + 2) = pppppppuVar35;
    *(ulong *)(puVar21 + 4) = CONCAT44(uStack_ac,fStack_b0);
    *(ulong *)((long)puVar21 + 0x17) = CONCAT71(uStack_a8,uStack_ac._3_1_);
    *(undefined1 *)((long)puVar21 + 0x1f) = uVar9;
    if ((long)uStack_1e0 < 0) {
      __ZdlPv(pppppppuStack_1f0);
    }
    if ((long)uStack_250 < 0) {
      __ZdlPv(ppppppiStack_260);
    }
    if ((long)pppppiStack_230 < 0) {
      __ZdlPv(uStack_240);
    }
    if ((long)ppppppiStack_2b0 < 0) {
      __ZdlPv(pppppiStack_2c0);
    }
  }
  lVar50 = param_1[0xf9];
  FUN_10a18cbd8(lVar50 + 0x288);
  FUN_10a1da3a4(lVar50,0,0,0,4,0,0,0);
  lVar50 = param_1[0xfb];
  FUN_10a18cbd8(lVar50 + 0x288);
  FUN_10a1da3a4(lVar50,0,0,0,4,0,0,0);
  if (*(char *)((long)param_1 + 0x87) == '\x01') {
    plVar20 = param_3 + 4;
    FUN_10a5dfd94(plVar20,param_1[0xf3]);
    plVar29 = param_3 + 4;
    FUN_10a01eacc(plVar29,plVar20);
    uStack_240 = (int ******)
                 CONCAT44(uStack_240._4_4_,
                          *(float *)(param_1 + 2) *
                          (float)((int)((ulong)(*(long *)(*param_1 + 0x78) -
                                               *(long *)(*param_1 + 0x70)) >> 5) * -0x55555555 + 1)
                          * 2.0 + -1.0);
    func_0x000107c2b07c(&pppppppuStack_1f0,&UNK_10f632232);
    FUN_10a01671c(plVar29,&pppppppuStack_1f0,&uStack_240);
    if ((long)uStack_1e0 < 0) {
      __ZdlPv(pppppppuStack_1f0);
    }
    lVar50 = 0;
    FUN_10a2421c8();
    (**(code **)(*param_3 + 0x58))(param_3,*(undefined8 *)(lVar50 + 0x208),plVar20,&UNK_10e482b48,3)
    ;
  }
  if ((char)lVar17 != '\0') {
    iVar8 = *(int *)(param_2 + 8);
    if (iVar8 < 2) {
      iVar8 = 1;
    }
    *(int *)(param_2 + 8) = iVar8 + -1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
LAB_10a021858:
  FUN_10ab725fc();
LAB_10a021884:
                    /* WARNING: Does not return */
  pcVar18 = (code *)SoftwareBreakpoint(1,0x10a021888);
  (*pcVar18)();
}



/* Entry: 10a021d3c; end: 10a021e1f;  */

long **** FUN_10a021d3c(long ****param_1,ulong param_2)

{
  short sVar1;
  code *pcVar2;
  long ****pppplVar3;
  long ***ppplVar4;
  ulong uVar5;
  long ***ppplVar6;
  ulong uVar7;
  long ***ppplStack_58;
  long **pplStack_50;
  long **pplStack_48;
  long ***ppplStack_40;
  long ***ppplStack_38;
  
  ppplVar4 = *param_1;
  if ((ulong)(((long)param_1[2] - (long)ppplVar4 >> 3) * 0x51b3bea3677d46cf) < param_2) {
    if (0xae4c415c9882b9 < param_2) {
      FUN_10a04755c();
      func_0x00010a04784c(&ppplStack_58);
      __Unwind_Resume();
      if ((param_2 & 0xffffffff) < (ulong)((long)param_1[0xc2] - (long)param_1[0xc1] >> 1)) {
        sVar1 = *(short *)((long)param_1[0xc1] + (param_2 & 0xffffffff) * 2);
        uVar5 = (ulong)sVar1;
        if ((long)uVar5 < 0) {
          uVar5 = uVar5 & 0x7fff;
          uVar7 = ((long)param_1[0xc5] - (long)param_1[0xc4] >> 3) * 0x51b3bea3677d46cf;
          if (uVar5 <= uVar7 && uVar7 - uVar5 != 0) {
            return (long ****)(param_1[0xc4] + uVar5 * 0x2f);
          }
        }
        else {
          uVar7 = ((long)param_1[0x3d] - (long)param_1[0x3c] >> 3) * 0x51b3bea3677d46cf;
          if (uVar5 <= uVar7 && uVar7 - uVar5 != 0) {
            return (long ****)(param_1[0x3c] + (long)(int)sVar1 * 0x2f);
          }
        }
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a021eb4);
      (*pcVar2)();
    }
    ppplVar6 = param_1[1];
    pppplVar3 = param_1;
    ppplStack_38 = (long ***)param_1;
    FUN_10a047570();
    ppplVar4 = (long ***)((long)pppplVar3 + ((long)ppplVar6 - (long)ppplVar4));
    ppplVar6 = (long ***)((long)ppplVar4 + ((long)*param_1 - (long)param_1[1]));
    ppplStack_58 = (long ***)pppplVar3;
    pplStack_50 = (long **)ppplVar4;
    pplStack_48 = (long **)ppplVar4;
    ppplStack_40 = (long ***)(pppplVar3 + param_2 * 0x2f);
    FUN_10a0475b8(param_1,*param_1,param_1[1],ppplVar6);
    ppplStack_58 = *param_1;
    *param_1 = ppplVar6;
    param_1[1] = ppplVar4;
    ppplStack_40 = param_1[2];
    param_1[2] = (long ***)(pppplVar3 + param_2 * 0x2f);
    param_1 = &ppplStack_58;
    pplStack_50 = (long **)ppplStack_58;
    pplStack_48 = (long **)ppplStack_58;
    func_0x00010a04784c(param_1);
  }
  return param_1;
}


