/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aa19534; end: 10aa1953b;  */

/* WARNING: Removing unreachable block (ram,0x00010aa19460) */
/* WARNING: Removing unreachable block (ram,0x00010aa19470) */

void FUN_10aa19534(undefined8 param_1,long param_2,undefined *param_3)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined8 ****ppppuVar7;
  long *plVar8;
  long lVar9;
  undefined8 ****ppppuVar10;
  undefined8 ***pppuStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 ***pppuStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 ***pppuStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  plVar8 = (long *)(param_2 + -0x10);
  FUN_10a3c7c48();
  lVar9 = *(long *)(param_2 + 0x158);
  if (*(char *)(lVar9 + 0x17f) < '\0') {
    param_3 = *(undefined **)(lVar9 + 0x168);
    func_0x000107c3192c(&uStack_70,param_3,*(undefined8 *)(lVar9 + 0x170));
  }
  else {
    uStack_68 = *(undefined8 *)(lVar9 + 0x170);
    uStack_70 = *(undefined8 *)(lVar9 + 0x168);
    uStack_60 = *(undefined8 *)(lVar9 + 0x178);
  }
  pppuStack_88 = (undefined8 ****)0x0;
  lStack_80 = 0;
  uStack_78 = 0;
  bVar2 = *(byte *)(param_2 + 0x290);
  if ((bVar2 & 6) != 2) {
    uStack_78 = 0x900000000000000;
    lStack_80 = 0x20;
    pppuStack_88 = (undefined8 ****)0x3a7367616c66202c;
    if ((bVar2 >> 1 & 1) == 0) {
      param_3 = &UNK_10f68a6e1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppuStack_88,&UNK_10f68a6e1,10);
    }
    if ((bVar2 >> 2 & 1) != 0) {
      param_3 = &UNK_10f68a6ec;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppuStack_88,&UNK_10f68a6ec,0xb);
    }
    if ((long)uStack_78._7_1_ < 0) {
      if (lStack_80 == 0) goto LAB_10aa194d0;
      lVar9 = lStack_80 + -1;
      ppppuVar10 = (undefined8 ****)pppuStack_88;
      lStack_80 = lVar9;
    }
    else {
      if (uStack_78._7_1_ == '\0') goto LAB_10aa194d0;
      lVar9 = (long)uStack_78._7_1_ + -1;
      uStack_78 = CONCAT17((char)lVar9,(undefined7)uStack_78);
      ppppuVar10 = &pppuStack_88;
    }
    *(undefined1 *)((long)ppppuVar10 + lVar9) = 0;
  }
  if ((*(long *)(*(long *)(param_2 + 0x1e0) + 0x30) == 0) &&
     (*(long *)(*(long *)(param_2 + 0x1f0) + 0x30) == 0)) {
    bVar5 = *(long *)(*(long *)(param_2 + 0x200) + 0x30) != 0;
  }
  else {
    bVar5 = true;
  }
  if ((*(long *)(*(long *)(param_2 + 0x210) + 0x30) == 0) &&
     (*(long *)(*(long *)(param_2 + 0x220) + 0x30) == 0)) {
    bVar6 = *(long *)(*(long *)(param_2 + 0x230) + 0x30) != 0;
    pppuStack_a0 = (undefined8 ****)0x0;
    lStack_98 = 0;
    uStack_90 = 0;
    if (bVar5 || bVar6) goto LAB_10aa1923c;
  }
  else {
    bVar6 = true;
LAB_10aa1923c:
    uStack_90 = 0xa00000000000000;
    pppuStack_a0 = (undefined8 ****)0x6e657473696c202c;
    lStack_98 = 0x203a;
    if (bVar5) {
      param_3 = &UNK_10f68a703;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppuStack_a0,&UNK_10f68a703,10);
    }
    if (bVar6) {
      param_3 = &UNK_10f68a70e;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppuStack_a0,&UNK_10f68a70e,8);
    }
    if ((long)uStack_90._7_1_ < 0) {
      if (lStack_98 == 0) goto LAB_10aa194d0;
      lVar9 = lStack_98 + -1;
      ppppuVar10 = (undefined8 ****)pppuStack_a0;
      lStack_98 = lVar9;
    }
    else {
      if (uStack_90._7_1_ == '\0') goto LAB_10aa194d0;
      lVar9 = (long)uStack_90._7_1_ + -1;
      uStack_90 = CONCAT17((char)lVar9,(undefined7)uStack_90);
      ppppuVar10 = &pppuStack_a0;
    }
    *(undefined1 *)((long)ppppuVar10 + lVar9) = 0;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  lVar9 = *(long *)(param_2 + 0x280);
  if (lVar9 != 0) {
    lStack_b0 = 0x1200000000002720;
    uStack_b8 = 0x3a73676e69747465;
    uStack_c0 = 0x53646c726f77202c;
    uVar1 = *(ulong *)(lVar9 + 0x60);
    plVar3 = (long *)*(long *)(lVar9 + 0x58);
    if (-1 < (char)*(byte *)(lVar9 + 0x6f)) {
      uVar1 = (ulong)*(byte *)(lVar9 + 0x6f);
      plVar3 = (long *)(lVar9 + 0x58);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_c0,plVar3,uVar1);
    param_3 = &DAT_10f638984;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_c0,&DAT_10f638984,1);
  }
  (**(code **)(*plVar8 + 0x38))(plVar8);
  if ((undefined *)0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
LAB_10aa194d0:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa194d4);
    (*pcVar4)();
  }
  if (param_3 < (undefined *)0x17) {
    uStack_c8 = CONCAT17((char)param_3,(undefined7)uStack_c8);
    ppppuVar7 = &pppuStack_d8;
    if (param_3 == (undefined *)0x0) goto LAB_10aa193a0;
  }
  else {
    ppppuVar10 = (undefined8 ****)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      ppppuVar10 = (undefined8 ****)(((ulong)param_3 | 7) + 1);
    }
    ppppuVar7 = ppppuVar10;
    __Znwm();
    uStack_c8 = (ulong)ppppuVar10 | 0x8000000000000000;
    pppuStack_d8 = ppppuVar7;
    puStack_d0 = param_3;
  }
  _memmove(ppppuVar7,plVar8,param_3);
LAB_10aa193a0:
  *(undefined1 *)((long)ppppuVar7 + (long)param_3) = 0;
  FUN_10a0ee900(param_1,&UNK_10f68a72a,0x17);
  if ((long)uStack_c8 < 0) {
    __ZdlPv(pppuStack_d8);
  }
  if (lStack_b0 < 0) {
    __ZdlPv(uStack_c0);
  }
  if (uStack_90 < 0) {
    __ZdlPv(pppuStack_a0);
  }
  return;
}



/* Entry: 10aa1953c; end: 10aa197ab;  */

void FUN_10aa1953c(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar9 = param_2;
    uVar8 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar7 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar7 = (long *)(param_4 + 0x20);
    }
    uVar8 = *puVar4;
    lVar9 = *plVar7;
  }
  lVar10 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar10);
  FUN_10a57719c(lVar10,lVar9,uVar8);
  plVar7 = (long *)0x28;
  __Znwm();
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  *plVar7 = (long)&PTR_DAT_110c3c1b8;
  plVar7[2] = 0;
  plVar7[3] = lVar10;
  plVar7[4] = (long)FUN_10a3df8cc;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
    }
    else {
      if (*(long *)(*(long *)(lVar10 + 0x30) + 8) != -1) goto LAB_10aa196a0;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar9 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
LAB_10aa196a0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar10 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar10 + 0x180) & 0xfffc;
  *(ushort *)(lVar10 + 0x180) = uVar3 | *(ushort *)(lVar10 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar10 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_50 = lVar10;
  plStack_48 = plVar7;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar11 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  FUN_10aa16d10(lVar10,param_2);
  param_1[1] = (long)plVar7;
  *param_1 = lVar10;
  return;
}



/* Entry: 10aa197ac; end: 10aa1982f;  */

void FUN_10aa197ac(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  long *plStack_30;
  long *plStack_28;
  
  if (*(long *)(param_1 + 0x260) == 0) {
    FUN_10aa18970(&plStack_30,*(undefined8 *)(param_1 + 0x170));
    FUN_10aa18a98(param_1 + 0x260,&plStack_30);
    if (plStack_28 != (long *)0x0) {
      plVar3 = plStack_28 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x3a0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  plStack_28 = *(long **)(param_1 + 600);
  plStack_30 = *(long **)(param_1 + 0x250);
  if (*(long *)(param_1 + 600) != 0) {
    plVar3 = (long *)(*(long *)(param_1 + 600) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((*(byte *)(param_1 + 0x2a0) >> 1 & 1) == 0) {
    plVar3 = *(long **)(param_1 + 0x168);
    uVar6 = 1;
    FUN_10aa199c8(plVar3,1,0x167 < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18));
    uStack_38 = (undefined4)uVar6;
    uStack_34 = (undefined1)(uVar6 >> 0x20);
    plStack_40 = plVar3;
    if ((uVar6 >> 0x20 & 1) != 0) {
      (**(code **)(*plStack_30 + 0x70))(&plStack_50,plStack_30,&plStack_30,&plStack_40);
      plVar3 = plStack_28;
      plStack_28 = plStack_48;
      plStack_30 = plStack_50;
      plStack_50 = (long *)0x0;
      plStack_48 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        plVar4 = plVar3 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      plVar3 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
    }
  }
  plVar3 = (long *)(param_1 + 0x2b0);
  plVar4 = *(long **)(param_1 + 0x2b0);
  if (plVar4 == (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x250);
    plStack_58 = plStack_28;
    plStack_60 = plStack_30;
    if (plStack_28 != (long *)0x0) {
      plVar5 = plStack_28 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    (**(code **)(*plVar4 + 0x68))(&plStack_40,plVar4,&plStack_60);
    plVar4 = plStack_40;
    plStack_40 = (long *)0x0;
    plVar5 = (long *)*plVar3;
    *plVar3 = (long)plVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
      plVar3 = plStack_40;
      plStack_40 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    plVar3 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar3,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar7 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10aa19830; end: 10aa19837;  */

void FUN_10aa19830(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  long *plStack_30;
  long *plStack_28;
  
  if (*(long *)(param_1 + 0x1f8) == 0) {
    FUN_10aa18970(&plStack_30,*(undefined8 *)(param_1 + 0x108));
    FUN_10aa18a98(param_1 + 0x1f8,&plStack_30);
    if (plStack_28 != (long *)0x0) {
      plVar3 = plStack_28 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x338) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x340) = 0;
  plStack_28 = *(long **)(param_1 + 0x1f0);
  plStack_30 = *(long **)(param_1 + 0x1e8);
  if (*(long *)(param_1 + 0x1f0) != 0) {
    plVar3 = (long *)(*(long *)(param_1 + 0x1f0) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((*(byte *)(param_1 + 0x238) >> 1 & 1) == 0) {
    plVar3 = *(long **)(param_1 + 0x100);
    uVar6 = 1;
    FUN_10aa199c8(plVar3,1,0x167 < *(int *)(*(long *)(*(long *)(param_1 + 0x108) + 0xa20) + 0x18));
    uStack_38 = (undefined4)uVar6;
    uStack_34 = (undefined1)(uVar6 >> 0x20);
    plStack_40 = plVar3;
    if ((uVar6 >> 0x20 & 1) != 0) {
      (**(code **)(*plStack_30 + 0x70))(&plStack_50,plStack_30,&plStack_30,&plStack_40);
      plVar3 = plStack_28;
      plStack_28 = plStack_48;
      plStack_30 = plStack_50;
      plStack_50 = (long *)0x0;
      plStack_48 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        plVar4 = plVar3 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      plVar3 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
    }
  }
  plVar3 = (long *)(param_1 + 0x248);
  plVar4 = *(long **)(param_1 + 0x248);
  if (plVar4 == (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x1e8);
    plStack_58 = plStack_28;
    plStack_60 = plStack_30;
    if (plStack_28 != (long *)0x0) {
      plVar5 = plStack_28 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    (**(code **)(*plVar4 + 0x68))(&plStack_40,plVar4,&plStack_60);
    plVar4 = plStack_40;
    plStack_40 = (long *)0x0;
    plVar5 = (long *)*plVar3;
    *plVar3 = (long)plVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
      plVar3 = plStack_40;
      plStack_40 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    plVar3 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar3,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar7 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10aa19838; end: 10aa199c7;  */

undefined1  [16] FUN_10aa19838(long *param_1,long *param_2,int param_3)

{
  byte *pbVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x19;
  long unaff_x20;
  byte bVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_168 [12];
  uint uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  uint uStack_144;
  undefined4 uStack_140;
  uint uStack_13c;
  long lStack_130;
  long *plStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  long lStack_bc;
  undefined4 uStack_b4;
  undefined1 uStack_b0;
  undefined1 auStack_a8 [64];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar9 = *(byte *)(param_1 + 0x54);
  plVar3 = param_1;
  if (((bVar9 & 1) != 0) && (unaff_x19 = param_1, *(int *)((long)param_1 + 0x3b4) == 0)) {
    lVar10 = param_1[0x2d];
    plVar3 = (long *)param_1[0x2e];
    unaff_x20 = *(long *)(lVar10 + 0x140);
    if ((*(byte *)(unaff_x20 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(unaff_x20);
      bVar9 = *(byte *)(param_1 + 0x54);
    }
    uVar5 = (ulong)((bVar9 & 2) == 0);
    lVar2 = lVar10;
    FUN_10aa199c8(lVar10,uVar5,0x167 < *(int *)(plVar3[0x144] + 0x18));
    bVar9 = *(byte *)(param_1 + 0x54) >> 1 & 2;
    plVar4 = param_1;
    (**(code **)(*param_1 + 0xf8))(param_1,0x3f7860c77ce5b69d);
    if (plVar4 != (long *)0x0) {
      pbVar1 = (byte *)(plVar4 + 0x77);
      if ((*(byte *)(plVar4[0x4a] + 0x3d) & 1) != 0) {
        pbVar1 = (byte *)0x1137ec070;
      }
      bVar9 = (bVar9 | (*pbVar1 & 1) << 3) ^ 8;
    }
    puVar6 = auStack_a8;
    FUN_10a3df648();
    param_3 = (int)puVar6;
    param_2 = (long *)0x0;
    if (lVar10 != 0) {
      lVar10 = lVar10 << 3;
      plVar4 = plVar3;
      do {
        lStack_110 = *plVar4;
        uStack_f8 = *(undefined8 *)(unaff_x20 + 200);
        uStack_100 = *(undefined8 *)(unaff_x20 + 0xc0);
        uStack_e8 = *(undefined8 *)(unaff_x20 + 0xd8);
        uStack_f0 = *(undefined8 *)(unaff_x20 + 0xd0);
        uStack_d8 = *(undefined8 *)(unaff_x20 + 0xe8);
        uStack_e0 = *(undefined8 *)(unaff_x20 + 0xe0);
        uStack_c8 = *(undefined8 *)(unaff_x20 + 0xf8);
        uStack_d0 = *(undefined8 *)(unaff_x20 + 0xf0);
        uStack_b0 = (undefined1)(uVar5 >> 0x20);
        uStack_b4 = (undefined4)uVar5;
        plVar3 = (long *)param_1[0x4a];
        param_2 = &lStack_110;
        plStack_108 = param_1;
        bStack_c0 = bVar9;
        lStack_bc = lVar2;
        (**(code **)(*plVar3 + 0x58))();
        param_3 = (int)puVar6;
        lVar10 = lVar10 + -8;
        plVar4 = plVar4 + 1;
      } while (lVar10 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if ((int)param_2 == 0) {
      uVar7 = 0;
      uVar8 = 0;
      uVar5 = 0;
    }
    else {
      pcStack_118 = FUN_10aa199c8;
      plVar4 = plVar3;
      lStack_130 = unaff_x20;
      plStack_128 = unaff_x19;
      puStack_120 = &stack0xfffffffffffffff0;
      FUN_10a909124();
      if ((plVar4 == (long *)0x0) || (plVar4 = (long *)plVar4[0x4c], plVar4 == (long *)0x0)) {
        uVar7 = 0;
        uVar8 = 0;
        uVar5 = 0;
      }
      else {
        FUN_10a347d04();
        if (plVar4 == (long *)0x0) {
          uStack_148 = 0;
          uStack_144 = 0xff7fffff;
          uStack_150 = 0;
          uStack_140 = 0xff7fffff;
          uStack_13c = 0xff7fffff;
        }
        else {
          (**(code **)(*plVar4 + 0x38))(&uStack_150);
        }
        if ((param_3 != 0) && (FUN_10a909124(), plVar3 != (long *)0x0)) {
          (**(code **)(*plVar3 + 0x188))();
          lVar10 = plVar3[0x60];
          if (lVar10 != 0) {
            if ((*(byte *)(lVar10 + 0x2a) & 0x24) != 0) {
              FUN_10a3e8fd4(lVar10);
            }
            FUN_10a005448(auStack_168,&uStack_150,lVar10 + 0xc0);
            uStack_144 = uStack_15c;
            uStack_140 = (undefined4)uStack_158;
            uStack_13c = (uint)((ulong)uStack_158 >> 0x20);
          }
        }
        uVar7 = CONCAT44(uStack_140,uStack_144) & 0xffffffffffffff00;
        uVar5 = (ulong)uStack_13c | 0x100000000;
        uVar8 = (ulong)uStack_144 & 0xff;
      }
    }
    auVar12._0_8_ = uVar8 | uVar7;
    auVar12._8_8_ = uVar5;
    return auVar12;
  }
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = plVar3;
  return auVar11;
}



/* Entry: 10aa199c8; end: 10aa19ad3;  */

undefined1  [16] FUN_10aa199c8(long *param_1,int param_2,int param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_58 [12];
  uint uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  
  if (param_2 == 0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    plVar1 = param_1;
    FUN_10a909124();
    if ((plVar1 == (long *)0x0) || (plVar1 = (long *)plVar1[0x4c], plVar1 == (long *)0x0)) {
      uVar3 = 0;
      uVar4 = 0;
      uVar2 = 0;
    }
    else {
      FUN_10a347d04();
      if (plVar1 == (long *)0x0) {
        uStack_38 = 0;
        uStack_34 = 0xff7fffff;
        uStack_40 = 0;
        uStack_30 = 0xff7fffff;
        uStack_2c = 0xff7fffff;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(&uStack_40);
      }
      if ((param_3 != 0) && (FUN_10a909124(), param_1 != (long *)0x0)) {
        (**(code **)(*param_1 + 0x188))();
        lVar5 = param_1[0x60];
        if (lVar5 != 0) {
          if ((*(byte *)(lVar5 + 0x2a) & 0x24) != 0) {
            FUN_10a3e8fd4(lVar5);
          }
          FUN_10a005448(auStack_58,&uStack_40,lVar5 + 0xc0);
          uStack_34 = uStack_4c;
          uStack_30 = (undefined4)uStack_48;
          uStack_2c = (uint)((ulong)uStack_48 >> 0x20);
        }
      }
      uVar3 = CONCAT44(uStack_30,uStack_34) & 0xffffffffffffff00;
      uVar2 = (ulong)uStack_2c | 0x100000000;
      uVar4 = (ulong)uStack_34 & 0xff;
    }
  }
  auVar6._0_8_ = uVar4 | uVar3;
  auVar6._8_8_ = uVar2;
  return auVar6;
}



/* Entry: 10aa19ad4; end: 10aa19b03;  */

undefined1  [16] FUN_10aa19ad4(long param_1,long *param_2,int param_3)

{
  byte *pbVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x19;
  long unaff_x20;
  byte bVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_168 [12];
  uint uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  uint uStack_144;
  undefined4 uStack_140;
  uint uStack_13c;
  long lStack_130;
  long *plStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  long lStack_bc;
  undefined4 uStack_b4;
  undefined1 uStack_b0;
  undefined1 auStack_a8 [64];
  long lStack_68;
  
  plVar5 = (long *)(param_1 + -0x68);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar10 = *(byte *)(param_1 + 0x238);
  plVar4 = plVar5;
  if (((bVar10 & 1) != 0) && (unaff_x19 = plVar5, *(int *)(param_1 + 0x34c) == 0)) {
    lVar11 = *(long *)(param_1 + 0x100);
    plVar4 = *(long **)(param_1 + 0x108);
    unaff_x20 = *(long *)(lVar11 + 0x140);
    if ((*(byte *)(unaff_x20 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(unaff_x20);
      bVar10 = *(byte *)(param_1 + 0x238);
    }
    uVar6 = (ulong)((bVar10 & 2) == 0);
    lVar2 = lVar11;
    FUN_10aa199c8(lVar11,uVar6,0x167 < *(int *)(plVar4[0x144] + 0x18));
    bVar10 = *(byte *)(param_1 + 0x238) >> 1 & 2;
    plVar3 = plVar5;
    (**(code **)(*plVar5 + 0xf8))(plVar5,0x3f7860c77ce5b69d);
    if (plVar3 != (long *)0x0) {
      pbVar1 = (byte *)(plVar3 + 0x77);
      if ((*(byte *)(plVar3[0x4a] + 0x3d) & 1) != 0) {
        pbVar1 = (byte *)0x1137ec070;
      }
      bVar10 = (bVar10 | (*pbVar1 & 1) << 3) ^ 8;
    }
    puVar7 = auStack_a8;
    FUN_10a3df648();
    param_3 = (int)puVar7;
    param_2 = (long *)0x0;
    if (lVar11 != 0) {
      lVar11 = lVar11 << 3;
      plVar3 = plVar4;
      do {
        lStack_110 = *plVar3;
        uStack_f8 = *(undefined8 *)(unaff_x20 + 200);
        uStack_100 = *(undefined8 *)(unaff_x20 + 0xc0);
        uStack_e8 = *(undefined8 *)(unaff_x20 + 0xd8);
        uStack_f0 = *(undefined8 *)(unaff_x20 + 0xd0);
        uStack_d8 = *(undefined8 *)(unaff_x20 + 0xe8);
        uStack_e0 = *(undefined8 *)(unaff_x20 + 0xe0);
        uStack_c8 = *(undefined8 *)(unaff_x20 + 0xf8);
        uStack_d0 = *(undefined8 *)(unaff_x20 + 0xf0);
        uStack_b0 = (undefined1)(uVar6 >> 0x20);
        uStack_b4 = (undefined4)uVar6;
        plVar4 = *(long **)(param_1 + 0x1e8);
        param_2 = &lStack_110;
        plStack_108 = plVar5;
        bStack_c0 = bVar10;
        lStack_bc = lVar2;
        (**(code **)(*plVar4 + 0x58))();
        param_3 = (int)puVar7;
        lVar11 = lVar11 + -8;
        plVar3 = plVar3 + 1;
      } while (lVar11 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if ((int)param_2 == 0) {
      uVar8 = 0;
      uVar9 = 0;
      uVar6 = 0;
    }
    else {
      pcStack_118 = FUN_10aa199c8;
      plVar5 = plVar4;
      lStack_130 = unaff_x20;
      plStack_128 = unaff_x19;
      puStack_120 = &stack0xfffffffffffffff0;
      FUN_10a909124();
      if ((plVar5 == (long *)0x0) || (plVar5 = (long *)plVar5[0x4c], plVar5 == (long *)0x0)) {
        uVar8 = 0;
        uVar9 = 0;
        uVar6 = 0;
      }
      else {
        FUN_10a347d04();
        if (plVar5 == (long *)0x0) {
          uStack_148 = 0;
          uStack_144 = 0xff7fffff;
          uStack_150 = 0;
          uStack_140 = 0xff7fffff;
          uStack_13c = 0xff7fffff;
        }
        else {
          (**(code **)(*plVar5 + 0x38))(&uStack_150);
        }
        if ((param_3 != 0) && (FUN_10a909124(), plVar4 != (long *)0x0)) {
          (**(code **)(*plVar4 + 0x188))();
          lVar11 = plVar4[0x60];
          if (lVar11 != 0) {
            if ((*(byte *)(lVar11 + 0x2a) & 0x24) != 0) {
              FUN_10a3e8fd4(lVar11);
            }
            FUN_10a005448(auStack_168,&uStack_150,lVar11 + 0xc0);
            uStack_144 = uStack_15c;
            uStack_140 = (undefined4)uStack_158;
            uStack_13c = (uint)((ulong)uStack_158 >> 0x20);
          }
        }
        uVar8 = CONCAT44(uStack_140,uStack_144) & 0xffffffffffffff00;
        uVar6 = (ulong)uStack_13c | 0x100000000;
        uVar9 = (ulong)uStack_144 & 0xff;
      }
    }
    auVar13._0_8_ = uVar9 | uVar8;
    auVar13._8_8_ = uVar6;
    return auVar13;
  }
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = plVar4;
  return auVar12;
}



/* Entry: 10aa19b04; end: 10aa19b87;  */

void FUN_10aa19b04(long param_1)

{
  long lVar1;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  if (*(long *)(param_1 + 0x2b0) != 0) {
    FUN_10aa19b88(auStack_88,*(undefined8 *)(param_1 + 0x178),
                  0x62 < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18));
    lVar1 = *(long *)(param_1 + 0x2b0);
    *(undefined8 *)(lVar1 + 0x38) = uStack_58;
    *(undefined8 *)(lVar1 + 0x30) = uStack_60;
    *(undefined8 *)(lVar1 + 0x48) = uStack_48;
    *(undefined8 *)(lVar1 + 0x40) = uStack_50;
    *(ulong *)(lVar1 + 0x58) = CONCAT44(uStack_34,uStack_38);
    *(undefined8 *)(lVar1 + 0x50) = uStack_40;
    *(undefined8 *)(lVar1 + 100) = uStack_2c;
    *(ulong *)(lVar1 + 0x5c) = CONCAT44(uStack_30,uStack_34);
    *(undefined8 *)(lVar1 + 0x18) = uStack_78;
    *(undefined8 *)(lVar1 + 0x10) = uStack_80;
    *(undefined8 *)(lVar1 + 0x28) = uStack_68;
    *(undefined8 *)(lVar1 + 0x20) = uStack_70;
    *(undefined8 *)(lVar1 + 0xa0) = uStack_58;
    *(undefined8 *)(lVar1 + 0x98) = uStack_60;
    *(undefined8 *)(lVar1 + 0xb0) = uStack_48;
    *(undefined8 *)(lVar1 + 0xa8) = uStack_50;
    *(ulong *)(lVar1 + 0xc0) = CONCAT44(uStack_34,uStack_38);
    *(undefined8 *)(lVar1 + 0xb8) = uStack_40;
    *(undefined8 *)(lVar1 + 0xcc) = uStack_2c;
    *(ulong *)(lVar1 + 0xc4) = CONCAT44(uStack_30,uStack_34);
    *(undefined8 *)(lVar1 + 0x80) = uStack_78;
    *(undefined8 *)(lVar1 + 0x78) = uStack_80;
    *(undefined8 *)(lVar1 + 0x90) = uStack_68;
    *(undefined8 *)(lVar1 + 0x88) = uStack_70;
  }
  return;
}



/* Entry: 10aa19b88; end: 10aa19c3b;  */

void FUN_10aa19b88(undefined8 *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pfVar1 = param_2;
  FUN_10a2f095c();
  fVar2 = *pfVar1;
  fVar4 = pfVar1[1];
  fVar5 = pfVar1[2];
  fVar10 = fVar5;
  fVar9 = fVar4;
  fVar6 = fVar2;
  if (param_3 == 0) {
    fVar6 = 1.0;
    fVar9 = 1.0;
    fVar10 = 1.0;
  }
  FUN_10a2cd058(param_2);
  *param_1 = &PTR_DAT_110bd3ea8;
  fVar7 = fVar6 * 0.0;
  *(float *)(param_1 + 1) = fVar6;
  *(float *)((long)param_1 + 0xc) = fVar7;
  fVar8 = fVar9 * 0.0;
  fVar6 = fVar10 * 0.0;
  *(float *)(param_1 + 2) = fVar7;
  *(float *)((long)param_1 + 0x14) = fVar7;
  *(float *)(param_1 + 3) = fVar8;
  *(float *)((long)param_1 + 0x1c) = fVar9;
  *(float *)(param_1 + 4) = fVar8;
  *(float *)((long)param_1 + 0x24) = fVar8;
  *(float *)(param_1 + 5) = fVar6;
  *(float *)((long)param_1 + 0x2c) = fVar6;
  *(float *)(param_1 + 6) = fVar10;
  *(float *)((long)param_1 + 0x34) = fVar6;
  param_1[7] = 0;
  param_1[8] = 0x3f80000000000000;
  *(float *)(param_1 + 9) = fVar2;
  *(float *)((long)param_1 + 0x4c) = fVar4;
  *(float *)(param_1 + 10) = fVar5;
  uVar3 = *(undefined8 *)(pfVar1 + 3);
  *(undefined8 *)((long)param_1 + 0x5c) = *(undefined8 *)(pfVar1 + 5);
  *(undefined8 *)((long)param_1 + 0x54) = uVar3;
  return;
}



/* Entry: 10aa19c3c; end: 10aa19cd7;  */

void FUN_10aa19c3c(long param_1)

{
  long lVar1;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  if (*(long *)(param_1 + 0x2b0) != 0) {
    FUN_10aa19b88(auStack_88,*(undefined8 *)(param_1 + 0x178),
                  0x62 < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18));
    lVar1 = *(long *)(param_1 + 0x2b0);
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(lVar1 + 0xa0);
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(lVar1 + 0x98);
    *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar1 + 0xb0);
    *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(lVar1 + 0xa8);
    *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(lVar1 + 0xc0);
    *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(lVar1 + 0xb8);
    *(undefined8 *)(lVar1 + 100) = *(undefined8 *)(lVar1 + 0xcc);
    *(undefined8 *)(lVar1 + 0x5c) = *(undefined8 *)(lVar1 + 0xc4);
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar1 + 0x90);
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0xa0) = uStack_58;
    *(undefined8 *)(lVar1 + 0x98) = uStack_60;
    *(undefined8 *)(lVar1 + 0xb0) = uStack_48;
    *(undefined8 *)(lVar1 + 0xa8) = uStack_50;
    *(ulong *)(lVar1 + 0xc0) = CONCAT44(uStack_34,uStack_38);
    *(undefined8 *)(lVar1 + 0xb8) = uStack_40;
    *(undefined8 *)(lVar1 + 0xcc) = uStack_2c;
    *(ulong *)(lVar1 + 0xc4) = CONCAT44(uStack_30,uStack_34);
    *(undefined8 *)(lVar1 + 0x80) = uStack_78;
    *(undefined8 *)(lVar1 + 0x78) = uStack_80;
    *(undefined8 *)(lVar1 + 0x90) = uStack_68;
    *(undefined8 *)(lVar1 + 0x88) = uStack_70;
  }
  return;
}



/* Entry: 10aa19cd8; end: 10aa19d13;  */

ulong FUN_10aa19cd8(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 in_stack_ffffffffffffffc8;
  long lStack_28;
  
  puVar3 = &stack0xffffffffffffffe0;
  lVar2 = *(long *)(param_2 + 0x250);
  if (*(char *)(lVar2 + 0x3c) != '\0') {
    FUN_10a0edfc4();
    lVar2 = *(long *)(puVar3 + 0x2b0);
    uVar4 = 0;
    if ((lVar2 != 0) && (___dynamic_cast(lVar2,&PTR_DAT_110bd3e38,&PTR_DAT_110c2e730,0), lVar2 != 0)
       ) {
      uVar4 = (ulong)*(uint *)(lVar2 + 0x110);
    }
    return uVar4;
  }
  FUN_10a40668c(lVar2 + 0x48);
  lVar1 = *(long *)(lVar2 + 0x48);
  if ((lVar1 != 0) && (func_0x00010aae9fd8(), lVar1 != 0)) {
    FUN_10a08d2e0(&stack0xffffffffffffffc8,lVar1 + 0x10);
    FUN_10a406708(lVar2,&stack0xffffffffffffffc8);
    if (lStack_28 < 0) {
      __ZdlPv(in_stack_ffffffffffffffc8);
    }
  }
  return param_1;
}



/* Entry: 10aa19d14; end: 10aa19ddb;  */

undefined4 FUN_10aa19d14(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x2b0);
  uVar2 = 0;
  if ((lVar1 != 0) && (___dynamic_cast(lVar1,&PTR_DAT_110bd3e38,&PTR_DAT_110c2e730,0), lVar1 != 0))
  {
    uVar2 = *(undefined4 *)(lVar1 + 0x110);
  }
  return uVar2;
}



/* Entry: 10aa19ddc; end: 10aa19ea3;  */

long * FUN_10aa19ddc(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puStack_30;
  long *plStack_28;
  
  ppuVar5 = &puStack_30;
  puStack_30 = &UNK_10f68a7a4;
  plStack_28 = (long *)0x24;
  if ((long *)*param_2 != (long *)0x0) {
    (**(code **)(*(long *)*param_2 + 0x50))(&puStack_30);
    if (param_1[0x4a] != 0) {
      *(undefined8 *)(param_1[0x4a] + 0x40) = 0;
    }
    FUN_10a91135c(param_1 + 0x4a,&puStack_30);
    *(long **)(param_1[0x4a] + 0x40) = param_1;
    FUN_10aa18c8c(param_1);
    plVar4 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        param_1 = plVar4;
      }
    }
    return param_1;
  }
  FUN_10a0edfc4();
  FUN_10a409540(&puStack_30);
  __Unwind_Resume(ppuVar5);
  func_0x00010aa3cadc(ppuVar5 + 6);
  func_0x00010aa3cadc(ppuVar5 + 3);
  func_0x00010aa3cadc(ppuVar5);
  return (long *)ppuVar5;
}



/* Entry: 10aa19ea4; end: 10aa19edb;  */

long FUN_10aa19ea4(long param_1)

{
  func_0x00010aa3cadc(param_1 + 0x30);
  func_0x00010aa3cadc(param_1 + 0x18);
  func_0x00010aa3cadc(param_1);
  return param_1;
}



/* Entry: 10aa19edc; end: 10aa1a46f;  */

void FUN_10aa19edc(undefined8 param_1)

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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = &UNK_10f68b95a;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f68a4a1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f68a4a1;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10aa5e8f8(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68a7c9;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68a4a1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aa5eacc();
  func_0x00010aa5ed20(param_1);
  return;
}



/* Entry: 10aa1a470; end: 10aa1a4fb;  */

undefined1  [16] FUN_10aa1a470(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f68ba10;
  return auVar1;
}



/* Entry: 10aa1a4fc; end: 10aa1a7bb;  */

void FUN_10aa1a4fc(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68ba10,0x11);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3ad08;
  pppuVar2 = (undefined8 ***)&UNK_10f68a4a1;
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
  uStack_58 = 0xa4;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c3ad08;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
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
    FUN_10a0605c4(param_1,"contacts",FUN_10aa60cec,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f68a7ff,FUN_10aa60f60,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f68a808,FUN_10aa61050,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f68a80b,FUN_10aa6110c,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68ba10,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa1a7a0);
  (*pcVar6)();
}



/* Entry: 10aa1a7bc; end: 10aa1a84f;  */

long FUN_10aa1a7bc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10aa1a850; end: 10aa1a853;  */

undefined8 * FUN_10aa1a850(undefined8 *param_1)

{
  FUN_10aa3cb4c(param_1 + 9);
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa1a854; end: 10aa1a867;  */

void FUN_10aa1a854(void)

{
  func_0x00010aa1a7f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa1a868; end: 10aa1a9cb;  */

void FUN_10aa1a868(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  char cStack_39;
  
  plVar4 = *(long **)(param_2 + 0x20);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    lVar6 = *(long *)(param_2 + 0x18);
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
    cStack_39 = '\x11';
    uStack_40 = 0x6e;
    uStack_48 = 0x6f6973696c6c6f43;
    uStack_50 = 0x2e73636973796850;
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x168);
      if (*(char *)(lVar6 + 0x17f) < '\0') {
        func_0x000107c3192c(&uStack_70,*(undefined8 *)(lVar6 + 0x168),*(undefined8 *)(lVar6 + 0x170)
                           );
      }
      else {
        uStack_68 = *(undefined8 *)(lVar6 + 0x170);
        uStack_70 = *(undefined8 *)(lVar6 + 0x168);
        lStack_60 = *(long *)(lVar6 + 0x178);
      }
      goto LAB_10aa1a944;
    }
  }
  cStack_39 = '\x11';
  uStack_40 = 0x6e;
  uStack_48 = 0x6f6973696c6c6f43;
  uStack_50 = 0x2e73636973796850;
  func_0x000107c2b054(&uStack_70,"(null)");
LAB_10aa1a944:
  FUN_10a0ee900(param_1,&UNK_10f68a818,0x26);
  if (lStack_60 < 0) {
    __ZdlPv(uStack_70);
  }
  if (cStack_39 < '\0') {
    __ZdlPv(uStack_50);
  }
  return;
}



/* Entry: 10aa1a9cc; end: 10aa1aa4f;  */

void FUN_10aa1a9cc(undefined8 param_1)

{
  FUN_10a0ee900(param_1,&UNK_10f68a83f,0x4d);
  return;
}



/* Entry: 10aa1aa50; end: 10aa1ab27;  */

void FUN_10aa1aa50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  cVar2 = *(char *)(param_5 + 2);
  if (cVar2 != '\0') {
    uVar3 = *(undefined8 *)(param_5 + 4);
    uVar1 = param_5[1];
    FUN_10aa1ab28(param_8);
    uStack_60 = param_1;
    uStack_5c = param_2;
    uStack_58 = param_3;
    uStack_54 = param_4;
    FUN_10aaf8c7c(param_6,param_7,*param_5,uVar3,uVar1,cVar2,*(undefined8 *)(param_5 + 6),&uStack_60
                  ,3);
    if ((param_8 & 0x15) != 0) {
      func_0x00010aa1abb4(param_8);
      uStack_60 = param_1;
      uStack_5c = param_2;
      uStack_58 = param_3;
      uStack_54 = param_4;
      FUN_10aaf92b0(param_6,param_7,*param_5,uVar3,uVar1,*(undefined1 *)(param_5 + 2),
                    *(undefined8 *)(param_5 + 6),&uStack_60,3);
    }
  }
  return;
}



/* Entry: 10aa1ab28; end: 10aa1ac43;  */

undefined4 FUN_10aa1ab28(uint param_1)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  
  uVar3 = 0x3f800000;
  if ((param_1 & 1) == 0) {
    if ((param_1 >> 2 & 1) != 0) {
      uVar3 = 0;
      if ((param_1 & 2) != 0) {
        uVar3 = 0x3e99999a;
      }
      return uVar3;
    }
    bVar2 = (param_1 & 2) != 0;
    if ((param_1 >> 4 & 1) == 0) {
      uVar3 = 0;
      if (bVar2) {
        uVar3 = 0x3f333333;
      }
    }
    else {
      lVar1 = 4;
      if (bVar2) {
        lVar1 = 0;
      }
      uVar3 = *(undefined4 *)(&UNK_10e4eb8d8 + lVar1);
    }
  }
  return uVar3;
}



/* Entry: 10aa1ac44; end: 10aa1accb;  */

void FUN_10aa1ac44(uint *param_1,long param_2,ulong param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_3 <= param_1[1]) &&
     (uVar3 = (ulong)(*param_1 * (uint)(byte)param_1[2]),
     (ulong)(param_4 * param_2) < uVar3 || param_4 * param_2 - uVar3 == 0)) {
    *param_1 = (uint)param_2;
    param_1[1] = (uint)param_3;
    *(char *)(param_1 + 2) = (char)param_4;
    return;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  FUN_10aa1accc(param_1);
  *param_1 = (uint)param_2;
  param_1[1] = (uint)param_3;
  *(char *)(param_1 + 2) = (char)param_4;
  if (param_1[1] != 0) {
    lVar2 = (ulong)param_1[1] * 0xc;
    _malloc();
    *(long *)(param_1 + 4) = lVar2;
  }
  uVar1 = *param_1;
  if (uVar1 != 0) {
    lVar2 = (ulong)uVar1 * (ulong)(byte)param_1[2] * 2 + (ulong)uVar1 * (ulong)(byte)param_1[2];
    _malloc();
    *(long *)(param_1 + 6) = lVar2;
  }
  return;
}



/* Entry: 10aa1accc; end: 10aa1adeb;  */

void FUN_10aa1accc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    _free();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    _free();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10aa1adec; end: 10aa1b473;  */

void FUN_10aa1adec(ushort *param_1,short *param_2,float *param_3,undefined8 *param_4)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  float *pfVar14;
  long lVar15;
  short *psVar16;
  float *pfVar17;
  long lVar18;
  bool bVar19;
  ushort uVar20;
  long lVar21;
  undefined8 *puVar22;
  uint *puVar23;
  ulong uVar24;
  ulong uVar25;
  undefined *puVar26;
  long lVar27;
  float *pfVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fStack_1b4;
  undefined8 auStack_e8 [3];
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ushort uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  pfVar14 = param_3;
  psVar16 = param_2;
  pfVar17 = param_3;
  FUN_10ab4cc0c();
  if ((int)pfVar14 != 0) {
    if (*(long *)(param_3 + 4) != *(long *)(param_3 + 6)) {
      fVar38 = param_3[0x3b];
      if ((uint)fVar38 < 3) {
        fVar37 = param_3[0x44];
        if (fVar37 != -NAN) {
          lVar27 = *(long *)(param_3 + 0x3e);
          uVar29 = (*(long *)(param_3 + 0x40) - lVar27 >> 3) * 0x6db6db6db6db6db7;
          if (uVar29 < (uint)fVar37 || uVar29 - (uint)fVar37 == 0) {
            FUN_10ab725fc();
            FUN_10aa1accc(&uStack_b0);
            __Unwind_Resume();
            fVar37 = *(float *)(psVar16 + 0xf8);
            fVar38 = pfVar14[1] - *pfVar14;
            if (fVar37 <= pfVar14[1] - *pfVar14) {
              fVar38 = fVar37;
            }
            fVar39 = 0.0;
            if (0.0 <= fVar37) {
              fVar39 = fVar38;
            }
            lVar15 = *(long *)(pfVar14 + 0x12);
            FUN_10a11b78c(fVar39,lVar15,&fStack_1b4);
            lVar27 = *(long *)(pfVar14 + 0xc);
            uVar29 = *(long *)(pfVar14 + 0xe) - lVar27 >> 5;
            if (((ulong)(long)(int)lVar15 < uVar29) && ((ulong)(lVar15 >> 0x20) < uVar29)) {
              if (pfVar17 != (float *)0x0) {
                fVar38 = *(float *)(psVar16 + 0xfa) * (1.0 - fStack_1b4);
                fStack_1b4 = *(float *)(psVar16 + 0xfa) * fStack_1b4;
                puVar22 = (undefined8 *)((long)param_4 + (long)pfVar17 * 0xc);
                pfVar14 = (float *)(*(long *)(lVar27 + (long)(int)lVar15 * 0x20 + 8) + 8);
                pfVar17 = (float *)(*(long *)(lVar27 + (lVar15 >> 0x20) * 0x20 + 8) + 8);
                do {
                  fVar37 = *pfVar14;
                  fVar39 = *pfVar17;
                  *param_4 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar17 + -2) >> 0x20) *
                                      fStack_1b4 +
                                      (float)((ulong)*(undefined8 *)(pfVar14 + -2) >> 0x20) * fVar38
                                      + (float)((ulong)*param_4 >> 0x20),
                                      (float)*(undefined8 *)(pfVar17 + -2) * fStack_1b4 +
                                      (float)*(undefined8 *)(pfVar14 + -2) * fVar38 +
                                      (float)*param_4);
                  *(float *)(param_4 + 1) =
                       fStack_1b4 * fVar39 + fVar38 * fVar37 + *(float *)(param_4 + 1);
                  param_4 = (undefined8 *)((long)param_4 + 0xc);
                  pfVar14 = pfVar14 + 3;
                  pfVar17 = pfVar17 + 3;
                } while (param_4 != puVar22);
              }
              return;
            }
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x10aa1b588);
            (*pcVar10)();
          }
          if ((lVar27 != 0) &&
             (lVar27 = lVar27 + (ulong)(uint)fVar37 * 0x38, *(int *)(lVar27 + 0x28) == 3)) {
            uVar24 = (ulong)pfVar14 & 0xffffffff;
            uVar30 = (ulong)(uint)param_3[0x3c];
            uVar29 = 0;
            if (uVar30 != 0) {
              uVar29 = (ulong)(*(long *)(param_3 + 6) - *(long *)(param_3 + 4)) / uVar30;
            }
            if (*(long *)(param_3 + 0x28) == *(long *)(param_3 + 0x2a)) {
              bVar9 = false;
              bVar11 = true;
            }
            else {
              bVar11 = *(long *)(param_2 + 0x18) != 0;
              bVar9 = bVar11;
            }
            lVar15 = *(long *)(param_2 + 8);
            lVar5 = *(long *)(param_2 + 0xc);
            uVar29 = uVar29 & 0xffffffff;
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_a8 = uStack_a8 & 0xffffffffffffff00;
            lStack_98 = 0;
            lStack_a0 = 0;
            uStack_88 = 0;
            uStack_84 = 0;
            uStack_90 = 0;
            uStack_80 = 0;
            uStack_7c = 0;
            uVar40 = 2;
            if (0xfffe < uVar29) {
              uVar40 = 4;
            }
            if (uVar29 < 0xff) {
              uVar40 = 1;
            }
            FUN_10aa1ac44(&uStack_b0,uVar24);
            lVar32 = *(long *)(param_3 + 0x16);
            lVar6 = *(long *)(param_3 + 0x18);
            if (lVar32 == lVar6) {
              bVar12 = false;
            }
            else {
              bVar12 = *param_2 != 0;
            }
            bVar12 = (bool)(fVar38 == 0.0 & bVar12);
            lVar18 = *(long *)(param_3 + 10);
            lVar21 = 2;
            if (param_3[0x3a] != 1.4013e-45) {
              lVar21 = 0;
            }
            lVar2 = 4;
            if (param_3[0x3a] != 2.8026e-45) {
              lVar2 = lVar21;
            }
            lVar21 = *(long *)(param_3 + 0x34);
            lVar7 = *(long *)(param_3 + 0x36);
            lVar8 = lVar7 - lVar21;
            if (lVar8 == 0) {
              FUN_10ab50f98(uVar24,0,lStack_98,uVar40,fVar38,lVar18);
            }
            else {
              lVar35 = 0;
              lVar34 = 0;
              lVar36 = 6;
              if (0xfffe < uVar29) {
                lVar36 = 0xc;
              }
              lVar3 = 3;
              if (0xfe < uVar29) {
                lVar3 = lVar36;
              }
              pfVar14 = (float *)(lVar21 + 0x28);
              lVar36 = lStack_98;
              do {
                if (lVar34 != 0) {
                  bVar19 = false;
                  pfVar17 = pfVar14;
                  uVar25 = 0;
                  do {
                    lVar31 = 0xc;
                    pfVar28 = pfVar17;
                    do {
                      fVar37 = *pfVar28;
                      pfVar1 = pfVar28 + -0x1a;
                      bVar13 = lVar31 != 0;
                      lVar31 = lVar31 + -4;
                      pfVar28 = pfVar28 + 1;
                    } while (ABS(fVar37 - *pfVar1) <= 9.536743e-07 && bVar13);
                    if (9.536743e-07 < ABS(fVar37 - *pfVar1)) break;
                    uVar33 = uVar25 + 1;
                    bVar19 = 2 < uVar25;
                    pfVar17 = pfVar17 + 4;
                    uVar25 = uVar33;
                  } while (uVar33 != 4);
                  if (bVar19) goto LAB_10aa1b0ac;
                  uVar20 = 4;
LAB_10aa1b41c:
                  *param_1 = uVar20;
                  param_1[4] = 0;
                  param_1[5] = 0;
                  param_1[6] = 0;
                  param_1[7] = 0;
                  *(undefined1 *)(param_1 + 8) = 0;
                  param_1[0x10] = 0;
                  param_1[0x11] = 0;
                  param_1[0x12] = 0;
                  param_1[0x13] = 0;
                  param_1[0xc] = 0;
                  param_1[0xd] = 0;
                  param_1[0xe] = 0;
                  param_1[0xf] = 0;
                  param_1[0x18] = 0;
                  param_1[0x19] = 0;
                  param_1[0x1a] = 0;
                  param_1[0x1b] = 0;
                  param_1[0x14] = 0;
                  param_1[0x15] = 0;
                  param_1[0x16] = 0;
                  param_1[0x17] = 0;
                  param_1[0x1c] = 0;
                  param_1[0x1d] = 0;
                  param_1[0x1e] = 0;
                  param_1[0x1f] = 0;
                  goto LAB_10aa1b43c;
                }
LAB_10aa1b0ac:
                puVar23 = (uint *)(lVar21 + lVar34 * 0x68);
                uVar4 = *puVar23;
                uVar25 = (ulong)puVar23[1];
                if ((fVar38 == 2.8026e-45) || (fVar38 == 1.4013e-45)) {
                  uVar33 = 0;
                  if (1 < uVar25) {
                    uVar33 = uVar25 - 2;
                  }
                }
                else {
                  uVar33 = uVar25 / 3;
                }
                if (uVar24 - lVar35 < uVar33) {
                  uVar20 = 5;
                  goto LAB_10aa1b41c;
                }
                FUN_10ab50f98(uVar33,puVar23[2],lVar36,uVar40,fVar38,lVar18 + (ulong)uVar4,lVar2);
                bVar12 = (bool)(lVar2 * 3 * lVar35 - (ulong)uVar4 == 0 & bVar12);
                lVar35 = uVar33 + lVar35;
                lVar36 = lVar36 + uVar33 * lVar3;
                lVar34 = lVar34 + 1;
                pfVar14 = pfVar14 + 0x1a;
              } while (lVar34 != (lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5);
              uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)lVar35);
            }
            lVar18 = lStack_a0;
            if ((lVar32 != lVar6) && (!bVar12)) {
              uStack_b8 = uStack_b8 | 0x100;
            }
            if (!bVar11) {
              uStack_b8 = uStack_b8 | 0x200;
            }
            if (lVar7 == lVar21) {
              bVar11 = false;
            }
            else {
              bVar11 = false;
              lVar21 = lVar21 + 0x28;
              puVar26 = &UNK_10e482b48;
              uVar24 = 0;
              do {
                lVar32 = 0;
                do {
                  fVar38 = ABS(*(float *)(lVar21 + lVar32) - *(float *)(puVar26 + lVar32));
                  bVar19 = lVar32 != 0xc;
                  lVar32 = lVar32 + 4;
                } while (fVar38 <= 9.536743e-07 && bVar19);
                if (9.536743e-07 < fVar38) break;
                uVar25 = uVar24 + 1;
                bVar11 = 2 < uVar24;
                lVar21 = lVar21 + 0x10;
                puVar26 = puVar26 + 0x10;
                uVar24 = uVar25;
              } while (uVar25 != 4);
              bVar11 = (bool)(bVar11 ^ 1);
            }
            if ((bVar11) || ((bVar12 || bVar9) || lVar15 != lVar5)) {
              func_0x00010ab5160c(lStack_a0,uVar29,*(undefined8 *)(param_3 + 4),uVar30,lVar27);
              if (bVar11) {
                lVar27 = *(long *)(param_3 + 0x34);
                if (lVar27 == *(long *)(param_3 + 0x36)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x10aa1b44c);
                  (*pcVar10)();
                }
                if (uVar29 != 0) {
                  fVar38 = *(float *)(lVar27 + 0x30);
                  fVar37 = *(float *)(lVar27 + 0x40);
                  fVar39 = *(float *)(lVar27 + 0x50);
                  uVar40 = *(undefined8 *)(lVar27 + 0x28);
                  uVar41 = *(undefined8 *)(lVar27 + 0x38);
                  uVar42 = *(undefined8 *)(lVar27 + 0x48);
                  uVar43 = *(undefined8 *)(lVar27 + 0x58);
                  fVar44 = *(float *)(lVar27 + 0x60);
                  pfVar14 = (float *)(lVar18 + 8);
                  uVar24 = uVar29;
                  do {
                    fVar45 = pfVar14[-2];
                    fVar46 = pfVar14[-1];
                    fVar47 = *pfVar14;
                    *(ulong *)(pfVar14 + -2) =
                         CONCAT44((float)((ulong)uVar40 >> 0x20) * fVar45 +
                                  (float)((ulong)uVar41 >> 0x20) * fVar46 +
                                  (float)((ulong)uVar43 >> 0x20) +
                                  (float)((ulong)uVar42 >> 0x20) * fVar47,
                                  (float)uVar40 * fVar45 + (float)uVar41 * fVar46 +
                                  (float)uVar43 + (float)uVar42 * fVar47);
                    *pfVar14 = fVar38 * fVar45 + fVar37 * fVar46 + fVar44 + fVar39 * fVar47;
                    uVar24 = uVar24 - 1;
                    pfVar14 = pfVar14 + 3;
                  } while (uVar24 != 0);
                }
              }
              if ((bVar12 || bVar9) || lVar15 != lVar5) {
                if (bVar9) {
                  FUN_10aa1b474(*(undefined8 *)(param_2 + 0x14),*(undefined8 *)(param_2 + 0x18),
                                uVar29,lVar18);
                }
                if (lVar15 != lVar5) {
                  FUN_10aa1b588(*(long *)(param_3 + 0x10),
                                (*(long *)(param_3 + 0x12) - *(long *)(param_3 + 0x10) >> 3) *
                                -0x71c71c71c71c71c7,*(long *)(param_2 + 8),
                                (*(long *)(param_2 + 0xc) - *(long *)(param_2 + 8) >> 3) *
                                -0x5555555555555555,uVar29,lVar18);
                }
                if (bVar12) {
                  FUN_10ab52538(param_3,*(undefined8 *)(param_2 + 4),param_2,1,lVar18);
                }
              }
              FUN_10ab51f1c(&uStack_d0,lVar18,uVar29);
            }
            else {
              FUN_10ab519ac(auStack_e8,lStack_a0,uVar29,*(undefined8 *)(param_3 + 4),uVar30,lVar27);
              uStack_c8 = (undefined4)auStack_e8[1];
              uStack_c4 = (undefined4)((ulong)auStack_e8[1] >> 0x20);
              uStack_d0 = auStack_e8[0];
              uStack_c0 = (undefined4)auStack_e8[2];
              uStack_bc = (undefined4)((ulong)auStack_e8[2] >> 0x20);
            }
            *param_1 = uStack_b8;
            *(long *)(param_1 + 0x10) = lStack_98;
            *(long *)(param_1 + 0xc) = lStack_a0;
            *(ulong *)(param_1 + 8) = uStack_a8;
            *(undefined8 *)(param_1 + 4) = uStack_b0;
            *(ulong *)(param_1 + 0x1c) = CONCAT44(uStack_bc,uStack_c0);
            *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_c4,uStack_c8);
            *(undefined8 *)(param_1 + 0x14) = uStack_d0;
            uStack_88 = 0;
            uStack_84 = 0;
            uStack_90 = 0;
            uStack_80 = 0;
            uStack_7c = 0;
            lStack_98 = 0;
            lStack_a0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
LAB_10aa1b43c:
            FUN_10aa1accc(&uStack_b0);
            return;
          }
        }
        uVar20 = 3;
      }
      else {
        uVar20 = 2;
      }
      goto LAB_10aa1aee0;
    }
  }
  uVar20 = 1;
