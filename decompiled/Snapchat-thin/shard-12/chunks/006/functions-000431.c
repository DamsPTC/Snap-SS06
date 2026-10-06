/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109447494; end: 1094474d7;  */

void FUN_109447494(undefined8 *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar3 = param_2;
  FUN_1094474d8();
  uVar2 = (uint)puVar3;
  if ((int)uVar2 < 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  uVar4 = *param_2;
  if ((long)uVar4 < 0) {
    if ((int)uVar2 < (int)uVar4) {
      puVar1 = (undefined8 *)(param_2[1] + (long)(int)uVar2 * 0x20);
      uVar5 = *puVar1;
      param_1[1] = puVar1[1];
      *param_1 = uVar5;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar1 + 2);
      return;
    }
  }
  else if ((uVar2 < 0xf) &&
          (uVar4 = uVar4 >> ((ulong)(uVar2 << 2) & 0x3f), *(uint *)(param_1 + 2) = (uint)uVar4 & 0xf
          , (uVar4 & 0xf) != 0)) {
    puVar1 = (undefined8 *)(param_2[1] + ((ulong)puVar3 & 0xffffffff) * 0x10);
    uVar5 = *puVar1;
    param_1[1] = puVar1[1];
    *param_1 = uVar5;
  }
  return;
}



/* Entry: 1094474d8; end: 109447587;  */

undefined4 FUN_1094474d8(ulong *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  
  if ((*param_1 >> 0x3e & 1) == 0) {
    return 0xffffffff;
  }
  lVar1 = -0x10;
  if (0x7fffffffffffffff < *param_1) {
    lVar1 = -0x20;
  }
  lVar5 = ((long *)(param_1[1] + lVar1))[1];
  if (lVar5 != 0) {
    puVar6 = (undefined4 *)(*(long *)(param_1[1] + lVar1) + 8);
    do {
      uVar4 = *(ulong *)(puVar6 + -2);
      uVar3 = uVar4;
      _strlen();
      uVar2 = uVar3;
      if (param_3 <= uVar3) {
        uVar2 = param_3;
      }
      _memcmp(uVar4,param_2,uVar2);
      if (uVar3 == param_3 && (int)uVar4 == 0) {
        return *puVar6;
      }
      puVar6 = puVar6 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return 0xffffffff;
}



/* Entry: 109447588; end: 1094475d3;  */

undefined8 *
FUN_109447588(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 5) = param_4;
  FUN_1094475d4();
  return param_1;
}



/* Entry: 1094475d4; end: 109447627;  */

void FUN_1094475d4(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 4);
  lVar3 = param_1;
  FUN_109447628();
  if (iVar2 * iVar1 != (int)lVar3) {
    FUN_109447690(param_1,(long)(int)lVar3);
    plVar4 = *(long **)(param_1 + 0x18);
    (**(code **)(*plVar4 + 0x10))();
    *(long **)(param_1 + 0x10) = plVar4;
  }
  return;
}



/* Entry: 109447628; end: 10944768f;  */

int FUN_109447628(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *param_2;
  *param_1 = uVar5;
  uVar4 = param_2[1];
  param_1[1] = uVar4;
  uVar1 = param_1[0xc];
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar4 / uVar1;
    }
    iVar2 = uVar4 - uVar3 * uVar1;
    if (iVar2 != 0) {
      uVar4 = (uVar1 + uVar4) - iVar2;
    }
  }
  if (param_3 != 0) {
    uVar5 = param_3;
  }
  uVar1 = param_1[0xb];
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar5 / uVar1;
    }
    iVar2 = uVar5 - uVar3 * uVar1;
    if (iVar2 != 0) {
      uVar5 = (uVar1 + uVar5) - iVar2;
    }
  }
  param_1[2] = uVar5;
  param_1[3] = uVar5 * 3;
  return uVar5 * 3 * uVar4;
}



/* Entry: 109447690; end: 109447907;  */

void FUN_109447690(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_50 [8];
  long *plStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  
  plVar6 = (long *)(param_1 + 0x18);
  plVar4 = (long *)*plVar6;
  plStack_40 = param_2;
  if ((plVar4 == (long *)0x0) || ((**(code **)(*plVar4 + 0x18))(), plVar4 != param_2)) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 3) {
      FUN_109444e00(auStack_50,&uStack_31,&plStack_40);
      func_0x000109444b44(plVar6,auStack_50);
      if (plStack_48 == (long *)0x0) {
        return;
      }
      plVar4 = plStack_48 + 1;
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_48;
      } while (cVar2 != '\0');
    }
    else {
      if (iVar1 == 2) {
        FUN_109444c0c(auStack_50,&uStack_31,&plStack_40);
        FUN_109444ae0(plVar6,auStack_50);
        if (plStack_48 != (long *)0x0) {
          plVar4 = plStack_48 + 1;
          do {
            lVar5 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
          }
        }
        *(undefined4 *)(param_1 + 0x28) = 1;
        return;
      }
      if (iVar1 == 1) {
        FUN_109444c0c(auStack_50,&uStack_31,&plStack_40);
        FUN_109444ae0(plVar6,auStack_50);
        if (plStack_48 == (long *)0x0) {
          return;
        }
        plVar4 = plStack_48 + 1;
        do {
          lVar5 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar6 = plStack_48;
        } while (cVar2 != '\0');
      }
      else {
        FUN_109444f68(auStack_50,&uStack_31,&plStack_40);
        func_0x000109444ba8(plVar6,auStack_50);
        if (plStack_48 == (long *)0x0) {
          return;
        }
        plVar4 = plStack_48 + 1;
        do {
          lVar5 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar6 = plStack_48;
        } while (cVar2 != '\0');
      }
    }
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 109447908; end: 109447ac3;  */

long FUN_109447908(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    lVar3 = *(long *)(param_1 + lVar4 + 0x2798);
    if (lVar3 != 0) {
      *(long *)(param_1 + lVar4 + 0x27a0) = lVar3;
      __ZdlPv();
    }
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != -0x30);
  lVar3 = param_1 + 0x2720;
  lVar4 = -0xc0;
  do {
    if (*(long *)(lVar3 + 0x40) != 0) {
      *(long *)(lVar3 + 0x48) = *(long *)(lVar3 + 0x40);
      __ZdlPv();
    }
    FUN_109447afc(lVar3 + 0x28);
    FUN_109447b70(lVar3);
    lVar3 = lVar3 + -0x60;
    lVar4 = lVar4 + 0x60;
  } while (lVar4 != 0);
  lVar4 = 0;
  lVar3 = 0x1360;
  do {
    lVar1 = param_1 + 0x26c0 + lVar4;
    func_0x0001093a5e88(lVar1 + -0x58);
    func_0x0001093a5e88(lVar1 + -0x80);
    func_0x0001093a5e88(lVar1 + -0xa8);
    lVar2 = param_1 + lVar4;
    _free(*(undefined8 *)(lVar2 + 0x25f8));
    *(undefined8 *)(lVar2 + 0x2600) = 0;
    *(undefined8 *)(lVar2 + 0x25f8) = 0;
    *(undefined8 *)(lVar2 + 0x2610) = 0;
    *(undefined8 *)(lVar2 + 0x2608) = 0;
    func_0x0001093a5ed0(lVar1 + -0x128);
    func_0x0001093a6118(param_1 + lVar3);
    lVar4 = lVar4 + -0x1360;
    lVar3 = lVar3 + -0x1360;
  } while (lVar4 != -0x26c0);
  return param_1;
}



/* Entry: 109447ac4; end: 109447afb;  */

long * FUN_109447ac4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1[8] != 0) {
    param_1[9] = param_1[8];
    __ZdlPv();
  }
  FUN_109447afc(param_1 + 5);
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109447afc; end: 109447b6f;  */

void FUN_109447afc(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar1 = plVar2 + -3;
      if (*plVar1 != 0) {
        plVar2[-2] = *plVar1;
        __ZdlPv();
      }
      plVar2 = plVar1;
    } while (plVar1 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 109447b70; end: 109447c1f;  */

long * FUN_109447b70(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109447c20; end: 109447ccf;  */

long FUN_109447c20(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  lVar2 = 0x290;
  do {
    lVar1 = param_1 + lVar2;
    _free(*(undefined8 *)(lVar1 + -0x20));
    *(undefined8 *)(lVar1 + -0x18) = 0;
    *(undefined8 *)(lVar1 + -0x20) = 0;
    *(undefined8 *)(lVar1 + -8) = 0;
    *(undefined8 *)(lVar1 + -0x10) = 0;
    func_0x0001093a5e88(lVar1 + -0x48);
    func_0x000109447d64(lVar1 + -0x70);
    if (*(long *)(lVar1 + -0x90) != 0) {
      *(long *)(lVar1 + -0x88) = *(long *)(lVar1 + -0x90);
      __ZdlPv();
    }
    if (*(long *)(lVar1 + -0xb8) != 0) {
      *(long *)(param_1 + lVar2 + -0xb0) = *(long *)(lVar1 + -0xb8);
      __ZdlPv();
    }
    lVar1 = param_1 + lVar2;
    lStack_38 = lVar1 + -0xd0;
    FUN_1093a5560(&lStack_38);
    func_0x0001093a5800(lVar1 + -0xf8);
    lStack_38 = lVar1 + -0x120;
    FUN_1093a4eb8(&lStack_38);
    lVar2 = lVar2 + -0x148;
  } while (lVar2 != 0);
  return param_1;
}



/* Entry: 109447cd0; end: 109447dab;  */

long FUN_109447cd0(long param_1)

{
  long lStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x128));
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  func_0x0001093a5e88(param_1 + 0x100);
  func_0x000109447d64(param_1 + 0xd8);
  if (*(long *)(param_1 + 0xb8) != 0) {
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xb8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x90);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x78;
  FUN_1093a5560(&lStack_28);
  func_0x0001093a5800(param_1 + 0x50);
  lStack_28 = param_1 + 0x28;
  FUN_1093a4eb8(&lStack_28);
  return param_1;
}



/* Entry: 109447dac; end: 109447e93;  */

void FUN_109447dac(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_38;
  
  lVar5 = *param_1;
  lVar6 = param_1[2];
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = (long)((float)param_2 * 0.9);
  lStack_38 = 0;
  plVar1 = &lStack_38;
  _posix_memalign(plVar1,8,param_2 * 0xc);
  lVar2 = lStack_38;
  if ((int)plVar1 != 0) {
    lVar2 = 0;
  }
  *param_1 = lVar2;
  if ((lVar2 != 0) && (param_1[2] != 0)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar4 = *param_1;
      uVar3 = uVar3 + 1;
      *(undefined4 *)((undefined8 *)(lVar4 + lVar2) + 1) = 0;
      *(undefined8 *)(lVar4 + lVar2) = 0;
      lVar2 = lVar2 + 0xc;
    } while (uVar3 < (ulong)param_1[2]);
  }
  if (lVar5 != 0) {
    if (lVar6 != 0) {
      lVar2 = lVar5 + 4;
      do {
        if (0 < *(int *)(lVar2 + -4)) {
          FUN_109447e94(param_1,lVar2);
        }
        lVar2 = lVar2 + 0xc;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    _free(lVar5);
  }
  return;
}



/* Entry: 109447e94; end: 109447faf;  */

void FUN_109447e94(long *param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  param_3 = param_3 & 0xffffffff;
  lVar8 = param_1[2];
  uVar6 = (int)lVar8 + 0x7fffffff & param_3;
  lVar11 = *param_1;
  puVar7 = (uint *)(lVar11 + uVar6 * 0xc);
  uVar1 = *puVar7;
  if (uVar1 != 0) {
    uVar13 = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar12 = (ulong)uVar1;
      if ((((uVar12 == param_3) && ((short)puVar7[1] == (short)*param_2)) &&
          (*(short *)((long)puVar7 + 6) == *(short *)((long)param_2 + 2))) &&
         ((short)puVar7[2] == (short)param_2[1])) {
        return;
      }
      lVar4 = param_1[2];
      uVar5 = (lVar4 + uVar6) - (lVar4 + 0xffffffffU & uVar12) & lVar4 - 1U;
      uVar10 = uVar9;
      if (uVar5 < uVar13) {
        if ((int)uVar1 < 0) break;
        uVar10 = uVar6;
        if (uVar9 != 0xffffffffffffffff) {
          uVar10 = uVar9;
        }
        *puVar7 = (uint)param_3;
        uVar2 = param_2[1];
        uVar1 = *param_2;
        uVar3 = puVar7[2];
        *param_2 = puVar7[1];
        *(short *)(param_2 + 1) = (short)uVar3;
        puVar7[1] = uVar1;
        *(short *)(puVar7 + 2) = (short)uVar2;
        lVar11 = *param_1;
        param_3 = uVar12;
        uVar13 = uVar5;
      }
      uVar13 = uVar13 + 1;
      uVar6 = uVar6 + 1 & lVar8 - 1U;
      puVar7 = (uint *)(lVar11 + uVar6 * 0xc);
      uVar1 = *puVar7;
      uVar9 = uVar10;
    } while (uVar1 != 0);
  }
  *puVar7 = (uint)param_3;
  uVar1 = *param_2;
  *(short *)(puVar7 + 2) = (short)param_2[1];
  puVar7[1] = uVar1;
  param_1[1] = param_1[1] + 1;
  return;
}



/* Entry: 109447fb0; end: 10944806b;  */

void FUN_109447fb0(long *param_1,ulong param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3 >> 3) * -0x5555555555555555) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_1094482ac();
      lVar3 = *param_1;
      plVar9 = (long *)param_1[1];
      lVar4 = (long)plVar9 - lVar3 >> 3;
      bVar2 = param_2 < (ulong)(lVar4 * -0x5555555555555555);
      uVar5 = param_2 + lVar4 * 0x5555555555555555;
      if (bVar2 || uVar5 == 0) {
        if (bVar2) {
          plVar8 = (long *)(lVar3 + param_2 * 0x18);
          while (plVar1 = plVar9, plVar1 != plVar8) {
            plVar9 = plVar1 + -3;
            if (*plVar9 != 0) {
              plVar1[-2] = *plVar9;
              __ZdlPv();
            }
          }
          param_1[1] = (long)plVar8;
        }
      }
      else if ((ulong)((param_1[2] - (long)plVar9 >> 3) * -0x5555555555555555) < uVar5) {
        if (0xaaaaaaaaaaaaaaa < param_2) {
          FUN_1094482ac();
          lVar3 = *param_1;
          if ((ulong)((param_1[2] - lVar3 >> 3) * 0x70bf015390948f41) < 0x1000) {
            lVar7 = param_1[1];
            lVar4 = 0x608000;
            __Znwm();
            _memcpy();
            *param_1 = lVar4;
            param_1[1] = lVar4 + (lVar7 - lVar3);
            param_1[2] = lVar4 + 0x608000;
            if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___ZdlPv_110352258)(lVar3);
              return;
            }
          }
          return;
        }
        lVar4 = param_1[2] - lVar3 >> 3;
        uVar6 = lVar4 * 0x5555555555555556;
        if (uVar6 < param_2 || uVar6 - param_2 == 0) {
          uVar6 = param_2;
        }
        if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
          uVar6 = 0xaaaaaaaaaaaaaaa;
        }
        plStack_a8 = param_1;
        FUN_1094482c0();
        lVar3 = uVar6 + ((long)plVar9 - lVar3);
        lVar7 = ((uVar5 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
        _bzero(lVar3,lVar7);
        lVar4 = lVar3 - (param_1[1] - *param_1);
        _memcpy(lVar4);
        lStack_c8 = *param_1;
        *param_1 = lVar4;
        param_1[1] = lVar3 + lVar7;
        lStack_b0 = param_1[2];
        param_1[2] = uVar6 + param_2 * 0x18;
        lStack_c0 = lStack_c8;
        lStack_b8 = lStack_c8;
        func_0x000109448304(&lStack_c8);
      }
      else {
        uVar5 = (uVar5 * 0x18 - 0x18) / 0x18;
        _bzero(plVar9,uVar5 * 0x18 + 0x18);
        param_1[1] = (long)(plVar9 + uVar5 * 3 + 3);
      }
      return;
    }
    lVar4 = param_1[1];
    uVar5 = param_2;
    plStack_38 = param_1;
    FUN_1094482c0();
    lVar3 = param_2 + (lVar4 - lVar3);
    lVar4 = lVar3 - (param_1[1] - *param_1);
    _memcpy(lVar4);
    lStack_58 = *param_1;
    *param_1 = lVar4;
    param_1[1] = lVar3;
    lStack_40 = param_1[2];
    param_1[2] = param_2 + uVar5 * 0x18;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x000109448304(&lStack_58);
  }
  return;
}



/* Entry: 10944806c; end: 1094482ab;  */

void FUN_10944806c(long *param_1,ulong param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar6 = *param_1;
  plVar9 = (long *)param_1[1];
  lVar4 = (long)plVar9 - lVar6 >> 3;
  bVar2 = param_2 < (ulong)(lVar4 * -0x5555555555555555);
  uVar3 = param_2 + lVar4 * 0x5555555555555555;
  if (bVar2 || uVar3 == 0) {
    if (bVar2) {
      plVar8 = (long *)(lVar6 + param_2 * 0x18);
      while (plVar1 = plVar9, plVar1 != plVar8) {
        plVar9 = plVar1 + -3;
        if (*plVar9 != 0) {
          plVar1[-2] = *plVar9;
          __ZdlPv();
        }
      }
      param_1[1] = (long)plVar8;
    }
  }
  else if ((ulong)((param_1[2] - (long)plVar9 >> 3) * -0x5555555555555555) < uVar3) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_1094482ac();
      lVar6 = *param_1;
      if ((ulong)((param_1[2] - lVar6 >> 3) * 0x70bf015390948f41) < 0x1000) {
        lVar7 = param_1[1];
        lVar4 = 0x608000;
        __Znwm();
        _memcpy();
        *param_1 = lVar4;
        param_1[1] = lVar4 + (lVar7 - lVar6);
        param_1[2] = lVar4 + 0x608000;
        if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(lVar6);
          return;
        }
      }
      return;
    }
    lVar4 = param_1[2] - lVar6 >> 3;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < param_2 || uVar5 - param_2 == 0) {
      uVar5 = param_2;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = param_1;
    FUN_1094482c0();
    lVar6 = uVar5 + ((long)plVar9 - lVar6);
    lVar7 = ((uVar3 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar6,lVar7);
    lVar4 = lVar6 - (param_1[1] - *param_1);
    _memcpy(lVar4);
    lStack_68 = *param_1;
    *param_1 = lVar4;
    param_1[1] = lVar6 + lVar7;
    lStack_50 = param_1[2];
    param_1[2] = uVar5 + param_2 * 0x18;
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x000109448304(&lStack_68);
  }
  else {
    uVar3 = (uVar3 * 0x18 - 0x18) / 0x18;
    _bzero(plVar9,uVar3 * 0x18 + 0x18);
    param_1[1] = (long)(plVar9 + uVar3 * 3 + 3);
  }
  return;
}



/* Entry: 1094482ac; end: 1094482bf;  */

undefined1  [16] FUN_1094482ac(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((long *)0xaaaaaaaaaaaaaaa < plVar2) {
    func_0x000104c4f740();
    plVar1 = (long *)plVar2[1];
    plVar5 = (long *)plVar2[2];
    while (plVar4 = plVar5, plVar4 != plVar1) {
      plVar5 = plVar4 + -3;
      lVar3 = *plVar5;
      plVar2[2] = (long)plVar5;
      if (lVar3 != 0) {
        plVar4[-2] = lVar3;
        __ZdlPv();
        plVar5 = (long *)plVar2[2];
      }
    }
    if (*plVar2 != 0) {
      __ZdlPv();
    }
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar2;
    return auVar7;
  }
  lVar3 = (long)plVar2 * 0x18;
  __Znwm(lVar3);
  auVar6._8_8_ = plVar2;
  auVar6._0_8_ = lVar3;
  return auVar6;
}



/* Entry: 1094482c0; end: 109448363;  */

undefined1  [16] FUN_1094482c0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_1) {
    func_0x000104c4f740();
    plVar1 = (long *)param_1[1];
    plVar4 = (long *)param_1[2];
    while (plVar3 = plVar4, plVar3 != plVar1) {
      plVar4 = plVar3 + -3;
      lVar2 = *plVar4;
      param_1[2] = (long)plVar4;
      if (lVar2 != 0) {
        plVar3[-2] = lVar2;
        __ZdlPv();
        plVar4 = (long *)param_1[2];
      }
    }
    if (*param_1 != 0) {
      __ZdlPv();
    }
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = param_1;
    return auVar6;
  }
  lVar2 = (long)param_1 * 0x18;
  __Znwm(lVar2);
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Entry: 109448364; end: 109448377;  */

long * FUN_109448364(undefined8 param_1,short *param_2,undefined4 *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  uVar9 = (long)(int)*param_2 * 0x466f45d + (long)(int)param_2[1] * 0x12740a5 +
          (long)(int)param_2[2] * 0x4f9ffb7;
  uVar8 = plVar2[1];
  if (uVar8 != 0) {
    uVar3 = uVar8 - 1;
    if ((uVar8 & uVar3) == 0) {
      unaff_x24 = uVar9 & uVar3;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar7 = 0;
        if (uVar8 != 0) {
          uVar7 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar7 * uVar8;
      }
    }
    plVar6 = *(long **)(*plVar2 + unaff_x24 * 8);
    if (plVar6 != (long *)0x0) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        uVar7 = plVar6[1];
        if (uVar7 == uVar9) {
          if (((*(short *)(plVar6 + 2) == *param_2) &&
              (*(short *)((long)plVar6 + 0x12) == param_2[1])) &&
             (*(short *)((long)plVar6 + 0x14) == param_2[2])) {
            return plVar6;
          }
        }
        else {
          if ((uVar8 & uVar3) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (uVar8 <= uVar7) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar7 / uVar8;
            }
            uVar7 = uVar7 - uVar1 * uVar8;
          }
          if (uVar7 != unaff_x24) break;
        }
      }
    }
  }
  plVar6 = (long *)0x20;
  __Znwm();
  *plVar6 = 0;
  plVar6[1] = uVar9;
  *(undefined4 *)(plVar6 + 2) = *param_3;
  *(undefined2 *)((long)plVar6 + 0x14) = *(undefined2 *)(param_3 + 1);
  *(undefined4 *)(plVar6 + 3) = 0;
  if ((uVar8 == 0) || (*(float *)(plVar2 + 4) * (float)uVar8 < (float)(plVar2[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar8) {
      uVar3 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar3 = uVar3 | uVar8 << 1;
    uVar8 = (ulong)((float)(plVar2[3] + 1) / *(float *)(plVar2 + 4));
    if (uVar3 <= uVar8) {
      uVar3 = uVar8;
    }
    FUN_1094485cc(plVar2,uVar3);
    uVar8 = plVar2[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar3 * uVar8;
      }
    }
  }
  lVar5 = *plVar2;
  plVar4 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = plVar2 + 2;
    *plVar6 = *plVar4;
    *plVar4 = (long)plVar6;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar4;
    if (*plVar6 == 0) goto LAB_109448594;
    uVar9 = *(ulong *)(*plVar6 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar9 = uVar9 & uVar8 - 1;
    }
    else if (uVar8 <= uVar9) {
      uVar3 = 0;
      if (uVar8 != 0) {
        uVar3 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar3 * uVar8;
    }
    plVar4 = (long *)(*plVar2 + uVar9 * 8);
  }
  else {
    *plVar6 = *plVar4;
  }
  *plVar4 = (long)plVar6;
LAB_109448594:
  plVar2[3] = plVar2[3] + 1;
  return plVar6;
}



/* Entry: 109448378; end: 1094485cb;  */

long * FUN_109448378(long *param_1,short *param_2,undefined4 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  
  uVar8 = (long)(int)*param_2 * 0x466f45d + (long)(int)param_2[1] * 0x12740a5 +
          (long)(int)param_2[2] * 0x4f9ffb7;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x24 = uVar8 & uVar2;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar6 * uVar7;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == uVar8) {
          if (((*(short *)(plVar5 + 2) == *param_2) &&
              (*(short *)((long)plVar5 + 0x12) == param_2[1])) &&
             (*(short *)((long)plVar5 + 0x14) == param_2[2])) {
            return plVar5;
          }
        }
        else {
          if ((uVar7 & uVar2) == 0) {
            uVar6 = uVar6 & uVar2;
          }
          else if (uVar7 <= uVar6) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar6 / uVar7;
            }
            uVar6 = uVar6 - uVar1 * uVar7;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar5 = (long *)0x20;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = uVar8;
  *(undefined4 *)(plVar5 + 2) = *param_3;
  *(undefined2 *)((long)plVar5 + 0x14) = *(undefined2 *)(param_3 + 1);
  *(undefined4 *)(plVar5 + 3) = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    FUN_1094485cc(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar2 * uVar7;
      }
    }
  }
  lVar4 = *param_1;
  plVar3 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar5 = *plVar3;
    *plVar3 = (long)plVar5;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar3;
    if (*plVar5 == 0) goto LAB_109448594;
    uVar8 = *(ulong *)(*plVar5 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar8 = uVar8 & uVar7 - 1;
    }
    else if (uVar7 <= uVar8) {
      uVar2 = 0;
      if (uVar7 != 0) {
        uVar2 = uVar8 / uVar7;
      }
      uVar8 = uVar8 - uVar2 * uVar7;
    }
    plVar3 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar5 = *plVar3;
  }
  *plVar3 = (long)plVar5;
LAB_109448594:
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 1094485cc; end: 10944879b;  */

float * FUN_1094485cc(float *param_1,float *param_2,undefined8 *param_3,float *param_4,ulong param_5
                     )

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  float *pfVar12;
  bool bVar13;
  bool bVar14;
  ushort uVar15;
  float *pfVar16;
  ulong uVar17;
  float *pfVar18;
  ulong uVar19;
  long *plVar20;
  ushort *puVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  ushort *puVar25;
  ushort *puVar26;
  float *pfVar28;
  long lVar29;
  float *pfVar30;
  long lVar31;
  long lVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  float afStack_3a0 [22];
  undefined1 auStack_348 [256];
  undefined1 auStack_248 [8];
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  undefined8 uStack_230;
  float fStack_228;
  undefined4 auStack_224 [2];
  undefined4 auStack_21c [22];
  undefined8 uStack_1c4;
  undefined4 auStack_1bc [22];
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined8 uStack_154;
  undefined8 uStack_14c;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined8 uStack_134;
  undefined8 uStack_12c;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  long lStack_e8;
  ushort *puVar27;
  
  pfVar9 = param_1;
  pfVar16 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (float *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    pfVar9 = param_2;
  }
  pfVar28 = *(float **)(param_1 + 2);
  if (pfVar28 > param_2 || param_2 == pfVar28) {
    if (pfVar28 <= param_2) {
      return pfVar9;
    }
    pfVar9 = (float *)(long)((float)*(ulong *)(param_1 + 6) / param_1[8]);
    if ((pfVar28 < (float *)0x3) || (((ulong)pfVar28 & (long)pfVar28 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((float *)0x1 < pfVar9) {
      pfVar9 = (float *)(1L << (-LZCOUNT((long)pfVar9 + -1) & 0x3fU));
    }
    if (param_2 <= pfVar9) {
      param_2 = pfVar9;
    }
    if (pfVar28 <= param_2) {
      return pfVar9;
    }
    if (param_2 == (float *)0x0) {
      pfVar9 = *(float **)param_1;
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      if (pfVar9 != (float *)0x0) {
        __ZdlPv();
      }
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      return pfVar9;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar8 = (long)param_2 << 3;
    __Znwm();
    pfVar9 = *(float **)param_1;
    *(long *)param_1 = lVar8;
    if (pfVar9 != (float *)0x0) {
      __ZdlPv();
    }
    pfVar16 = (float *)0x0;
    *(float **)(param_1 + 2) = param_2;
    do {
      *(undefined8 *)(*(long *)param_1 + (long)pfVar16 * 8) = 0;
      pfVar16 = (float *)((long)pfVar16 + 1);
    } while (param_2 != pfVar16);
    plVar20 = *(long **)(param_1 + 4);
    if (plVar20 != (long *)0x0) {
      pfVar16 = (float *)plVar20[1];
      uVar17 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar17) == 0) {
        pfVar16 = (float *)((ulong)pfVar16 & uVar17);
      }
      else if (param_2 <= pfVar16) {
        uVar22 = 0;
        if (param_2 != (float *)0x0) {
          uVar22 = (ulong)pfVar16 / (ulong)param_2;
        }
        pfVar16 = (float *)((long)pfVar16 - uVar22 * (long)param_2);
      }
      *(float **)(*(long *)param_1 + (long)pfVar16 * 8) = param_1 + 4;
      plVar23 = (long *)*plVar20;
      while (plVar23 != (long *)0x0) {
        pfVar28 = (float *)plVar23[1];
        if (((ulong)param_2 & uVar17) == 0) {
          pfVar28 = (float *)((ulong)pfVar28 & uVar17);
        }
        else if (param_2 <= pfVar28) {
          uVar22 = 0;
          if (param_2 != (float *)0x0) {
            uVar22 = (ulong)pfVar28 / (ulong)param_2;
          }
          pfVar28 = (float *)((long)pfVar28 - uVar22 * (long)param_2);
        }
        plVar24 = plVar23;
        if (pfVar28 != pfVar16) {
          lVar8 = *(long *)param_1;
          if (*(long *)(lVar8 + (long)pfVar28 * 8) == 0) {
            *(long **)(lVar8 + (long)pfVar28 * 8) = plVar20;
            pfVar16 = pfVar28;
          }
          else {
            *plVar20 = *plVar23;
            *plVar23 = **(undefined8 **)(lVar8 + (long)pfVar28 * 8);
            **(long **)(lVar8 + (long)pfVar28 * 8) = (long)plVar23;
            plVar24 = plVar20;
          }
        }
        plVar20 = plVar24;
        plVar23 = (long *)*plVar24;
      }
    }
    return pfVar9;
  }
  func_0x000104c4f740();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar28 = (float *)0x100;
  _snprintf(auStack_348,0x100,&UNK_10f56d934);
  iVar34 = 0;
  pfVar18 = pfVar9 + (param_5 & 0xffffffff) * 0x52;
  fVar33 = pfVar9[0xb5];
  fVar41 = *pfVar18 * 8.0;
  fVar43 = 0.0;
  bVar5 = true;
  do {
    bVar13 = bVar5;
    fVar42 = fVar41 * fVar43;
    fVar43 = 0.0;
    bVar5 = true;
    do {
      bVar6 = bVar5;
      fVar43 = fVar41 * fVar43;
      lVar8 = (long)iVar34;
      iVar34 = iVar34 + 2;
      fVar35 = 0.0;
      pfVar30 = afStack_3a0 + lVar8 * 3;
      bVar5 = true;
      do {
        bVar14 = bVar5;
        pfVar10 = param_4;
        func_0x0001094490c8(auStack_248);
        fStack_100 = fVar41 * fVar35;
        fVar35 = fStack_240 * fStack_100;
        fVar37 = fStack_234 * fVar43;
        fVar40 = fStack_228 * fVar42;
        fStack_fc = fVar43;
        fStack_f8 = fVar42;
        *(ulong *)(pfVar30 + -2) =
             CONCAT44((float)auStack_248._4_4_ * fStack_100 + fStack_238 * fVar43 +
                      (float)((ulong)uStack_230 >> 0x20) * fVar42,
                      (float)auStack_248._0_4_ * fStack_100 + fStack_23c * fVar43 +
                      (float)uStack_230 * fVar42);
        *pfVar30 = fVar35 + fVar37 + fVar40;
        fVar35 = 1.0;
        pfVar30 = pfVar30 + 3;
        bVar5 = false;
      } while (bVar14);
      fVar43 = 1.0;
      bVar5 = false;
    } while (bVar6);
    bVar5 = false;
  } while (bVar13);
  *(long *)(pfVar9 + 0x136) = *(long *)(pfVar9 + 0x134);
  if (*(char *)(pfVar18 + 4) == '\x01') {
    lVar8 = 0;
    fVar33 = 1.0 / (float)(int)fVar33;
    auStack_248 = (undefined1  [8])(pfVar18 + 0x2e);
    *(undefined8 *)(pfVar18 + 0x30) = *(undefined8 *)auStack_248;
    fStack_238 = (float)param_3[1];
    fStack_234 = (float)((ulong)param_3[1] >> 0x20);
    fStack_240 = (float)*param_3;
    fStack_23c = (float)((ulong)*param_3 >> 0x20);
    uStack_230 = param_3[2];
    fStack_228 = *(float *)(param_3 + 3);
    do {
      *(undefined8 *)((long)auStack_224 + lVar8) = *(undefined8 *)((long)param_3 + lVar8 + 0x1c);
      *(undefined4 *)((long)auStack_21c + lVar8) = *(undefined4 *)((long)param_3 + lVar8 + 0x24);
      lVar8 = lVar8 + 0xc;
    } while (lVar8 != 0x60);
    lVar8 = 0;
    do {
      *(undefined8 *)((long)&uStack_1c4 + lVar8) = *(undefined8 *)((long)param_3 + lVar8 + 0x7c);
      *(undefined4 *)((long)auStack_1bc + lVar8) = *(undefined4 *)((long)param_3 + lVar8 + 0x84);
      lVar8 = lVar8 + 0xc;
    } while (lVar8 != 0x60);
    uStack_13c = *(undefined8 *)((long)param_3 + 0x104);
    uStack_144 = *(undefined8 *)((long)param_3 + 0xfc);
    uStack_12c = *(undefined8 *)((long)param_3 + 0x114);
    uStack_134 = *(undefined8 *)((long)param_3 + 0x10c);
    uStack_11c = *(undefined8 *)((long)param_3 + 0x124);
    uStack_124 = *(undefined8 *)((long)param_3 + 0x11c);
    uStack_10c = *(undefined8 *)((long)param_3 + 0x134);
    uStack_114 = *(undefined8 *)((long)param_3 + 300);
    uStack_15c = *(undefined8 *)((long)param_3 + 0xe4);
    uStack_164 = *(undefined8 *)((long)param_3 + 0xdc);
    uStack_14c = *(undefined8 *)((long)param_3 + 0xf4);
    uStack_154 = *(undefined8 *)((long)param_3 + 0xec);
    fStack_104 = *pfVar18 * 8.0;
    pfVar10 = pfVar18 + 10;
    pfVar28 = (float *)auStack_248;
    FUN_10944914c(pfVar10,pfVar28,**(undefined8 **)pfVar10);
    lVar32 = *(long *)(pfVar18 + 0x30);
    plVar20 = *(long **)(pfVar9 + 0x136);
    for (lVar8 = *(long *)(pfVar18 + 0x2e); lVar8 != lVar32; lVar8 = lVar8 + 0xc) {
      lVar29 = *(long *)(*(long *)(pfVar18 + 0x1e) + (ulong)(*(uint *)(lVar8 + 8) >> 0xc) * 0x18) +
               ((ulong)*(uint *)(lVar8 + 8) & 0xfff) * 0x181c;
      if (plVar20 < *(long **)(pfVar9 + 0x138)) {
        plVar23 = plVar20 + 1;
        *plVar20 = lVar29;
      }
      else {
        pfVar30 = *(float **)(pfVar9 + 0x134);
        lVar31 = (long)plVar20 - (long)pfVar30;
        uVar17 = (lVar31 >> 3) + 1;
        if (uVar17 >> 0x3d != 0) {
          func_0x0001094494a4();
LAB_109448e48:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x109448e4c);
          (*pcVar7)();
        }
        uVar19 = (long)*(long **)(pfVar9 + 0x138) - (long)pfVar30;
        uVar22 = (long)uVar19 >> 2;
        if (uVar22 <= uVar17) {
          uVar22 = uVar17;
        }
        if (0x7ffffffffffffff7 < uVar19) {
          uVar22 = 0x1fffffffffffffff;
        }
        if (uVar22 >> 0x3d != 0) {
          func_0x000104c4f740();
          goto LAB_109448e48;
        }
        lVar11 = uVar22 << 3;
        __Znwm();
        plVar20 = (long *)(lVar11 + lVar31);
        pfVar12 = (float *)(plVar20 + -(lVar31 >> 3));
        plVar23 = plVar20 + 1;
        *plVar20 = lVar29;
        pfVar10 = pfVar12;
        pfVar28 = pfVar30;
        _memcpy(pfVar12,pfVar30,lVar31);
        *(float **)(pfVar9 + 0x134) = pfVar12;
        *(long **)(pfVar9 + 0x136) = plVar23;
        *(ulong *)(pfVar9 + 0x138) = lVar11 + uVar22 * 8;
        if (pfVar30 != (float *)0x0) {
          __ZdlPv();
          pfVar10 = pfVar30;
        }
      }
      *(long **)(pfVar9 + 0x136) = plVar23;
      plVar20 = plVar23;
    }
    plVar23 = *(long **)(pfVar9 + 0x134);
    if (plVar23 != plVar20) {
      do {
        lVar8 = *plVar23;
        pfVar10 = pfVar18 + 0x40;
        pfVar28 = (float *)(lVar8 + 0x180c);
        FUN_1093aedec();
        pfVar30 = (float *)CONCAT44(fStack_240,auStack_248._4_4_);
        if (pfVar10 == (float *)0x0) {
          FUN_1093e1ec8(auStack_248,param_4,lVar8 + 0x1800);
          lVar32 = 0;
          fVar43 = (float)auStack_248._0_4_ + (float)*(long *)(param_4 + 4);
          fVar42 = (float)auStack_248._4_4_ + (float)((ulong)*(long *)(param_4 + 4) >> 0x20);
          fVar35 = fStack_240 + param_4[6];
          uVar36 = 0xce6e6b28ce6e6b28;
          uVar38 = 0x4e6e6b284e6e6b28;
          do {
            fVar37 = fVar35 + *(float *)((long)afStack_3a0 + lVar32);
            auStack_248._0_4_ = 1.0;
            if (1.1920929e-07 < ABS(fVar37)) {
              auStack_248._0_4_ = 1.0 / fVar37;
            }
            auStack_248._4_4_ = SUB84(&fStack_100,0);
            fStack_240 = (float)((ulong)&fStack_100 >> 0x20);
            uVar39 = CONCAT44((fVar42 + (float)((ulong)*(undefined8 *)((long)&uStack_3a8 + lVar32)
                                               >> 0x20)) * (float)auStack_248._0_4_,
                              (fVar43 + (float)*(undefined8 *)((long)&uStack_3a8 + lVar32)) *
                              (float)auStack_248._0_4_);
            uVar38 = NEON_fmin(uVar38,uVar39,4);
            uVar36 = NEON_fmax(uVar36,uVar39,4);
            lVar32 = lVar32 + 0xc;
          } while (lVar32 != 0x60);
          fVar43 = (float)*(undefined8 *)(pfVar9 + 0xbd);
          fVar42 = (float)((ulong)*(undefined8 *)(pfVar9 + 0xbd) >> 0x20);
          fVar37 = (float)*(undefined8 *)(pfVar9 + 0xc1);
          fVar40 = (float)((ulong)*(undefined8 *)(pfVar9 + 0xc1) >> 0x20);
          uVar38 = NEON_smax(CONCAT44((int)(float)(int)((fVar40 + (float)((ulong)uVar38 >> 0x20) *
                                                                  fVar42) * fVar33),
                                      (int)(float)(int)((fVar37 + (float)uVar38 * fVar43) * fVar33))
                             ,0,4);
          uVar39 = CONCAT44((int)((ulong)*(long *)pfVar16 >> 0x20) + -1,(int)*(long *)pfVar16 + -1);
          uVar38 = NEON_smin(uVar39,uVar38,4);
          uVar36 = NEON_smax(CONCAT44((int)(float)(int)((fVar40 + (float)((ulong)uVar36 >> 0x20) *
                                                                  fVar42) * fVar33),
                                      (int)(float)(int)((fVar37 + (float)uVar36 * fVar43) * fVar33))
                             ,0,4);
          uVar36 = NEON_smin(uVar39,uVar36,4);
          iVar34 = (int)((ulong)uVar38 >> 0x20);
          uStack_3b0 = CONCAT44((int)((ulong)uVar36 >> 0x20) - iVar34,(int)uVar36 - (int)uVar38);
          lVar32 = *(long *)(pfVar16 + 4);
          fVar43 = pfVar16[2];
          fVar42 = pfVar16[3];
          fStack_f8 = (float)*(long *)(pfVar16 + 8);
          uStack_f4 = (undefined4)((ulong)*(long *)(pfVar16 + 8) >> 0x20);
          fStack_100 = (float)*(long *)(pfVar16 + 6);
          fStack_fc = (float)((ulong)*(long *)(pfVar16 + 6) >> 0x20);
          if (*(long *)(pfVar16 + 8) != 0) {
            plVar24 = (long *)(*(long *)(pfVar16 + 8) + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar5) {
                *plVar24 = *plVar24 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          pfVar10 = (float *)auStack_248;
          pfVar28 = (float *)&uStack_3b0;
          unique0x10000bf6 = &fStack_100;
          FUN_1094494b8(pfVar10,pfVar28,&fStack_100,(int)fVar42 >> 1,
                        lVar32 + (long)((int)uVar38 + (int)fVar43 * iVar34) * 2,
                        *(long *)(pfVar16 + 10),pfVar16[0xc]);
          pfVar12 = (float *)CONCAT44(uStack_f4,fStack_f8);
          pfVar30 = stack0xfffffffffffffdbc;
          if (pfVar12 != (float *)0x0) {
            pfVar1 = pfVar12 + 2;
            do {
              lVar32 = *(long *)pfVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pfVar1,0x10);
              if (bVar5) {
                *(long *)pfVar1 = lVar32 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar32 == 0) {
              (**(code **)(*(long *)pfVar12 + 0x10))(pfVar12);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pfVar10 = pfVar12;
              pfVar30 = stack0xfffffffffffffdbc;
            }
          }
          fStack_240 = (float)((ulong)pfVar30 >> 0x20);
          auStack_248._4_4_ = SUB84(pfVar30,0);
          if (fStack_240 == (float)auStack_248._0_4_) {
            if (0 < (int)(auStack_248._4_4_ * auStack_248._0_4_)) {
              uVar15 = 0xffff;
              puVar21 = (ushort *)CONCAT44(fStack_234,fStack_238);
              do {
                puVar25 = puVar21 + 1;
                uVar3 = *puVar21;
                uVar2 = uVar15;
                if (uVar3 <= uVar15) {
                  uVar2 = uVar3;
                }
                if (uVar3 != 0) {
                  uVar15 = uVar2;
                }
                puVar21 = puVar25;
              } while (puVar25 < (ushort *)CONCAT44(fStack_234,fStack_238) +
                                 (int)(auStack_248._4_4_ * auStack_248._0_4_));
LAB_109448d80:
              if ((uVar15 != 0xffff) && (fVar41 * 0.5 * 1.7320508 + fVar35 < (float)uVar15 * 0.001))
              {
                pfVar10 = pfVar18 + 0x40;
                pfVar28 = (float *)(lVar8 + 0x180c);
                unique0x10000c56 = pfVar30;
                FUN_1093a8ac8(pfVar10,pfVar28,lVar8 + 0x180c);
                pfVar30 = stack0xfffffffffffffdbc;
              }
            }
          }
          else if (0 < (int)fStack_240 * auStack_248._4_4_) {
            puVar25 = (ushort *)CONCAT44(fStack_234,fStack_238);
            puVar21 = puVar25 + (int)fStack_240 * auStack_248._4_4_;
            uVar15 = 0xffff;
            do {
              if (0 < (int)auStack_248._0_4_) {
                puVar26 = puVar25;
                do {
                  puVar27 = puVar26 + 1;
                  uVar3 = *puVar26;
                  uVar2 = uVar15;
                  if (uVar3 <= uVar15) {
                    uVar2 = uVar3;
                  }
                  if (uVar3 != 0) {
                    uVar15 = uVar2;
                  }
                  puVar26 = puVar27;
                } while (puVar27 < puVar25 + (int)auStack_248._0_4_);
              }
              puVar25 = puVar25 + (int)fStack_240;
            } while (puVar25 < puVar21);
            goto LAB_109448d80;
          }
          pfVar12 = (float *)CONCAT44(auStack_224[0],fStack_228);
          if (pfVar12 != (float *)0x0) {
            pfVar1 = pfVar12 + 2;
            do {
              lVar8 = *(long *)pfVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pfVar1,0x10);
              if (bVar5) {
                *(long *)pfVar1 = lVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar8 == 0) {
              unique0x10000c5e = pfVar30;
              (**(code **)(*(long *)pfVar12 + 0x10))(pfVar12);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pfVar10 = pfVar12;
              pfVar30 = stack0xfffffffffffffdbc;
            }
          }
        }
        fStack_240 = (float)((ulong)pfVar30 >> 0x20);
        auStack_248._4_4_ = SUB84(pfVar30,0);
        plVar23 = plVar23 + 1;
      } while (plVar23 != plVar20);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    ___stack_chk_fail();
    FUN_10939cea4(&uStack_230);
    __Unwind_Resume();
    lVar32 = *(long *)(pfVar28 + 2);
    lVar8 = *(long *)pfVar28;
    if (*(long *)(pfVar28 + 2) != 0) {
      plVar20 = (long *)(*(long *)(pfVar28 + 2) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar5) {
          *plVar20 = *plVar20 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar20 = *(long **)(pfVar10 + 2);
    *(long *)(pfVar10 + 2) = lVar32;
    *(long *)pfVar10 = lVar8;
    if (plVar20 != (long *)0x0) {
      plVar23 = plVar20 + 1;
      do {
        lVar8 = *plVar23;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar5) {
          *plVar23 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    return pfVar10;
  }
  return pfVar10;
}



/* Entry: 10944879c; end: 109448e7b;  */

float * FUN_10944879c(long param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,
                     ulong param_5)

{
  ulong uVar1;
  long *plVar2;
  float *pfVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  code *pcVar10;
  float *pfVar11;
  long lVar12;
  float *pfVar13;
  float *pfVar14;
  bool bVar15;
  bool bVar16;
  ushort uVar17;
  float *pfVar18;
  ulong uVar19;
  long lVar20;
  ushort *puVar21;
  ulong uVar22;
  ushort *puVar23;
  ushort *puVar24;
  long *plVar26;
  long lVar27;
  float *pfVar28;
  long *plVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  int iVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uStack_380;
  undefined8 uStack_378;
  float afStack_370 [22];
  undefined1 auStack_318 [256];
  undefined1 auStack_218 [8];
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined8 uStack_200;
  float fStack_1f8;
  undefined4 auStack_1f4 [2];
  undefined4 auStack_1ec [22];
  undefined8 uStack_194;
  undefined4 auStack_18c [22];
  undefined8 uStack_134;
  undefined8 uStack_12c;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  long lStack_b8;
  ushort *puVar25;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar14 = (float *)0x100;
  _snprintf(auStack_318,0x100,&UNK_10f56d934);
  iVar31 = 0;
  pfVar18 = (float *)(param_1 + (param_5 & 0xffffffff) * 0x148);
  iVar5 = *(int *)(param_1 + 0x2d4);
  fVar41 = *pfVar18 * 8.0;
  fVar43 = 0.0;
  bVar8 = true;
  do {
    bVar15 = bVar8;
    fVar42 = fVar41 * fVar43;
    fVar43 = 0.0;
    bVar8 = true;
    do {
      bVar9 = bVar8;
      fVar43 = fVar41 * fVar43;
      lVar20 = (long)iVar31;
      iVar31 = iVar31 + 2;
      fVar34 = 0.0;
      pfVar28 = afStack_370 + lVar20 * 3;
      bVar8 = true;
      do {
        bVar16 = bVar8;
        pfVar11 = param_4;
        func_0x0001094490c8(auStack_218);
        fStack_d0 = fVar41 * fVar34;
        fVar34 = fStack_210 * fStack_d0;
        fVar36 = fStack_204 * fVar43;
        fVar39 = fStack_1f8 * fVar42;
        fStack_cc = fVar43;
        fStack_c8 = fVar42;
        *(ulong *)(pfVar28 + -2) =
             CONCAT44((float)auStack_218._4_4_ * fStack_d0 + fStack_208 * fVar43 +
                      (float)((ulong)uStack_200 >> 0x20) * fVar42,
                      (float)auStack_218._0_4_ * fStack_d0 + fStack_20c * fVar43 +
                      (float)uStack_200 * fVar42);
        *pfVar28 = fVar34 + fVar36 + fVar39;
        fVar34 = 1.0;
        pfVar28 = pfVar28 + 3;
        bVar8 = false;
      } while (bVar16);
      fVar43 = 1.0;
      bVar8 = false;
    } while (bVar9);
    bVar8 = false;
  } while (bVar15);
  *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_1 + 0x4d0);
  if (*(char *)(pfVar18 + 4) == '\x01') {
    lVar20 = 0;
    fVar43 = 1.0 / (float)iVar5;
    auStack_218 = (undefined1  [8])(pfVar18 + 0x2e);
    *(undefined8 *)(pfVar18 + 0x30) = *(undefined8 *)auStack_218;
    fStack_208 = (float)param_3[1];
    fStack_204 = (float)((ulong)param_3[1] >> 0x20);
    fStack_210 = (float)*param_3;
    fStack_20c = (float)((ulong)*param_3 >> 0x20);
    uStack_200 = param_3[2];
    fStack_1f8 = *(float *)(param_3 + 3);
    do {
      *(undefined8 *)((long)auStack_1f4 + lVar20) = *(undefined8 *)((long)param_3 + lVar20 + 0x1c);
      *(undefined4 *)((long)auStack_1ec + lVar20) = *(undefined4 *)((long)param_3 + lVar20 + 0x24);
      lVar20 = lVar20 + 0xc;
    } while (lVar20 != 0x60);
    lVar20 = 0;
    do {
      *(undefined8 *)((long)&uStack_194 + lVar20) = *(undefined8 *)((long)param_3 + lVar20 + 0x7c);
      *(undefined4 *)((long)auStack_18c + lVar20) = *(undefined4 *)((long)param_3 + lVar20 + 0x84);
      lVar20 = lVar20 + 0xc;
    } while (lVar20 != 0x60);
    uStack_10c = *(undefined8 *)((long)param_3 + 0x104);
    uStack_114 = *(undefined8 *)((long)param_3 + 0xfc);
    uStack_fc = *(undefined8 *)((long)param_3 + 0x114);
    uStack_104 = *(undefined8 *)((long)param_3 + 0x10c);
    uStack_ec = *(undefined8 *)((long)param_3 + 0x124);
    uStack_f4 = *(undefined8 *)((long)param_3 + 0x11c);
    uStack_dc = *(undefined8 *)((long)param_3 + 0x134);
    uStack_e4 = *(undefined8 *)((long)param_3 + 300);
    uStack_12c = *(undefined8 *)((long)param_3 + 0xe4);
    uStack_134 = *(undefined8 *)((long)param_3 + 0xdc);
    uStack_11c = *(undefined8 *)((long)param_3 + 0xf4);
    uStack_124 = *(undefined8 *)((long)param_3 + 0xec);
    fStack_d4 = *pfVar18 * 8.0;
    pfVar11 = pfVar18 + 10;
    pfVar14 = (float *)auStack_218;
    FUN_10944914c(pfVar11,pfVar14,**(undefined8 **)pfVar11);
    lVar32 = *(long *)(pfVar18 + 0x30);
    plVar26 = *(long **)(param_1 + 0x4d8);
    for (lVar20 = *(long *)(pfVar18 + 0x2e); lVar20 != lVar32; lVar20 = lVar20 + 0xc) {
      lVar27 = *(long *)(*(long *)(pfVar18 + 0x1e) + (ulong)(*(uint *)(lVar20 + 8) >> 0xc) * 0x18) +
               ((ulong)*(uint *)(lVar20 + 8) & 0xfff) * 0x181c;
      if (plVar26 < *(long **)(param_1 + 0x4e0)) {
        plVar29 = plVar26 + 1;
        *plVar26 = lVar27;
      }
      else {
        pfVar28 = *(float **)(param_1 + 0x4d0);
        lVar30 = (long)plVar26 - (long)pfVar28;
        uVar1 = (lVar30 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
          func_0x0001094494a4();
LAB_109448e48:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x109448e4c);
          (*pcVar10)();
        }
        uVar19 = (long)*(long **)(param_1 + 0x4e0) - (long)pfVar28;
        uVar22 = (long)uVar19 >> 2;
        if (uVar22 <= uVar1) {
          uVar22 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar19) {
          uVar22 = 0x1fffffffffffffff;
        }
        if (uVar22 >> 0x3d != 0) {
          func_0x000104c4f740();
          goto LAB_109448e48;
        }
        lVar12 = uVar22 << 3;
        __Znwm();
        plVar26 = (long *)(lVar12 + lVar30);
        pfVar13 = (float *)(plVar26 + -(lVar30 >> 3));
        plVar29 = plVar26 + 1;
        *plVar26 = lVar27;
        pfVar11 = pfVar13;
        pfVar14 = pfVar28;
        _memcpy(pfVar13,pfVar28,lVar30);
        *(float **)(param_1 + 0x4d0) = pfVar13;
        *(long **)(param_1 + 0x4d8) = plVar29;
        *(ulong *)(param_1 + 0x4e0) = lVar12 + uVar22 * 8;
        if (pfVar28 != (float *)0x0) {
          __ZdlPv();
          pfVar11 = pfVar28;
        }
      }
      *(long **)(param_1 + 0x4d8) = plVar29;
      plVar26 = plVar29;
    }
    plVar29 = *(long **)(param_1 + 0x4d0);
    if (plVar29 != plVar26) {
      do {
        lVar20 = *plVar29;
        pfVar11 = pfVar18 + 0x40;
        pfVar14 = (float *)(lVar20 + 0x180c);
        FUN_1093aedec();
        pfVar28 = (float *)CONCAT44(fStack_210,auStack_218._4_4_);
        if (pfVar11 == (float *)0x0) {
          FUN_1093e1ec8(auStack_218,param_4,lVar20 + 0x1800);
          lVar32 = 0;
          fVar42 = (float)auStack_218._0_4_ + (float)*(long *)(param_4 + 4);
          fVar34 = (float)auStack_218._4_4_ + (float)((ulong)*(long *)(param_4 + 4) >> 0x20);
          fVar36 = fStack_210 + param_4[6];
          uVar35 = 0xce6e6b28ce6e6b28;
          uVar37 = 0x4e6e6b284e6e6b28;
          do {
            fVar39 = fVar36 + *(float *)((long)afStack_370 + lVar32);
            auStack_218._0_4_ = 1.0;
            if (1.1920929e-07 < ABS(fVar39)) {
              auStack_218._0_4_ = 1.0 / fVar39;
            }
            auStack_218._4_4_ = SUB84(&fStack_d0,0);
            fStack_210 = (float)((ulong)&fStack_d0 >> 0x20);
            uVar38 = CONCAT44((fVar34 + (float)((ulong)*(undefined8 *)((long)&uStack_378 + lVar32)
                                               >> 0x20)) * (float)auStack_218._0_4_,
                              (fVar42 + (float)*(undefined8 *)((long)&uStack_378 + lVar32)) *
                              (float)auStack_218._0_4_);
            uVar37 = NEON_fmin(uVar37,uVar38,4);
            uVar35 = NEON_fmax(uVar35,uVar38,4);
            lVar32 = lVar32 + 0xc;
          } while (lVar32 != 0x60);
          fVar42 = (float)*(undefined8 *)(param_1 + 0x2f4);
          fVar34 = (float)((ulong)*(undefined8 *)(param_1 + 0x2f4) >> 0x20);
          fVar39 = (float)*(undefined8 *)(param_1 + 0x304);
          fVar40 = (float)((ulong)*(undefined8 *)(param_1 + 0x304) >> 0x20);
          uVar37 = NEON_smax(CONCAT44((int)(float)(int)((fVar40 + (float)((ulong)uVar37 >> 0x20) *
                                                                  fVar34) * fVar43),
                                      (int)(float)(int)((fVar39 + (float)uVar37 * fVar42) * fVar43))
                             ,0,4);
          uVar38 = CONCAT44((int)((ulong)*param_2 >> 0x20) + -1,(int)*param_2 + -1);
          uVar37 = NEON_smin(uVar38,uVar37,4);
          uVar35 = NEON_smax(CONCAT44((int)(float)(int)((fVar40 + (float)((ulong)uVar35 >> 0x20) *
                                                                  fVar34) * fVar43),
                                      (int)(float)(int)((fVar39 + (float)uVar35 * fVar42) * fVar43))
                             ,0,4);
          uVar35 = NEON_smin(uVar38,uVar35,4);
          iVar33 = (int)((ulong)uVar37 >> 0x20);
          uStack_380 = CONCAT44((int)((ulong)uVar35 >> 0x20) - iVar33,(int)uVar35 - (int)uVar37);
          lVar32 = param_2[2];
          iVar31 = *(int *)(param_2 + 1);
          iVar5 = *(int *)((long)param_2 + 0xc);
          fStack_c8 = (float)param_2[4];
          uStack_c4 = (undefined4)((ulong)param_2[4] >> 0x20);
          fStack_d0 = (float)param_2[3];
          fStack_cc = (float)((ulong)param_2[3] >> 0x20);
          if (param_2[4] != 0) {
            plVar2 = (long *)(param_2[4] + 8);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = *plVar2 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          pfVar11 = (float *)auStack_218;
          pfVar14 = (float *)&uStack_380;
          unique0x100009df = &fStack_d0;
          FUN_1094494b8(pfVar11,pfVar14,&fStack_d0,iVar5 >> 1,
                        lVar32 + (long)((int)uVar37 + iVar31 * iVar33) * 2,param_2[5],
                        *(undefined4 *)(param_2 + 6));
          pfVar13 = (float *)CONCAT44(uStack_c4,fStack_c8);
          pfVar28 = stack0xfffffffffffffdec;
          if (pfVar13 != (float *)0x0) {
            pfVar3 = pfVar13 + 2;
            do {
              lVar32 = *(long *)pfVar3;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(pfVar3,0x10);
              if (bVar8) {
                *(long *)pfVar3 = lVar32 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar32 == 0) {
              (**(code **)(*(long *)pfVar13 + 0x10))(pfVar13);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pfVar11 = pfVar13;
              pfVar28 = stack0xfffffffffffffdec;
            }
          }
          fStack_210 = (float)((ulong)pfVar28 >> 0x20);
          auStack_218._4_4_ = SUB84(pfVar28,0);
          if (fStack_210 == (float)auStack_218._0_4_) {
            if (0 < (int)(auStack_218._4_4_ * auStack_218._0_4_)) {
              uVar17 = 0xffff;
              puVar21 = (ushort *)CONCAT44(fStack_204,fStack_208);
              do {
                puVar23 = puVar21 + 1;
                uVar6 = *puVar21;
                uVar4 = uVar17;
                if (uVar6 <= uVar17) {
                  uVar4 = uVar6;
                }
                if (uVar6 != 0) {
                  uVar17 = uVar4;
                }
                puVar21 = puVar23;
              } while (puVar23 < (ushort *)CONCAT44(fStack_204,fStack_208) +
                                 (int)(auStack_218._4_4_ * auStack_218._0_4_));
LAB_109448d80:
              if ((uVar17 != 0xffff) && (fVar41 * 0.5 * 1.7320508 + fVar36 < (float)uVar17 * 0.001))
              {
                pfVar11 = pfVar18 + 0x40;
                pfVar14 = (float *)(lVar20 + 0x180c);
                unique0x10000a3f = pfVar28;
                FUN_1093a8ac8(pfVar11,pfVar14,lVar20 + 0x180c);
                pfVar28 = stack0xfffffffffffffdec;
              }
            }
          }
          else if (0 < (int)fStack_210 * auStack_218._4_4_) {
            puVar23 = (ushort *)CONCAT44(fStack_204,fStack_208);
            puVar21 = puVar23 + (int)fStack_210 * auStack_218._4_4_;
            uVar17 = 0xffff;
            do {
              if (0 < (int)auStack_218._0_4_) {
                puVar24 = puVar23;
                do {
                  puVar25 = puVar24 + 1;
                  uVar6 = *puVar24;
                  uVar4 = uVar17;
                  if (uVar6 <= uVar17) {
                    uVar4 = uVar6;
                  }
                  if (uVar6 != 0) {
                    uVar17 = uVar4;
                  }
                  puVar24 = puVar25;
                } while (puVar25 < puVar23 + (int)auStack_218._0_4_);
              }
              puVar23 = puVar23 + (int)fStack_210;
            } while (puVar23 < puVar21);
            goto LAB_109448d80;
          }
          pfVar13 = (float *)CONCAT44(auStack_1f4[0],fStack_1f8);
          if (pfVar13 != (float *)0x0) {
            pfVar3 = pfVar13 + 2;
            do {
              lVar20 = *(long *)pfVar3;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(pfVar3,0x10);
              if (bVar8) {
                *(long *)pfVar3 = lVar20 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar20 == 0) {
              unique0x10000a47 = pfVar28;
              (**(code **)(*(long *)pfVar13 + 0x10))(pfVar13);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pfVar11 = pfVar13;
              pfVar28 = stack0xfffffffffffffdec;
            }
          }
        }
        fStack_210 = (float)((ulong)pfVar28 >> 0x20);
        auStack_218._4_4_ = SUB84(pfVar28,0);
        plVar29 = plVar29 + 1;
      } while (plVar29 != plVar26);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return pfVar11;
  }
  ___stack_chk_fail();
  FUN_10939cea4(&uStack_200);
  __Unwind_Resume();
  lVar32 = *(long *)(pfVar14 + 2);
  lVar20 = *(long *)pfVar14;
  if (*(long *)(pfVar14 + 2) != 0) {
    plVar26 = (long *)(*(long *)(pfVar14 + 2) + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar8) {
        *plVar26 = *plVar26 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar26 = *(long **)(pfVar11 + 2);
  *(long *)(pfVar11 + 2) = lVar32;
  *(long *)pfVar11 = lVar20;
  if (plVar26 != (long *)0x0) {
    plVar29 = plVar26 + 1;
    do {
      lVar20 = *plVar29;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar8) {
        *plVar29 = lVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
    }
  }
  return pfVar11;
}



/* Entry: 109448e7c; end: 109448ef7;  */

undefined8 * FUN_109448e7c(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
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



/* Entry: 109448ef8; end: 10944901b;  */

void FUN_109448ef8(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined8 uStack_40;
  float fStack_38;
  undefined4 uStack_34;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    FUN_1093e1ec8(&uStack_40,param_1,lVar1 + 0x1c);
    fVar3 = *(float *)(param_1 + 0x18);
    *(ulong *)(lVar1 + 0x7c) =
         CONCAT44((float)((ulong)uStack_40 >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20),
                  (float)uStack_40 + (float)*(undefined8 *)(param_1 + 0x10));
    *(float *)(lVar1 + 0x84) = fStack_38 + fVar3;
    lVar2 = lVar2 + 0xc;
  } while (lVar2 != 0x60);
  FUN_10944901c(&uStack_40,param_1 + 0xa0,param_1 + 0xd0,param_1 + 0x7c);
  *(ulong *)(param_1 + 0xe4) = CONCAT44(uStack_34,fStack_38);
  *(undefined8 *)(param_1 + 0xdc) = uStack_40;
  FUN_10944901c(&uStack_40,param_1 + 0x94,param_1 + 0x88,param_1 + 0xc4);
  *(ulong *)(param_1 + 0xf4) = CONCAT44(uStack_34,fStack_38);
  *(undefined8 *)(param_1 + 0xec) = uStack_40;
  FUN_10944901c(&uStack_40,param_1 + 0x7c,param_1 + 0xac,param_1 + 0x88);
  *(ulong *)(param_1 + 0x104) = CONCAT44(uStack_34,fStack_38);
  *(undefined8 *)(param_1 + 0xfc) = uStack_40;
  FUN_10944901c(&uStack_40,param_1 + 0xa0,param_1 + 0x94,param_1 + 0xd0);
  *(ulong *)(param_1 + 0x114) = CONCAT44(uStack_34,fStack_38);
  *(undefined8 *)(param_1 + 0x10c) = uStack_40;
  FUN_10944901c(&uStack_40,param_1 + 0xa0,param_1 + 0x7c,param_1 + 0x94);
  *(ulong *)(param_1 + 0x124) = CONCAT44(uStack_34,fStack_38);
  *(undefined8 *)(param_1 + 0x11c) = uStack_40;
  FUN_10944901c(&uStack_40,param_1 + 0xd0,param_1 + 0xc4,param_1 + 0xac);
  *(ulong *)(param_1 + 0x134) = CONCAT44(uStack_34,fStack_38);
  *(undefined8 *)(param_1 + 300) = uStack_40;
  return;
}



/* Entry: 10944901c; end: 10944914b;  */

void FUN_10944901c(undefined8 *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = *param_2;
  fVar1 = param_2[2];
  fVar9 = (float)*(undefined8 *)(param_2 + 1);
  fVar7 = (float)*(undefined8 *)(param_3 + 1) - fVar9;
  fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar6 = (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
  fVar9 = (float)*(undefined8 *)(param_4 + 1) - fVar9;
  fVar8 = (float)((ulong)*(undefined8 *)(param_4 + 1) >> 0x20);
  fVar2 = fVar9 * -(fVar6 - fVar3) + (fVar8 - fVar3) * fVar7;
  fVar3 = (fVar8 - fVar3) * -(*param_3 - fVar4) + (*param_4 - fVar4) * (fVar6 - fVar3);
  fVar4 = -(fVar7 * (*param_4 - fVar4)) + fVar9 * (*param_3 - fVar4);
  fVar9 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  if (0.0 < fVar9) {
    fVar9 = SQRT(fVar9);
    fVar2 = fVar2 / fVar9;
    fVar3 = fVar3 / fVar9;
    fVar4 = fVar4 / fVar9;
  }
  uVar5 = *(undefined8 *)param_2;
  *param_1 = CONCAT44(fVar3,fVar2);
  *(float *)(param_1 + 1) = fVar4;
  *(float *)((long)param_1 + 0xc) =
       -(fVar1 * fVar4 + fVar2 * (float)uVar5 + fVar3 * (float)((ulong)uVar5 >> 0x20));
  return;
}



/* Entry: 10944914c; end: 1094493b3;  */

long * FUN_10944914c(long *param_1,long *param_2,short *param_3)

{
  long *plVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  short *psVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  undefined4 *puVar18;
  long *plVar19;
  long lVar20;
  ulong *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined4 uStack_66;
  short sStack_62;
  
  sVar3 = param_3[3];
  iVar2 = (int)param_1[4];
  uVar4 = iVar2 - sVar3;
  plVar11 = param_1;
  if ((uVar4 != 0 && sVar3 <= iVar2) &&
     (plVar11 = param_2, FUN_1094493b4(param_2,param_3,1 << (ulong)(uVar4 & 0x1f)),
     (int)plVar11 != 0)) {
    lVar20 = 0;
    do {
      uVar4 = *(uint *)(param_3 + lVar20 * 2 + 4);
      if (uVar4 != 0xffffffff) {
        if (iVar2 + -1 == (int)sVar3) {
          uStack_66 = CONCAT22(((ushort)((uint)lVar20 >> 1) & 1) + param_3[1] + -1,
                               ((ushort)lVar20 & 1) + *param_3 + -1);
          sStack_62 = param_3[2] + (short)(((uint)lVar20 & 0xfffc) >> 2) + -1;
          psVar12 = (short *)&uStack_66;
          iVar13 = 1;
          plVar11 = param_2;
          FUN_1094493b4();
          if ((int)plVar11 != 0) {
            puVar21 = (ulong *)*param_2;
            plVar1 = (long *)puVar21[1];
            if (plVar1 < (long *)puVar21[2]) {
              *(undefined4 *)plVar1 = uStack_66;
              *(short *)((long)plVar1 + 4) = sStack_62;
              *(uint *)(plVar1 + 1) = uVar4;
              puVar18 = (undefined4 *)((long)plVar1 + 0xc);
            }
            else {
              plVar19 = (long *)*puVar21;
              uVar15 = ((long)plVar1 - (long)plVar19 >> 2) * -0x5555555555555555 + 1;
              if (0x1555555555555555 < uVar15) {
                FUN_109449490();
LAB_1094493b0:
                func_0x000104c4f740();
                uVar15 = CONCAT44((float)(int)psVar12[1],(float)(int)*psVar12);
                fVar24 = *(float *)((long)plVar11 + 0x144);
                uVar15 = uVar15 ^ (uVar15 ^ CONCAT44((float)(int)psVar12[1] + 0.5,
                                                     (float)(int)*psVar12 + 0.5)) &
                                  CONCAT44(-(uint)(iVar13 == 1),-(uint)(iVar13 == 1));
                fVar26 = (float)(int)psVar12[2] + 0.5;
                if (iVar13 != 1) {
                  fVar26 = (float)(int)psVar12[2];
                }
                fVar22 = (float)uVar15 * fVar24;
                fVar23 = (float)(uVar15 >> 0x20) * fVar24;
                fVar25 = fVar24 * (float)iVar13 * -0.8660254;
                fVar27 = fVar22 * (float)*(undefined8 *)((long)plVar11 + 0xe4);
                fVar28 = fVar23 * (float)((ulong)*(undefined8 *)((long)plVar11 + 0xe4) >> 0x20);
                fVar29 = fVar24 * fVar26 * (float)*(undefined8 *)((long)plVar11 + 0xec);
                fVar30 = (float)((ulong)*(undefined8 *)((long)plVar11 + 0xec) >> 0x20) * 1.0;
                auVar31._4_4_ = fVar28;
                auVar31._0_4_ = fVar27;
                auVar31._8_4_ = fVar29;
                auVar31._12_4_ = fVar30;
                auVar6._4_4_ = fVar28;
                auVar6._0_4_ = fVar27;
                auVar6._8_4_ = fVar29;
                auVar6._12_4_ = fVar30;
                auVar31 = NEON_ext(auVar31,auVar6,8,1);
                if (fVar27 + auVar31._0_4_ + fVar28 + auVar31._4_4_ < fVar25) {
                  return (long *)0x0;
                }
                uVar15 = 0;
                goto LAB_109449450;
              }
              lVar14 = (long)puVar21[2] - (long)plVar19 >> 2;
              uVar17 = lVar14 * 0x5555555555555556;
              if (uVar17 < uVar15 || uVar17 - uVar15 == 0) {
                uVar17 = uVar15;
              }
              if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar14 * -0x5555555555555555)) {
                uVar17 = 0x1555555555555555;
              }
              if (uVar17 == 0) {
                plVar11 = (long *)0x0;
              }
              else {
                if (0x1555555555555555 < uVar17) goto LAB_1094493b0;
                plVar11 = (long *)(uVar17 * 0xc);
                __Znwm();
              }
              puVar18 = (undefined4 *)((long)plVar11 + ((long)plVar1 - (long)plVar19));
              *puVar18 = uStack_66;
              *(short *)(puVar18 + 1) = sStack_62;
              puVar18[2] = uVar4;
              plVar16 = plVar11;
              if (plVar19 != plVar1) {
                do {
                  lVar14 = *plVar19;
                  *(undefined2 *)((long)plVar16 + 4) = *(undefined2 *)((long)plVar19 + 4);
                  *(int *)plVar16 = (int)lVar14;
                  *(int *)(plVar16 + 1) = (int)plVar19[1];
                  plVar19 = (long *)((long)plVar19 + 0xc);
                  plVar16 = (long *)((long)plVar16 + 0xc);
                } while (plVar19 != plVar1);
                plVar19 = (long *)*puVar21;
              }
              puVar18 = puVar18 + 3;
              *puVar21 = (ulong)plVar11;
              puVar21[1] = (ulong)puVar18;
              puVar21[2] = (ulong)((long)plVar11 + uVar17 * 0xc);
              if (plVar19 != (long *)0x0) {
                __ZdlPv(plVar19);
                plVar11 = plVar19;
              }
            }
            puVar21[1] = (ulong)puVar18;
          }
        }
        else {
          plVar11 = param_1;
          FUN_10944914c(param_1,param_2,
                        *(long *)(*param_1 + (ulong)(uVar4 >> 0xd) * 0x18) +
                        ((ulong)uVar4 & 0x1fff) * 0x28);
        }
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != 8);
  }
  return plVar11;
  while( true ) {
    puVar5 = (undefined8 *)((long)plVar11 + uVar17 * 0x10 + 0xf4);
    uVar10 = puVar5[1];
    uVar9 = *puVar5;
    fVar27 = fVar22 * (float)uVar9;
    fVar28 = fVar23 * (float)((ulong)uVar9 >> 0x20);
    fVar29 = fVar24 * fVar26 * (float)uVar10;
    fVar30 = (float)((ulong)uVar10 >> 0x20) * 1.0;
    auVar7._4_4_ = fVar28;
    auVar7._0_4_ = fVar27;
    auVar7._8_4_ = fVar29;
    auVar7._12_4_ = fVar30;
    auVar8._4_4_ = fVar28;
    auVar8._0_4_ = fVar27;
    auVar8._8_4_ = fVar29;
    auVar8._12_4_ = fVar30;
    auVar31 = NEON_ext(auVar7,auVar8,8,1);
    uVar15 = uVar17 + 1;
    if (fVar27 + auVar31._0_4_ + fVar28 + auVar31._4_4_ < fVar25) break;
LAB_109449450:
    uVar17 = uVar15;
    if (uVar17 == 5) break;
  }
  return (long *)(ulong)(4 < uVar17);
}



/* Entry: 1094493b4; end: 10944948f;  */

bool FUN_1094493b4(long param_1,short *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  
  uVar9 = CONCAT44((float)(int)param_2[1],(float)(int)*param_2);
  fVar11 = *(float *)(param_1 + 0x144);
  uVar9 = uVar9 ^ (uVar9 ^ CONCAT44((float)(int)param_2[1] + 0.5,(float)(int)*param_2 + 0.5)) &
                  CONCAT44(-(uint)(param_3 == 1),-(uint)(param_3 == 1));
  fVar13 = (float)(int)param_2[2] + 0.5;
  if (param_3 != 1) {
    fVar13 = (float)(int)param_2[2];
  }
  fVar8 = (float)uVar9 * fVar11;
  fVar10 = (float)(uVar9 >> 0x20) * fVar11;
  fVar12 = fVar11 * (float)param_3 * -0.8660254;
  fVar14 = fVar8 * (float)*(undefined8 *)(param_1 + 0xe4);
  fVar15 = fVar10 * (float)((ulong)*(undefined8 *)(param_1 + 0xe4) >> 0x20);
  fVar16 = fVar11 * fVar13 * (float)*(undefined8 *)(param_1 + 0xec);
  fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0xec) >> 0x20) * 1.0;
  auVar18._4_4_ = fVar15;
  auVar18._0_4_ = fVar14;
  auVar18._8_4_ = fVar16;
  auVar18._12_4_ = fVar17;
  auVar2._4_4_ = fVar15;
  auVar2._0_4_ = fVar14;
  auVar2._8_4_ = fVar16;
  auVar2._12_4_ = fVar17;
  auVar18 = NEON_ext(auVar18,auVar2,8,1);
  if (fVar14 + auVar18._0_4_ + fVar15 + auVar18._4_4_ < fVar12) {
    return false;
  }
  uVar9 = 0;
  do {
    uVar7 = uVar9;
    if (uVar7 == 5) break;
    puVar1 = (undefined8 *)(param_1 + 0xf4 + uVar7 * 0x10);
    uVar6 = puVar1[1];
    uVar5 = *puVar1;
    fVar14 = fVar8 * (float)uVar5;
    fVar15 = fVar10 * (float)((ulong)uVar5 >> 0x20);
    fVar16 = fVar11 * fVar13 * (float)uVar6;
    fVar17 = (float)((ulong)uVar6 >> 0x20) * 1.0;
    auVar3._4_4_ = fVar15;
    auVar3._0_4_ = fVar14;
    auVar3._8_4_ = fVar16;
    auVar3._12_4_ = fVar17;
    auVar4._4_4_ = fVar15;
    auVar4._0_4_ = fVar14;
    auVar4._8_4_ = fVar16;
    auVar4._12_4_ = fVar17;
    auVar18 = NEON_ext(auVar3,auVar4,8,1);
    uVar9 = uVar7 + 1;
  } while (fVar12 <= fVar14 + auVar18._0_4_ + fVar15 + auVar18._4_4_);
  return 4 < uVar7;
}



/* Entry: 109449490; end: 1094494b7;  */

int * FUN_109449490(undefined8 param_1,int *param_2,long *param_3,int param_4,long *param_5,
                   undefined8 param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  piVar2 = (int *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  iVar1 = *param_2;
  *piVar2 = iVar1;
  if (param_4 != 0) {
    iVar1 = param_4;
  }
  piVar2[1] = param_2[1];
  piVar2[2] = iVar1;
  piVar2[3] = iVar1 << 1;
  piVar2[4] = 0;
  piVar2[5] = 0;
  lVar3 = *param_3;
  *(long *)(piVar2 + 8) = param_3[1];
  *(long *)(piVar2 + 6) = lVar3;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined8 *)(piVar2 + 10) = param_6;
  piVar2[0xc] = param_7;
  if (param_5 == (long *)0x0) {
    param_5 = *(long **)(piVar2 + 6);
    if (param_5 == (long *)0x0) {
      param_5 = (long *)0x0;
    }
    else {
      (**(code **)(*param_5 + 0x10))();
    }
  }
  *(long **)(piVar2 + 4) = param_5;
  return piVar2;
}



/* Entry: 1094494b8; end: 10944954f;  */

int * FUN_1094494b8(int *param_1,int *param_2,long *param_3,int param_4,long *param_5,
                   undefined8 param_6,int param_7)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  if (param_4 != 0) {
    iVar1 = param_4;
  }
  param_1[1] = param_2[1];
  param_1[2] = iVar1;
  param_1[3] = iVar1 << 1;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar2 = *param_3;
  *(long *)(param_1 + 8) = param_3[1];
  *(long *)(param_1 + 6) = lVar2;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined8 *)(param_1 + 10) = param_6;
  param_1[0xc] = param_7;
  if (param_5 == (long *)0x0) {
    param_5 = *(long **)(param_1 + 6);
    if (param_5 == (long *)0x0) {
      param_5 = (long *)0x0;
    }
    else {
      (**(code **)(*param_5 + 0x10))();
    }
  }
  *(long **)(param_1 + 4) = param_5;
  return param_1;
}



/* Entry: 109449550; end: 109449987;  */

long * FUN_109449550(long *param_1,short *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (long)(int)*param_2 * 0x466f45d + (long)(int)param_2[1] * 0x12740a5 +
            (long)(int)param_2[2] * 0x4f9ffb7;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (((*(short *)(plVar6 + 2) == *param_2) &&
              (*(short *)((long)plVar6 + 0x12) == param_2[1])) &&
             (*(short *)((long)plVar6 + 0x14) == param_2[2])) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109449988; end: 10944a47b;  */

void FUN_109449988(long param_1,long param_2,long *param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  bool bVar24;
  long lVar25;
  ulong *puVar26;
  long lVar27;
  long *plVar28;
  uint uVar29;
  undefined1 (*pauVar30) [16];
  ulong uVar31;
  ushort *puVar32;
  bool bVar33;
  ulong uVar34;
  uint uVar35;
  ulong *puVar36;
  ulong *puVar37;
  undefined1 (*pauVar38) [16];
  uint uVar39;
  uint uVar40;
  undefined1 *puVar41;
  long *plVar42;
  undefined8 unaff_x21;
  undefined1 (*pauVar43) [16];
  undefined1 (*pauVar44) [16];
  long lVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  undefined1 auVar62 [16];
  undefined8 auStack_448 [9];
  long lStack_400;
  undefined8 uStack_3f8;
  long *plStack_3f0;
  undefined1 (*pauStack_3e8) [16];
  undefined1 *puStack_3e0;
  code *pcStack_3d8;
  long *plStack_3d0;
  ulong *puStack_3c8;
  int iStack_3bc;
  undefined1 (*pauStack_3b8) [16];
  long lStack_3b0;
  undefined1 (*pauStack_3a8) [16];
  long *plStack_3a0;
  undefined1 (*pauStack_398) [16];
  ulong *puStack_390;
  uint uStack_388;
  uint uStack_384;
  undefined1 *puStack_380;
  undefined1 (*pauStack_378) [16];
  undefined1 auStack_370 [256];
  long alStack_270 [10];
  undefined4 uStack_220;
  undefined8 uStack_218;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pauVar16 = (undefined1 (*) [16])auStack_370;
  pauVar17 = (undefined1 (*) [16])0x100;
  plStack_3d0 = param_3;
  lStack_3b0 = param_2;
  _snprintf(pauVar16,0x100,&UNK_10f56d9c2);
  lVar25 = param_1 + ((ulong)param_3 & 0xffffffff) * 0x18;
  pauVar43 = *(undefined1 (**) [16])(lVar25 + 0x2780);
  pauStack_3b8 = *(undefined1 (**) [16])(lVar25 + 0x2788);
  plVar42 = param_3;
  plStack_3a0 = param_3;
  if (pauVar43 != pauStack_3b8) {
    unaff_x21 = 0x466f45d;
    plVar42 = (long *)(param_1 + 0x26c0);
    puStack_390 = (ulong *)(plVar42 + ((ulong)param_3 & 0xffffffff) * 0xc);
    puStack_3c8 = puStack_390 + 2;
    iStack_3bc = param_4;
    do {
      pauVar17 = pauVar43;
      pauVar16 = (undefined1 (*) [16])(lStack_3b0 + 0x50);
      pauStack_398 = pauVar17;
      FUN_1093a8f80();
      if ((pauVar16 == (undefined1 (*) [16])0x0) ||
         (lVar25 = *(long *)(pauVar16[1] + 8), lVar25 == 0)) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__puts_11034c9b8)(&UNK_10f56da1c);
          return;
        }
        goto LAB_10944a448;
      }
      pauVar43 = (undefined1 (*) [16])
                 ((long)(int)*(short *)(lVar25 + 0x180c) * 0x466f45d +
                  (long)(int)*(short *)(lVar25 + 0x180e) * 0x12740a5 +
                 (long)(int)*(short *)(lVar25 + 0x1810) * 0x4f9ffb7);
      pauVar17 = (undefined1 (*) [16])puStack_390[1];
      if (pauVar17 != (undefined1 (*) [16])0x0) {
        puVar41 = pauVar17[-1] + 0xf;
        if (((ulong)pauVar17 & (ulong)puVar41) == 0) {
          pauStack_378 = (undefined1 (*) [16])((ulong)pauVar43 & (ulong)puVar41);
        }
        else {
          pauStack_378 = pauVar43;
          if (pauVar17 <= pauVar43) {
            uVar31 = 0;
            if (pauVar17 != (undefined1 (*) [16])0x0) {
              uVar31 = (ulong)pauVar43 / (ulong)pauVar17;
            }
            pauStack_378 = (undefined1 (*) [16])((long)pauVar43 - uVar31 * (long)pauVar17);
          }
        }
        puVar37 = *(ulong **)(*puStack_390 + (long)pauStack_378 * 8);
        if (puVar37 != (ulong *)0x0) {
          for (pauVar44 = (undefined1 (*) [16])*puVar37; pauVar44 != (undefined1 (*) [16])0x0;
              pauVar44 = *(undefined1 (**) [16])*pauVar44) {
            pauVar38 = *(undefined1 (**) [16])(*pauVar44 + 8);
            if (pauVar38 == pauVar43) {
              if (((*(short *)pauVar44[1] == *(short *)(lVar25 + 0x180c)) &&
                  (*(short *)(pauVar44[1] + 2) == *(short *)(lVar25 + 0x180e))) &&
                 (*(short *)(pauVar44[1] + 4) == *(short *)(lVar25 + 0x1810))) goto LAB_109449e0c;
            }
            else {
              if (((ulong)pauVar17 & (ulong)puVar41) == 0) {
                pauVar38 = (undefined1 (*) [16])((ulong)pauVar38 & (ulong)puVar41);
              }
              else if (pauVar17 <= pauVar38) {
                uVar31 = 0;
                if (pauVar17 != (undefined1 (*) [16])0x0) {
                  uVar31 = (ulong)pauVar38 / (ulong)pauVar17;
                }
                pauVar38 = (undefined1 (*) [16])((long)pauVar38 - uVar31 * (long)pauVar17);
              }
              if (pauVar38 != pauStack_378) break;
            }
          }
        }
      }
      pauVar44 = (undefined1 (*) [16])0x20;
      __Znwm();
      *(undefined8 *)*pauVar44 = 0;
      *(undefined1 (**) [16])(*pauVar44 + 8) = pauVar43;
      uVar7 = *(undefined2 *)(lVar25 + 0x1810);
      *(undefined4 *)pauVar44[1] = *(undefined4 *)(lVar25 + 0x180c);
      *(undefined2 *)(pauVar44[1] + 4) = uVar7;
      *(undefined8 *)(pauVar44[1] + 8) = 0;
      pauVar16 = pauVar44;
      if ((pauVar17 == (undefined1 (*) [16])0x0) ||
         (pauVar38 = pauStack_378,
         *(float *)(puStack_390 + 4) * (float)pauVar17 < (float)(puStack_390[3] + 1))) {
        uVar31 = 1;
        if ((undefined1 (*) [16])0x2 < pauVar17) {
          uVar31 = (ulong)(((ulong)pauVar17 & (ulong)(pauVar17[-1] + 0xf)) != 0);
        }
        pauVar38 = (undefined1 (*) [16])(uVar31 | (long)pauVar17 << 1);
        pauVar30 = (undefined1 (*) [16])
                   (long)((float)(puStack_390[3] + 1) / *(float *)(puStack_390 + 4));
        if (pauVar38 <= pauVar30) {
          pauVar38 = pauVar30;
        }
        if (pauVar38[-1] + 0xf == (undefined1 *)0x0) {
          pauVar38 = (undefined1 (*) [16])0x2;
        }
        else if (((ulong)pauVar38 & (ulong)(pauVar38[-1] + 0xf)) != 0) {
          __ZNSt3__112__next_primeEm();
          pauVar17 = (undefined1 (*) [16])puStack_390[1];
          pauVar16 = pauVar38;
        }
        if (pauVar17 < pauVar38) {
LAB_109449c04:
          pauVar17 = pauVar38;
          if ((ulong)pauVar17 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_10944a444;
          }
          uVar31 = (long)pauVar17 << 3;
          __Znwm();
          pauVar16 = (undefined1 (*) [16])*puStack_390;
          *puStack_390 = uVar31;
          if (pauVar16 != (undefined1 (*) [16])0x0) {
            __ZdlPv();
          }
          pauVar38 = (undefined1 (*) [16])0x0;
          puStack_390[1] = (ulong)pauVar17;
          do {
            *(undefined8 *)(*puStack_390 + (long)pauVar38 * 8) = 0;
            pauVar38 = (undefined1 (*) [16])(*pauVar38 + 1);
          } while (pauVar17 != pauVar38);
          puVar37 = (ulong *)*puStack_3c8;
          if (puVar37 != (ulong *)0x0) {
            pauVar38 = (undefined1 (*) [16])puVar37[1];
            puVar41 = pauVar17[-1] + 0xf;
            if (((ulong)pauVar17 & (ulong)puVar41) == 0) {
              pauVar38 = (undefined1 (*) [16])((ulong)pauVar38 & (ulong)puVar41);
            }
            else if (pauVar17 <= pauVar38) {
              uVar31 = 0;
              if (pauVar17 != (undefined1 (*) [16])0x0) {
                uVar31 = (ulong)pauVar38 / (ulong)pauVar17;
              }
              pauVar38 = (undefined1 (*) [16])((long)pauVar38 - uVar31 * (long)pauVar17);
            }
            *(ulong **)(*puStack_390 + (long)pauVar38 * 8) = puStack_3c8;
            puVar26 = (ulong *)*puVar37;
            while (puVar26 != (ulong *)0x0) {
              pauVar30 = (undefined1 (*) [16])puVar26[1];
              if (((ulong)pauVar17 & (ulong)puVar41) == 0) {
                pauVar30 = (undefined1 (*) [16])((ulong)pauVar30 & (ulong)puVar41);
              }
              else if (pauVar17 <= pauVar30) {
                uVar31 = 0;
                if (pauVar17 != (undefined1 (*) [16])0x0) {
                  uVar31 = (ulong)pauVar30 / (ulong)pauVar17;
                }
                pauVar30 = (undefined1 (*) [16])((long)pauVar30 - uVar31 * (long)pauVar17);
              }
              puVar36 = puVar26;
              if (pauVar30 != pauVar38) {
                uVar31 = *puStack_390;
                if (*(long *)(uVar31 + (long)pauVar30 * 8) == 0) {
                  *(ulong **)(uVar31 + (long)pauVar30 * 8) = puVar37;
                  pauVar38 = pauVar30;
                }
                else {
                  *puVar37 = *puVar26;
                  *puVar26 = **(ulong **)(uVar31 + (long)pauVar30 * 8);
                  **(ulong **)(uVar31 + (long)pauVar30 * 8) = (ulong)puVar26;
                  puVar36 = puVar37;
                }
              }
              puVar37 = puVar36;
              puVar26 = (ulong *)*puVar36;
            }
          }
        }
        else if (pauVar38 < pauVar17) {
          pauVar16 = (undefined1 (*) [16])
                     (long)((float)puStack_390[3] / *(float *)(puStack_390 + 4));
          if ((pauVar17 < (undefined1 (*) [16])0x3) ||
             (((ulong)pauVar17 & (ulong)(pauVar17[-1] + 0xf)) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((undefined1 (*) [16])0x1 < pauVar16) {
            pauVar16 = (undefined1 (*) [16])(1L << (-LZCOUNT(pauVar16[-1] + 0xf) & 0x3fU));
          }
          if (pauVar38 <= pauVar16) {
            pauVar38 = pauVar16;
          }
          if (pauVar38 < pauVar17) {
            if (pauVar38 != (undefined1 (*) [16])0x0) goto LAB_109449c04;
            pauVar16 = (undefined1 (*) [16])*puStack_390;
            *puStack_390 = 0;
            if (pauVar16 != (undefined1 (*) [16])0x0) {
              __ZdlPv();
            }
            pauVar17 = (undefined1 (*) [16])0x0;
            puStack_390[1] = 0;
          }
          else {
            pauVar17 = (undefined1 (*) [16])puStack_390[1];
          }
        }
        if (((ulong)pauVar17 & (ulong)(pauVar17[-1] + 0xf)) == 0) {
          pauVar38 = (undefined1 (*) [16])((ulong)(pauVar17[-1] + 0xf) & (ulong)pauVar43);
        }
        else {
          pauVar38 = pauVar43;
          if (pauVar17 <= pauVar43) {
            uVar31 = 0;
            if (pauVar17 != (undefined1 (*) [16])0x0) {
              uVar31 = (ulong)pauVar43 / (ulong)pauVar17;
            }
            pauVar38 = (undefined1 (*) [16])((long)pauVar43 - uVar31 * (long)pauVar17);
          }
        }
      }
      uVar31 = *puStack_390;
      puVar37 = *(ulong **)(uVar31 + (long)pauVar38 * 8);
      if (puVar37 == (ulong *)0x0) {
        *(ulong *)*pauVar44 = *puStack_3c8;
        *puStack_3c8 = (ulong)pauVar44;
        *(ulong **)(uVar31 + (long)pauVar38 * 8) = puStack_3c8;
        if (*(long *)*pauVar44 != 0) {
          pauVar43 = *(undefined1 (**) [16])(*(long *)*pauVar44 + 8);
          if (((ulong)pauVar17 & (ulong)(pauVar17[-1] + 0xf)) == 0) {
            pauVar43 = (undefined1 (*) [16])((ulong)pauVar43 & (ulong)(pauVar17[-1] + 0xf));
          }
          else if (pauVar17 <= pauVar43) {
            uVar31 = 0;
            if (pauVar17 != (undefined1 (*) [16])0x0) {
              uVar31 = (ulong)pauVar43 / (ulong)pauVar17;
            }
            pauVar43 = (undefined1 (*) [16])((long)pauVar43 - uVar31 * (long)pauVar17);
          }
          puVar37 = (ulong *)(*puStack_390 + (long)pauVar43 * 8);
          goto LAB_109449df8;
        }
      }
      else {
        *(ulong *)*pauVar44 = *puVar37;
LAB_109449df8:
        *puVar37 = (ulong)pauVar44;
      }
      puStack_390[3] = puStack_390[3] + 1;
LAB_109449e0c:
      puVar37 = puStack_390;
      pauVar43 = *(undefined1 (**) [16])(pauVar44[1] + 8);
      if (pauVar43 == (undefined1 (*) [16])0x0) {
        if (puStack_390[9] == puStack_390[8]) {
          uVar31 = puStack_390[6];
          pauVar17 = *(undefined1 (**) [16])(uVar31 - 0x10);
          pauVar16 = *(undefined1 (**) [16])(uVar31 - 8);
          if (pauVar17 == pauVar16) {
            if (uVar31 == puStack_390[7]) {
              alStack_270[0] = 0;
              uStack_218 = 0;
              alStack_270[3] = 0;
              alStack_270[2] = 0;
              alStack_270[5] = 0;
              alStack_270[4] = 0;
              alStack_270[7] = 0;
              alStack_270[6] = 0;
              alStack_270[9] = 0;
              alStack_270[8] = 0;
              uStack_220 = 0;
              FUN_1099a9f0c(alStack_270,&UNK_10f568e28,0x70,2,FUN_1099aa768,0);
              FUN_1092b4db8(alStack_270[1] + 0x7540,&UNK_10f568ef0,0x46);
              FUN_1099ab3b0(alStack_270);
              FUN_109447fb0(puStack_390 + 5,
                            ((long)(puStack_390[7] - puStack_390[5]) >> 3) * 0x5555555555555556);
              uVar31 = puStack_390[6];
            }
            FUN_10944806c(puStack_390 + 5,
                          ((long)(uVar31 - puStack_390[5]) >> 3) * -0x5555555555555555 + 1);
            puVar37 = puStack_390 + 6;
            func_0x000109448204(*puVar37 - 0x18);
            uVar31 = *puVar37;
            pauVar17 = *(undefined1 (**) [16])(uVar31 - 0x10);
            pauVar16 = *(undefined1 (**) [16])(uVar31 - 8);
          }
          if (pauVar17 < pauVar16) {
            pauVar16 = pauVar17;
            _bzero(pauVar17,0x608);
            pauVar17[0x60][0] = 1;
            puVar41 = pauVar17[0x60] + 8;
          }
          else {
            lVar27 = (long)pauVar17 - *(long *)(uVar31 - 0x18);
            uVar20 = (lVar27 >> 3) * 0x70bf015390948f41 + 1;
            if (0x2a721291e81fd5 < uVar20) {
              FUN_109448364();
LAB_10944a444:
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x10944a448);
              (*pcVar15)();
            }
            lVar19 = (long)pauVar16 - *(long *)(uVar31 - 0x18) >> 3;
            uVar21 = lVar19 * -0x1e81fd58ded6e17e;
            if (uVar21 < uVar20 || uVar21 - uVar20 == 0) {
              uVar21 = uVar20;
            }
            if (0x15390948f40fe9 < (ulong)(lVar19 * 0x70bf015390948f41)) {
              uVar21 = 0x2a721291e81fd5;
            }
            if (0x2a721291e81fd5 < uVar21) {
              func_0x000104c4f740();
              goto LAB_10944a444;
            }
            lVar19 = uVar21 * 0x608;
            __Znwm();
            lVar27 = lVar19 + lVar27;
            pauStack_378 = (undefined1 (*) [16])(lVar19 + uVar21 * 0x608);
            _bzero(lVar27,0x608);
            *(undefined1 *)(lVar27 + 0x600) = 1;
            puStack_380 = (undefined1 *)(lVar27 + 0x608);
            pauVar16 = *(undefined1 (**) [16])(uVar31 - 0x18);
            lVar27 = lVar27 - (*(long *)(uVar31 - 0x10) - (long)pauVar16);
            _memcpy(lVar27,pauVar16);
            puVar41 = puStack_380;
            *(long *)(uVar31 - 0x18) = lVar27;
            *(undefined1 **)(uVar31 - 0x10) = puStack_380;
            *(undefined1 (**) [16])(uVar31 - 8) = pauStack_378;
            if (pauVar16 != (undefined1 (*) [16])0x0) {
              __ZdlPv();
            }
          }
          *(undefined1 **)(uVar31 - 0x10) = puVar41;
          puStack_390[0xb] = puStack_390[0xb] + 1;
          pauVar43 = (undefined1 (*) [16])(puVar41 + -0x608);
        }
        else {
          puVar26 = (ulong *)(puStack_390[9] - 8);
          pauVar43 = (undefined1 (*) [16])*puVar26;
          puStack_390[9] = (ulong)puVar26;
          pauVar16 = pauVar43;
          _bzero(pauVar43,0x608);
          pauVar43[0x60][0] = 1;
          puVar37[0xb] = puVar37[0xb] + 1;
        }
        *(undefined1 (**) [16])(pauVar44[1] + 8) = pauVar43;
      }
      pauVar44 = pauStack_398;
      lVar27 = 0;
      pauVar17 = pauVar43 + 0x20;
      puVar32 = (ushort *)(lVar25 + 2);
      do {
        (*pauVar17)[lVar27] = iStack_3bc <= (int)(uint)*puVar32;
        lVar27 = lVar27 + 1;
        puVar32 = puVar32 + 6;
      } while (lVar27 != 0x200);
      if ((int)plStack_3a0 == 0) {
        pauVar16 = pauVar43 + 0x40;
        _memcpy(pauVar16,pauVar17,0x200);
        pauVar43[0x60][0] = 1;
        pauVar44 = pauStack_398;
      }
      else {
        pauStack_3a8 = pauVar17;
        pauVar38 = (undefined1 (*) [16])0x0;
        uVar29 = 0;
        do {
          uVar39 = uVar29 << 8;
          uStack_388 = uVar29;
          uStack_384 = uVar39;
          uVar35 = 0;
          do {
            uVar8 = uVar39 | uVar35 << 5;
            uVar40 = 0;
            do {
              uVar31 = *(ulong *)(param_1 + 0x26c8);
              if (uVar31 != 0) {
                uVar3 = (uint)*(ushort *)(lVar25 + 0x180c) << 1;
                uVar9 = uVar40 | uVar3;
                pauVar16 = (undefined1 (*) [16])(ulong)uVar9;
                uVar1 = *(short *)(lVar25 + 0x180e) << 1;
                uVar2 = *(short *)(lVar25 + 0x1810) << 1;
                uVar20 = (long)(int)(short)uVar9 * 0x466f45d +
                         (long)(int)(short)((ushort)uVar35 | uVar1) * 0x12740a5 +
                         (long)(int)(short)((ushort)uVar29 | uVar2) * 0x4f9ffb7;
                uVar21 = uVar31 - 1;
                if ((uVar31 & uVar21) == 0) {
                  uVar23 = uVar20 & uVar21;
                }
                else {
                  uVar23 = uVar20;
                  if (uVar31 <= uVar20) {
                    uVar23 = 0;
                    if (uVar31 != 0) {
                      uVar23 = uVar20 / uVar31;
                    }
                    uVar23 = uVar20 - uVar23 * uVar31;
                  }
                }
                plVar28 = *(long **)(*plVar42 + uVar23 * 8);
                if (plVar28 != (long *)0x0) {
                  for (plVar28 = (long *)*plVar28; plVar28 != (long *)0x0;
                      plVar28 = (long *)*plVar28) {
                    uVar34 = plVar28[1];
                    if (uVar34 == uVar20) {
                      if ((((uint)*(ushort *)(plVar28 + 2) == (uVar40 | uVar3 & 0xffff)) &&
                          ((uint)*(ushort *)((long)plVar28 + 0x12) == (uVar35 | uVar1))) &&
                         ((uint)*(ushort *)((long)plVar28 + 0x14) == (uVar29 | uVar2))) {
                        lVar27 = plVar28[3];
                        if (lVar27 != 0) {
                          pauStack_378 = pauVar38;
                          if ((*(byte *)(lVar27 + 0x600) & 1) == 0) {
                            lVar19 = 0;
                            do {
                              pauVar16 = (undefined1 (*) [16])(lVar27 + lVar19);
                              uVar14 = *(undefined8 *)(pauVar16[0x20] + 8);
                              uVar13 = *(undefined8 *)pauVar16[0x20];
                              auVar62 = *pauVar16;
                              plVar28 = alStack_270;
                              *(ulong *)((long)alStack_270 + lVar19 + 8) =
                                   CONCAT17(auVar62[0xf] | (byte)((ulong)uVar14 >> 0x38),
                                            CONCAT16(auVar62[0xe] | (byte)((ulong)uVar14 >> 0x30),
                                                     CONCAT15(auVar62[0xd] |
                                                              (byte)((ulong)uVar14 >> 0x28),
                                                              CONCAT14(auVar62[0xc] |
                                                                       (byte)((ulong)uVar14 >> 0x20)
                                                                       ,CONCAT13(auVar62[0xb] |
                                                                                 (byte)((ulong)
                                                  uVar14 >> 0x18),
                                                  CONCAT12(auVar62[10] |
                                                           (byte)((ulong)uVar14 >> 0x10),
                                                           CONCAT11(auVar62[9] |
                                                                    (byte)((ulong)uVar14 >> 8),
                                                                    auVar62[8] | (byte)uVar14)))))))
                              ;
                              *(ulong *)((long)plVar28 + lVar19) =
                                   CONCAT17(auVar62[7] | (byte)((ulong)uVar13 >> 0x38),
                                            CONCAT16(auVar62[6] | (byte)((ulong)uVar13 >> 0x30),
                                                     CONCAT15(auVar62[5] |
                                                              (byte)((ulong)uVar13 >> 0x28),
                                                              CONCAT14(auVar62[4] |
                                                                       (byte)((ulong)uVar13 >> 0x20)
                                                                       ,CONCAT13(auVar62[3] |
                                                                                 (byte)((ulong)
                                                  uVar13 >> 0x18),
                                                  CONCAT12(auVar62[2] |
                                                           (byte)((ulong)uVar13 >> 0x10),
                                                           CONCAT11(auVar62[1] |
                                                                    (byte)((ulong)uVar13 >> 8),
                                                                    auVar62[0] | (byte)uVar13)))))))
                              ;
                              lVar19 = lVar19 + 0x10;
                            } while (lVar19 != 0x200);
                          }
                          else {
                            plVar28 = (long *)(lVar27 + 0x200);
                          }
                          lVar27 = 0;
                          puStack_380 = (undefined1 *)CONCAT44(puStack_380._4_4_,uVar8);
                          do {
                            lVar19 = 0;
                            do {
                              lVar22 = 0;
                              do {
                                lVar18 = 0;
                                bVar46 = 0;
                                lVar4 = lVar27 * 0x80 + lVar19 * 0x10 + lVar22 * 2;
                                bVar6 = true;
                                do {
                                  bVar33 = bVar6;
                                  lVar45 = 0;
                                  bVar6 = true;
                                  do {
                                    bVar24 = bVar6;
                                    bVar46 = *(char *)((long)plVar28 + lVar45 + lVar18 + lVar4) +
                                             bVar46 + *(char *)((long)plVar28 +
                                                               lVar45 + lVar18 + lVar4 + 0x40);
                                    lVar45 = 8;
                                    bVar6 = false;
                                  } while (bVar24);
                                  lVar18 = 1;
                                  bVar6 = false;
                                } while (bVar33);
                                pauVar43[lVar27 * 4]
                                [lVar22 + lVar19 * 8 + (ulong)(uVar8 | uVar40 << 2)] = 7 < bVar46;
                                lVar22 = lVar22 + 1;
                              } while (lVar22 != 4);
                              lVar19 = lVar19 + 1;
                            } while (lVar19 != 4);
                            lVar27 = lVar27 + 1;
                          } while (lVar27 != 4);
                          pauVar38 = (undefined1 (*) [16])(*pauVar38 + 1);
                          pauVar16 = (undefined1 (*) [16])0x4;
                          uVar39 = uStack_384;
                        }
                        break;
                      }
                    }
                    else {
                      if ((uVar31 & uVar21) == 0) {
                        uVar34 = uVar34 & uVar21;
                      }
                      else if (uVar31 <= uVar34) {
                        uVar10 = 0;
                        if (uVar31 != 0) {
                          uVar10 = uVar34 / uVar31;
                        }
                        uVar34 = uVar34 - uVar10 * uVar31;
                      }
                      if (uVar34 != uVar23) break;
                    }
                  }
                }
              }
              bVar6 = uVar40 == 0;
              uVar40 = 1;
            } while (bVar6);
            bVar6 = uVar35 == 0;
            uVar35 = 1;
          } while (bVar6);
          bVar6 = uVar29 == 0;
          uVar29 = 1;
        } while (bVar6);
        if (pauVar38 == (undefined1 (*) [16])0x0) {
          pauVar43[0x60][0] = 1;
        }
        else {
          lVar25 = 0;
          bVar46 = 0;
          bVar47 = 0;
          bVar48 = 0;
          bVar49 = 0;
          bVar50 = 0;
          bVar51 = 0;
          bVar52 = 0;
          bVar53 = 0;
          bVar54 = 0;
          bVar55 = 0;
          bVar56 = 0;
          bVar57 = 0;
          bVar58 = 0;
          bVar59 = 0;
          bVar60 = 0;
          bVar61 = 0;
          do {
            pbVar11 = *pauVar43 + lVar25;
            bVar46 = *pbVar11 | bVar46;
            bVar47 = pbVar11[1] | bVar47;
            bVar48 = pbVar11[2] | bVar48;
            bVar49 = pbVar11[3] | bVar49;
            bVar50 = pbVar11[4] | bVar50;
            bVar51 = pbVar11[5] | bVar51;
            bVar52 = pbVar11[6] | bVar52;
            bVar53 = pbVar11[7] | bVar53;
            bVar54 = pbVar11[8] | bVar54;
            bVar55 = pbVar11[9] | bVar55;
            bVar56 = pbVar11[10] | bVar56;
            bVar57 = pbVar11[0xb] | bVar57;
            bVar58 = pbVar11[0xc] | bVar58;
            bVar59 = pbVar11[0xd] | bVar59;
            bVar60 = pbVar11[0xe] | bVar60;
            bVar61 = pbVar11[0xf] | bVar61;
            lVar25 = lVar25 + 0x10;
          } while (lVar25 != 0x200);
          auVar62[1] = bVar47;
          auVar62[0] = bVar46;
          auVar62[2] = bVar48;
          auVar62[3] = bVar49;
          auVar62[4] = bVar50;
          auVar62[5] = bVar51;
          auVar62[6] = bVar52;
          auVar62[7] = bVar53;
          auVar62[8] = bVar54;
          auVar62[9] = bVar55;
          auVar62[10] = bVar56;
          auVar62[0xb] = bVar57;
          auVar62[0xc] = bVar58;
          auVar62[0xd] = bVar59;
          auVar62[0xe] = bVar60;
          auVar62[0xf] = bVar61;
          auVar12[1] = bVar47;
          auVar12[0] = bVar46;
          auVar12[2] = bVar48;
          auVar12[3] = bVar49;
          auVar12[4] = bVar50;
          auVar12[5] = bVar51;
          auVar12[6] = bVar52;
          auVar12[7] = bVar53;
          auVar12[8] = bVar54;
          auVar12[9] = bVar55;
          auVar12[10] = bVar56;
          auVar12[0xb] = bVar57;
          auVar12[0xc] = bVar58;
          auVar12[0xd] = bVar59;
          auVar12[0xe] = bVar60;
          auVar12[0xf] = bVar61;
          auVar62 = NEON_ext(auVar62,auVar12,8,1);
          lVar25 = CONCAT17(bVar53 | auVar62[7],
                            CONCAT16(bVar52 | auVar62[6],
                                     CONCAT15(bVar51 | auVar62[5],
                                              CONCAT14(bVar50 | auVar62[4],
                                                       CONCAT13(bVar49 | auVar62[3],
                                                                CONCAT12(bVar48 | auVar62[2],
                                                                         CONCAT11(bVar47 | auVar62[1
                                                  ],bVar46 | auVar62[0])))))));
          pauVar43[0x60][0] = lVar25 == 0;
          if (lVar25 != 0) {
            lVar25 = 0x200;
            do {
              uVar14 = *(undefined8 *)(pauVar43[0x20] + 8);
              uVar13 = *(undefined8 *)pauVar43[0x20];
              auVar62 = *pauVar43;
              *(ulong *)(pauVar43[0x40] + 8) =
                   CONCAT17((byte)((ulong)uVar14 >> 0x38) & ~auVar62[0xf],
                            CONCAT16((byte)((ulong)uVar14 >> 0x30) & ~auVar62[0xe],
                                     CONCAT15((byte)((ulong)uVar14 >> 0x28) & ~auVar62[0xd],
                                              CONCAT14((byte)((ulong)uVar14 >> 0x20) & ~auVar62[0xc]
                                                       ,CONCAT13((byte)((ulong)uVar14 >> 0x18) &
                                                                 ~auVar62[0xb],
                                                                 CONCAT12((byte)((ulong)uVar14 >>
                                                                                0x10) & ~auVar62[10]
                                                                          ,CONCAT11((byte)((ulong)
                                                  uVar14 >> 8) & ~auVar62[9],
                                                  (byte)uVar14 & ~auVar62[8])))))));
              *(ulong *)pauVar43[0x40] =
                   CONCAT17((byte)((ulong)uVar13 >> 0x38) & ~auVar62[7],
                            CONCAT16((byte)((ulong)uVar13 >> 0x30) & ~auVar62[6],
                                     CONCAT15((byte)((ulong)uVar13 >> 0x28) & ~auVar62[5],
                                              CONCAT14((byte)((ulong)uVar13 >> 0x20) & ~auVar62[4],
                                                       CONCAT13((byte)((ulong)uVar13 >> 0x18) &
                                                                ~auVar62[3],
                                                                CONCAT12((byte)((ulong)uVar13 >>
                                                                               0x10) & ~auVar62[2],
                                                                         CONCAT11((byte)((ulong)
                                                  uVar13 >> 8) & ~auVar62[1],
                                                  (byte)uVar13 & ~auVar62[0])))))));
              pauVar43 = pauVar43 + 1;
              lVar25 = lVar25 + -0x10;
              pauVar17 = pauStack_3a8;
            } while (lVar25 != 0);
            goto LAB_10944a35c;
          }
        }
        pauVar16 = pauVar43 + 0x40;
        pauVar17 = pauStack_3a8;
        _memcpy(pauVar16,pauVar17,0x200);
      }
LAB_10944a35c:
      pauVar43 = (undefined1 (*) [16])(*pauVar44 + 6);
    } while ((undefined1 (*) [16])(*pauVar44 + 6) != pauStack_3b8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
LAB_10944a448:
  ___stack_chk_fail();
  pauVar43 = pauVar16;
  __Unwind_Resume();
  pcStack_3d8 = FUN_10944a47c;
  lStack_400 = param_1;
  uStack_3f8 = unaff_x21;
  plStack_3f0 = plVar42;
  pauStack_3e8 = pauVar16;
  puStack_3e0 = &stack0xfffffffffffffff0;
  func_0x00010937fbc4(auStack_448,pauVar17);
  lVar25 = 0;
  do {
    puVar5 = (undefined8 *)(*pauVar43 + lVar25);
    uVar13 = *(undefined8 *)((long)auStack_448 + lVar25);
    puVar5[1] = *(undefined8 *)((long)auStack_448 + lVar25 + 8);
    *puVar5 = uVar13;
    puVar5[2] = *(undefined8 *)((long)auStack_448 + lVar25 + 0x10);
    lVar25 = lVar25 + 0x18;
  } while (lVar25 != 0x48);
  uVar13 = *(undefined8 *)pauVar17[2];
  *(undefined8 *)pauVar43[5] = *(undefined8 *)(pauVar17[2] + 8);
  *(undefined8 *)(pauVar43[4] + 8) = uVar13;
  *(undefined8 *)(pauVar43[5] + 8) = *(undefined8 *)pauVar17[3];
  return;
}



/* Entry: 10944a47c; end: 10944a4f3;  */

void FUN_10944a47c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 auStack_78 [9];
  
  func_0x00010937fbc4(auStack_78,param_2);
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar2);
    uVar3 = *(undefined8 *)((long)auStack_78 + lVar2);
    puVar1[1] = *(undefined8 *)((long)auStack_78 + lVar2 + 8);
    *puVar1 = uVar3;
    puVar1[2] = *(undefined8 *)((long)auStack_78 + lVar2 + 0x10);
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x30);
  return;
}



/* Entry: 10944a4f4; end: 10944a963;  */

long * FUN_10944a4f4(long *param_1,undefined8 *param_2,long *param_3,double *param_4)

{
  undefined8 *puVar1;
  double *pdVar2;
  double *pdVar3;
  undefined4 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  float fVar8;
  unkbyte9 Var9;
  long *plVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  long *plVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined8 uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  ulong uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  double adStack_240 [2];
  double dStack_230;
  double dStack_228;
  double dStack_218;
  double dStack_210;
  double dStack_200;
  double dStack_1f8;
  double dStack_1e8;
  double adStack_1d8 [4];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_268 = 0;
  lStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_250 = 0x3f800000;
  pdVar2 = (double *)*param_2;
  pdVar3 = (double *)param_2[1];
  do {
    if (pdVar2 == pdVar3) {
      lVar17 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = lVar17;
      param_1[2] = param_3[2];
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 0;
      plVar14 = &lStack_270;
      FUN_10944a964();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        FUN_10944a964(&lStack_270);
        __Unwind_Resume();
        plVar10 = (long *)plVar14[2];
        while (plVar10 != (long *)0x0) {
          lVar17 = *plVar10;
          func_0x0001072a8888(plVar10 + 3);
          __ZdlPv(plVar10);
          plVar10 = (long *)lVar17;
        }
        lVar17 = *plVar14;
        *plVar14 = 0;
        if (lVar17 != 0) {
          __ZdlPv();
        }
        return plVar14;
      }
      return plVar14;
    }
    puVar16 = (undefined4 *)*param_3;
    puVar4 = (undefined4 *)param_3[1];
    if (puVar16 != puVar4) {
      dVar7 = pdVar2[1];
      Var9 = *(unkbyte9 *)pdVar2;
      auVar5[9] = (char)((ulong)dVar7 >> 8);
      auVar5._0_9_ = Var9;
      auVar5[10] = (char)((ulong)dVar7 >> 0x10);
      auVar5[0xb] = (char)((ulong)dVar7 >> 0x18);
      auVar5[0xc] = (char)((ulong)dVar7 >> 0x20);
      auVar5[0xd] = (char)((ulong)dVar7 >> 0x28);
      auVar5[0xe] = (char)((ulong)dVar7 >> 0x30);
      auVar5[0xf] = (char)((ulong)dVar7 >> 0x38);
      dVar7 = pdVar2[2];
      do {
        uStack_278 = 0;
        if (*(long *)(puVar16 + 4) != *(long *)(puVar16 + 2)) {
          do {
            plVar14 = &lStack_270;
            FUN_10944a9c0(plVar14,*puVar16,puVar16);
            plVar14 = plVar14 + 3;
            func_0x0001074b08bc(plVar14,&uStack_278);
            FUN_10944a9c0(&lStack_270,*puVar16,puVar16);
            uVar15 = uStack_278;
            lVar17 = *(long *)(puVar16 + 2);
            if (plVar14 == (long *)0x0) {
              puVar1 = (undefined8 *)(lVar17 + uStack_278 * 0xc);
              uVar38 = *puVar1;
              dVar34 = (double)(float)uVar38;
              dVar36 = (double)(float)((ulong)uVar38 >> 0x20);
              dVar41 = (double)*(float *)(puVar1 + 1);
              dVar40 = pdVar2[1];
              uVar26 = SUB81(dVar40,0);
              uVar27 = (undefined1)((ulong)dVar40 >> 8);
              uVar28 = (undefined1)((ulong)dVar40 >> 0x10);
              uVar29 = (undefined1)((ulong)dVar40 >> 0x18);
              uVar30 = (undefined1)((ulong)dVar40 >> 0x20);
              uVar31 = (undefined1)((ulong)dVar40 >> 0x28);
              uVar32 = (undefined1)((ulong)dVar40 >> 0x30);
              uVar33 = (undefined1)((ulong)dVar40 >> 0x38);
              dVar39 = *pdVar2;
              uVar18 = SUB81(dVar39,0);
              uVar19 = (undefined1)((ulong)dVar39 >> 8);
              uVar20 = (undefined1)((ulong)dVar39 >> 0x10);
              uVar21 = (undefined1)((ulong)dVar39 >> 0x18);
              uVar22 = (undefined1)((ulong)dVar39 >> 0x20);
              uVar23 = (undefined1)((ulong)dVar39 >> 0x28);
              uVar24 = (undefined1)((ulong)dVar39 >> 0x30);
              uVar25 = (undefined1)((ulong)dVar39 >> 0x38);
              dVar35 = pdVar2[2];
              if (ABS((dVar35 * dVar41 + dVar39 * dVar34 + dVar40 * dVar36) - pdVar2[3]) <= *param_4
                 ) {
                dVar37 = dVar35 * dVar35 + dVar39 * dVar39 + dVar40 * dVar40;
                if (0.0 < dVar37) {
                  dVar37 = SQRT(dVar37);
                  dVar39 = dVar39 / dVar37;
                  uVar18 = SUB81(dVar39,0);
                  uVar19 = (undefined1)((ulong)dVar39 >> 8);
                  uVar20 = (undefined1)((ulong)dVar39 >> 0x10);
                  uVar21 = (undefined1)((ulong)dVar39 >> 0x18);
                  uVar22 = (undefined1)((ulong)dVar39 >> 0x20);
                  uVar23 = (undefined1)((ulong)dVar39 >> 0x28);
                  uVar24 = (undefined1)((ulong)dVar39 >> 0x30);
                  uVar25 = (undefined1)((ulong)dVar39 >> 0x38);
                  dVar40 = dVar40 / dVar37;
                  uVar26 = SUB81(dVar40,0);
                  uVar27 = (undefined1)((ulong)dVar40 >> 8);
                  uVar28 = (undefined1)((ulong)dVar40 >> 0x10);
                  uVar29 = (undefined1)((ulong)dVar40 >> 0x18);
                  uVar30 = (undefined1)((ulong)dVar40 >> 0x20);
                  uVar31 = (undefined1)((ulong)dVar40 >> 0x28);
                  uVar32 = (undefined1)((ulong)dVar40 >> 0x30);
                  uVar33 = (undefined1)((ulong)dVar40 >> 0x38);
                  dVar35 = dVar35 / dVar37;
                }
                puVar1 = (undefined8 *)(*(long *)(puVar16 + 0xe) + uStack_278 * 0xc);
                uVar38 = *puVar1;
                dVar40 = (double)(float)uVar38;
                dVar37 = (double)(float)((ulong)uVar38 >> 0x20);
                dVar39 = (double)*(float *)(puVar1 + 1);
                dVar42 = dVar39 * dVar39 + dVar40 * dVar40 + dVar37 * dVar37;
                if (0.0 < dVar42) {
                  dVar42 = SQRT(dVar42);
                  dVar40 = dVar40 / dVar42;
                  dVar37 = dVar37 / dVar42;
                  dVar39 = dVar39 / dVar42;
                }
                dVar39 = dVar35 * dVar39 +
                         (double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,
                                                  CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,
                                                  uVar18))))))) * dVar40 +
                         (double)CONCAT17(uVar33,CONCAT16(uVar32,CONCAT15(uVar31,CONCAT14(uVar30,
                                                  CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,
                                                  uVar26))))))) * dVar37;
                dVar40 = -1.0;
                if (-1.0 <= dVar39) {
                  dVar40 = dVar39;
                }
                uVar18 = 0;
                uVar19 = 0;
                uVar20 = 0;
                uVar21 = 0;
                uVar22 = 0;
                uVar23 = 0;
                uVar24 = 0xf0;
                uVar25 = 0x3f;
                if (dVar39 <= 1.0) {
                  uVar18 = SUB81(dVar40,0);
                  uVar19 = (undefined1)((ulong)dVar40 >> 8);
                  uVar20 = (undefined1)((ulong)dVar40 >> 0x10);
                  uVar21 = (undefined1)((ulong)dVar40 >> 0x18);
                  uVar22 = (undefined1)((ulong)dVar40 >> 0x20);
                  uVar23 = (undefined1)((ulong)dVar40 >> 0x28);
                  uVar24 = (undefined1)((ulong)dVar40 >> 0x30);
                  uVar25 = (undefined1)((ulong)dVar40 >> 0x38);
                }
                _acos();
                dVar39 = param_4[1];
                bVar11 = false;
                bVar13 = false;
                bVar12 = NAN((double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22
                                                  ,CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,
                                                  uVar18))))))));
                if (!bVar12 && !NAN(dVar39)) {
                  bVar11 = (double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,
                                                  CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,
                                                  uVar18))))))) < dVar39;
                  bVar13 = (double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,
                                                  CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,
                                                  uVar18))))))) == dVar39;
                }
                if (bVar13 || bVar11 != (bVar12 || NAN(dVar39))) {
                  if ((0.0 < pdVar2[0x16]) && (0.0 < pdVar2[0x18])) {
                    FUN_10937f718(&dStack_100,pdVar2 + 4);
                    dStack_188 = dStack_f8;
                    dStack_190 = dStack_100;
                    dStack_178 = dStack_e8;
                    dStack_180 = dStack_f0;
                    dStack_168 = dStack_d8;
                    dStack_170 = dStack_e0;
                    dStack_160 = dStack_d0;
                    func_0x00010937fbc4(adStack_1d8,&dStack_190);
                    uStack_128 = uStack_1b0;
                    uStack_130 = uStack_1b8;
                    uStack_118 = uStack_1a0;
                    uStack_120 = uStack_1a8;
                    uStack_110 = uStack_198;
                    dStack_148 = adStack_1d8[1];
                    dStack_150 = adStack_1d8[0];
                    dStack_138 = adStack_1d8[3];
                    dStack_140 = adStack_1d8[2];
                    FUN_10944a47c(adStack_240,&dStack_190);
                    lVar17 = 0;
                    dVar39 = adStack_240[0] * dVar34 + dStack_228 * dVar36 + dStack_210 * dVar41 +
                             dStack_1f8;
                    adStack_1d8[0] = dVar39;
                    dVar40 = dStack_230 * dVar34 + dStack_218 * dVar36 + dVar41 * dStack_200 +
                             dStack_1e8;
                    adStack_1d8[2] = dVar40;
                    adStack_1d8[1] = 0.0;
                    do {
                      if (lVar17 != 8) {
                        dVar34 = *(double *)((long)adStack_1d8 + lVar17);
                        dVar35 = *(double *)((long)pdVar2 + lVar17 + 0xb0);
                        dVar36 = dVar35 * 0.5;
                        bVar12 = false;
                        bVar11 = false;
                        bVar13 = false;
                        if (dVar35 * -0.5 <= dVar34) {
                          bVar12 = false;
                          bVar11 = false;
                          bVar13 = true;
                          if (!NAN(dVar34) && !NAN(dVar36)) {
                            bVar12 = dVar34 < dVar36;
                            bVar11 = dVar34 == dVar36;
                            bVar13 = false;
                          }
                        }
                        if (!bVar11 && bVar12 == bVar13) goto LAB_10944a870;
                      }
                      lVar17 = lVar17 + 8;
                    } while (lVar17 != 0x18);
                    FUN_10944a47c(&dStack_190,pdVar2 + 4);
                    dVar34 = dStack_190 * dVar39 + dStack_178 * 0.0 + dStack_160 * dVar40 +
                             dStack_148;
                    dVar35 = dStack_188 * dVar39 + dStack_170 * 0.0 + dStack_158 * dVar40 +
                             dStack_140;
                    puVar1 = (undefined8 *)(*(long *)(puVar16 + 2) + uStack_278 * 0xc);
                    auVar6[8] = SUB81(dVar35,0);
                    auVar6._0_8_ = dVar34;
                    auVar6[9] = (char)((ulong)dVar35 >> 8);
                    auVar6[10] = (char)((ulong)dVar35 >> 0x10);
                    auVar6[0xb] = (char)((ulong)dVar35 >> 0x18);
                    auVar6[0xc] = (char)((ulong)dVar35 >> 0x20);
                    auVar6[0xd] = (char)((ulong)dVar35 >> 0x28);
                    auVar6[0xe] = (char)((ulong)dVar35 >> 0x30);
                    auVar6[0xf] = (char)((ulong)dVar35 >> 0x38);
                    fVar8 = (float)auVar6._8_8_;
                    *puVar1 = CONCAT17((char)((uint)fVar8 >> 0x18),
                                       CONCAT16((char)((uint)fVar8 >> 0x10),
                                                CONCAT15((char)((uint)fVar8 >> 8),
                                                         CONCAT14(SUB41(fVar8,0),(float)dVar34))));
                    *(float *)(puVar1 + 1) =
                         (float)(dVar39 * dStack_180 + dStack_168 * 0.0 + dVar40 * dStack_150 +
                                dStack_138);
                    puVar1 = (undefined8 *)(*(long *)(puVar16 + 0xe) + uStack_278 * 0xc);
                    *puVar1 = CONCAT44((float)auVar5._8_8_,(float)(double)Var9);
                    *(float *)(puVar1 + 1) = (float)dVar7;
                  }
LAB_10944a870:
                  plVar14 = &lStack_270;
                  FUN_10944a9c0(plVar14,*puVar16,puVar16);
                  func_0x0001072a83d0(plVar14 + 3,&uStack_278,&uStack_278);
                  lVar17 = *(long *)(puVar16 + 2);
                  uVar15 = uStack_278;
                }
              }
            }
            uStack_278 = uVar15 + 1;
          } while (uStack_278 <
                   (ulong)((*(long *)(puVar16 + 4) - lVar17 >> 2) * -0x5555555555555555));
        }
        puVar16 = puVar16 + 0x20;
      } while (puVar16 != puVar4);
    }
    pdVar2 = pdVar2 + 0x20;
  } while( true );
}



/* Entry: 10944a964; end: 10944a9bf;  */

long * FUN_10944a964(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x0001072a8888(plVar1 + 3);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10944a9c0; end: 10944ad9b;  */

long * FUN_10944a9c0(long *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong unaff_x24;
  
  uVar14 = (ulong)param_2;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar5 = uVar16 - 1;
    uVar15 = (uint)uVar16;
    if ((uVar16 & uVar5) == 0) {
      unaff_x24 = (ulong)(uVar15 - 1 & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar1 = 0;
        if (uVar15 != 0) {
          uVar1 = param_2 / uVar15;
        }
        unaff_x24 = (ulong)(param_2 - uVar1 * uVar15);
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == uVar14) {
          if (*(uint *)(plVar8 + 2) == param_2) {
            return plVar8;
          }
        }
        else {
          if ((uVar16 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar16 <= uVar9) {
            uVar6 = 0;
            if (uVar16 != 0) {
              uVar6 = uVar9 / uVar16;
            }
            uVar9 = uVar9 - uVar6 * uVar16;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x40;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar14;
  *(undefined4 *)(plVar8 + 2) = *param_3;
  plVar8[4] = 0;
  plVar8[3] = 0;
  plVar8[6] = 0;
  plVar8[5] = 0;
  *(undefined4 *)(plVar8 + 7) = 0x3f800000;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar16) {
      uVar5 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar5 = uVar5 | uVar16 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar16 = param_1[1];
    }
    if (uVar16 < uVar5) {
LAB_10944ab40:
      if (uVar5 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10944ad88);
        (*pcVar3)();
      }
      lVar10 = uVar5 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar10;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar16 = 0;
      param_1[1] = uVar5;
      do {
        *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
        uVar16 = uVar16 + 1;
      } while (uVar5 != uVar16);
      plVar7 = (long *)param_1[2];
      uVar16 = uVar5;
      if (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          uVar9 = uVar9 & uVar6;
        }
        else if (uVar5 <= uVar9) {
          uVar13 = 0;
          if (uVar5 != 0) {
            uVar13 = uVar9 / uVar5;
          }
          uVar9 = uVar9 - uVar13 * uVar5;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar7;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar5 & uVar6) == 0) {
            uVar13 = uVar13 & uVar6;
          }
          else if (uVar5 <= uVar13) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar13 / uVar5;
            }
            uVar13 = uVar13 - uVar2 * uVar5;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar9) {
            lVar10 = *param_1;
            if (*(long *)(lVar10 + uVar13 * 8) == 0) {
              *(long **)(lVar10 + uVar13 * 8) = plVar7;
              uVar9 = uVar13;
            }
            else {
              *plVar7 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar10 + uVar13 * 8);
              **(long **)(lVar10 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar7;
            }
          }
          plVar7 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar5 < uVar16) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar9) {
        uVar5 = uVar9;
      }
      if (uVar5 < uVar16) {
        if (uVar5 != 0) goto LAB_10944ab40;
        lVar10 = *param_1;
        *param_1 = 0;
        if (lVar10 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = param_1[1];
      }
    }
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar16 - 1U & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar5 = 0;
        if (uVar16 != 0) {
          uVar5 = uVar14 / uVar16;
        }
        unaff_x24 = uVar14 - uVar5 * uVar16;
      }
    }
  }
  lVar10 = *param_1;
  plVar7 = *(long **)(lVar10 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar8 = *plVar7;
    *plVar7 = (long)plVar8;
    *(long **)(lVar10 + unaff_x24 * 8) = plVar7;
    if (*plVar8 == 0) goto LAB_10944ad1c;
    uVar14 = *(ulong *)(*plVar8 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar14 = uVar14 & uVar16 - 1;
    }
    else if (uVar16 <= uVar14) {
      uVar5 = 0;
      if (uVar16 != 0) {
        uVar5 = uVar14 / uVar16;
      }
      uVar14 = uVar14 - uVar5 * uVar16;
    }
    plVar7 = (long *)(*param_1 + uVar14 * 8);
  }
  else {
    *plVar8 = *plVar7;
  }
  *plVar7 = (long)plVar8;
LAB_10944ad1c:
  param_1[3] = param_1[3] + 1;
  return plVar8;
}



/* Entry: 10944ad9c; end: 10944ade3;  */

void FUN_10944ad9c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001072a8888(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10944ade4; end: 10944b2d3;  */

undefined8 * FUN_10944ade4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  double *pdVar10;
  double *pdVar11;
  ulong uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  *param_1 = param_2;
  uVar15 = param_3[1];
  uVar13 = *param_3;
  uVar17 = param_3[3];
  uVar16 = param_3[2];
  uVar19 = param_3[5];
  uVar18 = param_3[4];
  uVar20 = param_3[6];
  param_1[8] = param_3[7];
  param_1[7] = uVar20;
  param_1[6] = uVar19;
  param_1[5] = uVar18;
  param_1[4] = uVar17;
  param_1[3] = uVar16;
  param_1[2] = uVar15;
  param_1[1] = uVar13;
  uVar15 = param_3[9];
  uVar13 = param_3[8];
  uVar17 = param_3[0xb];
  uVar16 = param_3[10];
  uVar19 = param_3[0xd];
  uVar18 = param_3[0xc];
  uVar20 = param_3[0xe];
  param_1[0x10] = param_3[0xf];
  param_1[0xf] = uVar20;
  param_1[0xe] = uVar19;
  param_1[0xd] = uVar18;
  param_1[0xc] = uVar17;
  param_1[0xb] = uVar16;
  param_1[10] = uVar15;
  param_1[9] = uVar13;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x3ff0000000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  param_1[0x1a] = 0x3ff0000000000000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x3ff0000000000000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x3ff0000000000000;
  param_1[0x26] = 0;
  param_1[0x27] = &PTR_FUN_110af4c80;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = &PTR_FUN_110af4c80;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0x3f800000;
  param_1[0x59] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0x3f800000;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  uVar5 = 0x1571;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[99] = 0x50;
  param_1[0x62] = 4;
  iVar7 = 1;
  lVar8 = 0xc9;
  *(undefined4 *)(param_1 + 100) = 0x1571;
  do {
    iVar2 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965;
    uVar5 = iVar2 + iVar7;
    *(int *)((long)param_1 + lVar8 * 4) = (int)lVar8 + iVar2 + -200;
    iVar7 = iVar7 + 1;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x338);
  param_1[0x19c] = 0;
  param_1[0x19f] = 0;
  param_1[0x19e] = 0;
  param_1[0x19d] = param_1 + 0x19e;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  dVar23 = (double)param_1[7];
  dVar21 = (double)param_1[8];
  uVar12 = 0xffffffffffffffff;
  dVar22 = (double)param_1[6];
  do {
    pdVar11 = (double *)param_1[0x43];
    if (pdVar11 < (double *)param_1[0x44]) {
      pdVar10 = pdVar11 + 1;
      *pdVar11 = dVar21 * dVar21;
    }
    else {
      lVar8 = param_1[0x42];
      uVar1 = ((long)pdVar11 - lVar8 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
        FUN_1092d2ba8();
        goto LAB_10944b1c8;
      }
      uVar6 = (long)param_1[0x44] - lVar8;
      uVar9 = (long)uVar6 >> 2;
      if (uVar9 <= uVar1) {
        uVar9 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar9 = 0x1fffffffffffffff;
      }
      if (uVar9 >> 0x3d != 0) {
        func_0x000104c4f740();
        goto LAB_10944b1c8;
      }
      lVar4 = uVar9 << 3;
      __Znwm();
      pdVar11 = (double *)(lVar4 + ((long)pdVar11 - lVar8));
      pdVar10 = pdVar11 + 1;
      *pdVar11 = dVar21 * dVar21;
      _memcpy();
      param_1[0x42] = lVar4;
      param_1[0x43] = pdVar10;
      param_1[0x44] = lVar4 + uVar9 * 8;
      if (lVar8 != 0) {
        __ZdlPv(lVar8);
      }
    }
    param_1[0x43] = pdVar10;
    pdVar11 = (double *)param_1[0x46];
    if (pdVar11 < (double *)param_1[0x47]) {
      pdVar10 = pdVar11 + 1;
      *pdVar11 = dVar22 * dVar22;
    }
    else {
      lVar8 = param_1[0x45];
      uVar1 = ((long)pdVar11 - lVar8 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
        FUN_1092d2ba8();
        goto LAB_10944b1c8;
      }
      uVar6 = (long)param_1[0x47] - lVar8;
      uVar9 = (long)uVar6 >> 2;
      if (uVar9 <= uVar1) {
        uVar9 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar9 = 0x1fffffffffffffff;
      }
      if (uVar9 >> 0x3d != 0) {
        func_0x000104c4f740();
        goto LAB_10944b1c8;
      }
      lVar4 = uVar9 << 3;
      __Znwm();
      pdVar11 = (double *)(lVar4 + ((long)pdVar11 - lVar8));
      pdVar10 = pdVar11 + 1;
      *pdVar11 = dVar22 * dVar22;
      _memcpy();
      param_1[0x45] = lVar4;
      param_1[0x46] = pdVar10;
      param_1[0x47] = lVar4 + uVar9 * 8;
      if (lVar8 != 0) {
        __ZdlPv(lVar8);
      }
    }
    param_1[0x46] = pdVar10;
    pdVar11 = (double *)param_1[0x49];
    if (pdVar11 < (double *)param_1[0x4a]) {
      pdVar10 = pdVar11 + 1;
      *pdVar11 = dVar23 * dVar23;
    }
    else {
      lVar8 = param_1[0x48];
      uVar1 = ((long)pdVar11 - lVar8 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
        FUN_1092d2ba8();
LAB_10944b1c8:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10944b1cc);
        (*pcVar3)();
      }
      uVar6 = (long)param_1[0x4a] - lVar8;
      uVar9 = (long)uVar6 >> 2;
      if (uVar9 <= uVar1) {
        uVar9 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar9 = 0x1fffffffffffffff;
      }
      if (uVar9 >> 0x3d != 0) {
        func_0x000104c4f740();
        goto LAB_10944b1c8;
      }
      lVar4 = uVar9 << 3;
      __Znwm();
      pdVar11 = (double *)(lVar4 + ((long)pdVar11 - lVar8));
      pdVar10 = pdVar11 + 1;
      *pdVar11 = dVar23 * dVar23;
      _memcpy();
      param_1[0x48] = lVar4;
      param_1[0x49] = pdVar10;
      param_1[0x4a] = lVar4 + uVar9 * 8;
      if (lVar8 != 0) {
        __ZdlPv(lVar8);
      }
    }
    param_1[0x49] = pdVar10;
    dVar14 = (double)param_1[3];
    dVar21 = dVar21 * dVar14;
    dVar22 = dVar22 * dVar14;
    dVar23 = dVar23 * dVar14;
    uVar12 = uVar12 + 1;
    if (*(uint *)(param_1 + 1) <= uVar12) {
      iVar7 = *(int *)*param_1;
      *(bool *)(param_1 + 0x41) = iVar7 == 3;
      if (iVar7 == 3) {
        *(undefined4 *)((long)param_1 + 0x2c) = 0x14;
      }
      return param_1;
    }
  } while( true );
}



/* Entry: 10944b2d4; end: 10944b3af;  */

void FUN_10944b2d4(long *param_1,undefined8 *param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar8 = puVar1 + 1;
    *puVar1 = *param_2;
LAB_10944b38c:
    param_1[1] = (long)puVar8;
    return;
  }
  lVar6 = *param_1;
  uVar7 = ((long)puVar1 - lVar6 >> 3) + 1;
  if (uVar7 >> 0x3d == 0) {
    uVar4 = param_1[2] - lVar6;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 >> 0x3d == 0) {
      lVar3 = uVar5 * 8;
      __Znwm();
      puVar1 = (undefined8 *)(lVar3 + ((long)puVar1 - lVar6));
      puVar8 = puVar1 + 1;
      *puVar1 = *param_2;
      _memcpy();
      *param_1 = lVar3;
      param_1[1] = (long)puVar8;
      param_1[2] = lVar3 + uVar5 * 8;
      if (lVar6 != 0) {
        __ZdlPv(lVar6);
      }
      goto LAB_10944b38c;
    }
  }
  else {
    FUN_1092d2ba8();
  }
  func_0x000104c4f740();
  lVar6 = *(long *)(param_4 + 0x110);
  uVar5 = *(ulong *)(lVar6 + 0x10);
  uVar7 = uVar5 >> 0x20;
  iVar11 = (int)uVar5;
  if (uVar7 == 0 && iVar11 == 0) {
    uVar7 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = (long)((uVar5 << 0x20) * uVar7) >> 0x20;
    __Znam();
    if (0 < (int)(uVar5 >> 0x20)) {
      lVar9 = (long)(uVar5 << 0x20) >> 0x20;
      lVar10 = *(long *)(lVar6 + 8);
      iVar2 = *(int *)(lVar6 + 0x18);
      uVar5 = uVar7;
      lVar6 = lVar3;
      do {
        _memcpy(lVar6,lVar10,lVar9);
        lVar10 = lVar10 + iVar2;
        lVar6 = lVar6 + lVar9;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      param_5 = param_5 & 0xffffffff;
    }
  }
  ppuStack_e8 = &PTR_FUN_110af4c80;
  uStack_d8 = CONCAT44((int)uVar7,iVar11);
  lStack_e0 = lVar3;
  iStack_d0 = iVar11;
  FUN_1093fb548(&puStack_c8,&ppuStack_e8,7);
  ppuStack_e8 = &PTR_FUN_110af4c80;
  if (lStack_e0 != 0) {
    __ZdaPv();
  }
  lStack_e0 = 0;
  uStack_d8 = 0;
  iStack_d0 = 0;
  FUN_10944b564(param_1,param_2,param_3,param_4,&puStack_c8,param_5);
  puVar1 = puStack_c8;
  if (puStack_c8 != (undefined8 *)0x0) {
    while (puStack_c0 != puVar1) {
      puVar8 = puStack_c0 + -4;
      (**(code **)*puVar8)(puVar8);
      puStack_c0 = puVar8;
    }
    puStack_c0 = puVar1;
    __ZdlPv(puStack_c8);
  }
  return;
}



/* Entry: 10944b3b0; end: 10944b563;  */

void FUN_10944b3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  undefined **ppuStack_98;
  long lStack_90;
  undefined8 uStack_88;
  int iStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  
  lVar8 = *(long *)(param_4 + 0x110);
  uVar10 = *(ulong *)(lVar8 + 0x10);
  uVar5 = uVar10 >> 0x20;
  iVar9 = (int)uVar10;
  if (uVar5 == 0 && iVar9 == 0) {
    uVar5 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = (long)((uVar10 << 0x20) * uVar5) >> 0x20;
    __Znam();
    if (0 < (int)(uVar10 >> 0x20)) {
      lVar6 = (long)(uVar10 << 0x20) >> 0x20;
      lVar7 = *(long *)(lVar8 + 8);
      iVar1 = *(int *)(lVar8 + 0x18);
      uVar10 = uVar5;
      lVar8 = lVar3;
      do {
        _memcpy(lVar8,lVar7,lVar6);
        lVar7 = lVar7 + iVar1;
        lVar8 = lVar8 + lVar6;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      param_5 = param_5 & 0xffffffff;
    }
  }
  ppuStack_98 = &PTR_FUN_110af4c80;
  uStack_88 = CONCAT44((int)uVar5,iVar9);
  lStack_90 = lVar3;
  iStack_80 = iVar9;
  FUN_1093fb548(&puStack_78,&ppuStack_98,7);
  ppuStack_98 = &PTR_FUN_110af4c80;
  if (lStack_90 != 0) {
    __ZdaPv();
  }
  lStack_90 = 0;
  uStack_88 = 0;
  iStack_80 = 0;
  FUN_10944b564(param_1,param_2,param_3,param_4,&puStack_78,param_5);
  puVar2 = puStack_78;
  if (puStack_78 != (undefined8 *)0x0) {
    while (puStack_70 != puVar2) {
      puVar4 = puStack_70 + -4;
      (**(code **)*puVar4)(puVar4);
      puStack_70 = puVar4;
    }
    puStack_70 = puVar2;
    __ZdlPv(puStack_78);
  }
  return;
}



/* Entry: 10944b564; end: 10944c01f;  */

void FUN_10944b564(long *param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5,
                  undefined4 param_6)

{
  float *pfVar1;
  float *pfVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  float *pfVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  long lVar26;
  ulong *puVar27;
  ulong *puVar28;
  long lVar29;
  ulong uVar30;
  int iVar32;
  undefined8 uVar31;
  int iVar34;
  undefined8 uVar33;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  ulong uStack_b20;
  ulong uStack_b18;
  ulong uStack_b10;
  long lStack_b08;
  undefined4 uStack_b00;
  long lStack_af8;
  long lStack_af0;
  long lStack_ae8;
  long lStack_ae0;
  ulong uStack_ad8;
  long lStack_ad0;
  long lStack_ac8;
  undefined4 uStack_ac0;
  undefined4 uStack_ab8;
  long lStack_ab0;
  long lStack_aa8;
  long lStack_aa0;
  long lStack_a98;
  long lStack_a90;
  long lStack_a88;
  undefined1 auStack_a80 [2520];
  int *piStack_a8;
  int *piStack_a0;
  int *piStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong **ppuStack_78;
  
  *(undefined4 *)(param_1 + 0x11) = 1;
  lVar7 = *param_2;
  param_1[0x13] = param_2[1];
  param_1[0x12] = lVar7;
  lVar7 = param_2[2];
  param_1[0x15] = param_2[3];
  param_1[0x14] = lVar7;
  lVar7 = param_2[4];
  param_1[0x17] = param_2[5];
  param_1[0x16] = lVar7;
  param_1[0x18] = param_2[6];
  lVar7 = param_2[8];
  param_1[0x1b] = param_2[9];
  param_1[0x1a] = lVar7;
  lVar7 = param_2[10];
  param_1[0x1d] = param_2[0xb];
  param_1[0x1c] = lVar7;
  lVar7 = param_2[0xc];
  param_1[0x1f] = param_2[0xd];
  param_1[0x1e] = lVar7;
  lVar7 = param_2[0xe];
  param_1[0x21] = param_2[0xf];
  param_1[0x20] = lVar7;
  param_1[0x22] = param_2[0x10];
  param_1[0x26] = 0;
  lVar7 = *param_5;
  uVar10 = *(uint *)(lVar7 + 0x14);
  if ((int)*(uint *)(lVar7 + 0x14) <= (int)*(uint *)(lVar7 + 0x10)) {
    uVar10 = *(uint *)(lVar7 + 0x10);
  }
  if ((int)uVar10 < 0x3d) {
    *(undefined4 *)(param_1 + 1) = 0;
    iVar11 = (int)((ulong)(param_5[1] - lVar7) >> 5);
    if (iVar11 < 1) goto LAB_10944b62c;
  }
  else {
    iVar32 = 0;
    do {
      iVar32 = iVar32 + 1;
      bVar5 = 0x79 < uVar10;
      uVar10 = uVar10 >> 1;
    } while (bVar5);
    *(int *)(param_1 + 1) = iVar32;
    iVar11 = (int)((ulong)(param_5[1] - lVar7) >> 5);
    if (iVar11 <= iVar32) {
LAB_10944b62c:
      *(int *)(param_1 + 1) = iVar11 + -1;
    }
  }
  FUN_10944c020(param_1,param_4);
  *(undefined4 *)(param_1 + 0x11) = param_6;
  iVar11 = *(int *)((long)param_1 + 0xc);
  uVar17 = (ulong)(((int)param_1[2] - iVar11) + 1);
  piVar8 = (int *)param_1[0x4c];
  piVar12 = (int *)param_1[0x4b];
  uVar19 = (long)piVar8 - (long)piVar12 >> 2;
  if (uVar17 < uVar19 || uVar17 - uVar19 == 0) {
    if (uVar17 < uVar19) {
      piVar8 = piVar12 + uVar17;
      param_1[0x4c] = (long)piVar8;
    }
  }
  else {
    func_0x000107428898(param_1 + 0x4b,uVar17 - uVar19);
    piVar12 = (int *)param_1[0x4b];
    piVar8 = (int *)param_1[0x4c];
    iVar11 = *(int *)((long)param_1 + 0xc);
  }
  if (piVar12 != piVar8) {
    uVar17 = (long)piVar8 + (-4 - (long)piVar12);
    if (0x1b < uVar17) {
      uVar17 = (uVar17 >> 2) + 1;
      uVar30 = uVar17 & 0x7ffffffffffffff8;
      uVar31 = CONCAT44(iVar11 + 1,iVar11);
      uVar33 = CONCAT44(iVar11 + 3,iVar11 + 2);
      piVar13 = piVar12 + 4;
      uVar19 = uVar30;
      do {
        iVar32 = (int)((ulong)uVar31 >> 0x20);
        iVar34 = (int)((ulong)uVar33 >> 0x20);
        *(undefined8 *)(piVar13 + -2) = uVar33;
        *(undefined8 *)(piVar13 + -4) = uVar31;
        *(ulong *)(piVar13 + 2) = CONCAT44(iVar34 + 4,(int)uVar33 + 4);
        *(ulong *)piVar13 = CONCAT44(iVar32 + 4,(int)uVar31 + 4);
        uVar31 = CONCAT44(iVar32 + 8,(int)uVar31 + 8);
        uVar33 = CONCAT44(iVar34 + 8,(int)uVar33 + 8);
        piVar13 = piVar13 + 8;
        uVar19 = uVar19 - 8;
      } while (uVar19 != 0);
      piVar12 = piVar12 + uVar30;
      iVar11 = iVar11 + (int)uVar30;
      if (uVar17 == uVar30) goto LAB_10944b738;
    }
    do {
      piVar13 = piVar12 + 1;
      *piVar12 = iVar11;
      piVar12 = piVar13;
      iVar11 = iVar11 + 1;
    } while (piVar13 != piVar8);
  }
LAB_10944b738:
  lVar29 = *param_1;
  pfVar1 = (float *)*param_3;
  pfVar2 = (float *)param_3[1];
  lVar7 = *(long *)(lVar29 + 8);
  lVar16 = *(long *)(lVar29 + 0x10);
  uStack_b20 = 0;
  uStack_b18 = 0;
  uStack_b10 = 0;
  uVar17 = lVar16 - lVar7;
  if (uVar17 == 0) {
    piStack_a8 = (int *)0x0;
    piStack_a0 = (int *)0x0;
    piStack_98 = (int *)0x0;
    piVar8 = (int *)0x0;
  }
  else {
    if ((long)uVar17 < 0) {
      FUN_1094008f0();
      goto LAB_10944bfc8;
    }
    uVar19 = uVar17;
    __Znwm();
    uStack_b20 = uVar19;
    uStack_b10 = uVar19 + uVar17;
    _bzero();
    uVar30 = uVar17 >> 3;
    if (pfVar1 != pfVar2) {
      uVar9 = 0;
      uVar14 = 0x9e3779b9;
      do {
        lVar18 = *(long *)(lVar7 + uVar9 * 8);
        pfVar20 = pfVar1;
        if (*(long *)(lVar18 + 0x450) != 0) {
LAB_10944b7d8:
          uVar21 = uVar14;
          if (*pfVar20 != 0.0) {
            uVar21 = (ulong)(uint)*pfVar20 + 0x9e3779b9;
          }
          uVar25 = uVar14;
          if (pfVar20[1] != 0.0) {
            uVar25 = (ulong)(uint)pfVar20[1] + 0x9e3779b9;
          }
          uVar22 = uVar14;
          if (pfVar20[2] != 0.0) {
            uVar22 = (ulong)(uint)pfVar20[2] + 0x9e3779b9;
          }
          uVar23 = *(ulong *)(lVar18 + 0x450);
          if (uVar23 != 0) {
            uVar21 = (uVar21 >> 2) + uVar21 * 0x40 + uVar25 ^ uVar21;
            uVar21 = uVar22 + uVar21 * 0x40 + (uVar21 >> 2) ^ uVar21;
            uVar25 = uVar23 - 1;
            if ((uVar23 & uVar25) == 0) {
              uVar22 = uVar21 & uVar25;
              plVar24 = *(long **)(*(long *)(lVar18 + 0x448) + uVar22 * 8);
            }
            else {
              uVar22 = uVar21;
              if (uVar23 <= uVar21) {
                uVar22 = 0;
                if (uVar23 != 0) {
                  uVar22 = uVar21 / uVar23;
                }
                uVar22 = uVar21 - uVar22 * uVar23;
              }
              plVar24 = *(long **)(*(long *)(lVar18 + 0x448) + uVar22 * 8);
            }
            if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
              if ((uVar23 & uVar25) == 0) {
                do {
                  if (uVar21 == plVar24[1]) {
                    if (((*(float *)(plVar24 + 2) == *pfVar20) &&
                        (*(float *)((long)plVar24 + 0x14) == pfVar20[1])) &&
                       (*(float *)(plVar24 + 3) == pfVar20[2])) goto LAB_10944b7c0;
                  }
                  else if ((plVar24[1] & uVar25) != uVar22) break;
                  plVar24 = (long *)*plVar24;
                } while (plVar24 != (long *)0x0);
              }
              else {
                do {
                  uVar25 = plVar24[1];
                  if (uVar21 == uVar25) {
                    if (((*(float *)(plVar24 + 2) == *pfVar20) &&
                        (*(float *)((long)plVar24 + 0x14) == pfVar20[1])) &&
                       (*(float *)(plVar24 + 3) == pfVar20[2])) goto LAB_10944b7c0;
                  }
                  else {
                    if (uVar23 <= uVar25) {
                      uVar3 = 0;
                      if (uVar23 != 0) {
                        uVar3 = uVar25 / uVar23;
                      }
                      uVar25 = uVar25 - uVar3 * uVar23;
                    }
                    if (uVar25 != uVar22) break;
                  }
                  plVar24 = (long *)*plVar24;
                } while (plVar24 != (long *)0x0);
              }
            }
          }
          goto LAB_10944b7cc;
        }
LAB_10944b79c:
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar30);
    }
    piVar8 = (int *)(uVar17 >> 1);
    uStack_b18 = uVar19 + uVar17;
    __Znwm();
    piVar12 = piVar8 + uVar30;
    piStack_a8 = piVar8;
    piStack_98 = piVar12;
    _bzero();
    uVar17 = uVar30 - 1 & 0x3fffffffffffffff;
    piStack_a0 = piVar12;
    if (uVar17 < 7) {
      uVar30 = 0;
      piVar15 = piVar8;
    }
    else {
      uVar17 = uVar17 + 1;
      uVar30 = uVar17 & 0x7ffffffffffffff8;
      piVar15 = piVar8 + uVar30;
      uVar33 = 0x300000002;
      uVar31 = 0x100000000;
      piVar13 = piVar8 + 4;
      uVar19 = uVar30;
      do {
        iVar11 = (int)((ulong)uVar31 >> 0x20);
        iVar32 = (int)((ulong)uVar33 >> 0x20);
        *(undefined8 *)(piVar13 + -2) = uVar33;
        *(undefined8 *)(piVar13 + -4) = uVar31;
        *(ulong *)(piVar13 + 2) = CONCAT44(iVar32 + 4,(int)uVar33 + 4);
        *(ulong *)piVar13 = CONCAT44(iVar11 + 4,(int)uVar31 + 4);
        uVar31 = CONCAT44(iVar11 + 8,(int)uVar31 + 8);
        uVar33 = CONCAT44(iVar32 + 8,(int)uVar33 + 8);
        piVar13 = piVar13 + 8;
        uVar19 = uVar19 - 8;
      } while (uVar19 != 0);
      if (uVar17 == uVar30) goto LAB_10944b9e8;
    }
    do {
      piVar13 = piVar15 + 1;
      *piVar15 = (int)uVar30;
      uVar30 = (ulong)((int)uVar30 + 1);
      piVar15 = piVar13;
    } while (piVar13 != piVar12);
  }
LAB_10944b9e8:
  piVar12 = piStack_a0;
  puStack_90 = &uStack_b20;
  lVar26 = (long)piStack_a0 - (long)piVar8;
  uVar17 = lVar26 >> 2;
  lVar18 = 0;
  if (lVar16 != lVar7) {
    lVar18 = LZCOUNT(uVar17) * -2 + 0x7e;
  }
  FUN_109450830(piVar8,piStack_a0,&puStack_90,lVar18,1);
  dVar36 = (double)param_1[0x13];
  dVar35 = (double)param_1[0x12];
  dVar38 = (double)param_1[0x15];
  dVar37 = (double)param_1[0x14];
  dVar51 = (double)param_1[0x17];
  dVar50 = (double)param_1[0x16];
  dVar48 = (double)param_1[0x18];
  puStack_90 = (ulong *)0x0;
  puStack_88 = (ulong *)0x0;
  puStack_80 = (ulong *)0x0;
  if (lVar16 == lVar7) {
    puVar27 = (ulong *)0x0;
    if (piVar12 != piVar8) goto LAB_10944ba88;
LAB_10944bae4:
    bVar5 = false;
joined_r0x00010944baf0:
    uVar30 = 0;
    if (uVar17 == 0) goto LAB_10944bc84;
  }
  else {
    if (uVar17 >> 0x3d != 0) {
      FUN_1092d2ba8();
LAB_10944bfc8:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10944bfcc);
      (*pcVar4)();
    }
    puVar28 = (ulong *)(lVar26 * 2);
    puVar27 = puVar28;
    __Znwm();
    puStack_80 = puVar27 + uVar17;
    puStack_90 = puVar27;
    _bzero();
    puStack_88 = (ulong *)((long)puVar27 + (long)puVar28);
    if (piVar12 == piVar8) goto LAB_10944bae4;
LAB_10944ba88:
    uVar19 = uVar17;
    if (uVar17 < 2) {
      uVar19 = 1;
    }
    if (*(long *)(uStack_b20 + (long)*piVar8 * 8) == 0) {
      bVar5 = true;
      goto joined_r0x00010944baf0;
    }
    uVar30 = 0;
    do {
      if (uVar19 - 1 == uVar30) goto LAB_10944bcc4;
      lVar7 = uVar30 + 1;
      uVar30 = uVar30 + 1;
    } while (*(long *)(uStack_b20 + (long)piVar8[lVar7] * 8) != 0);
    bVar5 = uVar30 < uVar17;
    bVar6 = uVar17 < uVar30;
    uVar17 = uVar17 - uVar30;
    if (bVar6 || uVar17 == 0) goto LAB_10944bc84;
  }
  dVar35 = -dVar35;
  dVar36 = -dVar36;
  dVar37 = -dVar37;
  dVar39 = SQRT(dVar35 * dVar35 + dVar37 * dVar37 + dVar36 * dVar36 + dVar38 * dVar38);
  dVar35 = dVar35 / dVar39;
  dVar36 = dVar36 / dVar39;
  dVar37 = dVar37 / dVar39;
  dVar38 = dVar38 / dVar39;
  dVar39 = -dVar50;
  dVar40 = -dVar51;
  dVar44 = -dVar37 * dVar40 - dVar48 * dVar36;
  dVar46 = dVar48 * dVar35 + dVar39 * dVar37;
  dVar39 = -dVar36 * dVar39 + dVar35 * dVar40;
  dVar44 = dVar44 + dVar44;
  dVar46 = dVar46 + dVar46;
  dVar39 = dVar39 + dVar39;
  lVar7 = *(long *)(lVar29 + 8);
  piVar13 = piVar8 + uVar30;
  do {
    lVar16 = *(long *)(lVar7 + (long)*piVar13 * 8);
    dVar43 = *(double *)(lVar16 + 0x2c8);
    dVar40 = -*(double *)(lVar16 + 0x2b0);
    dVar41 = -*(double *)(lVar16 + 0x2b8);
    dVar42 = -*(double *)(lVar16 + 0x2c0);
    dVar45 = SQRT(dVar40 * dVar40 + dVar42 * dVar42 + dVar41 * dVar41 + dVar43 * dVar43);
    dVar40 = dVar40 / dVar45;
    dVar41 = dVar41 / dVar45;
    dVar42 = dVar42 / dVar45;
    dVar43 = dVar43 / dVar45;
    dVar45 = -*(double *)(lVar16 + 0x2d0);
    dVar47 = -*(double *)(lVar16 + 0x2d8);
    dVar49 = *(double *)(lVar16 + 0x2e0);
    dVar52 = -dVar42 * dVar47 - dVar49 * dVar41;
    dVar53 = dVar49 * dVar40 + dVar45 * dVar42;
    dVar47 = -dVar41 * dVar45 + dVar40 * dVar47;
    dVar47 = dVar47 + dVar47;
    dVar52 = dVar52 + dVar52;
    dVar53 = dVar53 + dVar53;
    dVar45 = ((dVar44 * dVar38 - dVar50) + -dVar37 * dVar46 + dVar39 * dVar36) -
             ((dVar52 * dVar43 - *(double *)(lVar16 + 0x2d0)) + -dVar42 * dVar53 + dVar47 * dVar41);
    dVar42 = ((dVar46 * dVar38 - dVar51) + -(dVar35 * dVar39) + dVar44 * dVar37) -
             ((dVar53 * dVar43 - *(double *)(lVar16 + 0x2d8)) + -(dVar40 * dVar47) + dVar52 * dVar42
             );
    dVar40 = ((dVar39 * dVar38 - dVar48) + -dVar36 * dVar44 + dVar35 * dVar46) -
             ((dVar47 * dVar43 - dVar49) + -dVar41 * dVar52 + dVar40 * dVar53);
    puVar27[*piVar13] = (ulong)(dVar40 * dVar40 + dVar45 * dVar45 + dVar42 * dVar42);
    uVar17 = uVar17 - 1;
    piVar13 = piVar13 + 1;
  } while (uVar17 != 0);
LAB_10944bc84:
  if (bVar5) {
    piVar8 = piVar8 + uVar30;
    ppuStack_78 = &puStack_90;
    lVar7 = 0;
    if (piVar12 != piVar8) {
      lVar7 = LZCOUNT((long)piVar12 - (long)piVar8 >> 2) * -2 + 0x7e;
    }
    FUN_109451894(piVar8,piVar12,&ppuStack_78,lVar7,1);
    puVar27 = puStack_90;
  }
LAB_10944bcc4:
  if (puVar27 != (ulong *)0x0) {
    puStack_88 = puVar27;
    __ZdlPv(puVar27);
  }
  if (uStack_b20 != 0) {
    uStack_b18 = uStack_b20;
    __ZdlPv();
  }
  uVar19 = param_1[0xd];
  uVar17 = 0;
  if (uVar19 != 0) {
    uVar17 = (ulong)param_1[10] / uVar19;
  }
  FUN_1094652b8(&uStack_b20,*param_1 + 8,&piStack_a8,uVar19,uVar17 & 0xffffffff);
  if (param_1[0x51] != 0) {
    plVar24 = (long *)param_1[0x50];
    while (plVar24 != (long *)0x0) {
      lVar7 = *plVar24;
      if (plVar24[0x11] != 0) {
        plVar24[0x12] = plVar24[0x11];
        __ZdlPv();
      }
      if (plVar24[9] != 0) {
        plVar24[10] = plVar24[9];
        __ZdlPv();
      }
      if (plVar24[6] != 0) {
        plVar24[7] = plVar24[6];
        __ZdlPv();
      }
      if (plVar24[3] != 0) {
        plVar24[4] = plVar24[3];
        __ZdlPv();
      }
      __ZdlPv(plVar24);
      plVar24 = (long *)lVar7;
    }
    param_1[0x50] = 0;
    lVar7 = param_1[0x4f];
    if (lVar7 != 0) {
      lVar16 = 0;
      do {
        *(undefined8 *)(param_1[0x4e] + lVar16 * 8) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar7 != lVar16);
    }
    param_1[0x51] = 0;
  }
  uVar17 = uStack_b20;
  plVar24 = param_1 + 0x53;
  uStack_b20 = 0;
  lVar7 = param_1[0x4e];
  param_1[0x4e] = uVar17;
  if (lVar7 != 0) {
    __ZdlPv();
  }
  uVar17 = uStack_b18;
  param_1[0x4f] = uStack_b18;
  uStack_b18 = 0;
  param_1[0x51] = lStack_b08;
  *(undefined4 *)(param_1 + 0x52) = uStack_b00;
  param_1[0x50] = uStack_b10;
  if (lStack_b08 != 0) {
    uVar19 = *(ulong *)(uStack_b10 + 8);
    if ((uVar17 & uVar17 - 1) == 0) {
      uVar19 = uVar19 & uVar17 - 1;
    }
    else if (uVar17 <= uVar19) {
      uVar30 = 0;
      if (uVar17 != 0) {
        uVar30 = uVar19 / uVar17;
      }
      uVar19 = uVar19 - uVar30 * uVar17;
    }
    *(long **)(param_1[0x4e] + uVar19 * 8) = param_1 + 0x50;
    uStack_b10 = 0;
    lStack_b08 = 0;
  }
  if (*plVar24 != 0) {
    param_1[0x54] = *plVar24;
    __ZdlPv();
    *plVar24 = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
  }
  param_1[0x54] = lStack_af0;
  *plVar24 = lStack_af8;
  param_1[0x55] = lStack_ae8;
  lStack_af0 = 0;
  lStack_ae8 = 0;
  lStack_af8 = 0;
  if (param_1[0x59] != 0) {
    plVar24 = (long *)param_1[0x58];
    while (plVar24 != (long *)0x0) {
      plVar24 = (long *)*plVar24;
      __ZdlPv();
    }
    param_1[0x58] = 0;
    lVar7 = param_1[0x57];
    if (lVar7 != 0) {
      lVar16 = 0;
      do {
        *(undefined8 *)(param_1[0x56] + lVar16 * 8) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar7 != lVar16);
    }
    param_1[0x59] = 0;
  }
  lVar7 = lStack_ae0;
  lStack_ae0 = 0;
  lVar16 = param_1[0x56];
  param_1[0x56] = lVar7;
  if (lVar16 != 0) {
    __ZdlPv();
  }
  uVar17 = uStack_ad8;
  param_1[0x57] = uStack_ad8;
  uStack_ad8 = 0;
  param_1[0x59] = lStack_ac8;
  *(undefined4 *)(param_1 + 0x5a) = uStack_ac0;
  param_1[0x58] = lStack_ad0;
  if (lStack_ac8 != 0) {
    uVar19 = *(ulong *)(lStack_ad0 + 8);
    if ((uVar17 & uVar17 - 1) == 0) {
      uVar19 = uVar19 & uVar17 - 1;
    }
    else if (uVar17 <= uVar19) {
      uVar30 = 0;
      if (uVar17 != 0) {
        uVar30 = uVar19 / uVar17;
      }
      uVar19 = uVar19 - uVar30 * uVar17;
    }
    *(long **)(param_1[0x56] + uVar19 * 8) = param_1 + 0x58;
    lStack_ad0 = 0;
    lStack_ac8 = 0;
  }
  *(undefined4 *)(param_1 + 0x5b) = uStack_ab8;
  if (param_1[0x5c] != 0) {
    param_1[0x5d] = param_1[0x5c];
    __ZdlPv();
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
  }
  param_1[0x5d] = lStack_aa8;
  param_1[0x5c] = lStack_ab0;
  param_1[0x5e] = lStack_aa0;
  lStack_aa8 = 0;
  lStack_aa0 = 0;
  lStack_ab0 = 0;
  if (param_1[0x5f] != 0) {
    param_1[0x60] = param_1[0x5f];
    __ZdlPv();
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
  }
  param_1[0x60] = lStack_a90;
  param_1[0x5f] = lStack_a98;
  param_1[0x61] = lStack_a88;
  lStack_a90 = 0;
  lStack_a88 = 0;
  lStack_a98 = 0;
  _memcpy(param_1 + 0x62,auStack_a80,0x9d8);
  func_0x0001094360b8(&uStack_b20);
  if (piStack_a8 != (int *)0x0) {
    __ZdlPv();
  }
  return;
LAB_10944b7c0:
  *(long *)(uStack_b20 + uVar9 * 8) = *(long *)(uStack_b20 + uVar9 * 8) + 1;
LAB_10944b7cc:
  pfVar20 = pfVar20 + 3;
  if (pfVar20 == pfVar2) goto LAB_10944b79c;
  goto LAB_10944b7d8;
}



/* Entry: 10944c020; end: 10944c9e3;  */

void FUN_10944c020(long param_1,long param_2,long param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int iVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  ulong uVar22;
  double *pdVar23;
  long lVar24;
  int iVar25;
  uint uVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  undefined4 *puStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  long *plStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  long *plStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  long *plStack_138;
  long lStack_130;
  undefined8 uStack_128;
  uint uStack_f0;
  int iStack_ec;
  undefined8 *puStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  uint uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  long lStack_78;
  ulong uVar26;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_3 = param_3 + (long)*(int *)(param_1 + 8) * 0x20;
  dVar28 = *(double *)(param_3 + 8);
  uVar15 = *(ulong *)(param_3 + 0x10);
  iVar4 = *(int *)(param_3 + 0x18);
  uVar26 = uVar15 >> 0x20;
  iVar25 = (int)(uVar15 >> 0x20);
  uVar27 = (uint)uVar15;
  dVar29 = (double)((long)uVar15 >> 0x20);
  if ((uVar27 == (uint)*(ulong *)(param_1 + 0x168) && uVar26 == *(ulong *)(param_1 + 0x168) >> 0x20)
     && (uVar27 == (uint)*(ulong *)(param_1 + 0x148) &&
         uVar26 == *(ulong *)(param_1 + 0x148) >> 0x20)) {
    bVar8 = true;
    if (1 < (ulong)dVar29 && 7 < uVar27) goto LAB_10944c404;
LAB_10944c14c:
    lVar24 = (long)(int)uVar27;
    uStack_180 = 4.79932528876107e-314;
    puStack_140 = &uStack_178;
    uStack_178 = (double)CONCAT44(uVar27,iVar25);
    dStack_158 = 0.0;
    dStack_160 = 0.0;
    lStack_148 = 0;
    plStack_150 = (long *)0x0;
    lStack_130 = 0;
    uStack_128 = 0;
    dStack_170 = dVar28;
    dStack_168 = dVar28;
    plStack_138 = &lStack_130;
    if (dVar28 != 0.0 || (long)(int)uVar27 * (long)iVar25 == 0) {
      uVar5 = 0x42ff4000;
      lVar10 = lVar24;
      if (uVar26 != 1) {
        lVar10 = (long)iVar4;
      }
      lStack_130 = lVar24;
      if (iVar4 != 0) {
        lStack_130 = lVar10;
      }
      uVar2 = uVar5;
      if (lVar10 != lVar24 && iVar4 != 0) {
        uVar2 = 0x42ff0000;
      }
      uStack_180 = (double)CONCAT44(2,uVar2);
      uStack_128 = 1;
      dStack_158 = (double)((long)dVar28 + lStack_130 * (long)dVar29);
      dStack_160 = (double)(((long)dStack_158 - lStack_130) + lVar24);
      dStack_e0 = 0.0;
      uStack_f0 = 0x1010000;
      dStack_200 = *(double *)(param_1 + 0x160);
      uVar15 = *(ulong *)(param_1 + 0x168);
      iVar4 = *(int *)(param_1 + 0x170);
      uStack_210 = (undefined4 *)0x242ff0000;
      puStack_1d0 = &uStack_208;
      iVar18 = (int)(uVar15 >> 0x20);
      iVar20 = (int)uVar15;
      uStack_208 = (double)CONCAT44(iVar20,iVar18);
      dStack_1e8 = 0.0;
      dStack_1f0 = 0.0;
      lStack_1d8 = 0;
      plStack_1e0 = (long *)0x0;
      lVar24 = (long)iVar20;
      lStack_1c0 = 0;
      uStack_1b8 = 0;
      dStack_1f8 = dStack_200;
      plStack_1c8 = &lStack_1c0;
      puStack_e8 = &uStack_180;
      if ((dStack_200 == 0.0) && ((long)iVar20 * (long)iVar18 != 0)) {
        puVar12 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        puStack_268 = puVar12 + 1;
        uStack_260 = 0x1c;
        *(undefined1 *)(puVar12 + 8) = 0;
        *(undefined8 *)(puVar12 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar12 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar12 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar12 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&puStack_268,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
        goto LAB_10944c8ec;
      }
      lVar10 = lVar24;
      if (uVar15 >> 0x20 != 1) {
        lVar10 = (long)iVar4;
      }
      lStack_1c0 = lVar24;
      if (iVar4 != 0) {
        lStack_1c0 = lVar10;
      }
      if (lVar10 != lVar24 && iVar4 != 0) {
        uVar5 = 0x42ff0000;
      }
      uStack_210 = (undefined4 *)CONCAT44(2,uVar5);
      uStack_1b8 = 1;
      dStack_1e8 = (double)((long)dStack_200 + lStack_1c0 * ((long)uVar15 >> 0x20));
      dStack_1f0 = (double)(((long)dStack_1e8 - lStack_1c0) + lVar24);
      uStack_258 = 0xc2010000;
      lStack_248 = 0;
      puStack_268 = (undefined4 *)0x500000005;
      plStack_250 = &uStack_210;
      FUN_109b44a6c(0x3ff0000000000000,0x3ff0000000000000,&uStack_f0,&uStack_258,&puStack_268,4);
      if (lStack_1d8 != 0) {
        piVar1 = (int *)(lStack_1d8 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((iVar4 + -1 == 0) && (lStack_1d8 != 0)) {
          plVar11 = *(long **)(lStack_1d8 + 8);
          if ((*(long **)(lStack_1d8 + 8) == (long *)0x0) &&
             ((plVar11 = plStack_1e0, plStack_1e0 == (long *)0x0 &&
              (plVar11 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
            FUN_109a83e3c();
            plVar11 = plRam000000011382bb80;
          }
          (**(code **)(*plVar11 + 0x30))();
        }
      }
      lStack_1d8 = 0;
      dStack_1f8 = 0.0;
      dStack_200 = 0.0;
      dStack_1e8 = 0.0;
      dStack_1f0 = 0.0;
      if (0 < uStack_210._4_4_) {
        lVar24 = 0;
        do {
          *(undefined4 *)((long)puStack_1d0 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < uStack_210._4_4_);
      }
      if (plStack_1c8 != &lStack_1c0 && plStack_1c8 != (long *)0x0) {
        _free(plStack_1c8[-1]);
      }
      if (lStack_148 != 0) {
        piVar1 = (int *)(lStack_148 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((iVar4 + -1 == 0) && (lStack_148 != 0)) {
          plVar11 = *(long **)(lStack_148 + 8);
          if ((*(long **)(lStack_148 + 8) == (long *)0x0) &&
             ((plVar11 = plStack_150, plStack_150 == (long *)0x0 &&
              (plVar11 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
            FUN_109a83e3c();
            plVar11 = plRam000000011382bb80;
          }
          (**(code **)(*plVar11 + 0x30))();
        }
      }
      lStack_148 = 0;
      dStack_168 = 0.0;
      dStack_170 = 0.0;
      dStack_158 = 0.0;
      dStack_160 = 0.0;
      if (0 < uStack_180._4_4_) {
        lVar24 = 0;
        do {
          *(undefined4 *)((long)puStack_140 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < uStack_180._4_4_);
      }
      if (plStack_138 != &lStack_130 && plStack_138 != (long *)0x0) {
        _free(plStack_138[-1]);
      }
      goto LAB_10944c43c;
    }
  }
  else {
    if (uVar26 != 0 || uVar27 != 0) {
      lVar24 = (long)(int)(iVar25 * uVar27);
      __Znam();
      lVar10 = *(long *)(param_1 + 0x160);
      iVar18 = iVar25;
    }
    else {
      iVar18 = 0;
      lVar24 = 0;
      lVar10 = *(long *)(param_1 + 0x160);
    }
    if (lVar10 != 0) {
      __ZdaPv();
    }
    *(long *)(param_1 + 0x160) = lVar24;
    *(uint *)(param_1 + 0x168) = uVar27;
    *(int *)(param_1 + 0x16c) = iVar18;
    *(uint *)(param_1 + 0x170) = uVar27;
    if (uVar26 != 0 || uVar27 != 0) {
      lVar24 = (long)(int)(iVar25 * uVar27);
      __Znam();
      lVar10 = *(long *)(param_1 + 0x140);
      iVar18 = iVar25;
    }
    else {
      lVar24 = 0;
      iVar18 = 0;
      lVar10 = *(long *)(param_1 + 0x140);
    }
    if (lVar10 != 0) {
      __ZdaPv();
    }
    bVar8 = false;
    *(long *)(param_1 + 0x140) = lVar24;
    *(uint *)(param_1 + 0x148) = uVar27;
    *(int *)(param_1 + 0x14c) = iVar18;
    *(uint *)(param_1 + 0x150) = uVar27;
    if ((ulong)dVar29 < 2 || uVar27 < 8) goto LAB_10944c14c;
LAB_10944c404:
    uStack_210 = (undefined4 *)(long)(int)uVar27;
    uStack_178 = 0.0;
    uStack_180 = 0.0;
    dStack_168 = 0.0;
    dStack_170 = 0.0;
    uStack_208 = dVar29;
    FUN_109365b00(&uStack_210,1,dVar28,(long)iVar4,*(undefined8 *)(param_1 + 0x160),
                  (long)*(int *)(param_1 + 0x170),4,2,&uStack_180);
LAB_10944c43c:
    dStack_d0 = (double)(int)uVar27 / (double)(long)*(int *)(param_2 + 0x10);
    dVar29 = (double)iVar25 / (double)(long)*(int *)(param_2 + 0x14);
    dStack_e0 = *(double *)(param_2 + 0x20) * dStack_d0;
    dStack_d8 = *(double *)(param_2 + 0x28) * dVar29;
    dStack_d0 = *(double *)(param_2 + 0x30) * dStack_d0;
    dVar29 = *(double *)(param_2 + 0x38) * dVar29;
    uVar3 = *(uint *)(param_2 + 0x60);
    uStack_f0 = uVar27;
    iStack_ec = iVar25;
    dStack_c8 = dVar29;
    dVar28 = (double)_atan(((double)(int)uVar27 / 2.0) / dStack_d0);
    dStack_b8 = (double)_atan(((double)iVar25 / 2.0) / dVar29);
    dStack_c0 = dVar28 + dVar28;
    dStack_b8 = dStack_b8 + dStack_b8;
    if ((uVar3 & 0xfffffffe) == 2) {
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = uVar3;
      FUN_10937da58(&puStack_98,param_2 + 0x68);
    }
    else {
      uStack_b0 = *(undefined8 *)(param_2 + 0x50);
      uStack_a8 = *(undefined8 *)(param_2 + 0x58);
      uStack_a0 = 0;
      puStack_98 = (undefined8 *)0x0;
      lStack_90 = 0;
      if ((*(double *)(param_2 + 0x50) != 0.0) || (*(double *)(param_2 + 0x58) != 0.0)) {
        uStack_a0 = 1;
      }
    }
    if ((bVar8) && ((*(uint *)(param_1 + 0x88) & 0xfffffffe) == 2)) {
      FUN_1095314e4(&uStack_180,param_1 + 0x180,&uStack_f0,param_1 + 0x138,param_1 + 0x158);
      pdVar23 = (double *)(param_1 + 0xb0);
      dVar28 = *(double *)(param_1 + 0x90);
      dVar29 = *(double *)(param_1 + 0x98);
      dVar32 = *(double *)(param_1 + 0xc0);
      dVar36 = -(dStack_170 * *(double *)(param_1 + 0xb8)) + dVar32 * uStack_178;
      dVar37 = -(uStack_180 * dVar32) + *pdVar23 * dStack_170;
      dVar35 = -(uStack_178 * *pdVar23) + *(double *)(param_1 + 0xb8) * uStack_180;
      dVar36 = dVar36 + dVar36;
      dVar37 = dVar37 + dVar37;
      dVar35 = dVar35 + dVar35;
      dStack_1f0 = dStack_160 +
                   *pdVar23 + dVar36 * dStack_168 + -dStack_170 * dVar37 + dVar35 * uStack_178;
      dStack_1e8 = dStack_158 +
                   *(double *)(param_1 + 0xb8) + dVar37 * dStack_168 +
                   -(uStack_180 * dVar35) + dVar36 * dStack_170;
      plStack_1e0 = (long *)((double)plStack_150 +
                            dVar32 + dVar35 * dStack_168 +
                            -uStack_178 * dVar36 + uStack_180 * dVar37);
      dVar36 = *(double *)(param_1 + 0xa8);
      dVar35 = *(double *)(param_1 + 0xa0);
      auVar33._0_8_ = dVar28 * dStack_170 - dVar35 * uStack_180;
      dVar32 = dVar29 * dStack_170 - dVar36 * uStack_180;
      auVar33[8] = SUB81(dVar32,0);
      auVar33[9] = (undefined1)((ulong)dVar32 >> 8);
      auVar33[10] = (undefined1)((ulong)dVar32 >> 0x10);
      auVar33[0xb] = (undefined1)((ulong)dVar32 >> 0x18);
      auVar33[0xc] = (undefined1)((ulong)dVar32 >> 0x20);
      auVar33[0xd] = (undefined1)((ulong)dVar32 >> 0x28);
      auVar33[0xe] = (undefined1)((ulong)dVar32 >> 0x30);
      auVar33[0xf] = (byte)((ulong)dVar32 >> 0x38) ^ 0x80;
      auVar34 = NEON_ext(auVar33,auVar33,8,1);
      uStack_210 = (undefined4 *)(dVar28 * dStack_168 + dVar35 * uStack_178 + auVar34._0_8_);
      uStack_208 = dVar29 * dStack_168 + dVar36 * uStack_178 + auVar34._8_8_;
      dVar32 = dVar29 * uStack_180 + dVar36 * dStack_170;
      auVar34._0_8_ = -(dVar28 * uStack_180 + dVar35 * dStack_170);
      auVar34[8] = SUB81(dVar32,0);
      auVar34[9] = (undefined1)((ulong)dVar32 >> 8);
      auVar34[10] = (undefined1)((ulong)dVar32 >> 0x10);
      auVar34[0xb] = (undefined1)((ulong)dVar32 >> 0x18);
      auVar34[0xc] = (undefined1)((ulong)dVar32 >> 0x20);
      auVar34[0xd] = (undefined1)((ulong)dVar32 >> 0x28);
      auVar34[0xe] = (undefined1)((ulong)dVar32 >> 0x30);
      auVar34[0xf] = (undefined1)((ulong)dVar32 >> 0x38);
      auVar34 = NEON_ext(auVar34,auVar34,8,1);
      dStack_200 = (dVar35 * dStack_168 - dVar28 * uStack_178) + auVar34._0_8_;
      dStack_1f8 = (dVar36 * dStack_168 - dVar29 * uStack_178) + auVar34._8_8_;
      dVar28 = (double)uStack_210 * (double)uStack_210 + dStack_200 * dStack_200 +
               uStack_208 * uStack_208 + dStack_1f8 * dStack_1f8;
      if (dVar28 != 1.0) {
        dVar28 = 2.0 / (dVar28 + 1.0);
        uStack_210 = (undefined4 *)((double)uStack_210 * dVar28);
        uStack_208 = uStack_208 * dVar28;
        dStack_200 = dStack_200 * dVar28;
        dStack_1f8 = dStack_1f8 * dVar28;
      }
      func_0x00010937fbc4(&uStack_258,&uStack_210);
      uStack_1a8 = uStack_230;
      uStack_1b0 = uStack_238;
      uStack_198 = uStack_220;
      uStack_1a0 = uStack_228;
      uStack_190 = uStack_218;
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_254,uStack_258);
      plStack_1c8 = plStack_250;
      uStack_1b8 = uStack_240;
      lStack_1c0 = lStack_248;
      *(double *)(param_1 + 0x98) = uStack_208;
      *(double *)(param_1 + 0x90) = (double)uStack_210;
      *(double *)(param_1 + 0xa8) = dStack_1f8;
      *(double *)(param_1 + 0xa0) = dStack_200;
      *(double *)(param_1 + 0xb8) = dStack_1e8;
      *pdVar23 = dStack_1f0;
      *(long **)(param_1 + 0xc0) = plStack_1e0;
      *(undefined8 *)(param_1 + 0xf8) = uStack_230;
      *(undefined8 *)(param_1 + 0xf0) = uStack_238;
      *(undefined8 *)(param_1 + 0x108) = uStack_220;
      *(undefined8 *)(param_1 + 0x100) = uStack_228;
      *(undefined8 *)(param_1 + 0x110) = uStack_218;
      *(long **)(param_1 + 0xd8) = plStack_250;
      *(undefined8 **)(param_1 + 0xd0) = puStack_1d0;
      *(undefined8 *)(param_1 + 0xe8) = uStack_240;
      *(long *)(param_1 + 0xe0) = lStack_248;
    }
    puVar16 = puStack_98;
    uVar13 = *(undefined8 *)(param_1 + 0x160);
    uVar5 = *(undefined4 *)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x140);
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x140) = uVar13;
    uVar13 = *(undefined8 *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x148) = uVar13;
    *(undefined4 *)(param_1 + 0x150) = uVar5;
    *(ulong *)(param_1 + 0x180) = CONCAT44(iStack_ec,uStack_f0);
    *(double *)(param_1 + 0x198) = dStack_d8;
    *(double *)(param_1 + 400) = dStack_e0;
    *(double *)(param_1 + 0x1a8) = dStack_c8;
    *(double *)(param_1 + 0x1a0) = dStack_d0;
    *(double *)(param_1 + 0x1b8) = dStack_b8;
    *(double *)(param_1 + 0x1b0) = dStack_c0;
    *(undefined8 *)(param_1 + 0x1c8) = uStack_a8;
    *(undefined8 *)(param_1 + 0x1c0) = uStack_b0;
    *(uint *)(param_1 + 0x1d0) = uStack_a0;
    lVar24 = lStack_90;
    if (*(long *)(param_1 + 0x1e0) != lStack_90) {
      FUN_10942c088(param_1 + 0x1d8,lStack_90,1);
      lVar24 = *(long *)(param_1 + 0x1e0);
    }
    puVar14 = *(undefined8 **)(param_1 + 0x1d8);
    uVar15 = lVar24 - (lVar24 >> 0x3f) & 0xfffffffffffffffe;
    if (1 < lVar24) {
      lVar10 = 0;
      puVar19 = puVar14;
      puVar21 = puVar16;
      do {
        uVar13 = *puVar21;
        puVar19[1] = puVar21[1];
        *puVar19 = uVar13;
        lVar10 = lVar10 + 2;
        puVar19 = puVar19 + 2;
        puVar21 = puVar21 + 2;
      } while (lVar10 < (long)uVar15);
    }
    uVar26 = lVar24 % 2;
    if (uVar26 != 0 && (long)uVar26 < 0 == SBORROW8(lVar24,uVar15)) {
      if ((3 < uVar26) && (0x1f < (ulong)((long)puVar14 - (long)puVar16))) {
        uVar17 = uVar26 & 0xfffffffffffffffc;
        uVar15 = uVar15 + uVar17;
        puVar19 = puVar16 + (lVar24 / 2) * 2 + 2;
        puVar21 = puVar14 + (lVar24 / 2) * 2 + 2;
        uVar22 = uVar17;
        do {
          uVar13 = puVar19[-2];
          uVar31 = puVar19[1];
          uVar30 = *puVar19;
          puVar21[-1] = puVar19[-1];
          puVar21[-2] = uVar13;
          puVar21[1] = uVar31;
          *puVar21 = uVar30;
          puVar19 = puVar19 + 4;
          puVar21 = puVar21 + 4;
          uVar22 = uVar22 - 4;
        } while (uVar22 != 0);
        if (uVar26 == uVar17) goto LAB_10944c7ec;
      }
      lVar24 = lVar24 - uVar15;
      puVar14 = puVar14 + uVar15;
      puVar16 = puVar16 + uVar15;
      do {
        *puVar14 = *puVar16;
        lVar24 = lVar24 + -1;
        puVar14 = puVar14 + 1;
        puVar16 = puVar16 + 1;
      } while (lVar24 != 0);
    }
LAB_10944c7ec:
    _free(puStack_98);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  puVar12 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar12 = 1;
  uStack_210 = puVar12 + 1;
  uStack_208 = 1.38338380835549e-322;
  *(undefined1 *)(puVar12 + 8) = 0;
  *(undefined8 *)(puVar12 + 3) = 0x207c7c2030203d3d;
  *(undefined8 *)(puVar12 + 1) = 0x2029286c61746f74;
  *(undefined8 *)(puVar12 + 6) = 0x4c4c554e203d2120;
  *(undefined8 *)(puVar12 + 4) = 0x61746164207c7c20;
  FUN_109ac3188(0xffffff29,&uStack_210,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
LAB_10944c8ec:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10944c8f0);
  (*pcVar9)();
}



/* Entry: 10944c9e4; end: 10944cbd7;  */

void FUN_10944c9e4(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  undefined8 uStack_88;
  int iStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    lVar7 = *(long *)(param_2 + 0x110);
    uVar9 = *(ulong *)(lVar7 + 0x10);
    uVar10 = uVar9 >> 0x20;
    iVar8 = (int)uVar9;
    if (uVar10 == 0 && iVar8 == 0) {
      uVar10 = 0;
      lVar3 = 0;
    }
    else {
      lVar3 = (long)((uVar9 << 0x20) * uVar10) >> 0x20;
      __Znam();
      if (0 < (int)(uVar9 >> 0x20)) {
        lVar5 = (long)(uVar9 << 0x20) >> 0x20;
        lVar6 = *(long *)(lVar7 + 8);
        iVar1 = *(int *)(lVar7 + 0x18);
        lVar7 = lVar3;
        uVar9 = uVar10;
        do {
          _memcpy(lVar7,lVar6,lVar5);
          lVar6 = lVar6 + iVar1;
          lVar7 = lVar7 + lVar5;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    ppuStack_98 = &PTR_FUN_110af4c80;
    uStack_88 = CONCAT44((int)uVar10,iVar8);
    lStack_90 = lVar3;
    iStack_80 = iVar8;
    FUN_1093fb548(&puStack_78,&ppuStack_98,7);
    ppuStack_98 = &PTR_FUN_110af4c80;
    if (lStack_90 != 0) {
      __ZdaPv();
    }
    lStack_90 = 0;
    uStack_88 = 0;
    iStack_80 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    puStack_c8 = (undefined8 *)0x0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    FUN_10944cbd8(param_2,&uStack_b0,&puStack_c8,param_1 + 8,*(undefined1 *)(param_1 + 0x208));
    FUN_10944d620(param_1,param_2,&puStack_78,&uStack_b0,&puStack_c8);
    if (puStack_c8 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    puStack_c8 = &uStack_b0;
    FUN_10939cb28(&puStack_c8);
    puVar2 = puStack_78;
    if (puStack_78 != (undefined8 *)0x0) {
      while (puStack_70 != puVar2) {
        puVar4 = puStack_70 + -4;
        (**(code **)*puVar4)(puVar4);
        puStack_70 = puVar4;
      }
      puStack_70 = puVar2;
      __ZdlPv(puStack_78);
    }
  }
  return;
}



/* Entry: 10944cbd8; end: 10944d61f;  */

void FUN_10944cbd8(long param_1,double *param_2,long *param_3,long param_4,int param_5)

{
  int *piVar1;
  double *pdVar2;
  int iVar3;
  undefined8 *puVar4;
  float fVar5;
  char cVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  code *pcVar13;
  double *pdVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  float *pfVar22;
  int iVar23;
  ulong uVar24;
  float fVar25;
  double dVar26;
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  double *pdStack_228;
  double *pdStack_220;
  double *pdStack_218;
  undefined8 uStack_210;
  double *pdStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined2 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined1 uStack_130;
  undefined1 uStack_120;
  undefined1 auStack_118 [4];
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  long lStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  double *pdStack_98;
  undefined8 uStack_90;
  
  lStack_b8 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  auStack_118 = (undefined1  [4])0x42ff0000;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_114 = 0;
  lStack_d8 = (long)&uStack_114 + 4;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_ec = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  lStack_e0 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  puStack_d0 = &uStack_c8;
  if (param_5 == 0) {
    puStack_1a0 = (undefined8 *)0x0;
    uStack_198 = 0x700000000;
    uStack_190 = 0x3fb504f3000001f4;
    uStack_188 = 0;
    plStack_180 = (long *)((long)&MACH_HEADER.reserved + 2);
    lStack_178 = CONCAT44(lStack_178._4_4_,2);
    puStack_168 = (undefined8 *)0x1900000001e;
    lStack_170 = 0x7fffffff00000012;
    uStack_160 = 0x753000000190;
    uStack_158 = 0x3b23d70a40400000;
    uStack_150 = 0xffffffffffffffff;
    uStack_148 = 0x101;
    uStack_140 = 0x40;
    uStack_138 = 0x40800000;
    uStack_130 = 0;
    uStack_120 = 0;
    uStack_1b0 = *(undefined8 *)(param_4 + 4);
    uStack_1a8 = CONCAT44(0x40000000,(int)*(undefined8 *)(param_4 + 0x68));
    FUN_10940b428(&pdStack_228,*(undefined8 *)(param_1 + 0x110),&uStack_1b0);
    plStack_a0 = &lStack_b8;
    pdStack_98 = (double *)auStack_118;
    FUN_10940bb20(&plStack_a0,&pdStack_228);
    if (lStack_1d8 != 0) {
      piVar1 = (int *)(lStack_1d8 + 0x14);
      do {
        iVar23 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar23 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((iVar23 + -1 == 0) && (lStack_1d8 != 0)) {
        plVar16 = *(long **)(lStack_1d8 + 8);
        if ((*(long **)(lStack_1d8 + 8) == (long *)0x0) &&
           ((plVar16 = plStack_1e0, plStack_1e0 == (long *)0x0 &&
            (plVar16 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
          FUN_109a83e3c();
          plVar16 = plRam000000011382bb80;
        }
        (**(code **)(*plVar16 + 0x30))();
      }
    }
    if (0 < uStack_210._4_4_) {
      lVar17 = 0;
      do {
        *(undefined4 *)(lStack_1d0 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < uStack_210._4_4_);
    }
  }
  else {
    uStack_1b0 = 0x200000001;
    uStack_1a8 = 0x3fb33333000005dc;
    puStack_1a0 = (undefined8 *)0x0;
    uStack_188 = 0;
    plStack_180 = (long *)((long)&MACH_HEADER.reserved + 2);
    lStack_178 = CONCAT44(lStack_178._4_4_,2);
    puStack_168 = (undefined8 *)0x1900000001e;
    lStack_170 = 0x7fffffff00000012;
    uStack_160 = 0x753000000190;
    uStack_158 = 0x3b23d70a40400000;
    uStack_150 = 0xffffffffffffffff;
    uStack_148 = 0x101;
    uStack_140 = 0x40;
    uStack_138 = 0x40800000;
    uStack_130 = 0;
    uStack_120 = 0;
    uStack_198 = *(undefined8 *)(param_4 + 4);
    uStack_190 = CONCAT44(0x40000000,*(undefined4 *)(param_4 + 0x1c));
    FUN_10940be70(&pdStack_228,*(undefined8 *)(param_1 + 0x110),&uStack_1b0);
    plStack_a0 = &lStack_b8;
    pdStack_98 = (double *)auStack_118;
    FUN_10940bb20(&plStack_a0,&pdStack_228);
    if (lStack_1d8 != 0) {
      piVar1 = (int *)(lStack_1d8 + 0x14);
      do {
        iVar23 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar23 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((iVar23 + -1 == 0) && (lStack_1d8 != 0)) {
        plVar16 = *(long **)(lStack_1d8 + 8);
        if ((*(long **)(lStack_1d8 + 8) == (long *)0x0) &&
           ((plVar16 = plStack_1e0, plStack_1e0 == (long *)0x0 &&
            (plVar16 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
          FUN_109a83e3c();
          plVar16 = plRam000000011382bb80;
        }
        (**(code **)(*plVar16 + 0x30))();
      }
    }
    if (0 < uStack_210._4_4_) {
      lVar17 = 0;
      do {
        *(undefined4 *)(lStack_1d0 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < uStack_210._4_4_);
    }
  }
  lStack_1d8 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  if (puStack_1c8 != auStack_1c0 && puStack_1c8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_1c8 + -8));
  }
  if (pdStack_228 != (double *)0x0) {
    pdStack_220 = pdStack_228;
    __ZdlPv();
  }
  if (lStack_b0 != lStack_b8) {
    uVar24 = 0;
    auVar29 = NEON_fmov(0x3fe0000000000000,8);
    auVar27 = NEON_fmov(0xbfe0000000000000,8);
    do {
      pfVar22 = (float *)(lStack_b8 + uVar24 * 0x1c);
      fVar30 = *pfVar22;
      fVar31 = pfVar22[1];
      iVar23 = (int)uVar24;
      pdStack_228 = (double *)CONCAT44(iVar23 + 1,iVar23);
      plStack_a0 = (long *)0x7fffffff80000000;
      FUN_109a84930(&uStack_1b0,auStack_118,&pdStack_228,&plStack_a0);
      pdVar14 = (double *)param_2[1];
      if (pdVar14 < (double *)param_2[2]) {
        fVar28 = pfVar22[3];
        fVar25 = pfVar22[4];
        fVar5 = pfVar22[5];
        *pdVar14 = (double)fVar30;
        pdVar14[1] = (double)fVar31;
        pdVar14[4] = (double)fVar25;
        *(float *)(pdVar14 + 5) = fVar5;
        pdVar14[6] = (double)fVar28;
        *(undefined4 *)(pdVar14 + 10) = 0x42ff0000;
        pdVar14[7] = 2.0;
        *(undefined8 *)((long)pdVar14 + 0x5c) = 0;
        *(undefined8 *)((long)pdVar14 + 0x54) = 0;
        *(undefined8 *)((long)pdVar14 + 0x6c) = 0;
        *(undefined8 *)((long)pdVar14 + 100) = 0;
        *(undefined8 *)((long)pdVar14 + 0x7c) = 0;
        *(undefined8 *)((long)pdVar14 + 0x74) = 0;
        pdVar14[0x11] = 0.0;
        pdVar14[0x10] = 0.0;
        pdVar14[0x14] = 0.0;
        pdVar14[0x12] = (double)(pdVar14 + 0xb);
        pdVar14[0x13] = (double)(pdVar14 + 0x14);
        pdVar14[0x15] = 0.0;
        dVar26 = (double)_ldexp(0x3ff0000000000000);
        pdVar14[8] = dVar26;
        pdVar14[9] = 1.0 / dVar26;
        pdVar14[3] = (pdVar14[1] + auVar29._8_8_) * dVar26 + auVar27._8_8_;
        pdVar14[2] = (*pdVar14 + auVar29._0_8_) * dVar26 + auVar27._0_8_;
        pdStack_228 = (double *)CONCAT44(pdStack_228._4_4_,0x2010000);
        pdStack_218 = (double *)0x0;
        pdStack_220 = pdVar14 + 10;
        FUN_109a479a0(&uStack_1b0,&pdStack_228);
        param_2[1] = (double)(pdVar14 + 0x16);
        param_2[1] = (double)(pdVar14 + 0x16);
      }
      else {
        lVar17 = (long)pdVar14 - (long)*param_2;
        uVar18 = (lVar17 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
        if (0x1745d1745d1745d < uVar18) {
          FUN_10939c884();
          goto LAB_10944d574;
        }
        lVar21 = (long)param_2[2] - (long)*param_2 >> 4;
        uVar20 = lVar21 * 0x5d1745d1745d1746;
        if (uVar20 < uVar18 || uVar20 - uVar18 == 0) {
          uVar20 = uVar18;
        }
        if (0xba2e8ba2e8ba2d < (ulong)(lVar21 * 0x2e8ba2e8ba2e8ba3)) {
          uVar20 = 0x1745d1745d1745d;
        }
        pdStack_208 = param_2;
        if (uVar20 == 0) {
          pdVar14 = (double *)0x0;
        }
        else {
          pdVar14 = param_2;
          FUN_10939c898(param_2,uVar20,0);
        }
        pdVar2 = (double *)((long)pdVar14 + lVar17);
        uStack_210 = pdVar14 + uVar20 * 0x16;
        fVar28 = pfVar22[3];
        fVar25 = pfVar22[4];
        fVar5 = pfVar22[5];
        *pdVar2 = (double)fVar30;
        pdVar2[1] = (double)fVar31;
        pdVar2[4] = (double)fVar25;
        *(float *)(pdVar2 + 5) = fVar5;
        pdVar2[6] = (double)fVar28;
        *(undefined4 *)(pdVar2 + 10) = 0x42ff0000;
        pdVar2[7] = 2.0;
        *(undefined8 *)((long)pdVar2 + 0x7c) = 0;
        *(undefined8 *)((long)pdVar2 + 0x74) = 0;
        pdVar2[0x11] = 0.0;
        pdVar2[0x10] = 0.0;
        *(undefined8 *)((long)pdVar2 + 0x6c) = 0;
        *(undefined8 *)((long)pdVar2 + 100) = 0;
        *(undefined8 *)((long)pdVar2 + 0x5c) = 0;
        *(undefined8 *)((long)pdVar2 + 0x54) = 0;
        pdVar2[0x14] = 0.0;
        pdVar2[0x12] = (double)(pdVar2 + 0xb);
        pdVar2[0x13] = (double)(pdVar2 + 0x14);
        pdVar2[0x15] = 0.0;
        pdStack_228 = pdVar14;
        pdStack_220 = pdVar2;
        pdStack_218 = pdVar2;
        dVar26 = (double)_ldexp(0x3ff0000000000000);
        pdVar2[8] = dVar26;
        pdVar2[9] = 1.0 / dVar26;
        pdVar2[3] = (pdVar2[1] + auVar29._8_8_) * dVar26 + auVar27._8_8_;
        pdVar2[2] = (*pdVar2 + auVar29._0_8_) * dVar26 + auVar27._0_8_;
        plStack_a0 = (long *)CONCAT44(plStack_a0._4_4_,0x2010000);
        uStack_90 = 0;
        pdStack_98 = pdVar2 + 10;
        FUN_109a479a0(&uStack_1b0,&plStack_a0);
        pdStack_218 = pdVar2 + 0x16;
        dVar26 = (double)((long)pdVar2 + ((long)*param_2 - (long)param_2[1]));
        FUN_10939c900(param_2,*param_2,param_2[1],dVar26);
        pdVar14 = pdStack_218;
        pdStack_228 = (double *)*param_2;
        *param_2 = dVar26;
        dVar26 = param_2[2];
        param_2[2] = (double)uStack_210;
        param_2[1] = (double)pdStack_218;
        pdStack_220 = pdStack_228;
        pdStack_218 = pdStack_228;
        uStack_210 = (double *)dVar26;
        FUN_10939cadc(&pdStack_228);
        param_2[1] = (double)pdVar14;
      }
      if (lStack_178 != 0) {
        piVar1 = (int *)(lStack_178 + 0x14);
        do {
          iVar3 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar3 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((iVar3 + -1 == 0) && (lStack_178 != 0)) {
          plVar16 = *(long **)(lStack_178 + 8);
          if ((*(long **)(lStack_178 + 8) == (long *)0x0) &&
             ((plVar16 = plStack_180, plStack_180 == (long *)0x0 &&
              (plVar16 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
            FUN_109a83e3c();
            plVar16 = plRam000000011382bb80;
          }
          (**(code **)(*plVar16 + 0x30))();
        }
      }
      lStack_178 = 0;
      uStack_198 = 0;
      puStack_1a0 = (undefined8 *)0x0;
      uStack_188 = 0;
      uStack_190 = 0;
      if (0 < uStack_1b0._4_4_) {
        lVar17 = 0;
        do {
          *(undefined4 *)(lStack_170 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < uStack_1b0._4_4_);
      }
      if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
        _free(puStack_168[-1]);
      }
      pdStack_228 = (double *)CONCAT44(iVar23 + 1,iVar23);
      plStack_a0 = (long *)0x7fffffff80000000;
      FUN_109a84930(&uStack_1b0,auStack_118,&pdStack_228,&plStack_a0);
      puVar12 = puStack_1a0;
      puVar4 = (undefined8 *)param_3[1];
      if (puVar4 < (undefined8 *)param_3[2]) {
        uVar9 = *puStack_1a0;
        auVar8 = *(undefined1 (*) [16])(puStack_1a0 + 2);
        puVar4[1] = puStack_1a0[1];
        *puVar4 = uVar9;
        puVar4[3] = auVar8._8_8_;
        puVar4[2] = auVar8._0_8_;
        param_3[1] = (long)(puVar4 + 4);
        param_3[1] = (long)(puVar4 + 4);
      }
      else {
        lVar17 = *param_3;
        lVar21 = (long)puVar4 - lVar17;
        uVar18 = (lVar21 >> 5) + 1;
        if (uVar18 >> 0x3b != 0) {
          func_0x000109452c94();
LAB_10944d574:
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10944d578);
          (*pcVar13)();
        }
        uVar19 = param_3[2] - lVar17;
        uVar20 = (long)uVar19 >> 4;
        if (uVar20 <= uVar18) {
          uVar20 = uVar18;
        }
        if (0x7fffffffffffffdf < uVar19) {
          uVar20 = 0x7ffffffffffffff;
        }
        if (uVar20 >> 0x3b != 0) {
          func_0x000104c4f740();
          goto LAB_10944d574;
        }
        lVar15 = uVar20 << 5;
        __Znwm();
        puVar4 = (undefined8 *)(lVar15 + lVar21);
        uVar9 = *puVar12;
        uVar10 = puVar12[2];
        uVar11 = puVar12[3];
        puVar4[1] = puVar12[1];
        *puVar4 = uVar9;
        puVar4[3] = uVar11;
        puVar4[2] = uVar10;
        _memcpy(puVar4 + (lVar21 >> 5) * -4,lVar17,lVar21);
        *param_3 = (long)(puVar4 + (lVar21 >> 5) * -4);
        param_3[1] = (long)(puVar4 + 4);
        param_3[2] = lVar15 + uVar20 * 0x20;
        if (lVar17 != 0) {
          __ZdlPv(lVar17);
        }
        param_3[1] = (long)(puVar4 + 4);
      }
      if (lStack_178 != 0) {
        piVar1 = (int *)(lStack_178 + 0x14);
        do {
          iVar23 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar23 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((iVar23 + -1 == 0) && (lStack_178 != 0)) {
          plVar16 = *(long **)(lStack_178 + 8);
          if ((*(long **)(lStack_178 + 8) == (long *)0x0) &&
             ((plVar16 = plStack_180, plStack_180 == (long *)0x0 &&
              (plVar16 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
            FUN_109a83e3c();
            plVar16 = plRam000000011382bb80;
          }
          (**(code **)(*plVar16 + 0x30))();
        }
      }
      lStack_178 = 0;
      uStack_198 = 0;
      puStack_1a0 = (undefined8 *)0x0;
      uStack_188 = 0;
      uStack_190 = 0;
      if (0 < uStack_1b0._4_4_) {
        lVar17 = 0;
        do {
          *(undefined4 *)(lStack_170 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < uStack_1b0._4_4_);
      }
      if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
        _free(puStack_168[-1]);
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < (ulong)((lStack_b0 - lStack_b8 >> 2) * 0x6db6db6db6db6db7));
  }
  if (lStack_e0 != 0) {
    piVar1 = (int *)(lStack_e0 + 0x14);
    do {
      iVar23 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar23 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((iVar23 + -1 == 0) && (lStack_e0 != 0)) {
      plVar16 = *(long **)(lStack_e0 + 8);
      if ((*(long **)(lStack_e0 + 8) == (long *)0x0) &&
         ((plVar16 = (long *)CONCAT44(uStack_e4,uStack_e8),
          (long *)CONCAT44(uStack_e4,uStack_e8) == (long *)0x0 &&
          (plVar16 = plRam000000011382bb80, plRam000000011382bb80 == (long *)0x0)))) {
        FUN_109a83e3c();
        plVar16 = plRam000000011382bb80;
      }
      (**(code **)(*plVar16 + 0x30))();
    }
  }
  lStack_e0 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if (0 < (int)uStack_114) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_d8 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)uStack_114);
  }
  if (puStack_d0 != &uStack_c8 && puStack_d0 != (undefined8 *)0x0) {
    _free(puStack_d0[-1]);
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  return;
}



/* Entry: 10944d620; end: 109450723;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10944d620(long *param_1,long param_2,undefined8 *param_3,long *param_4,long *param_5)

{
  bool bVar1;
  long *plVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  ulong uVar10;
  undefined8 *******pppppppuVar11;
  code *pcVar12;
  int *piVar13;
  undefined8 *****pppppuVar14;
  ulong *puVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *******pppppppuVar17;
  ulong uVar18;
  int *piVar19;
  uint *puVar20;
  long lVar21;
  undefined8 ******ppppppuVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 uVar29;
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  byte bVar34;
  ulong *puVar35;
  ulong uVar36;
  long lVar37;
  long *plVar38;
  long lVar39;
  undefined8 *puVar40;
  ulong *puVar41;
  ulong *puVar42;
  undefined8 *****pppppuVar43;
  ulong uVar44;
  int *piVar45;
  int *piVar46;
  long lVar47;
  undefined8 *******pppppppuVar48;
  undefined8 *******pppppppuVar49;
  long lVar50;
  undefined8 *******pppppppuVar51;
  undefined8 *puVar52;
  ulong *puVar53;
  int iVar54;
  undefined8 *puVar55;
  undefined8 *puVar56;
  ulong *puVar57;
  long lVar58;
  undefined8 *puVar59;
  int *piVar60;
  int *piVar61;
  undefined8 *******pppppppuVar62;
  uint *puVar63;
  int iVar64;
  int iVar65;
  ulong *puVar66;
  double dVar67;
  double dVar68;
  long lVar69;
  long lVar70;
  undefined8 ******ppppppuVar71;
  long lVar72;
  long lVar73;
  undefined8 uVar74;
  int iVar76;
  undefined8 ******ppppppuVar75;
  uint uVar77;
  undefined8 ******ppppppuVar78;
  long lVar79;
  undefined8 *****pppppuVar80;
  long lVar82;
  undefined1 auVar81 [16];
  double dVar83;
  long lVar84;
  undefined8 *****pppppuVar85;
  long lVar86;
  double dVar87;
  long lVar88;
  long lVar89;
  double dVar90;
  double dVar91;
  double dVar92;
  double dVar93;
  long lVar94;
  long lVar95;
  long lStack_3a8;
  int *piStack_350;
  int *piStack_290;
  int *piStack_288;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  char cStack_258;
  undefined8 *******pppppppuStack_250;
  undefined8 *******pppppppuStack_248;
  undefined8 *******pppppppuStack_240;
  ulong uStack_238;
  int *piStack_230;
  int *piStack_228;
  int *piStack_220;
  undefined8 *******pppppppuStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f0;
  double dStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined8 *******pppppppuStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined8 *******pppppppuStack_1c8;
  undefined8 *******pppppppuStack_1c0;
  undefined8 *******pppppppuStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  undefined8 *******pppppppuStack_1a8;
  long lStack_1a0;
  undefined1 uStack_191;
  undefined8 *******pppppppuStack_190;
  undefined8 *******pppppppuStack_188;
  undefined8 *******pppppppuStack_180;
  undefined8 *******pppppppuStack_178;
  undefined8 *******pppppppuStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *******pppppppuStack_140;
  undefined8 ******ppppppuStack_138;
  undefined8 ******ppppppuStack_130;
  undefined8 ******ppppppuStack_128;
  undefined8 ******ppppppuStack_120;
  undefined8 ******ppppppuStack_118;
  undefined8 uStack_110;
  undefined8 ******ppppppuStack_108;
  undefined8 ******ppppppuStack_100;
  undefined8 ******ppppppuStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined8 ******ppppppuStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 ******ppppppuStack_d0;
  long *plStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_1[0x11] != 0) {
    FUN_10944c020(param_1,param_2,*param_3);
    puVar35 = (ulong *)(param_2 + 0x10);
    uStack_238 = *puVar35;
    uVar36 = param_1[0xf];
    pppppppuStack_248 = (undefined8 *******)0x0;
    pppppppuStack_250 = (undefined8 *******)0x0;
    pppppppuStack_240 = (undefined8 *******)0x0;
    piStack_228 = (int *)0x0;
    piStack_230 = (int *)0x0;
    piStack_220 = (int *)0x0;
    if ((int)param_1[2] != -1) {
      piVar61 = (int *)0x0;
      iVar54 = (int)param_1[2] + 1;
      piVar19 = (int *)0x0;
      do {
        while (iVar23 = (int)uVar36, piStack_228 < piVar61) {
          piVar45 = piStack_228 + 1;
          *piStack_228 = iVar23;
          uVar36 = (ulong)(uint)(iVar23 << 1);
          iVar54 = iVar54 + -1;
          piStack_228 = piVar45;
          if (iVar54 == 0) goto LAB_10944d76c;
        }
        lVar50 = (long)piStack_228 - (long)piVar19;
        uVar36 = (lVar50 >> 2) + 1;
        if (uVar36 >> 0x3e != 0) {
          FUN_109231bc0();
          goto LAB_1094504f8;
        }
        uVar26 = (long)piVar61 - (long)piVar19 >> 1;
        if (uVar26 <= uVar36) {
          uVar26 = uVar36;
        }
        if (0x7ffffffffffffffb < (ulong)((long)piVar61 - (long)piVar19)) {
          uVar26 = 0x3fffffffffffffff;
        }
        if (uVar26 >> 0x3e != 0) {
          func_0x000104c4f740();
          goto LAB_1094504f8;
        }
        piVar13 = (int *)(uVar26 << 2);
        __Znwm();
        piVar46 = (int *)((long)piVar13 + lVar50);
        piVar61 = piVar13 + uVar26;
        piVar45 = piVar46 + 1;
        *piVar46 = iVar23;
        _memcpy();
        piStack_230 = piVar13;
        piStack_220 = piVar61;
        if (piVar19 != (int *)0x0) {
          __ZdlPv(piVar19);
        }
        uVar36 = (ulong)(uint)(iVar23 << 1);
        iVar54 = iVar54 + -1;
        piVar19 = piVar13;
        piStack_228 = piVar45;
      } while (iVar54 != 0);
LAB_10944d76c:
      piStack_228 = piVar45;
      if (piVar45 != piVar19) {
        pppppppuVar51 = (undefined8 *******)0x0;
        uVar36 = 0;
        do {
          dVar67 = (double)NEON_ucvtf(uStack_238 & 0xffffffff);
          dVar83 = (double)NEON_ucvtf((ulong)(uint)piVar19[uVar36]);
          dVar68 = (double)NEON_ucvtf(uStack_238 >> 0x20);
          if (pppppppuVar51 < pppppppuStack_240) {
            *pppppppuVar51 = (undefined8 ******)0x0;
            pppppppuVar51[1] = (undefined8 ******)0x0;
            pppppppuVar51[2] = (undefined8 ******)0x0;
            pppppppuVar51[3] = (undefined8 ******)0x1;
            pppppppuVar51[4] = (undefined8 ******)0x0;
            FUN_109452984(pppppppuVar51);
            pppppppuVar51 = pppppppuVar51 + 5;
            pppppppuVar49 = pppppppuStack_250;
          }
          else {
            lVar50 = (long)pppppppuVar51 - (long)pppppppuStack_250;
            uVar26 = (lVar50 >> 3) * -0x3333333333333333 + 1;
            if (0x666666666666666 < uVar26) {
              func_0x000109452c80();
              goto LAB_1094504f8;
            }
            lVar58 = (long)pppppppuStack_240 - (long)pppppppuStack_250 >> 3;
            uVar18 = lVar58 * -0x6666666666666666;
            if (uVar18 < uVar26 || uVar18 - uVar26 == 0) {
              uVar18 = uVar26;
            }
            if (0x333333333333332 < (ulong)(lVar58 * -0x3333333333333333)) {
              uVar18 = 0x666666666666666;
            }
            pppppppuStack_140 = &pppppppuStack_250;
            if (uVar18 == 0) {
              pppppppuVar51 = (undefined8 *******)0x0;
            }
            else {
              if (0x666666666666666 < uVar18) {
                func_0x000104c4f740();
                goto LAB_1094504f8;
              }
              pppppppuVar51 = (undefined8 *******)(uVar18 * 0x28);
              __Znwm();
            }
            ppppppuVar78 = (undefined8 ******)((long)pppppppuVar51 + lVar50);
            *ppppppuVar78 = (undefined8 *****)0x0;
            ppppppuVar78[2] = (undefined8 *****)0x0;
            ppppppuVar78[1] = (undefined8 *****)0x0;
            ppppppuVar78[3] = (undefined8 *****)0x1;
            ppppppuVar78[4] = (undefined8 *****)0x0;
            uStack_160 = pppppppuVar51;
            uStack_158 = ppppppuVar78;
            uStack_150 = (undefined8 *******)ppppppuVar78;
            uStack_148 = pppppppuVar51 + uVar18 * 5;
            FUN_109452984(ppppppuVar78,(int)((double)(long)(dVar67 / dVar83) + 1.0),
                          (int)((double)(long)(dVar68 / dVar83) + 1.0));
            pppppppuVar11 = pppppppuStack_248;
            uStack_150 = (undefined8 *******)(ppppppuVar78 + 5);
            pppppppuVar49 =
                 (undefined8 *******)
                 ((long)ppppppuVar78 + ((long)pppppppuStack_250 - (long)pppppppuStack_248));
            pppppppuVar17 = pppppppuVar49;
            pppppppuVar48 = pppppppuStack_250;
            pppppppuVar62 = pppppppuVar51 + uVar18 * 5;
            if ((long)pppppppuStack_250 - (long)pppppppuStack_248 != 0) {
              do {
                *pppppppuVar17 = (undefined8 ******)0x0;
                pppppppuVar17[1] = (undefined8 ******)0x0;
                pppppppuVar17[2] = (undefined8 ******)0x0;
                ppppppuVar78 = *pppppppuVar48;
                pppppppuVar17[1] = pppppppuVar48[1];
                *pppppppuVar17 = ppppppuVar78;
                pppppppuVar17[2] = pppppppuVar48[2];
                *pppppppuVar48 = (undefined8 ******)0x0;
                pppppppuVar48[1] = (undefined8 ******)0x0;
                pppppppuVar48[2] = (undefined8 ******)0x0;
                ppppppuVar78 = pppppppuVar48[3];
                pppppppuVar17[4] = pppppppuVar48[4];
                pppppppuVar17[3] = ppppppuVar78;
                pppppppuVar48 = pppppppuVar48 + 5;
                pppppppuVar17 = pppppppuVar17 + 5;
                pppppppuVar51 = pppppppuStack_250;
              } while (pppppppuVar48 != pppppppuStack_248);
              do {
                ppppppuVar78 = *pppppppuVar51;
                if (ppppppuVar78 != (undefined8 ******)0x0) {
                  ppppppuVar22 = pppppppuVar51[1];
                  ppppppuVar16 = ppppppuVar78;
                  if (ppppppuVar22 != ppppppuVar78) {
                    do {
                      ppppppuVar16 = ppppppuVar22 + -3;
                      if (*ppppppuVar16 != (undefined8 *****)0x0) {
                        ppppppuVar22[-2] = *ppppppuVar16;
                        __ZdlPv();
                      }
                      ppppppuVar22 = ppppppuVar16;
                    } while (ppppppuVar16 != ppppppuVar78);
                    ppppppuVar16 = *pppppppuVar51;
                  }
                  pppppppuVar51[1] = ppppppuVar78;
                  __ZdlPv(ppppppuVar16);
                }
                pppppppuVar51 = pppppppuVar51 + 5;
                pppppppuVar62 = uStack_148;
              } while (pppppppuVar51 != pppppppuVar11);
            }
            pppppppuVar51 = uStack_150;
            pppppppuStack_240 = pppppppuVar62;
            if (pppppppuStack_250 != (undefined8 *******)0x0) {
              pppppppuVar48 = pppppppuStack_250;
              pppppppuStack_250 = pppppppuVar49;
              pppppppuStack_248 = uStack_150;
              __ZdlPv(pppppppuVar48);
              pppppppuVar49 = pppppppuStack_250;
            }
          }
          pppppppuStack_250 = pppppppuVar49;
          uVar36 = (ulong)((int)uVar36 + 1);
          piVar19 = piStack_230;
          pppppppuStack_248 = pppppppuVar51;
        } while (uVar36 < (ulong)((long)piStack_228 - (long)piStack_230 >> 2));
      }
    }
    lVar50 = *param_4;
    if (param_4[1] != lVar50) {
      lVar37 = 0;
      lVar58 = 0;
      do {
        lVar50 = lVar50 + lVar37;
        dVar67 = (double)NEON_ucvtf((ulong)(uint)piStack_230[*(uint *)(lVar50 + 0x28)]);
        ppppppuVar78 = (pppppppuStack_250 + (ulong)*(uint *)(lVar50 + 0x28) * 5)[3];
        ppppppuVar78 = pppppppuStack_250[(ulong)*(uint *)(lVar50 + 0x28) * 5] +
                       (long)((int)((ulong)ppppppuVar78 >> 0x20) *
                              (int)(long)(double)(long)(*(double *)(lVar50 + 0x18) / dVar67) +
                             (int)ppppppuVar78 *
                             (int)(long)(double)(long)(*(double *)(lVar50 + 0x10) / dVar67)) * 3;
        pppppuVar80 = ppppppuVar78[1];
        if (pppppuVar80 < ppppppuVar78[2]) {
          pppppuVar85 = (undefined8 *****)((long)pppppuVar80 + 4);
          *(int *)pppppuVar80 = (int)lVar58;
        }
        else {
          pppppuVar43 = *ppppppuVar78;
          uVar36 = ((long)pppppuVar80 - (long)pppppuVar43 >> 2) + 1;
          if (uVar36 >> 0x3e != 0) {
            FUN_109231bc0();
            goto LAB_1094504f8;
          }
          uVar18 = (long)ppppppuVar78[2] - (long)pppppuVar43;
          uVar26 = (long)uVar18 >> 1;
          if (uVar26 <= uVar36) {
            uVar26 = uVar36;
          }
          if (0x7ffffffffffffffb < uVar18) {
            uVar26 = 0x3fffffffffffffff;
          }
          if (uVar26 >> 0x3e != 0) {
            func_0x000104c4f740();
            goto LAB_1094504f8;
          }
          pppppuVar14 = (undefined8 *****)(uVar26 << 2);
          __Znwm();
          puVar3 = (undefined4 *)((long)pppppuVar14 + ((long)pppppuVar80 - (long)pppppuVar43));
          pppppuVar85 = (undefined8 *****)(puVar3 + 1);
          *puVar3 = (int)lVar58;
          _memcpy();
          *ppppppuVar78 = pppppuVar14;
          ppppppuVar78[1] = pppppuVar85;
          ppppppuVar78[2] = (undefined8 *****)((long)pppppuVar14 + uVar26 * 4);
          if (pppppuVar43 != (undefined8 *****)0x0) {
            __ZdlPv(pppppuVar43);
          }
        }
        ppppppuVar78[1] = pppppuVar85;
        lVar58 = lVar58 + 1;
        lVar50 = *param_4;
        lVar37 = lVar37 + 0xb0;
      } while (lVar58 != (param_4[1] - lVar50 >> 4) * 0x2e8ba2e8ba2e8ba3);
    }
    param_1[0x26] = param_1[0x26] + 1;
    dStack_270 = (double)((ulong)dStack_270 & 0xffffffffffffff00);
    cStack_258 = '\0';
    if ((*(byte *)(param_1 + 0x41) & 1) == 0) {
      bVar1 = false;
      lStack_3a8 = 0x228;
      lVar50 = 0x30;
      iVar54 = (int)param_1[5];
    }
    else {
      if ((*(char *)(*param_1 + 0x50) == '\x01') && ((*(byte *)(param_2 + 0x268) & 1) != 0)) {
        dVar67 = *(double *)(param_2 + 0x120);
        dVar68 = *(double *)(param_2 + 0x128);
        dVar87 = dVar68 + dVar68;
        dVar90 = *(double *)(param_2 + 0x130);
        dVar91 = *(double *)(param_2 + 0x138);
        dVar92 = dVar90 + dVar90;
        dVar93 = (dVar67 + dVar67) * dVar91;
        dVar83 = dVar67 * (dVar67 + dVar67);
        dStack_270 = ((1.0 - (dVar68 * dVar87 + dVar90 * dVar92)) * 0.0 +
                     (dVar67 * dVar87 + dVar92 * dVar91) * 0.0) -
                     (dVar67 * dVar92 - dVar87 * dVar91);
        dStack_268 = ((dVar67 * dVar87 - dVar92 * dVar91) * 0.0 +
                     (1.0 - (dVar83 + dVar90 * dVar92)) * 0.0) - (dVar68 * dVar92 + dVar93);
        dStack_260 = (dVar67 * dVar92 + dVar87 * dVar91) * 0.0 +
                     ((dVar68 * dVar92 - dVar93) * 0.0 - (1.0 - (dVar83 + dVar68 * dVar87)));
        cStack_258 = '\x01';
      }
      FUN_10946f190(&uStack_160,param_3,puVar35,param_1 + 0x12,param_1 + 0x3e,param_1 + 0x19d,
                    &dStack_270);
      iVar54 = (int)((ulong)((long)uStack_158 - (long)uStack_160) >> 4) * -0x3b13b13b;
      bVar1 = *(int *)((long)param_1 + 0x2c) <= iVar54;
      if (iVar54 < *(int *)((long)param_1 + 0x2c)) {
        lStack_3a8 = 0x228;
        lVar50 = 0x30;
      }
      else {
        FUN_109428468(param_1 + 0x3e);
        param_1[0x3f] = (long)uStack_158;
        param_1[0x3e] = (long)uStack_160;
        param_1[0x40] = (long)uStack_150;
        uStack_150 = (undefined8 *******)0x0;
        uStack_158 = (undefined8 ******)0x0;
        uStack_160 = (undefined8 *******)0x0;
        param_1[0x13] = (long)ppppppuStack_138;
        param_1[0x12] = (long)pppppppuStack_140;
        param_1[0x15] = (long)ppppppuStack_128;
        param_1[0x14] = (long)ppppppuStack_130;
        param_1[0x17] = (long)ppppppuStack_118;
        param_1[0x16] = (long)ppppppuStack_120;
        param_1[0x18] = (long)uStack_110;
        param_1[0x1b] = (long)ppppppuStack_f8;
        param_1[0x1a] = (long)ppppppuStack_100;
        param_1[0x1d] = (long)ppppppuStack_e8;
        param_1[0x1c] = (long)ppppppuStack_f0;
        param_1[0x1f] = (long)ppppppuStack_d8;
        param_1[0x1e] = (long)ppppppuStack_e0;
        param_1[0x21] = (long)plStack_c8;
        param_1[0x20] = (long)ppppppuStack_d0;
        lStack_3a8 = 0x240;
        lVar50 = 0x38;
        param_1[0x22] = lStack_c0;
      }
      pppppppuStack_190 = (undefined8 *******)&uStack_160;
      FUN_10942a570(&pppppppuStack_190);
      iVar54 = (int)param_1[5];
    }
    if (0 < iVar54) {
      iVar54 = 0;
      dVar67 = *(double *)((long)param_1 + lVar50);
      plVar2 = param_1 + 0x4e;
LAB_10944dd04:
      pppppppuStack_1a8 = (undefined8 *******)0x0;
      uStack_160 = &pppppppuStack_1b0;
      pppppppuStack_1b0 = (undefined8 *******)0x0;
      lStack_1a0 = 0;
      lVar50 = param_1[0x3e];
      lVar58 = param_1[0x3f];
      uStack_158 = (undefined8 ******)((ulong)uStack_158 & 0xffffffffffffff00);
      lVar37 = lVar58 - lVar50;
      if (lVar37 != 0) {
        uVar36 = (lVar37 >> 4) * 0x4ec4ec4ec4ec4ec5;
        if (0x13b13b13b13b13b < uVar36) {
          FUN_109428800();
          goto LAB_1094504f8;
        }
        pppppppuVar51 = &pppppppuStack_1b0;
        FUN_109428814(pppppppuVar51,uVar36,0);
        lStack_1a0 = (long)pppppppuVar51 + lVar37;
        pppppppuVar48 = &pppppppuStack_1b0;
        pppppppuStack_1b0 = pppppppuVar51;
        pppppppuStack_1a8 = pppppppuVar51;
        FUN_10942857c(pppppppuVar48,lVar50,lVar58,pppppppuVar51);
        pppppppuStack_1a8 = pppppppuVar48;
      }
      lVar50 = param_1[0x12];
      lVar58 = param_1[0x13];
      lVar72 = param_1[0x15];
      lVar69 = param_1[0x14];
      lVar37 = param_1[0x16];
      lVar25 = param_1[0x17];
      lVar95 = param_1[0x18];
      lVar89 = param_1[0x1d];
      lVar88 = param_1[0x1c];
      lVar86 = SUB168(*(undefined1 (*) [16])(param_1 + 0x1a),8);
      lVar84 = SUB168(*(undefined1 (*) [16])(param_1 + 0x1a),0);
      lVar73 = param_1[0x21];
      lVar70 = param_1[0x20];
      lVar82 = SUB168(*(undefined1 (*) [16])(param_1 + 0x1e),8);
      lVar79 = SUB168(*(undefined1 (*) [16])(param_1 + 0x1e),0);
      lVar94 = param_1[0x22];
      *(undefined4 *)(param_1 + 0x5b) = 0;
      uVar36 = param_1[0x54] - param_1[0x53] >> 2;
      if ((ulong)param_1[0x62] <= uVar36) {
        uVar36 = param_1[0x62];
      }
      piVar19 = (int *)param_1[0x5d];
      piVar61 = (int *)param_1[0x5c];
      uVar26 = (long)piVar19 - (long)piVar61 >> 2;
      if (uVar36 < uVar26 || uVar36 - uVar26 == 0) {
        if (uVar36 < uVar26) {
          piVar19 = piVar61 + uVar36;
          param_1[0x5d] = (long)piVar19;
        }
      }
      else {
        func_0x000107c2a6fc(param_1 + 0x5c,uVar36 - uVar26);
        piVar61 = (int *)param_1[0x5c];
        piVar19 = (int *)param_1[0x5d];
      }
      if (piVar61 != piVar19) {
        uVar36 = (long)piVar19 + (-4 - (long)piVar61);
        if (uVar36 < 0x1c) {
          uVar18 = 0;
          piVar46 = piVar61;
        }
        else {
          uVar36 = (uVar36 >> 2) + 1;
          uVar18 = uVar36 & 0x7ffffffffffffff8;
          piVar46 = piVar61 + uVar18;
          uVar74 = 0x300000002;
          uVar29 = 0x100000000;
          piVar61 = piVar61 + 4;
          uVar26 = uVar18;
          do {
            iVar23 = (int)((ulong)uVar29 >> 0x20);
            auVar81._0_8_ = CONCAT44(iVar23 + 4,(int)uVar29 + 4);
            auVar81._8_4_ = (int)uVar74 + 4;
            iVar76 = (int)((ulong)uVar74 >> 0x20);
            auVar81._12_4_ = iVar76 + 4;
            *(undefined8 *)(piVar61 + -2) = uVar74;
            *(undefined8 *)(piVar61 + -4) = uVar29;
            *(long *)(piVar61 + 2) = auVar81._8_8_;
            *(undefined8 *)piVar61 = auVar81._0_8_;
            uVar29 = CONCAT44(iVar23 + 8,(int)uVar29 + 8);
            uVar74 = CONCAT44(iVar76 + 8,(int)uVar74 + 8);
            piVar61 = piVar61 + 8;
            uVar26 = uVar26 - 8;
          } while (uVar26 != 0);
          if (uVar36 == uVar18) goto LAB_10944de68;
        }
        do {
          piVar61 = piVar46 + 1;
          *piVar46 = (int)uVar18;
          uVar18 = (ulong)((int)uVar18 + 1);
          piVar46 = piVar61;
        } while (piVar61 != piVar19);
      }
LAB_10944de68:
      for (plVar38 = (long *)param_1[0x50]; plVar38 != (long *)0x0; plVar38 = (long *)*plVar38) {
        *(undefined4 *)(plVar38 + 0xd) = 0;
        plVar38[0x12] = plVar38[0x11];
        uVar36 = (ulong)*(int *)(plVar38 + 0x10);
        if ((ulong)(plVar38[0x13] - plVar38[0x11] >> 3) < uVar36) {
          if (*(int *)(plVar38 + 0x10) < 0) {
            FUN_10945399c();
            goto LAB_1094504f8;
          }
          lVar39 = uVar36 << 3;
          __Znwm();
          lVar21 = lVar39 - (plVar38[0x12] - plVar38[0x11]);
          _memcpy(lVar21);
          lVar47 = plVar38[0x11];
          plVar38[0x11] = lVar21;
          plVar38[0x12] = lVar39;
          plVar38[0x13] = lVar39 + uVar36 * 8;
          if (lVar47 != 0) {
            __ZdlPv();
          }
        }
      }
      pppppppuStack_1c8 = (undefined8 *******)0x0;
      pppppppuStack_1c0 = (undefined8 *******)0x0;
      pppppppuStack_1b8 = (undefined8 *******)0x0;
      lVar39 = 0x50;
      if ((ulong)param_1[0x26] <= (ulong)param_1[0xc]) {
        lVar39 = 0x58;
      }
      uVar36 = *(ulong *)((long)param_1 + lVar39);
      if (uVar36 == 0) {
        piVar61 = (int *)0x0;
        if (0 < *(int *)((long)param_1 + 0x2c)) goto LAB_10944ee6c;
LAB_10944eff0:
        if (cStack_258 == '\x01') {
          FUN_10946b1d4(&uStack_160,puVar35,&pppppppuStack_1c8,param_1 + 0x12,&dStack_270,5,0);
        }
        else {
          FUN_109466534(&uStack_160,4.0 / (double)(1 << (ulong)((int)param_1[5] - iVar54 & 0x1f)),
                        puVar35,&pppppppuStack_1c8,param_1 + 0x12,1,2,0);
        }
        param_1[0x13] = (long)uStack_158;
        param_1[0x12] = (long)uStack_160;
        param_1[0x15] = (long)uStack_148;
        param_1[0x14] = (long)uStack_150;
        param_1[0x17] = (long)ppppppuStack_138;
        param_1[0x16] = (long)pppppppuStack_140;
        param_1[0x18] = (long)ppppppuStack_130;
        param_1[0x1f] = (long)ppppppuStack_f8;
        param_1[0x1e] = (long)ppppppuStack_100;
        param_1[0x21] = (long)ppppppuStack_e8;
        param_1[0x20] = (long)ppppppuStack_f0;
        param_1[0x22] = (long)ppppppuStack_e0;
        param_1[0x1b] = (long)ppppppuStack_118;
        param_1[0x1a] = (long)ppppppuStack_120;
        param_1[0x1d] = (long)ppppppuStack_108;
        param_1[0x1c] = (long)uStack_110;
        lVar39 = param_1[0x3e];
        for (lVar47 = param_1[0x3f]; lVar47 != lVar39; lVar47 = lVar47 + -0xd0) {
          if (*(long *)(lVar47 + -0x38) != 0) {
            piVar19 = (int *)(*(long *)(lVar47 + -0x38) + 0x14);
            do {
              iVar23 = *piVar19;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar9) {
                *piVar19 = iVar23 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar23 + -1 == 0) {
              if (*(long *)(lVar47 + -0x38) != 0) {
                ppppppuVar78 = *(undefined8 *******)(*(long *)(lVar47 + -0x38) + 8);
                if (((ppppppuVar78 == (undefined8 ******)0x0) &&
                    (ppppppuVar78 = *(undefined8 *******)(lVar47 + -0x40),
                    *(undefined8 *******)(lVar47 + -0x40) == (undefined8 ******)0x0)) &&
                   (ppppppuVar78 = ppppppuRam000000011382bb80,
                   ppppppuRam000000011382bb80 == (undefined8 ******)0x0)) {
                  FUN_109a83e3c();
                  ppppppuVar78 = ppppppuRam000000011382bb80;
                }
                (*(code *)(*ppppppuVar78)[6])();
              }
              *(undefined8 *)(lVar47 + -0x38) = 0;
            }
          }
          *(undefined8 *)(lVar47 + -0x38) = 0;
          *(undefined8 *)(lVar47 + -0x58) = 0;
          *(undefined8 *)(lVar47 + -0x60) = 0;
          *(undefined8 *)(lVar47 + -0x48) = 0;
          *(undefined8 *)(lVar47 + -0x50) = 0;
          if (0 < *(int *)(lVar47 + -0x6c)) {
            lVar21 = 0;
            lVar24 = *(long *)(lVar47 + -0x30);
            do {
              *(undefined4 *)(lVar24 + lVar21 * 4) = 0;
              lVar21 = lVar21 + 1;
            } while (lVar21 < *(int *)(lVar47 + -0x6c));
          }
          lVar21 = *(long *)(lVar47 + -0x28);
          if (lVar21 != lVar47 + -0x20 && lVar21 != 0) {
            _free(*(undefined8 *)(lVar21 + -8));
          }
        }
        param_1[0x3f] = lVar39;
        if (pppppppuStack_1c0 != pppppppuStack_1c8) {
          uVar36 = 0;
          puVar53 = (ulong *)0x0;
          puVar57 = (ulong *)0x0;
          puVar66 = (ulong *)0x0;
LAB_10944f1d0:
          ppppppuVar78 = pppppppuStack_1c8[uVar36 * 0x1a + 1];
          pppppuVar80 = ppppppuVar78[1];
          pppppuVar85 = ppppppuVar78[2];
          pppppuVar43 = ppppppuVar78[3];
          uStack_160 = (undefined8 *******)
                       ((double)param_1[0x1a] * (double)pppppuVar80 +
                        (double)param_1[0x1d] * (double)pppppuVar85 +
                        (double)param_1[0x20] * (double)pppppuVar43 + (double)param_1[0x16]);
          uStack_158 = (undefined8 ******)
                       ((double)param_1[0x1b] * (double)pppppuVar80 +
                        (double)param_1[0x1e] * (double)pppppuVar85 +
                        (double)param_1[0x21] * (double)pppppuVar43 + (double)param_1[0x17]);
          uStack_150 = (undefined8 *******)
                       ((double)pppppuVar80 * (double)param_1[0x1c] +
                        (double)pppppuVar85 * (double)param_1[0x1f] +
                        (double)pppppuVar43 * (double)param_1[0x22] + (double)param_1[0x18]);
          puVar15 = puVar35;
          FUN_10937d5c4(puVar35,&pppppppuStack_190,&uStack_160);
          puVar41 = (ulong *)(piVar61 + uVar36 * 3);
          puVar42 = puVar66;
          if ((((int)puVar15 == 0) || ((double)pppppppuStack_190 < 0.0)) ||
             (((double)pppppppuStack_188 < 0.0 ||
              (((double)(*(int *)puVar35 + -1) < (double)pppppppuStack_190 ||
               ((double)(*(int *)(param_2 + 0x14) + -1) < (double)pppppppuStack_188)))))) {
            uVar26 = param_1[0x4f];
            if (uVar26 != 0) {
              uVar18 = *puVar41;
              iVar23 = (int)uVar18;
              uVar44 = (ulong)iVar23;
              uVar27 = uVar26 - 1;
              if ((uVar26 & uVar27) == 0) {
                uVar28 = uVar27 & uVar44;
              }
              else {
                uVar28 = uVar44;
                if (uVar26 <= uVar44) {
                  uVar28 = 0;
                  if (uVar26 != 0) {
                    uVar28 = uVar44 / uVar26;
                  }
                  uVar28 = uVar44 - uVar28 * uVar26;
                }
              }
              plVar38 = *(long **)(*plVar2 + uVar28 * 8);
              if ((plVar38 != (long *)0x0) && (plVar38 = (long *)*plVar38, plVar38 != (long *)0x0))
              {
                if ((uVar26 & uVar27) != 0) {
                  do {
                    uVar27 = plVar38[1];
                    if (uVar27 == uVar44) {
                      if ((int)plVar38[2] == iVar23) goto LAB_10944f3c0;
                    }
                    else {
                      if (uVar26 <= uVar27) {
                        uVar31 = 0;
                        if (uVar26 != 0) {
                          uVar31 = uVar27 / uVar26;
                        }
                        uVar27 = uVar27 - uVar31 * uVar26;
                      }
                      if (uVar27 != uVar28) goto LAB_1094503f0;
                    }
                    plVar38 = (long *)*plVar38;
                    if (plVar38 == (long *)0x0) goto LAB_1094503f0;
                  } while( true );
                }
                do {
                  if (plVar38[1] == uVar44) {
                    if ((int)plVar38[2] == iVar23) goto LAB_10944f3c0;
                  }
                  else if ((plVar38[1] & uVar27) != uVar28) break;
                  plVar38 = (long *)*plVar38;
                  if (plVar38 == (long *)0x0) break;
                } while( true );
              }
            }
LAB_1094503f0:
            FUN_109262df8(&UNK_10f56e116);
            goto LAB_1094504f8;
          }
          if (*(double *)
               (param_1[0x42] + (long)*(int *)(*param_4 + (long)(int)puVar41[1] * 0xb0 + 0x28) * 8)
              * 1.25 <= ((double)pppppppuStack_190 - (double)pppppppuStack_1c8[uVar36 * 0x1a + 4]) *
                        ((double)pppppppuStack_190 - (double)pppppppuStack_1c8[uVar36 * 0x1a + 4]) +
                        ((double)pppppppuStack_188 - (double)pppppppuStack_1c8[uVar36 * 0x1a + 5]) *
                        ((double)pppppppuStack_188 - (double)pppppppuStack_1c8[uVar36 * 0x1a + 5]))
          {
            uVar26 = param_1[0x4f];
            if (uVar26 != 0) {
              uVar18 = *puVar41;
              iVar23 = (int)uVar18;
              uVar44 = (ulong)iVar23;
              uVar27 = uVar26 - 1;
              if ((uVar26 & uVar27) == 0) {
                uVar28 = uVar27 & uVar44;
              }
              else {
                uVar28 = uVar44;
                if (uVar26 <= uVar44) {
                  uVar28 = 0;
                  if (uVar26 != 0) {
                    uVar28 = uVar44 / uVar26;
                  }
                  uVar28 = uVar44 - uVar28 * uVar26;
                }
              }
              plVar38 = *(long **)(*plVar2 + uVar28 * 8);
              if ((plVar38 != (long *)0x0) && (plVar38 = (long *)*plVar38, plVar38 != (long *)0x0))
              {
                if ((uVar26 & uVar27) != 0) {
                  do {
                    uVar27 = plVar38[1];
                    if (uVar27 == uVar44) {
                      if ((int)plVar38[2] == iVar23) goto LAB_10944f5a8;
                    }
                    else {
                      if (uVar26 <= uVar27) {
                        uVar31 = 0;
                        if (uVar26 != 0) {
                          uVar31 = uVar27 / uVar26;
                        }
                        uVar27 = uVar27 - uVar31 * uVar26;
                      }
                      if (uVar27 != uVar28) goto LAB_109450460;
                    }
                    plVar38 = (long *)*plVar38;
                    if (plVar38 == (long *)0x0) goto LAB_109450460;
                  } while( true );
                }
                do {
                  if (plVar38[1] == uVar44) {
                    if ((int)plVar38[2] == iVar23) goto LAB_10944f5a8;
                  }
                  else if ((plVar38[1] & uVar27) != uVar28) break;
                  plVar38 = (long *)*plVar38;
                  if (plVar38 == (long *)0x0) break;
                } while( true );
              }
            }
LAB_109450460:
            FUN_109262df8(&UNK_10f56e116);
            goto LAB_1094504f8;
          }
          uVar26 = param_1[0x3f];
          if (uVar26 < (ulong)param_1[0x40]) {
            FUN_10942ca84(param_1 + 0x3e);
            plVar38 = (long *)(uVar26 + 0xd0);
          }
          else {
            plVar38 = param_1 + 0x3e;
            FUN_10942cbb8();
          }
          param_1[0x3f] = (long)plVar38;
          if (puVar57 <= puVar53) {
            lVar39 = (long)puVar53 - (long)puVar66;
            uVar26 = (lVar39 >> 2) * -0x5555555555555555 + 1;
            if (uVar26 < 0x1555555555555556) {
              lVar47 = (long)puVar57 - (long)puVar66 >> 2;
              uVar18 = lVar47 * 0x5555555555555556;
              if (uVar18 < uVar26 || uVar18 - uVar26 == 0) {
                uVar18 = uVar26;
              }
              if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar47 * -0x5555555555555555)) {
                uVar18 = 0x1555555555555555;
              }
              if (uVar18 < 0x1555555555555556) {
                lVar47 = uVar18 * 0xc;
                __Znwm();
                puVar15 = (ulong *)(lVar47 + lVar39);
                uVar26 = *puVar41;
                *(int *)(puVar15 + 1) = (int)puVar41[1];
                *puVar15 = uVar26;
                uVar26 = SUB168(SEXT816(lVar39) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
                puVar42 = (ulong *)((long)puVar15 + ((uVar26 >> 1) - ((long)uVar26 >> 0x3f)) * 0xc);
                puVar41 = puVar42;
                for (puVar57 = puVar66; puVar57 != puVar53; puVar57 = (ulong *)((long)puVar57 + 0xc)
                    ) {
                  uVar26 = *puVar57;
                  *(int *)(puVar41 + 1) = (int)puVar57[1];
                  *puVar41 = uVar26;
                  puVar41 = (ulong *)((long)puVar41 + 0xc);
                }
                puVar57 = (ulong *)(lVar47 + uVar18 * 0xc);
                puVar53 = (ulong *)((long)puVar15 + 0xc);
                if (puVar66 != (ulong *)0x0) {
                  __ZdlPv(puVar66);
                }
                goto LAB_10944f1a4;
              }
              goto LAB_1094504d4;
            }
            func_0x000109452ca8();
            goto LAB_1094504f8;
          }
          uVar26 = *puVar41;
          *(int *)(puVar53 + 1) = (int)puVar41[1];
          *puVar53 = uVar26;
          puVar53 = (ulong *)((long)puVar53 + 0xc);
          goto LAB_10944f1a4;
        }
        puVar42 = (ulong *)0x0;
        goto LAB_10944f5e8;
      }
      uVar26 = 0;
      piVar61 = (int *)0x0;
      piStack_350 = (int *)0x0;
      piVar19 = (int *)0x0;
      do {
        plVar38 = plVar2;
        FUN_109465a4c();
        if ((long)plVar38 < 0) break;
        pppppppuVar51 = (undefined8 *******)((ulong)plVar38 >> 0x20);
        iVar23 = (int)plVar38;
        lVar39 = *(long *)(*(long *)(*(long *)(*param_1 + 8) +
                                    (-((ulong)plVar38 >> 0x1f & 1) & 0xfffffff800000000 |
                                    ((ulong)plVar38 & 0xffffffff) << 3)) + 1000) +
                 (long)pppppppuVar51 * 0xd0;
        uVar18 = (ulong)iVar23;
        iVar76 = (int)((ulong)plVar38 >> 0x20);
        if (*(int *)(lVar39 + 0x6c) != 0) {
          ppppppuVar78 = *(undefined8 *******)(lVar39 + 8);
          pppppuVar80 = ppppppuVar78[1];
          pppppuVar85 = ppppppuVar78[2];
          pppppuVar43 = ppppppuVar78[3];
          uStack_160 = (undefined8 *******)
                       ((double)param_1[0x1a] * (double)pppppuVar80 +
                        (double)param_1[0x1d] * (double)pppppuVar85 +
                        (double)param_1[0x20] * (double)pppppuVar43 + (double)param_1[0x16]);
          uStack_158 = (undefined8 ******)
                       ((double)param_1[0x1b] * (double)pppppuVar80 +
                        (double)param_1[0x1e] * (double)pppppuVar85 +
                        (double)param_1[0x21] * (double)pppppuVar43 + (double)param_1[0x17]);
          uStack_150 = (undefined8 *******)
                       ((double)pppppuVar80 * (double)param_1[0x1c] +
                        (double)pppppuVar85 * (double)param_1[0x1f] +
                        (double)pppppuVar43 * (double)param_1[0x22] + (double)param_1[0x18]);
          puVar53 = puVar35;
          FUN_10937d5c4(puVar35,&pppppppuStack_1e0,&uStack_160);
          if (((((int)puVar53 == 0) || ((double)pppppppuStack_1e0 < 0.0)) ||
              ((double)pppppppuStack_1d8 < 0.0)) ||
             (((double)(*(int *)puVar35 + -1) < (double)pppppppuStack_1e0 ||
              ((double)(*(int *)(param_2 + 0x14) + -1) < (double)pppppppuStack_1d8)))) {
            uVar44 = param_1[0x4f];
            if (uVar44 != 0) {
              uVar27 = uVar44 - 1;
              if ((uVar44 & uVar27) == 0) {
                uVar28 = uVar27 & uVar18;
                plVar38 = *(long **)(*plVar2 + uVar28 * 8);
              }
              else {
                uVar28 = uVar18;
                if (uVar44 <= uVar18) {
                  uVar28 = 0;
                  if (uVar44 != 0) {
                    uVar28 = uVar18 / uVar44;
                  }
                  uVar28 = uVar18 - uVar28 * uVar44;
                }
                plVar38 = *(long **)(*plVar2 + uVar28 * 8);
              }
              if (plVar38 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar38 = (long *)*plVar38;
                    if (plVar38 == (long *)0x0) goto LAB_109450410;
                    uVar31 = plVar38[1];
                    if (uVar31 == uVar18) break;
                    if ((uVar44 & uVar27) == 0) {
                      uVar31 = uVar31 & uVar27;
                    }
                    else if (uVar44 <= uVar31) {
                      uVar10 = 0;
                      if (uVar44 != 0) {
                        uVar10 = uVar31 / uVar44;
                      }
                      uVar31 = uVar31 - uVar10 * uVar44;
                    }
                    if (uVar31 != uVar28) goto LAB_109450410;
                  }
                } while (*(int *)(plVar38 + 2) != iVar23);
                if (iVar76 < (int)((ulong)(plVar38[4] - plVar38[3]) >> 2)) {
                  uStack_160 = pppppppuVar51;
                  FUN_1094538d8(plVar38 + 0x11,&uStack_160);
                }
                goto LAB_10944df18;
              }
            }
LAB_109450410:
            FUN_109262df8(&UNK_10f56e116);
            goto LAB_1094504f8;
          }
          plVar38 = *(long **)(lVar39 + 0x70);
          uStack_158 = (undefined8 ******)plVar38[1];
          uStack_160 = (undefined8 *******)*plVar38;
          uStack_150 = (undefined8 *******)plVar38[2];
          uStack_148 = (undefined8 *******)plVar38[3];
          puVar63 = (uint *)param_1[0x4b];
          puVar20 = (uint *)param_1[0x4c];
          if (puVar63 == puVar20) {
LAB_10944e684:
            uVar44 = param_1[0x4f];
            if (uVar44 != 0) {
              uVar27 = uVar44 - 1;
              if ((uVar44 & uVar27) == 0) {
                uVar28 = uVar27 & uVar18;
                plVar38 = *(long **)(*plVar2 + uVar28 * 8);
              }
              else {
                uVar28 = uVar18;
                if (uVar44 <= uVar18) {
                  uVar28 = 0;
                  if (uVar44 != 0) {
                    uVar28 = uVar18 / uVar44;
                  }
                  uVar28 = uVar18 - uVar28 * uVar44;
                }
                plVar38 = *(long **)(*plVar2 + uVar28 * 8);
              }
              if (plVar38 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar38 = (long *)*plVar38;
                    if (plVar38 == (long *)0x0) goto LAB_109450480;
                    uVar31 = plVar38[1];
                    if (uVar31 == uVar18) break;
                    if ((uVar44 & uVar27) == 0) {
                      uVar31 = uVar31 & uVar27;
                    }
                    else if (uVar44 <= uVar31) {
                      uVar10 = 0;
                      if (uVar44 != 0) {
                        uVar10 = uVar31 / uVar44;
                      }
                      uVar31 = uVar31 - uVar10 * uVar44;
                    }
                    if (uVar31 != uVar28) goto LAB_109450480;
                  }
                } while (*(int *)(plVar38 + 2) != iVar23);
                if (iVar76 < (int)((ulong)(plVar38[4] - plVar38[3]) >> 2)) {
                  uStack_160 = (undefined8 *******)((ulong)pppppppuVar51 | 0x200000000);
                  FUN_1094538d8(plVar38 + 0x11,&uStack_160);
                }
                goto LAB_10944df18;
              }
            }
          }
          else {
            puVar52 = (undefined8 *)0x0;
            puVar40 = (undefined8 *)0x0;
            puVar55 = (undefined8 *)0x0;
            puVar59 = (undefined8 *)0x0;
            do {
              piVar46 = piStack_230;
              pppppppuVar48 = pppppppuStack_250;
              uVar77 = *puVar63;
              uVar44 = (ulong)uVar77;
              dVar87 = dVar67 * (double)(1 << (ulong)(uVar77 & 0x1f));
              dVar68 = (double)(uint)piStack_230[uVar44];
              iVar64 = (int)((double)pppppppuStack_1e0 / dVar68);
              dVar83 = (double)(uint)(piStack_230[uVar44] * iVar64);
              iVar65 = iVar64 + -1;
              if ((iVar64 < 1) || (dVar83 <= (double)pppppppuStack_1e0 - dVar87)) {
                iVar65 = iVar64 + 1;
                if (dVar68 + dVar83 < (double)pppppppuStack_1e0 + dVar87 &&
                    iVar65 < *(int *)(pppppppuStack_250 + (ulong)uVar77 * 5 + 4)) {
                  piVar13 = (int *)0x8;
                  __Znwm();
                  goto LAB_10944e120;
                }
                piVar13 = (int *)0x4;
                __Znwm();
                piStack_288 = piVar13 + 1;
                *piVar13 = iVar64;
              }
              else {
                piVar13 = (int *)0x8;
                __Znwm();
LAB_10944e120:
                piStack_288 = piVar13 + 2;
                *(ulong *)piVar13 = CONCAT44(iVar65,iVar64);
              }
              dVar68 = (double)(uint)piVar46[uVar44];
              iVar64 = (int)((double)pppppppuStack_1d8 / dVar68);
              dVar83 = (double)(uint)(piVar46[uVar44] * iVar64);
              iVar65 = iVar64 + -1;
              piVar46 = piVar13;
              if ((iVar64 < 1) || (dVar83 <= (double)pppppppuStack_1d8 - dVar87)) {
                iVar65 = iVar64 + 1;
                if (dVar68 + dVar83 < dVar87 + (double)pppppppuStack_1d8 &&
                    iVar65 < *(int *)((long)pppppppuVar48 + uVar44 * 0x28 + 0x24)) {
                  piStack_290 = (int *)0x8;
                  __Znwm();
                  goto LAB_10944e1a8;
                }
                piStack_290 = (int *)0x4;
                __Znwm();
                piVar45 = piStack_290 + 1;
                *piStack_290 = iVar64;
                if (piVar13 != piStack_288 && piStack_290 != piVar45) goto LAB_10944e234;
              }
              else {
                piStack_290 = (int *)0x8;
                __Znwm();
LAB_10944e1a8:
                piVar45 = piStack_290 + 2;
                *(ulong *)piStack_290 = CONCAT44(iVar65,iVar64);
                if (piVar13 != piStack_288 && piStack_290 != piVar45) {
LAB_10944e234:
                  do {
                    iVar65 = *piVar46;
                    puVar56 = puVar55;
                    piVar60 = piStack_290;
                    do {
                      while( true ) {
                        iVar7 = *piVar60;
                        pppppppuVar48 = pppppppuStack_250 + (ulong)*puVar63 * 5;
                        iVar64 = *(int *)(pppppppuVar48 + 3);
                        iVar6 = *(int *)((long)pppppppuVar48 + 0x1c);
                        ppppppuVar16 = *pppppppuVar48;
                        if (puVar59 < puVar40) break;
                        uVar44 = ((long)puVar59 - (long)puVar56 >> 3) + 1;
                        if (uVar44 >> 0x3d != 0) {
                          func_0x000109452cbc();
                          goto LAB_1094504f8;
                        }
                        uVar27 = (long)puVar40 - (long)puVar56 >> 2;
                        if (uVar27 <= uVar44) {
                          uVar27 = uVar44;
                        }
                        if (0x7ffffffffffffff7 < (ulong)((long)puVar40 - (long)puVar56)) {
                          uVar27 = 0x1fffffffffffffff;
                        }
                        if (uVar27 >> 0x3d != 0) {
                          func_0x000104c4f740();
                          goto LAB_1094504f8;
                        }
                        puVar55 = (undefined8 *)(uVar27 << 3);
                        __Znwm();
                        puVar59 = (undefined8 *)((long)puVar55 + ((long)puVar59 - (long)puVar56));
                        puVar40 = puVar55 + uVar27;
                        puVar52 = puVar59 + 1;
                        *puVar59 = ppppppuVar16 + (long)(iVar64 * iVar65 + iVar6 * iVar7) * 3;
                        _memcpy();
                        if (puVar56 != (undefined8 *)0x0) {
                          __ZdlPv(puVar56);
                        }
                        piVar60 = piVar60 + 1;
                        puVar59 = puVar52;
                        puVar56 = puVar55;
                        if (piVar60 == piVar45) goto LAB_10944e21c;
                      }
                      puVar52 = puVar59 + 1;
                      *puVar59 = ppppppuVar16 + (long)(iVar64 * iVar65 + iVar6 * iVar7) * 3;
                      piVar60 = piVar60 + 1;
                      puVar59 = puVar52;
                      puVar55 = puVar56;
                    } while (piVar60 != piVar45);
LAB_10944e21c:
                    piVar46 = piVar46 + 1;
                    puVar59 = puVar52;
                  } while (piVar46 != piStack_288);
                }
              }
              __ZdlPv(piStack_290);
              __ZdlPv(piVar13);
              puVar63 = puVar63 + 1;
            } while (puVar63 != puVar20);
            if (puVar55 == puVar52) {
              uVar32 = 0xffffffff;
              uVar77 = 0x7fffffff;
            }
            else {
              uVar44 = 0xffffffff;
              uVar77 = 0x7fffffff;
              uVar30 = 0x7fffffff;
              uVar33 = 0x7fffffff;
              puVar40 = puVar55;
              do {
                uVar32 = (uint)uVar44;
                if ((int)uVar33 < *(int *)((long)param_1 + 0x84)) break;
                uVar27 = uVar44;
                uVar32 = uVar77;
                for (puVar63 = *(uint **)*puVar40; uVar44 = uVar27, uVar77 = uVar32,
                    puVar63 != (uint *)((undefined8 *)*puVar40)[1]; puVar63 = puVar63 + 1) {
                  uVar44 = (ulong)*puVar63;
                  lVar39 = *param_4 + uVar44 * 0xb0;
                  dVar68 = *(double *)(lVar39 + 0x10) - (double)pppppppuStack_1e0;
                  dVar83 = *(double *)(lVar39 + 0x18) - (double)pppppppuStack_1d8;
                  if (dVar68 * dVar68 + dVar83 * dVar83 <=
                      *(double *)
                       (*(long *)((long)param_1 + lStack_3a8) + (long)*(int *)(lVar39 + 0x28) * 8))
                  {
                    pbVar4 = (byte *)(*param_5 + uVar44 * 0x20);
                    uVar77 = (uint)(ushort)((ushort)(byte)POPCOUNT(*pbVar4 ^ (byte)uStack_160) +
                                           (ushort)(byte)POPCOUNT(pbVar4[2] ^ uStack_160._2_1_)) +
                             (uint)(ushort)((ushort)(byte)POPCOUNT(pbVar4[4] ^ uStack_160._4_1_) +
                                           (ushort)(byte)POPCOUNT(pbVar4[6] ^ uStack_160._6_1_)) +
                             (uint)(ushort)((ushort)(byte)POPCOUNT(pbVar4[8] ^ (byte)uStack_158) +
                                           (ushort)(byte)POPCOUNT(pbVar4[10] ^ uStack_158._2_1_)) +
                             (uint)(ushort)((ushort)(byte)POPCOUNT(pbVar4[0xc] ^ uStack_158._4_1_) +
                                           (ushort)(byte)POPCOUNT(pbVar4[0xe] ^ uStack_158._6_1_)) +
                             (uint)(ushort)((ushort)(byte)POPCOUNT(pbVar4[0x10] ^ (byte)uStack_150)
                                           + (ushort)(byte)POPCOUNT(pbVar4[0x12] ^ uStack_150._2_1_)
                                           ) +
                             (uint)(ushort)((ushort)(byte)POPCOUNT(pbVar4[0x14] ^ uStack_150._4_1_)
                                           + (ushort)(byte)POPCOUNT(pbVar4[0x16] ^ uStack_150._6_1_)
                                           ) +
                             (uint)(ushort)((ushort)(byte)POPCOUNT(pbVar4[0x18] ^ (byte)uStack_148)
                                           + (ushort)(byte)POPCOUNT(pbVar4[0x1a] ^ uStack_148._2_1_)
                                           ) +
                             (uint)(ushort)((ushort)(byte)POPCOUNT(pbVar4[0x1c] ^ uStack_148._4_1_)
                                           + (ushort)(byte)POPCOUNT(pbVar4[0x1e] ^ uStack_148._6_1_)
                                           ) +
                             (uint)(ushort)((ushort)(byte)POPCOUNT(pbVar4[1] ^ uStack_160._1_1_) +
                                           (ushort)(byte)POPCOUNT(pbVar4[3] ^ uStack_160._3_1_)) +
                             (uint)(ushort)((ushort)(byte)POPCOUNT(pbVar4[5] ^ uStack_160._5_1_) +
                                           (ushort)(byte)POPCOUNT(pbVar4[7] ^ uStack_160._7_1_)) +
                             (uint)(ushort)((ushort)(byte)POPCOUNT(pbVar4[9] ^ uStack_158._1_1_) +
                                           (ushort)(byte)POPCOUNT(pbVar4[0xb] ^ uStack_158._3_1_)) +
                             (uint)(ushort)((ushort)(byte)POPCOUNT(pbVar4[0xd] ^ uStack_158._5_1_) +
                                           (ushort)(byte)POPCOUNT(pbVar4[0xf] ^ uStack_158._7_1_)) +
                             (uint)(ushort)((ushort)(byte)POPCOUNT(pbVar4[0x11] ^ uStack_150._1_1_)
                                           + (ushort)(byte)POPCOUNT(pbVar4[0x13] ^ uStack_150._3_1_)
                                           ) +
                             (uint)(ushort)((ushort)(byte)POPCOUNT(pbVar4[0x15] ^ uStack_150._5_1_)
                                           + (ushort)(byte)POPCOUNT(pbVar4[0x17] ^ uStack_150._7_1_)
                                           ) +
                             (uint)(ushort)((ushort)(byte)POPCOUNT(pbVar4[0x19] ^ uStack_148._1_1_)
                                           + (ushort)(byte)POPCOUNT(pbVar4[0x1b] ^ uStack_148._3_1_)
                                           ) +
                             (uint)(ushort)((ushort)(byte)POPCOUNT(pbVar4[0x1d] ^ uStack_148._5_1_)
                                           + (ushort)(byte)POPCOUNT(pbVar4[0x1f] ^ uStack_148._7_1_)
                                           );
                    uVar33 = uVar30;
                    if ((uVar77 <= uVar30) &&
                       (uVar27 = uVar44, uVar33 = uVar77, uVar30 = uVar77, uVar32 = uVar77,
                       (int)uVar77 < *(int *)((long)param_1 + 0x84))) break;
                  }
                }
                uVar32 = (uint)uVar44;
                puVar40 = puVar40 + 1;
              } while (puVar40 != puVar52);
            }
            if (puVar55 != (undefined8 *)0x0) {
              __ZdlPv(puVar55);
            }
            uVar33 = uVar32;
            if (0x7fffffff < uVar32) {
              uVar33 = 0xffffffff;
            }
            if ((int)uVar32 < 0) goto LAB_10944e684;
            uVar26 = uVar26 + 1;
            if ((int)uVar77 <= (int)param_1[0x10]) {
              plVar38 = (long *)(*param_4 + (ulong)uVar33 * 0xb0);
              uStack_158 = (undefined8 ******)plVar38[1];
              uStack_160 = (undefined8 *******)*plVar38;
              uStack_148 = (undefined8 *******)plVar38[3];
              uStack_150 = (undefined8 *******)plVar38[2];
              ppppppuStack_128 = (undefined8 ******)plVar38[7];
              ppppppuStack_130 = (undefined8 ******)plVar38[6];
              ppppppuStack_118 = (undefined8 ******)plVar38[9];
              ppppppuStack_120 = (undefined8 ******)plVar38[8];
              ppppppuStack_138 = (undefined8 ******)plVar38[5];
              pppppppuStack_140 = (undefined8 *******)plVar38[4];
              uStack_110 = (undefined8 ******)plVar38[10];
              ppppppuStack_108 = (undefined8 ******)plVar38[0xb];
              ppppppuStack_f8 = (undefined8 ******)plVar38[0xd];
              ppppppuStack_100 = (undefined8 ******)plVar38[0xc];
              ppppppuStack_e8 = (undefined8 ******)plVar38[0xf];
              ppppppuStack_f0 = (undefined8 ******)plVar38[0xe];
              ppppppuStack_d8 = (undefined8 ******)plVar38[0x11];
              ppppppuStack_e0 = (undefined8 ******)plVar38[0x10];
              ppppppuStack_d0 = &ppppppuStack_108;
              plStack_c8 = &lStack_c0;
              uStack_b8 = 0;
              if (plVar38[0x11] != 0) {
                piVar46 = (int *)(plVar38[0x11] + 0x14);
                do {
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(piVar46,0x10);
                  if (bVar9) {
                    *piVar46 = *piVar46 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
              if (*(int *)((long)plVar38 + 0x54) < 3) {
                uStack_b8 = *(undefined8 *)(plVar38[0x13] + 8);
              }
              else {
                uStack_110 = (undefined8 ******)((ulong)uStack_110 & 0xffffffff);
                FUN_109a844cc(&uStack_110,*(undefined4 *)((long)plVar38 + 0x54),0,0,0);
                if (0 < uStack_110._4_4_) {
                  lVar39 = 0;
                  lVar47 = plVar38[0x12];
                  lVar21 = plVar38[0x13];
                  do {
                    *(undefined4 *)((long)ppppppuStack_d0 + lVar39 * 4) =
                         *(undefined4 *)(lVar47 + lVar39 * 4);
                    plStack_c8[lVar39] = *(long *)(lVar21 + lVar39 * 8);
                    lVar39 = lVar39 + 1;
                  } while (lVar39 < uStack_110._4_4_);
                }
              }
              pppppppuVar51 = pppppppuStack_1c0;
              if (pppppppuStack_1c0 < pppppppuStack_1b8) {
                *(undefined1 *)pppppppuStack_1c0 = 1;
                pppppppuStack_1c0[1] = ppppppuVar78;
                pppppppuStack_1c0[3] = uStack_158;
                pppppppuStack_1c0[2] = uStack_160;
                pppppppuStack_1c0[5] = uStack_148;
                pppppppuStack_1c0[4] = uStack_150;
                pppppppuStack_1c0[7] = ppppppuStack_138;
                pppppppuStack_1c0[6] = pppppppuStack_140;
                pppppppuStack_1c0[9] = ppppppuStack_128;
                pppppppuStack_1c0[8] = ppppppuStack_130;
                pppppppuStack_1c0[0xb] = ppppppuStack_118;
                pppppppuStack_1c0[10] = ppppppuStack_120;
                pppppppuStack_1c0[0xd] = ppppppuStack_108;
                pppppppuStack_1c0[0xc] = uStack_110;
                pppppppuStack_1c0[0xf] = ppppppuStack_f8;
                pppppppuStack_1c0[0xe] = ppppppuStack_100;
                pppppppuStack_1c0[0x11] = ppppppuStack_e8;
                pppppppuStack_1c0[0x10] = ppppppuStack_f0;
                pppppppuStack_1c0[0x16] = (undefined8 ******)0x0;
                pppppppuStack_1c0[0x13] = ppppppuStack_d8;
                pppppppuStack_1c0[0x12] = ppppppuStack_e0;
                pppppppuStack_1c0[0x14] = pppppppuStack_1c0 + 0xd;
                pppppppuStack_1c0[0x15] = pppppppuStack_1c0 + 0x16;
                pppppppuStack_1c0[0x17] = (undefined8 ******)0x0;
                if (ppppppuStack_d8 == (undefined8 ******)0x0) {
                  if (uStack_110._4_4_ < 3) goto LAB_10944e92c;
LAB_10944ea6c:
                  *(undefined4 *)((long)pppppppuStack_1c0 + 100) = 0;
                  FUN_109a844cc(pppppppuStack_1c0 + 0xc,uStack_110._4_4_,0,0,0);
                  if (0 < *(int *)((long)pppppppuVar51 + 100)) {
                    lVar39 = 0;
                    ppppppuVar78 = pppppppuVar51[0x14];
                    ppppppuVar16 = pppppppuVar51[0x15];
                    do {
                      *(undefined4 *)((long)ppppppuVar78 + lVar39 * 4) =
                           *(undefined4 *)((long)ppppppuStack_d0 + lVar39 * 4);
                      ppppppuVar16[lVar39] = (undefined8 *****)plStack_c8[lVar39];
                      lVar39 = lVar39 + 1;
                    } while (lVar39 < *(int *)((long)pppppppuVar51 + 100));
                  }
                }
                else {
                  piVar46 = (int *)((long)ppppppuStack_d8 + 0x14);
                  do {
                    cVar8 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(piVar46,0x10);
                    if (bVar9) {
                      *piVar46 = *piVar46 + 1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (2 < uStack_110._4_4_) goto LAB_10944ea6c;
LAB_10944e92c:
                  ppppppuVar78 = pppppppuStack_1c0[0x15];
                  *ppppppuVar78 = (undefined8 *****)*plStack_c8;
                  ppppppuVar78[1] = (undefined8 *****)plStack_c8[1];
                }
                pppppppuVar51[0x18] = (undefined8 ******)0xbff0000000000000;
                pppppppuStack_1c0 = pppppppuVar51 + 0x1a;
                if (piVar19 <= piStack_350) goto LAB_10944ecac;
LAB_10944eadc:
                *piStack_350 = iVar23;
                piStack_350[1] = iVar76;
                piStack_350[2] = uVar33;
                piVar13 = piVar61;
                piVar46 = piStack_350;
              }
              else {
                lVar39 = (long)pppppppuStack_1c0 - (long)pppppppuStack_1c8;
                uVar18 = (lVar39 >> 4) * 0x4ec4ec4ec4ec4ec5 + 1;
                if (0x13b13b13b13b13b < uVar18) {
                  FUN_109428800();
                  goto LAB_1094504f8;
                }
                lVar47 = (long)pppppppuStack_1b8 - (long)pppppppuStack_1c8 >> 4;
                uVar44 = lVar47 * -0x6276276276276276;
                if (uVar44 < uVar18 || uVar44 - uVar18 == 0) {
                  uVar44 = uVar18;
                }
                if (0x9d89d89d89d89c < (ulong)(lVar47 * 0x4ec4ec4ec4ec4ec5)) {
                  uVar44 = 0x13b13b13b13b13b;
                }
                pppppppuStack_170 = &pppppppuStack_1c8;
                if (uVar44 == 0) {
                  pppppppuVar51 = (undefined8 *******)0x0;
                }
                else {
                  pppppppuVar51 = &pppppppuStack_1c8;
                  FUN_109428814(pppppppuVar51,uVar44,0);
                }
                puVar5 = (undefined1 *)((long)pppppppuVar51 + lVar39);
                pppppppuStack_190 = pppppppuVar51;
                pppppppuStack_188 = (undefined8 *******)puVar5;
                pppppppuStack_180 = (undefined8 *******)puVar5;
                pppppppuStack_178 = pppppppuVar51 + uVar44 * 0x1a;
                *puVar5 = 1;
                *(undefined8 *******)(puVar5 + 8) = ppppppuVar78;
                pppppppuVar51 = uStack_160;
                *(undefined8 *******)(puVar5 + 0x18) = uStack_158;
                *(undefined8 ********)(puVar5 + 0x10) = pppppppuVar51;
                pppppppuVar51 = uStack_150;
                *(undefined8 ********)(puVar5 + 0x28) = uStack_148;
                *(undefined8 ********)(puVar5 + 0x20) = pppppppuVar51;
                ppppppuVar71 = ppppppuStack_118;
                ppppppuVar22 = ppppppuStack_120;
                ppppppuVar16 = ppppppuStack_130;
                ppppppuVar78 = ppppppuStack_138;
                pppppppuVar51 = pppppppuStack_140;
                *(undefined8 *******)(puVar5 + 0x48) = ppppppuStack_128;
                *(undefined8 *******)(puVar5 + 0x40) = ppppppuVar16;
                *(undefined8 *******)(puVar5 + 0x58) = ppppppuVar71;
                *(undefined8 *******)(puVar5 + 0x50) = ppppppuVar22;
                *(undefined8 *******)(puVar5 + 0x38) = ppppppuVar78;
                *(undefined8 ********)(puVar5 + 0x30) = pppppppuVar51;
                ppppppuVar78 = uStack_110;
                *(undefined8 *******)(puVar5 + 0x68) = ppppppuStack_108;
                *(undefined8 *******)(puVar5 + 0x60) = ppppppuVar78;
                ppppppuVar78 = ppppppuStack_100;
                *(undefined8 *******)(puVar5 + 0x78) = ppppppuStack_f8;
                *(undefined8 *******)(puVar5 + 0x70) = ppppppuVar78;
                ppppppuVar78 = ppppppuStack_f0;
                *(undefined8 *******)(puVar5 + 0x88) = ppppppuStack_e8;
                *(undefined8 *******)(puVar5 + 0x80) = ppppppuVar78;
                ppppppuVar16 = ppppppuStack_d8;
                ppppppuVar78 = ppppppuStack_e0;
                *(undefined8 *******)(puVar5 + 0x98) = ppppppuStack_d8;
                *(undefined8 *******)(puVar5 + 0x90) = ppppppuVar78;
                *(undefined8 *)(puVar5 + 0xb0) = 0;
                *(undefined1 **)(puVar5 + 0xa0) = puVar5 + 0x68;
                *(undefined1 **)(puVar5 + 0xa8) = puVar5 + 0xb0;
                *(undefined8 *)(puVar5 + 0xb8) = 0;
                if (ppppppuVar16 != (undefined8 ******)0x0) {
                  piVar46 = (int *)((long)ppppppuVar16 + 0x14);
                  do {
                    cVar8 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(piVar46,0x10);
                    if (bVar9) {
                      *piVar46 = *piVar46 + 1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                }
                if (uStack_110._4_4_ < 3) {
                  plVar38 = *(long **)(puVar5 + 0xa8);
                  *plVar38 = *plStack_c8;
                  plVar38[1] = plStack_c8[1];
                }
                else {
                  *(undefined4 *)(puVar5 + 100) = 0;
                  FUN_109a844cc(puVar5 + 0x60,uStack_110._4_4_,0,0,0);
                  if (0 < *(int *)(puVar5 + 100)) {
                    lVar39 = 0;
                    lVar47 = *(long *)(puVar5 + 0xa0);
                    lVar21 = *(long *)(puVar5 + 0xa8);
                    do {
                      *(undefined4 *)(lVar47 + lVar39 * 4) =
                           *(undefined4 *)((long)ppppppuStack_d0 + lVar39 * 4);
                      *(long *)(lVar21 + lVar39 * 8) = plStack_c8[lVar39];
                      lVar39 = lVar39 + 1;
                    } while (lVar39 < *(int *)(puVar5 + 100));
                  }
                }
                *(undefined8 *)(puVar5 + 0xc0) = 0xbff0000000000000;
                pppppppuStack_180 = (undefined8 *******)((long)pppppppuStack_180 + 0xd0);
                pppppppuVar51 =
                     (undefined8 *******)
                     ((long)pppppppuStack_188 + ((long)pppppppuStack_1c8 - (long)pppppppuStack_1c0))
                ;
                FUN_10942cdf0(&pppppppuStack_1c8,pppppppuStack_1c8,pppppppuStack_1c0,pppppppuVar51);
                pppppppuVar49 = pppppppuStack_180;
                pppppppuVar48 = pppppppuStack_1b8;
                pppppppuStack_1b8 = pppppppuStack_178;
                pppppppuStack_1c0 = pppppppuStack_180;
                pppppppuStack_180 = pppppppuStack_1c8;
                pppppppuStack_178 = pppppppuVar48;
                pppppppuStack_188 = pppppppuStack_1c8;
                pppppppuStack_190 = pppppppuStack_1c8;
                pppppppuStack_1c8 = pppppppuVar51;
                FUN_10942d114(&pppppppuStack_190);
                pppppppuStack_1c0 = pppppppuVar49;
                if (piStack_350 < piVar19) goto LAB_10944eadc;
LAB_10944ecac:
                lVar39 = (long)piStack_350 - (long)piVar61;
                uVar18 = (lVar39 >> 2) * -0x5555555555555555 + 1;
                if (0x1555555555555555 < uVar18) {
                  func_0x000109452ca8();
                  goto LAB_1094504f8;
                }
                lVar47 = (long)piVar19 - (long)piVar61 >> 2;
                uVar44 = lVar47 * 0x5555555555555556;
                if (uVar44 < uVar18 || uVar44 - uVar18 == 0) {
                  uVar44 = uVar18;
                }
                if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar47 * -0x5555555555555555)) {
                  uVar44 = 0x1555555555555555;
                }
                if (0x1555555555555555 < uVar44) {
                  func_0x000104c4f740();
                  goto LAB_1094504f8;
                }
                lVar47 = uVar44 * 0xc;
                __Znwm();
                piVar46 = (int *)(lVar47 + lVar39);
                *piVar46 = iVar23;
                piVar46[1] = iVar76;
                piVar46[2] = uVar33;
                uVar18 = SUB168(SEXT816(lVar39) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
                piVar13 = piVar46 + ((uVar18 >> 1) - ((long)uVar18 >> 0x3f)) * 3;
                piVar45 = piVar13;
                for (piVar19 = piVar61; piVar19 != piStack_350; piVar19 = piVar19 + 3) {
                  uVar29 = *(undefined8 *)piVar19;
                  piVar45[2] = piVar19[2];
                  *(undefined8 *)piVar45 = uVar29;
                  piVar45 = piVar45 + 3;
                }
                piVar19 = (int *)(lVar47 + uVar44 * 0xc);
                if (piVar61 != (int *)0x0) {
                  __ZdlPv(piVar61);
                }
              }
              piVar61 = piVar13;
              piStack_350 = piVar46 + 3;
              if (ppppppuStack_d8 != (undefined8 ******)0x0) {
                piVar46 = (int *)((long)ppppppuStack_d8 + 0x14);
                do {
                  iVar23 = *piVar46;
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(piVar46,0x10);
                  if (bVar9) {
                    *piVar46 = iVar23 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if ((iVar23 + -1 == 0) && (ppppppuStack_d8 != (undefined8 ******)0x0)) {
                  ppppppuVar78 = (undefined8 ******)ppppppuStack_d8[1];
                  if (((undefined8 ******)ppppppuStack_d8[1] == (undefined8 ******)0x0) &&
                     ((ppppppuVar78 = ppppppuStack_e0, ppppppuStack_e0 == (undefined8 ******)0x0 &&
                      (ppppppuVar78 = ppppppuRam000000011382bb80,
                      ppppppuRam000000011382bb80 == (undefined8 ******)0x0)))) {
                    FUN_109a83e3c();
                    ppppppuVar78 = ppppppuRam000000011382bb80;
                  }
                  (*(code *)(*ppppppuVar78)[6])();
                }
              }
              ppppppuStack_d8 = (undefined8 ******)0x0;
              ppppppuStack_f8 = (undefined8 ******)0x0;
              ppppppuStack_100 = (undefined8 ******)0x0;
              ppppppuStack_e8 = (undefined8 ******)0x0;
              ppppppuStack_f0 = (undefined8 ******)0x0;
              if (0 < uStack_110._4_4_) {
                lVar39 = 0;
                do {
                  *(undefined4 *)((long)ppppppuStack_d0 + lVar39 * 4) = 0;
                  lVar39 = lVar39 + 1;
                } while (lVar39 < uStack_110._4_4_);
              }
              if (plStack_c8 != &lStack_c0 && plStack_c8 != (long *)0x0) {
                _free(plStack_c8[-1]);
              }
              goto LAB_10944df18;
            }
            uVar44 = param_1[0x4f];
            if (uVar44 != 0) {
              uVar27 = uVar44 - 1;
              if ((uVar44 & uVar27) == 0) {
                uVar28 = uVar27 & uVar18;
                plVar38 = *(long **)(*plVar2 + uVar28 * 8);
              }
              else {
                uVar28 = uVar18;
                if (uVar44 <= uVar18) {
                  uVar28 = 0;
                  if (uVar44 != 0) {
                    uVar28 = uVar18 / uVar44;
                  }
                  uVar28 = uVar18 - uVar28 * uVar44;
                }
                plVar38 = *(long **)(*plVar2 + uVar28 * 8);
              }
              if (plVar38 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar38 = (long *)*plVar38;
                    if (plVar38 == (long *)0x0) goto LAB_109450480;
                    uVar31 = plVar38[1];
                    if (uVar31 == uVar18) break;
                    if ((uVar44 & uVar27) == 0) {
                      uVar31 = uVar31 & uVar27;
                    }
                    else if (uVar44 <= uVar31) {
                      uVar10 = 0;
                      if (uVar44 != 0) {
                        uVar10 = uVar31 / uVar44;
                      }
                      uVar31 = uVar31 - uVar10 * uVar44;
                    }
                    if (uVar31 != uVar28) goto LAB_109450480;
                  }
                } while (*(int *)(plVar38 + 2) != iVar23);
                if (iVar76 < (int)((ulong)(plVar38[4] - plVar38[3]) >> 2)) {
                  uStack_160 = (undefined8 *******)((ulong)pppppppuVar51 | 0x200000000);
                  FUN_1094538d8(plVar38 + 0x11,&uStack_160);
                }
                goto LAB_10944df18;
              }
            }
          }
LAB_109450480:
          FUN_109262df8(&UNK_10f56e116);
          goto LAB_1094504f8;
        }
        uVar44 = param_1[0x4f];
        if (uVar44 == 0) {
LAB_109450450:
          FUN_109262df8(&UNK_10f56e116);
          goto LAB_1094504f8;
        }
        uVar27 = uVar44 - 1;
        if ((uVar44 & uVar27) == 0) {
          uVar28 = uVar27 & uVar18;
          plVar38 = *(long **)(*plVar2 + uVar28 * 8);
        }
        else {
          uVar28 = uVar18;
          if (uVar44 <= uVar18) {
            uVar28 = 0;
            if (uVar44 != 0) {
              uVar28 = uVar18 / uVar44;
            }
            uVar28 = uVar18 - uVar28 * uVar44;
          }
          plVar38 = *(long **)(*plVar2 + uVar28 * 8);
        }
        if (plVar38 == (long *)0x0) goto LAB_109450450;
        do {
          while( true ) {
            plVar38 = (long *)*plVar38;
            if (plVar38 == (long *)0x0) goto LAB_109450450;
            uVar31 = plVar38[1];
            if (uVar31 == uVar18) break;
            if ((uVar44 & uVar27) == 0) {
              uVar31 = uVar31 & uVar27;
            }
            else if (uVar44 <= uVar31) {
              uVar10 = 0;
              if (uVar44 != 0) {
                uVar10 = uVar31 / uVar44;
              }
              uVar31 = uVar31 - uVar10 * uVar44;
            }
            if (uVar31 != uVar28) goto LAB_109450450;
          }
        } while (*(int *)(plVar38 + 2) != iVar23);
        if (iVar76 < (int)((ulong)(plVar38[4] - plVar38[3]) >> 2)) {
          uStack_160 = pppppppuVar51;
          FUN_1094538d8(plVar38 + 0x11,&uStack_160);
        }
LAB_10944df18:
      } while (uVar26 < uVar36);
      if (*(int *)((long)param_1 + 0x2c) <=
          (int)((ulong)((long)pppppppuStack_1c0 - (long)pppppppuStack_1c8) >> 4) * -0x3b13b13b)
      goto LAB_10944eff0;
LAB_10944ee6c:
      piVar19 = (int *)param_1[0x53];
      piVar46 = (int *)param_1[0x54];
      if (piVar19 != piVar46) {
LAB_10944ee7c:
        uVar36 = param_1[0x4f];
        if (uVar36 != 0) {
          iVar23 = *piVar19;
          uVar26 = (ulong)iVar23;
          uVar18 = uVar36 - 1;
          if ((uVar36 & uVar18) == 0) {
            uVar44 = uVar18 & uVar26;
          }
          else {
            uVar44 = uVar26;
            if (uVar36 <= uVar26) {
              uVar44 = 0;
              if (uVar36 != 0) {
                uVar44 = uVar26 / uVar36;
              }
              uVar44 = uVar26 - uVar44 * uVar36;
            }
          }
          plVar38 = *(long **)(*plVar2 + uVar44 * 8);
          if ((plVar38 != (long *)0x0) && (plVar38 = (long *)*plVar38, plVar38 != (long *)0x0)) {
            if ((uVar36 & uVar18) != 0) {
              do {
                uVar18 = plVar38[1];
                if (uVar18 == uVar26) {
                  if ((int)plVar38[2] == iVar23) goto LAB_10944ef3c;
                }
                else {
                  if (uVar36 <= uVar18) {
                    uVar27 = 0;
                    if (uVar36 != 0) {
                      uVar27 = uVar18 / uVar36;
                    }
                    uVar18 = uVar18 - uVar27 * uVar36;
                  }
                  if (uVar18 != uVar44) goto LAB_1094503e0;
                }
                plVar38 = (long *)*plVar38;
                if (plVar38 == (long *)0x0) goto LAB_1094503e0;
              } while( true );
            }
            do {
              if (plVar38[1] == uVar26) {
                if ((int)plVar38[2] == iVar23) goto LAB_10944ef3c;
              }
              else if ((plVar38[1] & uVar18) != uVar44) break;
              plVar38 = (long *)*plVar38;
              if (plVar38 == (long *)0x0) break;
            } while( true );
          }
        }
LAB_1094503e0:
        FUN_109262df8(&UNK_10f56e116);
        goto LAB_1094504f8;
      }
LAB_10944ef58:
      bVar34 = 0;
      param_1[0x13] = lVar58;
      param_1[0x12] = lVar50;
      param_1[0x15] = lVar72;
      param_1[0x14] = lVar69;
      param_1[0x17] = lVar25;
      param_1[0x16] = lVar37;
      param_1[0x18] = lVar95;
      param_1[0x1b] = lVar86;
      param_1[0x1a] = lVar84;
      param_1[0x1d] = lVar89;
      param_1[0x1c] = lVar88;
      param_1[0x1f] = lVar82;
      param_1[0x1e] = lVar79;
      param_1[0x21] = lVar73;
      param_1[0x20] = lVar70;
      param_1[0x22] = lVar94;
      uStack_160 = &pppppppuStack_1c8;
      FUN_10942a570(&uStack_160);
      goto joined_r0x0001094500b8;
    }
    bVar34 = 0;
LAB_109450128:
    if (((bVar1 | bVar34) == 1) && ((*(byte *)(param_1 + 0x41) & 1) != 0)) {
      FUN_10946fe14(&uStack_160,param_3,param_1 + 0x3e);
      FUN_109428468(param_1 + 0x3e);
      param_1[0x3f] = (long)uStack_158;
      param_1[0x3e] = (long)uStack_160;
      param_1[0x40] = (long)uStack_150;
      uStack_150 = (undefined8 *******)0x0;
      uStack_158 = (undefined8 ******)0x0;
      uStack_160 = (undefined8 *******)0x0;
      func_0x000109436028(param_1 + 0x19d,param_1[0x19e]);
      param_1[0x19d] = (long)uStack_148;
      param_1[0x19e] = (long)pppppppuStack_140;
      param_1[0x19f] = (long)ppppppuStack_138;
      if (ppppppuStack_138 == (undefined8 ******)0x0) {
        param_1[0x19d] = (long)(param_1 + 0x19e);
      }
      else {
        pppppppuStack_140[2] = (undefined8 ******)(param_1 + 0x19e);
        pppppppuStack_140 = (undefined8 *******)0x0;
        ppppppuStack_138 = (undefined8 ******)0x0;
        uStack_148 = &pppppppuStack_140;
      }
      func_0x000109436028(&uStack_148,pppppppuStack_140);
      pppppppuStack_190 = (undefined8 *******)&uStack_160;
      FUN_10942a570(&pppppppuStack_190);
    }
    if (bVar34 == 0) {
      uVar77 = (int)param_1[0x1a0] + 1;
      *(uint *)(param_1 + 0x1a0) = uVar77;
      if (((bVar1 & *(byte *)(param_1 + 0x41)) != 1) || (4 < uVar77)) {
        *(undefined4 *)(param_1 + 0x11) = 0;
        *(undefined4 *)(param_1 + 0x1a0) = 0;
        lVar50 = param_1[0x3e];
        for (lVar58 = param_1[0x3f]; lVar58 != lVar50; lVar58 = lVar58 + -0xd0) {
          if (*(long *)(lVar58 + -0x38) != 0) {
            piVar61 = (int *)(*(long *)(lVar58 + -0x38) + 0x14);
            do {
              iVar54 = *piVar61;
              cVar8 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(piVar61,0x10);
              if (bVar1) {
                *piVar61 = iVar54 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar54 + -1 == 0) {
              if (*(long *)(lVar58 + -0x38) != 0) {
                ppppppuVar78 = *(undefined8 *******)(*(long *)(lVar58 + -0x38) + 8);
                if (((ppppppuVar78 == (undefined8 ******)0x0) &&
                    (ppppppuVar78 = *(undefined8 *******)(lVar58 + -0x40),
                    *(undefined8 *******)(lVar58 + -0x40) == (undefined8 ******)0x0)) &&
                   (ppppppuVar78 = ppppppuRam000000011382bb80,
                   ppppppuRam000000011382bb80 == (undefined8 ******)0x0)) {
                  FUN_109a83e3c();
                  ppppppuVar78 = ppppppuRam000000011382bb80;
                }
                (*(code *)(*ppppppuVar78)[6])();
              }
              *(undefined8 *)(lVar58 + -0x38) = 0;
            }
          }
          *(undefined8 *)(lVar58 + -0x38) = 0;
          *(undefined8 *)(lVar58 + -0x58) = 0;
          *(undefined8 *)(lVar58 + -0x60) = 0;
          *(undefined8 *)(lVar58 + -0x48) = 0;
          *(undefined8 *)(lVar58 + -0x50) = 0;
          if (0 < *(int *)(lVar58 + -0x6c)) {
            lVar37 = 0;
            lVar25 = *(long *)(lVar58 + -0x30);
            do {
              *(undefined4 *)(lVar25 + lVar37 * 4) = 0;
              lVar37 = lVar37 + 1;
            } while (lVar37 < *(int *)(lVar58 + -0x6c));
          }
          lVar37 = *(long *)(lVar58 + -0x28);
          if (lVar37 != lVar58 + -0x20 && lVar37 != 0) {
            _free(*(undefined8 *)(lVar37 + -8));
          }
        }
        param_1[0x3f] = lVar50;
        func_0x000109436028(param_1 + 0x19d,param_1[0x19e]);
        param_1[0x19d] = (long)(param_1 + 0x19e);
        param_1[0x19f] = 0;
        param_1[0x19e] = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1a0) = 0;
    }
    if (piStack_230 != (int *)0x0) {
      piStack_228 = piStack_230;
      __ZdlPv();
    }
    pppppppuVar51 = pppppppuStack_250;
    pppppppuVar48 = pppppppuStack_248;
    if (pppppppuStack_250 != (undefined8 *******)0x0) {
      while (pppppppuVar49 = pppppppuVar48, pppppppuVar49 != pppppppuVar51) {
        pppppppuVar48 = pppppppuVar49 + -5;
        ppppppuVar78 = *pppppppuVar48;
        if (ppppppuVar78 != (undefined8 ******)0x0) {
          ppppppuVar22 = pppppppuVar49[-4];
          ppppppuVar16 = ppppppuVar78;
          if (ppppppuVar22 != ppppppuVar78) {
            do {
              ppppppuVar16 = ppppppuVar22 + -3;
              if (*ppppppuVar16 != (undefined8 *****)0x0) {
                ppppppuVar22[-2] = *ppppppuVar16;
                __ZdlPv();
              }
              ppppppuVar22 = ppppppuVar16;
            } while (ppppppuVar16 != ppppppuVar78);
            ppppppuVar16 = *pppppppuVar48;
          }
          pppppppuVar49[-4] = ppppppuVar78;
          __ZdlPv(ppppppuVar16);
        }
      }
      pppppppuStack_248 = pppppppuVar51;
      __ZdlPv(pppppppuStack_250);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
LAB_1094504d4:
  func_0x000104c4f740();
LAB_1094504f8:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x1094504fc);
  (*pcVar12)();
LAB_10944f3c0:
  if ((-1 < (long)uVar18) && ((int)(uVar18 >> 0x20) < (int)((ulong)(plVar38[4] - plVar38[3]) >> 2)))
  {
    uStack_160 = (undefined8 *******)(uVar18 >> 0x20);
    FUN_1094538d8(plVar38 + 0x11,&uStack_160);
  }
  goto LAB_10944f1a4;
LAB_10944f5a8:
  if ((-1 < (long)uVar18) && ((int)(uVar18 >> 0x20) < (int)((ulong)(plVar38[4] - plVar38[3]) >> 2)))
  {
    uStack_160 = (undefined8 *******)(uVar18 >> 0x20 | 0x200000000);
    FUN_1094538d8(plVar38 + 0x11,&uStack_160);
  }
LAB_10944f1a4:
  uVar36 = uVar36 + 1;
  puVar66 = puVar42;
  if ((ulong)(((long)pppppppuStack_1c0 - (long)pppppppuStack_1c8 >> 4) * 0x4ec4ec4ec4ec4ec5) <=
      uVar36) goto LAB_10944f5e4;
  goto LAB_10944f1d0;
LAB_10944f5e4:
  lVar39 = param_1[0x3f];
LAB_10944f5e8:
  if ((int)((ulong)(lVar39 - param_1[0x3e]) >> 4) * -0x3b13b13b < *(int *)((long)param_1 + 0x2c)) {
    piVar19 = (int *)param_1[0x53];
    piVar46 = (int *)param_1[0x54];
    if (piVar19 != piVar46) {
LAB_10944f620:
      uVar36 = param_1[0x4f];
      if (uVar36 != 0) {
        iVar23 = *piVar19;
        uVar26 = (ulong)iVar23;
        uVar18 = uVar36 - 1;
        if ((uVar36 & uVar18) == 0) {
          uVar44 = uVar18 & uVar26;
        }
        else {
          uVar44 = uVar26;
          if (uVar36 <= uVar26) {
            uVar44 = 0;
            if (uVar36 != 0) {
              uVar44 = uVar26 / uVar36;
            }
            uVar44 = uVar26 - uVar44 * uVar36;
          }
        }
        plVar38 = *(long **)(*plVar2 + uVar44 * 8);
        if ((plVar38 != (long *)0x0) && (plVar38 = (long *)*plVar38, plVar38 != (long *)0x0)) {
          if ((uVar36 & uVar18) != 0) {
            do {
              uVar18 = plVar38[1];
              if (uVar18 == uVar26) {
                if ((int)plVar38[2] == iVar23) goto LAB_10944f6e0;
              }
              else {
                if (uVar36 <= uVar18) {
                  uVar27 = 0;
                  if (uVar36 != 0) {
                    uVar27 = uVar18 / uVar36;
                  }
                  uVar18 = uVar18 - uVar27 * uVar36;
                }
                if (uVar18 != uVar44) goto LAB_109450420;
              }
              plVar38 = (long *)*plVar38;
              if (plVar38 == (long *)0x0) goto LAB_109450420;
            } while( true );
          }
          do {
            if (plVar38[1] == uVar26) {
              if ((int)plVar38[2] == iVar23) goto LAB_10944f6e0;
            }
            else if ((plVar38[1] & uVar18) != uVar44) break;
            plVar38 = (long *)*plVar38;
            if (plVar38 == (long *)0x0) break;
          } while( true );
        }
      }
LAB_109450420:
      FUN_109262df8(&UNK_10f56e116);
      goto LAB_1094504f8;
    }
LAB_10944f6fc:
    param_1[0x13] = lVar58;
    param_1[0x12] = lVar50;
    param_1[0x15] = lVar72;
    param_1[0x14] = lVar69;
    param_1[0x17] = lVar25;
    param_1[0x16] = lVar37;
    param_1[0x18] = lVar95;
    param_1[0x1b] = lVar86;
    param_1[0x1a] = lVar84;
    param_1[0x1d] = lVar89;
    param_1[0x1c] = lVar88;
    param_1[0x1f] = lVar82;
    param_1[0x1e] = lVar79;
    param_1[0x21] = lVar73;
    param_1[0x20] = lVar70;
    param_1[0x22] = lVar94;
    FUN_109428468(param_1 + 0x3e);
    bVar34 = 0;
    param_1[0x3f] = (long)pppppppuStack_1a8;
    param_1[0x3e] = (long)pppppppuStack_1b0;
    param_1[0x40] = lStack_1a0;
    lStack_1a0 = 0;
    pppppppuStack_1a8 = (undefined8 *******)0x0;
    pppppppuStack_1b0 = (undefined8 *******)0x0;
    goto LAB_109450088;
  }
  if (cStack_258 == '\x01') {
    FUN_10946b1d4(&uStack_160,puVar35,param_1 + 0x3e,param_1 + 0x12,&dStack_270,5,0);
  }
  else {
    FUN_109466534(&uStack_160,4.0 / (double)(1 << (ulong)((int)param_1[5] - iVar54 & 0x1f)),puVar35,
                  param_1 + 0x3e,param_1 + 0x12,1,2,0);
  }
  param_1[0x13] = (long)uStack_158;
  param_1[0x12] = (long)uStack_160;
  param_1[0x15] = (long)uStack_148;
  param_1[0x14] = (long)uStack_150;
  param_1[0x17] = (long)ppppppuStack_138;
  param_1[0x16] = (long)pppppppuStack_140;
  param_1[0x18] = (long)ppppppuStack_130;
  param_1[0x1f] = (long)ppppppuStack_f8;
  param_1[0x1e] = (long)ppppppuStack_100;
  param_1[0x21] = (long)ppppppuStack_e8;
  param_1[0x20] = (long)ppppppuStack_f0;
  param_1[0x22] = (long)ppppppuStack_e0;
  param_1[0x1b] = (long)ppppppuStack_118;
  param_1[0x1a] = (long)ppppppuStack_120;
  param_1[0x1d] = (long)ppppppuStack_108;
  param_1[0x1c] = (long)uStack_110;
  param_1[0x25] = 0;
  uStack_158 = (undefined8 ******)0x0;
  uStack_160 = (undefined8 *******)0x0;
  uStack_148 = (undefined8 *******)0x0;
  uStack_150 = (undefined8 *******)0x0;
  pppppppuStack_140 = (undefined8 *******)CONCAT44(pppppppuStack_140._4_4_,0x3f800000);
  pppppppuStack_188 = (undefined8 *******)0x0;
  pppppppuStack_190 = (undefined8 *******)0x0;
  pppppppuStack_178 = (undefined8 *******)0x0;
  pppppppuStack_180 = (undefined8 *******)0x0;
  pppppppuStack_170 = (undefined8 *******)CONCAT44(pppppppuStack_170._4_4_,0x3f800000);
  pppppppuStack_1e0 = (undefined8 *******)0x0;
  pppppppuStack_1d8 = (undefined8 *******)0x0;
  pppppppuStack_1d0 = (undefined8 *******)0x0;
  lVar39 = param_1[0x3e];
  if (param_1[0x3f] != lVar39) {
    iVar23 = 0;
    uVar36 = 0;
LAB_10944f86c:
    lVar39 = lVar39 + uVar36 * 0xd0;
    lVar47 = *(long *)(lVar39 + 8);
    dVar68 = *(double *)(lVar47 + 8);
    dVar83 = *(double *)(lVar47 + 0x10);
    dVar87 = *(double *)(lVar47 + 0x18);
    pppppppuStack_210 =
         (undefined8 *******)
         ((double)param_1[0x1a] * dVar68 + (double)param_1[0x1d] * dVar83 +
          (double)param_1[0x20] * dVar87 + (double)param_1[0x16]);
    dStack_208 = (double)param_1[0x1b] * dVar68 + (double)param_1[0x1e] * dVar83 +
                 (double)param_1[0x21] * dVar87 + (double)param_1[0x17];
    dStack_200 = dVar68 * (double)param_1[0x1c] +
                 dVar83 * (double)param_1[0x1f] + dVar87 * (double)param_1[0x22] +
                 (double)param_1[0x18];
    puVar53 = puVar35;
    FUN_10937d5c4(puVar35,&dStack_1f0,&pppppppuStack_210);
    pppppppuVar51 = (undefined8 *******)((long)puVar42 + uVar36 * 0xc);
    if (((((int)puVar53 == 0) || (dStack_1f0 < 0.0)) || (dStack_1e8 < 0.0)) ||
       (((double)(*(int *)puVar35 + -1) < dStack_1f0 ||
        ((double)(*(int *)(param_2 + 0x14) + -1) < dStack_1e8)))) {
      uVar26 = param_1[0x4f];
      if (uVar26 != 0) {
        ppppppuVar78 = *pppppppuVar51;
        uVar18 = (ulong)(int)ppppppuVar78;
        uVar44 = uVar26 - 1;
        if ((uVar26 & uVar44) == 0) {
          uVar27 = uVar44 & uVar18;
        }
        else {
          uVar27 = uVar18;
          if (uVar26 <= uVar18) {
            uVar27 = 0;
            if (uVar26 != 0) {
              uVar27 = uVar18 / uVar26;
            }
            uVar27 = uVar18 - uVar27 * uVar26;
          }
        }
        plVar38 = *(long **)(*plVar2 + uVar27 * 8);
        if ((plVar38 != (long *)0x0) && (plVar38 = (long *)*plVar38, plVar38 != (long *)0x0)) {
          do {
            uVar28 = plVar38[1];
            if (uVar28 == uVar18) {
              if ((int)plVar38[2] == (int)ppppppuVar78) goto LAB_10944faa4;
            }
            else {
              if ((uVar26 & uVar44) == 0) {
                uVar28 = uVar28 & uVar44;
              }
              else if (uVar26 <= uVar28) {
                uVar31 = 0;
                if (uVar26 != 0) {
                  uVar31 = uVar28 / uVar26;
                }
                uVar28 = uVar28 - uVar31 * uVar26;
              }
              if (uVar28 != uVar27) break;
            }
            plVar38 = (long *)*plVar38;
            if (plVar38 == (long *)0x0) break;
          } while( true );
        }
      }
      FUN_109262df8(&UNK_10f56e116);
    }
    else {
      dVar68 = dStack_1f0 - *(double *)(lVar39 + 0x20);
      dVar83 = dStack_1e8 - *(double *)(lVar39 + 0x28);
      dVar68 = dVar68 * dVar68 + dVar83 * dVar83;
      pppppppuVar48 = pppppppuVar51 + 1;
      if (*(double *)
           (param_1[0x42] + (long)*(int *)(*param_4 + (long)*(int *)pppppppuVar48 * 0xb0 + 0x28) * 8
           ) <= dVar68) {
        uVar26 = param_1[0x4f];
        if (uVar26 != 0) {
          ppppppuVar78 = *pppppppuVar51;
          uVar18 = (ulong)(int)ppppppuVar78;
          uVar44 = uVar26 - 1;
          if ((uVar26 & uVar44) == 0) {
            uVar27 = uVar44 & uVar18;
          }
          else {
            uVar27 = uVar18;
            if (uVar26 <= uVar18) {
              uVar27 = 0;
              if (uVar26 != 0) {
                uVar27 = uVar18 / uVar26;
              }
              uVar27 = uVar18 - uVar27 * uVar26;
            }
          }
          plVar38 = *(long **)(*plVar2 + uVar27 * 8);
          if ((plVar38 != (long *)0x0) && (plVar38 = (long *)*plVar38, plVar38 != (long *)0x0)) {
            do {
              uVar28 = plVar38[1];
              if (uVar28 == uVar18) {
                if ((int)plVar38[2] == (int)ppppppuVar78) goto LAB_10944fbb4;
              }
              else {
                if ((uVar26 & uVar44) == 0) {
                  uVar28 = uVar28 & uVar44;
                }
                else if (uVar26 <= uVar28) {
                  uVar31 = 0;
                  if (uVar26 != 0) {
                    uVar31 = uVar28 / uVar26;
                  }
                  uVar28 = uVar28 - uVar31 * uVar26;
                }
                if (uVar28 != uVar27) break;
              }
              plVar38 = (long *)*plVar38;
              if (plVar38 == (long *)0x0) break;
            } while( true );
          }
        }
      }
      else {
        func_0x000107c2ab1c(&uStack_160,pppppppuVar48,pppppppuVar48);
        if (((ulong)pppppppuVar48 & 1) == 0) {
          uVar26 = param_1[0x4f];
          if (uVar26 != 0) {
            ppppppuVar78 = *pppppppuVar51;
            uVar18 = (ulong)(int)ppppppuVar78;
            uVar44 = uVar26 - 1;
            if ((uVar26 & uVar44) == 0) {
              uVar27 = uVar44 & uVar18;
            }
            else {
              uVar27 = uVar18;
              if (uVar26 <= uVar18) {
                uVar27 = 0;
                if (uVar26 != 0) {
                  uVar27 = uVar18 / uVar26;
                }
                uVar27 = uVar18 - uVar27 * uVar26;
              }
            }
            plVar38 = *(long **)(*plVar2 + uVar27 * 8);
            if ((plVar38 != (long *)0x0) && (plVar38 = (long *)*plVar38, plVar38 != (long *)0x0)) {
              do {
                uVar28 = plVar38[1];
                if (uVar28 == uVar18) {
                  if ((int)plVar38[2] == (int)ppppppuVar78) goto LAB_10944fc60;
                }
                else {
                  if ((uVar26 & uVar44) == 0) {
                    uVar28 = uVar28 & uVar44;
                  }
                  else if (uVar26 <= uVar28) {
                    uVar31 = 0;
                    if (uVar26 != 0) {
                      uVar31 = uVar28 / uVar26;
                    }
                    uVar28 = uVar28 - uVar31 * uVar26;
                  }
                  if (uVar28 != uVar27) break;
                }
                plVar38 = (long *)*plVar38;
                if (plVar38 == (long *)0x0) break;
              } while( true );
            }
          }
        }
        else {
          param_1[0x25] = (long)((double)param_1[0x25] + 1.0);
          pppppppuVar48 = &pppppppuStack_190;
          pppppppuStack_210 = pppppppuVar51;
          FUN_1093c8fa4(pppppppuVar48,pppppppuVar51,&UNK_10dd5b8f9,&pppppppuStack_210,&uStack_191);
          *(int *)((long)pppppppuVar48 + 0x14) = *(int *)((long)pppppppuVar48 + 0x14) + 1;
          param_1[0x24] = (long)(dVar68 + (double)param_1[0x24]);
          uVar26 = param_1[0x4f];
          if (uVar26 != 0) {
            ppppppuVar78 = *pppppppuVar51;
            uVar18 = (ulong)(int)ppppppuVar78;
            uVar44 = uVar26 - 1;
            if ((uVar26 & uVar44) == 0) {
              uVar27 = uVar44 & uVar18;
            }
            else {
              uVar27 = uVar18;
              if (uVar26 <= uVar18) {
                uVar27 = 0;
                if (uVar26 != 0) {
                  uVar27 = uVar18 / uVar26;
                }
                uVar27 = uVar18 - uVar27 * uVar26;
              }
            }
            plVar38 = *(long **)(*plVar2 + uVar27 * 8);
            if ((plVar38 != (long *)0x0) && (plVar38 = (long *)*plVar38, plVar38 != (long *)0x0)) {
              do {
                uVar28 = plVar38[1];
                if (uVar28 == uVar18) {
                  if ((int)plVar38[2] == (int)ppppppuVar78) goto LAB_10944fd08;
                }
                else {
                  if ((uVar26 & uVar44) == 0) {
                    uVar28 = uVar28 & uVar44;
                  }
                  else if (uVar26 <= uVar28) {
                    uVar31 = 0;
                    if (uVar26 != 0) {
                      uVar31 = uVar28 / uVar26;
                    }
                    uVar28 = uVar28 - uVar31 * uVar26;
                  }
                  if (uVar28 != uVar27) break;
                }
                plVar38 = (long *)*plVar38;
                if (plVar38 == (long *)0x0) break;
              } while( true );
            }
          }
        }
      }
      FUN_109262df8(&UNK_10f56e116);
    }
    goto LAB_1094504f8;
  }
  dVar68 = 0.0;
  plVar38 = (long *)param_1[0x50];
joined_r0x00010944f834:
  for (; plVar38 != (long *)0x0; plVar38 = (long *)*plVar38) {
    FUN_109453464(plVar38 + 3);
  }
  FUN_109465684(plVar2,*(undefined8 *)(*param_1 + 0x58));
  pppppppuVar51 = (undefined8 *******)param_1[0x3e];
  pppppppuVar48 = (undefined8 *******)param_1[0x3f];
  dVar83 = (double)param_1[0x25];
  if (pppppppuVar48 == pppppppuVar51) {
    dVar68 = 0.0;
    iVar23 = *(int *)((long)param_1 + 0x2c);
  }
  else {
    dVar68 = dVar83 / (dVar68 + dVar83);
    iVar23 = *(int *)((long)param_1 + 0x2c);
  }
  if ((dVar83 < (double)(long)iVar23) || (dVar68 < (double)param_1[9])) {
    piVar19 = (int *)param_1[0x53];
    piVar46 = (int *)param_1[0x54];
joined_r0x00010944fef8:
    if (piVar19 != piVar46) {
      uVar36 = param_1[0x4f];
      if (uVar36 != 0) {
        iVar23 = *piVar19;
        uVar26 = (ulong)iVar23;
        uVar18 = uVar36 - 1;
        if ((uVar36 & uVar18) == 0) {
          uVar44 = uVar18 & uVar26;
        }
        else {
          uVar44 = uVar26;
          if (uVar36 <= uVar26) {
            uVar44 = 0;
            if (uVar36 != 0) {
              uVar44 = uVar26 / uVar36;
            }
            uVar44 = uVar26 - uVar44 * uVar36;
          }
        }
        plVar38 = *(long **)(*plVar2 + uVar44 * 8);
        if ((plVar38 != (long *)0x0) && (plVar38 = (long *)*plVar38, plVar38 != (long *)0x0)) {
          if ((uVar36 & uVar18) != 0) {
            do {
              uVar18 = plVar38[1];
              if (uVar18 == uVar26) {
                if ((int)plVar38[2] == iVar23) goto LAB_10944ffbc;
              }
              else {
                if (uVar36 <= uVar18) {
                  uVar27 = 0;
                  if (uVar36 != 0) {
                    uVar27 = uVar18 / uVar36;
                  }
                  uVar18 = uVar18 - uVar27 * uVar36;
                }
                if (uVar18 != uVar44) goto LAB_109450440;
              }
              plVar38 = (long *)*plVar38;
              if (plVar38 == (long *)0x0) goto LAB_109450440;
            } while( true );
          }
          do {
            if (plVar38[1] == uVar26) {
              if ((int)plVar38[2] == iVar23) goto LAB_10944ffbc;
            }
            else if ((plVar38[1] & uVar18) != uVar44) break;
            plVar38 = (long *)*plVar38;
            if (plVar38 == (long *)0x0) break;
          } while( true );
        }
      }
LAB_109450440:
      FUN_109262df8(&UNK_10f56e116);
      goto LAB_1094504f8;
    }
    param_1[0x13] = lVar58;
    param_1[0x12] = lVar50;
    param_1[0x15] = lVar72;
    param_1[0x14] = lVar69;
    param_1[0x17] = lVar25;
    param_1[0x16] = lVar37;
    param_1[0x18] = lVar95;
    param_1[0x1b] = lVar86;
    param_1[0x1a] = lVar84;
    param_1[0x1d] = lVar89;
    param_1[0x1c] = lVar88;
    param_1[0x1f] = lVar82;
    param_1[0x1e] = lVar79;
    param_1[0x21] = lVar73;
    param_1[0x20] = lVar70;
    param_1[0x22] = lVar94;
    FUN_109428468(param_1 + 0x3e);
    bVar34 = 0;
    param_1[0x3f] = (long)pppppppuStack_1a8;
    param_1[0x3e] = (long)pppppppuStack_1b0;
    param_1[0x40] = lStack_1a0;
    lStack_1a0 = 0;
    pppppppuStack_1a8 = (undefined8 *******)0x0;
    pppppppuStack_1b0 = (undefined8 *******)0x0;
    pppppppuStack_210 = &pppppppuStack_1e0;
    FUN_10942a570(&pppppppuStack_210);
    pppppppuVar51 = pppppppuStack_190;
    pppppppuVar48 = pppppppuStack_180;
  }
  else {
    param_1[0x3f] = (long)pppppppuStack_1d8;
    param_1[0x3e] = (long)pppppppuStack_1e0;
    pppppppuVar49 = (undefined8 *******)param_1[0x40];
    param_1[0x40] = (long)pppppppuStack_1d0;
    bVar34 = 1;
    pppppppuStack_210 = &pppppppuStack_1e0;
    pppppppuStack_1e0 = pppppppuVar51;
    pppppppuStack_1d8 = pppppppuVar48;
    pppppppuStack_1d0 = pppppppuVar49;
    FUN_10942a570(&pppppppuStack_210);
    pppppppuVar51 = pppppppuStack_190;
    pppppppuVar48 = pppppppuStack_180;
  }
  while (pppppppuVar48 != (undefined8 *******)0x0) {
    pppppppuVar48 = (undefined8 *******)*pppppppuVar48;
    pppppppuStack_190 = pppppppuVar51;
    __ZdlPv();
    pppppppuVar51 = pppppppuStack_190;
  }
  pppppppuStack_190 = (undefined8 *******)0x0;
  pppppppuVar48 = uStack_160;
  pppppppuVar49 = uStack_150;
  if (pppppppuVar51 != (undefined8 *******)0x0) {
    __ZdlPv();
    pppppppuVar48 = uStack_160;
    pppppppuVar49 = uStack_150;
  }
  while (pppppppuVar49 != (undefined8 *******)0x0) {
    pppppppuVar49 = (undefined8 *******)*pppppppuVar49;
    uStack_160 = pppppppuVar48;
    __ZdlPv();
    pppppppuVar48 = uStack_160;
  }
  uStack_160 = (undefined8 *******)0x0;
  if (pppppppuVar48 != (undefined8 *******)0x0) {
    __ZdlPv();
  }
LAB_109450088:
  if (puVar42 != (ulong *)0x0) {
    __ZdlPv(puVar42);
  }
  uStack_160 = &pppppppuStack_1c8;
  FUN_10942a570(&uStack_160);
joined_r0x0001094500b8:
  if (piVar61 != (int *)0x0) {
    __ZdlPv(piVar61);
  }
  uStack_160 = &pppppppuStack_1b0;
  FUN_10942a570(&uStack_160);
  if ((bVar34 == 0) || (iVar54 = iVar54 + 1, (int)param_1[5] <= iVar54)) goto LAB_109450128;
  goto LAB_10944dd04;
LAB_10944f6e0:
  FUN_10945311c(plVar38 + 3,plVar38 + 9,(int)plVar38[0x10]);
  piVar19 = piVar19 + 1;
  if (piVar19 == piVar46) goto LAB_10944f6fc;
  goto LAB_10944f620;
LAB_10944faa4:
  if ((-1 < (long)ppppppuVar78) &&
     ((int)((ulong)ppppppuVar78 >> 0x20) < (int)((ulong)(plVar38[4] - plVar38[3]) >> 2))) {
    pppppppuStack_210 = (undefined8 *******)((ulong)ppppppuVar78 >> 0x20);
    FUN_1094538d8(plVar38 + 0x11,&pppppppuStack_210);
  }
  goto LAB_10944f840;
LAB_10944fbb4:
  if ((-1 < (long)ppppppuVar78) &&
     ((int)((ulong)ppppppuVar78 >> 0x20) < (int)((ulong)(plVar38[4] - plVar38[3]) >> 2))) {
    pppppppuStack_210 = (undefined8 *******)((ulong)ppppppuVar78 >> 0x20 | 0x200000000);
    FUN_1094538d8(plVar38 + 0x11,&pppppppuStack_210);
  }
  iVar23 = iVar23 + 1;
  goto LAB_10944f840;
LAB_10944fc60:
  if ((-1 < (long)ppppppuVar78) &&
     ((int)((ulong)ppppppuVar78 >> 0x20) < (int)((ulong)(plVar38[4] - plVar38[3]) >> 2))) {
    pppppppuStack_210 = (undefined8 *******)((ulong)ppppppuVar78 >> 0x20);
    FUN_1094538d8(plVar38 + 0x11,&pppppppuStack_210);
  }
  goto LAB_10944f840;
LAB_10944fd08:
  if ((-1 < (long)ppppppuVar78) &&
     ((int)((ulong)ppppppuVar78 >> 0x20) < (int)((ulong)(plVar38[4] - plVar38[3]) >> 2))) {
    pppppppuStack_210 = (undefined8 *******)((ulong)ppppppuVar78 >> 0x20 | 0x100000000);
    FUN_1094538d8(plVar38 + 0x11,&pppppppuStack_210);
  }
  pppppppuVar51 = pppppppuStack_1d8;
  puVar40 = (undefined8 *)(param_1[0x3e] + uVar36 * 0xd0);
  if (pppppppuStack_1d8 < pppppppuStack_1d0) {
    ppppppuVar78 = (undefined8 ******)*puVar40;
    pppppppuStack_1d8[1] = (undefined8 ******)puVar40[1];
    *pppppppuVar51 = ppppppuVar78;
    ppppppuVar78 = (undefined8 ******)puVar40[2];
    pppppppuVar51[3] = (undefined8 ******)puVar40[3];
    pppppppuVar51[2] = ppppppuVar78;
    ppppppuVar78 = (undefined8 ******)puVar40[4];
    pppppppuVar51[5] = (undefined8 ******)puVar40[5];
    pppppppuVar51[4] = ppppppuVar78;
    ppppppuVar75 = (undefined8 ******)puVar40[7];
    ppppppuVar71 = (undefined8 ******)puVar40[6];
    ppppppuVar78 = (undefined8 ******)puVar40[8];
    ppppppuVar16 = (undefined8 ******)puVar40[10];
    ppppppuVar22 = (undefined8 ******)puVar40[0xb];
    pppppppuVar51[9] = (undefined8 ******)puVar40[9];
    pppppppuVar51[8] = ppppppuVar78;
    pppppppuVar51[0xb] = ppppppuVar22;
    pppppppuVar51[10] = ppppppuVar16;
    pppppppuVar51[7] = ppppppuVar75;
    pppppppuVar51[6] = ppppppuVar71;
    ppppppuVar71 = (undefined8 ******)puVar40[0xd];
    ppppppuVar22 = (undefined8 ******)puVar40[0xc];
    ppppppuVar78 = (undefined8 ******)puVar40[0xe];
    pppppppuVar51[0xf] = (undefined8 ******)puVar40[0xf];
    pppppppuVar51[0xe] = ppppppuVar78;
    ppppppuVar78 = (undefined8 ******)puVar40[0x10];
    pppppppuVar51[0x11] = (undefined8 ******)puVar40[0x11];
    pppppppuVar51[0x10] = ppppppuVar78;
    lVar39 = puVar40[0x13];
    ppppppuVar78 = (undefined8 ******)puVar40[0x12];
    ppppppuVar16 = (undefined8 ******)puVar40[0x13];
    pppppppuVar51[0x16] = (undefined8 ******)0x0;
    pppppppuVar51[0x13] = ppppppuVar16;
    pppppppuVar51[0x12] = ppppppuVar78;
    pppppppuVar51[0x14] = pppppppuVar51 + 0xd;
    pppppppuVar51[0x15] = pppppppuVar51 + 0x16;
    pppppppuVar51[0x17] = (undefined8 ******)0x0;
    pppppppuVar51[0xd] = ppppppuVar71;
    pppppppuVar51[0xc] = ppppppuVar22;
    if (lVar39 != 0) {
      piVar19 = (int *)(lVar39 + 0x14);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar9) {
          *piVar19 = *piVar19 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if (*(int *)((long)puVar40 + 100) < 3) {
      puVar59 = (undefined8 *)puVar40[0x15];
      ppppppuVar78 = pppppppuVar51[0x15];
      *ppppppuVar78 = (undefined8 *****)*puVar59;
      ppppppuVar78[1] = (undefined8 *****)puVar59[1];
    }
    else {
      *(undefined4 *)((long)pppppppuVar51 + 100) = 0;
      FUN_109a844cc(pppppppuVar51 + 0xc,*(undefined4 *)((long)puVar40 + 100),0,0,0);
      if (0 < *(int *)((long)pppppppuVar51 + 100)) {
        lVar39 = 0;
        lVar47 = puVar40[0x14];
        lVar21 = puVar40[0x15];
        ppppppuVar78 = pppppppuVar51[0x14];
        ppppppuVar16 = pppppppuVar51[0x15];
        do {
          *(undefined4 *)((long)ppppppuVar78 + lVar39 * 4) = *(undefined4 *)(lVar47 + lVar39 * 4);
          ppppppuVar16[lVar39] = *(undefined8 ******)(lVar21 + lVar39 * 8);
          lVar39 = lVar39 + 1;
        } while (lVar39 < *(int *)((long)pppppppuVar51 + 100));
      }
    }
    pppppppuVar51[0x18] = (undefined8 ******)puVar40[0x18];
    pppppppuStack_1d8 = pppppppuVar51 + 0x1a;
  }
  else {
    pppppppuVar51 = &pppppppuStack_1e0;
    FUN_10942cbb8(pppppppuVar51,puVar40);
    pppppppuStack_1d8 = pppppppuVar51;
  }
LAB_10944f840:
  uVar36 = uVar36 + 1;
  lVar39 = param_1[0x3e];
  if ((ulong)((param_1[0x3f] - lVar39 >> 4) * 0x4ec4ec4ec4ec4ec5) <= uVar36) goto LAB_10944fe68;
  goto LAB_10944f86c;
LAB_10944fe68:
  dVar68 = (double)iVar23;
  plVar38 = (long *)param_1[0x50];
  goto joined_r0x00010944f834;
LAB_10944ffbc:
  FUN_10945311c(plVar38 + 3,plVar38 + 9,(int)plVar38[0x10]);
  piVar19 = piVar19 + 1;
  goto joined_r0x00010944fef8;
LAB_10944ef3c:
  FUN_10945311c(plVar38 + 3,plVar38 + 9,(int)plVar38[0x10]);
  piVar19 = piVar19 + 1;
  if (piVar19 == piVar46) goto LAB_10944ef58;
  goto LAB_10944ee7c;
}



/* Entry: 109450724; end: 1094507e7;  */

undefined8 * FUN_109450724(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[1];
    puVar2 = puVar4;
    if (puVar5 != puVar4) {
      do {
        puVar2 = puVar5 + -5;
        plVar6 = (long *)*puVar2;
        if (plVar6 != (long *)0x0) {
          plVar3 = (long *)puVar5[-4];
          plVar1 = plVar6;
          if (plVar3 != plVar6) {
            do {
              plVar1 = plVar3 + -3;
              if (*plVar1 != 0) {
                plVar3[-2] = *plVar1;
                __ZdlPv();
              }
              plVar3 = plVar1;
            } while (plVar1 != plVar6);
            plVar1 = (long *)*puVar2;
          }
          puVar5[-4] = plVar6;
          __ZdlPv(plVar1);
        }
        puVar5 = puVar2;
      } while (puVar2 != puVar4);
      puVar2 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar4;
    __ZdlPv(puVar2);
  }
  return param_1;
}



/* Entry: 1094507e8; end: 10945082f;  */

long * FUN_1094507e8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109450830; end: 10945134f;  */

void FUN_109450830(uint *param_1,uint *param_2,undefined8 *param_3,long param_4,uint param_5)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  
LAB_109450860:
  do {
    puVar15 = param_1;
    uVar10 = (long)param_2 - (long)puVar15 >> 2;
    if (uVar10 - 2 == 0 || (long)uVar10 < 2) {
      if (uVar10 < 2) {
        return;
      }
      if (uVar10 == 2) {
        uVar9 = *puVar15;
        if (*(ulong *)(*(long *)*param_3 + (long)(int)param_2[-1] * 8) <=
            *(ulong *)(*(long *)*param_3 + (long)(int)uVar9 * 8)) {
          return;
        }
        *puVar15 = param_2[-1];
        param_2[-1] = uVar9;
        return;
      }
    }
    else {
      if (uVar10 == 3) {
        uVar9 = *puVar15;
        uVar3 = puVar15[1];
        lVar8 = *(long *)*param_3;
        uVar16 = *(ulong *)(lVar8 + (long)(int)uVar3 * 8);
        uVar10 = *(ulong *)(lVar8 + (long)(int)uVar9 * 8);
        uVar13 = param_2[-1];
        uVar20 = *(ulong *)(lVar8 + (long)(int)uVar13 * 8);
        if (uVar10 < uVar16) {
          if (uVar16 < uVar20) {
            *puVar15 = uVar13;
          }
          else {
            *puVar15 = uVar3;
            puVar15[1] = uVar9;
            if (*(ulong *)(lVar8 + (long)(int)param_2[-1] * 8) <= uVar10) {
              return;
            }
            puVar15[1] = param_2[-1];
          }
          param_2[-1] = uVar9;
          return;
        }
        if (uVar20 <= uVar16) {
          return;
        }
        puVar15[1] = uVar13;
        param_2[-1] = uVar3;
        uVar9 = *puVar15;
        if (*(ulong *)(lVar8 + (long)(int)puVar15[1] * 8) <=
            *(ulong *)(lVar8 + (long)(int)uVar9 * 8)) {
          return;
        }
        *puVar15 = puVar15[1];
        puVar15[1] = uVar9;
        return;
      }
      if (uVar10 == 4) {
        puVar6 = puVar15 + 1;
        uVar3 = *puVar6;
        puVar14 = puVar15 + 2;
        uVar13 = *puVar14;
        uVar9 = *puVar15;
        lVar8 = *(long *)*param_3;
        uVar10 = *(ulong *)(lVar8 + (long)(int)uVar3 * 8);
        uVar16 = *(ulong *)(lVar8 + (long)(int)uVar9 * 8);
        lVar18 = (long)(int)uVar13;
        uVar20 = *(ulong *)(lVar8 + (long)(int)uVar13 * 8);
        puVar5 = puVar15;
        if (uVar16 < uVar10) {
          lVar17 = (long)(int)uVar9;
          puVar7 = puVar14;
          uVar12 = uVar9;
          if (uVar20 <= uVar10) {
            *puVar15 = uVar3;
            puVar15[1] = uVar9;
            puVar5 = puVar6;
            if (uVar20 <= uVar16) {
              uVar9 = param_2[-1];
              if (*(ulong *)(lVar8 + (long)(int)uVar9 * 8) <= *(ulong *)(lVar8 + lVar18 * 8)) {
                return;
              }
              goto LAB_1094512e4;
            }
          }
LAB_109451298:
          *puVar5 = uVar13;
          *puVar7 = uVar9;
          uVar9 = param_2[-1];
          uVar13 = uVar12;
          if (*(ulong *)(lVar8 + (long)(int)uVar9 * 8) <= *(ulong *)(lVar8 + lVar17 * 8)) {
            return;
          }
        }
        else {
          uVar12 = uVar13;
          if (uVar10 < uVar20) {
            lVar18 = (long)(int)uVar3;
            *puVar6 = uVar13;
            *puVar14 = uVar3;
            puVar7 = puVar6;
            lVar17 = lVar18;
            uVar12 = uVar3;
            if (uVar16 < uVar20) goto LAB_109451298;
          }
          uVar9 = param_2[-1];
          uVar13 = uVar12;
          if (*(ulong *)(lVar8 + (long)(int)uVar9 * 8) <= *(ulong *)(lVar8 + lVar18 * 8)) {
            return;
          }
        }
LAB_1094512e4:
        *puVar14 = uVar9;
        param_2[-1] = uVar13;
        uVar9 = *puVar14;
        uVar3 = *puVar6;
        uVar10 = *(ulong *)(lVar8 + (long)(int)uVar9 * 8);
        if (uVar10 <= *(ulong *)(lVar8 + (long)(int)uVar3 * 8)) {
          return;
        }
        puVar15[1] = uVar9;
        puVar15[2] = uVar3;
        uVar3 = *puVar15;
        if (uVar10 <= *(ulong *)(lVar8 + (long)(int)uVar3 * 8)) {
          return;
        }
        *puVar15 = uVar9;
        puVar15[1] = uVar3;
        return;
      }
      if (uVar10 == 5) {
        lVar8 = *(long *)*param_3;
        puVar5 = puVar15 + 1;
        puVar6 = puVar15 + 2;
        puVar14 = puVar15 + 3;
        uVar9 = *puVar5;
        uVar3 = *puVar15;
        uVar16 = *(ulong *)(lVar8 + (long)(int)uVar9 * 8);
        uVar10 = *(ulong *)(lVar8 + (long)(int)uVar3 * 8);
        uVar13 = *puVar6;
        uVar20 = *(ulong *)(lVar8 + (long)(int)uVar13 * 8);
        if (uVar10 < uVar16) {
          if (uVar16 < uVar20) {
            *puVar15 = uVar13;
          }
          else {
            *puVar15 = uVar9;
            *puVar5 = uVar3;
            uVar13 = *puVar6;
            if (*(ulong *)(lVar8 + (long)(int)uVar13 * 8) <= uVar10) {
LAB_109451414:
              uVar12 = *puVar14;
              if (*(ulong *)(lVar8 + (long)(int)uVar12 * 8) <=
                  *(ulong *)(lVar8 + (long)(int)uVar13 * 8)) goto LAB_109451494;
              goto LAB_10945144c;
            }
            *puVar5 = uVar13;
          }
          *puVar6 = uVar3;
          uVar12 = *puVar14;
          uVar13 = uVar3;
          if (*(ulong *)(lVar8 + (long)(int)uVar12 * 8) <= *(ulong *)(lVar8 + (long)(int)uVar3 * 8))
          goto LAB_109451494;
        }
        else if (uVar16 < uVar20) {
          *puVar5 = uVar13;
          *puVar6 = uVar9;
          uVar3 = *puVar15;
          if (*(ulong *)(lVar8 + (long)(int)uVar3 * 8) < *(ulong *)(lVar8 + (long)(int)*puVar5 * 8))
          {
            *puVar15 = *puVar5;
            *puVar5 = uVar3;
            uVar13 = *puVar6;
            goto LAB_109451414;
          }
          uVar12 = *puVar14;
          uVar13 = uVar9;
          if (*(ulong *)(lVar8 + (long)(int)uVar12 * 8) <= *(ulong *)(lVar8 + (long)(int)uVar9 * 8))
          goto LAB_109451494;
        }
        else {
          uVar12 = *puVar14;
          if (*(ulong *)(lVar8 + (long)(int)uVar12 * 8) <= *(ulong *)(lVar8 + (long)(int)uVar13 * 8)
             ) goto LAB_109451494;
        }
LAB_10945144c:
        *puVar6 = uVar12;
        *puVar14 = uVar13;
        uVar9 = *puVar5;
        if (*(ulong *)(lVar8 + (long)(int)uVar9 * 8) < *(ulong *)(lVar8 + (long)(int)*puVar6 * 8)) {
          *puVar5 = *puVar6;
          *puVar6 = uVar9;
          uVar9 = *puVar15;
          if (*(ulong *)(lVar8 + (long)(int)uVar9 * 8) < *(ulong *)(lVar8 + (long)(int)*puVar5 * 8))
          {
            *puVar15 = *puVar5;
            *puVar5 = uVar9;
          }
        }
LAB_109451494:
        uVar9 = param_2[-1];
        uVar3 = *puVar14;
        if (*(ulong *)(lVar8 + (long)(int)uVar3 * 8) < *(ulong *)(lVar8 + (long)(int)uVar9 * 8)) {
          *puVar14 = uVar9;
          param_2[-1] = uVar3;
          uVar9 = *puVar6;
          if (*(ulong *)(lVar8 + (long)(int)uVar9 * 8) < *(ulong *)(lVar8 + (long)(int)*puVar14 * 8)
             ) {
            *puVar6 = *puVar14;
            *puVar14 = uVar9;
            uVar9 = *puVar5;
            if (*(ulong *)(lVar8 + (long)(int)uVar9 * 8) <
                *(ulong *)(lVar8 + (long)(int)*puVar6 * 8)) {
              *puVar5 = *puVar6;
              *puVar6 = uVar9;
              uVar9 = *puVar15;
              if (*(ulong *)(lVar8 + (long)(int)uVar9 * 8) <
                  *(ulong *)(lVar8 + (long)(int)*puVar5 * 8)) {
                *puVar15 = *puVar5;
                *puVar5 = uVar9;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar10 < 0x18) {
      if ((param_5 & 1) == 0) {
        if (puVar15 == param_2) {
          return;
        }
        if (puVar15 + 1 == param_2) {
          return;
        }
        lVar8 = *(long *)*param_3;
        puVar5 = puVar15 + 1;
        do {
          puVar6 = puVar5;
          lVar18 = (long)(int)*puVar15;
          uVar9 = puVar15[1];
          uVar10 = *(ulong *)(lVar8 + (long)(int)uVar9 * 8);
          puVar15 = puVar6;
          if (*(ulong *)(lVar8 + lVar18 * 8) < uVar10) {
            do {
              *puVar15 = (uint)lVar18;
              lVar18 = (long)(int)puVar15[-2];
              puVar15 = puVar15 + -1;
            } while (*(ulong *)(lVar8 + lVar18 * 8) < uVar10);
            *puVar15 = uVar9;
          }
          puVar5 = puVar6 + 1;
          puVar15 = puVar6;
        } while (puVar6 + 1 != param_2);
        return;
      }
      if (puVar15 == param_2) {
        return;
      }
      if (puVar15 + 1 == param_2) {
        return;
      }
      lVar18 = *(long *)*param_3;
      lVar8 = 4;
      puVar5 = puVar15;
      puVar6 = puVar15 + 1;
      do {
        lVar17 = (long)(int)*puVar5;
        uVar9 = puVar5[1];
        uVar10 = *(ulong *)(lVar18 + (long)(int)uVar9 * 8);
        lVar21 = lVar8;
        if (*(ulong *)(lVar18 + lVar17 * 8) < uVar10) {
          do {
            *(int *)((long)puVar15 + lVar21) = (int)lVar17;
            lVar4 = lVar21 + -4;
            puVar5 = puVar15;
            if (lVar4 == 0) goto LAB_109450ee0;
            lVar17 = (long)*(int *)((long)puVar15 + lVar21 + -8);
            lVar21 = lVar4;
          } while (*(ulong *)(lVar18 + lVar17 * 8) < uVar10);
          puVar5 = (uint *)((long)puVar15 + lVar4);
LAB_109450ee0:
          *puVar5 = uVar9;
        }
        puVar14 = puVar6 + 1;
        lVar8 = lVar8 + 4;
        puVar5 = puVar6;
        puVar6 = puVar14;
        if (puVar14 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_4 == 0) {
      if (puVar15 == param_2) {
        return;
      }
      uVar20 = uVar10 - 2 >> 1;
      plVar11 = (long *)*param_3;
      uVar16 = uVar20;
      break;
    }
    puVar5 = puVar15 + (uVar10 >> 1);
    lVar8 = *(long *)*param_3;
    uVar9 = param_2[-1];
    uVar16 = *(ulong *)(lVar8 + (long)(int)uVar9 * 8);
    param_1 = puVar15;
    if (uVar10 < 0x81) {
      uVar3 = *puVar15;
      uVar13 = *puVar5;
      uVar20 = *(ulong *)(lVar8 + (long)(int)uVar3 * 8);
      uVar10 = *(ulong *)(lVar8 + (long)(int)uVar13 * 8);
      if (uVar10 < uVar20) {
        if (uVar20 < uVar16) {
          *puVar5 = uVar9;
        }
        else {
          *puVar5 = uVar3;
          *puVar15 = uVar13;
          if (*(ulong *)(lVar8 + (long)(int)param_2[-1] * 8) <= uVar10) goto LAB_109450a34;
          *puVar15 = param_2[-1];
        }
        param_2[-1] = uVar13;
      }
      else if (uVar20 < uVar16) {
        *puVar15 = uVar9;
        param_2[-1] = uVar3;
        uVar9 = *puVar5;
        if (*(ulong *)(lVar8 + (long)(int)uVar9 * 8) < *(ulong *)(lVar8 + (long)(int)*puVar15 * 8))
        {
          *puVar5 = *puVar15;
          *puVar15 = uVar9;
          goto joined_r0x000109450cd8;
        }
      }
LAB_109450a34:
      uVar9 = *puVar15;
      if ((param_5 & 1) == 0) goto LAB_109450b84;
LAB_109450a40:
      uVar10 = *(ulong *)(lVar8 + (long)(int)uVar9 * 8);
    }
    else {
      uVar3 = *puVar5;
      uVar13 = *puVar15;
      uVar20 = *(ulong *)(lVar8 + (long)(int)uVar3 * 8);
      uVar10 = *(ulong *)(lVar8 + (long)(int)uVar13 * 8);
      if (uVar10 < uVar20) {
        if (uVar20 < uVar16) {
          *puVar15 = uVar9;
        }
        else {
          *puVar15 = uVar3;
          *puVar5 = uVar13;
          if (*(ulong *)(lVar8 + (long)(int)param_2[-1] * 8) <= uVar10) goto LAB_1094509ac;
          *puVar5 = param_2[-1];
        }
        param_2[-1] = uVar13;
      }
      else if (uVar20 < uVar16) {
        *puVar5 = uVar9;
        param_2[-1] = uVar3;
        uVar9 = *puVar15;
        if (*(ulong *)(lVar8 + (long)(int)uVar9 * 8) < *(ulong *)(lVar8 + (long)(int)*puVar5 * 8)) {
          *puVar15 = *puVar5;
          *puVar5 = uVar9;
        }
      }
LAB_1094509ac:
      puVar6 = puVar5 + -1;
      uVar9 = *puVar6;
      uVar3 = puVar15[1];
      uVar16 = *(ulong *)(lVar8 + (long)(int)uVar9 * 8);
      uVar10 = *(ulong *)(lVar8 + (long)(int)uVar3 * 8);
      uVar13 = param_2[-2];
      uVar20 = *(ulong *)(lVar8 + (long)(int)uVar13 * 8);
      if (uVar10 < uVar16) {
        if (uVar16 < uVar20) {
          puVar15[1] = uVar13;
        }
        else {
          puVar15[1] = uVar9;
          *puVar6 = uVar3;
          if (*(ulong *)(lVar8 + (long)(int)param_2[-2] * 8) <= uVar10) goto LAB_109450a68;
          *puVar6 = param_2[-2];
        }
        param_2[-2] = uVar3;
      }
      else if (uVar16 < uVar20) {
        *puVar6 = uVar13;
        param_2[-2] = uVar9;
        uVar9 = puVar15[1];
        if (*(ulong *)(lVar8 + (long)(int)uVar9 * 8) < *(ulong *)(lVar8 + (long)(int)*puVar6 * 8)) {
          puVar15[1] = *puVar6;
          *puVar6 = uVar9;
        }
      }
LAB_109450a68:
      puVar14 = puVar5 + 1;
      uVar9 = *puVar14;
      uVar3 = puVar15[2];
      uVar16 = *(ulong *)(lVar8 + (long)(int)uVar9 * 8);
      uVar10 = *(ulong *)(lVar8 + (long)(int)uVar3 * 8);
      uVar13 = param_2[-3];
      uVar20 = *(ulong *)(lVar8 + (long)(int)uVar13 * 8);
      if (uVar10 < uVar16) {
        if (uVar16 < uVar20) {
          puVar15[2] = uVar13;
        }
        else {
          puVar15[2] = uVar9;
          *puVar14 = uVar3;
          if (*(ulong *)(lVar8 + (long)(int)param_2[-3] * 8) <= uVar10) goto LAB_109450af0;
          *puVar14 = param_2[-3];
        }
        param_2[-3] = uVar3;
      }
      else if (uVar16 < uVar20) {
        *puVar14 = uVar13;
        param_2[-3] = uVar9;
        uVar9 = puVar15[2];
        if (*(ulong *)(lVar8 + (long)(int)uVar9 * 8) < *(ulong *)(lVar8 + (long)(int)*puVar14 * 8))
        {
          puVar15[2] = *puVar14;
          *puVar14 = uVar9;
        }
      }
LAB_109450af0:
      uVar9 = *puVar5;
      uVar3 = puVar5[1];
      uVar20 = *(ulong *)(lVar8 + (long)(int)uVar9 * 8);
      uVar13 = puVar5[-1];
      uVar10 = *(ulong *)(lVar8 + (long)(int)uVar13 * 8);
      uVar16 = *(ulong *)(lVar8 + (long)(int)uVar3 * 8);
      if (uVar10 < uVar20) {
        if (uVar20 < uVar16) {
LAB_109450b64:
          *puVar6 = uVar3;
          *puVar14 = uVar13;
          goto LAB_109450b6c;
        }
        puVar5[-1] = uVar9;
        *puVar5 = uVar13;
        puVar6 = puVar5;
        uVar9 = uVar3;
        if (uVar10 < uVar16) goto LAB_109450b64;
        uVar9 = *puVar15;
        *puVar15 = uVar13;
        *puVar5 = uVar9;
        uVar9 = *puVar15;
      }
      else {
        if (uVar20 < uVar16) {
          *puVar5 = uVar3;
          puVar5[1] = uVar9;
          puVar14 = puVar5;
          uVar9 = uVar13;
          if (uVar16 <= uVar10) {
            uVar9 = *puVar15;
            *puVar15 = uVar3;
            *puVar5 = uVar9;
            uVar9 = *puVar15;
            goto joined_r0x000109450cd8;
          }
          goto LAB_109450b64;
        }
LAB_109450b6c:
        uVar3 = *puVar15;
        *puVar15 = uVar9;
        *puVar5 = uVar3;
        uVar9 = *puVar15;
      }
joined_r0x000109450cd8:
      if ((param_5 & 1) != 0) goto LAB_109450a40;
LAB_109450b84:
      uVar10 = *(ulong *)(lVar8 + (long)(int)uVar9 * 8);
      if (*(ulong *)(lVar8 + (long)(int)puVar15[-1] * 8) <= uVar10) {
        if (*(ulong *)(lVar8 + (long)(int)param_2[-1] * 8) < uVar10) {
          do {
            param_1 = param_1 + 1;
          } while (uVar10 <= *(ulong *)(lVar8 + (long)(int)*param_1 * 8));
        }
        else {
          do {
            param_1 = param_1 + 1;
            if (param_2 <= param_1) break;
          } while (uVar10 <= *(ulong *)(lVar8 + (long)(int)*param_1 * 8));
        }
        puVar5 = param_2;
        if (param_1 < param_2) {
          do {
            puVar5 = puVar5 + -1;
          } while (*(ulong *)(lVar8 + (long)(int)*puVar5 * 8) < uVar10);
        }
        if (param_1 < puVar5) {
          uVar16 = (ulong)*param_1;
          uVar20 = (ulong)*puVar5;
          do {
            *param_1 = (uint)uVar20;
            *puVar5 = (uint)uVar16;
            do {
              param_1 = param_1 + 1;
              uVar16 = (ulong)(int)*param_1;
            } while (uVar10 <= *(ulong *)(lVar8 + uVar16 * 8));
            do {
              puVar5 = puVar5 + -1;
              uVar20 = (ulong)(int)*puVar5;
            } while (*(ulong *)(lVar8 + uVar20 * 8) < uVar10);
          } while (param_1 < puVar5);
        }
        puVar5 = param_1 + -1;
        if (puVar5 != puVar15) {
          *puVar15 = *puVar5;
        }
        param_5 = 0;
        *puVar5 = uVar9;
        param_4 = param_4 + -1;
        goto LAB_109450860;
      }
    }
    param_4 = param_4 + -1;
    lVar18 = 0;
    do {
      lVar17 = (long)*(int *)((long)puVar15 + lVar18 + 4);
      lVar18 = lVar18 + 4;
    } while (uVar10 < *(ulong *)(lVar8 + lVar17 * 8));
    puVar5 = (uint *)((long)puVar15 + lVar18);
    puVar6 = param_2;
    if (lVar18 == 4) {
      do {
        if (puVar6 <= puVar5) break;
        puVar6 = puVar6 + -1;
      } while (*(ulong *)(lVar8 + (long)(int)*puVar6 * 8) <= uVar10);
    }
    else {
      do {
        puVar6 = puVar6 + -1;
      } while (*(ulong *)(lVar8 + (long)(int)*puVar6 * 8) <= uVar10);
    }
    if (puVar5 < puVar6) {
      uVar16 = (ulong)*puVar6;
      puVar7 = puVar5;
      puVar19 = puVar6;
      do {
        *puVar7 = (uint)uVar16;
        *puVar19 = (uint)lVar17;
        do {
          puVar14 = puVar7;
          puVar7 = puVar14 + 1;
          lVar17 = (long)(int)*puVar7;
        } while (uVar10 < *(ulong *)(lVar8 + lVar17 * 8));
        do {
          puVar19 = puVar19 + -1;
          uVar16 = (ulong)(int)*puVar19;
        } while (*(ulong *)(lVar8 + uVar16 * 8) <= uVar10);
      } while (puVar7 < puVar19);
    }
    else {
      puVar14 = puVar5 + -1;
    }
    if (puVar14 != puVar15) {
      *puVar15 = *puVar14;
    }
    *puVar14 = uVar9;
    if (puVar5 < puVar6) {
LAB_109450c9c:
      FUN_109450830(puVar15,puVar14,param_3,param_4,param_5 & 1);
      param_5 = 0;
      param_1 = puVar14 + 1;
    }
    else {
      puVar5 = puVar15;
      FUN_109451518(puVar15,puVar14,*param_3);
      param_1 = puVar14 + 1;
      puVar6 = param_1;
      FUN_109451518(param_1,param_2,*param_3);
      if ((int)puVar6 == 0) {
        if (((ulong)puVar5 & 1) == 0) goto LAB_109450c9c;
      }
      else {
        param_1 = puVar15;
        param_2 = puVar14;
        if (((ulong)puVar5 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
LAB_109450f64:
  if ((long)uVar16 <= (long)uVar20) {
    uVar22 = (uVar16 & 0x3fffffffffffffff) << 1 | 1;
    puVar5 = puVar15 + uVar22;
    uVar2 = (uVar16 & 0x3fffffffffffffff) * 2 + 2;
    uVar9 = *puVar5;
    if ((long)uVar2 < (long)uVar10) {
      uVar3 = puVar5[1];
      lVar8 = *plVar11;
      puVar14 = puVar5 + 1;
      if (*(ulong *)(lVar8 + (long)(int)uVar9 * 8) <= *(ulong *)(lVar8 + (long)(int)uVar3 * 8)) {
        uVar2 = uVar22;
        puVar14 = puVar5;
        uVar3 = uVar9;
      }
      uVar9 = uVar3;
      lVar18 = (long)(int)puVar15[uVar16];
      uVar23 = *(ulong *)(lVar8 + lVar18 * 8);
      puVar6 = puVar15 + uVar16;
      puVar5 = puVar14;
      uVar22 = uVar2;
      if (*(ulong *)(lVar8 + (long)(int)uVar9 * 8) <= uVar23) {
LAB_10945101c:
        do {
          while( true ) {
            puVar14 = puVar5;
            *puVar6 = uVar9;
            if ((long)uVar20 < (long)uVar22) goto LAB_109450f54;
            uVar2 = (uVar22 & 0x3fffffffffffffff) << 1 | 1;
            puVar7 = puVar15 + uVar2;
            uVar22 = uVar22 * 2 + 2;
            uVar9 = *puVar7;
            puVar6 = puVar14;
            if ((long)uVar22 < (long)uVar10) break;
            puVar5 = puVar7;
            uVar22 = uVar2;
            if (uVar23 < *(ulong *)(lVar8 + (long)(int)uVar9 * 8)) goto LAB_109450f54;
          }
          uVar3 = puVar7[1];
          puVar5 = puVar7 + 1;
          if (*(ulong *)(lVar8 + (long)(int)uVar9 * 8) <= *(ulong *)(lVar8 + (long)(int)uVar3 * 8))
          {
            uVar22 = uVar2;
            puVar5 = puVar7;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (*(ulong *)(lVar8 + (long)(int)uVar9 * 8) <= uVar23);
LAB_109450f54:
        *puVar14 = (uint)lVar18;
      }
    }
    else {
      lVar8 = *plVar11;
      puVar6 = puVar15 + uVar16;
      lVar18 = (long)(int)*puVar6;
      uVar23 = *(ulong *)(lVar8 + lVar18 * 8);
      if (*(ulong *)(lVar8 + (long)(int)uVar9 * 8) <= uVar23) goto LAB_10945101c;
    }
  }
  bVar1 = (long)uVar16 < 1;
  uVar16 = uVar16 - 1;
  if (bVar1) {
    do {
      uVar9 = *puVar15;
      uVar20 = uVar10 - 2 >> 1;
      plVar11 = (long *)*param_3;
      puVar5 = puVar15;
      uVar16 = 0;
      do {
        while( true ) {
          puVar6 = puVar5 + uVar16 + 1;
          uVar3 = *puVar6;
          uVar22 = uVar16 << 1 | 1;
          uVar2 = uVar16 * 2 + 2;
          if ((long)uVar2 < (long)uVar10) break;
          *puVar5 = uVar3;
          puVar5 = puVar6;
          uVar16 = uVar22;
          if ((long)uVar20 < (long)uVar22) goto LAB_1094510f8;
        }
        lVar8 = uVar16 + 2;
        uVar13 = puVar5[lVar8];
        lVar18 = *plVar11;
        uVar16 = uVar2;
        puVar14 = puVar5 + lVar8;
        if (*(ulong *)(lVar18 + (long)(int)uVar3 * 8) <= *(ulong *)(lVar18 + (long)(int)uVar13 * 8))
        {
          uVar16 = uVar22;
          puVar14 = puVar6;
          uVar13 = uVar3;
        }
        puVar6 = puVar14;
        *puVar5 = uVar13;
        puVar5 = puVar6;
      } while ((long)uVar16 <= (long)uVar20);
LAB_1094510f8:
      param_2 = param_2 + -1;
      if (puVar6 == param_2) {
        *puVar6 = uVar9;
      }
      else {
        *puVar6 = *param_2;
        *param_2 = uVar9;
        lVar8 = (long)puVar6 + (4 - (long)puVar15) >> 2;
        if (1 < lVar8) {
          uVar16 = lVar8 - 2U >> 1;
          lVar18 = (long)(int)puVar15[uVar16];
          uVar9 = *puVar6;
          lVar8 = *plVar11;
          uVar20 = *(ulong *)(lVar8 + (long)(int)uVar9 * 8);
          puVar5 = puVar15 + uVar16;
          if (uVar20 < *(ulong *)(lVar8 + lVar18 * 8)) {
            do {
              puVar14 = puVar5;
              *puVar6 = (uint)lVar18;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1 >> 1;
              lVar18 = (long)(int)puVar15[uVar16];
              puVar6 = puVar14;
              puVar5 = puVar15 + uVar16;
            } while (uVar20 < *(ulong *)(lVar8 + lVar18 * 8));
            *puVar14 = uVar9;
          }
        }
      }
      bVar1 = (long)uVar10 < 3;
      uVar10 = uVar10 - 1;
      if (bVar1) {
        return;
      }
    } while( true );
  }
  goto LAB_109450f64;
}



/* Entry: 109451350; end: 109451517;  */

void FUN_109451350(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,long param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  uVar6 = *(ulong *)(param_6 + (long)iVar1 * 8);
  uVar5 = *(ulong *)(param_6 + (long)iVar2 * 8);
  iVar3 = *param_3;
  uVar7 = *(ulong *)(param_6 + (long)iVar3 * 8);
  if (uVar5 < uVar6) {
    if (uVar6 < uVar7) {
      *param_1 = iVar3;
    }
    else {
      *param_1 = iVar1;
      *param_2 = iVar2;
      iVar3 = *param_3;
      if (*(ulong *)(param_6 + (long)iVar3 * 8) <= uVar5) {
LAB_109451414:
        iVar4 = *param_4;
        if (*(ulong *)(param_6 + (long)iVar4 * 8) <= *(ulong *)(param_6 + (long)iVar3 * 8))
        goto LAB_109451494;
        goto LAB_10945144c;
      }
      *param_2 = iVar3;
    }
    *param_3 = iVar2;
    iVar4 = *param_4;
    iVar3 = iVar2;
    if (*(ulong *)(param_6 + (long)iVar4 * 8) <= *(ulong *)(param_6 + (long)iVar2 * 8))
    goto LAB_109451494;
  }
  else if (uVar6 < uVar7) {
    *param_2 = iVar3;
    *param_3 = iVar1;
    iVar2 = *param_1;
    if (*(ulong *)(param_6 + (long)iVar2 * 8) < *(ulong *)(param_6 + (long)*param_2 * 8)) {
      *param_1 = *param_2;
      *param_2 = iVar2;
      iVar3 = *param_3;
      goto LAB_109451414;
    }
    iVar4 = *param_4;
    iVar3 = iVar1;
    if (*(ulong *)(param_6 + (long)iVar4 * 8) <= *(ulong *)(param_6 + (long)iVar1 * 8))
    goto LAB_109451494;
  }
  else {
    iVar4 = *param_4;
    if (*(ulong *)(param_6 + (long)iVar4 * 8) <= *(ulong *)(param_6 + (long)iVar3 * 8))
    goto LAB_109451494;
  }
LAB_10945144c:
  *param_3 = iVar4;
  *param_4 = iVar3;
  iVar1 = *param_2;
  if (*(ulong *)(param_6 + (long)iVar1 * 8) < *(ulong *)(param_6 + (long)*param_3 * 8)) {
    *param_2 = *param_3;
    *param_3 = iVar1;
    iVar1 = *param_1;
    if (*(ulong *)(param_6 + (long)iVar1 * 8) < *(ulong *)(param_6 + (long)*param_2 * 8)) {
      *param_1 = *param_2;
      *param_2 = iVar1;
    }
  }
LAB_109451494:
  iVar1 = *param_4;
  if (*(ulong *)(param_6 + (long)iVar1 * 8) < *(ulong *)(param_6 + (long)*param_5 * 8)) {
    *param_4 = *param_5;
    *param_5 = iVar1;
    iVar1 = *param_3;
    if (*(ulong *)(param_6 + (long)iVar1 * 8) < *(ulong *)(param_6 + (long)*param_4 * 8)) {
      *param_3 = *param_4;
      *param_4 = iVar1;
      iVar1 = *param_2;
      if (*(ulong *)(param_6 + (long)iVar1 * 8) < *(ulong *)(param_6 + (long)*param_3 * 8)) {
        *param_2 = *param_3;
        *param_3 = iVar1;
        iVar1 = *param_1;
        if (*(ulong *)(param_6 + (long)iVar1 * 8) < *(ulong *)(param_6 + (long)*param_2 * 8)) {
          *param_1 = *param_2;
          *param_2 = iVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 109451518; end: 109451893;  */

bool FUN_109451518(int *param_1,int *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  int *piVar16;
  
  uVar6 = (long)param_2 - (long)param_1 >> 2;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 == 2) {
      iVar8 = *param_1;
      if (*(ulong *)(*param_3 + (long)param_2[-1] * 8) <= *(ulong *)(*param_3 + (long)iVar8 * 8)) {
        return true;
      }
      *param_1 = param_2[-1];
      param_2[-1] = iVar8;
      return true;
    }
  }
  else {
    if (uVar6 == 3) {
      iVar8 = *param_1;
      iVar1 = param_1[1];
      lVar7 = *param_3;
      uVar11 = *(ulong *)(lVar7 + (long)iVar1 * 8);
      uVar6 = *(ulong *)(lVar7 + (long)iVar8 * 8);
      iVar2 = param_2[-1];
      uVar12 = *(ulong *)(lVar7 + (long)iVar2 * 8);
      if (uVar11 <= uVar6) {
        if (uVar12 <= uVar11) {
          return true;
        }
        param_1[1] = iVar2;
        param_2[-1] = iVar1;
        iVar8 = *param_1;
        if (*(ulong *)(lVar7 + (long)param_1[1] * 8) <= *(ulong *)(lVar7 + (long)iVar8 * 8)) {
          return true;
        }
        *param_1 = param_1[1];
        param_1[1] = iVar8;
        return true;
      }
      if (uVar11 < uVar12) {
        *param_1 = iVar2;
        param_2[-1] = iVar8;
        return true;
      }
      *param_1 = iVar1;
      param_1[1] = iVar8;
      if (*(ulong *)(lVar7 + (long)param_2[-1] * 8) <= uVar6) {
        return true;
      }
      param_1[1] = param_2[-1];
      param_2[-1] = iVar8;
      return true;
    }
    if (uVar6 == 4) {
      piVar15 = param_1 + 1;
      iVar1 = *piVar15;
      piVar16 = param_1 + 2;
      iVar2 = *piVar16;
      iVar8 = *param_1;
      lVar7 = *param_3;
      uVar6 = *(ulong *)(lVar7 + (long)iVar1 * 8);
      uVar11 = *(ulong *)(lVar7 + (long)iVar8 * 8);
      lVar10 = (long)iVar2;
      uVar12 = *(ulong *)(lVar7 + (long)iVar2 * 8);
      piVar4 = param_1;
      if (uVar11 < uVar6) {
        lVar13 = (long)iVar8;
        piVar5 = piVar16;
        iVar9 = iVar8;
        if (uVar12 <= uVar6) {
          *param_1 = iVar1;
          param_1[1] = iVar8;
          piVar4 = piVar15;
          if (uVar12 <= uVar11) {
            iVar8 = param_2[-1];
            iVar9 = iVar2;
            if (*(ulong *)(lVar7 + (long)iVar8 * 8) <= *(ulong *)(lVar7 + lVar10 * 8)) {
              return true;
            }
            goto LAB_109451820;
          }
        }
LAB_1094517e8:
        *piVar4 = iVar2;
        *piVar5 = iVar8;
        iVar8 = param_2[-1];
        if (*(ulong *)(lVar7 + (long)iVar8 * 8) <= *(ulong *)(lVar7 + lVar13 * 8)) {
          return true;
        }
      }
      else {
        iVar9 = iVar2;
        if (uVar6 < uVar12) {
          lVar10 = (long)iVar1;
          *piVar15 = iVar2;
          *piVar16 = iVar1;
          piVar5 = piVar15;
          lVar13 = lVar10;
          iVar9 = iVar1;
          if (uVar11 < uVar12) goto LAB_1094517e8;
        }
        iVar8 = param_2[-1];
        if (*(ulong *)(lVar7 + (long)iVar8 * 8) <= *(ulong *)(lVar7 + lVar10 * 8)) {
          return true;
        }
      }
LAB_109451820:
      *piVar16 = iVar8;
      param_2[-1] = iVar9;
      iVar8 = *piVar16;
      iVar1 = *piVar15;
      uVar6 = *(ulong *)(lVar7 + (long)iVar8 * 8);
      if (uVar6 <= *(ulong *)(lVar7 + (long)iVar1 * 8)) {
        return true;
      }
      param_1[1] = iVar8;
      param_1[2] = iVar1;
      iVar1 = *param_1;
      if (uVar6 <= *(ulong *)(lVar7 + (long)iVar1 * 8)) {
        return true;
      }
      *param_1 = iVar8;
      param_1[1] = iVar1;
      return true;
    }
    if (uVar6 == 5) {
      FUN_109451350(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,*param_3);
      return true;
    }
  }
  piVar4 = param_1 + 2;
  iVar8 = *piVar4;
  piVar16 = param_1 + 1;
  iVar1 = *piVar16;
  lVar7 = *param_3;
  uVar6 = *(ulong *)(lVar7 + (long)iVar1 * 8);
  iVar2 = *param_1;
  uVar11 = *(ulong *)(lVar7 + (long)iVar2 * 8);
  uVar12 = *(ulong *)(lVar7 + (long)iVar8 * 8);
  piVar15 = param_1;
  if (uVar11 < uVar6) {
    piVar5 = piVar4;
    if (uVar12 <= uVar6) {
      *param_1 = iVar1;
      param_1[1] = iVar2;
      piVar15 = piVar16;
      piVar16 = piVar4;
      goto LAB_1094516d4;
    }
  }
  else {
    if (uVar12 <= uVar6) goto LAB_1094516e4;
    *piVar16 = iVar8;
    *piVar4 = iVar1;
LAB_1094516d4:
    piVar5 = piVar16;
    if (uVar12 <= uVar11) goto LAB_1094516e4;
  }
  *piVar15 = iVar8;
  *piVar5 = iVar2;
LAB_1094516e4:
  if (param_1 + 3 != param_2) {
    iVar8 = 0;
    lVar10 = 0xc;
    piVar15 = param_1 + 3;
    do {
      piVar16 = piVar15;
      iVar1 = *piVar16;
      lVar14 = (long)*piVar4;
      uVar6 = *(ulong *)(lVar7 + (long)iVar1 * 8);
      lVar13 = lVar10;
      if (*(ulong *)(lVar7 + lVar14 * 8) < uVar6) {
        do {
          *(int *)((long)param_1 + lVar13) = (int)lVar14;
          lVar3 = lVar13 + -4;
          if (lVar3 == 0) {
            *param_1 = iVar1;
            goto joined_r0x000109451708;
          }
          lVar14 = (long)*(int *)((long)param_1 + lVar13 + -8);
          lVar13 = lVar3;
        } while (*(ulong *)(lVar7 + lVar14 * 8) < uVar6);
        *(int *)((long)param_1 + lVar3) = iVar1;
joined_r0x000109451708:
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return piVar16 + 1 == param_2;
        }
      }
      lVar10 = lVar10 + 4;
      piVar15 = piVar16 + 1;
      piVar4 = piVar16;
    } while (piVar16 + 1 != param_2);
  }
  return true;
}



/* Entry: 109451894; end: 109452383;  */

void FUN_109451894(uint *param_1,uint *param_2,undefined8 *param_3,long param_4,uint param_5)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  uint *puVar21;
  ulong uVar22;
  long lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
LAB_1094518c4:
  puVar12 = param_1;
  uVar10 = (long)param_2 - (long)puVar12 >> 2;
  if (uVar10 - 2 == 0 || (long)uVar10 < 2) {
    if (uVar10 < 2) {
      return;
    }
    if (uVar10 == 2) {
      uVar9 = *puVar12;
      if (*(double *)(*(long *)*param_3 + (long)(int)uVar9 * 8) <=
          *(double *)(*(long *)*param_3 + (long)(int)param_2[-1] * 8)) {
        return;
      }
      *puVar12 = param_2[-1];
      param_2[-1] = uVar9;
      return;
    }
  }
  else {
    if (uVar10 == 3) {
      uVar9 = *puVar12;
      uVar3 = puVar12[1];
      lVar7 = *(long *)*param_3;
      dVar25 = *(double *)(lVar7 + (long)(int)uVar3 * 8);
      dVar24 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
      uVar14 = param_2[-1];
      dVar26 = *(double *)(lVar7 + (long)(int)uVar14 * 8);
      if (dVar25 < dVar24) {
        if (dVar25 <= dVar26) {
          *puVar12 = uVar3;
          puVar12[1] = uVar9;
          if (dVar24 <= *(double *)(lVar7 + (long)(int)param_2[-1] * 8)) {
            return;
          }
          puVar12[1] = param_2[-1];
        }
        else {
          *puVar12 = uVar14;
        }
        param_2[-1] = uVar9;
        return;
      }
      if (dVar25 <= dVar26) {
        return;
      }
      puVar12[1] = uVar14;
      param_2[-1] = uVar3;
      uVar9 = *puVar12;
      if (*(double *)(lVar7 + (long)(int)uVar9 * 8) <=
          *(double *)(lVar7 + (long)(int)puVar12[1] * 8)) {
        return;
      }
      *puVar12 = puVar12[1];
      puVar12[1] = uVar9;
      return;
    }
    if (uVar10 == 4) {
      puVar6 = puVar12 + 1;
      uVar3 = *puVar6;
      puVar15 = puVar12 + 2;
      uVar14 = *puVar15;
      uVar9 = *puVar12;
      lVar7 = *(long *)*param_3;
      dVar26 = *(double *)(lVar7 + (long)(int)uVar3 * 8);
      dVar24 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
      lVar20 = (long)(int)uVar14;
      dVar25 = *(double *)(lVar7 + (long)(int)uVar14 * 8);
      puVar5 = puVar12;
      if (dVar24 <= dVar26) {
        uVar13 = uVar14;
        if (dVar25 < dVar26) {
          lVar20 = (long)(int)uVar3;
          *puVar6 = uVar14;
          *puVar15 = uVar3;
          lVar16 = lVar20;
          puVar17 = puVar6;
          uVar13 = uVar3;
          if (dVar25 < dVar24) goto LAB_1094522cc;
        }
        uVar9 = param_2[-1];
        uVar14 = uVar13;
        if (*(double *)(lVar7 + lVar20 * 8) <= *(double *)(lVar7 + (long)(int)uVar9 * 8)) {
          return;
        }
      }
      else {
        lVar16 = (long)(int)uVar9;
        puVar17 = puVar15;
        uVar13 = uVar9;
        if (dVar26 <= dVar25) {
          *puVar12 = uVar3;
          puVar12[1] = uVar9;
          puVar5 = puVar6;
          if (dVar24 <= dVar25) {
            uVar9 = param_2[-1];
            if (*(double *)(lVar7 + lVar20 * 8) <= *(double *)(lVar7 + (long)(int)uVar9 * 8)) {
              return;
            }
            goto LAB_109452318;
          }
        }
LAB_1094522cc:
        *puVar5 = uVar14;
        *puVar17 = uVar9;
        uVar9 = param_2[-1];
        uVar14 = uVar13;
        if (*(double *)(lVar7 + lVar16 * 8) <= *(double *)(lVar7 + (long)(int)uVar9 * 8)) {
          return;
        }
      }
LAB_109452318:
      *puVar15 = uVar9;
      param_2[-1] = uVar14;
      uVar9 = *puVar15;
      uVar3 = *puVar6;
      dVar24 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
      if (*(double *)(lVar7 + (long)(int)uVar3 * 8) <= dVar24) {
        return;
      }
      puVar12[1] = uVar9;
      puVar12[2] = uVar3;
      uVar3 = *puVar12;
      if (*(double *)(lVar7 + (long)(int)uVar3 * 8) <= dVar24) {
        return;
      }
      *puVar12 = uVar9;
      puVar12[1] = uVar3;
      return;
    }
    if (uVar10 == 5) {
      lVar7 = *(long *)*param_3;
      puVar5 = puVar12 + 1;
      puVar6 = puVar12 + 2;
      puVar15 = puVar12 + 3;
      uVar9 = *puVar5;
      uVar3 = *puVar12;
      dVar25 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
      dVar24 = *(double *)(lVar7 + (long)(int)uVar3 * 8);
      uVar14 = *puVar6;
      dVar26 = *(double *)(lVar7 + (long)(int)uVar14 * 8);
      if (dVar24 <= dVar25) {
        if (dVar25 <= dVar26) {
          uVar13 = *puVar15;
          if (*(double *)(lVar7 + (long)(int)uVar14 * 8) <=
              *(double *)(lVar7 + (long)(int)uVar13 * 8)) goto LAB_1094524c8;
        }
        else {
          *puVar5 = uVar14;
          *puVar6 = uVar9;
          uVar3 = *puVar12;
          if (*(double *)(lVar7 + (long)(int)*puVar5 * 8) <
              *(double *)(lVar7 + (long)(int)uVar3 * 8)) {
            *puVar12 = *puVar5;
            *puVar5 = uVar3;
            uVar14 = *puVar6;
            goto LAB_109452448;
          }
          uVar13 = *puVar15;
          uVar14 = uVar9;
          if (*(double *)(lVar7 + (long)(int)uVar9 * 8) <=
              *(double *)(lVar7 + (long)(int)uVar13 * 8)) goto LAB_1094524c8;
        }
      }
      else {
        if (dVar25 <= dVar26) {
          *puVar12 = uVar9;
          *puVar5 = uVar3;
          uVar14 = *puVar6;
          if (dVar24 <= *(double *)(lVar7 + (long)(int)uVar14 * 8)) {
LAB_109452448:
            uVar13 = *puVar15;
            if (*(double *)(lVar7 + (long)(int)uVar14 * 8) <=
                *(double *)(lVar7 + (long)(int)uVar13 * 8)) goto LAB_1094524c8;
            goto LAB_109452480;
          }
          *puVar5 = uVar14;
        }
        else {
          *puVar12 = uVar14;
        }
        *puVar6 = uVar3;
        uVar13 = *puVar15;
        uVar14 = uVar3;
        if (*(double *)(lVar7 + (long)(int)uVar3 * 8) <= *(double *)(lVar7 + (long)(int)uVar13 * 8))
        goto LAB_1094524c8;
      }
LAB_109452480:
      *puVar6 = uVar13;
      *puVar15 = uVar14;
      uVar9 = *puVar5;
      if (*(double *)(lVar7 + (long)(int)*puVar6 * 8) < *(double *)(lVar7 + (long)(int)uVar9 * 8)) {
        *puVar5 = *puVar6;
        *puVar6 = uVar9;
        uVar9 = *puVar12;
        if (*(double *)(lVar7 + (long)(int)*puVar5 * 8) < *(double *)(lVar7 + (long)(int)uVar9 * 8))
        {
          *puVar12 = *puVar5;
          *puVar5 = uVar9;
        }
      }
LAB_1094524c8:
      uVar9 = param_2[-1];
      uVar3 = *puVar15;
      if (*(double *)(lVar7 + (long)(int)uVar9 * 8) < *(double *)(lVar7 + (long)(int)uVar3 * 8)) {
        *puVar15 = uVar9;
        param_2[-1] = uVar3;
        uVar9 = *puVar6;
        if (*(double *)(lVar7 + (long)(int)*puVar15 * 8) < *(double *)(lVar7 + (long)(int)uVar9 * 8)
           ) {
          *puVar6 = *puVar15;
          *puVar15 = uVar9;
          uVar9 = *puVar5;
          if (*(double *)(lVar7 + (long)(int)*puVar6 * 8) <
              *(double *)(lVar7 + (long)(int)uVar9 * 8)) {
            *puVar5 = *puVar6;
            *puVar6 = uVar9;
            uVar9 = *puVar12;
            if (*(double *)(lVar7 + (long)(int)*puVar5 * 8) <
                *(double *)(lVar7 + (long)(int)uVar9 * 8)) {
              *puVar12 = *puVar5;
              *puVar5 = uVar9;
            }
          }
        }
      }
      return;
    }
  }
  if ((long)uVar10 < 0x18) {
    if ((param_5 & 1) == 0) {
      if (puVar12 == param_2) {
        return;
      }
      if (puVar12 + 1 == param_2) {
        return;
      }
      lVar7 = *(long *)*param_3;
      puVar5 = puVar12 + 1;
      do {
        puVar6 = puVar5;
        lVar20 = (long)(int)*puVar12;
        uVar9 = puVar12[1];
        dVar24 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
        puVar12 = puVar6;
        if (dVar24 < *(double *)(lVar7 + lVar20 * 8)) {
          do {
            *puVar12 = (uint)lVar20;
            lVar20 = (long)(int)puVar12[-2];
            puVar12 = puVar12 + -1;
          } while (dVar24 < *(double *)(lVar7 + lVar20 * 8));
          *puVar12 = uVar9;
        }
        puVar5 = puVar6 + 1;
        puVar12 = puVar6;
      } while (puVar6 + 1 != param_2);
      return;
    }
    if (puVar12 == param_2) {
      return;
    }
    if (puVar12 + 1 == param_2) {
      return;
    }
    lVar20 = *(long *)*param_3;
    lVar7 = 4;
    puVar5 = puVar12;
    puVar6 = puVar12 + 1;
    do {
      lVar16 = (long)(int)*puVar5;
      uVar9 = puVar5[1];
      dVar24 = *(double *)(lVar20 + (long)(int)uVar9 * 8);
      lVar23 = lVar7;
      if (dVar24 < *(double *)(lVar20 + lVar16 * 8)) {
        do {
          *(int *)((long)puVar12 + lVar23) = (int)lVar16;
          lVar4 = lVar23 + -4;
          puVar5 = puVar12;
          if (lVar4 == 0) goto LAB_109451f44;
          lVar16 = (long)*(int *)((long)puVar12 + lVar23 + -8);
          lVar23 = lVar4;
        } while (dVar24 < *(double *)(lVar20 + lVar16 * 8));
        puVar5 = (uint *)((long)puVar12 + lVar4);
LAB_109451f44:
        *puVar5 = uVar9;
      }
      puVar15 = puVar6 + 1;
      lVar7 = lVar7 + 4;
      puVar5 = puVar6;
      puVar6 = puVar15;
      if (puVar15 == param_2) {
        return;
      }
    } while( true );
  }
  if (param_4 == 0) {
    if (puVar12 == param_2) {
      return;
    }
    uVar8 = uVar10 - 2 >> 1;
    plVar11 = (long *)*param_3;
    uVar18 = uVar8;
    do {
      if ((long)uVar18 <= (long)uVar8) {
        uVar22 = (uVar18 & 0x3fffffffffffffff) << 1 | 1;
        puVar5 = puVar12 + uVar22;
        uVar19 = (uVar18 & 0x3fffffffffffffff) * 2 + 2;
        lVar7 = *plVar11;
        if (((long)uVar19 < (long)uVar10) &&
           (*(double *)(lVar7 + (long)(int)*puVar5 * 8) <
            *(double *)(lVar7 + (long)(int)puVar5[1] * 8))) {
          uVar22 = uVar19;
          puVar5 = puVar5 + 1;
        }
        puVar6 = puVar12 + uVar18;
        lVar20 = (long)(int)*puVar5;
        uVar9 = *puVar6;
        dVar24 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
        if (dVar24 <= *(double *)(lVar7 + lVar20 * 8)) {
          do {
            puVar15 = puVar5;
            *puVar6 = (uint)lVar20;
            if ((long)uVar8 < (long)uVar22) break;
            uVar2 = (uVar22 & 0x3fffffffffffffff) << 1 | 1;
            puVar5 = puVar12 + uVar2;
            uVar19 = uVar22 * 2 + 2;
            uVar22 = uVar2;
            if (((long)uVar19 < (long)uVar10) &&
               (*(double *)(lVar7 + (long)(int)*puVar5 * 8) <
                *(double *)(lVar7 + (long)(int)puVar5[1] * 8))) {
              uVar22 = uVar19;
              puVar5 = puVar5 + 1;
            }
            lVar20 = (long)(int)*puVar5;
            puVar6 = puVar15;
          } while (dVar24 <= *(double *)(lVar7 + lVar20 * 8));
          *puVar15 = uVar9;
        }
      }
      bVar1 = 0 < (long)uVar18;
      uVar18 = uVar18 - 1;
    } while (bVar1);
    do {
      uVar9 = *puVar12;
      plVar11 = (long *)*param_3;
      puVar5 = puVar12;
      uVar18 = 0;
      do {
        uVar19 = uVar18 << 1 | 1;
        uVar8 = uVar18 * 2 + 2;
        puVar6 = puVar5 + uVar18 + 1;
        if (((long)uVar8 < (long)uVar10) &&
           (lVar7 = *plVar11,
           *(double *)(lVar7 + (long)(int)puVar5[uVar18 + 1] * 8) <
           *(double *)(lVar7 + (long)(int)puVar5[uVar18 + 2] * 8))) {
          puVar6 = puVar5 + uVar18 + 2;
          uVar19 = uVar8;
        }
        *puVar5 = *puVar6;
        puVar5 = puVar6;
        uVar18 = uVar19;
      } while ((long)uVar19 <= (long)(uVar10 - 2 >> 1));
      param_2 = param_2 + -1;
      if (puVar6 == param_2) {
        *puVar6 = uVar9;
      }
      else {
        *puVar6 = *param_2;
        *param_2 = uVar9;
        lVar7 = (long)puVar6 + (4 - (long)puVar12) >> 2;
        if (1 < lVar7) {
          uVar18 = lVar7 - 2U >> 1;
          lVar20 = (long)(int)puVar12[uVar18];
          uVar9 = *puVar6;
          lVar7 = *plVar11;
          dVar24 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
          puVar5 = puVar12 + uVar18;
          if (*(double *)(lVar7 + lVar20 * 8) < dVar24) {
            do {
              puVar15 = puVar5;
              *puVar6 = (uint)lVar20;
              if (uVar18 == 0) break;
              uVar18 = uVar18 - 1 >> 1;
              lVar20 = (long)(int)puVar12[uVar18];
              puVar6 = puVar15;
              puVar5 = puVar12 + uVar18;
            } while (*(double *)(lVar7 + lVar20 * 8) < dVar24);
            *puVar15 = uVar9;
          }
        }
      }
      bVar1 = (long)uVar10 < 3;
      uVar10 = uVar10 - 1;
      if (bVar1) {
        return;
      }
    } while( true );
  }
  puVar5 = puVar12 + (uVar10 >> 1);
  lVar7 = *(long *)*param_3;
  uVar9 = param_2[-1];
  dVar24 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
  param_1 = puVar12;
  if (uVar10 < 0x81) {
    uVar3 = *puVar12;
    uVar14 = *puVar5;
    dVar26 = *(double *)(lVar7 + (long)(int)uVar3 * 8);
    dVar25 = *(double *)(lVar7 + (long)(int)uVar14 * 8);
    if (dVar25 <= dVar26) {
      if (dVar26 <= dVar24) goto LAB_109451a98;
      *puVar12 = uVar9;
      param_2[-1] = uVar3;
      uVar9 = *puVar5;
      if (*(double *)(lVar7 + (long)(int)uVar9 * 8) <= *(double *)(lVar7 + (long)(int)*puVar12 * 8))
      goto LAB_109451a98;
      *puVar5 = *puVar12;
      *puVar12 = uVar9;
    }
    else {
      if (dVar26 <= dVar24) {
        *puVar5 = uVar3;
        *puVar12 = uVar14;
        if (dVar25 <= *(double *)(lVar7 + (long)(int)param_2[-1] * 8)) goto LAB_109451a98;
        *puVar12 = param_2[-1];
      }
      else {
        *puVar5 = uVar9;
      }
      param_2[-1] = uVar14;
LAB_109451a98:
      uVar9 = *puVar12;
    }
    if ((param_5 & 1) == 0) goto LAB_109451be8;
LAB_109451aa4:
    dVar24 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
  }
  else {
    uVar3 = *puVar5;
    uVar14 = *puVar12;
    dVar26 = *(double *)(lVar7 + (long)(int)uVar3 * 8);
    dVar25 = *(double *)(lVar7 + (long)(int)uVar14 * 8);
    if (dVar25 <= dVar26) {
      if (dVar24 < dVar26) {
        *puVar5 = uVar9;
        param_2[-1] = uVar3;
        uVar9 = *puVar12;
        if (*(double *)(lVar7 + (long)(int)*puVar5 * 8) < *(double *)(lVar7 + (long)(int)uVar9 * 8))
        {
          *puVar12 = *puVar5;
          *puVar5 = uVar9;
        }
      }
    }
    else {
      if (dVar26 <= dVar24) {
        *puVar12 = uVar3;
        *puVar5 = uVar14;
        if (dVar25 <= *(double *)(lVar7 + (long)(int)param_2[-1] * 8)) goto LAB_109451a10;
        *puVar5 = param_2[-1];
      }
      else {
        *puVar12 = uVar9;
      }
      param_2[-1] = uVar14;
    }
LAB_109451a10:
    puVar6 = puVar5 + -1;
    uVar9 = *puVar6;
    uVar3 = puVar12[1];
    dVar25 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
    dVar24 = *(double *)(lVar7 + (long)(int)uVar3 * 8);
    uVar14 = param_2[-2];
    dVar26 = *(double *)(lVar7 + (long)(int)uVar14 * 8);
    if (dVar24 <= dVar25) {
      if (dVar26 < dVar25) {
        *puVar6 = uVar14;
        param_2[-2] = uVar9;
        uVar9 = puVar12[1];
        if (*(double *)(lVar7 + (long)(int)*puVar6 * 8) < *(double *)(lVar7 + (long)(int)uVar9 * 8))
        {
          puVar12[1] = *puVar6;
          *puVar6 = uVar9;
        }
      }
    }
    else {
      if (dVar25 <= dVar26) {
        puVar12[1] = uVar9;
        *puVar6 = uVar3;
        if (dVar24 <= *(double *)(lVar7 + (long)(int)param_2[-2] * 8)) goto LAB_109451acc;
        *puVar6 = param_2[-2];
      }
      else {
        puVar12[1] = uVar14;
      }
      param_2[-2] = uVar3;
    }
LAB_109451acc:
    puVar15 = puVar5 + 1;
    uVar9 = *puVar15;
    uVar3 = puVar12[2];
    dVar25 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
    dVar24 = *(double *)(lVar7 + (long)(int)uVar3 * 8);
    uVar14 = param_2[-3];
    dVar26 = *(double *)(lVar7 + (long)(int)uVar14 * 8);
    if (dVar24 <= dVar25) {
      if (dVar26 < dVar25) {
        *puVar15 = uVar14;
        param_2[-3] = uVar9;
        uVar9 = puVar12[2];
        if (*(double *)(lVar7 + (long)(int)*puVar15 * 8) < *(double *)(lVar7 + (long)(int)uVar9 * 8)
           ) {
          puVar12[2] = *puVar15;
          *puVar15 = uVar9;
        }
      }
    }
    else {
      if (dVar25 <= dVar26) {
        puVar12[2] = uVar9;
        *puVar15 = uVar3;
        if (dVar24 <= *(double *)(lVar7 + (long)(int)param_2[-3] * 8)) goto LAB_109451b54;
        *puVar15 = param_2[-3];
      }
      else {
        puVar12[2] = uVar14;
      }
      param_2[-3] = uVar3;
    }
LAB_109451b54:
    uVar9 = *puVar5;
    uVar3 = puVar5[1];
    dVar26 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
    uVar14 = puVar5[-1];
    dVar24 = *(double *)(lVar7 + (long)(int)uVar14 * 8);
    dVar25 = *(double *)(lVar7 + (long)(int)uVar3 * 8);
    if (dVar24 <= dVar26) {
      if (dVar25 < dVar26) {
        *puVar5 = uVar3;
        puVar5[1] = uVar9;
        puVar15 = puVar5;
        uVar9 = uVar14;
        if (dVar24 <= dVar25) {
          uVar9 = *puVar12;
          *puVar12 = uVar3;
          *puVar5 = uVar9;
          uVar9 = *puVar12;
          goto joined_r0x000109451d3c;
        }
        goto LAB_109451bc8;
      }
LAB_109451bd0:
      uVar3 = *puVar12;
      *puVar12 = uVar9;
      *puVar5 = uVar3;
      uVar9 = *puVar12;
    }
    else {
      if (dVar25 < dVar26) {
LAB_109451bc8:
        *puVar6 = uVar3;
        *puVar15 = uVar14;
        goto LAB_109451bd0;
      }
      puVar5[-1] = uVar9;
      *puVar5 = uVar14;
      puVar6 = puVar5;
      uVar9 = uVar3;
      if (dVar25 < dVar24) goto LAB_109451bc8;
      uVar9 = *puVar12;
      *puVar12 = uVar14;
      *puVar5 = uVar9;
      uVar9 = *puVar12;
    }
joined_r0x000109451d3c:
    if ((param_5 & 1) != 0) goto LAB_109451aa4;
LAB_109451be8:
    dVar24 = *(double *)(lVar7 + (long)(int)uVar9 * 8);
    if (dVar24 <= *(double *)(lVar7 + (long)(int)puVar12[-1] * 8)) {
      if (*(double *)(lVar7 + (long)(int)param_2[-1] * 8) <= dVar24) {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (*(double *)(lVar7 + (long)(int)*param_1 * 8) <= dVar24);
      }
      else {
        do {
          param_1 = param_1 + 1;
        } while (*(double *)(lVar7 + (long)(int)*param_1 * 8) <= dVar24);
      }
      puVar5 = param_2;
      if (param_1 < param_2) {
        do {
          puVar5 = puVar5 + -1;
        } while (dVar24 < *(double *)(lVar7 + (long)(int)*puVar5 * 8));
      }
      if (param_1 < puVar5) {
        uVar10 = (ulong)*param_1;
        uVar18 = (ulong)*puVar5;
        do {
          *param_1 = (uint)uVar18;
          *puVar5 = (uint)uVar10;
          do {
            param_1 = param_1 + 1;
            uVar10 = (ulong)(int)*param_1;
          } while (*(double *)(lVar7 + uVar10 * 8) <= dVar24);
          do {
            puVar5 = puVar5 + -1;
            uVar18 = (ulong)(int)*puVar5;
          } while (dVar24 < *(double *)(lVar7 + uVar18 * 8));
        } while (param_1 < puVar5);
      }
      puVar5 = param_1 + -1;
      if (puVar5 != puVar12) {
        *puVar12 = *puVar5;
      }
      param_5 = 0;
      *puVar5 = uVar9;
      param_4 = param_4 + -1;
      goto LAB_1094518c4;
    }
  }
  param_4 = param_4 + -1;
  lVar20 = 0;
  do {
    lVar16 = (long)*(int *)((long)puVar12 + lVar20 + 4);
    lVar20 = lVar20 + 4;
  } while (*(double *)(lVar7 + lVar16 * 8) < dVar24);
  puVar5 = (uint *)((long)puVar12 + lVar20);
  puVar6 = param_2;
  if (lVar20 == 4) {
    do {
      if (puVar6 <= puVar5) break;
      puVar6 = puVar6 + -1;
    } while (dVar24 <= *(double *)(lVar7 + (long)(int)*puVar6 * 8));
  }
  else {
    do {
      puVar6 = puVar6 + -1;
    } while (dVar24 <= *(double *)(lVar7 + (long)(int)*puVar6 * 8));
  }
  if (puVar5 < puVar6) {
    uVar10 = (ulong)*puVar6;
    puVar17 = puVar5;
    puVar21 = puVar6;
    do {
      *puVar17 = (uint)uVar10;
      *puVar21 = (uint)lVar16;
      do {
        puVar15 = puVar17;
        puVar17 = puVar15 + 1;
        lVar16 = (long)(int)*puVar17;
      } while (*(double *)(lVar7 + lVar16 * 8) < dVar24);
      do {
        puVar21 = puVar21 + -1;
        uVar10 = (ulong)(int)*puVar21;
      } while (dVar24 <= *(double *)(lVar7 + uVar10 * 8));
    } while (puVar17 < puVar21);
  }
  else {
    puVar15 = puVar5 + -1;
  }
  if (puVar15 != puVar12) {
    *puVar12 = *puVar15;
  }
  *puVar15 = uVar9;
  if (puVar5 < puVar6) {
LAB_109451d00:
    FUN_109451894(puVar12,puVar15,param_3,param_4,param_5 & 1);
    param_5 = 0;
    param_1 = puVar15 + 1;
  }
  else {
    puVar5 = puVar12;
    FUN_10945254c(puVar12,puVar15,*param_3);
    param_1 = puVar15 + 1;
    puVar6 = param_1;
    FUN_10945254c(param_1,param_2,*param_3);
    if ((int)puVar6 == 0) {
      if (((ulong)puVar5 & 1) == 0) goto LAB_109451d00;
    }
    else {
      param_1 = puVar12;
      param_2 = puVar15;
      if (((ulong)puVar5 & 1) != 0) {
        return;
      }
    }
  }
  goto LAB_1094518c4;
}



/* Entry: 109452384; end: 10945254b;  */

void FUN_109452384(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,long param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  dVar6 = *(double *)(param_6 + (long)iVar1 * 8);
  dVar5 = *(double *)(param_6 + (long)iVar2 * 8);
  iVar3 = *param_3;
  dVar7 = *(double *)(param_6 + (long)iVar3 * 8);
  if (dVar5 <= dVar6) {
    if (dVar6 <= dVar7) {
      iVar4 = *param_4;
      if (*(double *)(param_6 + (long)iVar3 * 8) <= *(double *)(param_6 + (long)iVar4 * 8))
      goto LAB_1094524c8;
    }
    else {
      *param_2 = iVar3;
      *param_3 = iVar1;
      iVar2 = *param_1;
      if (*(double *)(param_6 + (long)*param_2 * 8) < *(double *)(param_6 + (long)iVar2 * 8)) {
        *param_1 = *param_2;
        *param_2 = iVar2;
        iVar3 = *param_3;
        goto LAB_109452448;
      }
      iVar4 = *param_4;
      iVar3 = iVar1;
      if (*(double *)(param_6 + (long)iVar1 * 8) <= *(double *)(param_6 + (long)iVar4 * 8))
      goto LAB_1094524c8;
    }
  }
  else {
    if (dVar6 <= dVar7) {
      *param_1 = iVar1;
      *param_2 = iVar2;
      iVar3 = *param_3;
      if (dVar5 <= *(double *)(param_6 + (long)iVar3 * 8)) {
LAB_109452448:
        iVar4 = *param_4;
        if (*(double *)(param_6 + (long)iVar3 * 8) <= *(double *)(param_6 + (long)iVar4 * 8))
        goto LAB_1094524c8;
        goto LAB_109452480;
      }
      *param_2 = iVar3;
    }
    else {
      *param_1 = iVar3;
    }
    *param_3 = iVar2;
    iVar4 = *param_4;
    iVar3 = iVar2;
    if (*(double *)(param_6 + (long)iVar2 * 8) <= *(double *)(param_6 + (long)iVar4 * 8))
    goto LAB_1094524c8;
  }
LAB_109452480:
  *param_3 = iVar4;
  *param_4 = iVar3;
  iVar1 = *param_2;
  if (*(double *)(param_6 + (long)*param_3 * 8) < *(double *)(param_6 + (long)iVar1 * 8)) {
    *param_2 = *param_3;
    *param_3 = iVar1;
    iVar1 = *param_1;
    if (*(double *)(param_6 + (long)*param_2 * 8) < *(double *)(param_6 + (long)iVar1 * 8)) {
      *param_1 = *param_2;
      *param_2 = iVar1;
    }
  }
LAB_1094524c8:
  iVar1 = *param_4;
  if (*(double *)(param_6 + (long)*param_5 * 8) < *(double *)(param_6 + (long)iVar1 * 8)) {
    *param_4 = *param_5;
    *param_5 = iVar1;
    iVar1 = *param_3;
    if (*(double *)(param_6 + (long)*param_4 * 8) < *(double *)(param_6 + (long)iVar1 * 8)) {
      *param_3 = *param_4;
      *param_4 = iVar1;
      iVar1 = *param_2;
      if (*(double *)(param_6 + (long)*param_3 * 8) < *(double *)(param_6 + (long)iVar1 * 8)) {
        *param_2 = *param_3;
        *param_3 = iVar1;
        iVar1 = *param_1;
        if (*(double *)(param_6 + (long)*param_2 * 8) < *(double *)(param_6 + (long)iVar1 * 8)) {
          *param_1 = *param_2;
          *param_2 = iVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 10945254c; end: 1094528cf;  */

bool FUN_10945254c(int *param_1,int *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar4 = (long)param_2 - (long)param_1 >> 2;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 == 2) {
      iVar6 = *param_1;
      if (*(double *)(*param_3 + (long)param_2[-1] * 8) < *(double *)(*param_3 + (long)iVar6 * 8)) {
        *param_1 = param_2[-1];
        param_2[-1] = iVar6;
        return true;
      }
      return true;
    }
  }
  else {
    if (uVar4 == 3) {
      iVar6 = *param_1;
      iVar1 = param_1[1];
      lVar5 = *param_3;
      dVar16 = *(double *)(lVar5 + (long)iVar1 * 8);
      dVar15 = *(double *)(lVar5 + (long)iVar6 * 8);
      iVar2 = param_2[-1];
      dVar17 = *(double *)(lVar5 + (long)iVar2 * 8);
      if (dVar15 <= dVar16) {
        if (dVar16 <= dVar17) {
          return true;
        }
        param_1[1] = iVar2;
        param_2[-1] = iVar1;
        iVar6 = *param_1;
        if (*(double *)(lVar5 + (long)param_1[1] * 8) < *(double *)(lVar5 + (long)iVar6 * 8)) {
          *param_1 = param_1[1];
          param_1[1] = iVar6;
          return true;
        }
        return true;
      }
      if (dVar17 < dVar16) {
        *param_1 = iVar2;
        param_2[-1] = iVar6;
        return true;
      }
      *param_1 = iVar1;
      param_1[1] = iVar6;
      if (*(double *)(lVar5 + (long)param_2[-1] * 8) < dVar15) {
        param_1[1] = param_2[-1];
        param_2[-1] = iVar6;
        return true;
      }
      return true;
    }
    if (uVar4 == 4) {
      piVar8 = param_1 + 1;
      iVar1 = *piVar8;
      piVar9 = param_1 + 2;
      iVar2 = *piVar9;
      iVar6 = *param_1;
      lVar5 = *param_3;
      dVar17 = *(double *)(lVar5 + (long)iVar1 * 8);
      dVar15 = *(double *)(lVar5 + (long)iVar6 * 8);
      lVar10 = (long)iVar2;
      dVar16 = *(double *)(lVar5 + (long)iVar2 * 8);
      piVar11 = param_1;
      if (dVar15 <= dVar17) {
        iVar7 = iVar2;
        if (dVar16 < dVar17) {
          lVar10 = (long)iVar1;
          *piVar8 = iVar2;
          *piVar9 = iVar1;
          lVar13 = lVar10;
          piVar14 = piVar8;
          iVar7 = iVar1;
          if (dVar16 < dVar15) goto LAB_109452824;
        }
        iVar6 = param_2[-1];
        if (*(double *)(lVar5 + lVar10 * 8) <= *(double *)(lVar5 + (long)iVar6 * 8)) {
          return true;
        }
      }
      else {
        lVar13 = (long)iVar6;
        piVar14 = piVar9;
        iVar7 = iVar6;
        if (dVar17 <= dVar16) {
          *param_1 = iVar1;
          param_1[1] = iVar6;
          piVar11 = piVar8;
          if (dVar15 <= dVar16) {
            iVar6 = param_2[-1];
            iVar7 = iVar2;
            if (*(double *)(lVar5 + lVar10 * 8) <= *(double *)(lVar5 + (long)iVar6 * 8)) {
              return true;
            }
            goto LAB_10945285c;
          }
        }
LAB_109452824:
        *piVar11 = iVar2;
        *piVar14 = iVar6;
        iVar6 = param_2[-1];
        if (*(double *)(lVar5 + lVar13 * 8) <= *(double *)(lVar5 + (long)iVar6 * 8)) {
          return true;
        }
      }
LAB_10945285c:
      *piVar9 = iVar6;
      param_2[-1] = iVar7;
      iVar6 = *piVar9;
      iVar1 = *piVar8;
      dVar15 = *(double *)(lVar5 + (long)iVar6 * 8);
      if (*(double *)(lVar5 + (long)iVar1 * 8) <= dVar15) {
        return true;
      }
      param_1[1] = iVar6;
      param_1[2] = iVar1;
      iVar1 = *param_1;
      if (dVar15 < *(double *)(lVar5 + (long)iVar1 * 8)) {
        *param_1 = iVar6;
        param_1[1] = iVar1;
        return true;
      }
      return true;
    }
    if (uVar4 == 5) {
      FUN_109452384(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,*param_3);
      return true;
    }
  }
  piVar8 = param_1 + 2;
  iVar6 = *piVar8;
  piVar9 = param_1 + 1;
  iVar1 = *piVar9;
  lVar5 = *param_3;
  dVar17 = *(double *)(lVar5 + (long)iVar1 * 8);
  iVar2 = *param_1;
  dVar15 = *(double *)(lVar5 + (long)iVar2 * 8);
  dVar16 = *(double *)(lVar5 + (long)iVar6 * 8);
  piVar11 = param_1;
  if (dVar15 <= dVar17) {
    if (dVar17 <= dVar16) goto LAB_109452720;
    *piVar9 = iVar6;
    *piVar8 = iVar1;
    piVar14 = piVar9;
joined_r0x000109452714:
    if (dVar15 <= dVar16) goto LAB_109452720;
  }
  else {
    piVar14 = piVar8;
    if (dVar17 <= dVar16) {
      *param_1 = iVar1;
      param_1[1] = iVar2;
      piVar11 = piVar9;
      goto joined_r0x000109452714;
    }
  }
  *piVar11 = iVar6;
  *piVar14 = iVar2;
LAB_109452720:
  if (param_1 + 3 != param_2) {
    iVar6 = 0;
    lVar10 = 0xc;
    piVar11 = param_1 + 3;
    do {
      piVar9 = piVar11;
      iVar1 = *piVar9;
      lVar12 = (long)*piVar8;
      dVar15 = *(double *)(lVar5 + (long)iVar1 * 8);
      lVar13 = lVar10;
      if (dVar15 < *(double *)(lVar5 + lVar12 * 8)) {
        do {
          *(int *)((long)param_1 + lVar13) = (int)lVar12;
          lVar3 = lVar13 + -4;
          if (lVar3 == 0) {
            *param_1 = iVar1;
            goto joined_r0x000109452744;
          }
          lVar12 = (long)*(int *)((long)param_1 + lVar13 + -8);
          lVar13 = lVar3;
        } while (dVar15 < *(double *)(lVar5 + lVar12 * 8));
        *(int *)((long)param_1 + lVar3) = iVar1;
joined_r0x000109452744:
        iVar6 = iVar6 + 1;
        if (iVar6 == 8) {
          return piVar9 + 1 == param_2;
        }
      }
      lVar10 = lVar10 + 4;
      piVar11 = piVar9 + 1;
      piVar8 = piVar9;
    } while (piVar9 + 1 != param_2);
  }
  return true;
}



/* Entry: 1094528d0; end: 109452983;  */

undefined8 * FUN_1094528d0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[1];
    puVar2 = puVar4;
    if (puVar5 != puVar4) {
      do {
        puVar2 = puVar5 + -5;
        plVar6 = (long *)*puVar2;
        if (plVar6 != (long *)0x0) {
          plVar3 = (long *)puVar5[-4];
          plVar1 = plVar6;
          if (plVar3 != plVar6) {
            do {
              plVar1 = plVar3 + -3;
              if (*plVar1 != 0) {
                plVar3[-2] = *plVar1;
                __ZdlPv();
              }
              plVar3 = plVar1;
            } while (plVar1 != plVar6);
            plVar1 = (long *)*puVar2;
          }
          puVar5[-4] = plVar6;
          __ZdlPv(plVar1);
        }
        puVar5 = puVar2;
      } while (puVar2 != puVar4);
      puVar2 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar4;
    __ZdlPv(puVar2);
  }
  return param_1;
}



/* Entry: 109452984; end: 109452ac3;  */

void FUN_109452984(long *param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  undefined1 uStack_38;
  
  *(int *)(param_1 + 4) = param_2;
  *(int *)((long)param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 3) = 1;
  *(int *)((long)param_1 + 0x1c) = param_2;
  param_3 = param_3 * param_2;
  lStack_58 = 0;
  lStack_50 = 0;
  plStack_40 = &lStack_58;
  lStack_48 = 0;
  uStack_38 = 0;
  if (param_3 == 0) {
    lStack_50 = 0;
    plVar7 = (long *)*param_1;
    lVar8 = 0;
    lVar4 = 0;
    lVar1 = lStack_58;
    lVar2 = lStack_48;
  }
  else {
    if (param_3 < 0) {
      FUN_109452bbc();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x109452ab0);
      (*pcVar3)();
    }
    lVar4 = (long)param_3 * 0x18;
    __Znwm();
    lVar8 = lVar4 + (long)param_3 * 0x18;
    lStack_58 = lVar4;
    lStack_48 = lVar8;
    _bzero();
    lStack_50 = lVar4 + (((long)param_3 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
    plVar7 = (long *)*param_1;
    lVar1 = lStack_58;
    lVar2 = lStack_48;
  }
  lStack_58 = lVar4;
  lStack_48 = lVar8;
  if (plVar7 != (long *)0x0) {
    plVar6 = (long *)param_1[1];
    plVar5 = plVar7;
    lStack_58 = lVar1;
    lStack_48 = lVar2;
    if (plVar6 != plVar7) {
      do {
        plVar5 = plVar6 + -3;
        if (*plVar5 != 0) {
          plVar6[-2] = *plVar5;
          __ZdlPv();
        }
        plVar6 = plVar5;
      } while (plVar5 != plVar7);
      plVar5 = (long *)*param_1;
    }
    param_1[1] = (long)plVar7;
    __ZdlPv(plVar5);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = lStack_58;
  param_1[1] = lStack_50;
  param_1[2] = lStack_48;
  return;
}



/* Entry: 109452ac4; end: 109452bbb;  */

undefined8 * FUN_109452ac4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[1];
    plVar1 = plVar3;
    if (plVar2 != plVar3) {
      do {
        plVar1 = plVar2 + -3;
        if (*plVar1 != 0) {
          plVar2[-2] = *plVar1;
          __ZdlPv();
        }
        plVar2 = plVar1;
      } while (plVar1 != plVar3);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar3;
    __ZdlPv(plVar1);
  }
  return param_1;
}



/* Entry: 109452bbc; end: 109452bcf;  */

long * FUN_109452bbc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar1 = (undefined8 *)plVar3[1];
  puVar6 = (undefined8 *)plVar3[2];
  while (puVar2 = puVar6, puVar2 != puVar1) {
    puVar6 = puVar2 + -5;
    plVar7 = (long *)*puVar6;
    plVar3[2] = (long)puVar6;
    if (plVar7 != (long *)0x0) {
      plVar5 = (long *)puVar2[-4];
      plVar4 = plVar7;
      if (plVar5 != plVar7) {
        do {
          plVar4 = plVar5 + -3;
          if (*plVar4 != 0) {
            plVar5[-2] = *plVar4;
            __ZdlPv();
          }
          plVar5 = plVar4;
        } while (plVar4 != plVar7);
        plVar4 = (long *)*puVar6;
      }
      puVar2[-4] = plVar7;
      __ZdlPv(plVar4);
      puVar6 = (undefined8 *)plVar3[2];
    }
  }
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 109452bd0; end: 109452c7f;  */

long * FUN_109452bd0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar5 = (undefined8 *)param_1[2];
  while (puVar2 = puVar5, puVar2 != puVar1) {
    puVar5 = puVar2 + -5;
    plVar6 = (long *)*puVar5;
    param_1[2] = (long)puVar5;
    if (plVar6 != (long *)0x0) {
      plVar4 = (long *)puVar2[-4];
      plVar3 = plVar6;
      if (plVar4 != plVar6) {
        do {
          plVar3 = plVar4 + -3;
          if (*plVar3 != 0) {
            plVar4[-2] = *plVar3;
            __ZdlPv();
          }
          plVar4 = plVar3;
        } while (plVar3 != plVar6);
        plVar3 = (long *)*puVar5;
      }
      puVar2[-4] = plVar6;
      __ZdlPv(plVar3);
      puVar5 = (undefined8 *)param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109452c80; end: 109452ccf;  */

void FUN_109452c80(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4,
                  int param_5)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uStack_98;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  puVar5 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar5[2] = *param_3;
  uVar17 = param_3[2];
  puVar5[5] = param_3[3];
  puVar5[4] = uVar17;
  uVar17 = param_3[4];
  puVar5[7] = param_3[5];
  puVar5[6] = uVar17;
  uVar17 = param_3[6];
  puVar5[9] = param_3[7];
  puVar5[8] = uVar17;
  uVar17 = param_3[8];
  puVar5[0xb] = param_3[9];
  puVar5[10] = uVar17;
  *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(param_3 + 10);
  puVar6 = (undefined8 *)param_3[0xb];
  lVar7 = param_3[0xc];
  if (puVar5[0xe] != lVar7) {
    FUN_10942c088(puVar5 + 0xd,lVar7,1);
    lVar7 = puVar5[0xe];
  }
  puVar9 = (undefined8 *)puVar5[0xd];
  uVar10 = lVar7 - (lVar7 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar7) {
    lVar12 = 0;
    puVar13 = puVar9;
    puVar14 = puVar6;
    do {
      uVar17 = *puVar14;
      puVar13[1] = puVar14[1];
      *puVar13 = uVar17;
      lVar12 = lVar12 + 2;
      puVar13 = puVar13 + 2;
      puVar14 = puVar14 + 2;
    } while (lVar12 < (long)uVar10);
  }
  lVar12 = lVar7 % 2;
  if (lVar12 != 0 && lVar12 < 0 == SBORROW8(lVar7,uVar10)) {
    puVar9 = puVar9 + (lVar7 / 2) * 2;
    puVar6 = puVar6 + (lVar7 / 2) * 2;
    do {
      *puVar9 = *puVar6;
      lVar12 = lVar12 + -1;
      puVar9 = puVar9 + 1;
      puVar6 = puVar6 + 1;
    } while (lVar12 != 0);
  }
  *(char *)((long)puVar5 + 0x269) = (char)param_5;
  *puVar5 = param_1;
  if (param_5 == 0) {
    lVar12 = param_4[1];
    lVar7 = *param_4;
    if (param_4[1] != 0) {
      plVar16 = (long *)(param_4[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = *plVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar16 = (long *)puVar5[0x23];
    puVar5[0x23] = lVar12;
    puVar5[0x22] = lVar7;
    if (plVar16 != (long *)0x0) {
      plVar1 = plVar16 + 1;
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
        (**(code **)(*plVar16 + 0x10))(plVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar16);
        return;
      }
    }
  }
  else {
    uStack_98 = *param_3;
    puVar6 = (undefined8 *)0x38;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_FUN_110af63a8;
    puVar9 = puVar6 + 3;
    *puVar9 = &PTR_FUN_110af4c80;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0;
    func_0x00010938e870(puVar9,&uStack_98);
    lVar7 = puVar6[5];
    if (0 < (int)((ulong)lVar7 >> 0x20)) {
      iVar8 = 0;
      lVar12 = 0;
      lVar11 = *(long *)(*param_4 + 8);
      uVar2 = *(uint *)(*param_4 + 0x18);
      do {
        if (lVar7 << 0x20 != 0x100000000) {
          lVar7 = (lVar7 << 0x20) >> 0x20;
          puVar15 = (undefined1 *)(puVar6[4] + (long)*(int *)(puVar6 + 6) * (long)iVar8);
          do {
            *puVar15 = *(undefined1 *)(lVar11 + -2 + (long)(int)lVar12 + lVar7);
            lVar7 = lVar7 + -1;
            puVar15 = puVar15 + 1;
          } while (lVar7 != 1);
          lVar7 = puVar6[5];
        }
        iVar8 = iVar8 + 1;
        lVar12 = (long)(int)lVar12 + (ulong)uVar2;
      } while (iVar8 < (int)((ulong)lVar7 >> 0x20));
    }
    plVar16 = (long *)puVar5[0x23];
    puVar5[0x22] = puVar9;
    puVar5[0x23] = puVar6;
    if (plVar16 != (long *)0x0) {
      plVar1 = plVar16 + 1;
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
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
  }
  return;
}



/* Entry: 109452cd0; end: 109452f5f;  */

void FUN_109452cd0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,
                  int param_5)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uStack_58;
  
  param_2[2] = *param_3;
  uVar16 = param_3[2];
  param_2[5] = param_3[3];
  param_2[4] = uVar16;
  uVar16 = param_3[4];
  param_2[7] = param_3[5];
  param_2[6] = uVar16;
  uVar16 = param_3[6];
  param_2[9] = param_3[7];
  param_2[8] = uVar16;
  uVar16 = param_3[8];
  param_2[0xb] = param_3[9];
  param_2[10] = uVar16;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_3 + 10);
  puVar5 = (undefined8 *)param_3[0xb];
  lVar6 = param_3[0xc];
  if (param_2[0xe] != lVar6) {
    FUN_10942c088(param_2 + 0xd,lVar6,1);
    lVar6 = param_2[0xe];
  }
  puVar8 = (undefined8 *)param_2[0xd];
  uVar9 = lVar6 - (lVar6 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar6) {
    lVar11 = 0;
    puVar12 = puVar8;
    puVar13 = puVar5;
    do {
      uVar16 = *puVar13;
      puVar12[1] = puVar13[1];
      *puVar12 = uVar16;
      lVar11 = lVar11 + 2;
      puVar12 = puVar12 + 2;
      puVar13 = puVar13 + 2;
    } while (lVar11 < (long)uVar9);
  }
  lVar11 = lVar6 % 2;
  if (lVar11 != 0 && lVar11 < 0 == SBORROW8(lVar6,uVar9)) {
    puVar8 = puVar8 + (lVar6 / 2) * 2;
    puVar5 = puVar5 + (lVar6 / 2) * 2;
    do {
      *puVar8 = *puVar5;
      lVar11 = lVar11 + -1;
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar11 != 0);
  }
  *(char *)((long)param_2 + 0x269) = (char)param_5;
  *param_2 = param_1;
  if (param_5 == 0) {
    lVar11 = param_4[1];
    lVar6 = *param_4;
    if (param_4[1] != 0) {
      plVar15 = (long *)(param_4[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *plVar15 = *plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar15 = (long *)param_2[0x23];
    param_2[0x23] = lVar11;
    param_2[0x22] = lVar6;
    if (plVar15 != (long *)0x0) {
      plVar1 = plVar15 + 1;
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
        (**(code **)(*plVar15 + 0x10))(plVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar15);
        return;
      }
    }
  }
  else {
    uStack_58 = *param_3;
    puVar5 = (undefined8 *)0x38;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_110af63a8;
    puVar8 = puVar5 + 3;
    *puVar8 = &PTR_FUN_110af4c80;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined4 *)(puVar5 + 6) = 0;
    func_0x00010938e870(puVar8,&uStack_58);
    lVar6 = puVar5[5];
    if (0 < (int)((ulong)lVar6 >> 0x20)) {
      iVar7 = 0;
      lVar11 = 0;
      lVar10 = *(long *)(*param_4 + 8);
      uVar2 = *(uint *)(*param_4 + 0x18);
      do {
        if (lVar6 << 0x20 != 0x100000000) {
          lVar6 = (lVar6 << 0x20) >> 0x20;
          puVar14 = (undefined1 *)(puVar5[4] + (long)*(int *)(puVar5 + 6) * (long)iVar7);
          do {
            *puVar14 = *(undefined1 *)(lVar10 + -2 + (long)(int)lVar11 + lVar6);
            lVar6 = lVar6 + -1;
            puVar14 = puVar14 + 1;
          } while (lVar6 != 1);
          lVar6 = puVar5[5];
        }
        iVar7 = iVar7 + 1;
        lVar11 = (long)(int)lVar11 + (ulong)uVar2;
      } while (iVar7 < (int)((ulong)lVar6 >> 0x20));
    }
    plVar15 = (long *)param_2[0x23];
    param_2[0x22] = puVar8;
    param_2[0x23] = puVar5;
    if (plVar15 != (long *)0x0) {
      plVar1 = plVar15 + 1;
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
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
  }
  return;
}



/* Entry: 109452f60; end: 109452fb7;  */

long FUN_109452f60(long param_1)

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



/* Entry: 109452fb8; end: 109452fc7;  */

void FUN_109452fb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af63a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109452fc8; end: 109452fe7;  */

void FUN_109452fc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af63a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109452fe8; end: 109452ff7;  */

void FUN_109452fe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109452ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109452ff8; end: 10945311b;  */

undefined8 *
FUN_109452ff8(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar6 = param_4[1];
  uVar5 = *param_4;
  param_1[0xe] = 0;
  param_1[0xc] = uVar6;
  param_1[0xb] = uVar5;
  *(undefined4 *)(param_1 + 0xd) = param_3;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uVar2 = 0x1571;
  *(undefined4 *)(param_1 + 0x11) = 0x1571;
  iVar3 = 1;
  lVar4 = 0x23;
  do {
    iVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965;
    uVar2 = iVar1 + iVar3;
    *(int *)((long)param_1 + lVar4 * 4) = (int)lVar4 + iVar1 + -0x22;
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x292);
  param_1[0x149] = 0;
  uVar2 = 0x4d2;
  *(undefined4 *)(param_1 + 0x11) = 0x4d2;
  iVar3 = 1;
  lVar4 = 0x23;
  do {
    iVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965;
    uVar2 = iVar1 + iVar3;
    *(int *)((long)param_1 + lVar4 * 4) = (int)lVar4 + iVar1 + -0x22;
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x292);
  param_1[0x149] = 0;
  FUN_10945311c(param_1);
  return param_1;
}



/* Entry: 10945311c; end: 1094533d7;  */

long * FUN_10945311c(long *param_1,long *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  int *piVar23;
  undefined4 *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  int *piVar24;
  
  lVar17 = *param_2;
  lVar20 = param_2[1];
  lVar15 = lVar20 - lVar17;
  if (lVar15 == 0) goto LAB_1094533a8;
  uVar12 = lVar15 >> 2;
  plVar8 = param_1 + 3;
  lVar27 = *plVar8;
  plVar9 = (long *)param_1[4];
  uVar22 = (long)plVar9 - lVar27 >> 2;
  if (uVar22 < uVar12) {
    uVar22 = uVar12 - uVar22;
    if ((ulong)(param_1[5] - (long)plVar9 >> 2) < uVar22) {
      if (uVar12 >> 0x3e != 0) {
        FUN_109453a2c();
        plVar7 = param_1;
        plVar10 = param_2;
        goto LAB_1094533d4;
      }
      uVar19 = param_1[5] - lVar27;
      uVar21 = (long)uVar19 >> 1;
      if (uVar21 <= uVar12) {
        uVar21 = uVar12;
      }
      if (0x7ffffffffffffffb < uVar19) {
        uVar21 = 0x3fffffffffffffff;
      }
      plVar6 = plVar8;
      FUN_109453a40();
      plVar10 = (long *)param_1[3];
      lVar16 = param_1[4];
      lVar15 = (long)plVar6 + ((long)plVar9 - lVar27);
      _memset(lVar15,0xff,uVar22 * 4);
      lVar27 = lVar15 - (lVar16 - (long)plVar10);
      _memcpy(lVar27,plVar10,lVar16 - (long)plVar10);
      plVar7 = (long *)param_1[3];
      param_1[3] = lVar27;
      param_1[4] = lVar15 + uVar22 * 4;
      param_1[5] = (long)plVar6 + uVar21 * 4;
      if (plVar7 != (long *)0x0) {
        __ZdlPv();
      }
    }
    else {
      plVar10 = (long *)0xff;
      plVar7 = plVar9;
      _memset(plVar9,0xff,uVar22 * 4);
      lVar27 = (long)plVar9 + uVar22 * 4;
LAB_109453230:
      param_1[4] = lVar27;
    }
  }
  else {
    plVar7 = param_1;
    plVar10 = param_2;
    if (uVar12 < uVar22) {
      lVar27 = lVar27 + lVar15;
      goto LAB_109453230;
    }
  }
  piVar14 = (int *)*param_2;
  piVar1 = (int *)param_2[1];
  if ((piVar14 != piVar1) && (piVar14 + 1 != piVar1)) {
    piVar13 = piVar14;
    piVar23 = piVar14 + 1;
    iVar11 = *piVar14;
    do {
      piVar24 = piVar23 + 1;
      iVar4 = *piVar23;
      iVar18 = iVar11;
      if (iVar11 <= iVar4) {
        iVar18 = iVar4;
      }
      piVar14 = piVar23;
      if (iVar4 <= iVar11) {
        piVar14 = piVar13;
      }
      piVar13 = piVar14;
      piVar23 = piVar24;
      iVar11 = iVar18;
    } while (piVar24 != piVar1);
  }
  uVar12 = (long)*piVar14 + 1;
  lVar27 = *param_1;
  lVar15 = param_1[1];
  uVar22 = lVar15 - lVar27 >> 2;
  if (uVar22 < uVar12) {
    uVar22 = uVar12 - uVar22;
    if ((ulong)(param_1[2] - lVar15 >> 2) < uVar22) {
      if (*piVar14 < -1) {
LAB_1094533d4:
        FUN_1094539e4();
        lVar17 = *plVar7;
        if ((long *)(plVar7[2] - lVar17 >> 3) < plVar10) {
          if ((ulong)plVar10 >> 0x3d != 0) {
            FUN_10945399c();
            puVar2 = (undefined4 *)plVar7[0xf];
            plVar9 = plVar7;
            for (puVar25 = (undefined4 *)plVar7[0xe]; puVar25 != puVar2; puVar25 = puVar25 + 2) {
              plVar9 = plVar7;
              FUN_109453590(plVar7,*puVar25,puVar25[1]);
            }
            iVar11 = (int)plVar7[0xd] + -1;
            iVar18 = (int)((1.0 - (double)plVar7[0xb]) * (double)(int)plVar7[0xd] + 0.5);
            if (iVar18 <= iVar11) {
              iVar11 = iVar18;
            }
            iVar18 = (int)plVar7[9] - iVar11;
            if (iVar18 != 0 && iVar11 <= (int)plVar7[9]) {
              do {
                if ((int)plVar7[9] < 1) break;
                plVar9 = plVar7 + 0x11;
                func_0x000107c284a0();
                uVar3 = *(uint *)(plVar7 + 9);
                uVar5 = 0;
                if (uVar3 != 0) {
                  uVar5 = (uint)plVar9 / uVar3;
                }
                uVar3 = (uint)plVar9 - uVar5 * uVar3;
                if (-1 < (int)uVar3) {
                  plVar9 = plVar7;
                  func_0x0001094536b8(plVar7,*(undefined4 *)(plVar7[3] + (ulong)uVar3 * 4));
                }
                iVar18 = iVar18 + -1;
              } while (iVar18 != 0);
            }
            iVar11 = (int)((double)plVar7[0xc] *
                           (double)((int)((ulong)(plVar7[4] - plVar7[3]) >> 2) -
                                   *(int *)((long)plVar7 + 0x4c)) + 0.5);
            if (iVar11 < 2) {
              iVar11 = 1;
            }
            do {
              if ((int)((ulong)(plVar7[4] - plVar7[3]) >> 2) - *(int *)((long)plVar7 + 0x4c) < 1) {
                return plVar9;
              }
              plVar9 = plVar7;
              func_0x0001094535e4(plVar7,2);
              if (-1 < (int)plVar9) {
                uVar12 = (ulong)plVar9 & 0xffffffff;
                plVar9 = plVar7;
                func_0x000109453740(plVar7,*(undefined4 *)(plVar7[3] + uVar12 * 4));
              }
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
            return plVar9;
          }
          lVar20 = plVar7[1];
          plVar9 = plVar7;
          FUN_1094539b0();
          lVar17 = (long)plVar9 + (lVar20 - lVar17);
          lVar20 = lVar17 - (plVar7[1] - *plVar7);
          _memcpy(lVar20);
          plVar8 = (long *)*plVar7;
          *plVar7 = lVar20;
          plVar7[1] = lVar17;
          plVar7[2] = (long)(plVar9 + (long)plVar10);
          plVar7 = (long *)0x0;
          if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)();
            return plVar8;
          }
        }
        return plVar7;
      }
      uVar19 = param_1[2] - lVar27;
      uVar21 = (long)uVar19 >> 1;
      if (uVar21 <= uVar12) {
        uVar21 = uVar12;
      }
      if (0x7ffffffffffffffb < uVar19) {
        uVar21 = 0x3fffffffffffffff;
      }
      plVar9 = param_1;
      FUN_1094539f8();
      lVar16 = *param_1;
      lVar26 = param_1[1] - lVar16;
      lVar15 = (long)plVar9 + (lVar15 - lVar27);
      _memset(lVar15,0xff,uVar22 * 4);
      lVar28 = lVar15 - lVar26;
      _memcpy(lVar28,lVar16,lVar26);
      lVar27 = *param_1;
      *param_1 = lVar28;
      param_1[1] = lVar15 + uVar22 * 4;
      param_1[2] = (long)plVar9 + uVar21 * 4;
      if (lVar27 != 0) {
        __ZdlPv();
      }
    }
    else {
      _memset(lVar15,0xff,uVar22 * 4);
      lVar15 = lVar15 + uVar22 * 4;
LAB_10945334c:
      param_1[1] = lVar15;
    }
  }
  else if (uVar12 < uVar22) {
    lVar15 = lVar27 + uVar12 * 4;
    goto LAB_10945334c;
  }
  lVar15 = *param_2;
  lVar16 = *plVar8;
  lVar27 = param_2[1] - lVar15;
  if (lVar27 != 0) {
    uVar12 = 0;
    lVar26 = *param_1;
    do {
      iVar11 = *(int *)(lVar15 + uVar12 * 4);
      *(int *)(lVar16 + uVar12 * 4) = iVar11;
      *(int *)(lVar26 + (long)iVar11 * 4) = (int)uVar12;
      uVar12 = uVar12 + 1;
    } while ((uVar12 & 0xffffffff) < (ulong)(lVar27 >> 2));
  }
  *(undefined4 *)(param_1 + 9) = 0;
  *(int *)((long)param_1 + 0x4c) = (int)((ulong)(param_1[4] - lVar16) >> 2);
  *(undefined4 *)(param_1 + 0xd) = param_3;
  if (param_1 + 6 != param_2) {
    FUN_10928555c();
  }
LAB_1094533a8:
  return (long *)(ulong)(lVar20 != lVar17);
}



/* Entry: 1094533d8; end: 109453463;  */

void FUN_1094533d8(long *param_1,ulong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  
  lVar7 = *param_1;
  if ((ulong)(param_1[2] - lVar7 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      FUN_10945399c();
      puVar1 = (undefined4 *)param_1[0xf];
      for (puVar11 = (undefined4 *)param_1[0xe]; puVar11 != puVar1; puVar11 = puVar11 + 2) {
        FUN_109453590(param_1,*puVar11,puVar11[1]);
      }
      iVar6 = (int)param_1[0xd] + -1;
      iVar8 = (int)((1.0 - (double)param_1[0xb]) * (double)(int)param_1[0xd] + 0.5);
      if (iVar8 <= iVar6) {
        iVar6 = iVar8;
      }
      iVar8 = (int)param_1[9] - iVar6;
      if (iVar8 != 0 && iVar6 <= (int)param_1[9]) {
        do {
          if ((int)param_1[9] < 1) break;
          uVar4 = (int)param_1 + 0x88;
          func_0x000107c284a0();
          uVar2 = *(uint *)(param_1 + 9);
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar4 / uVar2;
          }
          uVar4 = uVar4 - uVar3 * uVar2;
          if (-1 < (int)uVar4) {
            func_0x0001094536b8(param_1,*(undefined4 *)(param_1[3] + (ulong)uVar4 * 4));
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      iVar6 = (int)((double)param_1[0xc] *
                    (double)((int)((ulong)(param_1[4] - param_1[3]) >> 2) -
                            *(int *)((long)param_1 + 0x4c)) + 0.5);
      if (iVar6 < 2) {
        iVar6 = 1;
      }
      do {
        if ((int)((ulong)(param_1[4] - param_1[3]) >> 2) - *(int *)((long)param_1 + 0x4c) < 1) {
          return;
        }
        plVar5 = param_1;
        func_0x0001094535e4(param_1,2);
        if (-1 < (int)plVar5) {
          func_0x000109453740(param_1,*(undefined4 *)(param_1[3] + ((ulong)plVar5 & 0xffffffff) * 4)
                             );
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return;
    }
    lVar9 = param_1[1];
    plVar5 = param_1;
    FUN_1094539b0();
    lVar7 = (long)plVar5 + (lVar9 - lVar7);
    lVar10 = lVar7 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    lVar9 = *param_1;
    *param_1 = lVar10;
    param_1[1] = lVar7;
    param_1[2] = (long)(plVar5 + param_2);
    if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 109453464; end: 10945358f;  */

void FUN_109453464(ulong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  puVar1 = *(undefined4 **)(param_1 + 0x78);
  for (puVar8 = *(undefined4 **)(param_1 + 0x70); puVar8 != puVar1; puVar8 = puVar8 + 2) {
    FUN_109453590(param_1,*puVar8,puVar8[1]);
  }
  iVar6 = *(int *)(param_1 + 0x68) + -1;
  iVar7 = (int)((1.0 - *(double *)(param_1 + 0x58)) * (double)*(int *)(param_1 + 0x68) + 0.5);
  if (iVar7 <= iVar6) {
    iVar6 = iVar7;
  }
  iVar7 = *(int *)(param_1 + 0x48) - iVar6;
  if (iVar7 != 0 && iVar6 <= *(int *)(param_1 + 0x48)) {
    do {
      if (*(int *)(param_1 + 0x48) < 1) break;
      uVar4 = (int)param_1 + 0x88;
      func_0x000107c284a0();
      uVar2 = *(uint *)(param_1 + 0x48);
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar4 / uVar2;
      }
      uVar4 = uVar4 - uVar3 * uVar2;
      if (-1 < (int)uVar4) {
        func_0x0001094536b8(param_1,*(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)uVar4 * 4));
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar6 = (int)(*(double *)(param_1 + 0x60) *
                (double)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 2)
                        - *(int *)(param_1 + 0x4c)) + 0.5);
  if (iVar6 < 2) {
    iVar6 = 1;
  }
  do {
    if ((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 2) -
        *(int *)(param_1 + 0x4c) < 1) {
      return;
    }
    uVar5 = param_1;
    func_0x0001094535e4(param_1,2);
    if (-1 < (int)uVar5) {
      func_0x000109453740(param_1,*(undefined4 *)
                                   (*(long *)(param_1 + 0x18) + (uVar5 & 0xffffffff) * 4));
    }
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



/* Entry: 109453590; end: 1094535e3;  */

void FUN_109453590(long *param_1,int param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uStack_28;
  
  iVar8 = *(int *)(*param_1 + (long)param_2 * 4);
  if (iVar8 < (int)param_1[9]) {
    if ((param_3 != 0) && (param_3 != 2)) {
      return;
    }
  }
  else {
    if (*(int *)((long)param_1 + 0x4c) <= iVar8) {
      return;
    }
    if (param_3 == 0) goto LAB_1094537bc;
    if (param_3 != 2) {
      if (param_3 != 1) {
        return;
      }
      iVar8 = *(int *)(*param_1 + (long)param_2 * 4);
      if (iVar8 < (int)param_1[9]) {
        return;
      }
      if (iVar8 < *(int *)((long)param_1 + 0x4c)) {
        FUN_109453830();
        *(int *)(param_1 + 9) = (int)param_1[9] + 1;
      }
      else {
        FUN_109453830(param_1,iVar8,*(int *)((long)param_1 + 0x4c));
        *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + 1;
      }
      goto LAB_1094537bc;
    }
  }
  iVar8 = *(int *)(*param_1 + (long)param_2 * 4);
  if (iVar8 < (int)param_1[9]) {
    FUN_109453830(param_1,iVar8,(int)param_1[9] + -1);
    *(int *)(param_1 + 9) = (int)param_1[9] + -1;
  }
  else {
    if (*(int *)((long)param_1 + 0x4c) <= iVar8) {
      return;
    }
    FUN_109453830(param_1,iVar8,*(int *)((long)param_1 + 0x4c) + -1);
    *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + -1;
  }
LAB_1094537bc:
  iVar8 = *(int *)(*param_1 + (long)param_2 * 4);
  if (iVar8 < (int)param_1[9]) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
    if (*(int *)((long)param_1 + 0x4c) <= iVar8) {
      uVar7 = 2;
    }
  }
  plVar4 = param_1;
  FUN_1094535e4(param_1,uVar7);
  uVar3 = (uint)plVar4;
  if ((int)uVar3 < 0) {
    return;
  }
  uVar2 = *(uint *)(*param_1 + (long)param_2 * 4);
  uVar6 = (ulong)uVar2;
  if ((-1 < (int)(uVar3 | uVar2)) &&
     (lVar1 = param_1[3], iVar8 = (int)((ulong)(param_1[4] - lVar1) >> 2),
     (int)uVar2 < iVar8 && (int)uVar3 < iVar8)) {
    lVar9 = (long)*(int *)(lVar1 + (ulong)uVar2 * 4);
    lVar10 = *param_1;
    lVar11 = (long)*(int *)(lVar1 + ((ulong)plVar4 & 0xffffffff) * 4);
    uVar7 = *(undefined4 *)(lVar10 + lVar9 * 4);
    *(undefined4 *)(lVar10 + lVar9 * 4) = *(undefined4 *)(lVar10 + lVar11 * 4);
    *(undefined4 *)(lVar10 + lVar11 * 4) = uVar7;
    uVar7 = *(undefined4 *)(lVar1 + (ulong)uVar2 * 4);
    *(undefined4 *)(lVar1 + (ulong)uVar2 * 4) =
         *(undefined4 *)(lVar1 + ((ulong)plVar4 & 0xffffffff) * 4);
    *(undefined4 *)(lVar1 + ((ulong)plVar4 & 0xffffffff) * 4) = uVar7;
    return;
  }
  plVar5 = (long *)&UNK_10f56da5a;
  FUN_1093fd0ac();
  if ((-1 < (int)uVar6) && ((int)uVar6 < (int)((ulong)(plVar5[1] - *plVar5) >> 2))) {
    uStack_28 = uVar6 & 0xffffffff | (long)plVar4 << 0x20;
    FUN_1094538d8(plVar5 + 0xe,&uStack_28);
  }
  return;
}



/* Entry: 1094535e4; end: 10945382f;  */

int FUN_1094535e4(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 == 2) {
    iVar5 = (int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 2) -
            *(int *)(param_1 + 0x4c);
  }
  else if (param_2 == 1) {
    iVar5 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48);
  }
  else {
    if (param_2 != 0) {
      return -1;
    }
    iVar5 = *(int *)(param_1 + 0x48);
  }
  if (iVar5 < 1) {
    return -1;
  }
  if (param_2 == 2) {
    iVar5 = *(int *)(param_1 + 0x4c);
    lVar3 = param_1 + 0x88;
    func_0x000107c284a0(lVar3);
    uVar2 = (uint)lVar3;
    uVar4 = (int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 2) -
            *(int *)(param_1 + 0x4c);
  }
  else {
    if (param_2 != 1) {
      lVar3 = param_1 + 0x88;
      func_0x000107c284a0(lVar3);
      uVar4 = *(uint *)(param_1 + 0x48);
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = (uint)lVar3 / uVar4;
      }
      return (uint)lVar3 - uVar2 * uVar4;
    }
    iVar5 = *(int *)(param_1 + 0x48);
    lVar3 = param_1 + 0x88;
    func_0x000107c284a0(lVar3);
    uVar2 = (uint)lVar3;
    uVar4 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48);
  }
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = uVar2 / uVar4;
  }
  return (uVar2 - uVar1 * uVar4) + iVar5;
}



/* Entry: 109453830; end: 1094538d7;  */

void FUN_109453830(long *param_1,ulong param_2,uint param_3)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if ((-1 < (int)(param_3 | (uint)param_2)) &&
     (lVar1 = param_1[3], iVar4 = (int)((ulong)(param_1[4] - lVar1) >> 2),
     (int)(uint)param_2 < iVar4 && (int)param_3 < iVar4)) {
    lVar5 = (long)*(int *)(lVar1 + (param_2 & 0xffffffff) * 4);
    lVar6 = *param_1;
    lVar7 = (long)*(int *)(lVar1 + (ulong)param_3 * 4);
    uVar2 = *(undefined4 *)(lVar6 + lVar5 * 4);
    *(undefined4 *)(lVar6 + lVar5 * 4) = *(undefined4 *)(lVar6 + lVar7 * 4);
    *(undefined4 *)(lVar6 + lVar7 * 4) = uVar2;
    uVar2 = *(undefined4 *)(lVar1 + (param_2 & 0xffffffff) * 4);
    *(undefined4 *)(lVar1 + (param_2 & 0xffffffff) * 4) =
         *(undefined4 *)(lVar1 + (ulong)param_3 * 4);
    *(undefined4 *)(lVar1 + (ulong)param_3 * 4) = uVar2;
    return;
  }
  plVar3 = (long *)&UNK_10f56da5a;
  FUN_1093fd0ac();
  if ((-1 < (int)param_2) && ((int)param_2 < (int)((ulong)(plVar3[1] - *plVar3) >> 2))) {
    uStack_18 = 0x109453894;
    uStack_28 = param_2 & 0xffffffff | (ulong)param_3 << 0x20;
    puStack_20 = &stack0xfffffffffffffff0;
    FUN_1094538d8(plVar3 + 0xe,&uStack_28);
  }
  return;
}



/* Entry: 1094538d8; end: 10945399b;  */

void FUN_1094538d8(long *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auStack_120 [64];
  undefined8 *puStack_e0;
  long *plStack_d8;
  undefined1 **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined8 *puStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < (undefined8 *)param_1[2]) {
    puVar9 = puVar4 + 1;
    *puVar4 = *param_2;
  }
  else {
    lVar8 = (long)puVar4 - *param_1;
    uVar1 = (lVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      puVar4 = param_2;
      FUN_10945399c();
      pcStack_38 = FUN_10945399c;
      puStack_40 = &stack0xfffffffffffffff0;
      func_0x000104c4f6cc(&UNK_10f56da9a);
      pcStack_48 = FUN_1094539b0;
      puStack_60 = param_2;
      plStack_58 = param_1;
      if ((ulong)puVar4 >> 0x3d == 0) {
        puStack_50 = (undefined1 *)&puStack_40;
        __Znwm((long)puVar4 << 3);
        return;
      }
      puStack_50 = (undefined1 *)&puStack_40;
      func_0x000104c4f740();
      pcStack_68 = FUN_1094539e4;
      ppuStack_70 = &puStack_50;
      func_0x000104c4f6cc(&UNK_10f56da9a);
      pcStack_78 = FUN_1094539f8;
      ppuStack_a0 = &puStack_80;
      puStack_90 = param_2;
      plStack_88 = param_1;
      if ((ulong)puVar4 >> 0x3e == 0) {
        puStack_80 = (undefined1 *)&ppuStack_70;
        __Znwm((long)puVar4 << 2);
        return;
      }
      puStack_80 = (undefined1 *)&ppuStack_70;
      func_0x000104c4f740();
      pcStack_98 = FUN_109453a2c;
      func_0x000104c4f6cc(&UNK_10f56da9a);
      pcStack_a8 = FUN_109453a40;
      ppuStack_d0 = &puStack_b0;
      puStack_c0 = param_2;
      plStack_b8 = param_1;
      if ((ulong)puVar4 >> 0x3e == 0) {
        puStack_b0 = (undefined1 *)&ppuStack_a0;
        __Znwm((long)puVar4 << 2);
        return;
      }
      puStack_b0 = (undefined1 *)&ppuStack_a0;
      func_0x000104c4f740();
      lVar8 = param_3[1] - *param_3;
      if (lVar8 != 0) {
        uStack_c8 = 0x109453a74;
        puStack_e0 = param_2;
        plStack_d8 = param_1;
        if (lVar8 == -1) {
          FUN_109453afc(auStack_120);
          FUN_109453bdc(auStack_120);
        }
        else {
          FUN_109453afc(auStack_120);
          do {
            puVar3 = auStack_120;
            FUN_109453bdc();
          } while ((undefined1 *)(lVar8 + 1U) <= puVar3);
        }
      }
      return;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    plVar2 = param_1;
    FUN_1094539b0();
    puVar4 = (undefined8 *)((long)plVar2 + lVar8);
    puVar9 = puVar4 + 1;
    *puVar4 = *param_2;
    lVar7 = (long)puVar4 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lVar8 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar9;
    param_1[2] = (long)(plVar2 + uVar6);
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return;
}



/* Entry: 10945399c; end: 1094539af;  */

void FUN_10945399c(undefined8 param_1,ulong param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_f0 [64];
  
  func_0x000104c4f6cc(&UNK_10f56da9a);
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  func_0x000104c4f6cc(&UNK_10f56da9a);
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104c4f740();
  func_0x000104c4f6cc(&UNK_10f56da9a);
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104c4f740();
  lVar1 = param_3[1] - *param_3;
  if (lVar1 != 0) {
    if (lVar1 == -1) {
      FUN_109453afc(auStack_f0);
      FUN_109453bdc(auStack_f0);
    }
    else {
      FUN_109453afc(auStack_f0);
      do {
        puVar2 = auStack_f0;
        FUN_109453bdc();
      } while ((undefined1 *)(lVar1 + 1U) <= puVar2);
    }
  }
  return;
}



/* Entry: 1094539b0; end: 1094539e3;  */

void FUN_1094539b0(undefined8 param_1,ulong param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_e0 [64];
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  func_0x000104c4f6cc(&UNK_10f56da9a);
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104c4f740();
  func_0x000104c4f6cc(&UNK_10f56da9a);
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104c4f740();
  lVar1 = param_3[1] - *param_3;
  if (lVar1 != 0) {
    if (lVar1 == -1) {
      FUN_109453afc(auStack_e0);
      FUN_109453bdc(auStack_e0);
    }
    else {
      FUN_109453afc(auStack_e0);
      do {
        puVar2 = auStack_e0;
        FUN_109453bdc();
      } while ((undefined1 *)(lVar1 + 1U) <= puVar2);
    }
  }
  return;
}



/* Entry: 1094539e4; end: 1094539f7;  */

void FUN_1094539e4(undefined8 param_1,ulong param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_c0 [64];
  
  func_0x000104c4f6cc(&UNK_10f56da9a);
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104c4f740();
  func_0x000104c4f6cc(&UNK_10f56da9a);
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104c4f740();
  lVar1 = param_3[1] - *param_3;
  if (lVar1 != 0) {
    if (lVar1 == -1) {
      FUN_109453afc(auStack_c0);
      FUN_109453bdc(auStack_c0);
    }
    else {
      FUN_109453afc(auStack_c0);
      do {
        puVar2 = auStack_c0;
        FUN_109453bdc();
      } while ((undefined1 *)(lVar1 + 1U) <= puVar2);
    }
  }
  return;
}



/* Entry: 1094539f8; end: 109453a2b;  */

void FUN_1094539f8(undefined8 param_1,ulong param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_b0 [64];
  
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104c4f740();
  func_0x000104c4f6cc(&UNK_10f56da9a);
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104c4f740();
  lVar1 = param_3[1] - *param_3;
  if (lVar1 != 0) {
    if (lVar1 == -1) {
      FUN_109453afc(auStack_b0);
      FUN_109453bdc(auStack_b0);
    }
    else {
      FUN_109453afc(auStack_b0);
      do {
        puVar2 = auStack_b0;
        FUN_109453bdc();
      } while ((undefined1 *)(lVar1 + 1U) <= puVar2);
    }
  }
  return;
}



/* Entry: 109453a2c; end: 109453a3f;  */

void FUN_109453a2c(undefined8 param_1,ulong param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_90 [64];
  
  func_0x000104c4f6cc(&UNK_10f56da9a);
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104c4f740();
  lVar1 = param_3[1] - *param_3;
  if (lVar1 != 0) {
    if (lVar1 == -1) {
      FUN_109453afc(auStack_90);
      FUN_109453bdc(auStack_90);
    }
    else {
      FUN_109453afc(auStack_90);
      do {
        puVar2 = auStack_90;
        FUN_109453bdc();
      } while ((undefined1 *)(lVar1 + 1U) <= puVar2);
    }
  }
  return;
}



/* Entry: 109453a40; end: 109453afb;  */

void FUN_109453a40(undefined8 param_1,ulong param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_80 [64];
  
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104c4f740();
  lVar1 = param_3[1] - *param_3;
  if (lVar1 != 0) {
    if (lVar1 == -1) {
      FUN_109453afc(auStack_80);
      FUN_109453bdc(auStack_80);
    }
    else {
      FUN_109453afc(auStack_80);
      do {
        puVar2 = auStack_80;
        FUN_109453bdc();
      } while ((undefined1 *)(lVar1 + 1U) <= puVar2);
    }
  }
  return;
}



/* Entry: 109453afc; end: 109453bdb;  */

void FUN_109453afc(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar4 = param_3 >> 5;
  if ((param_3 & 0x1f) != 0) {
    uVar4 = uVar4 + 1;
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = param_3 / uVar4;
  }
  param_1[2] = uVar5;
  param_1[3] = uVar4;
  uVar6 = -1L << (uVar5 & 0x3f) & 0x100000000;
  if (0x3f < uVar5) {
    uVar6 = 0;
  }
  param_1[5] = uVar6;
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = uVar6 / uVar4;
  }
  if (uVar3 < (uVar6 ^ 0x100000000)) {
    uVar4 = uVar4 + 1;
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = param_3 / uVar4;
    }
    param_1[2] = uVar5;
    param_1[3] = uVar4;
    if (0x3f < uVar5) {
      lVar7 = 0;
      param_1[4] = uVar4 + (uVar5 * uVar4 - param_3);
      param_1[5] = 0;
      goto LAB_109453bac;
    }
    param_1[5] = -1L << (uVar5 & 0x3f) & 0x100000000;
  }
  uVar6 = 0;
  if (uVar4 != 0) {
    uVar6 = param_3 / uVar4;
  }
  param_1[4] = uVar4 + (uVar6 * uVar4 - param_3);
  if (uVar5 < 0x3f) {
    lVar7 = (0x80000000UL >> (uVar5 & 0x3f)) << (uVar5 + 1 & 0x3f);
  }
  else {
    lVar7 = 0;
  }
LAB_109453bac:
  param_1[6] = lVar7;
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = 0xffffffff >> (ulong)(-(uint)uVar5 & 0x1f);
  }
  uVar2 = 0xffffffff >> (ulong)(~(uint)uVar5 & 0x1f);
  if (0x1e < uVar5) {
    uVar2 = 0xffffffff;
  }
  *(uint *)(param_1 + 7) = uVar1;
  *(uint *)((long)param_1 + 0x3c) = uVar2;
  return;
}



/* Entry: 109453bdc; end: 109453cab;  */

long FUN_109453bdc(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1[4] == 0) {
    lVar2 = 0;
    uVar1 = 0;
  }
  else {
    lVar2 = 0;
    uVar3 = 0;
    do {
      do {
        uVar1 = *param_1;
        func_0x000107c284a0();
      } while (param_1[5] <= (uVar1 & 0xffffffff));
      lVar2 = lVar2 << (param_1[2] & 0x3f);
      if (0x3f < param_1[2]) {
        lVar2 = 0;
      }
      lVar2 = lVar2 + (ulong)((uint)param_1[7] & (uint)uVar1);
      uVar3 = uVar3 + 1;
      uVar1 = param_1[4];
    } while (uVar3 < uVar1);
  }
  if (uVar1 < param_1[3]) {
    do {
      do {
        uVar3 = *param_1;
        func_0x000107c284a0();
      } while (param_1[6] <= (uVar3 & 0xffffffff));
      lVar2 = lVar2 << (param_1[2] + 1 & 0x3f);
      if (0x3e < param_1[2]) {
        lVar2 = 0;
      }
      lVar2 = lVar2 + (ulong)(*(uint *)((long)param_1 + 0x3c) & (uint)uVar3);
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_1[3]);
  }
  return lVar2;
}



/* Entry: 109453cac; end: 1094543e7;  */

undefined1  [16]
FUN_109453cac(undefined1 *param_1,double param_2,long *param_3,undefined **param_4,
             undefined **param_5,double *param_6,undefined **param_7,undefined **param_8,
             undefined **param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **ppuVar13;
  double *pdVar14;
  long lVar15;
  long *plVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  int iVar26;
  double dVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  double dVar57;
  double dVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined1 auVar61 [16];
  double dStack_3e0;
  double dStack_3d8;
  double dStack_3d0;
  undefined1 auStack_3c0 [24];
  double dStack_3a8;
  double dStack_3a0;
  double dStack_398;
  double dStack_390;
  double dStack_388;
  double dStack_380;
  double dStack_378;
  double dStack_370;
  double dStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  double dStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  double dStack_338;
  long lStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  long *plStack_308;
  undefined **ppuStack_300;
  double *pdStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  uint uStack_2cc;
  ulong uStack_2c8;
  uint uStack_2bc;
  undefined **ppuStack_2b8;
  undefined *puStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  double dStack_298;
  double dStack_290;
  double dStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined **ppuStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  double dStack_258;
  double dStack_250;
  undefined *puStack_240;
  double dStack_238;
  undefined1 auStack_228 [8];
  double dStack_220;
  double dStack_218;
  undefined *puStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  undefined8 uStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1bc;
  undefined8 uStack_1b4;
  undefined8 uStack_1ac;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  double adStack_160 [12];
  undefined *puStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = param_4;
  ppuVar13 = param_5;
  pdVar14 = param_6;
  ppuVar10 = param_7;
  FUN_10937f718(adStack_160 + 0xc,param_3 + 2);
  dStack_208 = dStack_f8;
  puStack_210 = puStack_100;
  dStack_1f8 = dStack_e8;
  dStack_200 = dStack_f0;
  dStack_1e8 = dStack_d8;
  dStack_1f0 = dStack_e0;
  dStack_1e0 = dStack_d0;
  func_0x00010937fbc4(adStack_160,&puStack_210);
  puStack_280 = param_4[1];
  puStack_278 = param_4[2];
  dVar33 = dStack_1f0 - (double)puStack_280;
  dVar36 = dStack_1e8 - (double)puStack_278;
  ppuStack_270 = (undefined **)param_4[3];
  uStack_268 = 0;
  dVar57 = dStack_1e0 - (double)ppuStack_270;
  dVar58 = dVar57 * (double)param_4[6] + dVar33 * (double)param_4[4] + dVar36 * (double)param_4[5];
  ppuVar7 = (undefined **)*param_3;
  if (ppuVar7 == (undefined **)0x0) {
    dVar27 = 0.0;
  }
  else {
    ppuVar11 = &PTR_DAT_110af63f8;
    ppuVar13 = &PTR_DAT_110af67b0;
    pdVar14 = (double *)0x0;
    dStack_290 = dVar33;
    dStack_288 = dVar36;
    ___dynamic_cast();
    dVar27 = 0.0;
    dVar33 = dStack_290;
    dVar36 = dStack_288;
    if (ppuVar7 != (undefined **)0x0) {
      dVar27 = 0.5;
    }
  }
  dVar33 = (dVar57 * dVar57 + dVar33 * dVar33 + dVar36 * dVar36) * dVar27 * dVar27;
  bVar4 = true;
  if ((0.0 <= dVar58) && (bVar4 = false, !NAN(dVar58 * dVar58) && !NAN(dVar33))) {
    bVar4 = dVar58 * dVar58 < dVar33;
  }
  if (!bVar4) {
    puStack_260 = (undefined *)
                  ((double)param_3[10] * (double)puStack_280 +
                   (double)param_3[0xd] * (double)puStack_278 +
                   (double)param_3[0x10] * (double)ppuStack_270 + (double)param_3[6]);
    dStack_258 = (double)param_3[0xb] * (double)puStack_280 +
                 (double)param_3[0xe] * (double)puStack_278 +
                 (double)param_3[0x11] * (double)ppuStack_270 + (double)param_3[7];
    dStack_250 = (double)param_3[0xc] * (double)puStack_280 +
                 (double)puStack_278 * (double)param_3[0xf] +
                 (double)ppuStack_270 * (double)param_3[0x12] + (double)param_3[8];
    ppuVar7 = (undefined **)(param_3 + 0x16);
    ppuVar11 = &puStack_240;
    ppuVar13 = &puStack_260;
    FUN_10937d5c4();
    if ((((((ulong)ppuVar7 & 1) != 0) && (0.0 <= (double)puStack_240)) && (0.0 <= dStack_238)) &&
       (((double)puStack_240 < (double)(int)param_3[0x16] &&
        (dStack_238 < (double)*(int *)((long)param_3 + 0xb4))))) {
      ppuVar13 = (undefined **)(param_3 + 0x16);
      pdVar14 = (double *)(param_3 + 2);
      ppuVar10 = param_5;
      FUN_1094543e8(adStack_160 + 0xc,*param_3);
      plVar16 = (long *)param_3[0x14];
      uVar6 = (int)((ulong)(plVar16[1] - *plVar16) >> 5) - 1;
      ppuVar11 = (undefined **)(ulong)uVar6;
      ppuVar7 = (undefined **)(adStack_160 + 0xc);
      puStack_280 = (undefined *)CONCAT44(puStack_280._4_4_,uVar6);
      FUN_109454530();
      uVar6 = (uint)ppuVar7;
      ppuStack_270 = ppuVar7;
      if ((uVar6 != 0xffffffff) && (((ulong)ppuVar11 & 0x7fffffffffffffff) != 0)) {
        uVar1 = (int)param_9 + uVar6;
        uVar2 = (uint)puStack_280;
        if ((int)uVar1 <= (int)(uint)puStack_280) {
          uVar2 = uVar1;
        }
        uVar1 = uVar2 + (int)param_7;
        uVar3 = (uint)puStack_280;
        if ((int)uVar1 <= (int)(uint)puStack_280) {
          uVar3 = uVar1;
        }
        dVar33 = 1.0 / (double)(1 << (ulong)(uVar3 & 0x1f));
        puStack_240 = (undefined *)((double)puStack_240 * dVar33);
        dStack_238 = dStack_238 * dVar33;
        adStack_160[9] = 0.0;
        adStack_160[8] = 0.0;
        adStack_160[0xb] = 0.0;
        adStack_160[10] = 0.0;
        dStack_2a8 = 0.0;
        puStack_2b0 = (undefined *)0x0;
        if (-1 < (int)param_7) {
          uStack_2bc = 0;
          dVar33 = 1.0 / (double)(1 << (ulong)(uVar6 & 0x1f));
          dStack_288 = 1.0 / (-(dStack_f8 * dVar33) * dStack_f0 * dVar33 +
                             (double)puStack_100 * dVar33 * dStack_e8 * dVar33);
          puStack_280 = (undefined *)(dStack_288 * dStack_e8 * dVar33);
          puStack_278 = (undefined *)-(dStack_f8 * dVar33 * dStack_288);
          dStack_290 = -(dStack_f0 * dVar33) * dStack_288;
          dStack_288 = (double)puStack_100 * dVar33 * dStack_288;
          uStack_2cc = (uint)param_8 ^ 1;
          param_9 = (undefined **)(long)(int)uVar3;
          dVar33 = -1.0;
          dStack_298 = 0.01;
          dStack_2a0 = 0.01;
          uStack_2c8 = (ulong)uVar2;
          ppuStack_2b8 = (undefined **)(ulong)uVar3;
          while( true ) {
            if (4.0 <= (double)puStack_240) {
              param_8 = (undefined **)(*plVar16 + (long)param_9 * 0x20);
              bVar4 = true;
              bVar5 = false;
              if ((double)puStack_240 < (double)((int)param_8[2] + -4)) {
                bVar4 = false;
                bVar5 = true;
                if (!NAN(dStack_238)) {
                  bVar4 = dStack_238 < 4.0;
                  bVar5 = false;
                }
              }
              if ((bVar4 == bVar5) && (dStack_238 < (double)((int)((ulong)param_8[2] >> 0x20) + -4))
                 ) {
                uVar6 = (int)param_9 - (int)ppuStack_270;
                adStack_160[10] = (double)puStack_240 - (double)(long)(double)puStack_240;
                adStack_160[0xb] = dStack_238 - (double)(long)dStack_238;
                lVar15 = **(long **)(*param_3 + 8);
                iVar26 = *(int *)(param_5 + 5) + uVar6;
                iVar37 = (int)((ulong)((*(long **)(*param_3 + 8))[1] - lVar15) >> 5);
                iVar30 = iVar37 + -1;
                uVar1 = iVar30 - *(int *)(param_5 + 5);
                iVar29 = 1 << (ulong)(iVar26 - iVar30 & 0x1f);
                iVar28 = iVar26;
                if (iVar30 <= iVar26) {
                  iVar28 = iVar30;
                }
                if (iVar26 < iVar37) {
                  iVar29 = 1;
                  uVar1 = uVar6;
                }
                dStack_1f8 = (double)iVar29;
                puStack_210 = (undefined *)((double)puStack_280 * dStack_1f8);
                dStack_208 = (double)puStack_278 * dStack_1f8;
                dStack_200 = dStack_290 * dStack_1f8;
                dStack_1f8 = dStack_288 * dStack_1f8;
                dVar36 = (double)(1 << (ulong)(uVar1 & 0x1f));
                ppuVar13 = (undefined **)(lVar15 + (long)iVar28 * 0x20);
                dVar57 = (double)*param_5 / dVar36 + dStack_2a0;
                dVar58 = (double)param_5[1] / dVar36 + dStack_298;
                dVar36 = (double)((int)ppuVar13[2] + -1) - dVar57;
                if (dVar57 <= dVar36) {
                  dVar36 = dVar57;
                }
                if ((ABS((double)puStack_210) + ABS(dStack_200)) * 4.5 + 0.5 + 1e-08 <= dVar36) {
                  dVar36 = (double)((int)((ulong)ppuVar13[2] >> 0x20) + -1) - dVar58;
                  if (dVar58 <= dVar36) {
                    dVar36 = dVar58;
                  }
                  if ((ABS(dStack_208) + ABS(dStack_1f8)) * 4.5 + 0.5 + 1e-08 <= dVar36) {
                    auVar34 = NEON_fmov(0xbfe0000000000000,8);
                    dStack_220 = ((dVar57 - dStack_200 * (adStack_160[0xb] + 3.5)) -
                                 (double)puStack_210 * (adStack_160[10] + 3.5)) + auVar34._0_8_;
                    dStack_218 = ((dVar58 - dStack_1f8 * (adStack_160[0xb] + 3.5)) -
                                 dStack_208 * (adStack_160[10] + 3.5)) + auVar34._8_8_;
                    auStack_228 = (undefined1  [8])0x0;
                    uVar8 = 0;
                    ppuVar11 = &puStack_210;
                    pdVar14 = &dStack_220;
                    ppuVar10 = (undefined **)(auStack_228 + 4);
                    FUN_10939e638();
                    lVar15 = 0;
                    iVar26 = 0;
                    iVar28 = 0;
                    iVar29 = 0;
                    iVar30 = 0;
                    iVar37 = 0;
                    iVar38 = 0;
                    iVar39 = 0;
                    iVar40 = 0;
                    iVar49 = 0;
                    iVar50 = 0;
                    iVar51 = 0;
                    iVar52 = 0;
                    iVar53 = 0;
                    iVar54 = 0;
                    iVar55 = 0;
                    iVar56 = 0;
                    iVar41 = 0;
                    iVar42 = 0;
                    iVar43 = 0;
                    iVar44 = 0;
                    iVar45 = 0;
                    iVar46 = 0;
                    iVar47 = 0;
                    iVar48 = 0;
                    auVar34 = ZEXT216(0);
                    auVar32 = ZEXT216(0);
                    do {
                      uVar60 = *(undefined8 *)((long)adStack_160 + lVar15 + 8);
                      uVar59 = *(undefined8 *)((long)adStack_160 + lVar15);
                      bVar18 = (byte)((ulong)uVar59 >> 8);
                      bVar17 = (byte)uVar60;
                      bVar19 = (byte)((ulong)uVar60 >> 8);
                      bVar20 = (byte)((ulong)uVar60 >> 0x10);
                      bVar21 = (byte)((ulong)uVar60 >> 0x18);
                      bVar22 = (byte)((ulong)uVar60 >> 0x20);
                      bVar23 = (byte)((ulong)uVar60 >> 0x28);
                      bVar24 = (byte)((ulong)uVar60 >> 0x30);
                      bVar25 = (byte)((ulong)uVar60 >> 0x38);
                      iVar53 = iVar53 + (CONCAT12(bVar23,(ushort)bVar22) & 0xffff);
                      iVar54 = iVar54 + (uint)bVar23;
                      iVar55 = iVar55 + (uint)bVar24;
                      iVar56 = iVar56 + (uint)bVar25;
                      iVar49 = iVar49 + (uint)bVar17;
                      iVar50 = iVar50 + (uint)bVar19;
                      iVar51 = iVar51 + (uint)bVar20;
                      iVar52 = iVar52 + (uint)bVar21;
                      iVar37 = iVar37 + (uint)(byte)((ulong)uVar59 >> 0x20);
                      iVar38 = iVar38 + (uint)(byte)((ulong)uVar59 >> 0x28);
                      iVar39 = iVar39 + (uint)(byte)((ulong)uVar59 >> 0x30);
                      iVar40 = iVar40 + (uint)(byte)((ulong)uVar59 >> 0x38);
                      iVar26 = iVar26 + (CONCAT12(bVar18,(ushort)(byte)uVar59) & 0xffff);
                      iVar28 = iVar28 + (uint)bVar18;
                      iVar29 = iVar29 + (uint)(byte)((ulong)uVar59 >> 0x10);
                      iVar30 = iVar30 + (uint)(byte)((ulong)uVar59 >> 0x18);
                      auVar61 = NEON_umull(uVar59,uVar59,1);
                      iVar45 = iVar45 + (uint)(ushort)((ushort)bVar22 * (ushort)bVar22);
                      iVar46 = iVar46 + (uint)(ushort)((ushort)bVar23 * (ushort)bVar23);
                      iVar47 = iVar47 + (uint)(ushort)((ushort)bVar24 * (ushort)bVar24);
                      iVar48 = iVar48 + (uint)(ushort)((ushort)bVar25 * (ushort)bVar25);
                      iVar41 = iVar41 + (uint)(ushort)((ushort)bVar17 * (ushort)bVar17);
                      iVar42 = iVar42 + (uint)(ushort)((ushort)bVar19 * (ushort)bVar19);
                      iVar43 = iVar43 + (uint)(ushort)((ushort)bVar20 * (ushort)bVar20);
                      iVar44 = iVar44 + (uint)(ushort)((ushort)bVar21 * (ushort)bVar21);
                      auVar35._0_4_ = auVar32._0_4_ + (uint)auVar61._8_2_;
                      auVar35._4_4_ = auVar32._4_4_ + (uint)auVar61._10_2_;
                      auVar35._8_4_ = auVar32._8_4_ + (uint)auVar61._12_2_;
                      auVar35._12_4_ = auVar32._12_4_ + (uint)auVar61._14_2_;
                      auVar31._0_4_ = auVar34._0_4_ + (uint)auVar61._0_2_;
                      auVar31._4_4_ = auVar34._4_4_ + (uint)auVar61._2_2_;
                      auVar31._8_4_ = auVar34._8_4_ + (uint)auVar61._4_2_;
                      auVar31._12_4_ = auVar34._12_4_ + (uint)auVar61._6_2_;
                      lVar15 = lVar15 + 0x10;
                      auVar34 = auVar31;
                      auVar32 = auVar35;
                    } while (lVar15 != 0x40);
                    dVar36 = (double)(uint)(iVar26 + iVar49 + iVar37 + iVar53 +
                                            iVar28 + iVar50 + iVar38 + iVar54 +
                                           iVar29 + iVar51 + iVar39 + iVar55 +
                                           iVar30 + iVar52 + iVar40 + iVar56) / 64.0;
                    adStack_160[9] =
                         SQRT((double)(uint)(auVar31._0_4_ + iVar41 + auVar35._0_4_ + iVar45 +
                                             auVar31._4_4_ + iVar42 + auVar35._4_4_ + iVar46 +
                                            auVar31._8_4_ + iVar43 + auVar35._8_4_ + iVar47 +
                                            auVar31._12_4_ + iVar44 + auVar35._12_4_ + iVar48) /
                              64.0 - dVar36 * dVar36);
                    adStack_160[8] = dVar36;
                    if ((uVar8 & 1) != 0) {
                      ppuVar13 = &puStack_240;
                      ppuVar10 = &puStack_210;
                      ppuVar11 = param_8;
                      pdVar14 = param_6;
                      FUN_10939e834(adStack_160);
                      uVar6 = uStack_2cc;
                      if ((int)uStack_2c8 != (int)param_9) {
                        uVar6 = 1;
                      }
                      if (((uVar6 & 1) == 0) && (param_2 <= dVar36)) {
                        ppuVar13 = &puStack_210;
                        ppuVar10 = &puStack_210;
                        pdVar14 = (double *)0x2;
                        ppuVar11 = param_8;
                        FUN_10939efe8(adStack_160);
                      }
                      if (param_2 <= dVar36) {
                        dStack_2a8 = dStack_208;
                        puStack_2b0 = puStack_210;
                        dStack_238 = dStack_208;
                        puStack_240 = puStack_210;
                        uStack_2bc = 1;
                        dVar33 = dVar36;
                        ppuStack_2b8 = param_9;
                      }
                    }
                  }
                }
              }
            }
            if ((long)param_9 <= (long)(int)uVar2) break;
            puStack_240 = (undefined *)((double)puStack_240 + (double)puStack_240);
            dStack_238 = dStack_238 + dStack_238;
            param_9 = (undefined **)((long)param_9 + -1);
            plVar16 = (long *)param_3[0x14];
          }
          ppuVar7 = ppuStack_2b8;
          if ((uStack_2bc & 1) != 0) {
            dStack_208 = dStack_2a8;
            puStack_210 = puStack_2b0;
            dStack_1e8 = (double)CONCAT44(dStack_1e8._4_4_,(int)ppuStack_2b8);
            uStack_1d8 = 0x4000000000000000;
            dStack_1e0 = 0.0;
            uStack_1c0 = 0x42ff0000;
            lStack_180 = (long)&uStack_1bc + 4;
            uStack_1b4 = 0;
            uStack_1bc = 0;
            uStack_1a4 = 0;
            uStack_1ac = 0;
            uStack_194 = 0;
            uStack_19c = 0;
            uStack_188 = 0;
            uStack_190 = 0;
            uStack_18c = 0;
            puStack_178 = &uStack_170;
            uStack_170 = 0;
            uStack_168 = 0;
            dVar36 = 1.0;
            dStack_1f0 = dVar33;
            _ldexp();
            dStack_1c8 = 1.0 / dVar36;
            auVar34 = NEON_fmov(0x3fe0000000000000,8);
            auVar32 = NEON_fmov(0xbfe0000000000000,8);
            dStack_200 = ((double)puStack_2b0 + auVar34._0_8_) * dVar36 + auVar32._0_8_;
            dStack_1f8 = (dStack_2a8 + auVar34._8_8_) * dVar36 + auVar32._8_8_;
            ppuVar13 = &puStack_210;
            ppuVar11 = param_4;
            dStack_1d0 = dVar36;
            FUN_1094545a4(param_1);
            ppuVar7 = &puStack_210;
            FUN_10939ca40();
            goto LAB_109453e38;
          }
        }
      }
    }
  }
  *param_1 = 0;
  *(undefined ***)(param_1 + 8) = param_4;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  auVar34 = NEON_fmov(0x3ff0000000000000,8);
  *(undefined8 *)(param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x40) = 0xbff0000000000000;
  *(long *)(param_1 + 0x58) = auVar34._8_8_;
  *(long *)(param_1 + 0x50) = auVar34._0_8_;
  *(undefined4 *)(param_1 + 0x60) = 0x42ff0000;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 **)(param_1 + 0xa0) = param_1 + 0x68;
  *(undefined1 **)(param_1 + 0xa8) = param_1 + 0xb0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0xbff0000000000000;
LAB_109453e38:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    auVar34._8_8_ = ppuVar11;
    auVar34._0_8_ = ppuVar7;
    return auVar34;
  }
  ___stack_chk_fail();
  FUN_10939ca40(&puStack_210);
  ppuVar9 = ppuVar7;
  __Unwind_Resume();
  pcStack_2d8 = FUN_1094543e8;
  lVar15 = 0;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_360 = ppuVar10[2];
  puStack_358 = ppuVar10[3];
  dStack_350 = (double)ppuVar10[8] + (double)puStack_360;
  dStack_338 = (double)ppuVar10[8] + (double)puStack_358;
  puStack_348 = puStack_358;
  puStack_340 = puStack_360;
  ppuStack_320 = param_8;
  ppuStack_318 = &puStack_210;
  ppuStack_310 = param_9;
  plStack_308 = param_3;
  ppuStack_300 = param_5;
  pdStack_2f8 = param_6;
  ppuStack_2f0 = param_4;
  ppuStack_2e8 = ppuVar7;
  puStack_2e0 = &stack0xfffffffffffffff0;
  do {
    (**(code **)(*ppuVar11 + 0x10))(ppuVar11,(long)&puStack_360 + lVar15,&dStack_3a8,auStack_3c0);
    dStack_3e0 = pdVar14[8] * dStack_3a8 + pdVar14[0xb] * dStack_3a0 + pdVar14[0xe] * dStack_398 +
                 pdVar14[4];
    dStack_3d8 = pdVar14[9] * dStack_3a8 + pdVar14[0xc] * dStack_3a0 + pdVar14[0xf] * dStack_398 +
                 pdVar14[5];
    dStack_3d0 = dStack_3a8 * pdVar14[10] + dStack_3a0 * pdVar14[0xd] + dStack_398 * pdVar14[0x10] +
                 pdVar14[6];
    lVar12 = (long)&dStack_390 + lVar15;
    ppuVar10 = ppuVar13;
    FUN_10937d5c4(ppuVar13,lVar12,&dStack_3e0);
    lVar15 = lVar15 + 0x10;
  } while (lVar15 != 0x30);
  ppuVar9[1] = (undefined *)(dStack_378 - dStack_388);
  *ppuVar9 = (undefined *)(dStack_380 - dStack_390);
  ppuVar9[3] = (undefined *)(dStack_368 - dStack_388);
  ppuVar9[2] = (undefined *)(dStack_370 - dStack_390);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
    ___stack_chk_fail();
    iVar26 = (int)lVar12;
    __Unwind_Resume();
    dVar33 = -((double)ppuVar10[2] * (double)ppuVar10[1]) + (double)ppuVar10[3] * (double)*ppuVar10;
    if (1e-06 <= ABS(dVar33)) {
      lVar15 = 0;
      iVar28 = iVar26;
      if (9999 < iVar26) {
        iVar28 = 10000;
      }
      if ((0 < iVar26) && (3.0 < dVar33)) {
        lVar15 = 0;
        do {
          dVar33 = dVar33 * 0.25;
          lVar15 = lVar15 + 1;
          bVar4 = false;
          bVar5 = false;
          if (3.0 < dVar33) {
            bVar5 = SBORROW4((int)lVar15,iVar28);
            bVar4 = (int)lVar15 - iVar28 < 0;
          }
        } while (bVar4 != bVar5);
      }
    }
    else {
      lVar15 = 0xffffffff;
    }
    auVar61._8_8_ = dVar33;
    auVar61._0_8_ = lVar15;
    return auVar61;
  }
  auVar32._8_8_ = lVar12;
  auVar32._0_8_ = ppuVar10;
  return auVar32;
}



/* Entry: 1094543e8; end: 10945452f;  */

undefined1  [16]
FUN_1094543e8(double *param_1,long *param_2,double *param_3,long param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  double *pdVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dStack_110;
  double dStack_108;
  double dStack_100;
  undefined1 auStack_f0 [24];
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  long lStack_58;
  
  lVar7 = 0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_88 = *(double *)(param_5 + 0x18);
  dStack_90 = *(double *)(param_5 + 0x10);
  dStack_80 = *(double *)(param_5 + 0x40) + dStack_90;
  dStack_68 = *(double *)(param_5 + 0x40) + dStack_88;
  dStack_78 = dStack_88;
  dStack_70 = dStack_90;
  do {
    (**(code **)(*param_2 + 0x10))(param_2,(long)&dStack_90 + lVar7,&dStack_d8,auStack_f0);
    dStack_110 = *(double *)(param_4 + 0x40) * dStack_d8 + *(double *)(param_4 + 0x58) * dStack_d0 +
                 *(double *)(param_4 + 0x70) * dStack_c8 + *(double *)(param_4 + 0x20);
    dStack_108 = *(double *)(param_4 + 0x48) * dStack_d8 + *(double *)(param_4 + 0x60) * dStack_d0 +
                 *(double *)(param_4 + 0x78) * dStack_c8 + *(double *)(param_4 + 0x28);
    dStack_100 = dStack_d8 * *(double *)(param_4 + 0x50) +
                 dStack_d0 * *(double *)(param_4 + 0x68) + dStack_c8 * *(double *)(param_4 + 0x80) +
                 *(double *)(param_4 + 0x30);
    lVar5 = (long)&dStack_c0 + lVar7;
    pdVar3 = param_3;
    FUN_10937d5c4(param_3,lVar5,&dStack_110);
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x30);
  param_1[1] = dStack_a8 - dStack_b8;
  *param_1 = dStack_b0 - dStack_c0;
  param_1[3] = dStack_98 - dStack_b8;
  param_1[2] = dStack_a0 - dStack_c0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar9._8_8_ = lVar5;
    auVar9._0_8_ = pdVar3;
    return auVar9;
  }
  ___stack_chk_fail();
  iVar4 = (int)lVar5;
  __Unwind_Resume();
  dVar8 = -(pdVar3[2] * pdVar3[1]) + pdVar3[3] * *pdVar3;
  if (1e-06 <= ABS(dVar8)) {
    lVar7 = 0;
    iVar6 = iVar4;
    if (9999 < iVar4) {
      iVar6 = 10000;
    }
    if ((0 < iVar4) && (3.0 < dVar8)) {
      lVar7 = 0;
      do {
        dVar8 = dVar8 * 0.25;
        lVar7 = lVar7 + 1;
        bVar1 = false;
        bVar2 = false;
        if (3.0 < dVar8) {
          bVar2 = SBORROW4((int)lVar7,iVar6);
          bVar1 = (int)lVar7 - iVar6 < 0;
        }
      } while (bVar1 != bVar2);
    }
  }
  else {
    lVar7 = 0xffffffff;
  }
  auVar10._8_8_ = dVar8;
  auVar10._0_8_ = lVar7;
  return auVar10;
}



/* Entry: 109454530; end: 1094545a3;  */

undefined1  [16] FUN_109454530(double *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  dVar5 = -(param_1[2] * param_1[1]) + param_1[3] * *param_1;
  if (1e-06 <= ABS(dVar5)) {
    lVar3 = 0;
    iVar4 = param_2;
    if (9999 < param_2) {
      iVar4 = 10000;
    }
    if ((0 < param_2) && (3.0 < dVar5)) {
      lVar3 = 0;
      do {
        dVar5 = dVar5 * 0.25;
        lVar3 = lVar3 + 1;
        bVar1 = false;
        bVar2 = false;
        if (3.0 < dVar5) {
          bVar2 = SBORROW4((int)lVar3,iVar4);
          bVar1 = (int)lVar3 - iVar4 < 0;
        }
      } while (bVar1 != bVar2);
    }
  }
  else {
    lVar3 = 0xffffffff;
  }
  auVar6._8_8_ = dVar5;
  auVar6._0_8_ = lVar3;
  return auVar6;
}



/* Entry: 1094545a4; end: 109454673;  */

undefined1 * FUN_1094545a4(undefined1 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = param_2;
  uVar7 = *param_3;
  *(undefined8 *)(param_1 + 0x18) = param_3[1];
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  uVar7 = param_3[2];
  *(undefined8 *)(param_1 + 0x28) = param_3[3];
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  uVar8 = param_3[5];
  uVar7 = param_3[4];
  uVar9 = param_3[6];
  uVar11 = param_3[9];
  uVar10 = param_3[8];
  *(undefined8 *)(param_1 + 0x48) = param_3[7];
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  *(undefined8 *)(param_1 + 0x58) = uVar11;
  *(undefined8 *)(param_1 + 0x50) = uVar10;
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  uVar8 = param_3[0xb];
  uVar7 = param_3[10];
  uVar9 = param_3[0xc];
  *(undefined8 *)(param_1 + 0x78) = param_3[0xd];
  *(undefined8 *)(param_1 + 0x70) = uVar9;
  uVar9 = param_3[0xe];
  *(undefined8 *)(param_1 + 0x88) = param_3[0xf];
  *(undefined8 *)(param_1 + 0x80) = uVar9;
  lVar4 = param_3[0x11];
  uVar10 = param_3[0x11];
  uVar9 = param_3[0x10];
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x98) = uVar10;
  *(undefined8 *)(param_1 + 0x90) = uVar9;
  *(undefined1 **)(param_1 + 0xa0) = param_1 + 0x68;
  *(undefined1 **)(param_1 + 0xa8) = param_1 + 0xb0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0x68) = uVar8;
  *(undefined8 *)(param_1 + 0x60) = uVar7;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_3 + 0x54) < 3) {
    puVar5 = (undefined8 *)param_3[0x13];
    puVar6 = *(undefined8 **)(param_1 + 0xa8);
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)(param_1 + 100) = 0;
    func_0x000109a84868();
  }
  *(undefined8 *)(param_1 + 0xc0) = 0xbff0000000000000;
  return param_1;
}



/* Entry: 109454674; end: 1094546bb;  */

void FUN_109454674(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar3 != plVar1) {
    plVar3 = plVar3 + -1;
    lVar2 = *plVar3;
    *plVar3 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = plVar1;
  return;
}



/* Entry: 1094546bc; end: 10945479f;  */

long * FUN_1094546bc(long *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  plVar3 = (long *)param_1[1];
  if (plVar3 < (long *)param_1[2]) {
    lVar4 = *param_2;
    *param_2 = 0;
    plVar10 = plVar3 + 1;
    *plVar3 = lVar4;
    plVar3 = param_1;
LAB_10945477c:
    param_1[1] = (long)plVar10;
    return plVar3;
  }
  plVar9 = (long *)*param_1;
  lVar4 = (long)plVar3 - (long)plVar9;
  uVar1 = (lVar4 >> 3) + 1;
  plVar3 = param_1;
  if (uVar1 >> 0x3d == 0) {
    uVar5 = param_1[2] - (long)plVar9;
    uVar7 = (long)uVar5 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 >> 0x3d == 0) {
      lVar2 = uVar7 << 3;
      __Znwm();
      plVar3 = (long *)(lVar2 + lVar4);
      lVar6 = *param_2;
      *param_2 = 0;
      plVar8 = plVar3 + -(lVar4 >> 3);
      plVar10 = plVar3 + 1;
      *plVar3 = lVar6;
      plVar3 = plVar8;
      _memcpy(plVar8,plVar9,lVar4);
      *param_1 = (long)plVar8;
      param_1[1] = (long)plVar10;
      param_1[2] = lVar2 + uVar7 * 8;
      if (plVar9 != (long *)0x0) {
        __ZdlPv(plVar9);
        plVar3 = plVar9;
      }
      goto LAB_10945477c;
    }
  }
  else {
    func_0x00010942ca70();
  }
  func_0x000104c4f740();
  pcStack_58 = FUN_1094547a0;
  lVar4 = *param_2;
  *(undefined8 *)(lVar4 + 0x40) = param_3;
  *(undefined1 *)(lVar4 + 0x48) = 1;
  lStack_78 = *param_2;
  *param_2 = 0;
  plVar8 = (long *)((ulong)(plVar3[5] - plVar3[4]) >> 3);
  *(int *)(lStack_78 + 0x38) = (int)plVar8;
  plStack_70 = plVar9;
  plStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_1094269c0(plVar3 + 4,&lStack_78);
  lVar4 = lStack_78;
  lStack_78 = 0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  return plVar8;
}



/* Entry: 1094547a0; end: 109454823;  */

ulong FUN_1094547a0(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  lVar1 = *param_2;
  *(undefined8 *)(lVar1 + 0x40) = param_3;
  *(undefined1 *)(lVar1 + 0x48) = 1;
  lStack_28 = *param_2;
  *param_2 = 0;
  uVar2 = (ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) >> 3;
  *(int *)(lStack_28 + 0x38) = (int)uVar2;
  FUN_1094269c0((long *)(param_1 + 0x20),&lStack_28);
  lVar1 = lStack_28;
  lStack_28 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return uVar2;
}



/* Entry: 109454824; end: 109454df3;  */

void FUN_109454824(long param_1)

{
  int iVar1;
  undefined8 **ppuVar2;
  ulong *puVar3;
  int *piVar4;
  double *pdVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  char *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  ulong auStack_120 [4];
  undefined4 uStack_100;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_a8;
  long lStack_a0;
  ulong *puStack_90;
  long lStack_88;
  
  auStack_120[0] = auStack_120[0] & 0xffffffff00000000;
  FUN_1092cd11c(&lStack_a8,*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3,auStack_120);
  auStack_120[0] = auStack_120[0] & 0xffffffff00000000;
  FUN_1092cd11c(&lStack_c0,*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3,auStack_120);
  lVar7 = *(long *)(param_1 + 0x20);
  lVar12 = *(long *)(param_1 + 0x28);
  puStack_d0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  puStack_d8 = (undefined8 *)0x0;
  if (lVar12 - lVar7 != 0) {
    lVar7 = lVar12 - lVar7 >> 3;
    func_0x000109455020(&puStack_d8,lVar7);
    puVar8 = puStack_d0 + lVar7 * 3;
    lVar7 = lVar7 * 0x18;
    do {
      *puStack_d0 = 0;
      puStack_d0[1] = 0;
      puStack_d0[2] = 0;
      puStack_d0 = puStack_d0 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
    lVar7 = *(long *)(param_1 + 0x20);
    lVar12 = *(long *)(param_1 + 0x28);
    puStack_d0 = puVar8;
  }
  uStack_e8 = 0;
  uStack_e0 = 0;
  puStack_f0 = &uStack_e8;
  if (lVar12 != lVar7) {
    puVar8 = (undefined8 *)0x0;
    do {
      auStack_120[0] = *(ulong *)(lVar7 + (long)puVar8 * 8);
      ppuVar2 = &puStack_f0;
      FUN_109456600(ppuVar2,auStack_120[0],auStack_120);
      ppuVar2[5] = puVar8;
      puVar8 = (undefined8 *)((long)puVar8 + 1);
      lVar7 = *(long *)(param_1 + 0x20);
    } while (puVar8 < (undefined8 *)(*(long *)(param_1 + 0x28) - lVar7 >> 3));
  }
  plVar9 = *(long **)(param_1 + 8);
  plVar10 = *(long **)(param_1 + 0x10);
  if (plVar10 == plVar9) {
    dVar22 = 0.0;
    dVar24 = 0.0;
    dVar25 = 0.0;
  }
  else {
    uVar11 = 0;
    dVar22 = 0.0;
    dVar24 = 0.0;
    dVar25 = 0.0;
    do {
      piVar4 = (int *)plVar9[uVar11];
      if (*piVar4 != 0) {
        dVar17 = *(double *)(piVar4 + 0x52);
        dVar18 = -*(double *)(piVar4 + 0x4c);
        dVar23 = -*(double *)(piVar4 + 0x4e);
        dVar16 = -*(double *)(piVar4 + 0x50);
        dVar20 = dVar16 * -0.0 - dVar23;
        dVar21 = dVar18 + dVar16 * 0.0;
        dVar19 = dVar23 * -0.0 + dVar18 * 0.0;
        dVar20 = dVar20 + dVar20;
        dVar21 = dVar21 + dVar21;
        dVar19 = dVar19 + dVar19;
        dVar15 = dVar20 * dVar17 + 0.0 + -dVar16 * dVar21 + dVar19 * dVar23;
        dVar16 = dVar21 * dVar17 + 0.0 + -(dVar18 * dVar19) + dVar20 * dVar16;
        dVar18 = dVar19 * dVar17 + -1.0 + -dVar23 * dVar20 + dVar18 * dVar21;
        dVar24 = dVar24 + *(double *)(piVar4 + 0xe0) * dVar15 + *(double *)(piVar4 + 0xe6) * dVar16
                          + *(double *)(piVar4 + 0xec) * dVar18;
        dVar25 = dVar25 + *(double *)(piVar4 + 0xe2) * dVar15 + *(double *)(piVar4 + 0xe8) * dVar16
                          + *(double *)(piVar4 + 0xee) * dVar18;
        dVar22 = dVar22 + *(double *)(piVar4 + 0xe4) * dVar15 +
                          *(double *)(piVar4 + 0xf0) * dVar18 + *(double *)(piVar4 + 0xea) * dVar16;
        pcVar13 = *(char **)(piVar4 + 0xfa);
        pcVar14 = *(char **)(piVar4 + 0xfc);
        if (pcVar13 != pcVar14) {
          dVar15 = *(double *)(piVar4 + 0xda);
          dVar18 = *(double *)(piVar4 + 0xd8);
          dVar23 = *(double *)(piVar4 + 0xdc);
          do {
            auStack_120[0] = *(ulong *)(pcVar13 + 8);
            ppuVar2 = &puStack_f0;
            FUN_109456600(ppuVar2,auStack_120[0],auStack_120);
            puVar8 = ppuVar2[5];
            *(int *)(lStack_a8 + (long)puVar8 * 4) = *(int *)(lStack_a8 + (long)puVar8 * 4) + 1;
            if (*pcVar13 == '\x01') {
              *(int *)(lStack_c0 + (long)puVar8 * 4) = *(int *)(lStack_c0 + (long)puVar8 * 4) + 1;
              lVar7 = *(long *)(pcVar13 + 8);
              dVar16 = dVar18 - *(double *)(lVar7 + 8);
              dVar17 = dVar15 - *(double *)(lVar7 + 0x10);
              dVar19 = dVar23 - *(double *)(lVar7 + 0x18);
              dVar20 = dVar19 * dVar19 + dVar16 * dVar16 + dVar17 * dVar17;
              if (0.0 < dVar20) {
                dVar20 = SQRT(dVar20);
                dVar16 = dVar16 / dVar20;
                dVar17 = dVar17 / dVar20;
                dVar19 = dVar19 / dVar20;
              }
              pdVar5 = (double *)(puStack_d8 + (long)puVar8 * 3);
              pdVar5[1] = dVar17 + pdVar5[1];
              *pdVar5 = dVar16 + *pdVar5;
              pdVar5[2] = dVar19 + pdVar5[2];
            }
            pcVar13 = pcVar13 + 0xd0;
          } while (pcVar13 != pcVar14);
          plVar9 = *(long **)(param_1 + 8);
          plVar10 = *(long **)(param_1 + 0x10);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulong)((long)plVar10 - (long)plVar9 >> 3));
  }
  dVar18 = dVar22 * dVar22 + dVar24 * dVar24 + dVar25 * dVar25;
  if (0.0 < dVar18) {
    dVar18 = SQRT(dVar18);
    dVar24 = dVar24 / dVar18;
    dVar25 = dVar25 / dVar18;
    dVar22 = dVar22 / dVar18;
  }
  *(double *)(param_1 + 0x40) = dVar25;
  *(double *)(param_1 + 0x38) = dVar24;
  *(double *)(param_1 + 0x48) = dVar22;
  lVar7 = *(long *)(param_1 + 0x20);
  lVar12 = *(long *)(param_1 + 0x28);
  if (lVar12 != lVar7) {
    uVar11 = 0;
    pdVar5 = (double *)(puStack_d8 + 2);
    do {
      lVar6 = *(long *)(lVar7 + uVar11 * 8);
      if (*(int *)(lVar6 + 0x50) != 0) {
        iVar1 = *(int *)(lStack_c0 + uVar11 * 4);
        *(double *)(lVar6 + 0x58) = (double)iVar1 / (double)*(int *)(lStack_a8 + uVar11 * 4);
        *(int *)(lVar6 + 0x54) = iVar1;
        dVar24 = pdVar5[-1];
        dVar22 = pdVar5[-2];
        dVar25 = *pdVar5;
        dVar18 = dVar25 * dVar25 + dVar22 * dVar22 + dVar24 * dVar24;
        if (1e-05 < dVar18) {
          dVar18 = SQRT(dVar18);
          *(double *)(lVar6 + 0x28) = dVar24 / dVar18;
          *(double *)(lVar6 + 0x20) = dVar22 / dVar18;
          *(double *)(lVar6 + 0x30) = dVar25 / dVar18;
          lVar7 = *(long *)(param_1 + 0x20);
          lVar12 = *(long *)(param_1 + 0x28);
        }
      }
      uVar11 = uVar11 + 1;
      pdVar5 = pdVar5 + 3;
    } while (uVar11 < (ulong)(lVar12 - lVar7 >> 3));
    plVar9 = *(long **)(param_1 + 8);
    plVar10 = *(long **)(param_1 + 0x10);
  }
  auStack_120[1] = 0;
  auStack_120[0] = 0;
  auStack_120[3] = 0;
  auStack_120[2] = 0;
  uStack_100 = 0x3f800000;
  if (plVar9 != plVar10) {
    do {
      lVar12 = *(long *)(*plVar9 + 0x3f0);
      for (lVar7 = *(long *)(*plVar9 + 1000); lVar7 != lVar12; lVar7 = lVar7 + 0xd0) {
        lStack_138 = *(long *)(lVar7 + 8);
        puVar3 = auStack_120;
        FUN_109456714(puVar3,lStack_138,&lStack_138);
        *(int *)(puVar3 + 3) = (int)puVar3[3] + 1;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar10);
    plVar9 = *(long **)(param_1 + 8);
    plVar10 = *(long **)(param_1 + 0x10);
  }
  if (plVar9 != plVar10) {
    do {
      lStack_138 = 0;
      lStack_130 = 0;
      uStack_128 = 0;
      lVar7 = *(long *)(*plVar9 + 0x3d0);
      lVar12 = *(long *)(*plVar9 + 0x3d8);
      FUN_109285684(&lStack_138,lVar7,lVar12,lVar12 - lVar7 >> 2);
      lStack_88 = *plVar9 + 1000;
      lVar7 = 0;
      if (lStack_130 != lStack_138) {
        lVar7 = LZCOUNT(lStack_130 - lStack_138 >> 2) * -2 + 0x7e;
      }
      puStack_90 = auStack_120;
      FUN_1094550ac(lStack_138,lStack_130,&puStack_90,lVar7,1);
      if ((long *)(*plVar9 + 0x3d0) != &lStack_138) {
        FUN_10928555c();
      }
      if (lStack_138 != 0) {
        lStack_130 = lStack_138;
        __ZdlPv();
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar10);
  }
  FUN_1094566cc(auStack_120);
  func_0x00010943e5f0(&puStack_f0,uStack_e8);
  if (puStack_d8 != (undefined8 *)0x0) {
    puStack_d0 = puStack_d8;
    __ZdlPv();
  }
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return;
}



/* Entry: 109454df4; end: 109454e1b;  */

void FUN_109454df4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1094305a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109454e1c; end: 109454ebb;  */

void FUN_109454e1c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x60);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 100));
  }
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 == param_1 + 0xb0 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 109454ebc; end: 1094550ab;  */

long FUN_109454ebc(long param_1)

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



/* Entry: 1094550ac; end: 109455dd7;  */

/* WARNING: Possible PIC construction at 0x0001094561cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001094561d0) */
/* WARNING: Removing unreachable block (ram,0x000109456224) */
/* WARNING: Removing unreachable block (ram,0x000109456288) */
/* WARNING: Removing unreachable block (ram,0x0001094562ec) */
/* WARNING: Removing unreachable block (ram,0x000109456350) */
/* WARNING: Removing unreachable block (ram,0x000109456360) */

void FUN_1094550ac(int *param_1,int *param_2,long *param_3,long param_4,uint param_5)

{
  ulong uVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  int *unaff_x19;
  long lVar15;
  int *piVar16;
  int *unaff_x20;
  long *unaff_x21;
  ulong uVar17;
  int *unaff_x22;
  ulong uVar18;
  int *unaff_x23;
  ulong uVar19;
  int *piVar20;
  int *unaff_x24;
  undefined8 unaff_x25;
  long lVar21;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  int *piStack_70;
  undefined8 uStack_68;
  
  do {
    piVar12 = param_2 + -1;
    piVar20 = param_1;
LAB_1094550fc:
    uVar14 = (long)param_2 - (long)piVar20 >> 2;
    if (uVar14 - 2 == 0 || (long)uVar14 < 2) {
      if (uVar14 < 2) {
        return;
      }
      if (uVar14 == 2) {
        iVar5 = *piVar20;
        lVar15 = *param_3;
        uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)param_2[-1] * 0xd0 + 8);
        FUN_109456714(lVar15,uStack_68,&uStack_68);
        iVar4 = *(int *)(lVar15 + 0x18);
        lVar15 = *param_3;
        uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar5 * 0xd0 + 8);
        FUN_109456714(lVar15,uStack_68,&uStack_68);
        if (iVar4 <= *(int *)(lVar15 + 0x18)) {
          return;
        }
        iVar4 = *piVar20;
        *piVar20 = param_2[-1];
        param_2[-1] = iVar4;
        return;
      }
    }
    else {
      if (uVar14 == 3) {
        piVar7 = piVar20 + 1;
        iVar5 = *piVar20;
        lVar15 = *param_3;
        FUN_109456714(lVar15,*(undefined8 *)(*(long *)param_3[1] + (long)*piVar7 * 0xd0 + 8),
                      &stack0xffffffffffffffa8);
        iVar4 = *(int *)(lVar15 + 0x18);
        lVar15 = *param_3;
        FUN_109456714(lVar15,*(undefined8 *)(*(long *)param_3[1] + (long)iVar5 * 0xd0 + 8),
                      &stack0xffffffffffffffa8);
        iVar5 = *piVar7;
        lVar10 = *param_3;
        if (*(int *)(lVar15 + 0x18) < iVar4) {
          FUN_109456714(lVar10,*(undefined8 *)(*(long *)param_3[1] + (long)*piVar12 * 0xd0 + 8),
                        &stack0xffffffffffffffa8);
          iVar4 = *(int *)(lVar10 + 0x18);
          lVar15 = *param_3;
          FUN_109456714(lVar15,*(undefined8 *)(*(long *)param_3[1] + (long)iVar5 * 0xd0 + 8),
                        &stack0xffffffffffffffa8);
          iVar5 = *piVar20;
          if (*(int *)(lVar15 + 0x18) < iVar4) {
            *piVar20 = *piVar12;
            *piVar12 = iVar5;
          }
          else {
            *piVar20 = *piVar7;
            *piVar7 = iVar5;
            lVar15 = *param_3;
            FUN_109456714(lVar15,*(undefined8 *)(*(long *)param_3[1] + (long)*piVar12 * 0xd0 + 8),
                          &stack0xffffffffffffffa8);
            iVar4 = *(int *)(lVar15 + 0x18);
            lVar15 = *param_3;
            FUN_109456714(lVar15,*(undefined8 *)(*(long *)param_3[1] + (long)iVar5 * 0xd0 + 8),
                          &stack0xffffffffffffffa8);
            if (*(int *)(lVar15 + 0x18) < iVar4) {
              iVar4 = *piVar7;
              *piVar7 = *piVar12;
              *piVar12 = iVar4;
            }
          }
        }
        else {
          FUN_109456714(lVar10,*(undefined8 *)(*(long *)param_3[1] + (long)*piVar12 * 0xd0 + 8),
                        &stack0xffffffffffffffa8);
          iVar4 = *(int *)(lVar10 + 0x18);
          lVar15 = *param_3;
          FUN_109456714(lVar15,*(undefined8 *)(*(long *)param_3[1] + (long)iVar5 * 0xd0 + 8),
                        &stack0xffffffffffffffa8);
          if (*(int *)(lVar15 + 0x18) < iVar4) {
            iVar4 = *piVar7;
            *piVar7 = *piVar12;
            *piVar12 = iVar4;
            iVar5 = *piVar20;
            lVar15 = *param_3;
            FUN_109456714(lVar15,*(undefined8 *)(*(long *)param_3[1] + (long)*piVar7 * 0xd0 + 8),
                          &stack0xffffffffffffffa8);
            iVar4 = *(int *)(lVar15 + 0x18);
            lVar15 = *param_3;
            FUN_109456714(lVar15,*(undefined8 *)(*(long *)param_3[1] + (long)iVar5 * 0xd0 + 8),
                          &stack0xffffffffffffffa8);
            if (*(int *)(lVar15 + 0x18) < iVar4) {
              iVar4 = *piVar20;
              *piVar20 = *piVar7;
              *piVar7 = iVar4;
            }
          }
        }
        return;
      }
      piVar7 = piVar12;
      if (uVar14 == 4) {
SUB_109456010:
        piVar8 = piVar20 + 2;
        piVar12 = piVar20 + 1;
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(int **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(int **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        FUN_109455dd8();
        iVar5 = *piVar8;
        lVar15 = *param_3;
        uVar11 = *(undefined8 *)(*(long *)param_3[1] + (long)*piVar7 * 0xd0 + 8);
        *(undefined8 *)((long)register0x00000008 + -0x58) = uVar11;
        FUN_109456714(lVar15,uVar11,(undefined1 *)((long)register0x00000008 + -0x58));
        iVar4 = *(int *)(lVar15 + 0x18);
        lVar15 = *param_3;
        uVar11 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar5 * 0xd0 + 8);
        *(undefined8 *)((long)register0x00000008 + -0x58) = uVar11;
        FUN_109456714(lVar15,uVar11,(undefined1 *)((long)register0x00000008 + -0x58));
        if (*(int *)(lVar15 + 0x18) < iVar4) {
          iVar4 = *piVar8;
          *piVar8 = *piVar7;
          *piVar7 = iVar4;
          iVar5 = *piVar12;
          lVar15 = *param_3;
          uVar11 = *(undefined8 *)(*(long *)param_3[1] + (long)*piVar8 * 0xd0 + 8);
          *(undefined8 *)((long)register0x00000008 + -0x58) = uVar11;
          FUN_109456714(lVar15,uVar11,(undefined1 *)((long)register0x00000008 + -0x58));
          iVar4 = *(int *)(lVar15 + 0x18);
          lVar15 = *param_3;
          uVar11 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar5 * 0xd0 + 8);
          *(undefined8 *)((long)register0x00000008 + -0x58) = uVar11;
          FUN_109456714(lVar15,uVar11,(undefined1 *)((long)register0x00000008 + -0x58));
          if (*(int *)(lVar15 + 0x18) < iVar4) {
            iVar4 = *piVar12;
            *piVar12 = *piVar8;
            *piVar8 = iVar4;
            iVar5 = *piVar20;
            lVar15 = *param_3;
            uVar11 = *(undefined8 *)(*(long *)param_3[1] + (long)*piVar12 * 0xd0 + 8);
            *(undefined8 *)((long)register0x00000008 + -0x58) = uVar11;
            FUN_109456714(lVar15,uVar11,(undefined1 *)((long)register0x00000008 + -0x58));
            iVar4 = *(int *)(lVar15 + 0x18);
            lVar15 = *param_3;
            uVar11 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar5 * 0xd0 + 8);
            *(undefined8 *)((long)register0x00000008 + -0x58) = uVar11;
            FUN_109456714(lVar15,uVar11,(undefined1 *)((long)register0x00000008 + -0x58));
            if (*(int *)(lVar15 + 0x18) < iVar4) {
              iVar4 = *piVar20;
              *piVar20 = *piVar12;
              *piVar12 = iVar4;
            }
          }
        }
        return;
      }
      if (uVar14 == 5) {
        unaff_x19 = piVar20 + 1;
        unaff_x22 = piVar20 + 2;
        unaff_x23 = piVar20 + 3;
        unaff_x29 = &stack0xfffffffffffffff0;
        unaff_x30 = 0x1094561d0;
        register0x00000008 = (BADSPACEBASE *)&piStack_70;
        piVar7 = unaff_x23;
        unaff_x20 = piVar20;
        unaff_x21 = param_3;
        unaff_x24 = piVar12;
        goto SUB_109456010;
      }
    }
    piStack_70 = piVar20;
    if ((long)uVar14 < 0x18) {
      piVar12 = piVar20 + 1;
      if ((param_5 & 1) == 0) {
        if (piVar20 == param_2 || piVar12 == param_2) {
          return;
        }
        do {
          piVar7 = piVar12;
          iVar4 = *piVar20;
          lVar15 = *param_3;
          uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)piVar20[1] * 0xd0 + 8);
          FUN_109456714(lVar15,uStack_68,&uStack_68);
          iVar5 = *(int *)(lVar15 + 0x18);
          lVar15 = *param_3;
          uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar4 * 0xd0 + 8);
          FUN_109456714(lVar15,uStack_68,&uStack_68);
          if (*(int *)(lVar15 + 0x18) < iVar5) {
            iVar4 = *piVar7;
            piVar20 = piVar7;
            do {
              piVar12 = piVar20 + -1;
              *piVar20 = *piVar12;
              iVar6 = piVar20[-2];
              lVar15 = *param_3;
              uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar4 * 0xd0 + 8);
              FUN_109456714(lVar15,uStack_68,&uStack_68);
              iVar5 = *(int *)(lVar15 + 0x18);
              lVar15 = *param_3;
              uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar6 * 0xd0 + 8);
              FUN_109456714(lVar15,uStack_68,&uStack_68);
              piVar20 = piVar12;
            } while (*(int *)(lVar15 + 0x18) < iVar5);
            *piVar12 = iVar4;
          }
          piVar12 = piVar7 + 1;
          piVar20 = piVar7;
        } while (piVar7 + 1 != param_2);
        return;
      }
      if (piVar20 == param_2 || piVar12 == param_2) {
        return;
      }
      lVar15 = 0;
      piVar7 = piVar20;
      break;
    }
    if (param_4 == 0) {
      if (piVar20 == param_2) {
        return;
      }
      uVar17 = uVar14 - 2 >> 1;
      uVar19 = uVar17;
      goto LAB_1094558fc;
    }
    piVar7 = piVar20 + (uVar14 >> 1);
    if (uVar14 < 0x81) {
      FUN_109455dd8(piVar7,piVar20,piVar12,param_3);
    }
    else {
      FUN_109455dd8(piVar20,piVar7,piVar12,param_3);
      FUN_109455dd8(piVar20 + 1,piVar7 + -1,param_2 + -2,param_3);
      FUN_109455dd8(piVar20 + 2,piVar7 + 1,param_2 + -3,param_3);
      FUN_109455dd8(piVar7 + -1,piVar7,piVar7 + 1,param_3);
      iVar4 = *piVar20;
      *piVar20 = *piVar7;
      *piVar7 = iVar4;
    }
    param_4 = param_4 + -1;
    if ((param_5 & 1) == 0) {
      iVar4 = *piVar20;
      lVar15 = *param_3;
      uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)piVar20[-1] * 0xd0 + 8);
      FUN_109456714(lVar15,uStack_68,&uStack_68);
      iVar5 = *(int *)(lVar15 + 0x18);
      lVar15 = *param_3;
      uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar4 * 0xd0 + 8);
      FUN_109456714(lVar15,uStack_68,&uStack_68);
      if (iVar5 <= *(int *)(lVar15 + 0x18)) {
        iVar4 = *piVar20;
        iVar6 = *piVar12;
        lVar15 = *param_3;
        uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar4 * 0xd0 + 8);
        FUN_109456714(lVar15,uStack_68,&uStack_68);
        iVar5 = *(int *)(lVar15 + 0x18);
        lVar15 = *param_3;
        uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar6 * 0xd0 + 8);
        FUN_109456714(lVar15,uStack_68,&uStack_68);
        if (*(int *)(lVar15 + 0x18) < iVar5) {
          do {
            piVar20 = piVar20 + 1;
            iVar6 = *piVar20;
            lVar15 = *param_3;
            uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar4 * 0xd0 + 8);
            FUN_109456714(lVar15,uStack_68,&uStack_68);
            iVar5 = *(int *)(lVar15 + 0x18);
            lVar15 = *param_3;
            uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar6 * 0xd0 + 8);
            FUN_109456714(lVar15,uStack_68,&uStack_68);
          } while (iVar5 <= *(int *)(lVar15 + 0x18));
        }
        else {
          do {
            piVar20 = piVar20 + 1;
            if (param_2 <= piVar20) break;
            iVar6 = *piVar20;
            lVar15 = *param_3;
            uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar4 * 0xd0 + 8);
            FUN_109456714(lVar15,uStack_68,&uStack_68);
            iVar5 = *(int *)(lVar15 + 0x18);
            lVar15 = *param_3;
            uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar6 * 0xd0 + 8);
            FUN_109456714(lVar15,uStack_68,&uStack_68);
          } while (iVar5 <= *(int *)(lVar15 + 0x18));
        }
        piVar7 = param_2;
        if (piVar20 < param_2) {
          do {
            piVar7 = piVar7 + -1;
            iVar6 = *piVar7;
            lVar15 = *param_3;
            uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar4 * 0xd0 + 8);
            FUN_109456714(lVar15,uStack_68,&uStack_68);
            iVar5 = *(int *)(lVar15 + 0x18);
            lVar15 = *param_3;
            uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar6 * 0xd0 + 8);
            FUN_109456714(lVar15,uStack_68,&uStack_68);
          } while (*(int *)(lVar15 + 0x18) < iVar5);
        }
        while (piVar20 < piVar7) {
          iVar5 = *piVar20;
          *piVar20 = *piVar7;
          *piVar7 = iVar5;
          do {
            piVar20 = piVar20 + 1;
            iVar6 = *piVar20;
            lVar15 = *param_3;
            uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar4 * 0xd0 + 8);
            FUN_109456714(lVar15,uStack_68,&uStack_68);
            iVar5 = *(int *)(lVar15 + 0x18);
            lVar15 = *param_3;
            uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar6 * 0xd0 + 8);
            FUN_109456714(lVar15,uStack_68,&uStack_68);
          } while (iVar5 <= *(int *)(lVar15 + 0x18));
          do {
            piVar7 = piVar7 + -1;
            iVar6 = *piVar7;
            lVar15 = *param_3;
            uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar4 * 0xd0 + 8);
            FUN_109456714(lVar15,uStack_68,&uStack_68);
            iVar5 = *(int *)(lVar15 + 0x18);
            lVar15 = *param_3;
            uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar6 * 0xd0 + 8);
            FUN_109456714(lVar15,uStack_68,&uStack_68);
          } while (*(int *)(lVar15 + 0x18) < iVar5);
        }
        piVar7 = piVar20 + -1;
        if (piVar7 != piStack_70) {
          *piStack_70 = *piVar7;
        }
        param_5 = 0;
        *piVar7 = iVar4;
        goto LAB_1094550fc;
      }
    }
    lVar15 = 0;
    iVar4 = *piVar20;
    do {
      lVar10 = *param_3;
      uStack_68 = *(undefined8 *)
                   (*(long *)param_3[1] + (long)*(int *)((long)piVar20 + lVar15 + 4) * 0xd0 + 8);
      FUN_109456714(lVar10,uStack_68,&uStack_68);
      iVar5 = *(int *)(lVar10 + 0x18);
      lVar10 = *param_3;
      uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar4 * 0xd0 + 8);
      FUN_109456714(lVar10,uStack_68,&uStack_68);
      lVar15 = lVar15 + 4;
    } while (*(int *)(lVar10 + 0x18) < iVar5);
    piVar7 = (int *)((long)piVar20 + lVar15);
    piVar8 = param_2;
    if (lVar15 == 4) {
      do {
        if (piVar8 <= piVar7) break;
        piVar8 = piVar8 + -1;
        lVar15 = *param_3;
        uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)*piVar8 * 0xd0 + 8);
        FUN_109456714(lVar15,uStack_68,&uStack_68);
        iVar5 = *(int *)(lVar15 + 0x18);
        lVar15 = *param_3;
        uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar4 * 0xd0 + 8);
        FUN_109456714(lVar15,uStack_68,&uStack_68);
      } while (iVar5 <= *(int *)(lVar15 + 0x18));
    }
    else {
      do {
        piVar8 = piVar8 + -1;
        lVar15 = *param_3;
        uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)*piVar8 * 0xd0 + 8);
        FUN_109456714(lVar15,uStack_68,&uStack_68);
        iVar5 = *(int *)(lVar15 + 0x18);
        lVar15 = *param_3;
        uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar4 * 0xd0 + 8);
        FUN_109456714(lVar15,uStack_68,&uStack_68);
      } while (iVar5 <= *(int *)(lVar15 + 0x18));
    }
    piVar16 = piVar8;
    piVar20 = piVar7;
    if (piVar7 < piVar8) {
      do {
        iVar5 = *piVar20;
        *piVar20 = *piVar16;
        *piVar16 = iVar5;
        do {
          piVar20 = piVar20 + 1;
          lVar15 = *param_3;
          uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)*piVar20 * 0xd0 + 8);
          FUN_109456714(lVar15,uStack_68,&uStack_68);
          iVar5 = *(int *)(lVar15 + 0x18);
          lVar15 = *param_3;
          uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar4 * 0xd0 + 8);
          FUN_109456714(lVar15,uStack_68,&uStack_68);
        } while (*(int *)(lVar15 + 0x18) < iVar5);
        do {
          piVar16 = piVar16 + -1;
          lVar15 = *param_3;
          uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)*piVar16 * 0xd0 + 8);
          FUN_109456714(lVar15,uStack_68,&uStack_68);
          iVar5 = *(int *)(lVar15 + 0x18);
          lVar15 = *param_3;
          uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar4 * 0xd0 + 8);
          FUN_109456714(lVar15,uStack_68,&uStack_68);
        } while (iVar5 <= *(int *)(lVar15 + 0x18));
      } while (piVar20 < piVar16);
    }
    param_1 = piStack_70;
    piVar16 = piVar20 + -1;
    if (piVar16 != piStack_70) {
      *piStack_70 = *piVar16;
    }
    *piVar16 = iVar4;
    if (piVar7 < piVar8) goto LAB_109455464;
    piVar7 = piStack_70;
    func_0x000109456380(piStack_70,piVar16,param_3);
    piVar8 = piVar20;
    func_0x000109456380(piVar20,param_2,param_3);
    if ((int)piVar8 == 0) goto code_r0x000109455460;
    param_2 = piVar16;
    if (((ulong)piVar7 & 1) != 0) {
      return;
    }
  } while( true );
LAB_109455804:
  piVar8 = piVar12;
  iVar4 = *piVar7;
  lVar10 = *param_3;
  uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)piVar7[1] * 0xd0 + 8);
  FUN_109456714(lVar10,uStack_68,&uStack_68);
  iVar5 = *(int *)(lVar10 + 0x18);
  lVar10 = *param_3;
  uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar4 * 0xd0 + 8);
  FUN_109456714(lVar10,uStack_68,&uStack_68);
  if (*(int *)(lVar10 + 0x18) < iVar5) {
    iVar4 = *piVar8;
    lVar10 = lVar15;
    piVar12 = piVar20;
    do {
      lVar21 = lVar10;
      puVar2 = (undefined4 *)((long)piVar12 + lVar21);
      puVar2[1] = *puVar2;
      piVar20 = piVar12;
      if (lVar21 == 0) goto LAB_1094558d0;
      iVar6 = puVar2[-1];
      lVar10 = *param_3;
      uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar4 * 0xd0 + 8);
      FUN_109456714(lVar10,uStack_68,&uStack_68);
      piVar20 = piStack_70;
      iVar5 = *(int *)(lVar10 + 0x18);
      lVar9 = *param_3;
      uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar6 * 0xd0 + 8);
      FUN_109456714(lVar9,uStack_68,&uStack_68);
      lVar10 = lVar21 + -4;
      piVar12 = piVar20;
    } while (*(int *)(lVar9 + 0x18) < iVar5);
    piVar12 = (int *)((long)piVar20 + lVar21);
LAB_1094558d0:
    *piVar12 = iVar4;
  }
  lVar15 = lVar15 + 4;
  piVar12 = piVar8 + 1;
  piVar7 = piVar8;
  if (piVar8 + 1 == param_2) {
    return;
  }
  goto LAB_109455804;
LAB_1094558fc:
  do {
    if ((long)uVar19 <= (long)uVar17) {
      uVar13 = uVar19 << 1 | 1;
      piVar12 = piVar20 + uVar13;
      uVar1 = uVar19 * 2 + 2;
      uVar18 = uVar13;
      piVar7 = piVar12;
      if ((long)uVar1 < (long)uVar14) {
        iVar5 = piVar12[1];
        lVar15 = *param_3;
        uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)*piVar12 * 0xd0 + 8);
        FUN_109456714(lVar15,uStack_68,&uStack_68);
        iVar4 = *(int *)(lVar15 + 0x18);
        lVar15 = *param_3;
        uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar5 * 0xd0 + 8);
        FUN_109456714(lVar15,uStack_68,&uStack_68);
        uVar18 = uVar1;
        piVar7 = piVar12 + 1;
        piVar20 = piStack_70;
        if (iVar4 <= *(int *)(lVar15 + 0x18)) {
          uVar18 = uVar13;
          piVar7 = piVar12;
        }
      }
      piVar12 = piVar20 + uVar19;
      iVar5 = *piVar12;
      lVar15 = *param_3;
      uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)*piVar7 * 0xd0 + 8);
      FUN_109456714(lVar15,uStack_68,&uStack_68);
      iVar4 = *(int *)(lVar15 + 0x18);
      lVar15 = *param_3;
      uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar5 * 0xd0 + 8);
      FUN_109456714(lVar15,uStack_68,&uStack_68);
      piVar20 = piStack_70;
      if (iVar4 <= *(int *)(lVar15 + 0x18)) {
        iVar4 = *piVar12;
        do {
          piVar20 = piVar7;
          *piVar12 = *piVar20;
          if ((long)uVar17 < (long)uVar18) break;
          uVar13 = uVar18 << 1 | 1;
          piVar12 = piStack_70 + uVar13;
          uVar1 = uVar18 * 2 + 2;
          piVar7 = piVar12;
          uVar18 = uVar13;
          if ((long)uVar1 < (long)uVar14) {
            iVar6 = piVar12[1];
            lVar15 = *param_3;
            uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)*piVar12 * 0xd0 + 8);
            FUN_109456714(lVar15,uStack_68,&uStack_68);
            iVar5 = *(int *)(lVar15 + 0x18);
            lVar15 = *param_3;
            uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar6 * 0xd0 + 8);
            FUN_109456714(lVar15,uStack_68,&uStack_68);
            piVar7 = piVar12 + 1;
            uVar18 = uVar1;
            if (iVar5 <= *(int *)(lVar15 + 0x18)) {
              piVar7 = piVar12;
              uVar18 = uVar13;
            }
          }
          lVar15 = *param_3;
          uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)*piVar7 * 0xd0 + 8);
          FUN_109456714(lVar15,uStack_68,&uStack_68);
          iVar5 = *(int *)(lVar15 + 0x18);
          lVar15 = *param_3;
          uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar4 * 0xd0 + 8);
          FUN_109456714(lVar15,uStack_68,&uStack_68);
          piVar12 = piVar20;
        } while (iVar5 <= *(int *)(lVar15 + 0x18));
        *piVar20 = iVar4;
        piVar20 = piStack_70;
      }
    }
    bVar3 = uVar19 != 0;
    uVar19 = uVar19 - 1;
  } while (bVar3);
  do {
    iVar4 = *piVar20;
    uVar19 = 0;
    piVar12 = piVar20;
    do {
      uVar1 = uVar19 << 1 | 1;
      uVar17 = uVar19 * 2 + 2;
      uVar13 = uVar1;
      piVar7 = piVar12 + uVar19 + 1;
      if ((long)uVar17 < (long)uVar14) {
        iVar6 = piVar12[uVar19 + 2];
        lVar15 = *param_3;
        uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)piVar12[uVar19 + 1] * 0xd0 + 8);
        FUN_109456714(lVar15,uStack_68,&uStack_68);
        iVar5 = *(int *)(lVar15 + 0x18);
        lVar15 = *param_3;
        uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar6 * 0xd0 + 8);
        FUN_109456714(lVar15,uStack_68,&uStack_68);
        uVar13 = uVar17;
        piVar7 = piVar12 + uVar19 + 2;
        if (iVar5 <= *(int *)(lVar15 + 0x18)) {
          uVar13 = uVar1;
          piVar7 = piVar12 + uVar19 + 1;
        }
      }
      piVar20 = piStack_70;
      *piVar12 = *piVar7;
      uVar19 = uVar13;
      piVar12 = piVar7;
    } while ((long)uVar13 <= (long)(uVar14 - 2 >> 1));
    param_2 = param_2 + -1;
    if (piVar7 == param_2) {
      *piVar7 = iVar4;
    }
    else {
      *piVar7 = *param_2;
      *param_2 = iVar4;
      lVar15 = (long)piVar7 + (4 - (long)piStack_70) >> 2;
      if (1 < lVar15) {
        uVar19 = lVar15 - 2U >> 1;
        piVar12 = piStack_70 + uVar19;
        iVar5 = *piVar7;
        lVar15 = *param_3;
        uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)*piVar12 * 0xd0 + 8);
        FUN_109456714(lVar15,uStack_68,&uStack_68);
        iVar4 = *(int *)(lVar15 + 0x18);
        lVar15 = *param_3;
        uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar5 * 0xd0 + 8);
        FUN_109456714(lVar15,uStack_68,&uStack_68);
        if (*(int *)(lVar15 + 0x18) < iVar4) {
          iVar4 = *piVar7;
          do {
            piVar20 = piVar12;
            *piVar7 = *piVar20;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1 >> 1;
            piVar12 = piStack_70 + uVar19;
            lVar15 = *param_3;
            uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)*piVar12 * 0xd0 + 8);
            FUN_109456714(lVar15,uStack_68,&uStack_68);
            iVar5 = *(int *)(lVar15 + 0x18);
            lVar15 = *param_3;
            uStack_68 = *(undefined8 *)(*(long *)param_3[1] + (long)iVar4 * 0xd0 + 8);
            FUN_109456714(lVar15,uStack_68,&uStack_68);
            piVar7 = piVar20;
          } while (*(int *)(lVar15 + 0x18) < iVar5);
          *piVar20 = iVar4;
          piVar20 = piStack_70;
        }
      }
    }
    bVar3 = (long)uVar14 < 3;
    uVar14 = uVar14 - 1;
    if (bVar3) {
      return;
    }
  } while( true );
code_r0x000109455460:
  if (((ulong)piVar7 & 1) == 0) {
LAB_109455464:
    FUN_1094550ac(param_1,piVar16,param_3,param_4,param_5 & 1);
    param_5 = 0;
  }
  goto LAB_1094550fc;
}



/* Entry: 109455dd8; end: 10945618f;  */

void FUN_109455dd8(int *param_1,int *param_2,int *param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_58;
  
  iVar2 = *param_1;
  lVar3 = *param_4;
  uStack_58 = *(undefined8 *)(*(long *)param_4[1] + (long)*param_2 * 0xd0 + 8);
  FUN_109456714(lVar3,uStack_58,&uStack_58);
  iVar1 = *(int *)(lVar3 + 0x18);
  lVar3 = *param_4;
  uStack_58 = *(undefined8 *)(*(long *)param_4[1] + (long)iVar2 * 0xd0 + 8);
  FUN_109456714(lVar3,uStack_58,&uStack_58);
  iVar2 = *param_2;
  lVar4 = *param_4;
  if (*(int *)(lVar3 + 0x18) < iVar1) {
    uStack_58 = *(undefined8 *)(*(long *)param_4[1] + (long)*param_3 * 0xd0 + 8);
    FUN_109456714(lVar4,uStack_58,&uStack_58);
    iVar1 = *(int *)(lVar4 + 0x18);
    lVar3 = *param_4;
    uStack_58 = *(undefined8 *)(*(long *)param_4[1] + (long)iVar2 * 0xd0 + 8);
    FUN_109456714(lVar3,uStack_58,&uStack_58);
    iVar2 = *param_1;
    if (*(int *)(lVar3 + 0x18) < iVar1) {
      *param_1 = *param_3;
      *param_3 = iVar2;
    }
    else {
      *param_1 = *param_2;
      *param_2 = iVar2;
      lVar3 = *param_4;
      uStack_58 = *(undefined8 *)(*(long *)param_4[1] + (long)*param_3 * 0xd0 + 8);
      FUN_109456714(lVar3,uStack_58,&uStack_58);
      iVar1 = *(int *)(lVar3 + 0x18);
      lVar3 = *param_4;
      uStack_58 = *(undefined8 *)(*(long *)param_4[1] + (long)iVar2 * 0xd0 + 8);
      FUN_109456714(lVar3,uStack_58,&uStack_58);
      if (*(int *)(lVar3 + 0x18) < iVar1) {
        iVar1 = *param_2;
        *param_2 = *param_3;
        *param_3 = iVar1;
      }
    }
  }
  else {
    uStack_58 = *(undefined8 *)(*(long *)param_4[1] + (long)*param_3 * 0xd0 + 8);
    FUN_109456714(lVar4,uStack_58,&uStack_58);
    iVar1 = *(int *)(lVar4 + 0x18);
    lVar3 = *param_4;
    uStack_58 = *(undefined8 *)(*(long *)param_4[1] + (long)iVar2 * 0xd0 + 8);
    FUN_109456714(lVar3,uStack_58,&uStack_58);
    if (*(int *)(lVar3 + 0x18) < iVar1) {
      iVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = iVar1;
      iVar2 = *param_1;
      lVar3 = *param_4;
      uStack_58 = *(undefined8 *)(*(long *)param_4[1] + (long)*param_2 * 0xd0 + 8);
      FUN_109456714(lVar3,uStack_58,&uStack_58);
      iVar1 = *(int *)(lVar3 + 0x18);
      lVar3 = *param_4;
      uStack_58 = *(undefined8 *)(*(long *)param_4[1] + (long)iVar2 * 0xd0 + 8);
      FUN_109456714(lVar3,uStack_58,&uStack_58);
      if (*(int *)(lVar3 + 0x18) < iVar1) {
        iVar1 = *param_1;
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
    }
  }
  return;
}



/* Entry: 109456190; end: 1094565ff;  */

void FUN_109456190(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,long *param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uStack_68;
  
  func_0x000109456010();
  iVar2 = *param_4;
  lVar3 = *param_6;
  uStack_68 = *(undefined8 *)(*(long *)param_6[1] + (long)*param_5 * 0xd0 + 8);
  FUN_109456714(lVar3,uStack_68,&uStack_68);
  iVar1 = *(int *)(lVar3 + 0x18);
  lVar3 = *param_6;
  uStack_68 = *(undefined8 *)(*(long *)param_6[1] + (long)iVar2 * 0xd0 + 8);
  FUN_109456714(lVar3,uStack_68,&uStack_68);
  if (*(int *)(lVar3 + 0x18) < iVar1) {
    iVar1 = *param_4;
    *param_4 = *param_5;
    *param_5 = iVar1;
    iVar2 = *param_3;
    lVar3 = *param_6;
    uStack_68 = *(undefined8 *)(*(long *)param_6[1] + (long)*param_4 * 0xd0 + 8);
    FUN_109456714(lVar3,uStack_68,&uStack_68);
    iVar1 = *(int *)(lVar3 + 0x18);
    lVar3 = *param_6;
    uStack_68 = *(undefined8 *)(*(long *)param_6[1] + (long)iVar2 * 0xd0 + 8);
    FUN_109456714(lVar3,uStack_68,&uStack_68);
    if (*(int *)(lVar3 + 0x18) < iVar1) {
      iVar1 = *param_3;
      *param_3 = *param_4;
      *param_4 = iVar1;
      iVar2 = *param_2;
      lVar3 = *param_6;
      uStack_68 = *(undefined8 *)(*(long *)param_6[1] + (long)*param_3 * 0xd0 + 8);
      FUN_109456714(lVar3,uStack_68,&uStack_68);
      iVar1 = *(int *)(lVar3 + 0x18);
      lVar3 = *param_6;
      uStack_68 = *(undefined8 *)(*(long *)param_6[1] + (long)iVar2 * 0xd0 + 8);
      FUN_109456714(lVar3,uStack_68,&uStack_68);
      if (*(int *)(lVar3 + 0x18) < iVar1) {
        iVar1 = *param_2;
        *param_2 = *param_3;
        *param_3 = iVar1;
        iVar2 = *param_1;
        lVar3 = *param_6;
        uStack_68 = *(undefined8 *)(*(long *)param_6[1] + (long)*param_2 * 0xd0 + 8);
        FUN_109456714(lVar3,uStack_68,&uStack_68);
        iVar1 = *(int *)(lVar3 + 0x18);
        lVar3 = *param_6;
        uStack_68 = *(undefined8 *)(*(long *)param_6[1] + (long)iVar2 * 0xd0 + 8);
        FUN_109456714(lVar3,uStack_68,&uStack_68);
        if (*(int *)(lVar3 + 0x18) < iVar1) {
          iVar1 = *param_1;
          *param_1 = *param_2;
          *param_2 = iVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 109456600; end: 1094566cb;  */

long * FUN_109456600(long *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = param_1 + 1;
  plVar2 = (long *)*plVar1;
  do {
    plVar3 = plVar1;
    if (plVar2 == (long *)0x0) {
LAB_109456664:
      plVar2 = (long *)0x30;
      __Znwm();
      plVar2[4] = *param_3;
      plVar2[5] = 0;
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar1;
      *plVar3 = (long)plVar2;
      plVar1 = plVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        plVar1 = (long *)*plVar3;
      }
      func_0x000107c27d40(param_1[1],plVar1);
      param_1[2] = param_1[2] + 1;
      return plVar2;
    }
    while (plVar1 = plVar2, (ulong)plVar1[4] <= param_2) {
      if (param_2 <= (ulong)plVar1[4]) {
        return plVar1;
      }
      plVar2 = (long *)plVar1[1];
      if ((long *)plVar1[1] == (long *)0x0) {
        plVar3 = plVar1 + 1;
        goto LAB_109456664;
      }
    }
    plVar2 = (long *)*plVar1;
  } while( true );
}



/* Entry: 1094566cc; end: 109456713;  */

long * FUN_1094566cc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109456714; end: 109456af7;  */

long * FUN_109456714(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x24;
  
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  uVar8 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar5) * -0x622015f714c7d297;
  uVar8 = ((ulong)uVar5 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  uVar15 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar6 = uVar8 - 1;
    if ((uVar8 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar10 * uVar8;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar10 = plVar9[1];
        if (uVar10 == uVar15) {
          if (plVar9[2] == param_2) {
            return plVar9;
          }
        }
        else {
          if ((uVar8 & uVar6) == 0) {
            uVar10 = uVar10 & uVar6;
          }
          else if (uVar8 <= uVar10) {
            uVar7 = 0;
            if (uVar8 != 0) {
              uVar7 = uVar10 / uVar8;
            }
            uVar10 = uVar10 - uVar7 * uVar8;
          }
          if (uVar10 != unaff_x24) break;
        }
      }
    }
  }
  plVar9 = (long *)0x20;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar15;
  plVar9[2] = *param_3;
  *(undefined4 *)(plVar9 + 3) = 0;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar8) {
      uVar6 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar6 = uVar6 | uVar8 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar6) {
LAB_10945689c:
      if (uVar6 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109456ae4);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar8 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
      plVar11 = (long *)param_1[2];
      uVar8 = uVar6;
      if (plVar11 != (long *)0x0) {
        uVar10 = plVar11[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar6 <= uVar10) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar10 / uVar6;
          }
          uVar10 = uVar10 - uVar14 * uVar6;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar11;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar6 & uVar7) == 0) {
            uVar14 = uVar14 & uVar7;
          }
          else if (uVar6 <= uVar14) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar1 * uVar6;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar10) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar14 * 8) == 0) {
              *(long **)(lVar3 + uVar14 * 8) = plVar11;
              uVar10 = uVar14;
            }
            else {
              *plVar11 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar3 + uVar14 * 8);
              **(long **)(lVar3 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar11;
            }
          }
          plVar11 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar6 < uVar8) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar10) {
        uVar6 = uVar10;
      }
      if (uVar6 < uVar8) {
        if (uVar6 != 0) goto LAB_10945689c;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = param_1[1];
      }
    }
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar6 * uVar8;
      }
    }
  }
  lVar3 = *param_1;
  plVar11 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = param_1 + 2;
    *plVar9 = *plVar11;
    *plVar11 = (long)plVar9;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar11;
    if (*plVar9 == 0) goto LAB_109456a7c;
    uVar15 = *(ulong *)(*plVar9 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar15 = uVar15 & uVar8 - 1;
    }
    else if (uVar8 <= uVar15) {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = uVar15 / uVar8;
      }
      uVar15 = uVar15 - uVar6 * uVar8;
    }
    plVar11 = (long *)(*param_1 + uVar15 * 8);
  }
  else {
    *plVar9 = *plVar11;
  }
  *plVar11 = (long)plVar9;
LAB_109456a7c:
  param_1[3] = param_1[3] + 1;
  return plVar9;
}



/* Entry: 109456af8; end: 109456b53;  */

void FUN_109456af8(undefined8 param_1,undefined **param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  
  ppuVar1 = &PTR_PTR_1132cf2f8;
  if (param_2 != (undefined **)0x0) {
    ppuVar1 = param_2;
  }
  puStack_20 = ppuVar1[4];
  puStack_28 = ppuVar1[3];
  puStack_30 = ppuVar1[2];
  ppuVar1 = &PTR_PTR_1132cf2f8;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  puStack_40 = ppuVar1[4];
  puStack_48 = ppuVar1[3];
  puStack_50 = ppuVar1[2];
  FUN_10937f620(param_1,&puStack_30,&puStack_50);
  return;
}



/* Entry: 109456b54; end: 109456e5b;  */

void FUN_109456b54(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  long *plStack_30;
  long *plStack_28;
  
  func_0x000107c31940(&ppuStack_90,&UNK_10f56daa1);
  (**(code **)(*param_2 + 0x10))(&plStack_28,param_2,&ppuStack_90);
  if (lStack_80 < 0) {
    __ZdlPv(ppuStack_90);
  }
  plVar1 = plStack_28;
  (**(code **)(*plStack_28 + 0x28))();
  if (((ulong)plVar1 & 1) == 0) {
    FUN_10937e740(&ppuStack_90,&UNK_10f56db37);
    FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56db24,0x102,&ppuStack_90);
    if (lStack_80 < 0) {
      __ZdlPv(ppuStack_90);
    }
    *param_1 = 0;
    goto LAB_109456cfc;
  }
  (**(code **)(*plStack_28 + 0x20))(&plStack_30);
  ppuStack_90 = &PTR_FUN_110af0078;
  uStack_88 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_3f = 0;
  uStack_47 = 0;
  uStack_40 = 0;
  if (*(int *)((long)plStack_30 + *(long *)(*plStack_30 + -0x18) + 0x20) == 0) {
    uVar2 = 0;
    func_0x00010b4d15d4();
    if ((uVar2 & 1) == 0) {
      FUN_10937e740(auStack_a8,&UNK_10f56db7b);
      FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56db24,0x10c,auStack_a8);
      goto LAB_109456cc8;
    }
    FUN_109456e5c(param_1,&ppuStack_90);
  }
  else {
    FUN_10937e740(auStack_a8,&UNK_10f56db56);
    FUN_109388c6c(1,&UNK_10f56daa9,&UNK_10f56db24,0x108,auStack_a8);
LAB_109456cc8:
    if (cStack_91 < '\0') {
      __ZdlPv(auStack_a8[0]);
    }
    *param_1 = 0;
  }
  func_0x000109343234(&ppuStack_90);
  plVar1 = plStack_30;
  plStack_30 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
LAB_109456cfc:
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}



/* Entry: 109456e5c; end: 109457f8f;  */

void FUN_109456e5c(long *param_1,ulong param_2)

{
  undefined **ppuVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  ulong *puVar5;
  int iVar6;
  undefined4 uVar7;
  char cVar8;
  ulong uVar9;
  code *pcVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  bool bVar22;
  undefined **ppuVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong uVar28;
  long lVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  double dVar37;
  undefined *puVar38;
  float fVar39;
  undefined *puVar40;
  double dStack_5c0;
  double dStack_5b8;
  undefined4 *puStack_5a8;
  undefined *puStack_5a0;
  undefined *puStack_598;
  long lStack_590;
  undefined1 auStack_580 [16];
  long lStack_570;
  long lStack_568;
  undefined8 *puStack_558;
  long lStack_550;
  ulong uStack_548;
  long *plStack_540;
  ulong uStack_538;
  float fStack_530;
  undefined *puStack_520;
  undefined *puStack_518;
  long lStack_510;
  undefined1 auStack_4c0 [4];
  int iStack_4bc;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_488;
  long lStack_480;
  undefined1 *puStack_478;
  undefined1 auStack_470 [32];
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined1 auStack_430 [56];
  undefined8 uStack_3f8;
  char cStack_3e1;
  undefined **appuStack_3d0 [20];
  long *plStack_330;
  long *plStack_328;
  long *plStack_320;
  long *plStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_220;
  long *plStack_218;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined2 uStack_c8;
  undefined1 uStack_c0;
  long *plStack_b8;
  char cStack_b0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar27 = (ulong *)(param_2 + 0x18);
  uVar25 = *puVar27;
  uVar26 = uVar25 & 1;
  puVar5 = puVar27;
  if (uVar26 != 0) {
    puVar5 = (ulong *)(uVar25 + 7);
  }
  ppuVar1 = &PTR_PTR_1132d9460;
  if (*(undefined ***)(*puVar5 + 0x20) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(*puVar5 + 0x20);
  }
  uVar7 = *(undefined4 *)(ppuVar1 + 2);
  puVar11 = (undefined4 *)0x68;
  __Znwm();
  *puVar11 = uVar7;
  *(undefined1 *)(puVar11 + 0x14) = 0;
  *(undefined8 *)(puVar11 + 4) = 0;
  *(undefined8 *)(puVar11 + 2) = 0;
  *(undefined8 *)(puVar11 + 8) = 0;
  *(undefined8 *)(puVar11 + 6) = 0;
  *(undefined8 *)(puVar11 + 0xc) = 0;
  *(undefined8 *)(puVar11 + 10) = 0;
  *(undefined8 *)(puVar11 + 0x16) = 0;
  *(undefined8 *)(puVar11 + 0x18) = 0;
  *param_1 = (long)puVar11;
  uStack_548 = 0;
  lStack_550 = 0;
  uStack_538 = 0;
  plStack_540 = (long *)0x0;
  fStack_530 = 1.0;
  ppuVar1 = &PTR_PTR_1132d9128;
  if (*(undefined ***)(param_2 + 0x48) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x48);
  }
  puVar18 = ppuVar1[2];
  ppuVar23 = ppuVar1 + 2;
  if (((ulong)puVar18 & 1) != 0) {
    ppuVar23 = (undefined **)(puVar18 + 7);
  }
  if (*(int *)(ppuVar1 + 3) != 0) {
    ppuVar1 = ppuVar23 + *(int *)(ppuVar1 + 3);
    uVar26 = param_2;
    do {
      puVar18 = *ppuVar23;
      ppuVar17 = &PTR_PTR_1132cf2d8;
      if (*(undefined ***)(puVar18 + 0x18) != (undefined **)0x0) {
        ppuVar17 = *(undefined ***)(puVar18 + 0x18);
      }
      puVar38 = ppuVar17[2];
      fVar39 = *(float *)(ppuVar17 + 3);
      ppuVar17 = &PTR_PTR_1132cf2d8;
      if (*(undefined ***)(puVar18 + 0x20) != (undefined **)0x0) {
        ppuVar17 = *(undefined ***)(puVar18 + 0x20);
      }
      puVar40 = ppuVar17[2];
      fVar36 = *(float *)(ppuVar17 + 3);
      puVar12 = (undefined8 *)0x68;
      __Znwm();
      *puVar12 = 0;
      puVar12[2] = (double)(float)((ulong)puVar38 >> 0x20);
      puVar12[1] = (double)SUB84(puVar38,0);
      puVar12[3] = (double)fVar39;
      puVar12[5] = (double)(float)((ulong)puVar40 >> 0x20);
      puVar12[4] = (double)SUB84(puVar40,0);
      puVar12[6] = (double)fVar36;
      *(undefined4 *)(puVar12 + 7) = 0x80000000;
      *(undefined1 *)(puVar12 + 8) = 0;
      *(undefined1 *)(puVar12 + 9) = 0;
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      *(undefined1 *)(puVar12 + 0xc) = 1;
      *(undefined4 *)(puVar12 + 10) = 3;
      uVar28 = *(ulong *)(puVar18 + 0x28);
      puVar13 = puVar11;
      puStack_558 = puVar12;
      FUN_1094547a0(puVar11,&puStack_558,uVar28);
      uVar25 = uStack_548;
      if (uStack_548 != 0) {
        uVar16 = uStack_548 - 1;
        if ((uStack_548 & uVar16) == 0) {
          uVar26 = uVar16 & uVar28;
        }
        else {
          uVar26 = uVar28;
          if (uStack_548 <= uVar28) {
            uVar26 = 0;
            if (uStack_548 != 0) {
              uVar26 = uVar28 / uStack_548;
            }
            uVar26 = uVar28 - uVar26 * uStack_548;
          }
        }
        plVar19 = *(long **)(lStack_550 + uVar26 * 8);
        if (plVar19 != (long *)0x0) {
          do {
            while( true ) {
              plVar19 = (long *)*plVar19;
              if (plVar19 == (long *)0x0) goto LAB_109457070;
              uVar20 = plVar19[1];
              if (uVar20 != uVar28) break;
              if (plVar19[2] == uVar28) {
                bVar22 = false;
                goto LAB_1094572f4;
              }
            }
            if ((uStack_548 & uVar16) == 0) {
              uVar20 = uVar20 & uVar16;
            }
            else if (uStack_548 <= uVar20) {
              uVar9 = 0;
              if (uStack_548 != 0) {
                uVar9 = uVar20 / uStack_548;
              }
              uVar20 = uVar20 - uVar9 * uStack_548;
            }
          } while (uVar20 == uVar26);
        }
      }
LAB_109457070:
      plVar19 = (long *)0x20;
      __Znwm();
      *plVar19 = 0;
      plVar19[1] = uVar28;
      plVar19[2] = uVar28;
      *(int *)(plVar19 + 3) = (int)puVar13;
      if ((uVar25 == 0) || (fStack_530 * (float)uVar25 < (float)(uStack_538 + 1))) {
        uVar26 = 1;
        if (2 < uVar25) {
          uVar26 = (ulong)((uVar25 & uVar25 - 1) != 0);
        }
        uVar26 = uVar26 | uVar25 << 1;
        uVar16 = (ulong)((float)(uStack_538 + 1) / fStack_530);
        if (uVar26 <= uVar16) {
          uVar26 = uVar16;
        }
        uVar16 = uVar25;
        if (uVar26 - 1 == 0) {
          uVar26 = 2;
        }
        else if ((uVar26 & uVar26 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
          uVar16 = uStack_548;
        }
        uVar25 = uVar26;
        if (uVar16 < uVar26) {
LAB_109457108:
          if (uVar25 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_109457dc4;
          }
          lVar15 = uVar25 << 3;
          __Znwm();
          bVar22 = lStack_550 != 0;
          lStack_550 = lVar15;
          if (bVar22) {
            __ZdlPv();
          }
          uVar26 = 0;
          do {
            *(undefined8 *)(lStack_550 + uVar26 * 8) = 0;
            uVar26 = uVar26 + 1;
          } while (uVar25 != uVar26);
          uStack_548 = uVar25;
          if (plStack_540 != (long *)0x0) {
            uVar26 = plStack_540[1];
            uVar16 = uVar25 - 1;
            if ((uVar25 & uVar16) == 0) {
              uVar26 = uVar26 & uVar16;
            }
            else if (uVar25 <= uVar26) {
              uVar20 = 0;
              if (uVar25 != 0) {
                uVar20 = uVar26 / uVar25;
              }
              uVar26 = uVar26 - uVar20 * uVar25;
            }
            *(long ***)(lStack_550 + uVar26 * 8) = &plStack_540;
            plVar14 = (long *)*plStack_540;
            plVar3 = plStack_540;
            while (plVar14 != (long *)0x0) {
              uVar20 = plVar14[1];
              if ((uVar25 & uVar16) == 0) {
                uVar20 = uVar20 & uVar16;
              }
              else if (uVar25 <= uVar20) {
                uVar9 = 0;
                if (uVar25 != 0) {
                  uVar9 = uVar20 / uVar25;
                }
                uVar20 = uVar20 - uVar9 * uVar25;
              }
              plVar21 = plVar14;
              if (uVar20 != uVar26) {
                if (*(long *)(lStack_550 + uVar20 * 8) == 0) {
                  *(long **)(lStack_550 + uVar20 * 8) = plVar3;
                  uVar26 = uVar20;
                }
                else {
                  *plVar3 = *plVar14;
                  *plVar14 = **(long **)(lStack_550 + uVar20 * 8);
                  **(undefined8 **)(lStack_550 + uVar20 * 8) = plVar14;
                  plVar21 = plVar3;
                }
              }
              plVar3 = plVar21;
              plVar14 = (long *)*plVar21;
            }
          }
        }
        else {
          uVar25 = uVar16;
          if (uVar26 < uVar16) {
            uVar25 = (ulong)((float)uStack_538 / fStack_530);
            if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar25) {
              uVar25 = 1L << (-LZCOUNT(uVar25 - 1) & 0x3fU);
            }
            lVar15 = lStack_550;
            if (uVar26 <= uVar25) {
              uVar26 = uVar25;
            }
            uVar25 = uStack_548;
            if (uVar26 < uVar16) {
              uVar25 = uVar26;
              if (uVar26 != 0) goto LAB_109457108;
              lStack_550 = 0;
              if (lVar15 != 0) {
                __ZdlPv();
              }
              uStack_548 = 0;
              uVar25 = 0;
            }
          }
        }
        if ((uVar25 & uVar25 - 1) == 0) {
          uVar26 = uVar25 - 1 & uVar28;
        }
        else {
          uVar26 = uVar28;
          if (uVar25 <= uVar28) {
            uVar26 = 0;
            if (uVar25 != 0) {
              uVar26 = uVar28 / uVar25;
            }
            uVar26 = uVar28 - uVar26 * uVar25;
          }
        }
      }
      plVar14 = *(long **)(lStack_550 + uVar26 * 8);
      if (plVar14 == (long *)0x0) {
        *plVar19 = (long)plStack_540;
        *(long ***)(lStack_550 + uVar26 * 8) = &plStack_540;
        plStack_540 = plVar19;
        if (*plVar19 != 0) {
          uVar28 = *(ulong *)(*plVar19 + 8);
          if ((uVar25 & uVar25 - 1) == 0) {
            uVar28 = uVar28 & uVar25 - 1;
          }
          else if (uVar25 <= uVar28) {
            uVar16 = 0;
            if (uVar25 != 0) {
              uVar16 = uVar28 / uVar25;
            }
            uVar28 = uVar28 - uVar16 * uVar25;
          }
          plVar14 = (long *)(lStack_550 + uVar28 * 8);
          goto LAB_1094572e0;
        }
      }
      else {
        *plVar19 = *plVar14;
LAB_1094572e0:
        *plVar14 = (long)plVar19;
      }
      uStack_538 = uStack_538 + 1;
      bVar22 = true;
LAB_1094572f4:
      puVar12 = puStack_558;
      puStack_558 = (undefined8 *)0x0;
      if (puVar12 != (undefined8 *)0x0) {
        __ZdlPv();
      }
      if (!bVar22) {
        func_0x000105688514(&UNK_10f56dbaf);
        goto LAB_109457dc4;
      }
      ppuVar23 = ppuVar23 + 1;
    } while (ppuVar23 != ppuVar1);
    uVar25 = *puVar27;
    uVar26 = uVar25 & 1;
  }
  if (uVar26 != 0) {
    puVar27 = (ulong *)(uVar25 + 7);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    puVar5 = puVar27 + *(int *)(param_2 + 0x20);
    ppuVar1 = (undefined **)
              (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    auVar31 = NEON_fmov(0x403e000000000000,8);
    do {
      uVar26 = *puVar27;
      plStack_320 = (long *)0x0;
      uStack_2c8 = 0;
      uStack_2c0 = 0;
      uStack_308 = 0;
      plStack_310 = (long *)0x0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2d0 = 0;
      uStack_2a8 = 0;
      uStack_2a0 = 0;
      uStack_2b0 = 0;
      uStack_288 = 0;
      uStack_280 = 0;
      uStack_290 = 0;
      uStack_298 = 0x3ff0000000000000;
      uStack_270 = 0x3ff0000000000000;
      uStack_268 = 0;
      uStack_260 = 0;
      uStack_258 = 0;
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_248 = 0;
      uStack_250 = 0x3ff0000000000000;
      uStack_230 = 0x3ff0000000000000;
      plStack_218 = (long *)0x0;
      uStack_220 = 0;
      dStack_208 = 0.0;
      dStack_210 = 0.0;
      dStack_200 = 0.0;
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      uStack_1f0 = 0;
      dStack_1f8 = 1.0;
      uStack_1d8 = 0x3ff0000000000000;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1d0 = 0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_1b0 = 0x3ff0000000000000;
      uStack_190 = 0x3ff0000000000000;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_188 = 0;
      uStack_170 = 0x3ff0000000000000;
      uStack_160 = 0;
      lStack_150 = 0;
      lStack_158 = 0;
      lStack_140 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      lStack_138 = 0;
      lStack_120 = 0;
      lStack_128 = 0;
      uStack_118 = 0;
      uStack_e8 = 0x403e000000000000;
      uStack_e0 = 0x403e000000000000;
      uStack_d8 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      plStack_330 = (long *)(double)iRam0000000113732d80;
      cStack_b0 = '\0';
      ppuVar17 = *(undefined ***)(uVar26 + 0x18);
      ppuVar23 = &PTR_PTR_1132d94b8;
      if (ppuVar17 != (undefined **)0x0) {
        ppuVar23 = ppuVar17;
      }
      if (((ulong)ppuVar23[2] & 1) != 0) {
        FUN_109457f90(&ppuStack_450,ppuVar23[7]);
        FUN_109457fd4(&plStack_330,&ppuStack_450);
        _free(uStack_3f8);
        ppuVar17 = *(undefined ***)(uVar26 + 0x18);
      }
      ppuVar23 = &PTR_PTR_1132d94b8;
      if (ppuVar17 != (undefined **)0x0) {
        ppuVar23 = ppuVar17;
      }
      if ((*(byte *)(ppuVar23 + 2) >> 3 & 1) != 0) {
        puVar18 = ppuVar23[10];
        dStack_5b8 = *(double *)(puVar18 + 0x18);
        dStack_5c0 = *(double *)(puVar18 + 0x10);
        dVar37 = *(double *)(puVar18 + 0x20);
        dVar32 = dVar37 * dVar37 + dStack_5c0 * dStack_5c0 + dStack_5b8 * dStack_5b8;
        dVar30 = SQRT(dVar32);
        if (0.0 < dVar32) {
          dStack_5c0 = dStack_5c0 / dVar30;
          dStack_5b8 = dStack_5b8 / dVar30;
          dVar37 = dVar37 / dVar30;
          dVar32 = dVar30;
        }
        dStack_208 = (double)___sincos_stret(dVar30 * 0.5);
        dStack_200 = dStack_208 * dVar37;
        dStack_210 = dStack_5c0 * dStack_208;
        dStack_208 = dStack_5b8 * dStack_208;
        dVar30 = dStack_210 * dStack_210 + dStack_200 * dStack_200 +
                 dStack_208 * dStack_208 + dVar32 * dVar32;
        if (0.0 < dVar30) {
          dVar30 = SQRT(dVar30);
          dStack_210 = dStack_210 / dVar30;
          dStack_208 = dStack_208 / dVar30;
          dStack_200 = dStack_200 / dVar30;
          dVar32 = dVar32 / dVar30;
        }
        uStack_c8 = CONCAT11(uStack_c8._1_1_,1);
        ppuVar17 = *(undefined ***)(uVar26 + 0x18);
        dStack_1f8 = dVar32;
      }
      ppuVar23 = &PTR_PTR_1132d94b8;
      if (ppuVar17 != (undefined **)0x0) {
        ppuVar23 = ppuVar17;
      }
      if ((*(byte *)(ppuVar23 + 2) >> 2 & 1) != 0) {
        puVar18 = ppuVar23[9];
        uStack_f0 = *(undefined8 *)(puVar18 + 0x20);
        uStack_f8 = *(undefined8 *)(puVar18 + 0x18);
        uStack_100 = *(undefined8 *)(puVar18 + 0x10);
        uStack_d8 = 1;
        ppuVar17 = *(undefined ***)(uVar26 + 0x18);
        uStack_e8 = auVar31._0_8_;
        uStack_e0 = auVar31._8_8_;
      }
      ppuVar23 = &PTR_PTR_1132d94b8;
      if (ppuVar17 != (undefined **)0x0) {
        ppuVar23 = ppuVar17;
      }
      fVar39 = *(float *)(ppuVar23 + 0xc);
      ppuVar17 = &PTR_PTR_1132cf3a8;
      if ((undefined **)ppuVar23[8] != (undefined **)0x0) {
        ppuVar17 = (undefined **)ppuVar23[8];
      }
      FUN_109456af8(&ppuStack_450,ppuVar17[3],ppuVar17[4]);
      puVar11 = (undefined4 *)0x470;
      __Znwm();
      dVar32 = (double)fVar39;
      FUN_1094607b0(dVar32);
      ppuVar23 = &PTR_PTR_1132d94b8;
      if (*(undefined ***)(uVar26 + 0x18) != (undefined **)0x0) {
        ppuVar23 = *(undefined ***)(uVar26 + 0x18);
      }
      if ((*(byte *)(ppuVar23 + 2) >> 4 & 1) != 0) {
        puVar18 = ppuVar23[0xb];
        uVar7 = *(undefined4 *)(puVar18 + 0x38);
        ppuStack_448 = (undefined **)0x0;
        ppuStack_440 = (undefined **)0x0;
        ppuStack_450 = (undefined **)0x0;
        FUN_10945f9cc(&ppuStack_450,*(long *)(puVar18 + 0x20),
                      *(long *)(puVar18 + 0x20) + (long)*(int *)(puVar18 + 0x18) * 4);
        ppuVar23 = &PTR_PTR_1132d9440;
        if (*(undefined ***)(puVar18 + 0x30) != (undefined **)0x0) {
          ppuVar23 = *(undefined ***)(puVar18 + 0x30);
        }
        puStack_520 = ppuVar23[2];
        puStack_518 = (undefined *)CONCAT44(puStack_518._4_4_,*(undefined4 *)(ppuVar23 + 3));
        FUN_1099a23c8(auStack_580,uVar7,&ppuStack_450,&puStack_520);
        if (ppuStack_450 != (undefined **)0x0) {
          ppuStack_448 = ppuStack_450;
          __ZdlPv();
        }
        FUN_10945f960(puVar11 + 0x106,auStack_580);
        if (lStack_570 != 0) {
          lStack_568 = lStack_570;
          __ZdlPv();
        }
      }
      *puVar11 = 4;
      FUN_1092a988c(&ppuStack_450);
      FUN_1092b4db8(&ppuStack_440,&UNK_10f56dbc9,8);
      iRam0000000113732d80 = iRam0000000113732d80 + 1;
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      FUN_10926dc5c(&puStack_520,&ppuStack_438,&puStack_5a0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (puVar11 + 0x100,&puStack_520);
      if (lStack_510 < 0) {
        __ZdlPv(puStack_520);
      }
      puStack_5a0 = (undefined *)0x0;
      puStack_598 = (undefined *)0x0;
      lStack_590 = 0;
      ppuVar23 = &PTR_PTR_1132d9460;
      if (*(undefined ***)(uVar26 + 0x20) != (undefined **)0x0) {
        ppuVar23 = *(undefined ***)(uVar26 + 0x20);
      }
      if (*(int *)(ppuVar23 + 2) == 0) {
        FUN_109458098(dVar32,&puStack_520,uVar26);
      }
      else {
        if (*(int *)(ppuVar23 + 2) != 3) {
          func_0x000105688514(&UNK_10f56dbd2);
          goto LAB_109457dc4;
        }
        FUN_1094586bc(dVar32,&puStack_520,uVar26);
      }
      FUN_10945fa3c(&puStack_5a0);
      puVar38 = puStack_518;
      puVar18 = puStack_520;
      puStack_598 = puStack_518;
      puStack_5a0 = puStack_520;
      lStack_590 = lStack_510;
      puStack_518 = (undefined *)0x0;
      lStack_510 = 0;
      puStack_520 = (undefined *)0x0;
      FUN_10945fb40(&puStack_520);
      if (puVar18 != puVar38) {
        do {
          if (uStack_548 != 0) {
            uVar26 = *(ulong *)(puVar18 + 0xb0);
            uVar25 = uStack_548 - 1;
            if ((uStack_548 & uVar25) == 0) {
              uVar28 = uVar25 & uVar26;
            }
            else {
              uVar28 = uVar26;
              if (uStack_548 <= uVar26) {
                uVar28 = 0;
                if (uStack_548 != 0) {
                  uVar28 = uVar26 / uStack_548;
                }
                uVar28 = uVar26 - uVar28 * uStack_548;
              }
            }
            plVar19 = *(long **)(lStack_550 + uVar28 * 8);
            if (plVar19 != (long *)0x0) {
LAB_1094577f8:
              while (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0) {
                uVar16 = plVar19[1];
                if (uVar16 != uVar26) goto LAB_10945781c;
                if (plVar19[2] == uVar26) {
                  lVar15 = *(long *)(*(long *)(*param_1 + 0x20) + (long)*(int *)(plVar19 + 3) * 8);
                  if (((*(double *)(lVar15 + 0x20) == 0.0) && (*(double *)(lVar15 + 0x28) == 0.0))
                     && (*(double *)(lVar15 + 0x30) == 0.0)) {
                    dVar32 = *(double *)(puVar11 + 0xe0);
                    dVar30 = *(double *)(puVar11 + 0xe6);
                    dVar37 = *(double *)(puVar11 + 0xec);
                    dVar33 = *(double *)(puVar11 + 0xe4);
                    dVar34 = *(double *)(puVar11 + 0xea);
                    dVar35 = *(double *)(puVar11 + 0xf0);
                    *(double *)(lVar15 + 0x28) =
                         (*(double *)(puVar11 + 0xe2) * 0.0 + *(double *)(puVar11 + 0xe8) * 0.0) -
                         *(double *)(puVar11 + 0xee);
                    *(double *)(lVar15 + 0x20) = (dVar32 * 0.0 + dVar30 * 0.0) - dVar37;
                    *(double *)(lVar15 + 0x30) = dVar33 * 0.0 + (dVar34 * 0.0 - dVar35);
                  }
                  *(undefined1 *)(lVar15 + 0x60) = 1;
                  *(undefined4 *)(lVar15 + 0x50) = 3;
                  FUN_1094545a4(&puStack_520,lVar15,puVar18);
                  FUN_1094239ac(puVar11,&puStack_520);
                  if (lStack_488 != 0) {
                    piVar2 = (int *)(lStack_488 + 0x14);
                    do {
                      iVar6 = *piVar2;
                      cVar8 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar22) {
                        *piVar2 = iVar6 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (iVar6 + -1 == 0) {
                      func_0x000109a848d4(auStack_4c0);
                    }
                  }
                  lStack_488 = 0;
                  uStack_4a8 = 0;
                  uStack_4b0 = 0;
                  uStack_498 = 0;
                  uStack_4a0 = 0;
                  if (0 < iStack_4bc) {
                    lVar15 = 0;
                    do {
                      *(undefined4 *)(lStack_480 + lVar15 * 4) = 0;
                      lVar15 = lVar15 + 1;
                    } while (lVar15 < iStack_4bc);
                  }
                  if (puStack_478 != auStack_470 && puStack_478 != (undefined1 *)0x0) {
                    _free(*(undefined8 *)(puStack_478 + -8));
                  }
                  break;
                }
              }
            }
          }
LAB_109457968:
          puVar18 = puVar18 + 0xc0;
        } while (puVar18 != puVar38);
      }
      puStack_5a8 = puVar11;
      FUN_1094546bc(*param_1 + 8,&puStack_5a8);
      puVar11 = puStack_5a8;
      puStack_5a8 = (undefined4 *)0x0;
      if (puVar11 != (undefined4 *)0x0) {
        FUN_1094305a8();
        __ZdlPv();
      }
      FUN_10945fb40(&puStack_5a0);
      ppuStack_450 = &PTR_SUB_1108a5a38;
      appuStack_3d0[0] = &PTR_DAT_1108a5a88;
      ppuStack_440 = &PTR_DAT_1108a5a60;
      ppuStack_438 = &PTR_DAT_11088d7b0;
      if (cStack_3e1 < '\0') {
        __ZdlPv(uStack_3f8);
      }
      ppuStack_438 = ppuVar1;
      __ZNSt3__16localeD1Ev(auStack_430);
      __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_450,&PTR_PTR_1108a5aa0);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_3d0);
      plVar19 = plStack_b8;
      if ((cStack_b0 == '\x01') && (plStack_b8 != (long *)0x0)) {
        plVar14 = plStack_b8 + 1;
        do {
          lVar15 = *plVar14;
          cVar8 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar22) {
            *plVar14 = lVar15 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
      if (lStack_128 != 0) {
        lStack_120 = lStack_128;
        __ZdlPv();
      }
      if (lStack_140 != 0) {
        lStack_138 = lStack_140;
        __ZdlPv();
      }
      if (lStack_158 != 0) {
        lStack_150 = lStack_158;
        __ZdlPv();
      }
      plVar19 = plStack_218;
      if (plStack_218 != (long *)0x0) {
        plVar14 = plStack_218 + 1;
        do {
          lVar15 = *plVar14;
          cVar8 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar22) {
            *plVar14 = lVar15 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_218 + 0x10))(plStack_218);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
      _free(uStack_2c8);
      puVar27 = puVar27 + 1;
    } while (puVar27 != puVar5);
    puVar11 = (undefined4 *)*param_1;
  }
  *(undefined1 *)(puVar11 + 0x14) = *(undefined1 *)(param_2 + 0x58);
  puVar12 = (undefined8 *)0x60;
  __Znwm();
  puVar12[5] = 0;
  puVar12[4] = 0;
  puVar12[7] = 0;
  puVar12[6] = 0;
  puVar12[9] = 0;
  puVar12[8] = 0;
  puVar12[0xb] = 0;
  puVar12[10] = 0;
  puVar12[1] = 0;
  *puVar12 = 0;
  puVar12[3] = 0;
  puVar12[2] = 0;
  puVar12[3] = &PTR_FUN_110af0990;
  puVar12[6] = 0;
  puVar12[5] = 0;
  puVar12[8] = 0;
  puVar12[7] = 0;
  puVar12[10] = 0;
  puVar12[9] = 0;
  *(undefined4 *)(puVar12 + 0xb) = 0;
  plVar19 = (long *)(puVar11 + 0x18);
  lVar15 = *plVar19;
  plStack_330 = (long *)0x0;
  *plVar19 = (long)puVar12;
  if (lVar15 != 0) {
    FUN_109460b68(plVar19);
    plVar19 = plStack_330;
    plStack_330 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      FUN_109460b68(&plStack_330);
    }
  }
  uVar26 = *(ulong *)(param_2 + 0x30);
  puVar27 = (ulong *)(param_2 + 0x30);
  if ((uVar26 & 1) != 0) {
    puVar27 = (ulong *)(uVar26 + 7);
  }
  lVar15 = *param_1;
  if (*(int *)(param_2 + 0x38) != 0) {
    puVar5 = puVar27 + *(int *)(param_2 + 0x38);
    do {
      param_1 = (long *)*puVar27;
      plVar19 = *(long **)(lVar15 + 0x60);
      uVar26 = plVar19[1];
      if (uVar26 < (ulong)plVar19[2]) {
        FUN_1093463ac(uVar26,0,param_1);
        lVar24 = uVar26 + 0x40;
        plVar19[1] = lVar24;
      }
      else {
        lVar24 = uVar26 - *plVar19;
        uVar26 = (lVar24 >> 6) + 1;
        if (uVar26 >> 0x3a != 0) {
          FUN_10945fcc4();
LAB_109457dc4:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x109457dc8);
          (*pcVar10)();
        }
        uVar28 = plVar19[2] - *plVar19;
        uVar25 = (long)uVar28 >> 5;
        if (uVar25 <= uVar26) {
          uVar25 = uVar26;
        }
        if (0x7fffffffffffffbf < uVar28) {
          uVar25 = 0x3ffffffffffffff;
        }
        plStack_310 = plVar19;
        if (uVar25 == 0) {
          plVar14 = (long *)0x0;
        }
        else {
          if (uVar25 >> 0x3a != 0) {
            func_0x000104c4f740();
            goto LAB_109457dc4;
          }
          plVar14 = (long *)(uVar25 << 6);
          __Znwm();
        }
        lVar24 = (long)plVar14 + lVar24;
        plStack_330 = plVar14;
        plStack_328 = (long *)lVar24;
        plStack_320 = (long *)lVar24;
        plStack_318 = plVar14 + uVar25 * 8;
        FUN_1093463ac(lVar24,0,param_1);
        param_1 = (long *)*plVar19;
        plVar21 = (long *)plVar19[1];
        plVar3 = (long *)((long)param_1 + (lVar24 - (long)plVar21));
        if (plVar21 != param_1) {
          lVar29 = 0;
          do {
            puVar12 = (undefined8 *)((long)plVar3 + lVar29);
            *puVar12 = &PTR_FUN_110af0688;
            puVar12[1] = 0;
            puVar12[3] = 0;
            puVar12[2] = 0;
            puVar12[5] = 0;
            puVar12[4] = 0;
            puVar12[7] = 0;
            puVar12[6] = 0;
            if (plVar3 != param_1) {
              lVar4 = (long)param_1 + lVar29;
              uVar26 = *(ulong *)(lVar4 + 8);
              if ((uVar26 & 1) != 0) {
                uVar26 = *(ulong *)(uVar26 & 0xfffffffffffffffe);
              }
              if (uVar26 == 0) {
                FUN_10934688c(puVar12,lVar4);
              }
              else {
                FUN_1093464bc(puVar12);
                FUN_1093467c8(puVar12,lVar4);
              }
            }
            lVar29 = lVar29 + 0x40;
          } while ((long *)((long)param_1 + lVar29) != plVar21);
          do {
            FUN_109346454(param_1);
            param_1 = param_1 + 8;
          } while (param_1 != plVar21);
          param_1 = (long *)*plVar19;
        }
        lVar24 = lVar24 + 0x40;
        *plVar19 = (long)plVar3;
        plVar19[1] = lVar24;
        plStack_318 = (long *)plVar19[2];
        plVar19[2] = (long)(plVar14 + uVar25 * 8);
        plStack_330 = param_1;
        plStack_328 = param_1;
        plStack_320 = param_1;
        FUN_10945fcd8(&plStack_330);
      }
      plVar19[1] = lVar24;
      puVar27 = puVar27 + 1;
    } while (puVar27 != puVar5);
  }
  ppuVar1 = &PTR_PTR_1132d9f68;
  if (*(undefined ***)(param_2 + 0x50) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x50);
  }
  ppuVar23 = (undefined **)(*(long *)(lVar15 + 0x60) + 0x18);
  if (ppuVar1 != ppuVar23) {
    FUN_109347c18(ppuVar23);
    FUN_109347f30(ppuVar23,ppuVar1);
  }
  plVar19 = &lStack_550;
  FUN_109460768(plVar19);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    FUN_109460768(&lStack_550);
    *param_1 = 0;
    FUN_1094605a0(param_1);
    __Unwind_Resume(plVar19);
    func_0x000104bd46a0(plVar19);
    FUN_10937d46c();
    return;
  }
  return;
LAB_10945781c:
  if ((uStack_548 & uVar25) == 0) {
    uVar16 = uVar16 & uVar25;
  }
  else if (uStack_548 <= uVar16) {
    uVar20 = 0;
    if (uStack_548 != 0) {
      uVar20 = uVar16 / uStack_548;
    }
    uVar16 = uVar16 - uVar20 * uStack_548;
  }
  if (uVar16 != uVar28) goto LAB_109457968;
  goto LAB_1094577f8;
}



/* Entry: 109457f90; end: 109457fd3;  */

void FUN_109457f90(undefined8 param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x30);
  uStack_20 = *(undefined8 *)(param_2 + 0x28);
  uStack_28 = *(undefined8 *)(param_2 + 0x20);
  uStack_30 = *(undefined8 *)(param_2 + 0x18);
  uStack_38 = *(undefined8 *)(param_2 + 0x40);
  uStack_40 = *(undefined8 *)(param_2 + 0x38);
  FUN_10937d46c(param_1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),&uStack_20,
                &uStack_30,&uStack_40);
  return;
}


