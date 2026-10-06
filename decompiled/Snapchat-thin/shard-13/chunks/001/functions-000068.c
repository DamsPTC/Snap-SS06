/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109ffe4f8; end: 109ffe57b;  */

void FUN_109ffe4f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_109ffe348(param_1,param_4);
    lVar1 = param_1;
    FUN_109ffe57c(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 109ffe57c; end: 109ffe5ff;  */

long FUN_109ffe57c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x60) {
    FUN_109ffe600(param_4,param_2);
    param_4 = param_4 + 0x60;
  }
  return param_4;
}



/* Entry: 109ffe600; end: 109ffe737;  */

undefined8 * FUN_109ffe600(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  lVar4 = param_2[7];
  uVar7 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar7;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
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
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar5 = (undefined8 *)param_2[9];
    puVar6 = (undefined8 *)param_1[9];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1);
  }
  return param_1;
}



/* Entry: 109ffe738; end: 109ffe7d7;  */

void FUN_109ffe738(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 != param_3) {
    do {
      func_0x000109ffe69c(param_4,lVar1);
      lVar1 = lVar1 + 0x60;
      param_4 = param_4 + 0x60;
    } while (lVar1 != param_3);
    do {
      FUN_109ffe458(param_2);
      param_2 = param_2 + 0x60;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 109ffe7d8; end: 109ffe85b;  */

void FUN_109ffe7d8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  param_1[0xb] = 0;
  param_1[10] = 0;
  piVar2 = (int *)((long)param_2 + 4);
  iVar1 = *piVar2;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  puVar3 = (undefined8 *)param_2[9];
  if (iVar1 < 3) {
    param_1[10] = *puVar3;
    param_1[0xb] = puVar3[1];
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = puVar3;
    param_2[8] = param_2 + 1;
    param_2[9] = param_2 + 10;
  }
  *(undefined4 *)param_2 = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  return;
}



/* Entry: 109ffe85c; end: 109ffe9c3;  */

undefined1  [16] FUN_109ffe85c(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_42 [2];
  
  plVar8 = (long *)*param_1;
  plVar5 = param_1;
  if ((ulong)((param_1[2] - (long)plVar8 >> 5) * -0x5555555555555555) < param_4) {
    plVar6 = param_2;
    plVar7 = param_3;
    func_0x00010951a1e8(param_1);
    if (0x2aaaaaaaaaaaaaa < param_4) {
      FUN_109ffe390();
      param_1[1] = param_4;
      __Unwind_Resume();
      plVar5 = plVar6;
      do {
        if (plVar6 == plVar7) {
          auVar15._8_8_ = plVar8;
          auVar15._0_8_ = plVar5;
          return auVar15;
        }
        if (plVar8 != plVar6) {
          if (plVar6[7] != 0) {
            piVar1 = (int *)(plVar6[7] + 0x14);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (plVar8[7] != 0) {
            piVar1 = (int *)(plVar8[7] + 0x14);
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
              func_0x000109a848d4(plVar8);
            }
          }
          plVar8[7] = 0;
          plVar8[3] = 0;
          plVar8[2] = 0;
          plVar8[5] = 0;
          plVar8[4] = 0;
          if (*(int *)((long)plVar8 + 4) < 1) {
            *(int *)plVar8 = (int)*plVar6;
LAB_109ffea84:
            if (2 < *(int *)((long)plVar6 + 4)) goto LAB_109ffeab8;
            *(int *)((long)plVar8 + 4) = *(int *)((long)plVar6 + 4);
            plVar8[1] = plVar6[1];
            puVar10 = (undefined8 *)plVar6[9];
            puVar13 = (undefined8 *)plVar8[9];
            *puVar13 = *puVar10;
            puVar13[1] = puVar10[1];
          }
          else {
            lVar9 = 0;
            lVar12 = plVar8[8];
            do {
              *(undefined4 *)(lVar12 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < *(int *)((long)plVar8 + 4));
            *(int *)plVar8 = (int)*plVar6;
            if (*(int *)((long)plVar8 + 4) < 3) goto LAB_109ffea84;
LAB_109ffeab8:
            func_0x000109a84868(plVar8,plVar6);
          }
          lVar9 = plVar6[2];
          plVar8[3] = plVar6[3];
          plVar8[2] = lVar9;
          lVar9 = plVar6[4];
          plVar8[5] = plVar6[5];
          plVar8[4] = lVar9;
          lVar9 = plVar6[6];
          plVar8[7] = plVar6[7];
          plVar8[6] = lVar9;
        }
        plVar6 = plVar6 + 0xc;
        plVar8 = plVar8 + 0xc;
        plVar5 = plVar7;
      } while( true );
    }
    lVar9 = param_1[2] - *param_1 >> 5;
    uVar11 = lVar9 * 0x5555555555555556;
    if (uVar11 < param_4 || uVar11 - param_4 == 0) {
      uVar11 = param_4;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar11 = 0x2aaaaaaaaaaaaaa;
    }
    FUN_109ffe348(param_1,uVar11);
    FUN_109ffe57c(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar9 = param_1[1] - (long)plVar8;
    if (param_4 <= (ulong)((lVar9 >> 5) * -0x5555555555555555)) {
      plVar5 = (long *)(auStack_42 + 1);
      FUN_109ffe9c4(plVar5,param_2,param_3);
      plVar8 = (long *)param_1[1];
      plVar6 = param_2;
      while (plVar8 != param_2) {
        plVar8 = plVar8 + -0xc;
        plVar5 = plVar8;
        FUN_109ffe458(plVar8);
      }
      param_1[1] = (long)param_2;
      goto LAB_109ffe99c;
    }
    FUN_109ffe9c4(auStack_42,param_2,(long)param_2 + lVar9);
    param_2 = (long *)((long)param_2 + lVar9);
    FUN_109ffe57c(param_1,param_2,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar5;
  plVar6 = param_2;
LAB_109ffe99c:
  auVar14._8_8_ = plVar6;
  auVar14._0_8_ = plVar5;
  return auVar14;
}



/* Entry: 109ffe9c4; end: 109ffeb07;  */

undefined1  [16]
FUN_109ffe9c4(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  puVar5 = param_2;
  do {
    if (param_2 == param_3) {
      auVar11._8_8_ = param_4;
      auVar11._0_8_ = puVar5;
      return auVar11;
    }
    if (param_4 != param_2) {
      if (*(long *)(param_2 + 0xe) != 0) {
        piVar1 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(long *)(param_4 + 0xe) != 0) {
        piVar1 = (int *)(*(long *)(param_4 + 0xe) + 0x14);
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
          func_0x000109a848d4(param_4);
        }
      }
      *(undefined8 *)(param_4 + 0xe) = 0;
      *(undefined8 *)(param_4 + 6) = 0;
      *(undefined8 *)(param_4 + 4) = 0;
      *(undefined8 *)(param_4 + 10) = 0;
      *(undefined8 *)(param_4 + 8) = 0;
      if ((int)param_4[1] < 1) {
        *param_4 = *param_2;
LAB_109ffea84:
        if (2 < (int)param_2[1]) goto LAB_109ffeab8;
        param_4[1] = param_2[1];
        *(undefined8 *)(param_4 + 2) = *(undefined8 *)(param_2 + 2);
        puVar7 = *(undefined8 **)(param_2 + 0x12);
        puVar9 = *(undefined8 **)(param_4 + 0x12);
        *puVar9 = *puVar7;
        puVar9[1] = puVar7[1];
      }
      else {
        lVar6 = 0;
        lVar8 = *(long *)(param_4 + 0x10);
        do {
          *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < (int)param_4[1]);
        *param_4 = *param_2;
        if ((int)param_4[1] < 3) goto LAB_109ffea84;
LAB_109ffeab8:
        func_0x000109a84868(param_4,param_2);
      }
      uVar10 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_4 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_4 + 4) = uVar10;
      uVar10 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_4 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_4 + 8) = uVar10;
      uVar10 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_4 + 0xe) = *(undefined8 *)(param_2 + 0xe);
      *(undefined8 *)(param_4 + 0xc) = uVar10;
    }
    param_2 = param_2 + 0x18;
    param_4 = param_4 + 0x18;
    puVar5 = param_3;
  } while( true );
}



/* Entry: 109ffeb08; end: 109ffeb1b;  */

undefined1  [16] FUN_109ffeb08(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar1 = (undefined8 *)&UNK_10f630bba;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3e == 0) {
    lVar2 = (long)puVar1 << 2;
    __Znwm(lVar2);
    auVar4._8_8_ = puVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = puVar1 + 1;
  uVar3 = *param_2;
  FUN_109ffeba4();
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = puVar1;
  return auVar5;
}



/* Entry: 109ffeb1c; end: 109ffeb4f;  */

undefined1  [16] FUN_109ffeb1c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3e == 0) {
    lVar1 = (long)param_1 << 2;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  uVar2 = *param_2;
  FUN_109ffeba4();
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 109ffeb50; end: 109ffeba3;  */

undefined8 * FUN_109ffeb50(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_109ffeba4(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 109ffeba4; end: 109ffeca3;  */

void FUN_109ffeba4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  while (param_2 != param_3) {
    func_0x000109ffec24(param_1,param_1 + 8,param_2 + 4,param_2 + 4);
    plVar1 = (long *)param_2[1];
    plVar3 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar3[2];
        bVar2 = (long *)*param_2 != plVar3;
        plVar3 = param_2;
      } while (bVar2);
    }
    else {
      do {
        param_2 = plVar1;
        plVar1 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 109ffeca4; end: 109ffee4b;  */

long * FUN_109ffeca4(undefined8 *param_1,long *param_2,long *param_3,long *param_4,uint *param_5)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = param_1 + 1;
  if (plVar4 != param_2) {
    uVar1 = *param_5;
    if (*(uint *)(param_2 + 4) <= uVar1) {
      if (uVar1 <= *(uint *)(param_2 + 4)) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar6 = (long *)param_2[1];
      plVar7 = param_2;
      plVar5 = plVar6;
      if (plVar6 == (long *)0x0) {
        do {
          plVar3 = (long *)plVar7[2];
          bVar2 = (long *)*plVar3 != plVar7;
          plVar7 = plVar3;
        } while (bVar2);
      }
      else {
        do {
          plVar3 = plVar5;
          plVar5 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if ((plVar3 == plVar4) || (uVar1 < *(uint *)(plVar3 + 4))) {
        if (plVar6 != (long *)0x0) {
          *param_3 = (long)plVar3;
          return plVar3;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      plVar7 = (long *)*plVar4;
      while (plVar5 = plVar4, plVar7 != (long *)0x0) {
        while (plVar5 = plVar7, *(uint *)(plVar5 + 4) <= uVar1) {
          if (uVar1 <= *(uint *)(plVar5 + 4)) goto LAB_109ffee44;
          plVar4 = plVar5 + 1;
          plVar7 = (long *)*plVar4;
          if ((long *)*plVar4 == (long *)0x0) goto LAB_109ffee44;
        }
        plVar4 = plVar5;
        plVar7 = (long *)*plVar5;
      }
LAB_109ffee44:
      *param_3 = (long)plVar5;
      return plVar4;
    }
  }
  plVar5 = (long *)*param_2;
  plVar7 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar6 = param_2;
    plVar3 = plVar5;
    if (plVar5 == (long *)0x0) {
      do {
        plVar7 = (long *)plVar6[2];
        bVar2 = (long *)*plVar7 == plVar6;
        plVar6 = plVar7;
      } while (bVar2);
    }
    else {
      do {
        plVar7 = plVar3;
        plVar3 = (long *)plVar7[1];
      } while ((long *)plVar7[1] != (long *)0x0);
    }
    uVar1 = *param_5;
    if (uVar1 <= *(uint *)(plVar7 + 4)) {
      plVar7 = (long *)*plVar4;
      while (plVar5 = plVar4, plVar7 != (long *)0x0) {
        while (plVar5 = plVar7, *(uint *)(plVar5 + 4) <= uVar1) {
          if (uVar1 <= *(uint *)(plVar5 + 4)) goto LAB_109ffedac;
          plVar4 = plVar5 + 1;
          plVar7 = (long *)*plVar4;
          if ((long *)*plVar4 == (long *)0x0) goto LAB_109ffedac;
        }
        plVar4 = plVar5;
        plVar7 = (long *)*plVar5;
      }
LAB_109ffedac:
      *param_3 = (long)plVar5;
      return plVar4;
    }
  }
  if (plVar5 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar7;
    param_2 = plVar7 + 1;
  }
  return param_2;
}



/* Entry: 109ffee4c; end: 109ffeeb3;  */

void FUN_109ffee4c(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x88;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x000109ffef08(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 109ffeeb4; end: 109ffeffb;  */

void FUN_109ffeeb4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 109ffeffc; end: 109fff09f;  */

void FUN_109ffeffc(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x40) + 0x14);
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
      func_0x000109a848d4(param_1 + 8);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x48);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xc));
  }
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 == param_1 + 0x58 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 109fff0a0; end: 109fff0e7;  */

void FUN_109fff0a0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_109fff0a0(param_1,*param_2);
    FUN_109fff0a0(param_1,param_2[1]);
    FUN_109ffeffc(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 109fff0e8; end: 109fff207;  */

undefined1  [16] FUN_109fff0e8(long *param_1,uint *param_2,uint *param_3,long param_4,ulong param_5)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int *piVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  long *plVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long **pplVar18;
  long lVar19;
  uint *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint *puVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  byte *pbVar28;
  uint *puVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  uint *puVar34;
  long lVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  long *plStack_58;
  uint *puStack_50;
  uint *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar35 = param_1[1] - *param_1;
  uVar23 = (lVar35 >> 3) + 1;
  if (uVar23 >> 0x3d == 0) {
    uVar22 = param_1[2] - *param_1;
    uVar26 = (long)uVar22 >> 2;
    if (uVar26 <= uVar23) {
      uVar26 = uVar23;
    }
    if (0x7ffffffffffffff7 < uVar22) {
      uVar26 = 0x1fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar26 == 0) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = param_1;
      FUN_109fff21c();
    }
    puStack_50 = (uint *)((long)plVar13 + lVar35);
    plStack_40 = plVar13 + uVar26;
    uVar10 = *param_3;
    puStack_48 = puStack_50 + 2;
    *puStack_50 = *param_2;
    puStack_50[1] = uVar10;
    pplVar18 = &plStack_58;
    plStack_58 = plVar13;
    func_0x0001092c79f4(param_1,pplVar18);
    lVar35 = param_1[1];
    if (puStack_48 != puStack_50) {
      puStack_48 = (uint *)((long)puStack_48 +
                           ((long)puStack_50 + (7 - (long)puStack_48) & 0xfffffffffffffff8U));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    auVar37._8_8_ = pplVar18;
    auVar37._0_8_ = lVar35;
    return auVar37;
  }
  FUN_109fff208();
  if (puStack_48 != puStack_50) {
    puStack_48 = (uint *)((long)puStack_48 +
                         (((long)puStack_50 - (long)puStack_48) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume(param_1);
  puVar14 = (uint *)&UNK_10f630bba;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar35 = (long)param_2 << 3;
    __Znwm(lVar35);
    auVar38._8_8_ = param_2;
    auVar38._0_8_ = lVar35;
    return auVar38;
  }
  func_0x000109ffded8();
  puVar15 = puVar14;
  puVar34 = param_2;
LAB_109fff284:
  puVar29 = puVar34 + -2;
  puVar24 = puVar15;
LAB_109fff298:
  do {
    puVar15 = puVar24;
    uVar23 = (long)puVar34 - (long)puVar15 >> 3;
    if (uVar23 - 2 == 0 || (long)uVar23 < 2) {
      if (uVar23 < 2) goto LAB_109fffe94;
      if (uVar23 == 2) {
        uVar25 = puVar34[-1];
        pbVar2 = (byte *)(*(long *)(param_3 + 4) + **(long **)(param_3 + 0x12) * (long)(int)uVar25 +
                         (long)(int)puVar34[-2] * 3);
        uVar10 = *puVar15;
        uVar1 = puVar15[1];
        pbVar28 = (byte *)(*(long *)(param_3 + 4) + **(long **)(param_3 + 0x12) * (long)(int)uVar1 +
                          (long)(int)uVar10 * 3);
        if ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <
            (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2]) {
          *puVar15 = puVar34[-2];
          puVar15[1] = uVar25;
          puVar34[-2] = uVar10;
          puVar34[-1] = uVar1;
        }
        goto LAB_109fffe94;
      }
    }
    else {
      if (uVar23 == 3) {
        lVar35 = *(long *)(param_3 + 4);
        lVar33 = **(long **)(param_3 + 0x12);
        puVar14 = puVar15 + 2;
        uVar1 = *puVar14;
        uVar7 = puVar15[3];
        pbVar2 = (byte *)(lVar35 + lVar33 * (int)uVar7 + (long)(int)uVar1 * 3);
        uVar11 = *puVar15;
        uVar8 = puVar15[1];
        pbVar28 = (byte *)(lVar35 + lVar33 * (int)uVar8 + (long)(int)uVar11 * 3);
        uVar10 = (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2];
        uVar6 = *puVar29;
        uVar9 = puVar34[-1];
        pbVar2 = (byte *)(lVar35 + lVar33 * (int)uVar9 + (long)(int)uVar6 * 3);
        uVar25 = (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2];
        if (uVar10 < (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2]) {
          if (uVar25 < uVar10) {
            *puVar15 = uVar6;
            puVar15[1] = uVar9;
          }
          else {
            *puVar15 = uVar1;
            puVar15[1] = uVar7;
            *puVar14 = uVar11;
            puVar15[3] = uVar8;
            uVar10 = puVar34[-1];
            pbVar2 = (byte *)(lVar35 + lVar33 * (int)uVar10 + (long)(int)*puVar29 * 3);
            if ((uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2] <=
                (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2]) goto LAB_109fffff8;
            *puVar14 = *puVar29;
            puVar15[3] = uVar10;
          }
          *puVar29 = uVar11;
          puVar34[-1] = uVar8;
        }
        else if (uVar25 < uVar10) {
          *puVar14 = uVar6;
          puVar15[3] = uVar9;
          *puVar29 = uVar1;
          puVar34[-1] = uVar7;
          pbVar2 = (byte *)(lVar35 + lVar33 * (int)puVar15[3] + (long)(int)*puVar14 * 3);
          uVar10 = *puVar15;
          uVar25 = puVar15[1];
          pbVar28 = (byte *)(lVar35 + lVar33 * (int)uVar25 + (long)(int)uVar10 * 3);
          if ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <
              (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2]) {
            *puVar15 = *puVar14;
            puVar15[1] = puVar15[3];
            *puVar14 = uVar10;
            puVar15[3] = uVar25;
            auVar40._8_8_ = puVar14;
            auVar40._0_8_ = puVar15;
            return auVar40;
          }
        }
LAB_109fffff8:
        auVar41._8_8_ = puVar14;
        auVar41._0_8_ = puVar15;
        return auVar41;
      }
      if (uVar23 == 4) {
        puVar14 = puVar15 + 2;
        puVar24 = puVar15 + 4;
        puVar16 = puVar15;
        puVar17 = puVar14;
        FUN_109fffeb8();
        uVar25 = puVar34[-1];
        lVar35 = *(long *)(param_3 + 4);
        lVar33 = **(long **)(param_3 + 0x12);
        pbVar2 = (byte *)(lVar35 + lVar33 * (int)uVar25 + (long)(int)*puVar29 * 3);
        uVar10 = *puVar24;
        uVar1 = puVar15[5];
        pbVar28 = (byte *)(lVar35 + lVar33 * (int)uVar1 + (long)(int)uVar10 * 3);
        if ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <
            (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2]) {
          *puVar24 = *puVar29;
          puVar15[5] = uVar25;
          *puVar29 = uVar10;
          puVar34[-1] = uVar1;
          pbVar2 = (byte *)(lVar35 + lVar33 * (int)puVar15[5] + (long)(int)*puVar24 * 3);
          uVar10 = *puVar14;
          uVar25 = puVar15[3];
          pbVar28 = (byte *)(lVar35 + lVar33 * (int)uVar25 + (long)(int)uVar10 * 3);
          if ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <
              (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2]) {
            *puVar14 = *puVar24;
            puVar15[3] = puVar15[5];
            *puVar24 = uVar10;
            puVar15[5] = uVar25;
            pbVar2 = (byte *)(lVar35 + lVar33 * (int)puVar15[3] + (long)(int)*puVar14 * 3);
            uVar10 = *puVar15;
            uVar25 = puVar15[1];
            pbVar28 = (byte *)(lVar35 + lVar33 * (int)uVar25 + (long)(int)uVar10 * 3);
            if ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <
                (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2]) {
              *puVar15 = *puVar14;
              puVar15[1] = puVar15[3];
              *puVar14 = uVar10;
              puVar15[3] = uVar25;
            }
          }
        }
        auVar42._8_8_ = puVar17;
        auVar42._0_8_ = puVar16;
        return auVar42;
      }
      if (uVar23 == 5) {
        puVar14 = puVar15 + 2;
        puVar24 = puVar15 + 4;
        puVar16 = puVar15 + 6;
        puVar17 = puVar15;
        puVar20 = puVar14;
        FUN_109fffffc();
        uVar25 = puVar34[-1];
        lVar35 = *(long *)(param_3 + 4);
        lVar33 = **(long **)(param_3 + 0x12);
        pbVar2 = (byte *)(lVar35 + lVar33 * (int)uVar25 + (long)(int)*puVar29 * 3);
        uVar10 = *puVar16;
        uVar1 = puVar15[7];
        pbVar28 = (byte *)(lVar35 + lVar33 * (int)uVar1 + (long)(int)uVar10 * 3);
        if ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <
            (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2]) {
          *puVar16 = *puVar29;
          puVar15[7] = uVar25;
          *puVar29 = uVar10;
          puVar34[-1] = uVar1;
          pbVar2 = (byte *)(lVar35 + lVar33 * (int)puVar15[7] + (long)(int)*puVar16 * 3);
          uVar10 = *puVar24;
          uVar25 = puVar15[5];
          pbVar28 = (byte *)(lVar35 + lVar33 * (int)uVar25 + (long)(int)uVar10 * 3);
          if ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <
              (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2]) {
            *puVar24 = *puVar16;
            puVar15[5] = puVar15[7];
            *puVar16 = uVar10;
            puVar15[7] = uVar25;
            pbVar2 = (byte *)(lVar35 + lVar33 * (int)puVar15[5] + (long)(int)*puVar24 * 3);
            uVar10 = *puVar14;
            uVar25 = puVar15[3];
            pbVar28 = (byte *)(lVar35 + lVar33 * (int)uVar25 + (long)(int)uVar10 * 3);
            if ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <
                (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2]) {
              *puVar14 = *puVar24;
              puVar15[3] = puVar15[5];
              *puVar24 = uVar10;
              puVar15[5] = uVar25;
              pbVar2 = (byte *)(lVar35 + lVar33 * (int)puVar15[3] + (long)(int)*puVar14 * 3);
              uVar10 = *puVar15;
              uVar25 = puVar15[1];
              pbVar28 = (byte *)(lVar35 + lVar33 * (int)uVar25 + (long)(int)uVar10 * 3);
              if ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <
                  (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2]) {
                *puVar15 = *puVar14;
                puVar15[1] = puVar15[3];
                *puVar14 = uVar10;
                puVar15[3] = uVar25;
              }
            }
          }
        }
        auVar43._8_8_ = puVar20;
        auVar43._0_8_ = puVar17;
        return auVar43;
      }
    }
    if ((long)uVar23 < 0x18) {
      if ((param_5 & 1) == 0) {
        if ((puVar15 != puVar34) && (puVar24 = puVar15 + 2, puVar24 != puVar34)) {
          lVar19 = *(long *)(param_3 + 4);
          lVar30 = **(long **)(param_3 + 0x12);
          lVar27 = -8;
          lVar35 = 0;
          lVar33 = 8;
          do {
            piVar4 = (int *)((long)puVar15 + lVar35);
            uVar10 = piVar4[3];
            uVar25 = *puVar24;
            pbVar2 = (byte *)(lVar19 + lVar30 * (int)uVar10 + (long)(int)uVar25 * 3);
            param_2 = (uint *)(long)*piVar4;
            puVar14 = (uint *)(long)piVar4[1];
            pbVar28 = (byte *)(lVar19 + lVar30 * (long)puVar14 + (long)param_2 * 3);
            puVar29 = puVar24;
            lVar35 = lVar27;
            if ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <
                (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2]) {
              do {
                puVar16 = puVar29;
                *puVar16 = (uint)param_2;
                puVar16[1] = (uint)puVar14;
                if (lVar35 == 0) {
LAB_109fffeb4:
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x109fffeb8);
                  (*pcVar12)();
                }
                param_2 = (uint *)(long)(int)puVar16[-4];
                puVar14 = (uint *)(long)(int)puVar16[-3];
                pbVar28 = (byte *)(lVar19 + lVar30 * (long)puVar14 + (long)param_2 * 3);
                puVar29 = puVar16 + -2;
                lVar35 = lVar35 + 8;
              } while ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <
                       (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2]);
              puVar16[-2] = uVar25;
              puVar16[-1] = uVar10;
            }
            puVar24 = puVar24 + 2;
            lVar27 = lVar27 + -8;
            lVar35 = lVar33;
            lVar33 = lVar33 + 8;
          } while (puVar24 != puVar34);
        }
        goto LAB_109fffe94;
      }
      if ((puVar15 == puVar34) || (puVar15 + 2 == puVar34)) goto LAB_109fffe94;
      lVar35 = 0;
      lVar33 = *(long *)(param_3 + 4);
      lVar19 = **(long **)(param_3 + 0x12);
      puVar24 = puVar15;
      puVar29 = puVar15 + 2;
      break;
    }
    if (param_4 == 0) {
      if (puVar15 == puVar34) goto LAB_109fffe94;
      uVar22 = uVar23 - 2 >> 1;
      lVar35 = *(long *)(param_3 + 4);
      plVar13 = *(long **)(param_3 + 0x12);
      uVar26 = uVar22;
      goto LAB_109fffa0c;
    }
    puVar14 = puVar15 + (uVar23 & 0xfffffffffffffffe);
    if (uVar23 < 0x81) {
      param_2 = puVar15;
      FUN_109fffeb8(puVar14,puVar15,puVar29,*(undefined8 *)(param_3 + 4),
                    **(undefined8 **)(param_3 + 0x12));
    }
    else {
      FUN_109fffeb8(puVar15,puVar14,puVar29,*(undefined8 *)(param_3 + 4),
                    **(undefined8 **)(param_3 + 0x12));
      FUN_109fffeb8(puVar15 + 2,puVar14 + -2,puVar34 + -4,*(undefined8 *)(param_3 + 4),
                    **(undefined8 **)(param_3 + 0x12));
      FUN_109fffeb8(puVar15 + 4,puVar14 + 2,puVar34 + -6,*(undefined8 *)(param_3 + 4),
                    **(undefined8 **)(param_3 + 0x12));
      param_2 = puVar14;
      FUN_109fffeb8(puVar14 + -2,puVar14,puVar14 + 2,*(undefined8 *)(param_3 + 4),
                    **(undefined8 **)(param_3 + 0x12));
      uVar36 = *(undefined8 *)puVar15;
      *(undefined8 *)puVar15 = *(undefined8 *)puVar14;
      *(undefined8 *)puVar14 = uVar36;
    }
    param_4 = param_4 + -1;
    uVar10 = *puVar15;
    if ((param_5 & 1) != 0) {
      uVar25 = puVar15[1];
      lVar35 = *(long *)(param_3 + 4);
      plVar13 = *(long **)(param_3 + 0x12);
      lVar33 = (long)(int)uVar25;
LAB_109fff40c:
      lVar19 = 0;
      do {
        puVar14 = (uint *)((long)puVar15 + lVar19 + 8);
        if (puVar14 == puVar34) goto LAB_109fffeb4;
        lVar30 = (long)(int)*puVar14;
        lVar27 = *plVar13;
        pbVar2 = (byte *)(lVar35 + lVar27 * *(int *)((long)puVar15 + lVar19 + 0xc) + lVar30 * 3);
        pbVar28 = (byte *)(lVar35 + (long)(int)uVar10 * 3 + lVar27 * lVar33);
        uVar1 = (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2];
        lVar19 = lVar19 + 8;
      } while ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] < uVar1);
      puVar14 = (uint *)((long)puVar15 + lVar19);
      puVar24 = puVar34;
      if (lVar19 == 8) {
        do {
          puVar16 = puVar24;
          if (puVar24 <= puVar14) break;
          puVar16 = puVar24 + -2;
          pbVar2 = (byte *)(lVar35 + lVar27 * (int)puVar24[-1] + (long)(int)*puVar16 * 3);
          puVar24 = puVar16;
        } while (uVar1 <= (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2]);
      }
      else {
        do {
          if (puVar24 == puVar15) goto LAB_109fffeb4;
          puVar16 = puVar24 + -2;
          pbVar2 = (byte *)(lVar35 + lVar27 * (int)puVar24[-1] + (long)(int)*puVar16 * 3);
          puVar24 = puVar16;
        } while (uVar1 <= (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2]);
      }
      puVar24 = puVar14;
      if (puVar14 < puVar16) {
        uVar23 = (ulong)*puVar16;
        puVar17 = puVar16;
        do {
          uVar1 = puVar24[1];
          uVar11 = puVar17[1];
          *puVar24 = (uint)uVar23;
          puVar24[1] = uVar11;
          *puVar17 = (uint)lVar30;
          puVar17[1] = uVar1;
          puVar20 = puVar24;
          do {
            puVar24 = puVar20 + 2;
            if (puVar24 == puVar34) goto LAB_109fffeb4;
            lVar30 = (long)(int)*puVar24;
            pbVar2 = (byte *)(lVar35 + lVar27 * (int)puVar20[3] + lVar30 * 3);
            uVar1 = (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2];
            puVar20 = puVar24;
          } while ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] < uVar1);
          do {
            if (puVar17 == puVar15) goto LAB_109fffeb4;
            puVar20 = puVar17 + -2;
            uVar23 = (ulong)(int)*puVar20;
            pbVar2 = (byte *)(lVar35 + lVar27 * (int)puVar17[-1] + uVar23 * 3);
            puVar17 = puVar20;
          } while (uVar1 <= (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2]);
        } while (puVar24 < puVar20);
      }
      puVar17 = puVar24 + -2;
      if (puVar17 != puVar15) {
        *(undefined8 *)puVar15 = *(undefined8 *)puVar17;
      }
      puVar24[-2] = uVar10;
      puVar24[-1] = uVar25;
      if (puVar16 <= puVar14) {
        puVar16 = puVar15;
        FUN_10a000310(puVar15,puVar17,param_3);
        puVar14 = puVar24;
        param_2 = puVar34;
        FUN_10a000310(puVar24,puVar34,param_3);
        if ((int)puVar14 != 0) goto LAB_109fff7dc;
        if (((ulong)puVar16 & 1) != 0) goto LAB_109fff298;
      }
      FUN_109fff250(puVar15,puVar17,param_3,param_4,(uint)param_5 & 1);
      param_5 = 0;
      puVar14 = puVar15;
      param_2 = puVar17;
      goto LAB_109fff298;
    }
    lVar35 = *(long *)(param_3 + 4);
    plVar13 = *(long **)(param_3 + 0x12);
    lVar19 = *plVar13;
    pbVar2 = (byte *)(lVar35 + lVar19 * (int)puVar15[-1] + (long)(int)puVar15[-2] * 3);
    uVar25 = puVar15[1];
    lVar33 = (long)(int)uVar25;
    pbVar28 = (byte *)(lVar35 + lVar19 * lVar33 + (long)(int)uVar10 * 3);
    puVar14 = (uint *)(ulong)pbVar28[2];
    uVar1 = (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2];
    if ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] < uVar1) goto LAB_109fff40c;
    pbVar2 = (byte *)(lVar35 + lVar19 * (int)puVar34[-1] + (long)(int)puVar34[-2] * 3);
    puVar16 = puVar15;
    if (uVar1 < (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2]) {
      do {
        puVar24 = puVar16 + 2;
        if (puVar24 == puVar34) goto LAB_109fffeb4;
        pbVar2 = (byte *)(lVar35 + lVar19 * (int)puVar16[3] + (long)(int)*puVar24 * 3);
        puVar16 = puVar24;
      } while ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <= uVar1);
    }
    else {
      do {
        puVar24 = puVar16 + 2;
        if (puVar34 <= puVar24) break;
        pbVar2 = (byte *)(lVar35 + lVar19 * (int)puVar16[3] + (long)(int)*puVar24 * 3);
        puVar16 = puVar24;
      } while ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <= uVar1);
    }
    puVar16 = puVar34;
    puVar17 = puVar34;
    if (puVar24 < puVar34) {
      do {
        if (puVar17 == puVar15) goto LAB_109fffeb4;
        puVar16 = puVar17 + -2;
        pbVar2 = (byte *)(lVar35 + lVar19 * (int)puVar17[-1] + (long)(int)*puVar16 * 3);
        puVar17 = puVar16;
      } while (uVar1 < (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2]);
    }
    if (puVar24 < puVar16) {
      uVar23 = (ulong)*puVar24;
      uVar26 = (ulong)*puVar16;
      do {
        uVar1 = puVar24[1];
        uVar11 = puVar16[1];
        *puVar24 = (uint)uVar26;
        puVar24[1] = uVar11;
        *puVar16 = (uint)uVar23;
        puVar16[1] = uVar1;
        puVar14 = puVar24;
        do {
          puVar24 = puVar14 + 2;
          if (puVar24 == puVar34) goto LAB_109fffeb4;
          uVar23 = (ulong)(int)*puVar24;
          pbVar2 = (byte *)(lVar35 + lVar19 * (int)puVar14[3] + uVar23 * 3);
          uVar1 = (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2];
          puVar14 = puVar24;
        } while ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <= uVar1);
        do {
          if (puVar16 == puVar15) goto LAB_109fffeb4;
          puVar17 = puVar16 + -2;
          uVar26 = (ulong)(int)*puVar17;
          pbVar2 = (byte *)(lVar35 + lVar19 * (int)puVar16[-1] + uVar26 * 3);
          param_2 = (uint *)(ulong)pbVar2[1];
          uVar11 = (uint)pbVar2[1] + (uint)*pbVar2;
          puVar14 = (uint *)(ulong)uVar11;
          puVar16 = puVar17;
        } while (uVar1 < uVar11 + pbVar2[2]);
      } while (puVar24 < puVar17);
    }
    if (puVar24 + -2 != puVar15) {
      *(undefined8 *)puVar15 = *(undefined8 *)(puVar24 + -2);
    }
    param_5 = 0;
    puVar24[-2] = uVar10;
    puVar24[-1] = uVar25;
  } while( true );
  do {
    uVar25 = puVar24[2];
    uVar1 = puVar24[3];
    lVar30 = (long)(int)*puVar24;
    pbVar2 = (byte *)(lVar33 + lVar19 * (int)uVar1 + (long)(int)uVar25 * 3);
    pbVar28 = (byte *)(lVar33 + lVar19 * (int)puVar24[1] + lVar30 * 3);
    param_2 = (uint *)(ulong)pbVar28[1];
    uVar10 = (uint)pbVar28[1] + (uint)*pbVar28;
    lVar27 = lVar35;
    if ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] < uVar10 + pbVar28[2]) {
      do {
        lVar31 = lVar27;
        uVar10 = *(uint *)((long)puVar15 + lVar31 + 4);
        *(int *)((long)puVar15 + lVar31 + 8) = (int)lVar30;
        *(uint *)((long)puVar15 + lVar31 + 0xc) = uVar10;
        puVar14 = puVar15;
        if (lVar31 == 0) goto LAB_109fff9dc;
        lVar30 = (long)*(int *)((long)puVar15 + lVar31 + -8);
        pbVar28 = (byte *)(lVar33 + lVar19 * *(int *)((long)puVar15 + lVar31 + -4) + lVar30 * 3);
        uVar10 = (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2];
        param_2 = (uint *)(ulong)((uint)pbVar28[1] + (uint)*pbVar28);
        lVar27 = lVar31 + -8;
      } while (uVar10 < (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2]);
      puVar14 = (uint *)((long)puVar15 + lVar31);
LAB_109fff9dc:
      *puVar14 = uVar25;
      puVar14[1] = uVar1;
    }
    puVar14 = (uint *)(ulong)uVar10;
    puVar16 = puVar29 + 2;
    lVar35 = lVar35 + 8;
    puVar24 = puVar29;
    puVar29 = puVar16;
  } while (puVar16 != puVar34);
  goto LAB_109fffe94;
