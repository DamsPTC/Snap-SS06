/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107328860; end: 1073288f3;  */

long FUN_107328860(long param_1)

{
  func_0x0001072c91e8(param_1 + 0x140);
  func_0x0001001148fc(param_1 + 0x120);
  func_0x00010015b8c8(param_1 + 0x108);
  func_0x0001073288c0(param_1 + 0xe8);
  func_0x00010028ad98(param_1 + 0xc0);
  func_0x00010028ad98(param_1 + 0x98);
  func_0x00010724b3d8(param_1 + 0x58);
  func_0x0001001148fc(param_1 + 0x38);
  func_0x000107345ab0();
  return param_1;
}



/* Entry: 1073288f4; end: 10732898b;  */

void FUN_1073288f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [40];
  
  func_0x000100a2b988();
  func_0x0001073453c8();
  func_0x000107347d38();
  FUN_1073289ec();
  if (param_1 == 0) {
    FUN_107328aa8(auStack_60,param_3);
    func_0x000107347d38();
    func_0x0001073289a4();
    FUN_1073289c4();
    func_0x000107328f30(auStack_58);
  }
  else {
    FUN_107328f88(param_4,param_1 + 0x20);
  }
  func_0x000107346234();
  return;
}



/* Entry: 10732898c; end: 1073289c3;  */

long * FUN_10732898c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001073464f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  func_0x000107346078();
  FUN_107328ac0();
  return plVar1 + 4;
}



/* Entry: 1073289c4; end: 1073289eb;  */

undefined8 * FUN_1073289c4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107328e6c(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1073289ec; end: 107328aa7;  */

long FUN_1073289ec(long *param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  long *plVar3;
  long *extraout_x8;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar3 = param_1 + 3, *plVar3 != 0)) {
    func_0x00010784b234();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar3 & uVar7);
      uVar2 = true;
    }
    else {
      uVar2 = plVar3 == plVar6;
      plVar8 = plVar3;
      if (plVar6 <= plVar3) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar3 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        func_0x0001073476a4();
        if (!(bool)uVar2) break;
        func_0x000107347758();
        if ((int)plVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)extraout_x8 & uVar7);
      }
      else {
        plVar4 = extraout_x8;
        if (plVar6 <= extraout_x8) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)extraout_x8 / (ulong)plVar6;
          }
          plVar4 = (long *)((long)extraout_x8 - uVar1 * (long)plVar6);
        }
      }
      uVar2 = 1;
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 107328aa8; end: 107328abf;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000107328bb0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_107328aa8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,long *param_6)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long *extraout_x8;
  long *plVar6;
  long extraout_x8_00;
  long lVar7;
  long extraout_x9;
  long *unaff_x19;
  long *plVar8;
  long *plVar9;
  long *unaff_x25;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  plVar3 = *(long **)(param_3 + 0x18);
  if (plVar3 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001073477e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar12._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar12._0_8_ = plVar3;
    return auVar12;
  }
  func_0x000104bfeb48();
  func_0x000107346b14();
  func_0x00010784b234();
  plVar9 = (long *)unaff_x19[1];
  plVar4 = plVar3;
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    in_NG = (long)((ulong)plVar9 & uVar10) < 0;
    uVar2 = ((ulong)plVar9 & uVar10) == 0;
    if ((bool)uVar2) {
      func_0x0001073465d4();
    }
    else {
      in_NG = (long)plVar3 - (long)plVar9 < 0;
      uVar2 = plVar3 == plVar9;
      unaff_x25 = plVar3;
      if (plVar9 <= plVar3) {
        func_0x000107347ce8();
      }
    }
    plVar8 = *(long **)(*unaff_x19 + (long)unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_107328b70;
          func_0x0001073476a4();
          if (!(bool)uVar2) break;
          func_0x00010734774c();
          if (((ulong)plVar4 & 1) != 0) {
            uVar5 = 0;
            plVar4 = plVar8;
            goto LAB_107328c64;
          }
        }
        if (((ulong)plVar9 & uVar10) == 0) {
          plVar6 = (long *)((ulong)extraout_x8 & uVar10);
        }
        else {
          plVar6 = extraout_x8;
          if (plVar9 <= extraout_x8) {
            uVar1 = 0;
            if (plVar9 != (long *)0x0) {
              uVar1 = (ulong)extraout_x8 / (ulong)plVar9;
            }
            plVar6 = (long *)((long)extraout_x8 - uVar1 * (long)plVar9);
          }
        }
        in_NG = (long)plVar6 - (long)unaff_x25 < 0;
        uVar2 = 1;
      } while (plVar6 == unaff_x25);
    }
  }