LAB_10aa1aee0:
  *param_1 = uVar20;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return;
}



/* Entry: 10aa1b474; end: 10aa1b587;  */

void FUN_10aa1b474(float *param_1,long param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_34;
  
  fVar8 = *(float *)(param_2 + 0x1f0);
  fVar9 = param_1[1] - *param_1;
  if (fVar8 <= param_1[1] - *param_1) {
    fVar9 = fVar8;
  }
  fVar10 = 0.0;
  if (0.0 <= fVar8) {
    fVar10 = fVar9;
  }
  lVar3 = *(long *)(param_1 + 0x12);
  FUN_10a11b78c(fVar10,lVar3,&fStack_34);
  lVar1 = *(long *)(param_1 + 0xc);
  uVar4 = *(long *)(param_1 + 0xe) - lVar1 >> 5;
  if (((ulong)(long)(int)lVar3 < uVar4) && ((ulong)(lVar3 >> 0x20) < uVar4)) {
    if (param_3 != 0) {
      fVar9 = *(float *)(param_2 + 500) * (1.0 - fStack_34);
      fStack_34 = *(float *)(param_2 + 500) * fStack_34;
      puVar5 = (undefined8 *)((long)param_4 + param_3 * 0xc);
      pfVar6 = (float *)(*(long *)(lVar1 + (long)(int)lVar3 * 0x20 + 8) + 8);
      pfVar7 = (float *)(*(long *)(lVar1 + (lVar3 >> 0x20) * 0x20 + 8) + 8);
      do {
        fVar8 = *pfVar6;
        fVar10 = *pfVar7;
        *param_4 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar7 + -2) >> 0x20) * fStack_34 +
                            (float)((ulong)*(undefined8 *)(pfVar6 + -2) >> 0x20) * fVar9 +
                            (float)((ulong)*param_4 >> 0x20),
                            (float)*(undefined8 *)(pfVar7 + -2) * fStack_34 +
                            (float)*(undefined8 *)(pfVar6 + -2) * fVar9 + (float)*param_4);
        *(float *)(param_4 + 1) = fStack_34 * fVar10 + fVar9 * fVar8 + *(float *)(param_4 + 1);
        param_4 = (undefined8 *)((long)param_4 + 0xc);
        pfVar6 = pfVar6 + 3;
        pfVar7 = pfVar7 + 3;
      } while (param_4 != puVar5);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa1b588);
  (*pcVar2)();
}



/* Entry: 10aa1b588; end: 10aa1b64f;  */

void FUN_10aa1b588(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float fVar7;
  
  if (param_2 != 0) {
    puVar6 = param_1 + param_2 * 9;
    do {
      lVar3 = (long)*(char *)((long)param_1 + 0x17);
      puVar2 = param_1;
      if (lVar3 < 0) {
        lVar3 = param_1[1];
        puVar2 = (undefined8 *)*param_1;
      }
      lVar1 = param_3;
      func_0x00010a42939c(param_3,param_4,puVar2,lVar3);
      if ((lVar1 != 0) && (param_5 != 0)) {
        fVar7 = *(float *)(lVar1 + 0x10);
        pfVar4 = (float *)(*(long *)param_1[7] + 8);
        pfVar5 = (float *)(param_6 + 8);
        lVar3 = param_5;
        do {
          pfVar5[-2] = pfVar5[-2] + fVar7 * pfVar4[-2];
          pfVar5[-1] = pfVar5[-1] + fVar7 * pfVar4[-1];
          *pfVar5 = *pfVar5 + fVar7 * *pfVar4;
          lVar3 = lVar3 + -1;
          pfVar4 = pfVar4 + 6;
          pfVar5 = pfVar5 + 3;
        } while (lVar3 != 0);
      }
      param_1 = param_1 + 9;
    } while (param_1 != puVar6);
  }
  return;
}



/* Entry: 10aa1b650; end: 10aa1b6d3;  */

undefined1  [16] FUN_10aa1b650(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x15;
  auVar1._0_8_ = &UNK_10f68ba49;
  return auVar1;
}



/* Entry: 10aa1b6d4; end: 10aa1b737;  */

void FUN_10aa1b6d4(undefined8 param_1)

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
  puStack_40 = &UNK_10f68a4a1;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0xdd;
  uStack_18 = 0xffffffff;
  FUN_10aa1b738(param_1,&uStack_58);
  FUN_10aa613c4();
  return;
}



/* Entry: 10aa1b738; end: 10aa1b80f;  */

/* WARNING: Removing unreachable block (ram,0x00010aa1b7d0) */

undefined1  [16] FUN_10aa1b738(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f68ba49,0x15);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aa612c8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa1b810; end: 10aa1b82f;  */

void FUN_10aa1b810(long param_1,long *param_2)

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



/* Entry: 10aa1b830; end: 10aa1b93b;  */

long * FUN_10aa1b830(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  bool bVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 < (undefined8 *)param_1[5]) {
    uVar12 = *param_2;
    *param_2 = 0;
    plVar23 = puVar2 + 1;
    *puVar2 = uVar12;
LAB_10aa1b8f0:
    plVar7 = (long *)param_1[3];
    param_1[4] = (long)plVar23;
    lVar15 = 0;
    if (plVar23 != plVar7) {
      lVar15 = LZCOUNT((long)plVar23 - (long)plVar7 >> 3) * -2 + 0x7e;
    }
    bVar25 = true;
    plVar11 = plVar7;
LAB_10aa3ccb8:
    do {
      plVar10 = plVar11;
      uVar26 = (long)plVar23 - (long)plVar10 >> 3;
      if (uVar26 - 2 == 0 || (long)uVar26 < 2) {
        if (uVar26 < 2) {
          return plVar7;
        }
        if (uVar26 == 2) {
          lVar15 = *plVar10;
          if (*(int *)(plVar23[-1] + 8) < *(int *)(lVar15 + 8)) {
            *plVar10 = plVar23[-1];
            plVar23[-1] = lVar15;
            return plVar7;
          }
          return plVar7;
        }
      }
      else {
        if (uVar26 == 3) {
          lVar15 = *plVar10;
          lVar14 = plVar10[1];
          iVar3 = *(int *)(lVar14 + 8);
          iVar4 = *(int *)(lVar15 + 8);
          lVar18 = plVar23[-1];
          if (iVar3 < iVar4) {
            if (*(int *)(lVar18 + 8) < iVar3) {
              *plVar10 = lVar18;
            }
            else {
              *plVar10 = lVar14;
              plVar10[1] = lVar15;
              if (iVar4 <= *(int *)(plVar23[-1] + 8)) {
                return plVar7;
              }
              plVar10[1] = plVar23[-1];
            }
            plVar23[-1] = lVar15;
            return plVar7;
          }
          if (*(int *)(lVar18 + 8) < iVar3) {
            plVar10[1] = lVar18;
            plVar23[-1] = lVar14;
            lVar15 = *plVar10;
            if (*(int *)(plVar10[1] + 8) < *(int *)(lVar15 + 8)) {
              *plVar10 = plVar10[1];
              plVar10[1] = lVar15;
              return plVar7;
            }
            return plVar7;
          }
          return plVar7;
        }
        if (uVar26 == 4) {
          plVar16 = plVar10 + 1;
          plVar11 = (long *)*plVar16;
          plVar8 = plVar10 + 2;
          plVar19 = (long *)*plVar8;
          iVar3 = (int)plVar11[1];
          plVar21 = (long *)*plVar10;
          lVar15 = plVar21[1];
          iVar4 = (int)plVar19[1];
          plVar9 = plVar10;
          if (iVar3 < (int)lVar15) {
            plVar7 = plVar21;
            plVar22 = plVar8;
            if (iVar3 <= iVar4) {
              *plVar10 = (long)plVar11;
              plVar10[1] = (long)plVar21;
              plVar11 = plVar19;
              plVar9 = plVar16;
              goto joined_r0x00010aa3d6f0;
            }
          }
          else {
            plVar17 = plVar19;
            if (iVar3 <= iVar4) goto LAB_10aa3d7b0;
            *plVar16 = (long)plVar19;
            *plVar8 = (long)plVar11;
            plVar22 = plVar16;
            plVar7 = plVar11;
joined_r0x00010aa3d6f0:
            plVar17 = plVar11;
            if ((int)lVar15 <= iVar4) goto LAB_10aa3d7b0;
          }
          *plVar9 = (long)plVar19;
          *plVar22 = (long)plVar21;
          plVar17 = plVar7;
LAB_10aa3d7b0:
          if ((int)plVar17[1] <= *(int *)(plVar23[-1] + 8)) {
            return plVar7;
          }
          *plVar8 = plVar23[-1];
          plVar23[-1] = (long)plVar17;
          lVar14 = *plVar8;
          iVar3 = *(int *)(lVar14 + 8);
          lVar15 = *plVar16;
          if (iVar3 < *(int *)(lVar15 + 8)) {
            plVar10[1] = lVar14;
            plVar10[2] = lVar15;
            lVar15 = *plVar10;
            if (iVar3 < *(int *)(lVar15 + 8)) {
              *plVar10 = lVar14;
              plVar10[1] = lVar15;
              return plVar7;
            }
            return plVar7;
          }
          return plVar7;
        }
        if (uVar26 == 5) {
          plVar7 = plVar10 + 1;
          plVar11 = plVar10 + 2;
          plVar9 = plVar10 + 3;
          lVar14 = *plVar7;
          iVar3 = *(int *)(lVar14 + 8);
          lVar18 = *plVar10;
          iVar4 = *(int *)(lVar18 + 8);
          lVar15 = *plVar11;
          if (iVar3 < iVar4) {
            if (*(int *)(lVar15 + 8) < iVar3) {
              *plVar10 = lVar15;
            }
            else {
              *plVar10 = lVar14;
              *plVar7 = lVar18;
              lVar15 = *plVar11;
              if (iVar4 <= *(int *)(lVar15 + 8)) goto LAB_10aa3d8c8;
              *plVar7 = lVar15;
            }
            *plVar11 = lVar18;
            lVar15 = lVar18;
          }
          else if (*(int *)(lVar15 + 8) < iVar3) {
            *plVar7 = lVar15;
            *plVar11 = lVar14;
            lVar18 = *plVar10;
            lVar15 = lVar14;
            if (*(int *)(*plVar7 + 8) < *(int *)(lVar18 + 8)) {
              *plVar10 = *plVar7;
              *plVar7 = lVar18;
              lVar15 = *plVar11;
            }
          }
LAB_10aa3d8c8:
          if (*(int *)(*plVar9 + 8) < *(int *)(lVar15 + 8)) {
            *plVar11 = *plVar9;
            *plVar9 = lVar15;
            lVar15 = *plVar7;
            if (*(int *)(*plVar11 + 8) < *(int *)(lVar15 + 8)) {
              *plVar7 = *plVar11;
              *plVar11 = lVar15;
              lVar15 = *plVar10;
              if (*(int *)(*plVar7 + 8) < *(int *)(lVar15 + 8)) {
                *plVar10 = *plVar7;
                *plVar7 = lVar15;
              }
            }
          }
          lVar15 = plVar23[-1];
          lVar14 = *plVar9;
          if (*(int *)(lVar15 + 8) < *(int *)(lVar14 + 8)) {
            *plVar9 = lVar15;
            plVar23[-1] = lVar14;
            lVar15 = *plVar11;
            if (*(int *)(*plVar9 + 8) < *(int *)(lVar15 + 8)) {
              *plVar11 = *plVar9;
              *plVar9 = lVar15;
              lVar15 = *plVar7;
              if (*(int *)(*plVar11 + 8) < *(int *)(lVar15 + 8)) {
                *plVar7 = *plVar11;
                *plVar11 = lVar15;
                lVar15 = *plVar10;
                if (*(int *)(*plVar7 + 8) < *(int *)(lVar15 + 8)) {
                  *plVar10 = *plVar7;
                  *plVar7 = lVar15;
                }
              }
            }
          }
          return plVar10;
        }
      }
      if ((long)uVar26 < 0x18) {
        plVar11 = plVar10 + 1;
        if (bVar25 == false) {
          if (plVar10 == plVar23 || plVar11 == plVar23) {
            return plVar7;
          }
          lVar18 = -8;
          lVar15 = 8;
          lVar14 = 0;
          do {
            lVar20 = lVar15;
            lVar15 = *plVar11;
            if (*(int *)(lVar15 + 8) < *(int *)(*(long *)((long)plVar10 + lVar14) + 8)) {
              plVar7 = (long *)0x0;
              *plVar11 = 0;
              lVar13 = *(long *)((long)plVar10 + lVar14);
              plVar9 = plVar11;
              lVar14 = lVar18;
              do {
                plVar9[-1] = 0;
                *plVar9 = lVar13;
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 8))();
                }
                if (lVar14 == 0) goto LAB_10aa3d7a8;
                plVar16 = plVar9 + -1;
                plVar7 = (long *)*plVar16;
                lVar13 = plVar9[-2];
                lVar14 = lVar14 + 8;
                plVar9 = plVar16;
              } while (*(int *)(lVar15 + 8) < *(int *)(lVar13 + 8));
              *plVar16 = lVar15;
              if (plVar7 != (long *)0x0) {
                (**(code **)(*plVar7 + 8))();
              }
            }
            plVar11 = plVar11 + 1;
            lVar18 = lVar18 + -8;
            lVar15 = lVar20 + 8;
            lVar14 = lVar20;
            if (plVar11 == plVar23) {
              return plVar7;
            }
          } while( true );
        }
        if (plVar10 == plVar23 || plVar11 == plVar23) {
          return plVar7;
        }
        lVar15 = 0;
        plVar9 = plVar10;
        do {
          plVar16 = plVar11;
          lVar14 = *plVar9;
          lVar18 = *plVar16;
          if (*(int *)(lVar18 + 8) < *(int *)(lVar14 + 8)) {
            plVar7 = (long *)0x0;
            *plVar16 = 0;
            lVar20 = lVar15;
            while( true ) {
              plVar11 = (long *)((long)plVar10 + lVar20);
              *plVar11 = 0;
              plVar11[1] = lVar14;
              if (plVar7 != (long *)0x0) {
                (**(code **)(*plVar7 + 8))();
              }
              plVar9 = plVar10;
              if (lVar20 == 0) break;
              lVar14 = ((long *)((long)plVar10 + lVar20))[-1];
              plVar9 = (long *)((long)plVar10 + lVar20);
              if (*(int *)(lVar14 + 8) <= *(int *)(lVar18 + 8)) break;
              plVar7 = (long *)*plVar11;
              lVar20 = lVar20 + -8;
            }
            plVar7 = (long *)*plVar9;
            *plVar9 = lVar18;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
          lVar15 = lVar15 + 8;
          plVar11 = plVar16 + 1;
          plVar9 = plVar16;
          if (plVar16 + 1 == plVar23) {
            return plVar7;
          }
        } while( true );
      }
      if (lVar15 == 0) {
        if (plVar10 == plVar23) {
          return plVar7;
        }
        uVar24 = uVar26 - 2 >> 1;
        uVar28 = uVar24;
        do {
          if ((long)uVar28 <= (long)uVar24) {
            uVar1 = uVar28 << 1 | 1;
            plVar7 = plVar10 + uVar1;
            uVar27 = uVar28 * 2 + 2;
            if ((long)uVar27 < (long)uVar26) {
              lVar15 = plVar7[1];
              plVar11 = plVar7 + 1;
              if (*(int *)(lVar15 + 8) <= *(int *)(*plVar7 + 8)) {
                plVar11 = plVar7;
                lVar15 = *plVar7;
                uVar27 = uVar1;
              }
            }
            else {
              plVar11 = plVar7;
              lVar15 = *plVar7;
              uVar27 = uVar1;
            }
            plVar7 = plVar10 + uVar28;
            lVar14 = *plVar7;
            if (*(int *)(lVar14 + 8) <= *(int *)(lVar15 + 8)) {
              *plVar7 = 0;
              lVar15 = *plVar11;
              do {
                plVar9 = plVar11;
                *plVar9 = 0;
                plVar11 = (long *)*plVar7;
                *plVar7 = lVar15;
                if (plVar11 != (long *)0x0) {
                  (**(code **)(*plVar11 + 8))();
                }
                if ((long)uVar24 < (long)uVar27) break;
                uVar1 = uVar27 << 1 | 1;
                plVar7 = plVar10 + uVar1;
                uVar27 = uVar27 * 2 + 2;
                if ((long)uVar27 < (long)uVar26) {
                  lVar15 = plVar7[1];
                  plVar11 = plVar7 + 1;
                  if (*(int *)(lVar15 + 8) <= *(int *)(*plVar7 + 8)) {
                    plVar11 = plVar7;
                    lVar15 = *plVar7;
                    uVar27 = uVar1;
                  }
                }
                else {
                  plVar11 = plVar7;
                  lVar15 = *plVar7;
                  uVar27 = uVar1;
                }
                plVar7 = plVar9;
              } while (*(int *)(lVar14 + 8) <= *(int *)(lVar15 + 8));
              plVar7 = (long *)*plVar9;
              *plVar9 = lVar14;
              if (plVar7 != (long *)0x0) {
                (**(code **)(*plVar7 + 8))();
              }
            }
          }
          bVar25 = uVar28 != 0;
          uVar28 = uVar28 - 1;
        } while (bVar25);
        do {
          uVar28 = 0;
          lVar15 = *plVar10;
          *plVar10 = 0;
          plVar7 = plVar10;
          do {
            plVar11 = plVar7 + uVar28 + 1;
            uVar27 = uVar28 << 1 | 1;
            uVar24 = uVar28 * 2 + 2;
            if ((long)uVar24 < (long)uVar26) {
              lVar14 = plVar7[uVar28 + 2];
              lVar18 = uVar28 + 1;
              plVar9 = plVar7 + uVar28 + 2;
              uVar28 = uVar24;
              if (*(int *)(lVar14 + 8) <= *(int *)(plVar7[lVar18] + 8)) {
                lVar14 = plVar7[lVar18];
                plVar9 = plVar11;
                uVar28 = uVar27;
              }
            }
            else {
              lVar14 = *plVar11;
              plVar9 = plVar11;
              uVar28 = uVar27;
            }
            *plVar9 = 0;
            plVar11 = (long *)*plVar7;
            *plVar7 = lVar14;
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 8))();
            }
            plVar7 = plVar9;
          } while ((long)uVar28 <= (long)(uVar26 - 2 >> 1));
          plVar23 = plVar23 + -1;
          if (plVar9 == plVar23) {
            plVar7 = (long *)*plVar9;
            *plVar9 = lVar15;
joined_r0x00010aa3d684:
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
          else {
            lVar14 = *plVar23;
            *plVar23 = 0;
            plVar7 = (long *)*plVar9;
            *plVar9 = lVar14;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 8))();
            }
            plVar7 = (long *)*plVar23;
            *plVar23 = lVar15;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 8))();
            }
            lVar15 = (long)plVar9 + (8 - (long)plVar10) >> 3;
            if (1 < lVar15) {
              uVar28 = lVar15 - 2U >> 1;
              plVar11 = plVar10 + uVar28;
              lVar15 = *plVar9;
              if (*(int *)(*plVar11 + 8) < *(int *)(lVar15 + 8)) {
                *plVar9 = 0;
                lVar14 = *plVar11;
                do {
                  plVar16 = plVar11;
                  *plVar16 = 0;
                  plVar7 = (long *)*plVar9;
                  *plVar9 = lVar14;
                  if (plVar7 != (long *)0x0) {
                    (**(code **)(*plVar7 + 8))();
                  }
                  if (uVar28 == 0) break;
                  uVar28 = uVar28 - 1 >> 1;
                  lVar14 = plVar10[uVar28];
                  plVar11 = plVar10 + uVar28;
                  plVar9 = plVar16;
                } while (*(int *)(lVar14 + 8) < *(int *)(lVar15 + 8));
                plVar7 = (long *)*plVar16;
                *plVar16 = lVar15;
                goto joined_r0x00010aa3d684;
              }
            }
          }
          bVar25 = (long)uVar26 < 3;
          uVar26 = uVar26 - 1;
          if (bVar25) {
            return plVar7;
          }
        } while( true );
      }
      plVar7 = plVar10 + (uVar26 >> 1);
      lVar14 = plVar23[-1];
      iVar3 = *(int *)(lVar14 + 8);
      if (uVar26 < 0x81) {
        lVar20 = *plVar10;
        iVar4 = *(int *)(lVar20 + 8);
        lVar18 = *plVar7;
        iVar5 = *(int *)(lVar18 + 8);
        if (iVar4 < iVar5) {
          if (iVar3 < iVar4) {
            *plVar7 = lVar14;
          }
          else {
            *plVar7 = lVar20;
            *plVar10 = lVar18;
            if (iVar5 <= *(int *)(plVar23[-1] + 8)) goto LAB_10aa3cf94;
            *plVar10 = plVar23[-1];
          }
          plVar23[-1] = lVar18;
        }
        else if (iVar3 < iVar4) {
          *plVar10 = lVar14;
          plVar23[-1] = lVar20;
          lVar14 = *plVar7;
          if (*(int *)(*plVar10 + 8) < *(int *)(lVar14 + 8)) {
            *plVar7 = *plVar10;
            *plVar10 = lVar14;
          }
        }
      }
      else {
        lVar20 = *plVar7;
        iVar4 = *(int *)(lVar20 + 8);
        lVar18 = *plVar10;
        iVar5 = *(int *)(lVar18 + 8);
        if (iVar4 < iVar5) {
          if (iVar3 < iVar4) {
            *plVar10 = lVar14;
          }
          else {
            *plVar10 = lVar20;
            *plVar7 = lVar18;
            if (iVar5 <= *(int *)(plVar23[-1] + 8)) goto LAB_10aa3cdf0;
            *plVar7 = plVar23[-1];
          }
          plVar23[-1] = lVar18;
        }
        else if (iVar3 < iVar4) {
          *plVar7 = lVar14;
          plVar23[-1] = lVar20;
          lVar14 = *plVar10;
          if (*(int *)(*plVar7 + 8) < *(int *)(lVar14 + 8)) {
            *plVar10 = *plVar7;
            *plVar7 = lVar14;
          }
        }
LAB_10aa3cdf0:
        plVar11 = plVar7 + -1;
        lVar18 = *plVar11;
        iVar3 = *(int *)(lVar18 + 8);
        lVar14 = plVar10[1];
        iVar4 = *(int *)(lVar14 + 8);
        lVar20 = plVar23[-2];
        if (iVar3 < iVar4) {
          if (*(int *)(lVar20 + 8) < iVar3) {
            plVar10[1] = lVar20;
          }
          else {
            plVar10[1] = lVar18;
            *plVar11 = lVar14;
            if (iVar4 <= *(int *)(plVar23[-2] + 8)) goto LAB_10aa3ce9c;
            *plVar11 = plVar23[-2];
          }
          plVar23[-2] = lVar14;
        }
        else if (*(int *)(lVar20 + 8) < iVar3) {
          *plVar11 = lVar20;
          plVar23[-2] = lVar18;
          lVar14 = plVar10[1];
          if (*(int *)(*plVar11 + 8) < *(int *)(lVar14 + 8)) {
            plVar10[1] = *plVar11;
            *plVar11 = lVar14;
          }
        }
LAB_10aa3ce9c:
        plVar9 = plVar7 + 1;
        lVar18 = *plVar9;
        iVar3 = *(int *)(lVar18 + 8);
        lVar14 = plVar10[2];
        iVar4 = *(int *)(lVar14 + 8);
        lVar20 = plVar23[-3];
        if (iVar3 < iVar4) {
          if (*(int *)(lVar20 + 8) < iVar3) {
            plVar10[2] = lVar20;
          }
          else {
            plVar10[2] = lVar18;
            *plVar9 = lVar14;
            if (iVar4 <= *(int *)(plVar23[-3] + 8)) goto LAB_10aa3cf24;
            *plVar9 = plVar23[-3];
          }
          plVar23[-3] = lVar14;
        }
        else if (*(int *)(lVar20 + 8) < iVar3) {
          *plVar9 = lVar20;
          plVar23[-3] = lVar18;
          lVar14 = plVar10[2];
          if (*(int *)(*plVar9 + 8) < *(int *)(lVar14 + 8)) {
            plVar10[2] = *plVar9;
            *plVar9 = lVar14;
          }
        }
LAB_10aa3cf24:
        lVar14 = plVar7[-1];
        lVar18 = *plVar7;
        iVar3 = *(int *)(lVar18 + 8);
        iVar4 = *(int *)(lVar14 + 8);
        lVar20 = plVar7[1];
        iVar5 = *(int *)(lVar20 + 8);
        if (iVar3 < iVar4) {
          lVar13 = lVar18;
          if (iVar3 <= iVar5) {
            plVar7[-1] = lVar18;
            *plVar7 = lVar14;
            plVar11 = plVar7;
            lVar18 = lVar14;
            lVar13 = lVar20;
            if (iVar4 <= iVar5) goto LAB_10aa3cf88;
          }
LAB_10aa3cf80:
          *plVar11 = lVar20;
          *plVar9 = lVar14;
          lVar18 = lVar13;
        }
        else if (iVar5 < iVar3) {
          *plVar7 = lVar20;
          plVar7[1] = lVar18;
          plVar9 = plVar7;
          lVar18 = lVar20;
          lVar13 = lVar14;
          if (iVar5 < iVar4) goto LAB_10aa3cf80;
        }
LAB_10aa3cf88:
        lVar14 = *plVar10;
        *plVar10 = lVar18;
        *plVar7 = lVar14;
      }