LAB_109fff7dc:
  puVar34 = puVar17;
  if (((ulong)puVar16 & 1) != 0) goto LAB_109fffe94;
  goto LAB_109fff284;
LAB_109fffa0c:
  do {
    if ((long)uVar26 <= (long)uVar22) {
      uVar21 = uVar26 << 1 | 1;
      puVar14 = puVar15 + uVar21 * 2;
      uVar32 = uVar26 * 2 + 2;
      if ((long)uVar32 < (long)uVar23) {
        lVar33 = *plVar13;
        pbVar2 = (byte *)(lVar35 + lVar33 * (int)puVar14[1] + (long)(int)*puVar14 * 3);
        uVar10 = puVar14[2];
        pbVar28 = (byte *)(lVar35 + lVar33 * (int)puVar14[3] + (long)(int)uVar10 * 3);
        puVar24 = puVar14 + 2;
        if ((uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2] <=
            (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2]) {
          puVar24 = puVar14;
          uVar32 = uVar21;
          uVar10 = *puVar14;
        }
      }
      else {
        lVar33 = *plVar13;
        puVar24 = puVar14;
        uVar32 = uVar21;
        uVar10 = *puVar14;
      }
      uVar21 = (ulong)uVar10;
      puVar14 = puVar15 + uVar26 * 2;
      lVar19 = (long)(int)puVar24[1];
      pbVar2 = (byte *)(lVar35 + lVar33 * lVar19 +
                       (-(ulong)(uVar10 >> 0x1f) & 0xfffffffe00000000 | uVar21 << 1) +
                       (long)(int)uVar10);
      uVar10 = *puVar14;
      uVar25 = puVar14[1];
      pbVar28 = (byte *)(lVar35 + lVar33 * (int)uVar25 + (long)(int)uVar10 * 3);
      if ((uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2] <=
          (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2]) {
        do {
          puVar29 = puVar24;
          *puVar14 = (uint)uVar21;
          puVar14[1] = (uint)lVar19;
          if ((long)uVar22 < (long)uVar32) break;
          uVar21 = uVar32 << 1 | 1;
          puVar14 = puVar15 + uVar21 * 2;
          uVar32 = uVar32 * 2 + 2;
          if ((long)uVar32 < (long)uVar23) {
            pbVar2 = (byte *)(lVar35 + lVar33 * (int)puVar14[1] + (long)(int)*puVar14 * 3);
            uVar1 = puVar14[2];
            pbVar3 = (byte *)(lVar35 + lVar33 * (int)puVar14[3] + (long)(int)uVar1 * 3);
            puVar24 = puVar14 + 2;
            if ((uint)pbVar3[1] + (uint)*pbVar3 + (uint)pbVar3[2] <=
                (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2]) {
              puVar24 = puVar14;
              uVar32 = uVar21;
              uVar1 = *puVar14;
            }
          }
          else {
            puVar24 = puVar14;
            uVar32 = uVar21;
            uVar1 = *puVar14;
          }
          uVar21 = (ulong)uVar1;
          lVar19 = (long)(int)puVar24[1];
          pbVar2 = (byte *)(lVar35 + lVar33 * lVar19 +
                           (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | uVar21 << 1) +
                           (long)(int)uVar1);
          puVar14 = puVar29;
        } while ((uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2] <=
                 (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2]);
        *puVar29 = uVar10;
        puVar29[1] = uVar25;
      }
    }
    bVar5 = uVar26 != 0;
    uVar26 = uVar26 - 1;
  } while (bVar5);
  do {
    uVar26 = 0;
    uVar10 = *puVar15;
    uVar25 = puVar15[1];
    lVar35 = *(long *)(param_3 + 4);
    plVar13 = *(long **)(param_3 + 0x12);
    puVar24 = puVar15;
    do {
      puVar16 = puVar24 + uVar26 * 2;
      puVar29 = puVar16 + 2;
      uVar22 = uVar26 << 1 | 1;
      uVar26 = uVar26 * 2 + 2;
      if ((long)uVar26 < (long)uVar23) {
        puVar14 = puVar16 + 4;
        lVar33 = *plVar13;
        pbVar2 = (byte *)(lVar35 + lVar33 * (int)puVar16[3] + (long)(int)puVar16[2] * 3);
        pbVar28 = (byte *)(lVar35 + lVar33 * (int)puVar16[5] + (long)(int)*puVar14 * 3);
        puVar17 = puVar14;
        uVar1 = *puVar14;
        if ((uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2] <=
            (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2]) {
          puVar17 = puVar29;
          uVar26 = uVar22;
          uVar1 = puVar16[2];
        }
      }
      else {
        puVar14 = puVar16;
        puVar17 = puVar29;
        uVar26 = uVar22;
        uVar1 = *puVar29;
      }
      param_2 = (uint *)(ulong)uVar1;
      uVar11 = puVar17[1];
      *puVar24 = uVar1;
      puVar24[1] = uVar11;
      puVar24 = puVar17;
    } while ((long)uVar26 <= (long)(uVar23 - 2 >> 1));
    if (puVar17 == puVar34 + -2) {
      *puVar17 = uVar10;
      puVar17[1] = uVar25;
    }
    else {
      *(undefined8 *)puVar17 = *(undefined8 *)(puVar34 + -2);
      puVar34[-2] = uVar10;
      puVar34[-1] = uVar25;
      lVar33 = (long)((long)puVar17 + (8 - (long)puVar15)) >> 3;
      if (1 < lVar33) {
        uVar26 = lVar33 - 2U >> 1;
        puVar24 = puVar15 + uVar26 * 2;
        param_2 = (uint *)(long)(int)*puVar24;
        puVar14 = (uint *)(long)(int)puVar24[1];
        lVar33 = *plVar13;
        pbVar2 = (byte *)(lVar35 + lVar33 * (long)puVar14 + (long)param_2 * 3);
        uVar10 = *puVar17;
        uVar25 = puVar17[1];
        pbVar28 = (byte *)(lVar35 + lVar33 * (int)uVar25 + (long)(int)uVar10 * 3);
        if ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <
            (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2]) {
          do {
            puVar29 = puVar24;
            *puVar17 = (uint)param_2;
            puVar17[1] = (uint)puVar14;
            if (uVar26 == 0) break;
            uVar26 = uVar26 - 1 >> 1;
            puVar24 = puVar15 + uVar26 * 2;
            param_2 = (uint *)(long)(int)*puVar24;
            puVar14 = (uint *)(long)(int)puVar24[1];
            pbVar2 = (byte *)(lVar35 + lVar33 * (long)puVar14 + (long)param_2 * 3);
            puVar17 = puVar29;
          } while ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <
                   (uint)pbVar28[1] + (uint)*pbVar28 + (uint)pbVar28[2]);
          *puVar29 = uVar10;
          puVar29[1] = uVar25;
        }
      }
    }
    bVar5 = 2 < (long)uVar23;
    uVar23 = uVar23 - 1;
    puVar34 = puVar34 + -2;
  } while (bVar5);
LAB_109fffe94:
  auVar39._8_8_ = param_2;
  auVar39._0_8_ = puVar14;
  return auVar39;
}



/* Entry: 109fff208; end: 109fff21b;  */

void FUN_109fff208(undefined8 param_1,uint *param_2,long param_3,long param_4,ulong param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  byte *pbVar25;
  uint *puVar26;
  long lVar27;
  uint *puVar28;
  uint *puVar29;
  ulong uVar30;
  long *plVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  undefined8 uVar35;
  
  puVar12 = (uint *)&UNK_10f630bba;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  do {
    puVar26 = param_2 + -2;
    puVar20 = puVar12;
LAB_109fff298:
    puVar12 = puVar20;
    uVar19 = (long)param_2 - (long)puVar12 >> 3;
    if (uVar19 - 2 == 0 || (long)uVar19 < 2) {
      if (uVar19 < 2) {
        return;
      }
      if (uVar19 == 2) {
        uVar21 = param_2[-1];
        pbVar1 = (byte *)(*(long *)(param_3 + 0x10) +
                          **(long **)(param_3 + 0x48) * (long)(int)uVar21 +
                         (long)(int)param_2[-2] * 3);
        uVar9 = *puVar12;
        uVar16 = puVar12[1];
        pbVar25 = (byte *)(*(long *)(param_3 + 0x10) +
                           **(long **)(param_3 + 0x48) * (long)(int)uVar16 + (long)(int)uVar9 * 3);
        if ((uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2] <=
            (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
          return;
        }
        *puVar12 = param_2[-2];
        puVar12[1] = uVar21;
        param_2[-2] = uVar9;
        param_2[-1] = uVar16;
        return;
      }
    }
    else {
      if (uVar19 == 3) {
        lVar23 = *(long *)(param_3 + 0x10);
        lVar33 = **(long **)(param_3 + 0x48);
        puVar20 = puVar12 + 2;
        uVar16 = *puVar20;
        uVar6 = puVar12[3];
        pbVar1 = (byte *)(lVar23 + lVar33 * (int)uVar6 + (long)(int)uVar16 * 3);
        uVar10 = *puVar12;
        uVar7 = puVar12[1];
        pbVar25 = (byte *)(lVar23 + lVar33 * (int)uVar7 + (long)(int)uVar10 * 3);
        uVar9 = (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2];
        uVar5 = *puVar26;
        uVar8 = param_2[-1];
        pbVar1 = (byte *)(lVar23 + lVar33 * (int)uVar8 + (long)(int)uVar5 * 3);
        uVar21 = (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2];
        if (uVar9 < (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2]) {
          if (uVar21 < uVar9) {
            *puVar12 = uVar5;
            puVar12[1] = uVar8;
          }
          else {
            *puVar12 = uVar16;
            puVar12[1] = uVar6;
            *puVar20 = uVar10;
            puVar12[3] = uVar7;
            uVar9 = param_2[-1];
            pbVar1 = (byte *)(lVar23 + lVar33 * (int)uVar9 + (long)(int)*puVar26 * 3);
            if ((uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2] <=
                (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
              return;
            }
            *puVar20 = *puVar26;
            puVar12[3] = uVar9;
          }
          *puVar26 = uVar10;
          param_2[-1] = uVar7;
        }
        else if (uVar21 < uVar9) {
          *puVar20 = uVar5;
          puVar12[3] = uVar8;
          *puVar26 = uVar16;
          param_2[-1] = uVar6;
          pbVar1 = (byte *)(lVar23 + lVar33 * (int)puVar12[3] + (long)(int)*puVar20 * 3);
          uVar9 = *puVar12;
          uVar21 = puVar12[1];
          pbVar25 = (byte *)(lVar23 + lVar33 * (int)uVar21 + (long)(int)uVar9 * 3);
          if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
              (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2]) {
            *puVar12 = *puVar20;
            puVar12[1] = puVar12[3];
            *puVar20 = uVar9;
            puVar12[3] = uVar21;
            return;
          }
        }
        return;
      }
      if (uVar19 == 4) {
        puVar20 = puVar12 + 2;
        puVar13 = puVar12 + 4;
        FUN_109fffeb8();
        uVar21 = param_2[-1];
        lVar23 = *(long *)(param_3 + 0x10);
        lVar33 = **(long **)(param_3 + 0x48);
        pbVar1 = (byte *)(lVar23 + lVar33 * (int)uVar21 + (long)(int)*puVar26 * 3);
        uVar9 = *puVar13;
        uVar16 = puVar12[5];
        pbVar25 = (byte *)(lVar23 + lVar33 * (int)uVar16 + (long)(int)uVar9 * 3);
        if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
            (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2]) {
          *puVar13 = *puVar26;
          puVar12[5] = uVar21;
          *puVar26 = uVar9;
          param_2[-1] = uVar16;
          pbVar1 = (byte *)(lVar23 + lVar33 * (int)puVar12[5] + (long)(int)*puVar13 * 3);
          uVar9 = *puVar20;
          uVar21 = puVar12[3];
          pbVar25 = (byte *)(lVar23 + lVar33 * (int)uVar21 + (long)(int)uVar9 * 3);
          if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
              (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2]) {
            *puVar20 = *puVar13;
            puVar12[3] = puVar12[5];
            *puVar13 = uVar9;
            puVar12[5] = uVar21;
            pbVar1 = (byte *)(lVar23 + lVar33 * (int)puVar12[3] + (long)(int)*puVar20 * 3);
            uVar9 = *puVar12;
            uVar21 = puVar12[1];
            pbVar25 = (byte *)(lVar23 + lVar33 * (int)uVar21 + (long)(int)uVar9 * 3);
            if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
                (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2]) {
              *puVar12 = *puVar20;
              puVar12[1] = puVar12[3];
              *puVar20 = uVar9;
              puVar12[3] = uVar21;
            }
          }
        }
        return;
      }
      if (uVar19 == 5) {
        puVar20 = puVar12 + 2;
        puVar13 = puVar12 + 4;
        puVar14 = puVar12 + 6;
        FUN_109fffffc();
        uVar21 = param_2[-1];
        lVar23 = *(long *)(param_3 + 0x10);
        lVar33 = **(long **)(param_3 + 0x48);
        pbVar1 = (byte *)(lVar23 + lVar33 * (int)uVar21 + (long)(int)*puVar26 * 3);
        uVar9 = *puVar14;
        uVar16 = puVar12[7];
        pbVar25 = (byte *)(lVar23 + lVar33 * (int)uVar16 + (long)(int)uVar9 * 3);
        if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
            (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2]) {
          *puVar14 = *puVar26;
          puVar12[7] = uVar21;
          *puVar26 = uVar9;
          param_2[-1] = uVar16;
          pbVar1 = (byte *)(lVar23 + lVar33 * (int)puVar12[7] + (long)(int)*puVar14 * 3);
          uVar9 = *puVar13;
          uVar21 = puVar12[5];
          pbVar25 = (byte *)(lVar23 + lVar33 * (int)uVar21 + (long)(int)uVar9 * 3);
          if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
              (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2]) {
            *puVar13 = *puVar14;
            puVar12[5] = puVar12[7];
            *puVar14 = uVar9;
            puVar12[7] = uVar21;
            pbVar1 = (byte *)(lVar23 + lVar33 * (int)puVar12[5] + (long)(int)*puVar13 * 3);
            uVar9 = *puVar20;
            uVar21 = puVar12[3];
            pbVar25 = (byte *)(lVar23 + lVar33 * (int)uVar21 + (long)(int)uVar9 * 3);
            if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
                (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2]) {
              *puVar20 = *puVar13;
              puVar12[3] = puVar12[5];
              *puVar13 = uVar9;
              puVar12[5] = uVar21;
              pbVar1 = (byte *)(lVar23 + lVar33 * (int)puVar12[3] + (long)(int)*puVar20 * 3);
              uVar9 = *puVar12;
              uVar21 = puVar12[1];
              pbVar25 = (byte *)(lVar23 + lVar33 * (int)uVar21 + (long)(int)uVar9 * 3);
              if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
                  (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2]) {
                *puVar12 = *puVar20;
                puVar12[1] = puVar12[3];
                *puVar20 = uVar9;
                puVar12[3] = uVar21;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar19 < 0x18) {
      if ((param_5 & 1) == 0) {
        if (puVar12 == param_2) {
          return;
        }
        puVar20 = puVar12 + 2;
        if (puVar20 == param_2) {
          return;
        }
        lVar17 = *(long *)(param_3 + 0x10);
        lVar27 = **(long **)(param_3 + 0x48);
        lVar24 = -8;
        lVar23 = 0;
        lVar33 = 8;
        do {
          piVar3 = (int *)((long)puVar12 + lVar23);
          uVar9 = piVar3[3];
          uVar21 = *puVar20;
          pbVar1 = (byte *)(lVar17 + lVar27 * (int)uVar9 + (long)(int)uVar21 * 3);
          lVar23 = (long)*piVar3;
          lVar15 = (long)piVar3[1];
          pbVar25 = (byte *)(lVar17 + lVar27 * lVar15 + lVar23 * 3);
          puVar26 = puVar20;
          lVar34 = lVar24;
          if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
              (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2]) {
            do {
              puVar13 = puVar26;
              *puVar13 = (uint)lVar23;
              puVar13[1] = (uint)lVar15;
              if (lVar34 == 0) {
LAB_109fffeb4:
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x109fffeb8);
                (*pcVar11)();
              }
              lVar23 = (long)(int)puVar13[-4];
              lVar15 = (long)(int)puVar13[-3];
              pbVar25 = (byte *)(lVar17 + lVar27 * lVar15 + lVar23 * 3);
              puVar26 = puVar13 + -2;
              lVar34 = lVar34 + 8;
            } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
                     (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2]);
            puVar13[-2] = uVar21;
            puVar13[-1] = uVar9;
          }
          puVar20 = puVar20 + 2;
          lVar24 = lVar24 + -8;
          lVar23 = lVar33;
          lVar33 = lVar33 + 8;
          if (puVar20 == param_2) {
            return;
          }
        } while( true );
      }
      if (puVar12 == param_2) {
        return;
      }
      if (puVar12 + 2 == param_2) {
        return;
      }
      lVar23 = 0;
      lVar33 = *(long *)(param_3 + 0x10);
      lVar17 = **(long **)(param_3 + 0x48);
      puVar20 = puVar12;
      puVar26 = puVar12 + 2;
      break;
    }
    if (param_4 == 0) {
      if (puVar12 == param_2) {
        return;
      }
      uVar22 = uVar19 - 2 >> 1;
      lVar23 = *(long *)(param_3 + 0x10);
      plVar31 = *(long **)(param_3 + 0x48);
      uVar32 = uVar22;
      goto LAB_109fffa0c;
    }
    puVar20 = puVar12 + (uVar19 & 0xfffffffffffffffe);
    if (uVar19 < 0x81) {
      FUN_109fffeb8(puVar20,puVar12,puVar26,*(undefined8 *)(param_3 + 0x10),
                    **(undefined8 **)(param_3 + 0x48));
    }
    else {
      FUN_109fffeb8(puVar12,puVar20,puVar26,*(undefined8 *)(param_3 + 0x10),
                    **(undefined8 **)(param_3 + 0x48));
      FUN_109fffeb8(puVar12 + 2,puVar20 + -2,param_2 + -4,*(undefined8 *)(param_3 + 0x10),
                    **(undefined8 **)(param_3 + 0x48));
      FUN_109fffeb8(puVar12 + 4,puVar20 + 2,param_2 + -6,*(undefined8 *)(param_3 + 0x10),
                    **(undefined8 **)(param_3 + 0x48));
      FUN_109fffeb8(puVar20 + -2,puVar20,puVar20 + 2,*(undefined8 *)(param_3 + 0x10),
                    **(undefined8 **)(param_3 + 0x48));
      uVar35 = *(undefined8 *)puVar12;
      *(undefined8 *)puVar12 = *(undefined8 *)puVar20;
      *(undefined8 *)puVar20 = uVar35;
    }
    param_4 = param_4 + -1;
    uVar9 = *puVar12;
    if ((param_5 & 1) == 0) {
      lVar23 = *(long *)(param_3 + 0x10);
      plVar31 = *(long **)(param_3 + 0x48);
      lVar17 = *plVar31;
      pbVar1 = (byte *)(lVar23 + lVar17 * (int)puVar12[-1] + (long)(int)puVar12[-2] * 3);
      uVar21 = puVar12[1];
      lVar33 = (long)(int)uVar21;
      pbVar25 = (byte *)(lVar23 + lVar17 * lVar33 + (long)(int)uVar9 * 3);
      uVar16 = (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2];
      if (uVar16 <= (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
        pbVar1 = (byte *)(lVar23 + lVar17 * (int)param_2[-1] + (long)(int)param_2[-2] * 3);
        puVar13 = puVar12;
        if (uVar16 < (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
          do {
            puVar20 = puVar13 + 2;
            if (puVar20 == param_2) goto LAB_109fffeb4;
            pbVar1 = (byte *)(lVar23 + lVar17 * (int)puVar13[3] + (long)(int)*puVar20 * 3);
            puVar13 = puVar20;
          } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <= uVar16);
        }
        else {
          do {
            puVar20 = puVar13 + 2;
            if (param_2 <= puVar20) break;
            pbVar1 = (byte *)(lVar23 + lVar17 * (int)puVar13[3] + (long)(int)*puVar20 * 3);
            puVar13 = puVar20;
          } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <= uVar16);
        }
        puVar13 = param_2;
        puVar14 = param_2;
        if (puVar20 < param_2) {
          do {
            if (puVar14 == puVar12) goto LAB_109fffeb4;
            puVar13 = puVar14 + -2;
            pbVar1 = (byte *)(lVar23 + lVar17 * (int)puVar14[-1] + (long)(int)*puVar13 * 3);
            puVar14 = puVar13;
          } while (uVar16 < (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]);
        }
        if (puVar20 < puVar13) {
          uVar19 = (ulong)*puVar20;
          uVar32 = (ulong)*puVar13;
          do {
            uVar16 = puVar20[1];
            uVar10 = puVar13[1];
            *puVar20 = (uint)uVar32;
            puVar20[1] = uVar10;
            *puVar13 = (uint)uVar19;
            puVar13[1] = uVar16;
            puVar14 = puVar20;
            do {
              puVar20 = puVar14 + 2;
              if (puVar20 == param_2) goto LAB_109fffeb4;
              uVar19 = (ulong)(int)*puVar20;
              pbVar1 = (byte *)(lVar23 + lVar17 * (int)puVar14[3] + uVar19 * 3);
              uVar16 = (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2];
              puVar14 = puVar20;
            } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <= uVar16);
            do {
              if (puVar13 == puVar12) goto LAB_109fffeb4;
              puVar14 = puVar13 + -2;
              uVar32 = (ulong)(int)*puVar14;
              pbVar1 = (byte *)(lVar23 + lVar17 * (int)puVar13[-1] + uVar32 * 3);
              puVar13 = puVar14;
            } while (uVar16 < (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]);
          } while (puVar20 < puVar14);
        }
        if (puVar20 + -2 != puVar12) {
          *(undefined8 *)puVar12 = *(undefined8 *)(puVar20 + -2);
        }
        param_5 = 0;
        puVar20[-2] = uVar9;
        puVar20[-1] = uVar21;
        goto LAB_109fff298;
      }
    }
    else {
      uVar21 = puVar12[1];
      lVar23 = *(long *)(param_3 + 0x10);
      plVar31 = *(long **)(param_3 + 0x48);
      lVar33 = (long)(int)uVar21;
    }
    lVar17 = 0;
    do {
      puVar20 = (uint *)((long)puVar12 + lVar17 + 8);
      if (puVar20 == param_2) goto LAB_109fffeb4;
      lVar27 = (long)(int)*puVar20;
      lVar24 = *plVar31;
      pbVar1 = (byte *)(lVar23 + lVar24 * *(int *)((long)puVar12 + lVar17 + 0xc) + lVar27 * 3);
      pbVar25 = (byte *)(lVar23 + (long)(int)uVar9 * 3 + lVar24 * lVar33);
      uVar16 = (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2];
      lVar17 = lVar17 + 8;
    } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] < uVar16);
    puVar13 = (uint *)((long)puVar12 + lVar17);
    puVar20 = param_2;
    if (lVar17 == 8) {
      do {
        puVar14 = puVar20;
        if (puVar20 <= puVar13) break;
        puVar14 = puVar20 + -2;
        pbVar1 = (byte *)(lVar23 + lVar24 * (int)puVar20[-1] + (long)(int)*puVar14 * 3);
        puVar20 = puVar14;
      } while (uVar16 <= (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]);
    }
    else {
      do {
        if (puVar20 == puVar12) goto LAB_109fffeb4;
        puVar14 = puVar20 + -2;
        pbVar1 = (byte *)(lVar23 + lVar24 * (int)puVar20[-1] + (long)(int)*puVar14 * 3);
        puVar20 = puVar14;
      } while (uVar16 <= (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]);
    }
    puVar20 = puVar13;
    if (puVar13 < puVar14) {
      uVar19 = (ulong)*puVar14;
      puVar28 = puVar14;
      do {
        uVar16 = puVar20[1];
        uVar10 = puVar28[1];
        *puVar20 = (uint)uVar19;
        puVar20[1] = uVar10;
        *puVar28 = (uint)lVar27;
        puVar28[1] = uVar16;
        puVar29 = puVar20;
        do {
          puVar20 = puVar29 + 2;
          if (puVar20 == param_2) goto LAB_109fffeb4;
          lVar27 = (long)(int)*puVar20;
          pbVar1 = (byte *)(lVar23 + lVar24 * (int)puVar29[3] + lVar27 * 3);
          uVar16 = (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2];
          puVar29 = puVar20;
        } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] < uVar16);
        do {
          if (puVar28 == puVar12) goto LAB_109fffeb4;
          puVar29 = puVar28 + -2;
          uVar19 = (ulong)(int)*puVar29;
          pbVar1 = (byte *)(lVar23 + lVar24 * (int)puVar28[-1] + uVar19 * 3);
          puVar28 = puVar29;
        } while (uVar16 <= (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]);
      } while (puVar20 < puVar29);
    }
    puVar28 = puVar20 + -2;
    if (puVar28 != puVar12) {
      *(undefined8 *)puVar12 = *(undefined8 *)puVar28;
    }
    puVar20[-2] = uVar9;
    puVar20[-1] = uVar21;
    if (puVar13 < puVar14) goto LAB_109fff600;
    puVar13 = puVar12;
    FUN_10a000310(puVar12,puVar28,param_3);
    puVar14 = puVar20;
    FUN_10a000310(puVar20,param_2,param_3);
    if ((int)puVar14 == 0) goto code_r0x000109fff5fc;
    param_2 = puVar28;
    if (((ulong)puVar13 & 1) != 0) {
      return;
    }
  } while( true );
