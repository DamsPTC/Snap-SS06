/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aca2c2c; end: 10aca2c83;  */

void FUN_10aca2c2c(undefined8 param_1)

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
  puStack_40 = &UNK_10f6a0902;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10aca2c84(param_1,&uStack_58);
  FUN_10acd478c();
  return;
}



/* Entry: 10aca2c84; end: 10aca2d5b;  */

/* WARNING: Removing unreachable block (ram,0x00010aca2d1c) */

undefined1  [16] FUN_10aca2c84(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6a1a59,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10acd4690(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aca2d5c; end: 10aca2f5b;  */

void FUN_10aca2d5c(long param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 0;
  plVar3 = (long *)(param_4 + 8);
  plVar5 = (long *)*plVar3;
  lStack_50 = param_4;
  if (plVar5 == (long *)0x0) {
LAB_10aca2dd4:
    plVar3 = (long *)0x80;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar5 = plVar3 + 3;
    *plVar3 = (long)&PTR_DAT_110ba1f48;
    FUN_10a367420(plVar5,param_1,param_2);
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    FUN_10acd70b4(param_4,*(undefined8 *)(param_1 + 0x18),param_1,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_10aca2e34:
      plVar3 = plStack_58;
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  else {
    plVar7 = plVar3;
    do {
      lVar6 = 8;
      if (*(ulong *)(param_1 + 0x18) <= (ulong)plVar5[7]) {
        lVar6 = 0;
        plVar7 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar6);
    } while (plVar5 != (long *)0x0);
    if ((plVar7 == plVar3) || (*(ulong *)(param_1 + 0x18) < (ulong)plVar7[7])) goto LAB_10aca2dd4;
    lVar6 = plVar7[8];
    if (*(short *)(lVar6 + 0x20) == 6) {
      FUN_10a36ed64(lVar6,param_2);
      goto LAB_10aca2e9c;
    }
    plVar3 = (long *)0x80;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar5 = plVar3 + 3;
    *plVar3 = (long)&PTR_DAT_110ba1f48;
    FUN_10a367420(plVar5,param_1,param_2);
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    func_0x00010a0da650(plVar7 + 8,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_10aca2e34;
    }
  }
  uVar4 = *param_3 + 0x9e3779b9;
  uVar4 = uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  uVar4 = *(long *)(param_1 + 0x18) + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  *param_3 = uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779bf ^ uVar4;
LAB_10aca2e9c:
  FUN_10acd5084(&lStack_50);
  return;
}



/* Entry: 10aca2f5c; end: 10aca315b;  */

void FUN_10aca2f5c(long param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 0;
  plVar3 = (long *)(param_4 + 8);
  plVar5 = (long *)*plVar3;
  lStack_50 = param_4;
  if (plVar5 == (long *)0x0) {
LAB_10aca2fd4:
    plVar3 = (long *)0x80;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar5 = plVar3 + 3;
    *plVar3 = (long)&PTR_DAT_110ba1f48;
    FUN_10a0daf68(plVar5,param_1,param_2);
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    FUN_10acd70b4(param_4,*(undefined8 *)(param_1 + 0x18),param_1,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_10aca3034:
      plVar3 = plStack_58;
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  else {
    plVar7 = plVar3;
    do {
      lVar6 = 8;
      if (*(ulong *)(param_1 + 0x18) <= (ulong)plVar5[7]) {
        lVar6 = 0;
        plVar7 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar6);
    } while (plVar5 != (long *)0x0);
    if ((plVar7 == plVar3) || (*(ulong *)(param_1 + 0x18) < (ulong)plVar7[7])) goto LAB_10aca2fd4;
    lVar6 = plVar7[8];
    if (*(short *)(lVar6 + 0x20) == 3) {
      FUN_10a0daef4(lVar6,param_2);
      goto LAB_10aca309c;
    }
    plVar3 = (long *)0x80;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar5 = plVar3 + 3;
    *plVar3 = (long)&PTR_DAT_110ba1f48;
    FUN_10a0daf68(plVar5,param_1,param_2);
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    func_0x00010a0da650(plVar7 + 8,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_10aca3034;
    }
  }
  uVar4 = *param_3 + 0x9e3779b9;
  uVar4 = uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  uVar4 = *(long *)(param_1 + 0x18) + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  *param_3 = uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779bc ^ uVar4;
LAB_10aca309c:
  FUN_10acd5084(&lStack_50);
  return;
}



/* Entry: 10aca315c; end: 10aca335b;  */

void FUN_10aca315c(long param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 0;
  plVar3 = (long *)(param_4 + 8);
  plVar5 = (long *)*plVar3;
  lStack_50 = param_4;
  if (plVar5 == (long *)0x0) {
LAB_10aca31d4:
    plVar3 = (long *)0x80;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar5 = plVar3 + 3;
    *plVar3 = (long)&PTR_DAT_110ba1f48;
    FUN_10a0da984(plVar5,param_1,param_2);
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    FUN_10acd70b4(param_4,*(undefined8 *)(param_1 + 0x18),param_1,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_10aca3234:
      plVar3 = plStack_58;
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  else {
    plVar7 = plVar3;
    do {
      lVar6 = 8;
      if (*(ulong *)(param_1 + 0x18) <= (ulong)plVar5[7]) {
        lVar6 = 0;
        plVar7 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar6);
    } while (plVar5 != (long *)0x0);
    if ((plVar7 == plVar3) || (*(ulong *)(param_1 + 0x18) < (ulong)plVar7[7])) goto LAB_10aca31d4;
    lVar6 = plVar7[8];
    if (*(short *)(lVar6 + 0x20) == 7) {
      FUN_10a0da5cc(lVar6,param_2);
      goto LAB_10aca329c;
    }
    plVar3 = (long *)0x80;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar5 = plVar3 + 3;
    *plVar3 = (long)&PTR_DAT_110ba1f48;
    FUN_10a0da984(plVar5,param_1,param_2);
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    func_0x00010a0da650(plVar7 + 8,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_10aca3234;
    }
  }
  uVar4 = *param_3 + 0x9e3779b9;
  uVar4 = uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  uVar4 = *(long *)(param_1 + 0x18) + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  *param_3 = uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779c0 ^ uVar4;
LAB_10aca329c:
  FUN_10acd5084(&lStack_50);
  return;
}



/* Entry: 10aca335c; end: 10aca355b;  */

void FUN_10aca335c(long param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 0;
  plVar3 = (long *)(param_4 + 8);
  plVar5 = (long *)*plVar3;
  lStack_50 = param_4;
  if (plVar5 == (long *)0x0) {
LAB_10aca33d4:
    plVar3 = (long *)0x80;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar5 = plVar3 + 3;
    *plVar3 = (long)&PTR_DAT_110ba1f48;
    FUN_10a0dae70(plVar5,param_1,param_2);
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    FUN_10acd70b4(param_4,*(undefined8 *)(param_1 + 0x18),param_1,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_10aca3434:
      plVar3 = plStack_58;
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  else {
    plVar7 = plVar3;
    do {
      lVar6 = 8;
      if (*(ulong *)(param_1 + 0x18) <= (ulong)plVar5[7]) {
        lVar6 = 0;
        plVar7 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar6);
    } while (plVar5 != (long *)0x0);
    if ((plVar7 == plVar3) || (*(ulong *)(param_1 + 0x18) < (ulong)plVar7[7])) goto LAB_10aca33d4;
    lVar6 = plVar7[8];
    if (*(short *)(lVar6 + 0x20) == 9) {
      FUN_10a0dadb0(lVar6,param_2);
      goto LAB_10aca349c;
    }
    plVar3 = (long *)0x80;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar5 = plVar3 + 3;
    *plVar3 = (long)&PTR_DAT_110ba1f48;
    FUN_10a0dae70(plVar5,param_1,param_2);
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    func_0x00010a0da650(plVar7 + 8,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_10aca3434;
    }
  }
  uVar4 = *param_3 + 0x9e3779b9;
  uVar4 = uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  uVar4 = *(long *)(param_1 + 0x18) + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  *param_3 = uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779c2 ^ uVar4;
LAB_10aca349c:
  FUN_10acd5084(&lStack_50);
  return;
}



/* Entry: 10aca355c; end: 10aca363b;  */

int FUN_10aca355c(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  undefined **ppuVar7;
  
  plVar1 = *(long **)(*param_1 + 0x268);
  ppuVar7 = &PTR_DAT_110ae4700;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xe8))();
    ppuVar7 = &PTR_DAT_110ae4700 + ((ulong)plVar1 & 0xffffffff) * 4;
    if (0x56 < (uint)plVar1) {
      ppuVar7 = &PTR_DAT_110ae4700;
    }
  }
  if ((*(byte *)((long)ppuVar7 + 0x14) & 3) == 0) {
    plVar1 = *(long **)(*param_1 + 0x268);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0xe0))();
      if (((uint)plVar1 < 6) && ((0x2fU >> (ulong)((uint)plVar1 & 0x1f) & 1) != 0)) {
        sVar4 = *(short *)(&UNK_10e50c922 + ((ulong)plVar1 & 0xffffffff) * 2);
        goto LAB_10aca35e8;
      }
    }
    puVar2 = (undefined8 *)0x120;
    ___cxa_allocate_exception();
    FUN_10a2e1840();
    puVar3 = puVar2;
    ___cxa_throw(puVar2,&PTR_DAT_110b99e48,FUN_10a002a90);
    ___cxa_free_exception(puVar2);
    __Unwind_Resume();
    piVar6 = (int *)(puVar3 + 1);
    if (*piVar6 == 2) {
      iVar5 = 1;
    }
    else if (*piVar6 == 3) {
      iVar5 = 3;
    }
    else {
      puVar2 = (undefined8 *)*puVar3;
      func_0x000109898688(puVar2,piVar6);
      if ((puVar2 == (undefined8 *)0x0) || ((undefined **)*puVar2 != &PTR_FUN_110b9fae8)) {
        puVar2 = (undefined8 *)*puVar3;
        func_0x000109898688(puVar2,piVar6);
        if ((puVar2 == (undefined8 *)0x0) || ((undefined **)*puVar2 != &PTR_FUN_110b9fbb0)) {
          puVar2 = (undefined8 *)*puVar3;
          func_0x000109898688(puVar2,piVar6);
          if ((puVar2 == (undefined8 *)0x0) || ((undefined **)*puVar2 != &PTR_FUN_110bb3c30)) {
            puVar2 = (undefined8 *)*puVar3;
            func_0x000109898688(puVar2,piVar6);
            if ((puVar2 == (undefined8 *)0x0) || ((undefined **)*puVar2 != &PTR_FUN_110bc6bf8)) {
              puVar2 = (undefined8 *)*puVar3;
              func_0x000109898688(puVar2,piVar6);
              if ((puVar2 == (undefined8 *)0x0) || ((undefined **)*puVar2 != &PTR_FUN_110bc6c30)) {
                puVar2 = (undefined8 *)*puVar3;
                func_0x000109898688(puVar2,piVar6);
                if ((puVar2 == (undefined8 *)0x0) || ((undefined **)*puVar2 != &PTR_FUN_110bc6c68))
                {
                  puVar2 = (undefined8 *)*puVar3;
                  func_0x000109898688(puVar2,piVar6);
                  if ((puVar2 == (undefined8 *)0x0) || ((undefined **)*puVar2 != &PTR_FUN_110bc6ca0)
                     ) {
                    puVar2 = (undefined8 *)*puVar3;
                    func_0x000109898688(puVar2,piVar6);
                    if ((puVar2 == (undefined8 *)0x0) ||
                       ((undefined **)*puVar2 != &PTR_FUN_110bc6cd8)) {
                      puVar2 = (undefined8 *)*puVar3;
                      func_0x000109898688(puVar2,piVar6);
                      if ((puVar2 == (undefined8 *)0x0) ||
                         ((undefined **)*puVar2 != &PTR_FUN_110bc6d10)) {
                        puVar2 = (undefined8 *)*puVar3;
                        func_0x000109898688(puVar2,piVar6);
                        if ((puVar2 == (undefined8 *)0x0) ||
                           ((undefined **)*puVar2 != &PTR_FUN_110bc7bb8)) {
                          puVar2 = (undefined8 *)*puVar3;
                          func_0x000109898688(puVar2,piVar6);
                          if ((puVar2 == (undefined8 *)0x0) ||
                             ((undefined **)*puVar2 != &PTR_FUN_110bb3c68)) {
                            puVar3 = (undefined8 *)*puVar3;
                            func_0x000109898688(puVar3,piVar6);
                            if ((puVar3 == (undefined8 *)0x0) ||
                               ((undefined **)*puVar3 != &PTR_FUN_110ba79f8)) {
                              iVar5 = 2;
                              if (*piVar6 != 3) {
                                iVar5 = 0;
                              }
                            }
                            else {
                              iVar5 = 0xb;
                            }
                          }
                          else {
                            iVar5 = 10;
                          }
                        }
                        else {
                          iVar5 = 0x16;
                        }
                      }
                      else {
                        iVar5 = 0x26;
                      }
                    }
                    else {
                      iVar5 = 0x25;
                    }
                  }
                  else {
                    iVar5 = 0x24;
                  }
                }
                else {
                  iVar5 = 0x23;
                }
              }
              else {
                iVar5 = 0x22;
              }
            }
            else {
              iVar5 = 0x1f;
            }
          }
          else {
            iVar5 = 9;
          }
        }
        else {
          iVar5 = 8;
        }
      }
      else {
        iVar5 = 7;
      }
    }
    return iVar5;
  }
  sVar4 = 0xd;
LAB_10aca35e8:
  return (int)sVar4;
}



/* Entry: 10aca363c; end: 10aca389f;  */

undefined4 FUN_10aca363c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 1);
  if (*piVar3 == 2) {
    uVar2 = 1;
  }
  else if (*piVar3 == 3) {
    uVar2 = 3;
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    func_0x000109898688(puVar1,piVar3);
    if ((puVar1 == (undefined8 *)0x0) || ((undefined **)*puVar1 != &PTR_FUN_110b9fae8)) {
      puVar1 = (undefined8 *)*param_1;
      func_0x000109898688(puVar1,piVar3);
      if ((puVar1 == (undefined8 *)0x0) || ((undefined **)*puVar1 != &PTR_FUN_110b9fbb0)) {
        puVar1 = (undefined8 *)*param_1;
        func_0x000109898688(puVar1,piVar3);
        if ((puVar1 == (undefined8 *)0x0) || ((undefined **)*puVar1 != &PTR_FUN_110bb3c30)) {
          puVar1 = (undefined8 *)*param_1;
          func_0x000109898688(puVar1,piVar3);
          if ((puVar1 == (undefined8 *)0x0) || ((undefined **)*puVar1 != &PTR_FUN_110bc6bf8)) {
            puVar1 = (undefined8 *)*param_1;
            func_0x000109898688(puVar1,piVar3);
            if ((puVar1 == (undefined8 *)0x0) || ((undefined **)*puVar1 != &PTR_FUN_110bc6c30)) {
              puVar1 = (undefined8 *)*param_1;
              func_0x000109898688(puVar1,piVar3);
              if ((puVar1 == (undefined8 *)0x0) || ((undefined **)*puVar1 != &PTR_FUN_110bc6c68)) {
                puVar1 = (undefined8 *)*param_1;
                func_0x000109898688(puVar1,piVar3);
                if ((puVar1 == (undefined8 *)0x0) || ((undefined **)*puVar1 != &PTR_FUN_110bc6ca0))
                {
                  puVar1 = (undefined8 *)*param_1;
                  func_0x000109898688(puVar1,piVar3);
                  if ((puVar1 == (undefined8 *)0x0) || ((undefined **)*puVar1 != &PTR_FUN_110bc6cd8)
                     ) {
                    puVar1 = (undefined8 *)*param_1;
                    func_0x000109898688(puVar1,piVar3);
                    if ((puVar1 == (undefined8 *)0x0) ||
                       ((undefined **)*puVar1 != &PTR_FUN_110bc6d10)) {
                      puVar1 = (undefined8 *)*param_1;
                      func_0x000109898688(puVar1,piVar3);
                      if ((puVar1 == (undefined8 *)0x0) ||
                         ((undefined **)*puVar1 != &PTR_FUN_110bc7bb8)) {
                        puVar1 = (undefined8 *)*param_1;
                        func_0x000109898688(puVar1,piVar3);
                        if ((puVar1 == (undefined8 *)0x0) ||
                           ((undefined **)*puVar1 != &PTR_FUN_110bb3c68)) {
                          param_1 = (undefined8 *)*param_1;
                          func_0x000109898688(param_1,piVar3);
                          if ((param_1 == (undefined8 *)0x0) ||
                             ((undefined **)*param_1 != &PTR_FUN_110ba79f8)) {
                            uVar2 = 2;
                            if (*piVar3 != 3) {
                              uVar2 = 0;
                            }
                          }
                          else {
                            uVar2 = 0xb;
                          }
                        }
                        else {
                          uVar2 = 10;
                        }
                      }
                      else {
                        uVar2 = 0x16;
                      }
                    }
                    else {
                      uVar2 = 0x26;
                    }
                  }
                  else {
                    uVar2 = 0x25;
                  }
                }
                else {
                  uVar2 = 0x24;
                }
              }
              else {
                uVar2 = 0x23;
              }
            }
            else {
              uVar2 = 0x22;
            }
          }
          else {
            uVar2 = 0x1f;
          }
        }
        else {
          uVar2 = 9;
        }
      }
      else {
        uVar2 = 8;
      }
    }
    else {
      uVar2 = 7;
    }
  }
  return uVar2;
}



/* Entry: 10aca38a0; end: 10aca3a2b;  */

void FUN_10aca38a0(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined1 **ppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined1 *puStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined8 **appuStack_78 [2];
  char cStack_61;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  
  uVar1 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  FUN_10a003c90(appuStack_78,uVar1 + 1,&puStack_90);
  pppuVar4 = (undefined8 ***)appuStack_78[0];
  if (-1 < cStack_61) {
    pppuVar4 = appuStack_78;
  }
  if (uVar1 != 0) {
    plVar2 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar2 = param_2;
    }
    _memmove(pppuVar4,plVar2,uVar1);
  }
  *(undefined2 *)((long)pppuVar4 + uVar1) = 0x5b;
  __ZNSt3__19to_stringEm(&puStack_90,param_3);
  ppuVar3 = (undefined1 **)puStack_90;
  if (-1 < (char)bStack_79) {
    uStack_88 = (ulong)bStack_79;
    ppuVar3 = &puStack_90;
  }
  pppuVar4 = appuStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,ppuVar3,uStack_88);
  puStack_58 = pppuVar4[1];
  puStack_60 = *pppuVar4;
  puStack_50 = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  ppuVar5 = &puStack_60;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar5,&DAT_10f62a9ea,1);
  puVar6 = *ppuVar5;
  param_1[1] = ppuVar5[1];
  *param_1 = puVar6;
  param_1[2] = ppuVar5[2];
  ppuVar5[1] = (undefined8 *)0x0;
  ppuVar5[2] = (undefined8 *)0x0;
  *ppuVar5 = (undefined8 *)0x0;
  if ((long)puStack_50 < 0) {
    __ZdlPv(puStack_60);
  }
  if ((char)bStack_79 < '\0') {
    __ZdlPv(puStack_90);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(appuStack_78[0]);
  }
  return;
}



/* Entry: 10aca3a2c; end: 10aca3ad7;  */

void FUN_10aca3a2c(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if (param_2 < param_3) {
    do {
      FUN_10aca38a0(&uStack_68,param_1,param_2);
      uStack_48 = uStack_60;
      uStack_50 = uStack_68;
      lStack_40 = lStack_58;
      uStack_38 = 0;
      func_0x000107c2b080(&uStack_50);
      func_0x00010a364e60(param_4,&uStack_50);
      if (lStack_40 < 0) {
        __ZdlPv(uStack_50);
      }
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 10aca3ad8; end: 10aca3c83;  */

undefined8 FUN_10aca3ad8(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  plVar1 = (long *)*param_1;
  uVar2 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      if (((long)*(char *)((long)plVar1 + uVar4) < 0) ||
         ((*(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                    (long)*(char *)((long)plVar1 + uVar4) * 4 + 0x3c) >> 10 & 1) == 0)) {
        uVar3 = 0;
        goto joined_r0x00010aca3b30;
      }
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
    uVar3 = 1;
joined_r0x00010aca3b30:
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        return uVar3;
      }
      if ((char)*plVar1 != '0') {
        return uVar3;
      }
    }
  }
  return 0;
}



/* Entry: 10aca3c84; end: 10aca3ebb;  */

void FUN_10aca3c84(undefined8 *param_1)

{
  undefined8 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  byte bVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  undefined8 extraout_x8;
  undefined8 **ppuVar7;
  undefined8 ***unaff_x21;
  undefined8 ****ppppuVar8;
  undefined8 **unaff_x23;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ***unaff_x24;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  undefined8 *puStack_108;
  undefined8 **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined8 ***pppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 ***apppuStack_98 [2];
  char cStack_81;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10aca3ebc(&puStack_b0);
  ppuVar7 = (undefined8 **)puStack_b0;
  if (puStack_b0 == puStack_a8) {
    func_0x000107c2b054(param_1,&UNK_10f6a0902);
  }
  else {
    if (*(char *)((long)puStack_b0 + 0x17) < '\0') {
      func_0x000107c3192c(&ppuStack_d0,(undefined8 *)*puStack_b0,(undefined8 *)puStack_b0[1]);
    }
    else {
      puStack_c8 = (undefined8 *)puStack_b0[1];
      ppuStack_d0 = (undefined8 **)*puStack_b0;
      uStack_c0 = (undefined8 *)puStack_b0[2];
    }
    unaff_x23 = (undefined8 **)(puStack_b0 + 3);
    if (unaff_x23 != (undefined8 **)puStack_a8) {
      ppuVar7 = (undefined8 **)((ulong)uStack_c0 >> 0x38);
      do {
        ppuVar1 = (undefined8 **)puStack_c8;
        if (-1 < (char)ppuVar7) {
          ppuVar1 = ppuVar7;
        }
        FUN_10a003c90(apppuStack_98,(long)ppuVar1 + 2,&uStack_79);
        ppppuVar10 = (undefined8 ****)apppuStack_98[0];
        if (-1 < cStack_81) {
          ppppuVar10 = apppuStack_98;
        }
        if (ppuVar1 != (undefined8 **)0x0) {
          pppuVar2 = (undefined8 ***)ppuStack_d0;
          if (-1 < (long)uStack_c0) {
            pppuVar2 = &ppuStack_d0;
          }
          _memmove(ppppuVar10,pppuVar2,ppuVar1);
        }
        *(undefined2 *)((long)ppppuVar10 + (long)ppuVar1) = 0x202c;
        *(undefined1 *)((undefined2 *)((long)ppppuVar10 + (long)ppuVar1) + 1) = 0;
        puVar3 = unaff_x23[1];
        ppuVar7 = (undefined8 **)*unaff_x23;
        if (-1 < (char)*(byte *)((long)unaff_x23 + 0x17)) {
          puVar3 = (undefined8 *)(ulong)*(byte *)((long)unaff_x23 + 0x17);
          ppuVar7 = unaff_x23;
        }
        ppppuVar10 = apppuStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppuVar10,ppuVar7,puVar3);
        unaff_x21 = *ppppuVar10;
        uStack_78 = SUB87(ppppuVar10[1],0);
        uStack_71 = (undefined1)*(undefined8 *)((long)ppppuVar10 + 0xf);
        uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)ppppuVar10 + 0xf) >> 8);
        bVar4 = *(byte *)((long)ppppuVar10 + 0x17);
        ppuVar7 = (undefined8 **)(ulong)bVar4;
        *ppppuVar10 = (undefined8 ***)0x0;
        ppppuVar10[1] = (undefined8 ***)0x0;
        ppppuVar10[2] = (undefined8 ***)0x0;
        if (cStack_81 < '\0') {
          __ZdlPv(apppuStack_98[0]);
        }
        if ((long)uStack_c0 < 0) {
          __ZdlPv(ppuStack_d0);
        }
        *(undefined8 *)((ulong)&ppuStack_d0 | 8) = CONCAT17(uStack_71,uStack_78);
        *(ulong *)((long)((ulong)&ppuStack_d0 | 8) + 7) = CONCAT71(uStack_70,uStack_71);
        uStack_c0 = (undefined8 *)CONCAT17(bVar4,(undefined7)uStack_c0);
        unaff_x23 = unaff_x23 + 3;
        unaff_x24 = &ppuStack_d0;
        ppuStack_d0 = unaff_x21;
      } while (unaff_x23 != (undefined8 **)puStack_a8);
    }
    param_1[1] = puStack_c8;
    *param_1 = ppuStack_d0;
    param_1[2] = uStack_c0;
    puStack_c8 = (undefined8 **)0x0;
    uStack_c0 = (undefined8 *)0x0;
    ppuStack_d0 = (undefined8 ***)0x0;
  }
  apppuStack_98[0] = (undefined8 ***)&puStack_b0;
  ppppuVar10 = apppuStack_98;
  FUN_10a0426d8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    uStack_78 = SUB87(&puStack_b0,0);
    uStack_71 = (undefined1)((ulong)&puStack_b0 >> 0x38);
    FUN_10a0426d8(&uStack_78);
    ppppuVar6 = ppppuVar10;
    __Unwind_Resume();
    pcStack_d8 = FUN_10aca3ebc;
    uStack_120 = 0;
    uStack_118 = 0;
    ppppuVar9 = (undefined8 ****)ppppuVar6[0x3a];
    puStack_e0 = &stack0xfffffffffffffff0;
    puStack_128 = &uStack_120;
    pppuStack_e8 = ppppuVar10;
    puStack_f0 = ppuVar7;
    ppuStack_f8 = unaff_x21;
    puStack_108 = unaff_x23;
    puStack_110 = (undefined1 *)unaff_x24;
    while (ppppuVar9 != ppppuVar6 + 0x3b) {
      func_0x000107c2a6b0(&puStack_128,ppppuVar9 + 4,ppppuVar9 + 4);
      ppppuVar10 = (undefined8 ****)ppppuVar9[1];
      ppppuVar8 = ppppuVar9;
      if ((undefined8 ****)ppppuVar9[1] == (undefined8 ****)0x0) {
        do {
          ppppuVar9 = (undefined8 ****)ppppuVar8[2];
          bVar5 = (undefined8 ****)*ppppuVar9 != ppppuVar8;
          ppppuVar8 = ppppuVar9;
        } while (bVar5);
      }
      else {
        do {
          ppppuVar9 = ppppuVar10;
          ppppuVar10 = (undefined8 ****)*ppppuVar9;
        } while ((undefined8 ****)*ppppuVar9 != (undefined8 ****)0x0);
      }
    }
    ppppuVar10 = (undefined8 ****)ppppuVar6[0x31];
    while (ppppuVar10 != ppppuVar6 + 0x32) {
      ppppuVar9 = ppppuVar6;
      FUN_10aca9f80(ppppuVar6,ppppuVar10 + 4);
      if (((ulong)ppppuVar9 & 1) == 0) {
        func_0x000107c2a6b0(&puStack_128,ppppuVar10 + 4,ppppuVar10 + 4);
      }
      ppppuVar9 = (undefined8 ****)ppppuVar10[1];
      ppppuVar8 = ppppuVar10;
      if ((undefined8 ****)ppppuVar10[1] == (undefined8 ****)0x0) {
        do {
          ppppuVar10 = (undefined8 ****)ppppuVar8[2];
          bVar5 = (undefined8 ****)*ppppuVar10 != ppppuVar8;
          ppppuVar8 = ppppuVar10;
        } while (bVar5);
      }
      else {
        do {
          ppppuVar10 = ppppuVar9;
          ppppuVar9 = (undefined8 ****)*ppppuVar10;
        } while ((undefined8 ****)*ppppuVar10 != (undefined8 ****)0x0);
      }
    }
    ppppuVar10 = (undefined8 ****)ppppuVar6[0x34];
    while (ppppuVar10 != ppppuVar6 + 0x35) {
      func_0x000107c2a6b0(&puStack_128,ppppuVar10 + 4,ppppuVar10 + 4);
      ppppuVar9 = (undefined8 ****)ppppuVar10[1];
      ppppuVar8 = ppppuVar10;
      if ((undefined8 ****)ppppuVar10[1] == (undefined8 ****)0x0) {
        do {
          ppppuVar10 = (undefined8 ****)ppppuVar8[2];
          bVar5 = (undefined8 ****)*ppppuVar10 != ppppuVar8;
          ppppuVar8 = ppppuVar10;
        } while (bVar5);
      }
      else {
        do {
          ppppuVar10 = ppppuVar9;
          ppppuVar9 = (undefined8 ****)*ppppuVar10;
        } while ((undefined8 ****)*ppppuVar10 != (undefined8 ****)0x0);
      }
    }
    FUN_10acb63c0(extraout_x8,puStack_128,&uStack_120);
    func_0x000107c27bf0(&puStack_128,uStack_120);
    return;
  }
  return;
}



/* Entry: 10aca3ebc; end: 10aca405b;  */

void FUN_10aca3ebc(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0;
  plVar5 = *(long **)(param_2 + 0x1d0);
  puStack_58 = &uStack_50;
  while (plVar5 != (long *)(param_2 + 0x1d8)) {
    func_0x000107c2a6b0(&puStack_58,plVar5 + 4,plVar5 + 4);
    plVar1 = (long *)plVar5[1];
    plVar4 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar4[2];
        bVar2 = (long *)*plVar5 != plVar4;
        plVar4 = plVar5;
      } while (bVar2);
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  plVar5 = *(long **)(param_2 + 0x188);
  while (plVar5 != (long *)(param_2 + 400)) {
    uVar3 = param_2;
    FUN_10aca9f80(param_2,plVar5 + 4);
    if ((uVar3 & 1) == 0) {
      func_0x000107c2a6b0(&puStack_58,plVar5 + 4,plVar5 + 4);
    }
    plVar1 = (long *)plVar5[1];
    plVar4 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar4[2];
        bVar2 = (long *)*plVar5 != plVar4;
        plVar4 = plVar5;
      } while (bVar2);
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  plVar5 = *(long **)(param_2 + 0x1a0);
  while (plVar5 != (long *)(param_2 + 0x1a8)) {
    func_0x000107c2a6b0(&puStack_58,plVar5 + 4,plVar5 + 4);
    plVar1 = (long *)plVar5[1];
    plVar4 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar4[2];
        bVar2 = (long *)*plVar5 != plVar4;
        plVar4 = plVar5;
      } while (bVar2);
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  FUN_10acb63c0(param_1,puStack_58,&uStack_50);
  func_0x000107c27bf0(&puStack_58,uStack_50);
  return;
}



/* Entry: 10aca405c; end: 10aca490f;  */

void FUN_10aca405c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,long *param_7)

{
  code *pcVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ushort uVar13;
  ushort uVar14;
  int iStack_f8;
  undefined4 uStack_f4;
  long *plStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 auStack_a0 [2];
  char cStack_89;
  ulong uStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  FUN_10a0d09b4(auStack_a0);
  plVar9 = (long *)(param_5 + 400);
  plVar7 = *(long **)(param_5 + 400);
  plVar3 = plVar9;
  if (plVar7 != (long *)0x0) {
    do {
      lVar6 = 8;
      if (uStack_88 <= (ulong)plVar7[7]) {
        lVar6 = 0;
        plVar3 = plVar7;
      }
      plVar7 = *(long **)((long)plVar7 + lVar6);
    } while (plVar7 != (long *)0x0);
    if ((plVar3 != plVar9) && ((ulong)plVar3[7] <= uStack_88)) {
      lVar6 = plVar3[8];
      switch(*(undefined2 *)(lVar6 + 0x20)) {
      case 1:
        uStack_e0 = (undefined8 *)CONCAT71(uStack_e0._1_7_,*(undefined1 *)(lVar6 + 0x24));
        FUN_10a351b5c(param_7,&uStack_e0);
        break;
      case 2:
        uStack_e0 = (undefined8 *)CONCAT44(uStack_e0._4_4_,*(undefined4 *)(lVar6 + 0x24));
        func_0x00010a368134(param_7,&uStack_e0);
        break;
      case 3:
        uStack_e0 = (undefined8 *)CONCAT44(uStack_e0._4_4_,*(undefined4 *)(lVar6 + 0x24));
        FUN_10a3680dc(param_7,&uStack_e0);
        break;
      case 6:
        uStack_e0 = (undefined8 *)CONCAT44(uStack_e0._4_4_,*(undefined4 *)(lVar6 + 0x24));
        FUN_10a368728(param_7,&uStack_e0);
        break;
      case 7:
        uStack_e0 = *(undefined8 **)(lVar6 + 0x24);
        func_0x00010a36818c(param_7,&uStack_e0);
        break;
      case 8:
        uStack_e0 = *(undefined8 **)(lVar6 + 0x24);
        uStack_d8 = (long *)CONCAT44(uStack_d8._4_4_,*(undefined4 *)(lVar6 + 0x2c));
        func_0x00010a3681e8(param_7,&uStack_e0);
        break;
      case 9:
        FUN_10a0dad84();
        uStack_e0 = (undefined8 *)CONCAT44(param_2,param_1);
        uStack_d8 = (long *)CONCAT44(param_4,param_3);
        func_0x00010a368244(param_7,&uStack_e0);
        break;
      case 10:
        uStack_d8 = *(long **)(lVar6 + 0x2c);
        uStack_e0 = *(undefined8 **)(lVar6 + 0x24);
        uStack_c8 = *(ulong *)(lVar6 + 0x3c);
        lStack_d0 = *(long *)(lVar6 + 0x34);
        uStack_c0 = CONCAT44(uStack_c0._4_4_,*(undefined4 *)(lVar6 + 0x44));
        FUN_10a3684c4(param_7,&uStack_e0);
        break;
      case 0xb:
        uStack_d8 = *(long **)(lVar6 + 0x2c);
        uStack_e0 = *(undefined8 **)(lVar6 + 0x24);
        uStack_c8 = *(ulong *)(lVar6 + 0x3c);
        lStack_d0 = *(long *)(lVar6 + 0x34);
        uStack_b8 = *(undefined8 *)(lVar6 + 0x4c);
        uStack_c0 = *(undefined8 *)(lVar6 + 0x44);
        uStack_a8 = *(undefined8 *)(lVar6 + 0x5c);
        uStack_b0 = *(undefined8 *)(lVar6 + 0x54);
        FUN_10a3685f4(param_7,&uStack_e0);
        break;
      case 0x16:
        FUN_10aca4910();
        uStack_e0 = (undefined8 *)CONCAT44(param_2,param_1);
        uStack_d8 = (long *)CONCAT44(param_4,param_3);
        func_0x00010a3682a0(param_7,&uStack_e0);
        break;
      case 0x1f:
        uStack_e0 = *(undefined8 **)(lVar6 + 0x24);
        FUN_10a368780(param_7,&uStack_e0);
        break;
      case 0x22:
        uStack_e0 = *(undefined8 **)(lVar6 + 0x24);
        uStack_d8 = (long *)CONCAT44(uStack_d8._4_4_,*(undefined4 *)(lVar6 + 0x2c));
        FUN_10a3689a4(param_7,&uStack_e0);
        break;
      case 0x23:
        uStack_d8 = *(long **)(lVar6 + 0x2c);
        uStack_e0 = *(undefined8 **)(lVar6 + 0x24);
        FUN_10a368bd0(param_7,&uStack_e0);
        break;
      case 0x24:
        uStack_e0 = *(undefined8 **)(lVar6 + 0x24);
        FUN_10a368df4(param_7,&uStack_e0);
        break;
      case 0x25:
        uStack_e0 = *(undefined8 **)(lVar6 + 0x24);
        uStack_d8 = (long *)CONCAT44(uStack_d8._4_4_,*(undefined4 *)(lVar6 + 0x2c));
        FUN_10a369018(param_7,&uStack_e0);
        break;
      case 0x26:
        uStack_d8 = *(long **)(lVar6 + 0x2c);
        uStack_e0 = *(undefined8 **)(lVar6 + 0x24);
        FUN_10a369244(param_7,&uStack_e0);
      }
      goto LAB_10aca426c;
    }
  }
  lVar6 = *(long *)(param_5 + 0x1a8);
  if (lVar6 != 0) {
    lVar8 = param_5 + 0x1a8;
    do {
      lVar11 = 8;
      if (uStack_88 <= *(ulong *)(lVar6 + 0x38)) {
        lVar11 = 0;
        lVar8 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar11);
    } while (lVar6 != 0);
    if ((lVar8 != param_5 + 0x1a8) && (*(ulong *)(lVar8 + 0x38) <= uStack_88)) {
      FUN_10a1f92d8(param_7,*(long *)(lVar8 + 0x40) + 0x188);
      goto LAB_10aca426c;
    }
  }
  lVar6 = *(long *)(param_5 + 0x1d8);
  if (lVar6 != 0) {
    lVar8 = param_5 + 0x1d8;
    do {
      lVar11 = 8;
      if (uStack_88 <= *(ulong *)(lVar6 + 0x38)) {
        lVar11 = 0;
        lVar8 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar11);
    } while (lVar6 != 0);
    if ((lVar8 != param_5 + 0x1d8) && (*(ulong *)(lVar8 + 0x38) <= uStack_88)) {
      uVar10 = *(ulong *)(lVar8 + 0x40);
      if (uVar10 == 0) {
        lVar8 = 0;
        lVar6 = 0;
      }
      else {
        uVar12 = 0;
        uVar13 = 0;
        do {
          FUN_10aca38a0(&iStack_f8,param_6,uVar12);
          uStack_e0 = (undefined8 *)CONCAT44(uStack_f4,iStack_f8);
          uStack_d8 = plStack_f0;
          lStack_d0 = lStack_e8;
          uStack_c8 = 0;
          func_0x000107c2b080(&uStack_e0);
          plVar7 = (long *)*plVar9;
          plVar3 = plVar9;
          if (plVar7 == (long *)0x0) {
LAB_10aca41d4:
            bVar2 = false;
            uVar14 = uVar13;
          }
          else {
            do {
              lVar6 = 8;
              if (uStack_c8 <= (ulong)plVar7[7]) {
                lVar6 = 0;
                plVar3 = plVar7;
              }
              plVar7 = *(long **)((long)plVar7 + lVar6);
            } while (plVar7 != (long *)0x0);
            if ((plVar3 == plVar9) || (uStack_c8 < (ulong)plVar3[7])) goto LAB_10aca41d4;
            bVar2 = *(ushort *)(plVar3[8] + 0x20) != 0;
            uVar14 = *(ushort *)(plVar3[8] + 0x20);
            if (!bVar2) {
              uVar14 = uVar13;
            }
          }
          if (lStack_d0 < 0) {
            __ZdlPv(uStack_e0);
          }
          uVar12 = uVar12 + 1;
          if (uVar12 == uVar10) {
            bVar2 = true;
          }
          uVar13 = uVar14;
        } while (!bVar2);
        if (uVar14 < 0xb) {
          if (uVar14 < 7) {
            if (uVar14 == 1) {
              FUN_10aca493c(param_5,param_6,uVar10,param_7);
              goto LAB_10aca426c;
            }
            if (uVar14 == 2) {
              FUN_10aca7104(param_5,param_6,uVar10,param_7);
              goto LAB_10aca426c;
            }
            if (uVar14 == 3) {
              FUN_10aca4bec(param_5,param_6,uVar10,param_7);
              goto LAB_10aca426c;
            }
          }
          else if (uVar14 < 9) {
            if (uVar14 == 7) {
              FUN_10aca4eb0(param_5,param_6,uVar10,param_7);
              goto LAB_10aca426c;
            }
            if (uVar14 == 8) {
              FUN_10aca5194(param_5,param_6,uVar10,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar14 == 9) {
              FUN_10aca546c(param_5,param_6,uVar10,param_7);
              goto LAB_10aca426c;
            }
            if (uVar14 == 10) {
              FUN_10aca6b24(param_5,param_6,uVar10,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar14 < 0x23) {
          if (uVar14 < 0x1f) {
            if (uVar14 == 0xb) {
              FUN_10aca6e14(param_5,param_6,uVar10,param_7);
              goto LAB_10aca426c;
            }
            if (uVar14 == 0x16) {
              FUN_10aca685c(param_5,param_6,uVar10,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar14 == 0x1f) {
              FUN_10aca5734(param_5,param_6,uVar10,param_7);
              goto LAB_10aca426c;
            }
            if (uVar14 == 0x22) {
              FUN_10aca5a18(param_5,param_6,uVar10,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar14 < 0x25) {
          if (uVar14 == 0x23) {
            FUN_10aca5ce8(param_5,param_6,uVar10,param_7);
            goto LAB_10aca426c;
          }
          if (uVar14 == 0x24) {
            FUN_10aca5fc8(param_5,param_6,uVar10,param_7);
            goto LAB_10aca426c;
          }
        }
        else {
          if (uVar14 == 0x25) {
            FUN_10aca62ac(param_5,param_6,uVar10,param_7);
            goto LAB_10aca426c;
          }
          if (uVar14 == 0x26) {
            FUN_10aca657c(param_5,param_6,uVar10,param_7);
            goto LAB_10aca426c;
          }
        }
        if (uVar10 >> 0x3d != 0) {
          FUN_10acb63ac();
LAB_10aca48cc:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10aca48d0);
          (*pcVar1)();
        }
        lVar8 = uVar10 * 8;
        __Znwm();
        _bzero();
        lVar6 = lVar8 + uVar10 * 8;
      }
      plVar9 = (long *)*param_7;
      lVar11 = lVar6 - lVar8 >> 3;
      (**(code **)(*plVar9 + 600))(&uStack_e0,plVar9,lVar11);
      apuStack_70[0] = uStack_e0;
      if (lVar6 != lVar8) {
        lVar6 = 0;
        do {
          plVar3 = plVar9;
          (**(code **)(*plVar9 + 0x58))();
          if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
          plVar7 = (long *)plVar3[4];
          if (plVar7 == (long *)0x0) {
            func_0x000109899fd8(plVar3);
            plVar7 = (long *)plVar3[4];
          }
          plVar3[4] = *plVar7;
          plVar7[1] = 0;
          plVar7[2] = 0;
          *plVar7 = (long)&PTR_FUN_110c6bfc0;
          plVar4 = plVar9;
          (**(code **)(*plVar9 + 0x58))();
          plVar3 = plVar4;
          FUN_10a065534();
          if (plVar3 == (long *)0x0) {
            if ((*(byte *)(plVar4 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
            plVar3 = plVar4 + 0x1b;
          }
          uStack_e0 = (undefined8 *)CONCAT44(uStack_e0._4_4_,7);
          plVar5 = plVar9;
          (**(code **)(*plVar9 + 0x98))(plVar9,*plVar3);
          uStack_d8 = plVar5;
          (**(code **)(*plVar9 + 0x2f8))(&plStack_f0,plVar9,plVar7,plVar4,&UNK_10989ba24,&uStack_e0)
          ;
          iStack_f8 = 7;
          if ((3 < (int)uStack_e0) && (uStack_d8 != (long *)0x0)) {
            (**(code **)*uStack_d8)();
          }
          (**(code **)(*plVar9 + 0x290))(plVar9,apuStack_70,lVar6,&iStack_f8);
          if ((3 < iStack_f8) && (plStack_f0 != (long *)0x0)) {
            (**(code **)*plStack_f0)();
          }
          lVar6 = lVar6 + 1;
        } while (lVar11 != lVar6);
      }
      aiStack_80[0] = 7;
      puStack_78 = apuStack_70[0];
      func_0x0001098968d0(param_7 + 1,aiStack_80);
      if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
        (**(code **)*puStack_78)();
      }
      if (lVar8 != 0) {
        __ZdlPv(lVar8);
      }
    }
  }
LAB_10aca426c:
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  return;
}



/* Entry: 10aca4910; end: 10aca493b;  */

undefined8 * FUN_10aca4910(long param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x20;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  uint uVar16;
  undefined8 *puVar17;
  int iStack_2a8;
  undefined4 uStack_2a4;
  undefined8 *puStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  long lStack_280;
  ulong uStack_278;
  long lStack_270;
  long lStack_268;
  undefined8 *puStack_258;
  int iStack_1f8;
  undefined4 uStack_1f4;
  undefined8 *puStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  undefined8 *puStack_1b8;
  int iStack_148;
  undefined4 uStack_144;
  undefined8 *puStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined8 *puStack_108;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 *puStack_68;
  
  if (*(short *)(param_1 + 0x20) == 0x16) {
    return (undefined8 *)(ulong)*(uint *)(param_1 + 0x24);
  }
  puVar4 = &UNK_10f6399e9;
  FUN_10a00946c();
  if (-1 < (long)param_3) {
    lVar13 = param_3 << 1;
    __Znwm();
    _bzero();
    uVar14 = 0;
    puVar1 = (undefined8 *)(puVar4 + 400);
    uVar2 = (long)(param_3 << 1) >> 1;
    do {
      FUN_10aca38a0(&iStack_a8,param_2,uVar14);
      puVar17 = (undefined8 *)CONCAT44(uStack_a4,iStack_a8);
      puStack_88 = puStack_a0;
      lStack_80 = lStack_98;
      uStack_78 = 0;
      puStack_90 = puVar17;
      func_0x000107c2b080(&puStack_90);
      puVar9 = (undefined8 *)*puVar1;
      puVar7 = puVar1;
      if (puVar9 != (undefined8 *)0x0) {
        do {
          lVar11 = 8;
          if (uStack_78 <= (ulong)puVar9[7]) {
            lVar11 = 0;
            puVar7 = puVar9;
          }
          puVar9 = *(undefined8 **)((long)puVar9 + lVar11);
        } while (puVar9 != (undefined8 *)0x0);
        if ((puVar7 != puVar1) && ((ulong)puVar7[7] <= uStack_78)) {
          if (*(short *)(puVar7[8] + 0x20) != 1) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca4bc4;
          }
          if (uVar2 <= uVar14) goto LAB_10aca4bc4;
          *(ushort *)(lVar13 + uVar14 * 2) = *(byte *)(puVar7[8] + 0x24) | 0x100;
        }
      }
      if (lStack_80 < 0) {
        __ZdlPv(puStack_90);
      }
      uVar14 = uVar14 + 1;
      if (uVar14 == param_3) {
        plVar10 = (long *)*param_4;
        (**(code **)(*plVar10 + 600))(&puStack_90,plVar10,uVar2);
        uVar14 = 0;
        puStack_68 = puStack_90;
        pcVar15 = (char *)(lVar13 + 1);
        do {
          if (*pcVar15 == '\x01') {
            puStack_88 = (undefined8 *)CONCAT71(puStack_88._1_7_,pcVar15[-1]);
            uVar6 = 2;
          }
          else {
            uVar6 = 1;
          }
          puStack_90 = (undefined8 *)CONCAT44(puStack_90._4_4_,uVar6);
          (**(code **)(*plVar10 + 0x290))(plVar10,&puStack_68,uVar14,&puStack_90);
          if ((3 < (int)puStack_90) && (puStack_88 != (undefined8 *)0x0)) {
            (**(code **)*puStack_88)();
          }
          uVar14 = uVar14 + 1;
          pcVar15 = pcVar15 + 2;
        } while (uVar2 != uVar14);
        iStack_a8 = 7;
        puStack_a0 = puStack_68;
        func_0x0001098968d0(param_4 + 1,&iStack_a8);
        if ((3 < iStack_a8) && (puStack_a0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_a0)();
        }
        __ZdlPv(lVar13);
        return puVar17;
      }
    } while( true );
  }
  FUN_10acd491c();
  if ((int)param_2 == 1) {
    ___cxa_begin_catch(puVar4);
    func_0x000109896b78(*unaff_x20,puVar4);
LAB_10aca4bc4:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aca4bc8);
    (*pcVar3)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_3 >> 0x3d == 0) {
    puVar5 = (undefined1 *)(param_3 << 3);
    __Znwm();
    puVar8 = puVar5;
    do {
      *puVar8 = 0;
      puVar8[4] = 0;
      puVar8 = puVar8 + 8;
    } while (puVar8 != puVar5 + param_3 * 8);
    uVar14 = 0;
    puVar1 = (undefined8 *)(puVar4 + 400);
    do {
      FUN_10aca38a0(&iStack_148,param_2,uVar14);
      puVar17 = (undefined8 *)CONCAT44(uStack_144,iStack_148);
      puStack_128 = puStack_140;
      lStack_120 = lStack_138;
      uStack_118 = 0;
      puStack_130 = puVar17;
      func_0x000107c2b080(&puStack_130);
      puVar9 = (undefined8 *)*puVar1;
      puVar7 = puVar1;
      if (puVar9 != (undefined8 *)0x0) {
        do {
          lVar13 = 8;
          if (uStack_118 <= (ulong)puVar9[7]) {
            lVar13 = 0;
            puVar7 = puVar9;
          }
          puVar9 = *(undefined8 **)((long)puVar9 + lVar13);
        } while (puVar9 != (undefined8 *)0x0);
        if ((puVar7 != puVar1) && ((ulong)puVar7[7] <= uStack_118)) {
          if (*(short *)(puVar7[8] + 0x20) != 3) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca4e88;
          }
          uVar16 = *(uint *)(puVar7[8] + 0x24);
          puVar17 = (undefined8 *)(ulong)uVar16;
          *(uint *)(puVar5 + uVar14 * 8) = uVar16;
          *(undefined1 *)((long)(puVar5 + uVar14 * 8) + 4) = 1;
        }
      }
      if (lStack_120 < 0) {
        __ZdlPv(puStack_130);
      }
      uVar14 = uVar14 + 1;
      if (uVar14 == param_3) {
        plVar10 = (long *)*param_4;
        (**(code **)(*plVar10 + 600))(&puStack_130,plVar10,param_3);
        uVar14 = 0;
        puStack_108 = puStack_130;
        pcVar15 = puVar5 + 4;
        do {
          if (*pcVar15 == '\x01') {
            puVar17 = (undefined8 *)(double)*(float *)(pcVar15 + -4);
            uVar6 = 3;
            puStack_128 = puVar17;
          }
          else {
            uVar6 = 1;
          }
          puStack_130 = (undefined8 *)CONCAT44(puStack_130._4_4_,uVar6);
          (**(code **)(*plVar10 + 0x290))(plVar10,&puStack_108,uVar14,&puStack_130);
          if ((3 < (int)puStack_130) && (puStack_128 != (undefined8 *)0x0)) {
            (**(code **)*puStack_128)();
          }
          uVar14 = uVar14 + 1;
          pcVar15 = pcVar15 + 8;
        } while (param_3 != uVar14);
        iStack_148 = 7;
        puStack_140 = puStack_108;
        func_0x0001098968d0(param_4 + 1,&iStack_148);
        if ((3 < iStack_148) && (puStack_140 != (undefined8 *)0x0)) {
          (**(code **)*puStack_140)();
        }
        __ZdlPv(puVar5);
        return puVar17;
      }
    } while( true );
  }
  func_0x00010acd4930();
  if ((int)param_2 == 1) {
    ___cxa_begin_catch(puVar4);
    func_0x000109896b78(*unaff_x20,puVar4);
LAB_10aca4e88:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aca4e8c);
    (*pcVar3)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_3 < 0x1555555555555556) {
    puVar5 = (undefined1 *)(param_3 * 0xc);
    __Znwm();
    puVar8 = puVar5;
    do {
      *puVar8 = 0;
      puVar8[8] = 0;
      puVar8 = puVar8 + 0xc;
    } while (puVar8 != puVar5 + param_3 * 0xc);
    uVar14 = 0;
    puVar1 = (undefined8 *)(puVar4 + 400);
    do {
      FUN_10aca38a0(&iStack_1f8,param_2,uVar14);
      puVar17 = (undefined8 *)CONCAT44(uStack_1f4,iStack_1f8);
      puStack_1d8 = puStack_1f0;
      lStack_1d0 = lStack_1e8;
      uStack_1c8 = 0;
      puStack_1e0 = puVar17;
      func_0x000107c2b080(&puStack_1e0);
      puVar9 = (undefined8 *)*puVar1;
      puVar7 = puVar1;
      if (puVar9 != (undefined8 *)0x0) {
        do {
          lVar13 = 8;
          if (uStack_1c8 <= (ulong)puVar9[7]) {
            lVar13 = 0;
            puVar7 = puVar9;
          }
          puVar9 = *(undefined8 **)((long)puVar9 + lVar13);
        } while (puVar9 != (undefined8 *)0x0);
        if ((puVar7 != puVar1) && ((ulong)puVar7[7] <= uStack_1c8)) {
          if (*(short *)(puVar7[8] + 0x20) != 7) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca516c;
          }
          puVar17 = *(undefined8 **)(puVar7[8] + 0x24);
          puVar7 = (undefined8 *)(puVar5 + uVar14 * 0xc);
          if ((*(byte *)(puVar7 + 1) & 1) == 0) {
            *(undefined1 *)(puVar7 + 1) = 1;
          }
          *puVar7 = puVar17;
        }
      }
      if (lStack_1d0 < 0) {
        __ZdlPv(puStack_1e0);
      }
      uVar14 = uVar14 + 1;
      if (uVar14 == param_3) {
        plVar10 = (long *)*param_4;
        (**(code **)(*plVar10 + 600))(&puStack_1e0,plVar10,param_3);
        uVar14 = 0;
        puStack_1b8 = puStack_1e0;
        puVar8 = puVar5;
        do {
          if ((puVar8[8] & 1) == 0) {
            puStack_1e0 = (undefined8 *)CONCAT44(puStack_1e0._4_4_,1);
          }
          else {
            FUN_10a07aef4(&puStack_1e0,plVar10,puVar8);
          }
          (**(code **)(*plVar10 + 0x290))(plVar10,&puStack_1b8,uVar14,&puStack_1e0);
          if ((3 < (int)puStack_1e0) && (puStack_1d8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_1d8)();
          }
          uVar14 = uVar14 + 1;
          puVar8 = puVar8 + 0xc;
        } while (param_3 != uVar14);
        iStack_1f8 = 7;
        puStack_1f0 = puStack_1b8;
        func_0x0001098968d0(param_4 + 1,&iStack_1f8);
        if ((3 < iStack_1f8) && (puStack_1f0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_1f0)();
        }
        __ZdlPv(puVar5);
        return puVar17;
      }
    } while( true );
  }
  func_0x00010acd4944();
  if ((int)param_2 != 1) {
    __ZdlPv();
    __Unwind_Resume();
    FUN_10acd4958(&lStack_270,param_3);
    uVar14 = 0;
    puVar1 = (undefined8 *)(puVar4 + 400);
    do {
      FUN_10aca38a0(&iStack_2a8,param_2,uVar14);
      puVar17 = (undefined8 *)CONCAT44(uStack_2a4,iStack_2a8);
      puStack_288 = puStack_2a0;
      lStack_280 = lStack_298;
      uStack_278 = 0;
      puStack_290 = puVar17;
      func_0x000107c2b080(&puStack_290);
      puVar9 = (undefined8 *)*puVar1;
      puVar7 = puVar1;
      if (puVar9 != (undefined8 *)0x0) {
        do {
          lVar13 = 8;
          if (uStack_278 <= (ulong)puVar9[7]) {
            lVar13 = 0;
            puVar7 = puVar9;
          }
          puVar9 = *(undefined8 **)((long)puVar9 + lVar13);
        } while (puVar9 != (undefined8 *)0x0);
        if ((puVar7 != puVar1) && ((ulong)puVar7[7] <= uStack_278)) {
          lVar13 = puVar7[8];
          if (*(short *)(lVar13 + 0x20) != 8) {
            FUN_10a00946c(&UNK_10f6399e9);
LAB_10aca543c:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10aca5440);
            (*pcVar3)();
          }
          if ((ulong)(lStack_268 - lStack_270 >> 4) <= uVar14) goto LAB_10aca543c;
          uVar16 = *(uint *)(lVar13 + 0x2c);
          puVar17 = (undefined8 *)(ulong)uVar16;
          puVar7 = (undefined8 *)(lStack_270 + uVar14 * 0x10);
          *puVar7 = *(undefined8 *)(lVar13 + 0x24);
          *(uint *)(puVar7 + 1) = uVar16;
          if ((*(byte *)((long)puVar7 + 0xc) & 1) == 0) {
            *(undefined1 *)((long)puVar7 + 0xc) = 1;
          }
        }
      }
      if (lStack_280 < 0) {
        __ZdlPv(puStack_290);
      }
      lVar13 = lStack_270;
      uVar14 = uVar14 + 1;
      if (uVar14 == param_3) {
        plVar10 = (long *)*param_4;
        lVar11 = lStack_268 - lStack_270 >> 4;
        (**(code **)(*plVar10 + 600))(&puStack_290,plVar10,lVar11);
        puStack_258 = puStack_290;
        if (lStack_268 != lVar13) {
          lVar12 = 0;
          do {
            if ((*(byte *)(lVar13 + 0xc) & 1) == 0) {
              puStack_290 = (undefined8 *)CONCAT44(puStack_290._4_4_,1);
            }
            else {
              FUN_10a0881b8(&puStack_290,plVar10,lVar13);
            }
            (**(code **)(*plVar10 + 0x290))(plVar10,&puStack_258,lVar12,&puStack_290);
            if ((3 < (int)puStack_290) && (puStack_288 != (undefined8 *)0x0)) {
              (**(code **)*puStack_288)();
            }
            lVar12 = lVar12 + 1;
            lVar13 = lVar13 + 0x10;
          } while (lVar11 != lVar12);
        }
        iStack_2a8 = 7;
        puStack_2a0 = puStack_258;
        func_0x0001098968d0(param_4 + 1,&iStack_2a8);
        if ((3 < iStack_2a8) && (puStack_2a0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_2a0)();
        }
        if (lStack_270 != 0) {
          lStack_268 = lStack_270;
          __ZdlPv();
        }
        return puVar17;
      }
    } while( true );
  }
  ___cxa_begin_catch(puVar4);
  func_0x000109896b78(*unaff_x20,puVar4);
LAB_10aca516c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aca5170);
  (*pcVar3)();
}



/* Entry: 10aca493c; end: 10aca4beb;  */

void FUN_10aca493c(long param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 *unaff_x20;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  int iStack_298;
  undefined4 uStack_294;
  undefined8 *puStack_290;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  long lStack_270;
  ulong uStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 *puStack_248;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined8 *puStack_1e0;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  undefined8 *puStack_1a8;
  int iStack_138;
  undefined4 uStack_134;
  undefined8 *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  ulong uStack_108;
  undefined8 *puStack_f8;
  int iStack_98;
  undefined4 uStack_94;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 *puStack_58;
  
  if ((long)param_3 < 0) {
    FUN_10acd491c();
    if ((int)param_2 != 1) {
      __ZdlPv();
      __Unwind_Resume();
      if (param_3 >> 0x3d != 0) {
        func_0x00010acd4930();
        if ((int)param_2 != 1) {
          __ZdlPv();
          __Unwind_Resume();
          if (0x1555555555555555 < param_3) {
            func_0x00010acd4944();
            if ((int)param_2 != 1) {
              __ZdlPv();
              __Unwind_Resume();
              FUN_10acd4958(&lStack_260,param_3);
              uVar12 = 0;
              plVar8 = (long *)(param_1 + 400);
              do {
                FUN_10aca38a0(&iStack_298,param_2,uVar12);
                puStack_280 = (undefined8 *)CONCAT44(uStack_294,iStack_298);
                puStack_278 = puStack_290;
                lStack_270 = lStack_288;
                uStack_268 = 0;
                func_0x000107c2b080(&puStack_280);
                plVar7 = (long *)*plVar8;
                plVar5 = plVar8;
                if (plVar7 != (long *)0x0) {
                  do {
                    lVar11 = 8;
                    if (uStack_268 <= (ulong)plVar7[7]) {
                      lVar11 = 0;
                      plVar5 = plVar7;
                    }
                    plVar7 = *(long **)((long)plVar7 + lVar11);
                  } while (plVar7 != (long *)0x0);
                  if ((plVar5 != plVar8) && ((ulong)plVar5[7] <= uStack_268)) {
                    lVar11 = plVar5[8];
                    if (*(short *)(lVar11 + 0x20) != 8) {
                      FUN_10a00946c(&UNK_10f6399e9);
LAB_10aca543c:
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca5440);
                      (*pcVar2)();
                    }
                    if ((ulong)(lStack_258 - lStack_260 >> 4) <= uVar12) goto LAB_10aca543c;
                    uVar14 = *(undefined4 *)(lVar11 + 0x2c);
                    puVar4 = (undefined8 *)(lStack_260 + uVar12 * 0x10);
                    *puVar4 = *(undefined8 *)(lVar11 + 0x24);
                    *(undefined4 *)(puVar4 + 1) = uVar14;
                    if ((*(byte *)((long)puVar4 + 0xc) & 1) == 0) {
                      *(undefined1 *)((long)puVar4 + 0xc) = 1;
                    }
                  }
                }
                if (lStack_270 < 0) {
                  __ZdlPv(puStack_280);
                }
                lVar11 = lStack_260;
                uVar12 = uVar12 + 1;
                if (uVar12 == param_3) {
                  plVar8 = (long *)*param_4;
                  lVar9 = lStack_258 - lStack_260 >> 4;
                  (**(code **)(*plVar8 + 600))(&puStack_280,plVar8,lVar9);
                  puStack_248 = puStack_280;
                  if (lStack_258 != lVar11) {
                    lVar10 = 0;
                    do {
                      if ((*(byte *)(lVar11 + 0xc) & 1) == 0) {
                        puStack_280 = (undefined8 *)CONCAT44(puStack_280._4_4_,1);
                      }
                      else {
                        FUN_10a0881b8(&puStack_280,plVar8,lVar11);
                      }
                      (**(code **)(*plVar8 + 0x290))(plVar8,&puStack_248,lVar10,&puStack_280);
                      if ((3 < (int)puStack_280) && (puStack_278 != (undefined8 *)0x0)) {
                        (**(code **)*puStack_278)();
                      }
                      lVar10 = lVar10 + 1;
                      lVar11 = lVar11 + 0x10;
                    } while (lVar9 != lVar10);
                  }
                  iStack_298 = 7;
                  puStack_290 = puStack_248;
                  func_0x0001098968d0(param_4 + 1,&iStack_298);
                  if ((3 < iStack_298) && (puStack_290 != (undefined8 *)0x0)) {
                    (**(code **)*puStack_290)();
                  }
                  if (lStack_260 != 0) {
                    lStack_258 = lStack_260;
                    __ZdlPv();
                  }
                  return;
                }
              } while( true );
            }
            ___cxa_begin_catch(param_1);
            func_0x000109896b78(*unaff_x20,param_1);
LAB_10aca516c:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca5170);
            (*pcVar2)();
          }
          puVar3 = (undefined1 *)(param_3 * 0xc);
          __Znwm();
          puVar6 = puVar3;
          do {
            *puVar6 = 0;
            puVar6[8] = 0;
            puVar6 = puVar6 + 0xc;
          } while (puVar6 != puVar3 + param_3 * 0xc);
          uVar12 = 0;
          plVar8 = (long *)(param_1 + 400);
          do {
            FUN_10aca38a0(&iStack_1e8,param_2,uVar12);
            puStack_1d0 = (undefined8 *)CONCAT44(uStack_1e4,iStack_1e8);
            puStack_1c8 = puStack_1e0;
            lStack_1c0 = lStack_1d8;
            uStack_1b8 = 0;
            func_0x000107c2b080(&puStack_1d0);
            plVar7 = (long *)*plVar8;
            plVar5 = plVar8;
            if (plVar7 != (long *)0x0) {
              do {
                lVar11 = 8;
                if (uStack_1b8 <= (ulong)plVar7[7]) {
                  lVar11 = 0;
                  plVar5 = plVar7;
                }
                plVar7 = *(long **)((long)plVar7 + lVar11);
              } while (plVar7 != (long *)0x0);
              if ((plVar5 != plVar8) && ((ulong)plVar5[7] <= uStack_1b8)) {
                if (*(short *)(plVar5[8] + 0x20) != 7) {
                  FUN_10a00946c(&UNK_10f6399e9);
                  goto LAB_10aca516c;
                }
                uVar15 = *(undefined8 *)(plVar5[8] + 0x24);
                puVar4 = (undefined8 *)(puVar3 + uVar12 * 0xc);
                if ((*(byte *)(puVar4 + 1) & 1) == 0) {
                  *(undefined1 *)(puVar4 + 1) = 1;
                }
                *puVar4 = uVar15;
              }
            }
            if (lStack_1c0 < 0) {
              __ZdlPv(puStack_1d0);
            }
            uVar12 = uVar12 + 1;
            if (uVar12 == param_3) {
              plVar8 = (long *)*param_4;
              (**(code **)(*plVar8 + 600))(&puStack_1d0,plVar8,param_3);
              uVar12 = 0;
              puStack_1a8 = puStack_1d0;
              puVar6 = puVar3;
              do {
                if ((puVar6[8] & 1) == 0) {
                  puStack_1d0 = (undefined8 *)CONCAT44(puStack_1d0._4_4_,1);
                }
                else {
                  FUN_10a07aef4(&puStack_1d0,plVar8,puVar6);
                }
                (**(code **)(*plVar8 + 0x290))(plVar8,&puStack_1a8,uVar12,&puStack_1d0);
                if ((3 < (int)puStack_1d0) && (puStack_1c8 != (undefined8 *)0x0)) {
                  (**(code **)*puStack_1c8)();
                }
                uVar12 = uVar12 + 1;
                puVar6 = puVar6 + 0xc;
              } while (param_3 != uVar12);
              iStack_1e8 = 7;
              puStack_1e0 = puStack_1a8;
              func_0x0001098968d0(param_4 + 1,&iStack_1e8);
              if ((3 < iStack_1e8) && (puStack_1e0 != (undefined8 *)0x0)) {
                (**(code **)*puStack_1e0)();
              }
              __ZdlPv(puVar3);
              return;
            }
          } while( true );
        }
        ___cxa_begin_catch(param_1);
        func_0x000109896b78(*unaff_x20,param_1);
LAB_10aca4e88:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca4e8c);
        (*pcVar2)();
      }
      puVar3 = (undefined1 *)(param_3 << 3);
      __Znwm();
      puVar6 = puVar3;
      do {
        *puVar6 = 0;
        puVar6[4] = 0;
        puVar6 = puVar6 + 8;
      } while (puVar6 != puVar3 + param_3 * 8);
      uVar12 = 0;
      plVar8 = (long *)(param_1 + 400);
      do {
        FUN_10aca38a0(&iStack_138,param_2,uVar12);
        puStack_120 = (undefined8 *)CONCAT44(uStack_134,iStack_138);
        puStack_118 = puStack_130;
        lStack_110 = lStack_128;
        uStack_108 = 0;
        func_0x000107c2b080(&puStack_120);
        plVar7 = (long *)*plVar8;
        plVar5 = plVar8;
        if (plVar7 != (long *)0x0) {
          do {
            lVar11 = 8;
            if (uStack_108 <= (ulong)plVar7[7]) {
              lVar11 = 0;
              plVar5 = plVar7;
            }
            plVar7 = *(long **)((long)plVar7 + lVar11);
          } while (plVar7 != (long *)0x0);
          if ((plVar5 != plVar8) && ((ulong)plVar5[7] <= uStack_108)) {
            if (*(short *)(plVar5[8] + 0x20) != 3) {
              FUN_10a00946c(&UNK_10f6399e9);
              goto LAB_10aca4e88;
            }
            *(undefined4 *)(puVar3 + uVar12 * 8) = *(undefined4 *)(plVar5[8] + 0x24);
            *(undefined1 *)((long)(puVar3 + uVar12 * 8) + 4) = 1;
          }
        }
        if (lStack_110 < 0) {
          __ZdlPv(puStack_120);
        }
        uVar12 = uVar12 + 1;
        if (uVar12 == param_3) {
          plVar8 = (long *)*param_4;
          (**(code **)(*plVar8 + 600))(&puStack_120,plVar8,param_3);
          uVar12 = 0;
          puStack_f8 = puStack_120;
          pcVar13 = puVar3 + 4;
          do {
            if (*pcVar13 == '\x01') {
              puStack_118 = (undefined8 *)(double)*(float *)(pcVar13 + -4);
              uVar14 = 3;
            }
            else {
              uVar14 = 1;
            }
            puStack_120 = (undefined8 *)CONCAT44(puStack_120._4_4_,uVar14);
            (**(code **)(*plVar8 + 0x290))(plVar8,&puStack_f8,uVar12,&puStack_120);
            if ((3 < (int)puStack_120) && (puStack_118 != (undefined8 *)0x0)) {
              (**(code **)*puStack_118)();
            }
            uVar12 = uVar12 + 1;
            pcVar13 = pcVar13 + 8;
          } while (param_3 != uVar12);
          iStack_138 = 7;
          puStack_130 = puStack_f8;
          func_0x0001098968d0(param_4 + 1,&iStack_138);
          if ((3 < iStack_138) && (puStack_130 != (undefined8 *)0x0)) {
            (**(code **)*puStack_130)();
          }
          __ZdlPv(puVar3);
          return;
        }
      } while( true );
    }
    ___cxa_begin_catch(param_1);
    func_0x000109896b78(*unaff_x20,param_1);
LAB_10aca4bc4:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca4bc8);
    (*pcVar2)();
  }
  lVar11 = param_3 << 1;
  __Znwm();
  _bzero();
  uVar12 = 0;
  plVar8 = (long *)(param_1 + 400);
  uVar1 = (long)(param_3 << 1) >> 1;
  do {
    FUN_10aca38a0(&iStack_98,param_2,uVar12);
    puStack_80 = (undefined8 *)CONCAT44(uStack_94,iStack_98);
    puStack_78 = puStack_90;
    lStack_70 = lStack_88;
    uStack_68 = 0;
    func_0x000107c2b080(&puStack_80);
    plVar7 = (long *)*plVar8;
    plVar5 = plVar8;
    if (plVar7 != (long *)0x0) {
      do {
        lVar9 = 8;
        if (uStack_68 <= (ulong)plVar7[7]) {
          lVar9 = 0;
          plVar5 = plVar7;
        }
        plVar7 = *(long **)((long)plVar7 + lVar9);
      } while (plVar7 != (long *)0x0);
      if ((plVar5 != plVar8) && ((ulong)plVar5[7] <= uStack_68)) {
        if (*(short *)(plVar5[8] + 0x20) != 1) {
          FUN_10a00946c(&UNK_10f6399e9);
          goto LAB_10aca4bc4;
        }
        if (uVar1 <= uVar12) goto LAB_10aca4bc4;
        *(ushort *)(lVar11 + uVar12 * 2) = *(byte *)(plVar5[8] + 0x24) | 0x100;
      }
    }
    if (lStack_70 < 0) {
      __ZdlPv(puStack_80);
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == param_3) {
      plVar8 = (long *)*param_4;
      (**(code **)(*plVar8 + 600))(&puStack_80,plVar8,uVar1);
      uVar12 = 0;
      puStack_58 = puStack_80;
      pcVar13 = (char *)(lVar11 + 1);
      do {
        if (*pcVar13 == '\x01') {
          puStack_78 = (undefined8 *)CONCAT71(puStack_78._1_7_,pcVar13[-1]);
          uVar14 = 2;
        }
        else {
          uVar14 = 1;
        }
        puStack_80 = (undefined8 *)CONCAT44(puStack_80._4_4_,uVar14);
        (**(code **)(*plVar8 + 0x290))(plVar8,&puStack_58,uVar12,&puStack_80);
        if ((3 < (int)puStack_80) && (puStack_78 != (undefined8 *)0x0)) {
          (**(code **)*puStack_78)();
        }
        uVar12 = uVar12 + 1;
        pcVar13 = pcVar13 + 2;
      } while (uVar1 != uVar12);
      iStack_98 = 7;
      puStack_90 = puStack_58;
      func_0x0001098968d0(param_4 + 1,&iStack_98);
      if ((3 < iStack_98) && (puStack_90 != (undefined8 *)0x0)) {
        (**(code **)*puStack_90)();
      }
      __ZdlPv(lVar11);
      return;
    }
  } while( true );
}



/* Entry: 10aca4bec; end: 10aca4eaf;  */

void FUN_10aca4bec(long param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 *unaff_x20;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  int iStack_1f8;
  undefined4 uStack_1f4;
  undefined8 *puStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1a8;
  int iStack_148;
  undefined4 uStack_144;
  undefined8 *puStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined8 *puStack_108;
  int iStack_98;
  undefined4 uStack_94;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 *puStack_58;
  
  if (param_3 >> 0x3d != 0) {
    func_0x00010acd4930();
    if ((int)param_2 != 1) {
      __ZdlPv();
      __Unwind_Resume();
      if (0x1555555555555555 < param_3) {
        func_0x00010acd4944();
        if ((int)param_2 != 1) {
          __ZdlPv();
          __Unwind_Resume();
          FUN_10acd4958(&lStack_1c0,param_3);
          uVar10 = 0;
          plVar8 = (long *)(param_1 + 400);
          do {
            FUN_10aca38a0(&iStack_1f8,param_2,uVar10);
            puStack_1e0 = (undefined8 *)CONCAT44(uStack_1f4,iStack_1f8);
            puStack_1d8 = puStack_1f0;
            lStack_1d0 = lStack_1e8;
            uStack_1c8 = 0;
            func_0x000107c2b080(&puStack_1e0);
            plVar7 = (long *)*plVar8;
            plVar4 = plVar8;
            if (plVar7 != (long *)0x0) {
              do {
                lVar5 = 8;
                if (uStack_1c8 <= (ulong)plVar7[7]) {
                  lVar5 = 0;
                  plVar4 = plVar7;
                }
                plVar7 = *(long **)((long)plVar7 + lVar5);
              } while (plVar7 != (long *)0x0);
              if ((plVar4 != plVar8) && ((ulong)plVar4[7] <= uStack_1c8)) {
                lVar5 = plVar4[8];
                if (*(short *)(lVar5 + 0x20) != 8) {
                  FUN_10a00946c(&UNK_10f6399e9);
LAB_10aca543c:
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aca5440);
                  (*pcVar1)();
                }
                if ((ulong)(lStack_1b8 - lStack_1c0 >> 4) <= uVar10) goto LAB_10aca543c;
                uVar13 = *(undefined4 *)(lVar5 + 0x2c);
                puVar3 = (undefined8 *)(lStack_1c0 + uVar10 * 0x10);
                *puVar3 = *(undefined8 *)(lVar5 + 0x24);
                *(undefined4 *)(puVar3 + 1) = uVar13;
                if ((*(byte *)((long)puVar3 + 0xc) & 1) == 0) {
                  *(undefined1 *)((long)puVar3 + 0xc) = 1;
                }
              }
            }
            if (lStack_1d0 < 0) {
              __ZdlPv(puStack_1e0);
            }
            lVar5 = lStack_1c0;
            uVar10 = uVar10 + 1;
            if (uVar10 == param_3) {
              plVar8 = (long *)*param_4;
              lVar9 = lStack_1b8 - lStack_1c0 >> 4;
              (**(code **)(*plVar8 + 600))(&puStack_1e0,plVar8,lVar9);
              puStack_1a8 = puStack_1e0;
              if (lStack_1b8 != lVar5) {
                lVar11 = 0;
                do {
                  if ((*(byte *)(lVar5 + 0xc) & 1) == 0) {
                    puStack_1e0 = (undefined8 *)CONCAT44(puStack_1e0._4_4_,1);
                  }
                  else {
                    FUN_10a0881b8(&puStack_1e0,plVar8,lVar5);
                  }
                  (**(code **)(*plVar8 + 0x290))(plVar8,&puStack_1a8,lVar11,&puStack_1e0);
                  if ((3 < (int)puStack_1e0) && (puStack_1d8 != (undefined8 *)0x0)) {
                    (**(code **)*puStack_1d8)();
                  }
                  lVar11 = lVar11 + 1;
                  lVar5 = lVar5 + 0x10;
                } while (lVar9 != lVar11);
              }
              iStack_1f8 = 7;
              puStack_1f0 = puStack_1a8;
              func_0x0001098968d0(param_4 + 1,&iStack_1f8);
              if ((3 < iStack_1f8) && (puStack_1f0 != (undefined8 *)0x0)) {
                (**(code **)*puStack_1f0)();
              }
              if (lStack_1c0 != 0) {
                lStack_1b8 = lStack_1c0;
                __ZdlPv();
              }
              return;
            }
          } while( true );
        }
        ___cxa_begin_catch(param_1);
        func_0x000109896b78(*unaff_x20,param_1);
LAB_10aca516c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10aca5170);
        (*pcVar1)();
      }
      puVar2 = (undefined1 *)(param_3 * 0xc);
      __Znwm();
      puVar6 = puVar2;
      do {
        *puVar6 = 0;
        puVar6[8] = 0;
        puVar6 = puVar6 + 0xc;
      } while (puVar6 != puVar2 + param_3 * 0xc);
      uVar10 = 0;
      plVar8 = (long *)(param_1 + 400);
      do {
        FUN_10aca38a0(&iStack_148,param_2,uVar10);
        puStack_130 = (undefined8 *)CONCAT44(uStack_144,iStack_148);
        puStack_128 = puStack_140;
        lStack_120 = lStack_138;
        uStack_118 = 0;
        func_0x000107c2b080(&puStack_130);
        plVar7 = (long *)*plVar8;
        plVar4 = plVar8;
        if (plVar7 != (long *)0x0) {
          do {
            lVar5 = 8;
            if (uStack_118 <= (ulong)plVar7[7]) {
              lVar5 = 0;
              plVar4 = plVar7;
            }
            plVar7 = *(long **)((long)plVar7 + lVar5);
          } while (plVar7 != (long *)0x0);
          if ((plVar4 != plVar8) && ((ulong)plVar4[7] <= uStack_118)) {
            if (*(short *)(plVar4[8] + 0x20) != 7) {
              FUN_10a00946c(&UNK_10f6399e9);
              goto LAB_10aca516c;
            }
            uVar14 = *(undefined8 *)(plVar4[8] + 0x24);
            puVar3 = (undefined8 *)(puVar2 + uVar10 * 0xc);
            if ((*(byte *)(puVar3 + 1) & 1) == 0) {
              *(undefined1 *)(puVar3 + 1) = 1;
            }
            *puVar3 = uVar14;
          }
        }
        if (lStack_120 < 0) {
          __ZdlPv(puStack_130);
        }
        uVar10 = uVar10 + 1;
        if (uVar10 == param_3) {
          plVar8 = (long *)*param_4;
          (**(code **)(*plVar8 + 600))(&puStack_130,plVar8,param_3);
          uVar10 = 0;
          puStack_108 = puStack_130;
          puVar6 = puVar2;
          do {
            if ((puVar6[8] & 1) == 0) {
              puStack_130 = (undefined8 *)CONCAT44(puStack_130._4_4_,1);
            }
            else {
              FUN_10a07aef4(&puStack_130,plVar8,puVar6);
            }
            (**(code **)(*plVar8 + 0x290))(plVar8,&puStack_108,uVar10,&puStack_130);
            if ((3 < (int)puStack_130) && (puStack_128 != (undefined8 *)0x0)) {
              (**(code **)*puStack_128)();
            }
            uVar10 = uVar10 + 1;
            puVar6 = puVar6 + 0xc;
          } while (param_3 != uVar10);
          iStack_148 = 7;
          puStack_140 = puStack_108;
          func_0x0001098968d0(param_4 + 1,&iStack_148);
          if ((3 < iStack_148) && (puStack_140 != (undefined8 *)0x0)) {
            (**(code **)*puStack_140)();
          }
          __ZdlPv(puVar2);
          return;
        }
      } while( true );
    }
    ___cxa_begin_catch(param_1);
    func_0x000109896b78(*unaff_x20,param_1);
LAB_10aca4e88:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10aca4e8c);
    (*pcVar1)();
  }
  puVar2 = (undefined1 *)(param_3 << 3);
  __Znwm();
  puVar6 = puVar2;
  do {
    *puVar6 = 0;
    puVar6[4] = 0;
    puVar6 = puVar6 + 8;
  } while (puVar6 != puVar2 + param_3 * 8);
  uVar10 = 0;
  plVar8 = (long *)(param_1 + 400);
  do {
    FUN_10aca38a0(&iStack_98,param_2,uVar10);
    puStack_80 = (undefined8 *)CONCAT44(uStack_94,iStack_98);
    puStack_78 = puStack_90;
    lStack_70 = lStack_88;
    uStack_68 = 0;
    func_0x000107c2b080(&puStack_80);
    plVar7 = (long *)*plVar8;
    plVar4 = plVar8;
    if (plVar7 != (long *)0x0) {
      do {
        lVar5 = 8;
        if (uStack_68 <= (ulong)plVar7[7]) {
          lVar5 = 0;
          plVar4 = plVar7;
        }
        plVar7 = *(long **)((long)plVar7 + lVar5);
      } while (plVar7 != (long *)0x0);
      if ((plVar4 != plVar8) && ((ulong)plVar4[7] <= uStack_68)) {
        if (*(short *)(plVar4[8] + 0x20) != 3) {
          FUN_10a00946c(&UNK_10f6399e9);
          goto LAB_10aca4e88;
        }
        *(undefined4 *)(puVar2 + uVar10 * 8) = *(undefined4 *)(plVar4[8] + 0x24);
        *(undefined1 *)((long)(puVar2 + uVar10 * 8) + 4) = 1;
      }
    }
    if (lStack_70 < 0) {
      __ZdlPv(puStack_80);
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == param_3) {
      plVar8 = (long *)*param_4;
      (**(code **)(*plVar8 + 600))(&puStack_80,plVar8,param_3);
      uVar10 = 0;
      puStack_58 = puStack_80;
      pcVar12 = puVar2 + 4;
      do {
        if (*pcVar12 == '\x01') {
          puStack_78 = (undefined8 *)(double)*(float *)(pcVar12 + -4);
          uVar13 = 3;
        }
        else {
          uVar13 = 1;
        }
        puStack_80 = (undefined8 *)CONCAT44(puStack_80._4_4_,uVar13);
        (**(code **)(*plVar8 + 0x290))(plVar8,&puStack_58,uVar10,&puStack_80);
        if ((3 < (int)puStack_80) && (puStack_78 != (undefined8 *)0x0)) {
          (**(code **)*puStack_78)();
        }
        uVar10 = uVar10 + 1;
        pcVar12 = pcVar12 + 8;
      } while (param_3 != uVar10);
      iStack_98 = 7;
      puStack_90 = puStack_58;
      func_0x0001098968d0(param_4 + 1,&iStack_98);
      if ((3 < iStack_98) && (puStack_90 != (undefined8 *)0x0)) {
        (**(code **)*puStack_90)();
      }
      __ZdlPv(puVar2);
      return;
    }
  } while( true );
}



/* Entry: 10aca4eb0; end: 10aca5193;  */

void FUN_10aca4eb0(long param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 *unaff_x20;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  int iStack_158;
  undefined4 uStack_154;
  undefined8 *puStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  ulong uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 *puStack_108;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 *puStack_68;
  
  if (0x1555555555555555 < param_3) {
    func_0x00010acd4944();
    if ((int)param_2 != 1) {
      __ZdlPv();
      __Unwind_Resume();
      FUN_10acd4958(&lStack_120,param_3);
      uVar10 = 0;
      plVar8 = (long *)(param_1 + 400);
      do {
        FUN_10aca38a0(&iStack_158,param_2,uVar10);
        puStack_140 = (undefined8 *)CONCAT44(uStack_154,iStack_158);
        puStack_138 = puStack_150;
        lStack_130 = lStack_148;
        uStack_128 = 0;
        func_0x000107c2b080(&puStack_140);
        plVar7 = (long *)*plVar8;
        plVar4 = plVar8;
        if (plVar7 != (long *)0x0) {
          do {
            lVar5 = 8;
            if (uStack_128 <= (ulong)plVar7[7]) {
              lVar5 = 0;
              plVar4 = plVar7;
            }
            plVar7 = *(long **)((long)plVar7 + lVar5);
          } while (plVar7 != (long *)0x0);
          if ((plVar4 != plVar8) && ((ulong)plVar4[7] <= uStack_128)) {
            lVar5 = plVar4[8];
            if (*(short *)(lVar5 + 0x20) != 8) {
              FUN_10a00946c(&UNK_10f6399e9);
LAB_10aca543c:
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10aca5440);
              (*pcVar1)();
            }
            if ((ulong)(lStack_118 - lStack_120 >> 4) <= uVar10) goto LAB_10aca543c;
            uVar12 = *(undefined4 *)(lVar5 + 0x2c);
            puVar3 = (undefined8 *)(lStack_120 + uVar10 * 0x10);
            *puVar3 = *(undefined8 *)(lVar5 + 0x24);
            *(undefined4 *)(puVar3 + 1) = uVar12;
            if ((*(byte *)((long)puVar3 + 0xc) & 1) == 0) {
              *(undefined1 *)((long)puVar3 + 0xc) = 1;
            }
          }
        }
        if (lStack_130 < 0) {
          __ZdlPv(puStack_140);
        }
        lVar5 = lStack_120;
        uVar10 = uVar10 + 1;
        if (uVar10 == param_3) {
          plVar8 = (long *)*param_4;
          lVar9 = lStack_118 - lStack_120 >> 4;
          (**(code **)(*plVar8 + 600))(&puStack_140,plVar8,lVar9);
          puStack_108 = puStack_140;
          if (lStack_118 != lVar5) {
            lVar11 = 0;
            do {
              if ((*(byte *)(lVar5 + 0xc) & 1) == 0) {
                puStack_140 = (undefined8 *)CONCAT44(puStack_140._4_4_,1);
              }
              else {
                FUN_10a0881b8(&puStack_140,plVar8,lVar5);
              }
              (**(code **)(*plVar8 + 0x290))(plVar8,&puStack_108,lVar11,&puStack_140);
              if ((3 < (int)puStack_140) && (puStack_138 != (undefined8 *)0x0)) {
                (**(code **)*puStack_138)();
              }
              lVar11 = lVar11 + 1;
              lVar5 = lVar5 + 0x10;
            } while (lVar9 != lVar11);
          }
          iStack_158 = 7;
          puStack_150 = puStack_108;
          func_0x0001098968d0(param_4 + 1,&iStack_158);
          if ((3 < iStack_158) && (puStack_150 != (undefined8 *)0x0)) {
            (**(code **)*puStack_150)();
          }
          if (lStack_120 != 0) {
            lStack_118 = lStack_120;
            __ZdlPv();
          }
          return;
        }
      } while( true );
    }
    ___cxa_begin_catch(param_1);
    func_0x000109896b78(*unaff_x20,param_1);
LAB_10aca516c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10aca5170);
    (*pcVar1)();
  }
  puVar2 = (undefined1 *)(param_3 * 0xc);
  __Znwm();
  puVar6 = puVar2;
  do {
    *puVar6 = 0;
    puVar6[8] = 0;
    puVar6 = puVar6 + 0xc;
  } while (puVar6 != puVar2 + param_3 * 0xc);
  uVar10 = 0;
  plVar8 = (long *)(param_1 + 400);
  do {
    FUN_10aca38a0(&iStack_a8,param_2,uVar10);
    puStack_90 = (undefined8 *)CONCAT44(uStack_a4,iStack_a8);
    puStack_88 = puStack_a0;
    lStack_80 = lStack_98;
    uStack_78 = 0;
    func_0x000107c2b080(&puStack_90);
    plVar7 = (long *)*plVar8;
    plVar4 = plVar8;
    if (plVar7 != (long *)0x0) {
      do {
        lVar5 = 8;
        if (uStack_78 <= (ulong)plVar7[7]) {
          lVar5 = 0;
          plVar4 = plVar7;
        }
        plVar7 = *(long **)((long)plVar7 + lVar5);
      } while (plVar7 != (long *)0x0);
      if ((plVar4 != plVar8) && ((ulong)plVar4[7] <= uStack_78)) {
        if (*(short *)(plVar4[8] + 0x20) != 7) {
          FUN_10a00946c(&UNK_10f6399e9);
          goto LAB_10aca516c;
        }
        uVar13 = *(undefined8 *)(plVar4[8] + 0x24);
        puVar3 = (undefined8 *)(puVar2 + uVar10 * 0xc);
        if ((*(byte *)(puVar3 + 1) & 1) == 0) {
          *(undefined1 *)(puVar3 + 1) = 1;
        }
        *puVar3 = uVar13;
      }
    }
    if (lStack_80 < 0) {
      __ZdlPv(puStack_90);
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == param_3) {
      plVar8 = (long *)*param_4;
      (**(code **)(*plVar8 + 600))(&puStack_90,plVar8,param_3);
      uVar10 = 0;
      puStack_68 = puStack_90;
      puVar6 = puVar2;
      do {
        if ((puVar6[8] & 1) == 0) {
          puStack_90 = (undefined8 *)CONCAT44(puStack_90._4_4_,1);
        }
        else {
          FUN_10a07aef4(&puStack_90,plVar8,puVar6);
        }
        (**(code **)(*plVar8 + 0x290))(plVar8,&puStack_68,uVar10,&puStack_90);
        if ((3 < (int)puStack_90) && (puStack_88 != (undefined8 *)0x0)) {
          (**(code **)*puStack_88)();
        }
        uVar10 = uVar10 + 1;
        puVar6 = puVar6 + 0xc;
      } while (param_3 != uVar10);
      iStack_a8 = 7;
      puStack_a0 = puStack_68;
      func_0x0001098968d0(param_4 + 1,&iStack_a8);
      if ((3 < iStack_a8) && (puStack_a0 != (undefined8 *)0x0)) {
        (**(code **)*puStack_a0)();
      }
      __ZdlPv(puVar2);
      return;
    }
  } while( true );
}



/* Entry: 10aca5194; end: 10aca546b;  */

void FUN_10aca5194(long param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 *puStack_58;
  
  FUN_10acd4958(&lStack_70,param_3);
  uVar7 = 0;
  plVar6 = (long *)(param_1 + 400);
  do {
    FUN_10aca38a0(&iStack_a8,param_2,uVar7);
    puStack_90 = (undefined8 *)CONCAT44(uStack_a4,iStack_a8);
    puStack_88 = puStack_a0;
    lStack_80 = lStack_98;
    uStack_78 = 0;
    func_0x000107c2b080(&puStack_90);
    plVar5 = (long *)*plVar6;
    plVar3 = plVar6;
    if (plVar5 != (long *)0x0) {
      do {
        lVar4 = 8;
        if (uStack_78 <= (ulong)plVar5[7]) {
          lVar4 = 0;
          plVar3 = plVar5;
        }
        plVar5 = *(long **)((long)plVar5 + lVar4);
      } while (plVar5 != (long *)0x0);
      if ((plVar3 != plVar6) && ((ulong)plVar3[7] <= uStack_78)) {
        lVar4 = plVar3[8];
        if (*(short *)(lVar4 + 0x20) != 8) {
          FUN_10a00946c(&UNK_10f6399e9);
LAB_10aca543c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca5440);
          (*pcVar2)();
        }
        if ((ulong)(lStack_68 - lStack_70 >> 4) <= uVar7) goto LAB_10aca543c;
        uVar10 = *(undefined4 *)(lVar4 + 0x2c);
        puVar1 = (undefined8 *)(lStack_70 + uVar7 * 0x10);
        *puVar1 = *(undefined8 *)(lVar4 + 0x24);
        *(undefined4 *)(puVar1 + 1) = uVar10;
        if ((*(byte *)((long)puVar1 + 0xc) & 1) == 0) {
          *(undefined1 *)((long)puVar1 + 0xc) = 1;
        }
      }
    }
    if (lStack_80 < 0) {
      __ZdlPv(puStack_90);
    }
    lVar4 = lStack_70;
    uVar7 = uVar7 + 1;
    if (uVar7 == param_3) {
      plVar6 = (long *)*param_4;
      lVar8 = lStack_68 - lStack_70 >> 4;
      (**(code **)(*plVar6 + 600))(&puStack_90,plVar6,lVar8);
      puStack_58 = puStack_90;
      if (lStack_68 != lVar4) {
        lVar9 = 0;
        do {
          if ((*(byte *)(lVar4 + 0xc) & 1) == 0) {
            puStack_90 = (undefined8 *)CONCAT44(puStack_90._4_4_,1);
          }
          else {
            FUN_10a0881b8(&puStack_90,plVar6,lVar4);
          }
          (**(code **)(*plVar6 + 0x290))(plVar6,&puStack_58,lVar9,&puStack_90);
          if ((3 < (int)puStack_90) && (puStack_88 != (undefined8 *)0x0)) {
            (**(code **)*puStack_88)();
          }
          lVar9 = lVar9 + 1;
          lVar4 = lVar4 + 0x10;
        } while (lVar8 != lVar9);
      }
      iStack_a8 = 7;
      puStack_a0 = puStack_58;
      func_0x0001098968d0(param_4 + 1,&iStack_a8);
      if ((3 < iStack_a8) && (puStack_a0 != (undefined8 *)0x0)) {
        (**(code **)*puStack_a0)();
      }
      if (lStack_70 != 0) {
        lStack_68 = lStack_70;
        __ZdlPv();
      }
      return;
    }
  } while( true );
}



/* Entry: 10aca546c; end: 10aca5733;  */

void FUN_10aca546c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long *param_7,undefined8 *param_8)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *unaff_x20;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  char *pcVar19;
  ushort uVar20;
  ushort uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  int iStack_858;
  undefined4 uStack_854;
  long *plStack_850;
  long lStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  long lStack_830;
  ulong uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 auStack_800 [2];
  char cStack_7e9;
  ulong uStack_7e8;
  int aiStack_7e0 [2];
  undefined8 *puStack_7d8;
  undefined8 *apuStack_7d0 [2];
  int iStack_758;
  undefined4 uStack_754;
  undefined8 *puStack_750;
  long lStack_748;
  undefined8 *puStack_740;
  undefined8 *puStack_738;
  long lStack_730;
  ulong uStack_728;
  undefined8 *puStack_718;
  int iStack_6b8;
  undefined4 uStack_6b4;
  undefined8 *puStack_6b0;
  long lStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  long lStack_690;
  ulong uStack_688;
  undefined8 *puStack_678;
  int iStack_608;
  undefined4 uStack_604;
  undefined8 *puStack_600;
  long lStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 *puStack_5e8;
  long lStack_5e0;
  ulong uStack_5d8;
  undefined8 *puStack_5c8;
  int iStack_558;
  undefined4 uStack_554;
  undefined8 *puStack_550;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  long lStack_530;
  ulong uStack_528;
  undefined8 *puStack_518;
  int iStack_4a8;
  undefined4 uStack_4a4;
  undefined8 *puStack_4a0;
  long lStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  long lStack_480;
  ulong uStack_478;
  undefined8 *puStack_468;
  int iStack_3f8;
  undefined4 uStack_3f4;
  undefined8 *puStack_3f0;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  long lStack_3d0;
  ulong uStack_3c8;
  undefined8 *puStack_3b8;
  int iStack_358;
  undefined4 uStack_354;
  undefined8 *puStack_350;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  long lStack_330;
  ulong uStack_328;
  undefined8 *puStack_318;
  int iStack_2a8;
  undefined4 uStack_2a4;
  undefined8 *puStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  long lStack_280;
  ulong uStack_278;
  undefined8 *puStack_268;
  int iStack_1f8;
  undefined4 uStack_1f4;
  undefined8 *puStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  undefined8 *puStack_1b8;
  int iStack_158;
  undefined4 uStack_154;
  undefined8 *puStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  ulong uStack_128;
  undefined8 *puStack_118;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 *puStack_68;
  
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x10] = 0;
      puVar11 = puVar11 + 0x14;
    } while (puVar11 != puVar5 + (long)param_7 * 0x14);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_a8,param_6,plVar17);
      puVar10 = (undefined8 *)CONCAT44(uStack_a4,iStack_a8);
      puStack_88 = puStack_a0;
      lStack_80 = lStack_98;
      uStack_78 = 0;
      puStack_90 = puVar10;
      func_0x000107c2b080(&puStack_90);
      uVar23 = SUB84(puVar10,0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_78 <= (ulong)plVar13[7]) {
            lVar9 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar9);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_78)) {
          FUN_10a0dad84(plVar12[8]);
          puVar7 = (undefined4 *)(puVar5 + (long)plVar17 * 0x14);
          *puVar7 = uVar23;
          puVar7[1] = (int)param_2;
          puVar7[2] = (int)param_3;
          puVar7[3] = (int)param_4;
          if ((*(byte *)(puVar7 + 4) & 1) == 0) {
            *(undefined1 *)(puVar7 + 4) = 1;
          }
        }
      }
      if (lStack_80 < 0) {
        __ZdlPv(puStack_90);
      }
      plVar17 = (long *)((long)plVar17 + 1);
    } while (plVar17 != param_7);
    plVar17 = (long *)*param_8;
    (**(code **)(*plVar17 + 600))(&puStack_90,plVar17,param_7);
    plVar18 = (long *)0x0;
    puStack_68 = puStack_90;
    puVar11 = puVar5;
    do {
      if ((puVar11[0x10] & 1) == 0) {
        puStack_90 = (undefined8 *)CONCAT44(puStack_90._4_4_,1);
      }
      else {
        FUN_10a1fbd9c(&puStack_90,plVar17,puVar11);
      }
      (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_68,plVar18,&puStack_90);
      if ((3 < (int)puStack_90) && (puStack_88 != (undefined8 *)0x0)) {
        (**(code **)*puStack_88)();
      }
      plVar18 = (long *)((long)plVar18 + 1);
      puVar11 = puVar11 + 0x14;
    } while (param_7 != plVar18);
    iStack_a8 = 7;
    puStack_a0 = puStack_68;
    func_0x0001098968d0(param_8 + 1,&iStack_a8);
    if ((3 < iStack_a8) && (puStack_a0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_a0)();
    }
    __ZdlPv(puVar5);
    return;
  }
  FUN_10acd4a4c();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca5710);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x1555555555555556) {
    puVar5 = (undefined1 *)((long)param_7 * 0xc);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[8] = 0;
      puVar11 = puVar11 + 0xc;
    } while (puVar11 != puVar5 + (long)param_7 * 0xc);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_158,param_6,plVar17);
      puStack_140 = (undefined8 *)CONCAT44(uStack_154,iStack_158);
      puStack_138 = puStack_150;
      lStack_130 = lStack_148;
      uStack_128 = 0;
      func_0x000107c2b080(&puStack_140);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_128 <= (ulong)plVar13[7]) {
            lVar9 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar9);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_128)) {
          if (*(short *)(plVar12[8] + 0x20) != 0x1f) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca59f0;
          }
          uVar8 = *(undefined8 *)(plVar12[8] + 0x24);
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0xc);
          if ((*(byte *)(puVar10 + 1) & 1) == 0) {
            *(undefined1 *)(puVar10 + 1) = 1;
          }
          *puVar10 = uVar8;
        }
      }
      if (lStack_130 < 0) {
        __ZdlPv(puStack_140);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_140,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_118 = puStack_140;
        puVar11 = puVar5;
        do {
          if ((puVar11[8] & 1) == 0) {
            puStack_140 = (undefined8 *)CONCAT44(puStack_140._4_4_,1);
          }
          else {
            FUN_10a3687dc(&puStack_140,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_118,plVar18,&puStack_140);
          if ((3 < (int)puStack_140) && (puStack_138 != (undefined8 *)0x0)) {
            (**(code **)*puStack_138)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0xc;
        } while (param_7 != plVar18);
        iStack_158 = 7;
        puStack_150 = puStack_118;
        func_0x0001098968d0(param_8 + 1,&iStack_158);
        if ((3 < iStack_158) && (puStack_150 != (undefined8 *)0x0)) {
          (**(code **)*puStack_150)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4a60();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca59f0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca59f4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if ((ulong)param_7 >> 0x3c == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 4);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0xc] = 0;
      puVar11 = puVar11 + 0x10;
    } while (puVar11 != puVar5 + (long)param_7 * 0x10);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_1f8,param_6,plVar17);
      puStack_1e0 = (undefined8 *)CONCAT44(uStack_1f4,iStack_1f8);
      puStack_1d8 = puStack_1f0;
      lStack_1d0 = lStack_1e8;
      uStack_1c8 = 0;
      func_0x000107c2b080(&puStack_1e0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_1c8 <= (ulong)plVar13[7]) {
            lVar9 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar9);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_1c8)) {
          lVar9 = plVar12[8];
          if (*(short *)(lVar9 + 0x20) != 0x22) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca5cc0;
          }
          uVar23 = *(undefined4 *)(lVar9 + 0x2c);
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x10);
          *puVar10 = *(undefined8 *)(lVar9 + 0x24);
          *(undefined4 *)(puVar10 + 1) = uVar23;
          if ((*(byte *)((long)puVar10 + 0xc) & 1) == 0) {
            *(undefined1 *)((long)puVar10 + 0xc) = 1;
          }
        }
      }
      if (lStack_1d0 < 0) {
        __ZdlPv(puStack_1e0);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_1e0,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_1b8 = puStack_1e0;
        puVar11 = puVar5;
        do {
          if ((puVar11[0xc] & 1) == 0) {
            puStack_1e0 = (undefined8 *)CONCAT44(puStack_1e0._4_4_,1);
          }
          else {
            FUN_10a368a00(&puStack_1e0,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_1b8,plVar18,&puStack_1e0);
          if ((3 < (int)puStack_1e0) && (puStack_1d8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_1d8)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x10;
        } while (param_7 != plVar18);
        iStack_1f8 = 7;
        puStack_1f0 = puStack_1b8;
        func_0x0001098968d0(param_8 + 1,&iStack_1f8);
        if ((3 < iStack_1f8) && (puStack_1f0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_1f0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4a74();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca5cc0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca5cc4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x10] = 0;
      puVar11 = puVar11 + 0x14;
    } while (puVar11 != puVar5 + (long)param_7 * 0x14);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_2a8,param_6,plVar17);
      puStack_290 = (undefined8 *)CONCAT44(uStack_2a4,iStack_2a8);
      puStack_288 = puStack_2a0;
      lStack_280 = lStack_298;
      uStack_278 = 0;
      func_0x000107c2b080(&puStack_290);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_278 <= (ulong)plVar13[7]) {
            lVar9 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar9);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_278)) {
          lVar9 = plVar12[8];
          if (*(short *)(lVar9 + 0x20) != 0x23) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca5fa0;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x14);
          uVar8 = *(undefined8 *)(lVar9 + 0x24);
          puVar10[1] = *(undefined8 *)(lVar9 + 0x2c);
          *puVar10 = uVar8;
          if ((*(byte *)(puVar10 + 2) & 1) == 0) {
            *(undefined1 *)(puVar10 + 2) = 1;
          }
        }
      }
      if (lStack_280 < 0) {
        __ZdlPv(puStack_290);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_290,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_268 = puStack_290;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x10] & 1) == 0) {
            puStack_290 = (undefined8 *)CONCAT44(puStack_290._4_4_,1);
          }
          else {
            FUN_10a368c2c(&puStack_290,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_268,plVar18,&puStack_290);
          if ((3 < (int)puStack_290) && (puStack_288 != (undefined8 *)0x0)) {
            (**(code **)*puStack_288)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x14;
        } while (param_7 != plVar18);
        iStack_2a8 = 7;
        puStack_2a0 = puStack_268;
        func_0x0001098968d0(param_8 + 1,&iStack_2a8);
        if ((3 < iStack_2a8) && (puStack_2a0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_2a0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4a88();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca5fa0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca5fa4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x1555555555555556) {
    puVar5 = (undefined1 *)((long)param_7 * 0xc);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[8] = 0;
      puVar11 = puVar11 + 0xc;
    } while (puVar11 != puVar5 + (long)param_7 * 0xc);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_358,param_6,plVar17);
      puStack_340 = (undefined8 *)CONCAT44(uStack_354,iStack_358);
      puStack_338 = puStack_350;
      lStack_330 = lStack_348;
      uStack_328 = 0;
      func_0x000107c2b080(&puStack_340);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_328 <= (ulong)plVar13[7]) {
            lVar9 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar9);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_328)) {
          if (*(short *)(plVar12[8] + 0x20) != 0x24) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6284;
          }
          uVar8 = *(undefined8 *)(plVar12[8] + 0x24);
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0xc);
          if ((*(byte *)(puVar10 + 1) & 1) == 0) {
            *(undefined1 *)(puVar10 + 1) = 1;
          }
          *puVar10 = uVar8;
        }
      }
      if (lStack_330 < 0) {
        __ZdlPv(puStack_340);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_340,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_318 = puStack_340;
        puVar11 = puVar5;
        do {
          if ((puVar11[8] & 1) == 0) {
            puStack_340 = (undefined8 *)CONCAT44(puStack_340._4_4_,1);
          }
          else {
            FUN_10a368e50(&puStack_340,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_318,plVar18,&puStack_340);
          if ((3 < (int)puStack_340) && (puStack_338 != (undefined8 *)0x0)) {
            (**(code **)*puStack_338)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0xc;
        } while (param_7 != plVar18);
        iStack_358 = 7;
        puStack_350 = puStack_318;
        func_0x0001098968d0(param_8 + 1,&iStack_358);
        if ((3 < iStack_358) && (puStack_350 != (undefined8 *)0x0)) {
          (**(code **)*puStack_350)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4a9c();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6284:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6288);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if ((ulong)param_7 >> 0x3c == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 4);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0xc] = 0;
      puVar11 = puVar11 + 0x10;
    } while (puVar11 != puVar5 + (long)param_7 * 0x10);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_3f8,param_6,plVar17);
      puStack_3e0 = (undefined8 *)CONCAT44(uStack_3f4,iStack_3f8);
      puStack_3d8 = puStack_3f0;
      lStack_3d0 = lStack_3e8;
      uStack_3c8 = 0;
      func_0x000107c2b080(&puStack_3e0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_3c8 <= (ulong)plVar13[7]) {
            lVar9 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar9);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_3c8)) {
          lVar9 = plVar12[8];
          if (*(short *)(lVar9 + 0x20) != 0x25) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6554;
          }
          uVar23 = *(undefined4 *)(lVar9 + 0x2c);
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x10);
          *puVar10 = *(undefined8 *)(lVar9 + 0x24);
          *(undefined4 *)(puVar10 + 1) = uVar23;
          if ((*(byte *)((long)puVar10 + 0xc) & 1) == 0) {
            *(undefined1 *)((long)puVar10 + 0xc) = 1;
          }
        }
      }
      if (lStack_3d0 < 0) {
        __ZdlPv(puStack_3e0);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_3e0,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_3b8 = puStack_3e0;
        puVar11 = puVar5;
        do {
          if ((puVar11[0xc] & 1) == 0) {
            puStack_3e0 = (undefined8 *)CONCAT44(puStack_3e0._4_4_,1);
          }
          else {
            FUN_10a369074(&puStack_3e0,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_3b8,plVar18,&puStack_3e0);
          if ((3 < (int)puStack_3e0) && (puStack_3d8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_3d8)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x10;
        } while (param_7 != plVar18);
        iStack_3f8 = 7;
        puStack_3f0 = puStack_3b8;
        func_0x0001098968d0(param_8 + 1,&iStack_3f8);
        if ((3 < iStack_3f8) && (puStack_3f0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_3f0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4ab0();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6554:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6558);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x10] = 0;
      puVar11 = puVar11 + 0x14;
    } while (puVar11 != puVar5 + (long)param_7 * 0x14);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_4a8,param_6,plVar17);
      puStack_490 = (undefined8 *)CONCAT44(uStack_4a4,iStack_4a8);
      puStack_488 = puStack_4a0;
      lStack_480 = lStack_498;
      uStack_478 = 0;
      func_0x000107c2b080(&puStack_490);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_478 <= (ulong)plVar13[7]) {
            lVar9 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar9);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_478)) {
          lVar9 = plVar12[8];
          if (*(short *)(lVar9 + 0x20) != 0x26) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6834;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x14);
          uVar8 = *(undefined8 *)(lVar9 + 0x24);
          puVar10[1] = *(undefined8 *)(lVar9 + 0x2c);
          *puVar10 = uVar8;
          if ((*(byte *)(puVar10 + 2) & 1) == 0) {
            *(undefined1 *)(puVar10 + 2) = 1;
          }
        }
      }
      if (lStack_480 < 0) {
        __ZdlPv(puStack_490);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_490,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_468 = puStack_490;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x10] & 1) == 0) {
            puStack_490 = (undefined8 *)CONCAT44(puStack_490._4_4_,1);
          }
          else {
            FUN_10a3692a0(&puStack_490,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_468,plVar18,&puStack_490);
          if ((3 < (int)puStack_490) && (puStack_488 != (undefined8 *)0x0)) {
            (**(code **)*puStack_488)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x14;
        } while (param_7 != plVar18);
        iStack_4a8 = 7;
        puStack_4a0 = puStack_468;
        func_0x0001098968d0(param_8 + 1,&iStack_4a8);
        if ((3 < iStack_4a8) && (puStack_4a0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_4a0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4ac4();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6834:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6838);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  uVar28 = (undefined4)param_4;
  uVar25 = (undefined4)param_3;
  uVar23 = (undefined4)param_2;
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x10] = 0;
      puVar11 = puVar11 + 0x14;
    } while (puVar11 != puVar5 + (long)param_7 * 0x14);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_558,param_6,plVar17);
      puVar10 = (undefined8 *)CONCAT44(uStack_554,iStack_558);
      puStack_538 = puStack_550;
      lStack_530 = lStack_548;
      uStack_528 = 0;
      puStack_540 = puVar10;
      func_0x000107c2b080(&puStack_540);
      uVar23 = SUB84(puVar10,0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_528 <= (ulong)plVar13[7]) {
            lVar9 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar9);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_528)) {
          FUN_10aca4910(plVar12[8]);
          puVar7 = (undefined4 *)(puVar5 + (long)plVar17 * 0x14);
          *puVar7 = uVar23;
          puVar7[1] = (int)param_2;
          puVar7[2] = (int)param_3;
          puVar7[3] = (int)param_4;
          if ((*(byte *)(puVar7 + 4) & 1) == 0) {
            *(undefined1 *)(puVar7 + 4) = 1;
          }
        }
      }
      if (lStack_530 < 0) {
        __ZdlPv(puStack_540);
      }
      plVar17 = (long *)((long)plVar17 + 1);
    } while (plVar17 != param_7);
    plVar17 = (long *)*param_8;
    (**(code **)(*plVar17 + 600))(&puStack_540,plVar17,param_7);
    plVar18 = (long *)0x0;
    puStack_518 = puStack_540;
    puVar11 = puVar5;
    do {
      if ((puVar11[0x10] & 1) == 0) {
        puStack_540 = (undefined8 *)CONCAT44(puStack_540._4_4_,1);
      }
      else {
        FUN_10a3682fc(&puStack_540,plVar17,puVar11);
      }
      (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_518,plVar18,&puStack_540);
      if ((3 < (int)puStack_540) && (puStack_538 != (undefined8 *)0x0)) {
        (**(code **)*puStack_538)();
      }
      plVar18 = (long *)((long)plVar18 + 1);
      puVar11 = puVar11 + 0x14;
    } while (param_7 != plVar18);
    iStack_558 = 7;
    puStack_550 = puStack_518;
    func_0x0001098968d0(param_8 + 1,&iStack_558);
    if ((3 < iStack_558) && (puStack_550 != (undefined8 *)0x0)) {
      (**(code **)*puStack_550)();
    }
    __ZdlPv(puVar5);
    return;
  }
  func_0x00010acd4ad8();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6b00);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x666666666666667) {
    puVar5 = (undefined1 *)((long)param_7 * 0x28);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x24] = 0;
      puVar11 = puVar11 + 0x28;
    } while (puVar11 != puVar5 + (long)param_7 * 0x28);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_608,param_6,plVar17);
      puStack_5f0 = (undefined8 *)CONCAT44(uStack_604,iStack_608);
      puStack_5e8 = puStack_600;
      lStack_5e0 = lStack_5f8;
      uStack_5d8 = 0;
      func_0x000107c2b080(&puStack_5f0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_5d8 <= (ulong)plVar13[7]) {
            lVar9 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar9);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_5d8)) {
          lVar9 = plVar12[8];
          if (*(short *)(lVar9 + 0x20) != 10) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6dec;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x28);
          uVar23 = *(undefined4 *)(lVar9 + 0x44);
          uVar22 = *(undefined8 *)(lVar9 + 0x3c);
          uVar8 = *(undefined8 *)(lVar9 + 0x34);
          uVar24 = *(undefined8 *)(lVar9 + 0x24);
          puVar10[1] = *(undefined8 *)(lVar9 + 0x2c);
          *puVar10 = uVar24;
          puVar10[3] = uVar22;
          puVar10[2] = uVar8;
          *(undefined4 *)(puVar10 + 4) = uVar23;
          if ((*(byte *)((long)puVar10 + 0x24) & 1) == 0) {
            *(undefined1 *)((long)puVar10 + 0x24) = 1;
          }
        }
      }
      if (lStack_5e0 < 0) {
        __ZdlPv(puStack_5f0);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_5f0,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_5c8 = puStack_5f0;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x24] & 1) == 0) {
            puStack_5f0 = (undefined8 *)CONCAT44(puStack_5f0._4_4_,1);
          }
          else {
            FUN_10a368520(&puStack_5f0,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_5c8,plVar18,&puStack_5f0);
          if ((3 < (int)puStack_5f0) && (puStack_5e8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_5e8)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x28;
        } while (param_7 != plVar18);
        iStack_608 = 7;
        puStack_600 = puStack_5c8;
        func_0x0001098968d0(param_8 + 1,&iStack_608);
        if ((3 < iStack_608) && (puStack_600 != (undefined8 *)0x0)) {
          (**(code **)*puStack_600)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4aec();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6dec:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6df0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x3c3c3c3c3c3c3c4) {
    puVar5 = (undefined1 *)((long)param_7 * 0x44);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x40] = 0;
      puVar11 = puVar11 + 0x44;
    } while (puVar11 != puVar5 + (long)param_7 * 0x44);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_6b8,param_6,plVar17);
      puStack_6a0 = (undefined8 *)CONCAT44(uStack_6b4,iStack_6b8);
      puStack_698 = puStack_6b0;
      lStack_690 = lStack_6a8;
      uStack_688 = 0;
      func_0x000107c2b080(&puStack_6a0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_688 <= (ulong)plVar13[7]) {
            lVar9 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar9);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_688)) {
          lVar9 = plVar12[8];
          if (*(short *)(lVar9 + 0x20) != 0xb) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca70dc;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x44);
          uVar22 = *(undefined8 *)(lVar9 + 0x3c);
          uVar8 = *(undefined8 *)(lVar9 + 0x34);
          uVar24 = *(undefined8 *)(lVar9 + 0x44);
          uVar27 = *(undefined8 *)(lVar9 + 0x5c);
          uVar26 = *(undefined8 *)(lVar9 + 0x54);
          uVar30 = *(undefined8 *)(lVar9 + 0x2c);
          uVar29 = *(undefined8 *)(lVar9 + 0x24);
          puVar10[5] = *(undefined8 *)(lVar9 + 0x4c);
          puVar10[4] = uVar24;
          puVar10[7] = uVar27;
          puVar10[6] = uVar26;
          puVar10[1] = uVar30;
          *puVar10 = uVar29;
          puVar10[3] = uVar22;
          puVar10[2] = uVar8;
          if ((*(byte *)(puVar10 + 8) & 1) == 0) {
            *(undefined1 *)(puVar10 + 8) = 1;
          }
        }
      }
      if (lStack_690 < 0) {
        __ZdlPv(puStack_6a0);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_6a0,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_678 = puStack_6a0;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x40] & 1) == 0) {
            puStack_6a0 = (undefined8 *)CONCAT44(puStack_6a0._4_4_,1);
          }
          else {
            FUN_10a368650(&puStack_6a0,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_678,plVar18,&puStack_6a0);
          if ((3 < (int)puStack_6a0) && (puStack_698 != (undefined8 *)0x0)) {
            (**(code **)*puStack_698)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x44;
        } while (param_7 != plVar18);
        iStack_6b8 = 7;
        puStack_6b0 = puStack_678;
        func_0x0001098968d0(param_8 + 1,&iStack_6b8);
        if ((3 < iStack_6b8) && (puStack_6b0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_6b0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b00();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca70dc:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca70e0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if ((ulong)param_7 >> 0x3d == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 3);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[4] = 0;
      puVar11 = puVar11 + 8;
    } while (puVar11 != puVar5 + (long)param_7 * 8);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_758,param_6,plVar17);
      puStack_740 = (undefined8 *)CONCAT44(uStack_754,iStack_758);
      puStack_738 = puStack_750;
      lStack_730 = lStack_748;
      uStack_728 = 0;
      func_0x000107c2b080(&puStack_740);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_728 <= (ulong)plVar13[7]) {
            lVar9 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar9);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_728)) {
          if (*(short *)(plVar12[8] + 0x20) != 2) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca73a0;
          }
          *(undefined4 *)(puVar5 + (long)plVar17 * 8) = *(undefined4 *)(plVar12[8] + 0x24);
          *(undefined1 *)((long)(puVar5 + (long)plVar17 * 8) + 4) = 1;
        }
      }
      if (lStack_730 < 0) {
        __ZdlPv(puStack_740);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_740,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_718 = puStack_740;
        pcVar19 = puVar5 + 4;
        do {
          if (*pcVar19 == '\x01') {
            puStack_738 = (undefined8 *)(double)*(int *)(pcVar19 + -4);
            uVar23 = 3;
          }
          else {
            uVar23 = 1;
          }
          puStack_740 = (undefined8 *)CONCAT44(puStack_740._4_4_,uVar23);
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_718,plVar18,&puStack_740);
          if ((3 < (int)puStack_740) && (puStack_738 != (undefined8 *)0x0)) {
            (**(code **)*puStack_738)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          pcVar19 = pcVar19 + 8;
        } while (param_7 != plVar18);
        iStack_758 = 7;
        puStack_750 = puStack_718;
        func_0x0001098968d0(param_8 + 1,&iStack_758);
        if ((3 < iStack_758) && (puStack_750 != (undefined8 *)0x0)) {
          (**(code **)*puStack_750)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b14();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca73a0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca73a4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  lVar9 = param_5 + -0x18;
  FUN_10a0d09b4(auStack_800);
  plVar18 = (long *)(param_5 + 0x178);
  plVar12 = *(long **)(param_5 + 0x178);
  plVar17 = plVar18;
  if (plVar12 != (long *)0x0) {
    do {
      lVar6 = 8;
      if (uStack_7e8 <= (ulong)plVar12[7]) {
        lVar6 = 0;
        plVar17 = plVar12;
      }
      plVar12 = *(long **)((long)plVar12 + lVar6);
    } while (plVar12 != (long *)0x0);
    if ((plVar17 != plVar18) && ((ulong)plVar17[7] <= uStack_7e8)) {
      lVar9 = plVar17[8];
      switch(*(undefined2 *)(lVar9 + 0x20)) {
      case 1:
        uStack_840 = (undefined8 *)CONCAT71(uStack_840._1_7_,*(undefined1 *)(lVar9 + 0x24));
        FUN_10a351b5c(param_7,&uStack_840);
        break;
      case 2:
        uStack_840 = (undefined8 *)CONCAT44(uStack_840._4_4_,*(undefined4 *)(lVar9 + 0x24));
        func_0x00010a368134(param_7,&uStack_840);
        break;
      case 3:
        uStack_840 = (undefined8 *)CONCAT44(uStack_840._4_4_,*(undefined4 *)(lVar9 + 0x24));
        FUN_10a3680dc(param_7,&uStack_840);
        break;
      case 6:
        uStack_840 = (undefined8 *)CONCAT44(uStack_840._4_4_,*(undefined4 *)(lVar9 + 0x24));
        FUN_10a368728(param_7,&uStack_840);
        break;
      case 7:
        uStack_840 = *(undefined8 **)(lVar9 + 0x24);
        func_0x00010a36818c(param_7,&uStack_840);
        break;
      case 8:
        uStack_840 = *(undefined8 **)(lVar9 + 0x24);
        uStack_838 = (long *)CONCAT44(uStack_838._4_4_,*(undefined4 *)(lVar9 + 0x2c));
        func_0x00010a3681e8(param_7,&uStack_840);
        break;
      case 9:
        FUN_10a0dad84();
        uStack_840 = (undefined8 *)CONCAT44(uVar23,param_1);
        uStack_838 = (long *)CONCAT44(uVar28,uVar25);
        func_0x00010a368244(param_7,&uStack_840);
        break;
      case 10:
        uStack_838 = *(long **)(lVar9 + 0x2c);
        uStack_840 = *(undefined8 **)(lVar9 + 0x24);
        uStack_828 = *(ulong *)(lVar9 + 0x3c);
        lStack_830 = *(long *)(lVar9 + 0x34);
        uStack_820 = CONCAT44(uStack_820._4_4_,*(undefined4 *)(lVar9 + 0x44));
        FUN_10a3684c4(param_7,&uStack_840);
        break;
      case 0xb:
        uStack_838 = *(long **)(lVar9 + 0x2c);
        uStack_840 = *(undefined8 **)(lVar9 + 0x24);
        uStack_828 = *(ulong *)(lVar9 + 0x3c);
        lStack_830 = *(long *)(lVar9 + 0x34);
        uStack_818 = *(undefined8 *)(lVar9 + 0x4c);
        uStack_820 = *(undefined8 *)(lVar9 + 0x44);
        uStack_808 = *(undefined8 *)(lVar9 + 0x5c);
        uStack_810 = *(undefined8 *)(lVar9 + 0x54);
        FUN_10a3685f4(param_7,&uStack_840);
        break;
      case 0x16:
        FUN_10aca4910();
        uStack_840 = (undefined8 *)CONCAT44(uVar23,param_1);
        uStack_838 = (long *)CONCAT44(uVar28,uVar25);
        func_0x00010a3682a0(param_7,&uStack_840);
        break;
      case 0x1f:
        uStack_840 = *(undefined8 **)(lVar9 + 0x24);
        FUN_10a368780(param_7,&uStack_840);
        break;
      case 0x22:
        uStack_840 = *(undefined8 **)(lVar9 + 0x24);
        uStack_838 = (long *)CONCAT44(uStack_838._4_4_,*(undefined4 *)(lVar9 + 0x2c));
        FUN_10a3689a4(param_7,&uStack_840);
        break;
      case 0x23:
        uStack_838 = *(long **)(lVar9 + 0x2c);
        uStack_840 = *(undefined8 **)(lVar9 + 0x24);
        FUN_10a368bd0(param_7,&uStack_840);
        break;
      case 0x24:
        uStack_840 = *(undefined8 **)(lVar9 + 0x24);
        FUN_10a368df4(param_7,&uStack_840);
        break;
      case 0x25:
        uStack_840 = *(undefined8 **)(lVar9 + 0x24);
        uStack_838 = (long *)CONCAT44(uStack_838._4_4_,*(undefined4 *)(lVar9 + 0x2c));
        FUN_10a369018(param_7,&uStack_840);
        break;
      case 0x26:
        uStack_838 = *(long **)(lVar9 + 0x2c);
        uStack_840 = *(undefined8 **)(lVar9 + 0x24);
        FUN_10a369244(param_7,&uStack_840);
      }
      goto LAB_10aca426c;
    }
  }
  lVar6 = *(long *)(param_5 + 400);
  if (lVar6 != 0) {
    lVar15 = param_5 + 400;
    do {
      lVar1 = 8;
      if (uStack_7e8 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar15 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar15 != param_5 + 400) && (*(ulong *)(lVar15 + 0x38) <= uStack_7e8)) {
      FUN_10a1f92d8(param_7,*(long *)(lVar15 + 0x40) + 0x188);
      goto LAB_10aca426c;
    }
  }
  lVar6 = *(long *)(param_5 + 0x1c0);
  if (lVar6 != 0) {
    lVar15 = param_5 + 0x1c0;
    do {
      lVar1 = 8;
      if (uStack_7e8 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar15 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar15 != param_5 + 0x1c0) && (*(ulong *)(lVar15 + 0x38) <= uStack_7e8)) {
      uVar14 = *(ulong *)(lVar15 + 0x40);
      if (uVar14 == 0) {
        lVar6 = 0;
        lVar9 = 0;
      }
      else {
        uVar16 = 0;
        uVar20 = 0;
        do {
          FUN_10aca38a0(&iStack_858,param_6,uVar16);
          uStack_840 = (undefined8 *)CONCAT44(uStack_854,iStack_858);
          uStack_838 = plStack_850;
          lStack_830 = lStack_848;
          uStack_828 = 0;
          func_0x000107c2b080(&uStack_840);
          plVar12 = (long *)*plVar18;
          plVar17 = plVar18;
          if (plVar12 == (long *)0x0) {
LAB_10aca41d4:
            bVar3 = false;
            uVar21 = uVar20;
          }
          else {
            do {
              lVar6 = 8;
              if (uStack_828 <= (ulong)plVar12[7]) {
                lVar6 = 0;
                plVar17 = plVar12;
              }
              plVar12 = *(long **)((long)plVar12 + lVar6);
            } while (plVar12 != (long *)0x0);
            if ((plVar17 == plVar18) || (uStack_828 < (ulong)plVar17[7])) goto LAB_10aca41d4;
            bVar3 = *(ushort *)(plVar17[8] + 0x20) != 0;
            uVar21 = *(ushort *)(plVar17[8] + 0x20);
            if (!bVar3) {
              uVar21 = uVar20;
            }
          }
          if (lStack_830 < 0) {
            __ZdlPv(uStack_840);
          }
          uVar16 = uVar16 + 1;
          if (uVar16 == uVar14) {
            bVar3 = true;
          }
          uVar20 = uVar21;
        } while (!bVar3);
        if (uVar21 < 0xb) {
          if (uVar21 < 7) {
            if (uVar21 == 1) {
              FUN_10aca493c(lVar9,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 2) {
              FUN_10aca7104(lVar9,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 3) {
              FUN_10aca4bec(lVar9,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
          else if (uVar21 < 9) {
            if (uVar21 == 7) {
              FUN_10aca4eb0(lVar9,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 8) {
              FUN_10aca5194(lVar9,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar21 == 9) {
              FUN_10aca546c(lVar9,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 10) {
              FUN_10aca6b24(lVar9,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar21 < 0x23) {
          if (uVar21 < 0x1f) {
            if (uVar21 == 0xb) {
              FUN_10aca6e14(lVar9,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 0x16) {
              FUN_10aca685c(lVar9,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar21 == 0x1f) {
              FUN_10aca5734(lVar9,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 0x22) {
              FUN_10aca5a18(lVar9,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar21 < 0x25) {
          if (uVar21 == 0x23) {
            FUN_10aca5ce8(lVar9,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
          if (uVar21 == 0x24) {
            FUN_10aca5fc8(lVar9,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
        }
        else {
          if (uVar21 == 0x25) {
            FUN_10aca62ac(lVar9,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
          if (uVar21 == 0x26) {
            FUN_10aca657c(lVar9,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
        }
        if (uVar14 >> 0x3d != 0) {
          FUN_10acb63ac();
LAB_10aca48cc:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca48d0);
          (*pcVar2)();
        }
        lVar6 = uVar14 * 8;
        __Znwm();
        _bzero();
        lVar9 = lVar6 + uVar14 * 8;
      }
      plVar18 = (long *)*param_7;
      lVar15 = lVar9 - lVar6 >> 3;
      (**(code **)(*plVar18 + 600))(&uStack_840,plVar18,lVar15);
      apuStack_7d0[0] = uStack_840;
      if (lVar9 != lVar6) {
        lVar9 = 0;
        do {
          plVar17 = plVar18;
          (**(code **)(*plVar18 + 0x58))();
          if ((*(byte *)(plVar17 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
          plVar12 = (long *)plVar17[4];
          if (plVar12 == (long *)0x0) {
            func_0x000109899fd8(plVar17);
            plVar12 = (long *)plVar17[4];
          }
          plVar17[4] = *plVar12;
          plVar12[1] = 0;
          plVar12[2] = 0;
          *plVar12 = (long)&PTR_FUN_110c6bfc0;
          plVar13 = plVar18;
          (**(code **)(*plVar18 + 0x58))();
          plVar17 = plVar13;
          FUN_10a065534();
          if (plVar17 == (long *)0x0) {
            if ((*(byte *)(plVar13 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
            plVar17 = plVar13 + 0x1b;
          }
          uStack_840 = (undefined8 *)CONCAT44(uStack_840._4_4_,7);
          plVar4 = plVar18;
          (**(code **)(*plVar18 + 0x98))(plVar18,*plVar17);
          uStack_838 = plVar4;
          (**(code **)(*plVar18 + 0x2f8))
                    (&plStack_850,plVar18,plVar12,plVar13,&UNK_10989ba24,&uStack_840);
          iStack_858 = 7;
          if ((3 < (int)uStack_840) && (uStack_838 != (long *)0x0)) {
            (**(code **)*uStack_838)();
          }
          (**(code **)(*plVar18 + 0x290))(plVar18,apuStack_7d0,lVar9,&iStack_858);
          if ((3 < iStack_858) && (plStack_850 != (long *)0x0)) {
            (**(code **)*plStack_850)();
          }
          lVar9 = lVar9 + 1;
        } while (lVar15 != lVar9);
      }
      aiStack_7e0[0] = 7;
      puStack_7d8 = apuStack_7d0[0];
      func_0x0001098968d0(param_7 + 1,aiStack_7e0);
      if ((3 < aiStack_7e0[0]) && (puStack_7d8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_7d8)();
      }
      if (lVar6 != 0) {
        __ZdlPv(lVar6);
      }
    }
  }
LAB_10aca426c:
  if (cStack_7e9 < '\0') {
    __ZdlPv(auStack_800[0]);
  }
  return;
}



/* Entry: 10aca5734; end: 10aca5a17;  */

void FUN_10aca5734(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long *param_7,undefined8 *param_8)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *unaff_x20;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  char *pcVar19;
  ushort uVar20;
  ushort uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  int iStack_7a8;
  undefined4 uStack_7a4;
  long *plStack_7a0;
  long lStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  long lStack_780;
  ulong uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 auStack_750 [2];
  char cStack_739;
  ulong uStack_738;
  int aiStack_730 [2];
  undefined8 *puStack_728;
  undefined8 *apuStack_720 [2];
  int iStack_6a8;
  undefined4 uStack_6a4;
  undefined8 *puStack_6a0;
  long lStack_698;
  undefined8 *puStack_690;
  undefined8 *puStack_688;
  long lStack_680;
  ulong uStack_678;
  undefined8 *puStack_668;
  int iStack_608;
  undefined4 uStack_604;
  undefined8 *puStack_600;
  long lStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 *puStack_5e8;
  long lStack_5e0;
  ulong uStack_5d8;
  undefined8 *puStack_5c8;
  int iStack_558;
  undefined4 uStack_554;
  undefined8 *puStack_550;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  long lStack_530;
  ulong uStack_528;
  undefined8 *puStack_518;
  int iStack_4a8;
  undefined4 uStack_4a4;
  undefined8 *puStack_4a0;
  long lStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  long lStack_480;
  ulong uStack_478;
  undefined8 *puStack_468;
  int iStack_3f8;
  undefined4 uStack_3f4;
  undefined8 *puStack_3f0;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  long lStack_3d0;
  ulong uStack_3c8;
  undefined8 *puStack_3b8;
  int iStack_348;
  undefined4 uStack_344;
  undefined8 *puStack_340;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  long lStack_320;
  ulong uStack_318;
  undefined8 *puStack_308;
  int iStack_2a8;
  undefined4 uStack_2a4;
  undefined8 *puStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  long lStack_280;
  ulong uStack_278;
  undefined8 *puStack_268;
  int iStack_1f8;
  undefined4 uStack_1f4;
  undefined8 *puStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  undefined8 *puStack_1b8;
  int iStack_148;
  undefined4 uStack_144;
  undefined8 *puStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined8 *puStack_108;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 *puStack_68;
  
  if (param_7 < (long *)0x1555555555555556) {
    puVar5 = (undefined1 *)((long)param_7 * 0xc);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[8] = 0;
      puVar11 = puVar11 + 0xc;
    } while (puVar11 != puVar5 + (long)param_7 * 0xc);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_a8,param_6,plVar17);
      puStack_90 = (undefined8 *)CONCAT44(uStack_a4,iStack_a8);
      puStack_88 = puStack_a0;
      lStack_80 = lStack_98;
      uStack_78 = 0;
      func_0x000107c2b080(&puStack_90);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar8 = 8;
          if (uStack_78 <= (ulong)plVar13[7]) {
            lVar8 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar8);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_78)) {
          if (*(short *)(plVar12[8] + 0x20) != 0x1f) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca59f0;
          }
          uVar7 = *(undefined8 *)(plVar12[8] + 0x24);
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0xc);
          if ((*(byte *)(puVar10 + 1) & 1) == 0) {
            *(undefined1 *)(puVar10 + 1) = 1;
          }
          *puVar10 = uVar7;
        }
      }
      if (lStack_80 < 0) {
        __ZdlPv(puStack_90);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_90,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_68 = puStack_90;
        puVar11 = puVar5;
        do {
          if ((puVar11[8] & 1) == 0) {
            puStack_90 = (undefined8 *)CONCAT44(puStack_90._4_4_,1);
          }
          else {
            FUN_10a3687dc(&puStack_90,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_68,plVar18,&puStack_90);
          if ((3 < (int)puStack_90) && (puStack_88 != (undefined8 *)0x0)) {
            (**(code **)*puStack_88)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0xc;
        } while (param_7 != plVar18);
        iStack_a8 = 7;
        puStack_a0 = puStack_68;
        func_0x0001098968d0(param_8 + 1,&iStack_a8);
        if ((3 < iStack_a8) && (puStack_a0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_a0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4a60();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca59f0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca59f4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if ((ulong)param_7 >> 0x3c == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 4);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0xc] = 0;
      puVar11 = puVar11 + 0x10;
    } while (puVar11 != puVar5 + (long)param_7 * 0x10);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_148,param_6,plVar17);
      puStack_130 = (undefined8 *)CONCAT44(uStack_144,iStack_148);
      puStack_128 = puStack_140;
      lStack_120 = lStack_138;
      uStack_118 = 0;
      func_0x000107c2b080(&puStack_130);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar8 = 8;
          if (uStack_118 <= (ulong)plVar13[7]) {
            lVar8 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar8);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_118)) {
          lVar8 = plVar12[8];
          if (*(short *)(lVar8 + 0x20) != 0x22) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca5cc0;
          }
          uVar23 = *(undefined4 *)(lVar8 + 0x2c);
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x10);
          *puVar10 = *(undefined8 *)(lVar8 + 0x24);
          *(undefined4 *)(puVar10 + 1) = uVar23;
          if ((*(byte *)((long)puVar10 + 0xc) & 1) == 0) {
            *(undefined1 *)((long)puVar10 + 0xc) = 1;
          }
        }
      }
      if (lStack_120 < 0) {
        __ZdlPv(puStack_130);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_130,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_108 = puStack_130;
        puVar11 = puVar5;
        do {
          if ((puVar11[0xc] & 1) == 0) {
            puStack_130 = (undefined8 *)CONCAT44(puStack_130._4_4_,1);
          }
          else {
            FUN_10a368a00(&puStack_130,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_108,plVar18,&puStack_130);
          if ((3 < (int)puStack_130) && (puStack_128 != (undefined8 *)0x0)) {
            (**(code **)*puStack_128)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x10;
        } while (param_7 != plVar18);
        iStack_148 = 7;
        puStack_140 = puStack_108;
        func_0x0001098968d0(param_8 + 1,&iStack_148);
        if ((3 < iStack_148) && (puStack_140 != (undefined8 *)0x0)) {
          (**(code **)*puStack_140)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4a74();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca5cc0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca5cc4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x10] = 0;
      puVar11 = puVar11 + 0x14;
    } while (puVar11 != puVar5 + (long)param_7 * 0x14);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_1f8,param_6,plVar17);
      puStack_1e0 = (undefined8 *)CONCAT44(uStack_1f4,iStack_1f8);
      puStack_1d8 = puStack_1f0;
      lStack_1d0 = lStack_1e8;
      uStack_1c8 = 0;
      func_0x000107c2b080(&puStack_1e0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar8 = 8;
          if (uStack_1c8 <= (ulong)plVar13[7]) {
            lVar8 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar8);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_1c8)) {
          lVar8 = plVar12[8];
          if (*(short *)(lVar8 + 0x20) != 0x23) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca5fa0;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x14);
          uVar7 = *(undefined8 *)(lVar8 + 0x24);
          puVar10[1] = *(undefined8 *)(lVar8 + 0x2c);
          *puVar10 = uVar7;
          if ((*(byte *)(puVar10 + 2) & 1) == 0) {
            *(undefined1 *)(puVar10 + 2) = 1;
          }
        }
      }
      if (lStack_1d0 < 0) {
        __ZdlPv(puStack_1e0);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_1e0,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_1b8 = puStack_1e0;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x10] & 1) == 0) {
            puStack_1e0 = (undefined8 *)CONCAT44(puStack_1e0._4_4_,1);
          }
          else {
            FUN_10a368c2c(&puStack_1e0,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_1b8,plVar18,&puStack_1e0);
          if ((3 < (int)puStack_1e0) && (puStack_1d8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_1d8)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x14;
        } while (param_7 != plVar18);
        iStack_1f8 = 7;
        puStack_1f0 = puStack_1b8;
        func_0x0001098968d0(param_8 + 1,&iStack_1f8);
        if ((3 < iStack_1f8) && (puStack_1f0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_1f0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4a88();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca5fa0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca5fa4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x1555555555555556) {
    puVar5 = (undefined1 *)((long)param_7 * 0xc);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[8] = 0;
      puVar11 = puVar11 + 0xc;
    } while (puVar11 != puVar5 + (long)param_7 * 0xc);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_2a8,param_6,plVar17);
      puStack_290 = (undefined8 *)CONCAT44(uStack_2a4,iStack_2a8);
      puStack_288 = puStack_2a0;
      lStack_280 = lStack_298;
      uStack_278 = 0;
      func_0x000107c2b080(&puStack_290);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar8 = 8;
          if (uStack_278 <= (ulong)plVar13[7]) {
            lVar8 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar8);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_278)) {
          if (*(short *)(plVar12[8] + 0x20) != 0x24) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6284;
          }
          uVar7 = *(undefined8 *)(plVar12[8] + 0x24);
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0xc);
          if ((*(byte *)(puVar10 + 1) & 1) == 0) {
            *(undefined1 *)(puVar10 + 1) = 1;
          }
          *puVar10 = uVar7;
        }
      }
      if (lStack_280 < 0) {
        __ZdlPv(puStack_290);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_290,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_268 = puStack_290;
        puVar11 = puVar5;
        do {
          if ((puVar11[8] & 1) == 0) {
            puStack_290 = (undefined8 *)CONCAT44(puStack_290._4_4_,1);
          }
          else {
            FUN_10a368e50(&puStack_290,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_268,plVar18,&puStack_290);
          if ((3 < (int)puStack_290) && (puStack_288 != (undefined8 *)0x0)) {
            (**(code **)*puStack_288)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0xc;
        } while (param_7 != plVar18);
        iStack_2a8 = 7;
        puStack_2a0 = puStack_268;
        func_0x0001098968d0(param_8 + 1,&iStack_2a8);
        if ((3 < iStack_2a8) && (puStack_2a0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_2a0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4a9c();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6284:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6288);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if ((ulong)param_7 >> 0x3c == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 4);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0xc] = 0;
      puVar11 = puVar11 + 0x10;
    } while (puVar11 != puVar5 + (long)param_7 * 0x10);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_348,param_6,plVar17);
      puStack_330 = (undefined8 *)CONCAT44(uStack_344,iStack_348);
      puStack_328 = puStack_340;
      lStack_320 = lStack_338;
      uStack_318 = 0;
      func_0x000107c2b080(&puStack_330);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar8 = 8;
          if (uStack_318 <= (ulong)plVar13[7]) {
            lVar8 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar8);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_318)) {
          lVar8 = plVar12[8];
          if (*(short *)(lVar8 + 0x20) != 0x25) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6554;
          }
          uVar23 = *(undefined4 *)(lVar8 + 0x2c);
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x10);
          *puVar10 = *(undefined8 *)(lVar8 + 0x24);
          *(undefined4 *)(puVar10 + 1) = uVar23;
          if ((*(byte *)((long)puVar10 + 0xc) & 1) == 0) {
            *(undefined1 *)((long)puVar10 + 0xc) = 1;
          }
        }
      }
      if (lStack_320 < 0) {
        __ZdlPv(puStack_330);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_330,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_308 = puStack_330;
        puVar11 = puVar5;
        do {
          if ((puVar11[0xc] & 1) == 0) {
            puStack_330 = (undefined8 *)CONCAT44(puStack_330._4_4_,1);
          }
          else {
            FUN_10a369074(&puStack_330,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_308,plVar18,&puStack_330);
          if ((3 < (int)puStack_330) && (puStack_328 != (undefined8 *)0x0)) {
            (**(code **)*puStack_328)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x10;
        } while (param_7 != plVar18);
        iStack_348 = 7;
        puStack_340 = puStack_308;
        func_0x0001098968d0(param_8 + 1,&iStack_348);
        if ((3 < iStack_348) && (puStack_340 != (undefined8 *)0x0)) {
          (**(code **)*puStack_340)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4ab0();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6554:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6558);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x10] = 0;
      puVar11 = puVar11 + 0x14;
    } while (puVar11 != puVar5 + (long)param_7 * 0x14);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_3f8,param_6,plVar17);
      puStack_3e0 = (undefined8 *)CONCAT44(uStack_3f4,iStack_3f8);
      puStack_3d8 = puStack_3f0;
      lStack_3d0 = lStack_3e8;
      uStack_3c8 = 0;
      func_0x000107c2b080(&puStack_3e0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar8 = 8;
          if (uStack_3c8 <= (ulong)plVar13[7]) {
            lVar8 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar8);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_3c8)) {
          lVar8 = plVar12[8];
          if (*(short *)(lVar8 + 0x20) != 0x26) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6834;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x14);
          uVar7 = *(undefined8 *)(lVar8 + 0x24);
          puVar10[1] = *(undefined8 *)(lVar8 + 0x2c);
          *puVar10 = uVar7;
          if ((*(byte *)(puVar10 + 2) & 1) == 0) {
            *(undefined1 *)(puVar10 + 2) = 1;
          }
        }
      }
      if (lStack_3d0 < 0) {
        __ZdlPv(puStack_3e0);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_3e0,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_3b8 = puStack_3e0;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x10] & 1) == 0) {
            puStack_3e0 = (undefined8 *)CONCAT44(puStack_3e0._4_4_,1);
          }
          else {
            FUN_10a3692a0(&puStack_3e0,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_3b8,plVar18,&puStack_3e0);
          if ((3 < (int)puStack_3e0) && (puStack_3d8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_3d8)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x14;
        } while (param_7 != plVar18);
        iStack_3f8 = 7;
        puStack_3f0 = puStack_3b8;
        func_0x0001098968d0(param_8 + 1,&iStack_3f8);
        if ((3 < iStack_3f8) && (puStack_3f0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_3f0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4ac4();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6834:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6838);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  uVar28 = (undefined4)param_4;
  uVar25 = (undefined4)param_3;
  uVar23 = (undefined4)param_2;
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x10] = 0;
      puVar11 = puVar11 + 0x14;
    } while (puVar11 != puVar5 + (long)param_7 * 0x14);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_4a8,param_6,plVar17);
      puVar10 = (undefined8 *)CONCAT44(uStack_4a4,iStack_4a8);
      puStack_488 = puStack_4a0;
      lStack_480 = lStack_498;
      uStack_478 = 0;
      puStack_490 = puVar10;
      func_0x000107c2b080(&puStack_490);
      uVar23 = SUB84(puVar10,0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar8 = 8;
          if (uStack_478 <= (ulong)plVar13[7]) {
            lVar8 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar8);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_478)) {
          FUN_10aca4910(plVar12[8]);
          puVar9 = (undefined4 *)(puVar5 + (long)plVar17 * 0x14);
          *puVar9 = uVar23;
          puVar9[1] = (int)param_2;
          puVar9[2] = (int)param_3;
          puVar9[3] = (int)param_4;
          if ((*(byte *)(puVar9 + 4) & 1) == 0) {
            *(undefined1 *)(puVar9 + 4) = 1;
          }
        }
      }
      if (lStack_480 < 0) {
        __ZdlPv(puStack_490);
      }
      plVar17 = (long *)((long)plVar17 + 1);
    } while (plVar17 != param_7);
    plVar17 = (long *)*param_8;
    (**(code **)(*plVar17 + 600))(&puStack_490,plVar17,param_7);
    plVar18 = (long *)0x0;
    puStack_468 = puStack_490;
    puVar11 = puVar5;
    do {
      if ((puVar11[0x10] & 1) == 0) {
        puStack_490 = (undefined8 *)CONCAT44(puStack_490._4_4_,1);
      }
      else {
        FUN_10a3682fc(&puStack_490,plVar17,puVar11);
      }
      (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_468,plVar18,&puStack_490);
      if ((3 < (int)puStack_490) && (puStack_488 != (undefined8 *)0x0)) {
        (**(code **)*puStack_488)();
      }
      plVar18 = (long *)((long)plVar18 + 1);
      puVar11 = puVar11 + 0x14;
    } while (param_7 != plVar18);
    iStack_4a8 = 7;
    puStack_4a0 = puStack_468;
    func_0x0001098968d0(param_8 + 1,&iStack_4a8);
    if ((3 < iStack_4a8) && (puStack_4a0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_4a0)();
    }
    __ZdlPv(puVar5);
    return;
  }
  func_0x00010acd4ad8();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6b00);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x666666666666667) {
    puVar5 = (undefined1 *)((long)param_7 * 0x28);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x24] = 0;
      puVar11 = puVar11 + 0x28;
    } while (puVar11 != puVar5 + (long)param_7 * 0x28);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_558,param_6,plVar17);
      puStack_540 = (undefined8 *)CONCAT44(uStack_554,iStack_558);
      puStack_538 = puStack_550;
      lStack_530 = lStack_548;
      uStack_528 = 0;
      func_0x000107c2b080(&puStack_540);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar8 = 8;
          if (uStack_528 <= (ulong)plVar13[7]) {
            lVar8 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar8);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_528)) {
          lVar8 = plVar12[8];
          if (*(short *)(lVar8 + 0x20) != 10) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6dec;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x28);
          uVar23 = *(undefined4 *)(lVar8 + 0x44);
          uVar22 = *(undefined8 *)(lVar8 + 0x3c);
          uVar7 = *(undefined8 *)(lVar8 + 0x34);
          uVar24 = *(undefined8 *)(lVar8 + 0x24);
          puVar10[1] = *(undefined8 *)(lVar8 + 0x2c);
          *puVar10 = uVar24;
          puVar10[3] = uVar22;
          puVar10[2] = uVar7;
          *(undefined4 *)(puVar10 + 4) = uVar23;
          if ((*(byte *)((long)puVar10 + 0x24) & 1) == 0) {
            *(undefined1 *)((long)puVar10 + 0x24) = 1;
          }
        }
      }
      if (lStack_530 < 0) {
        __ZdlPv(puStack_540);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_540,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_518 = puStack_540;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x24] & 1) == 0) {
            puStack_540 = (undefined8 *)CONCAT44(puStack_540._4_4_,1);
          }
          else {
            FUN_10a368520(&puStack_540,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_518,plVar18,&puStack_540);
          if ((3 < (int)puStack_540) && (puStack_538 != (undefined8 *)0x0)) {
            (**(code **)*puStack_538)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x28;
        } while (param_7 != plVar18);
        iStack_558 = 7;
        puStack_550 = puStack_518;
        func_0x0001098968d0(param_8 + 1,&iStack_558);
        if ((3 < iStack_558) && (puStack_550 != (undefined8 *)0x0)) {
          (**(code **)*puStack_550)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4aec();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6dec:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6df0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x3c3c3c3c3c3c3c4) {
    puVar5 = (undefined1 *)((long)param_7 * 0x44);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x40] = 0;
      puVar11 = puVar11 + 0x44;
    } while (puVar11 != puVar5 + (long)param_7 * 0x44);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_608,param_6,plVar17);
      puStack_5f0 = (undefined8 *)CONCAT44(uStack_604,iStack_608);
      puStack_5e8 = puStack_600;
      lStack_5e0 = lStack_5f8;
      uStack_5d8 = 0;
      func_0x000107c2b080(&puStack_5f0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar8 = 8;
          if (uStack_5d8 <= (ulong)plVar13[7]) {
            lVar8 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar8);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_5d8)) {
          lVar8 = plVar12[8];
          if (*(short *)(lVar8 + 0x20) != 0xb) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca70dc;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x44);
          uVar22 = *(undefined8 *)(lVar8 + 0x3c);
          uVar7 = *(undefined8 *)(lVar8 + 0x34);
          uVar24 = *(undefined8 *)(lVar8 + 0x44);
          uVar27 = *(undefined8 *)(lVar8 + 0x5c);
          uVar26 = *(undefined8 *)(lVar8 + 0x54);
          uVar30 = *(undefined8 *)(lVar8 + 0x2c);
          uVar29 = *(undefined8 *)(lVar8 + 0x24);
          puVar10[5] = *(undefined8 *)(lVar8 + 0x4c);
          puVar10[4] = uVar24;
          puVar10[7] = uVar27;
          puVar10[6] = uVar26;
          puVar10[1] = uVar30;
          *puVar10 = uVar29;
          puVar10[3] = uVar22;
          puVar10[2] = uVar7;
          if ((*(byte *)(puVar10 + 8) & 1) == 0) {
            *(undefined1 *)(puVar10 + 8) = 1;
          }
        }
      }
      if (lStack_5e0 < 0) {
        __ZdlPv(puStack_5f0);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_5f0,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_5c8 = puStack_5f0;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x40] & 1) == 0) {
            puStack_5f0 = (undefined8 *)CONCAT44(puStack_5f0._4_4_,1);
          }
          else {
            FUN_10a368650(&puStack_5f0,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_5c8,plVar18,&puStack_5f0);
          if ((3 < (int)puStack_5f0) && (puStack_5e8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_5e8)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x44;
        } while (param_7 != plVar18);
        iStack_608 = 7;
        puStack_600 = puStack_5c8;
        func_0x0001098968d0(param_8 + 1,&iStack_608);
        if ((3 < iStack_608) && (puStack_600 != (undefined8 *)0x0)) {
          (**(code **)*puStack_600)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b00();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca70dc:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca70e0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if ((ulong)param_7 >> 0x3d == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 3);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[4] = 0;
      puVar11 = puVar11 + 8;
    } while (puVar11 != puVar5 + (long)param_7 * 8);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_6a8,param_6,plVar17);
      puStack_690 = (undefined8 *)CONCAT44(uStack_6a4,iStack_6a8);
      puStack_688 = puStack_6a0;
      lStack_680 = lStack_698;
      uStack_678 = 0;
      func_0x000107c2b080(&puStack_690);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar8 = 8;
          if (uStack_678 <= (ulong)plVar13[7]) {
            lVar8 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar8);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_678)) {
          if (*(short *)(plVar12[8] + 0x20) != 2) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca73a0;
          }
          *(undefined4 *)(puVar5 + (long)plVar17 * 8) = *(undefined4 *)(plVar12[8] + 0x24);
          *(undefined1 *)((long)(puVar5 + (long)plVar17 * 8) + 4) = 1;
        }
      }
      if (lStack_680 < 0) {
        __ZdlPv(puStack_690);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_690,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_668 = puStack_690;
        pcVar19 = puVar5 + 4;
        do {
          if (*pcVar19 == '\x01') {
            puStack_688 = (undefined8 *)(double)*(int *)(pcVar19 + -4);
            uVar23 = 3;
          }
          else {
            uVar23 = 1;
          }
          puStack_690 = (undefined8 *)CONCAT44(puStack_690._4_4_,uVar23);
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_668,plVar18,&puStack_690);
          if ((3 < (int)puStack_690) && (puStack_688 != (undefined8 *)0x0)) {
            (**(code **)*puStack_688)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          pcVar19 = pcVar19 + 8;
        } while (param_7 != plVar18);
        iStack_6a8 = 7;
        puStack_6a0 = puStack_668;
        func_0x0001098968d0(param_8 + 1,&iStack_6a8);
        if ((3 < iStack_6a8) && (puStack_6a0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_6a0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b14();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca73a0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca73a4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  lVar8 = param_5 + -0x18;
  FUN_10a0d09b4(auStack_750);
  plVar18 = (long *)(param_5 + 0x178);
  plVar12 = *(long **)(param_5 + 0x178);
  plVar17 = plVar18;
  if (plVar12 != (long *)0x0) {
    do {
      lVar6 = 8;
      if (uStack_738 <= (ulong)plVar12[7]) {
        lVar6 = 0;
        plVar17 = plVar12;
      }
      plVar12 = *(long **)((long)plVar12 + lVar6);
    } while (plVar12 != (long *)0x0);
    if ((plVar17 != plVar18) && ((ulong)plVar17[7] <= uStack_738)) {
      lVar8 = plVar17[8];
      switch(*(undefined2 *)(lVar8 + 0x20)) {
      case 1:
        uStack_790 = (undefined8 *)CONCAT71(uStack_790._1_7_,*(undefined1 *)(lVar8 + 0x24));
        FUN_10a351b5c(param_7,&uStack_790);
        break;
      case 2:
        uStack_790 = (undefined8 *)CONCAT44(uStack_790._4_4_,*(undefined4 *)(lVar8 + 0x24));
        func_0x00010a368134(param_7,&uStack_790);
        break;
      case 3:
        uStack_790 = (undefined8 *)CONCAT44(uStack_790._4_4_,*(undefined4 *)(lVar8 + 0x24));
        FUN_10a3680dc(param_7,&uStack_790);
        break;
      case 6:
        uStack_790 = (undefined8 *)CONCAT44(uStack_790._4_4_,*(undefined4 *)(lVar8 + 0x24));
        FUN_10a368728(param_7,&uStack_790);
        break;
      case 7:
        uStack_790 = *(undefined8 **)(lVar8 + 0x24);
        func_0x00010a36818c(param_7,&uStack_790);
        break;
      case 8:
        uStack_790 = *(undefined8 **)(lVar8 + 0x24);
        uStack_788 = (long *)CONCAT44(uStack_788._4_4_,*(undefined4 *)(lVar8 + 0x2c));
        func_0x00010a3681e8(param_7,&uStack_790);
        break;
      case 9:
        FUN_10a0dad84();
        uStack_790 = (undefined8 *)CONCAT44(uVar23,param_1);
        uStack_788 = (long *)CONCAT44(uVar28,uVar25);
        func_0x00010a368244(param_7,&uStack_790);
        break;
      case 10:
        uStack_788 = *(long **)(lVar8 + 0x2c);
        uStack_790 = *(undefined8 **)(lVar8 + 0x24);
        uStack_778 = *(ulong *)(lVar8 + 0x3c);
        lStack_780 = *(long *)(lVar8 + 0x34);
        uStack_770 = CONCAT44(uStack_770._4_4_,*(undefined4 *)(lVar8 + 0x44));
        FUN_10a3684c4(param_7,&uStack_790);
        break;
      case 0xb:
        uStack_788 = *(long **)(lVar8 + 0x2c);
        uStack_790 = *(undefined8 **)(lVar8 + 0x24);
        uStack_778 = *(ulong *)(lVar8 + 0x3c);
        lStack_780 = *(long *)(lVar8 + 0x34);
        uStack_768 = *(undefined8 *)(lVar8 + 0x4c);
        uStack_770 = *(undefined8 *)(lVar8 + 0x44);
        uStack_758 = *(undefined8 *)(lVar8 + 0x5c);
        uStack_760 = *(undefined8 *)(lVar8 + 0x54);
        FUN_10a3685f4(param_7,&uStack_790);
        break;
      case 0x16:
        FUN_10aca4910();
        uStack_790 = (undefined8 *)CONCAT44(uVar23,param_1);
        uStack_788 = (long *)CONCAT44(uVar28,uVar25);
        func_0x00010a3682a0(param_7,&uStack_790);
        break;
      case 0x1f:
        uStack_790 = *(undefined8 **)(lVar8 + 0x24);
        FUN_10a368780(param_7,&uStack_790);
        break;
      case 0x22:
        uStack_790 = *(undefined8 **)(lVar8 + 0x24);
        uStack_788 = (long *)CONCAT44(uStack_788._4_4_,*(undefined4 *)(lVar8 + 0x2c));
        FUN_10a3689a4(param_7,&uStack_790);
        break;
      case 0x23:
        uStack_788 = *(long **)(lVar8 + 0x2c);
        uStack_790 = *(undefined8 **)(lVar8 + 0x24);
        FUN_10a368bd0(param_7,&uStack_790);
        break;
      case 0x24:
        uStack_790 = *(undefined8 **)(lVar8 + 0x24);
        FUN_10a368df4(param_7,&uStack_790);
        break;
      case 0x25:
        uStack_790 = *(undefined8 **)(lVar8 + 0x24);
        uStack_788 = (long *)CONCAT44(uStack_788._4_4_,*(undefined4 *)(lVar8 + 0x2c));
        FUN_10a369018(param_7,&uStack_790);
        break;
      case 0x26:
        uStack_788 = *(long **)(lVar8 + 0x2c);
        uStack_790 = *(undefined8 **)(lVar8 + 0x24);
        FUN_10a369244(param_7,&uStack_790);
      }
      goto LAB_10aca426c;
    }
  }
  lVar6 = *(long *)(param_5 + 400);
  if (lVar6 != 0) {
    lVar15 = param_5 + 400;
    do {
      lVar1 = 8;
      if (uStack_738 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar15 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar15 != param_5 + 400) && (*(ulong *)(lVar15 + 0x38) <= uStack_738)) {
      FUN_10a1f92d8(param_7,*(long *)(lVar15 + 0x40) + 0x188);
      goto LAB_10aca426c;
    }
  }
  lVar6 = *(long *)(param_5 + 0x1c0);
  if (lVar6 != 0) {
    lVar15 = param_5 + 0x1c0;
    do {
      lVar1 = 8;
      if (uStack_738 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar15 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar15 != param_5 + 0x1c0) && (*(ulong *)(lVar15 + 0x38) <= uStack_738)) {
      uVar14 = *(ulong *)(lVar15 + 0x40);
      if (uVar14 == 0) {
        lVar6 = 0;
        lVar8 = 0;
      }
      else {
        uVar16 = 0;
        uVar20 = 0;
        do {
          FUN_10aca38a0(&iStack_7a8,param_6,uVar16);
          uStack_790 = (undefined8 *)CONCAT44(uStack_7a4,iStack_7a8);
          uStack_788 = plStack_7a0;
          lStack_780 = lStack_798;
          uStack_778 = 0;
          func_0x000107c2b080(&uStack_790);
          plVar12 = (long *)*plVar18;
          plVar17 = plVar18;
          if (plVar12 == (long *)0x0) {
LAB_10aca41d4:
            bVar3 = false;
            uVar21 = uVar20;
          }
          else {
            do {
              lVar6 = 8;
              if (uStack_778 <= (ulong)plVar12[7]) {
                lVar6 = 0;
                plVar17 = plVar12;
              }
              plVar12 = *(long **)((long)plVar12 + lVar6);
            } while (plVar12 != (long *)0x0);
            if ((plVar17 == plVar18) || (uStack_778 < (ulong)plVar17[7])) goto LAB_10aca41d4;
            bVar3 = *(ushort *)(plVar17[8] + 0x20) != 0;
            uVar21 = *(ushort *)(plVar17[8] + 0x20);
            if (!bVar3) {
              uVar21 = uVar20;
            }
          }
          if (lStack_780 < 0) {
            __ZdlPv(uStack_790);
          }
          uVar16 = uVar16 + 1;
          if (uVar16 == uVar14) {
            bVar3 = true;
          }
          uVar20 = uVar21;
        } while (!bVar3);
        if (uVar21 < 0xb) {
          if (uVar21 < 7) {
            if (uVar21 == 1) {
              FUN_10aca493c(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 2) {
              FUN_10aca7104(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 3) {
              FUN_10aca4bec(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
          else if (uVar21 < 9) {
            if (uVar21 == 7) {
              FUN_10aca4eb0(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 8) {
              FUN_10aca5194(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar21 == 9) {
              FUN_10aca546c(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 10) {
              FUN_10aca6b24(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar21 < 0x23) {
          if (uVar21 < 0x1f) {
            if (uVar21 == 0xb) {
              FUN_10aca6e14(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 0x16) {
              FUN_10aca685c(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar21 == 0x1f) {
              FUN_10aca5734(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 0x22) {
              FUN_10aca5a18(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar21 < 0x25) {
          if (uVar21 == 0x23) {
            FUN_10aca5ce8(lVar8,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
          if (uVar21 == 0x24) {
            FUN_10aca5fc8(lVar8,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
        }
        else {
          if (uVar21 == 0x25) {
            FUN_10aca62ac(lVar8,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
          if (uVar21 == 0x26) {
            FUN_10aca657c(lVar8,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
        }
        if (uVar14 >> 0x3d != 0) {
          FUN_10acb63ac();
LAB_10aca48cc:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca48d0);
          (*pcVar2)();
        }
        lVar6 = uVar14 * 8;
        __Znwm();
        _bzero();
        lVar8 = lVar6 + uVar14 * 8;
      }
      plVar18 = (long *)*param_7;
      lVar15 = lVar8 - lVar6 >> 3;
      (**(code **)(*plVar18 + 600))(&uStack_790,plVar18,lVar15);
      apuStack_720[0] = uStack_790;
      if (lVar8 != lVar6) {
        lVar8 = 0;
        do {
          plVar17 = plVar18;
          (**(code **)(*plVar18 + 0x58))();
          if ((*(byte *)(plVar17 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
          plVar12 = (long *)plVar17[4];
          if (plVar12 == (long *)0x0) {
            func_0x000109899fd8(plVar17);
            plVar12 = (long *)plVar17[4];
          }
          plVar17[4] = *plVar12;
          plVar12[1] = 0;
          plVar12[2] = 0;
          *plVar12 = (long)&PTR_FUN_110c6bfc0;
          plVar13 = plVar18;
          (**(code **)(*plVar18 + 0x58))();
          plVar17 = plVar13;
          FUN_10a065534();
          if (plVar17 == (long *)0x0) {
            if ((*(byte *)(plVar13 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
            plVar17 = plVar13 + 0x1b;
          }
          uStack_790 = (undefined8 *)CONCAT44(uStack_790._4_4_,7);
          plVar4 = plVar18;
          (**(code **)(*plVar18 + 0x98))(plVar18,*plVar17);
          uStack_788 = plVar4;
          (**(code **)(*plVar18 + 0x2f8))
                    (&plStack_7a0,plVar18,plVar12,plVar13,&UNK_10989ba24,&uStack_790);
          iStack_7a8 = 7;
          if ((3 < (int)uStack_790) && (uStack_788 != (long *)0x0)) {
            (**(code **)*uStack_788)();
          }
          (**(code **)(*plVar18 + 0x290))(plVar18,apuStack_720,lVar8,&iStack_7a8);
          if ((3 < iStack_7a8) && (plStack_7a0 != (long *)0x0)) {
            (**(code **)*plStack_7a0)();
          }
          lVar8 = lVar8 + 1;
        } while (lVar15 != lVar8);
      }
      aiStack_730[0] = 7;
      puStack_728 = apuStack_720[0];
      func_0x0001098968d0(param_7 + 1,aiStack_730);
      if ((3 < aiStack_730[0]) && (puStack_728 != (undefined8 *)0x0)) {
        (**(code **)*puStack_728)();
      }
      if (lVar6 != 0) {
        __ZdlPv(lVar6);
      }
    }
  }
LAB_10aca426c:
  if (cStack_739 < '\0') {
    __ZdlPv(auStack_750[0]);
  }
  return;
}



/* Entry: 10aca5a18; end: 10aca5ce7;  */

void FUN_10aca5a18(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long *param_7,undefined8 *param_8)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *unaff_x20;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  char *pcVar19;
  ushort uVar20;
  ushort uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  int iStack_6f8;
  undefined4 uStack_6f4;
  long *plStack_6f0;
  long lStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  long lStack_6d0;
  ulong uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 auStack_6a0 [2];
  char cStack_689;
  ulong uStack_688;
  int aiStack_680 [2];
  undefined8 *puStack_678;
  undefined8 *apuStack_670 [2];
  int iStack_5f8;
  undefined4 uStack_5f4;
  undefined8 *puStack_5f0;
  long lStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  long lStack_5d0;
  ulong uStack_5c8;
  undefined8 *puStack_5b8;
  int iStack_558;
  undefined4 uStack_554;
  undefined8 *puStack_550;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  long lStack_530;
  ulong uStack_528;
  undefined8 *puStack_518;
  int iStack_4a8;
  undefined4 uStack_4a4;
  undefined8 *puStack_4a0;
  long lStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  long lStack_480;
  ulong uStack_478;
  undefined8 *puStack_468;
  int iStack_3f8;
  undefined4 uStack_3f4;
  undefined8 *puStack_3f0;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  long lStack_3d0;
  ulong uStack_3c8;
  undefined8 *puStack_3b8;
  int iStack_348;
  undefined4 uStack_344;
  undefined8 *puStack_340;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  long lStack_320;
  ulong uStack_318;
  undefined8 *puStack_308;
  int iStack_298;
  undefined4 uStack_294;
  undefined8 *puStack_290;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  long lStack_270;
  ulong uStack_268;
  undefined8 *puStack_258;
  int iStack_1f8;
  undefined4 uStack_1f4;
  undefined8 *puStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  undefined8 *puStack_1b8;
  int iStack_148;
  undefined4 uStack_144;
  undefined8 *puStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined8 *puStack_108;
  int iStack_98;
  undefined4 uStack_94;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 *puStack_58;
  
  if ((ulong)param_7 >> 0x3c == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 4);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0xc] = 0;
      puVar11 = puVar11 + 0x10;
    } while (puVar11 != puVar5 + (long)param_7 * 0x10);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_98,param_6,plVar17);
      puStack_80 = (undefined8 *)CONCAT44(uStack_94,iStack_98);
      puStack_78 = puStack_90;
      lStack_70 = lStack_88;
      uStack_68 = 0;
      func_0x000107c2b080(&puStack_80);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_68 <= (ulong)plVar13[7]) {
            lVar7 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar7);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_68)) {
          lVar7 = plVar12[8];
          if (*(short *)(lVar7 + 0x20) != 0x22) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca5cc0;
          }
          uVar23 = *(undefined4 *)(lVar7 + 0x2c);
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x10);
          *puVar10 = *(undefined8 *)(lVar7 + 0x24);
          *(undefined4 *)(puVar10 + 1) = uVar23;
          if ((*(byte *)((long)puVar10 + 0xc) & 1) == 0) {
            *(undefined1 *)((long)puVar10 + 0xc) = 1;
          }
        }
      }
      if (lStack_70 < 0) {
        __ZdlPv(puStack_80);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_80,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_58 = puStack_80;
        puVar11 = puVar5;
        do {
          if ((puVar11[0xc] & 1) == 0) {
            puStack_80 = (undefined8 *)CONCAT44(puStack_80._4_4_,1);
          }
          else {
            FUN_10a368a00(&puStack_80,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_58,plVar18,&puStack_80);
          if ((3 < (int)puStack_80) && (puStack_78 != (undefined8 *)0x0)) {
            (**(code **)*puStack_78)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x10;
        } while (param_7 != plVar18);
        iStack_98 = 7;
        puStack_90 = puStack_58;
        func_0x0001098968d0(param_8 + 1,&iStack_98);
        if ((3 < iStack_98) && (puStack_90 != (undefined8 *)0x0)) {
          (**(code **)*puStack_90)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4a74();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca5cc0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca5cc4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x10] = 0;
      puVar11 = puVar11 + 0x14;
    } while (puVar11 != puVar5 + (long)param_7 * 0x14);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_148,param_6,plVar17);
      puStack_130 = (undefined8 *)CONCAT44(uStack_144,iStack_148);
      puStack_128 = puStack_140;
      lStack_120 = lStack_138;
      uStack_118 = 0;
      func_0x000107c2b080(&puStack_130);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_118 <= (ulong)plVar13[7]) {
            lVar7 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar7);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_118)) {
          lVar7 = plVar12[8];
          if (*(short *)(lVar7 + 0x20) != 0x23) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca5fa0;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x14);
          uVar8 = *(undefined8 *)(lVar7 + 0x24);
          puVar10[1] = *(undefined8 *)(lVar7 + 0x2c);
          *puVar10 = uVar8;
          if ((*(byte *)(puVar10 + 2) & 1) == 0) {
            *(undefined1 *)(puVar10 + 2) = 1;
          }
        }
      }
      if (lStack_120 < 0) {
        __ZdlPv(puStack_130);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_130,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_108 = puStack_130;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x10] & 1) == 0) {
            puStack_130 = (undefined8 *)CONCAT44(puStack_130._4_4_,1);
          }
          else {
            FUN_10a368c2c(&puStack_130,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_108,plVar18,&puStack_130);
          if ((3 < (int)puStack_130) && (puStack_128 != (undefined8 *)0x0)) {
            (**(code **)*puStack_128)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x14;
        } while (param_7 != plVar18);
        iStack_148 = 7;
        puStack_140 = puStack_108;
        func_0x0001098968d0(param_8 + 1,&iStack_148);
        if ((3 < iStack_148) && (puStack_140 != (undefined8 *)0x0)) {
          (**(code **)*puStack_140)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4a88();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca5fa0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca5fa4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x1555555555555556) {
    puVar5 = (undefined1 *)((long)param_7 * 0xc);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[8] = 0;
      puVar11 = puVar11 + 0xc;
    } while (puVar11 != puVar5 + (long)param_7 * 0xc);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_1f8,param_6,plVar17);
      puStack_1e0 = (undefined8 *)CONCAT44(uStack_1f4,iStack_1f8);
      puStack_1d8 = puStack_1f0;
      lStack_1d0 = lStack_1e8;
      uStack_1c8 = 0;
      func_0x000107c2b080(&puStack_1e0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_1c8 <= (ulong)plVar13[7]) {
            lVar7 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar7);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_1c8)) {
          if (*(short *)(plVar12[8] + 0x20) != 0x24) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6284;
          }
          uVar8 = *(undefined8 *)(plVar12[8] + 0x24);
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0xc);
          if ((*(byte *)(puVar10 + 1) & 1) == 0) {
            *(undefined1 *)(puVar10 + 1) = 1;
          }
          *puVar10 = uVar8;
        }
      }
      if (lStack_1d0 < 0) {
        __ZdlPv(puStack_1e0);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_1e0,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_1b8 = puStack_1e0;
        puVar11 = puVar5;
        do {
          if ((puVar11[8] & 1) == 0) {
            puStack_1e0 = (undefined8 *)CONCAT44(puStack_1e0._4_4_,1);
          }
          else {
            FUN_10a368e50(&puStack_1e0,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_1b8,plVar18,&puStack_1e0);
          if ((3 < (int)puStack_1e0) && (puStack_1d8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_1d8)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0xc;
        } while (param_7 != plVar18);
        iStack_1f8 = 7;
        puStack_1f0 = puStack_1b8;
        func_0x0001098968d0(param_8 + 1,&iStack_1f8);
        if ((3 < iStack_1f8) && (puStack_1f0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_1f0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4a9c();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6284:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6288);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if ((ulong)param_7 >> 0x3c == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 4);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0xc] = 0;
      puVar11 = puVar11 + 0x10;
    } while (puVar11 != puVar5 + (long)param_7 * 0x10);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_298,param_6,plVar17);
      puStack_280 = (undefined8 *)CONCAT44(uStack_294,iStack_298);
      puStack_278 = puStack_290;
      lStack_270 = lStack_288;
      uStack_268 = 0;
      func_0x000107c2b080(&puStack_280);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_268 <= (ulong)plVar13[7]) {
            lVar7 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar7);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_268)) {
          lVar7 = plVar12[8];
          if (*(short *)(lVar7 + 0x20) != 0x25) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6554;
          }
          uVar23 = *(undefined4 *)(lVar7 + 0x2c);
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x10);
          *puVar10 = *(undefined8 *)(lVar7 + 0x24);
          *(undefined4 *)(puVar10 + 1) = uVar23;
          if ((*(byte *)((long)puVar10 + 0xc) & 1) == 0) {
            *(undefined1 *)((long)puVar10 + 0xc) = 1;
          }
        }
      }
      if (lStack_270 < 0) {
        __ZdlPv(puStack_280);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_280,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_258 = puStack_280;
        puVar11 = puVar5;
        do {
          if ((puVar11[0xc] & 1) == 0) {
            puStack_280 = (undefined8 *)CONCAT44(puStack_280._4_4_,1);
          }
          else {
            FUN_10a369074(&puStack_280,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_258,plVar18,&puStack_280);
          if ((3 < (int)puStack_280) && (puStack_278 != (undefined8 *)0x0)) {
            (**(code **)*puStack_278)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x10;
        } while (param_7 != plVar18);
        iStack_298 = 7;
        puStack_290 = puStack_258;
        func_0x0001098968d0(param_8 + 1,&iStack_298);
        if ((3 < iStack_298) && (puStack_290 != (undefined8 *)0x0)) {
          (**(code **)*puStack_290)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4ab0();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6554:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6558);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x10] = 0;
      puVar11 = puVar11 + 0x14;
    } while (puVar11 != puVar5 + (long)param_7 * 0x14);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_348,param_6,plVar17);
      puStack_330 = (undefined8 *)CONCAT44(uStack_344,iStack_348);
      puStack_328 = puStack_340;
      lStack_320 = lStack_338;
      uStack_318 = 0;
      func_0x000107c2b080(&puStack_330);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_318 <= (ulong)plVar13[7]) {
            lVar7 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar7);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_318)) {
          lVar7 = plVar12[8];
          if (*(short *)(lVar7 + 0x20) != 0x26) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6834;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x14);
          uVar8 = *(undefined8 *)(lVar7 + 0x24);
          puVar10[1] = *(undefined8 *)(lVar7 + 0x2c);
          *puVar10 = uVar8;
          if ((*(byte *)(puVar10 + 2) & 1) == 0) {
            *(undefined1 *)(puVar10 + 2) = 1;
          }
        }
      }
      if (lStack_320 < 0) {
        __ZdlPv(puStack_330);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_330,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_308 = puStack_330;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x10] & 1) == 0) {
            puStack_330 = (undefined8 *)CONCAT44(puStack_330._4_4_,1);
          }
          else {
            FUN_10a3692a0(&puStack_330,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_308,plVar18,&puStack_330);
          if ((3 < (int)puStack_330) && (puStack_328 != (undefined8 *)0x0)) {
            (**(code **)*puStack_328)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x14;
        } while (param_7 != plVar18);
        iStack_348 = 7;
        puStack_340 = puStack_308;
        func_0x0001098968d0(param_8 + 1,&iStack_348);
        if ((3 < iStack_348) && (puStack_340 != (undefined8 *)0x0)) {
          (**(code **)*puStack_340)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4ac4();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6834:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6838);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  uVar28 = (undefined4)param_4;
  uVar25 = (undefined4)param_3;
  uVar23 = (undefined4)param_2;
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x10] = 0;
      puVar11 = puVar11 + 0x14;
    } while (puVar11 != puVar5 + (long)param_7 * 0x14);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_3f8,param_6,plVar17);
      puVar10 = (undefined8 *)CONCAT44(uStack_3f4,iStack_3f8);
      puStack_3d8 = puStack_3f0;
      lStack_3d0 = lStack_3e8;
      uStack_3c8 = 0;
      puStack_3e0 = puVar10;
      func_0x000107c2b080(&puStack_3e0);
      uVar23 = SUB84(puVar10,0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_3c8 <= (ulong)plVar13[7]) {
            lVar7 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar7);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_3c8)) {
          FUN_10aca4910(plVar12[8]);
          puVar9 = (undefined4 *)(puVar5 + (long)plVar17 * 0x14);
          *puVar9 = uVar23;
          puVar9[1] = (int)param_2;
          puVar9[2] = (int)param_3;
          puVar9[3] = (int)param_4;
          if ((*(byte *)(puVar9 + 4) & 1) == 0) {
            *(undefined1 *)(puVar9 + 4) = 1;
          }
        }
      }
      if (lStack_3d0 < 0) {
        __ZdlPv(puStack_3e0);
      }
      plVar17 = (long *)((long)plVar17 + 1);
    } while (plVar17 != param_7);
    plVar17 = (long *)*param_8;
    (**(code **)(*plVar17 + 600))(&puStack_3e0,plVar17,param_7);
    plVar18 = (long *)0x0;
    puStack_3b8 = puStack_3e0;
    puVar11 = puVar5;
    do {
      if ((puVar11[0x10] & 1) == 0) {
        puStack_3e0 = (undefined8 *)CONCAT44(puStack_3e0._4_4_,1);
      }
      else {
        FUN_10a3682fc(&puStack_3e0,plVar17,puVar11);
      }
      (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_3b8,plVar18,&puStack_3e0);
      if ((3 < (int)puStack_3e0) && (puStack_3d8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_3d8)();
      }
      plVar18 = (long *)((long)plVar18 + 1);
      puVar11 = puVar11 + 0x14;
    } while (param_7 != plVar18);
    iStack_3f8 = 7;
    puStack_3f0 = puStack_3b8;
    func_0x0001098968d0(param_8 + 1,&iStack_3f8);
    if ((3 < iStack_3f8) && (puStack_3f0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_3f0)();
    }
    __ZdlPv(puVar5);
    return;
  }
  func_0x00010acd4ad8();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6b00);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x666666666666667) {
    puVar5 = (undefined1 *)((long)param_7 * 0x28);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x24] = 0;
      puVar11 = puVar11 + 0x28;
    } while (puVar11 != puVar5 + (long)param_7 * 0x28);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_4a8,param_6,plVar17);
      puStack_490 = (undefined8 *)CONCAT44(uStack_4a4,iStack_4a8);
      puStack_488 = puStack_4a0;
      lStack_480 = lStack_498;
      uStack_478 = 0;
      func_0x000107c2b080(&puStack_490);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_478 <= (ulong)plVar13[7]) {
            lVar7 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar7);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_478)) {
          lVar7 = plVar12[8];
          if (*(short *)(lVar7 + 0x20) != 10) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6dec;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x28);
          uVar23 = *(undefined4 *)(lVar7 + 0x44);
          uVar22 = *(undefined8 *)(lVar7 + 0x3c);
          uVar8 = *(undefined8 *)(lVar7 + 0x34);
          uVar24 = *(undefined8 *)(lVar7 + 0x24);
          puVar10[1] = *(undefined8 *)(lVar7 + 0x2c);
          *puVar10 = uVar24;
          puVar10[3] = uVar22;
          puVar10[2] = uVar8;
          *(undefined4 *)(puVar10 + 4) = uVar23;
          if ((*(byte *)((long)puVar10 + 0x24) & 1) == 0) {
            *(undefined1 *)((long)puVar10 + 0x24) = 1;
          }
        }
      }
      if (lStack_480 < 0) {
        __ZdlPv(puStack_490);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_490,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_468 = puStack_490;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x24] & 1) == 0) {
            puStack_490 = (undefined8 *)CONCAT44(puStack_490._4_4_,1);
          }
          else {
            FUN_10a368520(&puStack_490,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_468,plVar18,&puStack_490);
          if ((3 < (int)puStack_490) && (puStack_488 != (undefined8 *)0x0)) {
            (**(code **)*puStack_488)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x28;
        } while (param_7 != plVar18);
        iStack_4a8 = 7;
        puStack_4a0 = puStack_468;
        func_0x0001098968d0(param_8 + 1,&iStack_4a8);
        if ((3 < iStack_4a8) && (puStack_4a0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_4a0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4aec();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6dec:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6df0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x3c3c3c3c3c3c3c4) {
    puVar5 = (undefined1 *)((long)param_7 * 0x44);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x40] = 0;
      puVar11 = puVar11 + 0x44;
    } while (puVar11 != puVar5 + (long)param_7 * 0x44);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_558,param_6,plVar17);
      puStack_540 = (undefined8 *)CONCAT44(uStack_554,iStack_558);
      puStack_538 = puStack_550;
      lStack_530 = lStack_548;
      uStack_528 = 0;
      func_0x000107c2b080(&puStack_540);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_528 <= (ulong)plVar13[7]) {
            lVar7 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar7);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_528)) {
          lVar7 = plVar12[8];
          if (*(short *)(lVar7 + 0x20) != 0xb) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca70dc;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x44);
          uVar22 = *(undefined8 *)(lVar7 + 0x3c);
          uVar8 = *(undefined8 *)(lVar7 + 0x34);
          uVar24 = *(undefined8 *)(lVar7 + 0x44);
          uVar27 = *(undefined8 *)(lVar7 + 0x5c);
          uVar26 = *(undefined8 *)(lVar7 + 0x54);
          uVar30 = *(undefined8 *)(lVar7 + 0x2c);
          uVar29 = *(undefined8 *)(lVar7 + 0x24);
          puVar10[5] = *(undefined8 *)(lVar7 + 0x4c);
          puVar10[4] = uVar24;
          puVar10[7] = uVar27;
          puVar10[6] = uVar26;
          puVar10[1] = uVar30;
          *puVar10 = uVar29;
          puVar10[3] = uVar22;
          puVar10[2] = uVar8;
          if ((*(byte *)(puVar10 + 8) & 1) == 0) {
            *(undefined1 *)(puVar10 + 8) = 1;
          }
        }
      }
      if (lStack_530 < 0) {
        __ZdlPv(puStack_540);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_540,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_518 = puStack_540;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x40] & 1) == 0) {
            puStack_540 = (undefined8 *)CONCAT44(puStack_540._4_4_,1);
          }
          else {
            FUN_10a368650(&puStack_540,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_518,plVar18,&puStack_540);
          if ((3 < (int)puStack_540) && (puStack_538 != (undefined8 *)0x0)) {
            (**(code **)*puStack_538)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x44;
        } while (param_7 != plVar18);
        iStack_558 = 7;
        puStack_550 = puStack_518;
        func_0x0001098968d0(param_8 + 1,&iStack_558);
        if ((3 < iStack_558) && (puStack_550 != (undefined8 *)0x0)) {
          (**(code **)*puStack_550)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b00();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca70dc:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca70e0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if ((ulong)param_7 >> 0x3d == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 3);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[4] = 0;
      puVar11 = puVar11 + 8;
    } while (puVar11 != puVar5 + (long)param_7 * 8);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_5f8,param_6,plVar17);
      puStack_5e0 = (undefined8 *)CONCAT44(uStack_5f4,iStack_5f8);
      puStack_5d8 = puStack_5f0;
      lStack_5d0 = lStack_5e8;
      uStack_5c8 = 0;
      func_0x000107c2b080(&puStack_5e0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_5c8 <= (ulong)plVar13[7]) {
            lVar7 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar7);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_5c8)) {
          if (*(short *)(plVar12[8] + 0x20) != 2) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca73a0;
          }
          *(undefined4 *)(puVar5 + (long)plVar17 * 8) = *(undefined4 *)(plVar12[8] + 0x24);
          *(undefined1 *)((long)(puVar5 + (long)plVar17 * 8) + 4) = 1;
        }
      }
      if (lStack_5d0 < 0) {
        __ZdlPv(puStack_5e0);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_5e0,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_5b8 = puStack_5e0;
        pcVar19 = puVar5 + 4;
        do {
          if (*pcVar19 == '\x01') {
            puStack_5d8 = (undefined8 *)(double)*(int *)(pcVar19 + -4);
            uVar23 = 3;
          }
          else {
            uVar23 = 1;
          }
          puStack_5e0 = (undefined8 *)CONCAT44(puStack_5e0._4_4_,uVar23);
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_5b8,plVar18,&puStack_5e0);
          if ((3 < (int)puStack_5e0) && (puStack_5d8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_5d8)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          pcVar19 = pcVar19 + 8;
        } while (param_7 != plVar18);
        iStack_5f8 = 7;
        puStack_5f0 = puStack_5b8;
        func_0x0001098968d0(param_8 + 1,&iStack_5f8);
        if ((3 < iStack_5f8) && (puStack_5f0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_5f0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b14();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca73a0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca73a4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  lVar7 = param_5 + -0x18;
  FUN_10a0d09b4(auStack_6a0);
  plVar18 = (long *)(param_5 + 0x178);
  plVar12 = *(long **)(param_5 + 0x178);
  plVar17 = plVar18;
  if (plVar12 != (long *)0x0) {
    do {
      lVar6 = 8;
      if (uStack_688 <= (ulong)plVar12[7]) {
        lVar6 = 0;
        plVar17 = plVar12;
      }
      plVar12 = *(long **)((long)plVar12 + lVar6);
    } while (plVar12 != (long *)0x0);
    if ((plVar17 != plVar18) && ((ulong)plVar17[7] <= uStack_688)) {
      lVar7 = plVar17[8];
      switch(*(undefined2 *)(lVar7 + 0x20)) {
      case 1:
        uStack_6e0 = (undefined8 *)CONCAT71(uStack_6e0._1_7_,*(undefined1 *)(lVar7 + 0x24));
        FUN_10a351b5c(param_7,&uStack_6e0);
        break;
      case 2:
        uStack_6e0 = (undefined8 *)CONCAT44(uStack_6e0._4_4_,*(undefined4 *)(lVar7 + 0x24));
        func_0x00010a368134(param_7,&uStack_6e0);
        break;
      case 3:
        uStack_6e0 = (undefined8 *)CONCAT44(uStack_6e0._4_4_,*(undefined4 *)(lVar7 + 0x24));
        FUN_10a3680dc(param_7,&uStack_6e0);
        break;
      case 6:
        uStack_6e0 = (undefined8 *)CONCAT44(uStack_6e0._4_4_,*(undefined4 *)(lVar7 + 0x24));
        FUN_10a368728(param_7,&uStack_6e0);
        break;
      case 7:
        uStack_6e0 = *(undefined8 **)(lVar7 + 0x24);
        func_0x00010a36818c(param_7,&uStack_6e0);
        break;
      case 8:
        uStack_6e0 = *(undefined8 **)(lVar7 + 0x24);
        uStack_6d8 = (long *)CONCAT44(uStack_6d8._4_4_,*(undefined4 *)(lVar7 + 0x2c));
        func_0x00010a3681e8(param_7,&uStack_6e0);
        break;
      case 9:
        FUN_10a0dad84();
        uStack_6e0 = (undefined8 *)CONCAT44(uVar23,param_1);
        uStack_6d8 = (long *)CONCAT44(uVar28,uVar25);
        func_0x00010a368244(param_7,&uStack_6e0);
        break;
      case 10:
        uStack_6d8 = *(long **)(lVar7 + 0x2c);
        uStack_6e0 = *(undefined8 **)(lVar7 + 0x24);
        uStack_6c8 = *(ulong *)(lVar7 + 0x3c);
        lStack_6d0 = *(long *)(lVar7 + 0x34);
        uStack_6c0 = CONCAT44(uStack_6c0._4_4_,*(undefined4 *)(lVar7 + 0x44));
        FUN_10a3684c4(param_7,&uStack_6e0);
        break;
      case 0xb:
        uStack_6d8 = *(long **)(lVar7 + 0x2c);
        uStack_6e0 = *(undefined8 **)(lVar7 + 0x24);
        uStack_6c8 = *(ulong *)(lVar7 + 0x3c);
        lStack_6d0 = *(long *)(lVar7 + 0x34);
        uStack_6b8 = *(undefined8 *)(lVar7 + 0x4c);
        uStack_6c0 = *(undefined8 *)(lVar7 + 0x44);
        uStack_6a8 = *(undefined8 *)(lVar7 + 0x5c);
        uStack_6b0 = *(undefined8 *)(lVar7 + 0x54);
        FUN_10a3685f4(param_7,&uStack_6e0);
        break;
      case 0x16:
        FUN_10aca4910();
        uStack_6e0 = (undefined8 *)CONCAT44(uVar23,param_1);
        uStack_6d8 = (long *)CONCAT44(uVar28,uVar25);
        func_0x00010a3682a0(param_7,&uStack_6e0);
        break;
      case 0x1f:
        uStack_6e0 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a368780(param_7,&uStack_6e0);
        break;
      case 0x22:
        uStack_6e0 = *(undefined8 **)(lVar7 + 0x24);
        uStack_6d8 = (long *)CONCAT44(uStack_6d8._4_4_,*(undefined4 *)(lVar7 + 0x2c));
        FUN_10a3689a4(param_7,&uStack_6e0);
        break;
      case 0x23:
        uStack_6d8 = *(long **)(lVar7 + 0x2c);
        uStack_6e0 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a368bd0(param_7,&uStack_6e0);
        break;
      case 0x24:
        uStack_6e0 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a368df4(param_7,&uStack_6e0);
        break;
      case 0x25:
        uStack_6e0 = *(undefined8 **)(lVar7 + 0x24);
        uStack_6d8 = (long *)CONCAT44(uStack_6d8._4_4_,*(undefined4 *)(lVar7 + 0x2c));
        FUN_10a369018(param_7,&uStack_6e0);
        break;
      case 0x26:
        uStack_6d8 = *(long **)(lVar7 + 0x2c);
        uStack_6e0 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a369244(param_7,&uStack_6e0);
      }
      goto LAB_10aca426c;
    }
  }
  lVar6 = *(long *)(param_5 + 400);
  if (lVar6 != 0) {
    lVar15 = param_5 + 400;
    do {
      lVar1 = 8;
      if (uStack_688 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar15 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar15 != param_5 + 400) && (*(ulong *)(lVar15 + 0x38) <= uStack_688)) {
      FUN_10a1f92d8(param_7,*(long *)(lVar15 + 0x40) + 0x188);
      goto LAB_10aca426c;
    }
  }
  lVar6 = *(long *)(param_5 + 0x1c0);
  if (lVar6 != 0) {
    lVar15 = param_5 + 0x1c0;
    do {
      lVar1 = 8;
      if (uStack_688 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar15 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar15 != param_5 + 0x1c0) && (*(ulong *)(lVar15 + 0x38) <= uStack_688)) {
      uVar14 = *(ulong *)(lVar15 + 0x40);
      if (uVar14 == 0) {
        lVar6 = 0;
        lVar7 = 0;
      }
      else {
        uVar16 = 0;
        uVar20 = 0;
        do {
          FUN_10aca38a0(&iStack_6f8,param_6,uVar16);
          uStack_6e0 = (undefined8 *)CONCAT44(uStack_6f4,iStack_6f8);
          uStack_6d8 = plStack_6f0;
          lStack_6d0 = lStack_6e8;
          uStack_6c8 = 0;
          func_0x000107c2b080(&uStack_6e0);
          plVar12 = (long *)*plVar18;
          plVar17 = plVar18;
          if (plVar12 == (long *)0x0) {
LAB_10aca41d4:
            bVar3 = false;
            uVar21 = uVar20;
          }
          else {
            do {
              lVar6 = 8;
              if (uStack_6c8 <= (ulong)plVar12[7]) {
                lVar6 = 0;
                plVar17 = plVar12;
              }
              plVar12 = *(long **)((long)plVar12 + lVar6);
            } while (plVar12 != (long *)0x0);
            if ((plVar17 == plVar18) || (uStack_6c8 < (ulong)plVar17[7])) goto LAB_10aca41d4;
            bVar3 = *(ushort *)(plVar17[8] + 0x20) != 0;
            uVar21 = *(ushort *)(plVar17[8] + 0x20);
            if (!bVar3) {
              uVar21 = uVar20;
            }
          }
          if (lStack_6d0 < 0) {
            __ZdlPv(uStack_6e0);
          }
          uVar16 = uVar16 + 1;
          if (uVar16 == uVar14) {
            bVar3 = true;
          }
          uVar20 = uVar21;
        } while (!bVar3);
        if (uVar21 < 0xb) {
          if (uVar21 < 7) {
            if (uVar21 == 1) {
              FUN_10aca493c(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 2) {
              FUN_10aca7104(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 3) {
              FUN_10aca4bec(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
          else if (uVar21 < 9) {
            if (uVar21 == 7) {
              FUN_10aca4eb0(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 8) {
              FUN_10aca5194(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar21 == 9) {
              FUN_10aca546c(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 10) {
              FUN_10aca6b24(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar21 < 0x23) {
          if (uVar21 < 0x1f) {
            if (uVar21 == 0xb) {
              FUN_10aca6e14(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 0x16) {
              FUN_10aca685c(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar21 == 0x1f) {
              FUN_10aca5734(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 0x22) {
              FUN_10aca5a18(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar21 < 0x25) {
          if (uVar21 == 0x23) {
            FUN_10aca5ce8(lVar7,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
          if (uVar21 == 0x24) {
            FUN_10aca5fc8(lVar7,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
        }
        else {
          if (uVar21 == 0x25) {
            FUN_10aca62ac(lVar7,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
          if (uVar21 == 0x26) {
            FUN_10aca657c(lVar7,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
        }
        if (uVar14 >> 0x3d != 0) {
          FUN_10acb63ac();
LAB_10aca48cc:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca48d0);
          (*pcVar2)();
        }
        lVar6 = uVar14 * 8;
        __Znwm();
        _bzero();
        lVar7 = lVar6 + uVar14 * 8;
      }
      plVar18 = (long *)*param_7;
      lVar15 = lVar7 - lVar6 >> 3;
      (**(code **)(*plVar18 + 600))(&uStack_6e0,plVar18,lVar15);
      apuStack_670[0] = uStack_6e0;
      if (lVar7 != lVar6) {
        lVar7 = 0;
        do {
          plVar17 = plVar18;
          (**(code **)(*plVar18 + 0x58))();
          if ((*(byte *)(plVar17 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
          plVar12 = (long *)plVar17[4];
          if (plVar12 == (long *)0x0) {
            func_0x000109899fd8(plVar17);
            plVar12 = (long *)plVar17[4];
          }
          plVar17[4] = *plVar12;
          plVar12[1] = 0;
          plVar12[2] = 0;
          *plVar12 = (long)&PTR_FUN_110c6bfc0;
          plVar13 = plVar18;
          (**(code **)(*plVar18 + 0x58))();
          plVar17 = plVar13;
          FUN_10a065534();
          if (plVar17 == (long *)0x0) {
            if ((*(byte *)(plVar13 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
            plVar17 = plVar13 + 0x1b;
          }
          uStack_6e0 = (undefined8 *)CONCAT44(uStack_6e0._4_4_,7);
          plVar4 = plVar18;
          (**(code **)(*plVar18 + 0x98))(plVar18,*plVar17);
          uStack_6d8 = plVar4;
          (**(code **)(*plVar18 + 0x2f8))
                    (&plStack_6f0,plVar18,plVar12,plVar13,&UNK_10989ba24,&uStack_6e0);
          iStack_6f8 = 7;
          if ((3 < (int)uStack_6e0) && (uStack_6d8 != (long *)0x0)) {
            (**(code **)*uStack_6d8)();
          }
          (**(code **)(*plVar18 + 0x290))(plVar18,apuStack_670,lVar7,&iStack_6f8);
          if ((3 < iStack_6f8) && (plStack_6f0 != (long *)0x0)) {
            (**(code **)*plStack_6f0)();
          }
          lVar7 = lVar7 + 1;
        } while (lVar15 != lVar7);
      }
      aiStack_680[0] = 7;
      puStack_678 = apuStack_670[0];
      func_0x0001098968d0(param_7 + 1,aiStack_680);
      if ((3 < aiStack_680[0]) && (puStack_678 != (undefined8 *)0x0)) {
        (**(code **)*puStack_678)();
      }
      if (lVar6 != 0) {
        __ZdlPv(lVar6);
      }
    }
  }
LAB_10aca426c:
  if (cStack_689 < '\0') {
    __ZdlPv(auStack_6a0[0]);
  }
  return;
}



/* Entry: 10aca5ce8; end: 10aca5fc7;  */

void FUN_10aca5ce8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long *param_7,undefined8 *param_8)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *unaff_x20;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  char *pcVar19;
  ushort uVar20;
  ushort uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  int iStack_658;
  undefined4 uStack_654;
  long *plStack_650;
  long lStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  long lStack_630;
  ulong uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 auStack_600 [2];
  char cStack_5e9;
  ulong uStack_5e8;
  int aiStack_5e0 [2];
  undefined8 *puStack_5d8;
  undefined8 *apuStack_5d0 [2];
  int iStack_558;
  undefined4 uStack_554;
  undefined8 *puStack_550;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  long lStack_530;
  ulong uStack_528;
  undefined8 *puStack_518;
  int iStack_4b8;
  undefined4 uStack_4b4;
  undefined8 *puStack_4b0;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  long lStack_490;
  ulong uStack_488;
  undefined8 *puStack_478;
  int iStack_408;
  undefined4 uStack_404;
  undefined8 *puStack_400;
  long lStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  long lStack_3e0;
  ulong uStack_3d8;
  undefined8 *puStack_3c8;
  int iStack_358;
  undefined4 uStack_354;
  undefined8 *puStack_350;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  long lStack_330;
  ulong uStack_328;
  undefined8 *puStack_318;
  int iStack_2a8;
  undefined4 uStack_2a4;
  undefined8 *puStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  long lStack_280;
  ulong uStack_278;
  undefined8 *puStack_268;
  int iStack_1f8;
  undefined4 uStack_1f4;
  undefined8 *puStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  undefined8 *puStack_1b8;
  int iStack_158;
  undefined4 uStack_154;
  undefined8 *puStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  ulong uStack_128;
  undefined8 *puStack_118;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 *puStack_68;
  
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x10] = 0;
      puVar11 = puVar11 + 0x14;
    } while (puVar11 != puVar5 + (long)param_7 * 0x14);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_a8,param_6,plVar17);
      puStack_90 = (undefined8 *)CONCAT44(uStack_a4,iStack_a8);
      puStack_88 = puStack_a0;
      lStack_80 = lStack_98;
      uStack_78 = 0;
      func_0x000107c2b080(&puStack_90);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_78 <= (ulong)plVar13[7]) {
            lVar7 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar7);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_78)) {
          lVar7 = plVar12[8];
          if (*(short *)(lVar7 + 0x20) != 0x23) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca5fa0;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x14);
          uVar8 = *(undefined8 *)(lVar7 + 0x24);
          puVar10[1] = *(undefined8 *)(lVar7 + 0x2c);
          *puVar10 = uVar8;
          if ((*(byte *)(puVar10 + 2) & 1) == 0) {
            *(undefined1 *)(puVar10 + 2) = 1;
          }
        }
      }
      if (lStack_80 < 0) {
        __ZdlPv(puStack_90);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_90,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_68 = puStack_90;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x10] & 1) == 0) {
            puStack_90 = (undefined8 *)CONCAT44(puStack_90._4_4_,1);
          }
          else {
            FUN_10a368c2c(&puStack_90,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_68,plVar18,&puStack_90);
          if ((3 < (int)puStack_90) && (puStack_88 != (undefined8 *)0x0)) {
            (**(code **)*puStack_88)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x14;
        } while (param_7 != plVar18);
        iStack_a8 = 7;
        puStack_a0 = puStack_68;
        func_0x0001098968d0(param_8 + 1,&iStack_a8);
        if ((3 < iStack_a8) && (puStack_a0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_a0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4a88();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca5fa0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca5fa4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x1555555555555556) {
    puVar5 = (undefined1 *)((long)param_7 * 0xc);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[8] = 0;
      puVar11 = puVar11 + 0xc;
    } while (puVar11 != puVar5 + (long)param_7 * 0xc);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_158,param_6,plVar17);
      puStack_140 = (undefined8 *)CONCAT44(uStack_154,iStack_158);
      puStack_138 = puStack_150;
      lStack_130 = lStack_148;
      uStack_128 = 0;
      func_0x000107c2b080(&puStack_140);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_128 <= (ulong)plVar13[7]) {
            lVar7 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar7);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_128)) {
          if (*(short *)(plVar12[8] + 0x20) != 0x24) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6284;
          }
          uVar8 = *(undefined8 *)(plVar12[8] + 0x24);
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0xc);
          if ((*(byte *)(puVar10 + 1) & 1) == 0) {
            *(undefined1 *)(puVar10 + 1) = 1;
          }
          *puVar10 = uVar8;
        }
      }
      if (lStack_130 < 0) {
        __ZdlPv(puStack_140);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_140,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_118 = puStack_140;
        puVar11 = puVar5;
        do {
          if ((puVar11[8] & 1) == 0) {
            puStack_140 = (undefined8 *)CONCAT44(puStack_140._4_4_,1);
          }
          else {
            FUN_10a368e50(&puStack_140,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_118,plVar18,&puStack_140);
          if ((3 < (int)puStack_140) && (puStack_138 != (undefined8 *)0x0)) {
            (**(code **)*puStack_138)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0xc;
        } while (param_7 != plVar18);
        iStack_158 = 7;
        puStack_150 = puStack_118;
        func_0x0001098968d0(param_8 + 1,&iStack_158);
        if ((3 < iStack_158) && (puStack_150 != (undefined8 *)0x0)) {
          (**(code **)*puStack_150)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4a9c();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6284:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6288);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if ((ulong)param_7 >> 0x3c == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 4);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0xc] = 0;
      puVar11 = puVar11 + 0x10;
    } while (puVar11 != puVar5 + (long)param_7 * 0x10);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_1f8,param_6,plVar17);
      puStack_1e0 = (undefined8 *)CONCAT44(uStack_1f4,iStack_1f8);
      puStack_1d8 = puStack_1f0;
      lStack_1d0 = lStack_1e8;
      uStack_1c8 = 0;
      func_0x000107c2b080(&puStack_1e0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_1c8 <= (ulong)plVar13[7]) {
            lVar7 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar7);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_1c8)) {
          lVar7 = plVar12[8];
          if (*(short *)(lVar7 + 0x20) != 0x25) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6554;
          }
          uVar23 = *(undefined4 *)(lVar7 + 0x2c);
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x10);
          *puVar10 = *(undefined8 *)(lVar7 + 0x24);
          *(undefined4 *)(puVar10 + 1) = uVar23;
          if ((*(byte *)((long)puVar10 + 0xc) & 1) == 0) {
            *(undefined1 *)((long)puVar10 + 0xc) = 1;
          }
        }
      }
      if (lStack_1d0 < 0) {
        __ZdlPv(puStack_1e0);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_1e0,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_1b8 = puStack_1e0;
        puVar11 = puVar5;
        do {
          if ((puVar11[0xc] & 1) == 0) {
            puStack_1e0 = (undefined8 *)CONCAT44(puStack_1e0._4_4_,1);
          }
          else {
            FUN_10a369074(&puStack_1e0,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_1b8,plVar18,&puStack_1e0);
          if ((3 < (int)puStack_1e0) && (puStack_1d8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_1d8)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x10;
        } while (param_7 != plVar18);
        iStack_1f8 = 7;
        puStack_1f0 = puStack_1b8;
        func_0x0001098968d0(param_8 + 1,&iStack_1f8);
        if ((3 < iStack_1f8) && (puStack_1f0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_1f0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4ab0();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6554:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6558);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x10] = 0;
      puVar11 = puVar11 + 0x14;
    } while (puVar11 != puVar5 + (long)param_7 * 0x14);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_2a8,param_6,plVar17);
      puStack_290 = (undefined8 *)CONCAT44(uStack_2a4,iStack_2a8);
      puStack_288 = puStack_2a0;
      lStack_280 = lStack_298;
      uStack_278 = 0;
      func_0x000107c2b080(&puStack_290);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_278 <= (ulong)plVar13[7]) {
            lVar7 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar7);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_278)) {
          lVar7 = plVar12[8];
          if (*(short *)(lVar7 + 0x20) != 0x26) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6834;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x14);
          uVar8 = *(undefined8 *)(lVar7 + 0x24);
          puVar10[1] = *(undefined8 *)(lVar7 + 0x2c);
          *puVar10 = uVar8;
          if ((*(byte *)(puVar10 + 2) & 1) == 0) {
            *(undefined1 *)(puVar10 + 2) = 1;
          }
        }
      }
      if (lStack_280 < 0) {
        __ZdlPv(puStack_290);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_290,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_268 = puStack_290;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x10] & 1) == 0) {
            puStack_290 = (undefined8 *)CONCAT44(puStack_290._4_4_,1);
          }
          else {
            FUN_10a3692a0(&puStack_290,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_268,plVar18,&puStack_290);
          if ((3 < (int)puStack_290) && (puStack_288 != (undefined8 *)0x0)) {
            (**(code **)*puStack_288)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x14;
        } while (param_7 != plVar18);
        iStack_2a8 = 7;
        puStack_2a0 = puStack_268;
        func_0x0001098968d0(param_8 + 1,&iStack_2a8);
        if ((3 < iStack_2a8) && (puStack_2a0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_2a0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4ac4();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6834:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6838);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  uVar28 = (undefined4)param_4;
  uVar25 = (undefined4)param_3;
  uVar23 = (undefined4)param_2;
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x10] = 0;
      puVar11 = puVar11 + 0x14;
    } while (puVar11 != puVar5 + (long)param_7 * 0x14);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_358,param_6,plVar17);
      puVar10 = (undefined8 *)CONCAT44(uStack_354,iStack_358);
      puStack_338 = puStack_350;
      lStack_330 = lStack_348;
      uStack_328 = 0;
      puStack_340 = puVar10;
      func_0x000107c2b080(&puStack_340);
      uVar23 = SUB84(puVar10,0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_328 <= (ulong)plVar13[7]) {
            lVar7 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar7);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_328)) {
          FUN_10aca4910(plVar12[8]);
          puVar9 = (undefined4 *)(puVar5 + (long)plVar17 * 0x14);
          *puVar9 = uVar23;
          puVar9[1] = (int)param_2;
          puVar9[2] = (int)param_3;
          puVar9[3] = (int)param_4;
          if ((*(byte *)(puVar9 + 4) & 1) == 0) {
            *(undefined1 *)(puVar9 + 4) = 1;
          }
        }
      }
      if (lStack_330 < 0) {
        __ZdlPv(puStack_340);
      }
      plVar17 = (long *)((long)plVar17 + 1);
    } while (plVar17 != param_7);
    plVar17 = (long *)*param_8;
    (**(code **)(*plVar17 + 600))(&puStack_340,plVar17,param_7);
    plVar18 = (long *)0x0;
    puStack_318 = puStack_340;
    puVar11 = puVar5;
    do {
      if ((puVar11[0x10] & 1) == 0) {
        puStack_340 = (undefined8 *)CONCAT44(puStack_340._4_4_,1);
      }
      else {
        FUN_10a3682fc(&puStack_340,plVar17,puVar11);
      }
      (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_318,plVar18,&puStack_340);
      if ((3 < (int)puStack_340) && (puStack_338 != (undefined8 *)0x0)) {
        (**(code **)*puStack_338)();
      }
      plVar18 = (long *)((long)plVar18 + 1);
      puVar11 = puVar11 + 0x14;
    } while (param_7 != plVar18);
    iStack_358 = 7;
    puStack_350 = puStack_318;
    func_0x0001098968d0(param_8 + 1,&iStack_358);
    if ((3 < iStack_358) && (puStack_350 != (undefined8 *)0x0)) {
      (**(code **)*puStack_350)();
    }
    __ZdlPv(puVar5);
    return;
  }
  func_0x00010acd4ad8();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6b00);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x666666666666667) {
    puVar5 = (undefined1 *)((long)param_7 * 0x28);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x24] = 0;
      puVar11 = puVar11 + 0x28;
    } while (puVar11 != puVar5 + (long)param_7 * 0x28);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_408,param_6,plVar17);
      puStack_3f0 = (undefined8 *)CONCAT44(uStack_404,iStack_408);
      puStack_3e8 = puStack_400;
      lStack_3e0 = lStack_3f8;
      uStack_3d8 = 0;
      func_0x000107c2b080(&puStack_3f0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_3d8 <= (ulong)plVar13[7]) {
            lVar7 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar7);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_3d8)) {
          lVar7 = plVar12[8];
          if (*(short *)(lVar7 + 0x20) != 10) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6dec;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x28);
          uVar23 = *(undefined4 *)(lVar7 + 0x44);
          uVar22 = *(undefined8 *)(lVar7 + 0x3c);
          uVar8 = *(undefined8 *)(lVar7 + 0x34);
          uVar24 = *(undefined8 *)(lVar7 + 0x24);
          puVar10[1] = *(undefined8 *)(lVar7 + 0x2c);
          *puVar10 = uVar24;
          puVar10[3] = uVar22;
          puVar10[2] = uVar8;
          *(undefined4 *)(puVar10 + 4) = uVar23;
          if ((*(byte *)((long)puVar10 + 0x24) & 1) == 0) {
            *(undefined1 *)((long)puVar10 + 0x24) = 1;
          }
        }
      }
      if (lStack_3e0 < 0) {
        __ZdlPv(puStack_3f0);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_3f0,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_3c8 = puStack_3f0;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x24] & 1) == 0) {
            puStack_3f0 = (undefined8 *)CONCAT44(puStack_3f0._4_4_,1);
          }
          else {
            FUN_10a368520(&puStack_3f0,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_3c8,plVar18,&puStack_3f0);
          if ((3 < (int)puStack_3f0) && (puStack_3e8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_3e8)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x28;
        } while (param_7 != plVar18);
        iStack_408 = 7;
        puStack_400 = puStack_3c8;
        func_0x0001098968d0(param_8 + 1,&iStack_408);
        if ((3 < iStack_408) && (puStack_400 != (undefined8 *)0x0)) {
          (**(code **)*puStack_400)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4aec();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6dec:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6df0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x3c3c3c3c3c3c3c4) {
    puVar5 = (undefined1 *)((long)param_7 * 0x44);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x40] = 0;
      puVar11 = puVar11 + 0x44;
    } while (puVar11 != puVar5 + (long)param_7 * 0x44);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_4b8,param_6,plVar17);
      puStack_4a0 = (undefined8 *)CONCAT44(uStack_4b4,iStack_4b8);
      puStack_498 = puStack_4b0;
      lStack_490 = lStack_4a8;
      uStack_488 = 0;
      func_0x000107c2b080(&puStack_4a0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_488 <= (ulong)plVar13[7]) {
            lVar7 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar7);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_488)) {
          lVar7 = plVar12[8];
          if (*(short *)(lVar7 + 0x20) != 0xb) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca70dc;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x44);
          uVar22 = *(undefined8 *)(lVar7 + 0x3c);
          uVar8 = *(undefined8 *)(lVar7 + 0x34);
          uVar24 = *(undefined8 *)(lVar7 + 0x44);
          uVar27 = *(undefined8 *)(lVar7 + 0x5c);
          uVar26 = *(undefined8 *)(lVar7 + 0x54);
          uVar30 = *(undefined8 *)(lVar7 + 0x2c);
          uVar29 = *(undefined8 *)(lVar7 + 0x24);
          puVar10[5] = *(undefined8 *)(lVar7 + 0x4c);
          puVar10[4] = uVar24;
          puVar10[7] = uVar27;
          puVar10[6] = uVar26;
          puVar10[1] = uVar30;
          *puVar10 = uVar29;
          puVar10[3] = uVar22;
          puVar10[2] = uVar8;
          if ((*(byte *)(puVar10 + 8) & 1) == 0) {
            *(undefined1 *)(puVar10 + 8) = 1;
          }
        }
      }
      if (lStack_490 < 0) {
        __ZdlPv(puStack_4a0);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_4a0,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_478 = puStack_4a0;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x40] & 1) == 0) {
            puStack_4a0 = (undefined8 *)CONCAT44(puStack_4a0._4_4_,1);
          }
          else {
            FUN_10a368650(&puStack_4a0,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_478,plVar18,&puStack_4a0);
          if ((3 < (int)puStack_4a0) && (puStack_498 != (undefined8 *)0x0)) {
            (**(code **)*puStack_498)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x44;
        } while (param_7 != plVar18);
        iStack_4b8 = 7;
        puStack_4b0 = puStack_478;
        func_0x0001098968d0(param_8 + 1,&iStack_4b8);
        if ((3 < iStack_4b8) && (puStack_4b0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_4b0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b00();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca70dc:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca70e0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if ((ulong)param_7 >> 0x3d == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 3);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[4] = 0;
      puVar11 = puVar11 + 8;
    } while (puVar11 != puVar5 + (long)param_7 * 8);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_558,param_6,plVar17);
      puStack_540 = (undefined8 *)CONCAT44(uStack_554,iStack_558);
      puStack_538 = puStack_550;
      lStack_530 = lStack_548;
      uStack_528 = 0;
      func_0x000107c2b080(&puStack_540);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_528 <= (ulong)plVar13[7]) {
            lVar7 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar7);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_528)) {
          if (*(short *)(plVar12[8] + 0x20) != 2) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca73a0;
          }
          *(undefined4 *)(puVar5 + (long)plVar17 * 8) = *(undefined4 *)(plVar12[8] + 0x24);
          *(undefined1 *)((long)(puVar5 + (long)plVar17 * 8) + 4) = 1;
        }
      }
      if (lStack_530 < 0) {
        __ZdlPv(puStack_540);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_540,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_518 = puStack_540;
        pcVar19 = puVar5 + 4;
        do {
          if (*pcVar19 == '\x01') {
            puStack_538 = (undefined8 *)(double)*(int *)(pcVar19 + -4);
            uVar23 = 3;
          }
          else {
            uVar23 = 1;
          }
          puStack_540 = (undefined8 *)CONCAT44(puStack_540._4_4_,uVar23);
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_518,plVar18,&puStack_540);
          if ((3 < (int)puStack_540) && (puStack_538 != (undefined8 *)0x0)) {
            (**(code **)*puStack_538)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          pcVar19 = pcVar19 + 8;
        } while (param_7 != plVar18);
        iStack_558 = 7;
        puStack_550 = puStack_518;
        func_0x0001098968d0(param_8 + 1,&iStack_558);
        if ((3 < iStack_558) && (puStack_550 != (undefined8 *)0x0)) {
          (**(code **)*puStack_550)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b14();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca73a0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca73a4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  lVar7 = param_5 + -0x18;
  FUN_10a0d09b4(auStack_600);
  plVar18 = (long *)(param_5 + 0x178);
  plVar12 = *(long **)(param_5 + 0x178);
  plVar17 = plVar18;
  if (plVar12 != (long *)0x0) {
    do {
      lVar6 = 8;
      if (uStack_5e8 <= (ulong)plVar12[7]) {
        lVar6 = 0;
        plVar17 = plVar12;
      }
      plVar12 = *(long **)((long)plVar12 + lVar6);
    } while (plVar12 != (long *)0x0);
    if ((plVar17 != plVar18) && ((ulong)plVar17[7] <= uStack_5e8)) {
      lVar7 = plVar17[8];
      switch(*(undefined2 *)(lVar7 + 0x20)) {
      case 1:
        uStack_640 = (undefined8 *)CONCAT71(uStack_640._1_7_,*(undefined1 *)(lVar7 + 0x24));
        FUN_10a351b5c(param_7,&uStack_640);
        break;
      case 2:
        uStack_640 = (undefined8 *)CONCAT44(uStack_640._4_4_,*(undefined4 *)(lVar7 + 0x24));
        func_0x00010a368134(param_7,&uStack_640);
        break;
      case 3:
        uStack_640 = (undefined8 *)CONCAT44(uStack_640._4_4_,*(undefined4 *)(lVar7 + 0x24));
        FUN_10a3680dc(param_7,&uStack_640);
        break;
      case 6:
        uStack_640 = (undefined8 *)CONCAT44(uStack_640._4_4_,*(undefined4 *)(lVar7 + 0x24));
        FUN_10a368728(param_7,&uStack_640);
        break;
      case 7:
        uStack_640 = *(undefined8 **)(lVar7 + 0x24);
        func_0x00010a36818c(param_7,&uStack_640);
        break;
      case 8:
        uStack_640 = *(undefined8 **)(lVar7 + 0x24);
        uStack_638 = (long *)CONCAT44(uStack_638._4_4_,*(undefined4 *)(lVar7 + 0x2c));
        func_0x00010a3681e8(param_7,&uStack_640);
        break;
      case 9:
        FUN_10a0dad84();
        uStack_640 = (undefined8 *)CONCAT44(uVar23,param_1);
        uStack_638 = (long *)CONCAT44(uVar28,uVar25);
        func_0x00010a368244(param_7,&uStack_640);
        break;
      case 10:
        uStack_638 = *(long **)(lVar7 + 0x2c);
        uStack_640 = *(undefined8 **)(lVar7 + 0x24);
        uStack_628 = *(ulong *)(lVar7 + 0x3c);
        lStack_630 = *(long *)(lVar7 + 0x34);
        uStack_620 = CONCAT44(uStack_620._4_4_,*(undefined4 *)(lVar7 + 0x44));
        FUN_10a3684c4(param_7,&uStack_640);
        break;
      case 0xb:
        uStack_638 = *(long **)(lVar7 + 0x2c);
        uStack_640 = *(undefined8 **)(lVar7 + 0x24);
        uStack_628 = *(ulong *)(lVar7 + 0x3c);
        lStack_630 = *(long *)(lVar7 + 0x34);
        uStack_618 = *(undefined8 *)(lVar7 + 0x4c);
        uStack_620 = *(undefined8 *)(lVar7 + 0x44);
        uStack_608 = *(undefined8 *)(lVar7 + 0x5c);
        uStack_610 = *(undefined8 *)(lVar7 + 0x54);
        FUN_10a3685f4(param_7,&uStack_640);
        break;
      case 0x16:
        FUN_10aca4910();
        uStack_640 = (undefined8 *)CONCAT44(uVar23,param_1);
        uStack_638 = (long *)CONCAT44(uVar28,uVar25);
        func_0x00010a3682a0(param_7,&uStack_640);
        break;
      case 0x1f:
        uStack_640 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a368780(param_7,&uStack_640);
        break;
      case 0x22:
        uStack_640 = *(undefined8 **)(lVar7 + 0x24);
        uStack_638 = (long *)CONCAT44(uStack_638._4_4_,*(undefined4 *)(lVar7 + 0x2c));
        FUN_10a3689a4(param_7,&uStack_640);
        break;
      case 0x23:
        uStack_638 = *(long **)(lVar7 + 0x2c);
        uStack_640 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a368bd0(param_7,&uStack_640);
        break;
      case 0x24:
        uStack_640 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a368df4(param_7,&uStack_640);
        break;
      case 0x25:
        uStack_640 = *(undefined8 **)(lVar7 + 0x24);
        uStack_638 = (long *)CONCAT44(uStack_638._4_4_,*(undefined4 *)(lVar7 + 0x2c));
        FUN_10a369018(param_7,&uStack_640);
        break;
      case 0x26:
        uStack_638 = *(long **)(lVar7 + 0x2c);
        uStack_640 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a369244(param_7,&uStack_640);
      }
      goto LAB_10aca426c;
    }
  }
  lVar6 = *(long *)(param_5 + 400);
  if (lVar6 != 0) {
    lVar15 = param_5 + 400;
    do {
      lVar1 = 8;
      if (uStack_5e8 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar15 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar15 != param_5 + 400) && (*(ulong *)(lVar15 + 0x38) <= uStack_5e8)) {
      FUN_10a1f92d8(param_7,*(long *)(lVar15 + 0x40) + 0x188);
      goto LAB_10aca426c;
    }
  }
  lVar6 = *(long *)(param_5 + 0x1c0);
  if (lVar6 != 0) {
    lVar15 = param_5 + 0x1c0;
    do {
      lVar1 = 8;
      if (uStack_5e8 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar15 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar15 != param_5 + 0x1c0) && (*(ulong *)(lVar15 + 0x38) <= uStack_5e8)) {
      uVar14 = *(ulong *)(lVar15 + 0x40);
      if (uVar14 == 0) {
        lVar6 = 0;
        lVar7 = 0;
      }
      else {
        uVar16 = 0;
        uVar20 = 0;
        do {
          FUN_10aca38a0(&iStack_658,param_6,uVar16);
          uStack_640 = (undefined8 *)CONCAT44(uStack_654,iStack_658);
          uStack_638 = plStack_650;
          lStack_630 = lStack_648;
          uStack_628 = 0;
          func_0x000107c2b080(&uStack_640);
          plVar12 = (long *)*plVar18;
          plVar17 = plVar18;
          if (plVar12 == (long *)0x0) {
LAB_10aca41d4:
            bVar3 = false;
            uVar21 = uVar20;
          }
          else {
            do {
              lVar6 = 8;
              if (uStack_628 <= (ulong)plVar12[7]) {
                lVar6 = 0;
                plVar17 = plVar12;
              }
              plVar12 = *(long **)((long)plVar12 + lVar6);
            } while (plVar12 != (long *)0x0);
            if ((plVar17 == plVar18) || (uStack_628 < (ulong)plVar17[7])) goto LAB_10aca41d4;
            bVar3 = *(ushort *)(plVar17[8] + 0x20) != 0;
            uVar21 = *(ushort *)(plVar17[8] + 0x20);
            if (!bVar3) {
              uVar21 = uVar20;
            }
          }
          if (lStack_630 < 0) {
            __ZdlPv(uStack_640);
          }
          uVar16 = uVar16 + 1;
          if (uVar16 == uVar14) {
            bVar3 = true;
          }
          uVar20 = uVar21;
        } while (!bVar3);
        if (uVar21 < 0xb) {
          if (uVar21 < 7) {
            if (uVar21 == 1) {
              FUN_10aca493c(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 2) {
              FUN_10aca7104(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 3) {
              FUN_10aca4bec(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
          else if (uVar21 < 9) {
            if (uVar21 == 7) {
              FUN_10aca4eb0(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 8) {
              FUN_10aca5194(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar21 == 9) {
              FUN_10aca546c(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 10) {
              FUN_10aca6b24(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar21 < 0x23) {
          if (uVar21 < 0x1f) {
            if (uVar21 == 0xb) {
              FUN_10aca6e14(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 0x16) {
              FUN_10aca685c(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar21 == 0x1f) {
              FUN_10aca5734(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 0x22) {
              FUN_10aca5a18(lVar7,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar21 < 0x25) {
          if (uVar21 == 0x23) {
            FUN_10aca5ce8(lVar7,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
          if (uVar21 == 0x24) {
            FUN_10aca5fc8(lVar7,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
        }
        else {
          if (uVar21 == 0x25) {
            FUN_10aca62ac(lVar7,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
          if (uVar21 == 0x26) {
            FUN_10aca657c(lVar7,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
        }
        if (uVar14 >> 0x3d != 0) {
          FUN_10acb63ac();
LAB_10aca48cc:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca48d0);
          (*pcVar2)();
        }
        lVar6 = uVar14 * 8;
        __Znwm();
        _bzero();
        lVar7 = lVar6 + uVar14 * 8;
      }
      plVar18 = (long *)*param_7;
      lVar15 = lVar7 - lVar6 >> 3;
      (**(code **)(*plVar18 + 600))(&uStack_640,plVar18,lVar15);
      apuStack_5d0[0] = uStack_640;
      if (lVar7 != lVar6) {
        lVar7 = 0;
        do {
          plVar17 = plVar18;
          (**(code **)(*plVar18 + 0x58))();
          if ((*(byte *)(plVar17 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
          plVar12 = (long *)plVar17[4];
          if (plVar12 == (long *)0x0) {
            func_0x000109899fd8(plVar17);
            plVar12 = (long *)plVar17[4];
          }
          plVar17[4] = *plVar12;
          plVar12[1] = 0;
          plVar12[2] = 0;
          *plVar12 = (long)&PTR_FUN_110c6bfc0;
          plVar13 = plVar18;
          (**(code **)(*plVar18 + 0x58))();
          plVar17 = plVar13;
          FUN_10a065534();
          if (plVar17 == (long *)0x0) {
            if ((*(byte *)(plVar13 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
            plVar17 = plVar13 + 0x1b;
          }
          uStack_640 = (undefined8 *)CONCAT44(uStack_640._4_4_,7);
          plVar4 = plVar18;
          (**(code **)(*plVar18 + 0x98))(plVar18,*plVar17);
          uStack_638 = plVar4;
          (**(code **)(*plVar18 + 0x2f8))
                    (&plStack_650,plVar18,plVar12,plVar13,&UNK_10989ba24,&uStack_640);
          iStack_658 = 7;
          if ((3 < (int)uStack_640) && (uStack_638 != (long *)0x0)) {
            (**(code **)*uStack_638)();
          }
          (**(code **)(*plVar18 + 0x290))(plVar18,apuStack_5d0,lVar7,&iStack_658);
          if ((3 < iStack_658) && (plStack_650 != (long *)0x0)) {
            (**(code **)*plStack_650)();
          }
          lVar7 = lVar7 + 1;
        } while (lVar15 != lVar7);
      }
      aiStack_5e0[0] = 7;
      puStack_5d8 = apuStack_5d0[0];
      func_0x0001098968d0(param_7 + 1,aiStack_5e0);
      if ((3 < aiStack_5e0[0]) && (puStack_5d8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_5d8)();
      }
      if (lVar6 != 0) {
        __ZdlPv(lVar6);
      }
    }
  }
LAB_10aca426c:
  if (cStack_5e9 < '\0') {
    __ZdlPv(auStack_600[0]);
  }
  return;
}



/* Entry: 10aca5fc8; end: 10aca62ab;  */

void FUN_10aca5fc8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long *param_7,undefined8 *param_8)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *unaff_x20;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  char *pcVar19;
  ushort uVar20;
  ushort uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  int iStack_5a8;
  undefined4 uStack_5a4;
  long *plStack_5a0;
  long lStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  long lStack_580;
  ulong uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 auStack_550 [2];
  char cStack_539;
  ulong uStack_538;
  int aiStack_530 [2];
  undefined8 *puStack_528;
  undefined8 *apuStack_520 [2];
  int iStack_4a8;
  undefined4 uStack_4a4;
  undefined8 *puStack_4a0;
  long lStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  long lStack_480;
  ulong uStack_478;
  undefined8 *puStack_468;
  int iStack_408;
  undefined4 uStack_404;
  undefined8 *puStack_400;
  long lStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  long lStack_3e0;
  ulong uStack_3d8;
  undefined8 *puStack_3c8;
  int iStack_358;
  undefined4 uStack_354;
  undefined8 *puStack_350;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  long lStack_330;
  ulong uStack_328;
  undefined8 *puStack_318;
  int iStack_2a8;
  undefined4 uStack_2a4;
  undefined8 *puStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  long lStack_280;
  ulong uStack_278;
  undefined8 *puStack_268;
  int iStack_1f8;
  undefined4 uStack_1f4;
  undefined8 *puStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  undefined8 *puStack_1b8;
  int iStack_148;
  undefined4 uStack_144;
  undefined8 *puStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined8 *puStack_108;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 *puStack_68;
  
  if (param_7 < (long *)0x1555555555555556) {
    puVar5 = (undefined1 *)((long)param_7 * 0xc);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[8] = 0;
      puVar11 = puVar11 + 0xc;
    } while (puVar11 != puVar5 + (long)param_7 * 0xc);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_a8,param_6,plVar17);
      puStack_90 = (undefined8 *)CONCAT44(uStack_a4,iStack_a8);
      puStack_88 = puStack_a0;
      lStack_80 = lStack_98;
      uStack_78 = 0;
      func_0x000107c2b080(&puStack_90);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar8 = 8;
          if (uStack_78 <= (ulong)plVar13[7]) {
            lVar8 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar8);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_78)) {
          if (*(short *)(plVar12[8] + 0x20) != 0x24) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6284;
          }
          uVar7 = *(undefined8 *)(plVar12[8] + 0x24);
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0xc);
          if ((*(byte *)(puVar10 + 1) & 1) == 0) {
            *(undefined1 *)(puVar10 + 1) = 1;
          }
          *puVar10 = uVar7;
        }
      }
      if (lStack_80 < 0) {
        __ZdlPv(puStack_90);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_90,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_68 = puStack_90;
        puVar11 = puVar5;
        do {
          if ((puVar11[8] & 1) == 0) {
            puStack_90 = (undefined8 *)CONCAT44(puStack_90._4_4_,1);
          }
          else {
            FUN_10a368e50(&puStack_90,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_68,plVar18,&puStack_90);
          if ((3 < (int)puStack_90) && (puStack_88 != (undefined8 *)0x0)) {
            (**(code **)*puStack_88)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0xc;
        } while (param_7 != plVar18);
        iStack_a8 = 7;
        puStack_a0 = puStack_68;
        func_0x0001098968d0(param_8 + 1,&iStack_a8);
        if ((3 < iStack_a8) && (puStack_a0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_a0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4a9c();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6284:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6288);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if ((ulong)param_7 >> 0x3c == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 4);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0xc] = 0;
      puVar11 = puVar11 + 0x10;
    } while (puVar11 != puVar5 + (long)param_7 * 0x10);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_148,param_6,plVar17);
      puStack_130 = (undefined8 *)CONCAT44(uStack_144,iStack_148);
      puStack_128 = puStack_140;
      lStack_120 = lStack_138;
      uStack_118 = 0;
      func_0x000107c2b080(&puStack_130);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar8 = 8;
          if (uStack_118 <= (ulong)plVar13[7]) {
            lVar8 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar8);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_118)) {
          lVar8 = plVar12[8];
          if (*(short *)(lVar8 + 0x20) != 0x25) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6554;
          }
          uVar23 = *(undefined4 *)(lVar8 + 0x2c);
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x10);
          *puVar10 = *(undefined8 *)(lVar8 + 0x24);
          *(undefined4 *)(puVar10 + 1) = uVar23;
          if ((*(byte *)((long)puVar10 + 0xc) & 1) == 0) {
            *(undefined1 *)((long)puVar10 + 0xc) = 1;
          }
        }
      }
      if (lStack_120 < 0) {
        __ZdlPv(puStack_130);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_130,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_108 = puStack_130;
        puVar11 = puVar5;
        do {
          if ((puVar11[0xc] & 1) == 0) {
            puStack_130 = (undefined8 *)CONCAT44(puStack_130._4_4_,1);
          }
          else {
            FUN_10a369074(&puStack_130,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_108,plVar18,&puStack_130);
          if ((3 < (int)puStack_130) && (puStack_128 != (undefined8 *)0x0)) {
            (**(code **)*puStack_128)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x10;
        } while (param_7 != plVar18);
        iStack_148 = 7;
        puStack_140 = puStack_108;
        func_0x0001098968d0(param_8 + 1,&iStack_148);
        if ((3 < iStack_148) && (puStack_140 != (undefined8 *)0x0)) {
          (**(code **)*puStack_140)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4ab0();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6554:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6558);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x10] = 0;
      puVar11 = puVar11 + 0x14;
    } while (puVar11 != puVar5 + (long)param_7 * 0x14);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_1f8,param_6,plVar17);
      puStack_1e0 = (undefined8 *)CONCAT44(uStack_1f4,iStack_1f8);
      puStack_1d8 = puStack_1f0;
      lStack_1d0 = lStack_1e8;
      uStack_1c8 = 0;
      func_0x000107c2b080(&puStack_1e0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar8 = 8;
          if (uStack_1c8 <= (ulong)plVar13[7]) {
            lVar8 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar8);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_1c8)) {
          lVar8 = plVar12[8];
          if (*(short *)(lVar8 + 0x20) != 0x26) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6834;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x14);
          uVar7 = *(undefined8 *)(lVar8 + 0x24);
          puVar10[1] = *(undefined8 *)(lVar8 + 0x2c);
          *puVar10 = uVar7;
          if ((*(byte *)(puVar10 + 2) & 1) == 0) {
            *(undefined1 *)(puVar10 + 2) = 1;
          }
        }
      }
      if (lStack_1d0 < 0) {
        __ZdlPv(puStack_1e0);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_1e0,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_1b8 = puStack_1e0;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x10] & 1) == 0) {
            puStack_1e0 = (undefined8 *)CONCAT44(puStack_1e0._4_4_,1);
          }
          else {
            FUN_10a3692a0(&puStack_1e0,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_1b8,plVar18,&puStack_1e0);
          if ((3 < (int)puStack_1e0) && (puStack_1d8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_1d8)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x14;
        } while (param_7 != plVar18);
        iStack_1f8 = 7;
        puStack_1f0 = puStack_1b8;
        func_0x0001098968d0(param_8 + 1,&iStack_1f8);
        if ((3 < iStack_1f8) && (puStack_1f0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_1f0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4ac4();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6834:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6838);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  uVar28 = (undefined4)param_4;
  uVar25 = (undefined4)param_3;
  uVar23 = (undefined4)param_2;
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x10] = 0;
      puVar11 = puVar11 + 0x14;
    } while (puVar11 != puVar5 + (long)param_7 * 0x14);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_2a8,param_6,plVar17);
      puVar10 = (undefined8 *)CONCAT44(uStack_2a4,iStack_2a8);
      puStack_288 = puStack_2a0;
      lStack_280 = lStack_298;
      uStack_278 = 0;
      puStack_290 = puVar10;
      func_0x000107c2b080(&puStack_290);
      uVar23 = SUB84(puVar10,0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar8 = 8;
          if (uStack_278 <= (ulong)plVar13[7]) {
            lVar8 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar8);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_278)) {
          FUN_10aca4910(plVar12[8]);
          puVar9 = (undefined4 *)(puVar5 + (long)plVar17 * 0x14);
          *puVar9 = uVar23;
          puVar9[1] = (int)param_2;
          puVar9[2] = (int)param_3;
          puVar9[3] = (int)param_4;
          if ((*(byte *)(puVar9 + 4) & 1) == 0) {
            *(undefined1 *)(puVar9 + 4) = 1;
          }
        }
      }
      if (lStack_280 < 0) {
        __ZdlPv(puStack_290);
      }
      plVar17 = (long *)((long)plVar17 + 1);
    } while (plVar17 != param_7);
    plVar17 = (long *)*param_8;
    (**(code **)(*plVar17 + 600))(&puStack_290,plVar17,param_7);
    plVar18 = (long *)0x0;
    puStack_268 = puStack_290;
    puVar11 = puVar5;
    do {
      if ((puVar11[0x10] & 1) == 0) {
        puStack_290 = (undefined8 *)CONCAT44(puStack_290._4_4_,1);
      }
      else {
        FUN_10a3682fc(&puStack_290,plVar17,puVar11);
      }
      (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_268,plVar18,&puStack_290);
      if ((3 < (int)puStack_290) && (puStack_288 != (undefined8 *)0x0)) {
        (**(code **)*puStack_288)();
      }
      plVar18 = (long *)((long)plVar18 + 1);
      puVar11 = puVar11 + 0x14;
    } while (param_7 != plVar18);
    iStack_2a8 = 7;
    puStack_2a0 = puStack_268;
    func_0x0001098968d0(param_8 + 1,&iStack_2a8);
    if ((3 < iStack_2a8) && (puStack_2a0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_2a0)();
    }
    __ZdlPv(puVar5);
    return;
  }
  func_0x00010acd4ad8();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6b00);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x666666666666667) {
    puVar5 = (undefined1 *)((long)param_7 * 0x28);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x24] = 0;
      puVar11 = puVar11 + 0x28;
    } while (puVar11 != puVar5 + (long)param_7 * 0x28);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_358,param_6,plVar17);
      puStack_340 = (undefined8 *)CONCAT44(uStack_354,iStack_358);
      puStack_338 = puStack_350;
      lStack_330 = lStack_348;
      uStack_328 = 0;
      func_0x000107c2b080(&puStack_340);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar8 = 8;
          if (uStack_328 <= (ulong)plVar13[7]) {
            lVar8 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar8);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_328)) {
          lVar8 = plVar12[8];
          if (*(short *)(lVar8 + 0x20) != 10) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6dec;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x28);
          uVar23 = *(undefined4 *)(lVar8 + 0x44);
          uVar22 = *(undefined8 *)(lVar8 + 0x3c);
          uVar7 = *(undefined8 *)(lVar8 + 0x34);
          uVar24 = *(undefined8 *)(lVar8 + 0x24);
          puVar10[1] = *(undefined8 *)(lVar8 + 0x2c);
          *puVar10 = uVar24;
          puVar10[3] = uVar22;
          puVar10[2] = uVar7;
          *(undefined4 *)(puVar10 + 4) = uVar23;
          if ((*(byte *)((long)puVar10 + 0x24) & 1) == 0) {
            *(undefined1 *)((long)puVar10 + 0x24) = 1;
          }
        }
      }
      if (lStack_330 < 0) {
        __ZdlPv(puStack_340);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_340,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_318 = puStack_340;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x24] & 1) == 0) {
            puStack_340 = (undefined8 *)CONCAT44(puStack_340._4_4_,1);
          }
          else {
            FUN_10a368520(&puStack_340,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_318,plVar18,&puStack_340);
          if ((3 < (int)puStack_340) && (puStack_338 != (undefined8 *)0x0)) {
            (**(code **)*puStack_338)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x28;
        } while (param_7 != plVar18);
        iStack_358 = 7;
        puStack_350 = puStack_318;
        func_0x0001098968d0(param_8 + 1,&iStack_358);
        if ((3 < iStack_358) && (puStack_350 != (undefined8 *)0x0)) {
          (**(code **)*puStack_350)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4aec();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6dec:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6df0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x3c3c3c3c3c3c3c4) {
    puVar5 = (undefined1 *)((long)param_7 * 0x44);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[0x40] = 0;
      puVar11 = puVar11 + 0x44;
    } while (puVar11 != puVar5 + (long)param_7 * 0x44);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_408,param_6,plVar17);
      puStack_3f0 = (undefined8 *)CONCAT44(uStack_404,iStack_408);
      puStack_3e8 = puStack_400;
      lStack_3e0 = lStack_3f8;
      uStack_3d8 = 0;
      func_0x000107c2b080(&puStack_3f0);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar8 = 8;
          if (uStack_3d8 <= (ulong)plVar13[7]) {
            lVar8 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar8);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_3d8)) {
          lVar8 = plVar12[8];
          if (*(short *)(lVar8 + 0x20) != 0xb) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca70dc;
          }
          puVar10 = (undefined8 *)(puVar5 + (long)plVar17 * 0x44);
          uVar22 = *(undefined8 *)(lVar8 + 0x3c);
          uVar7 = *(undefined8 *)(lVar8 + 0x34);
          uVar24 = *(undefined8 *)(lVar8 + 0x44);
          uVar27 = *(undefined8 *)(lVar8 + 0x5c);
          uVar26 = *(undefined8 *)(lVar8 + 0x54);
          uVar30 = *(undefined8 *)(lVar8 + 0x2c);
          uVar29 = *(undefined8 *)(lVar8 + 0x24);
          puVar10[5] = *(undefined8 *)(lVar8 + 0x4c);
          puVar10[4] = uVar24;
          puVar10[7] = uVar27;
          puVar10[6] = uVar26;
          puVar10[1] = uVar30;
          *puVar10 = uVar29;
          puVar10[3] = uVar22;
          puVar10[2] = uVar7;
          if ((*(byte *)(puVar10 + 8) & 1) == 0) {
            *(undefined1 *)(puVar10 + 8) = 1;
          }
        }
      }
      if (lStack_3e0 < 0) {
        __ZdlPv(puStack_3f0);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_3f0,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_3c8 = puStack_3f0;
        puVar11 = puVar5;
        do {
          if ((puVar11[0x40] & 1) == 0) {
            puStack_3f0 = (undefined8 *)CONCAT44(puStack_3f0._4_4_,1);
          }
          else {
            FUN_10a368650(&puStack_3f0,plVar17,puVar11);
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_3c8,plVar18,&puStack_3f0);
          if ((3 < (int)puStack_3f0) && (puStack_3e8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_3e8)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          puVar11 = puVar11 + 0x44;
        } while (param_7 != plVar18);
        iStack_408 = 7;
        puStack_400 = puStack_3c8;
        func_0x0001098968d0(param_8 + 1,&iStack_408);
        if ((3 < iStack_408) && (puStack_400 != (undefined8 *)0x0)) {
          (**(code **)*puStack_400)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b00();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca70dc:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca70e0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if ((ulong)param_7 >> 0x3d == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 3);
    __Znwm();
    puVar11 = puVar5;
    do {
      *puVar11 = 0;
      puVar11[4] = 0;
      puVar11 = puVar11 + 8;
    } while (puVar11 != puVar5 + (long)param_7 * 8);
    plVar17 = (long *)0x0;
    plVar18 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_4a8,param_6,plVar17);
      puStack_490 = (undefined8 *)CONCAT44(uStack_4a4,iStack_4a8);
      puStack_488 = puStack_4a0;
      lStack_480 = lStack_498;
      uStack_478 = 0;
      func_0x000107c2b080(&puStack_490);
      plVar13 = (long *)*plVar18;
      plVar12 = plVar18;
      if (plVar13 != (long *)0x0) {
        do {
          lVar8 = 8;
          if (uStack_478 <= (ulong)plVar13[7]) {
            lVar8 = 0;
            plVar12 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + lVar8);
        } while (plVar13 != (long *)0x0);
        if ((plVar12 != plVar18) && ((ulong)plVar12[7] <= uStack_478)) {
          if (*(short *)(plVar12[8] + 0x20) != 2) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca73a0;
          }
          *(undefined4 *)(puVar5 + (long)plVar17 * 8) = *(undefined4 *)(plVar12[8] + 0x24);
          *(undefined1 *)((long)(puVar5 + (long)plVar17 * 8) + 4) = 1;
        }
      }
      if (lStack_480 < 0) {
        __ZdlPv(puStack_490);
      }
      plVar17 = (long *)((long)plVar17 + 1);
      if (plVar17 == param_7) {
        plVar17 = (long *)*param_8;
        (**(code **)(*plVar17 + 600))(&puStack_490,plVar17,param_7);
        plVar18 = (long *)0x0;
        puStack_468 = puStack_490;
        pcVar19 = puVar5 + 4;
        do {
          if (*pcVar19 == '\x01') {
            puStack_488 = (undefined8 *)(double)*(int *)(pcVar19 + -4);
            uVar23 = 3;
          }
          else {
            uVar23 = 1;
          }
          puStack_490 = (undefined8 *)CONCAT44(puStack_490._4_4_,uVar23);
          (**(code **)(*plVar17 + 0x290))(plVar17,&puStack_468,plVar18,&puStack_490);
          if ((3 < (int)puStack_490) && (puStack_488 != (undefined8 *)0x0)) {
            (**(code **)*puStack_488)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
          pcVar19 = pcVar19 + 8;
        } while (param_7 != plVar18);
        iStack_4a8 = 7;
        puStack_4a0 = puStack_468;
        func_0x0001098968d0(param_8 + 1,&iStack_4a8);
        if ((3 < iStack_4a8) && (puStack_4a0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_4a0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b14();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca73a0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca73a4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  lVar8 = param_5 + -0x18;
  FUN_10a0d09b4(auStack_550);
  plVar18 = (long *)(param_5 + 0x178);
  plVar12 = *(long **)(param_5 + 0x178);
  plVar17 = plVar18;
  if (plVar12 != (long *)0x0) {
    do {
      lVar6 = 8;
      if (uStack_538 <= (ulong)plVar12[7]) {
        lVar6 = 0;
        plVar17 = plVar12;
      }
      plVar12 = *(long **)((long)plVar12 + lVar6);
    } while (plVar12 != (long *)0x0);
    if ((plVar17 != plVar18) && ((ulong)plVar17[7] <= uStack_538)) {
      lVar8 = plVar17[8];
      switch(*(undefined2 *)(lVar8 + 0x20)) {
      case 1:
        uStack_590 = (undefined8 *)CONCAT71(uStack_590._1_7_,*(undefined1 *)(lVar8 + 0x24));
        FUN_10a351b5c(param_7,&uStack_590);
        break;
      case 2:
        uStack_590 = (undefined8 *)CONCAT44(uStack_590._4_4_,*(undefined4 *)(lVar8 + 0x24));
        func_0x00010a368134(param_7,&uStack_590);
        break;
      case 3:
        uStack_590 = (undefined8 *)CONCAT44(uStack_590._4_4_,*(undefined4 *)(lVar8 + 0x24));
        FUN_10a3680dc(param_7,&uStack_590);
        break;
      case 6:
        uStack_590 = (undefined8 *)CONCAT44(uStack_590._4_4_,*(undefined4 *)(lVar8 + 0x24));
        FUN_10a368728(param_7,&uStack_590);
        break;
      case 7:
        uStack_590 = *(undefined8 **)(lVar8 + 0x24);
        func_0x00010a36818c(param_7,&uStack_590);
        break;
      case 8:
        uStack_590 = *(undefined8 **)(lVar8 + 0x24);
        uStack_588 = (long *)CONCAT44(uStack_588._4_4_,*(undefined4 *)(lVar8 + 0x2c));
        func_0x00010a3681e8(param_7,&uStack_590);
        break;
      case 9:
        FUN_10a0dad84();
        uStack_590 = (undefined8 *)CONCAT44(uVar23,param_1);
        uStack_588 = (long *)CONCAT44(uVar28,uVar25);
        func_0x00010a368244(param_7,&uStack_590);
        break;
      case 10:
        uStack_588 = *(long **)(lVar8 + 0x2c);
        uStack_590 = *(undefined8 **)(lVar8 + 0x24);
        uStack_578 = *(ulong *)(lVar8 + 0x3c);
        lStack_580 = *(long *)(lVar8 + 0x34);
        uStack_570 = CONCAT44(uStack_570._4_4_,*(undefined4 *)(lVar8 + 0x44));
        FUN_10a3684c4(param_7,&uStack_590);
        break;
      case 0xb:
        uStack_588 = *(long **)(lVar8 + 0x2c);
        uStack_590 = *(undefined8 **)(lVar8 + 0x24);
        uStack_578 = *(ulong *)(lVar8 + 0x3c);
        lStack_580 = *(long *)(lVar8 + 0x34);
        uStack_568 = *(undefined8 *)(lVar8 + 0x4c);
        uStack_570 = *(undefined8 *)(lVar8 + 0x44);
        uStack_558 = *(undefined8 *)(lVar8 + 0x5c);
        uStack_560 = *(undefined8 *)(lVar8 + 0x54);
        FUN_10a3685f4(param_7,&uStack_590);
        break;
      case 0x16:
        FUN_10aca4910();
        uStack_590 = (undefined8 *)CONCAT44(uVar23,param_1);
        uStack_588 = (long *)CONCAT44(uVar28,uVar25);
        func_0x00010a3682a0(param_7,&uStack_590);
        break;
      case 0x1f:
        uStack_590 = *(undefined8 **)(lVar8 + 0x24);
        FUN_10a368780(param_7,&uStack_590);
        break;
      case 0x22:
        uStack_590 = *(undefined8 **)(lVar8 + 0x24);
        uStack_588 = (long *)CONCAT44(uStack_588._4_4_,*(undefined4 *)(lVar8 + 0x2c));
        FUN_10a3689a4(param_7,&uStack_590);
        break;
      case 0x23:
        uStack_588 = *(long **)(lVar8 + 0x2c);
        uStack_590 = *(undefined8 **)(lVar8 + 0x24);
        FUN_10a368bd0(param_7,&uStack_590);
        break;
      case 0x24:
        uStack_590 = *(undefined8 **)(lVar8 + 0x24);
        FUN_10a368df4(param_7,&uStack_590);
        break;
      case 0x25:
        uStack_590 = *(undefined8 **)(lVar8 + 0x24);
        uStack_588 = (long *)CONCAT44(uStack_588._4_4_,*(undefined4 *)(lVar8 + 0x2c));
        FUN_10a369018(param_7,&uStack_590);
        break;
      case 0x26:
        uStack_588 = *(long **)(lVar8 + 0x2c);
        uStack_590 = *(undefined8 **)(lVar8 + 0x24);
        FUN_10a369244(param_7,&uStack_590);
      }
      goto LAB_10aca426c;
    }
  }
  lVar6 = *(long *)(param_5 + 400);
  if (lVar6 != 0) {
    lVar15 = param_5 + 400;
    do {
      lVar1 = 8;
      if (uStack_538 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar15 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar15 != param_5 + 400) && (*(ulong *)(lVar15 + 0x38) <= uStack_538)) {
      FUN_10a1f92d8(param_7,*(long *)(lVar15 + 0x40) + 0x188);
      goto LAB_10aca426c;
    }
  }
  lVar6 = *(long *)(param_5 + 0x1c0);
  if (lVar6 != 0) {
    lVar15 = param_5 + 0x1c0;
    do {
      lVar1 = 8;
      if (uStack_538 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar15 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar15 != param_5 + 0x1c0) && (*(ulong *)(lVar15 + 0x38) <= uStack_538)) {
      uVar14 = *(ulong *)(lVar15 + 0x40);
      if (uVar14 == 0) {
        lVar6 = 0;
        lVar8 = 0;
      }
      else {
        uVar16 = 0;
        uVar20 = 0;
        do {
          FUN_10aca38a0(&iStack_5a8,param_6,uVar16);
          uStack_590 = (undefined8 *)CONCAT44(uStack_5a4,iStack_5a8);
          uStack_588 = plStack_5a0;
          lStack_580 = lStack_598;
          uStack_578 = 0;
          func_0x000107c2b080(&uStack_590);
          plVar12 = (long *)*plVar18;
          plVar17 = plVar18;
          if (plVar12 == (long *)0x0) {
LAB_10aca41d4:
            bVar3 = false;
            uVar21 = uVar20;
          }
          else {
            do {
              lVar6 = 8;
              if (uStack_578 <= (ulong)plVar12[7]) {
                lVar6 = 0;
                plVar17 = plVar12;
              }
              plVar12 = *(long **)((long)plVar12 + lVar6);
            } while (plVar12 != (long *)0x0);
            if ((plVar17 == plVar18) || (uStack_578 < (ulong)plVar17[7])) goto LAB_10aca41d4;
            bVar3 = *(ushort *)(plVar17[8] + 0x20) != 0;
            uVar21 = *(ushort *)(plVar17[8] + 0x20);
            if (!bVar3) {
              uVar21 = uVar20;
            }
          }
          if (lStack_580 < 0) {
            __ZdlPv(uStack_590);
          }
          uVar16 = uVar16 + 1;
          if (uVar16 == uVar14) {
            bVar3 = true;
          }
          uVar20 = uVar21;
        } while (!bVar3);
        if (uVar21 < 0xb) {
          if (uVar21 < 7) {
            if (uVar21 == 1) {
              FUN_10aca493c(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 2) {
              FUN_10aca7104(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 3) {
              FUN_10aca4bec(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
          else if (uVar21 < 9) {
            if (uVar21 == 7) {
              FUN_10aca4eb0(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 8) {
              FUN_10aca5194(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar21 == 9) {
              FUN_10aca546c(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 10) {
              FUN_10aca6b24(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar21 < 0x23) {
          if (uVar21 < 0x1f) {
            if (uVar21 == 0xb) {
              FUN_10aca6e14(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 0x16) {
              FUN_10aca685c(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar21 == 0x1f) {
              FUN_10aca5734(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
            if (uVar21 == 0x22) {
              FUN_10aca5a18(lVar8,param_6,uVar14,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar21 < 0x25) {
          if (uVar21 == 0x23) {
            FUN_10aca5ce8(lVar8,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
          if (uVar21 == 0x24) {
            FUN_10aca5fc8(lVar8,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
        }
        else {
          if (uVar21 == 0x25) {
            FUN_10aca62ac(lVar8,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
          if (uVar21 == 0x26) {
            FUN_10aca657c(lVar8,param_6,uVar14,param_7);
            goto LAB_10aca426c;
          }
        }
        if (uVar14 >> 0x3d != 0) {
          FUN_10acb63ac();
LAB_10aca48cc:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca48d0);
          (*pcVar2)();
        }
        lVar6 = uVar14 * 8;
        __Znwm();
        _bzero();
        lVar8 = lVar6 + uVar14 * 8;
      }
      plVar18 = (long *)*param_7;
      lVar15 = lVar8 - lVar6 >> 3;
      (**(code **)(*plVar18 + 600))(&uStack_590,plVar18,lVar15);
      apuStack_520[0] = uStack_590;
      if (lVar8 != lVar6) {
        lVar8 = 0;
        do {
          plVar17 = plVar18;
          (**(code **)(*plVar18 + 0x58))();
          if ((*(byte *)(plVar17 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
          plVar12 = (long *)plVar17[4];
          if (plVar12 == (long *)0x0) {
            func_0x000109899fd8(plVar17);
            plVar12 = (long *)plVar17[4];
          }
          plVar17[4] = *plVar12;
          plVar12[1] = 0;
          plVar12[2] = 0;
          *plVar12 = (long)&PTR_FUN_110c6bfc0;
          plVar13 = plVar18;
          (**(code **)(*plVar18 + 0x58))();
          plVar17 = plVar13;
          FUN_10a065534();
          if (plVar17 == (long *)0x0) {
            if ((*(byte *)(plVar13 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
            plVar17 = plVar13 + 0x1b;
          }
          uStack_590 = (undefined8 *)CONCAT44(uStack_590._4_4_,7);
          plVar4 = plVar18;
          (**(code **)(*plVar18 + 0x98))(plVar18,*plVar17);
          uStack_588 = plVar4;
          (**(code **)(*plVar18 + 0x2f8))
                    (&plStack_5a0,plVar18,plVar12,plVar13,&UNK_10989ba24,&uStack_590);
          iStack_5a8 = 7;
          if ((3 < (int)uStack_590) && (uStack_588 != (long *)0x0)) {
            (**(code **)*uStack_588)();
          }
          (**(code **)(*plVar18 + 0x290))(plVar18,apuStack_520,lVar8,&iStack_5a8);
          if ((3 < iStack_5a8) && (plStack_5a0 != (long *)0x0)) {
            (**(code **)*plStack_5a0)();
          }
          lVar8 = lVar8 + 1;
        } while (lVar15 != lVar8);
      }
      aiStack_530[0] = 7;
      puStack_528 = apuStack_520[0];
      func_0x0001098968d0(param_7 + 1,aiStack_530);
      if ((3 < aiStack_530[0]) && (puStack_528 != (undefined8 *)0x0)) {
        (**(code **)*puStack_528)();
      }
      if (lVar6 != 0) {
        __ZdlPv(lVar6);
      }
    }
  }
LAB_10aca426c:
  if (cStack_539 < '\0') {
    __ZdlPv(auStack_550[0]);
  }
  return;
}



/* Entry: 10aca62ac; end: 10aca657b;  */

void FUN_10aca62ac(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long *param_7,undefined8 *param_8)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *unaff_x20;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  char *pcVar18;
  ushort uVar19;
  ushort uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  int iStack_4f8;
  undefined4 uStack_4f4;
  long *plStack_4f0;
  long lStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  ulong uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  ulong uStack_488;
  int aiStack_480 [2];
  undefined8 *puStack_478;
  undefined8 *apuStack_470 [2];
  int iStack_3f8;
  undefined4 uStack_3f4;
  undefined8 *puStack_3f0;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  long lStack_3d0;
  ulong uStack_3c8;
  undefined8 *puStack_3b8;
  int iStack_358;
  undefined4 uStack_354;
  undefined8 *puStack_350;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  long lStack_330;
  ulong uStack_328;
  undefined8 *puStack_318;
  int iStack_2a8;
  undefined4 uStack_2a4;
  undefined8 *puStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  long lStack_280;
  ulong uStack_278;
  undefined8 *puStack_268;
  int iStack_1f8;
  undefined4 uStack_1f4;
  undefined8 *puStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  undefined8 *puStack_1b8;
  int iStack_148;
  undefined4 uStack_144;
  undefined8 *puStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined8 *puStack_108;
  int iStack_98;
  undefined4 uStack_94;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 *puStack_58;
  
  if ((ulong)param_7 >> 0x3c == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 4);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[0xc] = 0;
      puVar10 = puVar10 + 0x10;
    } while (puVar10 != puVar5 + (long)param_7 * 0x10);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_98,param_6,plVar16);
      puStack_80 = (undefined8 *)CONCAT44(uStack_94,iStack_98);
      puStack_78 = puStack_90;
      lStack_70 = lStack_88;
      uStack_68 = 0;
      func_0x000107c2b080(&puStack_80);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_68 <= (ulong)plVar12[7]) {
            lVar7 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar7);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_68)) {
          lVar7 = plVar11[8];
          if (*(short *)(lVar7 + 0x20) != 0x25) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6554;
          }
          uVar23 = *(undefined4 *)(lVar7 + 0x2c);
          puVar9 = (undefined8 *)(puVar5 + (long)plVar16 * 0x10);
          *puVar9 = *(undefined8 *)(lVar7 + 0x24);
          *(undefined4 *)(puVar9 + 1) = uVar23;
          if ((*(byte *)((long)puVar9 + 0xc) & 1) == 0) {
            *(undefined1 *)((long)puVar9 + 0xc) = 1;
          }
        }
      }
      if (lStack_70 < 0) {
        __ZdlPv(puStack_80);
      }
      plVar16 = (long *)((long)plVar16 + 1);
      if (plVar16 == param_7) {
        plVar16 = (long *)*param_8;
        (**(code **)(*plVar16 + 600))(&puStack_80,plVar16,param_7);
        plVar17 = (long *)0x0;
        puStack_58 = puStack_80;
        puVar10 = puVar5;
        do {
          if ((puVar10[0xc] & 1) == 0) {
            puStack_80 = (undefined8 *)CONCAT44(puStack_80._4_4_,1);
          }
          else {
            FUN_10a369074(&puStack_80,plVar16,puVar10);
          }
          (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_58,plVar17,&puStack_80);
          if ((3 < (int)puStack_80) && (puStack_78 != (undefined8 *)0x0)) {
            (**(code **)*puStack_78)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
          puVar10 = puVar10 + 0x10;
        } while (param_7 != plVar17);
        iStack_98 = 7;
        puStack_90 = puStack_58;
        func_0x0001098968d0(param_8 + 1,&iStack_98);
        if ((3 < iStack_98) && (puStack_90 != (undefined8 *)0x0)) {
          (**(code **)*puStack_90)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4ab0();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6554:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6558);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[0x10] = 0;
      puVar10 = puVar10 + 0x14;
    } while (puVar10 != puVar5 + (long)param_7 * 0x14);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_148,param_6,plVar16);
      puStack_130 = (undefined8 *)CONCAT44(uStack_144,iStack_148);
      puStack_128 = puStack_140;
      lStack_120 = lStack_138;
      uStack_118 = 0;
      func_0x000107c2b080(&puStack_130);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_118 <= (ulong)plVar12[7]) {
            lVar7 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar7);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_118)) {
          lVar7 = plVar11[8];
          if (*(short *)(lVar7 + 0x20) != 0x26) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6834;
          }
          puVar9 = (undefined8 *)(puVar5 + (long)plVar16 * 0x14);
          uVar21 = *(undefined8 *)(lVar7 + 0x24);
          puVar9[1] = *(undefined8 *)(lVar7 + 0x2c);
          *puVar9 = uVar21;
          if ((*(byte *)(puVar9 + 2) & 1) == 0) {
            *(undefined1 *)(puVar9 + 2) = 1;
          }
        }
      }
      if (lStack_120 < 0) {
        __ZdlPv(puStack_130);
      }
      plVar16 = (long *)((long)plVar16 + 1);
      if (plVar16 == param_7) {
        plVar16 = (long *)*param_8;
        (**(code **)(*plVar16 + 600))(&puStack_130,plVar16,param_7);
        plVar17 = (long *)0x0;
        puStack_108 = puStack_130;
        puVar10 = puVar5;
        do {
          if ((puVar10[0x10] & 1) == 0) {
            puStack_130 = (undefined8 *)CONCAT44(puStack_130._4_4_,1);
          }
          else {
            FUN_10a3692a0(&puStack_130,plVar16,puVar10);
          }
          (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_108,plVar17,&puStack_130);
          if ((3 < (int)puStack_130) && (puStack_128 != (undefined8 *)0x0)) {
            (**(code **)*puStack_128)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
          puVar10 = puVar10 + 0x14;
        } while (param_7 != plVar17);
        iStack_148 = 7;
        puStack_140 = puStack_108;
        func_0x0001098968d0(param_8 + 1,&iStack_148);
        if ((3 < iStack_148) && (puStack_140 != (undefined8 *)0x0)) {
          (**(code **)*puStack_140)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4ac4();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6834:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6838);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  uVar28 = (undefined4)param_4;
  uVar25 = (undefined4)param_3;
  uVar23 = (undefined4)param_2;
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[0x10] = 0;
      puVar10 = puVar10 + 0x14;
    } while (puVar10 != puVar5 + (long)param_7 * 0x14);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_1f8,param_6,plVar16);
      puVar9 = (undefined8 *)CONCAT44(uStack_1f4,iStack_1f8);
      puStack_1d8 = puStack_1f0;
      lStack_1d0 = lStack_1e8;
      uStack_1c8 = 0;
      puStack_1e0 = puVar9;
      func_0x000107c2b080(&puStack_1e0);
      uVar23 = SUB84(puVar9,0);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_1c8 <= (ulong)plVar12[7]) {
            lVar7 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar7);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_1c8)) {
          FUN_10aca4910(plVar11[8]);
          puVar8 = (undefined4 *)(puVar5 + (long)plVar16 * 0x14);
          *puVar8 = uVar23;
          puVar8[1] = (int)param_2;
          puVar8[2] = (int)param_3;
          puVar8[3] = (int)param_4;
          if ((*(byte *)(puVar8 + 4) & 1) == 0) {
            *(undefined1 *)(puVar8 + 4) = 1;
          }
        }
      }
      if (lStack_1d0 < 0) {
        __ZdlPv(puStack_1e0);
      }
      plVar16 = (long *)((long)plVar16 + 1);
    } while (plVar16 != param_7);
    plVar16 = (long *)*param_8;
    (**(code **)(*plVar16 + 600))(&puStack_1e0,plVar16,param_7);
    plVar17 = (long *)0x0;
    puStack_1b8 = puStack_1e0;
    puVar10 = puVar5;
    do {
      if ((puVar10[0x10] & 1) == 0) {
        puStack_1e0 = (undefined8 *)CONCAT44(puStack_1e0._4_4_,1);
      }
      else {
        FUN_10a3682fc(&puStack_1e0,plVar16,puVar10);
      }
      (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_1b8,plVar17,&puStack_1e0);
      if ((3 < (int)puStack_1e0) && (puStack_1d8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_1d8)();
      }
      plVar17 = (long *)((long)plVar17 + 1);
      puVar10 = puVar10 + 0x14;
    } while (param_7 != plVar17);
    iStack_1f8 = 7;
    puStack_1f0 = puStack_1b8;
    func_0x0001098968d0(param_8 + 1,&iStack_1f8);
    if ((3 < iStack_1f8) && (puStack_1f0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_1f0)();
    }
    __ZdlPv(puVar5);
    return;
  }
  func_0x00010acd4ad8();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6b00);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x666666666666667) {
    puVar5 = (undefined1 *)((long)param_7 * 0x28);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[0x24] = 0;
      puVar10 = puVar10 + 0x28;
    } while (puVar10 != puVar5 + (long)param_7 * 0x28);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_2a8,param_6,plVar16);
      puStack_290 = (undefined8 *)CONCAT44(uStack_2a4,iStack_2a8);
      puStack_288 = puStack_2a0;
      lStack_280 = lStack_298;
      uStack_278 = 0;
      func_0x000107c2b080(&puStack_290);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_278 <= (ulong)plVar12[7]) {
            lVar7 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar7);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_278)) {
          lVar7 = plVar11[8];
          if (*(short *)(lVar7 + 0x20) != 10) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6dec;
          }
          puVar9 = (undefined8 *)(puVar5 + (long)plVar16 * 0x28);
          uVar23 = *(undefined4 *)(lVar7 + 0x44);
          uVar22 = *(undefined8 *)(lVar7 + 0x3c);
          uVar21 = *(undefined8 *)(lVar7 + 0x34);
          uVar24 = *(undefined8 *)(lVar7 + 0x24);
          puVar9[1] = *(undefined8 *)(lVar7 + 0x2c);
          *puVar9 = uVar24;
          puVar9[3] = uVar22;
          puVar9[2] = uVar21;
          *(undefined4 *)(puVar9 + 4) = uVar23;
          if ((*(byte *)((long)puVar9 + 0x24) & 1) == 0) {
            *(undefined1 *)((long)puVar9 + 0x24) = 1;
          }
        }
      }
      if (lStack_280 < 0) {
        __ZdlPv(puStack_290);
      }
      plVar16 = (long *)((long)plVar16 + 1);
      if (plVar16 == param_7) {
        plVar16 = (long *)*param_8;
        (**(code **)(*plVar16 + 600))(&puStack_290,plVar16,param_7);
        plVar17 = (long *)0x0;
        puStack_268 = puStack_290;
        puVar10 = puVar5;
        do {
          if ((puVar10[0x24] & 1) == 0) {
            puStack_290 = (undefined8 *)CONCAT44(puStack_290._4_4_,1);
          }
          else {
            FUN_10a368520(&puStack_290,plVar16,puVar10);
          }
          (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_268,plVar17,&puStack_290);
          if ((3 < (int)puStack_290) && (puStack_288 != (undefined8 *)0x0)) {
            (**(code **)*puStack_288)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
          puVar10 = puVar10 + 0x28;
        } while (param_7 != plVar17);
        iStack_2a8 = 7;
        puStack_2a0 = puStack_268;
        func_0x0001098968d0(param_8 + 1,&iStack_2a8);
        if ((3 < iStack_2a8) && (puStack_2a0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_2a0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4aec();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6dec:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6df0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x3c3c3c3c3c3c3c4) {
    puVar5 = (undefined1 *)((long)param_7 * 0x44);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[0x40] = 0;
      puVar10 = puVar10 + 0x44;
    } while (puVar10 != puVar5 + (long)param_7 * 0x44);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_358,param_6,plVar16);
      puStack_340 = (undefined8 *)CONCAT44(uStack_354,iStack_358);
      puStack_338 = puStack_350;
      lStack_330 = lStack_348;
      uStack_328 = 0;
      func_0x000107c2b080(&puStack_340);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_328 <= (ulong)plVar12[7]) {
            lVar7 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar7);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_328)) {
          lVar7 = plVar11[8];
          if (*(short *)(lVar7 + 0x20) != 0xb) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca70dc;
          }
          puVar9 = (undefined8 *)(puVar5 + (long)plVar16 * 0x44);
          uVar22 = *(undefined8 *)(lVar7 + 0x3c);
          uVar21 = *(undefined8 *)(lVar7 + 0x34);
          uVar24 = *(undefined8 *)(lVar7 + 0x44);
          uVar27 = *(undefined8 *)(lVar7 + 0x5c);
          uVar26 = *(undefined8 *)(lVar7 + 0x54);
          uVar30 = *(undefined8 *)(lVar7 + 0x2c);
          uVar29 = *(undefined8 *)(lVar7 + 0x24);
          puVar9[5] = *(undefined8 *)(lVar7 + 0x4c);
          puVar9[4] = uVar24;
          puVar9[7] = uVar27;
          puVar9[6] = uVar26;
          puVar9[1] = uVar30;
          *puVar9 = uVar29;
          puVar9[3] = uVar22;
          puVar9[2] = uVar21;
          if ((*(byte *)(puVar9 + 8) & 1) == 0) {
            *(undefined1 *)(puVar9 + 8) = 1;
          }
        }
      }
      if (lStack_330 < 0) {
        __ZdlPv(puStack_340);
      }
      plVar16 = (long *)((long)plVar16 + 1);
      if (plVar16 == param_7) {
        plVar16 = (long *)*param_8;
        (**(code **)(*plVar16 + 600))(&puStack_340,plVar16,param_7);
        plVar17 = (long *)0x0;
        puStack_318 = puStack_340;
        puVar10 = puVar5;
        do {
          if ((puVar10[0x40] & 1) == 0) {
            puStack_340 = (undefined8 *)CONCAT44(puStack_340._4_4_,1);
          }
          else {
            FUN_10a368650(&puStack_340,plVar16,puVar10);
          }
          (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_318,plVar17,&puStack_340);
          if ((3 < (int)puStack_340) && (puStack_338 != (undefined8 *)0x0)) {
            (**(code **)*puStack_338)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
          puVar10 = puVar10 + 0x44;
        } while (param_7 != plVar17);
        iStack_358 = 7;
        puStack_350 = puStack_318;
        func_0x0001098968d0(param_8 + 1,&iStack_358);
        if ((3 < iStack_358) && (puStack_350 != (undefined8 *)0x0)) {
          (**(code **)*puStack_350)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b00();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca70dc:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca70e0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if ((ulong)param_7 >> 0x3d == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 3);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[4] = 0;
      puVar10 = puVar10 + 8;
    } while (puVar10 != puVar5 + (long)param_7 * 8);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_3f8,param_6,plVar16);
      puStack_3e0 = (undefined8 *)CONCAT44(uStack_3f4,iStack_3f8);
      puStack_3d8 = puStack_3f0;
      lStack_3d0 = lStack_3e8;
      uStack_3c8 = 0;
      func_0x000107c2b080(&puStack_3e0);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_3c8 <= (ulong)plVar12[7]) {
            lVar7 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar7);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_3c8)) {
          if (*(short *)(plVar11[8] + 0x20) != 2) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca73a0;
          }
          *(undefined4 *)(puVar5 + (long)plVar16 * 8) = *(undefined4 *)(plVar11[8] + 0x24);
          *(undefined1 *)((long)(puVar5 + (long)plVar16 * 8) + 4) = 1;
        }
      }
      if (lStack_3d0 < 0) {
        __ZdlPv(puStack_3e0);
      }
      plVar16 = (long *)((long)plVar16 + 1);
      if (plVar16 == param_7) {
        plVar16 = (long *)*param_8;
        (**(code **)(*plVar16 + 600))(&puStack_3e0,plVar16,param_7);
        plVar17 = (long *)0x0;
        puStack_3b8 = puStack_3e0;
        pcVar18 = puVar5 + 4;
        do {
          if (*pcVar18 == '\x01') {
            puStack_3d8 = (undefined8 *)(double)*(int *)(pcVar18 + -4);
            uVar23 = 3;
          }
          else {
            uVar23 = 1;
          }
          puStack_3e0 = (undefined8 *)CONCAT44(puStack_3e0._4_4_,uVar23);
          (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_3b8,plVar17,&puStack_3e0);
          if ((3 < (int)puStack_3e0) && (puStack_3d8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_3d8)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
          pcVar18 = pcVar18 + 8;
        } while (param_7 != plVar17);
        iStack_3f8 = 7;
        puStack_3f0 = puStack_3b8;
        func_0x0001098968d0(param_8 + 1,&iStack_3f8);
        if ((3 < iStack_3f8) && (puStack_3f0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_3f0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b14();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca73a0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca73a4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  lVar7 = param_5 + -0x18;
  FUN_10a0d09b4(auStack_4a0);
  plVar17 = (long *)(param_5 + 0x178);
  plVar11 = *(long **)(param_5 + 0x178);
  plVar16 = plVar17;
  if (plVar11 != (long *)0x0) {
    do {
      lVar6 = 8;
      if (uStack_488 <= (ulong)plVar11[7]) {
        lVar6 = 0;
        plVar16 = plVar11;
      }
      plVar11 = *(long **)((long)plVar11 + lVar6);
    } while (plVar11 != (long *)0x0);
    if ((plVar16 != plVar17) && ((ulong)plVar16[7] <= uStack_488)) {
      lVar7 = plVar16[8];
      switch(*(undefined2 *)(lVar7 + 0x20)) {
      case 1:
        uStack_4e0 = (undefined8 *)CONCAT71(uStack_4e0._1_7_,*(undefined1 *)(lVar7 + 0x24));
        FUN_10a351b5c(param_7,&uStack_4e0);
        break;
      case 2:
        uStack_4e0 = (undefined8 *)CONCAT44(uStack_4e0._4_4_,*(undefined4 *)(lVar7 + 0x24));
        func_0x00010a368134(param_7,&uStack_4e0);
        break;
      case 3:
        uStack_4e0 = (undefined8 *)CONCAT44(uStack_4e0._4_4_,*(undefined4 *)(lVar7 + 0x24));
        FUN_10a3680dc(param_7,&uStack_4e0);
        break;
      case 6:
        uStack_4e0 = (undefined8 *)CONCAT44(uStack_4e0._4_4_,*(undefined4 *)(lVar7 + 0x24));
        FUN_10a368728(param_7,&uStack_4e0);
        break;
      case 7:
        uStack_4e0 = *(undefined8 **)(lVar7 + 0x24);
        func_0x00010a36818c(param_7,&uStack_4e0);
        break;
      case 8:
        uStack_4e0 = *(undefined8 **)(lVar7 + 0x24);
        uStack_4d8 = (long *)CONCAT44(uStack_4d8._4_4_,*(undefined4 *)(lVar7 + 0x2c));
        func_0x00010a3681e8(param_7,&uStack_4e0);
        break;
      case 9:
        FUN_10a0dad84();
        uStack_4e0 = (undefined8 *)CONCAT44(uVar23,param_1);
        uStack_4d8 = (long *)CONCAT44(uVar28,uVar25);
        func_0x00010a368244(param_7,&uStack_4e0);
        break;
      case 10:
        uStack_4d8 = *(long **)(lVar7 + 0x2c);
        uStack_4e0 = *(undefined8 **)(lVar7 + 0x24);
        uStack_4c8 = *(ulong *)(lVar7 + 0x3c);
        lStack_4d0 = *(long *)(lVar7 + 0x34);
        uStack_4c0 = CONCAT44(uStack_4c0._4_4_,*(undefined4 *)(lVar7 + 0x44));
        FUN_10a3684c4(param_7,&uStack_4e0);
        break;
      case 0xb:
        uStack_4d8 = *(long **)(lVar7 + 0x2c);
        uStack_4e0 = *(undefined8 **)(lVar7 + 0x24);
        uStack_4c8 = *(ulong *)(lVar7 + 0x3c);
        lStack_4d0 = *(long *)(lVar7 + 0x34);
        uStack_4b8 = *(undefined8 *)(lVar7 + 0x4c);
        uStack_4c0 = *(undefined8 *)(lVar7 + 0x44);
        uStack_4a8 = *(undefined8 *)(lVar7 + 0x5c);
        uStack_4b0 = *(undefined8 *)(lVar7 + 0x54);
        FUN_10a3685f4(param_7,&uStack_4e0);
        break;
      case 0x16:
        FUN_10aca4910();
        uStack_4e0 = (undefined8 *)CONCAT44(uVar23,param_1);
        uStack_4d8 = (long *)CONCAT44(uVar28,uVar25);
        func_0x00010a3682a0(param_7,&uStack_4e0);
        break;
      case 0x1f:
        uStack_4e0 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a368780(param_7,&uStack_4e0);
        break;
      case 0x22:
        uStack_4e0 = *(undefined8 **)(lVar7 + 0x24);
        uStack_4d8 = (long *)CONCAT44(uStack_4d8._4_4_,*(undefined4 *)(lVar7 + 0x2c));
        FUN_10a3689a4(param_7,&uStack_4e0);
        break;
      case 0x23:
        uStack_4d8 = *(long **)(lVar7 + 0x2c);
        uStack_4e0 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a368bd0(param_7,&uStack_4e0);
        break;
      case 0x24:
        uStack_4e0 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a368df4(param_7,&uStack_4e0);
        break;
      case 0x25:
        uStack_4e0 = *(undefined8 **)(lVar7 + 0x24);
        uStack_4d8 = (long *)CONCAT44(uStack_4d8._4_4_,*(undefined4 *)(lVar7 + 0x2c));
        FUN_10a369018(param_7,&uStack_4e0);
        break;
      case 0x26:
        uStack_4d8 = *(long **)(lVar7 + 0x2c);
        uStack_4e0 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a369244(param_7,&uStack_4e0);
      }
      goto LAB_10aca426c;
    }
  }
  lVar6 = *(long *)(param_5 + 400);
  if (lVar6 != 0) {
    lVar14 = param_5 + 400;
    do {
      lVar1 = 8;
      if (uStack_488 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar14 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar14 != param_5 + 400) && (*(ulong *)(lVar14 + 0x38) <= uStack_488)) {
      FUN_10a1f92d8(param_7,*(long *)(lVar14 + 0x40) + 0x188);
      goto LAB_10aca426c;
    }
  }
  lVar6 = *(long *)(param_5 + 0x1c0);
  if (lVar6 != 0) {
    lVar14 = param_5 + 0x1c0;
    do {
      lVar1 = 8;
      if (uStack_488 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar14 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar14 != param_5 + 0x1c0) && (*(ulong *)(lVar14 + 0x38) <= uStack_488)) {
      uVar13 = *(ulong *)(lVar14 + 0x40);
      if (uVar13 == 0) {
        lVar6 = 0;
        lVar7 = 0;
      }
      else {
        uVar15 = 0;
        uVar19 = 0;
        do {
          FUN_10aca38a0(&iStack_4f8,param_6,uVar15);
          uStack_4e0 = (undefined8 *)CONCAT44(uStack_4f4,iStack_4f8);
          uStack_4d8 = plStack_4f0;
          lStack_4d0 = lStack_4e8;
          uStack_4c8 = 0;
          func_0x000107c2b080(&uStack_4e0);
          plVar11 = (long *)*plVar17;
          plVar16 = plVar17;
          if (plVar11 == (long *)0x0) {
LAB_10aca41d4:
            bVar3 = false;
            uVar20 = uVar19;
          }
          else {
            do {
              lVar6 = 8;
              if (uStack_4c8 <= (ulong)plVar11[7]) {
                lVar6 = 0;
                plVar16 = plVar11;
              }
              plVar11 = *(long **)((long)plVar11 + lVar6);
            } while (plVar11 != (long *)0x0);
            if ((plVar16 == plVar17) || (uStack_4c8 < (ulong)plVar16[7])) goto LAB_10aca41d4;
            bVar3 = *(ushort *)(plVar16[8] + 0x20) != 0;
            uVar20 = *(ushort *)(plVar16[8] + 0x20);
            if (!bVar3) {
              uVar20 = uVar19;
            }
          }
          if (lStack_4d0 < 0) {
            __ZdlPv(uStack_4e0);
          }
          uVar15 = uVar15 + 1;
          if (uVar15 == uVar13) {
            bVar3 = true;
          }
          uVar19 = uVar20;
        } while (!bVar3);
        if (uVar20 < 0xb) {
          if (uVar20 < 7) {
            if (uVar20 == 1) {
              FUN_10aca493c(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 2) {
              FUN_10aca7104(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 3) {
              FUN_10aca4bec(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
          else if (uVar20 < 9) {
            if (uVar20 == 7) {
              FUN_10aca4eb0(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 8) {
              FUN_10aca5194(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar20 == 9) {
              FUN_10aca546c(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 10) {
              FUN_10aca6b24(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar20 < 0x23) {
          if (uVar20 < 0x1f) {
            if (uVar20 == 0xb) {
              FUN_10aca6e14(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 0x16) {
              FUN_10aca685c(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar20 == 0x1f) {
              FUN_10aca5734(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 0x22) {
              FUN_10aca5a18(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar20 < 0x25) {
          if (uVar20 == 0x23) {
            FUN_10aca5ce8(lVar7,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
          if (uVar20 == 0x24) {
            FUN_10aca5fc8(lVar7,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
        }
        else {
          if (uVar20 == 0x25) {
            FUN_10aca62ac(lVar7,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
          if (uVar20 == 0x26) {
            FUN_10aca657c(lVar7,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
        }
        if (uVar13 >> 0x3d != 0) {
          FUN_10acb63ac();
LAB_10aca48cc:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca48d0);
          (*pcVar2)();
        }
        lVar6 = uVar13 * 8;
        __Znwm();
        _bzero();
        lVar7 = lVar6 + uVar13 * 8;
      }
      plVar17 = (long *)*param_7;
      lVar14 = lVar7 - lVar6 >> 3;
      (**(code **)(*plVar17 + 600))(&uStack_4e0,plVar17,lVar14);
      apuStack_470[0] = uStack_4e0;
      if (lVar7 != lVar6) {
        lVar7 = 0;
        do {
          plVar16 = plVar17;
          (**(code **)(*plVar17 + 0x58))();
          if ((*(byte *)(plVar16 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
          plVar11 = (long *)plVar16[4];
          if (plVar11 == (long *)0x0) {
            func_0x000109899fd8(plVar16);
            plVar11 = (long *)plVar16[4];
          }
          plVar16[4] = *plVar11;
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = (long)&PTR_FUN_110c6bfc0;
          plVar12 = plVar17;
          (**(code **)(*plVar17 + 0x58))();
          plVar16 = plVar12;
          FUN_10a065534();
          if (plVar16 == (long *)0x0) {
            if ((*(byte *)(plVar12 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
            plVar16 = plVar12 + 0x1b;
          }
          uStack_4e0 = (undefined8 *)CONCAT44(uStack_4e0._4_4_,7);
          plVar4 = plVar17;
          (**(code **)(*plVar17 + 0x98))(plVar17,*plVar16);
          uStack_4d8 = plVar4;
          (**(code **)(*plVar17 + 0x2f8))
                    (&plStack_4f0,plVar17,plVar11,plVar12,&UNK_10989ba24,&uStack_4e0);
          iStack_4f8 = 7;
          if ((3 < (int)uStack_4e0) && (uStack_4d8 != (long *)0x0)) {
            (**(code **)*uStack_4d8)();
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,apuStack_470,lVar7,&iStack_4f8);
          if ((3 < iStack_4f8) && (plStack_4f0 != (long *)0x0)) {
            (**(code **)*plStack_4f0)();
          }
          lVar7 = lVar7 + 1;
        } while (lVar14 != lVar7);
      }
      aiStack_480[0] = 7;
      puStack_478 = apuStack_470[0];
      func_0x0001098968d0(param_7 + 1,aiStack_480);
      if ((3 < aiStack_480[0]) && (puStack_478 != (undefined8 *)0x0)) {
        (**(code **)*puStack_478)();
      }
      if (lVar6 != 0) {
        __ZdlPv(lVar6);
      }
    }
  }
LAB_10aca426c:
  if (cStack_489 < '\0') {
    __ZdlPv(auStack_4a0[0]);
  }
  return;
}



/* Entry: 10aca657c; end: 10aca685b;  */

void FUN_10aca657c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long *param_7,undefined8 *param_8)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *unaff_x20;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  char *pcVar18;
  ushort uVar19;
  ushort uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  int iStack_458;
  undefined4 uStack_454;
  long *plStack_450;
  long lStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
  ulong uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  ulong uStack_3e8;
  int aiStack_3e0 [2];
  undefined8 *puStack_3d8;
  undefined8 *apuStack_3d0 [2];
  int iStack_358;
  undefined4 uStack_354;
  undefined8 *puStack_350;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  long lStack_330;
  ulong uStack_328;
  undefined8 *puStack_318;
  int iStack_2b8;
  undefined4 uStack_2b4;
  undefined8 *puStack_2b0;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  long lStack_290;
  ulong uStack_288;
  undefined8 *puStack_278;
  int iStack_208;
  undefined4 uStack_204;
  undefined8 *puStack_200;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  long lStack_1e0;
  ulong uStack_1d8;
  undefined8 *puStack_1c8;
  int iStack_158;
  undefined4 uStack_154;
  undefined8 *puStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  ulong uStack_128;
  undefined8 *puStack_118;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 *puStack_68;
  
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[0x10] = 0;
      puVar10 = puVar10 + 0x14;
    } while (puVar10 != puVar5 + (long)param_7 * 0x14);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_a8,param_6,plVar16);
      puStack_90 = (undefined8 *)CONCAT44(uStack_a4,iStack_a8);
      puStack_88 = puStack_a0;
      lStack_80 = lStack_98;
      uStack_78 = 0;
      func_0x000107c2b080(&puStack_90);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_78 <= (ulong)plVar12[7]) {
            lVar7 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar7);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_78)) {
          lVar7 = plVar11[8];
          if (*(short *)(lVar7 + 0x20) != 0x26) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6834;
          }
          puVar9 = (undefined8 *)(puVar5 + (long)plVar16 * 0x14);
          uVar21 = *(undefined8 *)(lVar7 + 0x24);
          puVar9[1] = *(undefined8 *)(lVar7 + 0x2c);
          *puVar9 = uVar21;
          if ((*(byte *)(puVar9 + 2) & 1) == 0) {
            *(undefined1 *)(puVar9 + 2) = 1;
          }
        }
      }
      if (lStack_80 < 0) {
        __ZdlPv(puStack_90);
      }
      plVar16 = (long *)((long)plVar16 + 1);
      if (plVar16 == param_7) {
        plVar16 = (long *)*param_8;
        (**(code **)(*plVar16 + 600))(&puStack_90,plVar16,param_7);
        plVar17 = (long *)0x0;
        puStack_68 = puStack_90;
        puVar10 = puVar5;
        do {
          if ((puVar10[0x10] & 1) == 0) {
            puStack_90 = (undefined8 *)CONCAT44(puStack_90._4_4_,1);
          }
          else {
            FUN_10a3692a0(&puStack_90,plVar16,puVar10);
          }
          (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_68,plVar17,&puStack_90);
          if ((3 < (int)puStack_90) && (puStack_88 != (undefined8 *)0x0)) {
            (**(code **)*puStack_88)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
          puVar10 = puVar10 + 0x14;
        } while (param_7 != plVar17);
        iStack_a8 = 7;
        puStack_a0 = puStack_68;
        func_0x0001098968d0(param_8 + 1,&iStack_a8);
        if ((3 < iStack_a8) && (puStack_a0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_a0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4ac4();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6834:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6838);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  uVar28 = (undefined4)param_4;
  uVar25 = (undefined4)param_3;
  uVar23 = (undefined4)param_2;
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[0x10] = 0;
      puVar10 = puVar10 + 0x14;
    } while (puVar10 != puVar5 + (long)param_7 * 0x14);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_158,param_6,plVar16);
      puVar9 = (undefined8 *)CONCAT44(uStack_154,iStack_158);
      puStack_138 = puStack_150;
      lStack_130 = lStack_148;
      uStack_128 = 0;
      puStack_140 = puVar9;
      func_0x000107c2b080(&puStack_140);
      uVar23 = SUB84(puVar9,0);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_128 <= (ulong)plVar12[7]) {
            lVar7 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar7);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_128)) {
          FUN_10aca4910(plVar11[8]);
          puVar8 = (undefined4 *)(puVar5 + (long)plVar16 * 0x14);
          *puVar8 = uVar23;
          puVar8[1] = (int)param_2;
          puVar8[2] = (int)param_3;
          puVar8[3] = (int)param_4;
          if ((*(byte *)(puVar8 + 4) & 1) == 0) {
            *(undefined1 *)(puVar8 + 4) = 1;
          }
        }
      }
      if (lStack_130 < 0) {
        __ZdlPv(puStack_140);
      }
      plVar16 = (long *)((long)plVar16 + 1);
    } while (plVar16 != param_7);
    plVar16 = (long *)*param_8;
    (**(code **)(*plVar16 + 600))(&puStack_140,plVar16,param_7);
    plVar17 = (long *)0x0;
    puStack_118 = puStack_140;
    puVar10 = puVar5;
    do {
      if ((puVar10[0x10] & 1) == 0) {
        puStack_140 = (undefined8 *)CONCAT44(puStack_140._4_4_,1);
      }
      else {
        FUN_10a3682fc(&puStack_140,plVar16,puVar10);
      }
      (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_118,plVar17,&puStack_140);
      if ((3 < (int)puStack_140) && (puStack_138 != (undefined8 *)0x0)) {
        (**(code **)*puStack_138)();
      }
      plVar17 = (long *)((long)plVar17 + 1);
      puVar10 = puVar10 + 0x14;
    } while (param_7 != plVar17);
    iStack_158 = 7;
    puStack_150 = puStack_118;
    func_0x0001098968d0(param_8 + 1,&iStack_158);
    if ((3 < iStack_158) && (puStack_150 != (undefined8 *)0x0)) {
      (**(code **)*puStack_150)();
    }
    __ZdlPv(puVar5);
    return;
  }
  func_0x00010acd4ad8();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6b00);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x666666666666667) {
    puVar5 = (undefined1 *)((long)param_7 * 0x28);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[0x24] = 0;
      puVar10 = puVar10 + 0x28;
    } while (puVar10 != puVar5 + (long)param_7 * 0x28);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_208,param_6,plVar16);
      puStack_1f0 = (undefined8 *)CONCAT44(uStack_204,iStack_208);
      puStack_1e8 = puStack_200;
      lStack_1e0 = lStack_1f8;
      uStack_1d8 = 0;
      func_0x000107c2b080(&puStack_1f0);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_1d8 <= (ulong)plVar12[7]) {
            lVar7 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar7);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_1d8)) {
          lVar7 = plVar11[8];
          if (*(short *)(lVar7 + 0x20) != 10) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6dec;
          }
          puVar9 = (undefined8 *)(puVar5 + (long)plVar16 * 0x28);
          uVar23 = *(undefined4 *)(lVar7 + 0x44);
          uVar22 = *(undefined8 *)(lVar7 + 0x3c);
          uVar21 = *(undefined8 *)(lVar7 + 0x34);
          uVar24 = *(undefined8 *)(lVar7 + 0x24);
          puVar9[1] = *(undefined8 *)(lVar7 + 0x2c);
          *puVar9 = uVar24;
          puVar9[3] = uVar22;
          puVar9[2] = uVar21;
          *(undefined4 *)(puVar9 + 4) = uVar23;
          if ((*(byte *)((long)puVar9 + 0x24) & 1) == 0) {
            *(undefined1 *)((long)puVar9 + 0x24) = 1;
          }
        }
      }
      if (lStack_1e0 < 0) {
        __ZdlPv(puStack_1f0);
      }
      plVar16 = (long *)((long)plVar16 + 1);
      if (plVar16 == param_7) {
        plVar16 = (long *)*param_8;
        (**(code **)(*plVar16 + 600))(&puStack_1f0,plVar16,param_7);
        plVar17 = (long *)0x0;
        puStack_1c8 = puStack_1f0;
        puVar10 = puVar5;
        do {
          if ((puVar10[0x24] & 1) == 0) {
            puStack_1f0 = (undefined8 *)CONCAT44(puStack_1f0._4_4_,1);
          }
          else {
            FUN_10a368520(&puStack_1f0,plVar16,puVar10);
          }
          (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_1c8,plVar17,&puStack_1f0);
          if ((3 < (int)puStack_1f0) && (puStack_1e8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_1e8)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
          puVar10 = puVar10 + 0x28;
        } while (param_7 != plVar17);
        iStack_208 = 7;
        puStack_200 = puStack_1c8;
        func_0x0001098968d0(param_8 + 1,&iStack_208);
        if ((3 < iStack_208) && (puStack_200 != (undefined8 *)0x0)) {
          (**(code **)*puStack_200)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4aec();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6dec:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6df0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x3c3c3c3c3c3c3c4) {
    puVar5 = (undefined1 *)((long)param_7 * 0x44);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[0x40] = 0;
      puVar10 = puVar10 + 0x44;
    } while (puVar10 != puVar5 + (long)param_7 * 0x44);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_2b8,param_6,plVar16);
      puStack_2a0 = (undefined8 *)CONCAT44(uStack_2b4,iStack_2b8);
      puStack_298 = puStack_2b0;
      lStack_290 = lStack_2a8;
      uStack_288 = 0;
      func_0x000107c2b080(&puStack_2a0);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_288 <= (ulong)plVar12[7]) {
            lVar7 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar7);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_288)) {
          lVar7 = plVar11[8];
          if (*(short *)(lVar7 + 0x20) != 0xb) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca70dc;
          }
          puVar9 = (undefined8 *)(puVar5 + (long)plVar16 * 0x44);
          uVar22 = *(undefined8 *)(lVar7 + 0x3c);
          uVar21 = *(undefined8 *)(lVar7 + 0x34);
          uVar24 = *(undefined8 *)(lVar7 + 0x44);
          uVar27 = *(undefined8 *)(lVar7 + 0x5c);
          uVar26 = *(undefined8 *)(lVar7 + 0x54);
          uVar30 = *(undefined8 *)(lVar7 + 0x2c);
          uVar29 = *(undefined8 *)(lVar7 + 0x24);
          puVar9[5] = *(undefined8 *)(lVar7 + 0x4c);
          puVar9[4] = uVar24;
          puVar9[7] = uVar27;
          puVar9[6] = uVar26;
          puVar9[1] = uVar30;
          *puVar9 = uVar29;
          puVar9[3] = uVar22;
          puVar9[2] = uVar21;
          if ((*(byte *)(puVar9 + 8) & 1) == 0) {
            *(undefined1 *)(puVar9 + 8) = 1;
          }
        }
      }
      if (lStack_290 < 0) {
        __ZdlPv(puStack_2a0);
      }
      plVar16 = (long *)((long)plVar16 + 1);
      if (plVar16 == param_7) {
        plVar16 = (long *)*param_8;
        (**(code **)(*plVar16 + 600))(&puStack_2a0,plVar16,param_7);
        plVar17 = (long *)0x0;
        puStack_278 = puStack_2a0;
        puVar10 = puVar5;
        do {
          if ((puVar10[0x40] & 1) == 0) {
            puStack_2a0 = (undefined8 *)CONCAT44(puStack_2a0._4_4_,1);
          }
          else {
            FUN_10a368650(&puStack_2a0,plVar16,puVar10);
          }
          (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_278,plVar17,&puStack_2a0);
          if ((3 < (int)puStack_2a0) && (puStack_298 != (undefined8 *)0x0)) {
            (**(code **)*puStack_298)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
          puVar10 = puVar10 + 0x44;
        } while (param_7 != plVar17);
        iStack_2b8 = 7;
        puStack_2b0 = puStack_278;
        func_0x0001098968d0(param_8 + 1,&iStack_2b8);
        if ((3 < iStack_2b8) && (puStack_2b0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_2b0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b00();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca70dc:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca70e0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if ((ulong)param_7 >> 0x3d == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 3);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[4] = 0;
      puVar10 = puVar10 + 8;
    } while (puVar10 != puVar5 + (long)param_7 * 8);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_358,param_6,plVar16);
      puStack_340 = (undefined8 *)CONCAT44(uStack_354,iStack_358);
      puStack_338 = puStack_350;
      lStack_330 = lStack_348;
      uStack_328 = 0;
      func_0x000107c2b080(&puStack_340);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar7 = 8;
          if (uStack_328 <= (ulong)plVar12[7]) {
            lVar7 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar7);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_328)) {
          if (*(short *)(plVar11[8] + 0x20) != 2) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca73a0;
          }
          *(undefined4 *)(puVar5 + (long)plVar16 * 8) = *(undefined4 *)(plVar11[8] + 0x24);
          *(undefined1 *)((long)(puVar5 + (long)plVar16 * 8) + 4) = 1;
        }
      }
      if (lStack_330 < 0) {
        __ZdlPv(puStack_340);
      }
      plVar16 = (long *)((long)plVar16 + 1);
      if (plVar16 == param_7) {
        plVar16 = (long *)*param_8;
        (**(code **)(*plVar16 + 600))(&puStack_340,plVar16,param_7);
        plVar17 = (long *)0x0;
        puStack_318 = puStack_340;
        pcVar18 = puVar5 + 4;
        do {
          if (*pcVar18 == '\x01') {
            puStack_338 = (undefined8 *)(double)*(int *)(pcVar18 + -4);
            uVar23 = 3;
          }
          else {
            uVar23 = 1;
          }
          puStack_340 = (undefined8 *)CONCAT44(puStack_340._4_4_,uVar23);
          (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_318,plVar17,&puStack_340);
          if ((3 < (int)puStack_340) && (puStack_338 != (undefined8 *)0x0)) {
            (**(code **)*puStack_338)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
          pcVar18 = pcVar18 + 8;
        } while (param_7 != plVar17);
        iStack_358 = 7;
        puStack_350 = puStack_318;
        func_0x0001098968d0(param_8 + 1,&iStack_358);
        if ((3 < iStack_358) && (puStack_350 != (undefined8 *)0x0)) {
          (**(code **)*puStack_350)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b14();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca73a0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca73a4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  lVar7 = param_5 + -0x18;
  FUN_10a0d09b4(auStack_400);
  plVar17 = (long *)(param_5 + 0x178);
  plVar11 = *(long **)(param_5 + 0x178);
  plVar16 = plVar17;
  if (plVar11 != (long *)0x0) {
    do {
      lVar6 = 8;
      if (uStack_3e8 <= (ulong)plVar11[7]) {
        lVar6 = 0;
        plVar16 = plVar11;
      }
      plVar11 = *(long **)((long)plVar11 + lVar6);
    } while (plVar11 != (long *)0x0);
    if ((plVar16 != plVar17) && ((ulong)plVar16[7] <= uStack_3e8)) {
      lVar7 = plVar16[8];
      switch(*(undefined2 *)(lVar7 + 0x20)) {
      case 1:
        uStack_440 = (undefined8 *)CONCAT71(uStack_440._1_7_,*(undefined1 *)(lVar7 + 0x24));
        FUN_10a351b5c(param_7,&uStack_440);
        break;
      case 2:
        uStack_440 = (undefined8 *)CONCAT44(uStack_440._4_4_,*(undefined4 *)(lVar7 + 0x24));
        func_0x00010a368134(param_7,&uStack_440);
        break;
      case 3:
        uStack_440 = (undefined8 *)CONCAT44(uStack_440._4_4_,*(undefined4 *)(lVar7 + 0x24));
        FUN_10a3680dc(param_7,&uStack_440);
        break;
      case 6:
        uStack_440 = (undefined8 *)CONCAT44(uStack_440._4_4_,*(undefined4 *)(lVar7 + 0x24));
        FUN_10a368728(param_7,&uStack_440);
        break;
      case 7:
        uStack_440 = *(undefined8 **)(lVar7 + 0x24);
        func_0x00010a36818c(param_7,&uStack_440);
        break;
      case 8:
        uStack_440 = *(undefined8 **)(lVar7 + 0x24);
        uStack_438 = (long *)CONCAT44(uStack_438._4_4_,*(undefined4 *)(lVar7 + 0x2c));
        func_0x00010a3681e8(param_7,&uStack_440);
        break;
      case 9:
        FUN_10a0dad84();
        uStack_440 = (undefined8 *)CONCAT44(uVar23,param_1);
        uStack_438 = (long *)CONCAT44(uVar28,uVar25);
        func_0x00010a368244(param_7,&uStack_440);
        break;
      case 10:
        uStack_438 = *(long **)(lVar7 + 0x2c);
        uStack_440 = *(undefined8 **)(lVar7 + 0x24);
        uStack_428 = *(ulong *)(lVar7 + 0x3c);
        lStack_430 = *(long *)(lVar7 + 0x34);
        uStack_420 = CONCAT44(uStack_420._4_4_,*(undefined4 *)(lVar7 + 0x44));
        FUN_10a3684c4(param_7,&uStack_440);
        break;
      case 0xb:
        uStack_438 = *(long **)(lVar7 + 0x2c);
        uStack_440 = *(undefined8 **)(lVar7 + 0x24);
        uStack_428 = *(ulong *)(lVar7 + 0x3c);
        lStack_430 = *(long *)(lVar7 + 0x34);
        uStack_418 = *(undefined8 *)(lVar7 + 0x4c);
        uStack_420 = *(undefined8 *)(lVar7 + 0x44);
        uStack_408 = *(undefined8 *)(lVar7 + 0x5c);
        uStack_410 = *(undefined8 *)(lVar7 + 0x54);
        FUN_10a3685f4(param_7,&uStack_440);
        break;
      case 0x16:
        FUN_10aca4910();
        uStack_440 = (undefined8 *)CONCAT44(uVar23,param_1);
        uStack_438 = (long *)CONCAT44(uVar28,uVar25);
        func_0x00010a3682a0(param_7,&uStack_440);
        break;
      case 0x1f:
        uStack_440 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a368780(param_7,&uStack_440);
        break;
      case 0x22:
        uStack_440 = *(undefined8 **)(lVar7 + 0x24);
        uStack_438 = (long *)CONCAT44(uStack_438._4_4_,*(undefined4 *)(lVar7 + 0x2c));
        FUN_10a3689a4(param_7,&uStack_440);
        break;
      case 0x23:
        uStack_438 = *(long **)(lVar7 + 0x2c);
        uStack_440 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a368bd0(param_7,&uStack_440);
        break;
      case 0x24:
        uStack_440 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a368df4(param_7,&uStack_440);
        break;
      case 0x25:
        uStack_440 = *(undefined8 **)(lVar7 + 0x24);
        uStack_438 = (long *)CONCAT44(uStack_438._4_4_,*(undefined4 *)(lVar7 + 0x2c));
        FUN_10a369018(param_7,&uStack_440);
        break;
      case 0x26:
        uStack_438 = *(long **)(lVar7 + 0x2c);
        uStack_440 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a369244(param_7,&uStack_440);
      }
      goto LAB_10aca426c;
    }
  }
  lVar6 = *(long *)(param_5 + 400);
  if (lVar6 != 0) {
    lVar14 = param_5 + 400;
    do {
      lVar1 = 8;
      if (uStack_3e8 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar14 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar14 != param_5 + 400) && (*(ulong *)(lVar14 + 0x38) <= uStack_3e8)) {
      FUN_10a1f92d8(param_7,*(long *)(lVar14 + 0x40) + 0x188);
      goto LAB_10aca426c;
    }
  }
  lVar6 = *(long *)(param_5 + 0x1c0);
  if (lVar6 != 0) {
    lVar14 = param_5 + 0x1c0;
    do {
      lVar1 = 8;
      if (uStack_3e8 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar14 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar14 != param_5 + 0x1c0) && (*(ulong *)(lVar14 + 0x38) <= uStack_3e8)) {
      uVar13 = *(ulong *)(lVar14 + 0x40);
      if (uVar13 == 0) {
        lVar6 = 0;
        lVar7 = 0;
      }
      else {
        uVar15 = 0;
        uVar19 = 0;
        do {
          FUN_10aca38a0(&iStack_458,param_6,uVar15);
          uStack_440 = (undefined8 *)CONCAT44(uStack_454,iStack_458);
          uStack_438 = plStack_450;
          lStack_430 = lStack_448;
          uStack_428 = 0;
          func_0x000107c2b080(&uStack_440);
          plVar11 = (long *)*plVar17;
          plVar16 = plVar17;
          if (plVar11 == (long *)0x0) {
LAB_10aca41d4:
            bVar3 = false;
            uVar20 = uVar19;
          }
          else {
            do {
              lVar6 = 8;
              if (uStack_428 <= (ulong)plVar11[7]) {
                lVar6 = 0;
                plVar16 = plVar11;
              }
              plVar11 = *(long **)((long)plVar11 + lVar6);
            } while (plVar11 != (long *)0x0);
            if ((plVar16 == plVar17) || (uStack_428 < (ulong)plVar16[7])) goto LAB_10aca41d4;
            bVar3 = *(ushort *)(plVar16[8] + 0x20) != 0;
            uVar20 = *(ushort *)(plVar16[8] + 0x20);
            if (!bVar3) {
              uVar20 = uVar19;
            }
          }
          if (lStack_430 < 0) {
            __ZdlPv(uStack_440);
          }
          uVar15 = uVar15 + 1;
          if (uVar15 == uVar13) {
            bVar3 = true;
          }
          uVar19 = uVar20;
        } while (!bVar3);
        if (uVar20 < 0xb) {
          if (uVar20 < 7) {
            if (uVar20 == 1) {
              FUN_10aca493c(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 2) {
              FUN_10aca7104(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 3) {
              FUN_10aca4bec(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
          else if (uVar20 < 9) {
            if (uVar20 == 7) {
              FUN_10aca4eb0(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 8) {
              FUN_10aca5194(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar20 == 9) {
              FUN_10aca546c(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 10) {
              FUN_10aca6b24(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar20 < 0x23) {
          if (uVar20 < 0x1f) {
            if (uVar20 == 0xb) {
              FUN_10aca6e14(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 0x16) {
              FUN_10aca685c(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar20 == 0x1f) {
              FUN_10aca5734(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 0x22) {
              FUN_10aca5a18(lVar7,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar20 < 0x25) {
          if (uVar20 == 0x23) {
            FUN_10aca5ce8(lVar7,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
          if (uVar20 == 0x24) {
            FUN_10aca5fc8(lVar7,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
        }
        else {
          if (uVar20 == 0x25) {
            FUN_10aca62ac(lVar7,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
          if (uVar20 == 0x26) {
            FUN_10aca657c(lVar7,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
        }
        if (uVar13 >> 0x3d != 0) {
          FUN_10acb63ac();
LAB_10aca48cc:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca48d0);
          (*pcVar2)();
        }
        lVar6 = uVar13 * 8;
        __Znwm();
        _bzero();
        lVar7 = lVar6 + uVar13 * 8;
      }
      plVar17 = (long *)*param_7;
      lVar14 = lVar7 - lVar6 >> 3;
      (**(code **)(*plVar17 + 600))(&uStack_440,plVar17,lVar14);
      apuStack_3d0[0] = uStack_440;
      if (lVar7 != lVar6) {
        lVar7 = 0;
        do {
          plVar16 = plVar17;
          (**(code **)(*plVar17 + 0x58))();
          if ((*(byte *)(plVar16 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
          plVar11 = (long *)plVar16[4];
          if (plVar11 == (long *)0x0) {
            func_0x000109899fd8(plVar16);
            plVar11 = (long *)plVar16[4];
          }
          plVar16[4] = *plVar11;
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = (long)&PTR_FUN_110c6bfc0;
          plVar12 = plVar17;
          (**(code **)(*plVar17 + 0x58))();
          plVar16 = plVar12;
          FUN_10a065534();
          if (plVar16 == (long *)0x0) {
            if ((*(byte *)(plVar12 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
            plVar16 = plVar12 + 0x1b;
          }
          uStack_440 = (undefined8 *)CONCAT44(uStack_440._4_4_,7);
          plVar4 = plVar17;
          (**(code **)(*plVar17 + 0x98))(plVar17,*plVar16);
          uStack_438 = plVar4;
          (**(code **)(*plVar17 + 0x2f8))
                    (&plStack_450,plVar17,plVar11,plVar12,&UNK_10989ba24,&uStack_440);
          iStack_458 = 7;
          if ((3 < (int)uStack_440) && (uStack_438 != (long *)0x0)) {
            (**(code **)*uStack_438)();
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,apuStack_3d0,lVar7,&iStack_458);
          if ((3 < iStack_458) && (plStack_450 != (long *)0x0)) {
            (**(code **)*plStack_450)();
          }
          lVar7 = lVar7 + 1;
        } while (lVar14 != lVar7);
      }
      aiStack_3e0[0] = 7;
      puStack_3d8 = apuStack_3d0[0];
      func_0x0001098968d0(param_7 + 1,aiStack_3e0);
      if ((3 < aiStack_3e0[0]) && (puStack_3d8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_3d8)();
      }
      if (lVar6 != 0) {
        __ZdlPv(lVar6);
      }
    }
  }
LAB_10aca426c:
  if (cStack_3e9 < '\0') {
    __ZdlPv(auStack_400[0]);
  }
  return;
}



/* Entry: 10aca685c; end: 10aca6b23;  */

void FUN_10aca685c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long *param_7,undefined8 *param_8)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *unaff_x20;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  char *pcVar18;
  ushort uVar19;
  ushort uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  int iStack_3a8;
  undefined4 uStack_3a4;
  long *plStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_380;
  ulong uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 auStack_350 [2];
  char cStack_339;
  ulong uStack_338;
  int aiStack_330 [2];
  undefined8 *puStack_328;
  undefined8 *apuStack_320 [2];
  int iStack_2a8;
  undefined4 uStack_2a4;
  undefined8 *puStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  long lStack_280;
  ulong uStack_278;
  undefined8 *puStack_268;
  int iStack_208;
  undefined4 uStack_204;
  undefined8 *puStack_200;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  long lStack_1e0;
  ulong uStack_1d8;
  undefined8 *puStack_1c8;
  int iStack_158;
  undefined4 uStack_154;
  undefined8 *puStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  ulong uStack_128;
  undefined8 *puStack_118;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 *puStack_68;
  
  uVar28 = (undefined4)param_4;
  uVar25 = (undefined4)param_3;
  uVar23 = (undefined4)param_2;
  if (param_7 < (long *)0xccccccccccccccd) {
    puVar5 = (undefined1 *)((long)param_7 * 0x14);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[0x10] = 0;
      puVar10 = puVar10 + 0x14;
    } while (puVar10 != puVar5 + (long)param_7 * 0x14);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_a8,param_6,plVar16);
      puVar8 = (undefined8 *)CONCAT44(uStack_a4,iStack_a8);
      puStack_88 = puStack_a0;
      lStack_80 = lStack_98;
      uStack_78 = 0;
      puStack_90 = puVar8;
      func_0x000107c2b080(&puStack_90);
      uVar23 = SUB84(puVar8,0);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_78 <= (ulong)plVar12[7]) {
            lVar9 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar9);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_78)) {
          FUN_10aca4910(plVar11[8]);
          puVar7 = (undefined4 *)(puVar5 + (long)plVar16 * 0x14);
          *puVar7 = uVar23;
          puVar7[1] = (int)param_2;
          puVar7[2] = (int)param_3;
          puVar7[3] = (int)param_4;
          if ((*(byte *)(puVar7 + 4) & 1) == 0) {
            *(undefined1 *)(puVar7 + 4) = 1;
          }
        }
      }
      if (lStack_80 < 0) {
        __ZdlPv(puStack_90);
      }
      plVar16 = (long *)((long)plVar16 + 1);
    } while (plVar16 != param_7);
    plVar16 = (long *)*param_8;
    (**(code **)(*plVar16 + 600))(&puStack_90,plVar16,param_7);
    plVar17 = (long *)0x0;
    puStack_68 = puStack_90;
    puVar10 = puVar5;
    do {
      if ((puVar10[0x10] & 1) == 0) {
        puStack_90 = (undefined8 *)CONCAT44(puStack_90._4_4_,1);
      }
      else {
        FUN_10a3682fc(&puStack_90,plVar16,puVar10);
      }
      (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_68,plVar17,&puStack_90);
      if ((3 < (int)puStack_90) && (puStack_88 != (undefined8 *)0x0)) {
        (**(code **)*puStack_88)();
      }
      plVar17 = (long *)((long)plVar17 + 1);
      puVar10 = puVar10 + 0x14;
    } while (param_7 != plVar17);
    iStack_a8 = 7;
    puStack_a0 = puStack_68;
    func_0x0001098968d0(param_8 + 1,&iStack_a8);
    if ((3 < iStack_a8) && (puStack_a0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_a0)();
    }
    __ZdlPv(puVar5);
    return;
  }
  func_0x00010acd4ad8();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6b00);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x666666666666667) {
    puVar5 = (undefined1 *)((long)param_7 * 0x28);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[0x24] = 0;
      puVar10 = puVar10 + 0x28;
    } while (puVar10 != puVar5 + (long)param_7 * 0x28);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_158,param_6,plVar16);
      puStack_140 = (undefined8 *)CONCAT44(uStack_154,iStack_158);
      puStack_138 = puStack_150;
      lStack_130 = lStack_148;
      uStack_128 = 0;
      func_0x000107c2b080(&puStack_140);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_128 <= (ulong)plVar12[7]) {
            lVar9 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar9);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_128)) {
          lVar9 = plVar11[8];
          if (*(short *)(lVar9 + 0x20) != 10) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6dec;
          }
          puVar8 = (undefined8 *)(puVar5 + (long)plVar16 * 0x28);
          uVar23 = *(undefined4 *)(lVar9 + 0x44);
          uVar22 = *(undefined8 *)(lVar9 + 0x3c);
          uVar21 = *(undefined8 *)(lVar9 + 0x34);
          uVar24 = *(undefined8 *)(lVar9 + 0x24);
          puVar8[1] = *(undefined8 *)(lVar9 + 0x2c);
          *puVar8 = uVar24;
          puVar8[3] = uVar22;
          puVar8[2] = uVar21;
          *(undefined4 *)(puVar8 + 4) = uVar23;
          if ((*(byte *)((long)puVar8 + 0x24) & 1) == 0) {
            *(undefined1 *)((long)puVar8 + 0x24) = 1;
          }
        }
      }
      if (lStack_130 < 0) {
        __ZdlPv(puStack_140);
      }
      plVar16 = (long *)((long)plVar16 + 1);
      if (plVar16 == param_7) {
        plVar16 = (long *)*param_8;
        (**(code **)(*plVar16 + 600))(&puStack_140,plVar16,param_7);
        plVar17 = (long *)0x0;
        puStack_118 = puStack_140;
        puVar10 = puVar5;
        do {
          if ((puVar10[0x24] & 1) == 0) {
            puStack_140 = (undefined8 *)CONCAT44(puStack_140._4_4_,1);
          }
          else {
            FUN_10a368520(&puStack_140,plVar16,puVar10);
          }
          (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_118,plVar17,&puStack_140);
          if ((3 < (int)puStack_140) && (puStack_138 != (undefined8 *)0x0)) {
            (**(code **)*puStack_138)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
          puVar10 = puVar10 + 0x28;
        } while (param_7 != plVar17);
        iStack_158 = 7;
        puStack_150 = puStack_118;
        func_0x0001098968d0(param_8 + 1,&iStack_158);
        if ((3 < iStack_158) && (puStack_150 != (undefined8 *)0x0)) {
          (**(code **)*puStack_150)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4aec();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6dec:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6df0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x3c3c3c3c3c3c3c4) {
    puVar5 = (undefined1 *)((long)param_7 * 0x44);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[0x40] = 0;
      puVar10 = puVar10 + 0x44;
    } while (puVar10 != puVar5 + (long)param_7 * 0x44);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_208,param_6,plVar16);
      puStack_1f0 = (undefined8 *)CONCAT44(uStack_204,iStack_208);
      puStack_1e8 = puStack_200;
      lStack_1e0 = lStack_1f8;
      uStack_1d8 = 0;
      func_0x000107c2b080(&puStack_1f0);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_1d8 <= (ulong)plVar12[7]) {
            lVar9 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar9);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_1d8)) {
          lVar9 = plVar11[8];
          if (*(short *)(lVar9 + 0x20) != 0xb) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca70dc;
          }
          puVar8 = (undefined8 *)(puVar5 + (long)plVar16 * 0x44);
          uVar22 = *(undefined8 *)(lVar9 + 0x3c);
          uVar21 = *(undefined8 *)(lVar9 + 0x34);
          uVar24 = *(undefined8 *)(lVar9 + 0x44);
          uVar27 = *(undefined8 *)(lVar9 + 0x5c);
          uVar26 = *(undefined8 *)(lVar9 + 0x54);
          uVar30 = *(undefined8 *)(lVar9 + 0x2c);
          uVar29 = *(undefined8 *)(lVar9 + 0x24);
          puVar8[5] = *(undefined8 *)(lVar9 + 0x4c);
          puVar8[4] = uVar24;
          puVar8[7] = uVar27;
          puVar8[6] = uVar26;
          puVar8[1] = uVar30;
          *puVar8 = uVar29;
          puVar8[3] = uVar22;
          puVar8[2] = uVar21;
          if ((*(byte *)(puVar8 + 8) & 1) == 0) {
            *(undefined1 *)(puVar8 + 8) = 1;
          }
        }
      }
      if (lStack_1e0 < 0) {
        __ZdlPv(puStack_1f0);
      }
      plVar16 = (long *)((long)plVar16 + 1);
      if (plVar16 == param_7) {
        plVar16 = (long *)*param_8;
        (**(code **)(*plVar16 + 600))(&puStack_1f0,plVar16,param_7);
        plVar17 = (long *)0x0;
        puStack_1c8 = puStack_1f0;
        puVar10 = puVar5;
        do {
          if ((puVar10[0x40] & 1) == 0) {
            puStack_1f0 = (undefined8 *)CONCAT44(puStack_1f0._4_4_,1);
          }
          else {
            FUN_10a368650(&puStack_1f0,plVar16,puVar10);
          }
          (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_1c8,plVar17,&puStack_1f0);
          if ((3 < (int)puStack_1f0) && (puStack_1e8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_1e8)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
          puVar10 = puVar10 + 0x44;
        } while (param_7 != plVar17);
        iStack_208 = 7;
        puStack_200 = puStack_1c8;
        func_0x0001098968d0(param_8 + 1,&iStack_208);
        if ((3 < iStack_208) && (puStack_200 != (undefined8 *)0x0)) {
          (**(code **)*puStack_200)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b00();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca70dc:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca70e0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if ((ulong)param_7 >> 0x3d == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 3);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[4] = 0;
      puVar10 = puVar10 + 8;
    } while (puVar10 != puVar5 + (long)param_7 * 8);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_2a8,param_6,plVar16);
      puStack_290 = (undefined8 *)CONCAT44(uStack_2a4,iStack_2a8);
      puStack_288 = puStack_2a0;
      lStack_280 = lStack_298;
      uStack_278 = 0;
      func_0x000107c2b080(&puStack_290);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_278 <= (ulong)plVar12[7]) {
            lVar9 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar9);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_278)) {
          if (*(short *)(plVar11[8] + 0x20) != 2) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca73a0;
          }
          *(undefined4 *)(puVar5 + (long)plVar16 * 8) = *(undefined4 *)(plVar11[8] + 0x24);
          *(undefined1 *)((long)(puVar5 + (long)plVar16 * 8) + 4) = 1;
        }
      }
      if (lStack_280 < 0) {
        __ZdlPv(puStack_290);
      }
      plVar16 = (long *)((long)plVar16 + 1);
      if (plVar16 == param_7) {
        plVar16 = (long *)*param_8;
        (**(code **)(*plVar16 + 600))(&puStack_290,plVar16,param_7);
        plVar17 = (long *)0x0;
        puStack_268 = puStack_290;
        pcVar18 = puVar5 + 4;
        do {
          if (*pcVar18 == '\x01') {
            puStack_288 = (undefined8 *)(double)*(int *)(pcVar18 + -4);
            uVar23 = 3;
          }
          else {
            uVar23 = 1;
          }
          puStack_290 = (undefined8 *)CONCAT44(puStack_290._4_4_,uVar23);
          (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_268,plVar17,&puStack_290);
          if ((3 < (int)puStack_290) && (puStack_288 != (undefined8 *)0x0)) {
            (**(code **)*puStack_288)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
          pcVar18 = pcVar18 + 8;
        } while (param_7 != plVar17);
        iStack_2a8 = 7;
        puStack_2a0 = puStack_268;
        func_0x0001098968d0(param_8 + 1,&iStack_2a8);
        if ((3 < iStack_2a8) && (puStack_2a0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_2a0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b14();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca73a0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca73a4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  lVar9 = param_5 + -0x18;
  FUN_10a0d09b4(auStack_350);
  plVar17 = (long *)(param_5 + 0x178);
  plVar11 = *(long **)(param_5 + 0x178);
  plVar16 = plVar17;
  if (plVar11 != (long *)0x0) {
    do {
      lVar6 = 8;
      if (uStack_338 <= (ulong)plVar11[7]) {
        lVar6 = 0;
        plVar16 = plVar11;
      }
      plVar11 = *(long **)((long)plVar11 + lVar6);
    } while (plVar11 != (long *)0x0);
    if ((plVar16 != plVar17) && ((ulong)plVar16[7] <= uStack_338)) {
      lVar9 = plVar16[8];
      switch(*(undefined2 *)(lVar9 + 0x20)) {
      case 1:
        uStack_390 = (undefined8 *)CONCAT71(uStack_390._1_7_,*(undefined1 *)(lVar9 + 0x24));
        FUN_10a351b5c(param_7,&uStack_390);
        break;
      case 2:
        uStack_390 = (undefined8 *)CONCAT44(uStack_390._4_4_,*(undefined4 *)(lVar9 + 0x24));
        func_0x00010a368134(param_7,&uStack_390);
        break;
      case 3:
        uStack_390 = (undefined8 *)CONCAT44(uStack_390._4_4_,*(undefined4 *)(lVar9 + 0x24));
        FUN_10a3680dc(param_7,&uStack_390);
        break;
      case 6:
        uStack_390 = (undefined8 *)CONCAT44(uStack_390._4_4_,*(undefined4 *)(lVar9 + 0x24));
        FUN_10a368728(param_7,&uStack_390);
        break;
      case 7:
        uStack_390 = *(undefined8 **)(lVar9 + 0x24);
        func_0x00010a36818c(param_7,&uStack_390);
        break;
      case 8:
        uStack_390 = *(undefined8 **)(lVar9 + 0x24);
        uStack_388 = (long *)CONCAT44(uStack_388._4_4_,*(undefined4 *)(lVar9 + 0x2c));
        func_0x00010a3681e8(param_7,&uStack_390);
        break;
      case 9:
        FUN_10a0dad84();
        uStack_390 = (undefined8 *)CONCAT44(uVar23,param_1);
        uStack_388 = (long *)CONCAT44(uVar28,uVar25);
        func_0x00010a368244(param_7,&uStack_390);
        break;
      case 10:
        uStack_388 = *(long **)(lVar9 + 0x2c);
        uStack_390 = *(undefined8 **)(lVar9 + 0x24);
        uStack_378 = *(ulong *)(lVar9 + 0x3c);
        lStack_380 = *(long *)(lVar9 + 0x34);
        uStack_370 = CONCAT44(uStack_370._4_4_,*(undefined4 *)(lVar9 + 0x44));
        FUN_10a3684c4(param_7,&uStack_390);
        break;
      case 0xb:
        uStack_388 = *(long **)(lVar9 + 0x2c);
        uStack_390 = *(undefined8 **)(lVar9 + 0x24);
        uStack_378 = *(ulong *)(lVar9 + 0x3c);
        lStack_380 = *(long *)(lVar9 + 0x34);
        uStack_368 = *(undefined8 *)(lVar9 + 0x4c);
        uStack_370 = *(undefined8 *)(lVar9 + 0x44);
        uStack_358 = *(undefined8 *)(lVar9 + 0x5c);
        uStack_360 = *(undefined8 *)(lVar9 + 0x54);
        FUN_10a3685f4(param_7,&uStack_390);
        break;
      case 0x16:
        FUN_10aca4910();
        uStack_390 = (undefined8 *)CONCAT44(uVar23,param_1);
        uStack_388 = (long *)CONCAT44(uVar28,uVar25);
        func_0x00010a3682a0(param_7,&uStack_390);
        break;
      case 0x1f:
        uStack_390 = *(undefined8 **)(lVar9 + 0x24);
        FUN_10a368780(param_7,&uStack_390);
        break;
      case 0x22:
        uStack_390 = *(undefined8 **)(lVar9 + 0x24);
        uStack_388 = (long *)CONCAT44(uStack_388._4_4_,*(undefined4 *)(lVar9 + 0x2c));
        FUN_10a3689a4(param_7,&uStack_390);
        break;
      case 0x23:
        uStack_388 = *(long **)(lVar9 + 0x2c);
        uStack_390 = *(undefined8 **)(lVar9 + 0x24);
        FUN_10a368bd0(param_7,&uStack_390);
        break;
      case 0x24:
        uStack_390 = *(undefined8 **)(lVar9 + 0x24);
        FUN_10a368df4(param_7,&uStack_390);
        break;
      case 0x25:
        uStack_390 = *(undefined8 **)(lVar9 + 0x24);
        uStack_388 = (long *)CONCAT44(uStack_388._4_4_,*(undefined4 *)(lVar9 + 0x2c));
        FUN_10a369018(param_7,&uStack_390);
        break;
      case 0x26:
        uStack_388 = *(long **)(lVar9 + 0x2c);
        uStack_390 = *(undefined8 **)(lVar9 + 0x24);
        FUN_10a369244(param_7,&uStack_390);
      }
      goto LAB_10aca426c;
    }
  }
  lVar6 = *(long *)(param_5 + 400);
  if (lVar6 != 0) {
    lVar14 = param_5 + 400;
    do {
      lVar1 = 8;
      if (uStack_338 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar14 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar14 != param_5 + 400) && (*(ulong *)(lVar14 + 0x38) <= uStack_338)) {
      FUN_10a1f92d8(param_7,*(long *)(lVar14 + 0x40) + 0x188);
      goto LAB_10aca426c;
    }
  }
  lVar6 = *(long *)(param_5 + 0x1c0);
  if (lVar6 != 0) {
    lVar14 = param_5 + 0x1c0;
    do {
      lVar1 = 8;
      if (uStack_338 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar14 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar14 != param_5 + 0x1c0) && (*(ulong *)(lVar14 + 0x38) <= uStack_338)) {
      uVar13 = *(ulong *)(lVar14 + 0x40);
      if (uVar13 == 0) {
        lVar6 = 0;
        lVar9 = 0;
      }
      else {
        uVar15 = 0;
        uVar19 = 0;
        do {
          FUN_10aca38a0(&iStack_3a8,param_6,uVar15);
          uStack_390 = (undefined8 *)CONCAT44(uStack_3a4,iStack_3a8);
          uStack_388 = plStack_3a0;
          lStack_380 = lStack_398;
          uStack_378 = 0;
          func_0x000107c2b080(&uStack_390);
          plVar11 = (long *)*plVar17;
          plVar16 = plVar17;
          if (plVar11 == (long *)0x0) {
LAB_10aca41d4:
            bVar3 = false;
            uVar20 = uVar19;
          }
          else {
            do {
              lVar6 = 8;
              if (uStack_378 <= (ulong)plVar11[7]) {
                lVar6 = 0;
                plVar16 = plVar11;
              }
              plVar11 = *(long **)((long)plVar11 + lVar6);
            } while (plVar11 != (long *)0x0);
            if ((plVar16 == plVar17) || (uStack_378 < (ulong)plVar16[7])) goto LAB_10aca41d4;
            bVar3 = *(ushort *)(plVar16[8] + 0x20) != 0;
            uVar20 = *(ushort *)(plVar16[8] + 0x20);
            if (!bVar3) {
              uVar20 = uVar19;
            }
          }
          if (lStack_380 < 0) {
            __ZdlPv(uStack_390);
          }
          uVar15 = uVar15 + 1;
          if (uVar15 == uVar13) {
            bVar3 = true;
          }
          uVar19 = uVar20;
        } while (!bVar3);
        if (uVar20 < 0xb) {
          if (uVar20 < 7) {
            if (uVar20 == 1) {
              FUN_10aca493c(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 2) {
              FUN_10aca7104(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 3) {
              FUN_10aca4bec(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
          else if (uVar20 < 9) {
            if (uVar20 == 7) {
              FUN_10aca4eb0(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 8) {
              FUN_10aca5194(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar20 == 9) {
              FUN_10aca546c(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 10) {
              FUN_10aca6b24(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar20 < 0x23) {
          if (uVar20 < 0x1f) {
            if (uVar20 == 0xb) {
              FUN_10aca6e14(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 0x16) {
              FUN_10aca685c(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar20 == 0x1f) {
              FUN_10aca5734(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 0x22) {
              FUN_10aca5a18(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar20 < 0x25) {
          if (uVar20 == 0x23) {
            FUN_10aca5ce8(lVar9,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
          if (uVar20 == 0x24) {
            FUN_10aca5fc8(lVar9,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
        }
        else {
          if (uVar20 == 0x25) {
            FUN_10aca62ac(lVar9,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
          if (uVar20 == 0x26) {
            FUN_10aca657c(lVar9,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
        }
        if (uVar13 >> 0x3d != 0) {
          FUN_10acb63ac();
LAB_10aca48cc:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca48d0);
          (*pcVar2)();
        }
        lVar6 = uVar13 * 8;
        __Znwm();
        _bzero();
        lVar9 = lVar6 + uVar13 * 8;
      }
      plVar17 = (long *)*param_7;
      lVar14 = lVar9 - lVar6 >> 3;
      (**(code **)(*plVar17 + 600))(&uStack_390,plVar17,lVar14);
      apuStack_320[0] = uStack_390;
      if (lVar9 != lVar6) {
        lVar9 = 0;
        do {
          plVar16 = plVar17;
          (**(code **)(*plVar17 + 0x58))();
          if ((*(byte *)(plVar16 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
          plVar11 = (long *)plVar16[4];
          if (plVar11 == (long *)0x0) {
            func_0x000109899fd8(plVar16);
            plVar11 = (long *)plVar16[4];
          }
          plVar16[4] = *plVar11;
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = (long)&PTR_FUN_110c6bfc0;
          plVar12 = plVar17;
          (**(code **)(*plVar17 + 0x58))();
          plVar16 = plVar12;
          FUN_10a065534();
          if (plVar16 == (long *)0x0) {
            if ((*(byte *)(plVar12 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
            plVar16 = plVar12 + 0x1b;
          }
          uStack_390 = (undefined8 *)CONCAT44(uStack_390._4_4_,7);
          plVar4 = plVar17;
          (**(code **)(*plVar17 + 0x98))(plVar17,*plVar16);
          uStack_388 = plVar4;
          (**(code **)(*plVar17 + 0x2f8))
                    (&plStack_3a0,plVar17,plVar11,plVar12,&UNK_10989ba24,&uStack_390);
          iStack_3a8 = 7;
          if ((3 < (int)uStack_390) && (uStack_388 != (long *)0x0)) {
            (**(code **)*uStack_388)();
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,apuStack_320,lVar9,&iStack_3a8);
          if ((3 < iStack_3a8) && (plStack_3a0 != (long *)0x0)) {
            (**(code **)*plStack_3a0)();
          }
          lVar9 = lVar9 + 1;
        } while (lVar14 != lVar9);
      }
      aiStack_330[0] = 7;
      puStack_328 = apuStack_320[0];
      func_0x0001098968d0(param_7 + 1,aiStack_330);
      if ((3 < aiStack_330[0]) && (puStack_328 != (undefined8 *)0x0)) {
        (**(code **)*puStack_328)();
      }
      if (lVar6 != 0) {
        __ZdlPv(lVar6);
      }
    }
  }
LAB_10aca426c:
  if (cStack_339 < '\0') {
    __ZdlPv(auStack_350[0]);
  }
  return;
}



/* Entry: 10aca6b24; end: 10aca6e13;  */

void FUN_10aca6b24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,long *param_7,undefined8 *param_8)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *unaff_x20;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  char *pcVar18;
  ushort uVar19;
  ushort uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  int iStack_2f8;
  undefined4 uStack_2f4;
  long *plStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  ulong uStack_288;
  int aiStack_280 [2];
  undefined8 *puStack_278;
  undefined8 *apuStack_270 [2];
  int iStack_1f8;
  undefined4 uStack_1f4;
  undefined8 *puStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  undefined8 *puStack_1b8;
  int iStack_158;
  undefined4 uStack_154;
  undefined8 *puStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  ulong uStack_128;
  undefined8 *puStack_118;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 *puStack_68;
  
  if (param_7 < (long *)0x666666666666667) {
    puVar5 = (undefined1 *)((long)param_7 * 0x28);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[0x24] = 0;
      puVar10 = puVar10 + 0x28;
    } while (puVar10 != puVar5 + (long)param_7 * 0x28);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_a8,param_6,plVar16);
      puStack_90 = (undefined8 *)CONCAT44(uStack_a4,iStack_a8);
      puStack_88 = puStack_a0;
      lStack_80 = lStack_98;
      uStack_78 = 0;
      func_0x000107c2b080(&puStack_90);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_78 <= (ulong)plVar12[7]) {
            lVar9 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar9);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_78)) {
          lVar9 = plVar11[8];
          if (*(short *)(lVar9 + 0x20) != 10) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca6dec;
          }
          puVar8 = (undefined8 *)(puVar5 + (long)plVar16 * 0x28);
          uVar6 = *(undefined4 *)(lVar9 + 0x44);
          uVar22 = *(undefined8 *)(lVar9 + 0x3c);
          uVar21 = *(undefined8 *)(lVar9 + 0x34);
          uVar23 = *(undefined8 *)(lVar9 + 0x24);
          puVar8[1] = *(undefined8 *)(lVar9 + 0x2c);
          *puVar8 = uVar23;
          puVar8[3] = uVar22;
          puVar8[2] = uVar21;
          *(undefined4 *)(puVar8 + 4) = uVar6;
          if ((*(byte *)((long)puVar8 + 0x24) & 1) == 0) {
            *(undefined1 *)((long)puVar8 + 0x24) = 1;
          }
        }
      }
      if (lStack_80 < 0) {
        __ZdlPv(puStack_90);
      }
      plVar16 = (long *)((long)plVar16 + 1);
      if (plVar16 == param_7) {
        plVar16 = (long *)*param_8;
        (**(code **)(*plVar16 + 600))(&puStack_90,plVar16,param_7);
        plVar17 = (long *)0x0;
        puStack_68 = puStack_90;
        puVar10 = puVar5;
        do {
          if ((puVar10[0x24] & 1) == 0) {
            puStack_90 = (undefined8 *)CONCAT44(puStack_90._4_4_,1);
          }
          else {
            FUN_10a368520(&puStack_90,plVar16,puVar10);
          }
          (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_68,plVar17,&puStack_90);
          if ((3 < (int)puStack_90) && (puStack_88 != (undefined8 *)0x0)) {
            (**(code **)*puStack_88)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
          puVar10 = puVar10 + 0x28;
        } while (param_7 != plVar17);
        iStack_a8 = 7;
        puStack_a0 = puStack_68;
        func_0x0001098968d0(param_8 + 1,&iStack_a8);
        if ((3 < iStack_a8) && (puStack_a0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_a0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4aec();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca6dec:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca6df0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if (param_7 < (long *)0x3c3c3c3c3c3c3c4) {
    puVar5 = (undefined1 *)((long)param_7 * 0x44);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[0x40] = 0;
      puVar10 = puVar10 + 0x44;
    } while (puVar10 != puVar5 + (long)param_7 * 0x44);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_158,param_6,plVar16);
      puStack_140 = (undefined8 *)CONCAT44(uStack_154,iStack_158);
      puStack_138 = puStack_150;
      lStack_130 = lStack_148;
      uStack_128 = 0;
      func_0x000107c2b080(&puStack_140);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_128 <= (ulong)plVar12[7]) {
            lVar9 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar9);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_128)) {
          lVar9 = plVar11[8];
          if (*(short *)(lVar9 + 0x20) != 0xb) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca70dc;
          }
          puVar8 = (undefined8 *)(puVar5 + (long)plVar16 * 0x44);
          uVar22 = *(undefined8 *)(lVar9 + 0x3c);
          uVar21 = *(undefined8 *)(lVar9 + 0x34);
          uVar23 = *(undefined8 *)(lVar9 + 0x44);
          uVar25 = *(undefined8 *)(lVar9 + 0x5c);
          uVar24 = *(undefined8 *)(lVar9 + 0x54);
          uVar27 = *(undefined8 *)(lVar9 + 0x2c);
          uVar26 = *(undefined8 *)(lVar9 + 0x24);
          puVar8[5] = *(undefined8 *)(lVar9 + 0x4c);
          puVar8[4] = uVar23;
          puVar8[7] = uVar25;
          puVar8[6] = uVar24;
          puVar8[1] = uVar27;
          *puVar8 = uVar26;
          puVar8[3] = uVar22;
          puVar8[2] = uVar21;
          if ((*(byte *)(puVar8 + 8) & 1) == 0) {
            *(undefined1 *)(puVar8 + 8) = 1;
          }
        }
      }
      if (lStack_130 < 0) {
        __ZdlPv(puStack_140);
      }
      plVar16 = (long *)((long)plVar16 + 1);
      if (plVar16 == param_7) {
        plVar16 = (long *)*param_8;
        (**(code **)(*plVar16 + 600))(&puStack_140,plVar16,param_7);
        plVar17 = (long *)0x0;
        puStack_118 = puStack_140;
        puVar10 = puVar5;
        do {
          if ((puVar10[0x40] & 1) == 0) {
            puStack_140 = (undefined8 *)CONCAT44(puStack_140._4_4_,1);
          }
          else {
            FUN_10a368650(&puStack_140,plVar16,puVar10);
          }
          (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_118,plVar17,&puStack_140);
          if ((3 < (int)puStack_140) && (puStack_138 != (undefined8 *)0x0)) {
            (**(code **)*puStack_138)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
          puVar10 = puVar10 + 0x44;
        } while (param_7 != plVar17);
        iStack_158 = 7;
        puStack_150 = puStack_118;
        func_0x0001098968d0(param_8 + 1,&iStack_158);
        if ((3 < iStack_158) && (puStack_150 != (undefined8 *)0x0)) {
          (**(code **)*puStack_150)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b00();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca70dc:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca70e0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if ((ulong)param_7 >> 0x3d == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 3);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[4] = 0;
      puVar10 = puVar10 + 8;
    } while (puVar10 != puVar5 + (long)param_7 * 8);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_1f8,param_6,plVar16);
      puStack_1e0 = (undefined8 *)CONCAT44(uStack_1f4,iStack_1f8);
      puStack_1d8 = puStack_1f0;
      lStack_1d0 = lStack_1e8;
      uStack_1c8 = 0;
      func_0x000107c2b080(&puStack_1e0);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_1c8 <= (ulong)plVar12[7]) {
            lVar9 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar9);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_1c8)) {
          if (*(short *)(plVar11[8] + 0x20) != 2) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca73a0;
          }
          *(undefined4 *)(puVar5 + (long)plVar16 * 8) = *(undefined4 *)(plVar11[8] + 0x24);
          *(undefined1 *)((long)(puVar5 + (long)plVar16 * 8) + 4) = 1;
        }
      }
      if (lStack_1d0 < 0) {
        __ZdlPv(puStack_1e0);
      }
      plVar16 = (long *)((long)plVar16 + 1);
      if (plVar16 == param_7) {
        plVar16 = (long *)*param_8;
        (**(code **)(*plVar16 + 600))(&puStack_1e0,plVar16,param_7);
        plVar17 = (long *)0x0;
        puStack_1b8 = puStack_1e0;
        pcVar18 = puVar5 + 4;
        do {
          if (*pcVar18 == '\x01') {
            puStack_1d8 = (undefined8 *)(double)*(int *)(pcVar18 + -4);
            uVar6 = 3;
          }
          else {
            uVar6 = 1;
          }
          puStack_1e0 = (undefined8 *)CONCAT44(puStack_1e0._4_4_,uVar6);
          (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_1b8,plVar17,&puStack_1e0);
          if ((3 < (int)puStack_1e0) && (puStack_1d8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_1d8)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
          pcVar18 = pcVar18 + 8;
        } while (param_7 != plVar17);
        iStack_1f8 = 7;
        puStack_1f0 = puStack_1b8;
        func_0x0001098968d0(param_8 + 1,&iStack_1f8);
        if ((3 < iStack_1f8) && (puStack_1f0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_1f0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b14();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca73a0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca73a4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  lVar9 = param_5 + -0x18;
  FUN_10a0d09b4(auStack_2a0);
  plVar17 = (long *)(param_5 + 0x178);
  plVar11 = *(long **)(param_5 + 0x178);
  plVar16 = plVar17;
  if (plVar11 != (long *)0x0) {
    do {
      lVar7 = 8;
      if (uStack_288 <= (ulong)plVar11[7]) {
        lVar7 = 0;
        plVar16 = plVar11;
      }
      plVar11 = *(long **)((long)plVar11 + lVar7);
    } while (plVar11 != (long *)0x0);
    if ((plVar16 != plVar17) && ((ulong)plVar16[7] <= uStack_288)) {
      lVar9 = plVar16[8];
      switch(*(undefined2 *)(lVar9 + 0x20)) {
      case 1:
        uStack_2e0 = (undefined8 *)CONCAT71(uStack_2e0._1_7_,*(undefined1 *)(lVar9 + 0x24));
        FUN_10a351b5c(param_7,&uStack_2e0);
        break;
      case 2:
        uStack_2e0 = (undefined8 *)CONCAT44(uStack_2e0._4_4_,*(undefined4 *)(lVar9 + 0x24));
        func_0x00010a368134(param_7,&uStack_2e0);
        break;
      case 3:
        uStack_2e0 = (undefined8 *)CONCAT44(uStack_2e0._4_4_,*(undefined4 *)(lVar9 + 0x24));
        FUN_10a3680dc(param_7,&uStack_2e0);
        break;
      case 6:
        uStack_2e0 = (undefined8 *)CONCAT44(uStack_2e0._4_4_,*(undefined4 *)(lVar9 + 0x24));
        FUN_10a368728(param_7,&uStack_2e0);
        break;
      case 7:
        uStack_2e0 = *(undefined8 **)(lVar9 + 0x24);
        func_0x00010a36818c(param_7,&uStack_2e0);
        break;
      case 8:
        uStack_2e0 = *(undefined8 **)(lVar9 + 0x24);
        uStack_2d8 = (long *)CONCAT44(uStack_2d8._4_4_,*(undefined4 *)(lVar9 + 0x2c));
        func_0x00010a3681e8(param_7,&uStack_2e0);
        break;
      case 9:
        FUN_10a0dad84();
        uStack_2e0 = (undefined8 *)CONCAT44(param_2,param_1);
        uStack_2d8 = (long *)CONCAT44(param_4,param_3);
        func_0x00010a368244(param_7,&uStack_2e0);
        break;
      case 10:
        uStack_2d8 = *(long **)(lVar9 + 0x2c);
        uStack_2e0 = *(undefined8 **)(lVar9 + 0x24);
        uStack_2c8 = *(ulong *)(lVar9 + 0x3c);
        lStack_2d0 = *(long *)(lVar9 + 0x34);
        uStack_2c0 = CONCAT44(uStack_2c0._4_4_,*(undefined4 *)(lVar9 + 0x44));
        FUN_10a3684c4(param_7,&uStack_2e0);
        break;
      case 0xb:
        uStack_2d8 = *(long **)(lVar9 + 0x2c);
        uStack_2e0 = *(undefined8 **)(lVar9 + 0x24);
        uStack_2c8 = *(ulong *)(lVar9 + 0x3c);
        lStack_2d0 = *(long *)(lVar9 + 0x34);
        uStack_2b8 = *(undefined8 *)(lVar9 + 0x4c);
        uStack_2c0 = *(undefined8 *)(lVar9 + 0x44);
        uStack_2a8 = *(undefined8 *)(lVar9 + 0x5c);
        uStack_2b0 = *(undefined8 *)(lVar9 + 0x54);
        FUN_10a3685f4(param_7,&uStack_2e0);
        break;
      case 0x16:
        FUN_10aca4910();
        uStack_2e0 = (undefined8 *)CONCAT44(param_2,param_1);
        uStack_2d8 = (long *)CONCAT44(param_4,param_3);
        func_0x00010a3682a0(param_7,&uStack_2e0);
        break;
      case 0x1f:
        uStack_2e0 = *(undefined8 **)(lVar9 + 0x24);
        FUN_10a368780(param_7,&uStack_2e0);
        break;
      case 0x22:
        uStack_2e0 = *(undefined8 **)(lVar9 + 0x24);
        uStack_2d8 = (long *)CONCAT44(uStack_2d8._4_4_,*(undefined4 *)(lVar9 + 0x2c));
        FUN_10a3689a4(param_7,&uStack_2e0);
        break;
      case 0x23:
        uStack_2d8 = *(long **)(lVar9 + 0x2c);
        uStack_2e0 = *(undefined8 **)(lVar9 + 0x24);
        FUN_10a368bd0(param_7,&uStack_2e0);
        break;
      case 0x24:
        uStack_2e0 = *(undefined8 **)(lVar9 + 0x24);
        FUN_10a368df4(param_7,&uStack_2e0);
        break;
      case 0x25:
        uStack_2e0 = *(undefined8 **)(lVar9 + 0x24);
        uStack_2d8 = (long *)CONCAT44(uStack_2d8._4_4_,*(undefined4 *)(lVar9 + 0x2c));
        FUN_10a369018(param_7,&uStack_2e0);
        break;
      case 0x26:
        uStack_2d8 = *(long **)(lVar9 + 0x2c);
        uStack_2e0 = *(undefined8 **)(lVar9 + 0x24);
        FUN_10a369244(param_7,&uStack_2e0);
      }
      goto LAB_10aca426c;
    }
  }
  lVar7 = *(long *)(param_5 + 400);
  if (lVar7 != 0) {
    lVar14 = param_5 + 400;
    do {
      lVar1 = 8;
      if (uStack_288 <= *(ulong *)(lVar7 + 0x38)) {
        lVar1 = 0;
        lVar14 = lVar7;
      }
      lVar7 = *(long *)(lVar7 + lVar1);
    } while (lVar7 != 0);
    if ((lVar14 != param_5 + 400) && (*(ulong *)(lVar14 + 0x38) <= uStack_288)) {
      FUN_10a1f92d8(param_7,*(long *)(lVar14 + 0x40) + 0x188);
      goto LAB_10aca426c;
    }
  }
  lVar7 = *(long *)(param_5 + 0x1c0);
  if (lVar7 != 0) {
    lVar14 = param_5 + 0x1c0;
    do {
      lVar1 = 8;
      if (uStack_288 <= *(ulong *)(lVar7 + 0x38)) {
        lVar1 = 0;
        lVar14 = lVar7;
      }
      lVar7 = *(long *)(lVar7 + lVar1);
    } while (lVar7 != 0);
    if ((lVar14 != param_5 + 0x1c0) && (*(ulong *)(lVar14 + 0x38) <= uStack_288)) {
      uVar13 = *(ulong *)(lVar14 + 0x40);
      if (uVar13 == 0) {
        lVar7 = 0;
        lVar9 = 0;
      }
      else {
        uVar15 = 0;
        uVar19 = 0;
        do {
          FUN_10aca38a0(&iStack_2f8,param_6,uVar15);
          uStack_2e0 = (undefined8 *)CONCAT44(uStack_2f4,iStack_2f8);
          uStack_2d8 = plStack_2f0;
          lStack_2d0 = lStack_2e8;
          uStack_2c8 = 0;
          func_0x000107c2b080(&uStack_2e0);
          plVar11 = (long *)*plVar17;
          plVar16 = plVar17;
          if (plVar11 == (long *)0x0) {
LAB_10aca41d4:
            bVar3 = false;
            uVar20 = uVar19;
          }
          else {
            do {
              lVar7 = 8;
              if (uStack_2c8 <= (ulong)plVar11[7]) {
                lVar7 = 0;
                plVar16 = plVar11;
              }
              plVar11 = *(long **)((long)plVar11 + lVar7);
            } while (plVar11 != (long *)0x0);
            if ((plVar16 == plVar17) || (uStack_2c8 < (ulong)plVar16[7])) goto LAB_10aca41d4;
            bVar3 = *(ushort *)(plVar16[8] + 0x20) != 0;
            uVar20 = *(ushort *)(plVar16[8] + 0x20);
            if (!bVar3) {
              uVar20 = uVar19;
            }
          }
          if (lStack_2d0 < 0) {
            __ZdlPv(uStack_2e0);
          }
          uVar15 = uVar15 + 1;
          if (uVar15 == uVar13) {
            bVar3 = true;
          }
          uVar19 = uVar20;
        } while (!bVar3);
        if (uVar20 < 0xb) {
          if (uVar20 < 7) {
            if (uVar20 == 1) {
              FUN_10aca493c(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 2) {
              FUN_10aca7104(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 3) {
              FUN_10aca4bec(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
          else if (uVar20 < 9) {
            if (uVar20 == 7) {
              FUN_10aca4eb0(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 8) {
              FUN_10aca5194(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar20 == 9) {
              FUN_10aca546c(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 10) {
              FUN_10aca6b24(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar20 < 0x23) {
          if (uVar20 < 0x1f) {
            if (uVar20 == 0xb) {
              FUN_10aca6e14(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 0x16) {
              FUN_10aca685c(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar20 == 0x1f) {
              FUN_10aca5734(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 0x22) {
              FUN_10aca5a18(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar20 < 0x25) {
          if (uVar20 == 0x23) {
            FUN_10aca5ce8(lVar9,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
          if (uVar20 == 0x24) {
            FUN_10aca5fc8(lVar9,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
        }
        else {
          if (uVar20 == 0x25) {
            FUN_10aca62ac(lVar9,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
          if (uVar20 == 0x26) {
            FUN_10aca657c(lVar9,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
        }
        if (uVar13 >> 0x3d != 0) {
          FUN_10acb63ac();
LAB_10aca48cc:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca48d0);
          (*pcVar2)();
        }
        lVar7 = uVar13 * 8;
        __Znwm();
        _bzero();
        lVar9 = lVar7 + uVar13 * 8;
      }
      plVar17 = (long *)*param_7;
      lVar14 = lVar9 - lVar7 >> 3;
      (**(code **)(*plVar17 + 600))(&uStack_2e0,plVar17,lVar14);
      apuStack_270[0] = uStack_2e0;
      if (lVar9 != lVar7) {
        lVar9 = 0;
        do {
          plVar16 = plVar17;
          (**(code **)(*plVar17 + 0x58))();
          if ((*(byte *)(plVar16 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
          plVar11 = (long *)plVar16[4];
          if (plVar11 == (long *)0x0) {
            func_0x000109899fd8(plVar16);
            plVar11 = (long *)plVar16[4];
          }
          plVar16[4] = *plVar11;
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = (long)&PTR_FUN_110c6bfc0;
          plVar12 = plVar17;
          (**(code **)(*plVar17 + 0x58))();
          plVar16 = plVar12;
          FUN_10a065534();
          if (plVar16 == (long *)0x0) {
            if ((*(byte *)(plVar12 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
            plVar16 = plVar12 + 0x1b;
          }
          uStack_2e0 = (undefined8 *)CONCAT44(uStack_2e0._4_4_,7);
          plVar4 = plVar17;
          (**(code **)(*plVar17 + 0x98))(plVar17,*plVar16);
          uStack_2d8 = plVar4;
          (**(code **)(*plVar17 + 0x2f8))
                    (&plStack_2f0,plVar17,plVar11,plVar12,&UNK_10989ba24,&uStack_2e0);
          iStack_2f8 = 7;
          if ((3 < (int)uStack_2e0) && (uStack_2d8 != (long *)0x0)) {
            (**(code **)*uStack_2d8)();
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,apuStack_270,lVar9,&iStack_2f8);
          if ((3 < iStack_2f8) && (plStack_2f0 != (long *)0x0)) {
            (**(code **)*plStack_2f0)();
          }
          lVar9 = lVar9 + 1;
        } while (lVar14 != lVar9);
      }
      aiStack_280[0] = 7;
      puStack_278 = apuStack_270[0];
      func_0x0001098968d0(param_7 + 1,aiStack_280);
      if ((3 < aiStack_280[0]) && (puStack_278 != (undefined8 *)0x0)) {
        (**(code **)*puStack_278)();
      }
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
      }
    }
  }
LAB_10aca426c:
  if (cStack_289 < '\0') {
    __ZdlPv(auStack_2a0[0]);
  }
  return;
}



/* Entry: 10aca6e14; end: 10aca7103;  */

void FUN_10aca6e14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,long *param_7,undefined8 *param_8)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *unaff_x20;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  char *pcVar18;
  ushort uVar19;
  ushort uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  int iStack_248;
  undefined4 uStack_244;
  long *plStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  ulong uStack_1d8;
  int aiStack_1d0 [2];
  undefined8 *puStack_1c8;
  undefined8 *apuStack_1c0 [2];
  int iStack_148;
  undefined4 uStack_144;
  undefined8 *puStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined8 *puStack_108;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 *puStack_68;
  
  if (param_7 < (long *)0x3c3c3c3c3c3c3c4) {
    puVar5 = (undefined1 *)((long)param_7 * 0x44);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[0x40] = 0;
      puVar10 = puVar10 + 0x44;
    } while (puVar10 != puVar5 + (long)param_7 * 0x44);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_a8,param_6,plVar16);
      puStack_90 = (undefined8 *)CONCAT44(uStack_a4,iStack_a8);
      puStack_88 = puStack_a0;
      lStack_80 = lStack_98;
      uStack_78 = 0;
      func_0x000107c2b080(&puStack_90);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_78 <= (ulong)plVar12[7]) {
            lVar9 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar9);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_78)) {
          lVar9 = plVar11[8];
          if (*(short *)(lVar9 + 0x20) != 0xb) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca70dc;
          }
          puVar8 = (undefined8 *)(puVar5 + (long)plVar16 * 0x44);
          uVar22 = *(undefined8 *)(lVar9 + 0x3c);
          uVar21 = *(undefined8 *)(lVar9 + 0x34);
          uVar23 = *(undefined8 *)(lVar9 + 0x44);
          uVar25 = *(undefined8 *)(lVar9 + 0x5c);
          uVar24 = *(undefined8 *)(lVar9 + 0x54);
          uVar27 = *(undefined8 *)(lVar9 + 0x2c);
          uVar26 = *(undefined8 *)(lVar9 + 0x24);
          puVar8[5] = *(undefined8 *)(lVar9 + 0x4c);
          puVar8[4] = uVar23;
          puVar8[7] = uVar25;
          puVar8[6] = uVar24;
          puVar8[1] = uVar27;
          *puVar8 = uVar26;
          puVar8[3] = uVar22;
          puVar8[2] = uVar21;
          if ((*(byte *)(puVar8 + 8) & 1) == 0) {
            *(undefined1 *)(puVar8 + 8) = 1;
          }
        }
      }
      if (lStack_80 < 0) {
        __ZdlPv(puStack_90);
      }
      plVar16 = (long *)((long)plVar16 + 1);
      if (plVar16 == param_7) {
        plVar16 = (long *)*param_8;
        (**(code **)(*plVar16 + 600))(&puStack_90,plVar16,param_7);
        plVar17 = (long *)0x0;
        puStack_68 = puStack_90;
        puVar10 = puVar5;
        do {
          if ((puVar10[0x40] & 1) == 0) {
            puStack_90 = (undefined8 *)CONCAT44(puStack_90._4_4_,1);
          }
          else {
            FUN_10a368650(&puStack_90,plVar16,puVar10);
          }
          (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_68,plVar17,&puStack_90);
          if ((3 < (int)puStack_90) && (puStack_88 != (undefined8 *)0x0)) {
            (**(code **)*puStack_88)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
          puVar10 = puVar10 + 0x44;
        } while (param_7 != plVar17);
        iStack_a8 = 7;
        puStack_a0 = puStack_68;
        func_0x0001098968d0(param_8 + 1,&iStack_a8);
        if ((3 < iStack_a8) && (puStack_a0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_a0)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b00();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca70dc:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca70e0);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  if ((ulong)param_7 >> 0x3d == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 3);
    __Znwm();
    puVar10 = puVar5;
    do {
      *puVar10 = 0;
      puVar10[4] = 0;
      puVar10 = puVar10 + 8;
    } while (puVar10 != puVar5 + (long)param_7 * 8);
    plVar16 = (long *)0x0;
    plVar17 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_148,param_6,plVar16);
      puStack_130 = (undefined8 *)CONCAT44(uStack_144,iStack_148);
      puStack_128 = puStack_140;
      lStack_120 = lStack_138;
      uStack_118 = 0;
      func_0x000107c2b080(&puStack_130);
      plVar12 = (long *)*plVar17;
      plVar11 = plVar17;
      if (plVar12 != (long *)0x0) {
        do {
          lVar9 = 8;
          if (uStack_118 <= (ulong)plVar12[7]) {
            lVar9 = 0;
            plVar11 = plVar12;
          }
          plVar12 = *(long **)((long)plVar12 + lVar9);
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar17) && ((ulong)plVar11[7] <= uStack_118)) {
          if (*(short *)(plVar11[8] + 0x20) != 2) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca73a0;
          }
          *(undefined4 *)(puVar5 + (long)plVar16 * 8) = *(undefined4 *)(plVar11[8] + 0x24);
          *(undefined1 *)((long)(puVar5 + (long)plVar16 * 8) + 4) = 1;
        }
      }
      if (lStack_120 < 0) {
        __ZdlPv(puStack_130);
      }
      plVar16 = (long *)((long)plVar16 + 1);
      if (plVar16 == param_7) {
        plVar16 = (long *)*param_8;
        (**(code **)(*plVar16 + 600))(&puStack_130,plVar16,param_7);
        plVar17 = (long *)0x0;
        puStack_108 = puStack_130;
        pcVar18 = puVar5 + 4;
        do {
          if (*pcVar18 == '\x01') {
            puStack_128 = (undefined8 *)(double)*(int *)(pcVar18 + -4);
            uVar6 = 3;
          }
          else {
            uVar6 = 1;
          }
          puStack_130 = (undefined8 *)CONCAT44(puStack_130._4_4_,uVar6);
          (**(code **)(*plVar16 + 0x290))(plVar16,&puStack_108,plVar17,&puStack_130);
          if ((3 < (int)puStack_130) && (puStack_128 != (undefined8 *)0x0)) {
            (**(code **)*puStack_128)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
          pcVar18 = pcVar18 + 8;
        } while (param_7 != plVar17);
        iStack_148 = 7;
        puStack_140 = puStack_108;
        func_0x0001098968d0(param_8 + 1,&iStack_148);
        if ((3 < iStack_148) && (puStack_140 != (undefined8 *)0x0)) {
          (**(code **)*puStack_140)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b14();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca73a0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca73a4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  lVar9 = param_5 + -0x18;
  FUN_10a0d09b4(auStack_1f0);
  plVar17 = (long *)(param_5 + 0x178);
  plVar11 = *(long **)(param_5 + 0x178);
  plVar16 = plVar17;
  if (plVar11 != (long *)0x0) {
    do {
      lVar7 = 8;
      if (uStack_1d8 <= (ulong)plVar11[7]) {
        lVar7 = 0;
        plVar16 = plVar11;
      }
      plVar11 = *(long **)((long)plVar11 + lVar7);
    } while (plVar11 != (long *)0x0);
    if ((plVar16 != plVar17) && ((ulong)plVar16[7] <= uStack_1d8)) {
      lVar9 = plVar16[8];
      switch(*(undefined2 *)(lVar9 + 0x20)) {
      case 1:
        uStack_230 = (undefined8 *)CONCAT71(uStack_230._1_7_,*(undefined1 *)(lVar9 + 0x24));
        FUN_10a351b5c(param_7,&uStack_230);
        break;
      case 2:
        uStack_230 = (undefined8 *)CONCAT44(uStack_230._4_4_,*(undefined4 *)(lVar9 + 0x24));
        func_0x00010a368134(param_7,&uStack_230);
        break;
      case 3:
        uStack_230 = (undefined8 *)CONCAT44(uStack_230._4_4_,*(undefined4 *)(lVar9 + 0x24));
        FUN_10a3680dc(param_7,&uStack_230);
        break;
      case 6:
        uStack_230 = (undefined8 *)CONCAT44(uStack_230._4_4_,*(undefined4 *)(lVar9 + 0x24));
        FUN_10a368728(param_7,&uStack_230);
        break;
      case 7:
        uStack_230 = *(undefined8 **)(lVar9 + 0x24);
        func_0x00010a36818c(param_7,&uStack_230);
        break;
      case 8:
        uStack_230 = *(undefined8 **)(lVar9 + 0x24);
        uStack_228 = (long *)CONCAT44(uStack_228._4_4_,*(undefined4 *)(lVar9 + 0x2c));
        func_0x00010a3681e8(param_7,&uStack_230);
        break;
      case 9:
        FUN_10a0dad84();
        uStack_230 = (undefined8 *)CONCAT44(param_2,param_1);
        uStack_228 = (long *)CONCAT44(param_4,param_3);
        func_0x00010a368244(param_7,&uStack_230);
        break;
      case 10:
        uStack_228 = *(long **)(lVar9 + 0x2c);
        uStack_230 = *(undefined8 **)(lVar9 + 0x24);
        uStack_218 = *(ulong *)(lVar9 + 0x3c);
        lStack_220 = *(long *)(lVar9 + 0x34);
        uStack_210 = CONCAT44(uStack_210._4_4_,*(undefined4 *)(lVar9 + 0x44));
        FUN_10a3684c4(param_7,&uStack_230);
        break;
      case 0xb:
        uStack_228 = *(long **)(lVar9 + 0x2c);
        uStack_230 = *(undefined8 **)(lVar9 + 0x24);
        uStack_218 = *(ulong *)(lVar9 + 0x3c);
        lStack_220 = *(long *)(lVar9 + 0x34);
        uStack_208 = *(undefined8 *)(lVar9 + 0x4c);
        uStack_210 = *(undefined8 *)(lVar9 + 0x44);
        uStack_1f8 = *(undefined8 *)(lVar9 + 0x5c);
        uStack_200 = *(undefined8 *)(lVar9 + 0x54);
        FUN_10a3685f4(param_7,&uStack_230);
        break;
      case 0x16:
        FUN_10aca4910();
        uStack_230 = (undefined8 *)CONCAT44(param_2,param_1);
        uStack_228 = (long *)CONCAT44(param_4,param_3);
        func_0x00010a3682a0(param_7,&uStack_230);
        break;
      case 0x1f:
        uStack_230 = *(undefined8 **)(lVar9 + 0x24);
        FUN_10a368780(param_7,&uStack_230);
        break;
      case 0x22:
        uStack_230 = *(undefined8 **)(lVar9 + 0x24);
        uStack_228 = (long *)CONCAT44(uStack_228._4_4_,*(undefined4 *)(lVar9 + 0x2c));
        FUN_10a3689a4(param_7,&uStack_230);
        break;
      case 0x23:
        uStack_228 = *(long **)(lVar9 + 0x2c);
        uStack_230 = *(undefined8 **)(lVar9 + 0x24);
        FUN_10a368bd0(param_7,&uStack_230);
        break;
      case 0x24:
        uStack_230 = *(undefined8 **)(lVar9 + 0x24);
        FUN_10a368df4(param_7,&uStack_230);
        break;
      case 0x25:
        uStack_230 = *(undefined8 **)(lVar9 + 0x24);
        uStack_228 = (long *)CONCAT44(uStack_228._4_4_,*(undefined4 *)(lVar9 + 0x2c));
        FUN_10a369018(param_7,&uStack_230);
        break;
      case 0x26:
        uStack_228 = *(long **)(lVar9 + 0x2c);
        uStack_230 = *(undefined8 **)(lVar9 + 0x24);
        FUN_10a369244(param_7,&uStack_230);
      }
      goto LAB_10aca426c;
    }
  }
  lVar7 = *(long *)(param_5 + 400);
  if (lVar7 != 0) {
    lVar14 = param_5 + 400;
    do {
      lVar1 = 8;
      if (uStack_1d8 <= *(ulong *)(lVar7 + 0x38)) {
        lVar1 = 0;
        lVar14 = lVar7;
      }
      lVar7 = *(long *)(lVar7 + lVar1);
    } while (lVar7 != 0);
    if ((lVar14 != param_5 + 400) && (*(ulong *)(lVar14 + 0x38) <= uStack_1d8)) {
      FUN_10a1f92d8(param_7,*(long *)(lVar14 + 0x40) + 0x188);
      goto LAB_10aca426c;
    }
  }
  lVar7 = *(long *)(param_5 + 0x1c0);
  if (lVar7 != 0) {
    lVar14 = param_5 + 0x1c0;
    do {
      lVar1 = 8;
      if (uStack_1d8 <= *(ulong *)(lVar7 + 0x38)) {
        lVar1 = 0;
        lVar14 = lVar7;
      }
      lVar7 = *(long *)(lVar7 + lVar1);
    } while (lVar7 != 0);
    if ((lVar14 != param_5 + 0x1c0) && (*(ulong *)(lVar14 + 0x38) <= uStack_1d8)) {
      uVar13 = *(ulong *)(lVar14 + 0x40);
      if (uVar13 == 0) {
        lVar7 = 0;
        lVar9 = 0;
      }
      else {
        uVar15 = 0;
        uVar19 = 0;
        do {
          FUN_10aca38a0(&iStack_248,param_6,uVar15);
          uStack_230 = (undefined8 *)CONCAT44(uStack_244,iStack_248);
          uStack_228 = plStack_240;
          lStack_220 = lStack_238;
          uStack_218 = 0;
          func_0x000107c2b080(&uStack_230);
          plVar11 = (long *)*plVar17;
          plVar16 = plVar17;
          if (plVar11 == (long *)0x0) {
LAB_10aca41d4:
            bVar3 = false;
            uVar20 = uVar19;
          }
          else {
            do {
              lVar7 = 8;
              if (uStack_218 <= (ulong)plVar11[7]) {
                lVar7 = 0;
                plVar16 = plVar11;
              }
              plVar11 = *(long **)((long)plVar11 + lVar7);
            } while (plVar11 != (long *)0x0);
            if ((plVar16 == plVar17) || (uStack_218 < (ulong)plVar16[7])) goto LAB_10aca41d4;
            bVar3 = *(ushort *)(plVar16[8] + 0x20) != 0;
            uVar20 = *(ushort *)(plVar16[8] + 0x20);
            if (!bVar3) {
              uVar20 = uVar19;
            }
          }
          if (lStack_220 < 0) {
            __ZdlPv(uStack_230);
          }
          uVar15 = uVar15 + 1;
          if (uVar15 == uVar13) {
            bVar3 = true;
          }
          uVar19 = uVar20;
        } while (!bVar3);
        if (uVar20 < 0xb) {
          if (uVar20 < 7) {
            if (uVar20 == 1) {
              FUN_10aca493c(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 2) {
              FUN_10aca7104(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 3) {
              FUN_10aca4bec(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
          else if (uVar20 < 9) {
            if (uVar20 == 7) {
              FUN_10aca4eb0(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 8) {
              FUN_10aca5194(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar20 == 9) {
              FUN_10aca546c(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 10) {
              FUN_10aca6b24(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar20 < 0x23) {
          if (uVar20 < 0x1f) {
            if (uVar20 == 0xb) {
              FUN_10aca6e14(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 0x16) {
              FUN_10aca685c(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar20 == 0x1f) {
              FUN_10aca5734(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
            if (uVar20 == 0x22) {
              FUN_10aca5a18(lVar9,param_6,uVar13,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar20 < 0x25) {
          if (uVar20 == 0x23) {
            FUN_10aca5ce8(lVar9,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
          if (uVar20 == 0x24) {
            FUN_10aca5fc8(lVar9,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
        }
        else {
          if (uVar20 == 0x25) {
            FUN_10aca62ac(lVar9,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
          if (uVar20 == 0x26) {
            FUN_10aca657c(lVar9,param_6,uVar13,param_7);
            goto LAB_10aca426c;
          }
        }
        if (uVar13 >> 0x3d != 0) {
          FUN_10acb63ac();
LAB_10aca48cc:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca48d0);
          (*pcVar2)();
        }
        lVar7 = uVar13 * 8;
        __Znwm();
        _bzero();
        lVar9 = lVar7 + uVar13 * 8;
      }
      plVar17 = (long *)*param_7;
      lVar14 = lVar9 - lVar7 >> 3;
      (**(code **)(*plVar17 + 600))(&uStack_230,plVar17,lVar14);
      apuStack_1c0[0] = uStack_230;
      if (lVar9 != lVar7) {
        lVar9 = 0;
        do {
          plVar16 = plVar17;
          (**(code **)(*plVar17 + 0x58))();
          if ((*(byte *)(plVar16 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
          plVar11 = (long *)plVar16[4];
          if (plVar11 == (long *)0x0) {
            func_0x000109899fd8(plVar16);
            plVar11 = (long *)plVar16[4];
          }
          plVar16[4] = *plVar11;
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = (long)&PTR_FUN_110c6bfc0;
          plVar12 = plVar17;
          (**(code **)(*plVar17 + 0x58))();
          plVar16 = plVar12;
          FUN_10a065534();
          if (plVar16 == (long *)0x0) {
            if ((*(byte *)(plVar12 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
            plVar16 = plVar12 + 0x1b;
          }
          uStack_230 = (undefined8 *)CONCAT44(uStack_230._4_4_,7);
          plVar4 = plVar17;
          (**(code **)(*plVar17 + 0x98))(plVar17,*plVar16);
          uStack_228 = plVar4;
          (**(code **)(*plVar17 + 0x2f8))
                    (&plStack_240,plVar17,plVar11,plVar12,&UNK_10989ba24,&uStack_230);
          iStack_248 = 7;
          if ((3 < (int)uStack_230) && (uStack_228 != (long *)0x0)) {
            (**(code **)*uStack_228)();
          }
          (**(code **)(*plVar17 + 0x290))(plVar17,apuStack_1c0,lVar9,&iStack_248);
          if ((3 < iStack_248) && (plStack_240 != (long *)0x0)) {
            (**(code **)*plStack_240)();
          }
          lVar9 = lVar9 + 1;
        } while (lVar14 != lVar9);
      }
      aiStack_1d0[0] = 7;
      puStack_1c8 = apuStack_1c0[0];
      func_0x0001098968d0(param_7 + 1,aiStack_1d0);
      if ((3 < aiStack_1d0[0]) && (puStack_1c8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_1c8)();
      }
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
      }
    }
  }
LAB_10aca426c:
  if (cStack_1d9 < '\0') {
    __ZdlPv(auStack_1f0[0]);
  }
  return;
}



/* Entry: 10aca7104; end: 10aca73c7;  */

void FUN_10aca7104(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,long *param_7,undefined8 *param_8)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *unaff_x20;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  ushort uVar18;
  ushort uVar19;
  int iStack_198;
  undefined4 uStack_194;
  long *plStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 auStack_140 [2];
  char cStack_129;
  ulong uStack_128;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  undefined8 *apuStack_110 [2];
  int iStack_98;
  undefined4 uStack_94;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 *puStack_58;
  
  if ((ulong)param_7 >> 0x3d == 0) {
    puVar5 = (undefined1 *)((long)param_7 << 3);
    __Znwm();
    puVar9 = puVar5;
    do {
      *puVar9 = 0;
      puVar9[4] = 0;
      puVar9 = puVar9 + 8;
    } while (puVar9 != puVar5 + (long)param_7 * 8);
    plVar15 = (long *)0x0;
    plVar16 = (long *)(param_5 + 400);
    do {
      FUN_10aca38a0(&iStack_98,param_6,plVar15);
      puStack_80 = (undefined8 *)CONCAT44(uStack_94,iStack_98);
      puStack_78 = puStack_90;
      lStack_70 = lStack_88;
      uStack_68 = 0;
      func_0x000107c2b080(&puStack_80);
      plVar11 = (long *)*plVar16;
      plVar10 = plVar16;
      if (plVar11 != (long *)0x0) {
        do {
          lVar6 = 8;
          if (uStack_68 <= (ulong)plVar11[7]) {
            lVar6 = 0;
            plVar10 = plVar11;
          }
          plVar11 = *(long **)((long)plVar11 + lVar6);
        } while (plVar11 != (long *)0x0);
        if ((plVar10 != plVar16) && ((ulong)plVar10[7] <= uStack_68)) {
          if (*(short *)(plVar10[8] + 0x20) != 2) {
            FUN_10a00946c(&UNK_10f6399e9);
            goto LAB_10aca73a0;
          }
          *(undefined4 *)(puVar5 + (long)plVar15 * 8) = *(undefined4 *)(plVar10[8] + 0x24);
          *(undefined1 *)((long)(puVar5 + (long)plVar15 * 8) + 4) = 1;
        }
      }
      if (lStack_70 < 0) {
        __ZdlPv(puStack_80);
      }
      plVar15 = (long *)((long)plVar15 + 1);
      if (plVar15 == param_7) {
        plVar15 = (long *)*param_8;
        (**(code **)(*plVar15 + 600))(&puStack_80,plVar15,param_7);
        plVar16 = (long *)0x0;
        puStack_58 = puStack_80;
        pcVar17 = puVar5 + 4;
        do {
          if (*pcVar17 == '\x01') {
            puStack_78 = (undefined8 *)(double)*(int *)(pcVar17 + -4);
            uVar7 = 3;
          }
          else {
            uVar7 = 1;
          }
          puStack_80 = (undefined8 *)CONCAT44(puStack_80._4_4_,uVar7);
          (**(code **)(*plVar15 + 0x290))(plVar15,&puStack_58,plVar16,&puStack_80);
          if ((3 < (int)puStack_80) && (puStack_78 != (undefined8 *)0x0)) {
            (**(code **)*puStack_78)();
          }
          plVar16 = (long *)((long)plVar16 + 1);
          pcVar17 = pcVar17 + 8;
        } while (param_7 != plVar16);
        iStack_98 = 7;
        puStack_90 = puStack_58;
        func_0x0001098968d0(param_8 + 1,&iStack_98);
        if ((3 < iStack_98) && (puStack_90 != (undefined8 *)0x0)) {
          (**(code **)*puStack_90)();
        }
        __ZdlPv(puVar5);
        return;
      }
    } while( true );
  }
  func_0x00010acd4b14();
  if ((int)param_6 == 1) {
    ___cxa_begin_catch(param_5);
    func_0x000109896b78(*unaff_x20,param_5);
LAB_10aca73a0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca73a4);
    (*pcVar2)();
  }
  __ZdlPv();
  __Unwind_Resume();
  lVar6 = param_5 + -0x18;
  FUN_10a0d09b4(auStack_140);
  plVar16 = (long *)(param_5 + 0x178);
  plVar10 = *(long **)(param_5 + 0x178);
  plVar15 = plVar16;
  if (plVar10 != (long *)0x0) {
    do {
      lVar8 = 8;
      if (uStack_128 <= (ulong)plVar10[7]) {
        lVar8 = 0;
        plVar15 = plVar10;
      }
      plVar10 = *(long **)((long)plVar10 + lVar8);
    } while (plVar10 != (long *)0x0);
    if ((plVar15 != plVar16) && ((ulong)plVar15[7] <= uStack_128)) {
      lVar6 = plVar15[8];
      switch(*(undefined2 *)(lVar6 + 0x20)) {
      case 1:
        uStack_180 = (undefined8 *)CONCAT71(uStack_180._1_7_,*(undefined1 *)(lVar6 + 0x24));
        FUN_10a351b5c(param_7,&uStack_180);
        break;
      case 2:
        uStack_180 = (undefined8 *)CONCAT44(uStack_180._4_4_,*(undefined4 *)(lVar6 + 0x24));
        func_0x00010a368134(param_7,&uStack_180);
        break;
      case 3:
        uStack_180 = (undefined8 *)CONCAT44(uStack_180._4_4_,*(undefined4 *)(lVar6 + 0x24));
        FUN_10a3680dc(param_7,&uStack_180);
        break;
      case 6:
        uStack_180 = (undefined8 *)CONCAT44(uStack_180._4_4_,*(undefined4 *)(lVar6 + 0x24));
        FUN_10a368728(param_7,&uStack_180);
        break;
      case 7:
        uStack_180 = *(undefined8 **)(lVar6 + 0x24);
        func_0x00010a36818c(param_7,&uStack_180);
        break;
      case 8:
        uStack_180 = *(undefined8 **)(lVar6 + 0x24);
        uStack_178 = (long *)CONCAT44(uStack_178._4_4_,*(undefined4 *)(lVar6 + 0x2c));
        func_0x00010a3681e8(param_7,&uStack_180);
        break;
      case 9:
        FUN_10a0dad84();
        uStack_180 = (undefined8 *)CONCAT44(param_2,param_1);
        uStack_178 = (long *)CONCAT44(param_4,param_3);
        func_0x00010a368244(param_7,&uStack_180);
        break;
      case 10:
        uStack_178 = *(long **)(lVar6 + 0x2c);
        uStack_180 = *(undefined8 **)(lVar6 + 0x24);
        uStack_168 = *(ulong *)(lVar6 + 0x3c);
        lStack_170 = *(long *)(lVar6 + 0x34);
        uStack_160 = CONCAT44(uStack_160._4_4_,*(undefined4 *)(lVar6 + 0x44));
        FUN_10a3684c4(param_7,&uStack_180);
        break;
      case 0xb:
        uStack_178 = *(long **)(lVar6 + 0x2c);
        uStack_180 = *(undefined8 **)(lVar6 + 0x24);
        uStack_168 = *(ulong *)(lVar6 + 0x3c);
        lStack_170 = *(long *)(lVar6 + 0x34);
        uStack_158 = *(undefined8 *)(lVar6 + 0x4c);
        uStack_160 = *(undefined8 *)(lVar6 + 0x44);
        uStack_148 = *(undefined8 *)(lVar6 + 0x5c);
        uStack_150 = *(undefined8 *)(lVar6 + 0x54);
        FUN_10a3685f4(param_7,&uStack_180);
        break;
      case 0x16:
        FUN_10aca4910();
        uStack_180 = (undefined8 *)CONCAT44(param_2,param_1);
        uStack_178 = (long *)CONCAT44(param_4,param_3);
        func_0x00010a3682a0(param_7,&uStack_180);
        break;
      case 0x1f:
        uStack_180 = *(undefined8 **)(lVar6 + 0x24);
        FUN_10a368780(param_7,&uStack_180);
        break;
      case 0x22:
        uStack_180 = *(undefined8 **)(lVar6 + 0x24);
        uStack_178 = (long *)CONCAT44(uStack_178._4_4_,*(undefined4 *)(lVar6 + 0x2c));
        FUN_10a3689a4(param_7,&uStack_180);
        break;
      case 0x23:
        uStack_178 = *(long **)(lVar6 + 0x2c);
        uStack_180 = *(undefined8 **)(lVar6 + 0x24);
        FUN_10a368bd0(param_7,&uStack_180);
        break;
      case 0x24:
        uStack_180 = *(undefined8 **)(lVar6 + 0x24);
        FUN_10a368df4(param_7,&uStack_180);
        break;
      case 0x25:
        uStack_180 = *(undefined8 **)(lVar6 + 0x24);
        uStack_178 = (long *)CONCAT44(uStack_178._4_4_,*(undefined4 *)(lVar6 + 0x2c));
        FUN_10a369018(param_7,&uStack_180);
        break;
      case 0x26:
        uStack_178 = *(long **)(lVar6 + 0x2c);
        uStack_180 = *(undefined8 **)(lVar6 + 0x24);
        FUN_10a369244(param_7,&uStack_180);
      }
      goto LAB_10aca426c;
    }
  }
  lVar8 = *(long *)(param_5 + 400);
  if (lVar8 != 0) {
    lVar13 = param_5 + 400;
    do {
      lVar1 = 8;
      if (uStack_128 <= *(ulong *)(lVar8 + 0x38)) {
        lVar1 = 0;
        lVar13 = lVar8;
      }
      lVar8 = *(long *)(lVar8 + lVar1);
    } while (lVar8 != 0);
    if ((lVar13 != param_5 + 400) && (*(ulong *)(lVar13 + 0x38) <= uStack_128)) {
      FUN_10a1f92d8(param_7,*(long *)(lVar13 + 0x40) + 0x188);
      goto LAB_10aca426c;
    }
  }
  lVar8 = *(long *)(param_5 + 0x1c0);
  if (lVar8 != 0) {
    lVar13 = param_5 + 0x1c0;
    do {
      lVar1 = 8;
      if (uStack_128 <= *(ulong *)(lVar8 + 0x38)) {
        lVar1 = 0;
        lVar13 = lVar8;
      }
      lVar8 = *(long *)(lVar8 + lVar1);
    } while (lVar8 != 0);
    if ((lVar13 != param_5 + 0x1c0) && (*(ulong *)(lVar13 + 0x38) <= uStack_128)) {
      uVar12 = *(ulong *)(lVar13 + 0x40);
      if (uVar12 == 0) {
        lVar8 = 0;
        lVar6 = 0;
      }
      else {
        uVar14 = 0;
        uVar18 = 0;
        do {
          FUN_10aca38a0(&iStack_198,param_6,uVar14);
          uStack_180 = (undefined8 *)CONCAT44(uStack_194,iStack_198);
          uStack_178 = plStack_190;
          lStack_170 = lStack_188;
          uStack_168 = 0;
          func_0x000107c2b080(&uStack_180);
          plVar10 = (long *)*plVar16;
          plVar15 = plVar16;
          if (plVar10 == (long *)0x0) {
LAB_10aca41d4:
            bVar3 = false;
            uVar19 = uVar18;
          }
          else {
            do {
              lVar8 = 8;
              if (uStack_168 <= (ulong)plVar10[7]) {
                lVar8 = 0;
                plVar15 = plVar10;
              }
              plVar10 = *(long **)((long)plVar10 + lVar8);
            } while (plVar10 != (long *)0x0);
            if ((plVar15 == plVar16) || (uStack_168 < (ulong)plVar15[7])) goto LAB_10aca41d4;
            bVar3 = *(ushort *)(plVar15[8] + 0x20) != 0;
            uVar19 = *(ushort *)(plVar15[8] + 0x20);
            if (!bVar3) {
              uVar19 = uVar18;
            }
          }
          if (lStack_170 < 0) {
            __ZdlPv(uStack_180);
          }
          uVar14 = uVar14 + 1;
          if (uVar14 == uVar12) {
            bVar3 = true;
          }
          uVar18 = uVar19;
        } while (!bVar3);
        if (uVar19 < 0xb) {
          if (uVar19 < 7) {
            if (uVar19 == 1) {
              FUN_10aca493c(lVar6,param_6,uVar12,param_7);
              goto LAB_10aca426c;
            }
            if (uVar19 == 2) {
              FUN_10aca7104(lVar6,param_6,uVar12,param_7);
              goto LAB_10aca426c;
            }
            if (uVar19 == 3) {
              FUN_10aca4bec(lVar6,param_6,uVar12,param_7);
              goto LAB_10aca426c;
            }
          }
          else if (uVar19 < 9) {
            if (uVar19 == 7) {
              FUN_10aca4eb0(lVar6,param_6,uVar12,param_7);
              goto LAB_10aca426c;
            }
            if (uVar19 == 8) {
              FUN_10aca5194(lVar6,param_6,uVar12,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar19 == 9) {
              FUN_10aca546c(lVar6,param_6,uVar12,param_7);
              goto LAB_10aca426c;
            }
            if (uVar19 == 10) {
              FUN_10aca6b24(lVar6,param_6,uVar12,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar19 < 0x23) {
          if (uVar19 < 0x1f) {
            if (uVar19 == 0xb) {
              FUN_10aca6e14(lVar6,param_6,uVar12,param_7);
              goto LAB_10aca426c;
            }
            if (uVar19 == 0x16) {
              FUN_10aca685c(lVar6,param_6,uVar12,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar19 == 0x1f) {
              FUN_10aca5734(lVar6,param_6,uVar12,param_7);
              goto LAB_10aca426c;
            }
            if (uVar19 == 0x22) {
              FUN_10aca5a18(lVar6,param_6,uVar12,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar19 < 0x25) {
          if (uVar19 == 0x23) {
            FUN_10aca5ce8(lVar6,param_6,uVar12,param_7);
            goto LAB_10aca426c;
          }
          if (uVar19 == 0x24) {
            FUN_10aca5fc8(lVar6,param_6,uVar12,param_7);
            goto LAB_10aca426c;
          }
        }
        else {
          if (uVar19 == 0x25) {
            FUN_10aca62ac(lVar6,param_6,uVar12,param_7);
            goto LAB_10aca426c;
          }
          if (uVar19 == 0x26) {
            FUN_10aca657c(lVar6,param_6,uVar12,param_7);
            goto LAB_10aca426c;
          }
        }
        if (uVar12 >> 0x3d != 0) {
          FUN_10acb63ac();
LAB_10aca48cc:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca48d0);
          (*pcVar2)();
        }
        lVar8 = uVar12 * 8;
        __Znwm();
        _bzero();
        lVar6 = lVar8 + uVar12 * 8;
      }
      plVar16 = (long *)*param_7;
      lVar13 = lVar6 - lVar8 >> 3;
      (**(code **)(*plVar16 + 600))(&uStack_180,plVar16,lVar13);
      apuStack_110[0] = uStack_180;
      if (lVar6 != lVar8) {
        lVar6 = 0;
        do {
          plVar15 = plVar16;
          (**(code **)(*plVar16 + 0x58))();
          if ((*(byte *)(plVar15 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
          plVar10 = (long *)plVar15[4];
          if (plVar10 == (long *)0x0) {
            func_0x000109899fd8(plVar15);
            plVar10 = (long *)plVar15[4];
          }
          plVar15[4] = *plVar10;
          plVar10[1] = 0;
          plVar10[2] = 0;
          *plVar10 = (long)&PTR_FUN_110c6bfc0;
          plVar11 = plVar16;
          (**(code **)(*plVar16 + 0x58))();
          plVar15 = plVar11;
          FUN_10a065534();
          if (plVar15 == (long *)0x0) {
            if ((*(byte *)(plVar11 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
            plVar15 = plVar11 + 0x1b;
          }
          uStack_180 = (undefined8 *)CONCAT44(uStack_180._4_4_,7);
          plVar4 = plVar16;
          (**(code **)(*plVar16 + 0x98))(plVar16,*plVar15);
          uStack_178 = plVar4;
          (**(code **)(*plVar16 + 0x2f8))
                    (&plStack_190,plVar16,plVar10,plVar11,&UNK_10989ba24,&uStack_180);
          iStack_198 = 7;
          if ((3 < (int)uStack_180) && (uStack_178 != (long *)0x0)) {
            (**(code **)*uStack_178)();
          }
          (**(code **)(*plVar16 + 0x290))(plVar16,apuStack_110,lVar6,&iStack_198);
          if ((3 < iStack_198) && (plStack_190 != (long *)0x0)) {
            (**(code **)*plStack_190)();
          }
          lVar6 = lVar6 + 1;
        } while (lVar13 != lVar6);
      }
      aiStack_120[0] = 7;
      puStack_118 = apuStack_110[0];
      func_0x0001098968d0(param_7 + 1,aiStack_120);
      if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
        (**(code **)*puStack_118)();
      }
      if (lVar8 != 0) {
        __ZdlPv(lVar8);
      }
    }
  }
LAB_10aca426c:
  if (cStack_129 < '\0') {
    __ZdlPv(auStack_140[0]);
  }
  return;
}



/* Entry: 10aca73c8; end: 10aca73cf;  */

void FUN_10aca73c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,long *param_7)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ushort uVar14;
  ushort uVar15;
  int iStack_f8;
  undefined4 uStack_f4;
  long *plStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 auStack_a0 [2];
  char cStack_89;
  ulong uStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  lVar7 = param_5 + -0x18;
  FUN_10a0d09b4(auStack_a0);
  plVar10 = (long *)(param_5 + 0x178);
  plVar9 = *(long **)(param_5 + 0x178);
  plVar4 = plVar10;
  if (plVar9 != (long *)0x0) {
    do {
      lVar8 = 8;
      if (uStack_88 <= (ulong)plVar9[7]) {
        lVar8 = 0;
        plVar4 = plVar9;
      }
      plVar9 = *(long **)((long)plVar9 + lVar8);
    } while (plVar9 != (long *)0x0);
    if ((plVar4 != plVar10) && ((ulong)plVar4[7] <= uStack_88)) {
      lVar7 = plVar4[8];
      switch(*(undefined2 *)(lVar7 + 0x20)) {
      case 1:
        uStack_e0 = (undefined8 *)CONCAT71(uStack_e0._1_7_,*(undefined1 *)(lVar7 + 0x24));
        FUN_10a351b5c(param_7,&uStack_e0);
        break;
      case 2:
        uStack_e0 = (undefined8 *)CONCAT44(uStack_e0._4_4_,*(undefined4 *)(lVar7 + 0x24));
        func_0x00010a368134(param_7,&uStack_e0);
        break;
      case 3:
        uStack_e0 = (undefined8 *)CONCAT44(uStack_e0._4_4_,*(undefined4 *)(lVar7 + 0x24));
        FUN_10a3680dc(param_7,&uStack_e0);
        break;
      case 6:
        uStack_e0 = (undefined8 *)CONCAT44(uStack_e0._4_4_,*(undefined4 *)(lVar7 + 0x24));
        FUN_10a368728(param_7,&uStack_e0);
        break;
      case 7:
        uStack_e0 = *(undefined8 **)(lVar7 + 0x24);
        func_0x00010a36818c(param_7,&uStack_e0);
        break;
      case 8:
        uStack_e0 = *(undefined8 **)(lVar7 + 0x24);
        uStack_d8 = (long *)CONCAT44(uStack_d8._4_4_,*(undefined4 *)(lVar7 + 0x2c));
        func_0x00010a3681e8(param_7,&uStack_e0);
        break;
      case 9:
        FUN_10a0dad84();
        uStack_e0 = (undefined8 *)CONCAT44(param_2,param_1);
        uStack_d8 = (long *)CONCAT44(param_4,param_3);
        func_0x00010a368244(param_7,&uStack_e0);
        break;
      case 10:
        uStack_d8 = *(long **)(lVar7 + 0x2c);
        uStack_e0 = *(undefined8 **)(lVar7 + 0x24);
        uStack_c8 = *(ulong *)(lVar7 + 0x3c);
        lStack_d0 = *(long *)(lVar7 + 0x34);
        uStack_c0 = CONCAT44(uStack_c0._4_4_,*(undefined4 *)(lVar7 + 0x44));
        FUN_10a3684c4(param_7,&uStack_e0);
        break;
      case 0xb:
        uStack_d8 = *(long **)(lVar7 + 0x2c);
        uStack_e0 = *(undefined8 **)(lVar7 + 0x24);
        uStack_c8 = *(ulong *)(lVar7 + 0x3c);
        lStack_d0 = *(long *)(lVar7 + 0x34);
        uStack_b8 = *(undefined8 *)(lVar7 + 0x4c);
        uStack_c0 = *(undefined8 *)(lVar7 + 0x44);
        uStack_a8 = *(undefined8 *)(lVar7 + 0x5c);
        uStack_b0 = *(undefined8 *)(lVar7 + 0x54);
        FUN_10a3685f4(param_7,&uStack_e0);
        break;
      case 0x16:
        FUN_10aca4910();
        uStack_e0 = (undefined8 *)CONCAT44(param_2,param_1);
        uStack_d8 = (long *)CONCAT44(param_4,param_3);
        func_0x00010a3682a0(param_7,&uStack_e0);
        break;
      case 0x1f:
        uStack_e0 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a368780(param_7,&uStack_e0);
        break;
      case 0x22:
        uStack_e0 = *(undefined8 **)(lVar7 + 0x24);
        uStack_d8 = (long *)CONCAT44(uStack_d8._4_4_,*(undefined4 *)(lVar7 + 0x2c));
        FUN_10a3689a4(param_7,&uStack_e0);
        break;
      case 0x23:
        uStack_d8 = *(long **)(lVar7 + 0x2c);
        uStack_e0 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a368bd0(param_7,&uStack_e0);
        break;
      case 0x24:
        uStack_e0 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a368df4(param_7,&uStack_e0);
        break;
      case 0x25:
        uStack_e0 = *(undefined8 **)(lVar7 + 0x24);
        uStack_d8 = (long *)CONCAT44(uStack_d8._4_4_,*(undefined4 *)(lVar7 + 0x2c));
        FUN_10a369018(param_7,&uStack_e0);
        break;
      case 0x26:
        uStack_d8 = *(long **)(lVar7 + 0x2c);
        uStack_e0 = *(undefined8 **)(lVar7 + 0x24);
        FUN_10a369244(param_7,&uStack_e0);
      }
      goto LAB_10aca426c;
    }
  }
  lVar8 = *(long *)(param_5 + 400);
  if (lVar8 != 0) {
    lVar12 = param_5 + 400;
    do {
      lVar1 = 8;
      if (uStack_88 <= *(ulong *)(lVar8 + 0x38)) {
        lVar1 = 0;
        lVar12 = lVar8;
      }
      lVar8 = *(long *)(lVar8 + lVar1);
    } while (lVar8 != 0);
    if ((lVar12 != param_5 + 400) && (*(ulong *)(lVar12 + 0x38) <= uStack_88)) {
      FUN_10a1f92d8(param_7,*(long *)(lVar12 + 0x40) + 0x188);
      goto LAB_10aca426c;
    }
  }
  lVar8 = *(long *)(param_5 + 0x1c0);
  if (lVar8 != 0) {
    lVar12 = param_5 + 0x1c0;
    do {
      lVar1 = 8;
      if (uStack_88 <= *(ulong *)(lVar8 + 0x38)) {
        lVar1 = 0;
        lVar12 = lVar8;
      }
      lVar8 = *(long *)(lVar8 + lVar1);
    } while (lVar8 != 0);
    if ((lVar12 != param_5 + 0x1c0) && (*(ulong *)(lVar12 + 0x38) <= uStack_88)) {
      uVar11 = *(ulong *)(lVar12 + 0x40);
      if (uVar11 == 0) {
        lVar8 = 0;
        lVar7 = 0;
      }
      else {
        uVar13 = 0;
        uVar14 = 0;
        do {
          FUN_10aca38a0(&iStack_f8,param_6,uVar13);
          uStack_e0 = (undefined8 *)CONCAT44(uStack_f4,iStack_f8);
          uStack_d8 = plStack_f0;
          lStack_d0 = lStack_e8;
          uStack_c8 = 0;
          func_0x000107c2b080(&uStack_e0);
          plVar9 = (long *)*plVar10;
          plVar4 = plVar10;
          if (plVar9 == (long *)0x0) {
LAB_10aca41d4:
            bVar3 = false;
            uVar15 = uVar14;
          }
          else {
            do {
              lVar8 = 8;
              if (uStack_c8 <= (ulong)plVar9[7]) {
                lVar8 = 0;
                plVar4 = plVar9;
              }
              plVar9 = *(long **)((long)plVar9 + lVar8);
            } while (plVar9 != (long *)0x0);
            if ((plVar4 == plVar10) || (uStack_c8 < (ulong)plVar4[7])) goto LAB_10aca41d4;
            bVar3 = *(ushort *)(plVar4[8] + 0x20) != 0;
            uVar15 = *(ushort *)(plVar4[8] + 0x20);
            if (!bVar3) {
              uVar15 = uVar14;
            }
          }
          if (lStack_d0 < 0) {
            __ZdlPv(uStack_e0);
          }
          uVar13 = uVar13 + 1;
          if (uVar13 == uVar11) {
            bVar3 = true;
          }
          uVar14 = uVar15;
        } while (!bVar3);
        if (uVar15 < 0xb) {
          if (uVar15 < 7) {
            if (uVar15 == 1) {
              FUN_10aca493c(lVar7,param_6,uVar11,param_7);
              goto LAB_10aca426c;
            }
            if (uVar15 == 2) {
              FUN_10aca7104(lVar7,param_6,uVar11,param_7);
              goto LAB_10aca426c;
            }
            if (uVar15 == 3) {
              FUN_10aca4bec(lVar7,param_6,uVar11,param_7);
              goto LAB_10aca426c;
            }
          }
          else if (uVar15 < 9) {
            if (uVar15 == 7) {
              FUN_10aca4eb0(lVar7,param_6,uVar11,param_7);
              goto LAB_10aca426c;
            }
            if (uVar15 == 8) {
              FUN_10aca5194(lVar7,param_6,uVar11,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar15 == 9) {
              FUN_10aca546c(lVar7,param_6,uVar11,param_7);
              goto LAB_10aca426c;
            }
            if (uVar15 == 10) {
              FUN_10aca6b24(lVar7,param_6,uVar11,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar15 < 0x23) {
          if (uVar15 < 0x1f) {
            if (uVar15 == 0xb) {
              FUN_10aca6e14(lVar7,param_6,uVar11,param_7);
              goto LAB_10aca426c;
            }
            if (uVar15 == 0x16) {
              FUN_10aca685c(lVar7,param_6,uVar11,param_7);
              goto LAB_10aca426c;
            }
          }
          else {
            if (uVar15 == 0x1f) {
              FUN_10aca5734(lVar7,param_6,uVar11,param_7);
              goto LAB_10aca426c;
            }
            if (uVar15 == 0x22) {
              FUN_10aca5a18(lVar7,param_6,uVar11,param_7);
              goto LAB_10aca426c;
            }
          }
        }
        else if (uVar15 < 0x25) {
          if (uVar15 == 0x23) {
            FUN_10aca5ce8(lVar7,param_6,uVar11,param_7);
            goto LAB_10aca426c;
          }
          if (uVar15 == 0x24) {
            FUN_10aca5fc8(lVar7,param_6,uVar11,param_7);
            goto LAB_10aca426c;
          }
        }
        else {
          if (uVar15 == 0x25) {
            FUN_10aca62ac(lVar7,param_6,uVar11,param_7);
            goto LAB_10aca426c;
          }
          if (uVar15 == 0x26) {
            FUN_10aca657c(lVar7,param_6,uVar11,param_7);
            goto LAB_10aca426c;
          }
        }
        if (uVar11 >> 0x3d != 0) {
          FUN_10acb63ac();
LAB_10aca48cc:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca48d0);
          (*pcVar2)();
        }
        lVar8 = uVar11 * 8;
        __Znwm();
        _bzero();
        lVar7 = lVar8 + uVar11 * 8;
      }
      plVar10 = (long *)*param_7;
      lVar12 = lVar7 - lVar8 >> 3;
      (**(code **)(*plVar10 + 600))(&uStack_e0,plVar10,lVar12);
      apuStack_70[0] = uStack_e0;
      if (lVar7 != lVar8) {
        lVar7 = 0;
        do {
          plVar4 = plVar10;
          (**(code **)(*plVar10 + 0x58))();
          if ((*(byte *)(plVar4 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
          plVar9 = (long *)plVar4[4];
          if (plVar9 == (long *)0x0) {
            func_0x000109899fd8(plVar4);
            plVar9 = (long *)plVar4[4];
          }
          plVar4[4] = *plVar9;
          plVar9[1] = 0;
          plVar9[2] = 0;
          *plVar9 = (long)&PTR_FUN_110c6bfc0;
          plVar5 = plVar10;
          (**(code **)(*plVar10 + 0x58))();
          plVar4 = plVar5;
          FUN_10a065534();
          if (plVar4 == (long *)0x0) {
            if ((*(byte *)(plVar5 + 0x3c) & 1) == 0) goto LAB_10aca48cc;
            plVar4 = plVar5 + 0x1b;
          }
          uStack_e0 = (undefined8 *)CONCAT44(uStack_e0._4_4_,7);
          plVar6 = plVar10;
          (**(code **)(*plVar10 + 0x98))(plVar10,*plVar4);
          uStack_d8 = plVar6;
          (**(code **)(*plVar10 + 0x2f8))
                    (&plStack_f0,plVar10,plVar9,plVar5,&UNK_10989ba24,&uStack_e0);
          iStack_f8 = 7;
          if ((3 < (int)uStack_e0) && (uStack_d8 != (long *)0x0)) {
            (**(code **)*uStack_d8)();
          }
          (**(code **)(*plVar10 + 0x290))(plVar10,apuStack_70,lVar7,&iStack_f8);
          if ((3 < iStack_f8) && (plStack_f0 != (long *)0x0)) {
            (**(code **)*plStack_f0)();
          }
          lVar7 = lVar7 + 1;
        } while (lVar12 != lVar7);
      }
      aiStack_80[0] = 7;
      puStack_78 = apuStack_70[0];
      func_0x0001098968d0(param_7 + 1,aiStack_80);
      if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
        (**(code **)*puStack_78)();
      }
      if (lVar8 != 0) {
        __ZdlPv(lVar8);
      }
    }
  }
LAB_10aca426c:
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  return;
}



/* Entry: 10aca73d0; end: 10aca7e6f;  */

/* WARNING: Removing unreachable block (ram,0x00010aca7590) */

void FUN_10aca73d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,long *param_7)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined4 uVar9;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  long *plVar14;
  long lStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined8 *puStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined1 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined1 auStack_80 [24];
  ulong uStack_68;
  uint *puVar10;
  
  FUN_10a0d09b4(auStack_80);
  puVar13 = (uint *)(param_7 + 1);
  lVar6 = *param_7;
  func_0x000109898688(lVar6,puVar13);
  if (lVar6 != 0) {
    func_0x00010989879c(&uStack_c0);
    if ((uStack_c0 == (long *)0x0) ||
       (lVar6 = (long)uStack_c0,
       ___dynamic_cast(uStack_c0,&PTR_DAT_110b178e0,&PTR_DAT_110c4eff0,0x10), lVar6 == 0)) {
      plVar8 = &lStack_f0;
    }
    else {
      plStack_e8 = (long *)uStack_b8;
      plVar8 = &uStack_c0;
      lStack_f0 = lVar6;
    }
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8 = (long *)uStack_b8;
    if (uStack_b8 != (uint *)0x0) {
      plVar14 = (long *)((long)uStack_b8 + 8);
      do {
        lVar6 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)uStack_b8 + 0x10))(uStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = plStack_e8;
    lVar6 = lStack_f0;
    if (plStack_e8 != (long *)0x0) {
      plVar14 = plStack_e8 + 1;
      do {
        lVar11 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (lVar6 != 0) {
      FUN_10a33ce6c(&uStack_c0,param_7);
      FUN_10aca7e70(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x178),param_5 + 0x1a0);
      if (uStack_b8 == (uint *)0x0) {
        return;
      }
      plVar8 = (long *)((long)uStack_b8 + 8);
      do {
        lVar6 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 != 0) {
        return;
      }
      (**(code **)(*(long *)uStack_b8 + 0x10))(uStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(uStack_b8);
      return;
    }
  }
  if (*puVar13 == 3) {
    FUN_10a36be44(param_7);
    uStack_c0 = (long *)CONCAT44(uStack_c0._4_4_,param_1);
    FUN_10aca2f5c(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x178),param_5 + 0x188);
    return;
  }
  if (*puVar13 == 2) {
    FUN_10a36bf34();
    uStack_c0 = (long *)CONCAT71(uStack_c0._1_7_,(char)param_7);
    FUN_10aca8160(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x178),param_5 + 0x188);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  func_0x000109898688(puVar7,puVar13);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110b9fae8)) {
    FUN_10a36bf94(param_7);
    uStack_c0 = (long *)CONCAT44(param_2,param_1);
    FUN_10aca315c(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x178),param_5 + 0x188);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  func_0x000109898688(puVar7,puVar13);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110b9fbb0)) {
    FUN_10a36bff8(param_7);
    uStack_c0 = (long *)CONCAT44(param_2,param_1);
    uStack_b8 = (uint *)CONCAT44(uStack_b8._4_4_,param_3);
    FUN_10aca8360(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x178),param_5 + 0x188);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  func_0x000109898688(puVar7,puVar13);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110bb3c30)) {
    FUN_10a36c060(param_7);
    uStack_c0 = (long *)CONCAT44(param_2,param_1);
    uStack_b8 = (uint *)CONCAT44(param_4,param_3);
    FUN_10aca335c(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x178),param_5 + 0x188);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  func_0x000109898688(puVar7,puVar13);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110bc6bf8)) {
    FUN_10a36c300();
    uStack_c0 = param_7;
    FUN_10aca8560(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x178),param_5 + 0x188);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  puVar10 = puVar13;
  func_0x000109898688();
  uVar9 = SUB84(puVar10,0);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110bc6c30)) {
    FUN_10a36c3a8();
    uStack_b8 = (uint *)CONCAT44(uStack_b8._4_4_,uVar9);
    uStack_c0 = param_7;
    FUN_10aca87a4(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x178),param_5 + 0x188);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  puVar10 = puVar13;
  func_0x000109898688();
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110bc6c68)) {
    FUN_10a36c458();
    uStack_c0 = param_7;
    uStack_b8 = puVar10;
    FUN_10aca8a10(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x178),param_5 + 0x188);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  func_0x000109898688(puVar7,puVar13);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110bc6ca0)) {
    FUN_10a36c504();
    uStack_c0 = param_7;
    FUN_10aca8c84(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x178),param_5 + 0x188);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  puVar10 = puVar13;
  func_0x000109898688();
  uVar9 = SUB84(puVar10,0);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110bc6cd8)) {
    FUN_10a36c5ac();
    uStack_b8 = (uint *)CONCAT44(uStack_b8._4_4_,uVar9);
    uStack_c0 = param_7;
    FUN_10aca8ec8(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x178),param_5 + 0x188);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  puVar10 = puVar13;
  func_0x000109898688();
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110bc6d10)) {
    FUN_10a36c65c();
    uStack_c0 = param_7;
    uStack_b8 = puVar10;
    FUN_10aca9134(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x178),param_5 + 0x188);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  func_0x000109898688(puVar7,puVar13);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110bc7bb8)) {
    FUN_10a36c0c8(param_7);
    uStack_c0 = (long *)CONCAT44(param_2,param_1);
    uStack_b8 = (uint *)CONCAT44(param_4,param_3);
    FUN_10aca93a8(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x178),param_5 + 0x188);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  func_0x000109898688(puVar7,puVar13);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110bb3c68)) {
    FUN_10a36c174(&uStack_c0,param_7);
    FUN_10aca9604(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x178),param_5 + 0x188);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  func_0x000109898688(puVar7,puVar13);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110ba79f8)) {
    FUN_10a36c1e8(&uStack_c0,param_7);
    FUN_10aca9804(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x178),param_5 + 0x188);
    return;
  }
  if (*puVar13 == 3) {
    FUN_10a36bed4();
    uStack_c0 = (long *)CONCAT44(uStack_c0._4_4_,(int)param_7);
    FUN_10aca9a04(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x178),param_5 + 0x188);
    return;
  }
  plVar8 = param_7;
  func_0x000109897e5c();
  plStack_c8 = plVar8;
  if (plVar8 == (long *)0x0) {
    if (1 < *puVar13) {
      return;
    }
    lVar6 = *(long *)(param_5 + 0x1d8);
    if (lVar6 != 0) {
      lVar11 = param_5 + 0x1d8;
      do {
        lVar1 = 8;
        if (uStack_68 <= *(ulong *)(lVar6 + 0x38)) {
          lVar1 = 0;
          lVar11 = lVar6;
        }
        lVar6 = *(long *)(lVar6 + lVar1);
      } while (lVar6 != 0);
      if ((lVar11 != param_5 + 0x1d8) && (*(ulong *)(lVar11 + 0x38) <= uStack_68)) {
        uStack_c0 = (long *)(param_5 + 0x188);
        uStack_b8 = (uint *)((ulong)uStack_b8._1_7_ << 8);
        plStack_e8 = (long *)((ulong)plStack_e8 & 0xffffffffffffff00);
        lStack_f0 = param_5 + 0x1d0;
        FUN_10aca3a2c(param_6,0,*(undefined8 *)(lVar11 + 0x40));
        func_0x00010aca9c98(*(undefined8 *)(param_5 + 0x178),param_6,0,(undefined8 *)(lVar11 + 0x40)
                           );
        func_0x00010acd5470(param_5 + 0x1d0,lVar11);
        FUN_10acd4df4(&lStack_f0);
        goto LAB_10aca7d50;
      }
    }
    lVar6 = *(long *)(param_5 + 400);
    if (lVar6 != 0) {
      uStack_c0 = (long *)(param_5 + 0x188);
      lVar11 = param_5 + 400;
      do {
        lVar1 = 8;
        if (uStack_68 <= *(ulong *)(lVar6 + 0x38)) {
          lVar1 = 0;
          lVar11 = lVar6;
        }
        lVar6 = *(long *)(lVar6 + lVar1);
      } while (lVar6 != 0);
      if ((lVar11 != param_5 + 400) && (*(ulong *)(lVar11 + 0x38) <= uStack_68)) {
        uStack_b8 = (uint *)((ulong)uStack_b8._1_7_ << 8);
        func_0x00010a364e60(uStack_c0,auStack_80);
        uVar12 = **(ulong **)(param_5 + 0x178) + 0x9e3779b9;
        uVar12 = uVar12 * 0x40 + (uVar12 >> 2) + 0x9e3779b9 ^ uVar12;
        **(ulong **)(param_5 + 0x178) =
             uStack_68 + uVar12 * 0x40 + (uVar12 >> 2) + 0x9e3779b9 ^ uVar12;
LAB_10aca7d50:
        FUN_10acd5084(&uStack_c0);
        return;
      }
    }
    lVar6 = *(long *)(param_5 + 0x1a8);
    if (lVar6 == 0) {
      return;
    }
    uStack_c0 = (long *)(param_5 + 0x1a0);
    lVar11 = param_5 + 0x1a8;
    do {
      lVar1 = 8;
      if (uStack_68 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar11 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if (lVar11 == param_5 + 0x1a8) {
      return;
    }
    if (uStack_68 < *(ulong *)(lVar11 + 0x38)) {
      return;
    }
    uStack_b8 = (uint *)((ulong)uStack_b8._1_7_ << 8);
    func_0x00010a364f58(uStack_c0,auStack_80);
    uVar12 = **(ulong **)(param_5 + 0x178) + 0x9e3779b9;
    uVar12 = uVar12 * 0x40 + (uVar12 >> 2) + 0x9e3779b9 ^ uVar12;
    **(ulong **)(param_5 + 0x178) = uStack_68 + uVar12 * 0x40 + (uVar12 >> 2) + 0x9e3779b9 ^ uVar12;
    FUN_10acd5500(&uStack_c0);
    return;
  }
  lStack_d8 = param_5 + 0x1d0;
  uStack_d0 = 0;
  lVar6 = *(long *)(param_5 + 0x1d8);
  if (lVar6 != 0) {
    lVar11 = param_5 + 0x1d8;
    do {
      lVar1 = 8;
      if (uStack_68 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar11 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar11 != param_5 + 0x1d8) && (*(ulong *)(lVar11 + 0x38) <= uStack_68)) {
      plVar14 = *(long **)(lVar11 + 0x40);
      if (plVar8 < plVar14) {
        uStack_c0 = (long *)(param_5 + 0x188);
        uStack_b8 = (uint *)((ulong)uStack_b8._1_7_ << 8);
        FUN_10aca3a2c(param_6,plVar8,plVar14);
        FUN_10aca9c04(*(undefined8 *)(param_5 + 0x178),param_6,&plStack_c8,plVar14);
        FUN_10acd5084(&uStack_c0);
      }
      else {
        uStack_d0 = 1;
      }
      *(long **)(lVar11 + 0x40) = plVar8;
      goto LAB_10aca7984;
    }
  }
  FUN_10acd532c(lStack_d8,uStack_68,auStack_80,plVar8);
LAB_10aca7984:
  plVar14 = (long *)0x1;
  do {
    func_0x000109897f1c(&uStack_c0,param_7,(int)plVar14 + -1);
    iVar4 = (int)&uStack_c0;
    FUN_10aca363c();
    if ((3 < (int)uStack_b8) && (puStack_b0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_b0)();
    }
  } while ((iVar4 == 0) && (bVar3 = plVar14 < plVar8, plVar14 = (long *)((long)plVar14 + 1), bVar3))
  ;
  plVar14 = (long *)0x0;
  do {
    func_0x000109897f1c(&lStack_f0,param_7,plVar14);
    FUN_10aca38a0(&lStack_108,param_6,plVar14);
    uStack_b8 = (uint *)CONCAT71(uStack_ff,uStack_100);
    uStack_c0 = (long *)lStack_108;
    puStack_b0 = puStack_f8;
    lStack_a8 = 0;
    func_0x000107c2b080(&uStack_c0);
    iVar5 = (int)&lStack_f0;
    FUN_10aca363c();
    if (iVar5 == iVar4) {
      FUN_10aca73d0(param_5,&uStack_c0,&lStack_f0);
    }
    else {
      uStack_100 = 0;
      lStack_108 = param_5 + 0x188;
      func_0x00010a364e60(param_5 + 0x188,&uStack_c0);
      uVar12 = **(ulong **)(param_5 + 0x178) + 0x9e3779b9;
      uVar12 = uVar12 * 0x40 + 0x9e3779b9 + (uVar12 >> 2) ^ uVar12;
      **(ulong **)(param_5 + 0x178) =
           lStack_a8 + 0x9e3779b9 + uVar12 * 0x40 + (uVar12 >> 2) ^ uVar12;
      FUN_10acd5084(&lStack_108);
    }
    if ((long)puStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
    if ((3 < (int)plStack_e8) && (puStack_e0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_e0)();
    }
    plVar14 = (long *)((long)plVar14 + 1);
  } while (plVar8 != plVar14);
  FUN_10acd4df4(&lStack_d8);
  return;
}



/* Entry: 10aca7e70; end: 10aca815f;  */

void FUN_10aca7e70(undefined8 *param_1,long *param_2,ulong *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_88;
  undefined1 uStack_80;
  long lStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  uStack_80 = 0;
  plVar6 = param_4 + 1;
  plVar8 = (long *)*plVar6;
  plVar7 = param_2;
  plStack_88 = param_4;
  if (plVar8 == (long *)0x0) {
LAB_10aca7ee8:
    FUN_10aca355c();
    plVar6 = plStack_88;
    FUN_10acd4b54(&uStack_a0,param_1,param_2,plVar7);
    uVar11 = param_1[3];
    plVar9 = plVar6 + 1;
    plVar8 = (long *)*plVar9;
    plVar10 = plVar9;
    if ((long *)*plVar9 != (long *)0x0) {
      do {
        while (plVar9 = plVar8, uVar11 < (ulong)plVar9[7]) {
          plVar8 = (long *)*plVar9;
          plVar10 = plVar9;
          if ((long *)*plVar9 == (long *)0x0) goto LAB_10aca7f5c;
        }
        if (uVar11 <= (ulong)plVar9[7]) goto LAB_10aca7fc0;
        plVar8 = (long *)plVar9[1];
      } while ((long *)plVar9[1] != (long *)0x0);
      plVar10 = plVar9 + 1;
    }
LAB_10aca7f5c:
    lVar5 = 0x50;
    __Znwm();
    plStack_70 = plVar6;
    uStack_68 = 0;
    lStack_78 = lVar5;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      func_0x000107c3192c(lVar5 + 0x20,*param_1,param_1[1]);
      uVar11 = param_1[3];
    }
    else {
      uVar12 = *param_1;
      *(undefined8 *)(lVar5 + 0x28) = param_1[1];
      *(undefined8 *)(lVar5 + 0x20) = uVar12;
      *(undefined8 *)(lVar5 + 0x30) = param_1[2];
    }
    *(ulong *)(lVar5 + 0x38) = uVar11;
    *(long **)(lVar5 + 0x48) = plStack_98;
    *(undefined8 *)(lVar5 + 0x40) = uStack_a0;
    uStack_a0 = 0;
    plStack_98 = (long *)0x0;
    FUN_10a365abc(plVar6,plVar9,plVar10,lVar5);
LAB_10aca7fc0:
    if (plStack_98 != (long *)0x0) {
      plVar6 = plStack_98 + 1;
      do {
        lVar5 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar8 = plStack_98;
      } while (cVar1 != '\0');
LAB_10aca7fdc:
      if (lVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  else {
    plVar10 = plVar6;
    do {
      lVar5 = 8;
      if ((ulong)param_1[3] <= (ulong)plVar8[7]) {
        lVar5 = 0;
        plVar10 = plVar8;
      }
      plVar8 = *(long **)((long)plVar8 + lVar5);
    } while (plVar8 != (long *)0x0);
    if ((plVar10 == plVar6) || ((ulong)param_1[3] < (ulong)plVar10[7])) goto LAB_10aca7ee8;
    plVar10 = plVar10 + 8;
    plVar6 = *(long **)(*(long *)(*plVar10 + 0x188) + 0x268);
    if (plVar6 == (long *)0x0) {
      iVar3 = 4;
    }
    else {
      (**(code **)(*plVar6 + 0xe0))();
      iVar3 = (int)plVar6;
    }
    plVar6 = *(long **)(*param_2 + 0x268);
    if (plVar6 == (long *)0x0) {
      iVar4 = 4;
    }
    else {
      (**(code **)(*plVar6 + 0xe0))();
      iVar4 = (int)plVar6;
    }
    if (iVar3 == iVar4) {
      FUN_10a32f140(*plVar10,param_2);
      goto LAB_10aca8044;
    }
    FUN_10aca355c();
    FUN_10acd4b54(&lStack_78,param_1,param_2,plVar7);
    FUN_10a32efa8(plVar10,&lStack_78);
    if (plStack_70 != (long *)0x0) {
      plVar6 = plStack_70 + 1;
      do {
        lVar5 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar8 = plStack_70;
      } while (cVar1 != '\0');
      goto LAB_10aca7fdc;
    }
  }
  uVar11 = *param_3 + 0x9e3779b9;
  uVar11 = uVar11 * 0x40 + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11;
  uVar11 = param_1[3] + uVar11 * 0x40 + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11;
  *param_3 = uVar11 * 0x40 + (long)(int)plVar7 + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11;
LAB_10aca8044:
  FUN_10acd5500(&plStack_88);
  return;
}



/* Entry: 10aca8160; end: 10aca835f;  */

void FUN_10aca8160(long param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 0;
  plVar3 = (long *)(param_4 + 8);
  plVar5 = (long *)*plVar3;
  lStack_50 = param_4;
  if (plVar5 == (long *)0x0) {
LAB_10aca81d8:
    plVar3 = (long *)0x80;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar5 = plVar3 + 3;
    *plVar3 = (long)&PTR_DAT_110ba1f48;
    FUN_10a36749c(plVar5,param_1,param_2);
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    FUN_10acd70b4(param_4,*(undefined8 *)(param_1 + 0x18),param_1,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_10aca8238:
      plVar3 = plStack_58;
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  else {
    plVar7 = plVar3;
    do {
      lVar6 = 8;
      if (*(ulong *)(param_1 + 0x18) <= (ulong)plVar5[7]) {
        lVar6 = 0;
        plVar7 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar6);
    } while (plVar5 != (long *)0x0);
    if ((plVar7 == plVar3) || (*(ulong *)(param_1 + 0x18) < (ulong)plVar7[7])) goto LAB_10aca81d8;
    lVar6 = plVar7[8];
    if (*(short *)(lVar6 + 0x20) == 1) {
      FUN_10a36ec00(lVar6,param_2);
      goto LAB_10aca82a0;
    }
    plVar3 = (long *)0x80;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar5 = plVar3 + 3;
    *plVar3 = (long)&PTR_DAT_110ba1f48;
    FUN_10a36749c(plVar5,param_1,param_2);
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    func_0x00010a0da650(plVar7 + 8,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_10aca8238;
    }
  }
  uVar4 = *param_3 + 0x9e3779b9;
  uVar4 = uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  uVar4 = *(long *)(param_1 + 0x18) + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  *param_3 = uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779ba ^ uVar4;
LAB_10aca82a0:
  FUN_10acd5084(&lStack_50);
  return;
}



/* Entry: 10aca8360; end: 10aca855f;  */

void FUN_10aca8360(long param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 0;
  plVar3 = (long *)(param_4 + 8);
  plVar5 = (long *)*plVar3;
  lStack_50 = param_4;
  if (plVar5 == (long *)0x0) {
LAB_10aca83d8:
    plVar3 = (long *)0x80;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar5 = plVar3 + 3;
    *plVar3 = (long)&PTR_DAT_110ba1f48;
    FUN_10a0db098(plVar5,param_1,param_2);
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    FUN_10acd70b4(param_4,*(undefined8 *)(param_1 + 0x18),param_1,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_10aca8438:
      plVar3 = plStack_58;
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  else {
    plVar7 = plVar3;
    do {
      lVar6 = 8;
      if (*(ulong *)(param_1 + 0x18) <= (ulong)plVar5[7]) {
        lVar6 = 0;
        plVar7 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar6);
    } while (plVar5 != (long *)0x0);
    if ((plVar7 == plVar3) || (*(ulong *)(param_1 + 0x18) < (ulong)plVar7[7])) goto LAB_10aca83d8;
    lVar6 = plVar7[8];
    if (*(short *)(lVar6 + 0x20) == 8) {
      FUN_10a0dafe0(lVar6,param_2);
      goto LAB_10aca84a0;
    }
    plVar3 = (long *)0x80;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar5 = plVar3 + 3;
    *plVar3 = (long)&PTR_DAT_110ba1f48;
    FUN_10a0db098(plVar5,param_1,param_2);
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    func_0x00010a0da650(plVar7 + 8,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_10aca8438;
    }
  }
  uVar4 = *param_3 + 0x9e3779b9;
  uVar4 = uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  uVar4 = *(long *)(param_1 + 0x18) + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  *param_3 = uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779c1 ^ uVar4;
LAB_10aca84a0:
  FUN_10acd5084(&lStack_50);
  return;
}



/* Entry: 10aca8560; end: 10aca87a3;  */

void FUN_10aca8560(long param_1,int *param_2,ulong *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 0;
  plVar4 = (long *)(param_4 + 8);
  plVar6 = (long *)*plVar4;
  lStack_50 = param_4;
  if (plVar6 == (long *)0x0) {
LAB_10aca85d8:
    plVar4 = (long *)0x80;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar6 = plVar4 + 3;
    *plVar4 = (long)&PTR_DAT_110ba1f48;
    FUN_10a367518(plVar6,param_1,param_2);
    plStack_60 = plVar6;
    plStack_58 = plVar4;
    FUN_10acd70b4(param_4,*(undefined8 *)(param_1 + 0x18),param_1,&plStack_60);
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
LAB_10aca8638:
      plVar4 = plStack_58;
      if (lVar7 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else {
    plVar8 = plVar4;
    do {
      lVar7 = 8;
      if (*(ulong *)(param_1 + 0x18) <= (ulong)plVar6[7]) {
        lVar7 = 0;
        plVar8 = plVar6;
      }
      plVar6 = *(long **)((long)plVar6 + lVar7);
    } while (plVar6 != (long *)0x0);
    if ((plVar8 == plVar4) || (*(ulong *)(param_1 + 0x18) < (ulong)plVar8[7])) goto LAB_10aca85d8;
    lVar7 = plVar8[8];
    if (*(short *)(lVar7 + 0x20) == 0x1f) {
      if (*(int *)(lVar7 + 0x24) != *param_2 || *(int *)(lVar7 + 0x28) != param_2[1]) {
        if (0x10 < (ulong)*(byte *)(lVar7 + 100)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10aca877c);
          (*pcVar3)();
        }
        (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)(lVar7 + 100)])();
        *(undefined1 *)(lVar7 + 100) = 0x10;
        *(undefined8 *)(lVar7 + 0x24) = *(undefined8 *)param_2;
        *(undefined1 *)(lVar7 + 100) = 10;
      }
      goto LAB_10aca86a0;
    }
    plVar4 = (long *)0x80;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar6 = plVar4 + 3;
    *plVar4 = (long)&PTR_DAT_110ba1f48;
    FUN_10a367518(plVar6,param_1,param_2);
    plStack_60 = plVar6;
    plStack_58 = plVar4;
    func_0x00010a0da650(plVar8 + 8,&plStack_60);
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
      goto LAB_10aca8638;
    }
  }
  uVar5 = *param_3 + 0x9e3779b9;
  uVar5 = uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  uVar5 = *(long *)(param_1 + 0x18) + uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  *param_3 = uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779d8 ^ uVar5;
LAB_10aca86a0:
  FUN_10acd5084(&lStack_50);
  return;
}



/* Entry: 10aca87a4; end: 10aca8a0f;  */

void FUN_10aca87a4(long param_1,int *param_2,ulong *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 0;
  plVar4 = (long *)(param_4 + 8);
  plVar7 = (long *)*plVar4;
  lStack_50 = param_4;
  if (plVar7 == (long *)0x0) {
LAB_10aca881c:
    plVar4 = (long *)0x80;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar7 = plVar4 + 3;
    *plVar4 = (long)&PTR_DAT_110ba1f48;
    FUN_10a36759c(plVar7,param_1,param_2);
    plStack_60 = plVar7;
    plStack_58 = plVar4;
    FUN_10acd70b4(param_4,*(undefined8 *)(param_1 + 0x18),param_1,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_10aca887c:
      plVar4 = plStack_58;
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else {
    plVar10 = plVar4;
    do {
      lVar8 = 8;
      if (*(ulong *)(param_1 + 0x18) <= (ulong)plVar7[7]) {
        lVar8 = 0;
        plVar10 = plVar7;
      }
      plVar7 = *(long **)((long)plVar7 + lVar8);
    } while (plVar7 != (long *)0x0);
    if ((plVar10 == plVar4) || (*(ulong *)(param_1 + 0x18) < (ulong)plVar10[7])) goto LAB_10aca881c;
    lVar8 = plVar10[8];
    if (*(short *)(lVar8 + 0x20) == 0x22) {
      piVar9 = (int *)(lVar8 + 0x24);
      if (((*piVar9 != *param_2) || (*(int *)(lVar8 + 0x28) != param_2[1])) ||
         (*(int *)(lVar8 + 0x2c) != param_2[2])) {
        if (0x10 < (ulong)*(byte *)(lVar8 + 100)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10aca89e8);
          (*pcVar3)();
        }
        (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)(lVar8 + 100)])(piVar9);
        *(undefined1 *)(lVar8 + 100) = 0x10;
        uVar6 = *(undefined8 *)param_2;
        *(int *)(lVar8 + 0x2c) = param_2[2];
        *(undefined8 *)piVar9 = uVar6;
        *(undefined1 *)(lVar8 + 100) = 0xb;
      }
      goto LAB_10aca88e4;
    }
    plVar4 = (long *)0x80;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar7 = plVar4 + 3;
    *plVar4 = (long)&PTR_DAT_110ba1f48;
    FUN_10a36759c(plVar7,param_1,param_2);
    plStack_60 = plVar7;
    plStack_58 = plVar4;
    func_0x00010a0da650(plVar10 + 8,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_10aca887c;
    }
  }
  uVar5 = *param_3 + 0x9e3779b9;
  uVar5 = uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  uVar5 = *(long *)(param_1 + 0x18) + uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  *param_3 = uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779db ^ uVar5;
LAB_10aca88e4:
  FUN_10acd5084(&lStack_50);
  return;
}



/* Entry: 10aca8a10; end: 10aca8c83;  */

void FUN_10aca8a10(long param_1,int *param_2,ulong *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 0;
  plVar4 = (long *)(param_4 + 8);
  plVar6 = (long *)*plVar4;
  lStack_50 = param_4;
  if (plVar6 == (long *)0x0) {
LAB_10aca8a88:
    plVar4 = (long *)0x80;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar6 = plVar4 + 3;
    *plVar4 = (long)&PTR_DAT_110ba1f48;
    FUN_10a367628(plVar6,param_1,param_2);
    plStack_60 = plVar6;
    plStack_58 = plVar4;
    FUN_10acd70b4(param_4,*(undefined8 *)(param_1 + 0x18),param_1,&plStack_60);
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
LAB_10aca8ae8:
      plVar4 = plStack_58;
      if (lVar7 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else {
    plVar9 = plVar4;
    do {
      lVar7 = 8;
      if (*(ulong *)(param_1 + 0x18) <= (ulong)plVar6[7]) {
        lVar7 = 0;
        plVar9 = plVar6;
      }
      plVar6 = *(long **)((long)plVar6 + lVar7);
    } while (plVar6 != (long *)0x0);
    if ((plVar9 == plVar4) || (*(ulong *)(param_1 + 0x18) < (ulong)plVar9[7])) goto LAB_10aca8a88;
    lVar7 = plVar9[8];
    if (*(short *)(lVar7 + 0x20) == 0x23) {
      piVar8 = (int *)(lVar7 + 0x24);
      if ((((*piVar8 != *param_2) || (*(int *)(lVar7 + 0x28) != param_2[1])) ||
          (*(int *)(lVar7 + 0x2c) != param_2[2])) || (*(int *)(lVar7 + 0x30) != param_2[3])) {
        if (0x10 < (ulong)*(byte *)(lVar7 + 100)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10aca8c5c);
          (*pcVar3)();
        }
        (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)(lVar7 + 100)])(piVar8);
        *(undefined1 *)(lVar7 + 100) = 0x10;
        uVar10 = *(undefined8 *)param_2;
        *(undefined8 *)(lVar7 + 0x2c) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)piVar8 = uVar10;
        *(undefined1 *)(lVar7 + 100) = 0xc;
      }
      goto LAB_10aca8b50;
    }
    plVar4 = (long *)0x80;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar6 = plVar4 + 3;
    *plVar4 = (long)&PTR_DAT_110ba1f48;
    FUN_10a367628(plVar6,param_1,param_2);
    plStack_60 = plVar6;
    plStack_58 = plVar4;
    func_0x00010a0da650(plVar9 + 8,&plStack_60);
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
      goto LAB_10aca8ae8;
    }
  }
  uVar5 = *param_3 + 0x9e3779b9;
  uVar5 = uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  uVar5 = *(long *)(param_1 + 0x18) + uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  *param_3 = uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779dc ^ uVar5;
LAB_10aca8b50:
  FUN_10acd5084(&lStack_50);
  return;
}



/* Entry: 10aca8c84; end: 10aca8ec7;  */

void FUN_10aca8c84(long param_1,int *param_2,ulong *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 0;
  plVar4 = (long *)(param_4 + 8);
  plVar6 = (long *)*plVar4;
  lStack_50 = param_4;
  if (plVar6 == (long *)0x0) {
LAB_10aca8cfc:
    plVar4 = (long *)0x80;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar6 = plVar4 + 3;
    *plVar4 = (long)&PTR_DAT_110ba1f48;
    FUN_10a3676ac(plVar6,param_1,param_2);
    plStack_60 = plVar6;
    plStack_58 = plVar4;
    FUN_10acd70b4(param_4,*(undefined8 *)(param_1 + 0x18),param_1,&plStack_60);
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
LAB_10aca8d5c:
      plVar4 = plStack_58;
      if (lVar7 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else {
    plVar8 = plVar4;
    do {
      lVar7 = 8;
      if (*(ulong *)(param_1 + 0x18) <= (ulong)plVar6[7]) {
        lVar7 = 0;
        plVar8 = plVar6;
      }
      plVar6 = *(long **)((long)plVar6 + lVar7);
    } while (plVar6 != (long *)0x0);
    if ((plVar8 == plVar4) || (*(ulong *)(param_1 + 0x18) < (ulong)plVar8[7])) goto LAB_10aca8cfc;
    lVar7 = plVar8[8];
    if (*(short *)(lVar7 + 0x20) == 0x24) {
      if (*(int *)(lVar7 + 0x24) != *param_2 || *(int *)(lVar7 + 0x28) != param_2[1]) {
        if (0x10 < (ulong)*(byte *)(lVar7 + 100)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10aca8ea0);
          (*pcVar3)();
        }
        (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)(lVar7 + 100)])();
        *(undefined1 *)(lVar7 + 100) = 0x10;
        *(undefined8 *)(lVar7 + 0x24) = *(undefined8 *)param_2;
        *(undefined1 *)(lVar7 + 100) = 0xd;
      }
      goto LAB_10aca8dc4;
    }
    plVar4 = (long *)0x80;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar6 = plVar4 + 3;
    *plVar4 = (long)&PTR_DAT_110ba1f48;
    FUN_10a3676ac(plVar6,param_1,param_2);
    plStack_60 = plVar6;
    plStack_58 = plVar4;
    func_0x00010a0da650(plVar8 + 8,&plStack_60);
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
      goto LAB_10aca8d5c;
    }
  }
  uVar5 = *param_3 + 0x9e3779b9;
  uVar5 = uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  uVar5 = *(long *)(param_1 + 0x18) + uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  *param_3 = uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779dd ^ uVar5;
LAB_10aca8dc4:
  FUN_10acd5084(&lStack_50);
  return;
}



/* Entry: 10aca8ec8; end: 10aca9133;  */

void FUN_10aca8ec8(long param_1,int *param_2,ulong *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 0;
  plVar4 = (long *)(param_4 + 8);
  plVar7 = (long *)*plVar4;
  lStack_50 = param_4;
  if (plVar7 == (long *)0x0) {
LAB_10aca8f40:
    plVar4 = (long *)0x80;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar7 = plVar4 + 3;
    *plVar4 = (long)&PTR_DAT_110ba1f48;
    FUN_10a367730(plVar7,param_1,param_2);
    plStack_60 = plVar7;
    plStack_58 = plVar4;
    FUN_10acd70b4(param_4,*(undefined8 *)(param_1 + 0x18),param_1,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_10aca8fa0:
      plVar4 = plStack_58;
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else {
    plVar10 = plVar4;
    do {
      lVar8 = 8;
      if (*(ulong *)(param_1 + 0x18) <= (ulong)plVar7[7]) {
        lVar8 = 0;
        plVar10 = plVar7;
      }
      plVar7 = *(long **)((long)plVar7 + lVar8);
    } while (plVar7 != (long *)0x0);
    if ((plVar10 == plVar4) || (*(ulong *)(param_1 + 0x18) < (ulong)plVar10[7])) goto LAB_10aca8f40;
    lVar8 = plVar10[8];
    if (*(short *)(lVar8 + 0x20) == 0x25) {
      piVar9 = (int *)(lVar8 + 0x24);
      if (((*piVar9 != *param_2) || (*(int *)(lVar8 + 0x28) != param_2[1])) ||
         (*(int *)(lVar8 + 0x2c) != param_2[2])) {
        if (0x10 < (ulong)*(byte *)(lVar8 + 100)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10aca910c);
          (*pcVar3)();
        }
        (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)(lVar8 + 100)])(piVar9);
        *(undefined1 *)(lVar8 + 100) = 0x10;
        uVar6 = *(undefined8 *)param_2;
        *(int *)(lVar8 + 0x2c) = param_2[2];
        *(undefined8 *)piVar9 = uVar6;
        *(undefined1 *)(lVar8 + 100) = 0xe;
      }
      goto LAB_10aca9008;
    }
    plVar4 = (long *)0x80;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar7 = plVar4 + 3;
    *plVar4 = (long)&PTR_DAT_110ba1f48;
    FUN_10a367730(plVar7,param_1,param_2);
    plStack_60 = plVar7;
    plStack_58 = plVar4;
    func_0x00010a0da650(plVar10 + 8,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_10aca8fa0;
    }
  }
  uVar5 = *param_3 + 0x9e3779b9;
  uVar5 = uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  uVar5 = *(long *)(param_1 + 0x18) + uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  *param_3 = uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779de ^ uVar5;
LAB_10aca9008:
  FUN_10acd5084(&lStack_50);
  return;
}



/* Entry: 10aca9134; end: 10aca93a7;  */

void FUN_10aca9134(long param_1,int *param_2,ulong *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 0;
  plVar4 = (long *)(param_4 + 8);
  plVar6 = (long *)*plVar4;
  lStack_50 = param_4;
  if (plVar6 == (long *)0x0) {
LAB_10aca91ac:
    plVar4 = (long *)0x80;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar6 = plVar4 + 3;
    *plVar4 = (long)&PTR_DAT_110ba1f48;
    FUN_10a3677bc(plVar6,param_1,param_2);
    plStack_60 = plVar6;
    plStack_58 = plVar4;
    FUN_10acd70b4(param_4,*(undefined8 *)(param_1 + 0x18),param_1,&plStack_60);
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
LAB_10aca920c:
      plVar4 = plStack_58;
      if (lVar7 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else {
    plVar9 = plVar4;
    do {
      lVar7 = 8;
      if (*(ulong *)(param_1 + 0x18) <= (ulong)plVar6[7]) {
        lVar7 = 0;
        plVar9 = plVar6;
      }
      plVar6 = *(long **)((long)plVar6 + lVar7);
    } while (plVar6 != (long *)0x0);
    if ((plVar9 == plVar4) || (*(ulong *)(param_1 + 0x18) < (ulong)plVar9[7])) goto LAB_10aca91ac;
    lVar7 = plVar9[8];
    if (*(short *)(lVar7 + 0x20) == 0x26) {
      piVar8 = (int *)(lVar7 + 0x24);
      if ((((*piVar8 != *param_2) || (*(int *)(lVar7 + 0x28) != param_2[1])) ||
          (*(int *)(lVar7 + 0x2c) != param_2[2])) || (*(int *)(lVar7 + 0x30) != param_2[3])) {
        if (0x10 < (ulong)*(byte *)(lVar7 + 100)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10aca9380);
          (*pcVar3)();
        }
        (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)(lVar7 + 100)])(piVar8);
        *(undefined1 *)(lVar7 + 100) = 0x10;
        uVar10 = *(undefined8 *)param_2;
        *(undefined8 *)(lVar7 + 0x2c) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)piVar8 = uVar10;
        *(undefined1 *)(lVar7 + 100) = 0xf;
      }
      goto LAB_10aca9274;
    }
    plVar4 = (long *)0x80;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar6 = plVar4 + 3;
    *plVar4 = (long)&PTR_DAT_110ba1f48;
    FUN_10a3677bc(plVar6,param_1,param_2);
    plStack_60 = plVar6;
    plStack_58 = plVar4;
    func_0x00010a0da650(plVar9 + 8,&plStack_60);
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
      goto LAB_10aca920c;
    }
  }
  uVar5 = *param_3 + 0x9e3779b9;
  uVar5 = uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  uVar5 = *(long *)(param_1 + 0x18) + uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  *param_3 = uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779df ^ uVar5;
LAB_10aca9274:
  FUN_10acd5084(&lStack_50);
  return;
}



/* Entry: 10aca93a8; end: 10aca9603;  */

void FUN_10aca93a8(long param_1,float *param_2,ulong *param_3,long param_4)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  float *pfVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 0;
  plVar4 = (long *)(param_4 + 8);
  plVar6 = (long *)*plVar4;
  lStack_50 = param_4;
  if (plVar6 == (long *)0x0) {
LAB_10aca9420:
    plVar4 = (long *)0x80;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar6 = plVar4 + 3;
    *plVar4 = (long)&PTR_DAT_110ba1f48;
    FUN_10a367840(plVar6,param_1,param_2);
    plStack_60 = plVar6;
    plStack_58 = plVar4;
    FUN_10acd70b4(param_4,*(undefined8 *)(param_1 + 0x18),param_1,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_10aca9480:
      plVar4 = plStack_58;
      if (lVar7 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else {
    plVar9 = plVar4;
    do {
      lVar7 = 8;
      if (*(ulong *)(param_1 + 0x18) <= (ulong)plVar6[7]) {
        lVar7 = 0;
        plVar9 = plVar6;
      }
      plVar6 = *(long **)((long)plVar6 + lVar7);
    } while (plVar6 != (long *)0x0);
    if ((plVar9 == plVar4) || (*(ulong *)(param_1 + 0x18) < (ulong)plVar9[7])) goto LAB_10aca9420;
    lVar7 = plVar9[8];
    if (*(short *)(lVar7 + 0x20) == 0x16) {
      pfVar8 = (float *)(lVar7 + 0x24);
      bVar3 = false;
      if ((*pfVar8 == *param_2) &&
         (bVar3 = false, !NAN(*(float *)(lVar7 + 0x28)) && !NAN(param_2[1]))) {
        bVar3 = *(float *)(lVar7 + 0x28) == param_2[1];
      }
      if (bVar3) {
        bVar3 = false;
        if ((*(float *)(lVar7 + 0x2c) == param_2[2]) &&
           (bVar3 = false, !NAN(*(float *)(lVar7 + 0x30)) && !NAN(param_2[3]))) {
          bVar3 = *(float *)(lVar7 + 0x30) == param_2[3];
        }
        if (bVar3) goto LAB_10aca94e8;
      }
      if (0x10 < (ulong)*(byte *)(lVar7 + 100)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10aca95dc);
        (*pcVar2)();
      }
      (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)(lVar7 + 100)])(pfVar8);
      *(undefined1 *)(lVar7 + 100) = 0x10;
      uVar10 = *(undefined8 *)param_2;
      *(undefined8 *)(lVar7 + 0x2c) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)pfVar8 = uVar10;
      *(undefined1 *)(lVar7 + 100) = 6;
      goto LAB_10aca94e8;
    }
    plVar4 = (long *)0x80;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar6 = plVar4 + 3;
    *plVar4 = (long)&PTR_DAT_110ba1f48;
    FUN_10a367840(plVar6,param_1,param_2);
    plStack_60 = plVar6;
    plStack_58 = plVar4;
    func_0x00010a0da650(plVar9 + 8,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_10aca9480;
    }
  }
  uVar5 = *param_3 + 0x9e3779b9;
  uVar5 = uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  uVar5 = *(long *)(param_1 + 0x18) + uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  *param_3 = uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779cf ^ uVar5;
LAB_10aca94e8:
  FUN_10acd5084(&lStack_50);
  return;
}



/* Entry: 10aca9604; end: 10aca9803;  */

void FUN_10aca9604(long param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 0;
  plVar3 = (long *)(param_4 + 8);
  plVar5 = (long *)*plVar3;
  lStack_50 = param_4;
  if (plVar5 == (long *)0x0) {
LAB_10aca967c:
    plVar3 = (long *)0x80;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar5 = plVar3 + 3;
    *plVar3 = (long)&PTR_DAT_110ba1f48;
    FUN_10a3678c4(plVar5,param_1,param_2);
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    FUN_10acd70b4(param_4,*(undefined8 *)(param_1 + 0x18),param_1,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_10aca96dc:
      plVar3 = plStack_58;
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  else {
    plVar7 = plVar3;
    do {
      lVar6 = 8;
      if (*(ulong *)(param_1 + 0x18) <= (ulong)plVar5[7]) {
        lVar6 = 0;
        plVar7 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar6);
    } while (plVar5 != (long *)0x0);
    if ((plVar7 == plVar3) || (*(ulong *)(param_1 + 0x18) < (ulong)plVar7[7])) goto LAB_10aca967c;
    lVar6 = plVar7[8];
    if (*(short *)(lVar6 + 0x20) == 10) {
      FUN_10a36eed4(lVar6,param_2);
      goto LAB_10aca9744;
    }
    plVar3 = (long *)0x80;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar5 = plVar3 + 3;
    *plVar3 = (long)&PTR_DAT_110ba1f48;
    FUN_10a3678c4(plVar5,param_1,param_2);
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    func_0x00010a0da650(plVar7 + 8,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_10aca96dc;
    }
  }
  uVar4 = *param_3 + 0x9e3779b9;
  uVar4 = uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  uVar4 = *(long *)(param_1 + 0x18) + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  *param_3 = uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779c3 ^ uVar4;
LAB_10aca9744:
  FUN_10acd5084(&lStack_50);
  return;
}



/* Entry: 10aca9804; end: 10aca9a03;  */

void FUN_10aca9804(long param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 0;
  plVar3 = (long *)(param_4 + 8);
  plVar5 = (long *)*plVar3;
  lStack_50 = param_4;
  if (plVar5 == (long *)0x0) {
LAB_10aca987c:
    plVar3 = (long *)0x80;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar5 = plVar3 + 3;
    *plVar3 = (long)&PTR_DAT_110ba1f48;
    FUN_10a367954(plVar5,param_1,param_2);
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    FUN_10acd70b4(param_4,*(undefined8 *)(param_1 + 0x18),param_1,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_10aca98dc:
      plVar3 = plStack_58;
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  else {
    plVar7 = plVar3;
    do {
      lVar6 = 8;
      if (*(ulong *)(param_1 + 0x18) <= (ulong)plVar5[7]) {
        lVar6 = 0;
        plVar7 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar6);
    } while (plVar5 != (long *)0x0);
    if ((plVar7 == plVar3) || (*(ulong *)(param_1 + 0x18) < (ulong)plVar7[7])) goto LAB_10aca987c;
    lVar6 = plVar7[8];
    if (*(short *)(lVar6 + 0x20) == 0xb) {
      FUN_10a36f020(lVar6,param_2);
      goto LAB_10aca9944;
    }
    plVar3 = (long *)0x80;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar5 = plVar3 + 3;
    *plVar3 = (long)&PTR_DAT_110ba1f48;
    FUN_10a367954(plVar5,param_1,param_2);
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    func_0x00010a0da650(plVar7 + 8,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_10aca98dc;
    }
  }
  uVar4 = *param_3 + 0x9e3779b9;
  uVar4 = uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  uVar4 = *(long *)(param_1 + 0x18) + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  *param_3 = uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779c4 ^ uVar4;
LAB_10aca9944:
  FUN_10acd5084(&lStack_50);
  return;
}



/* Entry: 10aca9a04; end: 10aca9c03;  */

void FUN_10aca9a04(long param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 0;
  plVar3 = (long *)(param_4 + 8);
  plVar5 = (long *)*plVar3;
  lStack_50 = param_4;
  if (plVar5 == (long *)0x0) {
LAB_10aca9a7c:
    plVar3 = (long *)0x80;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar5 = plVar3 + 3;
    *plVar3 = (long)&PTR_DAT_110ba1f48;
    FUN_10a3673a4(plVar5,param_1,param_2);
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    FUN_10acd70b4(param_4,*(undefined8 *)(param_1 + 0x18),param_1,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_10aca9adc:
      plVar3 = plStack_58;
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  else {
    plVar7 = plVar3;
    do {
      lVar6 = 8;
      if (*(ulong *)(param_1 + 0x18) <= (ulong)plVar5[7]) {
        lVar6 = 0;
        plVar7 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar6);
    } while (plVar5 != (long *)0x0);
    if ((plVar7 == plVar3) || (*(ulong *)(param_1 + 0x18) < (ulong)plVar7[7])) goto LAB_10aca9a7c;
    lVar6 = plVar7[8];
    if (*(short *)(lVar6 + 0x20) == 2) {
      FUN_10a36eca4(lVar6,param_2);
      goto LAB_10aca9b44;
    }
    plVar3 = (long *)0x80;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar5 = plVar3 + 3;
    *plVar3 = (long)&PTR_DAT_110ba1f48;
    FUN_10a3673a4(plVar5,param_1,param_2);
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    func_0x00010a0da650(plVar7 + 8,&plStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_10aca9adc;
    }
  }
  uVar4 = *param_3 + 0x9e3779b9;
  uVar4 = uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  uVar4 = *(long *)(param_1 + 0x18) + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  *param_3 = uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779bb ^ uVar4;
LAB_10aca9b44:
  FUN_10acd5084(&lStack_50);
  return;
}



/* Entry: 10aca9c04; end: 10aca9d2f;  */

void FUN_10aca9c04(ulong *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uStack_31;
  
  uVar2 = *param_1;
  puVar1 = &uStack_31;
  func_0x000107c2b05c();
  uVar2 = uVar2 + 0x9e3779b9;
  uVar2 = uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
  uVar2 = (ulong)(puVar1 + (uVar2 >> 2) + uVar2 * 0x40 + 0x9e3779b9) ^ uVar2;
  uVar2 = *param_3 + uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
  *param_1 = param_4 + uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
  return;
}



/* Entry: 10aca9d30; end: 10aca9d37;  */

/* WARNING: Removing unreachable block (ram,0x00010aca7590) */

void FUN_10aca9d30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,long *param_7)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined4 uVar9;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  long *plVar14;
  long lStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined8 *puStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined1 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined1 auStack_80 [24];
  ulong uStack_68;
  uint *puVar10;
  
  FUN_10a0d09b4(auStack_80);
  puVar13 = (uint *)(param_7 + 1);
  lVar6 = *param_7;
  func_0x000109898688(lVar6,puVar13);
  if (lVar6 != 0) {
    func_0x00010989879c(&uStack_c0);
    if ((uStack_c0 == (long *)0x0) ||
       (lVar6 = (long)uStack_c0,
       ___dynamic_cast(uStack_c0,&PTR_DAT_110b178e0,&PTR_DAT_110c4eff0,0x10), lVar6 == 0)) {
      plVar8 = &lStack_f0;
    }
    else {
      plStack_e8 = (long *)uStack_b8;
      plVar8 = &uStack_c0;
      lStack_f0 = lVar6;
    }
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8 = (long *)uStack_b8;
    if (uStack_b8 != (uint *)0x0) {
      plVar14 = (long *)((long)uStack_b8 + 8);
      do {
        lVar6 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)uStack_b8 + 0x10))(uStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = plStack_e8;
    lVar6 = lStack_f0;
    if (plStack_e8 != (long *)0x0) {
      plVar14 = plStack_e8 + 1;
      do {
        lVar11 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (lVar6 != 0) {
      FUN_10a33ce6c(&uStack_c0,param_7);
      FUN_10aca7e70(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x160),param_5 + 0x188);
      if (uStack_b8 == (uint *)0x0) {
        return;
      }
      plVar8 = (long *)((long)uStack_b8 + 8);
      do {
        lVar6 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 != 0) {
        return;
      }
      (**(code **)(*(long *)uStack_b8 + 0x10))(uStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(uStack_b8);
      return;
    }
  }
  if (*puVar13 == 3) {
    FUN_10a36be44(param_7);
    uStack_c0 = (long *)CONCAT44(uStack_c0._4_4_,param_1);
    FUN_10aca2f5c(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x160),param_5 + 0x170);
    return;
  }
  if (*puVar13 == 2) {
    FUN_10a36bf34();
    uStack_c0 = (long *)CONCAT71(uStack_c0._1_7_,(char)param_7);
    FUN_10aca8160(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x160),param_5 + 0x170);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  func_0x000109898688(puVar7,puVar13);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110b9fae8)) {
    FUN_10a36bf94(param_7);
    uStack_c0 = (long *)CONCAT44(param_2,param_1);
    FUN_10aca315c(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x160),param_5 + 0x170);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  func_0x000109898688(puVar7,puVar13);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110b9fbb0)) {
    FUN_10a36bff8(param_7);
    uStack_c0 = (long *)CONCAT44(param_2,param_1);
    uStack_b8 = (uint *)CONCAT44(uStack_b8._4_4_,param_3);
    FUN_10aca8360(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x160),param_5 + 0x170);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  func_0x000109898688(puVar7,puVar13);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110bb3c30)) {
    FUN_10a36c060(param_7);
    uStack_c0 = (long *)CONCAT44(param_2,param_1);
    uStack_b8 = (uint *)CONCAT44(param_4,param_3);
    FUN_10aca335c(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x160),param_5 + 0x170);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  func_0x000109898688(puVar7,puVar13);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110bc6bf8)) {
    FUN_10a36c300();
    uStack_c0 = param_7;
    FUN_10aca8560(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x160),param_5 + 0x170);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  puVar10 = puVar13;
  func_0x000109898688();
  uVar9 = SUB84(puVar10,0);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110bc6c30)) {
    FUN_10a36c3a8();
    uStack_b8 = (uint *)CONCAT44(uStack_b8._4_4_,uVar9);
    uStack_c0 = param_7;
    FUN_10aca87a4(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x160),param_5 + 0x170);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  puVar10 = puVar13;
  func_0x000109898688();
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110bc6c68)) {
    FUN_10a36c458();
    uStack_c0 = param_7;
    uStack_b8 = puVar10;
    FUN_10aca8a10(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x160),param_5 + 0x170);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  func_0x000109898688(puVar7,puVar13);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110bc6ca0)) {
    FUN_10a36c504();
    uStack_c0 = param_7;
    FUN_10aca8c84(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x160),param_5 + 0x170);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  puVar10 = puVar13;
  func_0x000109898688();
  uVar9 = SUB84(puVar10,0);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110bc6cd8)) {
    FUN_10a36c5ac();
    uStack_b8 = (uint *)CONCAT44(uStack_b8._4_4_,uVar9);
    uStack_c0 = param_7;
    FUN_10aca8ec8(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x160),param_5 + 0x170);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  puVar10 = puVar13;
  func_0x000109898688();
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110bc6d10)) {
    FUN_10a36c65c();
    uStack_c0 = param_7;
    uStack_b8 = puVar10;
    FUN_10aca9134(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x160),param_5 + 0x170);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  func_0x000109898688(puVar7,puVar13);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110bc7bb8)) {
    FUN_10a36c0c8(param_7);
    uStack_c0 = (long *)CONCAT44(param_2,param_1);
    uStack_b8 = (uint *)CONCAT44(param_4,param_3);
    FUN_10aca93a8(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x160),param_5 + 0x170);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  func_0x000109898688(puVar7,puVar13);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110bb3c68)) {
    FUN_10a36c174(&uStack_c0,param_7);
    FUN_10aca9604(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x160),param_5 + 0x170);
    return;
  }
  puVar7 = (undefined8 *)*param_7;
  func_0x000109898688(puVar7,puVar13);
  if ((puVar7 != (undefined8 *)0x0) && ((undefined **)*puVar7 == &PTR_FUN_110ba79f8)) {
    FUN_10a36c1e8(&uStack_c0,param_7);
    FUN_10aca9804(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x160),param_5 + 0x170);
    return;
  }
  if (*puVar13 == 3) {
    FUN_10a36bed4();
    uStack_c0 = (long *)CONCAT44(uStack_c0._4_4_,(int)param_7);
    FUN_10aca9a04(auStack_80,&uStack_c0,*(undefined8 *)(param_5 + 0x160),param_5 + 0x170);
    return;
  }
  plVar8 = param_7;
  func_0x000109897e5c();
  plStack_c8 = plVar8;
  if (plVar8 == (long *)0x0) {
    if (1 < *puVar13) {
      return;
    }
    lVar6 = *(long *)(param_5 + 0x1c0);
    if (lVar6 != 0) {
      lVar11 = param_5 + 0x1c0;
      do {
        lVar1 = 8;
        if (uStack_68 <= *(ulong *)(lVar6 + 0x38)) {
          lVar1 = 0;
          lVar11 = lVar6;
        }
        lVar6 = *(long *)(lVar6 + lVar1);
      } while (lVar6 != 0);
      if ((lVar11 != param_5 + 0x1c0) && (*(ulong *)(lVar11 + 0x38) <= uStack_68)) {
        uStack_c0 = (long *)(param_5 + 0x170);
        uStack_b8 = (uint *)((ulong)uStack_b8._1_7_ << 8);
        plStack_e8 = (long *)((ulong)plStack_e8 & 0xffffffffffffff00);
        lStack_f0 = param_5 + 0x1b8;
        FUN_10aca3a2c(param_6,0,*(undefined8 *)(lVar11 + 0x40));
        func_0x00010aca9c98(*(undefined8 *)(param_5 + 0x160),param_6,0,(undefined8 *)(lVar11 + 0x40)
                           );
        func_0x00010acd5470(param_5 + 0x1b8,lVar11);
        FUN_10acd4df4(&lStack_f0);
        goto LAB_10aca7d50;
      }
    }
    lVar6 = *(long *)(param_5 + 0x178);
    if (lVar6 != 0) {
      uStack_c0 = (long *)(param_5 + 0x170);
      lVar11 = param_5 + 0x178;
      do {
        lVar1 = 8;
        if (uStack_68 <= *(ulong *)(lVar6 + 0x38)) {
          lVar1 = 0;
          lVar11 = lVar6;
        }
        lVar6 = *(long *)(lVar6 + lVar1);
      } while (lVar6 != 0);
      if ((lVar11 != param_5 + 0x178) && (*(ulong *)(lVar11 + 0x38) <= uStack_68)) {
        uStack_b8 = (uint *)((ulong)uStack_b8._1_7_ << 8);
        func_0x00010a364e60(uStack_c0,auStack_80);
        uVar12 = **(ulong **)(param_5 + 0x160) + 0x9e3779b9;
        uVar12 = uVar12 * 0x40 + (uVar12 >> 2) + 0x9e3779b9 ^ uVar12;
        **(ulong **)(param_5 + 0x160) =
             uStack_68 + uVar12 * 0x40 + (uVar12 >> 2) + 0x9e3779b9 ^ uVar12;
LAB_10aca7d50:
        FUN_10acd5084(&uStack_c0);
        return;
      }
    }
    lVar6 = *(long *)(param_5 + 400);
    if (lVar6 == 0) {
      return;
    }
    uStack_c0 = (long *)(param_5 + 0x188);
    lVar11 = param_5 + 400;
    do {
      lVar1 = 8;
      if (uStack_68 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar11 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if (lVar11 == param_5 + 400) {
      return;
    }
    if (uStack_68 < *(ulong *)(lVar11 + 0x38)) {
      return;
    }
    uStack_b8 = (uint *)((ulong)uStack_b8._1_7_ << 8);
    func_0x00010a364f58(uStack_c0,auStack_80);
    uVar12 = **(ulong **)(param_5 + 0x160) + 0x9e3779b9;
    uVar12 = uVar12 * 0x40 + (uVar12 >> 2) + 0x9e3779b9 ^ uVar12;
    **(ulong **)(param_5 + 0x160) = uStack_68 + uVar12 * 0x40 + (uVar12 >> 2) + 0x9e3779b9 ^ uVar12;
    FUN_10acd5500(&uStack_c0);
    return;
  }
  lStack_d8 = param_5 + 0x1b8;
  uStack_d0 = 0;
  lVar6 = *(long *)(param_5 + 0x1c0);
  if (lVar6 != 0) {
    lVar11 = param_5 + 0x1c0;
    do {
      lVar1 = 8;
      if (uStack_68 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar11 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar11 != param_5 + 0x1c0) && (*(ulong *)(lVar11 + 0x38) <= uStack_68)) {
      plVar14 = *(long **)(lVar11 + 0x40);
      if (plVar8 < plVar14) {
        uStack_c0 = (long *)(param_5 + 0x170);
        uStack_b8 = (uint *)((ulong)uStack_b8._1_7_ << 8);
        FUN_10aca3a2c(param_6,plVar8,plVar14);
        FUN_10aca9c04(*(undefined8 *)(param_5 + 0x160),param_6,&plStack_c8,plVar14);
        FUN_10acd5084(&uStack_c0);
      }
      else {
        uStack_d0 = 1;
      }
      *(long **)(lVar11 + 0x40) = plVar8;
      goto LAB_10aca7984;
    }
  }
  FUN_10acd532c(lStack_d8,uStack_68,auStack_80,plVar8);
LAB_10aca7984:
  plVar14 = (long *)0x1;
  do {
    func_0x000109897f1c(&uStack_c0,param_7,(int)plVar14 + -1);
    iVar4 = (int)&uStack_c0;
    FUN_10aca363c();
    if ((3 < (int)uStack_b8) && (puStack_b0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_b0)();
    }
  } while ((iVar4 == 0) && (bVar3 = plVar14 < plVar8, plVar14 = (long *)((long)plVar14 + 1), bVar3))
  ;
  plVar14 = (long *)0x0;
  do {
    func_0x000109897f1c(&lStack_f0,param_7,plVar14);
    FUN_10aca38a0(&lStack_108,param_6,plVar14);
    uStack_b8 = (uint *)CONCAT71(uStack_ff,uStack_100);
    uStack_c0 = (long *)lStack_108;
    puStack_b0 = puStack_f8;
    lStack_a8 = 0;
    func_0x000107c2b080(&uStack_c0);
    iVar5 = (int)&lStack_f0;
    FUN_10aca363c();
    if (iVar5 == iVar4) {
      FUN_10aca73d0(param_5 + -0x18,&uStack_c0,&lStack_f0);
    }
    else {
      uStack_100 = 0;
      lStack_108 = param_5 + 0x170;
      func_0x00010a364e60(param_5 + 0x170,&uStack_c0);
      uVar12 = **(ulong **)(param_5 + 0x160) + 0x9e3779b9;
      uVar12 = uVar12 * 0x40 + 0x9e3779b9 + (uVar12 >> 2) ^ uVar12;
      **(ulong **)(param_5 + 0x160) =
           lStack_a8 + 0x9e3779b9 + uVar12 * 0x40 + (uVar12 >> 2) ^ uVar12;
      FUN_10acd5084(&lStack_108);
    }
    if ((long)puStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
    if ((3 < (int)plStack_e8) && (puStack_e0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_e0)();
    }
    plVar14 = (long *)((long)plVar14 + 1);
  } while (plVar8 != plVar14);
  FUN_10acd4df4(&lStack_d8);
  return;
}



/* Entry: 10aca9d38; end: 10aca9f7b;  */

void FUN_10aca9d38(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong unaff_x19;
  undefined8 unaff_x20;
  long lVar2;
  char *unaff_x21;
  char *pcVar3;
  undefined8 unaff_x22;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(char **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if ((bRam00000001137ec7a0 & 1) == 0) {
      iVar1 = 0x137ec7a0;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x120),&UNK_10f63474c);
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x108),&UNK_10f65b1ad);
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xf0),&UNK_10f65b1b6);
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xd8),&UNK_10f6a1427);
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xc0),&UNK_10f6a1436);
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xa8),&UNK_10f6a1444);
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x90),&UNK_10f6a1459);
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x78),&DAT_10f648172);
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x60),&UNK_10f6a1468);
        unaff_x21 = (char *)((long)register0x00000008 + -0x120);
        FUN_10ab36d6c(0x1137ec8d0,(undefined1 *)((long)register0x00000008 + -0x120),9,
                      (undefined1 *)((long)register0x00000008 + -0x121));
        lVar2 = 0;
        do {
          if (unaff_x21[lVar2 + 0xd7] < '\0') {
            __ZdlPv(*(undefined8 *)(unaff_x21 + lVar2 + 0xc0));
          }
          lVar2 = lVar2 + -0x18;
        } while (lVar2 != -0xd8);
        ___cxa_atexit(FUN_10ab24288,0x1137ec8d0,0x100000000);
        ___cxa_guard_release(0x1137ec7a0);
        unaff_x22 = 0xffffffffffffff28;
      }
    }
    lVar2 = 0x1137ec8d0;
    func_0x000107c280fc(0x1137ec8d0,param_2);
    unaff_x19 = (ulong)(lVar2 == 0x1137ec8d8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
    break;
    ___stack_chk_fail();
    lVar2 = -0xd8;
    pcVar3 = unaff_x21 + 0xd7;
    do {
      unaff_x21 = pcVar3 + -0x18;
      if (*pcVar3 < '\0') {
        __ZdlPv(*(undefined8 *)(pcVar3 + -0x17));
      }
      lVar2 = lVar2 + 0x18;
      pcVar3 = unaff_x21;
    } while (lVar2 != 0);
    ___cxa_guard_abort(0x1137ec7a0);
    unaff_x30 = FUN_10aca9f7c;
    __Unwind_Resume(unaff_x19);
    unaff_x20 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x130);
  }
  return;
}



/* Entry: 10aca9f7c; end: 10aca9f7f;  */

void FUN_10aca9f7c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong unaff_x19;
  long lVar2;
  undefined8 unaff_x20;
  char *pcVar3;
  char *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(char **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if ((bRam00000001137ec7a0 & 1) == 0) {
      iVar1 = 0x137ec7a0;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x120),&UNK_10f63474c);
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x108),&UNK_10f65b1ad);
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xf0),&UNK_10f65b1b6);
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xd8),&UNK_10f6a1427);
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xc0),&UNK_10f6a1436);
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xa8),&UNK_10f6a1444);
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x90),&UNK_10f6a1459);
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x78),&DAT_10f648172);
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x60),&UNK_10f6a1468);
        unaff_x21 = (char *)((long)register0x00000008 + -0x120);
        FUN_10ab36d6c(0x1137ec8d0,(undefined1 *)((long)register0x00000008 + -0x120),9,
                      (undefined1 *)((long)register0x00000008 + -0x121));
        lVar2 = 0;
        do {
          if (unaff_x21[lVar2 + 0xd7] < '\0') {
            __ZdlPv(*(undefined8 *)(unaff_x21 + lVar2 + 0xc0));
          }
          lVar2 = lVar2 + -0x18;
        } while (lVar2 != -0xd8);
        ___cxa_atexit(FUN_10ab24288,0x1137ec8d0,0x100000000);
        ___cxa_guard_release(0x1137ec7a0);
        unaff_x22 = 0xffffffffffffff28;
      }
    }
    lVar2 = 0x1137ec8d0;
    func_0x000107c280fc(0x1137ec8d0,param_2);
    unaff_x19 = (ulong)(lVar2 == 0x1137ec8d8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
    break;
    ___stack_chk_fail();
    lVar2 = -0xd8;
    pcVar3 = unaff_x21 + 0xd7;
    do {
      unaff_x21 = pcVar3 + -0x18;
      if (*pcVar3 < '\0') {
        __ZdlPv(*(undefined8 *)(pcVar3 + -0x17));
      }
      lVar2 = lVar2 + 0x18;
      pcVar3 = unaff_x21;
    } while (lVar2 != 0);
    ___cxa_guard_abort(0x1137ec7a0);
    unaff_x30 = FUN_10aca9f7c;
    __Unwind_Resume(unaff_x19);
    unaff_x20 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x130);
  }
  return;
}



/* Entry: 10aca9f80; end: 10acaa0c7;  */

undefined8 ** FUN_10aca9f80(long param_1,undefined8 *param_2)

{
  undefined8 *****pppppuVar1;
  long *plVar2;
  ulong uVar3;
  bool bVar4;
  undefined8 **ppuVar5;
  long *plVar6;
  long *plVar7;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 *puStack_60;
  ulong uStack_58;
  
  plVar6 = *(long **)(param_1 + 0x1d0);
  if (plVar6 == (long *)(param_1 + 0x1d8)) {
    ppuVar5 = (undefined8 **)0x0;
  }
  else {
    do {
      uVar3 = plVar6[5];
      if (-1 < (char)*(byte *)((long)plVar6 + 0x37)) {
        uVar3 = (ulong)*(byte *)((long)plVar6 + 0x37);
      }
      FUN_10a003c90(&ppppuStack_78,uVar3 + 1,&puStack_60);
      pppppuVar1 = (undefined8 *****)ppppuStack_78;
      if (-1 < (char)bStack_61) {
        pppppuVar1 = &ppppuStack_78;
      }
      if (uVar3 != 0) {
        plVar2 = (long *)plVar6[4];
        if (-1 < *(char *)((long)plVar6 + 0x37)) {
          plVar2 = plVar6 + 4;
        }
        _memmove(pppppuVar1,plVar2,uVar3);
      }
      *(undefined2 *)((long)pppppuVar1 + uVar3) = 0x5b;
      uVar3 = uStack_70;
      pppppuVar1 = (undefined8 *****)ppppuStack_78;
      if (-1 < (char)bStack_61) {
        uVar3 = (ulong)bStack_61;
        pppppuVar1 = &ppppuStack_78;
      }
      uStack_58 = param_2[1];
      puStack_60 = (undefined8 *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uStack_58 = (ulong)*(byte *)((long)param_2 + 0x17);
        puStack_60 = param_2;
      }
      ppuVar5 = &puStack_60;
      FUN_10a04236c(ppuVar5,pppppuVar1,uVar3);
      if ((char)bStack_61 < '\0') {
        __ZdlPv(ppppuStack_78);
      }
      if (((ulong)ppuVar5 & 1) != 0) {
        return ppuVar5;
      }
      plVar2 = (long *)plVar6[1];
      plVar7 = plVar6;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar7[2];
          bVar4 = (long *)*plVar6 != plVar7;
          plVar7 = plVar6;
        } while (bVar4);
      }
      else {
        do {
          plVar6 = plVar2;
          plVar2 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    } while (plVar6 != (long *)(param_1 + 0x1d8));
  }
  return ppuVar5;
}



/* Entry: 10acaa0c8; end: 10acaa0cf;  */

void FUN_10acaa0c8(undefined8 param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0;
  plVar5 = *(long **)(param_2 + 0x1b8);
  puStack_58 = &uStack_50;
  while (plVar5 != (long *)(param_2 + 0x1c0)) {
    func_0x000107c2a6b0(&puStack_58,plVar5 + 4,plVar5 + 4);
    plVar1 = (long *)plVar5[1];
    plVar4 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar4[2];
        bVar2 = (long *)*plVar5 != plVar4;
        plVar4 = plVar5;
      } while (bVar2);
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  plVar5 = *(long **)(param_2 + 0x170);
  while (plVar5 != (long *)(param_2 + 0x178)) {
    uVar3 = param_2 - 0x18U;
    FUN_10aca9f80(param_2 - 0x18U,plVar5 + 4);
    if ((uVar3 & 1) == 0) {
      func_0x000107c2a6b0(&puStack_58,plVar5 + 4,plVar5 + 4);
    }
    plVar1 = (long *)plVar5[1];
    plVar4 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar4[2];
        bVar2 = (long *)*plVar5 != plVar4;
        plVar4 = plVar5;
      } while (bVar2);
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  plVar5 = *(long **)(param_2 + 0x188);
  while (plVar5 != (long *)(param_2 + 400)) {
    func_0x000107c2a6b0(&puStack_58,plVar5 + 4,plVar5 + 4);
    plVar1 = (long *)plVar5[1];
    plVar4 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar4[2];
        bVar2 = (long *)*plVar5 != plVar4;
        plVar4 = plVar5;
      } while (bVar2);
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  FUN_10acb63c0(param_1,puStack_58,&uStack_50);
  func_0x000107c27bf0(&puStack_58,uStack_50);
  return;
}



/* Entry: 10acaa0d0; end: 10acaa433;  */

void FUN_10acaa0d0(ulong param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  long *plStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  undefined1 uStack_88;
  long *plStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined1 uStack_61;
  
  for (plVar6 = *(long **)(param_2 + 0x10); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    FUN_10aca73d0(param_1,plVar6 + 2,plVar6 + 5);
  }
  if (*(long **)(param_1 + 0x1d0) != (long *)(param_1 + 0x1d8)) {
    plVar6 = (long *)(param_1 + 0x1d0);
    plVar4 = *(long **)(param_1 + 0x1d0);
    do {
      if (*(char *)((long)plVar4 + 0x37) < '\0') {
        func_0x000107c3192c(&plStack_80,plVar4[4],plVar4[5]);
      }
      else {
        uStack_78 = plVar4[5];
        plStack_80 = (long *)plVar4[4];
        lStack_70 = plVar4[6];
      }
      lVar2 = param_2;
      FUN_10acd57a8(param_2,&plStack_80);
      if (lVar2 == 0) {
        uStack_88 = 0;
        uStack_98 = 0;
        plStack_a0 = plVar6;
        lStack_90 = param_1 + 0x188;
        FUN_10aca3a2c(&plStack_80,0,plVar4[8],param_1 + 0x188);
        puVar9 = *(ulong **)(param_1 + 0x178);
        uVar5 = *puVar9;
        puVar3 = &uStack_61;
        func_0x000107c2b05c(puVar3,&plStack_80);
        uVar5 = uVar5 + 0x9e3779b9;
        uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) ^ uVar5;
        uVar5 = (ulong)(puVar3 + (uVar5 >> 2) + uVar5 * 0x40 + 0x9e3779b9) ^ uVar5;
        uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) ^ uVar5;
        *puVar9 = plVar4[8] + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
        plVar8 = plVar6;
        func_0x00010acd5470(plVar6,plVar4);
        FUN_10acd4df4(&plStack_a0);
        FUN_10acd5084(&lStack_90);
      }
      else {
        plVar7 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) {
          do {
            plVar8 = (long *)plVar4[2];
            bVar1 = (long *)*plVar8 != plVar4;
            plVar4 = plVar8;
          } while (bVar1);
        }
        else {
          do {
            plVar8 = plVar7;
            plVar7 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
      }
      if (lStack_70 < 0) {
        __ZdlPv(plStack_80);
      }
      plVar4 = plVar8;
    } while (plVar8 != (long *)(param_1 + 0x1d8));
  }
  plVar6 = *(long **)(param_1 + 0x188);
  if (plVar6 != (long *)(param_1 + 400)) {
    plVar4 = (long *)(param_1 + 0x188);
    do {
      uVar5 = param_1;
      FUN_10aca9f80(param_1,plVar6 + 4);
      if (((uVar5 & 1) == 0) && (lVar2 = param_2, FUN_10acd57a8(param_2,plVar6 + 4), lVar2 == 0)) {
        uStack_78 = uStack_78 & 0xffffffffffffff00;
        uVar5 = **(ulong **)(param_1 + 0x178) + 0x9e3779b9;
        uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) ^ uVar5;
        **(ulong **)(param_1 + 0x178) = plVar6[7] + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5
        ;
        plVar8 = plVar4;
        plStack_80 = plVar4;
        func_0x00010a364ee8(plVar4,plVar6);
        func_0x00010a0da8c8(plVar6 + 4);
        __ZdlPv(plVar6);
        FUN_10acd5084(&plStack_80);
        plVar6 = plVar8;
      }
      else {
        plVar8 = (long *)plVar6[1];
        plVar7 = plVar6;
        if ((long *)plVar6[1] == (long *)0x0) {
          do {
            plVar6 = (long *)plVar7[2];
            bVar1 = (long *)*plVar6 != plVar7;
            plVar7 = plVar6;
          } while (bVar1);
        }
        else {
          do {
            plVar6 = plVar8;
            plVar8 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
      }
    } while (plVar6 != (long *)(param_1 + 400));
  }
  plVar6 = *(long **)(param_1 + 0x1a0);
  if (plVar6 != (long *)(param_1 + 0x1a8)) {
    plVar4 = (long *)(param_1 + 0x1a0);
    do {
      lVar2 = param_2;
      FUN_10acd57a8(param_2,plVar6 + 4);
      if (lVar2 == 0) {
        uStack_78 = uStack_78 & 0xffffffffffffff00;
        uVar5 = **(ulong **)(param_1 + 0x178) + 0x9e3779b9;
        uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) ^ uVar5;
        **(ulong **)(param_1 + 0x178) = plVar6[7] + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5
        ;
        plVar8 = plVar4;
        plStack_80 = plVar4;
        func_0x00010a364fe0(plVar4,plVar6);
        func_0x00010a36339c(plVar6 + 4);
        __ZdlPv(plVar6);
        FUN_10acd5500(&plStack_80);
        plVar6 = plVar8;
      }
      else {
        plVar8 = (long *)plVar6[1];
        plVar7 = plVar6;
        if ((long *)plVar6[1] == (long *)0x0) {
          do {
            plVar6 = (long *)plVar7[2];
            bVar1 = (long *)*plVar6 != plVar7;
            plVar7 = plVar6;
          } while (bVar1);
        }
        else {
          do {
            plVar6 = plVar8;
            plVar8 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
      }
    } while (plVar6 != (long *)(param_1 + 0x1a8));
  }
  return;
}



/* Entry: 10acaa434; end: 10acaa52b;  */

void FUN_10acaa434(long param_1,long param_2)

{
  ulong uVar1;
  long lStack_50;
  undefined1 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  lStack_30 = param_1 + 0x188;
  uStack_28 = 0;
  FUN_10acaa52c(*(undefined8 *)(param_1 + 0x178),lStack_30,param_2 + 0x188);
  lStack_40 = param_1 + 0x1a0;
  uStack_38 = 0;
  FUN_10acaa978(*(undefined8 *)(param_1 + 0x178),lStack_40,param_2 + 0x1a0);
  lStack_50 = param_1 + 0x1b8;
  uStack_48 = 0;
  if (param_1 != param_2) {
    FUN_10acd5b34(lStack_50,*(undefined8 *)(param_2 + 0x1b8),param_2 + 0x1c0);
  }
  uVar1 = **(ulong **)(param_1 + 0x178) + 0x9e3779b9;
  **(ulong **)(param_1 + 0x178) = uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  FUN_10acd588c(&lStack_50);
  FUN_10acaada8(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_10acd5500(&lStack_40);
  FUN_10acd5084(&lStack_30);
  return;
}



/* Entry: 10acaa52c; end: 10acaa977;  */

void FUN_10acaa52c(ulong *param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined1 auStack_68 [8];
  long *plStack_60;
  undefined1 uStack_51;
  
  plVar12 = param_2 + 1;
  plVar9 = (long *)*param_2;
  plVar8 = param_3 + 1;
  plVar11 = (long *)*param_3;
  if (plVar9 != plVar12 || plVar11 != plVar8) {
    do {
      if (plVar9 == plVar12) {
        while (plVar11 != plVar8) {
          FUN_10a36516c(auStack_68,&uStack_51,plVar11[8]);
          FUN_10acd70b4(param_2,plVar11[7],plVar11 + 4,auStack_68);
          plVar9 = plStack_60;
          if (plStack_60 != (long *)0x0) {
            plVar12 = plStack_60 + 1;
            do {
              lVar5 = *plVar12;
              cVar1 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *plVar12 = lVar5 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar5 == 0) {
              (**(code **)(*plStack_60 + 0x10))(plStack_60);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
          uVar4 = *param_1 + 0x9e3779b9;
          uVar4 = uVar4 * 0x40 + 0x9e3779b9 + (uVar4 >> 2) ^ uVar4;
          uVar4 = plVar11[7] + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
          *param_1 = (long)*(short *)(plVar11[8] + 0x20) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2)
                     ^ uVar4;
          plVar9 = (long *)plVar11[1];
          plVar12 = plVar11;
          if ((long *)plVar11[1] == (long *)0x0) {
            do {
              plVar11 = (long *)plVar12[2];
              bVar3 = (long *)*plVar11 != plVar12;
              plVar12 = plVar11;
            } while (bVar3);
          }
          else {
            do {
              plVar11 = plVar9;
              plVar9 = (long *)*plVar11;
            } while ((long *)*plVar11 != (long *)0x0);
          }
        }
        return;
      }
      if (plVar11 == plVar8) {
        do {
          uVar4 = *param_1 + 0x9e3779b9;
          uVar4 = uVar4 * 0x40 + 0x9e3779b9 + (uVar4 >> 2) ^ uVar4;
          *param_1 = plVar9[7] + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
          plVar11 = param_2;
          func_0x00010a364ee8(param_2,plVar9);
          func_0x00010a0da8c8(plVar9 + 4);
          __ZdlPv(plVar9);
          plVar9 = plVar11;
        } while (plVar12 != plVar11);
        return;
      }
      uVar4 = plVar9[7];
      if (uVar4 == plVar11[7]) {
        lVar5 = plVar9[8];
        if (*(short *)(lVar5 + 0x20) == *(short *)(plVar11[8] + 0x20)) {
          FUN_10a7a48a0(lVar5 + 0x24,plVar11[8] + 0x24);
        }
        else {
          FUN_10a36516c(auStack_68,&uStack_51);
          func_0x00010a0da650(plVar9 + 8,auStack_68);
          plVar2 = plStack_60;
          if (plStack_60 != (long *)0x0) {
            plVar7 = plStack_60 + 1;
            do {
              lVar5 = *plVar7;
              cVar1 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar3) {
                *plVar7 = lVar5 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar5 == 0) {
              (**(code **)(*plStack_60 + 0x10))(plStack_60);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
            }
          }
          uVar4 = *param_1 + 0x9e3779b9;
          uVar4 = uVar4 * 0x40 + 0x9e3779b9 + (uVar4 >> 2) ^ uVar4;
          uVar4 = plVar11[7] + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
          *param_1 = (long)*(short *)(plVar11[8] + 0x20) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2)
                     ^ uVar4;
        }
        plVar2 = (long *)plVar9[1];
        plVar7 = plVar9;
        if ((long *)plVar9[1] == (long *)0x0) {
          do {
            plVar9 = (long *)plVar7[2];
            bVar3 = (long *)*plVar9 != plVar7;
            plVar7 = plVar9;
          } while (bVar3);
        }
        else {
          do {
            plVar9 = plVar2;
            plVar2 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
        plVar2 = (long *)plVar11[1];
        plVar7 = plVar11;
        if ((long *)plVar11[1] == (long *)0x0) {
          do {
            plVar11 = (long *)plVar7[2];
            bVar3 = (long *)*plVar11 != plVar7;
            plVar7 = plVar11;
          } while (bVar3);
        }
        else {
          do {
            plVar11 = plVar2;
            plVar2 = (long *)*plVar11;
          } while ((long *)*plVar11 != (long *)0x0);
        }
      }
      else if (uVar4 < (ulong)plVar11[7]) {
        uVar6 = *param_1 + 0x9e3779b9;
        uVar6 = uVar6 * 0x40 + 0x9e3779b9 + (uVar6 >> 2) ^ uVar6;
        *param_1 = uVar4 + 0x9e3779b9 + uVar6 * 0x40 + (uVar6 >> 2) ^ uVar6;
        plVar2 = (long *)plVar9[1];
        plVar7 = plVar9;
        if ((long *)plVar9[1] == (long *)0x0) {
          do {
            plVar10 = (long *)plVar7[2];
            bVar3 = (long *)*plVar10 != plVar7;
            plVar7 = plVar10;
          } while (bVar3);
        }
        else {
          do {
            plVar10 = plVar2;
            plVar2 = (long *)*plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
        }
        func_0x00010a364ee8(param_2,plVar9);
        func_0x00010a0da8c8(plVar9 + 4);
        __ZdlPv(plVar9);
        plVar9 = plVar10;
      }
      else {
        FUN_10a36516c(auStack_68,&uStack_51,plVar11[8]);
        FUN_10acd70b4(param_2,plVar11[7],plVar11 + 4,auStack_68);
        plVar2 = plStack_60;
        if (plStack_60 != (long *)0x0) {
          plVar7 = plStack_60 + 1;
          do {
            lVar5 = *plVar7;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_60 + 0x10))(plStack_60);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
        uVar4 = *param_1 + 0x9e3779b9;
        uVar4 = uVar4 * 0x40 + 0x9e3779b9 + (uVar4 >> 2) ^ uVar4;
        uVar4 = plVar11[7] + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
        *param_1 = (long)*(short *)(plVar11[8] + 0x20) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^
                   uVar4;
        plVar2 = (long *)plVar11[1];
        plVar7 = plVar11;
        if ((long *)plVar11[1] == (long *)0x0) {
          do {
            plVar11 = (long *)plVar7[2];
            bVar3 = (long *)*plVar11 != plVar7;
            plVar7 = plVar11;
          } while (bVar3);
        }
        else {
          do {
            plVar11 = plVar2;
            plVar2 = (long *)*plVar11;
          } while ((long *)*plVar11 != (long *)0x0);
        }
      }
    } while ((plVar9 != plVar12) || (plVar11 != plVar8));
  }
  return;
}



/* Entry: 10acaa978; end: 10acaada7;  */

void FUN_10acaa978(ulong *param_1,long *param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plStack_68;
  
  plVar11 = param_2 + 1;
  plVar8 = (long *)*param_2;
  plVar7 = param_3 + 1;
  plVar10 = (long *)*param_3;
  if (plVar8 != plVar11 || plVar10 != plVar7) {
    do {
      if (plVar8 == plVar11) {
        while (plVar10 != plVar7) {
          FUN_10a34fcb0(&plStack_68,plVar10[8]);
          FUN_10acd73a4(param_2,plVar10[7],plVar10 + 4,&plStack_68);
          plVar8 = plStack_68;
          plStack_68 = (long *)0x0;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 8))();
          }
          iVar2 = (int)plVar10[8] + 0x188;
          FUN_10aca355c();
          uVar5 = *param_1 + 0x9e3779b9;
          uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) ^ uVar5;
          uVar5 = plVar10[7] + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
          *param_1 = (long)iVar2 + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
          plVar8 = (long *)plVar10[1];
          plVar11 = plVar10;
          if ((long *)plVar10[1] == (long *)0x0) {
            do {
              plVar10 = (long *)plVar11[2];
              bVar1 = (long *)*plVar10 != plVar11;
              plVar11 = plVar10;
            } while (bVar1);
          }
          else {
            do {
              plVar10 = plVar8;
              plVar8 = (long *)*plVar10;
            } while ((long *)*plVar10 != (long *)0x0);
          }
        }
        return;
      }
      if (plVar10 == plVar7) {
        do {
          uVar5 = *param_1 + 0x9e3779b9;
          uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) ^ uVar5;
          *param_1 = plVar8[7] + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
          plVar10 = param_2;
          func_0x00010a364fe0(param_2,plVar8);
          func_0x00010a36339c(plVar8 + 4);
          __ZdlPv(plVar8);
          plVar8 = plVar10;
        } while (plVar11 != plVar10);
        return;
      }
      uVar5 = plVar8[7];
      if (uVar5 == plVar10[7]) {
        plVar9 = plVar8 + 8;
        plVar3 = (long *)*plVar9;
        (**(code **)(*plVar3 + 0x28))();
        plVar4 = (long *)plVar10[8];
        (**(code **)(*plVar4 + 0x28))();
        if ((int)plVar3 == (int)plVar4) {
          FUN_10a32f140(*plVar9,plVar10[8] + 0x188);
        }
        else {
          FUN_10a34fcb0(&plStack_68,plVar10[8]);
          func_0x00010a350f2c(plVar9,&plStack_68);
          plVar3 = plStack_68;
          plStack_68 = (long *)0x0;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
          iVar2 = (int)plVar10[8] + 0x188;
          FUN_10aca355c();
          uVar5 = *param_1 + 0x9e3779b9;
          uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) ^ uVar5;
          uVar5 = plVar10[7] + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
          *param_1 = (long)iVar2 + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
        }
        plVar3 = (long *)plVar8[1];
        plVar4 = plVar8;
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar8 = (long *)plVar4[2];
            bVar1 = (long *)*plVar8 != plVar4;
            plVar4 = plVar8;
          } while (bVar1);
        }
        else {
          do {
            plVar8 = plVar3;
            plVar3 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
        plVar3 = (long *)plVar10[1];
        plVar4 = plVar10;
        if ((long *)plVar10[1] == (long *)0x0) {
          do {
            plVar10 = (long *)plVar4[2];
            bVar1 = (long *)*plVar10 != plVar4;
            plVar4 = plVar10;
          } while (bVar1);
        }
        else {
          do {
            plVar10 = plVar3;
            plVar3 = (long *)*plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
        }
      }
      else if (uVar5 < (ulong)plVar10[7]) {
        uVar6 = *param_1 + 0x9e3779b9;
        uVar6 = uVar6 * 0x40 + 0x9e3779b9 + (uVar6 >> 2) ^ uVar6;
        *param_1 = uVar5 + 0x9e3779b9 + uVar6 * 0x40 + (uVar6 >> 2) ^ uVar6;
        plVar3 = (long *)plVar8[1];
        plVar4 = plVar8;
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar9 = (long *)plVar4[2];
            bVar1 = (long *)*plVar9 != plVar4;
            plVar4 = plVar9;
          } while (bVar1);
        }
        else {
          do {
            plVar9 = plVar3;
            plVar3 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
        func_0x00010a364fe0(param_2,plVar8);
        func_0x00010a36339c(plVar8 + 4);
        __ZdlPv(plVar8);
        plVar8 = plVar9;
      }
      else {
        FUN_10a34fcb0(&plStack_68,plVar10[8]);
        FUN_10acd73a4(param_2,plVar10[7],plVar10 + 4,&plStack_68);
        plVar3 = plStack_68;
        plStack_68 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        iVar2 = (int)plVar10[8] + 0x188;
        FUN_10aca355c();
        uVar5 = *param_1 + 0x9e3779b9;
        uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) ^ uVar5;
        uVar5 = plVar10[7] + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
        *param_1 = (long)iVar2 + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
        plVar3 = (long *)plVar10[1];
        plVar4 = plVar10;
        if ((long *)plVar10[1] == (long *)0x0) {
          do {
            plVar10 = (long *)plVar4[2];
            bVar1 = (long *)*plVar10 != plVar4;
            plVar4 = plVar10;
          } while (bVar1);
        }
        else {
          do {
            plVar10 = plVar3;
            plVar3 = (long *)*plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
        }
      }
    } while ((plVar8 != plVar11) || (plVar10 != plVar7));
  }
  return;
}



/* Entry: 10acaada8; end: 10acaae9b;  */

long * FUN_10acaada8(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_28 [8];
  
  if (param_1[2] == param_2[2]) {
    plVar2 = (long *)*param_1;
    if (plVar2 != param_1 + 1) {
      plVar3 = (long *)*param_2;
      do {
        if (plVar2[7] != plVar3[7] || plVar2[8] != plVar3[8]) goto LAB_10acaae64;
        plVar4 = (long *)plVar2[1];
        plVar5 = plVar2;
        if ((long *)plVar2[1] == (long *)0x0) {
          do {
            plVar2 = (long *)plVar5[2];
            bVar1 = (long *)*plVar2 != plVar5;
            plVar5 = plVar2;
          } while (bVar1);
        }
        else {
          do {
            plVar2 = plVar4;
            plVar4 = (long *)*plVar2;
          } while ((long *)*plVar2 != (long *)0x0);
        }
        plVar4 = plVar3;
        plVar5 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          do {
            plVar3 = (long *)plVar4[2];
            bVar1 = (long *)*plVar3 != plVar4;
            plVar4 = plVar3;
          } while (bVar1);
        }
        else {
          do {
            plVar3 = plVar5;
            plVar5 = (long *)*plVar3;
          } while ((long *)*plVar3 != (long *)0x0);
        }
      } while (plVar2 != param_1 + 1);
    }
  }
  else {
LAB_10acaae64:
    if (param_1 != param_2) {
      FUN_10acd616c(param_1,*param_2,param_2 + 1);
    }
    func_0x00010a1bd170(auStack_28);
    FUN_10acd5f34(param_1);
  }
  return param_1;
}



/* Entry: 10acaae9c; end: 10acab10f;  */

void FUN_10acaae9c(long param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lStack_a0;
  undefined1 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_59;
  long lStack_58;
  
  lStack_a0 = param_1 + 0x1a0;
  uStack_98 = 0;
  lVar9 = *(long *)(param_1 + 0x1a8);
  if (lVar9 != 0) {
    lVar11 = param_1 + 0x1a8;
    do {
      lVar1 = 8;
      if (*(ulong *)(param_2 + 0x18) <= *(ulong *)(lVar9 + 0x38)) {
        lVar1 = 0;
        lVar11 = lVar9;
      }
      lVar9 = *(long *)(lVar9 + lVar1);
    } while (lVar9 != 0);
    if (((lVar11 != param_1 + 0x1a8) && (*(ulong *)(lVar11 + 0x38) <= *(ulong *)(param_2 + 0x18)))
       && (*(long *)(lVar11 + 0x40) != 0)) {
      plVar6 = *(long **)(*(long *)(*(long *)(lVar11 + 0x40) + 0x188) + 0x268);
      if (plVar6 == (long *)0x0) {
        iVar4 = 4;
      }
      else {
        (**(code **)(*plVar6 + 0xe0))();
        iVar4 = (int)plVar6;
      }
      plVar6 = *(long **)(*param_3 + 0x268);
      if (plVar6 == (long *)0x0) {
        iVar5 = 4;
      }
      else {
        (**(code **)(*plVar6 + 0xe0))();
        iVar5 = (int)plVar6;
      }
      if (iVar4 == iVar5) {
        FUN_10a32f140(*(undefined8 *)(lVar11 + 0x40),param_3);
        plStack_88 = (long *)param_4[1];
        plStack_90 = (long *)*param_4;
        lStack_78 = param_4[3];
        lStack_80 = param_4[2];
        lStack_70 = param_4[4];
        FUN_10a351a84(*(long *)(lVar11 + 0x40) + 0x198,&plStack_90);
        goto LAB_10acab0a8;
      }
    }
  }
  plVar7 = param_3;
  FUN_10aca355c();
  plVar8 = (long *)0x1e0;
  __Znwm();
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110bc5b10;
  plVar6 = plVar8 + 3;
  FUN_10acd4bf0(plVar6,param_2,param_3,param_4,plVar7);
  plStack_90 = plVar6;
  plStack_88 = plVar8;
  FUN_10a34f708(&plStack_90,plVar8 + 5,plVar6);
  lVar9 = lStack_a0;
  lStack_58 = param_2;
  FUN_10a36599c(lStack_a0,param_2,&UNK_10dd5b8f9,&lStack_58,&uStack_59);
  FUN_10a32efa8(lVar9 + 0x40,&plStack_90);
  plVar6 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar8 = plStack_88 + 1;
    do {
      lVar9 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  uVar10 = **(ulong **)(param_1 + 0x178) + 0x9e3779b9;
  uVar10 = uVar10 * 0x40 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10;
  uVar10 = *(long *)(param_2 + 0x18) + uVar10 * 0x40 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10;
  **(ulong **)(param_1 + 0x178) =
       uVar10 * 0x40 + (long)(int)plVar7 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10;
LAB_10acab0a8:
  FUN_10acd5500(&lStack_a0);
  return;
}



/* Entry: 10acab110; end: 10acab1a3;  */

void FUN_10acab110(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  undefined1 uStack_28;
  
  lVar1 = param_1 + 0x1a0;
  uStack_28 = 0;
  lStack_30 = lVar1;
  func_0x00010a364f58();
  if (lVar1 != 0) {
    uVar2 = **(ulong **)(param_1 + 0x178) + 0x9e3779b9;
    uVar2 = uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
    **(ulong **)(param_1 + 0x178) =
         *(long *)(param_2 + 0x18) + uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
  }
  FUN_10acd5500(&lStack_30);
  return;
}



/* Entry: 10acab1a4; end: 10acab4e7;  */

void FUN_10acab1a4(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long *plStack_80;
  long lStack_78;
  undefined1 uStack_70;
  long *plStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lStack_78 = param_1 + 0x1b8;
  uStack_70 = 0;
  lVar6 = *(long *)(param_1 + 0x1c0);
  if (lVar6 != 0) {
    lVar8 = param_1 + 0x1c0;
    do {
      lVar1 = 8;
      if ((ulong)param_2[3] <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar8 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if (((lVar8 != param_1 + 0x1c0) && (*(ulong *)(lVar8 + 0x38) <= (ulong)param_2[3])) &&
       (*(long *)(lVar8 + 0x40) != 0)) {
      if ((long *)(*(long *)(lVar8 + 0x40) + 0x20) != param_3) {
        FUN_10a0cf2cc();
      }
      goto LAB_10acab464;
    }
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&lStack_c0,*param_2,param_2[1]);
  }
  else {
    lStack_b8 = param_2[1];
    lStack_c0 = *param_2;
    lStack_b0 = param_2[2];
  }
  lStack_a8 = param_2[3];
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  FUN_10a05151c(&lStack_a0,*param_3,param_3[1],param_3[1] - *param_3);
  plVar4 = (undefined8 *)0x50;
  __Znwm();
  lVar8 = lStack_78;
  lVar6 = lStack_b0;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c6c028;
  puVar7 = plVar4 + 3;
  plVar4[4] = lStack_b8;
  plVar4[3] = lStack_c0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  plVar4[5] = lVar6;
  plVar4[6] = lStack_a8;
  plVar4[8] = lStack_98;
  plVar4[7] = lStack_a0;
  plVar4[9] = uStack_90;
  lStack_98 = 0;
  uStack_90 = 0;
  lStack_a0 = 0;
  uVar11 = param_2[3];
  plVar9 = (long *)(lStack_78 + 8);
  plVar5 = (long *)*plVar9;
  plVar10 = plVar9;
  if ((long *)*plVar9 != (long *)0x0) {
    do {
      while (plVar9 = plVar5, uVar11 < (ulong)plVar9[7]) {
        plVar5 = (long *)*plVar9;
        plVar10 = plVar9;
        if ((long *)*plVar9 == (long *)0x0) goto LAB_10acab328;
      }
      if (uVar11 <= (ulong)plVar9[7]) goto LAB_10acab390;
      plVar5 = (long *)plVar9[1];
    } while ((long *)plVar9[1] != (long *)0x0);
    plVar10 = plVar9 + 1;
  }
LAB_10acab328:
  plVar5 = (long *)0x50;
  puStack_88 = puVar7;
  plStack_80 = plVar4;
  __Znwm();
  lStack_60 = lVar8;
  uStack_58 = 0;
  plStack_68 = plVar5;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 4,*param_2,param_2[1]);
    uVar11 = param_2[3];
  }
  else {
    lVar6 = *param_2;
    plVar5[5] = param_2[1];
    plVar5[4] = lVar6;
    plVar5[6] = param_2[2];
  }
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[7] = uVar11;
  FUN_10acd5df8(lVar8,plVar9,plVar10,plVar5);
  plVar4 = plStack_80;
  puVar7 = puStack_88;
  plVar9 = plVar5;
LAB_10acab390:
  puStack_88 = (undefined8 *)0x0;
  plStack_80 = (long *)0x0;
  plVar5 = (long *)plVar9[9];
  plVar9[8] = (long)puVar7;
  plVar9[9] = (long)plVar4;
  if (plVar5 != (long *)0x0) {
    plVar4 = plVar5 + 1;
    do {
      lVar6 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar4 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar5 = plStack_80 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (lStack_b0 < 0) {
    __ZdlPv(lStack_c0);
  }
  uVar11 = **(ulong **)(param_1 + 0x178) + 0x9e3779b9;
  uVar11 = uVar11 * 0x40 + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11;
  **(ulong **)(param_1 + 0x178) = param_2[3] + uVar11 * 0x40 + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11;
LAB_10acab464:
  FUN_10acd588c(&lStack_78);
  return;
}



/* Entry: 10acab4e8; end: 10acab527;  */

undefined8 * FUN_10acab4e8(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10acab528; end: 10acab5fb;  */

void FUN_10acab528(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  
  param_1[6] = &UNK_10e52b660;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) & 0xfe00;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = &UNK_10e52b660;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = &UNK_10e52b660;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(ushort *)((long)param_1 + 0x109) = *(ushort *)((long)param_1 + 0x109) & 0xfc00;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  *param_1 = &PTR_FUN_110c6a748;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_110c6a7c8;
  param_1[4] = &PTR_DAT_110c6a808;
  param_1[5] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = &PTR_DAT_110c6a838;
  lVar2 = param_2[1];
  param_1[0x2f] = *param_2;
  param_1[0x30] = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x31] = param_1 + 0x32;
  if ((bRam00000001137ec780 & 1) == 0) {
    bRam00000001137ec780 = 1;
  }
  return;
}



/* Entry: 10acab5fc; end: 10acab67b;  */

void FUN_10acab5fc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(param_2,0,10);
  FUN_10acab67c(param_1,(long)(int)param_2);
  FUN_10a2f568c(aiStack_30,*param_3,param_1);
  func_0x0001098968d0(param_3 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10acab67c; end: 10acab777;  */

long FUN_10acab67c(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  long *plStack_30;
  ulong uStack_28;
  
  lVar6 = *(long *)(param_1 + 400);
  if (lVar6 != 0) {
    lVar5 = param_1 + 400;
    do {
      lVar2 = 8;
      if (param_2 <= *(ulong *)(lVar6 + 0x20)) {
        lVar2 = 0;
        lVar5 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar2);
    } while (lVar6 != 0);
    if ((lVar5 != param_1 + 400) && (*(ulong *)(lVar5 + 0x20) <= param_2)) goto LAB_10acab748;
  }
  lVar5 = param_1 + 0x188;
  uStack_28 = param_2;
  FUN_10acd649c(auStack_38,&lStack_48,param_1 + 0x178);
  uStack_40 = 0;
  lStack_48 = lVar5;
  func_0x00010acd6910(lVar5,&uStack_28,&uStack_28,auStack_38);
  FUN_10acd6668(&lStack_48);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
LAB_10acab748:
  return lVar5 + 0x28;
}



/* Entry: 10acab778; end: 10acab77f;  */

void FUN_10acab778(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  param_1 = param_1 + -0x18;
  __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(param_2,0,10);
  FUN_10acab67c(param_1,(long)(int)param_2);
  FUN_10a2f568c(aiStack_30,*param_3,param_1);
  func_0x0001098968d0(param_3 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10acab780; end: 10acab85f;  */

void FUN_10acab780(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [24];
  long *plStack_40;
  long *plStack_38;
  
  __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(param_2,0,10);
  if (*(int *)(param_3 + 1) == 7) {
    FUN_10acab67c();
    uVar8 = *param_1;
    FUN_10a2f5d64(auStack_58,*param_3,param_3 + 1);
    FUN_10acaa0d0(uVar8,auStack_58);
    FUN_10a2f5984(auStack_58);
    return;
  }
  puVar5 = (undefined8 *)param_1[0x32];
  if (puVar5 != (undefined8 *)0x0) {
    puVar7 = param_1 + 0x32;
    do {
      lVar6 = 8;
      if ((ulong)(long)(int)param_2 <= (ulong)puVar5[4]) {
        lVar6 = 0;
        puVar7 = puVar5;
      }
      puVar5 = *(undefined8 **)((long)puVar5 + lVar6);
    } while (puVar5 != (undefined8 *)0x0);
    if ((puVar7 != param_1 + 0x32) && ((ulong)puVar7[4] <= (ulong)(long)(int)param_2)) {
      plVar4 = (long *)0x20;
      __Znwm();
      plVar4[2] = 0;
      *plVar4 = (long)&PTR_DAT_110bd9fd8;
      plVar4[1] = 0;
      plStack_40 = plVar4 + 3;
      *plStack_40 = 0;
      plStack_38 = plVar4;
      FUN_10acaba6c(puVar7[5] + 0x178,&plStack_40);
      plVar4 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      FUN_10acabad0(param_1 + 0x31,puVar7);
    }
  }
  return;
}



/* Entry: 10acab860; end: 10acab947;  */

void FUN_10acab860(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = *(long *)(param_1 + 400);
  if (lVar6 != 0) {
    lVar7 = param_1 + 400;
    do {
      lVar2 = 8;
      if (param_2 <= *(ulong *)(lVar6 + 0x20)) {
        lVar2 = 0;
        lVar7 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar2);
    } while (lVar6 != 0);
    if ((lVar7 != param_1 + 400) && (*(ulong *)(lVar7 + 0x20) <= param_2)) {
      plVar5 = (long *)0x20;
      __Znwm();
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_DAT_110bd9fd8;
      plVar5[1] = 0;
      plStack_40 = plVar5 + 3;
      *plStack_40 = 0;
      plStack_38 = plVar5;
      FUN_10acaba6c(*(long *)(lVar7 + 0x28) + 0x178,&plStack_40);
      plVar5 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      FUN_10acabad0(param_1 + 0x188,lVar7);
    }
  }
  return;
}



/* Entry: 10acab948; end: 10acab95f;  */

void FUN_10acab948(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_58 [24];
  long *plStack_40;
  long *plStack_38;
  
  puVar6 = (undefined8 *)(param_1 + -0x18);
  __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(param_2,0,10);
  if (*(int *)(param_3 + 1) == 7) {
    FUN_10acab67c();
    uVar9 = *puVar6;
    FUN_10a2f5d64(auStack_58,*param_3,param_3 + 1);
    FUN_10acaa0d0(uVar9,auStack_58);
    FUN_10a2f5984(auStack_58);
    return;
  }
  lVar7 = *(long *)(param_1 + 0x178);
  if (lVar7 != 0) {
    lVar8 = param_1 + 0x178;
    do {
      lVar2 = 8;
      if ((ulong)(long)(int)param_2 <= *(ulong *)(lVar7 + 0x20)) {
        lVar2 = 0;
        lVar8 = lVar7;
      }
      lVar7 = *(long *)(lVar7 + lVar2);
    } while (lVar7 != 0);
    if ((lVar8 != param_1 + 0x178) && (*(ulong *)(lVar8 + 0x20) <= (ulong)(long)(int)param_2)) {
      plVar5 = (long *)0x20;
      __Znwm();
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_DAT_110bd9fd8;
      plVar5[1] = 0;
      plStack_40 = plVar5 + 3;
      *plStack_40 = 0;
      plStack_38 = plVar5;
      FUN_10acaba6c(*(long *)(lVar8 + 0x28) + 0x178,&plStack_40);
      plVar5 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      FUN_10acabad0(param_1 + 0x170,lVar8);
    }
  }
  return;
}



/* Entry: 10acab960; end: 10acaba63;  */

void FUN_10acab960(undefined8 param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  plVar3 = *(long **)(param_2 + 0x188);
  puStack_48 = &uStack_40;
  while (plVar3 != (long *)(param_2 + 400)) {
    __ZNSt3__19to_stringEm(auStack_60,plVar3[4]);
    func_0x000107c283ac(&puStack_48,auStack_60,auStack_60);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  FUN_10acb63c0(param_1,puStack_48,&uStack_40);
  func_0x000107c27bf0(&puStack_48,uStack_40);
  return;
}



/* Entry: 10acaba64; end: 10acaba6b;  */

void FUN_10acaba64(undefined8 param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  plVar3 = *(long **)(param_2 + 0x170);
  puStack_48 = &uStack_40;
  while (plVar3 != (long *)(param_2 + 0x178)) {
    __ZNSt3__19to_stringEm(auStack_60,plVar3[4]);
    func_0x000107c283ac(&puStack_48,auStack_60,auStack_60);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  FUN_10acb63c0(param_1,puStack_48,&uStack_40);
  func_0x000107c27bf0(&puStack_48,uStack_40);
  return;
}



/* Entry: 10acaba6c; end: 10acabacf;  */

undefined8 * FUN_10acaba6c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10acabad0; end: 10acabbdf;  */

undefined8 * FUN_10acabad0(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int aiStack_a8 [2];
  undefined8 *puStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 *apuStack_60 [2];
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_38;
  
  ppuVar5 = apuStack_60;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_48 = *(long **)(param_2 + 0x30);
  uStack_50 = *(undefined8 *)(param_2 + 0x28);
  if (*(long *)(param_2 + 0x30) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0x30) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar8 = (undefined8 *)0x0;
  FUN_10acb6498(apuStack_60,param_1,0,0,&uStack_50,1);
  puVar4 = apuStack_60[0];
  lVar10 = param_2;
  FUN_10acb65e0(apuStack_60[0],param_2);
  func_0x00010a2f5728((undefined8 *)(param_2 + 0x28));
  __ZdlPv(param_2);
  FUN_10acb6650();
  plVar6 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar5 = (undefined8 **)plVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010a2f5728(&uStack_50);
  plVar6 = (long *)ppuVar5;
  __Unwind_Resume();
  pcStack_68 = FUN_10acabbe0;
  plStack_78 = (long *)ppuVar5;
  puStack_70 = &stack0xfffffffffffffff0;
  __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(lVar10,0,10);
  FUN_10acabcd4(plVar6,(long)(int)lVar10);
  plStack_88 = (long *)plVar6[1];
  lStack_90 = *plVar6;
  uVar7 = *puVar8;
  if (plVar6[1] != 0) {
    plVar6 = (long *)(plVar6[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_98 = &PTR_DAT_110c6b038;
  func_0x000109899de4(aiStack_a8,uVar7,&lStack_90,&ppuStack_98,0,0);
  plVar6 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  puVar8 = puVar8 + 1;
  func_0x0001098968d0(puVar8,aiStack_a8);
  if ((3 < aiStack_a8[0]) && (puVar8 = puStack_a0, puStack_a0 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a0)();
    puVar8 = puStack_a0;
  }
  return puVar8;
}



/* Entry: 10acabbe0; end: 10acabcd3;  */

void FUN_10acabbe0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  int aiStack_48 [2];
  undefined8 *puStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(param_2,0,10);
  FUN_10acabcd4(param_1,(long)(int)param_2);
  plStack_28 = (long *)param_1[1];
  uStack_30 = *param_1;
  uVar5 = *param_3;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_38 = &PTR_DAT_110c6b038;
  func_0x000109899de4(aiStack_48,uVar5,&uStack_30,&ppuStack_38,0,0);
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
  func_0x0001098968d0(param_3 + 1,aiStack_48);
  if ((3 < aiStack_48[0]) && (puStack_40 != (undefined8 *)0x0)) {
    (**(code **)*puStack_40)();
  }
  return;
}



/* Entry: 10acabcd4; end: 10acabe7f;  */

undefined8 *** FUN_10acabcd4(long *param_1,undefined8 ***param_2,undefined8 ***param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  long *plVar5;
  long **pplVar6;
  long *plVar7;
  long lVar8;
  int aiStack_b8 [2];
  undefined8 **ppuStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long *aplStack_70 [2];
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 **ppuStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  long lStack_28;
  
  pplVar6 = aplStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)param_1[0x34];
  ppuStack_48 = param_2;
  if (plVar7 != (long *)0x0) {
    plVar5 = param_1 + 0x34;
    do {
      lVar8 = 8;
      if (param_2 <= (undefined8 ***)plVar7[4]) {
        lVar8 = 0;
        plVar5 = plVar7;
      }
      plVar7 = *(long **)((long)plVar7 + lVar8);
    } while (plVar7 != (long *)0x0);
    if ((plVar5 != param_1 + 0x34) && (plStack_90 = param_1, (undefined8 ***)plVar5[4] <= param_2))
    goto LAB_10acabe1c;
  }
  FUN_10acd6ac4(&uStack_60,aplStack_70,param_1 + 0x31);
  plStack_38 = plStack_58;
  uStack_40 = uStack_60;
  if (plStack_58 != (long *)0x0) {
    plVar7 = plStack_58 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10acad868(aplStack_70,param_1 + 0x33,&uStack_40,1,0,0);
  param_2 = &ppuStack_48;
  param_3 = &ppuStack_48;
  plVar5 = aplStack_70[0];
  func_0x00010acd6f80(aplStack_70[0],param_2,param_3,&uStack_60);
  FUN_10acd6d68();
  plVar7 = plStack_38;
  param_1 = (long *)pplVar6;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_1 = plVar7;
    }
  }
  plStack_90 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar7 = plStack_58 + 1;
    do {
      lVar8 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      param_1 = plStack_58;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
LAB_10acabe1c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    FUN_10acd6d68(aplStack_70);
    func_0x00010acd6c70(&uStack_40);
    func_0x00010acd6c70(&uStack_60);
    plVar7 = param_1;
    __Unwind_Resume();
    plVar7 = plVar7 + -3;
    pcStack_78 = FUN_10acabe80;
    plStack_88 = param_1;
    puStack_80 = &stack0xfffffffffffffff0;
    __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(param_2,0,10);
    FUN_10acabcd4(plVar7,(long)(int)param_2);
    plStack_98 = (long *)plVar7[1];
    lStack_a0 = *plVar7;
    ppuVar4 = *param_3;
    if (plVar7[1] != 0) {
      plVar7 = (long *)(plVar7[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_a8 = &PTR_DAT_110c6b038;
    func_0x000109899de4(aiStack_b8,ppuVar4,&lStack_a0,&ppuStack_a8,0,0);
    plVar7 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar5 = plStack_98 + 1;
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
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    param_3 = param_3 + 1;
    func_0x0001098968d0(param_3,aiStack_b8);
    if ((3 < aiStack_b8[0]) &&
       (param_3 = (undefined8 ***)ppuStack_b0, (undefined8 ***)ppuStack_b0 != (undefined8 ***)0x0))
    {
      (*(code *)**ppuStack_b0)();
      param_3 = (undefined8 ***)ppuStack_b0;
    }
    return param_3;
  }
  return (undefined8 ***)(plVar5 + 5);
}



/* Entry: 10acabe80; end: 10acabe9f;  */

void FUN_10acabe80(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int aiStack_48 [2];
  undefined8 *puStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  puVar6 = (undefined8 *)(param_1 + -0x18);
  __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(param_2,0,10);
  FUN_10acabcd4(puVar6,(long)(int)param_2);
  plStack_28 = (long *)puVar6[1];
  uStack_30 = *puVar6;
  uVar5 = *param_3;
  if (puVar6[1] != 0) {
    plVar1 = (long *)(puVar6[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_38 = &PTR_DAT_110c6b038;
  func_0x000109899de4(aiStack_48,uVar5,&uStack_30,&ppuStack_38,0,0);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  func_0x0001098968d0(param_3 + 1,aiStack_48);
  if ((3 < aiStack_48[0]) && (puStack_40 != (undefined8 *)0x0)) {
    (**(code **)*puStack_40)();
  }
  return;
}



/* Entry: 10acabea0; end: 10acabfa3;  */

void FUN_10acabea0(undefined8 param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  plVar3 = *(long **)(param_2 + 0x198);
  puStack_48 = &uStack_40;
  while (plVar3 != (long *)(param_2 + 0x1a0)) {
    __ZNSt3__19to_stringEm(auStack_60,plVar3[4]);
    func_0x000107c283ac(&puStack_48,auStack_60,auStack_60);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  FUN_10acb63c0(param_1,puStack_48,&uStack_40);
  func_0x000107c27bf0(&puStack_48,uStack_40);
  return;
}



/* Entry: 10acabfa4; end: 10acabfab;  */

void FUN_10acabfa4(undefined8 param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  plVar3 = *(long **)(param_2 + 0x180);
  puStack_48 = &uStack_40;
  while (plVar3 != (long *)(param_2 + 0x188)) {
    __ZNSt3__19to_stringEm(auStack_60,plVar3[4]);
    func_0x000107c283ac(&puStack_48,auStack_60,auStack_60);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  FUN_10acb63c0(param_1,puStack_48,&uStack_40);
  func_0x000107c27bf0(&puStack_48,uStack_40);
  return;
}



/* Entry: 10acabfac; end: 10acad00f;  */

long * FUN_10acabfac(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    long *param_5,long *param_6)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  int iVar19;
  int iVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  long *plVar23;
  undefined4 uVar24;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a0;
  undefined **ppuStack_198;
  long *plStack_190;
  long lStack_188;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined7 uStack_168;
  char cStack_161;
  undefined8 uStack_160;
  undefined8 auStack_158 [2];
  char cStack_141;
  code *pcStack_140;
  undefined **ppuStack_138;
  undefined8 *puStack_130;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_5[0x34];
  func_0x00010acb6b2c();
  param_5[0x34] = 0;
  param_5[0x35] = 0;
  param_5[0x33] = (long)(param_5 + 0x34);
  lVar15 = -(ulong)uRam00000001133020d8;
  uVar1 = *(ushort *)((long)param_5 + lVar15 + 0x2b1);
  if ((uVar1 >> 8 & 1) == 0) {
    if ((((*(long *)((long)param_5 + lVar15 + 0x288) != 0) || ((uVar1 >> 9 & 1) != 0)) ||
        (*(long *)((long)param_5 + lVar15 + 0x2a8) != 0)) ||
       ((*(ushort *)((long)param_5 + lVar15 + 0x1f8) >> 8 & 1) == 0)) {
LAB_10acac04c:
      uVar14 = 0;
      func_0x00010a1bd170();
      if ((uVar14 & 1) == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        lStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_b8 = (undefined **)0x0;
        pcStack_c0 = (code *)0x0;
        ppuStack_100 = &PTR_DAT_110bda018;
        FUN_10a0dad0c((ulong)&pcStack_c0 | 8,&ppuStack_100);
        plVar7 = (long *)((long)param_5 + (0x1c8 - (ulong)uRam00000001133020d8));
        (**(code **)(*plVar7 + 0x18))();
        lVar15 = -(ulong)uRam00000001133020d8;
        uVar1 = *(ushort *)((long)param_5 + lVar15 + 0x1f8);
        if ((int)plVar7 == 0) {
          if ((uVar1 >> 8 & 1) == 0) {
            plVar7 = (long *)((long)param_5 + lVar15 + 0x1c8);
            FUN_10a1bfe94(plVar7,&pcStack_c0);
            if (((ulong)plVar7 & 1) == 0) {
              plVar7 = (long *)((long)param_5 + (0x198 - (ulong)uRam00000001133020d8));
              (**(code **)(*plVar7 + 0x88))(plVar7,&pcStack_c0);
            }
          }
          else {
            FUN_10a1bd5e0();
            if (plVar7 != (long *)0x0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar1 >> 7 & 1) == 0) {
            *(code **)((long)param_5 + lVar15 + 0x208) = pcStack_c0;
            *(ushort *)((long)param_5 + lVar15 + 0x1f8) = uVar1 | 0x80;
          }
          plVar7 = (long *)((long)param_5 + lVar15 + 0x208);
          FUN_10a1bd398(plVar7,&pcStack_c0);
        }
        uVar14 = (ulong)uRam00000001133020d8;
        if ((*(ushort *)((long)param_5 + (0x2b1 - uVar14)) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          uVar14 = (ulong)uRam00000001133020d8;
          if (plVar7 != (long *)0x0) {
            FUN_10a1bd648();
            uVar14 = (ulong)uRam00000001133020d8;
          }
        }
        FUN_10a1c054c((long)param_5 + (600 - uVar14),&pcStack_c0);
      }
      goto LAB_10acac1cc;
    }
    *(long *)((long)param_5 + lVar15 + 0x268) = *(long *)((long)param_5 + lVar15 + 0x268) + 1;
  }
  else if ((*(ushort *)((long)param_5 + lVar15 + 0x1f8) >> 8 & 1) == 0) goto LAB_10acac04c;
  ppuVar22 = *(undefined ***)((long)param_5 + lVar15 + 0x2b8);
  ppuVar21 = *(undefined ***)((long)param_5 + lVar15 + 0x200);
  if ((ppuVar22 != &PTR_DAT_110bda018 || ppuVar21 != &PTR_DAT_110bda018) &&
     (FUN_10a1bd5e0(), lVar6 != 0)) {
    if (ppuVar22 != &PTR_DAT_110bda018) {
      FUN_10a1bd648(lVar6,(long)param_5 + lVar15 + 600,&PTR_DAT_110bda018);
      *(undefined ***)((long)param_5 + lVar15 + 0x2b8) = &PTR_DAT_110bda018;
    }
    if (ppuVar21 != &PTR_DAT_110bda018) {
      FUN_10a1bd7d8(lVar6,(long)param_5 + lVar15 + 0x1c8,&PTR_DAT_110bda018);
      *(undefined ***)((long)param_5 + lVar15 + 0x200) = &PTR_DAT_110bda018;
    }
  }
LAB_10acac1cc:
  plVar7 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110c6a848);
  if ((int)plVar7 != 0) {
    (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c6a848);
    plVar7 = param_6;
    (**(code **)(*param_6 + 0x208))();
    if ((int)plVar7 != 0) {
      iVar13 = 0;
      do {
        (**(code **)(*param_6 + 0x218))(param_6);
        plVar8 = param_6;
        (**(code **)(*param_6 + 200))(param_6,&PTR_DAT_110c6b490);
        plVar9 = param_5;
        FUN_10acabcd4(param_5,(ulong)plVar8 & 0xffffffff);
        lVar15 = *plVar9;
        lStack_b0 = lVar15 + 0x20;
        uVar1 = *(ushort *)(lVar15 + 0x109);
        *(ushort *)(lVar15 + 0x109) = uVar1 & 0xff80 | uVar1 + 1 & 0x7f;
        *(ushort *)(lVar15 + 0x50) =
             *(ushort *)(lVar15 + 0x50) & 0xff80 | *(ushort *)(lVar15 + 0x50) + 1 & 0x7f;
        uStack_a8 = CONCAT71(uStack_a8._1_7_,1);
        pcStack_c0 = FUN_10a1d3648;
        ppuStack_b8 = &PTR_FUN_110bad818;
        plVar8 = param_6;
        (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110c6a868);
        if ((int)plVar8 != 0) {
          (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c6a868);
          plVar8 = param_6;
          (**(code **)(*param_6 + 0x208))();
          if ((int)plVar8 != 0) {
            iVar19 = 0;
            plVar18 = plVar8;
            do {
              (**(code **)(*param_6 + 0x218))(param_6,iVar19);
              plVar10 = param_6;
              (**(code **)(*param_6 + 200))(param_6,&PTR_DAT_110c6b490);
              plVar16 = (long *)*plVar9;
              FUN_10acab67c(plVar16,(ulong)plVar10 & 0xffffffff);
              lVar15 = *plVar16;
              lStack_f0 = lVar15 + 0x20;
              uVar1 = *(ushort *)(lVar15 + 0x109);
              *(ushort *)(lVar15 + 0x109) = uVar1 & 0xff80 | uVar1 + 1 & 0x7f;
              *(ushort *)(lVar15 + 0x50) =
                   *(ushort *)(lVar15 + 0x50) & 0xff80 | *(ushort *)(lVar15 + 0x50) + 1 & 0x7f;
              uStack_e8 = 1;
              ppuStack_100 = (undefined **)FUN_10a1d3648;
              ppuStack_f8 = &PTR_FUN_110bad818;
              plVar10 = param_6;
              (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110c6a888);
              if ((int)plVar10 != 0) {
                (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c6a888);
                plVar18 = param_6;
                (**(code **)(*param_6 + 0x208))();
                if ((int)plVar18 != 0) {
                  iVar20 = 0;
                  do {
                    (**(code **)(*param_6 + 0x218))(param_6,iVar20);
                    (**(code **)(*param_6 + 0xa0))(auStack_158,param_6,&PTR_DAT_110c6b4b0);
                    FUN_10a0d09b4(&uStack_178,auStack_158);
                    (**(code **)(*param_6 + 0xa0))(&uStack_1e0,param_6,&PTR_DAT_110c6b4d0);
                    plStack_190 = plStack_1d0;
                    plVar10 = uStack_1e0;
                    ppuStack_198 = uStack_1d8;
                    plStack_1a0 = uStack_1e0;
                    uStack_1d8 = (undefined **)0x0;
                    plStack_1d0 = (long *)0x0;
                    uStack_1e0 = (long *)0x0;
                    lStack_188 = 0;
                    func_0x000107c2b080(&plStack_1a0);
                    uVar24 = SUB84(plVar10,0);
                    if ((long)plStack_1d0 < 0) {
                      __ZdlPv(uStack_1e0);
                    }
                    if (lStack_188 < 0x449efc5d26) {
                      if (lStack_188 < 0x35af72e120) {
                        if (lStack_188 < 0x342df2e120) {
                          if (lStack_188 == 0x28ee779466) {
                            plVar10 = param_6;
                            (**(code **)(*param_6 + 0x30))(param_6,&PTR_s_value_110c6b4f0);
                            uStack_1e0 = (long *)CONCAT44(uStack_1e0._4_4_,(int)plVar10);
                            FUN_10aca9a04(&uStack_178,&uStack_1e0,param_5[0x31],*plVar16 + 0x188);
                          }
                          else {
                            if (lStack_188 != 0x34298f2267) goto LAB_10acace2c;
                            (**(code **)(*param_6 + 0xd8))(param_6,&PTR_s_value_110c6b4f0);
                            uStack_1e0 = (long *)CONCAT44(param_2,uVar24);
                            FUN_10aca315c(&uStack_178,&uStack_1e0,param_5[0x31],*plVar16 + 0x188);
                          }
                        }
                        else if (lStack_188 == 0x342df2e120) {
                          (**(code **)(*param_6 + 0x1b8))(param_6,&PTR_s_value_110c6b4f0);
                          uStack_1e0 = (long *)CONCAT44(param_2,uVar24);
                          uStack_1d8 = (undefined **)CONCAT44(param_4,param_3);
                          FUN_10aca93a8(&uStack_178,&uStack_1e0,param_5[0x31],*plVar16 + 0x188);
                        }
                        else {
                          if (lStack_188 != 0x35ab0f2267) goto LAB_10acace2c;
                          (**(code **)(*param_6 + 0x108))(param_6,&PTR_s_value_110c6b4f0);
                          uStack_1e0 = (long *)CONCAT44(param_2,uVar24);
                          uStack_1d8 = (undefined **)CONCAT44(param_4,param_3);
                          FUN_10aca335c(&uStack_178,&uStack_1e0,param_5[0x31],*plVar16 + 0x188);
                        }
                      }
                      else if (lStack_188 < 0x35ec32e120) {
                        if (lStack_188 == 0x35af72e120) {
                          (**(code **)(*param_6 + 0x1a8))
                                    (&uStack_1e0,param_6,&PTR_s_value_110c6b4f0);
                          FUN_10aca9804(&uStack_178,&uStack_1e0,param_5[0x31],*plVar16 + 0x188);
                        }
                        else {
                          if (lStack_188 != 0x35e8cf2267) goto LAB_10acace2c;
                          (**(code **)(*param_6 + 0xe8))(param_6,&PTR_s_value_110c6b4f0);
                          uStack_1e0 = (long *)CONCAT44(param_2,uVar24);
                          uStack_1d8 = (undefined **)CONCAT44(uStack_1d8._4_4_,param_3);
                          FUN_10aca8360(&uStack_178,&uStack_1e0,param_5[0x31],*plVar16 + 0x188);
                        }
                      }
                      else if (lStack_188 == 0x35ec32e120) {
                        (**(code **)(*param_6 + 0x1c8))(&uStack_1e0,param_6,&PTR_s_value_110c6b4f0);
                        FUN_10aca9604(&uStack_178,&uStack_1e0,param_5[0x31],*plVar16 + 0x188);
                      }
                      else {
                        if (lStack_188 != 0x42803d93d8) goto LAB_10acace2c;
                        plVar10 = param_6;
                        (**(code **)(*param_6 + 0x50))(param_6,&PTR_s_value_110c6b4f0);
                        uStack_1e0 = (long *)CONCAT71(uStack_1e0._1_7_,(char)plVar10);
                        FUN_10aca8160(&uStack_178,&uStack_1e0,param_5[0x31],*plVar16 + 0x188);
                      }
                    }
                    else if (lStack_188 < 0xd3a04464e64) {
                      if (lStack_188 < 0xcfec4464e64) {
                        if (lStack_188 == 0x449efc5d26) {
                          plVar10 = param_6;
                          (**(code **)(*param_6 + 200))(param_6,&PTR_s_value_110c6b4f0);
                          uStack_1e0 = (long *)CONCAT44(uStack_1e0._4_4_,(int)plVar10);
                          FUN_10aca2d5c(&uStack_178,&uStack_1e0,param_5[0x31],*plVar16 + 0x188);
                        }
                        else {
                          if (lStack_188 != 0xcfec4463167) {
LAB_10acace2c:
                            uVar12 = 0x120;
                            ___cxa_allocate_exception(0x120);
                            FUN_10a009538();
                            ___cxa_throw(uVar12,&PTR_DAT_110b99e48,FUN_10a002a90);
                    /* WARNING: Does not return */
                            pcVar5 = (code *)SoftwareBreakpoint(1,0x10acace60);
                            (*pcVar5)();
                          }
                          plVar10 = param_6;
                          (**(code **)(*param_6 + 0x148))(param_6,&PTR_s_value_110c6b4f0);
                          uStack_1e0 = plVar10;
                          FUN_10aca8c84(&uStack_178,&uStack_1e0,param_5[0x31],*plVar16 + 0x188);
                        }
                      }
                      else if (lStack_188 == 0xcfec4464e64) {
                        plVar10 = param_6;
                        (**(code **)(*param_6 + 0x118))(param_6,&PTR_s_value_110c6b4f0);
                        uStack_1e0 = plVar10;
                        FUN_10aca8560(&uStack_178,&uStack_1e0,param_5[0x31],*plVar16 + 0x188);
                      }
                      else {
                        if (lStack_188 != 0xd3a04463167) goto LAB_10acace2c;
                        plVar10 = param_6;
                        ppuVar21 = &PTR_s_value_110c6b4f0;
                        (**(code **)(*param_6 + 0x158))();
                        uStack_1d8 = (undefined **)CONCAT44(uStack_1d8._4_4_,(int)ppuVar21);
                        uStack_1e0 = plVar10;
                        FUN_10aca8ec8(&uStack_178,&uStack_1e0,param_5[0x31],*plVar16 + 0x188);
                      }
                    }
                    else if (lStack_188 < 0xd7b44464e64) {
                      if (lStack_188 == 0xd3a04464e64) {
                        plVar10 = param_6;
                        ppuVar21 = &PTR_s_value_110c6b4f0;
                        (**(code **)(*param_6 + 0x128))();
                        uStack_1d8 = (undefined **)CONCAT44(uStack_1d8._4_4_,(int)ppuVar21);
                        uStack_1e0 = plVar10;
                        FUN_10aca87a4(&uStack_178,&uStack_1e0,param_5[0x31],*plVar16 + 0x188);
                      }
                      else {
                        if (lStack_188 != 0xd7b44463167) goto LAB_10acace2c;
                        plVar10 = param_6;
                        ppuVar21 = &PTR_s_value_110c6b4f0;
                        (**(code **)(*param_6 + 0x168))();
                        uStack_1e0 = plVar10;
                        uStack_1d8 = ppuVar21;
                        FUN_10aca9134(&uStack_178,&uStack_1e0,param_5[0x31],*plVar16 + 0x188);
                      }
                    }
                    else if (lStack_188 == 0xd7b44464e64) {
                      plVar10 = param_6;
                      ppuVar21 = &PTR_s_value_110c6b4f0;
                      (**(code **)(*param_6 + 0x138))();
                      uStack_1e0 = plVar10;
                      uStack_1d8 = ppuVar21;
                      FUN_10aca8a10(&uStack_178,&uStack_1e0,param_5[0x31],*plVar16 + 0x188);
                    }
                    else if (lStack_188 == 0x1d29387c5d1a) {
                      (**(code **)(*param_6 + 0x40))(param_6,&PTR_s_value_110c6b4f0);
                      uStack_1e0 = (long *)CONCAT44(uStack_1e0._4_4_,uVar24);
                      FUN_10aca2f5c(&uStack_178,&uStack_1e0,param_5[0x31],*plVar16 + 0x188);
                    }
                    else {
                      if (lStack_188 != 0x19108854dc74e3e6) goto LAB_10acace2c;
                      plStack_1d0 = (long *)plVar16[1];
                      uStack_1d8 = (undefined **)*plVar16;
                      if (plVar16[1] != 0) {
                        plVar10 = (long *)(plVar16[1] + 8);
                        do {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                          if (bVar3) {
                            *plVar10 = *plVar10 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                      }
                      uStack_1e0 = param_5;
                      if (cStack_161 < '\0') {
                        func_0x000107c3192c(&uStack_1c8,uStack_178,uStack_170);
                      }
                      else {
                        uStack_1c0 = uStack_170;
                        uStack_1c8 = uStack_178;
                        lStack_1b8 = CONCAT17(cStack_161,uStack_168);
                      }
                      uStack_1b0 = uStack_160;
                      pcStack_140 = FUN_10acd6a44;
                      ppuStack_138 = &PTR_FUN_110c6c108;
                      puVar11 = (undefined8 *)0x38;
                      __Znwm();
                      puVar11[1] = uStack_1d8;
                      *puVar11 = uStack_1e0;
                      puVar11[2] = plStack_1d0;
                      if (plStack_1d0 != (long *)0x0) {
                        plVar10 = plStack_1d0 + 1;
                        do {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                          if (bVar3) {
                            *plVar10 = *plVar10 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                      }
                      if (lStack_1b8 < 0) {
                        func_0x000107c3192c(puVar11 + 3,uStack_1c8,uStack_1c0);
                      }
                      else {
                        puVar11[4] = uStack_1c0;
                        puVar11[3] = uStack_1c8;
                        puVar11[5] = lStack_1b8;
                      }
                      puVar11[6] = uStack_1b0;
                      puStack_130 = puVar11;
                      FUN_10a02d928(param_6,&PTR_s_value_110c6b4f0,&pcStack_140,0);
                      (*(code *)*ppuStack_138)(&ppuStack_138);
                      if (lStack_1b8 < 0) {
                        __ZdlPv(uStack_1c8);
                      }
                      plVar10 = plStack_1d0;
                      if (plStack_1d0 != (long *)0x0) {
                        plVar4 = plStack_1d0 + 1;
                        do {
                          lVar15 = *plVar4;
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                          if (bVar3) {
                            *plVar4 = lVar15 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                        if (lVar15 == 0) {
                          (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
                        }
                      }
                    }
                    (**(code **)(*param_6 + 0x220))(param_6);
                    if ((long)plStack_190 < 0) {
                      __ZdlPv(plStack_1a0);
                    }
                    if (cStack_161 < '\0') {
                      __ZdlPv(uStack_178);
                    }
                    if (cStack_141 < '\0') {
                      __ZdlPv(auStack_158[0]);
                    }
                    iVar20 = iVar20 + 1;
                  } while (iVar20 != (int)plVar18);
                }
                (**(code **)(*param_6 + 0x220))(param_6);
                plVar18 = (long *)((ulong)plVar8 & 0xffffffff);
              }
              plVar10 = param_6;
              (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110c6a8a8);
              if ((int)plVar10 != 0) {
                (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c6a8a8);
                plVar18 = param_6;
                (**(code **)(*param_6 + 0x208))();
                if ((int)plVar18 != 0) {
                  iVar20 = 0;
                  do {
                    (**(code **)(*param_6 + 0x218))(param_6,iVar20);
                    (**(code **)(*param_6 + 0xa0))(&uStack_178,param_6,&PTR_DAT_110c6b4b0);
                    plVar10 = param_6;
                    (**(code **)(*param_6 + 200))(param_6,&PTR_s_value_110c6b4f0);
                    lVar15 = *plVar16;
                    ppuStack_198 = (undefined **)((ulong)ppuStack_198 & 0xffffffffffffff00);
                    plStack_1a0 = (long *)(lVar15 + 0x1d0);
                    FUN_10a0d09b4(&uStack_1e0,&uStack_178);
                    uVar14 = uStack_1c8;
                    plVar4 = *(long **)(lVar15 + 0x1d8);
                    if (*(long **)(lVar15 + 0x1d8) == (long *)0x0) {
                      plVar17 = (long *)(lVar15 + 0x1d8);
                      plVar23 = plVar17;
                    }
                    else {
                      do {
                        while (plVar17 = plVar4, uStack_1c8 < (ulong)plVar17[7]) {
                          plVar4 = (long *)*plVar17;
                          plVar23 = plVar17;
                          if ((long *)*plVar17 == (long *)0x0) goto LAB_10acaccb8;
                        }
                        if (uStack_1c8 <= (ulong)plVar17[7]) goto LAB_10acaccf4;
                        plVar4 = (long *)plVar17[1];
                      } while ((long *)plVar17[1] != (long *)0x0);
                      plVar23 = plVar17 + 1;
                    }
LAB_10acaccb8:
                    lVar6 = 0x48;
                    __Znwm();
                    plVar4 = plStack_1d0;
                    *(undefined ***)(lVar6 + 0x28) = uStack_1d8;
                    *(long **)(lVar6 + 0x20) = uStack_1e0;
                    uStack_1d8 = (undefined **)0x0;
                    plStack_1d0 = (long *)0x0;
                    uStack_1e0 = (long *)0x0;
                    *(long **)(lVar6 + 0x30) = plVar4;
                    *(ulong *)(lVar6 + 0x38) = uVar14;
                    *(ulong *)(lVar6 + 0x40) = (ulong)plVar10 & 0xffffffff;
                    FUN_10acd541c((long *)(lVar15 + 0x1d0),plVar17,plVar23,lVar6);
LAB_10acaccf4:
                    if ((long)plStack_1d0 < 0) {
                      __ZdlPv(uStack_1e0);
                    }
                    FUN_10acd4df4(&plStack_1a0);
                    (**(code **)(*param_6 + 0x220))(param_6);
                    if (cStack_161 < '\0') {
                      __ZdlPv(uStack_178);
                    }
                    iVar20 = iVar20 + 1;
                  } while (iVar20 != (int)plVar18);
                }
                (**(code **)(*param_6 + 0x220))(param_6);
                plVar18 = (long *)((ulong)plVar8 & 0xffffffff);
              }
              (**(code **)(*param_6 + 0x220))(param_6);
              FUN_10a044790(&ppuStack_100);
              (*(code *)*ppuStack_f8)(&ppuStack_f8);
              iVar19 = iVar19 + 1;
            } while (iVar19 != (int)plVar18);
          }
          (**(code **)(*param_6 + 0x220))(param_6);
        }
        (**(code **)(*param_6 + 0x220))(param_6);
        FUN_10a044790(&pcStack_c0);
        (*(code *)*ppuStack_b8)(&ppuStack_b8);
        iVar13 = iVar13 + 1;
      } while (iVar13 != (int)plVar7);
    }
    (**(code **)(*param_6 + 0x220))();
    plVar7 = param_6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar7;
  }
  ___stack_chk_fail();
  FUN_10a044790(&pcStack_c0);
  (*(code *)*ppuStack_b8)(&ppuStack_b8);
  __Unwind_Resume();
  if (*(char *)((long)plVar7 + 0x2f) < '\0') {
    __ZdlPv(plVar7[3]);
  }
  func_0x00010a2f5728(plVar7 + 1);
  return plVar7;
}



/* Entry: 10acad010; end: 10acad047;  */

long FUN_10acad010(long param_1)

{
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  func_0x00010a2f5728(param_1 + 8);
  return param_1;
}



/* Entry: 10acad048; end: 10acad04f;  */

long * FUN_10acad048(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    long param_5,long *param_6)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  long *plVar25;
  undefined4 uVar26;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a0;
  undefined **ppuStack_198;
  long *plStack_190;
  long lStack_188;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined7 uStack_168;
  char cStack_161;
  undefined8 uStack_160;
  undefined8 auStack_158 [2];
  char cStack_141;
  code *pcStack_140;
  undefined **ppuStack_138;
  undefined8 *puStack_130;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  plVar13 = (long *)(param_5 + -0x20);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = param_5 + 0x178;
  lVar6 = *(long *)(param_5 + 0x180);
  func_0x00010acb6b2c();
  *(undefined8 *)(param_5 + 0x180) = 0;
  *(undefined8 *)(param_5 + 0x188) = 0;
  *(long *)(param_5 + 0x178) = param_5 + 0x180;
  lVar20 = lVar16 - (ulong)uRam00000001133020d8;
  if ((*(ushort *)(lVar20 + 0x119) >> 8 & 1) == 0) {
    if ((((*(long *)(lVar20 + 0xf0) != 0) || ((*(ushort *)(lVar20 + 0x119) >> 9 & 1) != 0)) ||
        (*(long *)(lVar20 + 0x110) != 0)) || ((*(ushort *)(lVar20 + 0x60) >> 8 & 1) == 0)) {
LAB_10acac04c:
      uVar15 = 0;
      func_0x00010a1bd170();
      if ((uVar15 & 1) == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        lStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_b8 = (undefined **)0x0;
        pcStack_c0 = (code *)0x0;
        ppuStack_100 = &PTR_DAT_110bda018;
        FUN_10a0dad0c((ulong)&pcStack_c0 | 8,&ppuStack_100);
        plVar7 = (long *)((lVar16 - (ulong)uRam00000001133020d8) + 0x30);
        (**(code **)(*plVar7 + 0x18))();
        lVar6 = lVar16 - (ulong)uRam00000001133020d8;
        uVar1 = *(ushort *)(lVar6 + 0x60);
        if ((int)plVar7 == 0) {
          if ((uVar1 >> 8 & 1) == 0) {
            plVar7 = (long *)(lVar6 + 0x30);
            FUN_10a1bfe94(plVar7,&pcStack_c0);
            if (((ulong)plVar7 & 1) == 0) {
              plVar7 = (long *)(lVar16 - (ulong)uRam00000001133020d8);
              (**(code **)(*plVar7 + 0x88))(plVar7,&pcStack_c0);
            }
          }
          else {
            FUN_10a1bd5e0();
            if (plVar7 != (long *)0x0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar1 >> 7 & 1) == 0) {
            *(code **)(lVar6 + 0x70) = pcStack_c0;
            *(ushort *)(lVar6 + 0x60) = uVar1 | 0x80;
          }
          plVar7 = (long *)(lVar6 + 0x70);
          FUN_10a1bd398(plVar7,&pcStack_c0);
        }
        uVar15 = (ulong)uRam00000001133020d8;
        if ((*(ushort *)((lVar16 - uVar15) + 0x119) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          uVar15 = (ulong)uRam00000001133020d8;
          if (plVar7 != (long *)0x0) {
            FUN_10a1bd648();
            uVar15 = (ulong)uRam00000001133020d8;
          }
        }
        FUN_10a1c054c((lVar16 - uVar15) + 0xc0,&pcStack_c0);
      }
      goto LAB_10acac1cc;
    }
    *(long *)(lVar20 + 0xd0) = *(long *)(lVar20 + 0xd0) + 1;
  }
  else if ((*(ushort *)(lVar20 + 0x60) >> 8 & 1) == 0) goto LAB_10acac04c;
  ppuVar24 = *(undefined ***)(lVar20 + 0x120);
  ppuVar23 = *(undefined ***)(lVar20 + 0x68);
  if ((ppuVar24 != &PTR_DAT_110bda018 || ppuVar23 != &PTR_DAT_110bda018) &&
     (FUN_10a1bd5e0(), lVar6 != 0)) {
    if (ppuVar24 != &PTR_DAT_110bda018) {
      FUN_10a1bd648(lVar6,lVar20 + 0xc0,&PTR_DAT_110bda018);
      *(undefined ***)(lVar20 + 0x120) = &PTR_DAT_110bda018;
    }
    if (ppuVar23 != &PTR_DAT_110bda018) {
      FUN_10a1bd7d8(lVar6,lVar20 + 0x30,&PTR_DAT_110bda018);
      *(undefined ***)(lVar20 + 0x68) = &PTR_DAT_110bda018;
    }
  }
LAB_10acac1cc:
  plVar7 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110c6a848);
  if ((int)plVar7 != 0) {
    (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c6a848);
    plVar7 = param_6;
    (**(code **)(*param_6 + 0x208))();
    if ((int)plVar7 != 0) {
      iVar14 = 0;
      do {
        (**(code **)(*param_6 + 0x218))(param_6);
        plVar8 = param_6;
        (**(code **)(*param_6 + 200))(param_6,&PTR_DAT_110c6b490);
        plVar9 = plVar13;
        FUN_10acabcd4(plVar13,(ulong)plVar8 & 0xffffffff);
        lVar16 = *plVar9;
        lStack_b0 = lVar16 + 0x20;
        uVar1 = *(ushort *)(lVar16 + 0x109);
        *(ushort *)(lVar16 + 0x109) = uVar1 & 0xff80 | uVar1 + 1 & 0x7f;
        *(ushort *)(lVar16 + 0x50) =
             *(ushort *)(lVar16 + 0x50) & 0xff80 | *(ushort *)(lVar16 + 0x50) + 1 & 0x7f;
        uStack_a8 = CONCAT71(uStack_a8._1_7_,1);
        pcStack_c0 = FUN_10a1d3648;
        ppuStack_b8 = &PTR_FUN_110bad818;
        plVar8 = param_6;
        (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110c6a868);
        if ((int)plVar8 != 0) {
          (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c6a868);
          plVar8 = param_6;
          (**(code **)(*param_6 + 0x208))();
          if ((int)plVar8 != 0) {
            iVar21 = 0;
            plVar19 = plVar8;
            do {
              (**(code **)(*param_6 + 0x218))(param_6,iVar21);
              plVar10 = param_6;
              (**(code **)(*param_6 + 200))(param_6,&PTR_DAT_110c6b490);
              plVar17 = (long *)*plVar9;
              FUN_10acab67c(plVar17,(ulong)plVar10 & 0xffffffff);
              lVar16 = *plVar17;
              lStack_f0 = lVar16 + 0x20;
              uVar1 = *(ushort *)(lVar16 + 0x109);
              *(ushort *)(lVar16 + 0x109) = uVar1 & 0xff80 | uVar1 + 1 & 0x7f;
              *(ushort *)(lVar16 + 0x50) =
                   *(ushort *)(lVar16 + 0x50) & 0xff80 | *(ushort *)(lVar16 + 0x50) + 1 & 0x7f;
              uStack_e8 = 1;
              ppuStack_100 = (undefined **)FUN_10a1d3648;
              ppuStack_f8 = &PTR_FUN_110bad818;
              plVar10 = param_6;
              (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110c6a888);
              if ((int)plVar10 != 0) {
                (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c6a888);
                plVar19 = param_6;
                (**(code **)(*param_6 + 0x208))();
                if ((int)plVar19 != 0) {
                  iVar22 = 0;
                  do {
                    (**(code **)(*param_6 + 0x218))(param_6,iVar22);
                    (**(code **)(*param_6 + 0xa0))(auStack_158,param_6,&PTR_DAT_110c6b4b0);
                    FUN_10a0d09b4(&uStack_178,auStack_158);
                    (**(code **)(*param_6 + 0xa0))(&uStack_1e0,param_6,&PTR_DAT_110c6b4d0);
                    plStack_190 = plStack_1d0;
                    plVar10 = uStack_1e0;
                    ppuStack_198 = uStack_1d8;
                    plStack_1a0 = uStack_1e0;
                    uStack_1d8 = (undefined **)0x0;
                    plStack_1d0 = (long *)0x0;
                    uStack_1e0 = (long *)0x0;
                    lStack_188 = 0;
                    func_0x000107c2b080(&plStack_1a0);
                    uVar26 = SUB84(plVar10,0);
                    if ((long)plStack_1d0 < 0) {
                      __ZdlPv(uStack_1e0);
                    }
                    if (lStack_188 < 0x449efc5d26) {
                      if (lStack_188 < 0x35af72e120) {
                        if (lStack_188 < 0x342df2e120) {
                          if (lStack_188 == 0x28ee779466) {
                            plVar10 = param_6;
                            (**(code **)(*param_6 + 0x30))(param_6,&PTR_s_value_110c6b4f0);
                            uStack_1e0 = (long *)CONCAT44(uStack_1e0._4_4_,(int)plVar10);
                            FUN_10aca9a04(&uStack_178,&uStack_1e0,*(undefined8 *)(param_5 + 0x168),
                                          *plVar17 + 0x188);
                          }
                          else {
                            if (lStack_188 != 0x34298f2267) goto LAB_10acace2c;
                            (**(code **)(*param_6 + 0xd8))(param_6,&PTR_s_value_110c6b4f0);
                            uStack_1e0 = (long *)CONCAT44(param_2,uVar26);
                            FUN_10aca315c(&uStack_178,&uStack_1e0,*(undefined8 *)(param_5 + 0x168),
                                          *plVar17 + 0x188);
                          }
                        }
                        else if (lStack_188 == 0x342df2e120) {
                          (**(code **)(*param_6 + 0x1b8))(param_6,&PTR_s_value_110c6b4f0);
                          uStack_1e0 = (long *)CONCAT44(param_2,uVar26);
                          uStack_1d8 = (undefined **)CONCAT44(param_4,param_3);
                          FUN_10aca93a8(&uStack_178,&uStack_1e0,*(undefined8 *)(param_5 + 0x168),
                                        *plVar17 + 0x188);
                        }
                        else {
                          if (lStack_188 != 0x35ab0f2267) goto LAB_10acace2c;
                          (**(code **)(*param_6 + 0x108))(param_6,&PTR_s_value_110c6b4f0);
                          uStack_1e0 = (long *)CONCAT44(param_2,uVar26);
                          uStack_1d8 = (undefined **)CONCAT44(param_4,param_3);
                          FUN_10aca335c(&uStack_178,&uStack_1e0,*(undefined8 *)(param_5 + 0x168),
                                        *plVar17 + 0x188);
                        }
                      }
                      else if (lStack_188 < 0x35ec32e120) {
                        if (lStack_188 == 0x35af72e120) {
                          (**(code **)(*param_6 + 0x1a8))
                                    (&uStack_1e0,param_6,&PTR_s_value_110c6b4f0);
                          FUN_10aca9804(&uStack_178,&uStack_1e0,*(undefined8 *)(param_5 + 0x168),
                                        *plVar17 + 0x188);
                        }
                        else {
                          if (lStack_188 != 0x35e8cf2267) goto LAB_10acace2c;
                          (**(code **)(*param_6 + 0xe8))(param_6,&PTR_s_value_110c6b4f0);
                          uStack_1e0 = (long *)CONCAT44(param_2,uVar26);
                          uStack_1d8 = (undefined **)CONCAT44(uStack_1d8._4_4_,param_3);
                          FUN_10aca8360(&uStack_178,&uStack_1e0,*(undefined8 *)(param_5 + 0x168),
                                        *plVar17 + 0x188);
                        }
                      }
                      else if (lStack_188 == 0x35ec32e120) {
                        (**(code **)(*param_6 + 0x1c8))(&uStack_1e0,param_6,&PTR_s_value_110c6b4f0);
                        FUN_10aca9604(&uStack_178,&uStack_1e0,*(undefined8 *)(param_5 + 0x168),
                                      *plVar17 + 0x188);
                      }
                      else {
                        if (lStack_188 != 0x42803d93d8) goto LAB_10acace2c;
                        plVar10 = param_6;
                        (**(code **)(*param_6 + 0x50))(param_6,&PTR_s_value_110c6b4f0);
                        uStack_1e0 = (long *)CONCAT71(uStack_1e0._1_7_,(char)plVar10);
                        FUN_10aca8160(&uStack_178,&uStack_1e0,*(undefined8 *)(param_5 + 0x168),
                                      *plVar17 + 0x188);
                      }
                    }
                    else if (lStack_188 < 0xd3a04464e64) {
                      if (lStack_188 < 0xcfec4464e64) {
                        if (lStack_188 == 0x449efc5d26) {
                          plVar10 = param_6;
                          (**(code **)(*param_6 + 200))(param_6,&PTR_s_value_110c6b4f0);
                          uStack_1e0 = (long *)CONCAT44(uStack_1e0._4_4_,(int)plVar10);
                          FUN_10aca2d5c(&uStack_178,&uStack_1e0,*(undefined8 *)(param_5 + 0x168),
                                        *plVar17 + 0x188);
                        }
                        else {
                          if (lStack_188 != 0xcfec4463167) {
LAB_10acace2c:
                            uVar12 = 0x120;
                            ___cxa_allocate_exception(0x120);
                            FUN_10a009538();
                            ___cxa_throw(uVar12,&PTR_DAT_110b99e48,FUN_10a002a90);
                    /* WARNING: Does not return */
                            pcVar5 = (code *)SoftwareBreakpoint(1,0x10acace60);
                            (*pcVar5)();
                          }
                          plVar10 = param_6;
                          (**(code **)(*param_6 + 0x148))(param_6,&PTR_s_value_110c6b4f0);
                          uStack_1e0 = plVar10;
                          FUN_10aca8c84(&uStack_178,&uStack_1e0,*(undefined8 *)(param_5 + 0x168),
                                        *plVar17 + 0x188);
                        }
                      }
                      else if (lStack_188 == 0xcfec4464e64) {
                        plVar10 = param_6;
                        (**(code **)(*param_6 + 0x118))(param_6,&PTR_s_value_110c6b4f0);
                        uStack_1e0 = plVar10;
                        FUN_10aca8560(&uStack_178,&uStack_1e0,*(undefined8 *)(param_5 + 0x168),
                                      *plVar17 + 0x188);
                      }
                      else {
                        if (lStack_188 != 0xd3a04463167) goto LAB_10acace2c;
                        plVar10 = param_6;
                        ppuVar23 = &PTR_s_value_110c6b4f0;
                        (**(code **)(*param_6 + 0x158))();
                        uStack_1d8 = (undefined **)CONCAT44(uStack_1d8._4_4_,(int)ppuVar23);
                        uStack_1e0 = plVar10;
                        FUN_10aca8ec8(&uStack_178,&uStack_1e0,*(undefined8 *)(param_5 + 0x168),
                                      *plVar17 + 0x188);
                      }
                    }
                    else if (lStack_188 < 0xd7b44464e64) {
                      if (lStack_188 == 0xd3a04464e64) {
                        plVar10 = param_6;
                        ppuVar23 = &PTR_s_value_110c6b4f0;
                        (**(code **)(*param_6 + 0x128))();
                        uStack_1d8 = (undefined **)CONCAT44(uStack_1d8._4_4_,(int)ppuVar23);
                        uStack_1e0 = plVar10;
                        FUN_10aca87a4(&uStack_178,&uStack_1e0,*(undefined8 *)(param_5 + 0x168),
                                      *plVar17 + 0x188);
                      }
                      else {
                        if (lStack_188 != 0xd7b44463167) goto LAB_10acace2c;
                        plVar10 = param_6;
                        ppuVar23 = &PTR_s_value_110c6b4f0;
                        (**(code **)(*param_6 + 0x168))();
                        uStack_1e0 = plVar10;
                        uStack_1d8 = ppuVar23;
                        FUN_10aca9134(&uStack_178,&uStack_1e0,*(undefined8 *)(param_5 + 0x168),
                                      *plVar17 + 0x188);
                      }
                    }
                    else if (lStack_188 == 0xd7b44464e64) {
                      plVar10 = param_6;
                      ppuVar23 = &PTR_s_value_110c6b4f0;
                      (**(code **)(*param_6 + 0x138))();
                      uStack_1e0 = plVar10;
                      uStack_1d8 = ppuVar23;
                      FUN_10aca8a10(&uStack_178,&uStack_1e0,*(undefined8 *)(param_5 + 0x168),
                                    *plVar17 + 0x188);
                    }
                    else if (lStack_188 == 0x1d29387c5d1a) {
                      (**(code **)(*param_6 + 0x40))(param_6,&PTR_s_value_110c6b4f0);
                      uStack_1e0 = (long *)CONCAT44(uStack_1e0._4_4_,uVar26);
                      FUN_10aca2f5c(&uStack_178,&uStack_1e0,*(undefined8 *)(param_5 + 0x168),
                                    *plVar17 + 0x188);
                    }
                    else {
                      if (lStack_188 != 0x19108854dc74e3e6) goto LAB_10acace2c;
                      plStack_1d0 = (long *)plVar17[1];
                      uStack_1d8 = (undefined **)*plVar17;
                      if (plVar17[1] != 0) {
                        plVar10 = (long *)(plVar17[1] + 8);
                        do {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                          if (bVar3) {
                            *plVar10 = *plVar10 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                      }
                      uStack_1e0 = plVar13;
                      if (cStack_161 < '\0') {
                        func_0x000107c3192c(&uStack_1c8,uStack_178,uStack_170);
                      }
                      else {
                        uStack_1c0 = uStack_170;
                        uStack_1c8 = uStack_178;
                        lStack_1b8 = CONCAT17(cStack_161,uStack_168);
                      }
                      uStack_1b0 = uStack_160;
                      pcStack_140 = FUN_10acd6a44;
                      ppuStack_138 = &PTR_FUN_110c6c108;
                      puVar11 = (undefined8 *)0x38;
                      __Znwm();
                      puVar11[1] = uStack_1d8;
                      *puVar11 = uStack_1e0;
                      puVar11[2] = plStack_1d0;
                      if (plStack_1d0 != (long *)0x0) {
                        plVar10 = plStack_1d0 + 1;
                        do {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                          if (bVar3) {
                            *plVar10 = *plVar10 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                      }
                      if (lStack_1b8 < 0) {
                        func_0x000107c3192c(puVar11 + 3,uStack_1c8,uStack_1c0);
                      }
                      else {
                        puVar11[4] = uStack_1c0;
                        puVar11[3] = uStack_1c8;
                        puVar11[5] = lStack_1b8;
                      }
                      puVar11[6] = uStack_1b0;
                      puStack_130 = puVar11;
                      FUN_10a02d928(param_6,&PTR_s_value_110c6b4f0,&pcStack_140,0);
                      (*(code *)*ppuStack_138)(&ppuStack_138);
                      if (lStack_1b8 < 0) {
                        __ZdlPv(uStack_1c8);
                      }
                      plVar10 = plStack_1d0;
                      if (plStack_1d0 != (long *)0x0) {
                        plVar4 = plStack_1d0 + 1;
                        do {
                          lVar16 = *plVar4;
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                          if (bVar3) {
                            *plVar4 = lVar16 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                        if (lVar16 == 0) {
                          (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
                        }
                      }
                    }
                    (**(code **)(*param_6 + 0x220))(param_6);
                    if ((long)plStack_190 < 0) {
                      __ZdlPv(plStack_1a0);
                    }
                    if (cStack_161 < '\0') {
                      __ZdlPv(uStack_178);
                    }
                    if (cStack_141 < '\0') {
                      __ZdlPv(auStack_158[0]);
                    }
                    iVar22 = iVar22 + 1;
                  } while (iVar22 != (int)plVar19);
                }
                (**(code **)(*param_6 + 0x220))(param_6);
                plVar19 = (long *)((ulong)plVar8 & 0xffffffff);
              }
              plVar10 = param_6;
              (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110c6a8a8);
              if ((int)plVar10 != 0) {
                (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c6a8a8);
                plVar19 = param_6;
                (**(code **)(*param_6 + 0x208))();
                if ((int)plVar19 != 0) {
                  iVar22 = 0;
                  do {
                    (**(code **)(*param_6 + 0x218))(param_6,iVar22);
                    (**(code **)(*param_6 + 0xa0))(&uStack_178,param_6,&PTR_DAT_110c6b4b0);
                    plVar10 = param_6;
                    (**(code **)(*param_6 + 200))(param_6,&PTR_s_value_110c6b4f0);
                    lVar16 = *plVar17;
                    ppuStack_198 = (undefined **)((ulong)ppuStack_198 & 0xffffffffffffff00);
                    plStack_1a0 = (long *)(lVar16 + 0x1d0);
                    FUN_10a0d09b4(&uStack_1e0,&uStack_178);
                    uVar15 = uStack_1c8;
                    plVar4 = *(long **)(lVar16 + 0x1d8);
                    if (*(long **)(lVar16 + 0x1d8) == (long *)0x0) {
                      plVar18 = (long *)(lVar16 + 0x1d8);
                      plVar25 = plVar18;
                    }
                    else {
                      do {
                        while (plVar18 = plVar4, uStack_1c8 < (ulong)plVar18[7]) {
                          plVar4 = (long *)*plVar18;
                          plVar25 = plVar18;
                          if ((long *)*plVar18 == (long *)0x0) goto LAB_10acaccb8;
                        }
                        if (uStack_1c8 <= (ulong)plVar18[7]) goto LAB_10acaccf4;
                        plVar4 = (long *)plVar18[1];
                      } while ((long *)plVar18[1] != (long *)0x0);
                      plVar25 = plVar18 + 1;
                    }
LAB_10acaccb8:
                    lVar6 = 0x48;
                    __Znwm();
                    plVar4 = plStack_1d0;
                    *(undefined ***)(lVar6 + 0x28) = uStack_1d8;
                    *(long **)(lVar6 + 0x20) = uStack_1e0;
                    uStack_1d8 = (undefined **)0x0;
                    plStack_1d0 = (long *)0x0;
                    uStack_1e0 = (long *)0x0;
                    *(long **)(lVar6 + 0x30) = plVar4;
                    *(ulong *)(lVar6 + 0x38) = uVar15;
                    *(ulong *)(lVar6 + 0x40) = (ulong)plVar10 & 0xffffffff;
                    FUN_10acd541c((long *)(lVar16 + 0x1d0),plVar18,plVar25,lVar6);
LAB_10acaccf4:
                    if ((long)plStack_1d0 < 0) {
                      __ZdlPv(uStack_1e0);
                    }
                    FUN_10acd4df4(&plStack_1a0);
                    (**(code **)(*param_6 + 0x220))(param_6);
                    if (cStack_161 < '\0') {
                      __ZdlPv(uStack_178);
                    }
                    iVar22 = iVar22 + 1;
                  } while (iVar22 != (int)plVar19);
                }
                (**(code **)(*param_6 + 0x220))(param_6);
                plVar19 = (long *)((ulong)plVar8 & 0xffffffff);
              }
              (**(code **)(*param_6 + 0x220))(param_6);
              FUN_10a044790(&ppuStack_100);
              (*(code *)*ppuStack_f8)(&ppuStack_f8);
              iVar21 = iVar21 + 1;
            } while (iVar21 != (int)plVar19);
          }
          (**(code **)(*param_6 + 0x220))(param_6);
        }
        (**(code **)(*param_6 + 0x220))(param_6);
        FUN_10a044790(&pcStack_c0);
        (*(code *)*ppuStack_b8)(&ppuStack_b8);
        iVar14 = iVar14 + 1;
      } while (iVar14 != (int)plVar7);
    }
    (**(code **)(*param_6 + 0x220))();
    plVar7 = param_6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar7;
  }
  ___stack_chk_fail();
  FUN_10a044790(&pcStack_c0);
  (*(code *)*ppuStack_b8)(&ppuStack_b8);
  __Unwind_Resume();
  if (*(char *)((long)plVar7 + 0x2f) < '\0') {
    __ZdlPv(plVar7[3]);
  }
  func_0x00010a2f5728(plVar7 + 1);
  return plVar7;
}



/* Entry: 10acad050; end: 10acad85f;  */

void FUN_10acad050(ulong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined *param_5,undefined **param_6)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined **ppuVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined **unaff_x19;
  long *unaff_x20;
  long *plVar8;
  undefined8 *puVar9;
  long *unaff_x21;
  undefined *unaff_x22;
  long *unaff_x23;
  long *plVar10;
  long *plVar11;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
code_r0x00010acad050:
  ppuVar4 = param_6;
  *(undefined **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined ***)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined ***)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  if (*(long *)(param_5 + 0x1a8) != 0) {
    (**(code **)(*ppuVar4 + 0x18))(ppuVar4,&PTR_DAT_110c6a848);
    puVar7 = *(undefined8 **)(param_5 + 0x198);
    *(undefined **)((long)register0x00000008 + -0xb8) = param_5 + 0x1a0;
    if (puVar7 != (undefined8 *)(param_5 + 0x1a0)) {
      unaff_x24 = &PTR_DAT_110c6b4b0;
      unaff_x25 = &PTR_s_value_110c6b4f0;
      unaff_x26 = &PTR_DAT_110c6b4d0;
      unaff_x27 = &DAT_10f636fd0;
      unaff_x28 = &UNK_10f633e9d;
      unaff_x22 = &UNK_10e50ae5e;
      do {
        if (*(long *)(puVar7[5] + 0x198) != 0) {
          (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
          (**(code **)(*ppuVar4 + 0x50))(ppuVar4,&PTR_DAT_110c6b490,*(undefined4 *)(puVar7 + 4));
          (**(code **)(*ppuVar4 + 0x18))(ppuVar4,&PTR_DAT_110c6a868);
          *(undefined8 **)((long)register0x00000008 + -0xb0) = puVar7;
          unaff_x20 = *(long **)(puVar7[5] + 0x188);
          plVar10 = (long *)(puVar7[5] + 400);
          *(long **)((long)register0x00000008 + -0xa8) = plVar10;
          if (unaff_x20 != plVar10) {
LAB_10acad14c:
            lVar5 = unaff_x20[5];
            if (((*(long *)(lVar5 + 0x198) != 0) || (*(long *)(lVar5 + 0x1b0) != 0)) ||
               (*(long *)(lVar5 + 0x1e0) != 0)) {
              (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
              (**(code **)(*ppuVar4 + 0x50))(ppuVar4,&PTR_DAT_110c6b490,(int)unaff_x20[4]);
              (**(code **)(*ppuVar4 + 0x18))(ppuVar4,&PTR_DAT_110c6a888);
              lVar5 = unaff_x20[5];
              unaff_x21 = *(long **)(lVar5 + 0x188);
              unaff_x23 = (long *)(lVar5 + 400);
              if (unaff_x21 != unaff_x23) {
LAB_10acad1c0:
                (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
                FUN_10a00d760(ppuVar4,&PTR_DAT_110c6b4b0,unaff_x21 + 4);
                param_6 = unaff_x26;
                switch(*(undefined2 *)(unaff_x21[8] + 0x20)) {
                case 1:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,"bool");
                  if (*(short *)(unaff_x21[8] + 0x20) == 1) {
                    uVar12 = (uint)*(byte *)(unaff_x21[8] + 0x24);
                    pcVar6 = *(code **)(*ppuVar4 + 0x70);
code_r0x00010acad4f0:
                    (*pcVar6)(ppuVar4,&PTR_s_value_110c6b4f0,uVar12);
                    goto LAB_10acad5bc;
                  }
                  break;
                case 2:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f62bbce);
                  if (*(short *)(unaff_x21[8] + 0x20) == 2) {
                    uVar12 = *(uint *)(unaff_x21[8] + 0x24);
                    pcVar6 = *(code **)(*ppuVar4 + 0x40);
                    goto code_r0x00010acad4f0;
                  }
                  break;
                case 3:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f33a2d8);
                  if (*(short *)(unaff_x21[8] + 0x20) == 3) {
                    param_1 = (ulong)*(uint *)(unaff_x21[8] + 0x24);
                    (**(code **)(*ppuVar4 + 0x60))(ppuVar4,&PTR_s_value_110c6b4f0);
                    goto LAB_10acad5bc;
                  }
                  break;
                default:
                  goto LAB_10acad5bc;
                case 6:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f49122c);
                  if (*(short *)(unaff_x21[8] + 0x20) == 6) {
                    uVar12 = *(uint *)(unaff_x21[8] + 0x24);
                    pcVar6 = *(code **)(*ppuVar4 + 0x50);
                    goto code_r0x00010acad4f0;
                  }
                  break;
                case 7:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913b9);
                  if (*(short *)(unaff_x21[8] + 0x20) == 7) {
                    param_1 = *(ulong *)(unaff_x21[8] + 0x24);
                    *(ulong *)((long)register0x00000008 + -0xa0) = param_1;
                    pcVar6 = *(code **)(*ppuVar4 + 0x78);
                    goto code_r0x00010acad5ac;
                  }
                  break;
                case 8:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913be);
                  lVar5 = unaff_x21[8];
                  if (*(short *)(lVar5 + 0x20) == 8) {
                    uVar12 = *(uint *)(lVar5 + 0x2c);
                    param_1 = (ulong)uVar12;
                    param_2 = *(undefined8 *)(lVar5 + 0x24);
                    *(undefined8 *)((long)register0x00000008 + -0xa0) = param_2;
                    *(uint *)((long)register0x00000008 + -0x98) = uVar12;
                    pcVar6 = *(code **)(*ppuVar4 + 0x80);
                    goto code_r0x00010acad5ac;
                  }
                  break;
                case 9:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913c3);
                  FUN_10a0dad84(unaff_x21[8]);
                  *(int *)((long)register0x00000008 + -0xa0) = (int)param_1;
                  *(int *)((long)register0x00000008 + -0x9c) = (int)param_2;
                  *(undefined4 *)((long)register0x00000008 + -0x98) = param_3;
                  *(undefined4 *)((long)register0x00000008 + -0x94) = param_4;
                  pcVar6 = *(code **)(*ppuVar4 + 0x90);
                  goto code_r0x00010acad5ac;
                case 10:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f491403);
                  lVar5 = unaff_x21[8];
                  if (*(short *)(lVar5 + 0x20) == 10) {
                    param_1 = *(ulong *)(lVar5 + 0x24);
                    uVar13 = *(undefined8 *)(lVar5 + 0x3c);
                    param_2 = *(undefined8 *)(lVar5 + 0x34);
                    *(undefined8 *)((long)register0x00000008 + -0x98) =
                         *(undefined8 *)(lVar5 + 0x2c);
                    *(ulong *)((long)register0x00000008 + -0xa0) = param_1;
                    *(undefined8 *)((long)register0x00000008 + -0x88) = uVar13;
                    *(undefined8 *)((long)register0x00000008 + -0x90) = param_2;
                    *(undefined4 *)((long)register0x00000008 + -0x80) =
                         *(undefined4 *)(lVar5 + 0x44);
                    pcVar6 = *(code **)(*ppuVar4 + 0xe8);
                    goto code_r0x00010acad5ac;
                  }
                  break;
                case 0xb:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f491408);
                  lVar5 = unaff_x21[8];
                  if (*(short *)(lVar5 + 0x20) == 0xb) {
                    uVar13 = *(undefined8 *)(lVar5 + 0x24);
                    uVar15 = *(undefined8 *)(lVar5 + 0x3c);
                    uVar14 = *(undefined8 *)(lVar5 + 0x34);
                    *(undefined8 *)((long)register0x00000008 + -0x98) =
                         *(undefined8 *)(lVar5 + 0x2c);
                    *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar13;
                    *(undefined8 *)((long)register0x00000008 + -0x88) = uVar15;
                    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar14;
                    param_1 = *(ulong *)(lVar5 + 0x44);
                    uVar13 = *(undefined8 *)(lVar5 + 0x5c);
                    param_2 = *(undefined8 *)(lVar5 + 0x54);
                    *(undefined8 *)((long)register0x00000008 + -0x78) =
                         *(undefined8 *)(lVar5 + 0x4c);
                    *(ulong *)((long)register0x00000008 + -0x80) = param_1;
                    *(undefined8 *)((long)register0x00000008 + -0x68) = uVar13;
                    *(undefined8 *)((long)register0x00000008 + -0x70) = param_2;
                    pcVar6 = *(code **)(*ppuVar4 + 0xf0);
                    goto code_r0x00010acad5ac;
                  }
                  break;
                case 0x16:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913fe);
                  FUN_10aca4910(unaff_x21[8]);
                  *(int *)((long)register0x00000008 + -0xa0) = (int)param_1;
                  *(int *)((long)register0x00000008 + -0x9c) = (int)param_2;
                  *(undefined4 *)((long)register0x00000008 + -0x98) = param_3;
                  *(undefined4 *)((long)register0x00000008 + -0x94) = param_4;
                  pcVar6 = *(code **)(*ppuVar4 + 0xe0);
code_r0x00010acad5ac:
                  (*pcVar6)(ppuVar4,&PTR_s_value_110c6b4f0,
                            (undefined1 *)((long)register0x00000008 + -0xa0));
LAB_10acad5bc:
                  (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
                  plVar10 = (long *)unaff_x21[1];
                  plVar8 = unaff_x21;
                  if ((long *)unaff_x21[1] == (long *)0x0) {
                    do {
                      unaff_x21 = (long *)plVar8[2];
                      bVar3 = (long *)*unaff_x21 != plVar8;
                      plVar8 = unaff_x21;
                    } while (bVar3);
                  }
                  else {
                    do {
                      unaff_x21 = plVar10;
                      plVar10 = (long *)*unaff_x21;
                    } while ((long *)*unaff_x21 != (long *)0x0);
                  }
                  if (unaff_x21 == unaff_x23) goto code_r0x00010acad604;
                  goto LAB_10acad1c0;
                case 0x1f:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913c8);
                  if (*(short *)(unaff_x21[8] + 0x20) == 0x1f) {
                    *(undefined8 *)((long)register0x00000008 + -0xa0) =
                         *(undefined8 *)(unaff_x21[8] + 0x24);
                    pcVar6 = *(code **)(*ppuVar4 + 0x98);
                    goto code_r0x00010acad5ac;
                  }
                  break;
                case 0x22:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913ce);
                  lVar5 = unaff_x21[8];
                  if (*(short *)(lVar5 + 0x20) == 0x22) {
                    uVar1 = *(undefined4 *)(lVar5 + 0x2c);
                    *(undefined8 *)((long)register0x00000008 + -0xa0) =
                         *(undefined8 *)(lVar5 + 0x24);
                    *(undefined4 *)((long)register0x00000008 + -0x98) = uVar1;
                    pcVar6 = *(code **)(*ppuVar4 + 0xa0);
                    goto code_r0x00010acad5ac;
                  }
                  break;
                case 0x23:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913d4);
                  lVar5 = unaff_x21[8];
                  if (*(short *)(lVar5 + 0x20) == 0x23) {
                    param_1 = *(ulong *)(lVar5 + 0x24);
                    *(undefined8 *)((long)register0x00000008 + -0x98) =
                         *(undefined8 *)(lVar5 + 0x2c);
                    *(ulong *)((long)register0x00000008 + -0xa0) = param_1;
                    pcVar6 = *(code **)(*ppuVar4 + 0xa8);
                    goto code_r0x00010acad5ac;
                  }
                  break;
                case 0x24:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913da);
                  if (*(short *)(unaff_x21[8] + 0x20) == 0x24) {
                    *(undefined8 *)((long)register0x00000008 + -0xa0) =
                         *(undefined8 *)(unaff_x21[8] + 0x24);
                    pcVar6 = *(code **)(*ppuVar4 + 0xb0);
                    goto code_r0x00010acad5ac;
                  }
                  break;
                case 0x25:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913e0);
                  lVar5 = unaff_x21[8];
                  if (*(short *)(lVar5 + 0x20) == 0x25) {
                    uVar1 = *(undefined4 *)(lVar5 + 0x2c);
                    *(undefined8 *)((long)register0x00000008 + -0xa0) =
                         *(undefined8 *)(lVar5 + 0x24);
                    *(undefined4 *)((long)register0x00000008 + -0x98) = uVar1;
                    pcVar6 = *(code **)(*ppuVar4 + 0xb8);
                    goto code_r0x00010acad5ac;
                  }
                  break;
                case 0x26:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913e6);
                  lVar5 = unaff_x21[8];
                  if (*(short *)(lVar5 + 0x20) == 0x26) {
                    param_1 = *(ulong *)(lVar5 + 0x24);
                    *(undefined8 *)((long)register0x00000008 + -0x98) =
                         *(undefined8 *)(lVar5 + 0x2c);
                    *(ulong *)((long)register0x00000008 + -0xa0) = param_1;
                    pcVar6 = *(code **)(*ppuVar4 + 0xc0);
                    goto code_r0x00010acad5ac;
                  }
                }
                param_5 = &UNK_10f6399e9;
                unaff_x30 = FUN_10acad860;
                FUN_10a00946c();
                param_5 = param_5 + -0x20;
                register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
                unaff_x19 = ppuVar4;
                goto code_r0x00010acad050;
              }
              goto LAB_10acad608;
            }
            goto LAB_10acad788;
          }
LAB_10acad7c4:
          (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
          (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
          puVar7 = *(undefined8 **)((long)register0x00000008 + -0xb0);
        }
        puVar2 = (undefined8 *)puVar7[1];
        puVar9 = puVar7;
        if ((undefined8 *)puVar7[1] == (undefined8 *)0x0) {
          do {
            puVar7 = (undefined8 *)puVar9[2];
            bVar3 = (undefined8 *)*puVar7 != puVar9;
            puVar9 = puVar7;
          } while (bVar3);
        }
        else {
          do {
            puVar7 = puVar2;
            puVar2 = (undefined8 *)*puVar7;
          } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
        }
      } while (puVar7 != *(undefined8 **)((long)register0x00000008 + -0xb8));
    }
    (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
  }
  return;
code_r0x00010acad604:
  lVar5 = unaff_x20[5];
LAB_10acad608:
  plVar10 = *(long **)(lVar5 + 0x1a0);
  while (plVar10 != (long *)(lVar5 + 0x1a8)) {
    (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
    FUN_10a00d760(ppuVar4,&PTR_DAT_110c6b4b0,plVar10 + 4);
    FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f636fd0);
    FUN_10a02e188(ppuVar4,&PTR_s_value_110c6b4f0,plVar10[8] + 0x188,&UNK_10f633e9d,0xd);
    (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
    plVar8 = (long *)plVar10[1];
    plVar11 = plVar10;
    if ((long *)plVar10[1] == (long *)0x0) {
      do {
        plVar10 = (long *)plVar11[2];
        bVar3 = (long *)*plVar10 != plVar11;
        plVar11 = plVar10;
      } while (bVar3);
    }
    else {
      do {
        plVar10 = plVar8;
        plVar8 = (long *)*plVar10;
      } while ((long *)*plVar10 != (long *)0x0);
    }
  }
  (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
  (**(code **)(*ppuVar4 + 0x18))(ppuVar4,&PTR_DAT_110c6a8a8);
  lVar5 = unaff_x20[5];
  plVar10 = *(long **)(lVar5 + 0x1d0);
  while (plVar10 != (long *)(lVar5 + 0x1d8)) {
    (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
    FUN_10a00d760(ppuVar4,&PTR_DAT_110c6b4b0,plVar10 + 4);
    (**(code **)(*ppuVar4 + 0x50))(ppuVar4,&PTR_s_value_110c6b4f0,(int)plVar10[8]);
    (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
    plVar8 = (long *)plVar10[1];
    plVar11 = plVar10;
    if ((long *)plVar10[1] == (long *)0x0) {
      do {
        plVar10 = (long *)plVar11[2];
        bVar3 = (long *)*plVar10 != plVar11;
        plVar11 = plVar10;
      } while (bVar3);
    }
    else {
      do {
        plVar10 = plVar8;
        plVar8 = (long *)*plVar10;
      } while ((long *)*plVar10 != (long *)0x0);
    }
  }
  (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
  (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
LAB_10acad788:
  plVar10 = (long *)unaff_x20[1];
  plVar8 = unaff_x20;
  if ((long *)unaff_x20[1] == (long *)0x0) {
    do {
      unaff_x20 = (long *)plVar8[2];
      bVar3 = (long *)*unaff_x20 != plVar8;
      plVar8 = unaff_x20;
    } while (bVar3);
  }
  else {
    do {
      unaff_x20 = plVar10;
      plVar10 = (long *)*unaff_x20;
    } while ((long *)*unaff_x20 != (long *)0x0);
  }
  if (unaff_x20 == *(long **)((long)register0x00000008 + -0xa8)) goto LAB_10acad7c4;
  goto LAB_10acad14c;
}



/* Entry: 10acad860; end: 10acad867;  */

void FUN_10acad860(ulong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined *param_5,undefined **param_6)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined **ppuVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined **unaff_x19;
  long *plVar8;
  undefined8 *puVar9;
  long *unaff_x20;
  long *unaff_x21;
  undefined *unaff_x22;
  long *plVar10;
  long *plVar11;
  long *unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
code_r0x00010acad860:
  ppuVar4 = param_6;
  *(undefined **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined ***)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined ***)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  if (*(long *)(param_5 + 0x188) != 0) {
    (**(code **)(*ppuVar4 + 0x18))(ppuVar4,&PTR_DAT_110c6a848);
    puVar7 = *(undefined8 **)(param_5 + 0x178);
    *(undefined **)((long)register0x00000008 + -0xb8) = param_5 + 0x180;
    if (puVar7 != (undefined8 *)(param_5 + 0x180)) {
      unaff_x24 = &PTR_DAT_110c6b4b0;
      unaff_x25 = &PTR_s_value_110c6b4f0;
      unaff_x26 = &PTR_DAT_110c6b4d0;
      unaff_x27 = &DAT_10f636fd0;
      unaff_x28 = &UNK_10f633e9d;
      unaff_x22 = &UNK_10e50ae5e;
      do {
        if (*(long *)(puVar7[5] + 0x198) != 0) {
          (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
          (**(code **)(*ppuVar4 + 0x50))(ppuVar4,&PTR_DAT_110c6b490,*(undefined4 *)(puVar7 + 4));
          (**(code **)(*ppuVar4 + 0x18))(ppuVar4,&PTR_DAT_110c6a868);
          *(undefined8 **)((long)register0x00000008 + -0xb0) = puVar7;
          unaff_x20 = *(long **)(puVar7[5] + 0x188);
          plVar10 = (long *)(puVar7[5] + 400);
          *(long **)((long)register0x00000008 + -0xa8) = plVar10;
          if (unaff_x20 != plVar10) {
LAB_10acad14c:
            lVar5 = unaff_x20[5];
            if (((*(long *)(lVar5 + 0x198) != 0) || (*(long *)(lVar5 + 0x1b0) != 0)) ||
               (*(long *)(lVar5 + 0x1e0) != 0)) {
              (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
              (**(code **)(*ppuVar4 + 0x50))(ppuVar4,&PTR_DAT_110c6b490,(int)unaff_x20[4]);
              (**(code **)(*ppuVar4 + 0x18))(ppuVar4,&PTR_DAT_110c6a888);
              lVar5 = unaff_x20[5];
              unaff_x21 = *(long **)(lVar5 + 0x188);
              unaff_x23 = (long *)(lVar5 + 400);
              if (unaff_x21 != unaff_x23) {
LAB_10acad1c0:
                (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
                FUN_10a00d760(ppuVar4,&PTR_DAT_110c6b4b0,unaff_x21 + 4);
                param_6 = unaff_x26;
                switch(*(undefined2 *)(unaff_x21[8] + 0x20)) {
                case 1:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,"bool");
                  if (*(short *)(unaff_x21[8] + 0x20) == 1) {
                    uVar12 = (uint)*(byte *)(unaff_x21[8] + 0x24);
                    pcVar6 = *(code **)(*ppuVar4 + 0x70);
code_r0x00010acad4f0:
                    (*pcVar6)(ppuVar4,&PTR_s_value_110c6b4f0,uVar12);
                    goto LAB_10acad5bc;
                  }
                  break;
                case 2:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f62bbce);
                  if (*(short *)(unaff_x21[8] + 0x20) == 2) {
                    uVar12 = *(uint *)(unaff_x21[8] + 0x24);
                    pcVar6 = *(code **)(*ppuVar4 + 0x40);
                    goto code_r0x00010acad4f0;
                  }
                  break;
                case 3:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f33a2d8);
                  if (*(short *)(unaff_x21[8] + 0x20) == 3) {
                    param_1 = (ulong)*(uint *)(unaff_x21[8] + 0x24);
                    (**(code **)(*ppuVar4 + 0x60))(ppuVar4,&PTR_s_value_110c6b4f0);
                    goto LAB_10acad5bc;
                  }
                  break;
                default:
                  goto LAB_10acad5bc;
                case 6:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f49122c);
                  if (*(short *)(unaff_x21[8] + 0x20) == 6) {
                    uVar12 = *(uint *)(unaff_x21[8] + 0x24);
                    pcVar6 = *(code **)(*ppuVar4 + 0x50);
                    goto code_r0x00010acad4f0;
                  }
                  break;
                case 7:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913b9);
                  if (*(short *)(unaff_x21[8] + 0x20) == 7) {
                    param_1 = *(ulong *)(unaff_x21[8] + 0x24);
                    *(ulong *)((long)register0x00000008 + -0xa0) = param_1;
                    pcVar6 = *(code **)(*ppuVar4 + 0x78);
                    goto code_r0x00010acad5ac;
                  }
                  break;
                case 8:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913be);
                  lVar5 = unaff_x21[8];
                  if (*(short *)(lVar5 + 0x20) == 8) {
                    uVar12 = *(uint *)(lVar5 + 0x2c);
                    param_1 = (ulong)uVar12;
                    param_2 = *(undefined8 *)(lVar5 + 0x24);
                    *(undefined8 *)((long)register0x00000008 + -0xa0) = param_2;
                    *(uint *)((long)register0x00000008 + -0x98) = uVar12;
                    pcVar6 = *(code **)(*ppuVar4 + 0x80);
                    goto code_r0x00010acad5ac;
                  }
                  break;
                case 9:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913c3);
                  FUN_10a0dad84(unaff_x21[8]);
                  *(int *)((long)register0x00000008 + -0xa0) = (int)param_1;
                  *(int *)((long)register0x00000008 + -0x9c) = (int)param_2;
                  *(undefined4 *)((long)register0x00000008 + -0x98) = param_3;
                  *(undefined4 *)((long)register0x00000008 + -0x94) = param_4;
                  pcVar6 = *(code **)(*ppuVar4 + 0x90);
                  goto code_r0x00010acad5ac;
                case 10:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f491403);
                  lVar5 = unaff_x21[8];
                  if (*(short *)(lVar5 + 0x20) == 10) {
                    param_1 = *(ulong *)(lVar5 + 0x24);
                    uVar13 = *(undefined8 *)(lVar5 + 0x3c);
                    param_2 = *(undefined8 *)(lVar5 + 0x34);
                    *(undefined8 *)((long)register0x00000008 + -0x98) =
                         *(undefined8 *)(lVar5 + 0x2c);
                    *(ulong *)((long)register0x00000008 + -0xa0) = param_1;
                    *(undefined8 *)((long)register0x00000008 + -0x88) = uVar13;
                    *(undefined8 *)((long)register0x00000008 + -0x90) = param_2;
                    *(undefined4 *)((long)register0x00000008 + -0x80) =
                         *(undefined4 *)(lVar5 + 0x44);
                    pcVar6 = *(code **)(*ppuVar4 + 0xe8);
                    goto code_r0x00010acad5ac;
                  }
                  break;
                case 0xb:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f491408);
                  lVar5 = unaff_x21[8];
                  if (*(short *)(lVar5 + 0x20) == 0xb) {
                    uVar13 = *(undefined8 *)(lVar5 + 0x24);
                    uVar15 = *(undefined8 *)(lVar5 + 0x3c);
                    uVar14 = *(undefined8 *)(lVar5 + 0x34);
                    *(undefined8 *)((long)register0x00000008 + -0x98) =
                         *(undefined8 *)(lVar5 + 0x2c);
                    *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar13;
                    *(undefined8 *)((long)register0x00000008 + -0x88) = uVar15;
                    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar14;
                    param_1 = *(ulong *)(lVar5 + 0x44);
                    uVar13 = *(undefined8 *)(lVar5 + 0x5c);
                    param_2 = *(undefined8 *)(lVar5 + 0x54);
                    *(undefined8 *)((long)register0x00000008 + -0x78) =
                         *(undefined8 *)(lVar5 + 0x4c);
                    *(ulong *)((long)register0x00000008 + -0x80) = param_1;
                    *(undefined8 *)((long)register0x00000008 + -0x68) = uVar13;
                    *(undefined8 *)((long)register0x00000008 + -0x70) = param_2;
                    pcVar6 = *(code **)(*ppuVar4 + 0xf0);
                    goto code_r0x00010acad5ac;
                  }
                  break;
                case 0x16:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913fe);
                  FUN_10aca4910(unaff_x21[8]);
                  *(int *)((long)register0x00000008 + -0xa0) = (int)param_1;
                  *(int *)((long)register0x00000008 + -0x9c) = (int)param_2;
                  *(undefined4 *)((long)register0x00000008 + -0x98) = param_3;
                  *(undefined4 *)((long)register0x00000008 + -0x94) = param_4;
                  pcVar6 = *(code **)(*ppuVar4 + 0xe0);
code_r0x00010acad5ac:
                  (*pcVar6)(ppuVar4,&PTR_s_value_110c6b4f0,
                            (undefined1 *)((long)register0x00000008 + -0xa0));
LAB_10acad5bc:
                  (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
                  plVar10 = (long *)unaff_x21[1];
                  plVar8 = unaff_x21;
                  if ((long *)unaff_x21[1] == (long *)0x0) {
                    do {
                      unaff_x21 = (long *)plVar8[2];
                      bVar3 = (long *)*unaff_x21 != plVar8;
                      plVar8 = unaff_x21;
                    } while (bVar3);
                  }
                  else {
                    do {
                      unaff_x21 = plVar10;
                      plVar10 = (long *)*unaff_x21;
                    } while ((long *)*unaff_x21 != (long *)0x0);
                  }
                  if (unaff_x21 == unaff_x23) goto code_r0x00010acad604;
                  goto LAB_10acad1c0;
                case 0x1f:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913c8);
                  if (*(short *)(unaff_x21[8] + 0x20) == 0x1f) {
                    *(undefined8 *)((long)register0x00000008 + -0xa0) =
                         *(undefined8 *)(unaff_x21[8] + 0x24);
                    pcVar6 = *(code **)(*ppuVar4 + 0x98);
                    goto code_r0x00010acad5ac;
                  }
                  break;
                case 0x22:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913ce);
                  lVar5 = unaff_x21[8];
                  if (*(short *)(lVar5 + 0x20) == 0x22) {
                    uVar1 = *(undefined4 *)(lVar5 + 0x2c);
                    *(undefined8 *)((long)register0x00000008 + -0xa0) =
                         *(undefined8 *)(lVar5 + 0x24);
                    *(undefined4 *)((long)register0x00000008 + -0x98) = uVar1;
                    pcVar6 = *(code **)(*ppuVar4 + 0xa0);
                    goto code_r0x00010acad5ac;
                  }
                  break;
                case 0x23:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913d4);
                  lVar5 = unaff_x21[8];
                  if (*(short *)(lVar5 + 0x20) == 0x23) {
                    param_1 = *(ulong *)(lVar5 + 0x24);
                    *(undefined8 *)((long)register0x00000008 + -0x98) =
                         *(undefined8 *)(lVar5 + 0x2c);
                    *(ulong *)((long)register0x00000008 + -0xa0) = param_1;
                    pcVar6 = *(code **)(*ppuVar4 + 0xa8);
                    goto code_r0x00010acad5ac;
                  }
                  break;
                case 0x24:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913da);
                  if (*(short *)(unaff_x21[8] + 0x20) == 0x24) {
                    *(undefined8 *)((long)register0x00000008 + -0xa0) =
                         *(undefined8 *)(unaff_x21[8] + 0x24);
                    pcVar6 = *(code **)(*ppuVar4 + 0xb0);
                    goto code_r0x00010acad5ac;
                  }
                  break;
                case 0x25:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913e0);
                  lVar5 = unaff_x21[8];
                  if (*(short *)(lVar5 + 0x20) == 0x25) {
                    uVar1 = *(undefined4 *)(lVar5 + 0x2c);
                    *(undefined8 *)((long)register0x00000008 + -0xa0) =
                         *(undefined8 *)(lVar5 + 0x24);
                    *(undefined4 *)((long)register0x00000008 + -0x98) = uVar1;
                    pcVar6 = *(code **)(*ppuVar4 + 0xb8);
                    goto code_r0x00010acad5ac;
                  }
                  break;
                case 0x26:
                  FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f4913e6);
                  lVar5 = unaff_x21[8];
                  if (*(short *)(lVar5 + 0x20) == 0x26) {
                    param_1 = *(ulong *)(lVar5 + 0x24);
                    *(undefined8 *)((long)register0x00000008 + -0x98) =
                         *(undefined8 *)(lVar5 + 0x2c);
                    *(ulong *)((long)register0x00000008 + -0xa0) = param_1;
                    pcVar6 = *(code **)(*ppuVar4 + 0xc0);
                    goto code_r0x00010acad5ac;
                  }
                }
                param_5 = &UNK_10f6399e9;
                unaff_x30 = FUN_10acad860;
                FUN_10a00946c();
                register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
                unaff_x19 = ppuVar4;
                goto code_r0x00010acad860;
              }
              goto LAB_10acad608;
            }
            goto LAB_10acad788;
          }
LAB_10acad7c4:
          (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
          (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
          puVar7 = *(undefined8 **)((long)register0x00000008 + -0xb0);
        }
        puVar2 = (undefined8 *)puVar7[1];
        puVar9 = puVar7;
        if ((undefined8 *)puVar7[1] == (undefined8 *)0x0) {
          do {
            puVar7 = (undefined8 *)puVar9[2];
            bVar3 = (undefined8 *)*puVar7 != puVar9;
            puVar9 = puVar7;
          } while (bVar3);
        }
        else {
          do {
            puVar7 = puVar2;
            puVar2 = (undefined8 *)*puVar7;
          } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
        }
      } while (puVar7 != *(undefined8 **)((long)register0x00000008 + -0xb8));
    }
    (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
  }
  return;
code_r0x00010acad604:
  lVar5 = unaff_x20[5];
LAB_10acad608:
  plVar10 = *(long **)(lVar5 + 0x1a0);
  while (plVar10 != (long *)(lVar5 + 0x1a8)) {
    (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
    FUN_10a00d760(ppuVar4,&PTR_DAT_110c6b4b0,plVar10 + 4);
    FUN_10a33a5cc(ppuVar4,&PTR_DAT_110c6b4d0,&DAT_10f636fd0);
    FUN_10a02e188(ppuVar4,&PTR_s_value_110c6b4f0,plVar10[8] + 0x188,&UNK_10f633e9d,0xd);
    (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
    plVar8 = (long *)plVar10[1];
    plVar11 = plVar10;
    if ((long *)plVar10[1] == (long *)0x0) {
      do {
        plVar10 = (long *)plVar11[2];
        bVar3 = (long *)*plVar10 != plVar11;
        plVar11 = plVar10;
      } while (bVar3);
    }
    else {
      do {
        plVar10 = plVar8;
        plVar8 = (long *)*plVar10;
      } while ((long *)*plVar10 != (long *)0x0);
    }
  }
  (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
  (**(code **)(*ppuVar4 + 0x18))(ppuVar4,&PTR_DAT_110c6a8a8);
  lVar5 = unaff_x20[5];
  plVar10 = *(long **)(lVar5 + 0x1d0);
  while (plVar10 != (long *)(lVar5 + 0x1d8)) {
    (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
    FUN_10a00d760(ppuVar4,&PTR_DAT_110c6b4b0,plVar10 + 4);
    (**(code **)(*ppuVar4 + 0x50))(ppuVar4,&PTR_s_value_110c6b4f0,(int)plVar10[8]);
    (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
    plVar8 = (long *)plVar10[1];
    plVar11 = plVar10;
    if ((long *)plVar10[1] == (long *)0x0) {
      do {
        plVar10 = (long *)plVar11[2];
        bVar3 = (long *)*plVar10 != plVar11;
        plVar11 = plVar10;
      } while (bVar3);
    }
    else {
      do {
        plVar10 = plVar8;
        plVar8 = (long *)*plVar10;
      } while ((long *)*plVar10 != (long *)0x0);
    }
  }
  (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
  (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
LAB_10acad788:
  plVar10 = (long *)unaff_x20[1];
  plVar8 = unaff_x20;
  if ((long *)unaff_x20[1] == (long *)0x0) {
    do {
      unaff_x20 = (long *)plVar8[2];
      bVar3 = (long *)*unaff_x20 != plVar8;
      plVar8 = unaff_x20;
    } while (bVar3);
  }
  else {
    do {
      unaff_x20 = plVar10;
      plVar10 = (long *)*unaff_x20;
    } while ((long *)*unaff_x20 != (long *)0x0);
  }
  if (unaff_x20 == *(long **)((long)register0x00000008 + -0xa8)) goto LAB_10acad7c4;
  goto LAB_10acad14c;
}



/* Entry: 10acad868; end: 10acad8ff;  */

void FUN_10acad868(long *param_1,long param_2,long *param_3,long param_4,long *param_5,long param_6)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  
  iVar2 = (int)auStack_48;
  func_0x00010a1bd170();
  if (iVar2 == 0) {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    iVar2 = (int)auStack_48;
    func_0x00010a1bd170();
    plVar3 = (long *)0x0;
    if (iVar2 == 0) {
      plVar3 = param_3;
    }
    lVar4 = 0;
    if (iVar2 == 0) {
      lVar4 = param_4;
    }
  }
  else {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    func_0x00010a1bd170(auStack_48);
    plVar3 = (long *)0x0;
    lVar4 = 0;
  }
  lVar5 = *param_1 - (ulong)uRam00000001133020d8;
  if (param_6 != 0) {
    lVar1 = 0;
    if (*param_1 != 0) {
      lVar1 = lVar5 + 0x30;
    }
    param_6 = param_6 << 4;
    do {
      if (*param_5 != 0) {
        func_0x00010a1bf190(*param_5 + 0xb0,lVar1);
      }
      param_5 = param_5 + 2;
      param_6 = param_6 + -0x10;
    } while (param_6 != 0);
  }
  if (lVar4 != 0) {
    lVar4 = lVar4 << 4;
    do {
      if (*plVar3 != 0) {
        func_0x00010a1bf34c(*plVar3 + 0xb0,lVar5 + 0x30);
      }
      plVar3 = plVar3 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 10acad900; end: 10acad9e7;  */

void FUN_10acad900(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = *(long *)(param_1 + 0x1a0);
  if (lVar6 != 0) {
    lVar7 = param_1 + 0x1a0;
    do {
      lVar2 = 8;
      if (param_2 <= *(ulong *)(lVar6 + 0x20)) {
        lVar2 = 0;
        lVar7 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar2);
    } while (lVar6 != 0);
    if ((lVar7 != param_1 + 0x1a0) && (*(ulong *)(lVar7 + 0x20) <= param_2)) {
      plVar5 = (long *)0x20;
      __Znwm();
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_DAT_110bd9fd8;
      plVar5[1] = 0;
      plStack_40 = plVar5 + 3;
      *plStack_40 = 0;
      plStack_38 = plVar5;
      FUN_10acaba6c(*(long *)(lVar7 + 0x28) + 0x178,&plStack_40);
      plVar5 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      FUN_10acad9e8(param_1 + 0x198,lVar7);
    }
  }
  return;
}



/* Entry: 10acad9e8; end: 10acadaf7;  */

long * FUN_10acad9e8(undefined8 param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plStack_a0;
  long *plStack_98;
  long *aplStack_60 [2];
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_38;
  
  pplVar3 = aplStack_60;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_48 = *(long **)(param_2 + 0x30);
  uStack_50 = *(undefined8 *)(param_2 + 0x28);
  if (*(long *)(param_2 + 0x30) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0x30) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar5 = 0;
  FUN_10acad868(aplStack_60,param_1,0,0,&uStack_50,1);
  plVar9 = aplStack_60[0];
  uVar4 = param_2;
  FUN_10acb685c();
  func_0x00010acd6c70((undefined8 *)(param_2 + 0x28));
  __ZdlPv(param_2);
  FUN_10acd6d68();
  plVar6 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar7 = plStack_48 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pplVar3 = (long **)plVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar9;
  }
  ___stack_chk_fail();
  func_0x00010acd6c70(&uStack_50);
  __Unwind_Resume();
  plVar9 = pplVar3[0x34];
  plVar6 = (long *)pplVar3;
  if (plVar9 != (long *)0x0) {
    plVar7 = (long *)(pplVar3 + 0x34);
    do {
      lVar8 = 8;
      if (uVar4 <= (ulong)plVar9[4]) {
        lVar8 = 0;
        plVar7 = plVar9;
      }
      plVar9 = *(long **)((long)plVar9 + lVar8);
    } while (plVar9 != (long *)0x0);
    if (((((long **)plVar7 != pplVar3 + 0x34) && ((ulong)plVar7[4] <= uVar4)) &&
        (plVar9 = (long *)plVar7[5], plVar9 != (long *)0x0)) &&
       (plVar6 = plVar9, FUN_10acab860(plVar9,uVar5), plVar9[0x33] == 0)) {
      plVar6 = pplVar3[0x34];
      if (plVar6 != (long *)0x0) {
        plVar9 = (long *)(pplVar3 + 0x34);
        do {
          lVar8 = 8;
          if (uVar4 <= (ulong)plVar6[4]) {
            lVar8 = 0;
            plVar9 = plVar6;
          }
          plVar6 = *(long **)((long)plVar6 + lVar8);
        } while (plVar6 != (long *)0x0);
        if (((long **)plVar9 != pplVar3 + 0x34) && ((ulong)plVar9[4] <= uVar4)) {
          plVar6 = (long *)0x20;
          __Znwm();
          plVar6[2] = 0;
          *plVar6 = (long)&PTR_DAT_110bd9fd8;
          plVar6[1] = 0;
          plStack_a0 = plVar6 + 3;
          *plStack_a0 = 0;
          plStack_98 = plVar6;
          FUN_10acaba6c(plVar9[5] + 0x178,&plStack_a0);
          plVar6 = plStack_98;
          if (plStack_98 != (long *)0x0) {
            plVar7 = plStack_98 + 1;
            do {
              lVar8 = *plVar7;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar2) {
                *plVar7 = lVar8 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plStack_98 + 0x10))(plStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          pplVar3 = pplVar3 + 0x33;
          FUN_10acad9e8(pplVar3,plVar9);
        }
      }
      return (long *)pplVar3;
    }
  }
  return plVar6;
}



/* Entry: 10acadaf8; end: 10acadb93;  */

void FUN_10acadaf8(long param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = *(long *)(param_1 + 0x1a0);
  if (lVar7 != 0) {
    lVar6 = param_1 + 0x1a0;
    do {
      lVar2 = 8;
      if (param_2 <= *(ulong *)(lVar7 + 0x20)) {
        lVar2 = 0;
        lVar6 = lVar7;
      }
      lVar7 = *(long *)(lVar7 + lVar2);
    } while (lVar7 != 0);
    if ((((lVar6 != param_1 + 0x1a0) && (*(ulong *)(lVar6 + 0x20) <= param_2)) &&
        (lVar7 = *(long *)(lVar6 + 0x28), lVar7 != 0)) &&
       (FUN_10acab860(lVar7,param_3), *(long *)(lVar7 + 0x198) == 0)) {
      lVar7 = *(long *)(param_1 + 0x1a0);
      if (lVar7 != 0) {
        lVar6 = param_1 + 0x1a0;
        do {
          lVar2 = 8;
          if (param_2 <= *(ulong *)(lVar7 + 0x20)) {
            lVar2 = 0;
            lVar6 = lVar7;
          }
          lVar7 = *(long *)(lVar7 + lVar2);
        } while (lVar7 != 0);
        if ((lVar6 != param_1 + 0x1a0) && (*(ulong *)(lVar6 + 0x20) <= param_2)) {
          plVar5 = (long *)0x20;
          __Znwm();
          plVar5[2] = 0;
          *plVar5 = (long)&PTR_DAT_110bd9fd8;
          plVar5[1] = 0;
          plStack_40 = plVar5 + 3;
          *plStack_40 = 0;
          plStack_38 = plVar5;
          FUN_10acaba6c(*(long *)(lVar6 + 0x28) + 0x178,&plStack_40);
          plVar5 = plStack_38;
          if (plStack_38 != (long *)0x0) {
            plVar1 = plStack_38 + 1;
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
              (**(code **)(*plStack_38 + 0x10))(plStack_38);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
          FUN_10acad9e8(param_1 + 0x198,lVar6);
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10acadb94; end: 10acadd4b;  */

undefined8 FUN_10acadb94(long param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x1a0);
  if (lVar2 != 0) {
    lVar3 = param_1 + 0x1a0;
    do {
      lVar4 = 8;
      if (param_2 <= *(ulong *)(lVar2 + 0x20)) {
        lVar4 = 0;
        lVar3 = lVar2;
      }
      lVar2 = *(long *)(lVar2 + lVar4);
    } while (lVar2 != 0);
    if ((lVar3 != param_1 + 0x1a0) && (*(ulong *)(lVar3 + 0x20) <= param_2)) {
      lVar2 = *(long *)(*(long *)(lVar3 + 0x28) + 400);
      if (lVar2 != 0) {
        lVar3 = *(long *)(lVar3 + 0x28) + 400;
        lVar4 = lVar3;
        do {
          lVar1 = 8;
          if (param_3 <= *(ulong *)(lVar2 + 0x20)) {
            lVar1 = 0;
            lVar4 = lVar2;
          }
          lVar2 = *(long *)(lVar2 + lVar1);
        } while (lVar2 != 0);
        if ((lVar4 != lVar3) && (*(ulong *)(lVar4 + 0x20) <= param_3)) {
          lVar2 = *(long *)(*(long *)(lVar4 + 0x28) + 400);
          if (lVar2 != 0) {
            lVar3 = *(long *)(lVar4 + 0x28) + 400;
            lVar4 = lVar3;
            do {
              lVar1 = 8;
              if (*(ulong *)(param_4 + 0x18) <= *(ulong *)(lVar2 + 0x38)) {
                lVar1 = 0;
                lVar4 = lVar2;
              }
              lVar2 = *(long *)(lVar2 + lVar1);
            } while (lVar2 != 0);
            if ((lVar4 != lVar3) && (*(ulong *)(lVar4 + 0x38) <= *(ulong *)(param_4 + 0x18))) {
              return *(undefined8 *)(lVar4 + 0x40);
            }
          }
        }
      }
    }
  }
  return 0;
}



/* Entry: 10acadd4c; end: 10acae0ff;  */

void FUN_10acadd4c(long *param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  bool bVar3;
  long **pplVar4;
  long **pplVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 auStack_88 [8];
  long *plStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = &plStack_80;
  FUN_10a447fd4(param_1,pplVar4);
  plVar12 = *(long **)(param_2 + 0x198);
  while (plVar12 != (long *)(param_2 + 0x1a0)) {
    pplVar5 = (long **)*param_1;
    FUN_10acabcd4(pplVar5,plVar12[4]);
    lVar7 = plVar12[5];
    plVar13 = *(long **)(lVar7 + 0x188);
    pplVar4 = pplVar5;
    while (plVar13 != (long *)(lVar7 + 400)) {
      plVar6 = *pplVar5;
      FUN_10acab67c(plVar6,plVar13[4]);
      lVar8 = plVar13[5];
      plVar10 = *(long **)(lVar8 + 0x188);
      if (plVar10 != (long *)(lVar8 + 400)) {
        do {
          lVar9 = *plVar6;
          uStack_78 = 0;
          plStack_80 = (long *)(lVar9 + 0x188);
          FUN_10a36516c(&plStack_98,auStack_88,plVar10[8]);
          FUN_10acd70b4((long *)(lVar9 + 0x188),plVar10[7],plVar10 + 4,&plStack_98);
          plVar2 = (long *)CONCAT71(uStack_8f,uStack_90);
          if (plVar2 != (long *)0x0) {
            plVar11 = plVar2 + 1;
            do {
              lVar9 = *plVar11;
              cVar1 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar3) {
                *plVar11 = lVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
            }
          }
          FUN_10acd5084(&plStack_80);
          plVar2 = (long *)plVar10[1];
          plVar11 = plVar10;
          if ((long *)plVar10[1] == (long *)0x0) {
            do {
              plVar10 = (long *)plVar11[2];
              bVar3 = (long *)*plVar10 != plVar11;
              plVar11 = plVar10;
            } while (bVar3);
          }
          else {
            do {
              plVar10 = plVar2;
              plVar2 = (long *)*plVar10;
            } while ((long *)*plVar10 != (long *)0x0);
          }
        } while (plVar10 != (long *)(lVar8 + 400));
        lVar8 = plVar13[5];
      }
      lVar9 = *plVar6;
      FUN_10a64a494(&plStack_80,lVar8 + 0x1a0);
      func_0x00010a1bd170(auStack_88);
      func_0x00010a1bd170(auStack_88);
      uStack_90 = 0;
      plStack_98 = (long *)(lVar9 + 0x1a0);
      func_0x00010a1bd170(auStack_88);
      func_0x00010a363354(&plStack_80,CONCAT71(uStack_77,uStack_78));
      lVar8 = plVar13[5];
      plVar10 = *(long **)(lVar8 + 0x1a0);
      if (plVar10 != (long *)(lVar8 + 0x1a8)) {
        do {
          FUN_10a34fcb0(&plStack_80,plVar10[8]);
          FUN_10acd73a4((long *)(lVar9 + 0x1a0),plVar10[7],plVar10 + 4,&plStack_80);
          plVar2 = plStack_80;
          plStack_80 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          plVar2 = (long *)plVar10[1];
          plVar11 = plVar10;
          if ((long *)plVar10[1] == (long *)0x0) {
            do {
              plVar10 = (long *)plVar11[2];
              bVar3 = (long *)*plVar10 != plVar11;
              plVar11 = plVar10;
            } while (bVar3);
          }
          else {
            do {
              plVar10 = plVar2;
              plVar2 = (long *)*plVar10;
            } while ((long *)*plVar10 != (long *)0x0);
          }
        } while (plVar10 != (long *)(lVar8 + 0x1a8));
        lVar8 = plVar13[5];
      }
      FUN_10acaada8(*plVar6 + 0x1d0,lVar8 + 0x1d0);
      pplVar4 = &plStack_98;
      FUN_10acd71b4(pplVar4);
      plVar6 = (long *)plVar13[1];
      plVar10 = plVar13;
      if ((long *)plVar13[1] == (long *)0x0) {
        do {
          plVar13 = (long *)plVar10[2];
          bVar3 = (long *)*plVar13 != plVar10;
          plVar10 = plVar13;
        } while (bVar3);
      }
      else {
        do {
          plVar13 = plVar6;
          plVar6 = (long *)*plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
      }
    }
    plVar13 = (long *)plVar12[1];
    plVar6 = plVar12;
    if ((long *)plVar12[1] == (long *)0x0) {
      do {
        plVar12 = (long *)plVar6[2];
        bVar3 = (long *)*plVar12 != plVar6;
        plVar6 = plVar12;
      } while (bVar3);
    }
    else {
      do {
        plVar12 = plVar13;
        plVar13 = (long *)*plVar12;
      } while ((long *)*plVar12 != (long *)0x0);
    }
  }
  **(undefined8 **)(*param_1 + 0x188) = **(undefined8 **)(param_2 + 0x188);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume(pplVar4);
  return;
}



/* Entry: 10acae100; end: 10acae17b;  */

void FUN_10acae100(void)

{
  return;
}



/* Entry: 10acae17c; end: 10acae643;  */

void FUN_10acae17c(ulong param_1)

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
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&DAT_10f482744,4);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6c210;
  pppuVar2 = (undefined8 ***)&UNK_10f6a0902;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c6c210;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10acae624;
    FUN_10a054dac(param_1,&DAT_10f648172,FUN_10acd74bc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10acae624;
    FUN_10a054dac(param_1,&UNK_10f65822b,FUN_10acd75e8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10acae624;
    FUN_10a054dac(param_1,&UNK_10f6a1487,FUN_10acd7724,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10acae624;
    FUN_10a054dac(param_1,&UNK_10f598a4e,FUN_10acd7800,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10acae624;
    FUN_10a054dac(param_1,&DAT_10f3d2a51,FUN_10acd78ec,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6a1491,FUN_10acd79d0,FUN_10acd7a8c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6a1496,FUN_10acd7b7c,FUN_10acd7c38);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6a149c,FUN_10acd7d28,FUN_10acd7de4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6a14a0,FUN_10acd7ed4,FUN_10acd7f90);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    puStack_78 = *(undefined **)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&DAT_10f482744,4);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&DAT_10f482744;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f6a0902;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f6a0902;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10acae624;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10acd8080,4,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10acae624:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10acae628);
  (*pcVar6)();
}



/* Entry: 10acae644; end: 10acae6cb;  */

bool FUN_10acae644(long param_1,long param_2)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = ABS(*(float *)(param_1 + 0x28) - *(float *)(param_2 + 0x28));
  bVar1 = false;
  if ((ABS(*(float *)(param_1 + 0x24) - *(float *)(param_2 + 0x24)) < 1.1920929e-07) &&
     (bVar1 = false, !NAN(fVar2))) {
    bVar1 = fVar2 < 1.1920929e-07;
  }
  if (bVar1) {
    fVar2 = ABS(*(float *)(param_1 + 0x2c) - *(float *)(param_2 + 0x2c));
    bVar1 = false;
    if ((ABS(*(float *)(param_1 + 0x30) - *(float *)(param_2 + 0x30)) < 1.1920929e-07) &&
       (bVar1 = false, !NAN(fVar2))) {
      bVar1 = fVar2 < 1.1920929e-07;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10acae6cc; end: 10acae76b;  */

void FUN_10acae6cc(long param_1,long *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c6b510);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c6b530);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c6a978);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c6b550);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}



/* Entry: 10acae76c; end: 10acae773;  */

void FUN_10acae76c(long param_1,long *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c6b510);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c6b530);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c6a978);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c6b550);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 10acae774; end: 10acae7ff;  */

void FUN_10acae774(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x24),param_2,&PTR_DAT_110c6b510);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x2c),param_2,&PTR_DAT_110c6b530);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x28),param_2,&PTR_DAT_110c6a978);
                    /* WARNING: Could not recover jumptable at 0x00010acae7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x30),param_2,&PTR_DAT_110c6b550);
  return;
}



/* Entry: 10acae800; end: 10acae807;  */

void FUN_10acae800(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0xc),param_2,&PTR_DAT_110c6b510);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x14),param_2,&PTR_DAT_110c6b530);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x10),param_2,&PTR_DAT_110c6a978);
                    /* WARNING: Could not recover jumptable at 0x00010acae7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x18),param_2,&PTR_DAT_110c6b550);
  return;
}



/* Entry: 10acae808; end: 10acae947;  */

void FUN_10acae808(undefined8 param_1,long param_2)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f6a14a7,0x16);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_2 + 0x24));
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_2 + 0x2c));
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_2 + 0x28));
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_2 + 0x30));
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10acae948; end: 10acae9cb;  */

undefined1  [16] FUN_10acae948(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f654fbb;
  return auVar1;
}



/* Entry: 10acae9cc; end: 10acaed3b;  */

void FUN_10acae9cc(ulong param_1)

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
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f654fbb,0xb);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6b2a0;
  pppuVar2 = (undefined8 ***)&UNK_10f6a0902;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0xaa;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c6b2a0;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10acaed1c;
    FUN_10a054dac(param_1,&DAT_10f648172,FUN_10acd8270,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f0c6,FUN_10acd8404,FUN_10acd84d0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f0dc,FUN_10acd85fc,FUN_10acd86c8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"angle",FUN_10acd878c,FUN_10acd8848);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_88 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    puStack_78 = *(undefined **)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f654fbb,0xb);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f654fbb;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f6a0902;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10acaed1c;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10acd8938,3,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10acaed1c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10acaed20);
  (*pcVar6)();
}



/* Entry: 10acaed3c; end: 10acaed8f;  */

void FUN_10acaed3c(void)

{
  FUN_10a0ee900(&UNK_10f6a14d8,0x3c);
  return;
}



/* Entry: 10acaed90; end: 10acaee1b;  */

undefined1  [16] FUN_10acaed90(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f6a1a72;
  return auVar1;
}



/* Entry: 10acaee1c; end: 10acaeefb;  */

void FUN_10acaee1c(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000002;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x13c;
  FUN_10acaeefc(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6a1515;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10acd8bc8();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6a1524;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010acd8d94(param_1,&puStack_88,0);
  FUN_10acd8ea8(param_1);
  return;
}