LAB_10aa3cf94:
      lVar15 = lVar15 + -1;
      lVar14 = *plVar10;
      plVar11 = plVar10;
      if ((bVar25) || (iVar3 = *(int *)(lVar14 + 8), *(int *)(plVar10[-1] + 8) < iVar3)) {
        lVar18 = 0;
        *plVar10 = 0;
        do {
          plVar7 = (long *)((long)plVar10 + lVar18 + 8);
          if (plVar7 == plVar23) goto LAB_10aa3d7a8;
          lVar20 = *plVar7;
          iVar3 = *(int *)(lVar14 + 8);
          lVar18 = lVar18 + 8;
        } while (*(int *)(lVar20 + 8) < iVar3);
        plVar7 = (long *)((long)plVar10 + lVar18);
        plVar9 = plVar23;
        if (lVar18 == 8) {
          do {
            if (plVar9 <= plVar7) break;
            plVar9 = plVar9 + -1;
          } while (iVar3 <= *(int *)(*plVar9 + 8));
        }
        else {
          do {
            if (plVar9 == plVar10) {
LAB_10aa3d7a8:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa3d7ac);
              (*pcVar6)();
            }
            plVar9 = plVar9 + -1;
          } while (iVar3 <= *(int *)(*plVar9 + 8));
        }
        plVar11 = plVar7;
        if (plVar7 < plVar9) {
          lVar18 = *plVar9;
          plVar16 = plVar9;
          do {
            *plVar11 = lVar18;
            *plVar16 = lVar20;
            do {
              plVar11 = plVar11 + 1;
              if (plVar11 == plVar23) goto LAB_10aa3d7a8;
              lVar20 = *plVar11;
            } while (*(int *)(lVar20 + 8) < iVar3);
            do {
              if (plVar16 == plVar10) goto LAB_10aa3d7a8;
              plVar16 = plVar16 + -1;
              lVar18 = *plVar16;
            } while (iVar3 <= *(int *)(lVar18 + 8));
          } while (plVar11 < plVar16);
        }
        plVar16 = plVar11 + -1;
        if (plVar16 != plVar10) {
          lVar18 = *plVar16;
          *plVar16 = 0;
          plVar8 = (long *)*plVar10;
          *plVar10 = lVar18;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
        plVar8 = (long *)*plVar16;
        *plVar16 = lVar14;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        if (plVar7 < plVar9) {
LAB_10aa3d104:
          FUN_10aa3cc8c(plVar10,plVar16,lVar15,bVar25);
          bVar25 = false;
          plVar7 = plVar10;
        }
        else {
          plVar9 = plVar10;
          FUN_10aa3d9a8(plVar10,plVar16);
          plVar7 = plVar11;
          FUN_10aa3d9a8(plVar11,plVar23);
          if ((int)plVar7 == 0) {
            if (((ulong)plVar9 & 1) == 0) goto LAB_10aa3d104;
          }
          else {
            plVar11 = plVar10;
            plVar23 = plVar16;
            if (((ulong)plVar9 & 1) != 0) {
              return plVar7;
            }
          }
        }
        goto LAB_10aa3ccb8;
      }
      *plVar10 = 0;
      if (iVar3 < *(int *)(plVar23[-1] + 8)) {
        do {
          plVar11 = plVar11 + 1;
          if (plVar11 == plVar23) goto LAB_10aa3d7a8;
        } while (*(int *)(*plVar11 + 8) <= iVar3);
      }
      else {
        do {
          plVar11 = plVar11 + 1;
          if (plVar23 <= plVar11) break;
        } while (*(int *)(*plVar11 + 8) <= iVar3);
      }
      plVar7 = plVar23;
      if (plVar11 < plVar23) {
        do {
          if (plVar7 == plVar10) goto LAB_10aa3d7a8;
          plVar7 = plVar7 + -1;
        } while (iVar3 < *(int *)(*plVar7 + 8));
      }
      if (plVar11 < plVar7) {
        lVar18 = *plVar11;
        lVar20 = *plVar7;
        do {
          *plVar11 = lVar20;
          *plVar7 = lVar18;
          do {
            plVar11 = plVar11 + 1;
            if (plVar11 == plVar23) goto LAB_10aa3d7a8;
            lVar18 = *plVar11;
          } while (*(int *)(lVar18 + 8) <= iVar3);
          do {
            if (plVar7 == plVar10) goto LAB_10aa3d7a8;
            plVar7 = plVar7 + -1;
            lVar20 = *plVar7;
          } while (iVar3 < *(int *)(lVar20 + 8));
        } while (plVar11 < plVar7);
      }
      plVar9 = plVar11 + -1;
      if (plVar9 != plVar10) {
        lVar18 = *plVar9;
        *plVar9 = 0;
        plVar7 = (long *)*plVar10;
        *plVar10 = lVar18;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      bVar25 = false;
      plVar7 = (long *)*plVar9;
      *plVar9 = lVar14;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
        bVar25 = false;
      }
    } while( true );
  }
  lVar15 = param_1[3];
  lVar14 = (long)puVar2 - lVar15;
  uVar26 = (lVar14 >> 3) + 1;
  if (uVar26 >> 0x3d == 0) {
    uVar24 = param_1[5] - lVar15;
    uVar28 = (long)uVar24 >> 2;
    if (uVar28 <= uVar26) {
      uVar28 = uVar26;
    }
    if (0x7ffffffffffffff7 < uVar24) {
      uVar28 = 0x1fffffffffffffff;
    }
    if (uVar28 >> 0x3d == 0) {
      lVar18 = uVar28 << 3;
      __Znwm();
      puVar2 = (undefined8 *)(lVar18 + lVar14);
      uVar12 = *param_2;
      *param_2 = 0;
      plVar23 = puVar2 + 1;
      *puVar2 = uVar12;
      _memcpy(puVar2 + -(lVar14 >> 3),lVar15,lVar14);
      param_1[3] = (long)(puVar2 + -(lVar14 >> 3));
      param_1[4] = (long)plVar23;
      param_1[5] = lVar18 + uVar28 * 8;
      if (lVar15 != 0) {
        __ZdlPv(lVar15);
      }
      goto LAB_10aa1b8f0;
    }
  }
  else {
    FUN_10aa3cc78();
  }
  func_0x000109ffded8();
  func_0x00010aa3cba8(param_1 + 0xb);
  FUN_10aa61480(param_1 + 6);
  FUN_10aa3cc04(param_1 + 3);
  return param_1;
}



/* Entry: 10aa1b93c; end: 10aa1ba1f;  */

long FUN_10aa1b93c(long param_1)

{
  func_0x00010aa3cba8(param_1 + 0x58);
  FUN_10aa61480(param_1 + 0x30);
  FUN_10aa3cc04(param_1 + 0x18);
  return param_1;
}



/* Entry: 10aa1ba20; end: 10aa1ba23;  */

void FUN_10aa1ba20(void)

{
  return;
}



/* Entry: 10aa1ba24; end: 10aa1c0e7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10aa1ba24(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *******pppppppuVar4;
  code *pcVar5;
  long *plVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar11;
  ulong *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong *puVar20;
  float fVar21;
  undefined8 *******pppppppuStack_90;
  ulong uStack_88;
  undefined7 uStack_80;
  byte bStack_79;
  long *plStack_78;
  ulong *puStack_70;
  undefined8 uStack_68;
  
  lVar15 = *param_3;
  plVar11 = (long *)*(long *)(lVar15 + 0x58);
  if (-1 < *(char *)(lVar15 + 0x6f)) {
    plVar11 = (long *)(lVar15 + 0x58);
  }
  if (*(long *)(lVar15 + 0xe0) == 0) {
    if ((bRam000000011330a9e8 & 1) == 0) goto LAB_10aa1bb80;
    puVar10 = &UNK_10f68ac2b;
    uVar9 = 0x4d;
  }
  else {
    puVar18 = *(ulong **)(param_2 + 0x20);
    for (puVar1 = *(ulong **)(param_2 + 0x18); puVar1 != puVar18; puVar1 = puVar1 + 1) {
      plVar6 = (long *)*puVar1;
      (**(code **)(*plVar6 + 0x10))(plVar6,lVar15,param_4);
      if (((ulong)plVar6 & 1) != 0) {
        plVar6 = (long *)*puVar1;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x18))(&pppppppuStack_90,plVar6,lVar15,param_4);
          puVar1 = (ulong *)(param_2 + 0x30);
          puVar7 = puVar1;
          func_0x000107c2b05c(puVar1,&pppppppuStack_90);
          puVar20 = *(ulong **)(param_2 + 0x38);
          if (puVar20 == (ulong *)0x0) goto LAB_10aa1bc5c;
          uVar19 = (long)puVar20 - 1;
          if (((ulong)puVar20 & uVar19) == 0) {
            puVar16 = (ulong *)(uVar19 & (ulong)puVar7);
          }
          else {
            puVar16 = puVar7;
            if (puVar20 <= puVar7) {
              uVar8 = 0;
              if (puVar20 != (ulong *)0x0) {
                uVar8 = (ulong)puVar7 / (ulong)puVar20;
              }
              puVar16 = (ulong *)((long)puVar7 - uVar8 * (long)puVar20);
            }
          }
          plVar11 = *(long **)(*puVar1 + (long)puVar16 * 8);
          puVar18 = puVar7;
          if ((plVar11 == (long *)0x0) || (plVar11 = (long *)*plVar11, plVar11 == (long *)0x0))
          goto LAB_10aa1bc5c;
          goto LAB_10aa1bbc0;
        }
        break;
      }
    }
    if ((bRam000000011330a9e8 & 1) == 0) goto LAB_10aa1bb80;
    puVar10 = &UNK_10f68ac7d;
    uVar9 = 0x54;
  }
  func_0x00010ae06f08(0,1,&UNK_10f68ab50,&UNK_10f68ab87,uVar9,puVar10,in_x6,in_x7,plVar11);
LAB_10aa1bb80:
  *param_1 = 0;
  param_1[1] = 0;
  return;
LAB_10aa1bbc0:
  do {
    puVar12 = (ulong *)plVar11[1];
    if (puVar12 == puVar7) {
      puVar12 = puVar1;
      func_0x000107c2b068(puVar1,plVar11 + 2,&pppppppuStack_90);
      if (((ulong)puVar12 & 1) != 0) {
        *param_1 = 0;
        param_1[1] = 0;
        lVar15 = plVar11[6];
        if (lVar15 != 0) {
          __ZNSt3__119__shared_weak_count4lockEv();
          param_1[1] = lVar15;
          if (lVar15 == 0) {
            lVar15 = *param_1;
          }
          else {
            lVar15 = plVar11[5];
            *param_1 = lVar15;
          }
          if (lVar15 != 0) goto LAB_10aa1c028;
        }
        func_0x00010aa6151c(puVar1,plVar11);
        FUN_10a40c30c(param_1);
        break;
      }
    }
    else {
      if (((ulong)puVar20 & uVar19) == 0) {
        puVar12 = (ulong *)((ulong)puVar12 & uVar19);
      }
      else if (puVar20 <= puVar12) {
        uVar8 = 0;
        if (puVar20 != (ulong *)0x0) {
          uVar8 = (ulong)puVar12 / (ulong)puVar20;
        }
        puVar12 = (ulong *)((long)puVar12 - uVar8 * (long)puVar20);
      }
      if (puVar12 != puVar16) break;
    }
    plVar11 = (long *)*plVar11;
  } while (plVar11 != (long *)0x0);
LAB_10aa1bc5c:
  uVar19 = uStack_88;
  pppppppuVar4 = pppppppuStack_90;
  if (-1 < (char)bStack_79) {
    uVar19 = (ulong)bStack_79;
    pppppppuVar4 = &pppppppuStack_90;
  }
  (**(code **)(*plVar6 + 0x20))
            (param_1,plVar6,*(undefined8 *)(param_2 + 0x10),pppppppuVar4,uVar19,param_3,param_4);
  lVar15 = *param_1;
  if (lVar15 == 0) goto LAB_10aa1c028;
  lVar17 = param_1[1];
  if (lVar17 != 0) {
    plVar11 = (long *)(lVar17 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar7 = puVar1;
  func_0x000107c2b05c(puVar1,&pppppppuStack_90);
  puVar20 = *(ulong **)(param_2 + 0x38);
  if (puVar20 != (ulong *)0x0) {
    uVar19 = (long)puVar20 - 1;
    if (((ulong)puVar20 & uVar19) == 0) {
      puVar18 = (ulong *)(uVar19 & (ulong)puVar7);
    }
    else {
      puVar18 = puVar7;
      if (puVar20 <= puVar7) {
        uVar8 = 0;
        if (puVar20 != (ulong *)0x0) {
          uVar8 = (ulong)puVar7 / (ulong)puVar20;
        }
        puVar18 = (ulong *)((long)puVar7 - uVar8 * (long)puVar20);
      }
    }
    plVar11 = *(long **)(*puVar1 + (long)puVar18 * 8);
    if (plVar11 != (long *)0x0) {
      for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        puVar16 = (ulong *)plVar11[1];
        if (puVar16 == puVar7) {
          puVar16 = puVar1;
          func_0x000107c2b068(puVar1,plVar11 + 2,&pppppppuStack_90);
          if (((ulong)puVar16 & 1) != 0) {
            if (lVar17 != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv(lVar17);
            }
            goto LAB_10aa1c028;
          }
        }
        else {
          if (((ulong)puVar20 & uVar19) == 0) {
            puVar16 = (ulong *)((ulong)puVar16 & uVar19);
          }
          else if (puVar20 <= puVar16) {
            uVar8 = 0;
            if (puVar20 != (ulong *)0x0) {
              uVar8 = (ulong)puVar16 / (ulong)puVar20;
            }
            puVar16 = (ulong *)((long)puVar16 - uVar8 * (long)puVar20);
          }
          if (puVar16 != puVar18) break;
        }
      }
    }
  }
  plVar11 = (long *)0x38;
  __Znwm();
  uStack_68 = 0;
  *plVar11 = 0;
  plVar11[1] = (long)puVar7;
  plStack_78 = plVar11;
  puStack_70 = puVar1;
  if ((char)bStack_79 < '\0') {
    func_0x000107c3192c(plVar11 + 2,pppppppuStack_90,uStack_88);
  }
  else {
    plVar11[3] = uStack_88;
    plVar11[2] = (long)pppppppuStack_90;
    plVar11[4] = CONCAT17(bStack_79,uStack_80);
  }
  plVar11[5] = lVar15;
  plVar11[6] = lVar17;
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  fVar21 = (float)(*(long *)(param_2 + 0x48) + 1);
  if ((puVar20 == (ulong *)0x0) || (*(float *)(param_2 + 0x50) * (float)puVar20 < fVar21)) {
    uVar19 = 1;
    if ((ulong *)0x2 < puVar20) {
      uVar19 = (ulong)(((ulong)puVar20 & (long)puVar20 - 1U) != 0);
    }
    puVar18 = (ulong *)(uVar19 | (long)puVar20 << 1);
    puVar20 = (ulong *)(long)(fVar21 / *(float *)(param_2 + 0x50));
    if (puVar18 <= puVar20) {
      puVar18 = puVar20;
    }
    if ((long)puVar18 - 1U == 0) {
      puVar18 = (ulong *)0x2;
    }
    else if (((ulong)puVar18 & (long)puVar18 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    puVar20 = *(ulong **)(param_2 + 0x38);
    if (puVar20 < puVar18) {
LAB_10aa1be3c:
      if ((ulong)puVar18 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa1c090);
        (*pcVar5)();
      }
      uVar19 = (long)puVar18 << 3;
      __Znwm();
      uVar8 = *puVar1;
      *puVar1 = uVar19;
      if (uVar8 != 0) {
        __ZdlPv();
      }
      puVar20 = (ulong *)0x0;
      *(ulong **)(param_2 + 0x38) = puVar18;
      do {
        *(undefined8 *)(*puVar1 + (long)puVar20 * 8) = 0;
        puVar20 = (ulong *)((long)puVar20 + 1);
      } while (puVar18 != puVar20);
      plVar6 = *(long **)(param_2 + 0x40);
      puVar20 = puVar18;
      if (plVar6 != (long *)0x0) {
        puVar16 = (ulong *)plVar6[1];
        uVar19 = (long)puVar18 - 1;
        if (((ulong)puVar18 & uVar19) == 0) {
          puVar16 = (ulong *)((ulong)puVar16 & uVar19);
        }
        else if (puVar18 <= puVar16) {
          uVar8 = 0;
          if (puVar18 != (ulong *)0x0) {
            uVar8 = (ulong)puVar16 / (ulong)puVar18;
          }
          puVar16 = (ulong *)((long)puVar16 - uVar8 * (long)puVar18);
        }
        *(undefined8 **)(*puVar1 + (long)puVar16 * 8) = (undefined8 *)(param_2 + 0x40);
        plVar13 = (long *)*plVar6;
        while (plVar13 != (long *)0x0) {
          puVar12 = (ulong *)plVar13[1];
          if (((ulong)puVar18 & uVar19) == 0) {
            puVar12 = (ulong *)((ulong)puVar12 & uVar19);
          }
          else if (puVar18 <= puVar12) {
            uVar8 = 0;
            if (puVar18 != (ulong *)0x0) {
              uVar8 = (ulong)puVar12 / (ulong)puVar18;
            }
            puVar12 = (ulong *)((long)puVar12 - uVar8 * (long)puVar18);
          }
          plVar14 = plVar13;
          if (puVar12 != puVar16) {
            uVar8 = *puVar1;
            if (*(long *)(uVar8 + (long)puVar12 * 8) == 0) {
              *(long **)(uVar8 + (long)puVar12 * 8) = plVar6;
              puVar16 = puVar12;
            }
            else {
              *plVar6 = *plVar13;
              *plVar13 = **(undefined8 **)(uVar8 + (long)puVar12 * 8);
              **(long **)(uVar8 + (long)puVar12 * 8) = (long)plVar13;
              plVar14 = plVar6;
            }
          }
          plVar6 = plVar14;
          plVar13 = (long *)*plVar14;
        }
      }
    }
    else if (puVar18 < puVar20) {
      puVar16 = (ulong *)(long)((float)*(ulong *)(param_2 + 0x48) / *(float *)(param_2 + 0x50));
      if ((puVar20 < (ulong *)0x3) || (((ulong)puVar20 & (long)puVar20 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((ulong *)0x1 < puVar16) {
        puVar16 = (ulong *)(1L << (-LZCOUNT((long)puVar16 + -1) & 0x3fU));
      }
      if (puVar18 <= puVar16) {
        puVar18 = puVar16;
      }
      if (puVar18 < puVar20) {
        if (puVar18 != (ulong *)0x0) goto LAB_10aa1be3c;
        uVar19 = *puVar1;
        *puVar1 = 0;
        if (uVar19 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(param_2 + 0x38) = 0;
        puVar20 = (ulong *)0x0;
      }
      else {
        puVar20 = *(ulong **)(param_2 + 0x38);
      }
    }
    if (((ulong)puVar20 & (long)puVar20 - 1U) == 0) {
      puVar18 = (ulong *)((long)puVar20 - 1U & (ulong)puVar7);
    }
    else {
      puVar18 = puVar7;
      if (puVar20 <= puVar7) {
        uVar19 = 0;
        if (puVar20 != (ulong *)0x0) {
          uVar19 = (ulong)puVar7 / (ulong)puVar20;
        }
        puVar18 = (ulong *)((long)puVar7 - uVar19 * (long)puVar20);
      }
    }
  }
  uVar19 = *puVar1;
  plVar6 = *(long **)(uVar19 + (long)puVar18 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)(param_2 + 0x40);
    *plVar11 = *plVar6;
    *plVar6 = (long)plVar11;
    *(long **)(uVar19 + (long)puVar18 * 8) = plVar6;
    if (*plVar11 != 0) {
      puVar18 = *(ulong **)(*plVar11 + 8);
      if (((ulong)puVar20 & (long)puVar20 - 1U) == 0) {
        puVar18 = (ulong *)((ulong)puVar18 & (long)puVar20 - 1U);
      }
      else if (puVar20 <= puVar18) {
        uVar19 = 0;
        if (puVar20 != (ulong *)0x0) {
          uVar19 = (ulong)puVar18 / (ulong)puVar20;
        }
        puVar18 = (ulong *)((long)puVar18 - uVar19 * (long)puVar20);
      }
      *(long **)(*puVar1 + (long)puVar18 * 8) = plVar11;
    }
  }
  else {
    *plVar11 = *plVar6;
    *plVar6 = (long)plVar11;
  }
  *(long *)(param_2 + 0x48) = *(long *)(param_2 + 0x48) + 1;
LAB_10aa1c028:
  if (-1 < (char)bStack_79) {
    return;
  }
  __ZdlPv(pppppppuStack_90);
  return;
}



/* Entry: 10aa1c0e8; end: 10aa1c183;  */

undefined1  [16] FUN_10aa1c0e8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1e;
  auVar1._0_8_ = &UNK_10f68ba5f;
  return auVar1;
}



/* Entry: 10aa1c184; end: 10aa1c1db;  */

void FUN_10aa1c184(undefined8 param_1)

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
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68a4a1;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10aa1c1dc(param_1,&uStack_58);
  FUN_10aa617a8();
  return;
}



/* Entry: 10aa1c1dc; end: 10aa1c2b3;  */

/* WARNING: Removing unreachable block (ram,0x00010aa1c274) */

undefined1  [16] FUN_10aa1c1dc(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f68ba5f,0x1e);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aa616ac(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa1c2b4; end: 10aa1c36b;  */

bool FUN_10aa1c2b4(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0xc) != '\x01') {
    return true;
  }
  plVar2 = *(long **)(param_2 + 0xe0);
  if ((*(byte *)(plVar2 + 0x17) & 1) == 0) {
LAB_10aa1c308:
    bVar1 = true;
  }
  else {
    (**(code **)(*plVar2 + 0x90))();
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      if ((*(long *)(lVar3 + 0x58) != *(long *)(lVar3 + 0x60)) ||
         (*(long *)(lVar3 + 0x40) != *(long *)(lVar3 + 0x48))) goto LAB_10aa1c308;
      lVar4 = *(long *)(lVar3 + 0xa0);
      lVar3 = *(long *)(lVar3 + 0xa8);
      if (lVar4 != lVar3) {
        do {
          FUN_10ab6e728();
          if (*(long *)(lVar4 + 0x28) == lRam00000001138356d8) goto LAB_10aa1c34c;
          lVar4 = lVar4 + 0x58;
        } while (lVar4 != lVar3);
        lVar4 = 0;
LAB_10aa1c34c:
        return lVar4 != 0;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10aa1c36c; end: 10aa1c3b7;  */

void FUN_10aa1c36c(void)

{
  FUN_10a0ee900(&UNK_10f68accb,9);
  return;
}



/* Entry: 10aa1c3b8; end: 10aa1c41b;  */

void FUN_10aa1c3b8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lStack_40;
  long lStack_38;
  
  uVar1 = param_3;
  func_0x00010a0fda30();
  FUN_10aa1c41c(&lStack_40,param_3,param_2,uVar1);
  FUN_10a19ad28(lStack_40 + 0xe0,param_6);
  *param_1 = lStack_40;
  param_1[1] = lStack_38;
  return;
}



/* Entry: 10aa1c41c; end: 10aa1c80b;  */

/* WARNING: Removing unreachable block (ram,0x00010aa1c588) */

void FUN_10aa1c41c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_60;
  long *plStack_58;
  
  if (param_2 == 0) {
    plVar3 = (long *)0x138;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c3c818;
    plVar6 = plVar3 + 3;
    FUN_10aa7093c(plVar6,0,param_3,param_4);
    plVar3[3] = (long)&PTR_FUN_110c38e18;
    plVar3[5] = (long)&PTR_DAT_110c38ef0;
    plVar3[10] = (long)&PTR_DAT_110c38f48;
    plVar3[0x25] = 0;
    plVar3[0x26] = 0;
    plVar3[0x20] = 0;
    plVar3[0x1f] = 0;
    plVar3[0x22] = 0;
    plVar3[0x21] = 0;
    *(undefined8 *)((long)plVar3 + 0x11d) = 0;
    *(undefined8 *)((long)plVar3 + 0x115) = 0;
    plStack_60 = plVar6;
    plStack_58 = plVar3;
    FUN_10aa61a20(&plStack_60,plVar3 + 8,plVar6);
    FUN_10aa618bc(param_1,&plStack_60);
    plVar6 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 0x858);
    plVar6 = *(long **)(param_2 + 0x860);
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x120;
    __Znwm();
    FUN_10aa7093c();
    *plVar3 = (long)&PTR_FUN_110c38e18;
    plVar3[2] = (long)&PTR_DAT_110c38ef0;
    plVar3[7] = (long)&PTR_DAT_110c38f48;
    plVar3[0x22] = 0;
    plVar3[0x23] = 0;
    plVar3[0x1d] = 0;
    plVar3[0x1c] = 0;
    plVar3[0x1f] = 0;
    plVar3[0x1e] = 0;
    *(undefined8 *)((long)plVar3 + 0x105) = 0;
    *(undefined8 *)((long)plVar3 + 0xfd) = 0;
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar6 + 2;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar4 = (long *)0x30;
    plStack_60 = plVar3;
    __Znwm();
    *plVar4 = (long)&PTR_DAT_110c3c7b8;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar6;
    plStack_58 = plVar4;
    FUN_10aa61a20(&plStack_60,plVar3 + 5,plVar3);
    FUN_10aa618bc(param_1,&plStack_60);
    plVar3 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((lVar7 != 0) && (plVar3 = (long *)*param_1, plVar3 != (long *)0x0)) {
      plStack_58 = (long *)param_1[1];
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_60 = plVar3;
      FUN_10aa88c30(lVar7,&plStack_60);
      plVar3 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10aa1c80c; end: 10aa1c87f;  */

undefined8 * FUN_10aa1c80c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN_10aa61270(param_1 + 0x22);
  lVar2 = param_1[0x1e];
  if (lVar2 != 0) {
    lVar3 = param_1[0x1f];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        if (*(long *)(lVar3 + -8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != lVar2);
      lVar1 = param_1[0x1e];
    }
    param_1[0x1f] = lVar2;
    __ZdlPv(lVar1);
  }
  FUN_10a0e3194(param_1 + 0x1c);
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



/* Entry: 10aa1c880; end: 10aa1c893;  */

undefined8 * FUN_10aa1c880(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN_10aa61270(param_1 + 0x22);
  lVar2 = param_1[0x1e];
  if (lVar2 != 0) {
    lVar3 = param_1[0x1f];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        if (*(long *)(lVar3 + -8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != lVar2);
      lVar1 = param_1[0x1e];
    }
    param_1[0x1f] = lVar2;
    __ZdlPv(lVar1);
  }
  FUN_10a0e3194(param_1 + 0x1c);
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



/* Entry: 10aa1c894; end: 10aa1c8d7;  */

void FUN_10aa1c894(void)

{
  FUN_10aa1c80c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa1c8d8; end: 10aa1ca4b;  */

void FUN_10aa1c8d8(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  lVar8 = *(long *)(param_2 + 0xf0);
  lVar2 = *(long *)(param_2 + 0xf8);
  do {
    if (lVar8 == lVar2) goto LAB_10aa1c9b0;
    plVar5 = *(long **)(lVar8 + 0x10);
    if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)
       ) {
      if (*(long *)(lVar8 + 8) != 0) {
        FUN_10aa1a9cc(&uStack_68);
        if (lStack_40 < 0) {
          __ZdlPv(uStack_50);
        }
        uStack_48 = uStack_60;
        uStack_50 = uStack_68;
        lStack_40 = lStack_58;
        plVar1 = plVar5 + 1;
        do {
          lVar8 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
LAB_10aa1c9b0:
        puVar6 = (undefined8 *)0x20;
        __Znwm();
        puVar6[1] = 0x6e696d726f666544;
        *puVar6 = 0x2e73636973796850;
        *(undefined8 *)((long)puVar6 + 0x16) = 0x6873654d6e6f6973;
        *(undefined8 *)((long)puVar6 + 0xe) = 0x696c6c6f43676e69;
        *(undefined1 *)((long)puVar6 + 0x1e) = 0;
        FUN_10a0ee900(param_1,&UNK_10f591ec1,5);
        __ZdlPv(puVar6);
        if (lStack_40 < 0) {
          __ZdlPv(uStack_50);
        }
        return;
      }
      plVar1 = plVar5 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    lVar8 = lVar8 + 0x18;
  } while( true );
}



/* Entry: 10aa1ca4c; end: 10aa1ca53;  */

void FUN_10aa1ca4c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  lVar8 = *(long *)(param_2 + 0xe0);
  lVar2 = *(long *)(param_2 + 0xe8);
  do {
    if (lVar8 == lVar2) goto LAB_10aa1c9b0;
    plVar5 = *(long **)(lVar8 + 0x10);
    if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)
       ) {
      if (*(long *)(lVar8 + 8) != 0) {
        FUN_10aa1a9cc(&uStack_68);
        if (lStack_40 < 0) {
          __ZdlPv(uStack_50);
        }
        uStack_48 = uStack_60;
        uStack_50 = uStack_68;
        lStack_40 = lStack_58;
        plVar1 = plVar5 + 1;
        do {
          lVar8 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
LAB_10aa1c9b0:
        puVar6 = (undefined8 *)0x20;
        __Znwm();
        puVar6[1] = 0x6e696d726f666544;
        *puVar6 = 0x2e73636973796850;
        *(undefined8 *)((long)puVar6 + 0x16) = 0x6873654d6e6f6973;
        *(undefined8 *)((long)puVar6 + 0xe) = 0x696c6c6f43676e69;
        *(undefined1 *)((long)puVar6 + 0x1e) = 0;
        FUN_10a0ee900(param_1,&UNK_10f591ec1,5);
        __ZdlPv(puVar6);
        if (lStack_40 < 0) {
          __ZdlPv(uStack_50);
        }
        return;
      }
      plVar1 = plVar5 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    lVar8 = lVar8 + 0x18;
  } while( true );
}



/* Entry: 10aa1ca54; end: 10aa1cab7;  */

void FUN_10aa1ca54(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  lVar1 = param_2;
  func_0x00010a0fda30();
  FUN_10aa1c41c(&lStack_40,uVar2,lVar1,param_3);
  FUN_10a19ad28(lStack_40 + 0xe0,param_2 + 0xe0);
  *param_1 = lStack_40;
  param_1[1] = lStack_38;
  return;
}



/* Entry: 10aa1cab8; end: 10aa1cc7f;  */

void FUN_10aa1cab8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  undefined8 uStack_60;
  long *plStack_58;
  
  (**(code **)(*param_2 + 0x50))(&uStack_60);
  plVar5 = plStack_58;
  uVar12 = uStack_60;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
  }
  puVar6 = (undefined8 *)0xc0;
  __Znwm();
  uStack_60 = 0;
  plStack_58 = (long *)0x0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[5] = 0x3f80000000000000;
  puVar6[4] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0;
  *puVar6 = &PTR_DAT_110c3c868;
  puVar6[1] = puVar6 + 0xe;
  puVar6[9] = plVar5;
  puVar6[8] = uVar12;
  puVar6[10] = param_3;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  fVar8 = *(float *)(param_4 + 1);
  puVar6[0x10] = 0;
  puVar6[0x11] = 0xffffffffffffffff;
  *(undefined4 *)(puVar6 + 0x12) = 0;
  fVar8 = fVar8 * 0.01;
  fVar9 = (float)*param_4 * 0.01;
  fVar10 = (float)((ulong)*param_4 >> 0x20) * 0.01;
  uVar12 = NEON_fmov(0x3f800000,4);
  fVar11 = (float)uVar12 / fVar9;
  fVar13 = (float)((ulong)uVar12 >> 0x20) / fVar10;
  iVar14 = -(uint)(fVar9 == 0.0);
  iVar15 = -(uint)(fVar10 == 0.0);
  puVar6[0xe] = &PTR_DAT_110c39da8;
  puVar6[0x13] = 0;
  *(undefined4 *)(puVar6 + 0xf) = 0x17;
  fVar4 = 0.0;
  if (fVar8 != 0.0) {
    fVar4 = 1.0 / fVar8;
  }
  puVar6[0x15] = (ulong)(uint)fVar8;
  puVar6[0x14] = CONCAT44(fVar10,fVar9);
  puVar6[0x17] = (ulong)(uint)fVar4;
  puVar6[0x16] = CONCAT17((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                          CONCAT16((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                   CONCAT15((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                            CONCAT14(SUB41(fVar13,0) & ~(byte)iVar15,
                                                     CONCAT13((byte)((uint)fVar11 >> 0x18) &
                                                              ~(byte)((uint)iVar14 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar11 >> 0x10)
                                                                       & ~(byte)((uint)iVar14 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar11
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar14
                                                                                       >> 8),
                                                                                SUB41(fVar11,0) &
                                                                                ~(byte)iVar14)))))))
  ;
  FUN_10aa61bfc();
  *param_1 = puVar6;
  return;
}



/* Entry: 10aa1cc80; end: 10aa1cd6b;  */

bool FUN_10aa1cc80(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong *puVar1;
  byte *pbVar2;
  ushort *puVar3;
  uint *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong extraout_x10;
  ulong uVar10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  float *pfVar11;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  uint uVar12;
  float *pfVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint *puStack_50;
  long *plStack_48;
  
  FUN_10aa1d198(&puStack_50,param_1,param_2,0);
  uVar10 = extraout_x10;
  uVar12 = extraout_w11;
  if (plStack_48 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_48 + 1);
    do {
      uVar9 = *puVar1;
      uVar10 = uVar9 - 1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar12 = 0;
    if (uVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      uVar10 = extraout_x10_01;
      uVar12 = extraout_w11_01;
    }
  }
  if ((puStack_50 != (uint *)0x0) && ((uint)param_3 < *puStack_50)) {
    lVar14 = *(long *)(param_2 + 0x178);
    if ((*(byte *)(lVar14 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(lVar14);
      uVar10 = extraout_x10_00;
      uVar12 = extraout_w11_00;
    }
    cVar5 = (char)puStack_50[2];
    lVar7 = *(long *)(puStack_50 + 6);
    uVar9 = -(param_3 >> 0x1f & 1) & 0xfffffffe00000000 | (param_3 & 0xffffffff) << 1;
    lVar8 = uVar9 + (long)(int)(uint)param_3;
    if (cVar5 == '\x04') {
      puVar4 = (uint *)(lVar7 + lVar8 * 4);
      uVar9 = (ulong)*puVar4;
      uVar10 = (ulong)puVar4[1];
      uVar12 = puVar4[2];
    }
    else if (cVar5 == '\x02') {
      puVar3 = (ushort *)(lVar7 + lVar8 * 2);
      uVar9 = (ulong)*puVar3;
      uVar10 = (ulong)puVar3[1];
      uVar12 = (uint)puVar3[2];
    }
    else if (cVar5 == '\x01') {
      pbVar2 = (byte *)(lVar7 + lVar8);
      uVar9 = (ulong)*pbVar2;
      uVar10 = (ulong)pbVar2[1];
      uVar12 = (uint)pbVar2[2];
    }
    lVar8 = 0;
    *(ulong *)(param_5 + 0x14) = uVar9 & 0xffffffff | uVar10 << 0x20;
    *(uint *)(param_5 + 0x1c) = uVar12;
    pfVar11 = (float *)(param_5 + 0x28);
    do {
      uVar12 = *(uint *)(param_5 + 0x14 + lVar8);
      bVar6 = uVar12 < 0x80000000 && uVar12 < puStack_50[1];
      if ((int)uVar12 < 0 || uVar12 >= puStack_50[1]) {
        return bVar6;
      }
      pfVar13 = (float *)(*(long *)(puStack_50 + 4) + (ulong)uVar12 * 0xc);
      fVar15 = *pfVar13;
      fVar17 = pfVar13[1];
      fVar19 = pfVar13[2];
      fVar21 = *(float *)(lVar14 + 200);
      fVar22 = *(float *)(lVar14 + 0xd8);
      fVar23 = *(float *)(lVar14 + 0xe8);
      fVar24 = *(float *)(lVar14 + 0xf8);
      uVar20 = *(undefined8 *)(lVar14 + 0xf0);
      fVar18 = (float)*(undefined8 *)(lVar14 + 0xe0) * fVar19 + (float)uVar20;
      fVar16 = (float)*(undefined8 *)(lVar14 + 0xc0) * fVar15 +
               (float)*(undefined8 *)(lVar14 + 0xd0) * fVar17 + fVar18;
      *(ulong *)(pfVar11 + -2) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar14 + 0xc0) >> 0x20) * fVar15 +
                    (float)((ulong)*(undefined8 *)(lVar14 + 0xd0) >> 0x20) * fVar17 +
                    (float)((ulong)*(undefined8 *)(lVar14 + 0xe0) >> 0x20) * fVar19 +
                    (float)((ulong)uVar20 >> 0x20),fVar16);
      *pfVar11 = fVar15 * fVar21 + fVar17 * fVar22 + fVar19 * fVar23 + fVar24;
      lVar8 = lVar8 + 4;
      pfVar11 = pfVar11 + 3;
    } while (lVar8 != 0xc);
    FUN_10a0f0254(param_4,param_5 + 0x20);
    *(float *)(param_5 + 0x44) = fVar16;
    *(float *)(param_5 + 0x48) = fVar18;
    *(int *)(param_5 + 0x4c) = (int)uVar20;
    return bVar6;
  }
  return false;
}



/* Entry: 10aa1cd6c; end: 10aa1ceab;  */

bool FUN_10aa1cd6c(long param_1,long param_2,uint param_3,undefined8 param_4,undefined8 *param_5)

{
  bool bVar1;
  byte *pbVar2;
  ushort *puVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong in_x10;
  float *pfVar11;
  uint in_w11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  cVar6 = *(char *)(param_2 + 8);
  lVar8 = *(long *)(param_2 + 0x18);
  uVar10 = -(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_3 << 1;
  lVar9 = uVar10 + (long)(int)param_3;
  if (cVar6 == '\x04') {
    puVar4 = (uint *)(lVar8 + lVar9 * 4);
    uVar10 = (ulong)*puVar4;
    in_x10 = (ulong)puVar4[1];
    in_w11 = puVar4[2];
  }
  else if (cVar6 == '\x02') {
    puVar3 = (ushort *)(lVar8 + lVar9 * 2);
    uVar10 = (ulong)*puVar3;
    in_x10 = (ulong)puVar3[1];
    in_w11 = (uint)puVar3[2];
  }
  else if (cVar6 == '\x01') {
    pbVar2 = (byte *)(lVar8 + lVar9);
    uVar10 = (ulong)*pbVar2;
    in_x10 = (ulong)pbVar2[1];
    in_w11 = (uint)pbVar2[2];
  }
  lVar9 = 0;
  *(ulong *)(param_1 + 0x14) = uVar10 & 0xffffffff | in_x10 << 0x20;
  *(uint *)(param_1 + 0x1c) = in_w11;
  pfVar11 = (float *)(param_1 + 0x28);
  do {
    uVar5 = *(uint *)(param_1 + 0x14 + lVar9);
    bVar7 = uVar5 < *(uint *)(param_2 + 4);
    bVar1 = uVar5 < 0x80000000 && bVar7;
    if ((int)uVar5 < 0 || !bVar7) {
      return bVar1;
    }
    pfVar12 = (float *)(*(long *)(param_2 + 0x10) + (ulong)uVar5 * 0xc);
    fVar13 = *pfVar12;
    fVar15 = pfVar12[1];
    fVar17 = pfVar12[2];
    fVar19 = *(float *)(param_5 + 1);
    fVar20 = *(float *)(param_5 + 3);
    fVar21 = *(float *)(param_5 + 5);
    fVar22 = *(float *)(param_5 + 7);
    uVar18 = param_5[6];
    fVar16 = (float)param_5[4] * fVar17 + (float)uVar18;
    fVar14 = (float)*param_5 * fVar13 + (float)param_5[2] * fVar15 + fVar16;
    *(ulong *)(pfVar11 + -2) =
         CONCAT44((float)((ulong)*param_5 >> 0x20) * fVar13 +
                  (float)((ulong)param_5[2] >> 0x20) * fVar15 +
                  (float)((ulong)param_5[4] >> 0x20) * fVar17 + (float)((ulong)uVar18 >> 0x20),
                  fVar14);
    *pfVar11 = fVar13 * fVar19 + fVar15 * fVar20 + fVar17 * fVar21 + fVar22;
    lVar9 = lVar9 + 4;
    pfVar11 = pfVar11 + 3;
  } while (lVar9 != 0xc);
  FUN_10a0f0254(param_4,param_1 + 0x20);
  *(float *)(param_1 + 0x44) = fVar14;
  *(float *)(param_1 + 0x48) = fVar16;
  *(int *)(param_1 + 0x4c) = (int)uVar18;
  return bVar1;
}



/* Entry: 10aa1ceac; end: 10aa1cf5f;  */

void FUN_10aa1ceac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 *param_6)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long *in_stack_ffffffffffffffc8;
  
  *(undefined1 *)(param_5 + 0x10c) = 0;
  FUN_10aa1d198(&stack0xffffffffffffffc0,param_5,param_6[1],1);
  FUN_10aa1df10(param_5 + 0x110,&stack0xffffffffffffffc0);
  if (in_stack_ffffffffffffffc8 != (long *)0x0) {
    plVar1 = in_stack_ffffffffffffffc8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffc8 + 0x10))(in_stack_ffffffffffffffc8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffc8);
    }
  }
  puVar6 = *(undefined4 **)(param_5 + 0x110);
  if (puVar6 != (undefined4 *)0x0) {
    uVar7 = *param_6;
    bVar3 = *(byte *)(param_6 + 10);
    cVar4 = *(char *)(puVar6 + 2);
    if (cVar4 != '\0') {
      uVar9 = *(undefined8 *)(puVar6 + 4);
      uVar2 = puVar6[1];
      FUN_10aa1ab28(bVar3);
      uStack_60 = param_1;
      uStack_5c = param_2;
      uStack_58 = param_3;
      uStack_54 = param_4;
      FUN_10aaf8c7c(uVar7,param_6 + 2,*puVar6,uVar9,uVar2,cVar4,*(undefined8 *)(puVar6 + 6),
                    &uStack_60,3);
      if ((bVar3 & 0x15) != 0) {
        func_0x00010aa1abb4(bVar3);
        uStack_60 = param_1;
        uStack_5c = param_2;
        uStack_58 = param_3;
        uStack_54 = param_4;
        FUN_10aaf92b0(uVar7,param_6 + 2,*puVar6,uVar9,uVar2,*(undefined1 *)(puVar6 + 2),
                      *(undefined8 *)(puVar6 + 6),&uStack_60,3);
      }
    }
    return;
  }
  return;
}