LAB_109fff920:
  uVar9 = puVar20[2];
  uVar21 = puVar20[3];
  lVar27 = (long)(int)*puVar20;
  pbVar1 = (byte *)(lVar33 + lVar17 * (int)uVar21 + (long)(int)uVar9 * 3);
  pbVar25 = (byte *)(lVar33 + lVar17 * (int)puVar20[1] + lVar27 * 3);
  lVar24 = lVar23;
  if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
      (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2]) {
    do {
      lVar15 = lVar24;
      *(int *)((long)puVar12 + lVar15 + 8) = (int)lVar27;
      *(undefined4 *)((long)puVar12 + lVar15 + 0xc) = *(undefined4 *)((long)puVar12 + lVar15 + 4);
      puVar20 = puVar12;
      if (lVar15 == 0) goto LAB_109fff9dc;
      lVar27 = (long)*(int *)((long)puVar12 + lVar15 + -8);
      pbVar25 = (byte *)(lVar33 + lVar17 * *(int *)((long)puVar12 + lVar15 + -4) + lVar27 * 3);
      lVar24 = lVar15 + -8;
    } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
             (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2]);
    puVar20 = (uint *)((long)puVar12 + lVar15);
LAB_109fff9dc:
    *puVar20 = uVar9;
    puVar20[1] = uVar21;
  }
  puVar13 = puVar26 + 2;
  lVar23 = lVar23 + 8;
  puVar20 = puVar26;
  puVar26 = puVar13;
  if (puVar13 == param_2) {
    return;
  }
  goto LAB_109fff920;
LAB_109fffa0c:
  do {
    if ((long)uVar32 <= (long)uVar22) {
      uVar18 = uVar32 << 1 | 1;
      puVar20 = puVar12 + uVar18 * 2;
      uVar30 = uVar32 * 2 + 2;
      if ((long)uVar30 < (long)uVar19) {
        lVar33 = *plVar31;
        pbVar1 = (byte *)(lVar23 + lVar33 * (int)puVar20[1] + (long)(int)*puVar20 * 3);
        uVar9 = puVar20[2];
        pbVar25 = (byte *)(lVar23 + lVar33 * (int)puVar20[3] + (long)(int)uVar9 * 3);
        puVar26 = puVar20 + 2;
        if ((uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2] <=
            (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
          puVar26 = puVar20;
          uVar30 = uVar18;
          uVar9 = *puVar20;
        }
      }
      else {
        lVar33 = *plVar31;
        puVar26 = puVar20;
        uVar30 = uVar18;
        uVar9 = *puVar20;
      }
      uVar18 = (ulong)uVar9;
      puVar20 = puVar12 + uVar32 * 2;
      lVar17 = (long)(int)puVar26[1];
      pbVar1 = (byte *)(lVar23 + lVar33 * lVar17 +
                       (-(ulong)(uVar9 >> 0x1f) & 0xfffffffe00000000 | uVar18 << 1) +
                       (long)(int)uVar9);
      uVar9 = *puVar20;
      uVar21 = puVar20[1];
      pbVar25 = (byte *)(lVar23 + lVar33 * (int)uVar21 + (long)(int)uVar9 * 3);
      if ((uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2] <=
          (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
        do {
          puVar13 = puVar26;
          *puVar20 = (uint)uVar18;
          puVar20[1] = (uint)lVar17;
          if ((long)uVar22 < (long)uVar30) break;
          uVar18 = uVar30 << 1 | 1;
          puVar20 = puVar12 + uVar18 * 2;
          uVar30 = uVar30 * 2 + 2;
          if ((long)uVar30 < (long)uVar19) {
            pbVar1 = (byte *)(lVar23 + lVar33 * (int)puVar20[1] + (long)(int)*puVar20 * 3);
            uVar16 = puVar20[2];
            pbVar2 = (byte *)(lVar23 + lVar33 * (int)puVar20[3] + (long)(int)uVar16 * 3);
            puVar26 = puVar20 + 2;
            if ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <=
                (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
              puVar26 = puVar20;
              uVar30 = uVar18;
              uVar16 = *puVar20;
            }
          }
          else {
            puVar26 = puVar20;
            uVar30 = uVar18;
            uVar16 = *puVar20;
          }
          uVar18 = (ulong)uVar16;
          lVar17 = (long)(int)puVar26[1];
          pbVar1 = (byte *)(lVar23 + lVar33 * lVar17 +
                           (-(ulong)(uVar16 >> 0x1f) & 0xfffffffe00000000 | uVar18 << 1) +
                           (long)(int)uVar16);
          puVar20 = puVar13;
        } while ((uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2] <=
                 (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]);
        *puVar13 = uVar9;
        puVar13[1] = uVar21;
      }
    }
    bVar4 = uVar32 != 0;
    uVar32 = uVar32 - 1;
  } while (bVar4);
  do {
    uVar32 = 0;
    uVar9 = *puVar12;
    uVar21 = puVar12[1];
    lVar23 = *(long *)(param_3 + 0x10);
    plVar31 = *(long **)(param_3 + 0x48);
    puVar20 = puVar12;
    do {
      puVar26 = puVar20 + uVar32 * 2 + 2;
      uVar30 = uVar32 << 1 | 1;
      uVar22 = uVar32 * 2 + 2;
      if ((long)uVar22 < (long)uVar19) {
        uVar16 = puVar20[uVar32 * 2 + 4];
        lVar33 = uVar32 * 2;
        lVar17 = *plVar31;
        pbVar1 = (byte *)(lVar23 + lVar17 * (int)puVar20[uVar32 * 2 + 3] +
                         (long)(int)puVar20[lVar33 + 2] * 3);
        pbVar25 = (byte *)(lVar23 + lVar17 * (int)puVar20[uVar32 * 2 + 5] + (long)(int)uVar16 * 3);
        puVar13 = puVar20 + uVar32 * 2 + 4;
        uVar32 = uVar22;
        if ((uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2] <=
            (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
          puVar13 = puVar26;
          uVar32 = uVar30;
          uVar16 = puVar20[lVar33 + 2];
        }
      }
      else {
        puVar13 = puVar26;
        uVar32 = uVar30;
        uVar16 = *puVar26;
      }
      uVar10 = puVar13[1];
      *puVar20 = uVar16;
      puVar20[1] = uVar10;
      puVar20 = puVar13;
    } while ((long)uVar32 <= (long)(uVar19 - 2 >> 1));
    if (puVar13 == param_2 + -2) {
      *puVar13 = uVar9;
      puVar13[1] = uVar21;
    }
    else {
      *(undefined8 *)puVar13 = *(undefined8 *)(param_2 + -2);
      param_2[-2] = uVar9;
      param_2[-1] = uVar21;
      lVar33 = (long)((long)puVar13 + (8 - (long)puVar12)) >> 3;
      if (1 < lVar33) {
        uVar32 = lVar33 - 2U >> 1;
        puVar20 = puVar12 + uVar32 * 2;
        lVar33 = (long)(int)*puVar20;
        lVar17 = (long)(int)puVar20[1];
        lVar27 = *plVar31;
        pbVar1 = (byte *)(lVar23 + lVar27 * lVar17 + lVar33 * 3);
        uVar9 = *puVar13;
        uVar21 = puVar13[1];
        pbVar25 = (byte *)(lVar23 + lVar27 * (int)uVar21 + (long)(int)uVar9 * 3);
        if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
            (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2]) {
          do {
            puVar26 = puVar20;
            *puVar13 = (uint)lVar33;
            puVar13[1] = (uint)lVar17;
            if (uVar32 == 0) break;
            uVar32 = uVar32 - 1 >> 1;
            puVar20 = puVar12 + uVar32 * 2;
            lVar33 = (long)(int)*puVar20;
            lVar17 = (long)(int)puVar20[1];
            pbVar1 = (byte *)(lVar23 + lVar27 * lVar17 + lVar33 * 3);
            puVar13 = puVar26;
          } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
                   (uint)pbVar25[1] + (uint)*pbVar25 + (uint)pbVar25[2]);
          *puVar26 = uVar9;
          puVar26[1] = uVar21;
        }
      }
    }
    bVar4 = (long)uVar19 < 3;
    uVar19 = uVar19 - 1;
    param_2 = param_2 + -2;
    if (bVar4) {
      return;
    }
  } while( true );
code_r0x000109fff5fc:
  if (((ulong)puVar13 & 1) == 0) {
LAB_109fff600:
    FUN_109fff250(puVar12,puVar28,param_3,param_4,(uint)param_5 & 1);
    param_5 = 0;
  }
  goto LAB_109fff298;
}



/* Entry: 109fff21c; end: 109fff24f;  */

void FUN_109fff21c(uint *param_1,uint *param_2,long param_3,long param_4,ulong param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  byte *pbVar24;
  uint *puVar25;
  long lVar26;
  uint *puVar27;
  uint *puVar28;
  ulong uVar29;
  long *plVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  do {
    puVar25 = param_2 + -2;
    puVar19 = param_1;
LAB_109fff298:
    param_1 = puVar19;
    uVar18 = (long)param_2 - (long)param_1 >> 3;
    if (uVar18 - 2 == 0 || (long)uVar18 < 2) {
      if (uVar18 < 2) {
        return;
      }
      if (uVar18 == 2) {
        uVar20 = param_2[-1];
        pbVar1 = (byte *)(*(long *)(param_3 + 0x10) +
                          **(long **)(param_3 + 0x48) * (long)(int)uVar20 +
                         (long)(int)param_2[-2] * 3);
        uVar9 = *param_1;
        uVar15 = param_1[1];
        pbVar24 = (byte *)(*(long *)(param_3 + 0x10) +
                           **(long **)(param_3 + 0x48) * (long)(int)uVar15 + (long)(int)uVar9 * 3);
        if ((uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2] <=
            (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
          return;
        }
        *param_1 = param_2[-2];
        param_1[1] = uVar20;
        param_2[-2] = uVar9;
        param_2[-1] = uVar15;
        return;
      }
    }
    else {
      if (uVar18 == 3) {
        lVar22 = *(long *)(param_3 + 0x10);
        lVar32 = **(long **)(param_3 + 0x48);
        puVar19 = param_1 + 2;
        uVar15 = *puVar19;
        uVar6 = param_1[3];
        pbVar1 = (byte *)(lVar22 + lVar32 * (int)uVar6 + (long)(int)uVar15 * 3);
        uVar10 = *param_1;
        uVar7 = param_1[1];
        pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar7 + (long)(int)uVar10 * 3);
        uVar9 = (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2];
        uVar5 = *puVar25;
        uVar8 = param_2[-1];
        pbVar1 = (byte *)(lVar22 + lVar32 * (int)uVar8 + (long)(int)uVar5 * 3);
        uVar20 = (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2];
        if (uVar9 < (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
          if (uVar20 < uVar9) {
            *param_1 = uVar5;
            param_1[1] = uVar8;
          }
          else {
            *param_1 = uVar15;
            param_1[1] = uVar6;
            *puVar19 = uVar10;
            param_1[3] = uVar7;
            uVar9 = param_2[-1];
            pbVar1 = (byte *)(lVar22 + lVar32 * (int)uVar9 + (long)(int)*puVar25 * 3);
            if ((uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2] <=
                (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
              return;
            }
            *puVar19 = *puVar25;
            param_1[3] = uVar9;
          }
          *puVar25 = uVar10;
          param_2[-1] = uVar7;
        }
        else if (uVar20 < uVar9) {
          *puVar19 = uVar5;
          param_1[3] = uVar8;
          *puVar25 = uVar15;
          param_2[-1] = uVar6;
          pbVar1 = (byte *)(lVar22 + lVar32 * (int)param_1[3] + (long)(int)*puVar19 * 3);
          uVar9 = *param_1;
          uVar20 = param_1[1];
          pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar20 + (long)(int)uVar9 * 3);
          if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
              (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
            *param_1 = *puVar19;
            param_1[1] = param_1[3];
            *puVar19 = uVar9;
            param_1[3] = uVar20;
            return;
          }
        }
        return;
      }
      if (uVar18 == 4) {
        puVar19 = param_1 + 2;
        puVar12 = param_1 + 4;
        FUN_109fffeb8();
        uVar20 = param_2[-1];
        lVar22 = *(long *)(param_3 + 0x10);
        lVar32 = **(long **)(param_3 + 0x48);
        pbVar1 = (byte *)(lVar22 + lVar32 * (int)uVar20 + (long)(int)*puVar25 * 3);
        uVar9 = *puVar12;
        uVar15 = param_1[5];
        pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar15 + (long)(int)uVar9 * 3);
        if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
            (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
          *puVar12 = *puVar25;
          param_1[5] = uVar20;
          *puVar25 = uVar9;
          param_2[-1] = uVar15;
          pbVar1 = (byte *)(lVar22 + lVar32 * (int)param_1[5] + (long)(int)*puVar12 * 3);
          uVar9 = *puVar19;
          uVar20 = param_1[3];
          pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar20 + (long)(int)uVar9 * 3);
          if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
              (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
            *puVar19 = *puVar12;
            param_1[3] = param_1[5];
            *puVar12 = uVar9;
            param_1[5] = uVar20;
            pbVar1 = (byte *)(lVar22 + lVar32 * (int)param_1[3] + (long)(int)*puVar19 * 3);
            uVar9 = *param_1;
            uVar20 = param_1[1];
            pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar20 + (long)(int)uVar9 * 3);
            if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
                (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
              *param_1 = *puVar19;
              param_1[1] = param_1[3];
              *puVar19 = uVar9;
              param_1[3] = uVar20;
            }
          }
        }
        return;
      }
      if (uVar18 == 5) {
        puVar19 = param_1 + 2;
        puVar12 = param_1 + 4;
        puVar13 = param_1 + 6;
        FUN_109fffffc();
        uVar20 = param_2[-1];
        lVar22 = *(long *)(param_3 + 0x10);
        lVar32 = **(long **)(param_3 + 0x48);
        pbVar1 = (byte *)(lVar22 + lVar32 * (int)uVar20 + (long)(int)*puVar25 * 3);
        uVar9 = *puVar13;
        uVar15 = param_1[7];
        pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar15 + (long)(int)uVar9 * 3);
        if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
            (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
          *puVar13 = *puVar25;
          param_1[7] = uVar20;
          *puVar25 = uVar9;
          param_2[-1] = uVar15;
          pbVar1 = (byte *)(lVar22 + lVar32 * (int)param_1[7] + (long)(int)*puVar13 * 3);
          uVar9 = *puVar12;
          uVar20 = param_1[5];
          pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar20 + (long)(int)uVar9 * 3);
          if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
              (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
            *puVar12 = *puVar13;
            param_1[5] = param_1[7];
            *puVar13 = uVar9;
            param_1[7] = uVar20;
            pbVar1 = (byte *)(lVar22 + lVar32 * (int)param_1[5] + (long)(int)*puVar12 * 3);
            uVar9 = *puVar19;
            uVar20 = param_1[3];
            pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar20 + (long)(int)uVar9 * 3);
            if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
                (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
              *puVar19 = *puVar12;
              param_1[3] = param_1[5];
              *puVar12 = uVar9;
              param_1[5] = uVar20;
              pbVar1 = (byte *)(lVar22 + lVar32 * (int)param_1[3] + (long)(int)*puVar19 * 3);
              uVar9 = *param_1;
              uVar20 = param_1[1];
              pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar20 + (long)(int)uVar9 * 3);
              if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
                  (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
                *param_1 = *puVar19;
                param_1[1] = param_1[3];
                *puVar19 = uVar9;
                param_1[3] = uVar20;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar18 < 0x18) {
      if ((param_5 & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        puVar19 = param_1 + 2;
        if (puVar19 == param_2) {
          return;
        }
        lVar16 = *(long *)(param_3 + 0x10);
        lVar26 = **(long **)(param_3 + 0x48);
        lVar23 = -8;
        lVar22 = 0;
        lVar32 = 8;
        do {
          piVar3 = (int *)((long)param_1 + lVar22);
          uVar9 = piVar3[3];
          uVar20 = *puVar19;
          pbVar1 = (byte *)(lVar16 + lVar26 * (int)uVar9 + (long)(int)uVar20 * 3);
          lVar22 = (long)*piVar3;
          lVar14 = (long)piVar3[1];
          pbVar24 = (byte *)(lVar16 + lVar26 * lVar14 + lVar22 * 3);
          puVar25 = puVar19;
          lVar33 = lVar23;
          if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
              (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
            do {
              puVar12 = puVar25;
              *puVar12 = (uint)lVar22;
              puVar12[1] = (uint)lVar14;
              if (lVar33 == 0) {
LAB_109fffeb4:
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x109fffeb8);
                (*pcVar11)();
              }
              lVar22 = (long)(int)puVar12[-4];
              lVar14 = (long)(int)puVar12[-3];
              pbVar24 = (byte *)(lVar16 + lVar26 * lVar14 + lVar22 * 3);
              puVar25 = puVar12 + -2;
              lVar33 = lVar33 + 8;
            } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
                     (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]);
            puVar12[-2] = uVar20;
            puVar12[-1] = uVar9;
          }
          puVar19 = puVar19 + 2;
          lVar23 = lVar23 + -8;
          lVar22 = lVar32;
          lVar32 = lVar32 + 8;
          if (puVar19 == param_2) {
            return;
          }
        } while( true );
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 2 == param_2) {
        return;
      }
      lVar22 = 0;
      lVar32 = *(long *)(param_3 + 0x10);
      lVar16 = **(long **)(param_3 + 0x48);
      puVar19 = param_1;
      puVar25 = param_1 + 2;
      break;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar21 = uVar18 - 2 >> 1;
      lVar22 = *(long *)(param_3 + 0x10);
      plVar30 = *(long **)(param_3 + 0x48);
      uVar31 = uVar21;
      goto LAB_109fffa0c;
    }
    puVar19 = param_1 + (uVar18 & 0xfffffffffffffffe);
    if (uVar18 < 0x81) {
      FUN_109fffeb8(puVar19,param_1,puVar25,*(undefined8 *)(param_3 + 0x10),
                    **(undefined8 **)(param_3 + 0x48));
    }
    else {
      FUN_109fffeb8(param_1,puVar19,puVar25,*(undefined8 *)(param_3 + 0x10),
                    **(undefined8 **)(param_3 + 0x48));
      FUN_109fffeb8(param_1 + 2,puVar19 + -2,param_2 + -4,*(undefined8 *)(param_3 + 0x10),
                    **(undefined8 **)(param_3 + 0x48));
      FUN_109fffeb8(param_1 + 4,puVar19 + 2,param_2 + -6,*(undefined8 *)(param_3 + 0x10),
                    **(undefined8 **)(param_3 + 0x48));
      FUN_109fffeb8(puVar19 + -2,puVar19,puVar19 + 2,*(undefined8 *)(param_3 + 0x10),
                    **(undefined8 **)(param_3 + 0x48));
      uVar34 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)puVar19;
      *(undefined8 *)puVar19 = uVar34;
    }
    param_4 = param_4 + -1;
    uVar9 = *param_1;
    if ((param_5 & 1) == 0) {
      lVar22 = *(long *)(param_3 + 0x10);
      plVar30 = *(long **)(param_3 + 0x48);
      lVar16 = *plVar30;
      pbVar1 = (byte *)(lVar22 + lVar16 * (int)param_1[-1] + (long)(int)param_1[-2] * 3);
      uVar20 = param_1[1];
      lVar32 = (long)(int)uVar20;
      pbVar24 = (byte *)(lVar22 + lVar16 * lVar32 + (long)(int)uVar9 * 3);
      uVar15 = (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2];
      if (uVar15 <= (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
        pbVar1 = (byte *)(lVar22 + lVar16 * (int)param_2[-1] + (long)(int)param_2[-2] * 3);
        puVar12 = param_1;
        if (uVar15 < (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
          do {
            puVar19 = puVar12 + 2;
            if (puVar19 == param_2) goto LAB_109fffeb4;
            pbVar1 = (byte *)(lVar22 + lVar16 * (int)puVar12[3] + (long)(int)*puVar19 * 3);
            puVar12 = puVar19;
          } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <= uVar15);
        }
        else {
          do {
            puVar19 = puVar12 + 2;
            if (param_2 <= puVar19) break;
            pbVar1 = (byte *)(lVar22 + lVar16 * (int)puVar12[3] + (long)(int)*puVar19 * 3);
            puVar12 = puVar19;
          } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <= uVar15);
        }
        puVar12 = param_2;
        puVar13 = param_2;
        if (puVar19 < param_2) {
          do {
            if (puVar13 == param_1) goto LAB_109fffeb4;
            puVar12 = puVar13 + -2;
            pbVar1 = (byte *)(lVar22 + lVar16 * (int)puVar13[-1] + (long)(int)*puVar12 * 3);
            puVar13 = puVar12;
          } while (uVar15 < (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]);
        }
        if (puVar19 < puVar12) {
          uVar18 = (ulong)*puVar19;
          uVar31 = (ulong)*puVar12;
          do {
            uVar15 = puVar19[1];
            uVar10 = puVar12[1];
            *puVar19 = (uint)uVar31;
            puVar19[1] = uVar10;
            *puVar12 = (uint)uVar18;
            puVar12[1] = uVar15;
            puVar13 = puVar19;
            do {
              puVar19 = puVar13 + 2;
              if (puVar19 == param_2) goto LAB_109fffeb4;
              uVar18 = (ulong)(int)*puVar19;
              pbVar1 = (byte *)(lVar22 + lVar16 * (int)puVar13[3] + uVar18 * 3);
              uVar15 = (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2];
              puVar13 = puVar19;
            } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <= uVar15);
            do {
              if (puVar12 == param_1) goto LAB_109fffeb4;
              puVar13 = puVar12 + -2;
              uVar31 = (ulong)(int)*puVar13;
              pbVar1 = (byte *)(lVar22 + lVar16 * (int)puVar12[-1] + uVar31 * 3);
              puVar12 = puVar13;
            } while (uVar15 < (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]);
          } while (puVar19 < puVar13);
        }
        if (puVar19 + -2 != param_1) {
          *(undefined8 *)param_1 = *(undefined8 *)(puVar19 + -2);
        }
        param_5 = 0;
        puVar19[-2] = uVar9;
        puVar19[-1] = uVar20;
        goto LAB_109fff298;
      }
    }
    else {
      uVar20 = param_1[1];
      lVar22 = *(long *)(param_3 + 0x10);
      plVar30 = *(long **)(param_3 + 0x48);
      lVar32 = (long)(int)uVar20;
    }
    lVar16 = 0;
    do {
      puVar19 = (uint *)((long)param_1 + lVar16 + 8);
      if (puVar19 == param_2) goto LAB_109fffeb4;
      lVar26 = (long)(int)*puVar19;
      lVar23 = *plVar30;
      pbVar1 = (byte *)(lVar22 + lVar23 * *(int *)((long)param_1 + lVar16 + 0xc) + lVar26 * 3);
      pbVar24 = (byte *)(lVar22 + (long)(int)uVar9 * 3 + lVar23 * lVar32);
      uVar15 = (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2];
      lVar16 = lVar16 + 8;
    } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] < uVar15);
    puVar12 = (uint *)((long)param_1 + lVar16);
    puVar19 = param_2;
    if (lVar16 == 8) {
      do {
        puVar13 = puVar19;
        if (puVar19 <= puVar12) break;
        puVar13 = puVar19 + -2;
        pbVar1 = (byte *)(lVar22 + lVar23 * (int)puVar19[-1] + (long)(int)*puVar13 * 3);
        puVar19 = puVar13;
      } while (uVar15 <= (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]);
    }
    else {
      do {
        if (puVar19 == param_1) goto LAB_109fffeb4;
        puVar13 = puVar19 + -2;
        pbVar1 = (byte *)(lVar22 + lVar23 * (int)puVar19[-1] + (long)(int)*puVar13 * 3);
        puVar19 = puVar13;
      } while (uVar15 <= (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]);
    }
    puVar19 = puVar12;
    if (puVar12 < puVar13) {
      uVar18 = (ulong)*puVar13;
      puVar27 = puVar13;
      do {
        uVar15 = puVar19[1];
        uVar10 = puVar27[1];
        *puVar19 = (uint)uVar18;
        puVar19[1] = uVar10;
        *puVar27 = (uint)lVar26;
        puVar27[1] = uVar15;
        puVar28 = puVar19;
        do {
          puVar19 = puVar28 + 2;
          if (puVar19 == param_2) goto LAB_109fffeb4;
          lVar26 = (long)(int)*puVar19;
          pbVar1 = (byte *)(lVar22 + lVar23 * (int)puVar28[3] + lVar26 * 3);
          uVar15 = (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2];
          puVar28 = puVar19;
        } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] < uVar15);
        do {
          if (puVar27 == param_1) goto LAB_109fffeb4;
          puVar28 = puVar27 + -2;
          uVar18 = (ulong)(int)*puVar28;
          pbVar1 = (byte *)(lVar22 + lVar23 * (int)puVar27[-1] + uVar18 * 3);
          puVar27 = puVar28;
        } while (uVar15 <= (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]);
      } while (puVar19 < puVar28);
    }
    puVar27 = puVar19 + -2;
    if (puVar27 != param_1) {
      *(undefined8 *)param_1 = *(undefined8 *)puVar27;
    }
    puVar19[-2] = uVar9;
    puVar19[-1] = uVar20;
    if (puVar12 < puVar13) goto LAB_109fff600;
    puVar12 = param_1;
    FUN_10a000310(param_1,puVar27,param_3);
    puVar13 = puVar19;
    FUN_10a000310(puVar19,param_2,param_3);
    if ((int)puVar13 == 0) goto code_r0x000109fff5fc;
    param_2 = puVar27;
    if (((ulong)puVar12 & 1) != 0) {
      return;
    }
  } while( true );
LAB_109fff920:
  uVar9 = puVar19[2];
  uVar20 = puVar19[3];
  lVar26 = (long)(int)*puVar19;
  pbVar1 = (byte *)(lVar32 + lVar16 * (int)uVar20 + (long)(int)uVar9 * 3);
  pbVar24 = (byte *)(lVar32 + lVar16 * (int)puVar19[1] + lVar26 * 3);
  lVar23 = lVar22;
  if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
      (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
    do {
      lVar14 = lVar23;
      *(int *)((long)param_1 + lVar14 + 8) = (int)lVar26;
      *(undefined4 *)((long)param_1 + lVar14 + 0xc) = *(undefined4 *)((long)param_1 + lVar14 + 4);
      puVar19 = param_1;
      if (lVar14 == 0) goto LAB_109fff9dc;
      lVar26 = (long)*(int *)((long)param_1 + lVar14 + -8);
      pbVar24 = (byte *)(lVar32 + lVar16 * *(int *)((long)param_1 + lVar14 + -4) + lVar26 * 3);
      lVar23 = lVar14 + -8;
    } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
             (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]);
    puVar19 = (uint *)((long)param_1 + lVar14);
