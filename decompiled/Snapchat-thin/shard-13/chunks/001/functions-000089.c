/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a09465c; end: 10a0946bf;  */

long FUN_10a09465c(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    __ZdlPv(*(long *)(param_1 + 0x58) + -8);
  }
  lStack_28 = param_1 + 0x40;
  FUN_10a09cf7c(&lStack_28);
  lStack_28 = param_1 + 0x20;
  func_0x00010a09d0e8(&lStack_28);
  func_0x00010a054cfc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10a0946c0; end: 10a094a1b;  */

void FUN_10a0946c0(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  code *pcStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    plVar8 = *(long **)(param_1 + 0x28);
    plStack_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0xc0;
      __Znwm();
      plVar8[2] = 0;
      plVar8[1] = 0x200000006;
      *(undefined2 *)(plVar8 + 3) = 4;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[7] = 0;
      plVar8[6] = 0;
      plVar8[9] = 0;
      plVar8[8] = 0;
      plVar8[0xb] = 0;
      plVar8[10] = 0;
      plVar8[0xd] = 0;
      plVar8[0xc] = 0;
      plVar8[0xf] = 0;
      plVar8[0xe] = 0;
      plVar8[0x10] = 0;
      plVar8[0x11] = (long)(plVar8 + 3);
      plVar8[0x12] = 0;
      *(undefined2 *)(plVar8 + 0x13) = 0;
      *plVar8 = (long)&PTR_DAT_110ba08a0;
      plStack_78 = plVar8 + 0x14;
      *plStack_78 = param_1;
      *(undefined1 *)(plVar8 + 0x16) = 1;
      plVar8[0x17] = 0;
      pcStack_60 = FUN_10a09b3e8;
      plStack_70 = plVar8;
      plStack_68 = plVar8;
    }
    else {
      pcStack_58 = (code *)0x0;
      (**(code **)(*plVar8 + 0x28))(plVar8,0,&pcStack_58);
      if (pcStack_58 != (code *)0x0) {
        func_0x0001092af97c(&pcStack_58);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a0949a8);
        (*pcVar5)();
      }
      plVar6 = (long *)0xc8;
      __Znwm();
      plVar6[2] = 0;
      plVar6[1] = 0x200000006;
      *(undefined2 *)(plVar6 + 3) = 4;
      plVar6[5] = 0;
      plVar6[4] = 0;
      plVar6[7] = 0;
      plVar6[6] = 0;
      plVar6[9] = 0;
      plVar6[8] = 0;
      plVar6[0xb] = 0;
      plVar6[10] = 0;
      plVar6[0xd] = 0;
      plVar6[0xc] = 0;
      plVar6[0xf] = 0;
      plVar6[0xe] = 0;
      plVar6[0x10] = 0;
      plVar6[0x11] = (long)(plVar6 + 3);
      plVar6[0x12] = 0;
      *(undefined2 *)(plVar6 + 0x13) = 0;
      plVar6[0x14] = param_1;
      *plVar6 = (long)&PTR_FUN_110ba0868;
      *(undefined1 *)(plVar6 + 0x16) = 1;
      plVar6[0x17] = 0;
      plVar6[0x18] = (long)plVar8;
      if (plStack_70 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_70 + 1);
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
            (**(code **)(*plStack_70 + 8))();
          }
        }
      }
      plStack_70 = plVar6;
      if (plStack_68 != (long *)0x0) {
        func_0x0001092b4274(&plStack_68);
      }
      pcStack_60 = (code *)0x10a09b3b8;
      plStack_78 = plVar6 + 0x14;
      plStack_68 = plVar6;
      __ZNSt13exception_ptrD1Ev(&pcStack_58);
    }
    plVar8 = plStack_78;
    puVar2 = (undefined8 *)(param_1 + 0x18);
    if (plStack_78[3] != 0) {
      func_0x0001092b4274();
    }
    plVar8[3] = (long)plStack_68;
    plStack_68 = (long *)0x0;
    pcStack_58 = pcStack_60;
    plStack_50 = plStack_78;
    puStack_48 = puVar2;
    (**(code **)*puVar2)(puVar2,&pcStack_58);
    plStack_80 = plStack_70;
    plStack_70 = (long *)0x0;
    if (plStack_68 != (long *)0x0) {
      func_0x0001092b4274(&plStack_68);
      if (plStack_70 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_70 + 1);
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
            (**(code **)(*plStack_70 + 8))();
          }
        }
      }
    }
    FUN_109d1a244(&plStack_80);
    FUN_10a09b344(&plStack_80);
    if (plStack_80 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_80 + 1);
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
          (**(code **)(*plStack_80 + 8))();
        }
      }
    }
  }
  if (*(int *)(param_1 + 0xd0) == 3) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    func_0x000109375044(*(undefined8 *)(param_1 + 0xe0));
  }
  return;
}



/* Entry: 10a094a1c; end: 10a094ad3;  */

ulong FUN_10a094a1c(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x30))(param_1);
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x50))(param_1);
  FUN_109fc8e58(plVar2,plVar3,plVar4);
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x60))(param_1);
  uVar1 = (int)plVar3 * (int)plVar2;
  uVar5 = (ulong)uVar1;
  (**(code **)(*param_1 + 0x68))();
  if (((uint)param_1 & 0xfffffffe) == 2) {
    uVar5 = (ulong)(uVar1 * 0x85) / 100;
  }
  return uVar5;
}



/* Entry: 10a094ad4; end: 10a094ad7;  */

void FUN_10a094ad4(void)

{
  return;
}



/* Entry: 10a094ad8; end: 10a094b9b;  */

int FUN_10a094ad8(long *param_1)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  plVar7 = param_1;
  (**(code **)(*param_1 + 0x30))();
  (**(code **)(*param_1 + 0x38))();
  if (((uint)plVar7 | (uint)plVar2 | (uint)param_1) < 2) {
    iVar1 = 1;
  }
  else {
    iVar1 = 1;
    do {
      plVar6 = plVar7;
      plVar4 = param_1;
      iVar1 = iVar1 + 1;
      uVar3 = (uint)((ulong)plVar2 >> 1) & 0x7fffffff;
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      plVar5 = (long *)(ulong)uVar3;
      uVar3 = (uint)((ulong)plVar6 >> 1) & 0x7fffffff;
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      plVar7 = (long *)(ulong)uVar3;
      uVar3 = (uint)((ulong)plVar4 >> 1) & 0x7fffffff;
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      param_1 = (long *)(ulong)uVar3;
      uVar3 = (uint)plVar2;
      plVar2 = plVar5;
    } while (((3 < uVar3) || (3 < (uint)plVar6)) || (3 < (uint)plVar4));
  }
  return iVar1;
}



/* Entry: 10a094b9c; end: 10a094ceb;  */

int FUN_10a094b9c(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == 3) {
    if ((param_4 | param_3 | param_5) < 2) {
      return 1;
    }
    iVar3 = 1;
    do {
      uVar5 = param_5;
      uVar4 = param_4;
      iVar3 = iVar3 + 1;
      uVar2 = param_3 >> 1;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      param_4 = uVar4 >> 1;
      if (param_4 < 2) {
        param_4 = 1;
      }
      param_5 = uVar5 >> 1;
      if (param_5 < 2) {
        param_5 = 1;
      }
      bVar1 = 3 < param_3;
      param_3 = uVar2;
    } while (((bVar1) || (3 < uVar4)) || (3 < uVar5));
  }
  else if (param_1 == 2) {
    if ((param_4 | param_3 | param_5) < 2) {
      return 1;
    }
    iVar3 = 1;
    do {
      uVar5 = param_5;
      uVar4 = param_4;
      iVar3 = iVar3 + 1;
      uVar2 = param_3 >> 1;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      param_4 = uVar4 >> 1;
      if (param_4 < 2) {
        param_4 = 1;
      }
      param_5 = uVar5 >> 1;
      if (param_5 < 2) {
        param_5 = 1;
      }
      bVar1 = 3 < param_3;
      param_3 = uVar2;
    } while (((bVar1) || (3 < uVar4)) || (3 < uVar5));
  }
  else {
    if (((param_1 != 0) || (1 < param_2)) || ((param_4 | param_3 | param_5) < 2)) {
      return 1;
    }
    iVar3 = 1;
    do {
      uVar5 = param_5;
      uVar4 = param_4;
      iVar3 = iVar3 + 1;
      uVar2 = param_3 >> 1;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      param_4 = uVar4 >> 1;
      if (param_4 < 2) {
        param_4 = 1;
      }
      param_5 = uVar5 >> 1;
      if (param_5 < 2) {
        param_5 = 1;
      }
      bVar1 = 3 < param_3;
      param_3 = uVar2;
    } while (((bVar1) || (3 < uVar4)) || (3 < uVar5));
  }
  return iVar3;
}



/* Entry: 10a094cec; end: 10a094d87;  */

int FUN_10a094cec(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x68))();
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x60))();
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x28))();
  plVar7 = param_1;
  (**(code **)(*param_1 + 0x30))();
  (**(code **)(*param_1 + 0x38))();
  iVar1 = (int)plVar2;
  uVar9 = (uint)plVar4;
  uVar6 = (uint)plVar7;
  uVar8 = (uint)param_1;
  if (iVar1 == 3) {
    if ((uVar6 | uVar9 | uVar8) < 2) {
      return 1;
    }
    iVar1 = 1;
    do {
      plVar3 = param_1;
      plVar2 = plVar7;
      iVar1 = iVar1 + 1;
      uVar9 = (uint)((ulong)plVar4 >> 1) & 0x7fffffff;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      plVar5 = (long *)(ulong)uVar9;
      uVar9 = (uint)((ulong)plVar2 >> 1) & 0x7fffffff;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      plVar7 = (long *)(ulong)uVar9;
      uVar9 = (uint)((ulong)plVar3 >> 1) & 0x7fffffff;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      param_1 = (long *)(ulong)uVar9;
      uVar9 = (uint)plVar4;
      plVar4 = plVar5;
    } while (((3 < uVar9) || (3 < (uint)plVar2)) || (3 < (uint)plVar3));
  }
  else if (iVar1 == 2) {
    if ((uVar6 | uVar9 | uVar8) < 2) {
      return 1;
    }
    iVar1 = 1;
    do {
      plVar3 = param_1;
      plVar2 = plVar7;
      iVar1 = iVar1 + 1;
      uVar9 = (uint)((ulong)plVar4 >> 1) & 0x7fffffff;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      plVar5 = (long *)(ulong)uVar9;
      uVar9 = (uint)((ulong)plVar2 >> 1) & 0x7fffffff;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      plVar7 = (long *)(ulong)uVar9;
      uVar9 = (uint)((ulong)plVar3 >> 1) & 0x7fffffff;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      param_1 = (long *)(ulong)uVar9;
      uVar9 = (uint)plVar4;
      plVar4 = plVar5;
    } while (((3 < uVar9) || (3 < (uint)plVar2)) || (3 < (uint)plVar3));
  }
  else {
    if (((iVar1 != 0) || (1 < (uint)plVar3)) || ((uVar6 | uVar9 | uVar8) < 2)) {
      return 1;
    }
    iVar1 = 1;
    do {
      plVar3 = param_1;
      plVar2 = plVar7;
      iVar1 = iVar1 + 1;
      uVar9 = (uint)((ulong)plVar4 >> 1) & 0x7fffffff;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      plVar5 = (long *)(ulong)uVar9;
      uVar9 = (uint)((ulong)plVar2 >> 1) & 0x7fffffff;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      plVar7 = (long *)(ulong)uVar9;
      uVar9 = (uint)((ulong)plVar3 >> 1) & 0x7fffffff;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      param_1 = (long *)(ulong)uVar9;
      uVar9 = (uint)plVar4;
      plVar4 = plVar5;
    } while (((3 < uVar9) || (3 < (uint)plVar2)) || (3 < (uint)plVar3));
  }
  return iVar1;
}



/* Entry: 10a094d88; end: 10a094e33;  */

void FUN_10a094d88(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  FUN_10a16b81c();
  if (*param_1 == 0) {
    FUN_10ab9b818(auStack_40,param_2,param_3);
    FUN_10a00e5c4(param_1,auStack_40);
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
  }
  return;
}



/* Entry: 10a094e34; end: 10a094fa3;  */

void FUN_10a094e34(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "TextureUsage";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63530a;
  uStack_78 = 0;
  puStack_70 = &UNK_10f63530a;
  uStack_68 = 0;
  uStack_60 = 0x13b00000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Render";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63530a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x13b00000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a094fa4(param_1,&pcStack_a8,1);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Filter";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63530a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x13b00000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a094fa4();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Mipmap";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63530a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x13b00000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a094fa4();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a094fa4; end: 10a0955f7;  */

undefined8 * FUN_10a094fa4(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a09504c);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a0955f8; end: 10a0961ab;  */

void FUN_10a0955f8(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63646c;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f63647a;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac(param_1,&puStack_a8,1);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f636482;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f63648b;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f636495;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6364a0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6364a9;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6364b3;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6364bf;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6364c7;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6364d0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6364db;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6364e4;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6364ee;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6364fa;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f636501;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f636509;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f636513;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f63651b;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f636524;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f63652f;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f636537;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f636540;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f63654b;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f636552;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f63655a;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f636564;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f63656c;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f636575;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f636580;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f636588;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &DAT_10f636591;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &DAT_10f63659c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &DAT_10f6365a5;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &DAT_10f6365af;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &DAT_10f6365bb;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &DAT_10f6365c4;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &DAT_10f6365ce;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &DAT_10f6365da;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &DAT_10f6365e5;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &DAT_10f6365ef;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &DAT_10f6365fc;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &DAT_10f636608;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &UNK_10f636615;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x4200000064;
  puStack_80 = &UNK_10f63530a;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &UNK_10f636620;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x4200000064;
  puStack_80 = &UNK_10f63530a;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &UNK_10f63662f;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x4200000064;
  puStack_80 = &UNK_10f63530a;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &UNK_10f636641;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x4200000064;
  puStack_80 = &UNK_10f63530a;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &UNK_10f636653;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x4200000064;
  puStack_80 = &UNK_10f63530a;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &UNK_10f636664;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x4200000064;
  puStack_80 = &UNK_10f63530a;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &UNK_10f636675;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x4200000064;
  puStack_80 = &UNK_10f63530a;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  puStack_a8 = &UNK_10f636686;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x4200000064;
  puStack_80 = &UNK_10f63530a;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0x13b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0961ac();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a0961ac; end: 10a09624f;  */

undefined8 * FUN_10a0961ac(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a096250);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a096250; end: 10a096283;  */

undefined1  [16] FUN_10a096250(uint param_1)

{
  undefined1 auVar1 [16];
  
  if (param_1 < 0x57) {
    auVar1._8_8_ = *(undefined8 *)(&UNK_10e494090 + (ulong)param_1 * 8);
    auVar1._0_8_ = (&PTR_DAT_110ba1028)[param_1];
    return auVar1;
  }
  return ZEXT816(0x10f63530a);
}



/* Entry: 10a096284; end: 10a0962c7;  */

undefined1  [16] FUN_10a096284(int param_1,undefined8 param_2)

{
  undefined8 ****ppppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 ***apppuStack_50 [2];
  char cStack_39;
  undefined4 uStack_34;
  
  if (param_1 - 1U < 0x1a) {
    auVar5._4_4_ = 0;
    auVar5._0_4_ = *(uint *)(&UNK_10e494348 + (ulong)(param_1 - 1U) * 4);
    auVar5._8_8_ = param_2;
    return auVar5;
  }
  if (0xffffffa8 < param_1 - 0x72U) {
    auVar6._4_4_ = 0;
    auVar6._0_4_ = param_1 - 0x1b;
    auVar6._8_8_ = param_2;
    return auVar6;
  }
  uStack_34 = 0xf63690d;
  FUN_10a00946c();
  puVar2 = &UNK_10e49326c;
  FUN_10a09b748(&UNK_10e49326c,&uStack_34);
  if (puVar2 == &UNK_10e493924) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      __ZNSt3__19to_stringEi(apppuStack_50,uStack_34);
      ppppuVar1 = (undefined8 ****)apppuStack_50[0];
      if (-1 < cStack_39) {
        ppppuVar1 = apppuStack_50;
      }
      func_0x00010ae06f08(0,1,&UNK_10f636bee,&UNK_10f636c21,0x2b9,&UNK_10f636c86,in_x6,in_x7,
                          ppppuVar1);
      if (cStack_39 < '\0') {
        __ZdlPv(apppuStack_50[0]);
      }
    }
    uVar4 = 0x800000000;
    uVar3 = 0x100000001;
  }
  else {
    uVar3 = *(undefined8 *)(puVar2 + 4);
    uVar4 = *(undefined8 *)(puVar2 + 0xc);
  }
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = uVar3;
  return auVar7;
}



/* Entry: 10a0962c8; end: 10a0963a7;  */

undefined1  [16] FUN_10a0962c8(undefined4 param_1)

{
  undefined8 ****ppppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 auVar5 [16];
  undefined8 ***apppuStack_40 [2];
  char cStack_29;
  undefined4 uStack_24;
  
  puVar2 = &UNK_10e49326c;
  uStack_24 = param_1;
  FUN_10a09b748(&UNK_10e49326c,&uStack_24);
  if (puVar2 == &UNK_10e493924) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      __ZNSt3__19to_stringEi(apppuStack_40,uStack_24);
      ppppuVar1 = (undefined8 ****)apppuStack_40[0];
      if (-1 < cStack_29) {
        ppppuVar1 = apppuStack_40;
      }
      func_0x00010ae06f08(0,1,&UNK_10f636bee,&UNK_10f636c21,0x2b9,&UNK_10f636c86,in_x6,in_x7,
                          ppppuVar1);
      if (cStack_29 < '\0') {
        __ZdlPv(apppuStack_40[0]);
      }
    }
    uVar4 = 0x800000000;
    uVar3 = 0x100000001;
  }
  else {
    uVar3 = *(undefined8 *)(puVar2 + 4);
    uVar4 = *(undefined8 *)(puVar2 + 0xc);
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 10a0963a8; end: 10a09663b;  */

void FUN_10a0963a8(long *param_1,long param_2,long param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long alStack_68 [2];
  char cStack_51;
  
  uVar1 = param_4[1];
  plVar2 = (long *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    plVar2 = param_4;
  }
  uVar3 = uVar1 >> 3;
  if (((ulong)plVar2 & 7) == 0) {
    if (uVar1 < 8) goto LAB_10a096434;
    uVar6 = 0;
    plVar5 = plVar2;
    do {
      uVar6 = uVar6 * 0x40 + 0x9e3779b9 + (uVar6 >> 2) + *plVar5 ^ uVar6;
      uVar3 = uVar3 - 1;
      plVar5 = plVar5 + 1;
    } while (uVar3 != 0);
  }
  else if (uVar1 < 8) {
LAB_10a096434:
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    plVar5 = plVar2;
    do {
      uVar6 = uVar6 * 0x40 + 0x9e3779b9 + (uVar6 >> 2) + *plVar5 ^ uVar6;
      uVar3 = uVar3 - 1;
      plVar5 = plVar5 + 1;
    } while (uVar3 != 0);
  }
  alStack_68[0] = 0;
  if ((uVar1 & 7) != 0) {
    _memcpy(alStack_68,(long)plVar2 + (uVar1 - (uVar1 & 7)));
  }
  uVar6 = uVar6 * 0x40 + 0x9e3779b9 + (uVar6 >> 2) + alStack_68[0] ^ uVar6;
  lVar8 = param_2;
  FUN_10a0967ac(param_2);
  uVar3 = *(ulong *)(param_2 + 0x20);
  plVar2 = *(long **)(param_2 + 0x18);
  if (-1 < (char)*(byte *)(param_2 + 0x2f)) {
    uVar3 = (ulong)*(byte *)(param_2 + 0x2f);
    plVar2 = (long *)(param_2 + 0x18);
  }
  uVar4 = uVar3 >> 3;
  if (((ulong)plVar2 & 7) == 0) {
    if (7 < uVar3) {
      uVar7 = 0;
      plVar5 = plVar2;
      do {
        uVar7 = uVar7 * 0x40 + 0x9e3779b9 + (uVar7 >> 2) + *plVar5 ^ uVar7;
        uVar4 = uVar4 - 1;
        plVar5 = plVar5 + 1;
      } while (uVar4 != 0);
      goto LAB_10a09653c;
    }
  }
  else if (7 < uVar3) {
    uVar7 = 0;
    plVar5 = plVar2;
    do {
      uVar7 = uVar7 * 0x40 + 0x9e3779b9 + (uVar7 >> 2) + *plVar5 ^ uVar7;
      uVar4 = uVar4 - 1;
      plVar5 = plVar5 + 1;
    } while (uVar4 != 0);
    goto LAB_10a09653c;
  }
  uVar7 = 0;
LAB_10a09653c:
  alStack_68[0] = 0;
  if ((uVar3 & 7) != 0) {
    _memcpy(alStack_68,(long)plVar2 + (uVar3 - (uVar3 & 7)));
  }
  uVar7 = uVar7 * 0x40 + 0x9e3779b9 + (uVar7 >> 2) + alStack_68[0] ^ uVar7;
  uVar4 = lVar8 + 0x9e3779b9;
  uVar4 = uVar4 * 0x40 + 0x9e3779b9 + (uVar4 >> 2) +
          (uVar3 + 0x9e3779b9 + uVar7 * 0x40 + (uVar7 >> 2) ^ uVar7) ^ uVar4;
  uVar4 = param_3 + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
  __ZNSt3__19to_stringEm
            (alStack_68,
             (uVar1 + 0x9e3779b9 + uVar6 * 0x40 + (uVar6 >> 2) ^ uVar6) + 0x9e3779b9 + uVar4 * 0x40
             + (uVar4 >> 2) ^ uVar4);
  plVar2 = alStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar2,0,"_",1);
  lVar8 = *plVar2;
  param_1[1] = plVar2[1];
  *param_1 = lVar8;
  param_1[2] = plVar2[2];
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = 0;
  if (cStack_51 < '\0') {
    __ZdlPv(alStack_68[0]);
  }
  return;
}



/* Entry: 10a09663c; end: 10a096703;  */

long FUN_10a09663c(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_10a096704(param_1,param_3);
  FUN_10a096704(param_1 + 0x30,param_4);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x60,*param_2,param_2[1]);
  }
  else {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    *(undefined8 *)(param_1 + 0x70) = param_2[2];
    *(undefined8 *)(param_1 + 0x68) = uVar5;
    *(undefined8 *)(param_1 + 0x60) = uVar4;
  }
  lVar2 = param_1;
  FUN_10a0967ac();
  lVar3 = param_1 + 0x30;
  FUN_10a0967ac();
  uVar1 = lVar2 + 0x9e3779b9;
  *(ulong *)(param_1 + 0x78) = lVar3 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  return param_1;
}



/* Entry: 10a096704; end: 10a0967ab;  */