/* Entry: 10aa1cf60; end: 10aa1d197;  */

/* WARNING: Removing unreachable block (ram,0x00010aa1d0b4) */
/* WARNING: Removing unreachable block (ram,0x00010aa1d0b8) */
/* WARNING: Removing unreachable block (ram,0x00010aa1d0d4) */
/* WARNING: Removing unreachable block (ram,0x00010aa1d0d8) */
/* WARNING: Removing unreachable block (ram,0x00010aa1d0e8) */

void FUN_10aa1cf60(long param_1)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
  puVar11 = *(undefined8 **)(param_1 + 0xf0);
  puVar3 = *(undefined8 **)(param_1 + 0xf8);
  do {
    puVar13 = puVar3;
    if (puVar11 == puVar3) {
LAB_10aa1d09c:
      puVar11 = *(undefined8 **)(param_1 + 0xf8);
      if (puVar11 < puVar13) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10aa1d198);
        (*pcVar8)();
      }
      if (puVar13 != puVar11) {
        for (; puVar11 != puVar13; puVar11 = puVar11 + -3) {
          if (puVar11[-1] != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        *(undefined8 **)(param_1 + 0xf8) = puVar13;
      }
      if ((*(long *)(param_1 + 0x110) != 0) &&
         (bVar1 = *(char *)(param_1 + 0x10c) + 1, *(byte *)(param_1 + 0x10c) = bVar1, 2 < bVar1)) {
        plVar9 = *(long **)(param_1 + 0x118);
        *(undefined8 *)(param_1 + 0x110) = 0;
        *(undefined8 *)(param_1 + 0x118) = 0;
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 1;
          do {
            lVar12 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar9);
            return;
          }
        }
      }
      return;
    }
    plVar9 = (long *)puVar11[2];
    if ((plVar9 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 == (long *)0x0)
       ) {
LAB_10aa1cff0:
      puVar13 = puVar11;
      puVar6 = puVar11;
      if (puVar11 != puVar3) {
        while (puVar7 = puVar6, puVar6 = puVar7 + 3, puVar13 = puVar11, puVar6 != puVar3) {
          plVar9 = (long *)puVar7[5];
          if ((plVar9 != (long *)0x0) &&
             (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 != (long *)0x0)) {
            lVar12 = puVar7[4];
            plVar2 = plVar9 + 1;
            do {
              lVar10 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar10 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
            if (lVar12 != 0) {
              *puVar11 = *puVar6;
              uVar15 = puVar7[5];
              uVar14 = puVar7[4];
              puVar7[4] = 0;
              puVar7[5] = 0;
              lVar12 = puVar11[2];
              puVar11[2] = uVar15;
              puVar11[1] = uVar14;
              if (lVar12 != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              puVar11 = puVar11 + 3;
            }
          }
        }
      }
      goto LAB_10aa1d09c;
    }
    lVar12 = puVar11[1];
    plVar2 = plVar9 + 1;
    do {
      lVar10 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
    if (lVar12 == 0) goto LAB_10aa1cff0;
    puVar11 = puVar11 + 3;
  } while( true );
}



/* Entry: 10aa1d198; end: 10aa1df0f;  */

void FUN_10aa1d198(undefined8 *param_1,long param_2,long param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  long lVar4;
  undefined8 ******ppppppuVar5;
  long lVar6;
  long lVar7;
  undefined8 ******ppppppuVar8;
  char cVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  code *pcVar13;
  ulong *puVar14;
  ulong *puVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  undefined8 *******pppppppuVar22;
  ulong uVar23;
  undefined4 *puVar24;
  undefined1 uVar25;
  byte bVar26;
  ulong uVar27;
  ulong *puVar28;
  long lVar29;
  undefined2 uVar30;
  ulong *puVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 ******ppppppuVar34;
  undefined8 *******pppppppuVar35;
  long lVar36;
  ulong *puVar37;
  ulong *puVar38;
  undefined8 ******ppppppuVar39;
  long lVar40;
  ulong *puVar41;
  long *plVar42;
  long *plVar43;
  undefined8 *******pppppppuVar44;
  long lVar45;
  long lVar46;
  float fVar47;
  ulong *puStack_130;
  undefined4 *puStack_128;
  undefined8 ******appppppuStack_120 [2];
  char cStack_109;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  long *plStack_c0;
  undefined8 ******ppppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  long lStack_a0;
  long *plStack_98;
  ulong *puStack_90;
  long *plStack_88;
  
  puStack_90 = (ulong *)0x0;
  plStack_88 = (long *)0x0;
  lVar36 = *(long *)(param_2 + 0xe0);
  puVar37 = *(ulong **)(lVar36 + 0xe0);
  if (puVar37 == (ulong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  uVar23 = 1;
  puVar14 = puVar37;
  FUN_10a061940();
  puVar15 = puVar37;
  (**(code **)(*puVar37 + 0x90))();
  uVar27 = *puVar15;
  if (uVar27 == 0) {
    puVar15 = (ulong *)0x0;
    plVar43 = (long *)0x0;
    if ((((ulong)puVar14 & 0xffffffff) != 2) || ((uRam000000011330a9e8 & 1) == 0))
    goto LAB_10aa1d888;
    (**(code **)(*puVar37 + 0x38))(puVar37);
    if (0x7ffffffffffffff7 < uVar23) {
      func_0x000109ffde50();
LAB_10aa1de60:
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10aa1de64);
      (*pcVar13)();
    }
    if (uVar23 < 0x17) {
      uStack_f8 = CONCAT17((char)uVar23,(undefined7)uStack_f8);
      puVar20 = &uStack_108;
      if (uVar23 != 0) goto LAB_10aa1d820;
    }
    else {
      puVar2 = (undefined8 *)0x19;
      if ((uVar23 | 7) != 0x17) {
        puVar2 = (undefined8 *)((uVar23 | 7) + 1);
      }
      puVar20 = puVar2;
      __Znwm();
      uStack_f8 = (ulong)puVar2 | 0x8000000000000000;
      uStack_108 = puVar20;
      uStack_100 = uVar23;
LAB_10aa1d820:
      _memmove(puVar20,puVar37,uVar23);
    }
    *(undefined1 *)((long)puVar20 + uVar23) = 0;
    puVar2 = uStack_108;
    if (-1 < (long)uStack_f8) {
      puVar2 = &uStack_108;
    }
    func_0x00010ae06f08(0,1,&UNK_10f68acd5,&UNK_10f68ad24,0x113,&UNK_10f68adc3,param_7,param_8,
                        puVar2);
    puVar15 = puStack_90;
    plVar43 = plStack_88;
    if ((long)uStack_f8 < 0) {
      __ZdlPv(uStack_108);
      puVar15 = puStack_90;
      plVar43 = plStack_88;
    }
LAB_10aa1d888:
    param_1[1] = plVar43;
    *param_1 = puVar15;
    return;
  }
  lVar29 = *(long *)(uVar27 + 0x58);
  lVar6 = *(long *)(uVar27 + 0x60);
  lVar4 = *(long *)(uVar27 + 0x40);
  lVar7 = *(long *)(uVar27 + 0x48);
  lVar40 = *(long *)(uVar27 + 0xa8);
  for (lVar45 = *(long *)(uVar27 + 0xa0); lVar45 != lVar40; lVar45 = lVar45 + 0x58) {
    FUN_10ab6e728();
    if (*(long *)(lVar45 + 0x28) == lRam00000001138356d8) {
      lVar40 = *(long *)(param_3 + 0x168);
      goto LAB_10aa1d2d8;
    }
  }
  lVar45 = 0;
  lVar40 = *(long *)(param_3 + 0x168);
  if ((lVar29 != lVar6) || (plVar43 = (long *)0x0, lVar4 != lVar7)) {
LAB_10aa1d2d8:
    lVar46 = *(long *)(lVar40 + 0x158);
    if (lVar46 == lVar40 + 0x150) {
      plVar43 = (long *)0x0;
    }
    else {
      do {
        plVar43 = *(long **)(lVar46 + 0x10);
        if (((plVar43 != (long *)0x0) &&
            (___dynamic_cast(plVar43,&PTR_DAT_110bd31d8,&PTR_DAT_110bd9df0,0),
            plVar43 != (long *)0x0)) && (plVar43[0x4c] == lVar36)) goto LAB_10aa1d354;
        lVar46 = *(long *)(lVar46 + 8);
      } while (lVar46 != lVar40 + 0x150);
      plVar43 = (long *)0x0;
    }
  }
LAB_10aa1d354:
  if (lVar29 == lVar6) {
LAB_10aa1d428:
    plVar42 = (long *)0x0;
  }
  else {
    lVar36 = *(long *)(param_3 + 0x250);
    plVar16 = *(long **)(lVar36 + 0x70);
    if ((plVar16 == (long *)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar16 == (long *)0x0)) {
LAB_10aa1d3bc:
      if ((plVar43 == (long *)0x0) ||
         ((plVar42 = plVar43, FUN_10a425ccc(), plVar42 == (long *)0x0 ||
          ((*(ushort *)(plVar42 + 0x30) & 0x12) != 0)))) {
        for (lVar36 = *(long *)(lVar40 + 0x158); lVar36 != lVar40 + 0x150;
            lVar36 = *(long *)(lVar36 + 8)) {
          if (*(long *)(lVar36 + 0x10) != 0) {
            plVar42 = (long *)(*(long *)(lVar36 + 0x10) + 0xb0);
            (**(code **)(*plVar42 + 0x18))(plVar42,0xa6a1c3410c3450da);
            if (plVar42 != (long *)0x0) {
              if ((*(ushort *)(plVar42 + 0x30) & 0x12) != 0) {
                plVar42 = (long *)0x0;
              }
              goto LAB_10aa1d42c;
            }
          }
        }
        goto LAB_10aa1d428;
      }
    }
    else {
      plVar42 = *(long **)(lVar36 + 0x68);
      plVar17 = plVar16 + 1;
      do {
        lVar36 = *plVar17;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar10) {
          *plVar17 = lVar36 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar36 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
      if ((plVar42 == (long *)0x0) || ((*(ushort *)(plVar42 + 0x30) & 0x12) != 0))
      goto LAB_10aa1d3bc;
    }
  }
LAB_10aa1d42c:
  if (lVar4 != lVar7) {
    if (((plVar43 != (long *)0x0) && (plVar16 = plVar43, FUN_10a410af8(), plVar16 != (long *)0x0))
       && ((*(byte *)(plVar16 + 8) & 1) != 0)) goto joined_r0x00010aa1d538;
    for (lVar36 = *(long *)(lVar40 + 0x158); lVar36 != lVar40 + 0x150;
        lVar36 = *(long *)(lVar36 + 8)) {
      if (*(long *)(lVar36 + 0x10) != 0) {
        plVar17 = (long *)(*(long *)(lVar36 + 0x10) + 0xb0);
        (**(code **)(*plVar17 + 0x18))(plVar17,0xcc065e1a2996816);
        if (plVar17 != (long *)0x0) {
          plVar16 = plVar17 + 0x3e;
          if ((*(ushort *)(plVar17 + 0x30) & 0x12) != 0) {
            plVar16 = (long *)0x0;
          }
          goto joined_r0x00010aa1d538;
        }
      }
    }
  }
  plVar16 = (long *)0x0;
joined_r0x00010aa1d538:
  if (lVar45 == 0) {
    plVar43 = (long *)0x0;
  }
  else if (((plVar43 == (long *)0x0) || (FUN_10a4247b0(), plVar43 == (long *)0x0)) ||
          (plVar17 = plVar43, (**(code **)(*plVar43 + 0x60))(), ((ulong)plVar17 & 1) == 0)) {
    for (lVar36 = *(long *)(lVar40 + 0x158); lVar36 != lVar40 + 0x150;
        lVar36 = *(long *)(lVar36 + 8)) {
      if (*(long *)(lVar36 + 0x10) != 0) {
        plVar43 = (long *)(*(long *)(lVar36 + 0x10) + 0xb0);
        (**(code **)(*plVar43 + 0x18))(plVar43,0xd07927f5ab7790e9);
        if (plVar43 != (long *)0x0) {
          plVar17 = plVar43;
          (**(code **)(*plVar43 + 0x60))();
          if ((int)plVar17 == 0) {
            plVar43 = (long *)0x0;
          }
          goto LAB_10aa1d560;
        }
      }
    }
    plVar43 = (long *)0x0;
  }
LAB_10aa1d560:
  uVar23 = ((ulong)(uint)((int)plVar42 << 3) + 8 ^ (ulong)plVar42 >> 0x20) * -0x622015f714c7d297;
  uVar23 = ((ulong)plVar42 >> 0x20 ^ uVar23 >> 0x2f ^ uVar23) * -0x622015f714c7d297;
  uVar32 = ((ulong)(uint)((int)plVar16 << 3) + 8 ^ (ulong)plVar16 >> 0x20) * -0x622015f714c7d297;
  uVar32 = ((ulong)plVar16 >> 0x20 ^ uVar32 >> 0x2f ^ uVar32) * -0x622015f714c7d297;
  uVar23 = ((uVar23 ^ uVar23 >> 0x2f) * -0x622015f714c7d297 + 0x2853a3c667 ^ 0x9e3779b9) +
           0x9e3779b9;
  uVar33 = ((ulong)(uint)((int)plVar43 << 3) + 8 ^ (ulong)plVar43 >> 0x20) * -0x622015f714c7d297;
  uVar33 = ((ulong)plVar43 >> 0x20 ^ uVar33 >> 0x2f ^ uVar33) * -0x622015f714c7d297;
  uVar23 = (uVar23 * 0x40 + (uVar23 >> 2) + (uVar32 ^ uVar32 >> 0x2f) * -0x622015f714c7d297 +
            0x9e3779b9 ^ uVar23) + 0x9e3779b9;
  uVar23 = uVar23 * 0x40 + (uVar23 >> 2) + (uVar33 ^ uVar33 >> 0x2f) * -0x622015f714c7d297 +
           0x9e3779b9 ^ uVar23;
  puVar14 = *(ulong **)(param_2 + 0xf0);
  while( true ) {
    if (puVar14 == *(ulong **)(param_2 + 0xf8)) goto LAB_10aa1d70c;
    if (*puVar14 == uVar23) break;
    puVar14 = puVar14 + 3;
  }
  plVar17 = (long *)puVar14[2];
  if ((plVar17 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar17 == (long *)0x0)
     ) {
    puStack_90 = (ulong *)0x0;
  }
  else {
    puStack_90 = (ulong *)puVar14[1];
  }
  plVar19 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
    do {
      lVar36 = *plVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar36 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar36 == 0) {
      lVar36 = *plStack_88;
      plStack_88 = plVar17;
      (**(code **)(lVar36 + 0x10))(plVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
      plVar17 = plStack_88;
    }
  }
  plStack_88 = plVar17;
  if (puStack_90 == (ulong *)0x0) {
    lVar36 = *(long *)(param_2 + 0xf8);
    if (*(long *)(param_2 + 0xf0) == lVar36) goto LAB_10aa1de60;
    *puVar14 = *(ulong *)(lVar36 + -0x18);
    uVar33 = *(ulong *)(lVar36 + -8);
    uVar32 = *(ulong *)(lVar36 + -0x10);
    if (*(long *)(lVar36 + -8) != 0) {
      plVar17 = (long *)(*(long *)(lVar36 + -8) + 0x10);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar10) {
          *plVar17 = *plVar17 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    uVar18 = puVar14[2];
    puVar14[2] = uVar33;
    puVar14[1] = uVar32;
    if (uVar18 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    lVar36 = *(long *)(param_2 + 0xf8);
    if (*(long *)(param_2 + 0xf0) == lVar36) goto LAB_10aa1de60;
    if (*(long *)(lVar36 + -8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(long *)(param_2 + 0xf8) = lVar36 + -0x18;
  }
LAB_10aa1d70c:
  puVar14 = puStack_90;
  if (puStack_90 == (ulong *)0x0) {
    if ((param_4 & 1) == 0) {
      *param_1 = 0;
      param_1[1] = plStack_88;
      return;
    }
    plVar19 = (long *)0x110;
    __Znwm();
    plVar17 = plStack_88;
    plVar19[1] = 0;
    plVar19[2] = 0;
    puStack_90 = (ulong *)(plVar19 + 4);
    plVar19[5] = 0;
    *puStack_90 = 0;
    *plVar19 = (long)&PTR_FUN_110c3c8c0;
    plVar19[0x19] = 0;
    plVar19[0x18] = 0;
    plVar19[0x1b] = 0;
    plVar19[0x1a] = 0;
    plVar19[7] = 0;
    plVar19[6] = 0;
    plVar19[9] = 0;
    plVar19[8] = 0;
    lVar29 = lRam0000000113835598;
    lVar36 = lRam0000000113835590;
    plVar19[0xb] = 0;
    plVar19[10] = 0;
    plVar19[0xd] = lVar29;
    plVar19[0xc] = lVar36;
    plVar19[0xf] = lVar29;
    plVar19[0xe] = lVar36;
    plVar19[0x11] = lVar29;
    plVar19[0x10] = lVar36;
    plVar19[0x13] = lVar29;
    plVar19[0x12] = lVar36;
    plVar19[0x15] = lVar29;
    plVar19[0x14] = lVar36;
    plVar19[0x17] = 0;
    plVar19[0x16] = 0;
    *(undefined1 *)(plVar19 + 0x1b) = 0;
    plVar19[0x1a] = 0;
    *(undefined8 *)((long)plVar19 + 0x104) = 0;
    *(undefined8 *)((long)plVar19 + 0xfc) = 0;
    plVar19[0x1d] = 0;
    plVar19[0x1c] = 0;
    plVar19[0x1f] = 0;
    plVar19[0x1e] = 0;
    *(undefined4 *)((long)plVar19 + 0x10c) = 0xffff;
    if (plStack_88 == (long *)0x0) {
      *(int *)(plVar19 + 0x21) = *(int *)(param_2 + 0x108) + -1;
      plStack_88 = plVar19;
LAB_10aa1d8a0:
      plVar17 = plStack_88 + 2;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar10) {
          *plVar17 = *plVar17 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    else {
      plVar1 = plStack_88 + 1;
      do {
        lVar36 = *plVar1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = lVar36 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar36 == 0) {
        lVar36 = *plStack_88;
        plStack_88 = plVar19;
        (**(code **)(lVar36 + 0x10))(plVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        plVar19 = plStack_88;
      }
      plStack_88 = plVar19;
      *(int *)(puStack_90 + 0x1d) = *(int *)(param_2 + 0x108) + -1;
      if (plStack_88 != (long *)0x0) goto LAB_10aa1d8a0;
    }
    plVar17 = plStack_88;
    puVar14 = puStack_90;
    puVar15 = *(ulong **)(param_2 + 0xf8);
    if (puVar15 < *(ulong **)(param_2 + 0x100)) {
      *puVar15 = uVar23;
      puVar15[1] = (ulong)puStack_90;
      puVar38 = puVar15 + 3;
      puVar15[2] = (ulong)plStack_88;
    }
    else {
      puVar41 = *(ulong **)(param_2 + 0xf0);
      uVar32 = ((long)puVar15 - (long)puVar41 >> 3) * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar32) {
        FUN_10aa3dcf0();
        goto LAB_10aa1de60;
      }
      lVar36 = (long)*(ulong **)(param_2 + 0x100) - (long)puVar41 >> 3;
      uVar33 = lVar36 * 0x5555555555555556;
      if (uVar33 < uVar32 || uVar33 - uVar32 == 0) {
        uVar33 = uVar32;
      }
      if (0x555555555555554 < (ulong)(lVar36 * -0x5555555555555555)) {
        uVar33 = 0xaaaaaaaaaaaaaaa;
      }
      if (0xaaaaaaaaaaaaaaa < uVar33) {
        func_0x000109ffded8();
        goto LAB_10aa1de60;
      }
      puVar21 = (ulong *)(uVar33 * 0x18);
      __Znwm();
      puVar38 = (ulong *)((long)puVar21 + ((long)puVar15 - (long)puVar41));
      *puVar38 = uVar23;
      puVar38[1] = (ulong)puVar14;
      puVar38[2] = (ulong)plVar17;
      puVar38 = puVar38 + 3;
      puVar28 = puVar41;
      puVar31 = puVar21;
      if (puVar41 != puVar15) {
        do {
          *puVar31 = *puVar28;
          uVar23 = puVar28[1];
          puVar31[2] = puVar28[2];
          puVar31[1] = uVar23;
          puVar28[1] = 0;
          puVar28[2] = 0;
          puVar28 = puVar28 + 3;
          puVar31 = puVar31 + 3;
        } while (puVar28 != puVar15);
        do {
          if (puVar41[2] != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          puVar41 = puVar41 + 3;
        } while (puVar41 != puVar15);
        puVar41 = *(ulong **)(param_2 + 0xf0);
      }
      *(ulong **)(param_2 + 0xf0) = puVar21;
      *(ulong **)(param_2 + 0xf8) = puVar38;
      *(ulong **)(param_2 + 0x100) = puVar21 + uVar33 * 3;
      if (puVar41 != (ulong *)0x0) {
        __ZdlPv(puVar41);
      }
    }
    *(ulong **)(param_2 + 0xf8) = puVar38;
  }
  if ((int)puVar14[0x1d] == *(int *)(param_2 + 0x108)) {
LAB_10aa1da0c:
    *param_1 = puVar14;
    param_1[1] = plStack_88;
    return;
  }
  if (plVar42 == (long *)0x0 && plVar16 == (long *)0x0) {
    if (((puVar37[0x17] & 1) != 0) && (plVar43 == (long *)0x0)) {
      if (*(char *)((long)puVar14 + 0xef) == '\x01') goto LAB_10aa1da0c;
      uVar25 = 1;
      goto LAB_10aa1da48;
    }
    uVar25 = 0;
    if (((puVar37[0x17] & 1) != 0) || (plVar43 != (long *)0x0)) goto LAB_10aa1da48;
    puVar15 = puVar37;
    (**(code **)(*puVar37 + 0xb0))();
    uVar30 = SUB82(puVar15,0);
    if ((uint)*(ushort *)((long)puVar14 + 0xec) == ((uint)puVar15 & 0xffff)) goto LAB_10aa1da0c;
    if ((param_4 & 1) == 0) goto LAB_10aa1db38;
    uVar25 = 0;
    *(undefined4 *)(puVar14 + 0x1d) = *(undefined4 *)(param_2 + 0x108);
    if (((uint)puVar15 & 0xffff) == 0xfffe) {
      uVar30 = 0xffff;
    }
  }
  else {
    uVar25 = 0;
LAB_10aa1da48:
    if (param_4 == 0) {
LAB_10aa1db38:
      plVar43 = plStack_88;
      *param_1 = 0;
      param_1[1] = 0;
      if (plStack_88 == (long *)0x0) {
        return;
      }
      plVar16 = plStack_88 + 1;
      do {
        lVar36 = *plVar16;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar10) {
          *plVar16 = lVar36 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar36 != 0) {
        return;
      }
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar43);
      return;
    }
    *(int *)(puVar14 + 0x1d) = *(int *)(param_2 + 0x108);
    uVar30 = 0xffff;
  }
  puVar15 = puVar14 + 0x16;
  *puVar15 = 0;
  *(undefined2 *)((long)puVar14 + 0xec) = uVar30;
  *(undefined1 *)((long)puVar14 + 0xef) = uVar25;
  *(undefined1 *)(puVar14 + 0x17) = 0;
  FUN_10aa1accc(puVar15);
  uStack_c8 = 0;
  uStack_c4 = 0;
  ppppppuStack_b8 = (undefined8 *******)0x0;
  plStack_c0 = (long *)0x0;
  ppppppuStack_a8 = (undefined8 *******)0x0;
  ppppppuStack_b0 = (undefined8 *******)0x0;
  plStack_98 = (long *)0x0;
  lStack_a0 = 0;
  if (plVar42 == (long *)0x0) {
    uStack_c4 = 0;
    uStack_c8 = 0;
LAB_10aa1db9c:
    plVar42 = (long *)0x0;
  }
  else {
    uVar23 = uVar27;
    FUN_10ab5242c(uVar27,plVar42);
    uStack_c8 = (undefined4)uVar23;
    uStack_c4 = (undefined1)(uVar23 >> 0x20);
    if ((uVar23 & 0xffff) == 0) goto LAB_10aa1db9c;
  }
  plStack_c0 = plVar42;
  if (plVar16 != (long *)0x0) {
    FUN_10a429208(plVar16,&ppppppuStack_b8);
LAB_10aa1dce8:
    lStack_a0 = 0;
    if (plVar43 != (long *)0x0) {
      lStack_a0 = lVar45;
    }
    puVar24 = &uStack_c8;
    plStack_98 = plVar43;
    FUN_10aa1adec(&uStack_108,puVar24,uVar27);
    uVar23 = (ulong)uStack_108 & 0xff;
    if (uVar23 == 0) {
      bVar26 = *(byte *)((long)puVar14 + 0xee);
      bVar3 = uStack_108._1_1_ & (bVar26 ^ 0xff);
      uStack_108._0_2_ = CONCAT11(bVar3,(undefined1)uStack_108);
      if (bVar3 != 0) {
        func_0x00010aa1ad5c(bVar3);
        bVar26 = *(byte *)((long)puVar14 + 0xee);
      }
      *(byte *)((long)puVar14 + 0xee) = bVar26 | bVar3;
      *puVar15 = 0;
      *(undefined1 *)(puVar14 + 0x17) = 0;
      FUN_10aa1accc(puVar15);
      uVar12 = uStack_d0;
      uVar11 = uStack_d8;
      uVar18 = uStack_e0;
      uVar33 = uStack_e8;
      uVar32 = uStack_f0;
      uVar27 = uStack_f8;
      uVar23 = uStack_100;
      puVar14[0x17] = uStack_f8;
      *puVar15 = uStack_100;
      puVar14[0x19] = uStack_e8;
      puVar14[0x18] = uStack_f0;
      puVar14[0x1b] = uStack_d8;
      puVar14[0x1a] = uStack_e0;
      puVar14[0x1c] = uStack_d0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_d0 = 0;
      puVar14[1] = uVar27;
      *puVar14 = uVar23;
      puVar14[3] = uVar33;
      puVar14[2] = uVar32;
      puVar14[5] = uVar11;
      puVar14[4] = uVar18;
      puVar14[6] = uVar12;
      FUN_10aa1e038(puVar14 + 8,puVar14);
    }
    else if ((uRam000000011330a9e8 & 1) != 0) {
      (**(code **)(*puVar37 + 0x38))();
      puStack_130 = puVar37;
      puStack_128 = puVar24;
      func_0x0001098998d4(appppppuStack_120,&puStack_130);
      pppppppuVar44 = (undefined8 *******)appppppuStack_120[0];
      if (-1 < cStack_109) {
        pppppppuVar44 = appppppuStack_120;
      }
      func_0x00010ae06f08(0,1,&UNK_10f68acd5,&UNK_10f68ad24,0x176,&UNK_10f68ae1f,param_7,param_8,
                          pppppppuVar44,*(undefined8 *)(&UNK_110c38c40 + uVar23 * 8));
      if (cStack_109 < '\0') {
        __ZdlPv(appppppuStack_120[0]);
      }
    }
    param_1[1] = plStack_88;
    *param_1 = puStack_90;
    FUN_10aa1accc(&uStack_100);
    if ((undefined8 *******)ppppppuStack_b8 == (undefined8 *******)0x0) {
      return;
    }
    ppppppuStack_b0 = ppppppuStack_b8;
    __ZdlPv();
    return;
  }
  ppppppuVar5 = *(undefined8 *******)(uVar27 + 0x40);
  ppppppuVar8 = *(undefined8 *******)(uVar27 + 0x48);
  ppppppuStack_b0 = ppppppuStack_b8;
  pppppppuVar44 = (undefined8 *******)ppppppuStack_b8;
  do {
    if (ppppppuVar5 == ppppppuVar8) goto LAB_10aa1dce8;
    fVar47 = *(float *)(ppppppuVar5 + 3);
    if (0.001 < ABS(fVar47)) {
      ppppppuVar34 = (undefined8 ******)(long)*(char *)((long)ppppppuVar5 + 0x17);
      ppppppuVar39 = ppppppuVar5;
      if ((long)ppppppuVar34 < 0) {
        ppppppuVar34 = (undefined8 ******)ppppppuVar5[1];
        ppppppuVar39 = (undefined8 ******)*ppppppuVar5;
      }
      if (pppppppuVar44 < ppppppuStack_a8) {
        *pppppppuVar44 = ppppppuVar39;
        pppppppuVar44[1] = ppppppuVar34;
        pppppppuVar44[2] = (undefined8 ******)(ulong)(uint)fVar47;
        pppppppuVar44 = pppppppuVar44 + 3;
        ppppppuStack_b0 = pppppppuVar44;
      }
      else {
        lVar36 = (long)pppppppuVar44 - (long)ppppppuStack_b8;
        uVar23 = (lVar36 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar23) {
          FUN_10a18eeb0();
          goto LAB_10aa1de60;
        }
        lVar29 = (long)ppppppuStack_a8 - (long)ppppppuStack_b8 >> 3;
        uVar32 = lVar29 * 0x5555555555555556;
        if (uVar32 < uVar23 || uVar32 - uVar23 == 0) {
          uVar32 = uVar23;
        }
        if (0x555555555555554 < (ulong)(lVar29 * -0x5555555555555555)) {
          uVar32 = 0xaaaaaaaaaaaaaaa;
        }
        pppppppuVar22 = &ppppppuStack_b8;
        FUN_10a18eec4();
        puVar2 = (undefined8 *)((long)pppppppuVar22 + lVar36);
        *puVar2 = ppppppuVar39;
        puVar2[1] = ppppppuVar34;
        puVar2[2] = (ulong)(uint)fVar47;
        pppppppuVar44 = (undefined8 *******)(puVar2 + 3);
        pppppppuVar35 =
             (undefined8 *******)((long)puVar2 - ((long)ppppppuStack_b0 - (long)ppppppuStack_b8));
        _memcpy(pppppppuVar35);
        bVar10 = (undefined8 *******)ppppppuStack_b8 != (undefined8 *******)0x0;
        ppppppuStack_b8 = pppppppuVar35;
        ppppppuStack_b0 = pppppppuVar44;
        ppppppuStack_a8 = pppppppuVar22 + uVar32 * 3;
        if (bVar10) {
          __ZdlPv();
          ppppppuStack_b0 = pppppppuVar44;
        }
      }
    }
    ppppppuVar5 = ppppppuVar5 + 9;
  } while( true );
}



/* Entry: 10aa1df10; end: 10aa1df73;  */

undefined8 * FUN_10aa1df10(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10aa1df74; end: 10aa1e037;  */

void FUN_10aa1df74(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined2 *puVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  float *pfVar7;
  undefined2 *puVar8;
  float fVar9;
  float fVar10;
  byte bVar12;
  byte bVar13;
  int iVar11;
  byte bVar14;
  byte bVar16;
  byte bVar17;
  int iVar15;
  byte bVar18;
  float fVar20;
  undefined8 uVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong auStack_140 [3];
  undefined2 *puStack_128;
  undefined2 *puStack_120;
  undefined *puStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10aa61d00;
  puStack_78 = &UNK_10f68ba5f;
  uStack_70 = 0x1e;
  ppuVar5 = &puStack_78;
  FUN_10a57077c(param_1,ppuVar5,&pcStack_68,100,param_2);
  pppuVar4 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  ppuVar2 = ppuRam0000000113835598;
  ppuVar1 = ppuRam0000000113835590;
  pppuVar4[1] = ppuRam0000000113835598;
  *pppuVar4 = ppuVar1;
  pppuVar4[3] = ppuVar2;
  pppuVar4[2] = ppuVar1;
  pppuVar4[5] = ppuVar2;
  pppuVar4[4] = ppuVar1;
  pppuVar4[7] = ppuVar2;
  pppuVar4[6] = ppuVar1;
  pppuVar4[9] = ppuVar2;
  pppuVar4[8] = ppuVar1;
  *(undefined4 *)(pppuVar4 + 10) = 0;
  pppuVar4[0xc] = pppuVar4[0xb];
  if (*(int *)ppuVar5 != 0) {
    puStack_110 = ppuVar5[4];
    fVar10 = *(float *)(ppuVar5 + 5);
    uStack_108 = (ulong)(uint)fVar10;
    uStack_100 = *(undefined8 *)((long)ppuVar5 + 0x2c);
    uStack_f8 = (ulong)(uint)*(float *)((long)ppuVar5 + 0x34);
    fVar21 = (float)uStack_100 - SUB84(puStack_110,0);
    fVar9 = (float)((ulong)puStack_110 >> 0x20);
    fVar22 = (float)((ulong)uStack_100 >> 0x20) - fVar9;
    fVar23 = *(float *)((long)ppuVar5 + 0x34) - fVar10;
    fVar24 = 0.0;
    if (0.0 < fVar23) {
      fVar24 = 65533.0 / fVar23;
    }
    fStack_c8 = 0.0;
    if (0.0 < fVar23) {
      fStack_c8 = fVar23 * 1.5259488e-05;
    }
    iVar11 = -(uint)(fVar21 <= 0.0);
    iVar15 = -(uint)(fVar22 <= 0.0);
    fVar23 = 65533.0 / fVar21;
    fVar20 = 65533.0 / fVar22;
    bVar12 = (byte)((uint)iVar11 >> 8);
    bVar13 = (byte)((uint)iVar11 >> 0x10);
    bVar14 = (byte)((uint)iVar11 >> 0x18);
    bVar16 = (byte)((uint)iVar15 >> 8);
    bVar17 = (byte)((uint)iVar15 >> 0x10);
    bVar18 = (byte)((uint)iVar15 >> 0x18);
    fVar23 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~bVar14,
                             CONCAT12((byte)((uint)fVar23 >> 0x10) & ~bVar13,
                                      CONCAT11((byte)((uint)fVar23 >> 8) & ~bVar12,
                                               SUB41(fVar23,0) & ~(byte)iVar11)));
    uVar19 = CONCAT17((byte)((uint)fVar20 >> 0x18) & ~bVar18,
                      CONCAT16((byte)((uint)fVar20 >> 0x10) & ~bVar17,
                               CONCAT15((byte)((uint)fVar20 >> 8) & ~bVar16,
                                        CONCAT14(SUB41(fVar20,0) & ~(byte)iVar15,fVar23))));
    uStack_e4 = 0;
    fVar21 = fVar21 * 1.5259488e-05;
    fVar22 = fVar22 * 1.5259488e-05;
    fVar21 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~bVar14,
                             CONCAT12((byte)((uint)fVar21 >> 0x10) & ~bVar13,
                                      CONCAT11((byte)((uint)fVar21 >> 8) & ~bVar12,
                                               SUB41(fVar21,0) & ~(byte)iVar11)));
    uStack_d0 = CONCAT17((byte)((uint)fVar22 >> 0x18) & ~bVar18,
                         CONCAT16((byte)((uint)fVar22 >> 0x10) & ~bVar17,
                                  CONCAT15((byte)((uint)fVar22 >> 8) & ~bVar16,
                                           CONCAT14(SUB41(fVar22,0) & ~(byte)iVar15,fVar21))));
    uStack_c4 = 0;
    fVar21 = SUB84(puStack_110,0) - fVar21;
    fVar9 = fVar9 - (float)((ulong)uStack_d0 >> 0x20);
    uStack_e0 = CONCAT44(fVar9,fVar21);
    fVar10 = fVar10 - fStack_c8;
    uStack_d8 = (ulong)(uint)fVar10;
    uStack_f0 = uVar19;
    fStack_e8 = fVar24;
    FUN_10a40944c(&puStack_128,(ulong)*(uint *)((long)ppuVar5 + 4) * 3);
    puVar3 = puStack_128;
    uVar6 = (ulong)*(uint *)((long)ppuVar5 + 4);
    if (*(uint *)((long)ppuVar5 + 4) != 0) {
      pfVar7 = (float *)ppuVar5[2];
      puVar8 = puStack_128;
      do {
        fVar22 = pfVar7[1];
        fVar20 = pfVar7[2];
        *puVar8 = (short)(int)(fVar23 * (*pfVar7 - fVar21));
        puVar8[1] = (short)(int)((float)((ulong)uVar19 >> 0x20) * (fVar22 - fVar9));
        puVar8[2] = (short)(int)(fVar24 * (fVar20 - fVar10));
        pfVar7 = pfVar7 + 3;
        puVar8 = puVar8 + 3;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    FUN_10aa413a8(auStack_140,*(int *)ppuVar5);
    uVar6 = auStack_140[0];
    FUN_10aa29b98(auStack_140[0],*(int *)ppuVar5,ppuVar5[3],*(undefined1 *)(ppuVar5 + 1),puVar3);
    FUN_10aa2a124(pppuVar4,&puStack_110,auStack_140[0],uVar6 & 0xffffffff);
    if (auStack_140[0] != 0) {
      __ZdlPv(auStack_140[0]);
    }
    if (puStack_128 != (undefined2 *)0x0) {
      puStack_120 = puStack_128;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10aa1e038; end: 10aa1e24f;  */

void FUN_10aa1e038(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  ulong uVar3;
  float *pfVar4;
  undefined2 *puVar5;
  float fVar6;
  float fVar7;
  byte bVar9;
  byte bVar10;
  int iVar8;
  byte bVar11;
  byte bVar13;
  byte bVar14;
  int iVar12;
  byte bVar15;
  float fVar17;
  undefined8 uVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong auStack_c0 [3];
  undefined2 *puStack_a8;
  undefined2 *puStack_a0;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  float fStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  float fStack_48;
  undefined4 uStack_44;
  
  uVar1 = uRam0000000113835598;
  uVar16 = uRam0000000113835590;
  param_1[1] = uRam0000000113835598;
  *param_1 = uVar16;
  param_1[3] = uVar1;
  param_1[2] = uVar16;
  param_1[5] = uVar1;
  param_1[4] = uVar16;
  param_1[7] = uVar1;
  param_1[6] = uVar16;
  param_1[9] = uVar1;
  param_1[8] = uVar16;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = param_1[0xb];
  if (*param_2 != 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    fVar7 = (float)param_2[10];
    uStack_88 = (ulong)(uint)fVar7;
    uStack_80 = *(undefined8 *)(param_2 + 0xb);
    uStack_78 = (ulong)(uint)param_2[0xd];
    fVar18 = (float)uStack_80 - (float)uStack_90;
    fVar6 = (float)((ulong)uStack_90 >> 0x20);
    fVar19 = (float)((ulong)uStack_80 >> 0x20) - fVar6;
    fVar20 = (float)param_2[0xd] - fVar7;
    fVar21 = 0.0;
    if (0.0 < fVar20) {
      fVar21 = 65533.0 / fVar20;
    }
    fStack_48 = 0.0;
    if (0.0 < fVar20) {
      fStack_48 = fVar20 * 1.5259488e-05;
    }
    iVar8 = -(uint)(fVar18 <= 0.0);
    iVar12 = -(uint)(fVar19 <= 0.0);
    fVar20 = 65533.0 / fVar18;
    fVar17 = 65533.0 / fVar19;
    bVar9 = (byte)((uint)iVar8 >> 8);
    bVar10 = (byte)((uint)iVar8 >> 0x10);
    bVar11 = (byte)((uint)iVar8 >> 0x18);
    bVar13 = (byte)((uint)iVar12 >> 8);
    bVar14 = (byte)((uint)iVar12 >> 0x10);
    bVar15 = (byte)((uint)iVar12 >> 0x18);
    fVar20 = (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~bVar11,
                             CONCAT12((byte)((uint)fVar20 >> 0x10) & ~bVar10,
                                      CONCAT11((byte)((uint)fVar20 >> 8) & ~bVar9,
                                               SUB41(fVar20,0) & ~(byte)iVar8)));
    uVar16 = CONCAT17((byte)((uint)fVar17 >> 0x18) & ~bVar15,
                      CONCAT16((byte)((uint)fVar17 >> 0x10) & ~bVar14,
                               CONCAT15((byte)((uint)fVar17 >> 8) & ~bVar13,
                                        CONCAT14(SUB41(fVar17,0) & ~(byte)iVar12,fVar20))));
    uStack_64 = 0;
    fVar18 = fVar18 * 1.5259488e-05;
    fVar19 = fVar19 * 1.5259488e-05;
    fVar18 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~bVar11,
                             CONCAT12((byte)((uint)fVar18 >> 0x10) & ~bVar10,
                                      CONCAT11((byte)((uint)fVar18 >> 8) & ~bVar9,
                                               SUB41(fVar18,0) & ~(byte)iVar8)));
    uStack_50 = CONCAT17((byte)((uint)fVar19 >> 0x18) & ~bVar15,
                         CONCAT16((byte)((uint)fVar19 >> 0x10) & ~bVar14,
                                  CONCAT15((byte)((uint)fVar19 >> 8) & ~bVar13,
                                           CONCAT14(SUB41(fVar19,0) & ~(byte)iVar12,fVar18))));
    uStack_44 = 0;
    fVar18 = (float)uStack_90 - fVar18;
    fVar6 = fVar6 - (float)((ulong)uStack_50 >> 0x20);
    uStack_60 = CONCAT44(fVar6,fVar18);
    fVar7 = fVar7 - fStack_48;
    uStack_58 = (ulong)(uint)fVar7;
    uStack_70 = uVar16;
    fStack_68 = fVar21;
    FUN_10a40944c(&puStack_a8,(ulong)(uint)param_2[1] * 3);
    puVar2 = puStack_a8;
    uVar3 = (ulong)(uint)param_2[1];
    if (param_2[1] != 0) {
      pfVar4 = *(float **)(param_2 + 4);
      puVar5 = puStack_a8;
      do {
        fVar19 = pfVar4[1];
        fVar17 = pfVar4[2];
        *puVar5 = (short)(int)(fVar20 * (*pfVar4 - fVar18));
        puVar5[1] = (short)(int)((float)((ulong)uVar16 >> 0x20) * (fVar19 - fVar6));
        puVar5[2] = (short)(int)(fVar21 * (fVar17 - fVar7));
        pfVar4 = pfVar4 + 3;
        puVar5 = puVar5 + 3;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    FUN_10aa413a8(auStack_c0,*param_2);
    uVar3 = auStack_c0[0];
    FUN_10aa29b98(auStack_c0[0],*param_2,*(undefined8 *)(param_2 + 6),(char)param_2[2],puVar2);
    FUN_10aa2a124(param_1,&uStack_90,auStack_c0[0],uVar3 & 0xffffffff);
    if (auStack_c0[0] != 0) {
      __ZdlPv(auStack_c0[0]);
    }
    if (puStack_a8 != (undefined2 *)0x0) {
      puStack_a0 = puStack_a8;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10aa1e250; end: 10aa1e347;  */

undefined1  [16] FUN_10aa1e250(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10f68ba7e;
  return auVar1;
}



/* Entry: 10aa1e348; end: 10aa1e3a3;  */

byte FUN_10aa1e348(long param_1,long param_2,byte *param_3)

{
  byte bVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_2 + 0xe0);
  (**(code **)(*plVar2 + 0x90))();
  if (*plVar2 == 0) {
    bVar1 = 0;
  }
  else if (*(char *)(param_1 + 0xc) == '\x01') {
    bVar1 = *param_3 & 1;
  }
  else {
    bVar1 = 1;
  }
  return bVar1;
}



/* Entry: 10aa1e3a4; end: 10aa1e3fb;  */

void FUN_10aa1e3a4(void)

{
  FUN_10a0ee900(&UNK_10f68ae69,0x13);
  return;
}



/* Entry: 10aa1e3fc; end: 10aa1eea7;  */

/* WARNING: Removing unreachable block (ram,0x00010aa1e564) */
/* WARNING: Removing unreachable block (ram,0x00010aa1e7d8) */

void FUN_10aa1e3fc(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long *****param_5,long *param_6,byte *param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *****ppppplVar6;
  long *plVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  long lVar11;
  int iVar12;
  undefined1 (*pauVar13) [16];
  long ****pppplVar14;
  long ****pppplVar15;
  long lVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  int *piVar21;
  long *****ppppplVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  int *piVar26;
  long *****ppppplVar27;
  long *****ppppplVar28;
  long lVar29;
  undefined1 auVar30 [12];
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auStack_280 [4];
  undefined8 uStack_27c;
  undefined1 (*pauStack_270) [16];
  undefined1 uStack_268;
  undefined1 auStack_260 [4];
  undefined8 uStack_25c;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined1 auStack_240 [4];
  undefined8 uStack_23c;
  long lStack_230;
  undefined1 uStack_228;
  undefined1 auStack_220 [4];
  undefined8 uStack_21c;
  int *piStack_210;
  undefined1 uStack_208;
  long ****pppplStack_200;
  long ****pppplStack_1f8;
  long ****pppplStack_1f0;
  undefined8 *puStack_1e8;
  long ****pppplStack_1e0;
  long ****pppplStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long ****pppplStack_1a8;
  long lStack_1a0;
  byte *pbStack_198;
  undefined8 *puStack_190;
  long ****pppplStack_188;
  long ****pppplStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  long ****pppplStack_150;
  long ****pppplStack_148;
  long ****pppplStack_140;
  undefined6 uStack_138;
  undefined2 uStack_132;
  undefined6 uStack_130;
  short sStack_12a;
  long ****pppplStack_128;
  char cStack_111;
  long ****pppplStack_108;
  long ****pppplStack_100;
  char cStack_f1;
  long ****pppplStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long ****pppplStack_d0;
  long ****pppplStack_c8;
  undefined8 uStack_c0;
  long ****pppplStack_b8;
  long ***ppplStack_b0;
  undefined8 uStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  long lStack_78;
  undefined1 auVar31 [16];
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_138 = 0x6f6973696c6c;
  pppplStack_140 = (long ****)0x6f432f73656c6946;
  uStack_132 = 0x4d6e;
  uStack_130 = 0x2f7365687365;
  sStack_12a = 0x1600;
  if ((long *****)0x7ffffffffffffff7 < param_5) {
    func_0x000109ffde50();
LAB_10aa1ecc4:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa1ecc8);
    (*pcVar4)();
  }
  if (param_5 < (long *****)0x17) {
    uStack_178 = (long *****)CONCAT17((char)param_5,(undefined7)uStack_178);
    ppppplVar27 = &pppplStack_188;
    if (param_5 != (long *****)0x0) goto LAB_10aa1e4b0;
  }
  else {
    ppppplVar28 = (long *****)0x19;
    if (((ulong)param_5 | 7) != 0x17) {
      ppppplVar28 = (long *****)(((ulong)param_5 | 7) + 1);
    }
    ppppplVar27 = ppppplVar28;
    __Znwm();
    uStack_178 = (long *****)((ulong)ppppplVar28 | 0x8000000000000000);
    pppplStack_188 = (long ****)ppppplVar27;
    pppplStack_180 = (long ****)param_5;
LAB_10aa1e4b0:
    _memmove(ppppplVar27,param_4,param_5);
  }
  *(undefined1 *)((long)ppppplVar27 + (long)param_5) = 0;
  ppppplVar28 = (long *****)pppplStack_180;
  ppppplVar27 = (long *****)pppplStack_188;
  if (-1 < (long)uStack_178) {
    ppppplVar28 = (long *****)((ulong)uStack_178 >> 0x38);
    ppppplVar27 = &pppplStack_188;
  }
  ppppplVar22 = &pppplStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppplVar22,ppppplVar27,ppppplVar28);
  uStack_c0 = (long *****)*ppppplVar22;
  pppplStack_b8 = ppppplVar22[1];
  ppplStack_b0 = (long ***)ppppplVar22[2];
  ppppplVar22[1] = (long ****)0x0;
  ppppplVar22[2] = (long ****)0x0;
  *ppppplVar22 = (long ****)0x0;
  cStack_f1 = '\t';
  pppplStack_108 = (long ****)0x73656d6c6c6f632e;
  pppplStack_100 = (long ****)CONCAT62(pppplStack_100._2_6_,0x68);
  puVar5 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,&pppplStack_108,9);
  pppplStack_f0 = (long ****)*puVar5;
  uStack_e8 = puVar5[1];
  lStack_e0 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (cStack_f1 < '\0') {
    __ZdlPv(pppplStack_108);
  }
  if ((long)uStack_178 < 0) {
    __ZdlPv(pppplStack_188);
  }
  if (sStack_12a < 0) {
    __ZdlPv(pppplStack_140);
  }
  FUN_10a107e2c(&pppplStack_140,&pppplStack_f0,*(long *)(param_3 + 0x100) + 0x220,0);
  FUN_10a08d2e0(&uStack_c0,&pppplStack_140);
  ppppplVar28 = (long *****)&uStack_c0;
  FUN_10ad015f0(ppppplVar28,0x8000);
  if ((int)ppppplVar28 != 0) {
    func_0x00010a0fda30();
    ppppplVar22 = *(long ******)(param_3 + 0x858);
    ppppplVar27 = *(long ******)(param_3 + 0x860);
    if (ppppplVar27 != (long *****)0x0) {
      ppppplVar6 = ppppplVar27 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppplVar6,0x10);
        if (bVar3) {
          *ppppplVar6 = (long ****)((long)*ppppplVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppplVar6 = (long *****)0x1a0;
    pppplStack_d0 = (long ****)ppppplVar22;
    pppplStack_c8 = (long ****)ppppplVar27;
    __Znwm();
    pppplStack_188 = (long ****)0x0;
    FUN_10aa1f424();
    pppplVar15 = pppplStack_188;
    if (pppplStack_188 != (long ****)0x0) {
      FUN_10aa1accc(pppplStack_188 + 6);
      __ZdlPv(pppplVar15);
    }
    pppplStack_108 = (long ****)ppppplVar22;
    pppplStack_100 = (long ****)ppppplVar27;
    if (ppppplVar27 != (long *****)0x0) {
      ppppplVar9 = ppppplVar27 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppplVar9,0x10);
        if (bVar3) {
          *ppppplVar9 = (long ****)((long)*ppppplVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      ppppplVar9 = ppppplVar27 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppplVar9,0x10);
        if (bVar3) {
          *ppppplVar9 = (long ****)((long)*ppppplVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppplVar9,0x10);
        if (bVar3) {
          *ppppplVar9 = (long ****)((long)*ppppplVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar27);
    }
    pppplStack_188 = (long ****)ppppplVar22;
    pppplStack_180 = (long ****)ppppplVar27;
    FUN_10aa61f60(&uStack_c0,ppppplVar6,&pppplStack_188);
    FUN_10aa61dfc(&pppplStack_150,&uStack_c0);
    pppplVar15 = pppplStack_b8;
    if ((long *****)pppplStack_b8 != (long *****)0x0) {
      ppppplVar22 = (long *****)(pppplStack_b8 + 1);
      do {
        pppplVar14 = *ppppplVar22;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppplVar22,0x10);
        if (bVar3) {
          *ppppplVar22 = (long ****)((long)pppplVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppplVar14 == (long ****)0x0) {
        (*(code *)(*pppplStack_b8)[2])(pppplStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar15);
      }
    }
    if ((long *****)pppplStack_180 != (long *****)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppplVar15 = pppplStack_100;
    if ((long *****)pppplStack_100 != (long *****)0x0) {
      ppppplVar22 = (long *****)(pppplStack_100 + 1);
      do {
        pppplVar14 = *ppppplVar22;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppplVar22,0x10);
        if (bVar3) {
          *ppppplVar22 = (long ****)((long)pppplVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppplVar14 == (long ****)0x0) {
        (*(code *)(*pppplStack_100)[2])(pppplStack_100);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar15);
      }
    }
    ppppplVar22 = (long *****)pppplStack_d0;
    if (((long *****)pppplStack_d0 != (long *****)0x0) &&
       ((long *****)pppplStack_150 != (long *****)0x0)) {
      uStack_c0 = (long *****)pppplStack_150;
      pppplStack_b8 = pppplStack_148;
      if ((long *****)pppplStack_148 != (long *****)0x0) {
        ppppplVar9 = (long *****)(pppplStack_148 + 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppplVar9,0x10);
          if (bVar3) {
            *ppppplVar9 = (long ****)((long)*ppppplVar9 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10aa88c30(pppplStack_d0,&uStack_c0);
      ppppplVar9 = (long *****)pppplStack_b8;
      if ((long *****)pppplStack_b8 != (long *****)0x0) {
        ppppplVar10 = (long *****)(pppplStack_b8 + 1);
        do {
          pppplVar15 = *ppppplVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
          if (bVar3) {
            *ppppplVar10 = (long ****)((long)pppplVar15 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (pppplVar15 == (long ****)0x0) {
          (*(code *)(*pppplStack_b8)[2])(pppplStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppplVar22 = ppppplVar9;
        }
      }
    }
    ppppplVar9 = (long *****)pppplStack_c8;
    if ((long *****)pppplStack_c8 != (long *****)0x0) {
      ppppplVar10 = (long *****)(pppplStack_c8 + 1);
      do {
        pppplVar15 = *ppppplVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar3) {
          *ppppplVar10 = (long ****)((long)pppplVar15 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppplVar15 == (long ****)0x0) {
        (*(code *)(*pppplStack_c8)[2])(pppplStack_c8);
        ppppplVar22 = ppppplVar9;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    param_1[1] = pppplStack_148;
    *param_1 = pppplStack_150;
    goto LAB_10aa1ec58;
  }
  lVar11 = *param_6;
  plVar7 = *(long **)(lVar11 + 0xe0);
  (**(code **)(*plVar7 + 0x90))();
  ppppplVar28 = (long *****)*plVar7;
  ppppplVar6 = (long *****)0x68;
  __Znwm();
  ppppplVar27 = ppppplVar6 + 6;
  ppppplVar6[7] = (long ****)0x0;
  *ppppplVar27 = (long ****)0x0;
  ppppplVar6[1] = (long ****)0x0;
  *ppppplVar6 = (long ****)0x0;
  ppppplVar6[3] = (long ****)0x3f80000000000000;
  ppppplVar6[2] = (long ****)0x0;
  ppppplVar6[5] = (long ****)0x0;
  ppppplVar6[4] = (long ****)0x0;
  *ppppplVar27 = (long ****)0x0;
  *(undefined1 *)(ppppplVar6 + 7) = 0;
  ppppplVar6[9] = (long ****)0x0;
  ppppplVar6[8] = (long ****)0x0;
  ppppplVar6[0xb] = (long ****)0x0;
  ppppplVar6[10] = (long ****)0x0;
  ppppplVar6[0xc] = (long ****)0x0;
  pppplStack_188 = (long ****)((ulong)pppplStack_188 & 0xffffff0000000000);
  uStack_178 = (long *****)0x0;
  pppplStack_180 = (long ****)0x0;
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  ppppplVar10 = &pppplStack_188;
  pppplStack_150 = (long ****)ppppplVar6;
  FUN_10aa1adec(&uStack_c0,ppppplVar10,ppppplVar28);
  cVar2 = (char)uStack_c0;
  if (((ulong)uStack_c0 & 0xff) == 0) {
    func_0x00010aa1ad5c(uStack_c0._1_1_);
    *(undefined1 *)(ppppplVar6 + 7) = 0;
    *ppppplVar27 = (long ****)0x0;
    FUN_10aa1accc(ppppplVar27);
    ppppplVar6[7] = (long ****)ppplStack_b0;
    *ppppplVar27 = pppplStack_b8;
    ppppplVar6[9] = (long ****)ppplStack_a0;
    ppppplVar6[8] = (long ****)uStack_a8;
    ppppplVar6[0xb] = (long ****)ppplStack_90;
    ppppplVar6[10] = (long ****)ppplStack_98;
    ppppplVar6[0xc] = (long ****)ppplStack_88;
    ppplStack_b0 = (long ***)0x0;
    pppplStack_b8 = (long ****)0x0;
    ppplStack_a0 = (long ***)0x0;
    uStack_a8 = (long *****)0x0;
    ppplStack_90 = (long ***)0x0;
    ppplStack_98 = (long ***)0x0;
    ppplStack_88 = (long ***)0x0;
  }
  else {
    if ((bRam000000011330a9e8 & 1) != 0) {
      lStack_1c0 = *(long *)(lVar11 + 0x58);
      if (-1 < *(char *)(lVar11 + 0x6f)) {
        lStack_1c0 = lVar11 + 0x58;
      }
      uStack_1b8 = *(undefined8 *)(&UNK_110c38c40 + ((ulong)uStack_c0 & 0xff) * 8);
      ppppplVar10 = (long *****)0x1;
      func_0x00010ae06f08(0,1,&UNK_10f68ae7d,&UNK_10f68aec7,0x65,&UNK_10f68afa8);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  FUN_10aa1accc(&pppplStack_b8);
  ppppplVar8 = uStack_178;
  if (uStack_178 != (long *****)0x0) {
    uStack_170 = SUB84(uStack_178,0);
    uStack_16c = (undefined4)((ulong)uStack_178 >> 0x20);
    __ZdlPv();
  }
  if (cVar2 == '\0') {
    if ((*param_7 & 1) != 0) {
      uVar23 = (ulong)*(uint *)((long)ppppplVar6 + 0x34);
      if (*(uint *)((long)ppppplVar6 + 0x34) == 0) {
        ppppplVar22 = (long *****)0x0;
        ppppplVar28 = (long *****)0x0;
      }
      else {
        pppplVar15 = ppppplVar6[8];
        ppppplVar28 = (long *****)(uVar23 * 0x10);
        __Znwm();
        ppppplVar22 = ppppplVar28 + 1;
        pppplVar15 = pppplVar15 + 1;
        uVar24 = uVar23;
        do {
          *(undefined4 *)(ppppplVar22 + -1) = *(undefined4 *)(pppplVar15 + -1);
          *(undefined4 *)((long)ppppplVar22 + -4) = *(undefined4 *)((long)pppplVar15 + -4);
          *ppppplVar22 = (long ****)(ulong)*(uint *)pppplVar15;
          uVar24 = uVar24 - 1;
          ppppplVar22 = ppppplVar22 + 2;
          pppplVar15 = (long ****)((long)pppplVar15 + 0xc);
        } while (uVar24 != 0);
        ppppplVar22 = ppppplVar28 + uVar23 * 2;
      }
      lVar29 = (long)ppppplVar22 - (long)ppppplVar28 >> 4;
      uStack_c0 = (long *****)((ulong)uStack_c0 & 0xffffffffffffff00);
      func_0x0001074b2d2c(&pppplStack_188,lVar29,&uStack_c0);
      lStack_1b0 = lVar11;
      pppplStack_1a8 = (long ****)ppppplVar27;
      lStack_1a0 = param_3;
      pbStack_198 = param_7;
      puStack_190 = param_1;
      FUN_10a132380(&pppplStack_108,0x7e);
      lVar11 = 0;
      ppppplVar27 = (long *****)pppplStack_108;
      do {
        lVar25 = 0;
        pppplStack_b8 = (long ****)(ulong)*(uint *)(&UNK_10e4eba88 + lVar11);
        uStack_c0 = *(long ******)(&UNK_10e4eba80 + lVar11);
        uStack_a8._0_7_ = (uint7)(*(uint *)(&UNK_10e4eba88 + lVar11) ^ 0x80000000);
        uStack_a8 = (long *****)CONCAT17(0x80,(uint7)uStack_a8);
        ppplStack_b0 = (long ***)(*(ulong *)(&UNK_10e4eba80 + lVar11) ^ 0x8000000080000000);
        ppppplVar22 = ppppplVar27;
        do {
          if (lVar29 < 4) {
            if (lVar29 < 1) goto LAB_10aa1ecc4;
            lVar16 = 0;
            auVar31 = *(undefined1 (*) [16])((long)&uStack_c0 + lVar25);
            fVar32 = -3.4028235e+38;
            iVar12 = -1;
            do {
              ppppplVar27 = ppppplVar28 + lVar16 * 2;
              auVar33._0_4_ = auVar31._0_4_ * *(float *)ppppplVar27;
              auVar33._4_4_ = auVar31._4_4_ * *(float *)((long)ppppplVar27 + 4);
              auVar33._8_4_ = auVar31._8_4_ * *(float *)(ppppplVar27 + 1);
              auVar33._12_4_ = auVar31._12_4_ * *(float *)((long)ppppplVar27 + 0xc);
              auVar35 = NEON_ext(auVar33,auVar33,8,1);
              fVar34 = auVar33._0_4_ + auVar33._4_4_ + auVar35._0_4_;
              iVar20 = (int)lVar16;
              if (fVar34 <= fVar32) {
                iVar20 = iVar12;
                fVar34 = fVar32;
              }
              fVar32 = fVar34;
              lVar16 = lVar16 + 1;
              iVar12 = iVar20;
            } while (lVar29 != lVar16);
            ppppplVar9 = (long *****)(long)iVar20;
          }
          else {
            ppppplVar9 = ppppplVar28;
            (*(code *)PTR_DAT_1132e04a0)
                      (ppppplVar28,(long)&uStack_c0 + lVar25,lVar29,&pppplStack_d0);
          }
          if (pppplStack_180 <= ppppplVar9) goto LAB_10aa1ecc4;
          uVar23 = 1L << ((ulong)ppppplVar9 & 0x3f);
          ppppplVar27 = ppppplVar22;
          if (((ulong)pppplStack_188[(ulong)ppppplVar9 >> 6] & uVar23) == 0) {
            pppplStack_188[(ulong)ppppplVar9 >> 6] =
                 (long ***)((ulong)pppplStack_188[(ulong)ppppplVar9 >> 6] | uVar23);
            pppplVar15 = ppppplVar28[(long)ppppplVar9 * 2];
            *(undefined4 *)(ppppplVar22 + 1) =
                 *(undefined4 *)(ppppplVar28 + (long)ppppplVar9 * 2 + 1);
            ppppplVar27 = (long *****)((long)ppppplVar22 + 0xc);
            *ppppplVar22 = pppplVar15;
          }
          lVar25 = lVar25 + 0x10;
          ppppplVar22 = ppppplVar27;
        } while (lVar25 != 0x20);
        lVar11 = lVar11 + 0xc;
      } while (lVar11 != 0xfc);
      func_0x00010742a308(&pppplStack_108,(long)ppppplVar27 - (long)pppplStack_108 >> 2);
      param_1 = puStack_190;
      param_7 = pbStack_198;
      param_3 = lStack_1a0;
      ppppplVar27 = (long *****)pppplStack_1a8;
      lVar11 = lStack_1b0;
      if ((long *****)pppplStack_188 != (long *****)0x0) {
        __ZdlPv();
      }
      if (ppppplVar28 != (long *****)0x0) {
        __ZdlPv(ppppplVar28);
      }
      ppppplVar10 = (long *****)pppplStack_108;
      FUN_10aa1eea8(&uStack_c0,pppplStack_108,(long)pppplStack_100 - (long)pppplStack_108 >> 2);
      cVar2 = (char)pppplStack_b8;
      if ((char)pppplStack_b8 == '\0') {
        if ((bRam000000011330a9e8 & 1) != 0) {
          plVar7 = (long *)(lVar11 + 0x58);
          lStack_1c0 = *plVar7;
          if (-1 < *(char *)(lVar11 + 0x6f)) {
            lStack_1c0 = (long)plVar7;
          }
          ppppplVar10 = (long *****)0x1;
          func_0x00010ae06f08(0,1,&UNK_10f68ae7d,&UNK_10f68aec7,0x76,&UNK_10f68afeb);
        }
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        pppplStack_d0 = (long ****)NEON_fmov(0x3f800000,4);
        pppplStack_c8 = (long ****)CONCAT44(pppplStack_c8._4_4_,0x3f800000);
        ppppplVar10 = uStack_a8;
        FUN_10aa2bbd4(&pppplStack_188,uStack_a8,((ulong)uStack_c0 & 0xffffffff) * 3,ppplStack_b0,
                      &pppplStack_d0);
        ppppplVar6[1] = pppplStack_180;
        *ppppplVar6 = pppplStack_188;
        ppppplVar6[3] = (long ****)CONCAT44(uStack_16c,uStack_170);
        ppppplVar6[2] = (long ****)uStack_178;
        *(ulong *)((long)ppppplVar6 + 0x24) = CONCAT44(uStack_160,uStack_164);
        *(ulong *)((long)ppppplVar6 + 0x1c) = CONCAT44(uStack_168,uStack_16c);
        *(undefined1 *)(ppppplVar27 + 1) = 0;
        *ppppplVar27 = (long ****)0x0;
        FUN_10aa1accc(ppppplVar27);
        ppppplVar27[1] = pppplStack_b8;
        *ppppplVar27 = (long ****)uStack_c0;
        ppppplVar27[3] = (long ****)uStack_a8;
        ppppplVar27[2] = (long ****)ppplStack_b0;
        ppppplVar27[5] = (long ****)ppplStack_98;
        ppppplVar27[4] = (long ****)ppplStack_a0;
        ppppplVar27[6] = (long ****)ppplStack_90;
        pppplStack_b8 = (long ****)0x0;
        uStack_c0 = (long *****)0x0;
        uStack_a8 = (long *****)0x0;
        ppplStack_b0 = (long ***)0x0;
        ppplStack_98 = (long ***)0x0;
        ppplStack_a0 = (long ***)0x0;
        ppplStack_90 = (long ***)0x0;
      }
      FUN_10aa1accc(&uStack_c0);
      ppppplVar8 = (long *****)pppplStack_108;
      if ((long *****)pppplStack_108 != (long *****)0x0) {
        pppplStack_100 = pppplStack_108;
        __ZdlPv();
      }
      if (cVar2 == '\0') goto LAB_10aa1ec48;
    }
    ppppplVar9 = &pppplStack_f0;
    func_0x00010a0fda30();
    ppppplVar22 = (long *****)&uStack_c0;
    FUN_10aa1f0e0(ppppplVar22,param_3,ppppplVar8,ppppplVar10,param_7,&pppplStack_140,&pppplStack_150
                 );
    ppppplVar6 = (long *****)pppplStack_150;
    param_1[1] = pppplStack_b8;
    *param_1 = uStack_c0;
    pppplStack_150 = (long ****)0x0;
    if (ppppplVar6 == (long *****)0x0) goto LAB_10aa1ec58;
  }
LAB_10aa1ec48:
  pppplStack_150 = (long ****)0x0;
  ppppplVar9 = &pppplStack_f0;
  FUN_10aa1accc(ppppplVar6 + 6);
  ppppplVar22 = ppppplVar6;
  __ZdlPv();
LAB_10aa1ec58:
  if (cStack_111 < '\0') {
    __ZdlPv();
    ppppplVar22 = (long *****)pppplStack_128;
  }
  if (sStack_12a < 0) {
    ppppplVar22 = (long *****)pppplStack_140;
    __ZdlPv();
  }
  if (lStack_e0 < 0) {
    ppppplVar22 = (long *****)pppplStack_f0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  FUN_10aa1accc(&uStack_c0);
  if ((long *****)pppplStack_108 != (long *****)0x0) {
    pppplStack_100 = pppplStack_108;
    __ZdlPv();
  }
  pppplStack_150 = (long ****)0x0;
  FUN_10aa1accc(ppppplVar6 + 6);
  __ZdlPv(ppppplVar6);
  FUN_10a0ff214(&pppplStack_140);
  if (lStack_e0 < 0) {
    __ZdlPv(pppplStack_f0);
  }
  ppppplVar10 = ppppplVar22;
  __Unwind_Resume();
  pcStack_1c8 = FUN_10aa1eea8;
  uStack_268 = 1;
  pauStack_270 = (undefined1 (*) [16])0x0;
  uStack_27c = 0;
  uStack_248 = 1;
  uStack_250 = 0;
  uStack_25c = 0;
  uStack_228 = 1;
  lStack_230 = 0;
  uStack_23c = 0;
  uStack_208 = 1;
  piStack_210 = (int *)0x0;
  uStack_21c = 0;
  pppplStack_200 = (long ****)ppppplVar28;
  pppplStack_1f8 = (long ****)ppppplVar27;
  pppplStack_1f0 = (long ****)ppppplVar6;
  puStack_1e8 = param_1;
  pppplStack_1e0 = (long ****)ppppplVar9;
  pppplStack_1d8 = (long ****)ppppplVar22;
  puStack_1d0 = &stack0xfffffffffffffff0;
  func_0x000109827904(auStack_280);
  piVar26 = piStack_210;
  lVar29 = lStack_230;
  iVar12 = (int)uStack_21c;
  piVar1 = piStack_210 + (int)uStack_21c;
  lVar11 = 0;
  piVar17 = piStack_210;
  if ((int)uStack_21c != 0) {
    do {
      piVar18 = (int *)(lStack_230 + (long)*piVar17 * 0xc);
      lVar11 = lVar11 + -2;
      piVar19 = piVar18;
      do {
        piVar19 = piVar19 + (long)piVar19[1] * 3 + (long)piVar19[(long)piVar19[1] * 3] * 3;
        lVar11 = lVar11 + 1;
      } while (piVar19 != piVar18);
      piVar17 = piVar17 + 1;
    } while (piVar17 != piVar1);
  }
  iVar20 = (int)uStack_27c;
  lVar25 = (long)(int)uStack_27c;
  *ppppplVar10 = (long ****)0x0;
  *(undefined1 *)(ppppplVar10 + 1) = 0;
  ppppplVar10[3] = (long ****)0x0;
  ppppplVar10[2] = (long ****)0x0;
  ppppplVar10[5] = (long ****)0x0;
  ppppplVar10[4] = (long ****)0x0;
  ppppplVar10[6] = (long ****)0x0;
  FUN_10aa1ac44(ppppplVar10,lVar11,lVar25,2);
  auVar31 = *pauStack_270;
  auVar30 = auVar31._0_12_;
  auVar33 = auVar31;
  if (iVar20 != 0) {
    pppplVar15 = ppppplVar10[2] + 1;
    pauVar13 = pauStack_270;
    do {
      auVar35 = *pauVar13;
      pppplVar15[-1] = auVar35._0_8_;
      *(int *)pppplVar15 = auVar35._8_4_;
      auVar31 = NEON_fmin(auVar31,auVar35,4);
      auVar30 = auVar31._0_12_;
      auVar33 = NEON_fmax(auVar33,auVar35,4);
      pppplVar15 = (long ****)((long)pppplVar15 + 0xc);
      lVar25 = lVar25 + -1;
      pauVar13 = pauVar13 + 1;
    } while (lVar25 != 0);
  }
  auVar31._12_4_ = auVar33._0_4_;
  auVar31._0_12_ = auVar30;
  ppppplVar10[5] = auVar31._8_8_;
  ppppplVar10[4] = auVar30._0_8_;
  auVar31 = NEON_ext(auVar33,auVar33,4,1);
  ppppplVar10[6] = auVar31._0_8_;
  if (iVar12 != 0) {
    pppplVar15 = ppppplVar10[3];
    do {
      piVar19 = (int *)(lVar29 + (long)*piVar26 * 0xc);
      iVar12 = piVar19[1];
      lVar11 = (long)piVar19[(long)iVar12 * 3];
      piVar17 = piVar19 + (long)iVar12 * 3 + lVar11 * 3;
      lVar25 = (long)piVar17[(long)piVar17[1] * 3];
      if (lVar11 * 0xc + (long)iVar12 * 0xc + (long)piVar17[1] * 0xc + lVar25 * 0xc != 0) {
        iVar20 = piVar19[2];
        iVar12 = piVar19[(long)iVar12 * 3 + 2];
        piVar18 = piVar17 + (long)piVar17[1] * 3 + lVar25 * 3;
        do {
          *(short *)((long)pppplVar15 + 2) = (short)iVar20;
          iVar20 = piVar17[2];
          *(short *)pppplVar15 = (short)iVar12;
          *(short *)((long)pppplVar15 + 4) = (short)iVar20;
          pppplVar15 = (long ****)((long)pppplVar15 + 6);
          piVar21 = piVar18 + (long)piVar18[1] * 3;
          piVar17 = piVar18;
          piVar18 = piVar21 + (long)*piVar21 * 3;
        } while (piVar21 + (long)*piVar21 * 3 != piVar19);
      }
      piVar26 = piVar26 + 1;
    } while (piVar26 != piVar1);
  }
  func_0x00010980501c(auStack_220);
  func_0x0001098180f8(auStack_240);
  func_0x00010980501c(auStack_260);
  func_0x00010980eb0c(auStack_280);
  return;
}



/* Entry: 10aa1eea8; end: 10aa1f0df;  */

void FUN_10aa1eea8(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  unkbyte9 Var6;
  unkbyte9 Var7;
  long lVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  undefined2 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  long lVar18;
  int *piVar19;
  undefined1 auVar20 [12];
  undefined1 auVar22 [16];
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 auStack_c0 [4];
  undefined8 uStack_bc;
  undefined1 (*pauStack_b0) [16];
  undefined1 uStack_a8;
  undefined1 auStack_a0 [4];
  undefined8 uStack_9c;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [4];
  undefined8 uStack_7c;
  long lStack_70;
  undefined1 uStack_68;
  undefined1 auStack_60 [4];
  undefined8 uStack_5c;
  int *piStack_50;
  undefined1 uStack_48;
  undefined1 auVar21 [16];
  
  uStack_a8 = 1;
  pauStack_b0 = (undefined1 (*) [16])0x0;
  uStack_bc = 0;
  uStack_88 = 1;
  uStack_90 = 0;
  uStack_9c = 0;
  uStack_68 = 1;
  lStack_70 = 0;
  uStack_7c = 0;
  uStack_48 = 1;
  piStack_50 = (int *)0x0;
  uStack_5c = 0;
  func_0x000109827904(auStack_c0,param_2,0,0xc,param_3 / 3);
  piVar19 = piStack_50;
  lVar8 = lStack_70;
  iVar2 = (int)uStack_5c;
  piVar1 = piStack_50 + (int)uStack_5c;
  lVar9 = 0;
  piVar12 = piStack_50;
  if ((int)uStack_5c != 0) {
    do {
      piVar14 = (int *)(lStack_70 + (long)*piVar12 * 0xc);
      lVar9 = lVar9 + -2;
      piVar15 = piVar14;
      do {
        piVar15 = piVar15 + (long)piVar15[1] * 3 + (long)piVar15[(long)piVar15[1] * 3] * 3;
        lVar9 = lVar9 + 1;
      } while (piVar15 != piVar14);
      piVar12 = piVar12 + 1;
    } while (piVar12 != piVar1);
  }
  iVar16 = (int)uStack_bc;
  lVar18 = (long)(int)uStack_bc;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  FUN_10aa1ac44(param_1,lVar9,lVar18,2);
  auVar21 = *pauStack_b0;
  auVar20 = auVar21._0_12_;
  auVar22 = auVar21;
  if (iVar16 != 0) {
    puVar13 = (undefined4 *)(param_1[2] + 8);
    pauVar10 = pauStack_b0;
    do {
      uVar5 = *(undefined8 *)(*pauVar10 + 8);
      uVar23 = (undefined1)((ulong)uVar5 >> 8);
      uVar24 = (undefined1)((ulong)uVar5 >> 0x10);
      uVar25 = (undefined1)((ulong)uVar5 >> 0x18);
      uVar26 = (undefined1)((ulong)uVar5 >> 0x20);
      uVar27 = (undefined1)((ulong)uVar5 >> 0x28);
      uVar28 = (undefined1)((ulong)uVar5 >> 0x30);
      uVar29 = (undefined1)((ulong)uVar5 >> 0x38);
      Var7 = *(unkbyte9 *)*pauVar10;
      Var6 = *(unkbyte9 *)*pauVar10;
      *(undefined8 *)(puVar13 + -2) = *(undefined8 *)*pauVar10;
      *puVar13 = (int)uVar5;
      auVar3[9] = uVar23;
      auVar3._0_9_ = Var6;
      auVar3[10] = uVar24;
      auVar3[0xb] = uVar25;
      auVar3[0xc] = uVar26;
      auVar3[0xd] = uVar27;
      auVar3[0xe] = uVar28;
      auVar3[0xf] = uVar29;
      auVar21 = NEON_fmin(auVar21,auVar3,4);
      auVar20 = auVar21._0_12_;
      auVar4[9] = uVar23;
      auVar4._0_9_ = Var7;
      auVar4[10] = uVar24;
      auVar4[0xb] = uVar25;
      auVar4[0xc] = uVar26;
      auVar4[0xd] = uVar27;
      auVar4[0xe] = uVar28;
      auVar4[0xf] = uVar29;
      auVar22 = NEON_fmax(auVar22,auVar4,4);
      puVar13 = puVar13 + 3;
      lVar18 = lVar18 + -1;
      pauVar10 = pauVar10 + 1;
    } while (lVar18 != 0);
  }
  auVar21._12_4_ = auVar22._0_4_;
  auVar21._0_12_ = auVar20;
  param_1[5] = auVar21._8_8_;
  param_1[4] = auVar20._0_8_;
  auVar21 = NEON_ext(auVar22,auVar22,4,1);
  param_1[6] = auVar21._0_8_;
  if (iVar2 != 0) {
    puVar11 = (undefined2 *)param_1[3];
    do {
      piVar15 = (int *)(lVar8 + (long)*piVar19 * 0xc);
      iVar2 = piVar15[1];
      lVar9 = (long)piVar15[(long)iVar2 * 3];
      piVar12 = piVar15 + (long)iVar2 * 3 + lVar9 * 3;
      lVar18 = (long)piVar12[(long)piVar12[1] * 3];
      if (lVar9 * 0xc + (long)iVar2 * 0xc + (long)piVar12[1] * 0xc + lVar18 * 0xc != 0) {
        iVar16 = piVar15[2];
        iVar2 = piVar15[(long)iVar2 * 3 + 2];
        piVar14 = piVar12 + (long)piVar12[1] * 3 + lVar18 * 3;
        do {
          puVar11[1] = (short)iVar16;
          iVar16 = piVar12[2];
          *puVar11 = (short)iVar2;
          puVar11[2] = (short)iVar16;
          puVar11 = puVar11 + 3;
          piVar17 = piVar14 + (long)piVar14[1] * 3;
          piVar12 = piVar14;
          piVar14 = piVar17 + (long)*piVar17 * 3;
        } while (piVar17 + (long)*piVar17 * 3 != piVar15);
      }
      piVar19 = piVar19 + 1;
    } while (piVar19 != piVar1);
  }
  func_0x00010980501c(auStack_60);
  func_0x0001098180f8(auStack_80);
  func_0x00010980501c(auStack_a0);
  func_0x00010980eb0c(auStack_c0);
  return;
}



/* Entry: 10aa1f0e0; end: 10aa1f423;  */

void FUN_10aa1f0e0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  if (param_2 == 0) {
    plVar7 = (long *)0x1b8;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_DAT_110c3c970;
    plVar6 = plVar7 + 3;
    FUN_10aa1f424(plVar6,0,param_3,param_4,param_5,param_6,param_7);
    plStack_70 = plVar6;
    plStack_68 = plVar7;
    FUN_10aa61ff8(&plStack_70,plVar7 + 8,plVar6);
    FUN_10aa61dfc(param_1,&plStack_70);
    if (plStack_68 == (long *)0x0) {
      return;
    }
    plVar6 = plStack_68 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar7 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
    lVar8 = *(long *)(param_2 + 0x858);
    plVar7 = *(long **)(param_2 + 0x860);
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar4 = 0x1a0;
    __Znwm(0x1a0);
    FUN_10aa1f424();
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    lStack_80 = lVar8;
    plStack_78 = plVar7;
    FUN_10aa61f60(&plStack_70,uVar4,&lStack_80);
    FUN_10aa61dfc(param_1,&plStack_70);
    plVar6 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 1;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if ((lVar8 != 0) && (plVar6 = (long *)*param_1, plVar6 != (long *)0x0)) {
      plStack_68 = (long *)param_1[1];
      if (plStack_68 != (long *)0x0) {
        plVar1 = plStack_68 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_70 = plVar6;
      FUN_10aa88c30(lVar8,&plStack_70);
      plVar6 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar1 = plStack_68 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    if (plVar7 == (long *)0x0) {
      return;
    }
    plVar6 = plVar7 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  return;
}



/* Entry: 10aa1f424; end: 10aa1f547;  */

undefined8 * FUN_10aa1f424(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *in_x4;
  undefined8 *in_x5;
  undefined8 *in_x6;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10aa7093c();
  *(undefined1 *)(puVar1 + 0x1c) = *in_x4;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x20] = 0x3f80000000000000;
  puVar1[0x1f] = 0;
  puVar1[0x21] = 0;
  *(undefined4 *)(puVar1 + 0x22) = 0;
  puVar1[0x23] = 0;
  *(undefined1 *)(puVar1 + 0x24) = 0;
  puVar1[0x26] = 0;
  puVar1[0x25] = 0;
  puVar1[0x28] = 0;
  puVar1[0x27] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2b] = 0;
  *puVar1 = &PTR_FUN_110c38f68;
  puVar1[2] = &PTR_DAT_110c39050;
  puVar1[7] = &PTR_DAT_110c390a8;
  if (*(char *)((long)in_x5 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x2c,*in_x5,in_x5[1]);
  }
  else {
    uVar3 = in_x5[1];
    uVar2 = *in_x5;
    param_1[0x2e] = in_x5[2];
    param_1[0x2d] = uVar3;
    param_1[0x2c] = uVar2;
  }
  if (*(char *)((long)in_x5 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 0x2f,in_x5[3],in_x5[4]);
  }
  else {
    uVar3 = in_x5[4];
    uVar2 = in_x5[3];
    param_1[0x31] = in_x5[5];
    param_1[0x30] = uVar3;
    param_1[0x2f] = uVar2;
  }
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(in_x5 + 6);
  uVar2 = *in_x6;
  *in_x6 = 0;
  param_1[0x33] = uVar2;
  return param_1;
}



/* Entry: 10aa1f548; end: 10aa1f5db;  */

undefined8 * FUN_10aa1f548(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c39128;
  param_1[2] = &PTR_DAT_110c39210;
  param_1[7] = &PTR_DAT_110c39268;
  if (param_1[0x2b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
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



/* Entry: 10aa1f5dc; end: 10aa1f5ef;  */

undefined8 * FUN_10aa1f5dc(undefined8 *param_1)

{
  func_0x00010aa6222c(param_1 + 0x33,0);
  if (*(char *)((long)param_1 + 399) < '\0') {
    __ZdlPv(param_1[0x2f]);
  }
  if (*(char *)((long)param_1 + 0x177) < '\0') {
    __ZdlPv(param_1[0x2c]);
  }
  *param_1 = &PTR_DAT_110c39128;
  param_1[2] = &PTR_DAT_110c39210;
  param_1[7] = &PTR_DAT_110c39268;
  if (param_1[0x2b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
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



/* Entry: 10aa1f5f0; end: 10aa1f633;  */

void FUN_10aa1f5f0(void)

{
  func_0x00010aa1f590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa1f634; end: 10aa1f97f;  */

/* WARNING: Removing unreachable block (ram,0x00010aa1f8c8) */
/* WARNING: Removing unreachable block (ram,0x00010aa1f880) */
/* WARNING: Removing unreachable block (ram,0x00010aa1f900) */

void FUN_10aa1f634(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 uStack_78;
  char cStack_61;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined4 uStack_28;
  
  func_0x00010aa70acc();
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c39278,0);
  *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) & 0xfe | (byte)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c390b8);
  if ((int)plVar1 == 0) {
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c390d8);
    if ((int)plVar1 != 0) {
      (**(code **)(*param_2 + 0xa0))(auStack_90,param_2,&PTR_DAT_110c390d8);
      FUN_10a107e2c(&uStack_58,auStack_90,*(long *)(param_2[3] + 0x100) + 0x220,0);
      if (*(char *)(param_1 + 0x177) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x160));
      }
      *(undefined8 *)(param_1 + 0x168) = uStack_50;
      *(ulong *)(param_1 + 0x160) = CONCAT71(uStack_57,uStack_58);
      *(ulong *)(param_1 + 0x170) = CONCAT17(uStack_41,uStack_48);
      uStack_41 = 0;
      uStack_58 = 0;
      if (*(char *)(param_1 + 399) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x178));
        *(undefined8 *)(param_1 + 0x180) = uStack_38;
        *(undefined8 *)(param_1 + 0x178) = CONCAT71(uStack_3f,uStack_40);
        *(ulong *)(param_1 + 0x188) = CONCAT17(uStack_29,uStack_30);
        uStack_29 = 0;
        uStack_40 = 0;
        *(undefined4 *)(param_1 + 400) = uStack_28;
      }
      else {
        *(undefined8 *)(param_1 + 0x180) = uStack_38;
        *(undefined8 *)(param_1 + 0x178) = CONCAT71(uStack_3f,uStack_40);
        *(ulong *)(param_1 + 0x188) = CONCAT17(uStack_29,uStack_30);
        uStack_29 = 0;
        uStack_40 = 0;
        *(undefined4 *)(param_1 + 400) = uStack_28;
      }
      goto LAB_10aa1f918;
    }
    func_0x000107c2b054(auStack_90,&UNK_10f68a4a1);
    func_0x000107c2b054(auStack_a8,&UNK_10f68a4a1);
    FUN_10a107e2c(&uStack_58,auStack_90,auStack_a8,0);
    if (*(char *)(param_1 + 0x177) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x160));
    }
    *(undefined8 *)(param_1 + 0x168) = uStack_50;
    *(ulong *)(param_1 + 0x160) = CONCAT71(uStack_57,uStack_58);
    *(ulong *)(param_1 + 0x170) = CONCAT17(uStack_41,uStack_48);
    uStack_41 = 0;
    uStack_58 = 0;
    if (*(char *)(param_1 + 399) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x178));
      *(undefined8 *)(param_1 + 0x180) = uStack_38;
      *(undefined8 *)(param_1 + 0x178) = CONCAT71(uStack_3f,uStack_40);
      *(ulong *)(param_1 + 0x188) = CONCAT17(uStack_29,uStack_30);
      *(undefined4 *)(param_1 + 400) = uStack_28;
    }
    else {
      *(undefined8 *)(param_1 + 0x180) = uStack_38;
      *(undefined8 *)(param_1 + 0x178) = CONCAT71(uStack_3f,uStack_40);
      *(ulong *)(param_1 + 0x188) = CONCAT17(uStack_29,uStack_30);
      *(undefined4 *)(param_1 + 400) = uStack_28;
    }
  }
  else {
    FUN_10a1e3e54(auStack_90);
    (**(code **)(*param_2 + 0x230))(&uStack_58,param_2,&PTR_DAT_110c390b8,auStack_90);
    if (*(char *)(param_1 + 0x177) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x160));
    }
    *(undefined8 *)(param_1 + 0x168) = uStack_50;
    *(ulong *)(param_1 + 0x160) = CONCAT71(uStack_57,uStack_58);
    *(ulong *)(param_1 + 0x170) = CONCAT17(uStack_41,uStack_48);
    uStack_41 = 0;
    uStack_58 = 0;
    if (*(char *)(param_1 + 399) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x178));
      *(undefined8 *)(param_1 + 0x180) = uStack_38;
      *(undefined8 *)(param_1 + 0x178) = CONCAT71(uStack_3f,uStack_40);
      *(ulong *)(param_1 + 0x188) = CONCAT17(uStack_29,uStack_30);
      *(undefined4 *)(param_1 + 400) = uStack_28;
      auStack_a8[0] = uStack_78;
      cStack_91 = cStack_61;
    }
    else {
      *(undefined8 *)(param_1 + 0x180) = uStack_38;
      *(undefined8 *)(param_1 + 0x178) = CONCAT71(uStack_3f,uStack_40);
      *(ulong *)(param_1 + 0x188) = CONCAT17(uStack_29,uStack_30);
      *(undefined4 *)(param_1 + 400) = uStack_28;
      auStack_a8[0] = uStack_78;
      cStack_91 = cStack_61;
    }
  }
  uStack_29 = 0;
  uStack_40 = 0;
  if (cStack_91 < '\0') {
    uStack_29 = 0;
    uStack_40 = 0;
    __ZdlPv(auStack_a8[0]);
  }
LAB_10aa1f918:
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  return;
}



/* Entry: 10aa1f980; end: 10aa1fa63;  */

void FUN_10aa1f980(long param_1,long *param_2)

{
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c39278,0);
  *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) & 0xfe | (byte)param_2;
  return;
}



/* Entry: 10aa1fa64; end: 10aa1fc23;  */

/* WARNING: Removing unreachable block (ram,0x00010aa1facc) */
/* WARNING: Removing unreachable block (ram,0x00010aa1fbcc) */

void FUN_10aa1fa64(undefined8 param_1,long param_2)

{
  undefined8 ****ppppuVar1;
  undefined8 *puVar2;
  undefined8 ***pppuStack_68;
  ulong uStack_60;
  undefined7 uStack_58;
  byte bStack_51;
  undefined8 ***pppuStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  puVar2[1] = 0x6c6c6f43656c6946;
  *puVar2 = 0x2e73636973796850;
  *(undefined8 *)((long)puVar2 + 0x11) = 0x6873654d6e6f6973;
  *(undefined8 *)((long)puVar2 + 9) = 0x696c6c6f43656c69;
  *(undefined1 *)((long)puVar2 + 0x19) = 0;
  pppuStack_50 = (undefined8 ****)0x0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (*(long *)(param_2 + 0x198) != 0) {
    FUN_10aa1a9cc(&pppuStack_68,*(long *)(param_2 + 0x198) + 0x30);
    uStack_48 = uStack_60;
    pppuStack_50 = pppuStack_68;
    uStack_40 = CONCAT17(bStack_51,uStack_58);
    if ((*(byte *)(param_2 + 0xe0) & 1) != 0) {
      FUN_10a0ee900(&pppuStack_68,&UNK_10f68b028,0x3e);
      ppppuVar1 = (undefined8 ****)pppuStack_68;
      if (-1 < (char)bStack_51) {
        uStack_60 = (ulong)bStack_51;
        ppppuVar1 = &pppuStack_68;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppuStack_50,ppppuVar1,uStack_60);
      if ((char)bStack_51 < '\0') {
        __ZdlPv(pppuStack_68);
      }
    }
  }
  FUN_10a0ee900(param_1,&UNK_10f68b067,0x14);
  __ZdlPv(puVar2);
  return;
}



/* Entry: 10aa1fc24; end: 10aa1fc2b;  */

/* WARNING: Removing unreachable block (ram,0x00010aa1facc) */
/* WARNING: Removing unreachable block (ram,0x00010aa1fbcc) */

void FUN_10aa1fc24(undefined8 param_1,long param_2)

{
  undefined8 ****ppppuVar1;
  undefined8 *puVar2;
  undefined8 ***pppuStack_68;
  ulong uStack_60;
  undefined7 uStack_58;
  byte bStack_51;
  undefined8 ***pppuStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  puVar2[1] = 0x6c6c6f43656c6946;
  *puVar2 = 0x2e73636973796850;
  *(undefined8 *)((long)puVar2 + 0x11) = 0x6873654d6e6f6973;
  *(undefined8 *)((long)puVar2 + 9) = 0x696c6c6f43656c69;
  *(undefined1 *)((long)puVar2 + 0x19) = 0;
  pppuStack_50 = (undefined8 ****)0x0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (*(long *)(param_2 + 0x188) != 0) {
    FUN_10aa1a9cc(&pppuStack_68,*(long *)(param_2 + 0x188) + 0x30);
    uStack_48 = uStack_60;
    pppuStack_50 = pppuStack_68;
    uStack_40 = CONCAT17(bStack_51,uStack_58);
    if ((*(byte *)(param_2 + 0xd0) & 1) != 0) {
      FUN_10a0ee900(&pppuStack_68,&UNK_10f68b028,0x3e);
      ppppuVar1 = (undefined8 ****)pppuStack_68;
      if (-1 < (char)bStack_51) {
        uStack_60 = (ulong)bStack_51;
        ppppuVar1 = &pppuStack_68;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppuStack_50,ppppuVar1,uStack_60);
      if ((char)bStack_51 < '\0') {
        __ZdlPv(pppuStack_68);
      }
    }
  }
  FUN_10a0ee900(param_1,&UNK_10f68b067,0x14);
  __ZdlPv(puVar2);
  return;
}



/* Entry: 10aa1fc2c; end: 10aa1fccb;  */

void FUN_10aa1fc2c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  lVar1 = param_2;
  func_0x00010a0fda30();
  lStack_48 = 0;
  FUN_10aa1f0e0(&uStack_40,uVar2,lVar1,param_3,param_2 + 0xe0,param_2 + 0x160,&lStack_48);
  lVar1 = lStack_48;
  if (lStack_48 != 0) {
    FUN_10aa1accc(lStack_48 + 0x30);
    __ZdlPv(lVar1);
  }
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  return;
}



/* Entry: 10aa1fccc; end: 10aa1fd67;  */

bool FUN_10aa1fccc(long param_1)

{
  int iVar1;
  ulong uVar3;
  long lVar4;
  long lStack_30;
  ulong uStack_28;
  int iVar2;
  
  if (*(long *)(param_1 + 0x198) == 0) {
    return false;
  }
  iVar1 = (int)&lStack_30;
  iVar2 = (int)&lStack_30;
  uVar3 = (ulong)*(char *)(param_1 + 0x177);
  if ((long)uVar3 < 0) {
    lVar4 = *(long *)(param_1 + 0x160);
    uVar3 = *(ulong *)(param_1 + 0x168);
  }
  else {
    lVar4 = param_1 + 0x160;
  }
  lStack_30 = lVar4;
  uStack_28 = uVar3;
  FUN_10a0423ac(&lStack_30,0,0x16,&UNK_10f68ba98,0x16);
  if ((iVar1 == 0) && (8 < uVar3)) {
    lStack_30 = lVar4;
    uStack_28 = uVar3;
    FUN_10a0423ac(&lStack_30,uVar3 - 9,9,&UNK_10f68baaf,9);
    return iVar2 == 0;
  }
  return false;
}



/* Entry: 10aa1fd68; end: 10aa20007;  */

void FUN_10aa1fd68(long param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 auStack_a0 [2];
  char cStack_89;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **appuStack_60 [2];
  undefined **appuStack_50 [2];
  undefined **appuStack_40 [3];
  long *plStack_28;
  
  FUN_10a0f984c(&ppuStack_70);
  FUN_10a0fadd8(&ppuStack_70,&PTR_DAT_110c390f8);
  puVar2 = *(undefined4 **)(param_1 + 0x198);
  (*(code *)ppuStack_70[0xc])(*puVar2,&ppuStack_70,&PTR_DAT_110c39ca8);
  (*(code *)ppuStack_70[0x10])(&ppuStack_70,&PTR_DAT_110c3b818,puVar2 + 1);
  (*(code *)ppuStack_70[0x1a])(&ppuStack_70,&PTR_DAT_110c39cc8,puVar2 + 4);
  (*(code *)ppuStack_70[0x10])(&ppuStack_70,&PTR_DAT_110c39ce8,puVar2 + 8);
  FUN_10a0fafc0(&ppuStack_70);
  lVar3 = *(long *)(param_1 + 0x198);
  (*(code *)ppuStack_70[10])(&ppuStack_70,&PTR_DAT_110c38b60,*(undefined4 *)(lVar3 + 0x30));
  (*(code *)ppuStack_70[10])(&ppuStack_70,&PTR_DAT_110c38b80,*(undefined4 *)(lVar3 + 0x34));
  (*(code *)ppuStack_70[10])(&ppuStack_70,&PTR_DAT_110c38ba0,*(undefined1 *)(lVar3 + 0x38));
  (*(code *)ppuStack_70[0x10])(&ppuStack_70,&PTR_DAT_110c38bc0,lVar3 + 0x50);
  (*(code *)ppuStack_70[0x10])(&ppuStack_70,&PTR_DAT_110c38be0,lVar3 + 0x5c);
  (*(code *)ppuStack_70[5])
            (&ppuStack_70,&PTR_DAT_110c38c00,*(undefined8 *)(lVar3 + 0x40),
             (ulong)*(uint *)(lVar3 + 0x34) * 0xc);
  (*(code *)ppuStack_70[5])
            (&ppuStack_70,&PTR_DAT_110c38c20,*(undefined8 *)(lVar3 + 0x48),
             (ulong)*(uint *)(lVar3 + 0x30) * (ulong)*(byte *)(lVar3 + 0x38) * 2 +
             (ulong)*(uint *)(lVar3 + 0x30) * (ulong)*(byte *)(lVar3 + 0x38));
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  func_0x00010a0fb0f4(&ppuStack_70,&lStack_88);
  FUN_10a08d2e0(auStack_a0,param_1 + 0x160);
  FUN_10ad00d7c(auStack_a0,lStack_88,lStack_80 - lStack_88);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  plVar1 = plStack_28;
  ppuStack_70 = &PTR_FUN_110ba53b0;
  ppuStack_68 = &PTR_FUN_110ba5578;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  appuStack_40[0] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(appuStack_40);
  appuStack_50[0] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(appuStack_50);
  appuStack_60[0] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(appuStack_60);
  return;
}



/* Entry: 10aa20008; end: 10aa200c3;  */

/* WARNING: Removing unreachable block (ram,0x00010aa20218) */

void FUN_10aa20008(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6)

{
  ulong *puVar1;
  char cVar2;
  uint *puVar3;
  code *pcVar4;
  int iVar5;
  ulong *puVar8;
  undefined ***pppuVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *extraout_x8;
  undefined **ppuVar13;
  ulong unaff_x20;
  undefined **ppuVar14;
  long lVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  long alStack_2c0 [40];
  undefined8 uStack_180;
  long lStack_178;
  char cStack_170;
  undefined8 uStack_168;
  long lStack_160;
  char cStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  uint *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined **ppuStack_90;
  code *pcStack_88;
  long lStack_58;
  ulong uStack_50;
  ulong *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  int iVar6;
  uint uVar7;
  
  uVar12 = (ulong)*(char *)(param_6 + 0x177);
  if ((long)uVar12 < 0) {
    lVar15 = *(long *)(param_6 + 0x160);
    uVar12 = *(ulong *)(param_6 + 0x168);
  }
  else {
    lVar15 = param_6 + 0x160;
  }
  if (uVar12 < 0x16) {
    FUN_109ffdddc(&UNK_10f2fca6e);
  }
  else {
    unaff_x20 = uVar12 - 0x16;
    if (uVar12 - 0x1f <= uVar12 - 0x16) {
      unaff_x20 = uVar12 - 0x1f;
    }
    if (unaff_x20 < 0x7ffffffffffffff8) {
      if (unaff_x20 < 0x17) {
        *(char *)((long)param_1 + 0x17) = (char)unaff_x20;
        puVar8 = param_1;
        if (unaff_x20 == 0) goto LAB_10aa200a0;
      }
      else {
        puVar1 = (ulong *)0x19;
        if ((unaff_x20 | 7) != 0x17) {
          puVar1 = (ulong *)((unaff_x20 | 7) + 1);
        }
        puVar8 = puVar1;
        __Znwm();
        param_1[1] = unaff_x20;
        param_1[2] = (ulong)puVar1 | 0x8000000000000000;
        *param_1 = (ulong)puVar8;
      }
      _memmove(puVar8,lVar15 + 0x16,unaff_x20);
      param_1 = puVar8;
LAB_10aa200a0:
      *(undefined1 *)((long)param_1 + unaff_x20) = 0;
      return;
    }
  }
  func_0x000109ffde50();
  pcStack_38 = FUN_10aa200c4;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_90 = &PTR_DAT_110b9ec98;
  pcStack_88 = FUN_10aa62268;
  uStack_50 = unaff_x20;
  puStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  FUN_10a57077c();
  pppuVar9 = &ppuStack_90;
  (*(code *)*ppuStack_90)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_90)(&ppuStack_90);
  __Unwind_Resume();
  plVar11 = alStack_2c0;
  iVar5 = (int)alStack_2c0;
  iVar6 = (int)alStack_2c0;
  uVar7 = (uint)alStack_2c0;
  ppuVar13 = pppuVar9[0x33];
  if (ppuVar13 != (undefined **)0x0) goto LAB_10aa205a4;
  puVar10 = (undefined8 *)0x68;
  __Znwm();
  puVar10[5] = 0;
  puVar10[4] = 0;
  puVar10[7] = 0;
  puVar10[6] = 0;
  uVar20 = 0;
  puVar10[1] = 0;
  *puVar10 = 0;
  puVar10[3] = 0x3f80000000000000;
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 7) = 0;
  puVar10[6] = 0;
  puVar10[9] = 0;
  puVar10[8] = 0;
  puVar10[0xb] = 0;
  puVar10[10] = 0;
  puVar10[0xc] = 0;
  func_0x00010aa6222c(pppuVar9 + 0x33,puVar10);
  FUN_10a08d2e0(&uStack_150,pppuVar9 + 0x2c);
  FUN_10a0f6e20(alStack_2c0,&uStack_150,0);
  FUN_10a0f70fc(alStack_2c0,&PTR_DAT_110c390f8);
  if (plVar11 != (long *)0x0) {
    FUN_10a0f7298(alStack_2c0,&PTR_DAT_110c390f8);
    ppuVar13 = pppuVar9[0x33];
    uVar17 = uRam0000000113835560;
    (**(code **)(alStack_2c0[0] + 0x48))(alStack_2c0,&PTR_DAT_110c39ca8);
    *(undefined4 *)ppuVar13 = uVar17;
    (**(code **)(alStack_2c0[0] + 0xf0))(alStack_2c0,&PTR_DAT_110c3b818,0x113835564);
    *(undefined4 *)((long)ppuVar13 + 4) = uVar17;
    *(undefined4 *)(ppuVar13 + 1) = uVar20;
    *(undefined4 *)((long)ppuVar13 + 0xc) = param_4;
    (**(code **)(alStack_2c0[0] + 400))(alStack_2c0,&PTR_DAT_110c39cc8,0x113835570);
    *(undefined4 *)(ppuVar13 + 2) = uVar17;
    *(undefined4 *)((long)ppuVar13 + 0x14) = uVar20;
    *(undefined4 *)(ppuVar13 + 3) = param_4;
    *(undefined4 *)((long)ppuVar13 + 0x1c) = param_5;
    (**(code **)(alStack_2c0[0] + 0xf0))(alStack_2c0,&PTR_DAT_110c39ce8,0x113835580);
    *(undefined4 *)(ppuVar13 + 4) = uVar17;
    *(undefined4 *)((long)ppuVar13 + 0x24) = uVar20;
    *(undefined4 *)(ppuVar13 + 5) = param_4;
    FUN_10a0f7508(alStack_2c0);
  }
  ppuVar13 = pppuVar9[0x33];
  ppuVar14 = ppuVar13 + 6;
  *ppuVar14 = (undefined *)0x0;
  *(undefined1 *)(ppuVar13 + 7) = 0;
  FUN_10aa1accc(ppuVar14);
  puStack_148 = (undefined *)((ulong)puStack_148 & 0xffffffffffffff00);
  uStack_150 = (undefined *)0x0;
  uVar17 = 0;
  puStack_138 = (uint *)0x0;
  puStack_140 = (undefined *)0x0;
  uStack_128 = (undefined *)0x0;
  uStack_130 = (undefined *)0x0;
  uStack_120 = (undefined *)0x0;
  (**(code **)(alStack_2c0[0] + 200))(alStack_2c0,&PTR_DAT_110c38b60);
  uStack_150 = (undefined *)CONCAT44(uStack_150._4_4_,iVar5);
  (**(code **)(alStack_2c0[0] + 200))(alStack_2c0,&PTR_DAT_110c38b80);
  uStack_150 = (undefined *)CONCAT44(iVar6,(int)uStack_150);
  (**(code **)(alStack_2c0[0] + 200))(alStack_2c0,&PTR_DAT_110c38ba0);
  puStack_148 = (undefined *)CONCAT71(puStack_148._1_7_,(char)uVar7);
  (**(code **)(alStack_2c0[0] + 0xe8))(alStack_2c0,&PTR_DAT_110c38bc0);
  uStack_130 = (undefined *)CONCAT44(uVar20,uVar17);
  uStack_128 = (undefined *)CONCAT44(uStack_128._4_4_,param_4);
  (**(code **)(alStack_2c0[0] + 0xe8))(alStack_2c0,&PTR_DAT_110c38be0);
  uStack_128 = (undefined *)CONCAT44(uVar17,(undefined4)uStack_128);
  uStack_120 = (undefined *)CONCAT44(param_4,uVar20);
  if ((iVar5 != 0) && (iVar6 != 0)) {
    if ((1 < (uVar7 & 0xff) - 1) && ((uVar7 & 0xff) != 4)) {
      FUN_10a00946c(&UNK_10f68a88d);
      goto LAB_10aa20628;
    }
    func_0x00010aa1ad08(&uStack_150);
    uVar7 = uStack_150._4_4_;
    uVar12 = (ulong)uStack_150._4_4_;
    (**(code **)(alStack_2c0[0] + 0x1d8))(&uStack_168,alStack_2c0,&PTR_DAT_110c38c00);
    if ((cStack_158 != '\x01') || (lStack_160 != uVar12 * 0xc)) {
      FUN_10a00946c(&UNK_10f68a8b8);
      goto LAB_10aa20628;
    }
    _memcpy(puStack_140,uStack_168);
    iVar5 = (int)uStack_150;
    uVar12 = (ulong)uStack_150 & 0xffffffff;
    cVar2 = (char)puStack_148;
    uVar16 = (ulong)puStack_148 & 0xff;
    (**(code **)(alStack_2c0[0] + 0x1d8))(&uStack_180,alStack_2c0,&PTR_DAT_110c38c20);
    puVar3 = puStack_138;
    if ((cStack_170 != '\x01') || (uVar12 = uVar12 * 3, lStack_178 != uVar12 * uVar16)) {
      FUN_10a00946c(&UNK_10f68a8e5);
      goto LAB_10aa20628;
    }
    _memcpy(puStack_138,uStack_180);
    if (cVar2 == '\x04') {
      if (iVar5 == 0) {
LAB_10aa20540:
        *(undefined1 *)(ppuVar13 + 7) = 0;
        *ppuVar14 = (undefined *)0x0;
        FUN_10aa1accc(ppuVar14);
        ppuVar13[7] = puStack_148;
        *ppuVar14 = uStack_150;
        ppuVar13[9] = (undefined *)puStack_138;
        ppuVar13[8] = puStack_140;
        ppuVar13[0xb] = uStack_128;
        ppuVar13[10] = uStack_130;
        ppuVar13[0xc] = uStack_120;
        puStack_148 = (undefined *)0x0;
        uStack_150 = (undefined *)0x0;
        puStack_138 = (uint *)0x0;
        puStack_140 = (undefined *)0x0;
        uStack_128 = (undefined *)0x0;
        uStack_130 = (undefined *)0x0;
        uStack_120 = (undefined *)0x0;
        goto LAB_10aa20578;
      }
      if (*puVar3 < uVar7) {
        uVar16 = 0;
        do {
          if (uVar12 - 1 == uVar16) goto LAB_10aa20540;
          lVar15 = uVar16 + 1;
          uVar16 = uVar16 + 1;
        } while (puVar3[lVar15] < uVar7);
LAB_10aa20538:
        if (uVar12 <= uVar16) goto LAB_10aa20540;
      }
    }
    else if (cVar2 == '\x02') {
      if (iVar5 == 0) goto LAB_10aa20540;
      if ((ushort)*puVar3 < uVar7) {
        uVar16 = 0;
        do {
          if (uVar12 - 1 == uVar16) goto LAB_10aa20540;
          lVar15 = uVar16 * 2;
          uVar16 = uVar16 + 1;
        } while (*(ushort *)((long)puVar3 + lVar15 + 2) < uVar7);
        goto LAB_10aa20538;
      }
    }
    else if (cVar2 == '\x01') {
      if (iVar5 == 0) goto LAB_10aa20540;
      if ((byte)*puVar3 < uVar7) {
        uVar16 = 0;
        do {
          if (uVar12 - 1 == uVar16) goto LAB_10aa20540;
          lVar15 = uVar16 + 1;
          uVar16 = uVar16 + 1;
        } while (*(byte *)((long)puVar3 + lVar15) < uVar7);
        goto LAB_10aa20538;
      }
    }
    FUN_10a00946c(&UNK_10f68a910);
LAB_10aa20628:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa2062c);
    (*pcVar4)();
  }
LAB_10aa20578:
  FUN_10aa1accc(&uStack_150);
  ppuVar13 = pppuVar9[0x33];
  if (*(char *)(ppuVar13 + 7) == '\0') {
    *(undefined4 *)(ppuVar13 + 6) = 0;
    *(undefined1 *)(ppuVar13 + 7) = 1;
  }
  func_0x00010a0f618c(alStack_2c0);
  ppuVar13 = pppuVar9[0x33];
LAB_10aa205a4:
  puVar18 = *ppuVar13;
  puVar22 = ppuVar13[3];
  puVar21 = ppuVar13[2];
  extraout_x8[1] = ppuVar13[1];
  *extraout_x8 = puVar18;
  extraout_x8[3] = puVar22;
  extraout_x8[2] = puVar21;
  uVar19 = *(undefined8 *)((long)ppuVar13 + 0x1c);
  *(undefined8 *)((long)extraout_x8 + 0x24) = *(undefined8 *)((long)ppuVar13 + 0x24);
  *(undefined8 *)((long)extraout_x8 + 0x1c) = uVar19;
  puVar18 = ppuVar13[6];
  puVar22 = ppuVar13[9];
  puVar21 = ppuVar13[8];
  extraout_x8[7] = ppuVar13[7];
  extraout_x8[6] = puVar18;
  extraout_x8[9] = puVar22;
  extraout_x8[8] = puVar21;
  puVar18 = ppuVar13[10];
  extraout_x8[0xb] = ppuVar13[0xb];
  extraout_x8[10] = puVar18;
  extraout_x8[0xc] = ppuVar13[0xc];
  return;
}



/* Entry: 10aa200c4; end: 10aa20187;  */

/* WARNING: Removing unreachable block (ram,0x00010aa20218) */

void FUN_10aa200c4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  char cVar2;
  uint *puVar3;
  code *pcVar4;
  int iVar5;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *extraout_x8;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  long alStack_290 [40];
  undefined8 uStack_150;
  long lStack_148;
  char cStack_140;
  undefined8 uStack_138;
  long lStack_130;
  char cStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  uint *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  int iVar6;
  uint uVar7;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10aa62268;
  puStack_78 = &UNK_10f68ba7e;
  uStack_70 = 0x19;
  FUN_10a57077c(param_5,&puStack_78,&pcStack_68,100,param_6);
  pppuVar8 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  plVar10 = alStack_290;
  iVar5 = (int)alStack_290;
  iVar6 = (int)alStack_290;
  uVar7 = (uint)alStack_290;
  ppuVar11 = pppuVar8[0x33];
  if (ppuVar11 != (undefined **)0x0) goto LAB_10aa205a4;
  puVar9 = (undefined8 *)0x68;
  __Znwm();
  puVar9[5] = 0;
  puVar9[4] = 0;
  puVar9[7] = 0;
  puVar9[6] = 0;
  uVar18 = 0;
  puVar9[1] = 0;
  *puVar9 = 0;
  puVar9[3] = 0x3f80000000000000;
  puVar9[2] = 0;
  *(undefined1 *)(puVar9 + 7) = 0;
  puVar9[6] = 0;
  puVar9[9] = 0;
  puVar9[8] = 0;
  puVar9[0xb] = 0;
  puVar9[10] = 0;
  puVar9[0xc] = 0;
  func_0x00010aa6222c(pppuVar8 + 0x33,puVar9);
  FUN_10a08d2e0(&uStack_120,pppuVar8 + 0x2c);
  FUN_10a0f6e20(alStack_290,&uStack_120,0);
  FUN_10a0f70fc(alStack_290,&PTR_DAT_110c390f8);
  if (plVar10 != (long *)0x0) {
    FUN_10a0f7298(alStack_290,&PTR_DAT_110c390f8);
    ppuVar11 = pppuVar8[0x33];
    uVar15 = uRam0000000113835560;
    (**(code **)(alStack_290[0] + 0x48))(alStack_290,&PTR_DAT_110c39ca8);
    *(undefined4 *)ppuVar11 = uVar15;
    (**(code **)(alStack_290[0] + 0xf0))(alStack_290,&PTR_DAT_110c3b818,0x113835564);
    *(undefined4 *)((long)ppuVar11 + 4) = uVar15;
    *(undefined4 *)(ppuVar11 + 1) = uVar18;
    *(undefined4 *)((long)ppuVar11 + 0xc) = param_3;
    (**(code **)(alStack_290[0] + 400))(alStack_290,&PTR_DAT_110c39cc8,0x113835570);
    *(undefined4 *)(ppuVar11 + 2) = uVar15;
    *(undefined4 *)((long)ppuVar11 + 0x14) = uVar18;
    *(undefined4 *)(ppuVar11 + 3) = param_3;
    *(undefined4 *)((long)ppuVar11 + 0x1c) = param_4;
    (**(code **)(alStack_290[0] + 0xf0))(alStack_290,&PTR_DAT_110c39ce8,0x113835580);
    *(undefined4 *)(ppuVar11 + 4) = uVar15;
    *(undefined4 *)((long)ppuVar11 + 0x24) = uVar18;
    *(undefined4 *)(ppuVar11 + 5) = param_3;
    FUN_10a0f7508(alStack_290);
  }
  ppuVar11 = pppuVar8[0x33];
  ppuVar12 = ppuVar11 + 6;
  *ppuVar12 = (undefined *)0x0;
  *(undefined1 *)(ppuVar11 + 7) = 0;
  FUN_10aa1accc(ppuVar12);
  puStack_118 = (undefined *)((ulong)puStack_118 & 0xffffffffffffff00);
  uStack_120 = (undefined *)0x0;
  uVar15 = 0;
  puStack_108 = (uint *)0x0;
  puStack_110 = (undefined *)0x0;
  uStack_f8 = (undefined *)0x0;
  uStack_100 = (undefined *)0x0;
  uStack_f0 = (undefined *)0x0;
  (**(code **)(alStack_290[0] + 200))(alStack_290,&PTR_DAT_110c38b60);
  uStack_120 = (undefined *)CONCAT44(uStack_120._4_4_,iVar5);
  (**(code **)(alStack_290[0] + 200))(alStack_290,&PTR_DAT_110c38b80);
  uStack_120 = (undefined *)CONCAT44(iVar6,(int)uStack_120);
  (**(code **)(alStack_290[0] + 200))(alStack_290,&PTR_DAT_110c38ba0);
  puStack_118 = (undefined *)CONCAT71(puStack_118._1_7_,(char)uVar7);
  (**(code **)(alStack_290[0] + 0xe8))(alStack_290,&PTR_DAT_110c38bc0);
  uStack_100 = (undefined *)CONCAT44(uVar18,uVar15);
  uStack_f8 = (undefined *)CONCAT44(uStack_f8._4_4_,param_3);
  (**(code **)(alStack_290[0] + 0xe8))(alStack_290,&PTR_DAT_110c38be0);
  uStack_f8 = (undefined *)CONCAT44(uVar15,(undefined4)uStack_f8);
  uStack_f0 = (undefined *)CONCAT44(param_3,uVar18);
  if ((iVar5 != 0) && (iVar6 != 0)) {
    if ((1 < (uVar7 & 0xff) - 1) && ((uVar7 & 0xff) != 4)) {
      FUN_10a00946c(&UNK_10f68a88d);
      goto LAB_10aa20628;
    }
    func_0x00010aa1ad08(&uStack_120);
    uVar7 = uStack_120._4_4_;
    uVar13 = (ulong)uStack_120._4_4_;
    (**(code **)(alStack_290[0] + 0x1d8))(&uStack_138,alStack_290,&PTR_DAT_110c38c00);
    if ((cStack_128 != '\x01') || (lStack_130 != uVar13 * 0xc)) {
      FUN_10a00946c(&UNK_10f68a8b8);
      goto LAB_10aa20628;
    }
    _memcpy(puStack_110,uStack_138);
    iVar5 = (int)uStack_120;
    uVar13 = (ulong)uStack_120 & 0xffffffff;
    cVar2 = (char)puStack_118;
    uVar14 = (ulong)puStack_118 & 0xff;
    (**(code **)(alStack_290[0] + 0x1d8))(&uStack_150,alStack_290,&PTR_DAT_110c38c20);
    puVar3 = puStack_108;
    if ((cStack_140 != '\x01') || (uVar13 = uVar13 * 3, lStack_148 != uVar13 * uVar14)) {
      FUN_10a00946c(&UNK_10f68a8e5);
      goto LAB_10aa20628;
    }
    _memcpy(puStack_108,uStack_150);
    if (cVar2 == '\x04') {
      if (iVar5 == 0) {
LAB_10aa20540:
        *(undefined1 *)(ppuVar11 + 7) = 0;
        *ppuVar12 = (undefined *)0x0;
        FUN_10aa1accc(ppuVar12);
        ppuVar11[7] = puStack_118;
        *ppuVar12 = uStack_120;
        ppuVar11[9] = (undefined *)puStack_108;
        ppuVar11[8] = puStack_110;
        ppuVar11[0xb] = uStack_f8;
        ppuVar11[10] = uStack_100;
        ppuVar11[0xc] = uStack_f0;
        puStack_118 = (undefined *)0x0;
        uStack_120 = (undefined *)0x0;
        puStack_108 = (uint *)0x0;
        puStack_110 = (undefined *)0x0;
        uStack_f8 = (undefined *)0x0;
        uStack_100 = (undefined *)0x0;
        uStack_f0 = (undefined *)0x0;
        goto LAB_10aa20578;
      }
      if (*puVar3 < uVar7) {
        uVar14 = 0;
        do {
          if (uVar13 - 1 == uVar14) goto LAB_10aa20540;
          lVar1 = uVar14 + 1;
          uVar14 = uVar14 + 1;
        } while (puVar3[lVar1] < uVar7);
LAB_10aa20538:
        if (uVar13 <= uVar14) goto LAB_10aa20540;
      }
    }
    else if (cVar2 == '\x02') {
      if (iVar5 == 0) goto LAB_10aa20540;
      if ((ushort)*puVar3 < uVar7) {
        uVar14 = 0;
        do {
          if (uVar13 - 1 == uVar14) goto LAB_10aa20540;
          lVar1 = uVar14 * 2;
          uVar14 = uVar14 + 1;
        } while (*(ushort *)((long)puVar3 + lVar1 + 2) < uVar7);
        goto LAB_10aa20538;
      }
    }
    else if (cVar2 == '\x01') {
      if (iVar5 == 0) goto LAB_10aa20540;
      if ((byte)*puVar3 < uVar7) {
        uVar14 = 0;
        do {
          if (uVar13 - 1 == uVar14) goto LAB_10aa20540;
          lVar1 = uVar14 + 1;
          uVar14 = uVar14 + 1;
        } while (*(byte *)((long)puVar3 + lVar1) < uVar7);
        goto LAB_10aa20538;
      }
    }
    FUN_10a00946c(&UNK_10f68a910);
LAB_10aa20628:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa2062c);
    (*pcVar4)();
  }
LAB_10aa20578:
  FUN_10aa1accc(&uStack_120);
  ppuVar11 = pppuVar8[0x33];
  if (*(char *)(ppuVar11 + 7) == '\0') {
    *(undefined4 *)(ppuVar11 + 6) = 0;
    *(undefined1 *)(ppuVar11 + 7) = 1;
  }
  func_0x00010a0f618c(alStack_290);
  ppuVar11 = pppuVar8[0x33];
LAB_10aa205a4:
  puVar16 = *ppuVar11;
  puVar20 = ppuVar11[3];
  puVar19 = ppuVar11[2];
  extraout_x8[1] = ppuVar11[1];
  *extraout_x8 = puVar16;
  extraout_x8[3] = puVar20;
  extraout_x8[2] = puVar19;
  uVar17 = *(undefined8 *)((long)ppuVar11 + 0x1c);
  *(undefined8 *)((long)extraout_x8 + 0x24) = *(undefined8 *)((long)ppuVar11 + 0x24);
  *(undefined8 *)((long)extraout_x8 + 0x1c) = uVar17;
  puVar16 = ppuVar11[6];
  puVar20 = ppuVar11[9];
  puVar19 = ppuVar11[8];
  extraout_x8[7] = ppuVar11[7];
  extraout_x8[6] = puVar16;
  extraout_x8[9] = puVar20;
  extraout_x8[8] = puVar19;
  puVar16 = ppuVar11[10];
  extraout_x8[0xb] = ppuVar11[0xb];
  extraout_x8[10] = puVar16;
  extraout_x8[0xc] = ppuVar11[0xc];
  return;
}



/* Entry: 10aa20188; end: 10aa20673;  */

/* WARNING: Removing unreachable block (ram,0x00010aa20218) */

void FUN_10aa20188(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6)

{
  long lVar1;
  char cVar2;
  uint *puVar3;
  code *pcVar4;
  int iVar5;
  long *plVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long alStack_210 [40];
  undefined8 uStack_d0;
  long lStack_c8;
  char cStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  char cStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  uint *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iVar6;
  uint uVar7;
  
  plVar8 = alStack_210;
  iVar5 = (int)alStack_210;
  iVar6 = (int)alStack_210;
  uVar7 = (uint)alStack_210;
  puVar9 = *(undefined8 **)(param_6 + 0x198);
  if (puVar9 != (undefined8 *)0x0) goto LAB_10aa205a4;
  puVar9 = (undefined8 *)0x68;
  __Znwm();
  puVar9[5] = 0;
  puVar9[4] = 0;
  puVar9[7] = 0;
  puVar9[6] = 0;
  uVar17 = 0;
  puVar9[1] = 0;
  *puVar9 = 0;
  puVar9[3] = 0x3f80000000000000;
  puVar9[2] = 0;
  *(undefined1 *)(puVar9 + 7) = 0;
  puVar9[6] = 0;
  puVar9[9] = 0;
  puVar9[8] = 0;
  puVar9[0xb] = 0;
  puVar9[10] = 0;
  puVar9[0xc] = 0;
  func_0x00010aa6222c(param_6 + 0x198,puVar9);
  FUN_10a08d2e0(&uStack_a0,param_6 + 0x160);
  FUN_10a0f6e20(alStack_210,&uStack_a0,0);
  FUN_10a0f70fc(alStack_210,&PTR_DAT_110c390f8);
  if (plVar8 != (long *)0x0) {
    FUN_10a0f7298(alStack_210,&PTR_DAT_110c390f8);
    puVar10 = *(undefined4 **)(param_6 + 0x198);
    uVar15 = uRam0000000113835560;
    (**(code **)(alStack_210[0] + 0x48))(alStack_210,&PTR_DAT_110c39ca8);
    *puVar10 = uVar15;
    (**(code **)(alStack_210[0] + 0xf0))(alStack_210,&PTR_DAT_110c3b818,0x113835564);
    puVar10[1] = uVar15;
    puVar10[2] = uVar17;
    puVar10[3] = param_4;
    (**(code **)(alStack_210[0] + 400))(alStack_210,&PTR_DAT_110c39cc8,0x113835570);
    puVar10[4] = uVar15;
    puVar10[5] = uVar17;
    puVar10[6] = param_4;
    puVar10[7] = param_5;
    (**(code **)(alStack_210[0] + 0xf0))(alStack_210,&PTR_DAT_110c39ce8,0x113835580);
    puVar10[8] = uVar15;
    puVar10[9] = uVar17;
    puVar10[10] = param_4;
    FUN_10a0f7508(alStack_210);
  }
  lVar11 = *(long *)(param_6 + 0x198);
  puVar12 = (ulong *)(lVar11 + 0x30);
  *puVar12 = 0;
  *(undefined1 *)(lVar11 + 0x38) = 0;
  FUN_10aa1accc(puVar12);
  uStack_98 = uStack_98 & 0xffffffffffffff00;
  uStack_a0 = 0;
  uVar15 = 0;
  puStack_88 = (uint *)0x0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  (**(code **)(alStack_210[0] + 200))(alStack_210,&PTR_DAT_110c38b60);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar5);
  (**(code **)(alStack_210[0] + 200))(alStack_210,&PTR_DAT_110c38b80);
  uStack_a0 = CONCAT44(iVar6,(int)uStack_a0);
  (**(code **)(alStack_210[0] + 200))(alStack_210,&PTR_DAT_110c38ba0);
  uStack_98 = CONCAT71(uStack_98._1_7_,(char)uVar7);
  (**(code **)(alStack_210[0] + 0xe8))(alStack_210,&PTR_DAT_110c38bc0);
  uStack_80 = CONCAT44(uVar17,uVar15);
  uStack_78 = CONCAT44(uStack_78._4_4_,param_4);
  (**(code **)(alStack_210[0] + 0xe8))(alStack_210,&PTR_DAT_110c38be0);
  uStack_78 = CONCAT44(uVar15,(undefined4)uStack_78);
  uStack_70 = CONCAT44(param_4,uVar17);
  if ((iVar5 != 0) && (iVar6 != 0)) {
    if ((1 < (uVar7 & 0xff) - 1) && ((uVar7 & 0xff) != 4)) {
      FUN_10a00946c(&UNK_10f68a88d);
      goto LAB_10aa20628;
    }
    func_0x00010aa1ad08(&uStack_a0);
    uVar7 = uStack_a0._4_4_;
    uVar13 = (ulong)uStack_a0._4_4_;
    (**(code **)(alStack_210[0] + 0x1d8))(&uStack_b8,alStack_210,&PTR_DAT_110c38c00);
    if ((cStack_a8 != '\x01') || (lStack_b0 != uVar13 * 0xc)) {
      FUN_10a00946c(&UNK_10f68a8b8);
      goto LAB_10aa20628;
    }
    _memcpy(uStack_90,uStack_b8);
    iVar5 = (int)uStack_a0;
    uVar13 = uStack_a0 & 0xffffffff;
    cVar2 = (char)uStack_98;
    uVar14 = uStack_98 & 0xff;
    (**(code **)(alStack_210[0] + 0x1d8))(&uStack_d0,alStack_210,&PTR_DAT_110c38c20);
    puVar3 = puStack_88;
    if ((cStack_c0 != '\x01') || (uVar13 = uVar13 * 3, lStack_c8 != uVar13 * uVar14)) {
      FUN_10a00946c(&UNK_10f68a8e5);
      goto LAB_10aa20628;
    }
    _memcpy(puStack_88,uStack_d0);
    if (cVar2 == '\x04') {
      if (iVar5 == 0) {
LAB_10aa20540:
        *(undefined1 *)(lVar11 + 0x38) = 0;
        *puVar12 = 0;
        FUN_10aa1accc(puVar12);
        *(ulong *)(lVar11 + 0x38) = uStack_98;
        *puVar12 = uStack_a0;
        *(uint **)(lVar11 + 0x48) = puStack_88;
        *(undefined8 *)(lVar11 + 0x40) = uStack_90;
        *(undefined8 *)(lVar11 + 0x58) = uStack_78;
        *(undefined8 *)(lVar11 + 0x50) = uStack_80;
        *(undefined8 *)(lVar11 + 0x60) = uStack_70;
        uStack_98 = 0;
        uStack_a0 = 0;
        puStack_88 = (uint *)0x0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_70 = 0;
        goto LAB_10aa20578;
      }
      if (*puVar3 < uVar7) {
        uVar14 = 0;
        do {
          if (uVar13 - 1 == uVar14) goto LAB_10aa20540;
          lVar1 = uVar14 + 1;
          uVar14 = uVar14 + 1;
        } while (puVar3[lVar1] < uVar7);
LAB_10aa20538:
        if (uVar13 <= uVar14) goto LAB_10aa20540;
      }
    }
    else if (cVar2 == '\x02') {
      if (iVar5 == 0) goto LAB_10aa20540;
      if ((ushort)*puVar3 < uVar7) {
        uVar14 = 0;
        do {
          if (uVar13 - 1 == uVar14) goto LAB_10aa20540;
          lVar1 = uVar14 * 2;
          uVar14 = uVar14 + 1;
        } while (*(ushort *)((long)puVar3 + lVar1 + 2) < uVar7);
        goto LAB_10aa20538;
      }
    }
    else if (cVar2 == '\x01') {
      if (iVar5 == 0) goto LAB_10aa20540;
      if ((byte)*puVar3 < uVar7) {
        uVar14 = 0;
        do {
          if (uVar13 - 1 == uVar14) goto LAB_10aa20540;
          lVar1 = uVar14 + 1;
          uVar14 = uVar14 + 1;
        } while (*(byte *)((long)puVar3 + lVar1) < uVar7);
        goto LAB_10aa20538;
      }
    }
    FUN_10a00946c(&UNK_10f68a910);
LAB_10aa20628:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa2062c);
    (*pcVar4)();
  }
LAB_10aa20578:
  FUN_10aa1accc(&uStack_a0);
  lVar11 = *(long *)(param_6 + 0x198);
  if (*(char *)(lVar11 + 0x38) == '\0') {
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined1 *)(lVar11 + 0x38) = 1;
  }
  func_0x00010a0f618c(alStack_210);
  puVar9 = *(undefined8 **)(param_6 + 0x198);
LAB_10aa205a4:
  uVar16 = *puVar9;
  uVar19 = puVar9[3];
  uVar18 = puVar9[2];
  param_1[1] = puVar9[1];
  *param_1 = uVar16;
  param_1[3] = uVar19;
  param_1[2] = uVar18;
  uVar16 = *(undefined8 *)((long)puVar9 + 0x1c);
  *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)((long)puVar9 + 0x24);
  *(undefined8 *)((long)param_1 + 0x1c) = uVar16;
  uVar16 = puVar9[6];
  uVar19 = puVar9[9];
  uVar18 = puVar9[8];
  param_1[7] = puVar9[7];
  param_1[6] = uVar16;
  param_1[9] = uVar19;
  param_1[8] = uVar18;
  uVar16 = puVar9[10];
  param_1[0xb] = puVar9[0xb];
  param_1[10] = uVar16;
  param_1[0xc] = puVar9[0xc];
  return;
}



/* Entry: 10aa20674; end: 10aa2069f;  */

void FUN_10aa20674(void)

{
  return;
}



/* Entry: 10aa206a0; end: 10aa20703;  */

void FUN_10aa206a0(undefined8 param_1)

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
  puStack_40 = &UNK_10f68a4a1;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0xdd;
  uStack_18 = 0xffffffff;
  FUN_10aa20704(param_1,&uStack_58);
  FUN_10aa624c8();
  return;
}



/* Entry: 10aa20704; end: 10aa207db;  */

/* WARNING: Removing unreachable block (ram,0x00010aa2079c) */

undefined1  [16] FUN_10aa20704(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f68bace,0x1a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aa623cc(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa207dc; end: 10aa21507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aa207dc(undefined8 *param_1,long *param_2,undefined8 param_3,float *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  code *pcVar9;
  bool bVar10;
  long *plVar11;
  float *pfVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  float **ppfVar18;
  float *pfVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  float *pfVar24;
  undefined8 *puVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar32;
  undefined1 auVar31 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  int iVar38;
  int iVar41;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar54;
  undefined8 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  float fVar71;
  float fStack_160;
  float fStack_15c;
  float *pfStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  float fStack_130;
  float fStack_12c;
  undefined8 uStack_128;
  float fStack_120;
  float fStack_11c;
  undefined4 uStack_118;
  undefined8 uStack_114;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  float *pfStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  
  if ((*(byte *)(param_2 + 0x1c) & 1) == 0) {
    pfStack_f0 = (float *)0x0;
    plStack_e8 = (long *)0x0;
    plVar11 = (long *)param_2[0x2b];
    if ((((plVar11 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_e8 = plVar11, plVar11 == (long *)0x0))
        || (pfVar12 = (float *)param_2[0x2a], pfStack_f0 = pfVar12, pfVar12 == (float *)0x0)) ||
       (___dynamic_cast(pfVar12,&PTR_DAT_110c3c9b0,&PTR_DAT_110c3cb98,0), pfVar12 == (float *)0x0))
    {
      ppfVar18 = (float **)&uStack_138;
    }
    else {
      uStack_138._0_4_ = SUB84(pfVar12,0);
      uStack_138._4_4_ = (float)((ulong)pfVar12 >> 0x20);
      fStack_130 = SUB84(plVar11,0);
      fStack_12c = (float)((ulong)plVar11 >> 0x20);
      ppfVar18 = &pfStack_f0;
    }
    *ppfVar18 = (float *)0x0;
    ppfVar18[1] = (float *)0x0;
    plVar11 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar1 = plStack_e8 + 1;
      do {
        lVar20 = *plVar1;
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = lVar20 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    pfVar12 = (float *)CONCAT44(uStack_138._4_4_,(undefined4)uStack_138);
    uStack_138 = pfVar12;
    if (pfVar12 == (float *)0x0) {
      if ((char)param_2[0x24] == '\0') {
        (**(code **)(*param_2 + 200))(&pfStack_f0,param_2);
        param_2[0x29] = lStack_90;
        param_2[0x1e] = (long)plStack_e8;
        param_2[0x1d] = (long)pfStack_f0;
        param_2[0x20] = lStack_d8;
        param_2[0x1f] = lStack_e0;
        param_2[0x26] = lStack_a8;
        param_2[0x25] = lStack_b0;
        param_2[0x28] = lStack_98;
        param_2[0x27] = lStack_a0;
        param_2[0x22] = lStack_c8;
        param_2[0x21] = lStack_d0;
        param_2[0x24] = lStack_b8;
        param_2[0x23] = lStack_c0;
      }
      if ((int)param_2[0x23] == 0) {
        puVar13 = (undefined8 *)0x80;
        __Znwm();
        puVar13[8] = &PTR_DAT_110b13c88;
        uVar28 = uRam0000000113835570;
        uVar55 = uRam0000000113835560;
        uVar36 = CONCAT44(uRam000000011383557c,uRam0000000113835578);
        puVar13[3] = uRam0000000113835568;
        puVar13[2] = uVar55;
        puVar13[5] = uVar36;
        puVar13[4] = uVar28;
        uVar36 = CONCAT44(uRam0000000113835580,uRam000000011383557c);
        *(undefined8 *)((long)puVar13 + 0x34) = uRam0000000113835584;
        *(undefined8 *)((long)puVar13 + 0x2c) = uVar36;
        *puVar13 = &PTR_DAT_110c3b848;
        puVar13[1] = puVar13 + 8;
        puVar13[10] = 0;
        *(undefined4 *)(puVar13 + 0xc) = 0;
        *(undefined4 *)(puVar13 + 9) = 0x1b;
        puVar13[0xb] = 0xffffffff00000000;
        plVar11 = (long *)CONCAT44(fStack_12c,fStack_130);
        *param_1 = puVar13;
        if (plVar11 == (long *)0x0) {
          return;
        }
        plVar1 = plVar11 + 1;
        do {
          lVar20 = *plVar1;
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar20 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar20 != 0) {
          return;
        }
        (**(code **)(*plVar11 + 0x10))(plVar11);
LAB_10aa213b4:
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        return;
      }
      func_0x00010aa625dc(&pfStack_f0,param_2);
      puVar13 = (undefined8 *)0xf0;
      __Znwm();
      puVar13[1] = 0;
      puVar13[2] = 0;
      pfVar12 = (float *)(puVar13 + 4);
      *(undefined ***)pfVar12 = &PTR_DAT_110c3cb80;
      *puVar13 = &PTR_FUN_110c3cb30;
      puVar13[6] = plStack_e8;
      puVar13[5] = pfStack_f0;
      pfStack_f0 = (float *)0x0;
      plStack_e8 = (long *)0x0;
      puVar13[0x1b] = 0;
      puVar13[0x1c] = 0;
      puVar13[0x1d] = 0;
      uVar55 = uRam0000000113835598;
      uVar36 = uRam0000000113835590;
      puVar13[0x11] = uRam0000000113835598;
      puVar13[0x10] = uVar36;
      puVar13[0x13] = uVar55;
      puVar13[0x12] = uVar36;
      puVar13[0x15] = uVar55;
      puVar13[0x14] = uVar36;
      puVar13[0x17] = uVar55;
      puVar13[0x16] = uVar36;
      puVar13[0x19] = uVar55;
      puVar13[0x18] = uVar36;
      *(undefined4 *)(puVar13 + 0x1a) = 0;
      puVar13[0xe] = param_2[0x29];
      lVar17 = param_2[0x25];
      lVar20 = param_2[0x27];
      lVar14 = param_2[0x28];
      puVar13[0xb] = param_2[0x26];
      puVar13[10] = lVar17;
      puVar13[0xd] = lVar14;
      puVar13[0xc] = lVar20;
      lVar20 = param_2[0x23];
      puVar13[9] = param_2[0x24];
      puVar13[8] = lVar20;
      FUN_10aa1e038(puVar13 + 0x10,puVar13 + 8);
      plVar11 = (long *)CONCAT44(fStack_12c,fStack_130);
      fStack_130 = SUB84(puVar13,0);
      fStack_12c = (float)((ulong)puVar13 >> 0x20);
      uStack_138 = pfVar12;
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 1;
        do {
          lVar20 = *plVar1;
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar20 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      plVar11 = plStack_e8;
      pfVar12 = uStack_138;
      if (plStack_e8 != (long *)0x0) {
        plVar1 = plStack_e8 + 1;
        do {
          lVar20 = *plVar1;
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar20 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          pfVar12 = uStack_138;
        }
      }
      lVar20 = CONCAT44(fStack_12c,fStack_130);
      if (lVar20 != 0) {
        plVar11 = (long *)(lVar20 + 0x10);
        do {
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar10) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar14 = param_2[0x2b];
      param_2[0x2a] = (long)pfVar12;
      param_2[0x2b] = lVar20;
      uStack_138 = pfVar12;
      if (lVar14 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    puVar13 = (undefined8 *)0xa0;
    __Znwm();
    puVar13[3] = 0;
    puVar13[2] = 0;
    puVar13[5] = 0x3f80000000000000;
    puVar13[4] = 0;
    puVar13[6] = 0;
    *(undefined4 *)(puVar13 + 7) = 0;
    *puVar13 = &PTR_DAT_110c3cbc0;
    puVar13[1] = puVar13 + 10;
    puVar13[8] = pfVar12;
    puVar13[9] = CONCAT44(fStack_12c,fStack_130);
    fVar26 = param_4[2];
    puVar13[0xc] = 0;
    *(undefined4 *)(puVar13 + 0xe) = 0;
    fVar26 = fVar26 * 0.01;
    fVar30 = (float)*(undefined8 *)param_4 * 0.01;
    fVar32 = (float)((ulong)*(undefined8 *)param_4 >> 0x20) * 0.01;
    uVar36 = NEON_fmov(0x3f800000,4);
    fVar33 = (float)uVar36 / fVar30;
    fVar37 = (float)((ulong)uVar36 >> 0x20) / fVar32;
    iVar38 = -(uint)(fVar30 == 0.0);
    iVar41 = -(uint)(fVar32 == 0.0);
    puVar13[10] = &PTR_DAT_110c39da8;
    puVar13[0xf] = pfVar12 + 8;
    fVar27 = 0.0;
    if (fVar26 != 0.0) {
      fVar27 = 1.0 / fVar26;
    }
    *(undefined4 *)(puVar13 + 0xb) = 0x17;
    puVar13[0x11] = (ulong)(uint)fVar26;
    puVar13[0x10] = CONCAT44(fVar32,fVar30);
    puVar13[0x13] = (ulong)(uint)fVar27;
    puVar13[0x12] =
         CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                  CONCAT16((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10),
                           CONCAT15((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar41 >> 8),
                                    CONCAT14(SUB41(fVar37,0) & ~(byte)iVar41,
                                             CONCAT13((byte)((uint)fVar33 >> 0x18) &
                                                      ~(byte)((uint)iVar38 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar33 >> 0x10) &
                                                               ~(byte)((uint)iVar38 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar33 >> 8) &
                                                                        ~(byte)((uint)iVar38 >> 8),
                                                                        SUB41(fVar33,0) &
                                                                        ~(byte)iVar38)))))));
    puVar13[0xd] = 0xffffffff00000000;
    *param_1 = puVar13;
  }
  else {
    pfStack_f0 = (float *)0x0;
    plStack_e8 = (long *)0x0;
    plVar11 = (long *)param_2[0x2b];
    if ((((plVar11 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_e8 = plVar11, plVar11 == (long *)0x0))
        || (pfVar12 = (float *)param_2[0x2a], pfStack_f0 = pfVar12, pfVar12 == (float *)0x0)) ||
       (___dynamic_cast(pfVar12,&PTR_DAT_110c3c9b0,&PTR_DAT_110c3c9c0,0), pfVar12 == (float *)0x0))
    {
      ppfVar18 = &pfStack_150;
    }
    else {
      ppfVar18 = &pfStack_f0;
      pfStack_150 = pfVar12;
      plStack_148 = plVar11;
    }
    *ppfVar18 = (float *)0x0;
    ppfVar18[1] = (float *)0x0;
    plVar11 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar1 = plStack_e8 + 1;
      do {
        lVar20 = *plVar1;
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = lVar20 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    pfVar12 = pfStack_150;
    if (pfStack_150 == (float *)0x0) {
      if ((char)param_2[0x24] == '\0') {
        (**(code **)(*param_2 + 200))(&pfStack_f0,param_2);
        param_2[0x29] = lStack_90;
        param_2[0x1e] = (long)plStack_e8;
        param_2[0x1d] = (long)pfStack_f0;
        param_2[0x20] = lStack_d8;
        param_2[0x1f] = lStack_e0;
        param_2[0x26] = lStack_a8;
        param_2[0x25] = lStack_b0;
        param_2[0x28] = lStack_98;
        param_2[0x27] = lStack_a0;
        param_2[0x22] = lStack_c8;
        param_2[0x21] = lStack_d0;
        param_2[0x24] = lStack_b8;
        param_2[0x23] = lStack_c0;
      }
      if ((int)param_2[0x23] == 0) {
        puVar13 = (undefined8 *)0x80;
        __Znwm();
        plVar11 = plStack_148;
        puVar13[8] = &PTR_DAT_110b13c88;
        uVar28 = uRam0000000113835570;
        uVar55 = uRam0000000113835560;
        uVar36 = CONCAT44(uRam000000011383557c,uRam0000000113835578);
        puVar13[3] = uRam0000000113835568;
        puVar13[2] = uVar55;
        puVar13[5] = uVar36;
        puVar13[4] = uVar28;
        uVar36 = CONCAT44(uRam0000000113835580,uRam000000011383557c);
        *(undefined8 *)((long)puVar13 + 0x34) = uRam0000000113835584;
        *(undefined8 *)((long)puVar13 + 0x2c) = uVar36;
        *puVar13 = &PTR_DAT_110c3b848;
        puVar13[1] = puVar13 + 8;
        puVar13[10] = 0;
        *(undefined4 *)(puVar13 + 0xc) = 0;
        *(undefined4 *)(puVar13 + 9) = 0x1b;
        puVar13[0xb] = 0xffffffff00000000;
        *param_1 = puVar13;
        if (plStack_148 == (long *)0x0) {
          return;
        }
        plVar1 = plStack_148 + 1;
        do {
          lVar20 = *plVar1;
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar20 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar20 != 0) {
          return;
        }
        (**(code **)(*plStack_148 + 0x10))(plStack_148);
        goto LAB_10aa213b4;
      }
      func_0x00010aa625dc(&pfStack_f0,param_2);
      plVar15 = (long *)0x80;
      __Znwm();
      plVar1 = plStack_e8;
      pfVar12 = pfStack_f0;
      plVar11 = plStack_148;
      plVar15[1] = 0;
      plVar15[2] = 0;
      *plVar15 = (long)&PTR_FUN_110c3c9e8;
      pfStack_f0 = (float *)0x0;
      plStack_e8 = (long *)0x0;
      pfStack_150 = (float *)(plVar15 + 3);
      *(undefined ***)pfStack_150 = &PTR_FUN_110c3ca38;
      lVar20 = param_2[0x23];
      lVar14 = param_2[0x24];
      lVar17 = param_2[0x25];
      lVar8 = param_2[0x26];
      plVar15[5] = (long)plVar1;
      plVar15[4] = (long)pfVar12;
      plVar15[7] = lVar14;
      plVar15[6] = lVar20;
      lVar14 = param_2[0x28];
      lVar20 = param_2[0x27];
      plVar15[9] = lVar8;
      plVar15[8] = lVar17;
      plVar15[0xb] = lVar14;
      plVar15[10] = lVar20;
      plVar15[0xc] = param_2[0x29];
      plVar15[0xd] = 0;
      plVar15[0xe] = 0;
      plVar15[0xf] = 0;
      if (plStack_148 != (long *)0x0) {
        plVar1 = plStack_148 + 1;
        do {
          lVar20 = *plVar1;
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar20 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar20 == 0) {
          lVar20 = *plStack_148;
          plStack_148 = plVar15;
          (**(code **)(lVar20 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          plVar15 = plStack_148;
        }
      }
      plStack_148 = plVar15;
      plVar11 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        plVar1 = plStack_e8 + 1;
        do {
          lVar20 = *plVar1;
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar20 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      pfVar12 = pfStack_150;
      if (plStack_148 != (long *)0x0) {
        plVar11 = plStack_148 + 2;
        do {
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar10) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar20 = param_2[0x2b];
      param_2[0x2a] = (long)pfStack_150;
      param_2[0x2b] = (long)plStack_148;
      if (lVar20 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    lVar20 = *(long *)(pfVar12 + 0x14);
    lVar14 = *(long *)(pfVar12 + 0x16) - lVar20;
    if (lVar14 != 0) {
      uVar23 = 0;
      do {
        if ((ulong)(lVar14 >> 4) <= uVar23) goto LAB_10aa21418;
        puVar13 = (undefined8 *)(lVar20 + uVar23 * 0x10);
        pfStack_f0 = (float *)0x0;
        plStack_e8 = (long *)0x0;
        plVar11 = (long *)puVar13[1];
        if (((plVar11 == (long *)0x0) ||
            (__ZNSt3__119__shared_weak_count4lockEv(), plStack_e8 = plVar11, plVar11 == (long *)0x0)
            ) || (pfVar24 = (float *)*puVar13, pfStack_f0 = pfVar24, pfVar24 == (float *)0x0)) {
          plVar11 = plStack_e8;
          lVar20 = *(long *)(pfVar12 + 0x16);
          if (*(long *)(pfVar12 + 0x14) == lVar20) goto LAB_10aa21418;
          if (*(long *)(lVar20 + -8) != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          *(long *)(pfVar12 + 0x16) = lVar20 + -0x10;
        }
        else {
          iVar38 = 0;
          fVar27 = *pfVar24 - *param_4;
          fVar26 = pfVar24[1] - param_4[1];
          if (fVar27 < 0.0) {
            fVar27 = -fVar27;
          }
          if (fVar26 < 0.0) {
            fVar26 = -fVar26;
          }
          while ((fVar30 = fVar26, iVar38 == 1 || (fVar30 = fVar27, iVar38 != 2))) {
            bVar10 = fVar30 < 0.001;
            while (iVar38 = iVar38 + 1, !bVar10) {
              if (iVar38 == 2) goto LAB_10aa20b20;
              bVar10 = false;
            }
          }
          if (ABS(pfVar24[2] - param_4[2]) < 0.001) {
            puVar13 = (undefined8 *)0x60;
            __Znwm();
            puVar13[1] = pfVar24 + 0x1c;
            uVar29 = *(undefined8 *)(pfVar24 + 5);
            uVar28 = *(undefined8 *)(pfVar24 + 3);
            uVar36 = *(undefined8 *)(pfVar24 + 7);
            uVar55 = *(undefined8 *)(pfVar24 + 9);
            lVar20 = *(long *)(pfVar24 + 10);
            *(long *)((long)puVar13 + 0x34) = *(long *)(pfVar24 + 0xc);
            *(long *)((long)puVar13 + 0x2c) = lVar20;
            puVar13[3] = uVar29;
            puVar13[2] = uVar28;
            puVar13[5] = uVar55;
            puVar13[4] = uVar36;
            *puVar13 = &PTR_DAT_110c3ca88;
            puVar13[9] = plStack_148;
            puVar13[8] = pfStack_150;
            puVar13[10] = pfVar24;
            puVar13[0xb] = plVar11;
            uStack_138._0_4_ = 0;
            uStack_138._4_4_ = 0.0;
            *param_1 = puVar13;
            func_0x00010aa62d88(&uStack_138);
            return;
          }
LAB_10aa20b20:
          uVar23 = uVar23 + 1;
        }
        if (plVar11 != (long *)0x0) {
          plVar1 = plVar11 + 1;
          do {
            lVar20 = *plVar1;
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *plVar1 = lVar20 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        lVar20 = *(long *)(pfVar12 + 0x14);
        lVar14 = *(long *)(pfVar12 + 0x16) - lVar20;
      } while (uVar23 != lVar14 >> 4);
    }
    FUN_10aa2bbd4(&uStack_138,*(long *)(pfVar12 + 0xc),(ulong)(uint)pfVar12[6] * 3,
                  *(long *)(pfVar12 + 10),param_4);
    fVar37 = fStack_11c;
    fVar33 = fStack_120;
    uVar36 = uStack_128;
    fVar32 = fStack_12c;
    fVar30 = fStack_130;
    fVar26 = uStack_138._4_4_;
    uVar55 = *(undefined8 *)param_4;
    fVar57 = param_4[2];
    lVar20 = *(long *)(pfVar12 + 10);
    fVar27 = pfVar12[7];
    uVar23 = (ulong)(uint)fVar27;
    FUN_10a132380(&puStack_108,uVar23 * 3);
    fVar56 = (float)((ulong)uVar55 >> 0x20);
    if (fVar27 == 0.0) {
      fVar27 = -INFINITY;
      fVar26 = -INFINITY;
      fVar30 = -INFINITY;
    }
    else {
      fStack_160 = (float)uVar36;
      fStack_15c = (float)((ulong)uVar36 >> 0x20);
      fVar34 = 2.0 / (fStack_160 * fStack_160 + fStack_15c * fStack_15c +
                     fVar33 * fVar33 + fVar37 * fVar37);
      fVar27 = fVar34 * fStack_15c;
      fVar35 = fVar34 * fVar33;
      fVar49 = fVar34 * fStack_160 * fVar37;
      fVar34 = fVar34 * fStack_160 * fStack_160;
      fVar67 = 1.0 - (fVar27 * fStack_15c + fVar35 * fVar33);
      fVar70 = fVar27 * fStack_160 - fVar35 * fVar37;
      fVar71 = fVar35 * fStack_160 + fVar27 * fVar37;
      fVar58 = fVar27 * fStack_160 + fVar35 * fVar37;
      fVar33 = 1.0 - (fVar34 + fVar35 * fVar33);
      fVar61 = fVar35 * fStack_15c - fVar49;
      auVar50._0_4_ = fVar35 * fStack_160 - fVar27 * fVar37;
      fVar49 = fVar35 * fStack_15c + fVar49;
      uVar62 = (undefined1)((uint)fVar71 >> 8);
      uVar63 = (undefined1)((uint)fVar71 >> 0x10);
      uVar64 = (undefined1)((uint)fVar71 >> 0x18);
      uVar46 = (undefined1)((uint)fVar61 >> 8);
      uVar47 = (undefined1)((uint)fVar61 >> 0x10);
      uVar48 = (undefined1)((uint)fVar61 >> 0x18);
      auVar50._4_4_ = fVar49;
      auVar50._8_4_ = 1.0 - (fVar34 + fVar27 * fStack_15c);
      auVar50._12_4_ = 0;
      uVar43 = (undefined1)((uint)fVar58 >> 8);
      uVar44 = (undefined1)((uint)fVar58 >> 0x10);
      uVar45 = (undefined1)((uint)fVar58 >> 0x18);
      auVar31[4] = SUB41(fVar58,0);
      auVar31._0_4_ = fVar67;
      auVar31[5] = uVar43;
      auVar31[6] = uVar44;
      auVar31[7] = uVar45;
      auVar31[8] = SUB41(fVar71,0);
      auVar31[9] = uVar62;
      auVar31[10] = uVar63;
      auVar31[0xb] = uVar64;
      auVar31[0xc] = SUB41(fVar61,0);
      auVar31[0xd] = uVar46;
      auVar31[0xe] = uVar47;
      auVar31[0xf] = uVar48;
      auVar53[4] = SUB41(fVar58,0);
      auVar53._0_4_ = fVar67;
      auVar53[5] = uVar43;
      auVar53[6] = uVar44;
      auVar53[7] = uVar45;
      auVar53[8] = SUB41(fVar71,0);
      auVar53[9] = uVar62;
      auVar53[10] = uVar63;
      auVar53[0xb] = uVar64;
      auVar53[0xc] = SUB41(fVar61,0);
      auVar53[0xd] = uVar46;
      auVar53[0xe] = uVar47;
      auVar53[0xf] = uVar48;
      auVar42 = NEON_ext(auVar31,auVar53,8,1);
      fVar27 = -(fVar26 * 0.01);
      fVar26 = -(fVar30 * 0.01);
      fVar30 = -(fVar32 * 0.01);
      auVar39._0_4_ = fVar67 * fVar27;
      auVar39._4_4_ = fVar58 * fVar26;
      auVar39._8_4_ = auVar50._0_4_ * fVar30;
      auVar39._12_4_ = 0x80000000;
      auVar59._0_4_ = fVar70 * fVar27;
      auVar59._4_4_ = fVar33 * fVar26;
      auVar59._8_4_ = fVar49 * fVar30;
      auVar59._12_4_ = 0x80000000;
      auVar40 = NEON_ext(auVar39,auVar39,8,1);
      auVar60 = NEON_ext(auVar59,auVar59,8,1);
      auVar51 = NEON_ext(auVar50,auVar50,8,1);
      fVar27 = auVar42._0_4_ * fVar27;
      fVar26 = auVar42._4_4_ * fVar26;
      fVar30 = auVar51._0_4_ * fVar30;
      auVar52._4_4_ = fVar26;
      auVar52._0_4_ = fVar27;
      auVar52._8_4_ = fVar30;
      auVar52._12_4_ = 0;
      auVar66._4_4_ = fVar26;
      auVar66._0_4_ = fVar27;
      auVar66._8_4_ = fVar30;
      auVar66._12_4_ = 0;
      auVar52 = NEON_ext(auVar52,auVar66,8,1);
      pfVar24 = (float *)(lVar20 + 8);
      pfVar19 = (float *)(puStack_108 + 1);
      auVar31 = _UNK_10e4eb850;
      auVar53 = _UNK_10e4eb860;
      do {
        fVar34 = (float)uVar55 * 0.01 * (float)*(undefined8 *)(pfVar24 + -2);
        fVar35 = fVar56 * 0.01 * (float)((ulong)*(undefined8 *)(pfVar24 + -2) >> 0x20);
        fVar61 = fVar57 * 0.01 * *pfVar24;
        fVar30 = fVar67 * fVar34;
        fVar32 = fVar58 * fVar35;
        uVar43 = (undefined1)((uint)fVar32 >> 8);
        uVar44 = (undefined1)((uint)fVar32 >> 0x10);
        uVar45 = (undefined1)((uint)fVar32 >> 0x18);
        fVar37 = auVar50._0_4_ * fVar61;
        uVar46 = (undefined1)((uint)fVar37 >> 8);
        uVar47 = (undefined1)((uint)fVar37 >> 0x10);
        uVar48 = (undefined1)((uint)fVar37 >> 0x18);
        auVar65._0_4_ = fVar70 * fVar34;
        auVar65._4_4_ = fVar33 * fVar35;
        auVar65._8_4_ = fVar49 * fVar61;
        auVar65._12_4_ = 0;
        fVar34 = auVar42._0_4_ * fVar34;
        fVar35 = auVar42._4_4_ * fVar35;
        fVar61 = auVar51._0_4_ * fVar61;
        auVar68[4] = SUB41(fVar32,0);
        auVar68._0_4_ = fVar30;
        auVar68[5] = uVar43;
        auVar68[6] = uVar44;
        auVar68[7] = uVar45;
        auVar68[8] = SUB41(fVar37,0);
        auVar68[9] = uVar46;
        auVar68[10] = uVar47;
        auVar68[0xb] = uVar48;
        auVar68._12_4_ = 0;
        auVar69[4] = SUB41(fVar32,0);
        auVar69._0_4_ = fVar30;
        auVar69[5] = uVar43;
        auVar69[6] = uVar44;
        auVar69[7] = uVar45;
        auVar69[8] = SUB41(fVar37,0);
        auVar69[9] = uVar46;
        auVar69[10] = uVar47;
        auVar69[0xb] = uVar48;
        auVar69._12_4_ = 0;
        auVar68 = NEON_ext(auVar68,auVar69,8,1);
        auVar69 = NEON_ext(auVar65,auVar65,8,1);
        auVar4._4_4_ = fVar35;
        auVar4._0_4_ = fVar34;
        auVar4._8_4_ = fVar61;
        auVar4._12_4_ = 0;
        auVar5._4_4_ = fVar35;
        auVar5._0_4_ = fVar34;
        auVar5._8_4_ = fVar61;
        auVar5._12_4_ = 0;
        auVar66 = NEON_ext(auVar4,auVar5,8,1);
        fVar30 = auVar39._0_4_ + auVar39._4_4_ + auVar40._0_4_ + fVar30 + fVar32 + auVar68._0_4_;
        fVar32 = auVar59._0_4_ + auVar59._4_4_ + auVar60._0_4_ +
                 auVar65._0_4_ + auVar65._4_4_ + auVar69._0_4_;
        uVar43 = SUB41(fVar32,0);
        uVar44 = (undefined1)((uint)fVar32 >> 8);
        uVar45 = (undefined1)((uint)fVar32 >> 0x10);
        uVar46 = (undefined1)((uint)fVar32 >> 0x18);
        fVar32 = fVar27 + fVar26 + auVar52._0_4_ + auVar52._4_4_ +
                 fVar34 + fVar35 + auVar66._0_4_ + auVar66._4_4_;
        *(ulong *)(pfVar19 + -2) =
             CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,fVar30))));
        uVar47 = (undefined1)((uint)fVar32 >> 8);
        uVar48 = (undefined1)((uint)fVar32 >> 0x10);
        uVar62 = (undefined1)((uint)fVar32 >> 0x18);
        *pfVar19 = fVar32;
        auVar6[4] = uVar43;
        auVar6._0_4_ = fVar30;
        auVar6[5] = uVar44;
        auVar6[6] = uVar45;
        auVar6[7] = uVar46;
        auVar6[8] = SUB41(fVar32,0);
        auVar6[9] = uVar47;
        auVar6[10] = uVar48;
        auVar6[0xb] = uVar62;
        auVar6._12_4_ = 0;
        auVar53 = NEON_fmin(auVar53,auVar6,4);
        auVar7[4] = uVar43;
        auVar7._0_4_ = fVar30;
        auVar7[5] = uVar44;
        auVar7[6] = uVar45;
        auVar7[7] = uVar46;
        auVar7[8] = SUB41(fVar32,0);
        auVar7[9] = uVar47;
        auVar7[10] = uVar48;
        auVar7[0xb] = uVar62;
        auVar7._12_4_ = 0;
        auVar31 = NEON_fmax(auVar31,auVar7,4);
        pfVar24 = pfVar24 + 3;
        uVar23 = uVar23 - 1;
        pfVar19 = pfVar19 + 3;
      } while (uVar23 != 0);
      fVar26 = auVar31._0_4_ - auVar53._0_4_;
      fVar30 = auVar31._4_4_ - auVar53._4_4_;
      fVar27 = auVar31._8_4_ - auVar53._8_4_;
    }
    if (fVar30 <= fVar27) {
      fVar27 = fVar30;
    }
    if (fVar26 <= fVar27) {
      fVar27 = fVar26;
    }
    uVar54 = NEON_fminnm(fVar27 * 0.1,0x3d23d70a);
    FUN_10aa1eea8(CONCAT44(fVar56,uVar54),&pfStack_f0,puStack_108,
                  (long)puStack_100 - (long)puStack_108 >> 2);
    if (puStack_108 != (undefined8 *)0x0) {
      puStack_100 = puStack_108;
      __ZdlPv();
    }
    puVar16 = (undefined8 *)0x140;
    __Znwm();
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = &PTR_FUN_110c3cae0;
    puVar25 = puVar16 + 4;
    *puVar25 = *(undefined8 *)param_4;
    *(float *)(puVar16 + 5) = param_4[2];
    *(ulong *)((long)puVar16 + 0x34) = CONCAT44(fStack_12c,fStack_130);
    *(ulong *)((long)puVar16 + 0x2c) = CONCAT44(uStack_138._4_4_,(undefined4)uStack_138);
    *(ulong *)((long)puVar16 + 0x44) = CONCAT44(fStack_11c,fStack_120);
    *(undefined8 *)((long)puVar16 + 0x3c) = uStack_128;
    puVar16[10] = uStack_114;
    puVar16[9] = CONCAT44(uStack_118,fStack_11c);
    puVar16[0xe] = lStack_d8;
    puVar16[0xd] = lStack_e0;
    puVar16[0xc] = plStack_e8;
    puVar16[0xb] = pfStack_f0;
    puVar16[0x11] = lStack_c0;
    puVar16[0x10] = lStack_c8;
    puVar16[0xf] = lStack_d0;
    plStack_e8 = (long *)0x0;
    pfStack_f0 = (float *)0x0;
    lStack_d8 = 0;
    lStack_e0 = 0;
    lStack_c8 = 0;
    lStack_d0 = 0;
    lStack_c0 = 0;
    func_0x000109817944(puVar16 + 0x12,puVar16[0xd],*(undefined4 *)((long)puVar16 + 0x5c),0xc);
    puVar16[0x27] = plStack_148;
    puVar16[0x26] = pfStack_150;
    pfStack_150 = (float *)0x0;
    plStack_148 = (long *)0x0;
    *(undefined4 *)(puVar16 + 0x15) = 0;
    *(undefined4 *)(puVar16 + 0x1a) = uVar54;
    puVar13 = *(undefined8 **)(pfVar12 + 0x16);
    puStack_108 = puVar25;
    puStack_100 = puVar16;
    if (puVar13 < *(undefined8 **)(pfVar12 + 0x18)) {
      *puVar13 = puVar25;
      puVar13[1] = puVar16;
      plVar11 = puVar16 + 2;
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar10) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar13 = puVar13 + 2;
    }
    else {
      lVar20 = *(long *)(pfVar12 + 0x14);
      lVar14 = (long)puVar13 - lVar20;
      uVar23 = (lVar14 >> 4) + 1;
      if (uVar23 >> 0x3c != 0) {
        FUN_10aa62e44();
LAB_10aa21418:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10aa2141c);
        (*pcVar9)();
      }
      uVar21 = (long)*(undefined8 **)(pfVar12 + 0x18) - lVar20;
      uVar22 = (long)uVar21 >> 3;
      if (uVar22 <= uVar23) {
        uVar22 = uVar23;
      }
      if (0x7fffffffffffffef < uVar21) {
        uVar22 = 0xfffffffffffffff;
      }
      if (uVar22 >> 0x3c != 0) {
        func_0x000109ffded8();
        goto LAB_10aa21418;
      }
      lVar17 = uVar22 << 4;
      __Znwm();
      puVar2 = (undefined8 *)(lVar17 + lVar14);
      *puVar2 = puVar25;
      puVar2[1] = puVar16;
      plVar11 = puVar16 + 2;
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar10) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar13 = puVar2 + 2;
      _memcpy(puVar2 + (lVar14 >> 4) * -2,lVar20,lVar14);
      *(undefined8 **)(pfVar12 + 0x14) = puVar2 + (lVar14 >> 4) * -2;
      *(undefined8 **)(pfVar12 + 0x16) = puVar13;
      *(ulong *)(pfVar12 + 0x18) = lVar17 + uVar22 * 0x10;
      if (lVar20 != 0) {
        __ZdlPv(lVar20);
      }
    }
    *(undefined8 **)(pfVar12 + 0x16) = puVar13;
    puVar13 = (undefined8 *)0x60;
    __Znwm();
    uVar28 = *(undefined8 *)((long)puVar16 + 0x2c);
    uVar36 = *(undefined8 *)((long)puVar16 + 0x3c);
    uVar55 = *(undefined8 *)((long)puVar16 + 0x44);
    puVar13[3] = *(undefined8 *)((long)puVar16 + 0x34);
    puVar13[2] = uVar28;
    puVar13[5] = uVar55;
    puVar13[4] = uVar36;
    uVar36 = puVar16[9];
    *(undefined8 *)((long)puVar13 + 0x34) = puVar16[10];
    *(undefined8 *)((long)puVar13 + 0x2c) = uVar36;
    *puVar13 = &PTR_DAT_110c3ca88;
    puVar13[1] = puVar16 + 0x12;
    puVar13[8] = 0;
    puVar13[9] = 0;
    puVar13[10] = puVar25;
    puVar13[0xb] = puVar16;
    uStack_140 = 0;
    *param_1 = puVar13;
    func_0x00010aa62d88(&uStack_140);
    FUN_10aa1accc(&pfStack_f0);
  }
                    /* WARNING: Read-only address (ram,0x00010e4eb850) is written */
                    /* WARNING: Read-only address (ram,0x00010e4eb860) is written */
  return;
}



/* Entry: 10aa21508; end: 10aa2167f;  */

undefined8
FUN_10aa21508(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  uint *puVar6;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar5 = &lStack_60;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  plVar3 = *(long **)(param_1 + 0x158);
  if ((((plVar3 == (long *)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar3, plVar3 == (long *)0x0)) ||
      (lVar4 = *(long *)(param_1 + 0x150), lStack_60 = lVar4, lVar4 == 0)) ||
     (___dynamic_cast(lVar4,&PTR_DAT_110c3c9b0,&PTR_DAT_110c3cb98,0), lVar4 == 0)) {
    plVar5 = &lStack_50;
    lVar4 = lStack_50;
    plVar3 = plStack_48;
  }
  plStack_48 = plVar3;
  lStack_50 = lVar4;
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar3 = plStack_58 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if ((lStack_50 == 0) || (puVar6 = (uint *)(lStack_50 + 0x20), *puVar6 <= (uint)param_3)) {
    param_5 = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x178);
    if ((*(byte *)(lVar4 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(lVar4);
    }
    FUN_10aa1cd6c(param_5,puVar6,param_3,param_4,lVar4 + 0xc0);
  }
  plVar5 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar3 = plStack_48 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_5;
}



/* Entry: 10aa21680; end: 10aa217db;  */

void FUN_10aa21680(long param_1,long param_2,undefined4 param_3,undefined4 param_4,long *param_5,
                  undefined8 *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  if ((char)param_5[0x24] == '\0') {
    (**(code **)(*param_5 + 200))(&uStack_98,param_5);
    param_5[0x26] = lStack_50;
    param_5[0x25] = lStack_58;
    param_5[0x28] = lStack_40;
    param_5[0x27] = lStack_48;
    param_5[0x29] = lStack_38;
    param_5[0x1e] = (long)uStack_90;
    param_5[0x1d] = (long)uStack_98;
    param_5[0x20] = lStack_80;
    param_5[0x1f] = lStack_88;
    param_5[0x22] = lStack_70;
    param_5[0x21] = lStack_78;
    param_5[0x24] = lStack_60;
    param_5[0x23] = lStack_68;
    param_1 = lStack_68;
    param_2 = lStack_78;
  }
  uVar8 = (undefined4)param_2;
  uVar6 = (undefined4)param_1;
  FUN_10aa1aa50(param_5 + 0x23,*param_6,param_6 + 2,*(undefined1 *)(param_6 + 10));
  if (((*(byte *)(param_6 + 10) >> 3 & 1) != 0) && ((*(byte *)(param_5 + 0x1c) & 1) != 0)) {
    FUN_10aa1ab28();
    uStack_98 = (undefined8 *)CONCAT44(uVar8,uVar6);
    uStack_90 = (long *)CONCAT44(param_4,param_3);
    fVar7 = *(float *)(param_5 + 0x1d);
    _cbrtf(fVar7);
    FUN_10aafaae4(fVar7 * 0.05,*param_6,param_6 + 2,(long)param_5 + 0xec,&uStack_98,6,4,2);
  }
  plVar4 = (long *)param_5[0x2b];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      uStack_98 = (undefined8 *)param_5[0x2a];
      uStack_90 = plVar4;
      if (uStack_98 != (undefined8 *)0x0) {
        (**(code **)*uStack_98)(uStack_98,param_6);
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
  }
  return;
}



/* Entry: 10aa217dc; end: 10aa2186b;  */

undefined1  [16] FUN_10aa217dc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1a;
  auVar1._0_8_ = &UNK_10f68bae9;
  return auVar1;
}



/* Entry: 10aa2186c; end: 10aa218a3;  */

bool FUN_10aa2186c(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0xe0);
  bVar1 = false;
  if (lVar2 != 0) {
    ___dynamic_cast(lVar2,&PTR_DAT_110bb37d0,&PTR_DAT_110c69e38,0);
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}



/* Entry: 10aa218a4; end: 10aa218b3;  */

ulong * FUN_10aa218a4(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (ulong *)&UNK_10f68b07c;
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
        puVar2 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar2;
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
  func_0x000107c610b8(puVar3,&UNK_10f68b07c,puVar2);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 10aa218b4; end: 10aa21917;  */

void FUN_10aa218b4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lStack_40;
  long lStack_38;
  
  uVar1 = param_3;
  func_0x00010a0fda30();
  FUN_10aa21918(&lStack_40,param_3,param_2,uVar1);
  FUN_10a19ad28(lStack_40 + 0x108,param_6);
  *param_1 = lStack_40;
  param_1[1] = lStack_38;
  return;
}



/* Entry: 10aa21918; end: 10aa21ca7;  */

/* WARNING: Removing unreachable block (ram,0x00010aa21a58) */

void FUN_10aa21918(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_60;
  long *plStack_58;
  
  if (param_2 == 0) {
    plVar3 = (long *)0x1b0;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c3cc78;
    plVar6 = plVar3 + 3;
    FUN_10aa21ca8(plVar6,0,param_3,param_4);
    plStack_60 = plVar6;
    plStack_58 = plVar3;
    FUN_10aa63100(&plStack_60,plVar3 + 8,plVar6);
    FUN_10aa62f9c(param_1,&plStack_60);
    plVar6 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 0x858);
    plVar6 = *(long **)(param_2 + 0x860);
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x198;
    __Znwm();
    FUN_10aa21ca8();
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar6 + 2;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar4 = (long *)0x30;
    plStack_60 = plVar3;
    __Znwm();
    *plVar4 = (long)&PTR_DAT_110c3cc18;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar6;
    plStack_58 = plVar4;
    FUN_10aa63100(&plStack_60,plVar3 + 5,plVar3);
    FUN_10aa62f9c(param_1,&plStack_60);
    plVar3 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((lVar7 != 0) && (plVar3 = (long *)*param_1, plVar3 != (long *)0x0)) {
      plStack_58 = (long *)param_1[1];
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_60 = plVar3;
      FUN_10aa88c30(lVar7,&plStack_60);
      plVar3 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10aa21ca8; end: 10aa21df3;  */

undefined8 * FUN_10aa21ca8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2f] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x32) = 0x100;
  puVar1 = param_1;
  FUN_10aa7093c();
  *puVar1 = &PTR_DAT_110c38c80;
  puVar1[2] = &PTR_DAT_110c38d58;
  puVar1[7] = &PTR_DAT_110c38db0;
  FUN_10a0040d0(puVar1 + 0x1c,&PTR_PTR_110c394d0);
  *param_1 = &PTR_FUN_110c392b0;
  param_1[2] = &PTR_DAT_110c39398;
  param_1[7] = &PTR_DAT_110c393f0;
  param_1[0x1c] = &PTR_DAT_110c39418;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = &PTR_DAT_110c39490;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  if ((*(byte *)(param_1 + 0x32) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x32) = 1;
    param_1[0x31] = param_2;
    if (param_2 != 0) {
      param_1[0x30] = *(undefined8 *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
  }
  FUN_10a5ae998(param_1[0x1f],&PTR_DAT_110b99f08,param_2,param_1 + 0x1c);
  return param_1;
}



/* Entry: 10aa21df4; end: 10aa21e67;  */

void FUN_10aa21df4(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x138) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lStack_28 = param_1 + 0x118;
  FUN_10a26e8c0(&lStack_28);
  FUN_10a0e3194(param_1 + 0x108);
  *(undefined ***)(param_1 + 0xe0) = &PTR_DAT_110c3aeb0;
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_110c3af28;
  func_0x00010a004e5c(param_1 + 0xf8);
  func_0x00010a004e04(param_1 + 0xe8);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10aa21e68; end: 10aa21e93;  */

void FUN_10aa21e68(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x138) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lStack_28 = param_1 + 0x118;
  FUN_10a26e8c0(&lStack_28);
  FUN_10a0e3194(param_1 + 0x108);
  *(undefined ***)(param_1 + 0xe0) = &PTR_DAT_110c3aeb0;
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_110c3af28;
  func_0x00010a004e5c(param_1 + 0xf8);
  func_0x00010a004e04(param_1 + 0xe8);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10aa21e94; end: 10aa21eef;  */

void FUN_10aa21e94(void)

{
  FUN_10aa21df4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa21ef0; end: 10aa21f1f;  */

void FUN_10aa21ef0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10aa21df4((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10aa21f20; end: 10aa21fc7;  */

void FUN_10aa21f20(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  puVar1[1] = 0x6c6f43646c726f57;
  *puVar1 = 0x2e73636973796850;
  *(undefined8 *)((long)puVar1 + 0x12) = 0x6873654d6e6f6973;
  *(undefined8 *)((long)puVar1 + 10) = 0x696c6c6f43646c72;
  *(undefined1 *)((long)puVar1 + 0x1a) = 0;
  FUN_10aa1a9cc(auStack_48,param_2 + 0x140);
  FUN_10a0ee900(param_1,&UNK_10f591ec1,5);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  __ZdlPv(puVar1);
  return;
}



/* Entry: 10aa21fc8; end: 10aa21fcf;  */

void FUN_10aa21fc8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  puVar1[1] = 0x6c6f43646c726f57;
  *puVar1 = 0x2e73636973796850;
  *(undefined8 *)((long)puVar1 + 0x12) = 0x6873654d6e6f6973;
  *(undefined8 *)((long)puVar1 + 10) = 0x696c6c6f43646c72;
  *(undefined1 *)((long)puVar1 + 0x1a) = 0;
  FUN_10aa1a9cc(auStack_48,param_2 + 0x130);
  FUN_10a0ee900(param_1,&UNK_10f591ec1,5);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  __ZdlPv(puVar1);
  return;
}



/* Entry: 10aa21fd0; end: 10aa22033;  */

void FUN_10aa21fd0(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  lVar1 = param_2;
  func_0x00010a0fda30();
  FUN_10aa21918(&lStack_40,uVar2,lVar1,param_3);
  FUN_10a19ad28(lStack_40 + 0x108,param_2 + 0x108);
  *param_1 = lStack_40;
  param_1[1] = lStack_38;
  return;
}



/* Entry: 10aa22034; end: 10aa22327;  */

/* WARNING: Removing unreachable block (ram,0x00010aa221c8) */
/* WARNING: Removing unreachable block (ram,0x00010aa221cc) */
/* WARNING: Removing unreachable block (ram,0x00010aa221d4) */
/* WARNING: Removing unreachable block (ram,0x00010aa221dc) */
/* WARNING: Removing unreachable block (ram,0x00010aa221e0) */

void FUN_10aa22034(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  plStack_58 = (long *)0x0;
  plVar5 = (long *)param_2[0x27];
  if (((plVar5 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar5, plVar5 != (long *)0x0)) &&
     (plVar5 = (long *)param_2[0x26], plVar5 != (long *)0x0)) goto LAB_10aa22214;
  (**(code **)(*param_2 + 0x50))(&lStack_50,param_2);
  if (plStack_48 != (long *)0x0) {
    plVar5 = plStack_48 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plStack_48 != (long *)0x0) {
      plVar5 = plStack_48 + 1;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
  }
  plVar6 = (long *)0x120;
  __Znwm();
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110c3ccc8;
  plVar5 = plVar6 + 4;
  plVar6[5] = (long)plStack_48;
  *plVar5 = lStack_50;
  plVar6[6] = 0;
  *(undefined1 *)(plVar6 + 7) = 0;
  plVar6[9] = 0;
  plVar6[8] = 0;
  plVar6[0xb] = 0;
  plVar6[10] = 0;
  plVar6[0xc] = 0;
  plVar6[0xe] = 0;
  *(undefined1 *)(plVar6 + 0xf) = 0;
  plVar6[0x14] = 0;
  plVar6[0x11] = 0;
  plVar6[0x10] = 0;
  plVar6[0x13] = 0;
  plVar6[0x12] = 0;
  plVar6[0x21] = 0;
  plVar6[0x22] = 0;
  plVar6[0x23] = 0;
  lVar4 = lRam0000000113835598;
  lVar8 = lRam0000000113835590;
  plVar6[0x17] = lRam0000000113835598;
  plVar6[0x16] = lVar8;
  plVar6[0x19] = lVar4;
  plVar6[0x18] = lVar8;
  plVar6[0x1b] = lVar4;
  plVar6[0x1a] = lVar8;
  plVar6[0x1d] = lVar4;
  plVar6[0x1c] = lVar8;
  plVar6[0x1f] = lVar4;
  plVar6[0x1e] = lVar8;
  *(undefined4 *)(plVar6 + 0x20) = 0;
  if (plStack_58 == (long *)0x0) {
LAB_10aa22198:
    plVar1 = plVar6 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    plVar1 = plStack_58 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
    if (plVar6 != (long *)0x0) goto LAB_10aa22198;
  }
  lVar8 = param_2[0x27];
  param_2[0x26] = (long)plVar5;
  param_2[0x27] = (long)plVar6;
  if (lVar8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar8);
  }
  FUN_10aa22328(plVar5,param_2[0x23],param_2[0x24] - param_2[0x23] >> 4,param_2 + 0x28);
  plStack_58 = plVar6;
LAB_10aa22214:
  puVar7 = (undefined8 *)0xa0;
  __Znwm();
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[5] = 0x3f80000000000000;
  puVar7[4] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 7) = 0;
  *puVar7 = &PTR_FUN_110c3cd18;
  puVar7[1] = puVar7 + 10;
  puVar7[8] = plVar5;
  puVar7[9] = plStack_58;
  fVar9 = *(float *)(param_4 + 1);
  puVar7[0xc] = 0;
  *(undefined4 *)(puVar7 + 0xe) = 0;
  fVar9 = fVar9 * 0.01;
  fVar11 = (float)*param_4 * 0.01;
  fVar12 = (float)((ulong)*param_4 >> 0x20) * 0.01;
  uVar14 = NEON_fmov(0x3f800000,4);
  fVar13 = (float)uVar14 / fVar11;
  fVar15 = (float)((ulong)uVar14 >> 0x20) / fVar12;
  iVar16 = -(uint)(fVar11 == 0.0);
  iVar17 = -(uint)(fVar12 == 0.0);
  puVar7[10] = &PTR_DAT_110c39da8;
  puVar7[0xf] = plVar5 + 10;
  *(undefined4 *)(puVar7 + 0xb) = 0x17;
  fVar10 = 0.0;
  if (fVar9 != 0.0) {
    fVar10 = 1.0 / fVar9;
  }
  puVar7[0x11] = (ulong)(uint)fVar9;
  puVar7[0x10] = CONCAT44(fVar12,fVar11);
  puVar7[0x13] = (ulong)(uint)fVar10;
  puVar7[0x12] = CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                          CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                   CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar17 >> 8),
                                            CONCAT14(SUB41(fVar15,0) & ~(byte)iVar17,
                                                     CONCAT13((byte)((uint)fVar13 >> 0x18) &
                                                              ~(byte)((uint)iVar16 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar13 >> 0x10)
                                                                       & ~(byte)((uint)iVar16 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar13
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar16
                                                                                       >> 8),
                                                                                SUB41(fVar13,0) &
                                                                                ~(byte)iVar16)))))))
  ;
  puVar7[0xd] = 0xffffffff00000001;
  *param_1 = puVar7;
  return;
}



/* Entry: 10aa22328; end: 10aa224ab;  */

undefined8 *
FUN_10aa22328(undefined8 *param_1,undefined1 *param_2,long param_3,ulong param_4,undefined8 *param_5
             )

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x21;
  undefined8 *puVar14;
  uint *puVar15;
  long lVar16;
  ulong auStack_118 [3];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [80];
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long lStack_48;
  
  uVar6 = uRam0000000113835598;
  uVar5 = uRam0000000113835590;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0x13] = uRam0000000113835598;
  param_1[0x12] = uVar5;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0x15] = uVar6;
  param_1[0x14] = uVar5;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  param_1[0x19] = uVar6;
  param_1[0x18] = uVar5;
  param_1[0x1b] = uVar6;
  param_1[0x1a] = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = param_1[0x1d];
  uVar13 = 0;
  if (param_3 != 0) {
    FUN_10aa226fc(&uStack_100);
    puVar14 = param_1 + 2;
    *puVar14 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    FUN_10aa1accc(puVar14);
    uVar11 = uStack_d0;
    uVar10 = uStack_d8;
    uVar9 = uStack_e0;
    uVar8 = uStack_e8;
    uVar7 = uStack_f0;
    uVar6 = uStack_f8;
    uVar5 = uStack_100;
    param_1[3] = uStack_f8;
    *puVar14 = uStack_100;
    param_1[5] = uStack_e8;
    param_1[4] = uStack_f0;
    param_1[7] = uStack_d8;
    param_1[6] = uStack_e0;
    param_1[8] = uStack_d0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 0;
    param_1[0x10] = uVar11;
    param_1[0xb] = uVar6;
    param_1[10] = uVar5;
    param_1[0xd] = uVar8;
    param_1[0xc] = uVar7;
    param_1[0xf] = uVar10;
    param_1[0xe] = uVar9;
    uVar2 = *(undefined4 *)(param_1 + 10);
    FUN_10aa413a8(auStack_118,uVar2);
    param_4 = auStack_118[0];
    param_5 = puStack_70;
    FUN_10aa29b98(auStack_118[0],uVar2,param_1[0xd],*(undefined1 *)(param_1 + 0xb),puStack_70);
    param_4 = param_4 & 0xffffffff;
    param_2 = auStack_c0;
    uVar13 = auStack_118[0];
    FUN_10aa2a124(param_1 + 0x12,param_2,auStack_118[0],param_4);
    if (auStack_118[0] != 0) {
      __ZdlPv(auStack_118[0]);
    }
    if (puStack_70 != (undefined8 *)0x0) {
      puStack_68 = puStack_70;
      __ZdlPv(puStack_70);
    }
    param_1 = &uStack_100;
    FUN_10aa1accc();
    unaff_x21 = auStack_118[0];
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (unaff_x21 != 0) {
    __ZdlPv(unaff_x21);
  }
  FUN_10aa22aa8(&uStack_100);
  __Unwind_Resume();
  plVar12 = (long *)param_1[0x27];
  if ((plVar12 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar12 == (long *)0x0)
     ) {
    return (undefined8 *)0x0;
  }
  if ((param_1[0x26] == 0) || (puVar15 = (uint *)(param_1[0x26] + 0x50), *puVar15 <= (uint)uVar13))
  {
    param_5 = (undefined8 *)0x0;
  }
  else {
    lVar16 = *(long *)(param_2 + 0x178);
    if ((*(byte *)(lVar16 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(lVar16);
    }
    FUN_10aa1cd6c(param_5,puVar15,uVar13,param_4,lVar16 + 0xc0);
  }
  plVar1 = plVar12 + 1;
  do {
    lVar16 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar16 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar16 != 0) {
    return param_5;
  }
  (**(code **)(*plVar12 + 0x10))(plVar12);
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
  return param_5;
}