LAB_109fff9dc:
    *puVar19 = uVar9;
    puVar19[1] = uVar20;
  }
  puVar12 = puVar25 + 2;
  lVar22 = lVar22 + 8;
  puVar19 = puVar25;
  puVar25 = puVar12;
  if (puVar12 == param_2) {
    return;
  }
  goto LAB_109fff920;
LAB_109fffa0c:
  do {
    if ((long)uVar31 <= (long)uVar21) {
      uVar17 = uVar31 << 1 | 1;
      puVar19 = param_1 + uVar17 * 2;
      uVar29 = uVar31 * 2 + 2;
      if ((long)uVar29 < (long)uVar18) {
        lVar32 = *plVar30;
        pbVar1 = (byte *)(lVar22 + lVar32 * (int)puVar19[1] + (long)(int)*puVar19 * 3);
        uVar9 = puVar19[2];
        pbVar24 = (byte *)(lVar22 + lVar32 * (int)puVar19[3] + (long)(int)uVar9 * 3);
        puVar25 = puVar19 + 2;
        if ((uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2] <=
            (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
          puVar25 = puVar19;
          uVar29 = uVar17;
          uVar9 = *puVar19;
        }
      }
      else {
        lVar32 = *plVar30;
        puVar25 = puVar19;
        uVar29 = uVar17;
        uVar9 = *puVar19;
      }
      uVar17 = (ulong)uVar9;
      puVar19 = param_1 + uVar31 * 2;
      lVar16 = (long)(int)puVar25[1];
      pbVar1 = (byte *)(lVar22 + lVar32 * lVar16 +
                       (-(ulong)(uVar9 >> 0x1f) & 0xfffffffe00000000 | uVar17 << 1) +
                       (long)(int)uVar9);
      uVar9 = *puVar19;
      uVar20 = puVar19[1];
      pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar20 + (long)(int)uVar9 * 3);
      if ((uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2] <=
          (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
        do {
          puVar12 = puVar25;
          *puVar19 = (uint)uVar17;
          puVar19[1] = (uint)lVar16;
          if ((long)uVar21 < (long)uVar29) break;
          uVar17 = uVar29 << 1 | 1;
          puVar19 = param_1 + uVar17 * 2;
          uVar29 = uVar29 * 2 + 2;
          if ((long)uVar29 < (long)uVar18) {
            pbVar1 = (byte *)(lVar22 + lVar32 * (int)puVar19[1] + (long)(int)*puVar19 * 3);
            uVar15 = puVar19[2];
            pbVar2 = (byte *)(lVar22 + lVar32 * (int)puVar19[3] + (long)(int)uVar15 * 3);
            puVar25 = puVar19 + 2;
            if ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <=
                (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
              puVar25 = puVar19;
              uVar29 = uVar17;
              uVar15 = *puVar19;
            }
          }
          else {
            puVar25 = puVar19;
            uVar29 = uVar17;
            uVar15 = *puVar19;
          }
          uVar17 = (ulong)uVar15;
          lVar16 = (long)(int)puVar25[1];
          pbVar1 = (byte *)(lVar22 + lVar32 * lVar16 +
                           (-(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | uVar17 << 1) +
                           (long)(int)uVar15);
          puVar19 = puVar12;
        } while ((uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2] <=
                 (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]);
        *puVar12 = uVar9;
        puVar12[1] = uVar20;
      }
    }
    bVar4 = uVar31 != 0;
    uVar31 = uVar31 - 1;
  } while (bVar4);
  do {
    uVar31 = 0;
    uVar9 = *param_1;
    uVar20 = param_1[1];
    lVar22 = *(long *)(param_3 + 0x10);
    plVar30 = *(long **)(param_3 + 0x48);
    puVar19 = param_1;
    do {
      puVar25 = puVar19 + uVar31 * 2 + 2;
      uVar29 = uVar31 << 1 | 1;
      uVar21 = uVar31 * 2 + 2;
      if ((long)uVar21 < (long)uVar18) {
        uVar15 = puVar19[uVar31 * 2 + 4];
        lVar32 = uVar31 * 2;
        lVar16 = *plVar30;
        pbVar1 = (byte *)(lVar22 + lVar16 * (int)puVar19[uVar31 * 2 + 3] +
                         (long)(int)puVar19[lVar32 + 2] * 3);
        pbVar24 = (byte *)(lVar22 + lVar16 * (int)puVar19[uVar31 * 2 + 5] + (long)(int)uVar15 * 3);
        puVar12 = puVar19 + uVar31 * 2 + 4;
        uVar31 = uVar21;
        if ((uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2] <=
            (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
          puVar12 = puVar25;
          uVar31 = uVar29;
          uVar15 = puVar19[lVar32 + 2];
        }
      }
      else {
        puVar12 = puVar25;
        uVar31 = uVar29;
        uVar15 = *puVar25;
      }
      uVar10 = puVar12[1];
      *puVar19 = uVar15;
      puVar19[1] = uVar10;
      puVar19 = puVar12;
    } while ((long)uVar31 <= (long)(uVar18 - 2 >> 1));
    if (puVar12 == param_2 + -2) {
      *puVar12 = uVar9;
      puVar12[1] = uVar20;
    }
    else {
      *(undefined8 *)puVar12 = *(undefined8 *)(param_2 + -2);
      param_2[-2] = uVar9;
      param_2[-1] = uVar20;
      lVar32 = (long)puVar12 + (8 - (long)param_1) >> 3;
      if (1 < lVar32) {
        uVar31 = lVar32 - 2U >> 1;
        puVar19 = param_1 + uVar31 * 2;
        lVar32 = (long)(int)*puVar19;
        lVar16 = (long)(int)puVar19[1];
        lVar26 = *plVar30;
        pbVar1 = (byte *)(lVar22 + lVar26 * lVar16 + lVar32 * 3);
        uVar9 = *puVar12;
        uVar20 = puVar12[1];
        pbVar24 = (byte *)(lVar22 + lVar26 * (int)uVar20 + (long)(int)uVar9 * 3);
        if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
            (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
          do {
            puVar25 = puVar19;
            *puVar12 = (uint)lVar32;
            puVar12[1] = (uint)lVar16;
            if (uVar31 == 0) break;
            uVar31 = uVar31 - 1 >> 1;
            puVar19 = param_1 + uVar31 * 2;
            lVar32 = (long)(int)*puVar19;
            lVar16 = (long)(int)puVar19[1];
            pbVar1 = (byte *)(lVar22 + lVar26 * lVar16 + lVar32 * 3);
            puVar12 = puVar25;
          } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
                   (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]);
          *puVar25 = uVar9;
          puVar25[1] = uVar20;
        }
      }
    }
    bVar4 = (long)uVar18 < 3;
    uVar18 = uVar18 - 1;
    param_2 = param_2 + -2;
    if (bVar4) {
      return;
    }
  } while( true );
code_r0x000109fff5fc:
  if (((ulong)puVar12 & 1) == 0) {
LAB_109fff600:
    FUN_109fff250(param_1,puVar27,param_3,param_4,(uint)param_5 & 1);
    param_5 = 0;
  }
  goto LAB_109fff298;
}



/* Entry: 109fff250; end: 109fffeb7;  */

void FUN_109fff250(uint *param_1,uint *param_2,long param_3,long param_4,uint param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  byte *pbVar24;
  uint *puVar25;
  long lVar26;
  uint *puVar27;
  uint *puVar28;
  ulong uVar29;
  long *plVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  
  do {
    puVar25 = param_2 + -2;
    puVar19 = param_1;
LAB_109fff298:
    param_1 = puVar19;
    uVar18 = (long)param_2 - (long)param_1 >> 3;
    if (uVar18 - 2 == 0 || (long)uVar18 < 2) {
      if (uVar18 < 2) {
        return;
      }
      if (uVar18 == 2) {
        uVar20 = param_2[-1];
        pbVar1 = (byte *)(*(long *)(param_3 + 0x10) +
                          **(long **)(param_3 + 0x48) * (long)(int)uVar20 +
                         (long)(int)param_2[-2] * 3);
        uVar9 = *param_1;
        uVar15 = param_1[1];
        pbVar24 = (byte *)(*(long *)(param_3 + 0x10) +
                           **(long **)(param_3 + 0x48) * (long)(int)uVar15 + (long)(int)uVar9 * 3);
        if ((uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2] <=
            (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
          return;
        }
        *param_1 = param_2[-2];
        param_1[1] = uVar20;
        param_2[-2] = uVar9;
        param_2[-1] = uVar15;
        return;
      }
    }
    else {
      if (uVar18 == 3) {
        lVar22 = *(long *)(param_3 + 0x10);
        lVar32 = **(long **)(param_3 + 0x48);
        puVar19 = param_1 + 2;
        uVar15 = *puVar19;
        uVar6 = param_1[3];
        pbVar1 = (byte *)(lVar22 + lVar32 * (int)uVar6 + (long)(int)uVar15 * 3);
        uVar10 = *param_1;
        uVar7 = param_1[1];
        pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar7 + (long)(int)uVar10 * 3);
        uVar9 = (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2];
        uVar5 = *puVar25;
        uVar8 = param_2[-1];
        pbVar1 = (byte *)(lVar22 + lVar32 * (int)uVar8 + (long)(int)uVar5 * 3);
        uVar20 = (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2];
        if (uVar9 < (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
          if (uVar20 < uVar9) {
            *param_1 = uVar5;
            param_1[1] = uVar8;
          }
          else {
            *param_1 = uVar15;
            param_1[1] = uVar6;
            *puVar19 = uVar10;
            param_1[3] = uVar7;
            uVar9 = param_2[-1];
            pbVar1 = (byte *)(lVar22 + lVar32 * (int)uVar9 + (long)(int)*puVar25 * 3);
            if ((uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2] <=
                (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
              return;
            }
            *puVar19 = *puVar25;
            param_1[3] = uVar9;
          }
          *puVar25 = uVar10;
          param_2[-1] = uVar7;
        }
        else if (uVar20 < uVar9) {
          *puVar19 = uVar5;
          param_1[3] = uVar8;
          *puVar25 = uVar15;
          param_2[-1] = uVar6;
          pbVar1 = (byte *)(lVar22 + lVar32 * (int)param_1[3] + (long)(int)*puVar19 * 3);
          uVar9 = *param_1;
          uVar20 = param_1[1];
          pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar20 + (long)(int)uVar9 * 3);
          if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
              (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
            *param_1 = *puVar19;
            param_1[1] = param_1[3];
            *puVar19 = uVar9;
            param_1[3] = uVar20;
            return;
          }
        }
        return;
      }
      if (uVar18 == 4) {
        puVar19 = param_1 + 2;
        puVar12 = param_1 + 4;
        FUN_109fffeb8();
        uVar20 = param_2[-1];
        lVar22 = *(long *)(param_3 + 0x10);
        lVar32 = **(long **)(param_3 + 0x48);
        pbVar1 = (byte *)(lVar22 + lVar32 * (int)uVar20 + (long)(int)*puVar25 * 3);
        uVar9 = *puVar12;
        uVar15 = param_1[5];
        pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar15 + (long)(int)uVar9 * 3);
        if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
            (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
          *puVar12 = *puVar25;
          param_1[5] = uVar20;
          *puVar25 = uVar9;
          param_2[-1] = uVar15;
          pbVar1 = (byte *)(lVar22 + lVar32 * (int)param_1[5] + (long)(int)*puVar12 * 3);
          uVar9 = *puVar19;
          uVar20 = param_1[3];
          pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar20 + (long)(int)uVar9 * 3);
          if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
              (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
            *puVar19 = *puVar12;
            param_1[3] = param_1[5];
            *puVar12 = uVar9;
            param_1[5] = uVar20;
            pbVar1 = (byte *)(lVar22 + lVar32 * (int)param_1[3] + (long)(int)*puVar19 * 3);
            uVar9 = *param_1;
            uVar20 = param_1[1];
            pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar20 + (long)(int)uVar9 * 3);
            if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
                (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
              *param_1 = *puVar19;
              param_1[1] = param_1[3];
              *puVar19 = uVar9;
              param_1[3] = uVar20;
            }
          }
        }
        return;
      }
      if (uVar18 == 5) {
        puVar19 = param_1 + 2;
        puVar12 = param_1 + 4;
        puVar13 = param_1 + 6;
        FUN_109fffffc();
        uVar20 = param_2[-1];
        lVar22 = *(long *)(param_3 + 0x10);
        lVar32 = **(long **)(param_3 + 0x48);
        pbVar1 = (byte *)(lVar22 + lVar32 * (int)uVar20 + (long)(int)*puVar25 * 3);
        uVar9 = *puVar13;
        uVar15 = param_1[7];
        pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar15 + (long)(int)uVar9 * 3);
        if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
            (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
          *puVar13 = *puVar25;
          param_1[7] = uVar20;
          *puVar25 = uVar9;
          param_2[-1] = uVar15;
          pbVar1 = (byte *)(lVar22 + lVar32 * (int)param_1[7] + (long)(int)*puVar13 * 3);
          uVar9 = *puVar12;
          uVar20 = param_1[5];
          pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar20 + (long)(int)uVar9 * 3);
          if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
              (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
            *puVar12 = *puVar13;
            param_1[5] = param_1[7];
            *puVar13 = uVar9;
            param_1[7] = uVar20;
            pbVar1 = (byte *)(lVar22 + lVar32 * (int)param_1[5] + (long)(int)*puVar12 * 3);
            uVar9 = *puVar19;
            uVar20 = param_1[3];
            pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar20 + (long)(int)uVar9 * 3);
            if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
                (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
              *puVar19 = *puVar12;
              param_1[3] = param_1[5];
              *puVar12 = uVar9;
              param_1[5] = uVar20;
              pbVar1 = (byte *)(lVar22 + lVar32 * (int)param_1[3] + (long)(int)*puVar19 * 3);
              uVar9 = *param_1;
              uVar20 = param_1[1];
              pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar20 + (long)(int)uVar9 * 3);
              if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
                  (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
                *param_1 = *puVar19;
                param_1[1] = param_1[3];
                *puVar19 = uVar9;
                param_1[3] = uVar20;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar18 < 0x18) {
      if ((param_5 & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        puVar19 = param_1 + 2;
        if (puVar19 == param_2) {
          return;
        }
        lVar16 = *(long *)(param_3 + 0x10);
        lVar26 = **(long **)(param_3 + 0x48);
        lVar23 = -8;
        lVar22 = 0;
        lVar32 = 8;
        do {
          piVar3 = (int *)((long)param_1 + lVar22);
          uVar9 = piVar3[3];
          uVar20 = *puVar19;
          pbVar1 = (byte *)(lVar16 + lVar26 * (int)uVar9 + (long)(int)uVar20 * 3);
          lVar22 = (long)*piVar3;
          lVar14 = (long)piVar3[1];
          pbVar24 = (byte *)(lVar16 + lVar26 * lVar14 + lVar22 * 3);
          puVar25 = puVar19;
          lVar33 = lVar23;
          if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
              (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
            do {
              puVar12 = puVar25;
              *puVar12 = (uint)lVar22;
              puVar12[1] = (uint)lVar14;
              if (lVar33 == 0) {
LAB_109fffeb4:
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x109fffeb8);
                (*pcVar11)();
              }
              lVar22 = (long)(int)puVar12[-4];
              lVar14 = (long)(int)puVar12[-3];
              pbVar24 = (byte *)(lVar16 + lVar26 * lVar14 + lVar22 * 3);
              puVar25 = puVar12 + -2;
              lVar33 = lVar33 + 8;
            } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
                     (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]);
            puVar12[-2] = uVar20;
            puVar12[-1] = uVar9;
          }
          puVar19 = puVar19 + 2;
          lVar23 = lVar23 + -8;
          lVar22 = lVar32;
          lVar32 = lVar32 + 8;
          if (puVar19 == param_2) {
            return;
          }
        } while( true );
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 2 == param_2) {
        return;
      }
      lVar22 = 0;
      lVar32 = *(long *)(param_3 + 0x10);
      lVar16 = **(long **)(param_3 + 0x48);
      puVar19 = param_1;
      puVar25 = param_1 + 2;
      break;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar21 = uVar18 - 2 >> 1;
      lVar22 = *(long *)(param_3 + 0x10);
      plVar30 = *(long **)(param_3 + 0x48);
      uVar31 = uVar21;
      goto LAB_109fffa0c;
    }
    puVar19 = param_1 + (uVar18 & 0xfffffffffffffffe);
    if (uVar18 < 0x81) {
      FUN_109fffeb8(puVar19,param_1,puVar25,*(undefined8 *)(param_3 + 0x10),
                    **(undefined8 **)(param_3 + 0x48));
    }
    else {
      FUN_109fffeb8(param_1,puVar19,puVar25,*(undefined8 *)(param_3 + 0x10),
                    **(undefined8 **)(param_3 + 0x48));
      FUN_109fffeb8(param_1 + 2,puVar19 + -2,param_2 + -4,*(undefined8 *)(param_3 + 0x10),
                    **(undefined8 **)(param_3 + 0x48));
      FUN_109fffeb8(param_1 + 4,puVar19 + 2,param_2 + -6,*(undefined8 *)(param_3 + 0x10),
                    **(undefined8 **)(param_3 + 0x48));
      FUN_109fffeb8(puVar19 + -2,puVar19,puVar19 + 2,*(undefined8 *)(param_3 + 0x10),
                    **(undefined8 **)(param_3 + 0x48));
      uVar34 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)puVar19;
      *(undefined8 *)puVar19 = uVar34;
    }
    param_4 = param_4 + -1;
    uVar9 = *param_1;
    if ((param_5 & 1) == 0) {
      lVar22 = *(long *)(param_3 + 0x10);
      plVar30 = *(long **)(param_3 + 0x48);
      lVar16 = *plVar30;
      pbVar1 = (byte *)(lVar22 + lVar16 * (int)param_1[-1] + (long)(int)param_1[-2] * 3);
      uVar20 = param_1[1];
      lVar32 = (long)(int)uVar20;
      pbVar24 = (byte *)(lVar22 + lVar16 * lVar32 + (long)(int)uVar9 * 3);
      uVar15 = (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2];
      if (uVar15 <= (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
        pbVar1 = (byte *)(lVar22 + lVar16 * (int)param_2[-1] + (long)(int)param_2[-2] * 3);
        puVar12 = param_1;
        if (uVar15 < (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
          do {
            puVar19 = puVar12 + 2;
            if (puVar19 == param_2) goto LAB_109fffeb4;
            pbVar1 = (byte *)(lVar22 + lVar16 * (int)puVar12[3] + (long)(int)*puVar19 * 3);
            puVar12 = puVar19;
          } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <= uVar15);
        }
        else {
          do {
            puVar19 = puVar12 + 2;
            if (param_2 <= puVar19) break;
            pbVar1 = (byte *)(lVar22 + lVar16 * (int)puVar12[3] + (long)(int)*puVar19 * 3);
            puVar12 = puVar19;
          } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <= uVar15);
        }
        puVar12 = param_2;
        puVar13 = param_2;
        if (puVar19 < param_2) {
          do {
            if (puVar13 == param_1) goto LAB_109fffeb4;
            puVar12 = puVar13 + -2;
            pbVar1 = (byte *)(lVar22 + lVar16 * (int)puVar13[-1] + (long)(int)*puVar12 * 3);
            puVar13 = puVar12;
          } while (uVar15 < (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]);
        }
        if (puVar19 < puVar12) {
          uVar18 = (ulong)*puVar19;
          uVar31 = (ulong)*puVar12;
          do {
            uVar15 = puVar19[1];
            uVar10 = puVar12[1];
            *puVar19 = (uint)uVar31;
            puVar19[1] = uVar10;
            *puVar12 = (uint)uVar18;
            puVar12[1] = uVar15;
            puVar13 = puVar19;
            do {
              puVar19 = puVar13 + 2;
              if (puVar19 == param_2) goto LAB_109fffeb4;
              uVar18 = (ulong)(int)*puVar19;
              pbVar1 = (byte *)(lVar22 + lVar16 * (int)puVar13[3] + uVar18 * 3);
              uVar15 = (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2];
              puVar13 = puVar19;
            } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <= uVar15);
            do {
              if (puVar12 == param_1) goto LAB_109fffeb4;
              puVar13 = puVar12 + -2;
              uVar31 = (ulong)(int)*puVar13;
              pbVar1 = (byte *)(lVar22 + lVar16 * (int)puVar12[-1] + uVar31 * 3);
              puVar12 = puVar13;
            } while (uVar15 < (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]);
          } while (puVar19 < puVar13);
        }
        if (puVar19 + -2 != param_1) {
          *(undefined8 *)param_1 = *(undefined8 *)(puVar19 + -2);
        }
        param_5 = 0;
        puVar19[-2] = uVar9;
        puVar19[-1] = uVar20;
        goto LAB_109fff298;
      }
    }
    else {
      uVar20 = param_1[1];
      lVar22 = *(long *)(param_3 + 0x10);
      plVar30 = *(long **)(param_3 + 0x48);
      lVar32 = (long)(int)uVar20;
    }
    lVar16 = 0;
    do {
      puVar19 = (uint *)((long)param_1 + lVar16 + 8);
      if (puVar19 == param_2) goto LAB_109fffeb4;
      lVar26 = (long)(int)*puVar19;
      lVar23 = *plVar30;
      pbVar1 = (byte *)(lVar22 + lVar23 * *(int *)((long)param_1 + lVar16 + 0xc) + lVar26 * 3);
      pbVar24 = (byte *)(lVar22 + (long)(int)uVar9 * 3 + lVar23 * lVar32);
      uVar15 = (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2];
      lVar16 = lVar16 + 8;
    } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] < uVar15);
    puVar12 = (uint *)((long)param_1 + lVar16);
    puVar19 = param_2;
    if (lVar16 == 8) {
      do {
        puVar13 = puVar19;
        if (puVar19 <= puVar12) break;
        puVar13 = puVar19 + -2;
        pbVar1 = (byte *)(lVar22 + lVar23 * (int)puVar19[-1] + (long)(int)*puVar13 * 3);
        puVar19 = puVar13;
      } while (uVar15 <= (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]);
    }
    else {
      do {
        if (puVar19 == param_1) goto LAB_109fffeb4;
        puVar13 = puVar19 + -2;
        pbVar1 = (byte *)(lVar22 + lVar23 * (int)puVar19[-1] + (long)(int)*puVar13 * 3);
        puVar19 = puVar13;
      } while (uVar15 <= (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]);
    }
    puVar19 = puVar12;
    if (puVar12 < puVar13) {
      uVar18 = (ulong)*puVar13;
      puVar27 = puVar13;
      do {
        uVar15 = puVar19[1];
        uVar10 = puVar27[1];
        *puVar19 = (uint)uVar18;
        puVar19[1] = uVar10;
        *puVar27 = (uint)lVar26;
        puVar27[1] = uVar15;
        puVar28 = puVar19;
        do {
          puVar19 = puVar28 + 2;
          if (puVar19 == param_2) goto LAB_109fffeb4;
          lVar26 = (long)(int)*puVar19;
          pbVar1 = (byte *)(lVar22 + lVar23 * (int)puVar28[3] + lVar26 * 3);
          uVar15 = (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2];
          puVar28 = puVar19;
        } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] < uVar15);
        do {
          if (puVar27 == param_1) goto LAB_109fffeb4;
          puVar28 = puVar27 + -2;
          uVar18 = (ulong)(int)*puVar28;
          pbVar1 = (byte *)(lVar22 + lVar23 * (int)puVar27[-1] + uVar18 * 3);
          puVar27 = puVar28;
        } while (uVar15 <= (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]);
      } while (puVar19 < puVar28);
    }
    puVar27 = puVar19 + -2;
    if (puVar27 != param_1) {
      *(undefined8 *)param_1 = *(undefined8 *)puVar27;
    }
    puVar19[-2] = uVar9;
    puVar19[-1] = uVar20;
    if (puVar12 < puVar13) goto LAB_109fff600;
    puVar12 = param_1;
    FUN_10a000310(param_1,puVar27,param_3);
    puVar13 = puVar19;
    FUN_10a000310(puVar19,param_2,param_3);
    if ((int)puVar13 == 0) goto code_r0x000109fff5fc;
    param_2 = puVar27;
    if (((ulong)puVar12 & 1) != 0) {
      return;
    }
  } while( true );
LAB_109fff920:
  uVar9 = puVar19[2];
  uVar20 = puVar19[3];
  lVar26 = (long)(int)*puVar19;
  pbVar1 = (byte *)(lVar32 + lVar16 * (int)uVar20 + (long)(int)uVar9 * 3);
  pbVar24 = (byte *)(lVar32 + lVar16 * (int)puVar19[1] + lVar26 * 3);
  lVar23 = lVar22;
  if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
      (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
    do {
      lVar14 = lVar23;
      *(int *)((long)param_1 + lVar14 + 8) = (int)lVar26;
      *(undefined4 *)((long)param_1 + lVar14 + 0xc) = *(undefined4 *)((long)param_1 + lVar14 + 4);
      puVar19 = param_1;
      if (lVar14 == 0) goto LAB_109fff9dc;
      lVar26 = (long)*(int *)((long)param_1 + lVar14 + -8);
      pbVar24 = (byte *)(lVar32 + lVar16 * *(int *)((long)param_1 + lVar14 + -4) + lVar26 * 3);
      lVar23 = lVar14 + -8;
    } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
             (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]);
    puVar19 = (uint *)((long)param_1 + lVar14);
LAB_109fff9dc:
    *puVar19 = uVar9;
    puVar19[1] = uVar20;
  }
  puVar12 = puVar25 + 2;
  lVar22 = lVar22 + 8;
  puVar19 = puVar25;
  puVar25 = puVar12;
  if (puVar12 == param_2) {
    return;
  }
  goto LAB_109fff920;