/* WARNING: Possible PIC construction at 0x00010a09bb2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a09bb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a09bb9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a09bfe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a09bf8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a09bfe4) */
/* WARNING: Removing unreachable block (ram,0x00010a09bff4) */
/* WARNING: Removing unreachable block (ram,0x00010a09c010) */
/* WARNING: Removing unreachable block (ram,0x00010a09c02c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bb64) */
/* WARNING: Removing unreachable block (ram,0x00010a09bba0) */
/* WARNING: Removing unreachable block (ram,0x00010a09bbb0) */
/* WARNING: Removing unreachable block (ram,0x00010a09bbc4) */
/* WARNING: Removing unreachable block (ram,0x00010a09be14) */
/* WARNING: Removing unreachable block (ram,0x00010a09be18) */
/* WARNING: Removing unreachable block (ram,0x00010a09be28) */
/* WARNING: Removing unreachable block (ram,0x00010a09bbfc) */
/* WARNING: Removing unreachable block (ram,0x00010a09bc00) */
/* WARNING: Removing unreachable block (ram,0x00010a09bc14) */
/* WARNING: Removing unreachable block (ram,0x00010a09bc28) */
/* WARNING: Removing unreachable block (ram,0x00010a09be38) */
/* WARNING: Removing unreachable block (ram,0x00010a09be44) */
/* WARNING: Removing unreachable block (ram,0x00010a09be4c) */
/* WARNING: Removing unreachable block (ram,0x00010a09be64) */
/* WARNING: Removing unreachable block (ram,0x00010a09be68) */
/* WARNING: Removing unreachable block (ram,0x00010a09be70) */
/* WARNING: Removing unreachable block (ram,0x00010a09be7c) */
/* WARNING: Removing unreachable block (ram,0x00010a09be90) */
/* WARNING: Removing unreachable block (ram,0x00010a09be9c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bea8) */
/* WARNING: Removing unreachable block (ram,0x00010a09bebc) */
/* WARNING: Removing unreachable block (ram,0x00010a09becc) */
/* WARNING: Removing unreachable block (ram,0x00010a09bed8) */
/* WARNING: Removing unreachable block (ram,0x00010a09bee0) */
/* WARNING: Removing unreachable block (ram,0x00010a09bee8) */
/* WARNING: Removing unreachable block (ram,0x00010a09bf08) */
/* WARNING: Removing unreachable block (ram,0x00010a09bf10) */
/* WARNING: Removing unreachable block (ram,0x00010a09bf18) */
/* WARNING: Removing unreachable block (ram,0x00010a09bf44) */
/* WARNING: Removing unreachable block (ram,0x00010a09bba8) */
/* WARNING: Removing unreachable block (ram,0x00010a09bc2c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bc58) */
/* WARNING: Removing unreachable block (ram,0x00010a09bc6c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bc7c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bcb0) */
/* WARNING: Removing unreachable block (ram,0x00010a09bcb4) */
/* WARNING: Removing unreachable block (ram,0x00010a09bcbc) */
/* WARNING: Removing unreachable block (ram,0x00010a09bc88) */
/* WARNING: Removing unreachable block (ram,0x00010a09bc90) */
/* WARNING: Removing unreachable block (ram,0x00010a09bca8) */
/* WARNING: Removing unreachable block (ram,0x00010a09bcd4) */
/* WARNING: Removing unreachable block (ram,0x00010a09bce4) */
/* WARNING: Removing unreachable block (ram,0x00010a09bcf0) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd04) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd10) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd1c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd30) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd40) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd4c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd54) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd5c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd7c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd84) */
/* WARNING: Removing unreachable block (ram,0x00010a09bd8c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bdb4) */
/* WARNING: Removing unreachable block (ram,0x00010a09bdbc) */
/* WARNING: Removing unreachable block (ram,0x00010a09bddc) */
/* WARNING: Removing unreachable block (ram,0x00010a09be0c) */
/* WARNING: Removing unreachable block (ram,0x00010a09be10) */
/* WARNING: Removing unreachable block (ram,0x00010a09bdfc) */
/* WARNING: Removing unreachable block (ram,0x00010a09be00) */
/* WARNING: Removing unreachable block (ram,0x00010a09bdc4) */
/* WARNING: Removing unreachable block (ram,0x00010a09bf4c) */
/* WARNING: Removing unreachable block (ram,0x00010a09bf50) */
/* WARNING: Removing unreachable block (ram,0x00010a09bf54) */
/* WARNING: Removing unreachable block (ram,0x00010a09bb30) */
/* WARNING: Removing unreachable block (ram,0x00010a09bf90) */
/* WARNING: Removing unreachable block (ram,0x00010a09c374) */
/* WARNING: Removing unreachable block (ram,0x00010a09c4a8) */
/* WARNING: Removing unreachable block (ram,0x00010a09c4ac) */
/* WARNING: Removing unreachable block (ram,0x00010a09c4b8) */
/* WARNING: Removing unreachable block (ram,0x00010a09c4c4) */
/* WARNING: Removing unreachable block (ram,0x00010a09c4d8) */
/* WARNING: Removing unreachable block (ram,0x00010a09c4f8) */
/* WARNING: Removing unreachable block (ram,0x00010a09c504) */
/* WARNING: Removing unreachable block (ram,0x00010a09c50c) */
/* WARNING: Removing unreachable block (ram,0x00010a09c5cc) */
/* WARNING: Removing unreachable block (ram,0x00010a09c534) */
/* WARNING: Removing unreachable block (ram,0x00010a09c548) */
/* WARNING: Removing unreachable block (ram,0x00010a09c554) */
/* WARNING: Removing unreachable block (ram,0x00010a09c55c) */
/* WARNING: Removing unreachable block (ram,0x00010a09c57c) */

void FUN_10a096704(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *******pppppppuVar5;
  bool bVar6;
  uint uVar7;
  byte bVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined8 ******ppppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *******pppppppuVar22;
  undefined8 *******pppppppuVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 *******pppppppuVar29;
  undefined8 *******pppppppuVar30;
  undefined8 uVar31;
  undefined8 ******ppppppuVar32;
  undefined1 auStack_120 [8];
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  long lStack_108;
  undefined8 ******ppppppuStack_100;
  undefined8 ******ppppppuStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined8 ******ppppppuStack_e8;
  undefined8 ******ppppppuStack_e0;
  code *pcStack_d8;
  undefined1 auStack_d0 [8];
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined8 ******ppppppuStack_c0;
  undefined8 ******ppppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 *****pppppuStack_98;
  undefined8 *****pppppuStack_90;
  undefined4 uStack_88;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a09b7bc(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 5);
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 3,param_2[3],param_2[4]);
  }
  else {
    lVar16 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar16;
    param_1[5] = param_2[5];
  }
  pppppppuVar20 = (undefined8 *******)*param_1;
  pppppppuVar22 = (undefined8 *******)param_1[1];
  pppppppuVar13 = (undefined8 *******)0x0;
  if (pppppppuVar22 != pppppppuVar20) {
    pppppppuVar13 =
         (undefined8 *******)(LZCOUNT((long)pppppppuVar22 - (long)pppppppuVar20 >> 5) * -2 + 0x7e);
  }
  puVar10 = auStack_d0;
  pppppppuVar30 = (undefined8 *******)&stack0xfffffffffffffff0;
  pppppppuVar23 = (undefined8 *******)0x1;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar25 = (long)pppppppuVar22 - (long)pppppppuVar20 >> 5;
  pppppppuVar12 = pppppppuVar20;
  pppppppuVar11 = pppppppuVar22;
  pppppppuVar14 = pppppppuVar13;
  ppppppuStack_c0 = pppppppuVar22;
  ppppppuStack_b8 = pppppppuVar20;
  if (uVar25 - 2 == 0 || (long)uVar25 < 2) {
    if (1 < uVar25) {
      if (uVar25 == 2) {
        pppppppuVar12 = pppppppuVar22 + -4;
        pppppppuVar11 = pppppppuVar20;
        ppppppuStack_c0 = pppppppuVar12;
        FUN_10a003e3c();
        if (((uint)pppppppuVar12 >> 7 & 1) != 0) {
          pppppppuVar12 = &ppppppuStack_b8;
          pppppppuVar11 = &ppppppuStack_c0;
          FUN_10a09c5d4();
        }
      }
      else {
LAB_10a09bb08:
        if ((long)uVar25 < 0x18) {
          if ((pppppppuVar20 != pppppppuVar22) && (pppppppuVar20 + 4 != pppppppuVar22)) {
            lVar16 = 0;
            pppppppuVar21 = pppppppuVar20 + 4;
            pppppppuVar23 = pppppppuVar20;
            do {
              pppppppuVar13 = pppppppuVar21;
              pppppppuVar12 = pppppppuVar13;
              pppppppuVar11 = pppppppuVar23;
              FUN_10a003e3c();
              if (((uint)pppppppuVar12 >> 7 & 1) != 0) {
                pppppuStack_98 = pppppppuVar13[1];
                ppppppuStack_a0 = *pppppppuVar13;
                pppppuStack_90 = pppppppuVar13[2];
                pppppppuVar13[1] = (undefined8 ******)0x0;
                pppppppuVar13[2] = (undefined8 ******)0x0;
                *pppppppuVar13 = (undefined8 ******)0x0;
                uStack_88 = *(undefined4 *)(pppppppuVar23 + 7);
                lVar9 = lVar16;
                do {
                  lVar24 = lVar9;
                  puVar3 = (undefined8 *)((long)pppppppuVar20 + lVar24);
                  if (*(char *)((long)puVar3 + 0x37) < '\0') {
                    pppppppuVar12 = (undefined8 *******)puVar3[4];
                    __ZdlPv();
                  }
                  puVar3[5] = puVar3[1];
                  puVar3[4] = *puVar3;
                  puVar3[6] = puVar3[2];
                  *(undefined1 *)((long)puVar3 + 0x17) = 0;
                  *(undefined1 *)puVar3 = 0;
                  *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(puVar3 + 3);
                  pppppppuVar23 = pppppppuVar20;
                  if (lVar24 == 0) goto LAB_10a09c0ec;
                  pppppppuVar12 = &ppppppuStack_a0;
                  pppppppuVar11 = (undefined8 *******)(lVar24 + -0x20 + (long)pppppppuVar20);
                  FUN_10a003e3c();
                  lVar9 = lVar24 + -0x20;
                } while (((uint)pppppppuVar12 >> 7 & 1) != 0);
                pppppppuVar23 = (undefined8 *******)((long)pppppppuVar20 + lVar24);
LAB_10a09c0ec:
                if (*(char *)((long)pppppppuVar23 + 0x17) < '\0') {
                  pppppppuVar12 = (undefined8 *******)*pppppppuVar23;
                  __ZdlPv();
                }
                pppppppuVar23[2] = (undefined8 ******)pppppuStack_90;
                pppppppuVar23[1] = (undefined8 ******)pppppuStack_98;
                *pppppppuVar23 = ppppppuStack_a0;
                *(undefined4 *)(pppppppuVar23 + 3) = uStack_88;
              }
              lVar16 = lVar16 + 0x20;
              pppppppuVar21 = pppppppuVar13 + 4;
              pppppppuVar23 = pppppppuVar13;
            } while (pppppppuVar13 + 4 != pppppppuVar22);
          }
        }
        else {
          if (pppppppuVar13 != (undefined8 *******)0x0) {
            pppppppuVar14 = pppppppuVar22 + -4;
            if (uVar25 < 0x81) {
              uVar31 = 0x10a09bba0;
              puVar10 = auStack_d0;
              pppppppuVar12 = pppppppuVar20 + (uVar25 >> 1) * 4;
              pppppppuVar11 = pppppppuVar20;
            }
            else {
              uVar31 = 0x10a09bb30;
              puVar10 = auStack_d0;
              pppppppuVar11 = pppppppuVar20 + (uVar25 >> 1) * 4;
            }
            goto SUB_10a09c698;
          }
          if (pppppppuVar20 != pppppppuVar22) {
            uVar26 = uVar25 - 2 >> 1;
            uVar27 = uVar26;
            do {
              if ((long)uVar27 <= (long)uVar26) {
                uVar4 = uVar27 << 1 | 1;
                pppppppuVar13 = pppppppuVar20 + uVar4 * 4;
                uVar1 = uVar27 * 2 + 2;
                pppppppuVar23 = pppppppuVar13;
                uVar28 = uVar4;
                if ((long)uVar1 < (long)uVar25) {
                  pppppppuVar11 = pppppppuVar13;
                  FUN_10a003e3c(pppppppuVar13,pppppppuVar13 + 4);
                  pppppppuVar23 = pppppppuVar13 + 4;
                  uVar28 = uVar1;
                  if (-1 < (char)pppppppuVar11) {
                    pppppppuVar23 = pppppppuVar13;
                    uVar28 = uVar4;
                  }
                }
                pppppppuVar13 = pppppppuVar20 + uVar27 * 4;
                pppppppuVar12 = pppppppuVar23;
                pppppppuVar11 = pppppppuVar13;
                FUN_10a003e3c();
                if (((uint)pppppppuVar12 >> 7 & 1) == 0) {
                  pppppuStack_98 = pppppppuVar13[1];
                  ppppppuStack_a0 = *pppppppuVar13;
                  pppppuStack_90 = pppppppuVar13[2];
                  pppppppuVar13[1] = (undefined8 ******)0x0;
                  pppppppuVar13[2] = (undefined8 ******)0x0;
                  *pppppppuVar13 = (undefined8 ******)0x0;
                  uStack_88 = *(undefined4 *)(pppppppuVar13 + 3);
                  do {
                    pppppppuVar21 = pppppppuVar23;
                    if (*(char *)((long)pppppppuVar13 + 0x17) < '\0') {
                      pppppppuVar12 = (undefined8 *******)*pppppppuVar13;
                      __ZdlPv();
                    }
                    ppppppuVar18 = pppppppuVar21[1];
                    ppppppuVar17 = *pppppppuVar21;
                    pppppppuVar13[2] = pppppppuVar21[2];
                    pppppppuVar13[1] = ppppppuVar18;
                    *pppppppuVar13 = ppppppuVar17;
                    *(undefined1 *)((long)pppppppuVar21 + 0x17) = 0;
                    *(undefined1 *)pppppppuVar21 = 0;
                    *(undefined4 *)(pppppppuVar13 + 3) = *(undefined4 *)(pppppppuVar21 + 3);
                    if ((long)uVar26 < (long)uVar28) break;
                    uVar4 = uVar28 << 1 | 1;
                    pppppppuVar13 = pppppppuVar20 + uVar4 * 4;
                    uVar1 = uVar28 * 2 + 2;
                    pppppppuVar23 = pppppppuVar13;
                    uVar28 = uVar4;
                    if ((long)uVar1 < (long)uVar25) {
                      pppppppuVar11 = pppppppuVar13;
                      FUN_10a003e3c(pppppppuVar13,pppppppuVar13 + 4);
                      pppppppuVar23 = pppppppuVar13 + 4;
                      uVar28 = uVar1;
                      if (-1 < (char)pppppppuVar11) {
                        pppppppuVar23 = pppppppuVar13;
                        uVar28 = uVar4;
                      }
                    }
                    pppppppuVar11 = &ppppppuStack_a0;
                    pppppppuVar12 = pppppppuVar23;
                    FUN_10a003e3c();
                    pppppppuVar13 = pppppppuVar21;
                  } while (((uint)pppppppuVar12 >> 7 & 1) == 0);
                  if (*(char *)((long)pppppppuVar21 + 0x17) < '\0') {
                    pppppppuVar12 = (undefined8 *******)*pppppppuVar21;
                    __ZdlPv();
                  }
                  pppppppuVar21[2] = (undefined8 ******)pppppuStack_90;
                  pppppppuVar21[1] = (undefined8 ******)pppppuStack_98;
                  *pppppppuVar21 = ppppppuStack_a0;
                  *(undefined4 *)(pppppppuVar21 + 3) = uStack_88;
                }
              }
              bVar6 = uVar27 != 0;
              uVar27 = uVar27 - 1;
              pppppppuVar21 = pppppppuVar22;
            } while (bVar6);
            do {
              ppppppuVar17 = *pppppppuVar20;
              uStack_78 = SUB87(pppppppuVar20[1],0);
              uStack_71 = (undefined1)*(undefined8 *)((long)pppppppuVar20 + 0xf);
              uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)pppppppuVar20 + 0xf) >> 8);
              pppppppuVar20[1] = (undefined8 ******)0x0;
              pppppppuVar20[2] = (undefined8 ******)0x0;
              *pppppppuVar20 = (undefined8 ******)0x0;
              uStack_c8 = *(undefined4 *)(pppppppuVar20 + 3);
              uStack_c4 = (uint)*(byte *)((long)pppppppuVar20 + 0x17);
              pppppppuVar22 = pppppppuVar20;
              pppppppuVar19 = (undefined8 *******)0x0;
              do {
                pppppppuVar2 = pppppppuVar22 + (long)pppppppuVar19 * 4 + 4;
                pppppppuVar5 = (undefined8 *******)((long)pppppppuVar19 << 1 | 1);
                pppppppuVar23 = (undefined8 *******)((long)pppppppuVar19 * 2 + 2);
                pppppppuVar13 = pppppppuVar2;
                pppppppuVar29 = pppppppuVar5;
                if ((long)pppppppuVar23 < (long)uVar25) {
                  pppppppuVar12 = pppppppuVar2;
                  pppppppuVar11 = pppppppuVar22 + (long)pppppppuVar19 * 4 + 8;
                  FUN_10a003e3c();
                  pppppppuVar13 = pppppppuVar22 + (long)pppppppuVar19 * 4 + 8;
                  pppppppuVar29 = pppppppuVar23;
                  if (-1 < (char)pppppppuVar12) {
                    pppppppuVar13 = pppppppuVar2;
                    pppppppuVar29 = pppppppuVar5;
                  }
                }
                if (*(char *)((long)pppppppuVar22 + 0x17) < '\0') {
                  pppppppuVar12 = (undefined8 *******)*pppppppuVar22;
                  __ZdlPv();
                }
                ppppppuVar32 = pppppppuVar13[1];
                ppppppuVar18 = *pppppppuVar13;
                pppppppuVar22[2] = pppppppuVar13[2];
                pppppppuVar22[1] = ppppppuVar32;
                *pppppppuVar22 = ppppppuVar18;
                *(undefined1 *)((long)pppppppuVar13 + 0x17) = 0;
                *(undefined1 *)pppppppuVar13 = 0;
                *(undefined4 *)(pppppppuVar22 + 3) = *(undefined4 *)(pppppppuVar13 + 3);
                pppppppuVar22 = pppppppuVar13;
                pppppppuVar19 = pppppppuVar29;
              } while ((long)pppppppuVar29 <= (long)(uVar25 - 2 >> 1));
              pppppppuVar22 = pppppppuVar21 + -4;
              if (pppppppuVar13 == pppppppuVar22) {
                if (*(char *)((long)pppppppuVar13 + 0x17) < '\0') {
                  pppppppuVar12 = (undefined8 *******)*pppppppuVar13;
                  __ZdlPv();
                }
                *pppppppuVar13 = ppppppuVar17;
                pppppppuVar13[1] = (undefined8 ******)CONCAT17(uStack_71,uStack_78);
                *(ulong *)((long)pppppppuVar13 + 0xf) = CONCAT71(uStack_70,uStack_71);
                *(char *)((long)pppppppuVar13 + 0x17) = (char)uStack_c4;
                *(undefined4 *)(pppppppuVar13 + 3) = uStack_c8;
              }
              else {
                if (*(char *)((long)pppppppuVar13 + 0x17) < '\0') {
                  pppppppuVar12 = (undefined8 *******)*pppppppuVar13;
                  __ZdlPv();
                }
                ppppppuVar32 = pppppppuVar21[-3];
                ppppppuVar18 = *pppppppuVar22;
                pppppppuVar13[2] = pppppppuVar21[-2];
                pppppppuVar13[1] = ppppppuVar32;
                *pppppppuVar13 = ppppppuVar18;
                *(undefined1 *)((long)pppppppuVar21 + -9) = 0;
                *(undefined1 *)(pppppppuVar21 + -4) = 0;
                *(undefined4 *)(pppppppuVar13 + 3) = *(undefined4 *)(pppppppuVar21 + -1);
                pppppppuVar21[-4] = ppppppuVar17;
                pppppppuVar21[-3] = (undefined8 ******)CONCAT17(uStack_71,uStack_78);
                *(ulong *)((long)pppppppuVar21 + -0x11) = CONCAT71(uStack_70,uStack_71);
                *(char *)((long)pppppppuVar21 + -9) = (char)uStack_c4;
                *(undefined4 *)(pppppppuVar21 + -1) = uStack_c8;
                lVar16 = (long)pppppppuVar13 + (0x20 - (long)pppppppuVar20) >> 5;
                if (1 < lVar16) {
                  uVar27 = lVar16 - 2U >> 1;
                  pppppppuVar23 = pppppppuVar20 + uVar27 * 4;
                  pppppppuVar12 = pppppppuVar23;
                  pppppppuVar11 = pppppppuVar13;
                  FUN_10a003e3c();
                  if (((uint)pppppppuVar12 >> 7 & 1) != 0) {
                    pppppuStack_98 = pppppppuVar13[1];
                    ppppppuStack_a0 = *pppppppuVar13;
                    pppppuStack_90 = pppppppuVar13[2];
                    pppppppuVar13[1] = (undefined8 ******)0x0;
                    pppppppuVar13[2] = (undefined8 ******)0x0;
                    *pppppppuVar13 = (undefined8 ******)0x0;
                    uStack_88 = *(undefined4 *)(pppppppuVar13 + 3);
                    pppppppuVar21 = pppppppuVar13;
                    do {
                      pppppppuVar13 = pppppppuVar23;
                      if (*(char *)((long)pppppppuVar21 + 0x17) < '\0') {
                        pppppppuVar12 = (undefined8 *******)*pppppppuVar21;
                        __ZdlPv();
                      }
                      ppppppuVar18 = pppppppuVar13[1];
                      ppppppuVar17 = *pppppppuVar13;
                      pppppppuVar21[2] = pppppppuVar13[2];
                      pppppppuVar21[1] = ppppppuVar18;
                      *pppppppuVar21 = ppppppuVar17;
                      *(undefined1 *)((long)pppppppuVar13 + 0x17) = 0;
                      *(undefined1 *)pppppppuVar13 = 0;
                      *(undefined4 *)(pppppppuVar21 + 3) = *(undefined4 *)(pppppppuVar13 + 3);
                      pppppppuVar23 = pppppppuVar13;
                      if (uVar27 == 0) break;
                      uVar27 = uVar27 - 1 >> 1;
                      pppppppuVar23 = pppppppuVar20 + uVar27 * 4;
                      pppppppuVar11 = &ppppppuStack_a0;
                      pppppppuVar12 = pppppppuVar23;
                      FUN_10a003e3c();
                      pppppppuVar21 = pppppppuVar13;
                    } while (((uint)pppppppuVar12 >> 7 & 1) != 0);
                    if (*(char *)((long)pppppppuVar13 + 0x17) < '\0') {
                      pppppppuVar12 = (undefined8 *******)*pppppppuVar13;
                      __ZdlPv();
                    }
                    pppppppuVar13[2] = (undefined8 ******)pppppuStack_90;
                    pppppppuVar13[1] = (undefined8 ******)pppppuStack_98;
                    *pppppppuVar13 = ppppppuStack_a0;
                    *(undefined4 *)(pppppppuVar13 + 3) = uStack_88;
                  }
                }
              }
              bVar6 = 2 < (long)uVar25;
              pppppppuVar21 = pppppppuVar22;
              uVar25 = uVar25 - 1;
            } while (bVar6);
          }
        }
      }
    }
  }
  else {
    if (uVar25 == 3) {
      pppppppuVar14 = pppppppuVar22 + -4;
      pppppppuVar11 = pppppppuVar20 + 4;
      uVar31 = 0x10a09bf90;
      ppppppuStack_c0 = pppppppuVar14;
      goto SUB_10a09c698;
    }
    if (uVar25 == 4) {
      pppppppuVar13 = pppppppuVar22 + -4;
      pppppppuVar11 = pppppppuVar20 + 4;
      pppppppuVar14 = pppppppuVar20 + 8;
      uStack_78 = SUB87(pppppppuVar11,0);
      uStack_71 = (undefined1)((ulong)pppppppuVar11 >> 0x38);
      uVar31 = 0x10a09bfe4;
      puVar10 = auStack_d0;
      pppppppuVar22 = pppppppuVar11;
      pppppppuVar23 = pppppppuVar14;
      ppppppuStack_c0 = pppppppuVar13;
      ppppppuStack_b0 = pppppppuVar13;
      ppppppuStack_a8 = pppppppuVar14;
      ppppppuStack_a0 = pppppppuVar20;
      goto SUB_10a09c698;
    }
    if (uVar25 != 5) goto LAB_10a09bb08;
    ppppppuStack_c0 = pppppppuVar22 + -4;
    pppppppuVar11 = pppppppuVar20 + 4;
    pppppppuVar14 = pppppppuVar20 + 8;
    FUN_10a09c744();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_10a09c5d4;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar17 = *pppppppuVar12;
  pppppppuVar19 = (undefined8 *******)*pppppppuVar11;
  pppppppuVar21 = (undefined8 *******)*ppppppuVar17;
  uStack_118 = SUB87(ppppppuVar17[1],0);
  uStack_111 = (undefined1)*(undefined8 *)((long)ppppppuVar17 + 0xf);
  uStack_110 = (undefined7)((ulong)*(undefined8 *)((long)ppppppuVar17 + 0xf) >> 8);
  bVar8 = *(byte *)((long)ppppppuVar17 + 0x17);
  ppppppuVar17[1] = (undefined8 *****)0x0;
  ppppppuVar17[2] = (undefined8 *****)0x0;
  *ppppppuVar17 = (undefined8 *****)0x0;
  uVar7 = *(uint *)(ppppppuVar17 + 3);
  ppppppuVar18 = pppppppuVar19[2];
  ppppppuVar32 = *pppppppuVar19;
  ppppppuVar17[1] = pppppppuVar19[1];
  *ppppppuVar17 = ppppppuVar32;
  ppppppuVar17[2] = ppppppuVar18;
  *(undefined1 *)((long)pppppppuVar19 + 0x17) = 0;
  *(undefined1 *)pppppppuVar19 = 0;
  *(undefined4 *)(ppppppuVar17 + 3) = *(undefined4 *)(pppppppuVar19 + 3);
  ppppppuStack_100 = pppppppuVar23;
  ppppppuStack_f8 = pppppppuVar13;
  ppppppuStack_f0 = pppppppuVar22;
  ppppppuStack_e8 = pppppppuVar20;
  ppppppuStack_e0 = pppppppuVar30;
  if (*(char *)((long)pppppppuVar19 + 0x17) < '\0') {
    pppppppuVar12 = (undefined8 *******)*pppppppuVar19;
    __ZdlPv();
  }
  *pppppppuVar19 = pppppppuVar21;
  pppppppuVar19[1] = (undefined8 ******)CONCAT17(uStack_111,uStack_118);
  *(ulong *)((long)pppppppuVar19 + 0xf) = CONCAT71(uStack_110,uStack_111);
  *(byte *)((long)pppppppuVar19 + 0x17) = bVar8;
  *(uint *)(pppppppuVar19 + 3) = uVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  uVar31 = 0x10a09c698;
  ___stack_chk_fail();
  puVar10 = auStack_120;
  pppppppuVar20 = pppppppuVar19;
  pppppppuVar22 = pppppppuVar21;
  pppppppuVar13 = (undefined8 *******)(ulong)bVar8;
  pppppppuVar23 = (undefined8 *******)(ulong)uVar7;
  pppppppuVar30 = &ppppppuStack_e0;
SUB_10a09c698:
  *(undefined8 ********)(puVar10 + -0x30) = pppppppuVar23;
  *(undefined8 ********)(puVar10 + -0x28) = pppppppuVar13;
  *(undefined8 ********)(puVar10 + -0x20) = pppppppuVar22;
  *(undefined8 ********)(puVar10 + -0x18) = pppppppuVar20;
  *(undefined8 ********)(puVar10 + -0x10) = pppppppuVar30;
  *(undefined8 *)(puVar10 + -8) = uVar31;
  *(undefined8 ********)(puVar10 + -0x40) = pppppppuVar11;
  *(undefined8 ********)(puVar10 + -0x38) = pppppppuVar12;
  *(undefined8 ********)(puVar10 + -0x48) = pppppppuVar14;
  pppppppuVar13 = pppppppuVar11;
  FUN_10a003e3c(pppppppuVar11,pppppppuVar12);
  FUN_10a003e3c(pppppppuVar14,pppppppuVar11);
  if (((uint)pppppppuVar13 >> 7 & 1) == 0) {
    if (-1 < (char)pppppppuVar14) {
      return;
    }
    FUN_10a09c5d4(puVar10 + -0x40,puVar10 + -0x48);
    uVar31 = *(undefined8 *)(puVar10 + -0x40);
    FUN_10a003e3c(uVar31,*(undefined8 *)(puVar10 + -0x38));
    if (((uint)uVar31 >> 7 & 1) == 0) {
      return;
    }
    puVar15 = puVar10 + -0x38;
    puVar10 = puVar10 + -0x40;
  }
  else {
    puVar15 = puVar10 + -0x38;
    if (-1 < (char)pppppppuVar14) {
      FUN_10a09c5d4(puVar15,puVar10 + -0x40);
      uVar31 = *(undefined8 *)(puVar10 + -0x48);
      FUN_10a003e3c(uVar31,*(undefined8 *)(puVar10 + -0x40));
      if (((uint)uVar31 >> 7 & 1) == 0) {
        return;
      }
      puVar15 = puVar10 + -0x40;
    }
    puVar10 = puVar10 + -0x48;
  }
  FUN_10a09c5d4(puVar15,puVar10);
  return;
}