LAB_107328b70:
  func_0x000107346ee4();
  *plVar4 = 0;
  plVar4[1] = (long)plVar3;
  lVar7 = *(long *)*param_6;
  *(int *)(plVar4 + 3) = (int)((long *)*param_6)[1];
  plVar4[2] = lVar7;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  func_0x000107345980();
  plVar8 = unaff_x25;
  if ((plVar9 == (long *)0x0) || (func_0x000107347ca8(param_1,param_2,(float)plVar9), (bool)in_NG))
  {
    func_0x000107347590();
    func_0x00010734530c();
    FUN_107328c7c();
    plVar9 = (long *)unaff_x19[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      func_0x0001073465d4();
    }
    else {
      plVar8 = plVar3;
      if (plVar9 <= plVar3) {
        func_0x000107347ce8();
        plVar8 = unaff_x25;
      }
    }
  }
  plVar3 = *(long **)(*unaff_x19 + (long)plVar8 * 8);
  if (plVar3 == (long *)0x0) {
    func_0x00010734756c();
    if (extraout_x9 != 0) {
      plVar3 = *(long **)(extraout_x9 + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar3 = (long *)((ulong)plVar3 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar3) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar3 / (ulong)plVar9;
        }
        plVar3 = (long *)((long)plVar3 - uVar10 * (long)plVar9);
      }
      *(long **)(extraout_x8_00 + (long)plVar3 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
  }
  func_0x000107345f3c();
  FUN_107328dfc();
  uVar5 = 1;
LAB_107328c64:
  auVar11._8_8_ = uVar5;
  auVar11._0_8_ = plVar4;
  return auVar11;
}



/* Entry: 107328ac0; end: 107328c7b;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000107328bb0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_107328ac0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,long *param_6)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *extraout_x8;
  undefined8 *puVar5;
  long extraout_x8_00;
  long extraout_x9;
  long *unaff_x19;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *unaff_x25;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  func_0x000107346b14();
  func_0x00010784b234();
  puVar7 = (undefined8 *)unaff_x19[1];
  puVar3 = param_3;
  if (puVar7 != (undefined8 *)0x0) {
    uVar8 = (long)puVar7 - 1;
    in_NG = (long)((ulong)puVar7 & uVar8) < 0;
    uVar2 = ((ulong)puVar7 & uVar8) == 0;
    if ((bool)uVar2) {
      func_0x0001073465d4();
    }
    else {
      in_NG = (long)param_3 - (long)puVar7 < 0;
      uVar2 = param_3 == puVar7;
      unaff_x25 = param_3;
      if (puVar7 <= param_3) {
        func_0x000107347ce8();
      }
    }
    puVar6 = *(undefined8 **)(*unaff_x19 + (long)unaff_x25 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      do {
        while( true ) {
          puVar6 = (undefined8 *)*puVar6;
          if (puVar6 == (undefined8 *)0x0) goto LAB_107328b70;
          func_0x0001073476a4();
          if (!(bool)uVar2) break;
          func_0x00010734774c();
          if (((ulong)puVar3 & 1) != 0) {
            uVar4 = 0;
            puVar3 = puVar6;
            goto LAB_107328c64;
          }
        }
        if (((ulong)puVar7 & uVar8) == 0) {
          puVar5 = (undefined8 *)((ulong)extraout_x8 & uVar8);
        }
        else {
          puVar5 = extraout_x8;
          if (puVar7 <= extraout_x8) {
            uVar1 = 0;
            if (puVar7 != (undefined8 *)0x0) {
              uVar1 = (ulong)extraout_x8 / (ulong)puVar7;
            }
            puVar5 = (undefined8 *)((long)extraout_x8 - uVar1 * (long)puVar7);
          }
        }
        in_NG = (long)puVar5 - (long)unaff_x25 < 0;
        uVar2 = 1;
      } while (puVar5 == unaff_x25);
    }
  }
LAB_107328b70:
  func_0x000107346ee4();
  *puVar3 = 0;
  puVar3[1] = param_3;
  uVar4 = *(undefined8 *)*param_6;
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((undefined8 *)*param_6 + 1);
  puVar3[2] = uVar4;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  func_0x000107345980();
  puVar6 = unaff_x25;
  if ((puVar7 == (undefined8 *)0x0) ||
     (func_0x000107347ca8(param_1,param_2,(float)puVar7), (bool)in_NG)) {
    func_0x000107347590();
    func_0x00010734530c();
    FUN_107328c7c();
    puVar7 = (undefined8 *)unaff_x19[1];
    if (((ulong)puVar7 & (long)puVar7 - 1U) == 0) {
      func_0x0001073465d4();
    }
    else {
      puVar6 = param_3;
      if (puVar7 <= param_3) {
        func_0x000107347ce8();
        puVar6 = unaff_x25;
      }
    }
  }
  puVar6 = *(undefined8 **)(*unaff_x19 + (long)puVar6 * 8);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x00010734756c();
    if (extraout_x9 != 0) {
      puVar6 = *(undefined8 **)(extraout_x9 + 8);
      if (((ulong)puVar7 & (long)puVar7 - 1U) == 0) {
        puVar6 = (undefined8 *)((ulong)puVar6 & (long)puVar7 - 1U);
      }
      else if (puVar7 <= puVar6) {
        uVar8 = 0;
        if (puVar7 != (undefined8 *)0x0) {
          uVar8 = (ulong)puVar6 / (ulong)puVar7;
        }
        puVar6 = (undefined8 *)((long)puVar6 - uVar8 * (long)puVar7);
      }
      *(undefined8 **)(extraout_x8_00 + (long)puVar6 * 8) = puVar3;
    }
  }
  else {
    *puVar3 = *puVar6;
    *puVar6 = puVar3;
  }
  func_0x000107345f3c();
  FUN_107328dfc();
  uVar4 = 1;
LAB_107328c64:
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = puVar3;
  return auVar9;
}



/* Entry: 107328c7c; end: 107328d07;  */