LAB_109fffa0c:
  do {
    if ((long)uVar31 <= (long)uVar21) {
      uVar17 = uVar31 << 1 | 1;
      puVar19 = param_1 + uVar17 * 2;
      uVar29 = uVar31 * 2 + 2;
      if ((long)uVar29 < (long)uVar18) {
        lVar32 = *plVar30;
        pbVar1 = (byte *)(lVar22 + lVar32 * (int)puVar19[1] + (long)(int)*puVar19 * 3);
        uVar9 = puVar19[2];
        pbVar24 = (byte *)(lVar22 + lVar32 * (int)puVar19[3] + (long)(int)uVar9 * 3);
        puVar25 = puVar19 + 2;
        if ((uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2] <=
            (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
          puVar25 = puVar19;
          uVar29 = uVar17;
          uVar9 = *puVar19;
        }
      }
      else {
        lVar32 = *plVar30;
        puVar25 = puVar19;
        uVar29 = uVar17;
        uVar9 = *puVar19;
      }
      uVar17 = (ulong)uVar9;
      puVar19 = param_1 + uVar31 * 2;
      lVar16 = (long)(int)puVar25[1];
      pbVar1 = (byte *)(lVar22 + lVar32 * lVar16 +
                       (-(ulong)(uVar9 >> 0x1f) & 0xfffffffe00000000 | uVar17 << 1) +
                       (long)(int)uVar9);
      uVar9 = *puVar19;
      uVar20 = puVar19[1];
      pbVar24 = (byte *)(lVar22 + lVar32 * (int)uVar20 + (long)(int)uVar9 * 3);
      if ((uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2] <=
          (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
        do {
          puVar12 = puVar25;
          *puVar19 = (uint)uVar17;
          puVar19[1] = (uint)lVar16;
          if ((long)uVar21 < (long)uVar29) break;
          uVar17 = uVar29 << 1 | 1;
          puVar19 = param_1 + uVar17 * 2;
          uVar29 = uVar29 * 2 + 2;
          if ((long)uVar29 < (long)uVar18) {
            pbVar1 = (byte *)(lVar22 + lVar32 * (int)puVar19[1] + (long)(int)*puVar19 * 3);
            uVar15 = puVar19[2];
            pbVar2 = (byte *)(lVar22 + lVar32 * (int)puVar19[3] + (long)(int)uVar15 * 3);
            puVar25 = puVar19 + 2;
            if ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <=
                (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
              puVar25 = puVar19;
              uVar29 = uVar17;
              uVar15 = *puVar19;
            }
          }
          else {
            puVar25 = puVar19;
            uVar29 = uVar17;
            uVar15 = *puVar19;
          }
          uVar17 = (ulong)uVar15;
          lVar16 = (long)(int)puVar25[1];
          pbVar1 = (byte *)(lVar22 + lVar32 * lVar16 +
                           (-(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | uVar17 << 1) +
                           (long)(int)uVar15);
          puVar19 = puVar12;
        } while ((uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2] <=
                 (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]);
        *puVar12 = uVar9;
        puVar12[1] = uVar20;
      }
    }
    bVar4 = uVar31 != 0;
    uVar31 = uVar31 - 1;
  } while (bVar4);
  do {
    uVar31 = 0;
    uVar9 = *param_1;
    uVar20 = param_1[1];
    lVar22 = *(long *)(param_3 + 0x10);
    plVar30 = *(long **)(param_3 + 0x48);
    puVar19 = param_1;
    do {
      puVar25 = puVar19 + uVar31 * 2 + 2;
      uVar29 = uVar31 << 1 | 1;
      uVar21 = uVar31 * 2 + 2;
      if ((long)uVar21 < (long)uVar18) {
        uVar15 = puVar19[uVar31 * 2 + 4];
        lVar32 = uVar31 * 2;
        lVar16 = *plVar30;
        pbVar1 = (byte *)(lVar22 + lVar16 * (int)puVar19[uVar31 * 2 + 3] +
                         (long)(int)puVar19[lVar32 + 2] * 3);
        pbVar24 = (byte *)(lVar22 + lVar16 * (int)puVar19[uVar31 * 2 + 5] + (long)(int)uVar15 * 3);
        puVar12 = puVar19 + uVar31 * 2 + 4;
        uVar31 = uVar21;
        if ((uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2] <=
            (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
          puVar12 = puVar25;
          uVar31 = uVar29;
          uVar15 = puVar19[lVar32 + 2];
        }
      }
      else {
        puVar12 = puVar25;
        uVar31 = uVar29;
        uVar15 = *puVar25;
      }
      uVar10 = puVar12[1];
      *puVar19 = uVar15;
      puVar19[1] = uVar10;
      puVar19 = puVar12;
    } while ((long)uVar31 <= (long)(uVar18 - 2 >> 1));
    if (puVar12 == param_2 + -2) {
      *puVar12 = uVar9;
      puVar12[1] = uVar20;
    }
    else {
      *(undefined8 *)puVar12 = *(undefined8 *)(param_2 + -2);
      param_2[-2] = uVar9;
      param_2[-1] = uVar20;
      lVar32 = (long)puVar12 + (8 - (long)param_1) >> 3;
      if (1 < lVar32) {
        uVar31 = lVar32 - 2U >> 1;
        puVar19 = param_1 + uVar31 * 2;
        lVar32 = (long)(int)*puVar19;
        lVar16 = (long)(int)puVar19[1];
        lVar26 = *plVar30;
        pbVar1 = (byte *)(lVar22 + lVar26 * lVar16 + lVar32 * 3);
        uVar9 = *puVar12;
        uVar20 = puVar12[1];
        pbVar24 = (byte *)(lVar22 + lVar26 * (int)uVar20 + (long)(int)uVar9 * 3);
        if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
            (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]) {
          do {
            puVar25 = puVar19;
            *puVar12 = (uint)lVar32;
            puVar12[1] = (uint)lVar16;
            if (uVar31 == 0) break;
            uVar31 = uVar31 - 1 >> 1;
            puVar19 = param_1 + uVar31 * 2;
            lVar32 = (long)(int)*puVar19;
            lVar16 = (long)(int)puVar19[1];
            pbVar1 = (byte *)(lVar22 + lVar26 * lVar16 + lVar32 * 3);
            puVar12 = puVar25;
          } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
                   (uint)pbVar24[1] + (uint)*pbVar24 + (uint)pbVar24[2]);
          *puVar25 = uVar9;
          puVar25[1] = uVar20;
        }
      }
    }
    bVar4 = (long)uVar18 < 3;
    uVar18 = uVar18 - 1;
    param_2 = param_2 + -2;
    if (bVar4) {
      return;
    }
  } while( true );
code_r0x000109fff5fc:
  if (((ulong)puVar12 & 1) == 0) {
LAB_109fff600:
    FUN_109fff250(param_1,puVar27,param_3,param_4,param_5 & 1);
    param_5 = 0;
  }
  goto LAB_109fff298;
}



/* Entry: 109fffeb8; end: 109fffffb;  */

void FUN_109fffeb8(int *param_1,int *param_2,int *param_3,long param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar5 = *param_2;
  iVar8 = param_2[1];
  pbVar3 = (byte *)(param_4 + param_5 * iVar8 + (long)iVar5 * 3);
  iVar6 = *param_1;
  iVar9 = param_1[1];
  pbVar4 = (byte *)(param_4 + param_5 * iVar9 + (long)iVar6 * 3);
  uVar1 = (uint)pbVar3[1] + (uint)*pbVar3 + (uint)pbVar3[2];
  iVar7 = *param_3;
  iVar10 = param_3[1];
  pbVar3 = (byte *)(param_4 + param_5 * iVar10 + (long)iVar7 * 3);
  uVar2 = (uint)pbVar3[1] + (uint)*pbVar3 + (uint)pbVar3[2];
  if (uVar1 < (uint)pbVar4[1] + (uint)*pbVar4 + (uint)pbVar4[2]) {
    if (uVar2 < uVar1) {
      *param_1 = iVar7;
      param_1[1] = iVar10;
    }
    else {
      *param_1 = iVar5;
      param_1[1] = iVar8;
      *param_2 = iVar6;
      param_2[1] = iVar9;
      iVar5 = param_3[1];
      pbVar3 = (byte *)(param_4 + param_5 * iVar5 + (long)*param_3 * 3);
      if ((uint)pbVar4[1] + (uint)*pbVar4 + (uint)pbVar4[2] <=
          (uint)pbVar3[1] + (uint)*pbVar3 + (uint)pbVar3[2]) {
        return;
      }
      *param_2 = *param_3;
      param_2[1] = iVar5;
    }
    *param_3 = iVar6;
    param_3[1] = iVar9;
  }
  else if (uVar2 < uVar1) {
    *param_2 = iVar7;
    param_2[1] = iVar10;
    *param_3 = iVar5;
    param_3[1] = iVar8;
    iVar6 = param_2[1];
    pbVar3 = (byte *)(param_4 + param_5 * iVar6 + (long)*param_2 * 3);
    iVar5 = *param_1;
    iVar7 = param_1[1];
    pbVar4 = (byte *)(param_4 + param_5 * iVar7 + (long)iVar5 * 3);
    if ((uint)pbVar3[1] + (uint)*pbVar3 + (uint)pbVar3[2] <
        (uint)pbVar4[1] + (uint)*pbVar4 + (uint)pbVar4[2]) {
      *param_1 = *param_2;
      param_1[1] = iVar6;
      *param_2 = iVar5;
      param_2[1] = iVar7;
      return;
    }
  }
  return;
}



/* Entry: 109fffffc; end: 10a00030f;  */

void FUN_109fffffc(int *param_1,int *param_2,int *param_3,int *param_4,long param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  FUN_109fffeb8();
  iVar4 = param_4[1];
  lVar6 = *(long *)(param_5 + 0x10);
  lVar7 = **(long **)(param_5 + 0x48);
  pbVar1 = (byte *)(lVar6 + lVar7 * iVar4 + (long)*param_4 * 3);
  iVar3 = *param_3;
  iVar5 = param_3[1];
  pbVar2 = (byte *)(lVar6 + lVar7 * iVar5 + (long)iVar3 * 3);
  if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
      (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2]) {
    *param_3 = *param_4;
    param_3[1] = iVar4;
    *param_4 = iVar3;
    param_4[1] = iVar5;
    iVar4 = param_3[1];
    pbVar1 = (byte *)(lVar6 + lVar7 * iVar4 + (long)*param_3 * 3);
    iVar3 = *param_2;
    iVar5 = param_2[1];
    pbVar2 = (byte *)(lVar6 + lVar7 * iVar5 + (long)iVar3 * 3);
    if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
        (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2]) {
      *param_2 = *param_3;
      param_2[1] = iVar4;
      *param_3 = iVar3;
      param_3[1] = iVar5;
      iVar4 = param_2[1];
      pbVar1 = (byte *)(lVar6 + lVar7 * iVar4 + (long)*param_2 * 3);
      iVar3 = *param_1;
      iVar5 = param_1[1];
      pbVar2 = (byte *)(lVar6 + lVar7 * iVar5 + (long)iVar3 * 3);
      if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
          (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2]) {
        *param_1 = *param_2;
        param_1[1] = iVar4;
        *param_2 = iVar3;
        param_2[1] = iVar5;
      }
    }
  }
  return;
}



/* Entry: 10a000310; end: 10a00056b;  */

bool FUN_10a000310(int *param_1,int *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  
  uVar6 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 == 2) {
      iVar3 = param_2[-1];
      pbVar1 = (byte *)(*(long *)(param_3 + 0x10) + **(long **)(param_3 + 0x48) * (long)iVar3 +
                       (long)param_2[-2] * 3);
      iVar9 = *param_1;
      iVar4 = param_1[1];
      pbVar2 = (byte *)(*(long *)(param_3 + 0x10) + **(long **)(param_3 + 0x48) * (long)iVar4 +
                       (long)iVar9 * 3);
      if ((uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2] <=
          (uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2]) {
        return true;
      }
      *param_1 = param_2[-2];
      param_1[1] = iVar3;
      param_2[-2] = iVar9;
      param_2[-1] = iVar4;
      return true;
    }
  }
  else {
    if (uVar6 == 3) {
      FUN_109fffeb8(param_1,param_1 + 2,param_2 + -2,*(undefined8 *)(param_3 + 0x10),
                    **(undefined8 **)(param_3 + 0x48));
      return true;
    }
    if (uVar6 == 4) {
      func_0x000109fffffc(param_1,param_1 + 2,param_1 + 4,param_2 + -2,param_3);
      return true;
    }
    if (uVar6 == 5) {
      func_0x00010a00015c(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2,param_3);
      return true;
    }
  }
  FUN_109fffeb8(param_1,param_1 + 2,param_1 + 4,*(undefined8 *)(param_3 + 0x10),
                **(undefined8 **)(param_3 + 0x48));
  if (param_1 + 6 != param_2) {
    lVar8 = 0;
    iVar9 = 0;
    lVar10 = *(long *)(param_3 + 0x10);
    lVar11 = **(long **)(param_3 + 0x48);
    piVar12 = param_1 + 6;
    piVar15 = param_1 + 4;
    do {
      piVar7 = piVar12;
      iVar3 = *piVar7;
      iVar4 = piVar7[1];
      pbVar1 = (byte *)(lVar10 + lVar11 * iVar4 + (long)iVar3 * 3);
      lVar14 = (long)*piVar15;
      pbVar2 = (byte *)(lVar10 + lVar11 * piVar15[1] + lVar14 * 3);
      lVar5 = lVar8;
      if ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
          (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2]) {
        do {
          lVar13 = lVar5;
          *(int *)((long)param_1 + lVar13 + 0x18) = (int)lVar14;
          *(undefined4 *)((long)param_1 + lVar13 + 0x1c) =
               *(undefined4 *)((long)param_1 + lVar13 + 0x14);
          piVar12 = param_1;
          if (lVar13 == -0x10) goto LAB_10a000508;
          lVar14 = (long)*(int *)((long)param_1 + lVar13 + 8);
          pbVar2 = (byte *)(lVar10 + lVar11 * *(int *)((long)param_1 + lVar13 + 0xc) + lVar14 * 3);
          lVar5 = lVar13 + -8;
        } while ((uint)pbVar1[1] + (uint)*pbVar1 + (uint)pbVar1[2] <
                 (uint)pbVar2[1] + (uint)*pbVar2 + (uint)pbVar2[2]);
        piVar12 = (int *)((long)param_1 + lVar13 + 0x10);
LAB_10a000508:
        *piVar12 = iVar3;
        piVar12[1] = iVar4;
        iVar9 = iVar9 + 1;
        if (iVar9 == 8) {
          return piVar7 + 2 == param_2;
        }
      }
      lVar8 = lVar8 + 8;
      piVar12 = piVar7 + 2;
      piVar15 = piVar7;
    } while (piVar7 + 2 != param_2);
  }
  return true;
}



/* Entry: 10a00056c; end: 10a00057f;  */

void FUN_10a00056c(void)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  uint *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  uint *puVar22;
  int iVar23;
  uint *puVar24;
  undefined8 uVar25;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar7 = &UNK_10f630bba;
  FUN_109ffde64();
  puVar21 = *(undefined8 **)(puVar7 + 0x10);
  puVar11 = (ulong *)*puVar21;
  puVar22 = (uint *)*puVar11;
  puVar18 = (uint *)puVar11[1];
  lVar14 = (long)puVar18 - (long)puVar22 >> 3;
  if (1 < lVar14) {
    uVar20 = puVar21[1];
    uStack_78 = 0x7fffffffffffffff;
    uStack_80 = 0;
    puVar24 = puVar22;
    if (puVar22 < puVar18 + -2) {
      do {
        lVar14 = lVar14 + -1;
        uStack_90 = 0;
        puVar8 = &uStack_80;
        lStack_88 = lVar14;
        func_0x0001098ec880(puVar8,uVar20,&uStack_90);
        if (puVar8 != (undefined8 *)0x0) {
          uVar25 = *(undefined8 *)puVar22;
          *(undefined8 *)puVar22 = *(undefined8 *)(puVar24 + (long)puVar8 * 2);
          *(undefined8 *)(puVar24 + (long)puVar8 * 2) = uVar25;
        }
        puVar22 = puVar22 + 2;
        puVar24 = puVar24 + 2;
      } while (puVar22 < puVar18 + -2);
      puVar11 = (ulong *)*puVar21;
    }
    puVar22 = (uint *)*puVar11;
    puVar18 = (uint *)puVar11[1];
  }
  while( true ) {
    if (puVar22 == puVar18) {
      return;
    }
    uVar9 = (ulong)(int)*puVar22;
    uVar3 = puVar22[1];
    iVar4 = *puVar22 + *(int *)puVar21[4] * uVar3;
    lVar14 = *(long *)puVar21[3];
    uVar16 = (((long *)puVar21[3])[1] - lVar14 >> 3) * -0x5555555555555555;
    if (uVar16 < (ulong)(long)iVar4 || uVar16 - (long)iVar4 == 0) break;
    lVar19 = *(long *)(puVar21[2] + 0x10);
    lVar17 = **(long **)(puVar21[2] + 0x48);
    lVar5 = uVar9 * 3;
    uVar10 = uVar3 - 1;
    do {
      uVar16 = (ulong)((int)uVar9 + -1);
      iVar23 = (int)uVar9 + -2;
      do {
        if ((((-1 < (int)uVar16) && (-1 < (int)uVar10)) && ((int)uVar16 < *(int *)puVar21[5])) &&
           (((int)uVar10 < *(int *)puVar21[6] &&
            (*(char *)(*(long *)(puVar21[7] + 0x10) + **(long **)(puVar21[7] + 0x48) * (ulong)uVar10
                      + (uVar16 & 0xffffffff)) == -0x80)))) {
          uVar12 = uVar16 + (long)(int)uVar10 * (long)*(int *)puVar21[4];
          lVar2 = *(long *)puVar21[3];
          uVar15 = (((long *)puVar21[3])[1] - lVar2 >> 3) * -0x5555555555555555;
          if (uVar15 < uVar12 || uVar15 - uVar12 == 0) goto LAB_10a000770;
          puVar13 = (undefined4 *)(lVar2 + uVar12 * 0x18);
          FUN_10a000774(puVar21[8],uVar9,puVar22[1],lVar19 + lVar17 * (int)uVar3 + lVar5,*puVar13,
                        puVar13[1],lVar14 + (long)iVar4 * 0x18);
          uVar9 = (ulong)*puVar22;
        }
        uVar16 = uVar16 + 1;
        iVar23 = iVar23 + 1;
      } while (iVar23 <= (int)uVar9);
      bVar1 = (int)uVar10 <= (int)puVar22[1];
      uVar10 = uVar10 + 1;
    } while (bVar1);
    puVar22 = puVar22 + 2;
  }
LAB_10a000770:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a000774);
  (*pcVar6)();
}



/* Entry: 10a000580; end: 10a000773;  */

void FUN_10a000580(long param_1)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  uint *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  uint *puVar21;
  int iVar22;
  uint *puVar23;
  undefined8 uVar24;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar20 = *(undefined8 **)(param_1 + 0x10);
  puVar10 = (ulong *)*puVar20;
  puVar21 = (uint *)*puVar10;
  puVar17 = (uint *)puVar10[1];
  lVar13 = (long)puVar17 - (long)puVar21 >> 3;
  if (1 < lVar13) {
    uVar19 = puVar20[1];
    uStack_68 = 0x7fffffffffffffff;
    uStack_70 = 0;
    puVar23 = puVar21;
    if (puVar21 < puVar17 + -2) {
      do {
        lVar13 = lVar13 + -1;
        uStack_80 = 0;
        puVar7 = &uStack_70;
        lStack_78 = lVar13;
        func_0x0001098ec880(puVar7,uVar19,&uStack_80);
        if (puVar7 != (undefined8 *)0x0) {
          uVar24 = *(undefined8 *)puVar21;
          *(undefined8 *)puVar21 = *(undefined8 *)(puVar23 + (long)puVar7 * 2);
          *(undefined8 *)(puVar23 + (long)puVar7 * 2) = uVar24;
        }
        puVar21 = puVar21 + 2;
        puVar23 = puVar23 + 2;
      } while (puVar21 < puVar17 + -2);
      puVar10 = (ulong *)*puVar20;
    }
    puVar21 = (uint *)*puVar10;
    puVar17 = (uint *)puVar10[1];
  }
  while( true ) {
    if (puVar21 == puVar17) {
      return;
    }
    uVar8 = (ulong)(int)*puVar21;
    uVar3 = puVar21[1];
    iVar4 = *puVar21 + *(int *)puVar20[4] * uVar3;
    lVar13 = *(long *)puVar20[3];
    uVar15 = (((long *)puVar20[3])[1] - lVar13 >> 3) * -0x5555555555555555;
    if (uVar15 < (ulong)(long)iVar4 || uVar15 - (long)iVar4 == 0) break;
    lVar18 = *(long *)(puVar20[2] + 0x10);
    lVar16 = **(long **)(puVar20[2] + 0x48);
    lVar5 = uVar8 * 3;
    uVar9 = uVar3 - 1;
    do {
      uVar15 = (ulong)((int)uVar8 + -1);
      iVar22 = (int)uVar8 + -2;
      do {
        if ((((-1 < (int)uVar15) && (-1 < (int)uVar9)) && ((int)uVar15 < *(int *)puVar20[5])) &&
           (((int)uVar9 < *(int *)puVar20[6] &&
            (*(char *)(*(long *)(puVar20[7] + 0x10) + **(long **)(puVar20[7] + 0x48) * (ulong)uVar9
                      + (uVar15 & 0xffffffff)) == -0x80)))) {
          uVar11 = uVar15 + (long)(int)uVar9 * (long)*(int *)puVar20[4];
          lVar2 = *(long *)puVar20[3];
          uVar14 = (((long *)puVar20[3])[1] - lVar2 >> 3) * -0x5555555555555555;
          if (uVar14 < uVar11 || uVar14 - uVar11 == 0) goto LAB_10a000770;
          puVar12 = (undefined4 *)(lVar2 + uVar11 * 0x18);
          FUN_10a000774(puVar20[8],uVar8,puVar21[1],lVar18 + lVar16 * (int)uVar3 + lVar5,*puVar12,
                        puVar12[1],lVar13 + (long)iVar4 * 0x18);
          uVar8 = (ulong)*puVar21;
        }
        uVar15 = uVar15 + 1;
        iVar22 = iVar22 + 1;
      } while (iVar22 <= (int)uVar8);
      bVar1 = (int)uVar9 <= (int)puVar21[1];
      uVar9 = uVar9 + 1;
    } while (bVar1);
    puVar21 = puVar21 + 2;
  }
LAB_10a000770:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a000774);
  (*pcVar6)();
}



/* Entry: 10a000774; end: 10a00090f;  */