/* Entry: 10a0967ac; end: 10a096917;  */

ulong FUN_10a0967ac(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lStack_58;
  
  plVar7 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (plVar7 == plVar1) {
    uVar5 = 0;
  }
  else {
    uVar5 = (long)plVar1 - (long)plVar7 >> 5;
    do {
      plVar6 = plVar7;
      if (*(char *)((long)plVar7 + 0x17) < '\0') {
        plVar6 = (long *)*plVar7;
      }
      plVar2 = plVar6;
      _strlen();
      uVar3 = (ulong)plVar2 >> 3;
      if (((ulong)plVar6 & 7) == 0) {
        if (plVar2 < (long *)0x8) goto LAB_10a096844;
        uVar8 = 0;
        plVar4 = plVar6;
        do {
          uVar8 = uVar8 * 0x40 + 0x9e3779b9 + (uVar8 >> 2) + *plVar4 ^ uVar8;
          uVar3 = uVar3 - 1;
          plVar4 = plVar4 + 1;
        } while (uVar3 != 0);
      }
      else if (plVar2 < (long *)0x8) {
LAB_10a096844:
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        plVar4 = plVar6;
        do {
          uVar8 = uVar8 * 0x40 + 0x9e3779b9 + (uVar8 >> 2) + *plVar4 ^ uVar8;
          uVar3 = uVar3 - 1;
          plVar4 = plVar4 + 1;
        } while (uVar3 != 0);
      }
      lStack_58 = 0;
      if (((ulong)plVar2 & 7) != 0) {
        _memcpy(&lStack_58,((long)plVar6 + (long)plVar2) - ((ulong)plVar2 & 7));
      }
      uVar8 = uVar8 * 0x40 + 0x9e3779b9 + (uVar8 >> 2) + lStack_58 ^ uVar8;
      uVar5 = uVar5 + 0x9e3779b9;
      uVar5 = (uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) +
               ((long)plVar2 + (uVar8 >> 2) + uVar8 * 0x40 + 0x9e3779b9 ^ uVar8) ^ uVar5) +
              0x9e3779b9;
      uVar5 = (long)(int)plVar7[3] + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
      plVar7 = plVar7 + 4;
    } while (plVar7 != plVar1);
  }
  return uVar5;
}



/* Entry: 10a096918; end: 10a09695b;  */

long FUN_10a096918(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  lStack_28 = param_1;
  func_0x00010a09ba00(&lStack_28);
  return param_1;
}



/* Entry: 10a09695c; end: 10a096b37;  */

void FUN_10a09695c(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long alStack_78 [2];
  char cStack_61;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  uVar4 = (ulong)*(char *)(param_2 + 0x77);
  if ((long)uVar4 < 0) {
    plVar1 = *(long **)(param_2 + 0x60);
    uVar4 = *(ulong *)(param_2 + 0x68);
  }
  else {
    plVar1 = (long *)(param_2 + 0x60);
  }
  uVar2 = uVar4 >> 3;
  if (((ulong)plVar1 & 7) == 0) {
    if (7 < uVar4) {
      uVar5 = 0;
      plVar3 = plVar1;
      do {
        uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) + *plVar3 ^ uVar5;
        uVar2 = uVar2 - 1;
        plVar3 = plVar3 + 1;
      } while (uVar2 != 0);
      goto LAB_10a096a08;
    }
  }
  else if (7 < uVar4) {
    uVar5 = 0;
    plVar3 = plVar1;
    do {
      uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) + *plVar3 ^ uVar5;
      uVar2 = uVar2 - 1;
      plVar3 = plVar3 + 1;
    } while (uVar2 != 0);
    goto LAB_10a096a08;
  }
  uVar5 = 0;
LAB_10a096a08:
  lStack_60 = 0;
  if ((uVar4 & 7) != 0) {
    _memcpy(&lStack_60,(long)plVar1 + (uVar4 - (uVar4 & 7)));
  }
  uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) + lStack_60 ^ uVar5;
  uVar2 = *(long *)(param_2 + 0x78) + 0x9e3779b9;
  __ZNSt3__19to_stringEm
            (alStack_78,
             uVar2 * 0x40 + 0x9e3779b9 + (uVar2 >> 2) +
             (uVar4 + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5) ^ uVar2);
  plVar1 = alStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar1,0,"_",1);
  lStack_58 = plVar1[1];
  lStack_60 = *plVar1;
  lStack_50 = plVar1[2];
  plVar1[1] = 0;
  plVar1[2] = 0;
  *plVar1 = 0;
  plVar1 = &lStack_60;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(plVar1,"_",1);
  lVar6 = *plVar1;
  param_1[1] = plVar1[1];
  *param_1 = lVar6;
  param_1[2] = plVar1[2];
  plVar1[1] = 0;
  plVar1[2] = 0;
  *plVar1 = 0;
  if (lStack_50 < 0) {
    __ZdlPv(lStack_60);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(alStack_78[0]);
  }
  return;
}



/* Entry: 10a096b38; end: 10a096efb;  */

/* WARNING: Removing unreachable block (ram,0x00010a096dfc) */
/* WARNING: Removing unreachable block (ram,0x00010a096dd8) */
/* WARNING: Removing unreachable block (ram,0x00010a096ba8) */
/* WARNING: Removing unreachable block (ram,0x00010a096b74) */
/* WARNING: Removing unreachable block (ram,0x00010a096d24) */
/* WARNING: Removing unreachable block (ram,0x00010a096dec) */
/* WARNING: Removing unreachable block (ram,0x00010a096e0c) */

void FUN_10a096b38(undefined8 *param_1,undefined8 param_2)

{
  undefined8 ****ppppuVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 **ppuStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 **ppuStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 ***pppuStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  FUN_10a09d9a0(&pppuStack_70,param_2,0);
  __ZNKSt3__14__fs10filesystem4path16lexically_normalEv(&pppuStack_e0);
  uStack_60 = uStack_d0;
  uStack_68 = uStack_d8;
  pppuStack_70 = pppuStack_e0;
  uVar4 = uStack_d8;
  ppppuVar1 = (undefined8 ****)pppuStack_e0;
  if (-1 < (long)uStack_d0) {
    uVar4 = uStack_d0 >> 0x38;
    ppppuVar1 = &pppuStack_e0;
  }
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      if (*(char *)((long)ppppuVar1 + uVar5) != '/') {
        if (uVar5 != 0xffffffffffffffff) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm(&pppuStack_e0,0)
          ;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
  func_0x00010a0a1bc4(&pppuStack_70,&pppuStack_e0);
  if ((long)uStack_d0 < 0) {
    __ZdlPv(pppuStack_e0);
  }
  FUN_10a096efc(auStack_88,&pppuStack_70);
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  pppuStack_e0 = (undefined8 ***)0x0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  __ZNSt3__14__fs10filesystem4path17replace_extensionERKS2_(&pppuStack_70,&pppuStack_e0);
  if ((long)uStack_d0 < 0) {
    __ZdlPv(pppuStack_e0);
  }
  __ZNKSt3__14__fs10filesystem4path5beginEv(&pppuStack_e0,&pppuStack_70);
  while( true ) {
    __ZNKSt3__14__fs10filesystem4path3endEv(&ppuStack_120,&pppuStack_70);
    bVar2 = lStack_c8 == lStack_108;
    bVar3 = lStack_c0 == lStack_100;
    if (lStack_110 < 0) {
      __ZdlPv(ppuStack_120);
    }
    if (bVar2 && bVar3) goto LAB_10a096dac;
    if ((long)uStack_d0 < 0) {
      func_0x000107c3192c(&ppuStack_140,pppuStack_e0,uStack_d8);
    }
    else {
      uStack_138 = uStack_d8;
      ppuStack_140 = pppuStack_e0;
      lStack_130 = uStack_d0;
    }
    FUN_10a09cbb0(&ppuStack_120,&PTR_DAT_110ba08c8,0);
    uVar4 = 0;
    FUN_10a09cb78(&ppuStack_140,&ppuStack_120);
    if ((uVar4 & 1) == 0) {
      FUN_10a09cbb0(auStack_58,&PTR_DAT_110ba08d8,0);
      iVar6 = (int)&ppuStack_140;
      FUN_10a09cb78(&ppuStack_140,auStack_58);
    }
    else {
      iVar6 = 1;
    }
    if (lStack_110 < 0) {
      __ZdlPv(ppuStack_120);
    }
    if (lStack_130 < 0) {
      __ZdlPv(ppuStack_140);
    }
    if (iVar6 != 0) break;
    if ((long)uStack_d0 < 0) {
      func_0x000107c3192c(&ppuStack_120,pppuStack_e0,uStack_d8);
    }
    else {
      uStack_118 = uStack_d8;
      ppuStack_120 = pppuStack_e0;
      lStack_110 = uStack_d0;
    }
    FUN_10a096fb0(&uStack_a0,&ppuStack_120);
    if (lStack_110 < 0) {
      __ZdlPv(ppuStack_120);
    }
    __ZNSt3__14__fs10filesystem4path8iterator11__incrementEv(&pppuStack_e0);
  }
  FUN_10a096fb0(&uStack_a0,auStack_88);
LAB_10a096dac:
  if ((long)uStack_d0 < 0) {
    __ZdlPv(pppuStack_e0);
  }
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[2] = uStack_90;
  return;
}



/* Entry: 10a096efc; end: 10a096faf;  */

undefined8 *** FUN_10a096efc(ulong *param_1,undefined8 ***param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 *puVar4;
  undefined8 **ppuStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  __ZNKSt3__14__fs10filesystem4path6__stemEv();
  if ((undefined8 *)0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    puVar4 = param_3;
    __ZNKSt3__14__fs10filesystem4path16__root_directoryEv(param_3);
    if (puVar4 == (undefined8 *)0x0) {
      __ZNKSt3__14__fs10filesystem4path10__filenameEv(param_2);
      if (puVar4 != (undefined8 *)0x0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_2,0x2f);
      }
      uVar1 = param_3[1];
      puVar4 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar4 = param_3;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,puVar4,uVar1);
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_2,param_3);
    }
    return param_2;
  }
  if (param_3 < (undefined8 *)0x17) {
    uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
    pppuVar2 = &ppuStack_58;
    if (param_3 == (undefined8 *)0x0) goto LAB_10a096f80;
  }
  else {
    pppuVar3 = (undefined8 ***)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      pppuVar3 = (undefined8 ***)(((ulong)param_3 | 7) + 1);
    }
    pppuVar2 = pppuVar3;
    __Znwm();
    uStack_48 = (ulong)pppuVar3 | 0x8000000000000000;
    ppuStack_58 = pppuVar2;
    puStack_50 = param_3;
  }
  pppuVar3 = pppuVar2;
  _memmove(pppuVar2,param_2,param_3);
  param_2 = pppuVar3;
LAB_10a096f80:
  *(undefined1 *)((long)pppuVar2 + (long)param_3) = 0;
  param_1[1] = (ulong)puStack_50;
  *param_1 = (ulong)ppuStack_58;
  param_1[2] = uStack_48;
  return param_2;
}



/* Entry: 10a096fb0; end: 10a097053;  */

undefined8 FUN_10a096fb0(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_2;
  __ZNKSt3__14__fs10filesystem4path16__root_directoryEv(param_2);
  if (puVar2 == (undefined8 *)0x0) {
    __ZNKSt3__14__fs10filesystem4path10__filenameEv(param_1);
    if (puVar2 != (undefined8 *)0x0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,0x2f);
    }
    uVar1 = param_2[1];
    puVar2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar2 = param_2;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,puVar2,uVar1);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1,param_2);
  }
  return param_1;
}



/* Entry: 10a097054; end: 10a097117;  */