void FUN_107328c7c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x9;
  ulong uVar5;
  long *extraout_x9_00;
  long *plVar6;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar7;
  ulong uVar8;
  
  uVar3 = param_1;
  if (param_2 - 1 == 0) {
    uVar5 = 2;
  }
  else {
    uVar5 = param_2;
    if ((param_2 & param_2 - 1) != 0) {
      func_0x000107347be4();
      uVar5 = uVar3;
    }
  }
  uVar8 = *(ulong *)(param_1 + 8);
  uVar2 = uVar8 <= uVar5;
  if (uVar8 < uVar5) {
LAB_107328cc0:
    func_0x000107345ba8();
    if (param_2 == 0) {
      FUN_107328dcc(uVar3);
      *(undefined8 *)(uVar3 + 8) = 0;
    }
    else {
      lVar4 = uVar3 + 8;
      FUN_107328de4(lVar4);
      FUN_107328dcc(uVar3,lVar4);
      func_0x00010734732c();
      for (uVar5 = extraout_x9; param_2 != uVar5; uVar5 = uVar5 + 1) {
        *(undefined8 *)(extraout_x8 + uVar5 * 8) = 0;
      }
      if (*(long *)(uVar3 + 0x10) != 0) {
        func_0x000107346570();
        func_0x000107346554();
        lVar4 = extraout_x8_00;
        plVar7 = extraout_x9_00;
        uVar3 = extraout_x10;
        uVar5 = extraout_x11;
        while (plVar6 = plVar7, plVar7 = (long *)*plVar6, plVar7 != (long *)0x0) {
          uVar8 = plVar7[1];
          if ((param_2 & uVar3) == 0) {
            uVar8 = uVar8 & uVar3;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar5) {
            if (*(long *)(lVar4 + uVar8 * 8) == 0) {
              *(long **)(lVar4 + uVar8 * 8) = plVar6;
              uVar5 = uVar8;
            }
            else {
              func_0x000107345664();
              lVar4 = extraout_x8_01;
              plVar7 = extraout_x9_01;
              uVar3 = extraout_x10_00;
              uVar5 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!(bool)uVar2) {
    func_0x0001073458b8();
    if (((bool)uVar2) && ((uVar8 & uVar8 - 1) == 0)) {
      func_0x000107345684();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010734731c();
    if (!(bool)uVar2) goto LAB_107328cc0;
  }
  return;
}



/* Entry: 107328d08; end: 107328dcb;  */

void FUN_107328d08(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x9;
  ulong uVar3;
  long *extraout_x9_00;
  long *plVar4;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_107328dcc(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar2 = param_1 + 8;
    FUN_107328de4(lVar2);
    FUN_107328dcc(param_1,lVar2);
    func_0x00010734732c();
    for (uVar3 = extraout_x9; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(extraout_x8 + uVar3 * 8) = 0;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x000107346570();
      func_0x000107346554();
      lVar2 = extraout_x8_00;
      plVar6 = extraout_x9_00;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x000107345664();
            lVar2 = extraout_x8_01;
            plVar6 = extraout_x9_01;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 107328dcc; end: 107328de3;  */

void FUN_107328dcc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107328de4; end: 107328dfb;  */

void FUN_107328de4(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107346294();
  FUN_107328e1c();
  return;
}



/* Entry: 107328dfc; end: 107328e1b;  */

void FUN_107328dfc(void)

{
  func_0x000107346294();
  FUN_107328e1c();
  return;
}



/* Entry: 107328e1c; end: 107328e33;  */

void FUN_107328e1c(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x00010734743c(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x000107328f30(unaff_x19 + 0x28);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107328e34; end: 107328ebf;  */

void FUN_107328e34(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010734743c();
  if ((bool)in_ZR) {
    func_0x000107328f30(unaff_x19 + 0x28);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107328ec0; end: 107328ec7;  */

void FUN_107328ec0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x000107328efc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107328ec8; end: 107328f87;  */

void FUN_107328ec8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x000107328efc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107328f88; end: 107328f9f;  */

void FUN_107328f88(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107345578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000107346a58();
  func_0x0001072d488c();
  return;
}



/* Entry: 107328fa0; end: 107328fbf;  */

void FUN_107328fa0(void)

{
  func_0x000107346a58();
  func_0x0001072d488c();
  return;
}



/* Entry: 107328fc0; end: 107328ff7;  */

void FUN_107328fc0(void)

{
  func_0x0001073451ec();
  func_0x000107346e78();
  FUN_107328ff8();
  func_0x000107346384();
  return;
}



/* Entry: 107328ff8; end: 10732901b;  */

void FUN_107328ff8(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x00010734749c();
  *param_1 = extraout_x8;
  FUN_1073290c8(param_1 + 1);
  return;
}



/* Entry: 10732901c; end: 10732901f;  */

void FUN_10732901c(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x00010734749c();
  *param_1 = extraout_x8;
  func_0x00010724b374(param_1 + 5);
  return;
}



/* Entry: 107329020; end: 107329033;  */

void FUN_107329020(void)

{
  func_0x0001073290e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107329034; end: 107329067;  */

undefined8 FUN_107329034(undefined8 param_1)

{
  func_0x000107346e78();
  func_0x00010732910c();
  return param_1;
}



/* Entry: 107329068; end: 107329093;  */

void FUN_107329068(long param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  
  func_0x00010734749c(param_2,param_1 + 8);
  *param_2 = extraout_x8;
  FUN_107328fa0(param_2 + 1);
  return;
}



/* Entry: 107329094; end: 1073290bb;  */

void FUN_107329094(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a3dd0);
  func_0x000107344bc4();
  return;
}



/* Entry: 1073290bc; end: 1073290c7;  */

undefined ** FUN_1073290bc(void)

{
  return &PTR_DAT_1109a3dd0;
}



/* Entry: 1073290c8; end: 10732912f;  */

void FUN_1073290c8(void)

{
  func_0x000107346a58();
  func_0x0001072d62a0();
  return;
}



/* Entry: 107329130; end: 107329237;  */

void FUN_107329130(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x23;
  long unaff_x24;
  undefined1 auStack_1a0 [136];
  undefined1 auStack_118 [160];
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  func_0x0001073447e0();
  func_0x0001073463d8();
  FUN_107329314(unaff_x24 + 0x18);
  func_0x000107347b1c();
  func_0x0001073477e8();
  FUN_107329238(auStack_118,unaff_x23 + 0x148,auStack_1a0);
  puVar1 = auStack_78;
  FUN_107329354(puVar1,auStack_118);
  func_0x000107347ec0();
  func_0x000107346b64();
  func_0x000107347244();
  func_0x000107329d84(auStack_118);
  func_0x000107329da8(auStack_1a0);
  *unaff_x19 = puVar1;
  FUN_107329314(auStack_78,*(undefined8 *)(param_1 + 0x18));
  puVar1 = auStack_78;
  func_0x000107329dd0(unaff_x19 + 1,puVar1,1);
  func_0x000107328efc();
  func_0x0001073447cc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107328efc(auStack_78);
  func_0x000107345604();
  FUN_10732926c();
  FUN_1073292d4(extraout_x8 + 0x18,puVar1);
  return;
}



/* Entry: 107329238; end: 10732926b;  */

void FUN_107329238(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10732926c();
  FUN_1073292d4(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10732926c; end: 1073292b3;  */

void FUN_10732926c(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x9;
  long extraout_x9_00;
  long lVar1;
  int extraout_w11;
  undefined1 auStack_30 [16];
  
  func_0x000107346060();
  lVar1 = extraout_x9;
  if (extraout_x8 != 0) {
    do {
      func_0x00010734740c();
      lVar1 = extraout_x9_00;
    } while (extraout_w11 != 0);
  }
  FUN_1073292b4(param_1,auStack_30,*(undefined8 *)(lVar1 + 0x10));
  func_0x0001073460e8();
  return;
}



/* Entry: 1073292b4; end: 1073292d3;  */

void FUN_1073292b4(void)

{
  func_0x0001073451c0();
  return;
}



/* Entry: 1073292d4; end: 107329313;  */

void FUN_1073292d4(void)

{
  func_0x000107345658();
  func_0x000107344e18();
  FUN_107329314();
  func_0x000107347b88();
  func_0x0001073477c4();
  return;
}



/* Entry: 107329314; end: 107329353;  */

void FUN_107329314(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000107346b2c();
  if (param_1 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (param_1 == param_2) {
    func_0x0001073448d0();
  }
  else {
    func_0x000107344fa8();
    *(long *)(unaff_x19 + 0x18) = param_1;
  }
  return;
}



/* Entry: 107329354; end: 10732938b;  */

void FUN_107329354(void)

{
  func_0x0001073451ec();
  func_0x000107345fbc();
  FUN_10732938c();
  func_0x000107346384();
  return;
}



/* Entry: 10732938c; end: 1073293ab;  */

void FUN_10732938c(void)

{
  func_0x000107346a10();
  FUN_107329458();
  return;
}



/* Entry: 1073293ac; end: 1073293af;  */

void FUN_1073293ac(void)

{
  func_0x000107346a10();
  func_0x000107329d84();
  return;
}



/* Entry: 1073293b0; end: 1073293c3;  */

void FUN_1073293b0(void)

{
  func_0x0001073294b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073293c4; end: 1073293f7;  */

undefined8 FUN_1073293c4(undefined8 param_1)

{
  func_0x000107345fbc();
  func_0x0001073294d8();
  return param_1;
}



/* Entry: 1073293f8; end: 107329423;  */

void FUN_1073293f8(long param_1,undefined8 param_2)

{
  func_0x000107346a10(param_2,param_1 + 8);
  FUN_1073294f8();
  return;
}



/* Entry: 107329424; end: 10732944b;  */

void FUN_107329424(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a3dc0);
  func_0x000107344bc4();
  return;
}



/* Entry: 10732944c; end: 107329457;  */

undefined ** FUN_10732944c(void)

{
  return &PTR_DAT_1109a3dc0;
}



/* Entry: 107329458; end: 10732948b;  */

void FUN_107329458(long param_1,long param_2)

{
  func_0x0001073460a0();
  func_0x000107347cb4();
  FUN_10732948c(param_1 + 0x18,param_2 + 0x18);
  return;
}



/* Entry: 10732948c; end: 1073294f7;  */

void FUN_10732948c(void)

{
  func_0x000100a2b988();
  func_0x000107344e18();
  FUN_107329314();
  func_0x000107346c90();
  func_0x000104c318bc();
  func_0x000107346488();
  return;
}



/* Entry: 1073294f8; end: 10732952b;  */

void FUN_1073294f8(long param_1)

{
  long unaff_x20;
  
  func_0x000107345658();
  FUN_10732952c();
  FUN_1073292d4(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 10732952c; end: 107329553;  */

void FUN_10732952c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 107329554; end: 107329593;  */

void FUN_107329554(int param_1)

{
  func_0x000100a2b988();
  func_0x000107347780();
  func_0x000107347bdc();
  if (param_1 != 0) {
    func_0x000107347dcc();
    FUN_107329604();
  }
  func_0x00010734613c();
  return;
}



/* Entry: 107329594; end: 1073295eb;  */

void FUN_107329594(void)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  long alStack_30 [2];
  
  func_0x000107347788();
  if (alStack_30[0] != 0) {
    func_0x00010726fc3c();
    func_0x000107347fd4();
    if (!(bool)in_ZR) {
      func_0x00010734694c();
      goto LAB_1073295dc;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(alStack_30);
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x00010734750c();
LAB_1073295dc:
  func_0x0001072508cc();
  return;
}



/* Entry: 1073295ec; end: 107329603;  */

uint FUN_1073295ec(uint param_1)

{
  FUN_107329814();
  return param_1 ^ 1;
}



/* Entry: 107329604; end: 107329813;  */

undefined1 * FUN_107329604(long *param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined ***pppuVar4;
  undefined8 extraout_x8;
  long *plVar5;
  uint uVar6;
  undefined1 *puVar7;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  int unaff_w23;
  ulong unaff_x25;
  ulong unaff_x26;
  long *aplStack_220 [2];
  undefined1 auStack_1c0 [32];
  undefined ***pppuStack_1a0;
  long lStack_170;
  long lStack_168;
  undefined1 auStack_148 [32];
  char cStack_128;
  undefined **appuStack_120 [3];
  undefined ***pppuStack_108;
  undefined8 uStack_68;
  
  func_0x000107346ea8();
  func_0x000107344b50();
  lVar8 = *param_1;
  pppuStack_108 = appuStack_120;
  appuStack_120[0] = &PTR_FUN_1109a3d40;
  uStack_68 = extraout_x8;
  func_0x000107347c68();
  FUN_10732985c();
  FUN_107329b74(appuStack_120);
  uVar3 = cStack_128 == '\x01';
  if ((bool)uVar3) {
    FUN_107329ba8(appuStack_120,lVar8 + 0x58);
    FUN_1073298f0(auStack_148,appuStack_120);
    FUN_10732a3d0(appuStack_120);
  }
LAB_10732968c:
  puVar7 = auStack_148;
  FUN_107329d5c(puVar7);
  func_0x0001073447cc(uStack_68);
  if ((bool)uVar3) {
    return puVar7;
  }
  ___stack_chk_fail();
  func_0x000107346b38();
  pppuVar4 = appuStack_120;
  FUN_10732a3d0();
  if (unaff_w23 != 1) {
    FUN_107329d5c(auStack_148);
    func_0x000107346358();
    func_0x00010726fc00(aplStack_220);
    if (aplStack_220[0] == (long *)0x0) {
      puVar7 = (undefined1 *)0x1;
    }
    else {
      puVar7 = (undefined1 *)(ulong)(*aplStack_220[0] == -1);
    }
    func_0x0001072508cc(aplStack_220);
    return puVar7;
  }
  func_0x0001073471f0();
  func_0x00010734679c();
  do {
    plVar5 = *(long **)(unaff_x21 + 0x20);
    bVar2 = *(byte *)((long)plVar5 + 0x17);
    if ((char)bVar2 < '\0') {
      uVar1 = plVar5[1];
      if (0xf < (ulong)plVar5[1]) {
        uVar1 = unaff_x26;
      }
      if (uVar1 <= unaff_x25) break;
      plVar5 = (long *)*plVar5;
    }
    else {
      uVar6 = (uint)(char)bVar2;
      if (0xf < bVar2) {
        uVar6 = (uint)unaff_x26;
      }
      if (uVar6 <= unaff_x25) break;
    }
    func_0x000107346a90(plVar5);
    func_0x000107346df4();
    unaff_x25 = unaff_x25 + 1;
  } while( true );
  lStack_170 = 0;
  lStack_168 = 0;
  lVar8 = *(long *)(unaff_x20 + 0x70);
  if (lVar8 != *(long *)(unaff_x20 + 0x78)) {
    lStack_168 = *(long *)(unaff_x20 + 0x78) - lVar8;
    lStack_170 = lVar8;
  }
  func_0x000107347160();
  lVar8 = (long)*(char *)(*(long *)(unaff_x21 + 0x20) + 0x17);
  if (lVar8 < 0) {
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x20) + 8);
  }
  func_0x000107345d60(lVar8);
  uVar3 = *(char *)(unaff_x21 + 0x74) == '\x01';
  pppuStack_1a0 = pppuVar4;
  if ((bool)uVar3) {
    __ZNSt3__19to_stringEj(auStack_1c0,*(undefined4 *)(unaff_x21 + 0x70));
  }
  else {
    func_0x0001073472b4();
  }
  func_0x000107345a5c();
  func_0x000107347bc4();
  func_0x000107346928();
  func_0x000107345f54();
  func_0x000107346ba4();
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  func_0x000107345ad8();
  func_0x000107346b88();
  func_0x000107346ec0();
  func_0x000107347794();
  func_0x000107345e10();
  ___cxa_end_catch();
  goto LAB_10732968c;
}



/* Entry: 107329814; end: 10732985b;  */

bool FUN_107329814(void)

{
  bool bVar1;
  long *aplStack_30 [2];
  
  func_0x00010726fc00(aplStack_30);
  if (aplStack_30[0] == (long *)0x0) {
    bVar1 = true;
  }
  else {
    bVar1 = *aplStack_30[0] == -1;
  }
  func_0x0001072508cc(aplStack_30);
  return bVar1;
}



/* Entry: 10732985c; end: 1073298ef;  */

void FUN_10732985c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *unaff_x19;
  
  func_0x000107344fb4();
  func_0x0001073453c8();
  func_0x000107347f9c();
  FUN_1073289ec();
  if ((param_1 == 0) || (lVar1 = param_3, FUN_107329968(param_3,param_1 + 0x20), (int)lVar1 == 0)) {
    *unaff_x19 = 0;
    unaff_x19[0x20] = 0;
  }
  else {
    func_0x0001073468d0();
    func_0x000107347f9c();
    FUN_107329990();
    func_0x000107346020();
    FUN_107329ae0();
    func_0x000107328f30(param_3 + 8);
  }
  func_0x000107346234();
  return;
}



/* Entry: 1073298f0; end: 107329927;  */

void FUN_1073298f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  for (lVar2 = *(long *)(param_1 + 8); lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    func_0x000107345dfc();
    FUN_10732a3b8();
  }
  return;
}



/* Entry: 107329928; end: 107329967;  */

void FUN_107329928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  uVar1 = param_2;
  uStack_30 = param_3;
  func_0x0001003a91d4();
  uStack_40 = param_2;
  uStack_38 = uVar1;
  func_0x000107329bc0(param_1,&uStack_40,0xc,&uStack_30);
  return;
}



/* Entry: 107329968; end: 10732997f;  */

void FUN_107329968(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107345578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  *plVar1 = *param_2;
  plVar1[1] = 0;
  plVar1[2] = 0;
  plVar1[3] = 0;
  lVar2 = param_2[1];
  plVar1[2] = param_2[2];
  plVar1[1] = lVar2;
  plVar1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 107329980; end: 10732998f;  */

void FUN_107329980(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 107329990; end: 1073299eb;  */

void FUN_107329990(long param_1)

{
  FUN_1073289ec();
  if (param_1 != 0) {
    func_0x000107346d48();
    func_0x0001073299bc();
  }
  return;
}



/* Entry: 1073299ec; end: 107329adf;  */

void FUN_1073299ec(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_107329aa0;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_107329aa0;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_107329aa0:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 107329ae0; end: 107329af7;  */

void FUN_107329ae0(void)

{
  FUN_107329980();
  func_0x000107347da8();
  return;
}



/* Entry: 107329af8; end: 107329aff;  */

void FUN_107329af8(void)

{
  return;
}



/* Entry: 107329b00; end: 107329b1f;  */

void FUN_107329b00(undefined8 *param_1)

{
  func_0x000107345a98();
  *param_1 = &PTR_FUN_1109a3d40;
  return;
}



/* Entry: 107329b20; end: 107329b3f;  */

void FUN_107329b20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a3d40;
  return;
}



/* Entry: 107329b40; end: 107329b67;  */

void FUN_107329b40(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a3db0);
  func_0x000107344bc4();
  return;
}



/* Entry: 107329b68; end: 107329b73;  */

undefined ** FUN_107329b68(void)

{
  return &PTR_DAT_1109a3db0;
}



/* Entry: 107329b74; end: 107329ba7;  */

void FUN_107329b74(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107344e80();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000107344d70(uVar1);
  return;
}



/* Entry: 107329ba8; end: 107329c1f;  */

long * FUN_107329ba8(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined **appuStack_48 [2];
  ulong uStack_38;
  ulong uStack_30;
  long *plStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001073464f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  uStack_18 = 0x107329bc0;
  uStack_38 = plVar1[1];
  if (-1 < (char)*(byte *)((long)plVar1 + 0x17)) {
    uStack_38 = (ulong)*(byte *)((long)plVar1 + 0x17);
  }
  appuStack_48[0] = &PTR_FUN_1109a40d8;
  uStack_30 = uStack_38;
  plStack_28 = plVar1;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000107346a88(appuStack_48,*param_2,param_2[1],param_3,param_4);
  return plStack_28;
}



/* Entry: 107329c20; end: 107329c57;  */

void FUN_107329c20(long param_1)

{
  long *plVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x0001001548a8(*(undefined8 *)(param_1 + 0x20));
  plVar1 = *(long **)(unaff_x20 + 0x20);
  if (*(char *)((long)plVar1 + 0x17) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  *(long **)(unaff_x20 + 8) = plVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
  return;
}



/* Entry: 107329c58; end: 107329c6f;  */

void FUN_107329c58(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = *param_3;
    param_1 = param_1 + 1;
  }
  return;
}



/* Entry: 107329c70; end: 107329d5b;  */

ulong * FUN_107329c70(ulong *param_1,byte *param_2,uint *param_3,uint *param_4,ulong param_5,
                     ulong *param_6,ulong *param_7,ulong *param_8,ulong *param_9,ulong param_10,
                     ulong param_11,ulong *param_12)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  bVar5 = *param_2;
  uVar3 = *param_3;
  uVar4 = *param_4;
  func_0x0001072bb3b4();
  uVar10 = *param_6;
  uVar9 = *param_7;
  uVar8 = *param_8;
  uVar11 = *param_9;
  pbVar6 = param_2;
  func_0x0001005d466c();
  pbVar7 = pbVar6;
  func_0x0001005d466c();
  uVar1 = *param_12;
  uVar2 = param_12[1];
  *param_1 = (ulong)bVar5;
  param_1[1] = 0;
  param_1[2] = (ulong)uVar3;
  param_1[3] = 0;
  param_1[4] = (ulong)uVar4;
  param_1[5] = 0;
  param_1[6] = param_5;
  param_1[7] = (ulong)param_2;
  param_1[8] = uVar10;
  param_1[9] = 0;
  param_1[10] = uVar9;
  param_1[0xb] = 0;
  param_1[0xc] = uVar8;
  param_1[0xd] = 0;
  param_1[0xe] = uVar11;
  param_1[0xf] = 0;
  param_1[0x10] = param_10;
  param_1[0x11] = (ulong)pbVar6;
  param_1[0x12] = param_11;
  param_1[0x13] = (ulong)pbVar7;
  param_1[0x14] = uVar1;
  param_1[0x15] = uVar2;
  return param_1;
}



/* Entry: 107329d5c; end: 107329dfb;  */

void FUN_107329d5c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001073474bc();
  if ((bool)in_ZR) {
    func_0x000107328f30(unaff_x19 + 8);
  }
  return;
}



/* Entry: 107329dfc; end: 107329e4b;  */

void FUN_107329dfc(void)

{
  long in_x3;
  
  func_0x000107347f70();
  if (in_x3 != 0) {
    func_0x000107345fc4();
    FUN_107329e4c();
    func_0x00010734671c();
    FUN_107329e80();
  }
  func_0x00010734660c();
  func_0x000107329fd8();
  return;
}



/* Entry: 107329e4c; end: 107329e7f;  */

void FUN_107329e4c(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
    func_0x000107346d78();
    FUN_107329eb8();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x20;
  }
  else {
    FUN_107329eac();
    func_0x0001073469b0();
    param_1 = param_1 + 0x10;
    func_0x000107329ef4();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 107329e80; end: 107329eab;  */

void FUN_107329e80(long param_1)

{
  long unaff_x19;
  
  func_0x0001073469b0();
  param_1 = param_1 + 0x10;
  func_0x000107329ef4();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 107329eac; end: 107329eb7;  */

void FUN_107329eac(void)

{
  func_0x000107345150();
  FUN_107329ed8();
  return;
}



/* Entry: 107329eb8; end: 107329ed7;  */

void FUN_107329eb8(void)

{
  FUN_107329ed8();
  return;
}



/* Entry: 107329ed8; end: 107329f07;  */

void FUN_107329ed8(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  FUN_107329f08();
  return;
}



/* Entry: 107329f08; end: 107329f6f;  */

undefined8 FUN_107329f08(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  
  func_0x00010734513c();
  uStack_48 = 0;
  while (param_2 != param_3) {
    func_0x000107346964();
    FUN_107329314();
    func_0x000107347ee8();
  }
  func_0x000107346cb4();
  FUN_107329f70(auStack_60);
  return param_4;
}



/* Entry: 107329f70; end: 107329f9b;  */

void FUN_107329f70(void)

{
  uint extraout_w8;
  
  func_0x000107348068();
  if ((extraout_w8 & 1) == 0) {
    FUN_107329f9c();
  }
  return;
}



/* Entry: 107329f9c; end: 107329fab;  */

void FUN_107329f9c(long param_1)

{
  long unaff_x19;
  
  func_0x000107346d1c();
  func_0x000107347e90();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    func_0x000107328efc();
  }
  return;
}



/* Entry: 107329fac; end: 10732a003;  */

void FUN_107329fac(long param_1)

{
  long unaff_x19;
  
  func_0x000107347e90();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    func_0x000107328efc();
  }
  return;
}



/* Entry: 10732a004; end: 10732a00b;  */

void FUN_10732a004(void)

{
  return;
}



/* Entry: 10732a00c; end: 10732a033;  */

void FUN_10732a00c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073450c0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109a3df0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10732a034; end: 10732a05b;  */

void FUN_10732a034(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109a3df0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10732a05c; end: 10732a083;  */

void FUN_10732a05c(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a3e60);
  func_0x000107344bc4();
  return;
}



/* Entry: 10732a084; end: 10732a09f;  */

undefined ** FUN_10732a084(void)

{
  return &PTR_DAT_1109a3e60;
}



/* Entry: 10732a0a0; end: 10732a0d3;  */

long FUN_10732a0a0(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073474ac();
  if ((bool)in_CY) {
    FUN_10732a100();
  }
  else {
    FUN_10732a0d4();
    param_1 = unaff_x20 + 0x20;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x20;
}



/* Entry: 10732a0d4; end: 10732a0ff;  */

void FUN_10732a0d4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073469b0();
  FUN_107329314();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x20;
  return;
}



/* Entry: 10732a100; end: 10732a173;  */

undefined8 FUN_10732a100(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x000107345658();
  func_0x000107347efc();
  FUN_10732a174();
  func_0x000107346820();
  FUN_10732a1d8(auStack_48);
  FUN_107329314(lStack_38);
  lStack_38 = lStack_38 + 0x20;
  func_0x000107346270();
  FUN_10732a19c();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_10732a2e8(auStack_48);
  return uVar1;
}



/* Entry: 10732a174; end: 10732a19b;  */

undefined8 FUN_10732a174(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  if (param_2 >> 0x3b == 0) {
    func_0x000107346c68();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_107329eac();
  func_0x000100a2b988();
  func_0x0001073476d4();
  FUN_10732a208();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107344920();
  return param_1;
}



/* Entry: 10732a19c; end: 10732a1d7;  */

void FUN_10732a19c(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000100a2b988();
  func_0x0001073476d4();
  FUN_10732a208();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107344920();
  return;
}



/* Entry: 10732a1d8; end: 10732a207;  */

void FUN_10732a1d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001073467d0();
  if (param_2 != 0) {
    FUN_107329eb8(param_4);
  }
  func_0x00010734768c();
  return;
}



/* Entry: 10732a208; end: 10732a273;  */

void FUN_10732a208(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  undefined1 auStack_60 [48];
  
  func_0x0001073450dc();
  func_0x00010734513c();
  while (param_2 != unaff_x19) {
    FUN_10732a2a4(param_4,param_2);
    func_0x000107347f5c();
  }
  func_0x000107346cb4();
  func_0x0001073461d0();
  FUN_10732a274();
  FUN_107329f70(auStack_60);
  return;
}



/* Entry: 10732a274; end: 10732a2a3;  */

void FUN_10732a274(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    func_0x000107328efc();
  }
  return;
}



/* Entry: 10732a2a4; end: 10732a2e7;  */

void FUN_10732a2a4(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010734624c();
  if (extraout_x8 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (extraout_x8 == param_2) {
    func_0x0001073449b0();
    func_0x000107345720();
  }
  else {
    func_0x0001073461ec();
  }
  return;
}



/* Entry: 10732a2e8; end: 10732a313;  */

long * FUN_10732a2e8(long *param_1)

{
  FUN_10732a314();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10732a314; end: 10732a31b;  */

void FUN_10732a314(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    func_0x000107328efc();
  }
  return;
}



/* Entry: 10732a31c; end: 10732a3b7;  */

void FUN_10732a31c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    func_0x000107328efc();
  }
  return;
}



/* Entry: 10732a3b8; end: 10732a3cf;  */

void FUN_10732a3b8(long param_1)

{
  undefined1 in_ZR;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107345578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000107346978();
  if ((bool)in_ZR) {
    FUN_10732a3f8();
  }
  return;
}



/* Entry: 10732a3d0; end: 10732a3f7;  */

void FUN_10732a3d0(void)

{
  undefined1 in_ZR;
  
  func_0x000107346978();
  if ((bool)in_ZR) {
    FUN_10732a3f8();
  }
  return;
}



/* Entry: 10732a3f8; end: 10732a433;  */

void FUN_10732a3f8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001073474cc();
  if (!(bool)in_ZR) {
    func_0x000107344d8c((&PTR_FUN_1109a14c0)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 10732a434; end: 10732a443;  */

void FUN_10732a434(undefined8 param_1,long param_2)

{
  func_0x000107345acc();
  if (param_2 != 0) {
    func_0x0001000df548();
  }
  return;
}