void FUN_10a000774(undefined8 *param_1,int param_2,int param_3,long param_4,int param_5,int param_6,
                  int *param_7)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  
  lVar3 = *(long *)*param_1;
  if ((ulong)(long)param_5 < (ulong)(((long *)*param_1)[1] - lVar3 >> 3)) {
    lVar6 = *(long *)param_1[1];
    if ((ulong)(long)param_6 < (ulong)(((long *)param_1[1])[1] - lVar6 >> 3)) {
      lVar5 = 0;
      piVar1 = (int *)(lVar3 + (long)param_5 * 8);
      piVar2 = (int *)(lVar6 + (long)param_6 * 8);
      lVar7 = *(long *)(param_1[2] + 0x10);
      lVar6 = **(long **)(param_1[2] + 0x48);
      lVar3 = lVar7 + lVar6 * piVar1[1] + (long)*piVar1 * 3;
      lVar6 = lVar7 + lVar6 * piVar2[1] + (long)*piVar2 * 3;
      fVar10 = 0.0;
      fVar11 = 0.0;
      do {
        fVar12 = (float)NEON_ucvtf((uint)*(byte *)(lVar3 + lVar5));
        fVar14 = (float)NEON_ucvtf((uint)*(byte *)(lVar6 + lVar5));
        fVar15 = (float)NEON_ucvtf((uint)*(byte *)(param_4 + lVar5));
        fVar12 = fVar12 - fVar14;
        fVar10 = fVar10 + fVar12 * (fVar15 - fVar14);
        fVar11 = fVar11 + fVar12 * fVar12;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      lVar5 = 0;
      fVar10 = fVar10 / (fVar11 + 1e-06);
      fVar12 = 0.0;
      fVar11 = 0.0;
      if (0.0 <= fVar10) {
        fVar11 = fVar10;
      }
      fVar10 = 1.0;
      if (fVar11 <= 1.0) {
        fVar10 = fVar11;
      }
      do {
        fVar11 = (float)NEON_ucvtf((uint)*(byte *)(lVar3 + lVar5));
        fVar15 = (float)NEON_ucvtf((uint)*(byte *)(lVar6 + lVar5));
        fVar14 = (float)NEON_ucvtf((uint)*(byte *)(param_4 + lVar5));
        fVar14 = fVar14 - ((1.0 - fVar10) * fVar15 + fVar11 * fVar10);
        fVar12 = fVar12 + fVar14 * fVar14;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      iVar13 = param_2 - (int)*(undefined8 *)piVar1;
      param_2 = param_2 - (int)*(undefined8 *)piVar2;
      iVar8 = param_3 - (int)((ulong)*(undefined8 *)piVar1 >> 0x20);
      param_3 = param_3 - (int)((ulong)*(undefined8 *)piVar2 >> 0x20);
      uVar9 = NEON_ucvtf(CONCAT44(param_3 * param_3 + param_2 * param_2,
                                  iVar8 * iVar8 + iVar13 * iVar13),4);
      fVar11 = SQRT((float)((ulong)uVar9 >> 0x20)) /
               (float)((ulong)*(undefined8 *)(param_7 + 2) >> 0x20) +
               SQRT(fVar12) + SQRT((float)uVar9) / (float)*(undefined8 *)(param_7 + 2);
      if (fVar11 < (float)param_7[4]) {
        *param_7 = param_5;
        param_7[1] = param_6;
        param_7[4] = (int)fVar11;
        param_7[5] = (int)fVar10;
      }
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0008e8);
  (*pcVar4)();
}



/* Entry: 10a000910; end: 10a000967;  */

void FUN_10a000910(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_DAT_110b99e10;
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  uVar3 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar3;
  uVar4 = puVar2[3];
  uVar3 = puVar2[2];
  uVar6 = puVar2[5];
  uVar5 = puVar2[4];
  uVar8 = puVar2[7];
  uVar7 = puVar2[6];
  puVar1[8] = puVar2[8];
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a000968; end: 10a000a7f;  */

undefined1 * FUN_10a000968(long *param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 auStack_140 [2];
  undefined1 *puStack_138;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [4];
  int iStack_f4;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar10 = param_1[1] - *param_1;
  uVar1 = (lVar10 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar8 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = param_1;
      FUN_109fff21c();
    }
    puStack_50 = (undefined4 *)((long)plVar6 + lVar10);
    plStack_40 = plVar6 + uVar8;
    puStack_48 = puStack_50 + 2;
    *puStack_50 = (int)param_2;
    puStack_50[1] = param_3;
    plStack_58 = plVar6;
    func_0x0001092c79f4(param_1,&plStack_58);
    puVar9 = (undefined1 *)param_1[1];
    if (puStack_48 != puStack_50) {
      puStack_48 = (undefined4 *)
                   ((long)puStack_48 +
                   ((long)puStack_50 + (7 - (long)puStack_48) & 0xfffffffffffffff8U));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return puVar9;
  }
  FUN_109fff208();
  if (puStack_48 != puStack_50) {
    puStack_48 = (undefined4 *)
                 ((long)puStack_48 +
                 (((long)puStack_50 - (long)puStack_48) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  uStack_160 = 0x200000002;
  uStack_110 = 0xffffffffffffffff;
  lStack_90 = lVar10;
  func_0x000109b32bf8(auStack_f8,2,&uStack_160,&uStack_110);
  *(undefined4 *)param_1 = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[8] = (long)(param_1 + 1);
  param_1[9] = (long)(param_1 + 10);
  param_1[0xb] = 0;
  uStack_100 = 0;
  uStack_110 = CONCAT44(uStack_110._4_4_,0x1010000);
  auStack_128[0] = 0x2010000;
  uStack_118 = 0;
  uStack_130 = 0;
  auStack_140[0] = 0x1010000;
  uStack_158 = 0x7fefffffffffffff;
  uStack_160 = 0x7fefffffffffffff;
  uStack_148 = 0x7fefffffffffffff;
  uStack_150 = 0x7fefffffffffffff;
  uStack_98 = 0xffffffffffffffff;
  puVar9 = (undefined1 *)0x0;
  puStack_138 = auStack_f8;
  plStack_120 = param_1;
  uStack_108 = param_2;
  func_0x000109b32fd4(0,&uStack_110,auStack_128,auStack_140,&uStack_98,1,0,&uStack_160);
  if (lStack_c0 != 0) {
    piVar2 = (int *)(lStack_c0 + 0x14);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      puVar9 = auStack_f8;
      func_0x000109a848d4(puVar9);
    }
  }
  lStack_c0 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  if (0 < iStack_f4) {
    lVar10 = 0;
    do {
      *(undefined4 *)(lStack_b8 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < iStack_f4);
  }
  if (puStack_b0 != auStack_a8 && puStack_b0 != (undefined1 *)0x0) {
    puVar9 = *(undefined1 **)(puStack_b0 + -8);
    _free(puVar9);
  }
  return puVar9;
}



/* Entry: 10a000a80; end: 10a000c07;  */

void FUN_10a000a80(undefined4 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 auStack_e0 [2];
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [4];
  int iStack_94;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_100 = 0x200000002;
  uStack_b0 = 0xffffffffffffffff;
  func_0x000109b32bf8(auStack_98,2,&uStack_100,&uStack_b0);
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  uStack_a0 = 0;
  uStack_b0 = CONCAT44(uStack_b0._4_4_,0x1010000);
  auStack_c8[0] = 0x2010000;
  uStack_b8 = 0;
  uStack_d0 = 0;
  auStack_e0[0] = 0x1010000;
  uStack_f8 = 0x7fefffffffffffff;
  uStack_100 = 0x7fefffffffffffff;
  uStack_e8 = 0x7fefffffffffffff;
  uStack_f0 = 0x7fefffffffffffff;
  uStack_38 = 0xffffffffffffffff;
  puStack_d8 = auStack_98;
  puStack_c0 = param_1;
  uStack_a8 = param_2;
  func_0x000109b32fd4(0,&uStack_b0,auStack_c8,auStack_e0,&uStack_38,1,0,&uStack_100);
  if (lStack_60 != 0) {
    piVar1 = (int *)(lStack_60 + 0x14);
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
      func_0x000109a848d4(auStack_98);
    }
  }
  lStack_60 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  if (0 < iStack_94) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_58 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_94);
  }
  if (puStack_50 != auStack_48 && puStack_50 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_50 + -8));
  }
  return;
}



/* Entry: 10a000c08; end: 10a000e77;  */

void FUN_10a000c08(undefined8 param_1,undefined8 *param_2,ulong *param_3,ulong *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pcVar6 = (code *)*param_2;
  uStack_b8 = param_3[1];
  uStack_c0 = *param_3;
  uStack_a8 = param_3[3];
  uStack_b0 = param_3[2];
  iVar2 = *(int *)((long)param_3 + 4);
  uStack_80 = (ulong)&uStack_c0 | 8;
  uStack_98 = param_3[5];
  uStack_a0 = param_3[4];
  uStack_88 = param_3[7];
  uStack_90 = param_3[6];
  uStack_70 = 0;
  uStack_68 = 0;
  if (param_3[7] != 0) {
    piVar1 = (int *)(param_3[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar2 = *(int *)((long)param_3 + 4);
  }
  puStack_78 = &uStack_70;
  if (iVar2 < 3) {
    uStack_70 = *(undefined8 *)param_3[9];
    uStack_68 = ((undefined8 *)param_3[9])[1];
  }
  else {
    uStack_c0 = uStack_c0 & 0xffffffff;
    func_0x000109a84868(&uStack_c0,param_3);
  }
  uStack_118 = param_4[1];
  uStack_120 = *param_4;
  uStack_108 = param_4[3];
  uStack_110 = param_4[2];
  uStack_e0 = (ulong)&uStack_120 | 8;
  iVar2 = *(int *)((long)param_4 + 4);
  uStack_f8 = param_4[5];
  uStack_100 = param_4[4];
  uStack_e8 = param_4[7];
  uStack_f0 = param_4[6];
  uStack_d0 = 0;
  uStack_c8 = 0;
  if (param_4[7] != 0) {
    piVar1 = (int *)(param_4[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar2 = *(int *)((long)param_4 + 4);
  }
  puStack_d8 = &uStack_d0;
  if (iVar2 < 3) {
    uStack_d0 = *(undefined8 *)param_4[9];
    uStack_c8 = ((undefined8 *)param_4[9])[1];
  }
  else {
    uStack_120 = uStack_120 & 0xffffffff;
    func_0x000109a84868(&uStack_120,param_4);
  }
  (*pcVar6)(param_1,&uStack_c0,&uStack_120,param_2);
  if (uStack_e8 != 0) {
    piVar1 = (int *)(uStack_e8 + 0x14);
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
      func_0x000109a848d4(&uStack_120);
    }
  }
  uStack_e8 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (0 < uStack_120._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)(uStack_e0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_120._4_4_);
  }
  if (puStack_d8 != &uStack_d0 && puStack_d8 != (undefined8 *)0x0) {
    _free(puStack_d8[-1]);
  }
  if (uStack_88 != 0) {
    piVar1 = (int *)(uStack_88 + 0x14);
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
      func_0x000109a848d4(&uStack_c0);
    }
  }
  uStack_88 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (0 < uStack_c0._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)(uStack_80 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_c0._4_4_);
  }
  if (puStack_78 != &uStack_70 && puStack_78 != (undefined8 *)0x0) {
    _free(puStack_78[-1]);
  }
  return;
}



/* Entry: 10a000e78; end: 10a000f9f;  */

long * FUN_10a000e78(long *param_1,float *param_2,float *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  long *plStack_58;
  int *piStack_50;
  int *piStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar1 = (lVar6 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar2 = param_1[2] - *param_1;
    uVar4 = (long)uVar2 >> 2;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar2) {
      uVar4 = 0x1fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = param_1;
      FUN_109fff21c();
    }
    piStack_50 = (int *)((long)plVar5 + lVar6);
    fVar7 = *param_3;
    plStack_40 = plVar5 + uVar4;
    piStack_48 = piStack_50 + 2;
    *piStack_50 = (int)*param_2;
    piStack_50[1] = (int)fVar7;
    plStack_58 = plVar5;
    func_0x0001092c79f4(param_1,&plStack_58);
    plVar5 = (long *)param_1[1];
    if (piStack_48 != piStack_50) {
      piStack_48 = (int *)((long)piStack_48 +
                          ((long)piStack_50 + (7 - (long)piStack_48) & 0xfffffffffffffff8U));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar5;
  }
  FUN_109fff208();
  if (piStack_48 != piStack_50) {
    piStack_48 = (int *)((long)piStack_48 +
                        (((long)piStack_50 - (long)piStack_48) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  plVar5 = param_1;
  if (param_4 != 0) {
    FUN_10a001010();
    puVar3 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      *puVar3 = *(undefined8 *)param_2;
      puVar3 = puVar3 + 1;
    }
    param_1[1] = (long)puVar3;
  }
  return plVar5;
}



/* Entry: 10a000fa0; end: 10a00100f;  */

void FUN_10a000fa0(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a001010(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a001010; end: 10a001047;  */

void FUN_10a001010(long *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1;
    FUN_109fff21c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    return;
  }
  FUN_109fff208();
  if (param_4 != 0) {
    FUN_10a0010cc();
    plVar1 = param_1;
    FUN_10a00116c(param_1,param_2,param_3,param_1[1]);
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 10a001048; end: 10a0010cb;  */

void FUN_10a001048(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0010cc(param_1,param_4);
    lVar1 = param_1;
    FUN_10a00116c(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a0010cc; end: 10a001113;  */

undefined1  [16] FUN_10a0010cc(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    plVar1 = param_1;
    FUN_10a001128();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 3);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a001114();
  puVar2 = &UNK_10f630bba;
  FUN_109ffde64();
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    lVar3 = (long)param_2 * 0x18;
    __Znwm(lVar3);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000109ffded8();
  ppuStack_a8 = &puStack_90;
  ppuStack_a0 = &puStack_88;
  uStack_98 = 0;
  puStack_b0 = puVar2;
  plVar1 = param_2;
  puStack_90 = param_4;
  for (; puStack_88 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    plVar1 = (long *)*param_2;
    FUN_10a000fa0(param_4,plVar1,param_2[1],param_2[1] - (long)plVar1 >> 3);
    param_4 = puStack_88 + 3;
  }
  uStack_98 = 1;
  FUN_10a001218(&puStack_b0);
  auVar6._8_8_ = plVar1;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a001114; end: 10a001127;  */

undefined1  [16] FUN_10a001114(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar1 = &UNK_10f630bba;
  FUN_109ffde64();
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    lVar2 = (long)param_2 * 0x18;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_78 = 0;
  puStack_90 = puVar1;
  plVar3 = param_2;
  puStack_70 = param_4;
  for (; puStack_68 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    plVar3 = (long *)*param_2;
    FUN_10a000fa0(param_4,plVar3,param_2[1],param_2[1] - (long)plVar3 >> 3);
    param_4 = puStack_68 + 3;
  }
  uStack_78 = 1;
  FUN_10a001218(&puStack_90);
  auVar5._8_8_ = plVar3;
  auVar5._0_8_ = param_4;
  return auVar5;
}



/* Entry: 10a001128; end: 10a00116b;  */

undefined1  [16] FUN_10a001128(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    lVar1 = (long)param_2 * 0x18;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  ppuStack_78 = &puStack_60;
  ppuStack_70 = &puStack_58;
  uStack_68 = 0;
  uStack_80 = param_1;
  plVar2 = param_2;
  puStack_60 = param_4;
  for (; puStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    plVar2 = (long *)*param_2;
    FUN_10a000fa0(param_4,plVar2,param_2[1],param_2[1] - (long)plVar2 >> 3);
    param_4 = puStack_58 + 3;
  }
  uStack_68 = 1;
  FUN_10a001218(&uStack_80);
  auVar4._8_8_ = plVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a00116c; end: 10a001217;  */

undefined8 * FUN_10a00116c(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    FUN_10a000fa0(param_4,*param_2,param_2[1],param_2[1] - *param_2 >> 3);
    param_4 = puStack_38 + 3;
  }
  uStack_48 = 1;
  FUN_10a001218(&uStack_60);
  return param_4;
}



/* Entry: 10a001218; end: 10a00124b;  */

long FUN_10a001218(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a00124c(param_1);
  }
  return param_1;
}



/* Entry: 10a00124c; end: 10a0012d7;  */

void FUN_10a00124c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)**(undefined8 **)(param_1 + 8);
  plVar3 = (long *)**(long **)(param_1 + 0x10);
  while (plVar1 = plVar3, plVar1 != plVar2) {
    plVar3 = plVar1 + -3;
    if (*plVar3 != 0) {
      plVar1[-2] = *plVar3;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a0012d8; end: 10a00132b;  */

void FUN_10a0012d8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10a00132c; end: 10a001433;  */

long FUN_10a00132c(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar1 = (lVar6 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    plVar2 = param_1;
    plStack_38 = param_1;
    FUN_109fff21c();
    puStack_50 = (undefined8 *)((long)plVar2 + lVar6);
    plStack_40 = plVar2 + uVar5;
    puStack_48 = puStack_50 + 1;
    *puStack_50 = *param_2;
    plStack_58 = plVar2;
    func_0x0001092c79f4(param_1,&plStack_58);
    lVar6 = param_1[1];
    if (puStack_48 != puStack_50) {
      puStack_48 = (undefined8 *)
                   ((long)puStack_48 +
                   ((long)puStack_50 + (7 - (long)puStack_48) & 0xfffffffffffffff8U));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return lVar6;
  }
  FUN_109fff208();
  if (puStack_48 != puStack_50) {
    puStack_48 = (undefined8 *)
                 ((long)puStack_48 +
                 (((long)puStack_50 - (long)puStack_48) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume(param_1);
  lVar3 = param_3;
  func_0x000105277f8c();
  lVar6 = param_3;
  if (param_4 != 0) {
    FUN_109ffe348();
    FUN_10a0014c8(param_3,param_2,lVar3,*(undefined8 *)(param_3 + 8));
    *(long *)(param_3 + 8) = lVar6;
  }
  return lVar6;
}



/* Entry: 10a001434; end: 10a001443;  */

void FUN_10a001434(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_3;
  func_0x000105277f8c();
  if (param_4 != 0) {
    FUN_109ffe348();
    lVar1 = param_3;
    FUN_10a0014c8(param_3,param_2,lVar2,*(undefined8 *)(param_3 + 8));
    *(long *)(param_3 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a001444; end: 10a0014c7;  */

void FUN_10a001444(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_109ffe348(param_1,param_4);
    lVar1 = param_1;
    FUN_10a0014c8(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a0014c8; end: 10a00154b;  */

long FUN_10a0014c8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x60) {
    func_0x000109ffe69c(param_4,param_2);
    param_4 = param_4 + 0x60;
  }
  return param_4;
}



/* Entry: 10a00154c; end: 10a00155f;  */

void FUN_10a00154c(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_68;
  
  FUN_109ffde64(&UNK_10f630bba);
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  puVar1 = (undefined8 *)&UNK_10f630bba;
  FUN_109ffde64();
  puStack_68 = puVar1 + 3;
  FUN_10a0015fc(&puStack_68);
  if (*(char *)((long)puVar1 + 0x17) < '\0') {
    __ZdlPv(*puVar1);
  }
  return;
}



/* Entry: 10a001560; end: 10a0015a3;  */

void FUN_10a001560(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_58;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  puVar1 = (undefined8 *)&UNK_10f630bba;
  FUN_109ffde64();
  puStack_58 = puVar1 + 3;
  FUN_10a0015fc(&puStack_58);
  if (*(char *)((long)puVar1 + 0x17) < '\0') {
    __ZdlPv(*puVar1);
  }
  return;
}



/* Entry: 10a0015a4; end: 10a0015b7;  */

void FUN_10a0015a4(void)

{
  undefined8 *puVar1;
  undefined8 *puStack_38;
  
  puVar1 = (undefined8 *)&UNK_10f630bba;
  FUN_109ffde64();
  puStack_38 = puVar1 + 3;
  FUN_10a0015fc(&puStack_38);
  if (*(char *)((long)puVar1 + 0x17) < '\0') {
    __ZdlPv(*puVar1);
  }
  return;
}



/* Entry: 10a0015b8; end: 10a0015fb;  */

void FUN_10a0015b8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 3;
  FUN_10a0015fc(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return;
}



/* Entry: 10a0015fc; end: 10a00166b;  */

void FUN_10a0015fc(long *param_1)

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
        lVar2 = lVar2 + -0x50;
        FUN_10a00166c(lVar2);
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



/* Entry: 10a00166c; end: 10a0016af;  */

void FUN_10a00166c(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10a0016b0; end: 10a0016c3;  */

undefined1  [16] FUN_10a0016b0(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  puVar4 = (undefined4 *)&UNK_10f630bba;
  FUN_109ffde64();
  if ((ulong)puVar4 >> 0x3b == 0) {
    lVar5 = (long)puVar4 << 5;
    __Znwm(lVar5);
    auVar11._8_8_ = puVar4;
    auVar11._0_8_ = lVar5;
    return auVar11;
  }
  func_0x000109ffded8();
  *puVar4 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    puVar7 = *(undefined4 **)(param_2 + 2);
    func_0x000107c3192c(puVar4 + 2,puVar7,*(undefined8 *)(param_2 + 4));
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 4);
    uVar9 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(puVar4 + 4) = uVar10;
    *(undefined8 *)(puVar4 + 2) = uVar9;
    puVar7 = param_2;
  }
  uVar10 = *(undefined8 *)(param_2 + 10);
  uVar9 = *(undefined8 *)(param_2 + 8);
  uVar2 = param_2[0xc];
  *(undefined8 *)(puVar4 + 0xe) = 0;
  puVar4[0xc] = uVar2;
  *(undefined8 *)(puVar4 + 10) = uVar10;
  *(undefined8 *)(puVar4 + 8) = uVar9;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  lVar5 = *(long *)(param_2 + 0xe);
  lVar1 = *(long *)(param_2 + 0x10);
  lVar8 = lVar1 - lVar5;
  if (lVar8 != 0) {
    uVar6 = lVar8 >> 5;
    if (uVar6 >> 0x3b != 0) {
      FUN_10a0016b0();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0017f4);
      (*pcVar3)();
    }
    FUN_10a0016c4();
    *(ulong *)(puVar4 + 0xe) = uVar6;
    *(ulong *)(puVar4 + 0x10) = uVar6;
    *(ulong *)(puVar4 + 0x12) = uVar6 + (long)puVar7 * 0x20;
    do {
      lVar8 = 0;
      do {
        *(undefined4 *)(uVar6 + lVar8) = *(undefined4 *)(lVar5 + lVar8);
        lVar8 = lVar8 + 4;
      } while (lVar8 != 0xc);
      do {
        *(undefined4 *)(uVar6 + lVar8) = *(undefined4 *)(lVar5 + lVar8);
        lVar8 = lVar8 + 4;
      } while (lVar8 != 0x18);
      *(undefined8 *)(uVar6 + 0x18) = *(undefined8 *)(lVar5 + 0x18);
      lVar5 = lVar5 + 0x20;
      uVar6 = uVar6 + 0x20;
    } while (lVar5 != lVar1);
    *(ulong *)(puVar4 + 0x10) = uVar6;
  }
  auVar12._8_8_ = puVar7;
  auVar12._0_8_ = puVar4;
  return auVar12;
}



/* Entry: 10a0016c4; end: 10a0016f7;  */

undefined1  [16] FUN_10a0016c4(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if ((ulong)param_1 >> 0x3b == 0) {
    lVar4 = (long)param_1 << 5;
    __Znwm(lVar4);
    auVar10._8_8_ = param_1;
    auVar10._0_8_ = lVar4;
    return auVar10;
  }
  func_0x000109ffded8();
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    puVar6 = *(undefined4 **)(param_2 + 2);
    func_0x000107c3192c(param_1 + 2,puVar6,*(undefined8 *)(param_2 + 4));
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 4);
    uVar8 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar9;
    *(undefined8 *)(param_1 + 2) = uVar8;
    puVar6 = param_2;
  }
  uVar9 = *(undefined8 *)(param_2 + 10);
  uVar8 = *(undefined8 *)(param_2 + 8);
  uVar2 = param_2[0xc];
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xc] = uVar2;
  *(undefined8 *)(param_1 + 10) = uVar9;
  *(undefined8 *)(param_1 + 8) = uVar8;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  lVar4 = *(long *)(param_2 + 0xe);
  lVar1 = *(long *)(param_2 + 0x10);
  lVar7 = lVar1 - lVar4;
  if (lVar7 != 0) {
    uVar5 = lVar7 >> 5;
    if (uVar5 >> 0x3b != 0) {
      FUN_10a0016b0();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0017f4);
      (*pcVar3)();
    }
    FUN_10a0016c4();
    *(ulong *)(param_1 + 0xe) = uVar5;
    *(ulong *)(param_1 + 0x10) = uVar5;
    *(ulong *)(param_1 + 0x12) = uVar5 + (long)puVar6 * 0x20;
    do {
      lVar7 = 0;
      do {
        *(undefined4 *)(uVar5 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
        lVar7 = lVar7 + 4;
      } while (lVar7 != 0xc);
      do {
        *(undefined4 *)(uVar5 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
        lVar7 = lVar7 + 4;
      } while (lVar7 != 0x18);
      *(undefined8 *)(uVar5 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
      lVar4 = lVar4 + 0x20;
      uVar5 = uVar5 + 0x20;
    } while (lVar4 != lVar1);
    *(ulong *)(param_1 + 0x10) = uVar5;
  }
  auVar11._8_8_ = puVar6;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 10a0016f8; end: 10a00181f;  */

undefined4 * FUN_10a0016f8(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    puVar5 = *(undefined4 **)(param_2 + 2);
    func_0x000107c3192c(param_1 + 2,puVar5,*(undefined8 *)(param_2 + 4));
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 4);
    uVar8 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar9;
    *(undefined8 *)(param_1 + 2) = uVar8;
    puVar5 = param_2;
  }
  uVar9 = *(undefined8 *)(param_2 + 10);
  uVar8 = *(undefined8 *)(param_2 + 8);
  uVar2 = param_2[0xc];
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xc] = uVar2;
  *(undefined8 *)(param_1 + 10) = uVar9;
  *(undefined8 *)(param_1 + 8) = uVar8;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  lVar7 = *(long *)(param_2 + 0xe);
  lVar1 = *(long *)(param_2 + 0x10);
  lVar6 = lVar1 - lVar7;
  if (lVar6 != 0) {
    uVar4 = lVar6 >> 5;
    if (uVar4 >> 0x3b != 0) {
      FUN_10a0016b0();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0017f4);
      (*pcVar3)();
    }
    FUN_10a0016c4();
    *(ulong *)(param_1 + 0xe) = uVar4;
    *(ulong *)(param_1 + 0x10) = uVar4;
    *(ulong *)(param_1 + 0x12) = uVar4 + (long)puVar5 * 0x20;
    do {
      lVar6 = 0;
      do {
        *(undefined4 *)(uVar4 + lVar6) = *(undefined4 *)(lVar7 + lVar6);
        lVar6 = lVar6 + 4;
      } while (lVar6 != 0xc);
      do {
        *(undefined4 *)(uVar4 + lVar6) = *(undefined4 *)(lVar7 + lVar6);
        lVar6 = lVar6 + 4;
      } while (lVar6 != 0x18);
      *(undefined8 *)(uVar4 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
      lVar7 = lVar7 + 0x20;
      uVar4 = uVar4 + 0x20;
    } while (lVar7 != lVar1);
    *(ulong *)(param_1 + 0x10) = uVar4;
  }
  return param_1;
}



/* Entry: 10a001820; end: 10a001833;  */

long * FUN_10a001820(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&UNK_10f630bba;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x50;
    FUN_10a00166c();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a001834; end: 10a00187f;  */

long * FUN_10a001834(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x50;
    FUN_10a00166c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a001880; end: 10a0018ef;  */

void FUN_10a001880(long *param_1)

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
        lVar2 = lVar2 + -0x30;
        FUN_10a0015b8(lVar2);
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



/* Entry: 10a0018f0; end: 10a001903;  */

void FUN_10a0018f0(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar5 = &UNK_10f630bba;
  FUN_109ffde64();
  if (puVar5 < (undefined *)0x5555555555555556) {
    __Znwm((long)puVar5 * 3);
    return;
  }
  func_0x000109ffded8();
  FUN_109ffde64(&UNK_10f630bba);
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  puVar6 = (undefined8 *)&UNK_10f630bba;
  FUN_109ffde64();
  if (puVar6 < (undefined8 *)0x1555555555555556) {
    __Znwm((long)puVar6 * 0xc);
    return;
  }
  func_0x000109ffded8();
  uVar12 = *param_2;
  uVar14 = param_2[3];
  uVar13 = param_2[2];
  puVar6[1] = param_2[1];
  *puVar6 = uVar12;
  puVar6[3] = uVar14;
  puVar6[2] = uVar13;
  uVar12 = param_2[4];
  puVar6[5] = param_2[5];
  puVar6[4] = uVar12;
  lVar9 = param_2[7];
  uVar12 = param_2[6];
  puVar6[7] = param_2[7];
  puVar6[6] = uVar12;
  puVar6[10] = 0;
  puVar6[8] = puVar6 + 1;
  puVar6[9] = puVar6 + 10;
  puVar6[0xb] = 0;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar8 = param_2;
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar10 = (undefined8 *)param_2[9];
    puVar11 = (undefined8 *)puVar6[9];
    *puVar11 = *puVar10;
    puVar11[1] = puVar10[1];
  }
  else {
    *(undefined4 *)((long)puVar6 + 4) = 0;
    func_0x000109a84868(puVar6);
  }
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  lVar9 = param_2[0xd] - param_2[0xc];
  if (lVar9 != 0) {
    uVar7 = (lVar9 >> 2) * -0x5555555555555555;
    if (0x1555555555555555 < uVar7) {
      FUN_10a001988();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a001b00);
      (*pcVar4)();
    }
    FUN_10a00199c();
    puVar6[0xc] = uVar7;
    puVar6[0xd] = uVar7;
    puVar6[0xe] = uVar7 + (long)puVar8 * 0xc;
    _memmove();
    puVar6[0xd] = uVar7 + lVar9;
  }
  return;
}



/* Entry: 10a001904; end: 10a00193f;  */

void FUN_10a001904(ulong param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_1 < 0x5555555555555556) {
    __Znwm(param_1 * 3);
    return;
  }
  func_0x000109ffded8();
  FUN_109ffde64(&UNK_10f630bba);
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  puVar5 = (undefined8 *)&UNK_10f630bba;
  FUN_109ffde64();
  if (puVar5 < (undefined8 *)0x1555555555555556) {
    __Znwm((long)puVar5 * 0xc);
    return;
  }
  func_0x000109ffded8();
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  puVar5[1] = param_2[1];
  *puVar5 = uVar11;
  puVar5[3] = uVar13;
  puVar5[2] = uVar12;
  uVar11 = param_2[4];
  puVar5[5] = param_2[5];
  puVar5[4] = uVar11;
  lVar8 = param_2[7];
  uVar11 = param_2[6];
  puVar5[7] = param_2[7];
  puVar5[6] = uVar11;
  puVar5[10] = 0;
  puVar5[8] = puVar5 + 1;
  puVar5[9] = puVar5 + 10;
  puVar5[0xb] = 0;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar7 = param_2;
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar9 = (undefined8 *)param_2[9];
    puVar10 = (undefined8 *)puVar5[9];
    *puVar10 = *puVar9;
    puVar10[1] = puVar9[1];
  }
  else {
    *(undefined4 *)((long)puVar5 + 4) = 0;
    func_0x000109a84868(puVar5);
  }
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  lVar8 = param_2[0xd] - param_2[0xc];
  if (lVar8 != 0) {
    uVar6 = (lVar8 >> 2) * -0x5555555555555555;
    if (0x1555555555555555 < uVar6) {
      FUN_10a001988();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a001b00);
      (*pcVar4)();
    }
    FUN_10a00199c();
    puVar5[0xc] = uVar6;
    puVar5[0xd] = uVar6;
    puVar5[0xe] = uVar6 + (long)puVar7 * 0xc;
    _memmove();
    puVar5[0xd] = uVar6 + lVar8;
  }
  return;
}



/* Entry: 10a001940; end: 10a001953;  */

void FUN_10a001940(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  FUN_109ffde64(&UNK_10f630bba);
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  puVar5 = (undefined8 *)&UNK_10f630bba;
  FUN_109ffde64();
  if (puVar5 < (undefined8 *)0x1555555555555556) {
    __Znwm((long)puVar5 * 0xc);
    return;
  }
  func_0x000109ffded8();
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  puVar5[1] = param_2[1];
  *puVar5 = uVar11;
  puVar5[3] = uVar13;
  puVar5[2] = uVar12;
  uVar11 = param_2[4];
  puVar5[5] = param_2[5];
  puVar5[4] = uVar11;
  lVar8 = param_2[7];
  uVar11 = param_2[6];
  puVar5[7] = param_2[7];
  puVar5[6] = uVar11;
  puVar5[10] = 0;
  puVar5[8] = puVar5 + 1;
  puVar5[9] = puVar5 + 10;
  puVar5[0xb] = 0;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar7 = param_2;
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar9 = (undefined8 *)param_2[9];
    puVar10 = (undefined8 *)puVar5[9];
    *puVar10 = *puVar9;
    puVar10[1] = puVar9[1];
  }
  else {
    *(undefined4 *)((long)puVar5 + 4) = 0;
    func_0x000109a84868(puVar5);
  }
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  lVar8 = param_2[0xd] - param_2[0xc];
  if (lVar8 != 0) {
    uVar6 = (lVar8 >> 2) * -0x5555555555555555;
    if (0x1555555555555555 < uVar6) {
      FUN_10a001988();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a001b00);
      (*pcVar4)();
    }
    FUN_10a00199c();
    puVar5[0xc] = uVar6;
    puVar5[0xd] = uVar6;
    puVar5[0xe] = uVar6 + (long)puVar7 * 0xc;
    _memmove();
    puVar5[0xd] = uVar6 + lVar8;
  }
  return;
}



/* Entry: 10a001954; end: 10a001987;  */

void FUN_10a001954(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  puVar5 = (undefined8 *)&UNK_10f630bba;
  FUN_109ffde64();
  if (puVar5 < (undefined8 *)0x1555555555555556) {
    __Znwm((long)puVar5 * 0xc);
    return;
  }
  func_0x000109ffded8();
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  puVar5[1] = param_2[1];
  *puVar5 = uVar11;
  puVar5[3] = uVar13;
  puVar5[2] = uVar12;
  uVar11 = param_2[4];
  puVar5[5] = param_2[5];
  puVar5[4] = uVar11;
  lVar8 = param_2[7];
  uVar11 = param_2[6];
  puVar5[7] = param_2[7];
  puVar5[6] = uVar11;
  puVar5[10] = 0;
  puVar5[8] = puVar5 + 1;
  puVar5[9] = puVar5 + 10;
  puVar5[0xb] = 0;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar7 = param_2;
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar9 = (undefined8 *)param_2[9];
    puVar10 = (undefined8 *)puVar5[9];
    *puVar10 = *puVar9;
    puVar10[1] = puVar9[1];
  }
  else {
    *(undefined4 *)((long)puVar5 + 4) = 0;
    func_0x000109a84868(puVar5);
  }
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  lVar8 = param_2[0xd] - param_2[0xc];
  if (lVar8 != 0) {
    uVar6 = (lVar8 >> 2) * -0x5555555555555555;
    if (0x1555555555555555 < uVar6) {
      FUN_10a001988();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a001b00);
      (*pcVar4)();
    }
    FUN_10a00199c();
    puVar5[0xc] = uVar6;
    puVar5[0xd] = uVar6;
    puVar5[0xe] = uVar6 + (long)puVar7 * 0xc;
    _memmove();
    puVar5[0xd] = uVar6 + lVar8;
  }
  return;
}



/* Entry: 10a001988; end: 10a00199b;  */

void FUN_10a001988(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar5 = (undefined8 *)&UNK_10f630bba;
  FUN_109ffde64();
  if (puVar5 < (undefined8 *)0x1555555555555556) {
    __Znwm((long)puVar5 * 0xc);
    return;
  }
  func_0x000109ffded8();
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  puVar5[1] = param_2[1];
  *puVar5 = uVar11;
  puVar5[3] = uVar13;
  puVar5[2] = uVar12;
  uVar11 = param_2[4];
  puVar5[5] = param_2[5];
  puVar5[4] = uVar11;
  lVar8 = param_2[7];
  uVar11 = param_2[6];
  puVar5[7] = param_2[7];
  puVar5[6] = uVar11;
  puVar5[10] = 0;
  puVar5[8] = puVar5 + 1;
  puVar5[9] = puVar5 + 10;
  puVar5[0xb] = 0;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar7 = param_2;
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar9 = (undefined8 *)param_2[9];
    puVar10 = (undefined8 *)puVar5[9];
    *puVar10 = *puVar9;
    puVar10[1] = puVar9[1];
  }
  else {
    *(undefined4 *)((long)puVar5 + 4) = 0;
    func_0x000109a84868(puVar5);
  }
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  lVar8 = param_2[0xd] - param_2[0xc];
  if (lVar8 != 0) {
    uVar6 = (lVar8 >> 2) * -0x5555555555555555;
    if (0x1555555555555555 < uVar6) {
      FUN_10a001988();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a001b00);
      (*pcVar4)();
    }
    FUN_10a00199c();
    puVar5[0xc] = uVar6;
    puVar5[0xd] = uVar6;
    puVar5[0xe] = uVar6 + (long)puVar7 * 0xc;
    _memmove();
    puVar5[0xd] = uVar6 + lVar8;
  }
  return;
}



/* Entry: 10a00199c; end: 10a0019df;  */

void FUN_10a00199c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_1 < (undefined8 *)0x1555555555555556) {
    __Znwm((long)param_1 * 0xc);
    return;
  }
  func_0x000109ffded8();
  uVar10 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar10;
  param_1[3] = uVar12;
  param_1[2] = uVar11;
  uVar10 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar10;
  lVar7 = param_2[7];
  uVar10 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar10;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6 = param_2;
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar8 = (undefined8 *)param_2[9];
    puVar9 = (undefined8 *)param_1[9];
    *puVar9 = *puVar8;
    puVar9[1] = puVar8[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar7 = param_2[0xd] - param_2[0xc];
  if (lVar7 != 0) {
    uVar5 = (lVar7 >> 2) * -0x5555555555555555;
    if (0x1555555555555555 < uVar5) {
      FUN_10a001988();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a001b00);
      (*pcVar4)();
    }
    FUN_10a00199c();
    param_1[0xc] = uVar5;
    param_1[0xd] = uVar5;
    param_1[0xe] = uVar5 + (long)puVar6 * 0xc;
    _memmove();
    param_1[0xd] = uVar5 + lVar7;
  }
  return;
}



/* Entry: 10a0019e0; end: 10a001b23;  */

void FUN_10a0019e0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar10 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar10;
  param_1[3] = uVar12;
  param_1[2] = uVar11;
  uVar10 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar10;
  lVar7 = param_2[7];
  uVar10 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar10;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6 = param_2;
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar8 = (undefined8 *)param_2[9];
    puVar9 = (undefined8 *)param_1[9];
    *puVar9 = *puVar8;
    puVar9[1] = puVar8[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar7 = param_2[0xd] - param_2[0xc];
  if (lVar7 != 0) {
    uVar5 = (lVar7 >> 2) * -0x5555555555555555;
    if (0x1555555555555555 < uVar5) {
      FUN_10a001988();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a001b00);
      (*pcVar4)();
    }
    FUN_10a00199c();
    param_1[0xc] = uVar5;
    param_1[0xd] = uVar5;
    param_1[0xe] = uVar5 + (long)puVar6 * 0xc;
    _memmove();
    param_1[0xd] = uVar5 + lVar7;
  }
  return;
}



/* Entry: 10a001b24; end: 10a001b6f;  */