void FUN_10a097054(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  uVar1 = 0x113834a20;
  FUN_10a2194d4(0x113834a20,*param_1);
  __ZNSt3__15mutex4lockEv(0x113834ad8);
  FUN_10a051594(0x113834a20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(0x113834ab8,uVar1);
  uRam0000000113834ad0 = 0;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f63692a,&UNK_10f636950,0x40,&UNK_10f6369be,in_x6,in_x7,
                        uRam0000000113834ad4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(0x113834ad8);
  return;
}



/* Entry: 10a097118; end: 10a0971e3;  */

undefined8 * FUN_10a097118(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a0a1d0c(param_1 + 3);
  param_1[7] = &UNK_10e52b660;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  FUN_109fccd08(param_1,0x400);
  if ((ulong)(*(long *)(param_1[7] + -8) + param_1[10]) < 0x400) {
    FUN_10a0a1ef4(param_1 + 7,0x7ff);
  }
  return param_1;
}



/* Entry: 10a0971e4; end: 10a09727b;  */

void FUN_10a0971e4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
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
  FUN_10a09727c(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a09727c; end: 10a097337;  */

void FUN_10a09727c(long param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lStack_38;
  
  puVar5 = (undefined8 *)(param_1 + 0x38);
  lStack_38 = *param_2;
  Hint_Prefetch(*puVar5,0,2,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + lStack_38;
  uVar4 = (SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + lStack_38) * -0x622015f714c7d297) + lStack_38;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  puVar3 = puVar5;
  FUN_10a0a2014(puVar5,&lStack_38,
                SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar4 * -0x622015f714c7d297);
  if (puVar3 == (undefined8 *)0x0) {
    lStack_38 = *param_2;
    uVar4 = 0;
    FUN_10a0a20a4();
    if ((uVar4 & 1) != 0) {
      *(long *)(*(long *)(param_1 + 0x40) + (long)puVar5 * 8) = lStack_38;
    }
    FUN_10a097a58(param_1,param_2);
  }
  return;
}



/* Entry: 10a097338; end: 10a0973cf;  */

void FUN_10a097338(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
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
  FUN_10a09727c(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a0973d0; end: 10a097467;  */

void FUN_10a0973d0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
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
  FUN_10a09727c(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a097468; end: 10a0974ff;  */

void FUN_10a097468(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
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
  FUN_10a09727c(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a097500; end: 10a097597;  */

void FUN_10a097500(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
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
  FUN_10a09727c(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a097598; end: 10a09762f;  */

void FUN_10a097598(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
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
  FUN_10a09727c(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a097630; end: 10a0976c7;  */

void FUN_10a097630(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
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
  FUN_10a09727c(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a0976c8; end: 10a09775f;  */

void FUN_10a0976c8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
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
  FUN_10a09727c(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a097760; end: 10a0977f7;  */

void FUN_10a097760(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
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
  FUN_10a09727c(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a0977f8; end: 10a09788f;  */

void FUN_10a0977f8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
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
  FUN_10a09727c(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a097890; end: 10a097927;  */

void FUN_10a097890(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
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
  FUN_10a09727c(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a097928; end: 10a0979bf;  */

void FUN_10a097928(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
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
  FUN_10a09727c(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a0979c0; end: 10a097a57;  */

void FUN_10a0979c0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
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
  FUN_10a09727c(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a097a58; end: 10a097b6b;  */

ulong * FUN_10a097a58(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  undefined8 uVar16;
  ulong *puStack_a8;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  puVar14 = (undefined8 *)param_1[1];
  if (puVar14 < (undefined8 *)param_1[2]) {
    lVar10 = param_2[1];
    uVar16 = *param_2;
    puVar14[1] = param_2[1];
    *puVar14 = uVar16;
    if (lVar10 != 0) {
      plVar7 = (long *)(lVar10 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar14 = puVar14 + 2;
    puVar15 = param_1;
  }
  else {
    lVar10 = (long)puVar14 - *param_1;
    uVar13 = (lVar10 >> 4) + 1;
    if (uVar13 >> 0x3c != 0) {
      FUN_10a09cf34();
      puVar15 = param_1 + 1;
      uVar12 = *puVar15;
      uVar13 = *param_1;
      uVar11 = (long)(param_1[2] - uVar12) >> 3;
      if (uVar13 < uVar11) {
        puVar5 = param_1;
        if (0x7f < **(ulong **)(uVar12 + uVar13 * 8)) {
          uVar13 = uVar13 + 1;
          if (uVar11 <= uVar13) {
            puVar5 = (ulong *)0x1008;
            __Znwm();
            *puVar5 = 0;
            puStack_a8 = puVar5;
            FUN_10a0a1dfc(puVar15,&puStack_a8);
            puVar6 = puStack_a8;
            puStack_a8 = (ulong *)0x0;
            puVar5 = puVar15;
            if (puVar6 != (ulong *)0x0) {
              if (*puVar6 != 0) {
                lVar10 = *puVar6 << 5;
                puVar15 = puVar6;
                do {
                  puVar5 = (ulong *)puVar15[4];
                  if (puVar15 + 1 == puVar5) {
                    lVar9 = 0x20;
LAB_10a097c20:
                    (**(code **)(*puVar5 + lVar9))();
                  }
                  else if (puVar5 != (ulong *)0x0) {
                    lVar9 = 0x28;
                    goto LAB_10a097c20;
                  }
                  lVar10 = lVar10 + -0x20;
                  puVar15 = puVar15 + 4;
                } while (lVar10 != 0);
              }
              __ZdlPv();
              puVar5 = puVar6;
            }
            uVar12 = param_1[1];
            uVar11 = (long)(param_1[2] - uVar12) >> 3;
          }
          *param_1 = uVar13;
        }
        if (uVar13 < uVar11) {
          puVar15 = *(ulong **)(uVar12 + uVar13 * 8);
          if (*puVar15 < 0x80) {
            puVar5 = puVar15 + *puVar15 * 4 + 1;
            FUN_10a0a2364(puVar5,param_2);
            uVar12 = *puVar15;
            uVar13 = uVar12 + 1;
            *puVar15 = uVar13;
            if (uVar12 != 0xffffffffffffffff) {
              if (uVar13 < 0x81) {
                if (*param_1 < (ulong)((long)(param_1[2] - param_1[1]) >> 3)) {
                  puVar15 = *(ulong **)(param_1[1] + *param_1 * 8);
                  uVar13 = *puVar15;
                  if (uVar13 == 0) goto LAB_10a097cdc;
                  if (uVar13 < 0x81) {
                    return puVar15 + uVar13 * 4 + -3;
                  }
                }
              }
              goto LAB_10a097cd8;
            }
          }
LAB_10a097cdc:
          FUN_10a0a2358();
          puVar15 = puStack_a8;
          puStack_a8 = (ulong *)0x0;
          if (puVar15 != (ulong *)0x0) {
            func_0x00010a09d078(puVar15);
            __ZdlPv(puVar15);
          }
          __Unwind_Resume();
          *puVar5 = (ulong)&PTR_DAT_110ba0790;
          puVar6 = puVar5 + 1;
          *puVar6 = 0;
          puVar5[2] = 0;
          puVar15 = puVar5;
          FUN_10a097e5c();
          if ((int)puVar15 == 0) {
            uVar13 = 0x58;
            __Znwm();
            FUN_10a099c04();
            plVar7 = (long *)puVar5[2];
            puVar5[2] = uVar13;
          }
          else {
            uVar13 = 0x60;
            __Znwm();
            FUN_10a153ae8();
            plVar7 = (long *)*puVar6;
            *puVar6 = uVar13;
          }
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 8))();
          }
          return puVar5;
        }
      }
LAB_10a097cd8:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a097cdc);
      (*pcVar4)();
    }
    uVar11 = (long)param_1[2] - *param_1;
    uVar12 = (long)uVar11 >> 3;
    if (uVar12 <= uVar13) {
      uVar12 = uVar13;
    }
    if (0x7fffffffffffffef < uVar11) {
      uVar12 = 0xfffffffffffffff;
    }
    puVar8 = param_2;
    puStack_38 = param_1;
    FUN_10a09cf48();
    puVar1 = (undefined8 *)(uVar12 + lVar10);
    lVar10 = param_2[1];
    uVar16 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar16;
    if (lVar10 != 0) {
      plVar7 = (long *)(lVar10 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar14 = puVar1 + 2;
    uVar13 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(uVar13);
    uStack_58 = *param_1;
    *param_1 = uVar13;
    param_1[1] = (ulong)puVar14;
    uStack_40 = param_1[2];
    param_1[2] = uVar12 + (long)puVar8 * 0x10;
    puVar15 = &uStack_58;
    uStack_50 = uStack_58;
    uStack_48 = uStack_58;
    func_0x00010925f550(puVar15);
  }
  param_1[1] = (ulong)puVar14;
  return puVar15;
}



/* Entry: 10a097b6c; end: 10a097d07;  */

ulong * FUN_10a097b6c(ulong *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong *puStack_48;
  
  puVar8 = param_1 + 1;
  uVar5 = *puVar8;
  uVar9 = *param_1;
  uVar7 = (long)(param_1[2] - uVar5) >> 3;
  if (uVar9 < uVar7) {
    puVar2 = param_1;
    if (0x7f < **(ulong **)(uVar5 + uVar9 * 8)) {
      uVar9 = uVar9 + 1;
      if (uVar7 <= uVar9) {
        puVar2 = (ulong *)0x1008;
        __Znwm();
        *puVar2 = 0;
        puStack_48 = puVar2;
        FUN_10a0a1dfc(puVar8,&puStack_48);
        puVar3 = puStack_48;
        puStack_48 = (ulong *)0x0;
        puVar2 = puVar8;
        if (puVar3 != (ulong *)0x0) {
          if (*puVar3 != 0) {
            lVar10 = *puVar3 << 5;
            puVar8 = puVar3;
            do {
              puVar2 = (ulong *)puVar8[4];
              if (puVar8 + 1 == puVar2) {
                lVar6 = 0x20;
LAB_10a097c20:
                (**(code **)(*puVar2 + lVar6))();
              }
              else if (puVar2 != (ulong *)0x0) {
                lVar6 = 0x28;
                goto LAB_10a097c20;
              }
              lVar10 = lVar10 + -0x20;
              puVar8 = puVar8 + 4;
            } while (lVar10 != 0);
          }
          __ZdlPv();
          puVar2 = puVar3;
        }
        uVar5 = param_1[1];
        uVar7 = (long)(param_1[2] - uVar5) >> 3;
      }
      *param_1 = uVar9;
    }
    if (uVar9 < uVar7) {
      puVar8 = *(ulong **)(uVar5 + uVar9 * 8);
      if (*puVar8 < 0x80) {
        puVar2 = puVar8 + *puVar8 * 4 + 1;
        FUN_10a0a2364(puVar2,param_2);
        uVar5 = *puVar8;
        uVar9 = uVar5 + 1;
        *puVar8 = uVar9;
        if (uVar5 != 0xffffffffffffffff) {
          if (uVar9 < 0x81) {
            if (*param_1 < (ulong)((long)(param_1[2] - param_1[1]) >> 3)) {
              puVar8 = *(ulong **)(param_1[1] + *param_1 * 8);
              uVar9 = *puVar8;
              if (uVar9 == 0) goto LAB_10a097cdc;
              if (uVar9 < 0x81) {
                return puVar8 + uVar9 * 4 + -3;
              }
            }
          }
          goto LAB_10a097cd8;
        }
      }
LAB_10a097cdc:
      FUN_10a0a2358();
      puVar8 = puStack_48;
      puStack_48 = (ulong *)0x0;
      if (puVar8 != (ulong *)0x0) {
        func_0x00010a09d078(puVar8);
        __ZdlPv(puVar8);
      }
      __Unwind_Resume();
      *puVar2 = (ulong)&PTR_DAT_110ba0790;
      puVar3 = puVar2 + 1;
      *puVar3 = 0;
      puVar2[2] = 0;
      puVar8 = puVar2;
      FUN_10a097e5c();
      if ((int)puVar8 == 0) {
        uVar9 = 0x58;
        __Znwm();
        FUN_10a099c04();
        plVar4 = (long *)puVar2[2];
        puVar2[2] = uVar9;
      }
      else {
        uVar9 = 0x60;
        __Znwm();
        FUN_10a153ae8();
        plVar4 = (long *)*puVar3;
        *puVar3 = uVar9;
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      return puVar2;
    }
  }
LAB_10a097cd8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a097cdc);
  (*pcVar1)();
}



/* Entry: 10a097d08; end: 10a097e5b;  */

undefined8 * FUN_10a097d08(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110ba0790;
  plVar5 = param_1 + 1;
  *plVar5 = 0;
  param_1[2] = 0;
  puVar1 = param_1;
  FUN_10a097e5c();
  if ((int)puVar1 == 0) {
    uVar4 = 0x58;
    __Znwm();
    FUN_10a099c04();
    plVar3 = (long *)param_1[2];
    param_1[2] = uVar4;
  }
  else {
    lVar2 = 0x60;
    __Znwm();
    FUN_10a153ae8();
    plVar3 = (long *)*plVar5;
    *plVar5 = lVar2;
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 10a097e5c; end: 10a097e9f;  */

bool FUN_10a097e5c(void)

{
  bool bVar1;
  byte *pbVar2;
  int *piVar3;
  
  pbVar2 = (byte *)0x113836510;
  FUN_10ad0621c();
  if ((*pbVar2 >> 6 & 1) == 0) {
    piVar3 = (int *)0x113836510;
    FUN_10ad0621c();
    bVar1 = *piVar3 != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10a097ea0; end: 10a097fdf;  */

undefined8 *
FUN_10a097ea0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  
  *param_1 = &PTR_DAT_110ba0790;
  plVar6 = param_1 + 1;
  *plVar6 = 0;
  param_1[2] = 0;
  puVar1 = param_1;
  FUN_10a097e5c();
  if ((int)puVar1 == 0) {
    uVar5 = 0x58;
    __Znwm();
    FUN_10a099d10();
    plVar4 = (long *)param_1[2];
    param_1[2] = uVar5;
  }
  else {
    lVar2 = 0x60;
    __Znwm();
    lVar3 = 0;
    FUN_10a2421c8();
    FUN_10a153ae8(lVar2,*(undefined8 *)(lVar3 + 0x1e0),0,param_2,param_3,1,param_4,param_5);
    plVar4 = (long *)*plVar6;
    *plVar6 = lVar2;
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  return param_1;
}



/* Entry: 10a097fe0; end: 10a098147;  */

undefined8 * FUN_10a097fe0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = &PTR_DAT_110ba0790;
  plVar6 = param_1 + 1;
  *plVar6 = 0;
  param_1[2] = 0;
  puVar3 = param_1;
  FUN_10a097e5c();
  if ((int)puVar3 == 0) {
    puVar3 = (undefined8 *)0x58;
    __Znwm();
    *puVar3 = &PTR_FUN_110ba07b0;
    *(undefined1 *)(puVar3 + 1) = 0;
    lVar4 = param_2[1];
    uVar7 = *param_2;
    puVar3[3] = param_2[1];
    puVar3[2] = uVar7;
    if (lVar4 != 0) {
      plVar6 = (long *)(lVar4 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puVar3[4] = 0;
    puVar3[5] = 0;
    uVar7 = *param_3;
    uVar9 = param_3[3];
    uVar8 = param_3[2];
    puVar3[7] = param_3[1];
    puVar3[6] = uVar7;
    puVar3[9] = uVar9;
    puVar3[8] = uVar8;
    *(undefined4 *)(puVar3 + 10) = *(undefined4 *)(param_3 + 4);
    plVar5 = (long *)param_1[2];
    param_1[2] = puVar3;
  }
  else {
    puVar3 = (undefined8 *)0x60;
    __Znwm();
    *puVar3 = &PTR_FUN_110ba0be8;
    lVar4 = param_2[1];
    uVar7 = *param_2;
    puVar3[2] = param_2[1];
    puVar3[1] = uVar7;
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    uVar7 = *param_3;
    uVar9 = param_3[3];
    uVar8 = param_3[2];
    puVar3[8] = param_3[1];
    puVar3[7] = uVar7;
    puVar3[10] = uVar9;
    puVar3[9] = uVar8;
    *(undefined4 *)(puVar3 + 0xb) = *(undefined4 *)(param_3 + 4);
    plVar5 = (long *)*plVar6;
    *plVar6 = (long)puVar3;
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  return param_1;
}



/* Entry: 10a098148; end: 10a0982af;  */

undefined8 * FUN_10a098148(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = &PTR_DAT_110ba0790;
  plVar6 = param_1 + 1;
  *plVar6 = 0;
  param_1[2] = 0;
  puVar3 = param_1;
  FUN_10a097e5c();
  if ((int)puVar3 == 0) {
    puVar3 = (undefined8 *)0x58;
    __Znwm();
    *puVar3 = &PTR_FUN_110ba07b0;
    *(undefined1 *)(puVar3 + 1) = 0;
    lVar4 = param_2[1];
    uVar7 = *param_2;
    puVar3[3] = param_2[1];
    puVar3[2] = uVar7;
    if (lVar4 != 0) {
      plVar6 = (long *)(lVar4 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puVar3[4] = 0;
    puVar3[5] = 0;
    uVar7 = *param_3;
    uVar9 = param_3[3];
    uVar8 = param_3[2];
    puVar3[7] = param_3[1];
    puVar3[6] = uVar7;
    puVar3[9] = uVar9;
    puVar3[8] = uVar8;
    *(undefined4 *)(puVar3 + 10) = *(undefined4 *)(param_3 + 4);
    plVar5 = (long *)param_1[2];
    param_1[2] = puVar3;
  }
  else {
    puVar3 = (undefined8 *)0x60;
    __Znwm();
    *puVar3 = &PTR_FUN_110ba0be8;
    lVar4 = param_2[1];
    uVar7 = *param_2;
    puVar3[2] = param_2[1];
    puVar3[1] = uVar7;
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    uVar7 = *param_3;
    uVar9 = param_3[3];
    uVar8 = param_3[2];
    puVar3[8] = param_3[1];
    puVar3[7] = uVar7;
    puVar3[10] = uVar9;
    puVar3[9] = uVar8;
    *(undefined4 *)(puVar3 + 0xb) = *(undefined4 *)(param_3 + 4);
    plVar5 = (long *)*plVar6;
    *plVar6 = (long)puVar3;
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  return param_1;
}



/* Entry: 10a0982b0; end: 10a0983a3;  */

undefined8 * FUN_10a0982b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110ba0790;
  plVar5 = param_1 + 1;
  *plVar5 = 0;
  param_1[2] = 0;
  puVar1 = param_1;
  FUN_10a097e5c();
  if ((int)puVar1 == 0) {
    uVar4 = 0x58;
    __Znwm();
    func_0x00010a0a24fc();
    plVar3 = (long *)param_1[2];
    param_1[2] = uVar4;
  }
  else {
    lVar2 = 0x60;
    __Znwm();
    FUN_10a0a24a4();
    plVar3 = (long *)*plVar5;
    *plVar5 = lVar2;
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 10a0983a4; end: 10a098497;  */

undefined8 * FUN_10a0983a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110ba0790;
  plVar5 = param_1 + 1;
  *plVar5 = 0;
  param_1[2] = 0;
  puVar1 = param_1;
  FUN_10a097e5c();
  if ((int)puVar1 == 0) {
    uVar4 = 0x58;
    __Znwm();
    func_0x00010a0a24fc();
    plVar3 = (long *)param_1[2];
    param_1[2] = uVar4;
  }
  else {
    lVar2 = 0x60;
    __Znwm();
    FUN_10a0a24a4();
    plVar3 = (long *)*plVar5;
    *plVar5 = lVar2;
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 10a098498; end: 10a09869f;  */

undefined8 * FUN_10a098498(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint *puVar8;
  undefined8 uStack_50;
  long *plStack_48;
  
  *param_1 = &PTR_DAT_110ba0790;
  plVar7 = param_1 + 1;
  *plVar7 = 0;
  param_1[2] = 0;
  puVar5 = param_1;
  FUN_10a097e5c();
  if ((int)puVar5 == 0) {
    puVar5 = (undefined8 *)0x58;
    __Znwm();
    plStack_48 = (long *)param_2[1];
    uStack_50 = *param_2;
    if (param_2[1] != 0) {
      plVar7 = (long *)(param_2[1] + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *puVar5 = &PTR_FUN_110ba07b0;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0x3f800000;
    puVar5[9] = 0;
    puVar5[8] = 0x3f800000;
    *(undefined4 *)(puVar5 + 10) = 0x3f800000;
    puVar6 = puVar5;
    FUN_10a3ca004();
    lVar3 = puVar6[8];
    if (lVar3 == 0) {
      FUN_10a3ca05c(puVar6,1);
      lVar3 = puVar6[8];
    }
    plVar7 = *(long **)(lVar3 + 0x228);
    (**(code **)(*plVar7 + 0x18))(plVar7,&uStack_50);
    FUN_10a099d88(puVar5 + 2,plVar7);
    puVar8 = (uint *)0x113834ef0;
    FUN_10a1c5e98();
    plVar7 = plStack_48;
    *(byte *)(puVar5 + 1) = (byte)(*puVar8 >> 0x14) & 1;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar3 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar4 = (long *)param_1[2];
    param_1[2] = puVar5;
  }
  else {
    lVar3 = 0x60;
    __Znwm();
    FUN_10a153be4();
    plVar4 = (long *)*plVar7;
    *plVar7 = lVar3;
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  return param_1;
}



/* Entry: 10a0986a0; end: 10a09886f;  */

void FUN_10a0986a0(long param_1,undefined1 (*param_2) [12])

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [16];
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  
  lVar11 = *(long *)(param_1 + 8);
  if (lVar11 != 0) {
    fVar30 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    uVar7 = *(undefined8 *)*param_2;
    fVar28 = (float)uVar7;
    pauVar2 = (undefined1 (*) [16])(param_2[1] + 4);
    uVar15 = *(undefined8 *)param_2[2];
    fVar14 = (float)*(undefined8 *)*pauVar2;
    fVar13 = *(float *)(*param_2 + 4);
    fVar16 = *(float *)(param_2[2] + 4);
    fVar12 = *(float *)(param_2[2] + 8);
    fVar9 = *(float *)(lVar11 + 0x38);
    uVar31 = *(undefined4 *)(lVar11 + 0x3c);
    fVar10 = *(float *)(lVar11 + 0x40);
    auVar4._12_4_ = fVar30;
    auVar4._0_12_ = *param_2;
    auVar20 = NEON_ext(auVar4,*pauVar2,0xc,1);
    uVar3 = *(ulong *)(lVar11 + 0x48);
    auVar25._4_4_ = uVar31;
    auVar25._0_4_ = uVar31;
    auVar25._8_4_ = uVar31;
    auVar25._12_4_ = uVar31;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar3;
    auVar26 = NEON_ext(auVar25,auVar27,4,1);
    auVar21 = NEON_rev64(*pauVar2,4);
    uVar19 = *(undefined8 *)(*param_2 + 8);
    uVar24 = *(undefined8 *)(param_2[1] + 8);
    pauVar1 = (undefined1 (*) [12])(lVar11 + 0x4c);
    uVar31 = (undefined4)((ulong)*(undefined8 *)(lVar11 + 0x54) >> 0x20);
    uVar8 = *(undefined8 *)*pauVar1;
    fVar29 = (float)uVar8;
    fVar32 = *(float *)(lVar11 + 0x54);
    fVar23 = (float)uVar24;
    auVar5._12_4_ = uVar31;
    auVar5._0_12_ = *pauVar1;
    auVar6._12_4_ = uVar31;
    auVar6._0_12_ = *pauVar1;
    auVar17 = NEON_ext(auVar5,auVar6,8,1);
    fVar18 = (float)uVar19;
    *(ulong *)(lVar11 + 0x40) =
         CONCAT44(fVar30 * auVar26._12_4_ + *(float *)(lVar11 + 0x44) * fVar28 +
                  (float)(uVar3 >> 0x20) * auVar21._12_4_,
                  auVar20._8_4_ * auVar26._8_4_ + fVar9 * (float)*(undefined8 *)(*param_2 + 8) +
                  fVar10 * fVar12);
    *(ulong *)(lVar11 + 0x38) =
         CONCAT44(auVar20._4_4_ * auVar26._4_4_ + fVar9 * (float)((ulong)uVar7 >> 0x20) +
                  fVar10 * auVar21._8_4_,
                  auVar20._0_4_ * auVar26._0_4_ + fVar9 * fVar28 + fVar10 * (float)uVar15);
    *(float *)(lVar11 + 0x48) =
         fVar14 * (float)uVar3 + *(float *)(lVar11 + 0x44) * fVar13 + fVar29 * fVar16;
    *(ulong *)(lVar11 + 0x4c) =
         CONCAT44((float)((ulong)uVar19 >> 0x20) * (float)*(undefined8 *)(lVar11 + 0x54) +
                  (float)((ulong)uVar8 >> 0x20) * fVar28 +
                  auVar17._4_4_ * (float)((ulong)uVar24 >> 0x20),
                  fVar23 * (float)uVar3 + *(float *)(lVar11 + 0x44) * fVar18 + fVar29 * fVar12);
    *(float *)(lVar11 + 0x54) =
         fVar32 * fVar14 + *(float *)(lVar11 + 0x50) * fVar13 + *(float *)(lVar11 + 0x58) * fVar16;
    *(float *)(lVar11 + 0x58) =
         fVar32 * fVar23 + *(float *)(lVar11 + 0x50) * fVar18 + *(float *)(lVar11 + 0x58) * fVar12;
    return;
  }
  lVar11 = *(long *)(param_1 + 0x10);
  fVar30 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  uVar7 = *(undefined8 *)*param_2;
  fVar28 = (float)uVar7;
  pauVar2 = (undefined1 (*) [16])(param_2[1] + 4);
  uVar15 = *(undefined8 *)param_2[2];
  fVar14 = (float)*(undefined8 *)*pauVar2;
  fVar13 = *(float *)(*param_2 + 4);
  fVar16 = *(float *)(param_2[2] + 4);
  fVar12 = *(float *)(param_2[2] + 8);
  fVar9 = *(float *)(lVar11 + 0x30);
  uVar31 = *(undefined4 *)(lVar11 + 0x34);
  fVar10 = *(float *)(lVar11 + 0x38);
  auVar20._12_4_ = fVar30;
  auVar20._0_12_ = *param_2;
  auVar20 = NEON_ext(auVar20,*pauVar2,0xc,1);
  uVar3 = *(ulong *)(lVar11 + 0x40);
  auVar22._4_4_ = uVar31;
  auVar22._0_4_ = uVar31;
  auVar22._8_4_ = uVar31;
  auVar22._12_4_ = uVar31;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar3;
  auVar27 = NEON_ext(auVar22,auVar17,4,1);
  auVar22 = NEON_rev64(*pauVar2,4);
  uVar19 = *(undefined8 *)(*param_2 + 8);
  uVar24 = *(undefined8 *)(param_2[1] + 8);
  pauVar1 = (undefined1 (*) [12])(lVar11 + 0x44);
  uVar31 = (undefined4)((ulong)*(undefined8 *)(lVar11 + 0x4c) >> 0x20);
  uVar8 = *(undefined8 *)*pauVar1;
  fVar29 = (float)uVar8;
  fVar32 = *(float *)(lVar11 + 0x4c);
  fVar23 = (float)uVar24;
  auVar21._12_4_ = uVar31;
  auVar21._0_12_ = *pauVar1;
  auVar26._12_4_ = uVar31;
  auVar26._0_12_ = *pauVar1;
  auVar17 = NEON_ext(auVar21,auVar26,8,1);
  fVar18 = (float)uVar19;
  *(ulong *)(lVar11 + 0x38) =
       CONCAT44(fVar30 * auVar27._12_4_ + *(float *)(lVar11 + 0x3c) * fVar28 +
                (float)(uVar3 >> 0x20) * auVar22._12_4_,
                auVar20._8_4_ * auVar27._8_4_ + fVar9 * (float)*(undefined8 *)(*param_2 + 8) +
                fVar10 * fVar12);
  *(ulong *)(lVar11 + 0x30) =
       CONCAT44(auVar20._4_4_ * auVar27._4_4_ + fVar9 * (float)((ulong)uVar7 >> 0x20) +
                fVar10 * auVar22._8_4_,
                auVar20._0_4_ * auVar27._0_4_ + fVar9 * fVar28 + fVar10 * (float)uVar15);
  *(float *)(lVar11 + 0x40) =
       fVar14 * (float)uVar3 + *(float *)(lVar11 + 0x3c) * fVar13 + fVar29 * fVar16;
  *(ulong *)(lVar11 + 0x44) =
       CONCAT44((float)((ulong)uVar19 >> 0x20) * (float)*(undefined8 *)(lVar11 + 0x4c) +
                (float)((ulong)uVar8 >> 0x20) * fVar28 +
                auVar17._4_4_ * (float)((ulong)uVar24 >> 0x20),
                fVar23 * (float)uVar3 + *(float *)(lVar11 + 0x3c) * fVar18 + fVar29 * fVar12);
  *(float *)(lVar11 + 0x4c) =
       fVar32 * fVar14 + *(float *)(lVar11 + 0x48) * fVar13 + *(float *)(lVar11 + 0x50) * fVar16;
  *(float *)(lVar11 + 0x50) =
       fVar32 * fVar23 + *(float *)(lVar11 + 0x48) * fVar18 + *(float *)(lVar11 + 0x50) * fVar12;
  return;
}



/* Entry: 10a098870; end: 10a0988c7;  */

void FUN_10a098870(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 8) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      return;
    }
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 8);
  }
  if ((lVar1 != 0) && (___dynamic_cast(lVar1,&PTR_DAT_110ba0e18,&PTR_DAT_110c71a18,0), lVar1 != 0))
  {
    *(undefined1 *)(lVar1 + 0x160) = 1;
  }
  return;
}



/* Entry: 10a0988c8; end: 10a0988df;  */

long * FUN_10a0988c8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_70;
  long *plStack_68;
  long lStack_58;
  long *plStack_50;
  undefined1 uStack_41;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar7 = *(long **)(*(long *)(param_1 + 8) + 8);
    (**(code **)(*plVar7 + 0xb8))();
    if (*(int *)(plVar7[3] + 0x734) == 1) {
      func_0x00010926dea0();
      plVar7 = (long *)(ulong)*(uint *)((long)plVar7 + 0xac);
    }
    else {
      plVar7 = (long *)0x0;
    }
    return plVar7;
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_10ab9ce6c();
  if ((int)plVar7 != 0) {
    return plVar7;
  }
  puVar4 = &UNK_10f6369f3;
  FUN_10a00946c();
  lVar5 = *(long *)(puVar4 + 8);
  if (lVar5 == 0) {
    lVar5 = *(long *)(puVar4 + 0x10);
    lVar9 = *(long *)(lVar5 + 0x10);
    if (lVar9 == 0) {
      if (*(long *)(lVar5 + 0x20) != 0) {
        return (long *)(lVar5 + 0x20);
      }
    }
    else {
      lVar6 = lVar9;
      ___dynamic_cast(lVar9,&PTR_DAT_110ba0e18,&PTR_DAT_110c545b8,0);
      if (lVar6 != 0) {
        return (long *)(lVar6 + 0xa8);
      }
      if (*(long *)(lVar5 + 0x20) != 0) {
        return (long *)(lVar5 + 0x20);
      }
      ___dynamic_cast(lVar9,&PTR_DAT_110ba0e18,&PTR_DAT_110bc45d8,0xfffffffffffffffe);
      if (lVar9 != 0) {
        plStack_50 = *(long **)(lVar5 + 0x18);
        lStack_58 = lVar9;
        if (plStack_50 != (long *)0x0) {
          plVar7 = plStack_50 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = *plVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        goto LAB_10a098978;
      }
    }
    lStack_58 = 0;
    plStack_50 = (long *)0x0;
LAB_10a098978:
    plVar8 = (long *)(lVar5 + 0x20);
    func_0x00010a099dfc(plVar8,&lStack_58);
    plVar7 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
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
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (*plVar8 == 0) {
      plStack_68 = *(long **)(lVar5 + 0x18);
      uStack_70 = *(undefined8 *)(lVar5 + 0x10);
      if (*(long *)(lVar5 + 0x18) != 0) {
        plVar7 = (long *)(*(long *)(lVar5 + 0x18) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a0a26b4(&lStack_58,&uStack_41,&uStack_70);
      func_0x00010a099e60(plVar8,&lStack_58);
      plVar7 = plStack_50;
      if (plStack_50 != (long *)0x0) {
        plVar1 = plStack_50 + 1;
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
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar7 = plStack_68;
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
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
    return plVar8;
  }
  lVar9 = *(long *)(lVar5 + 8);
  if (lVar9 == 0) {
    if (*(long *)(lVar5 + 0x28) != 0) {
      return (long *)(lVar5 + 0x28);
    }
  }
  else {
    lVar6 = lVar9;
    ___dynamic_cast(lVar9,&PTR_DAT_110ba0e18,&PTR_DAT_110c545b8,0);
    if (lVar6 != 0) {
      return (long *)(lVar6 + 0xa8);
    }
    if (*(long *)(lVar5 + 0x28) != 0) {
      return (long *)(lVar5 + 0x28);
    }
    ___dynamic_cast(lVar9,&PTR_DAT_110ba0e18,&PTR_DAT_110bc45d8,0xfffffffffffffffe);
    if (lVar9 != 0) {
      plStack_50 = *(long **)(lVar5 + 0x10);
      lStack_58 = lVar9;
      if (plStack_50 != (long *)0x0) {
        plVar7 = plStack_50 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      goto LAB_10a153d5c;
    }
  }
  lStack_58 = 0;
  plStack_50 = (long *)0x0;
LAB_10a153d5c:
  plVar8 = (long *)(lVar5 + 0x28);
  func_0x00010a099dfc(plVar8,&lStack_58);
  plVar7 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
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
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*plVar8 == 0) {
    plStack_68 = *(long **)(lVar5 + 0x10);
    uStack_70 = *(undefined8 *)(lVar5 + 8);
    if (*(long *)(lVar5 + 0x10) != 0) {
      plVar7 = (long *)(*(long *)(lVar5 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a0a26b4(&lStack_58,&uStack_41,&uStack_70);
    func_0x00010a099e60(plVar8,&lStack_58);
    plVar7 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
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
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar7 = plStack_68;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  return plVar8;
}



/* Entry: 10a0988e0; end: 10a098907;  */

long * FUN_10a0988e0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_70;
  long *plStack_68;
  long lStack_58;
  long *plStack_50;
  undefined1 uStack_41;
  
  plVar4 = *(long **)(param_1 + 0x10);
  FUN_10ab9ce6c();
  if ((int)plVar4 != 0) {
    return plVar4;
  }
  puVar5 = &UNK_10f6369f3;
  FUN_10a00946c();
  lVar6 = *(long *)(puVar5 + 8);
  if (lVar6 == 0) {
    lVar6 = *(long *)(puVar5 + 0x10);
    lVar9 = *(long *)(lVar6 + 0x10);
    if (lVar9 == 0) {
      if (*(long *)(lVar6 + 0x20) != 0) {
        return (long *)(lVar6 + 0x20);
      }
    }
    else {
      lVar7 = lVar9;
      ___dynamic_cast(lVar9,&PTR_DAT_110ba0e18,&PTR_DAT_110c545b8,0);
      if (lVar7 != 0) {
        return (long *)(lVar7 + 0xa8);
      }
      if (*(long *)(lVar6 + 0x20) != 0) {
        return (long *)(lVar6 + 0x20);
      }
      ___dynamic_cast(lVar9,&PTR_DAT_110ba0e18,&PTR_DAT_110bc45d8,0xfffffffffffffffe);
      if (lVar9 != 0) {
        plStack_50 = *(long **)(lVar6 + 0x18);
        lStack_58 = lVar9;
        if (plStack_50 != (long *)0x0) {
          plVar4 = plStack_50 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        goto LAB_10a098978;
      }
    }
    lStack_58 = 0;
    plStack_50 = (long *)0x0;
LAB_10a098978:
    plVar8 = (long *)(lVar6 + 0x20);
    func_0x00010a099dfc(plVar8,&lStack_58);
    plVar4 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
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
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*plVar8 == 0) {
      plStack_68 = *(long **)(lVar6 + 0x18);
      uStack_70 = *(undefined8 *)(lVar6 + 0x10);
      if (*(long *)(lVar6 + 0x18) != 0) {
        plVar4 = (long *)(*(long *)(lVar6 + 0x18) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a0a26b4(&lStack_58,&uStack_41,&uStack_70);
      func_0x00010a099e60(plVar8,&lStack_58);
      plVar4 = plStack_50;
      if (plStack_50 != (long *)0x0) {
        plVar1 = plStack_50 + 1;
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
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      plVar4 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar1 = plStack_68 + 1;
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
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
    return plVar8;
  }
  lVar9 = *(long *)(lVar6 + 8);
  if (lVar9 == 0) {
    if (*(long *)(lVar6 + 0x28) != 0) {
      return (long *)(lVar6 + 0x28);
    }
  }
  else {
    lVar7 = lVar9;
    ___dynamic_cast(lVar9,&PTR_DAT_110ba0e18,&PTR_DAT_110c545b8,0);
    if (lVar7 != 0) {
      return (long *)(lVar7 + 0xa8);
    }
    if (*(long *)(lVar6 + 0x28) != 0) {
      return (long *)(lVar6 + 0x28);
    }
    ___dynamic_cast(lVar9,&PTR_DAT_110ba0e18,&PTR_DAT_110bc45d8,0xfffffffffffffffe);
    if (lVar9 != 0) {
      plStack_50 = *(long **)(lVar6 + 0x10);
      lStack_58 = lVar9;
      if (plStack_50 != (long *)0x0) {
        plVar4 = plStack_50 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      goto LAB_10a153d5c;
    }
  }
  lStack_58 = 0;
  plStack_50 = (long *)0x0;
LAB_10a153d5c:
  plVar8 = (long *)(lVar6 + 0x28);
  func_0x00010a099dfc(plVar8,&lStack_58);
  plVar4 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
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
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (*plVar8 == 0) {
    plStack_68 = *(long **)(lVar6 + 0x10);
    uStack_70 = *(undefined8 *)(lVar6 + 8);
    if (*(long *)(lVar6 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(lVar6 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a0a26b4(&lStack_58,&uStack_41,&uStack_70);
    func_0x00010a099e60(plVar8,&lStack_58);
    plVar4 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
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
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plVar4 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return plVar8;
}



/* Entry: 10a098908; end: 10a09891f;  */

long * FUN_10a098908(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_60;
  long *plStack_58;
  long lStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    lVar8 = *(long *)(lVar5 + 0x10);
    if (lVar8 == 0) {
      if (*(long *)(lVar5 + 0x20) != 0) {
        return (long *)(lVar5 + 0x20);
      }
    }
    else {
      lVar6 = lVar8;
      ___dynamic_cast(lVar8,&PTR_DAT_110ba0e18,&PTR_DAT_110c545b8,0);
      if (lVar6 != 0) {
        return (long *)(lVar6 + 0xa8);
      }
      if (*(long *)(lVar5 + 0x20) != 0) {
        return (long *)(lVar5 + 0x20);
      }
      ___dynamic_cast(lVar8,&PTR_DAT_110ba0e18,&PTR_DAT_110bc45d8,0xfffffffffffffffe);
      if (lVar8 != 0) {
        plStack_40 = *(long **)(lVar5 + 0x18);
        lStack_48 = lVar8;
        if (plStack_40 != (long *)0x0) {
          plVar2 = plStack_40 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = *plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        goto LAB_10a098978;
      }
    }
    lStack_48 = 0;
    plStack_40 = (long *)0x0;
LAB_10a098978:
    plVar7 = (long *)(lVar5 + 0x20);
    func_0x00010a099dfc(plVar7,&lStack_48);
    plVar2 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (*plVar7 == 0) {
      plStack_58 = *(long **)(lVar5 + 0x18);
      uStack_60 = *(undefined8 *)(lVar5 + 0x10);
      if (*(long *)(lVar5 + 0x18) != 0) {
        plVar2 = (long *)(*(long *)(lVar5 + 0x18) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a0a26b4(&lStack_48,&uStack_31,&uStack_60);
      func_0x00010a099e60(plVar7,&lStack_48);
      plVar2 = plStack_40;
      if (plStack_40 != (long *)0x0) {
        plVar1 = plStack_40 + 1;
        do {
          lVar5 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      plVar2 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar1 = plStack_58 + 1;
        do {
          lVar5 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
    }
    return plVar7;
  }
  lVar8 = *(long *)(lVar5 + 8);
  if (lVar8 == 0) {
    if (*(long *)(lVar5 + 0x28) != 0) {
      return (long *)(lVar5 + 0x28);
    }
  }
  else {
    lVar6 = lVar8;
    ___dynamic_cast(lVar8,&PTR_DAT_110ba0e18,&PTR_DAT_110c545b8,0);
    if (lVar6 != 0) {
      return (long *)(lVar6 + 0xa8);
    }
    if (*(long *)(lVar5 + 0x28) != 0) {
      return (long *)(lVar5 + 0x28);
    }
    ___dynamic_cast(lVar8,&PTR_DAT_110ba0e18,&PTR_DAT_110bc45d8,0xfffffffffffffffe);
    if (lVar8 != 0) {
      plStack_40 = *(long **)(lVar5 + 0x10);
      lStack_48 = lVar8;
      if (plStack_40 != (long *)0x0) {
        plVar2 = plStack_40 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      goto LAB_10a153d5c;
    }
  }
  lStack_48 = 0;
  plStack_40 = (long *)0x0;
LAB_10a153d5c:
  plVar7 = (long *)(lVar5 + 0x28);
  func_0x00010a099dfc(plVar7,&lStack_48);
  plVar2 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (*plVar7 == 0) {
    plStack_58 = *(long **)(lVar5 + 0x10);
    uStack_60 = *(undefined8 *)(lVar5 + 8);
    if (*(long *)(lVar5 + 0x10) != 0) {
      plVar2 = (long *)(*(long *)(lVar5 + 0x10) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a0a26b4(&lStack_48,&uStack_31,&uStack_60);
    func_0x00010a099e60(plVar7,&lStack_48);
    plVar2 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  return plVar7;
}



/* Entry: 10a098920; end: 10a098af3;  */

long * FUN_10a098920(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_60;
  long *plStack_58;
  long lStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      return (long *)(param_1 + 0x20);
    }
  }
  else {
    lVar5 = lVar7;
    ___dynamic_cast(lVar7,&PTR_DAT_110ba0e18,&PTR_DAT_110c545b8,0);
    if (lVar5 != 0) {
      return (long *)(lVar5 + 0xa8);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      return (long *)(param_1 + 0x20);
    }
    ___dynamic_cast(lVar7,&PTR_DAT_110ba0e18,&PTR_DAT_110bc45d8,0xfffffffffffffffe);
    if (lVar7 != 0) {
      plStack_40 = *(long **)(param_1 + 0x18);
      lStack_48 = lVar7;
      if (plStack_40 != (long *)0x0) {
        plVar2 = plStack_40 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      goto LAB_10a098978;
    }
  }
  lStack_48 = 0;
  plStack_40 = (long *)0x0;
LAB_10a098978:
  plVar6 = (long *)(param_1 + 0x20);
  func_0x00010a099dfc(plVar6,&lStack_48);
  plVar2 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (*plVar6 == 0) {
    plStack_58 = *(long **)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x18) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x18) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a0a26b4(&lStack_48,&uStack_31,&uStack_60);
    func_0x00010a099e60(plVar6,&lStack_48);
    plVar2 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  return plVar6;
}



/* Entry: 10a098af4; end: 10a098b0b;  */

undefined8 * FUN_10a098af4(long param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 **ppuVar15;
  undefined8 **ppuVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 *puStack_3e8;
  long lStack_3e0;
  undefined8 *puStack_3d8;
  undefined1 *puStack_3d0;
  code *pcStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 uStack_3b8;
  undefined1 uStack_228;
  undefined1 auStack_220 [8];
  undefined8 auStack_218 [23];
  undefined8 uStack_160;
  undefined8 uStack_158;
  uint uStack_150;
  uint uStack_14c;
  undefined4 uStack_148;
  undefined8 *puStack_138;
  long lStack_130;
  undefined8 auStack_128 [4];
  undefined *puStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined *puStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint uStack_88;
  float afStack_84 [5];
  
  puVar18 = *(undefined8 **)(param_1 + 8);
  if (puVar18 != (undefined8 *)0x0) {
    if (param_2 == 0) {
      return puVar18;
    }
    if (*(long *)(param_2 + 8) == 0) {
      puVar12 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    else {
      puVar12 = (undefined8 *)(*(long *)(param_2 + 8) + 8);
    }
    plVar22 = (long *)*puVar12;
    plVar13 = plVar22;
    (**(code **)(*plVar22 + 0x28))();
    uVar8 = (uint)plVar13;
    if (uVar8 < 2) {
      uVar8 = 1;
    }
    (**(code **)(*plVar22 + 0x30))();
    uVar9 = (uint)plVar22;
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    ppuVar15 = &puStack_3c0;
    ppuVar16 = &puStack_3c0;
    if (param_2 != 0) {
      if (*(long *)(param_2 + 8) == 0) {
        puVar12 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
      }
      else {
        puVar12 = (undefined8 *)(*(long *)(param_2 + 8) + 8);
      }
      plVar23 = (long *)*puVar12;
      plVar13 = plVar23;
      (**(code **)(*plVar23 + 0x48))();
      plVar22 = (long *)puVar18[1];
      (**(code **)(*plVar22 + 0x48))();
      puStack_3c0 = (undefined8 *)&UNK_10f636a31;
      uStack_3b8 = 0x2f;
      if ((int)plVar13 != (int)plVar22) {
        FUN_10a0edfc4();
        FUN_10a09d158(&puStack_3c0);
        FUN_10a154428(auStack_220);
        puVar18 = ppuVar16;
        __Unwind_Resume();
        pcStack_3c8 = FUN_10a154428;
        puStack_3e8 = puVar18 + 0x29;
        lStack_3e0 = param_2;
        puStack_3d8 = ppuVar16;
        puStack_3d0 = &stack0xfffffffffffffff0;
        FUN_10a09d1bc(&puStack_3e8);
        puStack_3e8 = puVar18 + 0x26;
        FUN_10a09d284(&puStack_3e8);
        puStack_3e8 = puVar18 + 1;
        func_0x00010a09d2f4(&puStack_3e8);
        return puVar18;
      }
      plVar13 = plVar23;
      (**(code **)(*plVar23 + 0x28))();
      uVar6 = (uint)plVar13;
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      (**(code **)(*plVar23 + 0x30))();
      uVar7 = (uint)plVar23;
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      afStack_84[1] = 0.0;
      afStack_84[2] = 0.0;
      afStack_84[3] = 0.0;
      afStack_84[0] = (float)(int)uVar8 / (float)(int)uVar6 - 0.0 / (float)(int)uVar6;
      afStack_84[4] = (float)(int)uVar9 / (float)(int)uVar7 - 0.0 / (float)(int)uVar7;
      plVar13 = (long *)puVar18[1];
      (**(code **)(*plVar13 + 0xb8))();
      FUN_10a0e3e64(auStack_220,plVar13[3]);
      uStack_f8 = CONCAT71(uStack_f8._1_7_,(char)param_3);
      if (*(long *)(param_2 + 8) == 0) {
        puVar12 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
      }
      else {
        puVar12 = (undefined8 *)(*(long *)(param_2 + 8) + 8);
      }
      uVar20 = *puVar12;
      uVar21 = puVar18[1];
      FUN_10a156fa0(&puStack_3c0,auStack_220);
      uStack_228 = 1;
      func_0x00010a0e3a84(uVar20,uVar21,afStack_84,&puStack_3c0);
      FUN_10a09d158(&puStack_3c0);
      if (*(long *)(param_2 + 8) == 0) {
        puVar12 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x30);
      }
      else {
        puVar12 = (undefined8 *)(*(long *)(param_2 + 8) + 0x38);
      }
      uVar21 = puVar12[1];
      uVar20 = *puVar12;
      uVar25 = puVar12[3];
      uVar24 = puVar12[2];
      *(undefined4 *)(puVar18 + 0xb) = *(undefined4 *)(puVar12 + 4);
      puVar18[10] = uVar25;
      puVar18[9] = uVar24;
      puVar18[8] = uVar21;
      puVar18[7] = uVar20;
      lVar14 = puVar18[1];
      if ((lVar14 != 0) &&
         (___dynamic_cast(lVar14,&PTR_DAT_110ba0e18,&PTR_DAT_110c71a18,0), lVar14 != 0)) {
        *(undefined1 *)(lVar14 + 0x160) = 1;
      }
      puStack_3c0 = &uStack_d8;
      FUN_10a09d1bc(&puStack_3c0);
      puStack_3c0 = &uStack_f0;
      FUN_10a09d284(&puStack_3c0);
      puStack_3c0 = auStack_218;
      func_0x00010a09d2f4(&puStack_3c0);
      puVar18 = ppuVar15;
    }
    return puVar18;
  }
  puVar18 = *(undefined8 **)(param_1 + 0x10);
  if (param_2 == 0) {
    return puVar18;
  }
  if (*(long *)(param_2 + 8) == 0) {
    puVar12 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
  }
  else {
    puVar12 = (undefined8 *)(*(long *)(param_2 + 8) + 8);
  }
  plVar22 = (long *)*puVar12;
  plVar13 = plVar22;
  (**(code **)(*plVar22 + 0x28))();
  uVar8 = (uint)plVar13;
  if (uVar8 < 2) {
    uVar8 = 1;
  }
  (**(code **)(*plVar22 + 0x30))();
  uVar9 = (uint)plVar22;
  if (uVar9 < 2) {
    uVar9 = 1;
  }
  if (param_2 == 0) {
    return puVar18;
  }
  if (*(long *)(param_2 + 8) == 0) {
    plVar13 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
  }
  else {
    plVar13 = (long *)(*(long *)(param_2 + 8) + 8);
  }
  plVar13 = (long *)*plVar13;
  plVar22 = plVar13;
  (**(code **)(*plVar13 + 0x48))();
  plVar23 = (long *)puVar18[2];
  (**(code **)(*plVar23 + 0x48))();
  puStack_b0 = &UNK_10f636a31;
  plStack_a8 = (long *)0x2f;
  if ((int)plVar22 == (int)plVar23) {
    lVar14 = 1;
    FUN_10a303694();
    if (*(char *)(lVar14 + 0x21d) != '\x01') {
      plVar22 = plVar13;
      (**(code **)(*plVar13 + 0x28))();
      uVar6 = (uint)plVar22;
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      (**(code **)(*plVar13 + 0x30))();
      uVar7 = (uint)plVar13;
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      fStack_bc = 0.0 / (float)(int)uVar6;
      fStack_b8 = 0.0 / (float)(int)uVar7;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b4 = 0x3f800000;
      uStack_d8._4_4_ = (float)(int)uVar8 / (float)(int)uVar6 - fStack_bc;
      fStack_c4 = (float)(int)uVar9 / (float)(int)uVar7 - fStack_b8;
      uVar1 = 0;
      if (param_3 == 0) {
        uVar1 = 0x3f800000;
      }
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      puStack_108 = (undefined *)0x0;
      plStack_100 = (long *)0x0;
      if (*(char *)(puVar18 + 1) != '\x01') {
        plVar22 = (long *)puVar18[2];
        plVar13 = plVar22;
        (**(code **)(*plVar22 + 0x28))();
        (**(code **)(*plVar22 + 0x30))();
        uVar8 = (uint)plVar13;
        if (uVar8 < 2) {
          uVar8 = 1;
        }
        uVar9 = (uint)plVar22;
        if (uVar9 < 2) {
          uVar9 = 1;
        }
        auStack_128[0] = CONCAT44(uVar9,uVar8);
        FUN_10a3018c8();
        FUN_10a09d3bc(&puStack_b0);
        plVar13 = plStack_a8;
        puVar19 = puStack_b0;
        puStack_108 = puStack_b0;
        plStack_100 = plStack_a8;
        _glBindFramebuffer(0x8d40,*(undefined4 *)(puStack_b0 + 0x10));
        _glViewport(0,0,*(undefined4 *)(puVar19 + 8),*(undefined4 *)(puVar19 + 0xc));
        puVar12 = puVar18;
        FUN_10a0988e0();
        *(int *)(puVar19 + 0x14) = (int)puVar12;
        *(undefined4 *)(puVar19 + 0x1c) = 0xde1;
        puVar19[0x30] = 0;
        _glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,puVar12,0);
LAB_10a09951c:
        FUN_10a0988c8(param_2);
        FUN_10ad4b940(0);
        FUN_10a3015e0(uVar1);
        if (*(char *)(puVar18 + 1) == '\x01') {
          plStack_a8 = (long *)0x0;
          puStack_b0 = (undefined *)0x0;
          uStack_98 = 0;
          uStack_a0 = 0;
          FUN_10ab9b224(&uStack_f8,&puStack_b0);
          FUN_10ab9ce18(&puStack_b0);
        }
        else {
          func_0x00010a301a5c(puVar19,0x8d40);
          func_0x00010a301a24(puVar19,0x8d40);
        }
        if (*(long *)(param_2 + 8) == 0) {
          puVar12 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x30);
        }
        else {
          puVar12 = (undefined8 *)(*(long *)(param_2 + 8) + 0x38);
        }
        uVar21 = puVar12[1];
        uVar20 = *puVar12;
        uVar25 = puVar12[3];
        uVar24 = puVar12[2];
        *(undefined4 *)(puVar18 + 10) = *(undefined4 *)(puVar12 + 4);
        puVar18[7] = uVar21;
        puVar18[6] = uVar20;
        puVar18[9] = uVar25;
        puVar18[8] = uVar24;
        lVar14 = puVar18[2];
        if ((lVar14 != 0) &&
           (___dynamic_cast(lVar14,&PTR_DAT_110ba0e18,&PTR_DAT_110c71a18,0), lVar14 != 0)) {
          *(undefined1 *)(lVar14 + 0x160) = 1;
        }
        if (plVar13 != (long *)0x0) {
          plVar22 = plVar13 + 1;
          do {
            lVar14 = *plVar22;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar4) {
              *plVar22 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        puVar18 = &uStack_f8;
        FUN_10ab9ce18(puVar18);
        return puVar18;
      }
      ppuVar11 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      puVar19 = *ppuVar11;
      plVar22 = (long *)puVar18[2];
      plVar13 = plVar22;
      (**(code **)(*plVar22 + 0x28))();
      (**(code **)(*plVar22 + 0x30))(plVar22);
      uVar8 = (uint)plVar13;
      if (uVar8 < 2) {
        uVar8 = 1;
      }
      plVar13 = (long *)puVar18[2];
      (**(code **)(*plVar13 + 0x28))(plVar13);
      (**(code **)(*plVar13 + 0x30))();
      lVar14 = *(long *)(puVar19 + 0x10);
      puStack_b0 = &UNK_10f635282;
      plStack_a8 = (long *)0x2b;
      if (lVar14 != 0) {
        FUN_10ab9c9b0(&puStack_b0,plVar22,0,0);
        uVar9 = (uint)plVar13;
        if (uVar9 < 2) {
          uVar9 = 1;
        }
        uVar17 = 0x8ca9;
        if (uStack_88 < 2) {
          uVar17 = 0x8d40;
        }
        FUN_10ab9cbe8(auStack_128,lVar14 + 0x50,uVar17,&puStack_b0,0,CONCAT44(uVar9,uVar8),0);
        FUN_10ab9b224(&uStack_f8,auStack_128);
        FUN_10ab9ce18(auStack_128);
        plVar13 = (long *)0x0;
        puVar19 = (undefined *)0x0;
        goto LAB_10a09951c;
      }
      goto LAB_10a099670;
    }
    ___dynamic_cast(plVar13,&PTR_DAT_110ba0e18,&PTR_DAT_110c545f0,0);
    puStack_b0 = &UNK_10f636a61;
    plStack_a8 = (long *)0xd;
    if (plVar13 != (long *)0x0) {
      lVar10 = puVar18[2];
      if (lVar10 == 0) {
        puStack_b0 = &UNK_10f636a6f;
        plStack_a8 = (long *)0x13;
      }
      else {
        puStack_138 = puVar18;
        lStack_130 = param_2;
        ___dynamic_cast(lVar10,&PTR_DAT_110ba0e18,&PTR_DAT_110c545f0,0);
        puStack_b0 = &UNK_10f636a6f;
        plStack_a8 = (long *)0x13;
        if (lVar10 != 0) {
          puVar18 = (undefined8 *)(ulong)*(uint *)((long)plVar13 + 0x5c);
          uVar1 = *(undefined4 *)((long)plVar13 + 0x7c);
          uVar17 = *(undefined4 *)(lVar10 + 0x5c);
          uVar2 = *(undefined4 *)(lVar10 + 0x7c);
          (**(code **)(*plVar13 + 0x48))();
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_148 = SUB84(plVar13,0);
          uStack_150 = uVar8;
          uStack_14c = uVar9;
          (**(code **)(lVar14 + 0x40))(puVar18,uVar1,0,0,0,0,uVar17,uVar2);
          if (*(long *)(lStack_130 + 8) == 0) {
            puVar12 = (undefined8 *)(*(long *)(lStack_130 + 0x10) + 0x30);
          }
          else {
            puVar12 = (undefined8 *)(*(long *)(lStack_130 + 8) + 0x38);
          }
          uVar21 = puVar12[1];
          uVar20 = *puVar12;
          uVar25 = puVar12[3];
          uVar24 = puVar12[2];
          *(undefined4 *)(puStack_138 + 10) = *(undefined4 *)(puVar12 + 4);
          puStack_138[7] = uVar21;
          puStack_138[6] = uVar20;
          puStack_138[9] = uVar25;
          puStack_138[8] = uVar24;
          return puVar18;
        }
      }
    }
  }
  FUN_10a0edfc4(&puStack_b0);
LAB_10a099670:
  FUN_10a0edfc4(&puStack_b0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a09967c);
  (*pcVar5)();
}



/* Entry: 10a098b0c; end: 10a098ba7;  */

void FUN_10a098b0c(long param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 auStack_128 [4];
  undefined *puStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  float fStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined *puStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint uStack_88;
  
  if (param_2 == 0) {
    return;
  }
  if (*(long *)(param_2 + 8) == 0) {
    puVar16 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
  }
  else {
    puVar16 = (undefined8 *)(*(long *)(param_2 + 8) + 8);
  }
  plVar18 = (long *)*puVar16;
  plVar19 = plVar18;
  (**(code **)(*plVar18 + 0x28))();
  uVar7 = (uint)plVar19;
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  (**(code **)(*plVar18 + 0x30))();
  uVar8 = (uint)plVar18;
  if (uVar8 < 2) {
    uVar8 = 1;
  }
  if (param_2 == 0) {
    return;
  }
  if (*(long *)(param_2 + 8) == 0) {
    plVar19 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
  }
  else {
    plVar19 = (long *)(*(long *)(param_2 + 8) + 8);
  }
  plVar19 = (long *)*plVar19;
  plVar18 = plVar19;
  (**(code **)(*plVar19 + 0x48))();
  plVar11 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar11 + 0x48))();
  puStack_b0 = &UNK_10f636a31;
  plStack_a8 = (long *)0x2f;
  if ((int)plVar18 == (int)plVar11) {
    lVar12 = 1;
    FUN_10a303694();
    if (*(char *)(lVar12 + 0x21d) != '\x01') {
      plVar18 = plVar19;
      (**(code **)(*plVar19 + 0x28))();
      uVar9 = (uint)plVar18;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      (**(code **)(*plVar19 + 0x30))();
      uVar10 = (uint)plVar19;
      if (uVar10 < 2) {
        uVar10 = 1;
      }
      fStack_bc = 0.0 / (float)(int)uVar9;
      fStack_b8 = 0.0 / (float)(int)uVar10;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b4 = 0x3f800000;
      fStack_d4 = (float)(int)uVar7 / (float)(int)uVar9 - fStack_bc;
      fStack_c4 = (float)(int)uVar8 / (float)(int)uVar10 - fStack_b8;
      uVar1 = 0;
      if (param_3 == 0) {
        uVar1 = 0x3f800000;
      }
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      puStack_108 = (undefined *)0x0;
      plStack_100 = (long *)0x0;
      if (*(char *)(param_1 + 8) != '\x01') {
        plVar18 = *(long **)(param_1 + 0x10);
        plVar19 = plVar18;
        (**(code **)(*plVar18 + 0x28))();
        (**(code **)(*plVar18 + 0x30))();
        uVar7 = (uint)plVar19;
        if (uVar7 < 2) {
          uVar7 = 1;
        }
        uVar8 = (uint)plVar18;
        if (uVar8 < 2) {
          uVar8 = 1;
        }
        auStack_128[0] = CONCAT44(uVar8,uVar7);
        FUN_10a3018c8();
        FUN_10a09d3bc(&puStack_b0);
        plVar19 = plStack_a8;
        puVar17 = puStack_b0;
        puStack_108 = puStack_b0;
        plStack_100 = plStack_a8;
        _glBindFramebuffer(0x8d40,*(undefined4 *)(puStack_b0 + 0x10));
        _glViewport(0,0,*(undefined4 *)(puVar17 + 8),*(undefined4 *)(puVar17 + 0xc));
        lVar12 = param_1;
        FUN_10a0988e0();
        *(int *)(puVar17 + 0x14) = (int)lVar12;
        *(undefined4 *)(puVar17 + 0x1c) = 0xde1;
        puVar17[0x30] = 0;
        _glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,lVar12,0);
LAB_10a09951c:
        FUN_10a0988c8(param_2);
        FUN_10ad4b940(0);
        FUN_10a3015e0(uVar1);
        if (*(char *)(param_1 + 8) == '\x01') {
          plStack_a8 = (long *)0x0;
          puStack_b0 = (undefined *)0x0;
          uStack_98 = 0;
          uStack_a0 = 0;
          FUN_10ab9b224(&uStack_f8,&puStack_b0);
          FUN_10ab9ce18(&puStack_b0);
        }
        else {
          func_0x00010a301a5c(puVar17,0x8d40);
          func_0x00010a301a24(puVar17,0x8d40);
        }
        if (*(long *)(param_2 + 8) == 0) {
          puVar16 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x30);
        }
        else {
          puVar16 = (undefined8 *)(*(long *)(param_2 + 8) + 0x38);
        }
        uVar21 = puVar16[1];
        uVar20 = *puVar16;
        uVar23 = puVar16[3];
        uVar22 = puVar16[2];
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(puVar16 + 4);
        *(undefined8 *)(param_1 + 0x38) = uVar21;
        *(undefined8 *)(param_1 + 0x30) = uVar20;
        *(undefined8 *)(param_1 + 0x48) = uVar23;
        *(undefined8 *)(param_1 + 0x40) = uVar22;
        lVar12 = *(long *)(param_1 + 0x10);
        if ((lVar12 != 0) &&
           (___dynamic_cast(lVar12,&PTR_DAT_110ba0e18,&PTR_DAT_110c71a18,0), lVar12 != 0)) {
          *(undefined1 *)(lVar12 + 0x160) = 1;
        }
        if (plVar19 != (long *)0x0) {
          plVar18 = plVar19 + 1;
          do {
            lVar12 = *plVar18;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar5) {
              *plVar18 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
          }
        }
        FUN_10ab9ce18(&uStack_f8);
        return;
      }
      ppuVar14 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      puVar17 = *ppuVar14;
      plVar18 = *(long **)(param_1 + 0x10);
      plVar19 = plVar18;
      (**(code **)(*plVar18 + 0x28))();
      (**(code **)(*plVar18 + 0x30))(plVar18);
      uVar7 = (uint)plVar19;
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      plVar19 = *(long **)(param_1 + 0x10);
      (**(code **)(*plVar19 + 0x28))(plVar19);
      (**(code **)(*plVar19 + 0x30))();
      lVar12 = *(long *)(puVar17 + 0x10);
      puStack_b0 = &UNK_10f635282;
      plStack_a8 = (long *)0x2b;
      if (lVar12 != 0) {
        FUN_10ab9c9b0(&puStack_b0,plVar18,0,0);
        uVar8 = (uint)plVar19;
        if (uVar8 < 2) {
          uVar8 = 1;
        }
        uVar15 = 0x8ca9;
        if (uStack_88 < 2) {
          uVar15 = 0x8d40;
        }
        FUN_10ab9cbe8(auStack_128,lVar12 + 0x50,uVar15,&puStack_b0,0,CONCAT44(uVar8,uVar7),0);
        FUN_10ab9b224(&uStack_f8,auStack_128);
        FUN_10ab9ce18(auStack_128);
        plVar19 = (long *)0x0;
        puVar17 = (undefined *)0x0;
        goto LAB_10a09951c;
      }
      goto LAB_10a099670;
    }
    ___dynamic_cast(plVar19,&PTR_DAT_110ba0e18,&PTR_DAT_110c545f0,0);
    puStack_b0 = &UNK_10f636a61;
    plStack_a8 = (long *)0xd;
    if (plVar19 != (long *)0x0) {
      lVar13 = *(long *)(param_1 + 0x10);
      if (lVar13 == 0) {
        puStack_b0 = &UNK_10f636a6f;
        plStack_a8 = (long *)0x13;
      }
      else {
        ___dynamic_cast(lVar13,&PTR_DAT_110ba0e18,&PTR_DAT_110c545f0,0);
        puStack_b0 = &UNK_10f636a6f;
        plStack_a8 = (long *)0x13;
        if (lVar13 != 0) {
          uVar1 = *(undefined4 *)((long)plVar19 + 0x5c);
          uVar15 = *(undefined4 *)((long)plVar19 + 0x7c);
          uVar2 = *(undefined4 *)(lVar13 + 0x5c);
          uVar3 = *(undefined4 *)(lVar13 + 0x7c);
          (**(code **)(*plVar19 + 0x48))();
          (**(code **)(lVar12 + 0x40))
                    (uVar1,uVar15,0,0,0,0,uVar2,uVar3,0,0,uVar7,uVar8,(int)plVar19);
          if (*(long *)(param_2 + 8) == 0) {
            puVar16 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x30);
          }
          else {
            puVar16 = (undefined8 *)(*(long *)(param_2 + 8) + 0x38);
          }
          uVar21 = puVar16[1];
          uVar20 = *puVar16;
          uVar23 = puVar16[3];
          uVar22 = puVar16[2];
          *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(puVar16 + 4);
          *(undefined8 *)(param_1 + 0x38) = uVar21;
          *(undefined8 *)(param_1 + 0x30) = uVar20;
          *(undefined8 *)(param_1 + 0x48) = uVar23;
          *(undefined8 *)(param_1 + 0x40) = uVar22;
          return;
        }
      }
    }
  }
  FUN_10a0edfc4(&puStack_b0);
LAB_10a099670:
  FUN_10a0edfc4(&puStack_b0);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a09967c);
  (*pcVar6)();
}



/* Entry: 10a098ba8; end: 10a098be7;  */

void FUN_10a098ba8(long *param_1,long *param_2)

{
  float *pfVar1;
  float *pfVar2;
  char cVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  bool bVar13;
  ulong uVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined *puVar20;
  float fVar21;
  uint auStack_1f0 [70];
  long *aplStack_d8 [4];
  undefined *puStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined4 uStack_84;
  undefined *puStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  uint uStack_58;
  
  plVar18 = param_2;
  FUN_10a097e5c();
  if ((int)plVar18 == 0) {
    lVar9 = *param_2;
    if (lVar9 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (*(long *)(lVar9 + 8) == 0) {
        lVar11 = *(long *)(lVar9 + 0x10) + 0x30;
      }
      else {
        lVar11 = *(long *)(lVar9 + 8) + 0x38;
      }
      bVar13 = false;
      uVar12 = 0;
      do {
        uVar14 = 0;
        pfVar15 = (float *)(lVar11 + uVar12 * 0xc);
        do {
          pfVar1 = pfVar15;
          if ((int)uVar14 == 1) {
            pfVar1 = pfVar15 + 1;
          }
          pfVar2 = pfVar15 + 2;
          if ((int)uVar14 != 2) {
            pfVar2 = pfVar1;
          }
          fVar21 = 1.0;
          if (uVar12 != uVar14) {
            fVar21 = 0.0;
          }
          if (1e-06 < ABS(*pfVar2 - fVar21)) {
            if (!bVar13) {
              puVar5 = (undefined8 *)0x113834ef0;
              FUN_10a1c5e98();
              uVar19 = *puVar5;
              plVar18 = param_2;
              FUN_10a09903c();
              lVar9 = *(long *)(*param_2 + 8);
              if (lVar9 == 0) {
                puVar5 = (undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
              }
              else {
                puVar5 = (undefined8 *)(lVar9 + 8);
              }
              plVar6 = (long *)*puVar5;
              (**(code **)(*plVar6 + 0x50))();
              uStack_84 = SUB84(plVar6,0);
              puStack_80 = (undefined *)CONCAT44(puStack_80._4_4_,(int)plVar18);
              uStack_a8 = CONCAT44(uStack_a8._4_4_,(int)((ulong)plVar18 >> 0x20));
              FUN_10a0a2760(param_1,aplStack_d8,&puStack_80,&uStack_a8,&uStack_84);
              uStack_a8 = 0;
              uStack_a0 = 0;
              uStack_90 = 0;
              uStack_98 = 0;
              puStack_b8 = (undefined *)0x0;
              plStack_b0 = (long *)0x0;
              if (((uint)uVar19 >> 0x14 & 1) == 0) {
                aplStack_d8[0] = plVar18;
                FUN_10a3018c8();
                FUN_10a09d3bc(&puStack_80);
                plVar18 = plStack_78;
                puVar20 = puStack_80;
                puStack_b8 = puStack_80;
                plStack_b0 = plStack_78;
                _glBindFramebuffer(0x8d40,*(undefined4 *)(puStack_80 + 0x10));
                _glViewport(0,0,*(undefined4 *)(puVar20 + 8),*(undefined4 *)(puVar20 + 0xc));
                lVar9 = *param_1;
                FUN_10a0988c8();
                *(int *)(puVar20 + 0x14) = (int)lVar9;
                *(undefined4 *)(puVar20 + 0x1c) = 0xde1;
                puVar20[0x30] = 0;
                _glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,lVar9,0);
              }
              else {
                ppuVar7 = &PTR___tlv_bootstrap_11340de10;
                (*(code *)PTR___tlv_bootstrap_11340de10)();
                lVar9 = *(long *)(*param_1 + 8);
                if (lVar9 == 0) {
                  puVar5 = (undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
                }
                else {
                  puVar5 = (undefined8 *)(lVar9 + 8);
                }
                puVar20 = *ppuVar7;
                plVar6 = (long *)*puVar5;
                plVar18 = plVar6;
                (**(code **)(*plVar6 + 0x28))();
                (**(code **)(*plVar6 + 0x30))(plVar6);
                uVar16 = (uint)plVar18;
                if (uVar16 < 2) {
                  uVar16 = 1;
                }
                lVar9 = *(long *)(*param_1 + 8);
                if (lVar9 == 0) {
                  puVar5 = (undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
                }
                else {
                  puVar5 = (undefined8 *)(lVar9 + 8);
                }
                plVar18 = (long *)*puVar5;
                (**(code **)(*plVar18 + 0x28))(plVar18);
                (**(code **)(*plVar18 + 0x30))();
                lVar9 = *(long *)(puVar20 + 0x10);
                puStack_80 = &UNK_10f635282;
                plStack_78 = (long *)0x2b;
                if (lVar9 == 0) {
                  FUN_10a0edfc4(&puStack_80);
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a098fd4);
                  (*pcVar4)();
                }
                FUN_10ab9c9b0(&puStack_80,plVar6,0,0);
                uVar17 = (uint)plVar18;
                if (uVar17 < 2) {
                  uVar17 = 1;
                }
                uVar8 = 0x8ca9;
                if (uStack_58 < 2) {
                  uVar8 = 0x8d40;
                }
                FUN_10ab9cbe8(aplStack_d8,lVar9 + 0x50,uVar8,&puStack_80,0,CONCAT44(uVar17,uVar16),0
                             );
                FUN_10ab9b224(&uStack_a8,aplStack_d8);
                FUN_10ab9ce18(aplStack_d8);
                plVar18 = (long *)0x0;
                puVar20 = (undefined *)0x0;
              }
              FUN_10a0988c8(*param_2);
              FUN_10ad4b940(0);
              FUN_10a3015e0();
              if (((uint)uVar19 >> 0x14 & 1) == 0) {
                func_0x00010a301a5c(puVar20,0x8d40);
                func_0x00010a301a24(puVar20,0x8d40);
              }
              else {
                plStack_78 = (long *)0x0;
                puStack_80 = (undefined *)0x0;
                uStack_68 = 0;
                uStack_70 = 0;
                FUN_10ab9b224(&uStack_a8,&puStack_80);
                FUN_10ab9ce18(&puStack_80);
              }
              FUN_10a098870(*param_1);
              if (plVar18 != (long *)0x0) {
                plVar6 = plVar18 + 1;
                do {
                  lVar9 = *plVar6;
                  cVar3 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                  if (bVar13) {
                    *plVar6 = lVar9 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar9 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
                }
              }
              FUN_10ab9ce18(&uStack_a8);
              return;
            }
            goto LAB_10a098cb0;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != 3);
        uVar14 = uVar12 + 1;
        bVar13 = 1 < uVar12;
        uVar12 = uVar14;
      } while (uVar14 != 3);
LAB_10a098cb0:
      lVar11 = param_2[1];
      *param_1 = lVar9;
      param_1[1] = lVar11;
      if (lVar11 != 0) {
        plVar18 = (long *)(lVar11 + 8);
        do {
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar13) {
            *plVar18 = *plVar18 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    return;
  }
  lVar9 = *param_2;
  if (lVar9 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (*(long *)(lVar9 + 8) == 0) {
      lVar11 = *(long *)(lVar9 + 0x10) + 0x30;
    }
    else {
      lVar11 = *(long *)(lVar9 + 8) + 0x38;
    }
    bVar13 = false;
    uVar12 = 0;
    do {
      uVar14 = 0;
      pfVar15 = (float *)(lVar11 + uVar12 * 0xc);
      do {
        pfVar1 = pfVar15;
        if ((int)uVar14 == 1) {
          pfVar1 = pfVar15 + 1;
        }
        pfVar2 = pfVar15 + 2;
        if ((int)uVar14 != 2) {
          pfVar2 = pfVar1;
        }
        fVar21 = 1.0;
        if (uVar12 != uVar14) {
          fVar21 = 0.0;
        }
        if (1e-06 < ABS(*pfVar2 - fVar21)) {
          if (!bVar13) {
            plVar18 = param_2;
            FUN_10a1540c0();
            lVar9 = *(long *)(*param_2 + 8);
            if (lVar9 == 0) {
              puVar5 = (undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
            }
            else {
              puVar5 = (undefined8 *)(lVar9 + 8);
            }
            (**(code **)(*(long *)*puVar5 + 0x50))();
            auStack_1f0[0] = (uint)plVar18;
            FUN_10a0a2760(param_1,&stack0xffffffffffffffbf,auStack_1f0,&stack0xffffffffffffffb4,
                          &stack0xffffffffffffffb8);
            lVar9 = *(long *)(*param_2 + 8);
            if (lVar9 == 0) {
              lVar9 = *(long *)(*param_2 + 0x10);
              puVar5 = (undefined8 *)(lVar9 + 0x10);
              lVar9 = lVar9 + 0x30;
            }
            else {
              puVar5 = (undefined8 *)(lVar9 + 8);
              lVar9 = lVar9 + 0x38;
            }
            lVar11 = *(long *)(*param_1 + 8);
            if (lVar11 == 0) {
              puVar10 = (undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
            }
            else {
              puVar10 = (undefined8 *)(lVar11 + 8);
            }
            auStack_1f0[0] = auStack_1f0[0] & 0xffffff00;
            uStack_58 = uStack_58 & 0xffffff00;
            func_0x00010a0e3a84(*puVar5,*puVar10,lVar9,auStack_1f0);
            FUN_10a09d158(auStack_1f0);
            FUN_10a098870(*param_1);
            return;
          }
          goto LAB_10a153f9c;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != 3);
      uVar14 = uVar12 + 1;
      bVar13 = 1 < uVar12;
      uVar12 = uVar14;
    } while (uVar14 != 3);
LAB_10a153f9c:
    lVar11 = param_2[1];
    *param_1 = lVar9;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      plVar18 = (long *)(lVar11 + 8);
      do {
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar13) {
          *plVar18 = *plVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  return;
}



/* Entry: 10a098be8; end: 10a099003;  */

void FUN_10a098be8(long *param_1,long *param_2)

{
  float *pfVar1;
  float *pfVar2;
  char cVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  ulong uVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined *puVar19;
  float fVar20;
  long *aplStack_d8 [4];
  undefined *puStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined4 uStack_84;
  undefined *puStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  uint uStack_58;
  
  lVar9 = *param_2;
  if (lVar9 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (*(long *)(lVar9 + 8) == 0) {
      lVar10 = *(long *)(lVar9 + 0x10) + 0x30;
    }
    else {
      lVar10 = *(long *)(lVar9 + 8) + 0x38;
    }
    bVar12 = false;
    uVar11 = 0;
    do {
      uVar13 = 0;
      pfVar14 = (float *)(lVar10 + uVar11 * 0xc);
      do {
        pfVar1 = pfVar14;
        if ((int)uVar13 == 1) {
          pfVar1 = pfVar14 + 1;
        }
        pfVar2 = pfVar14 + 2;
        if ((int)uVar13 != 2) {
          pfVar2 = pfVar1;
        }
        fVar20 = 1.0;
        if (uVar11 != uVar13) {
          fVar20 = 0.0;
        }
        if (1e-06 < ABS(*pfVar2 - fVar20)) {
          if (!bVar12) {
            puVar5 = (undefined8 *)0x113834ef0;
            FUN_10a1c5e98();
            uVar18 = *puVar5;
            plVar17 = param_2;
            FUN_10a09903c();
            lVar9 = *(long *)(*param_2 + 8);
            if (lVar9 == 0) {
              puVar5 = (undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
            }
            else {
              puVar5 = (undefined8 *)(lVar9 + 8);
            }
            plVar6 = (long *)*puVar5;
            (**(code **)(*plVar6 + 0x50))();
            uStack_84 = SUB84(plVar6,0);
            puStack_80 = (undefined *)CONCAT44(puStack_80._4_4_,(int)plVar17);
            uStack_a8 = CONCAT44(uStack_a8._4_4_,(int)((ulong)plVar17 >> 0x20));
            FUN_10a0a2760(param_1,aplStack_d8,&puStack_80,&uStack_a8,&uStack_84);
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_90 = 0;
            uStack_98 = 0;
            puStack_b8 = (undefined *)0x0;
            plStack_b0 = (long *)0x0;
            if (((uint)uVar18 >> 0x14 & 1) == 0) {
              aplStack_d8[0] = plVar17;
              FUN_10a3018c8();
              FUN_10a09d3bc(&puStack_80);
              plVar17 = plStack_78;
              puVar19 = puStack_80;
              puStack_b8 = puStack_80;
              plStack_b0 = plStack_78;
              _glBindFramebuffer(0x8d40,*(undefined4 *)(puStack_80 + 0x10));
              _glViewport(0,0,*(undefined4 *)(puVar19 + 8),*(undefined4 *)(puVar19 + 0xc));
              lVar9 = *param_1;
              FUN_10a0988c8();
              *(int *)(puVar19 + 0x14) = (int)lVar9;
              *(undefined4 *)(puVar19 + 0x1c) = 0xde1;
              puVar19[0x30] = 0;
              _glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,lVar9,0);
            }
            else {
              ppuVar7 = &PTR___tlv_bootstrap_11340de10;
              (*(code *)PTR___tlv_bootstrap_11340de10)();
              lVar9 = *(long *)(*param_1 + 8);
              if (lVar9 == 0) {
                puVar5 = (undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
              }
              else {
                puVar5 = (undefined8 *)(lVar9 + 8);
              }
              puVar19 = *ppuVar7;
              plVar6 = (long *)*puVar5;
              plVar17 = plVar6;
              (**(code **)(*plVar6 + 0x28))();
              (**(code **)(*plVar6 + 0x30))(plVar6);
              uVar15 = (uint)plVar17;
              if (uVar15 < 2) {
                uVar15 = 1;
              }
              lVar9 = *(long *)(*param_1 + 8);
              if (lVar9 == 0) {
                puVar5 = (undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
              }
              else {
                puVar5 = (undefined8 *)(lVar9 + 8);
              }
              plVar17 = (long *)*puVar5;
              (**(code **)(*plVar17 + 0x28))(plVar17);
              (**(code **)(*plVar17 + 0x30))();
              lVar9 = *(long *)(puVar19 + 0x10);
              puStack_80 = &UNK_10f635282;
              plStack_78 = (long *)0x2b;
              if (lVar9 == 0) {
                FUN_10a0edfc4(&puStack_80);
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10a098fd4);
                (*pcVar4)();
              }
              FUN_10ab9c9b0(&puStack_80,plVar6,0,0);
              uVar16 = (uint)plVar17;
              if (uVar16 < 2) {
                uVar16 = 1;
              }
              uVar8 = 0x8ca9;
              if (uStack_58 < 2) {
                uVar8 = 0x8d40;
              }
              FUN_10ab9cbe8(aplStack_d8,lVar9 + 0x50,uVar8,&puStack_80,0,CONCAT44(uVar16,uVar15),0);
              FUN_10ab9b224(&uStack_a8,aplStack_d8);
              FUN_10ab9ce18(aplStack_d8);
              plVar17 = (long *)0x0;
              puVar19 = (undefined *)0x0;
            }
            FUN_10a0988c8(*param_2);
            FUN_10ad4b940(0);
            FUN_10a3015e0();
            if (((uint)uVar18 >> 0x14 & 1) == 0) {
              func_0x00010a301a5c(puVar19,0x8d40);
              func_0x00010a301a24(puVar19,0x8d40);
            }
            else {
              plStack_78 = (long *)0x0;
              puStack_80 = (undefined *)0x0;
              uStack_68 = 0;
              uStack_70 = 0;
              FUN_10ab9b224(&uStack_a8,&puStack_80);
              FUN_10ab9ce18(&puStack_80);
            }
            FUN_10a098870(*param_1);
            if (plVar17 != (long *)0x0) {
              plVar6 = plVar17 + 1;
              do {
                lVar9 = *plVar6;
                cVar3 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar12) {
                  *plVar6 = lVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
              }
            }
            FUN_10ab9ce18(&uStack_a8);
            return;
          }
          goto LAB_10a098cb0;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != 3);
      uVar13 = uVar11 + 1;
      bVar12 = 1 < uVar11;
      uVar11 = uVar13;
    } while (uVar13 != 3);
LAB_10a098cb0:
    lVar10 = param_2[1];
    *param_1 = lVar9;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      plVar17 = (long *)(lVar10 + 8);
      do {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar12) {
          *plVar17 = *plVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  return;
}



/* Entry: 10a099004; end: 10a09903b;  */

undefined8 FUN_10a099004(long *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  float *pfVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  
  plVar2 = param_1;
  FUN_10a097e5c();
  if ((int)plVar2 != 0) {
    lVar5 = *(long *)(*param_1 + 8);
    if (lVar5 == 0) {
      puVar3 = (undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
    }
    else {
      puVar3 = (undefined8 *)(lVar5 + 8);
    }
    plVar7 = (long *)*puVar3;
    plVar2 = plVar7;
    (**(code **)(*plVar7 + 0x28))();
    (**(code **)(*plVar7 + 0x30))();
    lVar5 = *(long *)(*param_1 + 8);
    if (lVar5 == 0) {
      pfVar4 = (float *)(*(long *)(*param_1 + 0x10) + 0x30);
    }
    else {
      pfVar4 = (float *)(lVar5 + 0x38);
    }
    uVar1 = (uint)plVar7;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    uVar6 = (uint)plVar2;
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    fVar9 = (pfVar4[2] + pfVar4[1] * (float)(int)uVar1 + (float)(int)uVar6 * *pfVar4) -
            (pfVar4[2] + pfVar4[1] * 0.0 + *pfVar4 * 0.0);
    fVar8 = (pfVar4[5] + pfVar4[4] * (float)(int)uVar1 + (float)(int)uVar6 * pfVar4[3]) -
            (pfVar4[5] + pfVar4[4] * 0.0 + pfVar4[3] * 0.0);
    if (fVar9 < 0.0) {
      fVar9 = -fVar9;
    }
    if (fVar8 < 0.0) {
      fVar8 = -fVar8;
    }
    return CONCAT44((int)fVar8,(int)fVar9);
  }
  lVar5 = *(long *)(*param_1 + 8);
  if (lVar5 == 0) {
    puVar3 = (undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
  }
  else {
    puVar3 = (undefined8 *)(lVar5 + 8);
  }
  plVar7 = (long *)*puVar3;
  plVar2 = plVar7;
  (**(code **)(*plVar7 + 0x28))();
  (**(code **)(*plVar7 + 0x30))();
  lVar5 = *(long *)(*param_1 + 8);
  if (lVar5 == 0) {
    pfVar4 = (float *)(*(long *)(*param_1 + 0x10) + 0x30);
  }
  else {
    pfVar4 = (float *)(lVar5 + 0x38);
  }
  uVar1 = (uint)plVar7;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  uVar6 = (uint)plVar2;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  fVar9 = (pfVar4[2] + pfVar4[1] * (float)(int)uVar1 + (float)(int)uVar6 * *pfVar4) -
          (pfVar4[2] + pfVar4[1] * 0.0 + *pfVar4 * 0.0);
  fVar8 = (pfVar4[5] + pfVar4[4] * (float)(int)uVar1 + (float)(int)uVar6 * pfVar4[3]) -
          (pfVar4[5] + pfVar4[4] * 0.0 + pfVar4[3] * 0.0);
  if (fVar9 < 0.0) {
    fVar9 = -fVar9;
  }
  if (fVar8 < 0.0) {
    fVar8 = -fVar8;
  }
  return CONCAT44((int)fVar8,(int)fVar9);
}



/* Entry: 10a09903c; end: 10a099143;  */

undefined8 FUN_10a09903c(long *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  float *pfVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  
  lVar5 = *(long *)(*param_1 + 8);
  if (lVar5 == 0) {
    puVar3 = (undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
  }
  else {
    puVar3 = (undefined8 *)(lVar5 + 8);
  }
  plVar7 = (long *)*puVar3;
  plVar2 = plVar7;
  (**(code **)(*plVar7 + 0x28))();
  (**(code **)(*plVar7 + 0x30))();
  lVar5 = *(long *)(*param_1 + 8);
  if (lVar5 == 0) {
    pfVar4 = (float *)(*(long *)(*param_1 + 0x10) + 0x30);
  }
  else {
    pfVar4 = (float *)(lVar5 + 0x38);
  }
  uVar1 = (uint)plVar7;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  uVar6 = (uint)plVar2;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  fVar9 = (pfVar4[2] + pfVar4[1] * (float)(int)uVar1 + (float)(int)uVar6 * *pfVar4) -
          (pfVar4[2] + pfVar4[1] * 0.0 + *pfVar4 * 0.0);
  fVar8 = (pfVar4[5] + pfVar4[4] * (float)(int)uVar1 + (float)(int)uVar6 * pfVar4[3]) -
          (pfVar4[5] + pfVar4[4] * 0.0 + pfVar4[3] * 0.0);
  if (fVar9 < 0.0) {
    fVar9 = -fVar9;
  }
  if (fVar8 < 0.0) {
    fVar8 = -fVar8;
  }
  return CONCAT44((int)fVar8,(int)fVar9);
}



/* Entry: 10a099144; end: 10a0996a3;  */

void FUN_10a099144(long param_1,long param_2,int param_3,ulong param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined *puVar16;
  long *plVar17;
  int iVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 auStack_128 [4];
  undefined *puStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  float fStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined *puStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint uStack_88;
  
  if (param_2 == 0) {
    return;
  }
  if (*(long *)(param_2 + 8) == 0) {
    plVar19 = (long *)(*(long *)(param_2 + 0x10) + 0x10);
  }
  else {
    plVar19 = (long *)(*(long *)(param_2 + 8) + 8);
  }
  plVar19 = (long *)*plVar19;
  plVar17 = plVar19;
  (**(code **)(*plVar19 + 0x48))();
  plVar9 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar9 + 0x48))();
  puStack_b0 = &UNK_10f636a31;
  plStack_a8 = (long *)0x2f;
  if ((int)plVar17 == (int)plVar9) {
    lVar10 = 1;
    FUN_10a303694();
    iVar15 = (int)((ulong)param_5 >> 0x20);
    iVar18 = (int)(param_4 >> 0x20);
    if (*(char *)(lVar10 + 0x21d) != '\x01') {
      plVar17 = plVar19;
      (**(code **)(*plVar19 + 0x28))();
      uVar7 = (uint)plVar17;
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      (**(code **)(*plVar19 + 0x30))();
      uVar8 = (uint)plVar19;
      if (uVar8 < 2) {
        uVar8 = 1;
      }
      fStack_bc = (float)(int)param_4 / (float)(int)uVar7;
      fStack_b8 = (float)iVar18 / (float)(int)uVar8;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b4 = 0x3f800000;
      fStack_d4 = (float)(int)param_5 / (float)(int)uVar7 - fStack_bc;
      fStack_c4 = (float)iVar15 / (float)(int)uVar8 - fStack_b8;
      uVar1 = 0;
      if (param_3 == 0) {
        uVar1 = 0x3f800000;
      }
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      puStack_108 = (undefined *)0x0;
      plStack_100 = (long *)0x0;
      if (*(char *)(param_1 + 8) != '\x01') {
        plVar17 = *(long **)(param_1 + 0x10);
        plVar19 = plVar17;
        (**(code **)(*plVar17 + 0x28))();
        (**(code **)(*plVar17 + 0x30))();
        uVar7 = (uint)plVar19;
        if (uVar7 < 2) {
          uVar7 = 1;
        }
        uVar8 = (uint)plVar17;
        if (uVar8 < 2) {
          uVar8 = 1;
        }
        auStack_128[0] = CONCAT44(uVar8,uVar7);
        FUN_10a3018c8();
        FUN_10a09d3bc(&puStack_b0);
        plVar19 = plStack_a8;
        puVar16 = puStack_b0;
        puStack_108 = puStack_b0;
        plStack_100 = plStack_a8;
        _glBindFramebuffer(0x8d40,*(undefined4 *)(puStack_b0 + 0x10));
        _glViewport(0,0,*(undefined4 *)(puVar16 + 8),*(undefined4 *)(puVar16 + 0xc));
        lVar10 = param_1;
        FUN_10a0988e0();
        *(int *)(puVar16 + 0x14) = (int)lVar10;
        *(undefined4 *)(puVar16 + 0x1c) = 0xde1;
        puVar16[0x30] = 0;
        _glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,lVar10,0);
LAB_10a09951c:
        FUN_10a0988c8(param_2);
        FUN_10ad4b940(0);
        FUN_10a3015e0(uVar1);
        if (*(char *)(param_1 + 8) == '\x01') {
          plStack_a8 = (long *)0x0;
          puStack_b0 = (undefined *)0x0;
          uStack_98 = 0;
          uStack_a0 = 0;
          FUN_10ab9b224(&uStack_f8,&puStack_b0);
          FUN_10ab9ce18(&puStack_b0);
        }
        else {
          func_0x00010a301a5c(puVar16,0x8d40);
          func_0x00010a301a24(puVar16,0x8d40);
        }
        if (*(long *)(param_2 + 8) == 0) {
          puVar14 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x30);
        }
        else {
          puVar14 = (undefined8 *)(*(long *)(param_2 + 8) + 0x38);
        }
        uVar21 = puVar14[1];
        uVar20 = *puVar14;
        uVar23 = puVar14[3];
        uVar22 = puVar14[2];
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(puVar14 + 4);
        *(undefined8 *)(param_1 + 0x38) = uVar21;
        *(undefined8 *)(param_1 + 0x30) = uVar20;
        *(undefined8 *)(param_1 + 0x48) = uVar23;
        *(undefined8 *)(param_1 + 0x40) = uVar22;
        lVar10 = *(long *)(param_1 + 0x10);
        if ((lVar10 != 0) &&
           (___dynamic_cast(lVar10,&PTR_DAT_110ba0e18,&PTR_DAT_110c71a18,0), lVar10 != 0)) {
          *(undefined1 *)(lVar10 + 0x160) = 1;
        }
        if (plVar19 != (long *)0x0) {
          plVar17 = plVar19 + 1;
          do {
            lVar10 = *plVar17;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar5) {
              *plVar17 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
          }
        }
        FUN_10ab9ce18(&uStack_f8);
        return;
      }
      ppuVar12 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      puVar16 = *ppuVar12;
      plVar17 = *(long **)(param_1 + 0x10);
      plVar19 = plVar17;
      (**(code **)(*plVar17 + 0x28))();
      (**(code **)(*plVar17 + 0x30))(plVar17);
      uVar7 = (uint)plVar19;
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      plVar19 = *(long **)(param_1 + 0x10);
      (**(code **)(*plVar19 + 0x28))(plVar19);
      (**(code **)(*plVar19 + 0x30))();
      lVar10 = *(long *)(puVar16 + 0x10);
      puStack_b0 = &UNK_10f635282;
      plStack_a8 = (long *)0x2b;
      if (lVar10 != 0) {
        FUN_10ab9c9b0(&puStack_b0,plVar17,0,0);
        uVar8 = (uint)plVar19;
        if (uVar8 < 2) {
          uVar8 = 1;
        }
        uVar13 = 0x8ca9;
        if (uStack_88 < 2) {
          uVar13 = 0x8d40;
        }
        FUN_10ab9cbe8(auStack_128,lVar10 + 0x50,uVar13,&puStack_b0,0,CONCAT44(uVar8,uVar7),0);
        FUN_10ab9b224(&uStack_f8,auStack_128);
        FUN_10ab9ce18(auStack_128);
        plVar19 = (long *)0x0;
        puVar16 = (undefined *)0x0;
        goto LAB_10a09951c;
      }
      goto LAB_10a099670;
    }
    ___dynamic_cast(plVar19,&PTR_DAT_110ba0e18,&PTR_DAT_110c545f0,0);
    puStack_b0 = &UNK_10f636a61;
    plStack_a8 = (long *)0xd;
    if (plVar19 != (long *)0x0) {
      lVar11 = *(long *)(param_1 + 0x10);
      if (lVar11 == 0) {
        puStack_b0 = &UNK_10f636a6f;
        plStack_a8 = (long *)0x13;
      }
      else {
        ___dynamic_cast(lVar11,&PTR_DAT_110ba0e18,&PTR_DAT_110c545f0,0);
        puStack_b0 = &UNK_10f636a6f;
        plStack_a8 = (long *)0x13;
        if (lVar11 != 0) {
          uVar1 = *(undefined4 *)((long)plVar19 + 0x5c);
          uVar13 = *(undefined4 *)((long)plVar19 + 0x7c);
          uVar2 = *(undefined4 *)(lVar11 + 0x5c);
          uVar3 = *(undefined4 *)(lVar11 + 0x7c);
          (**(code **)(*plVar19 + 0x48))();
          (**(code **)(lVar10 + 0x40))
                    (uVar1,uVar13,0,param_4,param_4 >> 0x20,0,uVar2,uVar3,0,0,
                     (int)param_5 - (int)param_4,iVar15 - iVar18,(int)plVar19);
          if (*(long *)(param_2 + 8) == 0) {
            puVar14 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x30);
          }
          else {
            puVar14 = (undefined8 *)(*(long *)(param_2 + 8) + 0x38);
          }
          uVar21 = puVar14[1];
          uVar20 = *puVar14;
          uVar23 = puVar14[3];
          uVar22 = puVar14[2];
          *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(puVar14 + 4);
          *(undefined8 *)(param_1 + 0x38) = uVar21;
          *(undefined8 *)(param_1 + 0x30) = uVar20;
          *(undefined8 *)(param_1 + 0x48) = uVar23;
          *(undefined8 *)(param_1 + 0x40) = uVar22;
          return;
        }
      }
    }
  }
  FUN_10a0edfc4(&puStack_b0);
LAB_10a099670:
  FUN_10a0edfc4(&puStack_b0);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a09967c);
  (*pcVar6)();
}



/* Entry: 10a0996a4; end: 10a0996e3;  */

void FUN_10a0996a4(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint auStack_1e0 [102];
  undefined1 uStack_48;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_31;
  
  plVar1 = param_2;
  FUN_10a097e5c();
  if ((int)plVar1 != 0) {
    lVar2 = *param_2;
    if (lVar2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (*(long *)(lVar2 + 8) == 0) {
        puVar3 = (undefined8 *)(*(long *)(lVar2 + 0x10) + 0x10);
      }
      else {
        puVar3 = (undefined8 *)(*(long *)(lVar2 + 8) + 8);
      }
      plVar1 = (long *)*puVar3;
      (**(code **)(*plVar1 + 0x28))();
      auStack_1e0[0] = (uint)plVar1;
      lVar2 = *(long *)(*param_2 + 8);
      if (lVar2 == 0) {
        puVar3 = (undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
      }
      else {
        puVar3 = (undefined8 *)(lVar2 + 8);
      }
      plVar1 = (long *)*puVar3;
      (**(code **)(*plVar1 + 0x30))();
      uStack_38 = SUB84(plVar1,0);
      lVar2 = *(long *)(*param_2 + 8);
      if (lVar2 == 0) {
        puVar3 = (undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
      }
      else {
        puVar3 = (undefined8 *)(lVar2 + 8);
      }
      plVar1 = (long *)*puVar3;
      (**(code **)(*plVar1 + 0x50))();
      uStack_3c = SUB84(plVar1,0);
      FUN_10a0a2828(param_1,&uStack_31,auStack_1e0,&uStack_38,&uStack_3c);
      lVar2 = *(long *)(*param_1 + 8);
      if (lVar2 == 0) {
        puVar3 = (undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
      }
      else {
        puVar3 = (undefined8 *)(lVar2 + 8);
      }
      lVar2 = *(long *)(*param_2 + 8);
      if (lVar2 == 0) {
        puVar4 = (undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
      }
      else {
        puVar4 = (undefined8 *)(lVar2 + 8);
      }
      auStack_1e0[0] = auStack_1e0[0] & 0xffffff00;
      uStack_48 = 0;
      func_0x00010a0e3774(*puVar4,*puVar3,&UNK_10e499518,auStack_1e0);
      FUN_10a09d158(auStack_1e0);
      lVar2 = *(long *)(*param_2 + 8);
      if (lVar2 == 0) {
        lVar2 = *(long *)(*param_2 + 0x10) + 0x30;
      }
      else {
        lVar2 = lVar2 + 0x38;
      }
      FUN_10a0986a0(*param_1,lVar2);
    }
    return;
  }
  lVar2 = *param_2;
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (*(long *)(lVar2 + 8) == 0) {
      puVar3 = (undefined8 *)(*(long *)(lVar2 + 0x10) + 0x10);
    }
    else {
      puVar3 = (undefined8 *)(*(long *)(lVar2 + 8) + 8);
    }
    (**(code **)(*(long *)*puVar3 + 0x28))();
    lVar2 = *(long *)(*param_2 + 8);
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
    }
    else {
      puVar3 = (undefined8 *)(lVar2 + 8);
    }
    (**(code **)(*(long *)*puVar3 + 0x30))();
    lVar2 = *(long *)(*param_2 + 8);
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
    }
    else {
      puVar3 = (undefined8 *)(lVar2 + 8);
    }
    (**(code **)(*(long *)*puVar3 + 0x50))();
    FUN_10a0a2828(param_1,&stack0xffffffffffffffdf,&stack0xffffffffffffffd8,&stack0xffffffffffffffd4
                  ,&stack0xffffffffffffffd0);
    FUN_10a098af4(*param_1,*param_2,1);
  }
  return;
}



/* Entry: 10a0996e4; end: 10a0997e3;  */

void FUN_10a0996e4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_21;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (*(long *)(lVar2 + 8) == 0) {
      puVar3 = (undefined8 *)(*(long *)(lVar2 + 0x10) + 0x10);
    }
    else {
      puVar3 = (undefined8 *)(*(long *)(lVar2 + 8) + 8);
    }
    plVar1 = (long *)*puVar3;
    (**(code **)(*plVar1 + 0x28))();
    uStack_28 = SUB84(plVar1,0);
    lVar2 = *(long *)(*param_2 + 8);
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
    }
    else {
      puVar3 = (undefined8 *)(lVar2 + 8);
    }
    plVar1 = (long *)*puVar3;
    (**(code **)(*plVar1 + 0x30))();
    uStack_2c = SUB84(plVar1,0);
    lVar2 = *(long *)(*param_2 + 8);
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
    }
    else {
      puVar3 = (undefined8 *)(lVar2 + 8);
    }
    plVar1 = (long *)*puVar3;
    (**(code **)(*plVar1 + 0x50))();
    uStack_30 = SUB84(plVar1,0);
    FUN_10a0a2828(param_1,&uStack_21,&uStack_28,&uStack_2c,&uStack_30);
    FUN_10a098af4(*param_1,*param_2,1);
  }
  return;
}



/* Entry: 10a0997e4; end: 10a099843;  */

void FUN_10a0997e4(long *param_1,long *param_2,int param_3,ulong param_4)

{
  long *plVar1;
  float *pfVar2;
  float *pfVar3;
  char cVar4;
  code *pcVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  ulong uVar13;
  float *pfVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  float fVar20;
  long **applStack_380 [51];
  undefined1 uStack_1e8;
  undefined1 auStack_1e0 [8];
  long *aplStack_1d8 [32];
  long *aplStack_d8 [4];
  undefined *puStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined1 uStack_90;
  long *plStack_88;
  undefined *puStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  uint uStack_58;
  
  plVar7 = param_2;
  FUN_10a097e5c();
  if ((int)plVar7 != 0) {
    plVar7 = (long *)*param_2;
    if (plVar7 == (long *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (plVar7[1] == 0) {
        lVar10 = plVar7[2] + 0x30;
      }
      else {
        lVar10 = plVar7[1] + 0x38;
      }
      bVar12 = false;
      uVar11 = 0;
      do {
        uVar13 = 0;
        pfVar14 = (float *)(lVar10 + uVar11 * 0xc);
        do {
          pfVar2 = pfVar14;
          if ((int)uVar13 == 1) {
            pfVar2 = pfVar14 + 1;
          }
          pfVar3 = pfVar14 + 2;
          if ((int)uVar13 != 2) {
            pfVar3 = pfVar2;
          }
          fVar20 = 1.0;
          if (uVar11 != uVar13) {
            fVar20 = 0.0;
          }
          if (1e-06 < ABS(*pfVar3 - fVar20)) {
            if (!bVar12) {
              FUN_10a1540c0();
              FUN_10a30f97c();
              FUN_10a30fb38(param_1);
              plVar7 = (long *)*param_1;
              (**(code **)(*plVar7 + 0x30))();
              FUN_10a0e3e64(auStack_1e0,plVar7[3]);
              puStack_b8 = (undefined *)CONCAT71(puStack_b8._1_7_,param_3 == 0);
              puVar8 = (undefined8 *)*param_2;
              FUN_10a098908();
              lVar10 = *(long *)(*param_2 + 8);
              if (lVar10 == 0) {
                lVar10 = *(long *)(*param_2 + 0x10) + 0x30;
              }
              else {
                lVar10 = lVar10 + 0x38;
              }
              uVar15 = *puVar8;
              lVar17 = *param_1;
              FUN_10a156fa0(applStack_380,auStack_1e0);
              uStack_1e8 = 1;
              func_0x00010a0e3828(uVar15,lVar17,lVar10,applStack_380);
              FUN_10a09d158(applStack_380);
              applStack_380[0] = &plStack_98;
              FUN_10a09d1bc(applStack_380);
              applStack_380[0] = &plStack_b0;
              FUN_10a09d284(applStack_380);
              applStack_380[0] = aplStack_1d8;
              func_0x00010a09d2f4(applStack_380);
              return;
            }
            goto LAB_10a154770;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != 3);
        uVar13 = uVar11 + 1;
        bVar12 = 1 < uVar11;
        uVar11 = uVar13;
      } while (uVar13 != 3);
LAB_10a154770:
      FUN_10a098908();
      lVar10 = plVar7[1];
      lVar17 = *plVar7;
      param_1[1] = plVar7[1];
      *param_1 = lVar17;
      if (lVar10 != 0) {
        plVar7 = (long *)(lVar10 + 8);
        do {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar12) {
            *plVar7 = *plVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    return;
  }
  lVar10 = *param_2;
  if (lVar10 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar17 = *(long *)(lVar10 + 8);
    if (lVar17 == 0) {
      lVar19 = *(long *)(lVar10 + 0x10) + 0x30;
    }
    else {
      lVar19 = lVar17 + 0x38;
    }
    bVar12 = false;
    uVar11 = 0;
    do {
      uVar13 = 0;
      pfVar14 = (float *)(lVar19 + uVar11 * 0xc);
      do {
        pfVar2 = pfVar14;
        if ((int)uVar13 == 1) {
          pfVar2 = pfVar14 + 1;
        }
        pfVar3 = pfVar14 + 2;
        if ((int)uVar13 != 2) {
          pfVar3 = pfVar2;
        }
        fVar20 = 1.0;
        if (uVar11 != uVar13) {
          fVar20 = 0.0;
        }
        if (1e-06 < ABS(*pfVar3 - fVar20)) {
          bVar12 = (bool)(bVar12 ^ 1);
          goto LAB_10a099918;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != 3);
      uVar13 = uVar11 + 1;
      bVar12 = 1 < uVar11;
      uVar11 = uVar13;
    } while (uVar13 != 3);
    bVar12 = false;
LAB_10a099918:
    if (((param_4 & 1) == 0) && (!bVar12)) {
      if (lVar17 == 0) {
        plVar7 = (long *)(*(long *)(lVar10 + 0x10) + 0x10);
      }
      else {
        plVar7 = (long *)(lVar17 + 8);
      }
      lVar10 = *plVar7;
      if ((lVar10 != 0) &&
         (___dynamic_cast(lVar10,&PTR_DAT_110ba0e18,&PTR_DAT_110c545b8,0), lVar10 != 0)) {
        lVar17 = *(long *)(lVar10 + 0xb0);
        lVar19 = *(long *)(lVar10 + 0xa8);
        param_1[1] = *(long *)(lVar10 + 0xb0);
        *param_1 = lVar19;
        if (lVar17 == 0) {
          return;
        }
        plVar7 = (long *)(lVar17 + 8);
        do {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar12) {
            *plVar7 = *plVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        return;
      }
    }
    puVar8 = (undefined8 *)0x113834ef0;
    FUN_10a1c5e98();
    uVar15 = *puVar8;
    plVar7 = param_2;
    FUN_10a09903c();
    plStack_88 = plVar7;
    FUN_10a30f97c();
    FUN_10a30fb38(param_1);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_90 = 0;
    plStack_98 = (long *)0x0;
    puStack_b8 = (undefined *)0x0;
    plStack_b0 = (long *)0x0;
    if (((uint)uVar15 >> 0x14 & 1) == 0) {
      aplStack_d8[0] = plStack_88;
      FUN_10a3018c8();
      FUN_10a09d3bc(&puStack_80);
      plVar7 = plStack_78;
      puVar18 = puStack_80;
      puStack_b8 = puStack_80;
      plStack_b0 = plStack_78;
      _glBindFramebuffer(0x8d40,*(undefined4 *)(puStack_80 + 0x10));
      _glViewport(0,0,*(undefined4 *)(puVar18 + 8),*(undefined4 *)(puVar18 + 0xc));
      param_1 = (long *)*param_1;
      *(long **)(puVar18 + 0x28) = param_1;
      *(undefined4 *)(puVar18 + 0x1c) = 0xde1;
      puVar18[0x30] = 1;
      (**(code **)(*param_1 + 0x48))();
      _glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,param_1,0);
    }
    else {
      ppuVar6 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      uVar16 = *(undefined8 *)(*param_1 + 0x18);
      lVar10 = *(long *)(*ppuVar6 + 0x10);
      puStack_80 = &UNK_10f635282;
      plStack_78 = (long *)0x2b;
      if (lVar10 == 0) {
        FUN_10a0edfc4(&puStack_80);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a099bd4);
        (*pcVar5)();
      }
      func_0x00010ab9ca70(&puStack_80,*param_1,0);
      uVar9 = 0x8ca9;
      if (uStack_58 < 2) {
        uVar9 = 0x8d40;
      }
      FUN_10ab9cbe8(aplStack_d8,lVar10 + 0x50,uVar9,&puStack_80,0,uVar16,0);
      FUN_10ab9b224(&uStack_a8,aplStack_d8);
      FUN_10ab9ce18(aplStack_d8);
      plVar7 = (long *)0x0;
      puVar18 = (undefined *)0x0;
    }
    FUN_10a0988c8(*param_2);
    FUN_10ad4b940(0);
    uVar9 = 0;
    if (param_3 != 0) {
      uVar9 = 0x3f800000;
    }
    FUN_10a3015e0(uVar9);
    if (((uint)uVar15 >> 0x14 & 1) == 0) {
      func_0x00010a301a5c(puVar18,0x8d40);
      func_0x00010a301a24(puVar18,0x8d40);
    }
    else {
      plStack_78 = (long *)0x0;
      puStack_80 = (undefined *)0x0;
      uStack_68 = 0;
      uStack_70 = 0;
      FUN_10ab9b224(&uStack_a8,&puStack_80);
      FUN_10ab9ce18(&puStack_80);
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar10 = *plVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    FUN_10ab9ce18(&uStack_a8);
  }
  return;
}



/* Entry: 10a099844; end: 10a099c03;  */

void FUN_10a099844(long *param_1,long *param_2,int param_3,ulong param_4)

{
  bool bVar1;
  long *plVar2;
  float *pfVar3;
  float *pfVar4;
  char cVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  float fVar20;
  long *aplStack_d8 [4];
  undefined *puStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  long *plStack_88;
  undefined *puStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  uint uStack_58;
  
  lVar10 = *param_2;
  if (lVar10 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar11 = *(long *)(lVar10 + 8);
    if (lVar11 == 0) {
      lVar19 = *(long *)(lVar10 + 0x10) + 0x30;
    }
    else {
      lVar19 = lVar11 + 0x38;
    }
    bVar1 = false;
    uVar12 = 0;
    do {
      uVar13 = 0;
      pfVar14 = (float *)(lVar19 + uVar12 * 0xc);
      do {
        pfVar3 = pfVar14;
        if ((int)uVar13 == 1) {
          pfVar3 = pfVar14 + 1;
        }
        pfVar4 = pfVar14 + 2;
        if ((int)uVar13 != 2) {
          pfVar4 = pfVar3;
        }
        fVar20 = 1.0;
        if (uVar12 != uVar13) {
          fVar20 = 0.0;
        }
        if (1e-06 < ABS(*pfVar4 - fVar20)) {
          bVar1 = (bool)(bVar1 ^ 1);
          goto LAB_10a099918;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != 3);
      uVar13 = uVar12 + 1;
      bVar1 = 1 < uVar12;
      uVar12 = uVar13;
    } while (uVar13 != 3);
    bVar1 = false;
LAB_10a099918:
    if (((param_4 & 1) == 0) && (!bVar1)) {
      if (lVar11 == 0) {
        plVar16 = (long *)(*(long *)(lVar10 + 0x10) + 0x10);
      }
      else {
        plVar16 = (long *)(lVar11 + 8);
      }
      lVar10 = *plVar16;
      if ((lVar10 != 0) &&
         (___dynamic_cast(lVar10,&PTR_DAT_110ba0e18,&PTR_DAT_110c545b8,0), lVar10 != 0)) {
        lVar11 = *(long *)(lVar10 + 0xb0);
        lVar19 = *(long *)(lVar10 + 0xa8);
        param_1[1] = *(long *)(lVar10 + 0xb0);
        *param_1 = lVar19;
        if (lVar11 == 0) {
          return;
        }
        plVar16 = (long *)(lVar11 + 8);
        do {
          cVar5 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar1) {
            *plVar16 = *plVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        return;
      }
    }
    puVar7 = (undefined8 *)0x113834ef0;
    FUN_10a1c5e98();
    uVar18 = *puVar7;
    plVar16 = param_2;
    FUN_10a09903c();
    plStack_88 = plVar16;
    FUN_10a30f97c();
    FUN_10a30fb38(param_1);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    puStack_b8 = (undefined *)0x0;
    plStack_b0 = (long *)0x0;
    if (((uint)uVar18 >> 0x14 & 1) == 0) {
      aplStack_d8[0] = plStack_88;
      FUN_10a3018c8();
      FUN_10a09d3bc(&puStack_80);
      plVar16 = plStack_78;
      puVar17 = puStack_80;
      puStack_b8 = puStack_80;
      plStack_b0 = plStack_78;
      _glBindFramebuffer(0x8d40,*(undefined4 *)(puStack_80 + 0x10));
      _glViewport(0,0,*(undefined4 *)(puVar17 + 8),*(undefined4 *)(puVar17 + 0xc));
      param_1 = (long *)*param_1;
      *(long **)(puVar17 + 0x28) = param_1;
      *(undefined4 *)(puVar17 + 0x1c) = 0xde1;
      puVar17[0x30] = 1;
      (**(code **)(*param_1 + 0x48))();
      _glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,param_1,0);
    }
    else {
      ppuVar8 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      uVar15 = *(undefined8 *)(*param_1 + 0x18);
      lVar10 = *(long *)(*ppuVar8 + 0x10);
      puStack_80 = &UNK_10f635282;
      plStack_78 = (long *)0x2b;
      if (lVar10 == 0) {
        FUN_10a0edfc4(&puStack_80);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a099bd4);
        (*pcVar6)();
      }
      func_0x00010ab9ca70(&puStack_80,*param_1,0);
      uVar9 = 0x8ca9;
      if (uStack_58 < 2) {
        uVar9 = 0x8d40;
      }
      FUN_10ab9cbe8(aplStack_d8,lVar10 + 0x50,uVar9,&puStack_80,0,uVar15,0);
      FUN_10ab9b224(&uStack_a8,aplStack_d8);
      FUN_10ab9ce18(aplStack_d8);
      plVar16 = (long *)0x0;
      puVar17 = (undefined *)0x0;
    }
    FUN_10a0988c8(*param_2);
    FUN_10ad4b940(0);
    uVar9 = 0;
    if (param_3 != 0) {
      uVar9 = 0x3f800000;
    }
    FUN_10a3015e0(uVar9);
    if (((uint)uVar18 >> 0x14 & 1) == 0) {
      func_0x00010a301a5c(puVar17,0x8d40);
      func_0x00010a301a24(puVar17,0x8d40);
    }
    else {
      plStack_78 = (long *)0x0;
      puStack_80 = (undefined *)0x0;
      uStack_68 = 0;
      uStack_70 = 0;
      FUN_10ab9b224(&uStack_a8,&puStack_80);
      FUN_10ab9ce18(&puStack_80);
    }
    if (plVar16 != (long *)0x0) {
      plVar2 = plVar16 + 1;
      do {
        lVar10 = *plVar2;
        cVar5 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar1) {
          *plVar2 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    FUN_10ab9ce18(&uStack_a8);
  }
  return;
}



/* Entry: 10a099c04; end: 10a099d0f;  */

undefined8 *
FUN_10a099c04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  *param_1 = &PTR_FUN_110ba07b0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0x3f800000;
  param_1[9] = 0;
  param_1[8] = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  FUN_10a048e7c(auStack_40,param_2,param_3,param_4,param_5,param_6,param_7,2,0,param_8);
  FUN_10a00e5c4(param_1 + 2,auStack_40);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  puVar4 = (uint *)0x113834ef0;
  FUN_10a1c5e98();
  *(byte *)(param_1 + 1) = (byte)(*puVar4 >> 0x14) & 1;
  return param_1;
}



/* Entry: 10a099d10; end: 10a099d87;  */

undefined8 *
FUN_10a099d10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x23;
  
  puVar5 = param_1;
  FUN_10a3ca004();
  lVar7 = puVar5[8];
  if (lVar7 == 0) {
    FUN_10a3ca05c();
    lVar7 = puVar5[8];
  }
  uVar6 = *(undefined8 *)(lVar7 + 0x1e0);
  *param_1 = &PTR_FUN_110ba07b0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0x3f800000;
  param_1[9] = 0;
  param_1[8] = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  FUN_10a048e7c(&stack0xffffffffffffffc0,uVar6,0,param_2,param_3,1,param_4,2,0,param_5);
  FUN_10a00e5c4(param_1 + 2,&stack0xffffffffffffffc0);
  if (unaff_x23 != (long *)0x0) {
    plVar1 = unaff_x23 + 1;
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
      (**(code **)(*unaff_x23 + 0x10))(unaff_x23);
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x23);
    }
  }
  puVar4 = (uint *)0x113834ef0;
  FUN_10a1c5e98();
  *(byte *)(param_1 + 1) = (byte)(*puVar4 >> 0x14) & 1;
  return param_1;
}



/* Entry: 10a099d88; end: 10a099ec3;  */

void FUN_10a099d88(undefined8 *param_1)

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
  
  FUN_10a0a25e4(&uStack_30);
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
  return;
}



/* Entry: 10a099ec4; end: 10a099ed7;  */

void FUN_10a099ec4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a099ec8);
  (*pcVar1)();
}



/* Entry: 10a099ed8; end: 10a099eeb;  */

void FUN_10a099ed8(void)

{
  FUN_10a0a28f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a099eec; end: 10a099f6b;  */

undefined8 * FUN_10a099eec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba07b0;
  func_0x00010a09db0c(param_1 + 4);
  func_0x00010a0523dc(param_1 + 2);
  return param_1;
}



/* Entry: 10a099f6c; end: 10a09a0e3;  */

long *** FUN_10a099f6c(undefined8 *param_1,long ***param_2)

{
  undefined1 uVar1;
  char cVar2;
  long ***ppplVar3;
  long **pplVar4;
  long **pplStack_68;
  long *plStack_60;
  char cStack_51;
  undefined1 uStack_49;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar2 = *(char *)((long)param_2 + 0x17);
  if (cVar2 < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
    cVar2 = *(char *)((long)param_2 + 0x17);
    if (cVar2 < '\0') {
      pplStack_68 = *param_2;
      plStack_60 = (long *)param_2[1];
      goto LAB_10a099fd0;
    }
  }
  else {
    pplVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = pplVar4;
    param_1[2] = param_2[2];
  }
  plStack_60 = (long *)(long)(int)cVar2;
  pplStack_68 = (long **)param_2;
LAB_10a099fd0:
  ppplVar3 = &pplStack_68;
  FUN_10a0423ac(ppplVar3,0,2,&UNK_10f636a83,2);
  if ((int)ppplVar3 == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (&pplStack_68,param_2,2,0xffffffffffffffff,&uStack_49);
    ppplVar3 = &pplStack_68;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(ppplVar3,0,"/",1);
    pplVar4 = *ppplVar3;
    uStack_48 = SUB87(ppplVar3[1],0);
    uStack_41 = (undefined1)*(undefined8 *)((long)ppplVar3 + 0xf);
    uStack_40 = (undefined7)((ulong)*(undefined8 *)((long)ppplVar3 + 0xf) >> 8);
    uVar1 = *(undefined1 *)((long)ppplVar3 + 0x17);
    ppplVar3[1] = (long **)0x0;
    ppplVar3[2] = (long **)0x0;
    *ppplVar3 = (long **)0x0;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      ppplVar3 = (long ***)*param_1;
      __ZdlPv();
    }
    *param_1 = pplVar4;
    param_1[1] = CONCAT17(uStack_41,uStack_48);
    *(ulong *)((long)param_1 + 0xf) = CONCAT71(uStack_40,uStack_41);
    *(undefined1 *)((long)param_1 + 0x17) = uVar1;
    if (cStack_51 < '\0') {
      ppplVar3 = (long ***)pplStack_68;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppplVar3;
  }
  ___stack_chk_fail();
  if (cStack_51 < '\0') {
    __ZdlPv(pplStack_68);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  __Unwind_Resume();
  pplVar4 = *ppplVar3;
  *ppplVar3 = (long **)0x0;
  if (pplVar4 != (long **)0x0) {
    (*(code *)ppplVar3[1])();
  }
  (*(code *)*ppplVar3[2])();
  return ppplVar3;
}



/* Entry: 10a09a0e4; end: 10a09a12f;  */

long * FUN_10a09a0e4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 10a09a130; end: 10a09a1d7;  */

long FUN_10a09a130(long param_1)

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



/* Entry: 10a09a1d8; end: 10a09a1f7;  */

void FUN_10a09a1d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10a09a1f8; end: 10a09a4c3;  */

void FUN_10a09a1f8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *unaff_x20;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined **unaff_x23;
  long lVar8;
  long *plStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1c9;
  undefined *puStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  char cStack_121;
  undefined8 *apuStack_118 [8];
  undefined8 *apuStack_d8 [7];
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)**(undefined8 **)*param_1;
  ppuVar7 = (undefined **)*puVar6;
  if (ppuVar7 == (undefined **)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else if (*(int *)((long)ppuVar7 + 0x734) == 1) {
    lVar8 = puVar6[1];
    puVar3 = (undefined8 *)0xf8;
    __Znwm();
    *puVar3 = &PTR_DAT_110b9ff30;
    unaff_x20 = puVar3 + 1;
    *unaff_x20 = ppuVar7;
    puVar3[2] = lVar8;
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
    puVar4 = puVar3;
    FUN_109d1ba5c();
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_178 = 0;
    ppuVar7 = &puStack_188;
    puStack_188 = &UNK_1053a6a3c;
    ppuStack_180 = &PTR_DAT_110ae9180;
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    unaff_x23 = &puStack_1c8;
    puStack_1c8 = &UNK_1053a6a3c;
    ppuStack_1c0 = &PTR_DAT_110ae9180;
    FUN_109d1b72c(auStack_148,&UNK_10f636be0,0xd,*(undefined4 *)((long)puVar4 + 0x14),&puStack_188,
                  &puStack_1c8,0);
    uStack_1d8 = 0x68e0f066500;
    uStack_1e8 = 1;
    uStack_1e0 = 1;
    FUN_109d1d1f0(&uStack_200,&uStack_1c9,auStack_148,&uStack_1e0,&uStack_1e8,&uStack_1d8);
    uStack_a0 = uStack_200;
    puStack_98 = &UNK_109896774;
    ppuStack_90 = &PTR_DAT_110b17068;
    uStack_80 = uStack_1f8;
    uStack_88 = uStack_200;
    func_0x000109d18d1c(puVar3 + 3,&UNK_10f636be0,0xd,&uStack_a0);
    func_0x0001092ba41c(&uStack_a0);
    (*(code *)*apuStack_d8[0])(apuStack_d8);
    (*(code *)*apuStack_118[0])(apuStack_118);
    if (cStack_121 < '\0') {
      __ZdlPv(uStack_138);
    }
    (*(code *)*ppuStack_1c0)(&ppuStack_1c0);
    (*(code *)*ppuStack_180)(&ppuStack_180);
    *(undefined4 *)(puVar3 + 0x1a) = 0;
    puVar3[0x1c] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x1e] = 0;
    puVar3[0x1d] = 0;
  }
  else {
    puVar3 = (undefined8 *)0x8;
    __Znwm();
    *puVar3 = &PTR_DAT_110ba0b80;
  }
  plVar5 = (long *)puVar6[5];
  puVar6[5] = puVar3;
  if (plVar5 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010a09a428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 8))();
    return;
  }
  ___stack_chk_fail();
  FUN_109d1c850(auStack_148);
  (*(code *)*ppuStack_1c0)(unaff_x23 + 1);
  (*(code *)*ppuStack_180)(ppuVar7 + 1);
  func_0x00010a09dbbc(unaff_x20);
  __ZdlPv(puVar3);
  __Unwind_Resume(plVar5);
  func_0x000104bd46a0();
  if ((char)plVar5[0x15] == '\x01') {
    pcStack_208 = FUN_10a09a4c4;
    puStack_220 = unaff_x20;
    puStack_218 = puVar3;
    puStack_210 = &stack0xfffffffffffffff0;
    FUN_10a09a130(plVar5 + 0x12);
    func_0x00010a09dab4(plVar5 + 0xf);
    func_0x00010a054cfc(plVar5 + 0xd);
    FUN_10a043fd8(plVar5 + 0xb);
    if (plVar5[9] != 0) {
      __ZdlPv(plVar5[7] + -8);
    }
    plStack_228 = plVar5 + 4;
    FUN_10a09cf7c(&plStack_228);
    plStack_228 = plVar5;
    func_0x00010a09d0e8(&plStack_228);
    *(undefined1 *)(plVar5 + 0x15) = 0;
  }
  return;
}



/* Entry: 10a09a4c4; end: 10a09a5bf;  */

void FUN_10a09a4c4(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    FUN_10a09a130(param_1 + 0x90);
    func_0x00010a09dab4(param_1 + 0x78);
    func_0x00010a054cfc(param_1 + 0x68);
    FUN_10a043fd8(param_1 + 0x58);
    if (*(long *)(param_1 + 0x48) != 0) {
      __ZdlPv(*(long *)(param_1 + 0x38) + -8);
    }
    lStack_28 = param_1 + 0x20;
    FUN_10a09cf7c(&lStack_28);
    lStack_28 = param_1;
    func_0x00010a09d0e8(&lStack_28);
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  return;
}



/* Entry: 10a09a5c0; end: 10a09a73b;  */

long * FUN_10a09a5c0(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  puVar5 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  puVar4 = puVar5;
  if (puVar1 != puVar5) {
    uVar2 = param_1[4];
    plVar6 = puVar5 + uVar2 / 0x2e;
    lVar3 = *plVar6 + (uVar2 % 0x2e) * 0x58;
    lVar7 = puVar5[(param_1[5] + uVar2) / 0x2e] + ((param_1[5] + uVar2) % 0x2e) * 0x58;
    puVar4 = puVar1;
    if (lVar3 != lVar7) {
      do {
        FUN_10a09a73c(lVar3);
        lVar3 = lVar3 + 0x58;
        if (lVar3 - *plVar6 == 0xfd0) {
          plVar6 = plVar6 + 1;
          lVar3 = *plVar6;
        }
      } while (lVar3 != lVar7);
      puVar5 = (undefined8 *)param_1[1];
      puVar1 = (undefined8 *)param_1[2];
      puVar4 = puVar1;
    }
  }
  param_1[5] = 0;
  lVar3 = (long)puVar4 - (long)puVar5;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar5);
    puVar1 = (undefined8 *)param_1[2];
    puVar5 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar5;
    puVar4 = puVar1;
    lVar3 = (long)puVar1 - (long)puVar5;
  }
  if (uVar2 == 1) {
    lVar3 = 0x17;
  }
  else {
    if (uVar2 != 2) goto LAB_10a09a6e0;
    lVar3 = 0x2e;
  }
  param_1[4] = lVar3;
LAB_10a09a6e0:
  if (puVar5 != puVar4) {
    do {
      puVar1 = puVar5 + 1;
      __ZdlPv(*puVar5);
      puVar5 = puVar1;
    } while (puVar1 != puVar4);
    puVar4 = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)param_1[2];
  }
  if (puVar1 != puVar4) {
    param_1[2] = (long)puVar1 + ((long)puVar4 + (7 - (long)puVar1) & 0xfffffffffffffff8U);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a09a73c; end: 10a09a78f;  */

void FUN_10a09a73c(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    __ZdlPv(*(long *)(param_1 + 0x38) + -8);
  }
  lStack_28 = param_1 + 0x20;
  FUN_10a09cf7c(&lStack_28);
  lStack_28 = param_1;
  func_0x00010a09d0e8(&lStack_28);
  return;
}



/* Entry: 10a09a790; end: 10a09a8fb;  */

long * FUN_10a09a790(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  puVar5 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  puVar4 = puVar5;
  if (puVar1 != puVar5) {
    uVar2 = param_1[4];
    plVar6 = puVar5 + uVar2 / 0x18;
    lVar3 = *plVar6 + (uVar2 % 0x18) * 0xa8;
    lVar7 = puVar5[(param_1[5] + uVar2) / 0x18] + ((param_1[5] + uVar2) % 0x18) * 0xa8;
    puVar4 = puVar1;
    if (lVar3 != lVar7) {
      do {
        FUN_10a09a8fc(lVar3);
        lVar3 = lVar3 + 0xa8;
        if (lVar3 - *plVar6 == 0xfc0) {
          plVar6 = plVar6 + 1;
          lVar3 = *plVar6;
        }
      } while (lVar3 != lVar7);
      puVar5 = (undefined8 *)param_1[1];
      puVar1 = (undefined8 *)param_1[2];
      puVar4 = puVar1;
    }
  }
  param_1[5] = 0;
  lVar3 = (long)puVar4 - (long)puVar5;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar5);
    puVar1 = (undefined8 *)param_1[2];
    puVar5 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar5;
    puVar4 = puVar1;
    lVar3 = (long)puVar1 - (long)puVar5;
  }
  if (uVar2 == 1) {
    lVar3 = 0xc;
  }
  else {
    if (uVar2 != 2) goto LAB_10a09a8a0;
    lVar3 = 0x18;
  }
  param_1[4] = lVar3;
LAB_10a09a8a0:
  if (puVar5 != puVar4) {
    do {
      puVar1 = puVar5 + 1;
      __ZdlPv(*puVar5);
      puVar5 = puVar1;
    } while (puVar1 != puVar4);
    puVar4 = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)param_1[2];
  }
  if (puVar1 != puVar4) {
    param_1[2] = (long)puVar1 + ((long)puVar4 + (7 - (long)puVar1) & 0xfffffffffffffff8U);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a09a8fc; end: 10a09ab7b;  */

void FUN_10a09a8fc(long param_1)

{
  long lStack_28;
  
  FUN_10a09a130(param_1 + 0x90);
  func_0x00010a09dab4(param_1 + 0x78);
  func_0x00010a054cfc(param_1 + 0x68);
  FUN_10a043fd8(param_1 + 0x58);
  if (*(long *)(param_1 + 0x48) != 0) {
    __ZdlPv(*(long *)(param_1 + 0x38) + -8);
  }
  lStack_28 = param_1 + 0x20;
  FUN_10a09cf7c(&lStack_28);
  lStack_28 = param_1;
  func_0x00010a09d0e8(&lStack_28);
  return;
}



/* Entry: 10a09ab7c; end: 10a09ab8b;  */

void FUN_10a09ab7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba0818;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a09ab8c; end: 10a09abab;  */

void FUN_10a09ab8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba0818;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a09abac; end: 10a09abb7;  */

void FUN_10a09abac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(param_1 + 0x18);
  return;
}



/* Entry: 10a09abb8; end: 10a09ac6b;  */

long * FUN_10a09abb8(long *param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = (undefined8 *)*param_1;
  puVar2 = puVar4;
  while (puVar4 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)puVar2[1];
    if ((undefined8 *)puVar2[3] != (undefined8 *)0x0) {
      *(undefined8 *)puVar2[3] = 0;
    }
    (**(code **)*puVar2)(puVar2);
    _free(puVar2);
    puVar2 = puVar4 + -1;
  }
  lVar3 = param_1[6];
  if (lVar3 != 0) {
    for (lVar5 = *(long *)(lVar3 + 0x10); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x10)) {
      _free(lVar3);
      lVar3 = lVar5;
    }
  }
  lVar3 = param_1[5];
  while (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + 0x338);
    pcVar1 = (char *)(lVar3 + 0x340);
    lVar3 = lVar5;
    if (*pcVar1 == '\x01') {
      _free();
    }
  }
  _free(param_1[3]);
  return param_1;
}



/* Entry: 10a09ac6c; end: 10a09adbf;  */

void FUN_10a09ac6c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x578;
        func_0x00010a09acc8();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a09adc0; end: 10a09ae0b;  */

/* WARNING: Removing unreachable block (ram,0x00010a09adec) */

void FUN_10a09adc0(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x20) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a09ae0c; end: 10a09ae4b;  */

void FUN_10a09ae0c(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a09ae4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a09ae4c; end: 10a09aef3;  */

/* WARNING: Removing unreachable block (ram,0x00010a09ae78) */

void FUN_10a09ae4c(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a09aef4; end: 10a09af37;  */

void FUN_10a09aef4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 3;
  FUN_10a09af38(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return;
}



/* Entry: 10a09af38; end: 10a09afa7;  */

void FUN_10a09af38(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x80;
        FUN_10a09afa8(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a09afa8; end: 10a09b053;  */

void FUN_10a09afa8(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x77) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x60));
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  lStack_28 = param_1 + 0x30;
  func_0x00010a09ba00(&lStack_28);
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  lStack_28 = param_1;
  func_0x00010a09ba00(&lStack_28);
  return;
}



/* Entry: 10a09b054; end: 10a09b0af;  */

void FUN_10a09b054(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
  }
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 10a09b0b0; end: 10a09b243;  */

/* WARNING: Removing unreachable block (ram,0x00010a09b284) */

long * FUN_10a09b0b0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  
  puVar9 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  lVar12 = (long)puVar10 - (long)puVar9;
  uVar5 = (lVar12 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar5) {
    FUN_10a09b244();
LAB_10a09b22c:
    func_0x000109ffded8();
    FUN_10a09b258(&puStack_78);
    __Unwind_Resume(param_1);
    plVar3 = (long *)&DAT_10f62a4d8;
    FUN_109ffde64();
    lVar12 = plVar3[2];
    while (lVar12 != plVar3[1]) {
      lVar12 = lVar12 + -0x18;
      plVar3[2] = lVar12;
    }
    if (*plVar3 != 0) {
      __ZdlPv();
    }
    return plVar3;
  }
  lVar7 = param_1[2] - (long)puVar9 >> 3;
  uVar8 = lVar7 * 0x5555555555555556;
  if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
    uVar8 = uVar5;
  }
  if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
    uVar8 = 0xaaaaaaaaaaaaaaa;
  }
  plStack_58 = param_1;
  if (uVar8 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar8) goto LAB_10a09b22c;
    puVar2 = (undefined8 *)(uVar8 * 0x18);
    __Znwm();
  }
  puVar1 = (undefined8 *)((long)puVar2 + lVar12);
  puVar11 = puVar2 + uVar8 * 3;
  puStack_78 = puVar2;
  puStack_70 = puVar1;
  puStack_68 = puVar1;
  puStack_60 = puVar11;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*param_2,param_2[1]);
    puVar9 = (undefined8 *)*param_1;
    puVar10 = (undefined8 *)param_1[1];
    lVar12 = (long)puVar10 - (long)puVar9;
  }
  else {
    uVar13 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar13;
    puVar1[2] = param_2[2];
  }
  puVar2 = puVar9;
  puVar6 = (undefined8 *)((long)puVar1 - lVar12);
  if (puVar9 != puVar10) {
    do {
      uVar14 = puVar2[1];
      uVar13 = *puVar2;
      puVar6[2] = puVar2[2];
      puVar6[1] = uVar14;
      *puVar6 = uVar13;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar4 = puVar2 + 3;
      *puVar2 = 0;
      puVar2 = puVar4;
      puVar6 = puVar6 + 3;
    } while (puVar4 != puVar10);
    do {
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        __ZdlPv(*puVar9);
      }
      puVar9 = puVar9 + 3;
    } while (puVar9 != puVar10);
    puVar9 = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar1 - lVar12;
  param_1[1] = (long)(puVar1 + 3);
  puStack_60 = (undefined8 *)param_1[2];
  param_1[2] = (long)puVar11;
  puStack_78 = puVar9;
  puStack_70 = puVar9;
  puStack_68 = puVar9;
  FUN_10a09b258(&puStack_78);
  return puVar1 + 3;
}



/* Entry: 10a09b244; end: 10a09b257;  */

/* WARNING: Removing unreachable block (ram,0x00010a09b284) */

long * FUN_10a09b244(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar2 = plVar1[2];
  while (lVar2 != plVar1[1]) {
    lVar2 = lVar2 + -0x18;
    plVar1[2] = lVar2;
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10a09b258; end: 10a09b2f7;  */

/* WARNING: Removing unreachable block (ram,0x00010a09b284) */

long * FUN_10a09b258(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x18;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a09b2f8; end: 10a09b343;  */

/* WARNING: Removing unreachable block (ram,0x00010a09b324) */

void FUN_10a09b2f8(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x18) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a09b344; end: 10a09b3e7;  */

void FUN_10a09b344(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  func_0x0001092af8bc();
  plVar4 = (long *)*param_1;
  *param_1 = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00010a09b3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 8))();
        return;
      }
    }
  }
  return;
}