long * FUN_10a001b24(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x78;
    FUN_10a001b84();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a001b70; end: 10a001b83;  */

void FUN_10a001b70(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar5 = &UNK_10f630bba;
  FUN_109ffde64();
  if (*(long *)(puVar5 + 0x60) != 0) {
    *(long *)(puVar5 + 0x68) = *(long *)(puVar5 + 0x60);
    __ZdlPv();
  }
  if (*(long *)(puVar5 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(puVar5 + 0x38) + 0x14);
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
      func_0x000109a848d4(puVar5);
    }
  }
  *(undefined8 *)(puVar5 + 0x38) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x28) = 0;
  *(undefined8 *)(puVar5 + 0x20) = 0;
  if (0 < *(int *)(puVar5 + 4)) {
    lVar6 = 0;
    lVar8 = *(long *)(puVar5 + 0x40);
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(puVar5 + 4));
  }
  puVar7 = *(undefined **)(puVar5 + 0x48);
  if (puVar7 == puVar5 + 0x50 || puVar7 == (undefined *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(puVar7 + -8));
  return;
}



/* Entry: 10a001b84; end: 10a001c33;  */

void FUN_10a001b84(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 == param_1 + 0x50 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 10a001c34; end: 10a001cf7;  */

void FUN_10a001c34(long *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long *plVar5;
  float *pfVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  pfVar6 = (float *)param_1[1];
  if (pfVar6 < (float *)param_1[2]) {
    pfVar17 = pfVar6 + 1;
    *pfVar6 = *param_2;
  }
  else {
    lVar16 = (long)pfVar6 - *param_1;
    uVar12 = (lVar16 >> 2) + 1;
    if (uVar12 >> 0x3e != 0) {
      FUN_10a001cf8();
      pfVar6 = (float *)&UNK_10f630bba;
      FUN_109ffde64();
      if ((ulong)param_2 >> 0x3e == 0) {
        __Znwm((long)param_2 << 2);
        return;
      }
      func_0x000109ffded8();
joined_r0x00010a001d44:
      while( true ) {
        pfVar17 = param_3;
        if (pfVar17 == param_2) {
          return;
        }
        uVar12 = (long)pfVar17 - (long)pfVar6 >> 2;
        if (uVar12 < 2) {
          return;
        }
        if (uVar12 == 3) {
          fVar18 = pfVar6[1];
          fVar19 = pfVar17[-1];
          fVar21 = fVar18;
          if (fVar18 < fVar19) {
            fVar21 = fVar19;
            fVar19 = fVar18;
          }
          pfVar17[-1] = fVar21;
          pfVar6[1] = fVar19;
          fVar18 = pfVar17[-1];
          fVar19 = *pfVar6;
          fVar21 = fVar18;
          if (fVar18 < fVar19) {
            fVar21 = fVar19;
            fVar19 = fVar18;
          }
          pfVar17[-1] = fVar21;
          fVar21 = pfVar6[1];
          if (fVar21 <= fVar19) {
            *pfVar6 = fVar21;
            fVar21 = fVar19;
          }
          pfVar6[1] = fVar21;
          return;
        }
        if (uVar12 == 2) {
          fVar19 = *pfVar6;
          if (fVar19 <= pfVar17[-1]) {
            return;
          }
          *pfVar6 = pfVar17[-1];
          pfVar17[-1] = fVar19;
          return;
        }
        if ((long)uVar12 < 8) {
          while (pfVar10 = pfVar6, pfVar17 + -1 != pfVar10) {
            pfVar6 = pfVar10 + 1;
            if ((pfVar17 != pfVar10) && (pfVar6 != pfVar17)) {
              fVar21 = *pfVar10;
              pfVar14 = pfVar10;
              pfVar11 = pfVar6;
              fVar19 = fVar21;
              do {
                pfVar13 = pfVar11 + 1;
                pfVar1 = pfVar11;
                fVar18 = *pfVar11;
                if (fVar19 <= *pfVar11) {
                  pfVar1 = pfVar14;
                  fVar18 = fVar19;
                }
                fVar19 = fVar18;
                pfVar14 = pfVar1;
                pfVar11 = pfVar13;
              } while (pfVar13 != pfVar17);
              if (pfVar1 != pfVar10) {
                *pfVar10 = *pfVar1;
                *pfVar1 = fVar21;
              }
            }
          }
          return;
        }
        pfVar10 = pfVar6 + ((ulong)((long)pfVar17 - (long)pfVar6) >> 3);
        pfVar14 = pfVar17 + -1;
        fVar18 = *pfVar14;
        fVar20 = *pfVar10;
        fVar21 = fVar20;
        fVar19 = fVar18;
        if (fVar20 < fVar18) {
          fVar21 = fVar18;
          fVar19 = fVar20;
        }
        *pfVar14 = fVar21;
        *pfVar10 = fVar19;
        fVar22 = *pfVar14;
        fVar23 = *pfVar6;
        fVar21 = fVar22;
        fVar19 = fVar23;
        if (fVar22 < fVar23) {
          fVar21 = fVar23;
          fVar19 = fVar22;
        }
        *pfVar14 = fVar21;
        fVar24 = *pfVar10;
        fVar21 = fVar24;
        if (fVar24 <= fVar19) {
          *pfVar6 = fVar24;
          fVar21 = fVar19;
        }
        uVar7 = (uint)(fVar23 <= fVar22);
        if (fVar24 <= fVar19) {
          uVar7 = 1;
        }
        *pfVar10 = fVar21;
        if (fVar18 <= fVar20) {
          uVar7 = 1;
        }
        fVar19 = *pfVar6;
        pfVar11 = pfVar14;
        if (fVar19 < fVar21) break;
        while (pfVar11 = pfVar11 + -1, pfVar11 != pfVar6) {
          if (*pfVar11 < fVar21) goto code_r0x00010a001e1c;
        }
        pfVar10 = pfVar6 + 1;
        pfVar11 = pfVar10;
        if (*pfVar14 <= fVar19) {
          while( true ) {
            if (pfVar11 == pfVar14) {
              return;
            }
            fVar21 = *pfVar11;
            if (fVar19 < fVar21) break;
            pfVar11 = pfVar11 + 1;
          }
          pfVar10 = pfVar11 + 1;
          *pfVar11 = *pfVar14;
          *pfVar14 = fVar21;
        }
        if (pfVar10 == pfVar14) {
          return;
        }
        while( true ) {
          pfVar11 = pfVar10;
          while (fVar19 = *pfVar11, fVar19 <= *pfVar6) {
            pfVar11 = pfVar11 + 1;
            if (pfVar11 == pfVar17) goto LAB_10a001fb4;
          }
          do {
            if (pfVar14 == pfVar6) goto LAB_10a001fb4;
            pfVar14 = pfVar14 + -1;
          } while (*pfVar6 < *pfVar14);
          if (pfVar14 <= pfVar11) break;
          pfVar10 = pfVar11 + 1;
          *pfVar11 = *pfVar14;
          *pfVar14 = fVar19;
        }
        pfVar6 = pfVar11;
        param_3 = pfVar17;
        if (param_2 < pfVar11) {
          return;
        }
      }
      goto LAB_10a001e2c;
    }
    uVar8 = param_1[2] - *param_1;
    uVar9 = (long)uVar8 >> 1;
    if (uVar9 <= uVar12) {
      uVar9 = uVar12;
    }
    if (0x7ffffffffffffffb < uVar8) {
      uVar9 = 0x3fffffffffffffff;
    }
    plVar5 = param_1;
    FUN_10a001d0c();
    lVar2 = *param_1;
    pfVar6 = (float *)((long)plVar5 + lVar16);
    lVar15 = (long)pfVar6 - (param_1[1] - lVar2);
    pfVar17 = pfVar6 + 1;
    *pfVar6 = *param_2;
    _memcpy(lVar15,lVar2);
    lVar16 = *param_1;
    *param_1 = lVar15;
    param_1[1] = (long)pfVar17;
    param_1[2] = (long)plVar5 + uVar9 * 4;
    if (lVar16 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)pfVar17;
  return;
code_r0x00010a001e1c:
  *pfVar6 = *pfVar11;
  *pfVar11 = fVar19;
  bVar4 = uVar7 != 0;
  uVar7 = 1;
  pfVar14 = pfVar11;
  if (bVar4) {
    uVar7 = 2;
  }
LAB_10a001e2c:
  pfVar11 = pfVar6 + 1;
  pfVar1 = pfVar10;
  pfVar13 = pfVar11;
  param_3 = pfVar11;
  if (pfVar11 < pfVar14) {
LAB_10a001e3c:
    pfVar10 = pfVar1;
    param_3 = pfVar13;
    while (fVar19 = *param_3, fVar19 < *pfVar10) {
      param_3 = param_3 + 1;
      if (param_3 == pfVar17) goto LAB_10a001fb4;
    }
    do {
      if (pfVar14 == pfVar6) {
LAB_10a001fb4:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a001fb8);
        (*pcVar3)();
      }
      pfVar14 = pfVar14 + -1;
    } while (*pfVar10 <= *pfVar14);
    if (param_3 < pfVar14) {
      pfVar13 = param_3 + 1;
      *param_3 = *pfVar14;
      *pfVar14 = fVar19;
      uVar7 = uVar7 + 1;
      pfVar1 = pfVar14;
      if (param_3 != pfVar10) {
        pfVar1 = pfVar10;
      }
      goto LAB_10a001e3c;
    }
  }
  if (param_3 != pfVar10) {
    fVar19 = *param_3;
    if (*pfVar10 < fVar19) {
      *param_3 = *pfVar10;
      *pfVar10 = fVar19;
      uVar7 = uVar7 + 1;
    }
  }
  if (param_3 == param_2) {
    return;
  }
  if (uVar7 == 0) {
    pfVar10 = param_3;
    if (param_2 < param_3) {
      do {
        if (pfVar11 == param_3) {
          return;
        }
        pfVar10 = pfVar11 + -1;
        fVar19 = *pfVar11;
        pfVar11 = pfVar11 + 1;
      } while (*pfVar10 <= fVar19);
    }
    else {
      do {
        pfVar14 = pfVar10 + 1;
        if (pfVar14 == pfVar17) {
          return;
        }
        fVar19 = *pfVar10;
        pfVar10 = pfVar14;
      } while (fVar19 <= *pfVar14);
    }
  }
  if (param_3 <= param_2) {
    pfVar6 = param_3 + 1;
    param_3 = pfVar17;
  }
  goto joined_r0x00010a001d44;
}



/* Entry: 10a001cf8; end: 10a001d0b;  */

void FUN_10a001cf8(undefined8 param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  pfVar5 = (float *)&UNK_10f630bba;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3e == 0) {
    __Znwm((long)param_2 << 2);
    return;
  }
  func_0x000109ffded8();
joined_r0x00010a001d44:
  while( true ) {
    pfVar2 = param_3;
    if (pfVar2 == param_2) {
      return;
    }
    uVar9 = (long)pfVar2 - (long)pfVar5 >> 2;
    if (uVar9 < 2) {
      return;
    }
    if (uVar9 == 3) {
      fVar12 = pfVar5[1];
      fVar13 = pfVar2[-1];
      fVar15 = fVar12;
      if (fVar12 < fVar13) {
        fVar15 = fVar13;
        fVar13 = fVar12;
      }
      pfVar2[-1] = fVar15;
      pfVar5[1] = fVar13;
      fVar12 = pfVar2[-1];
      fVar13 = *pfVar5;
      fVar15 = fVar12;
      if (fVar12 < fVar13) {
        fVar15 = fVar13;
        fVar13 = fVar12;
      }
      pfVar2[-1] = fVar15;
      fVar15 = pfVar5[1];
      if (fVar15 <= fVar13) {
        *pfVar5 = fVar15;
        fVar15 = fVar13;
      }
      pfVar5[1] = fVar15;
      return;
    }
    if (uVar9 == 2) {
      fVar13 = *pfVar5;
      if (fVar13 <= pfVar2[-1]) {
        return;
      }
      *pfVar5 = pfVar2[-1];
      pfVar2[-1] = fVar13;
      return;
    }
    if ((long)uVar9 < 8) {
      while (pfVar7 = pfVar5, pfVar2 + -1 != pfVar7) {
        pfVar5 = pfVar7 + 1;
        if ((pfVar2 != pfVar7) && (pfVar5 != pfVar2)) {
          fVar15 = *pfVar7;
          pfVar11 = pfVar7;
          pfVar8 = pfVar5;
          fVar13 = fVar15;
          do {
            pfVar10 = pfVar8 + 1;
            pfVar1 = pfVar8;
            fVar12 = *pfVar8;
            if (fVar13 <= *pfVar8) {
              pfVar1 = pfVar11;
              fVar12 = fVar13;
            }
            fVar13 = fVar12;
            pfVar11 = pfVar1;
            pfVar8 = pfVar10;
          } while (pfVar10 != pfVar2);
          if (pfVar1 != pfVar7) {
            *pfVar7 = *pfVar1;
            *pfVar1 = fVar15;
          }
        }
      }
      return;
    }
    pfVar7 = pfVar5 + ((ulong)((long)pfVar2 - (long)pfVar5) >> 3);
    pfVar11 = pfVar2 + -1;
    fVar12 = *pfVar11;
    fVar14 = *pfVar7;
    fVar15 = fVar14;
    fVar13 = fVar12;
    if (fVar14 < fVar12) {
      fVar15 = fVar12;
      fVar13 = fVar14;
    }
    *pfVar11 = fVar15;
    *pfVar7 = fVar13;
    fVar16 = *pfVar11;
    fVar17 = *pfVar5;
    fVar15 = fVar16;
    fVar13 = fVar17;
    if (fVar16 < fVar17) {
      fVar15 = fVar17;
      fVar13 = fVar16;
    }
    *pfVar11 = fVar15;
    fVar18 = *pfVar7;
    fVar15 = fVar18;
    if (fVar18 <= fVar13) {
      *pfVar5 = fVar18;
      fVar15 = fVar13;
    }
    uVar6 = (uint)(fVar17 <= fVar16);
    if (fVar18 <= fVar13) {
      uVar6 = 1;
    }
    *pfVar7 = fVar15;
    if (fVar12 <= fVar14) {
      uVar6 = 1;
    }
    fVar13 = *pfVar5;
    pfVar8 = pfVar11;
    if (fVar13 < fVar15) break;
    while (pfVar8 = pfVar8 + -1, pfVar8 != pfVar5) {
      if (*pfVar8 < fVar15) goto code_r0x00010a001e1c;
    }
    pfVar7 = pfVar5 + 1;
    pfVar8 = pfVar7;
    if (*pfVar11 <= fVar13) {
      while( true ) {
        if (pfVar8 == pfVar11) {
          return;
        }
        fVar15 = *pfVar8;
        if (fVar13 < fVar15) break;
        pfVar8 = pfVar8 + 1;
      }
      pfVar7 = pfVar8 + 1;
      *pfVar8 = *pfVar11;
      *pfVar11 = fVar15;
    }
    if (pfVar7 == pfVar11) {
      return;
    }
    while( true ) {
      pfVar8 = pfVar7;
      while (fVar13 = *pfVar8, fVar13 <= *pfVar5) {
        pfVar8 = pfVar8 + 1;
        if (pfVar8 == pfVar2) goto LAB_10a001fb4;
      }
      do {
        if (pfVar11 == pfVar5) goto LAB_10a001fb4;
        pfVar11 = pfVar11 + -1;
      } while (*pfVar5 < *pfVar11);
      if (pfVar11 <= pfVar8) break;
      pfVar7 = pfVar8 + 1;
      *pfVar8 = *pfVar11;
      *pfVar11 = fVar13;
    }
    pfVar5 = pfVar8;
    param_3 = pfVar2;
    if (param_2 < pfVar8) {
      return;
    }
  }
  goto LAB_10a001e2c;
code_r0x00010a001e1c:
  *pfVar5 = *pfVar8;
  *pfVar8 = fVar13;
  bVar4 = uVar6 != 0;
  uVar6 = 1;
  pfVar11 = pfVar8;
  if (bVar4) {
    uVar6 = 2;
  }
LAB_10a001e2c:
  pfVar8 = pfVar5 + 1;
  pfVar1 = pfVar7;
  pfVar10 = pfVar8;
  param_3 = pfVar8;
  if (pfVar8 < pfVar11) {
LAB_10a001e3c:
    pfVar7 = pfVar1;
    param_3 = pfVar10;
    while (fVar13 = *param_3, fVar13 < *pfVar7) {
      param_3 = param_3 + 1;
      if (param_3 == pfVar2) goto LAB_10a001fb4;
    }
    do {
      if (pfVar11 == pfVar5) {
LAB_10a001fb4:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a001fb8);
        (*pcVar3)();
      }
      pfVar11 = pfVar11 + -1;
    } while (*pfVar7 <= *pfVar11);
    if (param_3 < pfVar11) {
      pfVar10 = param_3 + 1;
      *param_3 = *pfVar11;
      *pfVar11 = fVar13;
      uVar6 = uVar6 + 1;
      pfVar1 = pfVar11;
      if (param_3 != pfVar7) {
        pfVar1 = pfVar7;
      }
      goto LAB_10a001e3c;
    }
  }
  if (param_3 != pfVar7) {
    fVar13 = *param_3;
    if (*pfVar7 < fVar13) {
      *param_3 = *pfVar7;
      *pfVar7 = fVar13;
      uVar6 = uVar6 + 1;
    }
  }
  if (param_3 == param_2) {
    return;
  }
  if (uVar6 == 0) {
    pfVar7 = param_3;
    if (param_2 < param_3) {
      do {
        if (pfVar8 == param_3) {
          return;
        }
        pfVar7 = pfVar8 + -1;
        fVar13 = *pfVar8;
        pfVar8 = pfVar8 + 1;
      } while (*pfVar7 <= fVar13);
    }
    else {
      do {
        pfVar11 = pfVar7 + 1;
        if (pfVar11 == pfVar2) {
          return;
        }
        fVar13 = *pfVar7;
        pfVar7 = pfVar11;
      } while (fVar13 <= *pfVar11);
    }
  }
  if (param_3 <= param_2) {
    pfVar5 = param_3 + 1;
    param_3 = pfVar2;
  }
  goto joined_r0x00010a001d44;
}



/* Entry: 10a001d0c; end: 10a001d3f;  */

void FUN_10a001d0c(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    __Znwm((long)param_2 << 2);
    return;
  }
  func_0x000109ffded8();
joined_r0x00010a001d44:
  while( true ) {
    pfVar2 = param_3;
    if (pfVar2 == param_2) {
      return;
    }
    uVar8 = (long)pfVar2 - (long)param_1 >> 2;
    if (uVar8 < 2) {
      return;
    }
    if (uVar8 == 3) {
      fVar11 = param_1[1];
      fVar12 = pfVar2[-1];
      fVar14 = fVar11;
      if (fVar11 < fVar12) {
        fVar14 = fVar12;
        fVar12 = fVar11;
      }
      pfVar2[-1] = fVar14;
      param_1[1] = fVar12;
      fVar11 = pfVar2[-1];
      fVar12 = *param_1;
      fVar14 = fVar11;
      if (fVar11 < fVar12) {
        fVar14 = fVar12;
        fVar12 = fVar11;
      }
      pfVar2[-1] = fVar14;
      fVar14 = param_1[1];
      if (fVar14 <= fVar12) {
        *param_1 = fVar14;
        fVar14 = fVar12;
      }
      param_1[1] = fVar14;
      return;
    }
    if (uVar8 == 2) {
      fVar12 = *param_1;
      if (fVar12 <= pfVar2[-1]) {
        return;
      }
      *param_1 = pfVar2[-1];
      pfVar2[-1] = fVar12;
      return;
    }
    if ((long)uVar8 < 8) {
      while (pfVar6 = param_1, pfVar2 + -1 != pfVar6) {
        param_1 = pfVar6 + 1;
        if ((pfVar2 != pfVar6) && (param_1 != pfVar2)) {
          fVar14 = *pfVar6;
          pfVar10 = pfVar6;
          pfVar7 = param_1;
          fVar12 = fVar14;
          do {
            pfVar9 = pfVar7 + 1;
            pfVar1 = pfVar7;
            fVar11 = *pfVar7;
            if (fVar12 <= *pfVar7) {
              pfVar1 = pfVar10;
              fVar11 = fVar12;
            }
            fVar12 = fVar11;
            pfVar10 = pfVar1;
            pfVar7 = pfVar9;
          } while (pfVar9 != pfVar2);
          if (pfVar1 != pfVar6) {
            *pfVar6 = *pfVar1;
            *pfVar1 = fVar14;
          }
        }
      }
      return;
    }
    pfVar6 = param_1 + ((ulong)((long)pfVar2 - (long)param_1) >> 3);
    pfVar10 = pfVar2 + -1;
    fVar11 = *pfVar10;
    fVar13 = *pfVar6;
    fVar14 = fVar13;
    fVar12 = fVar11;
    if (fVar13 < fVar11) {
      fVar14 = fVar11;
      fVar12 = fVar13;
    }
    *pfVar10 = fVar14;
    *pfVar6 = fVar12;
    fVar15 = *pfVar10;
    fVar16 = *param_1;
    fVar14 = fVar15;
    fVar12 = fVar16;
    if (fVar15 < fVar16) {
      fVar14 = fVar16;
      fVar12 = fVar15;
    }
    *pfVar10 = fVar14;
    fVar17 = *pfVar6;
    fVar14 = fVar17;
    if (fVar17 <= fVar12) {
      *param_1 = fVar17;
      fVar14 = fVar12;
    }
    uVar5 = (uint)(fVar16 <= fVar15);
    if (fVar17 <= fVar12) {
      uVar5 = 1;
    }
    *pfVar6 = fVar14;
    if (fVar11 <= fVar13) {
      uVar5 = 1;
    }
    fVar12 = *param_1;
    pfVar7 = pfVar10;
    if (fVar12 < fVar14) break;
    while (pfVar7 = pfVar7 + -1, pfVar7 != param_1) {
      if (*pfVar7 < fVar14) goto code_r0x00010a001e1c;
    }
    pfVar6 = param_1 + 1;
    pfVar7 = pfVar6;
    if (*pfVar10 <= fVar12) {
      while( true ) {
        if (pfVar7 == pfVar10) {
          return;
        }
        fVar14 = *pfVar7;
        if (fVar12 < fVar14) break;
        pfVar7 = pfVar7 + 1;
      }
      pfVar6 = pfVar7 + 1;
      *pfVar7 = *pfVar10;
      *pfVar10 = fVar14;
    }
    if (pfVar6 == pfVar10) {
      return;
    }
    while( true ) {
      pfVar7 = pfVar6;
      while (fVar12 = *pfVar7, fVar12 <= *param_1) {
        pfVar7 = pfVar7 + 1;
        if (pfVar7 == pfVar2) goto LAB_10a001fb4;
      }
      do {
        if (pfVar10 == param_1) goto LAB_10a001fb4;
        pfVar10 = pfVar10 + -1;
      } while (*param_1 < *pfVar10);
      if (pfVar10 <= pfVar7) break;
      pfVar6 = pfVar7 + 1;
      *pfVar7 = *pfVar10;
      *pfVar10 = fVar12;
    }
    param_1 = pfVar7;
    param_3 = pfVar2;
    if (param_2 < pfVar7) {
      return;
    }
  }
  goto LAB_10a001e2c;
code_r0x00010a001e1c:
  *param_1 = *pfVar7;
  *pfVar7 = fVar12;
  bVar4 = uVar5 != 0;
  uVar5 = 1;
  pfVar10 = pfVar7;
  if (bVar4) {
    uVar5 = 2;
  }
LAB_10a001e2c:
  pfVar7 = param_1 + 1;
  pfVar1 = pfVar6;
  pfVar9 = pfVar7;
  param_3 = pfVar7;
  if (pfVar7 < pfVar10) {
LAB_10a001e3c:
    pfVar6 = pfVar1;
    param_3 = pfVar9;
    while (fVar12 = *param_3, fVar12 < *pfVar6) {
      param_3 = param_3 + 1;
      if (param_3 == pfVar2) goto LAB_10a001fb4;
    }
    do {
      if (pfVar10 == param_1) {
LAB_10a001fb4:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a001fb8);
        (*pcVar3)();
      }
      pfVar10 = pfVar10 + -1;
    } while (*pfVar6 <= *pfVar10);
    if (param_3 < pfVar10) {
      pfVar9 = param_3 + 1;
      *param_3 = *pfVar10;
      *pfVar10 = fVar12;
      uVar5 = uVar5 + 1;
      pfVar1 = pfVar10;
      if (param_3 != pfVar6) {
        pfVar1 = pfVar6;
      }
      goto LAB_10a001e3c;
    }
  }
  if (param_3 != pfVar6) {
    fVar12 = *param_3;
    if (*pfVar6 < fVar12) {
      *param_3 = *pfVar6;
      *pfVar6 = fVar12;
      uVar5 = uVar5 + 1;
    }
  }
  if (param_3 == param_2) {
    return;
  }
  if (uVar5 == 0) {
    pfVar6 = param_3;
    if (param_2 < param_3) {
      do {
        if (pfVar7 == param_3) {
          return;
        }
        pfVar6 = pfVar7 + -1;
        fVar12 = *pfVar7;
        pfVar7 = pfVar7 + 1;
      } while (*pfVar6 <= fVar12);
    }
    else {
      do {
        pfVar10 = pfVar6 + 1;
        if (pfVar10 == pfVar2) {
          return;
        }
        fVar12 = *pfVar6;
        pfVar6 = pfVar10;
      } while (fVar12 <= *pfVar10);
    }
  }
  if (param_3 <= param_2) {
    param_1 = param_3 + 1;
    param_3 = pfVar2;
  }
  goto joined_r0x00010a001d44;
}



/* Entry: 10a001d40; end: 10a0020a7;  */

void FUN_10a001d40(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
joined_r0x00010a001d44:
  while( true ) {
    pfVar1 = param_3;
    if (pfVar1 == param_2) {
      return;
    }
    uVar7 = (long)pfVar1 - (long)param_1 >> 2;
    if (uVar7 < 2) {
      return;
    }
    if (uVar7 == 3) {
      fVar12 = param_1[1];
      fVar13 = pfVar1[-1];
      fVar15 = fVar12;
      if (fVar12 < fVar13) {
        fVar15 = fVar13;
        fVar13 = fVar12;
      }
      pfVar1[-1] = fVar15;
      param_1[1] = fVar13;
      fVar12 = pfVar1[-1];
      fVar13 = *param_1;
      fVar15 = fVar12;
      if (fVar12 < fVar13) {
        fVar15 = fVar13;
        fVar13 = fVar12;
      }
      pfVar1[-1] = fVar15;
      fVar15 = param_1[1];
      if (fVar15 <= fVar13) {
        *param_1 = fVar15;
        fVar15 = fVar13;
      }
      param_1[1] = fVar15;
      return;
    }
    if (uVar7 == 2) {
      fVar13 = *param_1;
      if (fVar13 <= pfVar1[-1]) {
        return;
      }
      *param_1 = pfVar1[-1];
      pfVar1[-1] = fVar13;
      return;
    }
    if ((long)uVar7 < 8) {
      while (pfVar5 = param_1, pfVar1 + -1 != pfVar5) {
        param_1 = pfVar5 + 1;
        if ((pfVar1 != pfVar5) && (param_1 != pfVar1)) {
          fVar15 = *pfVar5;
          pfVar10 = pfVar5;
          pfVar6 = param_1;
          fVar13 = fVar15;
          do {
            pfVar11 = pfVar6 + 1;
            pfVar9 = pfVar6;
            fVar12 = *pfVar6;
            if (fVar13 <= *pfVar6) {
              pfVar9 = pfVar10;
              fVar12 = fVar13;
            }
            fVar13 = fVar12;
            pfVar10 = pfVar9;
            pfVar6 = pfVar11;
          } while (pfVar11 != pfVar1);
          if (pfVar9 != pfVar5) {
            *pfVar5 = *pfVar9;
            *pfVar9 = fVar15;
          }
        }
      }
      return;
    }
    pfVar5 = param_1 + ((ulong)((long)pfVar1 - (long)param_1) >> 3);
    pfVar10 = pfVar1 + -1;
    fVar12 = *pfVar10;
    fVar14 = *pfVar5;
    fVar15 = fVar14;
    fVar13 = fVar12;
    if (fVar14 < fVar12) {
      fVar15 = fVar12;
      fVar13 = fVar14;
    }
    *pfVar10 = fVar15;
    *pfVar5 = fVar13;
    fVar16 = *pfVar10;
    fVar17 = *param_1;
    fVar15 = fVar16;
    fVar13 = fVar17;
    if (fVar16 < fVar17) {
      fVar15 = fVar17;
      fVar13 = fVar16;
    }
    *pfVar10 = fVar15;
    fVar18 = *pfVar5;
    fVar15 = fVar18;
    if (fVar18 <= fVar13) {
      *param_1 = fVar18;
      fVar15 = fVar13;
    }
    uVar4 = (uint)(fVar17 <= fVar16);
    if (fVar18 <= fVar13) {
      uVar4 = 1;
    }
    *pfVar5 = fVar15;
    if (fVar12 <= fVar14) {
      uVar4 = 1;
    }
    fVar13 = *param_1;
    pfVar6 = pfVar10;
    if (fVar13 < fVar15) break;
    while (pfVar6 = pfVar6 + -1, pfVar6 != param_1) {
      if (*pfVar6 < fVar15) goto code_r0x00010a001e1c;
    }
    pfVar5 = param_1 + 1;
    pfVar6 = pfVar5;
    if (*pfVar10 <= fVar13) {
      while( true ) {
        if (pfVar6 == pfVar10) {
          return;
        }
        fVar15 = *pfVar6;
        if (fVar13 < fVar15) break;
        pfVar6 = pfVar6 + 1;
      }
      pfVar5 = pfVar6 + 1;
      *pfVar6 = *pfVar10;
      *pfVar10 = fVar15;
    }
    if (pfVar5 == pfVar10) {
      return;
    }
    while( true ) {
      pfVar6 = pfVar5;
      while (fVar13 = *pfVar6, fVar13 <= *param_1) {
        pfVar6 = pfVar6 + 1;
        if (pfVar6 == pfVar1) goto LAB_10a001fb4;
      }
      do {
        if (pfVar10 == param_1) goto LAB_10a001fb4;
        pfVar10 = pfVar10 + -1;
      } while (*param_1 < *pfVar10);
      if (pfVar10 <= pfVar6) break;
      pfVar5 = pfVar6 + 1;
      *pfVar6 = *pfVar10;
      *pfVar10 = fVar13;
    }
    param_3 = pfVar1;
    param_1 = pfVar6;
    if (param_2 < pfVar6) {
      return;
    }
  }
  goto LAB_10a001e2c;
code_r0x00010a001e1c:
  *param_1 = *pfVar6;
  *pfVar6 = fVar13;
  bVar3 = uVar4 != 0;
  uVar4 = 1;
  pfVar10 = pfVar6;
  if (bVar3) {
    uVar4 = 2;
  }
LAB_10a001e2c:
  pfVar6 = param_1 + 1;
  pfVar11 = pfVar5;
  pfVar8 = pfVar6;
  pfVar9 = pfVar6;
  if (pfVar6 < pfVar10) {
LAB_10a001e3c:
    pfVar5 = pfVar11;
    pfVar9 = pfVar8;
    while (fVar13 = *pfVar9, fVar13 < *pfVar5) {
      pfVar9 = pfVar9 + 1;
      if (pfVar9 == pfVar1) goto LAB_10a001fb4;
    }
    do {
      if (pfVar10 == param_1) {
LAB_10a001fb4:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a001fb8);
        (*pcVar2)();
      }
      pfVar10 = pfVar10 + -1;
    } while (*pfVar5 <= *pfVar10);
    if (pfVar9 < pfVar10) {
      pfVar8 = pfVar9 + 1;
      *pfVar9 = *pfVar10;
      *pfVar10 = fVar13;
      uVar4 = uVar4 + 1;
      pfVar11 = pfVar10;
      if (pfVar9 != pfVar5) {
        pfVar11 = pfVar5;
      }
      goto LAB_10a001e3c;
    }
  }
  if (pfVar9 != pfVar5) {
    fVar13 = *pfVar9;
    if (*pfVar5 < fVar13) {
      *pfVar9 = *pfVar5;
      *pfVar5 = fVar13;
      uVar4 = uVar4 + 1;
    }
  }
  if (pfVar9 == param_2) {
    return;
  }
  if (uVar4 == 0) {
    pfVar5 = pfVar9;
    if (param_2 < pfVar9) {
      do {
        if (pfVar6 == pfVar9) {
          return;
        }
        pfVar5 = pfVar6 + -1;
        fVar13 = *pfVar6;
        pfVar6 = pfVar6 + 1;
      } while (*pfVar5 <= fVar13);
    }
    else {
      do {
        pfVar10 = pfVar5 + 1;
        if (pfVar10 == pfVar1) {
          return;
        }
        fVar13 = *pfVar5;
        pfVar5 = pfVar10;
      } while (fVar13 <= *pfVar10);
    }
  }
  param_3 = pfVar9;
  if (pfVar9 <= param_2) {
    param_3 = pfVar1;
    param_1 = pfVar9 + 1;
  }
  goto joined_r0x00010a001d44;
}



/* Entry: 10a0020a8; end: 10a002117;  */

void FUN_10a0020a8(long *param_1)

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
        lVar2 = lVar2 + -0x60;
        FUN_10a002118(lVar2);
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



/* Entry: 10a002118; end: 10a0021b7;  */

void FUN_10a002118(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 == param_1 + 0x50 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 10a0021b8; end: 10a0022cf;  */

long FUN_10a0021b8(long param_1)

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
  if (lVar5 != param_1 + 0xb0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10a0022d0; end: 10a00236f;  */

long * FUN_10a0022d0(long *param_1,undefined4 param_2)

{
  *param_1 = (long)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeC1Ev(param_1 + 1);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = (long)&PTR_DAT_11088d7b0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  FUN_10a002370(param_1);
  return param_1;
}



/* Entry: 10a002370; end: 10a00250f;  */

void FUN_10a002370(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar3 = (ulong)*(char *)(param_1 + 0x57);
  lVar4 = param_1 + 0x40;
  if ((long)uVar3 < 0) {
    uVar3 = *(ulong *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 0x40);
  }
  if ((*(uint *)(param_1 + 0x60) >> 3 & 1) != 0) {
    *(ulong *)(param_1 + 0x58) = lVar4 + uVar3;
    if ((long)uVar3 < 0) goto LAB_10a00247c;
    *(long *)(param_1 + 0x10) = lVar4;
    *(long *)(param_1 + 0x18) = lVar4;
    *(ulong *)(param_1 + 0x20) = lVar4 + uVar3;
  }
  if ((*(uint *)(param_1 + 0x60) >> 4 & 1) != 0) {
    *(ulong *)(param_1 + 0x58) = lVar4 + uVar3;
    if (*(char *)(param_1 + 0x57) < '\0') {
      lVar2 = (*(ulong *)(param_1 + 0x50) & 0x7fffffffffffffff) - 1;
    }
    else {
      lVar2 = 0x16;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (param_1 + 0x40,lVar2,0);
    lVar2 = (long)*(char *)(param_1 + 0x57);
    if ((lVar2 < 0) && (lVar2 = *(long *)(param_1 + 0x48), lVar2 < 0)) {
LAB_10a00247c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a002480);
      (*pcVar1)();
    }
    *(long *)(param_1 + 0x28) = lVar4;
    *(long *)(param_1 + 0x30) = lVar4;
    *(long *)(param_1 + 0x38) = lVar4 + lVar2;
    if ((*(byte *)(param_1 + 0x60) & 3) != 0) {
      if (uVar3 >> 0x1f != 0) {
        lVar2 = ((uVar3 - 0x80000000) / 0x7fffffff) * 0x80000000 - (uVar3 - 0x80000000) / 0x7fffffff
        ;
        lVar4 = lVar4 + 0x7fffffff + lVar2;
        uVar3 = (uVar3 - lVar2) - 0x7fffffff;
        *(long *)(param_1 + 0x30) = lVar4;
      }
      if (uVar3 != 0) {
        *(ulong *)(param_1 + 0x30) = lVar4 + uVar3;
      }
    }
  }
  return;
}



/* Entry: 10a002510; end: 10a002567;  */

undefined1  [16] FUN_10a002510(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  if ((*(uint *)(param_1 + 0x60) >> 4 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x60) >> 3 & 1) == 0) {
      return ZEXT816(0);
    }
    lVar3 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x20) - lVar3;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x30);
    uVar4 = *(ulong *)(param_1 + 0x58);
    if (*(ulong *)(param_1 + 0x58) < uVar5) {
      *(ulong *)(param_1 + 0x58) = uVar5;
      uVar4 = uVar5;
    }
    lVar3 = *(long *)(param_1 + 0x28);
    lVar1 = uVar4 - lVar3;
  }
  if (lVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a002568);
    (*pcVar2)();
  }
  auVar6._8_8_ = lVar1;
  auVar6._0_8_ = lVar3;
  return auVar6;
}



/* Entry: 10a002568; end: 10a0026cf;  */

long * FUN_10a002568(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  char acStack_68 [16];
  long lStack_58;
  
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(acStack_68,param_1);
  if (acStack_68[0] == '\x01') {
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    lVar5 = *(long *)(lVar1 + 0x28);
    uVar3 = *(uint *)(lVar1 + 8);
    iVar6 = *(int *)(lVar1 + 0x90);
    if (iVar6 == -1) {
      __ZNKSt3__18ios_base6getlocEv(&lStack_58,lVar1);
      plVar4 = &lStack_58;
      __ZNKSt3__16locale9use_facetERNS0_2idE(plVar4,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (**(code **)(*plVar4 + 0x38))();
      __ZNSt3__16localeD1Ev(&lStack_58);
      iVar6 = (int)plVar4;
      *(int *)(lVar1 + 0x90) = iVar6;
    }
    lVar2 = param_2 + param_3;
    if ((uVar3 & 0xb0) != 0x20) {
      lVar2 = param_2;
    }
    FUN_10a0026d0(lVar5,param_2,lVar2,param_2 + param_3,lVar1,(int)(char)iVar6);
    if (lVar5 == 0) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      __ZNSt3__18ios_base5clearEj(lVar1,*(uint *)(lVar1 + 0x20) | 5);
    }
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(acStack_68);
  return param_1;
}



/* Entry: 10a0026d0; end: 10a00280b;  */

long * FUN_10a0026d0(long *param_1,long param_2,long param_3,long param_4,long param_5,
                    undefined8 param_6)

{
  undefined8 ***pppuVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 **appuStack_68 [2];
  char cStack_51;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar3 = (long *)(*(long *)(param_5 + 0x18) - (param_4 - param_2));
  if (plVar3 == (long *)0x0 || *(long *)(param_5 + 0x18) < param_4 - param_2) {
    plVar3 = (long *)0x0;
  }
  plVar4 = (long *)(param_3 - param_2);
  if (((long)plVar4 < 1) ||
     (plVar2 = param_1, (**(code **)(*param_1 + 0x60))(param_1,param_2,plVar4), plVar2 == plVar4)) {
    if (0 < (long)plVar3) {
      FUN_10a00280c(appuStack_68,plVar3,param_6);
      pppuVar1 = (undefined8 ***)appuStack_68[0];
      if (-1 < cStack_51) {
        pppuVar1 = appuStack_68;
      }
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x60))(param_1,pppuVar1,plVar3);
      if (cStack_51 < '\0') {
        __ZdlPv(appuStack_68[0]);
      }
      if (plVar4 != plVar3) {
        return (long *)0x0;
      }
    }
    plVar3 = (long *)(param_4 - param_3);
    if (((long)plVar3 < 1) ||
       (plVar4 = param_1, (**(code **)(*param_1 + 0x60))(param_1,param_3,plVar3), plVar4 == plVar3))
    {
      *(undefined8 *)(param_5 + 0x18) = 0;
      return param_1;
    }
  }
  return (long *)0x0;
}



/* Entry: 10a00280c; end: 10a0028a7;  */

ulong * FUN_10a00280c(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  
  if ((ulong *)0x7ffffffffffffff7 < param_2) {
    func_0x000109ffde50();
    if (param_2 == (ulong *)0x0) {
      return param_1;
    }
    FUN_10a0028a8();
    FUN_10a0028a8(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return param_2;
  }
  if (param_2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_2;
    puVar2 = param_1;
    if (param_2 == (ulong *)0x0) goto LAB_10a002888;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)param_2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)param_2 | 7) + 1);
    }
    puVar2 = puVar1;
    __Znwm();
    param_1[1] = (ulong)param_2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar2;
  }
  _memset(puVar2,param_3,param_2);
LAB_10a002888:
  *(undefined1 *)((long)puVar2 + (long)param_2) = 0;
  return param_1;
}



/* Entry: 10a0028a8; end: 10a0028e7;  */

void FUN_10a0028a8(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a0028a8(param_1,*param_2);
    FUN_10a0028a8(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a0028e8; end: 10a0029bf;  */

long * FUN_10a0028e8(long param_1,uint param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)(param_1 + 8);
  plVar1 = (long *)*plVar2;
  do {
    plVar3 = plVar2;
    if (plVar1 == (long *)0x0) {
LAB_10a00294c:
      plVar1 = (long *)0x88;
      __Znwm();
      *(undefined4 *)(plVar1 + 4) = *param_3;
      *(undefined4 *)(plVar1 + 5) = 0x42ff0000;
      *(undefined8 *)((long)plVar1 + 0x34) = 0;
      *(undefined8 *)((long)plVar1 + 0x2c) = 0;
      *(undefined8 *)((long)plVar1 + 0x44) = 0;
      *(undefined8 *)((long)plVar1 + 0x3c) = 0;
      *(undefined8 *)((long)plVar1 + 0x54) = 0;
      *(undefined8 *)((long)plVar1 + 0x4c) = 0;
      plVar1[0xc] = 0;
      plVar1[0xb] = 0;
      plVar1[0xf] = 0;
      plVar1[0xd] = (long)(plVar1 + 6);
      plVar1[0xe] = (long)(plVar1 + 0xf);
      plVar1[0x10] = 0;
      FUN_109ffeeb4(param_1,plVar2,plVar3,plVar1);
      return plVar1;
    }
    while (plVar2 = plVar1, *(uint *)(plVar2 + 4) <= param_2) {
      if (param_2 <= *(uint *)(plVar2 + 4)) {
        return plVar2;
      }
      plVar1 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        plVar3 = plVar2 + 1;
        goto LAB_10a00294c;
      }
    }
    plVar1 = (long *)*plVar2;
  } while( true );
}



/* Entry: 10a0029c0; end: 10a002a8f;  */

void FUN_10a0029c0(undefined8 param_1)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a002a78);
  (*pcVar1)();
}



/* Entry: 10a002a90; end: 10a002a93;  */

void FUN_10a002a90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a002a94; end: 10a002b13;  */

undefined8 * FUN_10a002a94(undefined8 *param_1,undefined8 param_2)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  FUN_10a0ee71c(auStack_38,param_2);
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  *param_1 = &PTR_FUN_110b99e98;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  return param_1;
}



/* Entry: 10a002b14; end: 10a002b27;  */

void FUN_10a002b14(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a002b28; end: 10a002b2b;  */

void FUN_10a002b28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a002b2c; end: 10a002b3f;  */

void FUN_10a002b2c(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a002b40; end: 10a002bf7;  */

undefined1  [16] FUN_10a002b40(long param_1,uint *param_2,undefined4 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, *(uint *)((long)plVar3 + 0x1c) <= *param_2) {
        if (*param_2 <= *(uint *)((long)plVar3 + 0x1c)) {
          uVar2 = 0;
          goto LAB_10a002be0;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_10a002ba8;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_10a002ba8:
  plVar1 = (long *)0x20;
  __Znwm();
  *(undefined4 *)((long)plVar1 + 0x1c) = *param_3;
  FUN_10a002bf8(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_10a002be0:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 10a002bf8; end: 10a002c4b;  */

void FUN_10a002bf8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a002c4c; end: 10a002e6f;  */

uint * FUN_10a002c4c(uint *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uStack_80;
  int iStack_7c;
  uint *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  long lStack_40;
  undefined1 *puStack_38;
  undefined1 auStack_30 [16];
  
  if ((*param_2 & 0xfff) != 0x10) {
    if ((*param_2 & 7) != 0) {
      uStack_80 = 0x82010010;
      uStack_70 = 0;
      puStack_78 = param_1;
      func_0x000109a41858(0x3ff0000000000000,0,param_2,&uStack_80,0x10);
      return param_1;
    }
    func_0x000109a9ad84(&uStack_80,param_2,3,param_2[1],0);
    FUN_10a002e70(param_1,&uStack_80);
    if (lStack_48 != 0) {
      piVar1 = (int *)(lStack_48 + 0x14);
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
        func_0x000109a848d4(&uStack_80);
      }
    }
    lStack_48 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    if (0 < iStack_7c) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lStack_40 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < iStack_7c);
    }
    if (puStack_38 == auStack_30 || puStack_38 == (undefined1 *)0x0) {
      return param_1;
    }
    _free(*(undefined8 *)(puStack_38 + -8));
    return param_1;
  }
  if (param_1 == param_2) {
    return param_1;
  }
  if (*(long *)(param_2 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(long *)(param_1 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((int)param_1[1] < 1) {
    *param_1 = *param_2;
LAB_10a002dec:
    if ((int)param_2[1] < 3) {
      param_1[1] = param_2[1];
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      puVar6 = *(undefined8 **)(param_2 + 0x12);
      puVar8 = *(undefined8 **)(param_1 + 0x12);
      *puVar8 = *puVar6;
      puVar8[1] = puVar6[1];
      goto LAB_10a002e2c;
    }
  }
  else {
    lVar5 = 0;
    lVar7 = *(long *)(param_1 + 0x10);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[1]);
    *param_1 = *param_2;
    if ((int)param_1[1] < 3) goto LAB_10a002dec;
  }
  func_0x000109a84868(param_1,param_2);
LAB_10a002e2c:
  uVar9 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar9;
  return param_1;
}



/* Entry: 10a002e70; end: 10a003123;  */

undefined8 * FUN_10a002e70(undefined8 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 auStack_50 [2];
  
  if ((*param_2 & 0xfff) == 0x10) {
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
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
        func_0x000109a848d4(param_1);
      }
    }
    param_1[7] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    if (0 < *(int *)((long)param_1 + 4)) {
      lVar6 = 0;
      lVar7 = param_1[8];
      do {
        *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)((long)param_1 + 4));
    }
    puVar10 = param_2 + 1;
    uVar5 = *puVar10;
    uVar11 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 4);
    param_1[3] = *(undefined8 *)(param_2 + 6);
    param_1[2] = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 8);
    param_1[5] = *(undefined8 *)(param_2 + 10);
    param_1[4] = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 0xc);
    param_1[7] = *(undefined8 *)(param_2 + 0xe);
    param_1[6] = uVar11;
    puVar8 = (undefined8 *)param_1[9];
    puVar9 = param_1 + 10;
    if (puVar8 != puVar9) {
      if (puVar8 != (undefined8 *)0x0) {
        _free(puVar8[-1]);
        uVar5 = *puVar10;
      }
      param_1[8] = param_1 + 1;
      param_1[9] = puVar9;
      puVar8 = puVar9;
    }
    puVar9 = *(undefined8 **)(param_2 + 0x12);
    if ((int)uVar5 < 3) {
      *puVar8 = *puVar9;
      puVar8[1] = puVar9[1];
    }
    else {
      param_1[9] = puVar9;
      param_1[8] = *(undefined8 *)(param_2 + 0x10);
      *(uint **)(param_2 + 0x10) = param_2 + 2;
      *(uint **)(param_2 + 0x12) = param_2 + 0x14;
    }
    *param_2 = 0x42ff0000;
    param_2[3] = 0;
    param_2[4] = 0;
    puVar10[0] = 0;
    puVar10[1] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
  }
  else if ((*param_2 & 7) == 0) {
    func_0x000109a9ad84(&uStack_a0,param_2,3,param_2[1],0);
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
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
        func_0x000109a848d4(param_1);
      }
    }
    param_1[7] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    if (0 < *(int *)((long)param_1 + 4)) {
      lVar6 = 0;
      lVar7 = param_1[8];
      do {
        *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)((long)param_1 + 4));
    }
    param_1[1] = puStack_98;
    *param_1 = CONCAT44(iStack_9c,uStack_a0);
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    puVar8 = (undefined8 *)param_1[9];
    puVar9 = param_1 + 10;
    if (puVar8 != puVar9) {
      if (puVar8 != (undefined8 *)0x0) {
        _free(puVar8[-1]);
      }
      param_1[8] = param_1 + 1;
      param_1[9] = puVar9;
      puVar8 = puVar9;
    }
    if (iStack_9c < 3) {
      puVar9 = (undefined8 *)((ulong)&uStack_a0 | 4);
      *puVar8 = *puStack_58;
      puVar8[1] = puStack_58[1];
      uStack_a0 = 0x42ff0000;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      *(undefined8 *)((long)puVar9 + 0x34) = 0;
      *(undefined8 *)((long)puVar9 + 0x2c) = 0;
      if (puStack_58 != auStack_50) {
        _free(puStack_58[-1]);
      }
    }
    else {
      param_1[8] = uStack_60;
      param_1[9] = puStack_58;
    }
  }
  else {
    uStack_a0 = 0x82010010;
    uStack_90 = 0;
    puStack_98 = param_1;
    func_0x000109a41858(0x3ff0000000000000,0,param_2,&uStack_a0,0x10);
  }
  return param_1;
}



/* Entry: 10a003124; end: 10a00325f;  */

undefined4 * FUN_10a003124(undefined4 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *param_1 = 0x42ff0000;
  uStack_80 = 0x42ff0000;
  lStack_40 = (long)&uStack_7c + 4;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  lStack_48 = 0;
  uStack_4c = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  puStack_38 = &uStack_30;
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2,&uStack_80,0xffffffff);
  func_0x000109396208(param_1,&uStack_80);
  if (lStack_48 != 0) {
    piVar1 = (int *)(lStack_48 + 0x14);
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
      func_0x000109a848d4(&uStack_80);
    }
  }
  lStack_48 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  if (0 < (int)uStack_7c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_40 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_7c);
  }
  if (puStack_38 != &uStack_30 && puStack_38 != (undefined8 *)0x0) {
    _free(puStack_38[-1]);
  }
  return param_1;
}



/* Entry: 10a003260; end: 10a0033a3;  */

undefined4 * FUN_10a003260(undefined4 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *param_1 = 0x42ff0005;
  uStack_80 = 0x42ff0000;
  lStack_40 = (long)&uStack_7c + 4;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  lStack_48 = 0;
  uStack_4c = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  puStack_38 = &uStack_30;
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2,&uStack_80,0xffffffff);
  func_0x000109395f50(param_1,&uStack_80);
  if (lStack_48 != 0) {
    piVar1 = (int *)(lStack_48 + 0x14);
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
      func_0x000109a848d4(&uStack_80);
    }
  }
  lStack_48 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  if (0 < (int)uStack_7c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_40 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_7c);
  }
  if (puStack_38 != &uStack_30 && puStack_38 != (undefined8 *)0x0) {
    _free(puStack_38[-1]);
  }
  return param_1;
}



/* Entry: 10a0033a4; end: 10a0033eb;  */

void FUN_10a0033a4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a0033a4(param_1,*param_2);
    FUN_10a0033a4(param_1,param_2[1]);
    FUN_10a0033ec(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a0033ec; end: 10a00348f;  */

void FUN_10a0033ec(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x40) + 0x14);
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
      func_0x000109a848d4(param_1 + 8);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x48);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xc));
  }
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 == param_1 + 0x58 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 10a003490; end: 10a0036b3;  */

uint * FUN_10a003490(uint *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uStack_80;
  int iStack_7c;
  uint *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  long lStack_40;
  undefined1 *puStack_38;
  undefined1 auStack_30 [16];
  
  if ((*param_2 & 0xfff) != 0x18) {
    if ((*param_2 & 7) != 0) {
      uStack_80 = 0x82010018;
      uStack_70 = 0;
      puStack_78 = param_1;
      func_0x000109a41858(0x3ff0000000000000,0,param_2,&uStack_80,0x18);
      return param_1;
    }
    func_0x000109a9ad84(&uStack_80,param_2,4,param_2[1],0);
    FUN_10a0036b4(param_1,&uStack_80);
    if (lStack_48 != 0) {
      piVar1 = (int *)(lStack_48 + 0x14);
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
        func_0x000109a848d4(&uStack_80);
      }
    }
    lStack_48 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    if (0 < iStack_7c) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lStack_40 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < iStack_7c);
    }
    if (puStack_38 == auStack_30 || puStack_38 == (undefined1 *)0x0) {
      return param_1;
    }
    _free(*(undefined8 *)(puStack_38 + -8));
    return param_1;
  }
  if (param_1 == param_2) {
    return param_1;
  }
  if (*(long *)(param_2 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(long *)(param_1 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((int)param_1[1] < 1) {
    *param_1 = *param_2;
LAB_10a003630:
    if ((int)param_2[1] < 3) {
      param_1[1] = param_2[1];
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      puVar6 = *(undefined8 **)(param_2 + 0x12);
      puVar8 = *(undefined8 **)(param_1 + 0x12);
      *puVar8 = *puVar6;
      puVar8[1] = puVar6[1];
      goto LAB_10a003670;
    }
  }
  else {
    lVar5 = 0;
    lVar7 = *(long *)(param_1 + 0x10);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[1]);
    *param_1 = *param_2;
    if ((int)param_1[1] < 3) goto LAB_10a003630;
  }
  func_0x000109a84868(param_1,param_2);
LAB_10a003670:
  uVar9 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar9;
  return param_1;
}



/* Entry: 10a0036b4; end: 10a003967;  */

undefined8 * FUN_10a0036b4(undefined8 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 auStack_50 [2];
  
  if ((*param_2 & 0xfff) == 0x18) {
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
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
        func_0x000109a848d4(param_1);
      }
    }
    param_1[7] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    if (0 < *(int *)((long)param_1 + 4)) {
      lVar6 = 0;
      lVar7 = param_1[8];
      do {
        *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)((long)param_1 + 4));
    }
    puVar10 = param_2 + 1;
    uVar5 = *puVar10;
    uVar11 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 4);
    param_1[3] = *(undefined8 *)(param_2 + 6);
    param_1[2] = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 8);
    param_1[5] = *(undefined8 *)(param_2 + 10);
    param_1[4] = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 0xc);
    param_1[7] = *(undefined8 *)(param_2 + 0xe);
    param_1[6] = uVar11;
    puVar8 = (undefined8 *)param_1[9];
    puVar9 = param_1 + 10;
    if (puVar8 != puVar9) {
      if (puVar8 != (undefined8 *)0x0) {
        _free(puVar8[-1]);
        uVar5 = *puVar10;
      }
      param_1[8] = param_1 + 1;
      param_1[9] = puVar9;
      puVar8 = puVar9;
    }
    puVar9 = *(undefined8 **)(param_2 + 0x12);
    if ((int)uVar5 < 3) {
      *puVar8 = *puVar9;
      puVar8[1] = puVar9[1];
    }
    else {
      param_1[9] = puVar9;
      param_1[8] = *(undefined8 *)(param_2 + 0x10);
      *(uint **)(param_2 + 0x10) = param_2 + 2;
      *(uint **)(param_2 + 0x12) = param_2 + 0x14;
    }
    *param_2 = 0x42ff0000;
    param_2[3] = 0;
    param_2[4] = 0;
    puVar10[0] = 0;
    puVar10[1] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
  }
  else if ((*param_2 & 7) == 0) {
    func_0x000109a9ad84(&uStack_a0,param_2,4,param_2[1],0);
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
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
        func_0x000109a848d4(param_1);
      }
    }
    param_1[7] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    if (0 < *(int *)((long)param_1 + 4)) {
      lVar6 = 0;
      lVar7 = param_1[8];
      do {
        *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)((long)param_1 + 4));
    }
    param_1[1] = puStack_98;
    *param_1 = CONCAT44(iStack_9c,uStack_a0);
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    puVar8 = (undefined8 *)param_1[9];
    puVar9 = param_1 + 10;
    if (puVar8 != puVar9) {
      if (puVar8 != (undefined8 *)0x0) {
        _free(puVar8[-1]);
      }
      param_1[8] = param_1 + 1;
      param_1[9] = puVar9;
      puVar8 = puVar9;
    }
    if (iStack_9c < 3) {
      puVar9 = (undefined8 *)((ulong)&uStack_a0 | 4);
      *puVar8 = *puStack_58;
      puVar8[1] = puStack_58[1];
      uStack_a0 = 0x42ff0000;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      *(undefined8 *)((long)puVar9 + 0x34) = 0;
      *(undefined8 *)((long)puVar9 + 0x2c) = 0;
      if (puStack_58 != auStack_50) {
        _free(puStack_58[-1]);
      }
    }
    else {
      param_1[8] = uStack_60;
      param_1[9] = puStack_58;
    }
  }
  else {
    uStack_a0 = 0x82010018;
    uStack_90 = 0;
    puStack_98 = param_1;
    func_0x000109a41858(0x3ff0000000000000,0,param_2,&uStack_a0,0x18);
  }
  return param_1;
}



/* Entry: 10a003968; end: 10a003a63;  */

long * FUN_10a003968(long *param_1,uint param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = param_1 + 1;
  plVar2 = (long *)*plVar1;
  do {
    plVar3 = plVar1;
    if (plVar2 == (long *)0x0) {
LAB_10a0039cc:
      plVar2 = (long *)0x88;
      __Znwm();
      *(undefined4 *)(plVar2 + 4) = *param_3;
      *(undefined4 *)(plVar2 + 5) = 0x42ff0000;
      *(undefined8 *)((long)plVar2 + 0x34) = 0;
      *(undefined8 *)((long)plVar2 + 0x2c) = 0;
      *(undefined8 *)((long)plVar2 + 0x44) = 0;
      *(undefined8 *)((long)plVar2 + 0x3c) = 0;
      *(undefined8 *)((long)plVar2 + 0x54) = 0;
      *(undefined8 *)((long)plVar2 + 0x4c) = 0;
      plVar2[0xc] = 0;
      plVar2[0xb] = 0;
      plVar2[0xf] = 0;
      plVar2[0xd] = (long)(plVar2 + 6);
      plVar2[0xe] = (long)(plVar2 + 0xf);
      plVar2[0x10] = 0;
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar1;
      *plVar3 = (long)plVar2;
      plVar1 = plVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        plVar1 = (long *)*plVar3;
      }
      func_0x000107c2b058(param_1[1],plVar1);
      param_1[2] = param_1[2] + 1;
      return plVar2;
    }
    while (plVar1 = plVar2, *(uint *)(plVar1 + 4) <= param_2) {
      if (param_2 <= *(uint *)(plVar1 + 4)) {
        return plVar1;
      }
      plVar2 = (long *)plVar1[1];
      if ((long *)plVar1[1] == (long *)0x0) {
        plVar3 = plVar1 + 1;
        goto LAB_10a0039cc;
      }
    }
    plVar2 = (long *)*plVar1;
  } while( true );
}



/* Entry: 10a003a64; end: 10a003a8b;  */

void FUN_10a003a64(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a003a8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


