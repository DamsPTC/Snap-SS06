/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10abfef18; end: 10abff073;  */

uint * FUN_10abfef18(uint *param_1,uint *param_2,uint *param_3,ulong *param_4,undefined8 *param_5)

{
  short sVar1;
  long lVar2;
  code *pcVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint *puVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint auStack_6c [16];
  byte bStack_2c;
  long lStack_28;
  
  uVar4 = SUB84(param_4,0);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *param_4;
  if ((uVar7 < *(ulong *)(param_3 + 2)) &&
     (lVar5 = *(long *)(*(long *)param_3 + uVar7 * 0x10),
     *(long *)(lVar5 + 0x18) == *(long *)param_2)) {
    *param_4 = uVar7 + 1;
    sVar1 = (short)param_2[2];
    if (*(short *)(lVar5 + 0x20) != sVar1) {
      if (*(short *)(lVar5 + 0x20) == 3) {
        if (sVar1 == 6) {
          fVar11 = *(float *)(lVar5 + 0x24);
          if (fVar11 == (float)(int)fVar11) {
            auStack_6c[0] = (uint)fVar11;
            bStack_2c = 9;
            param_3 = auStack_6c;
            func_0x00010a3518a0(param_1);
            *(undefined1 *)(param_1 + 0x11) = 1;
            goto LAB_10abff048;
          }
        }
        else if ((sVar1 == 2) && (fVar11 = *(float *)(lVar5 + 0x24), fVar11 == (float)(int)fVar11))
        {
          auStack_6c[0] = (uint)fVar11;
          bStack_2c = 1;
          param_3 = auStack_6c;
          func_0x00010a3518a0(param_1);
          *(undefined1 *)(param_1 + 0x11) = 1;
LAB_10abff048:
          if (0x10 < (ulong)bStack_2c) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10abff070);
            (*pcVar3)();
          }
          param_2 = auStack_6c;
          (*(code *)(&PTR_FUN_110ba1f88)[bStack_2c])();
          goto LAB_10abfeffc;
        }
      }
      goto LAB_10abfeff4;
    }
    param_3 = (uint *)(lVar5 + 0x24);
    param_2 = param_1;
    func_0x00010a365274();
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  else {
LAB_10abfeff4:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
LAB_10abfeffc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_2;
  }
  ___stack_chk_fail();
  puVar9 = (uint *)0x0;
  switch(uVar4) {
  case 1:
    puVar9 = (uint *)(ulong)*param_3;
    puVar10 = (uint *)((long)puVar9 + 1);
    lVar5 = *(long *)param_2;
    if ((uint *)(*(long *)(param_2 + 2) - lVar5) <= puVar9) {
      func_0x0001092bf294(param_2,(long)puVar10 - (*(long *)(param_2 + 2) - lVar5));
      lVar5 = *(long *)param_2;
    }
    *(undefined1 *)(lVar5 + (long)puVar9) = *(undefined1 *)param_5;
    break;
  case 2:
  case 3:
  case 6:
    puVar9 = (uint *)(ulong)*param_3;
    puVar10 = puVar9 + 1;
    lVar5 = *(long *)param_2;
    lVar2 = (long)puVar10 - (*(long *)(param_2 + 2) - lVar5);
    if ((uint *)(*(long *)(param_2 + 2) - lVar5) <= puVar10 && lVar2 != 0) {
      func_0x0001092bf294(param_2,lVar2);
      lVar5 = *(long *)param_2;
    }
    *(undefined4 *)(lVar5 + (long)puVar9) = *(undefined4 *)param_5;
    break;
  default:
    goto LAB_10abff230;
  case 7:
  case 0x1f:
  case 0x24:
    puVar9 = (uint *)(ulong)*param_3;
    puVar10 = puVar9 + 2;
    lVar5 = *(long *)param_2;
    lVar2 = (long)puVar10 - (*(long *)(param_2 + 2) - lVar5);
    if ((uint *)(*(long *)(param_2 + 2) - lVar5) <= puVar10 && lVar2 != 0) {
      func_0x0001092bf294(param_2,lVar2);
      lVar5 = *(long *)param_2;
    }
    *(undefined8 *)(lVar5 + (long)puVar9) = *param_5;
    break;
  case 8:
  case 0x22:
  case 0x25:
    puVar9 = (uint *)(ulong)*param_3;
    puVar10 = puVar9 + 3;
    lVar5 = *(long *)param_2;
    lVar2 = (long)puVar10 - (*(long *)(param_2 + 2) - lVar5);
    if ((uint *)(*(long *)(param_2 + 2) - lVar5) <= puVar10 && lVar2 != 0) {
      func_0x0001092bf294(param_2,lVar2);
      lVar5 = *(long *)param_2;
    }
    uVar8 = *param_5;
    *(undefined4 *)((undefined8 *)(lVar5 + (long)puVar9) + 1) = *(undefined4 *)(param_5 + 1);
    *(undefined8 *)(lVar5 + (long)puVar9) = uVar8;
    break;
  case 9:
  case 0x16:
  case 0x23:
  case 0x26:
    puVar9 = (uint *)(ulong)*param_3;
    puVar10 = puVar9 + 4;
    lVar5 = *(long *)param_2;
    lVar2 = (long)puVar10 - (*(long *)(param_2 + 2) - lVar5);
    if ((uint *)(*(long *)(param_2 + 2) - lVar5) <= puVar10 && lVar2 != 0) {
      func_0x0001092bf294(param_2,lVar2);
      lVar5 = *(long *)param_2;
    }
    uVar8 = *param_5;
    ((undefined8 *)(lVar5 + (long)puVar9))[1] = param_5[1];
    *(undefined8 *)(lVar5 + (long)puVar9) = uVar8;
    break;
  case 10:
    puVar9 = (uint *)(ulong)*param_3;
    puVar10 = puVar9 + 9;
    lVar5 = *(long *)param_2;
    lVar2 = (long)puVar10 - (*(long *)(param_2 + 2) - lVar5);
    if ((uint *)(*(long *)(param_2 + 2) - lVar5) <= puVar10 && lVar2 != 0) {
      func_0x0001092bf294(param_2,lVar2);
      lVar5 = *(long *)param_2;
    }
    puVar6 = (undefined8 *)(lVar5 + (long)puVar9);
    uVar12 = param_5[1];
    uVar8 = *param_5;
    uVar14 = param_5[3];
    uVar13 = param_5[2];
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_5 + 4);
    goto code_r0x00010abff228;
  case 0xb:
    puVar9 = (uint *)(ulong)*param_3;
    puVar10 = puVar9 + 0x10;
    lVar5 = *(long *)param_2;
    lVar2 = (long)puVar10 - (*(long *)(param_2 + 2) - lVar5);
    if ((uint *)(*(long *)(param_2 + 2) - lVar5) <= puVar10 && lVar2 != 0) {
      func_0x0001092bf294(param_2,lVar2);
      lVar5 = *(long *)param_2;
    }
    puVar6 = (undefined8 *)(lVar5 + (long)puVar9);
    uVar12 = param_5[1];
    uVar8 = *param_5;
    uVar14 = param_5[3];
    uVar13 = param_5[2];
    uVar15 = param_5[4];
    uVar17 = param_5[7];
    uVar16 = param_5[6];
    puVar6[5] = param_5[5];
    puVar6[4] = uVar15;
    puVar6[7] = uVar17;
    puVar6[6] = uVar16;
code_r0x00010abff228:
    puVar6[1] = uVar12;
    *puVar6 = uVar8;
    puVar6[3] = uVar14;
    puVar6[2] = uVar13;
  }
  *param_3 = (uint)puVar10;
LAB_10abff230:
  return puVar9;
}



/* Entry: 10abff074; end: 10abff247;  */

ulong FUN_10abff074(long *param_1,uint *param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar5 = 0;
  switch(param_3) {
  case 1:
    uVar5 = (ulong)*param_2;
    uVar6 = uVar5 + 1;
    lVar2 = *param_1;
    if ((ulong)(param_1[1] - lVar2) <= uVar5) {
      func_0x0001092bf294(param_1,uVar6 - (param_1[1] - lVar2));
      lVar2 = *param_1;
    }
    *(undefined1 *)(lVar2 + uVar5) = *(undefined1 *)param_4;
    break;
  case 2:
  case 3:
  case 6:
    uVar5 = (ulong)*param_2;
    uVar6 = uVar5 + 4;
    lVar2 = *param_1;
    lVar1 = uVar6 - (param_1[1] - lVar2);
    if ((ulong)(param_1[1] - lVar2) <= uVar6 && lVar1 != 0) {
      func_0x0001092bf294(param_1,lVar1);
      lVar2 = *param_1;
    }
    *(undefined4 *)(lVar2 + uVar5) = *(undefined4 *)param_4;
    break;
  default:
    goto LAB_10abff230;
  case 7:
  case 0x1f:
  case 0x24:
    uVar5 = (ulong)*param_2;
    uVar6 = uVar5 + 8;
    lVar2 = *param_1;
    lVar1 = uVar6 - (param_1[1] - lVar2);
    if ((ulong)(param_1[1] - lVar2) <= uVar6 && lVar1 != 0) {
      func_0x0001092bf294(param_1,lVar1);
      lVar2 = *param_1;
    }
    *(undefined8 *)(lVar2 + uVar5) = *param_4;
    break;
  case 8:
  case 0x22:
  case 0x25:
    uVar5 = (ulong)*param_2;
    uVar6 = uVar5 + 0xc;
    lVar2 = *param_1;
    lVar1 = uVar6 - (param_1[1] - lVar2);
    if ((ulong)(param_1[1] - lVar2) <= uVar6 && lVar1 != 0) {
      func_0x0001092bf294(param_1,lVar1);
      lVar2 = *param_1;
    }
    uVar4 = *param_4;
    *(undefined4 *)((undefined8 *)(lVar2 + uVar5) + 1) = *(undefined4 *)(param_4 + 1);
    *(undefined8 *)(lVar2 + uVar5) = uVar4;
    break;
  case 9:
  case 0x16:
  case 0x23:
  case 0x26:
    uVar5 = (ulong)*param_2;
    uVar6 = uVar5 + 0x10;
    lVar2 = *param_1;
    lVar1 = uVar6 - (param_1[1] - lVar2);
    if ((ulong)(param_1[1] - lVar2) <= uVar6 && lVar1 != 0) {
      func_0x0001092bf294(param_1,lVar1);
      lVar2 = *param_1;
    }
    uVar4 = *param_4;
    ((undefined8 *)(lVar2 + uVar5))[1] = param_4[1];
    *(undefined8 *)(lVar2 + uVar5) = uVar4;
    break;
  case 10:
    uVar5 = (ulong)*param_2;
    uVar6 = uVar5 + 0x24;
    lVar2 = *param_1;
    lVar1 = uVar6 - (param_1[1] - lVar2);
    if ((ulong)(param_1[1] - lVar2) <= uVar6 && lVar1 != 0) {
      func_0x0001092bf294(param_1,lVar1);
      lVar2 = *param_1;
    }
    puVar3 = (undefined8 *)(lVar2 + uVar5);
    uVar7 = param_4[1];
    uVar4 = *param_4;
    uVar9 = param_4[3];
    uVar8 = param_4[2];
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_4 + 4);
    goto code_r0x00010abff228;
  case 0xb:
    uVar5 = (ulong)*param_2;
    uVar6 = uVar5 + 0x40;
    lVar2 = *param_1;
    lVar1 = uVar6 - (param_1[1] - lVar2);
    if ((ulong)(param_1[1] - lVar2) <= uVar6 && lVar1 != 0) {
      func_0x0001092bf294(param_1,lVar1);
      lVar2 = *param_1;
    }
    puVar3 = (undefined8 *)(lVar2 + uVar5);
    uVar7 = param_4[1];
    uVar4 = *param_4;
    uVar9 = param_4[3];
    uVar8 = param_4[2];
    uVar10 = param_4[4];
    uVar12 = param_4[7];
    uVar11 = param_4[6];
    puVar3[5] = param_4[5];
    puVar3[4] = uVar10;
    puVar3[7] = uVar12;
    puVar3[6] = uVar11;
code_r0x00010abff228:
    puVar3[1] = uVar7;
    *puVar3 = uVar4;
    puVar3[3] = uVar9;
    puVar3[2] = uVar8;
  }
  *param_2 = (uint)uVar6;
LAB_10abff230:
  return uVar5;
}



/* Entry: 10abff248; end: 10abff26f;  */

undefined4 FUN_10abff248(int param_1)

{
  if (param_1 - 1U < 0x26) {
    return *(undefined4 *)(&UNK_10e5080e0 + ((ulong)(param_1 - 1U) & 0xffff) * 4);
  }
  return 0;
}



/* Entry: 10abff270; end: 10abff333;  */

void FUN_10abff270(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined4 uStack_7c;
  int iStack_78;
  undefined1 uStack_71;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar10 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  else {
    lVar9 = (long)puVar2 - *param_1;
    uVar1 = (lVar9 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10ac08b8c();
      __ZNSt3__15mutex4lockEv(param_1 + 8);
      lVar9 = param_1[4];
      lVar8 = param_1[5];
      if (lVar9 != lVar8) {
        uVar11 = 0;
        lVar5 = lVar9;
        do {
          uVar11 = *(int *)(lVar5 + 0x10) + uVar11;
          lVar5 = lVar5 + 0x38;
        } while (lVar5 != lVar8);
        do {
          if (*(int *)(lVar9 + 0x34) == 0) {
            uVar3 = uVar11 - *(int *)(lVar9 + 0x10);
            if (uVar3 < *(uint *)((long)param_1 + 0xc)) {
              *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar9 + 0x18);
              uStack_7c = 0;
              iStack_78 = *(int *)(lVar9 + 0x10);
              FUN_10abff270((undefined8 *)(lVar9 + 0x18),&uStack_7c);
              lVar8 = param_1[5];
              goto LAB_10abff3fc;
            }
            lVar5 = lVar9 + 0x38;
            FUN_10ac08bd4(&uStack_71,lVar5,lVar8,lVar9);
            lVar8 = param_1[5];
            while (lVar8 != lVar5) {
              lVar8 = lVar8 + -0x38;
              FUN_10a194820(lVar8);
            }
            param_1[5] = lVar5;
            uVar11 = uVar3;
          }
          else {
LAB_10abff3fc:
            lVar9 = lVar9 + 0x38;
            lVar5 = lVar8;
          }
          lVar8 = lVar5;
        } while (lVar9 != lVar5);
      }
      __ZNSt3__15mutex6unlockEv(param_1 + 8);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    plVar4 = param_1;
    FUN_10ac08ba0();
    puVar2 = (undefined8 *)((long)plVar4 + lVar9);
    puVar10 = puVar2 + 1;
    *puVar2 = *param_2;
    lVar8 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lVar9 = *param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar10;
    param_1[2] = (long)(plVar4 + uVar7);
    if (lVar9 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar10;
  return;
}



/* Entry: 10abff334; end: 10abff43f;  */

void FUN_10abff334(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 uStack_4c;
  int iStack_48;
  undefined1 uStack_41;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar3 != lVar4) {
    uVar5 = 0;
    lVar2 = lVar3;
    do {
      uVar5 = *(int *)(lVar2 + 0x10) + uVar5;
      lVar2 = lVar2 + 0x38;
    } while (lVar2 != lVar4);
    do {
      if (*(int *)(lVar3 + 0x34) == 0) {
        uVar1 = uVar5 - *(int *)(lVar3 + 0x10);
        if (uVar1 < *(uint *)(param_1 + 0xc)) {
          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x18);
          uStack_4c = 0;
          iStack_48 = *(int *)(lVar3 + 0x10);
          FUN_10abff270((undefined8 *)(lVar3 + 0x18),&uStack_4c);
          lVar4 = *(long *)(param_1 + 0x28);
          goto LAB_10abff3fc;
        }
        lVar2 = lVar3 + 0x38;
        FUN_10ac08bd4(&uStack_41,lVar2,lVar4,lVar3);
        lVar4 = *(long *)(param_1 + 0x28);
        while (lVar4 != lVar2) {
          lVar4 = lVar4 + -0x38;
          FUN_10a194820(lVar4);
        }
        *(long *)(param_1 + 0x28) = lVar2;
        uVar5 = uVar1;
      }
      else {
LAB_10abff3fc:
        lVar3 = lVar3 + 0x38;
        lVar2 = lVar4;
      }
      lVar4 = lVar2;
    } while (lVar3 != lVar2);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x40);
  return;
}



/* Entry: 10abff440; end: 10abff553;  */

int FUN_10abff440(long param_1)

{
  long lVar1;
  int iVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == *(long *)(param_1 + 0x28)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
      iVar2 = *(int *)(lVar1 + 0x10) + iVar2;
      lVar1 = lVar1 + 0x38;
    } while (lVar1 != *(long *)(param_1 + 0x28));
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x40);
  return iVar2;
}



/* Entry: 10abff554; end: 10abff5d7;  */

float FUN_10abff554(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 0x20);
  fVar4 = 0.0;
  if (lVar1 != *(long *)(param_1 + 0x28)) {
    uVar2 = 0;
    uVar3 = 0;
    do {
      uVar2 = *(int *)(lVar1 + 0x10) + uVar2;
      uVar3 = *(int *)(lVar1 + 0x30) + uVar3;
      lVar1 = lVar1 + 0x38;
    } while (lVar1 != *(long *)(param_1 + 0x28));
    if (uVar2 != 0) {
      fVar4 = 1.0 - (float)uVar3 / (float)uVar2;
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x40);
  return fVar4;
}



/* Entry: 10abff5d8; end: 10abff6df;  */

undefined *** FUN_10abff5d8(undefined ***param_1,undefined **param_2,undefined8 *param_3)

{
  undefined ***pppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuStack_58;
  undefined ***pppuStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_58 = &PTR_FUN_110c55828;
  param_1[1] = param_2;
  pppuStack_50 = param_1;
  pppuStack_40 = &ppuStack_58;
  FUN_10ac08f40(param_1 + 2,&ppuStack_58);
  param_1[6] = (undefined **)0x32aaaba7;
  param_1[8] = (undefined **)0x0;
  param_1[7] = (undefined **)0x0;
  param_1[10] = (undefined **)0x0;
  param_1[9] = (undefined **)0x0;
  param_1[0xc] = (undefined **)0x0;
  param_1[0xb] = (undefined **)0x0;
  param_1[0xd] = (undefined **)0x0;
  ppuVar4 = (undefined **)param_3[1];
  ppuVar3 = (undefined **)*param_3;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 2);
  param_1[0xf] = ppuVar4;
  param_1[0xe] = ppuVar3;
  param_1[0x16] = (undefined **)0x0;
  param_1[0x12] = (undefined **)0x0;
  param_1[0x11] = (undefined **)0x0;
  param_1[0x14] = (undefined **)0x0;
  param_1[0x13] = (undefined **)0x0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  pppuVar1 = pppuStack_40;
  if (pppuStack_40 == &ppuStack_58) {
    lVar2 = 0x20;
  }
  else {
    if (pppuStack_40 == (undefined ***)0x0) goto LAB_10abff690;
    lVar2 = 0x28;
  }
  (**(code **)((long)*pppuStack_40 + lVar2))();
LAB_10abff690:
  param_1[0x1d] = (undefined **)0x0;
  param_1[0x1c] = (undefined **)0x0;
  param_1[0x1b] = (undefined **)0x0;
  param_1[0x1a] = (undefined **)0x0;
  param_1[0x19] = (undefined **)0x0;
  param_1[0x18] = (undefined **)0x0;
  param_1[0x17] = (undefined **)0x0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10abff71c();
  FUN_10ac0fd20(pppuVar1 + 0x1a);
  FUN_10a157f54(pppuVar1 + 1);
  return pppuVar1;
}



/* Entry: 10abff6e0; end: 10abff71b;  */

long FUN_10abff6e0(long param_1)

{
  FUN_10abff71c(param_1,1);
  FUN_10ac0fd20(param_1 + 0xd0);
  FUN_10a157f54(param_1 + 8);
  return param_1;
}



/* Entry: 10abff71c; end: 10abff7ef;  */

void FUN_10abff71c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xb8);
  if (plVar1 != (long *)0x0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    FUN_10abff7f0(param_1,plVar1,*(undefined4 *)(param_1 + 0xcc));
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  return;
}



/* Entry: 10abff7f0; end: 10abff887;  */

void FUN_10abff7f0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined8 *puStack_28;
  
  puStack_28 = &uStack_38;
  param_1 = param_1 + 0xd0;
  uStack_38 = param_2;
  FUN_10ac0fd68(param_1,&uStack_38,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10abff888; end: 10abffa7b;  */

undefined8 * FUN_10abff888(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c54e00;
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  func_0x00010ac06254(param_1 + 4);
  func_0x00010ac062b0(param_1 + 1);
  return param_1;
}



/* Entry: 10abffa7c; end: 10abffa8b;  */

undefined8 FUN_10abffa7c(void)

{
  return 0;
}



/* Entry: 10abffa8c; end: 10abffbe3;  */

undefined8 * FUN_10abffa8c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c55308;
  func_0x00010ac08d34(param_1[0x1e]);
  *param_1 = &PTR_FUN_110c54ea0;
  lVar1 = 0xb0;
  do {
    func_0x00010ac062b0((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x68);
  FUN_10ac0630c(param_1 + 0xd);
  FUN_10ac0630c(param_1 + 10);
  puStack_28 = param_1 + 7;
  FUN_10a044868(&puStack_28);
  FUN_10a0617bc(param_1 + 4);
  func_0x00010ac0637c(param_1 + 1);
  return param_1;
}



/* Entry: 10abffbe4; end: 10abffbeb;  */

void FUN_10abffbe4(void)

{
  return;
}



/* Entry: 10abffbec; end: 10abffc57;  */

void FUN_10abffbec(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)param_1[1];
    plVar2 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        lVar1 = *plVar4;
        *plVar4 = 0;
        if (lVar1 != 0) {
          func_0x00010ac08db4();
        }
      } while (plVar4 != plVar3);
      plVar2 = (long *)*param_1;
    }
    param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar2);
    return;
  }
  return;
}



/* Entry: 10abffc58; end: 10abffc6b;  */

undefined8 * FUN_10abffc58(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar4 = (undefined8 *)&UNK_10f69b42f;
  FUN_109ffde64();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar4,*param_2,param_2[1]);
  }
  else {
    uVar7 = param_2[1];
    uVar6 = *param_2;
    puVar4[2] = param_2[2];
    puVar4[1] = uVar7;
    *puVar4 = uVar6;
  }
  puVar4[3] = param_2[3];
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    func_0x000107c3192c(puVar4 + 4,param_2[4],param_2[5]);
  }
  else {
    uVar7 = param_2[5];
    uVar6 = param_2[4];
    puVar4[6] = param_2[6];
    puVar4[5] = uVar7;
    puVar4[4] = uVar6;
  }
  puVar4[7] = param_2[7];
  lVar5 = param_2[9];
  uVar6 = param_2[8];
  puVar4[9] = param_2[9];
  puVar4[8] = uVar6;
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
  puVar4[10] = param_2[10];
  return puVar4;
}



/* Entry: 10abffc6c; end: 10abffd37;  */

undefined8 * FUN_10abffc6c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  param_1[3] = param_2[3];
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    func_0x000107c3192c(param_1 + 4,param_2[4],param_2[5]);
  }
  else {
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar6;
    param_1[4] = uVar5;
  }
  param_1[7] = param_2[7];
  lVar4 = param_2[9];
  uVar5 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
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
  param_1[10] = param_2[10];
  return param_1;
}



/* Entry: 10abffd38; end: 10abffda3;  */

undefined8 * FUN_10abffd38(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  uVar1 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  return param_1;
}



/* Entry: 10abffda4; end: 10abffdb7;  */

void FUN_10abffda4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&UNK_10f69b42f;
  FUN_109ffde64();
  FUN_10a7ad3c4(puVar1 + 4);
  if (-1 < *(char *)((long)puVar1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*puVar1);
  return;
}



/* Entry: 10abffdb8; end: 10abffe3f;  */

void FUN_10abffdb8(undefined8 *param_1)

{
  FUN_10a7ad3c4(param_1 + 4);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10abffe40; end: 10abffea7;  */

void FUN_10abffe40(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x30;
        FUN_10abffdb8(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10abffea8; end: 10abffecf;  */

undefined4 * FUN_10abffea8(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 *puStack_88;
  undefined4 *puStack_80;
  undefined4 *puStack_78;
  long lStack_70;
  long *plStack_68;
  
  FUN_109ffde64(&UNK_10f69b42f);
  plVar3 = (long *)&UNK_10f69b42f;
  FUN_109ffde64();
  lVar11 = plVar3[1] - *plVar3;
  uVar8 = (lVar11 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (uVar8 < 0x492492492492493) {
    lVar6 = plVar3[2] - *plVar3 >> 3;
    uVar9 = lVar6 * -0x2492492492492492;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x249249249249248 < (ulong)(lVar6 * 0x6db6db6db6db6db7)) {
      uVar9 = 0x492492492492492;
    }
    plStack_68 = plVar3;
    if (uVar9 < 0x492492492492493) {
      lVar6 = uVar9 * 0x38;
      __Znwm();
      puVar1 = (undefined4 *)(lVar6 + lVar11);
      lStack_70 = lVar6 + uVar9 * 0x38;
      *puVar1 = *param_2;
      uVar12 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(puVar1 + 2) = uVar12;
      *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_2 + 2) = 0;
      *(undefined8 *)(param_2 + 4) = 0;
      uVar12 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(puVar1 + 8) = uVar12;
      *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_2 + 6) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 10) = 0;
      *(undefined8 *)(param_2 + 0xc) = 0;
      puStack_78 = puVar1 + 0xe;
      puStack_88 = (undefined4 *)*plVar3;
      puVar2 = (undefined4 *)plVar3[1];
      puVar1 = (undefined4 *)((long)puVar1 + ((long)puStack_88 - (long)puVar2));
      puVar5 = puStack_88;
      puVar7 = puVar1;
      puVar10 = puStack_78;
      if ((long)puStack_88 - (long)puVar2 != 0) {
        do {
          *puVar7 = *puVar5;
          *(undefined8 *)(puVar7 + 4) = 0;
          *(undefined8 *)(puVar7 + 6) = 0;
          *(undefined8 *)(puVar7 + 2) = 0;
          uVar12 = *(undefined8 *)(puVar5 + 2);
          *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar5 + 4);
          *(undefined8 *)(puVar7 + 2) = uVar12;
          *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar5 + 6);
          *(undefined8 *)(puVar5 + 2) = 0;
          *(undefined8 *)(puVar5 + 4) = 0;
          *(undefined8 *)(puVar5 + 6) = 0;
          *(undefined8 *)(puVar7 + 8) = 0;
          *(undefined8 *)(puVar7 + 10) = 0;
          *(undefined8 *)(puVar7 + 0xc) = 0;
          uVar12 = *(undefined8 *)(puVar5 + 8);
          *(undefined8 *)(puVar7 + 10) = *(undefined8 *)(puVar5 + 10);
          *(undefined8 *)(puVar7 + 8) = uVar12;
          *(undefined8 *)(puVar7 + 0xc) = *(undefined8 *)(puVar5 + 0xc);
          *(undefined8 *)(puVar5 + 8) = 0;
          *(undefined8 *)(puVar5 + 10) = 0;
          *(undefined8 *)(puVar5 + 0xc) = 0;
          puVar5 = puVar5 + 0xe;
          puVar7 = puVar7 + 0xe;
        } while (puVar5 != puVar2);
        do {
          FUN_10ac000a0(puStack_88);
          puStack_88 = puStack_88 + 0xe;
        } while (puStack_88 != puVar2);
        puStack_88 = (undefined4 *)*plVar3;
        puVar10 = puStack_78;
      }
      *plVar3 = (long)puVar1;
      plVar3[1] = (long)puVar10;
      lVar11 = plVar3[2];
      plVar3[2] = lStack_70;
      puStack_80 = puStack_88;
      puStack_78 = puStack_88;
      lStack_70 = lVar11;
      func_0x00010ac000e4(&puStack_88);
      return puVar10;
    }
  }
  else {
    FUN_10ac0008c();
  }
  func_0x000109ffded8();
  puVar4 = &UNK_10f69b42f;
  FUN_109ffde64();
  if (*(long *)(puVar4 + 0x20) != 0) {
    *(long *)(puVar4 + 0x28) = *(long *)(puVar4 + 0x20);
    __ZdlPv();
  }
  puVar5 = *(undefined4 **)(puVar4 + 8);
  if (puVar5 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *(undefined4 **)(puVar4 + 0x10) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return puVar5;
}



/* Entry: 10abffed0; end: 10ac0008b;  */

undefined4 * FUN_10abffed0(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 *puStack_68;
  undefined4 *puStack_60;
  undefined4 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar10 = param_1[1] - *param_1;
  uVar7 = (lVar10 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (uVar7 < 0x492492492492493) {
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar5 * -0x2492492492492492;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0x249249249249248 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
      uVar8 = 0x492492492492492;
    }
    plStack_48 = param_1;
    if (uVar8 < 0x492492492492493) {
      lVar5 = uVar8 * 0x38;
      __Znwm();
      puVar1 = (undefined4 *)(lVar5 + lVar10);
      lStack_50 = lVar5 + uVar8 * 0x38;
      *puVar1 = *param_2;
      uVar11 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(puVar1 + 2) = uVar11;
      *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_2 + 2) = 0;
      *(undefined8 *)(param_2 + 4) = 0;
      uVar11 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(puVar1 + 8) = uVar11;
      *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_2 + 6) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 10) = 0;
      *(undefined8 *)(param_2 + 0xc) = 0;
      puStack_58 = puVar1 + 0xe;
      puStack_68 = (undefined4 *)*param_1;
      puVar2 = (undefined4 *)param_1[1];
      puVar1 = (undefined4 *)((long)puVar1 + ((long)puStack_68 - (long)puVar2));
      puVar4 = puStack_68;
      puVar6 = puVar1;
      puVar9 = puStack_58;
      if ((long)puStack_68 - (long)puVar2 != 0) {
        do {
          *puVar6 = *puVar4;
          *(undefined8 *)(puVar6 + 4) = 0;
          *(undefined8 *)(puVar6 + 6) = 0;
          *(undefined8 *)(puVar6 + 2) = 0;
          uVar11 = *(undefined8 *)(puVar4 + 2);
          *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar4 + 4);
          *(undefined8 *)(puVar6 + 2) = uVar11;
          *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar4 + 6);
          *(undefined8 *)(puVar4 + 2) = 0;
          *(undefined8 *)(puVar4 + 4) = 0;
          *(undefined8 *)(puVar4 + 6) = 0;
          *(undefined8 *)(puVar6 + 8) = 0;
          *(undefined8 *)(puVar6 + 10) = 0;
          *(undefined8 *)(puVar6 + 0xc) = 0;
          uVar11 = *(undefined8 *)(puVar4 + 8);
          *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(puVar4 + 10);
          *(undefined8 *)(puVar6 + 8) = uVar11;
          *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(puVar4 + 0xc);
          *(undefined8 *)(puVar4 + 8) = 0;
          *(undefined8 *)(puVar4 + 10) = 0;
          *(undefined8 *)(puVar4 + 0xc) = 0;
          puVar4 = puVar4 + 0xe;
          puVar6 = puVar6 + 0xe;
        } while (puVar4 != puVar2);
        do {
          FUN_10ac000a0(puStack_68);
          puStack_68 = puStack_68 + 0xe;
        } while (puStack_68 != puVar2);
        puStack_68 = (undefined4 *)*param_1;
        puVar9 = puStack_58;
      }
      *param_1 = (long)puVar1;
      param_1[1] = (long)puVar9;
      lVar10 = param_1[2];
      param_1[2] = lStack_50;
      puStack_60 = puStack_68;
      puStack_58 = puStack_68;
      lStack_50 = lVar10;
      func_0x00010ac000e4(&puStack_68);
      return puVar9;
    }
  }
  else {
    FUN_10ac0008c();
  }
  func_0x000109ffded8();
  puVar3 = &UNK_10f69b42f;
  FUN_109ffde64();
  if (*(long *)(puVar3 + 0x20) != 0) {
    *(long *)(puVar3 + 0x28) = *(long *)(puVar3 + 0x20);
    __ZdlPv();
  }
  puVar4 = *(undefined4 **)(puVar3 + 8);
  if (puVar4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *(undefined4 **)(puVar3 + 0x10) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return puVar4;
}



/* Entry: 10ac0008c; end: 10ac0009f;  */

void FUN_10ac0008c(void)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f69b42f;
  FUN_109ffde64();
  if (*(long *)(puVar1 + 0x20) != 0) {
    *(long *)(puVar1 + 0x28) = *(long *)(puVar1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 8) != 0) {
    *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ac000a0; end: 10ac0012f;  */

void FUN_10ac000a0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ac00130; end: 10ac001b3;  */

void FUN_10ac00130(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10ac001b4(param_1,param_4);
    lVar1 = param_1;
    FUN_10ac00200(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10ac001b4; end: 10ac001ff;  */

long * FUN_10ac001b4(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (param_2 < (long *)0xf83e0f83e0f83f) {
    plVar1 = param_1;
    FUN_10a193c28();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 0x21);
    return plVar1;
  }
  FUN_10a193c14();
  pplStack_78 = &plStack_60;
  pplStack_70 = &plStack_58;
  uStack_68 = 0;
  plStack_80 = param_1;
  plStack_60 = param_4;
  for (; plStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 0x21) {
    lVar3 = param_2[1];
    lVar2 = *param_2;
    *(short *)(param_4 + 2) = (short)param_2[2];
    param_4[1] = lVar3;
    *param_4 = lVar2;
    param_4[3] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    FUN_10ac00130();
    lVar2 = param_2[6];
    lVar4 = param_2[9];
    lVar3 = param_2[8];
    param_4[7] = param_2[7];
    param_4[6] = lVar2;
    param_4[9] = lVar4;
    param_4[8] = lVar3;
    lVar3 = param_2[0xb];
    lVar2 = param_2[10];
    lVar5 = param_2[0xd];
    lVar4 = param_2[0xc];
    lVar6 = param_2[0xe];
    lVar8 = param_2[0x11];
    lVar7 = param_2[0x10];
    param_4[0xf] = param_2[0xf];
    param_4[0xe] = lVar6;
    param_4[0x11] = lVar8;
    param_4[0x10] = lVar7;
    param_4[0xb] = lVar3;
    param_4[10] = lVar2;
    param_4[0xd] = lVar5;
    param_4[0xc] = lVar4;
    lVar3 = param_2[0x13];
    lVar2 = param_2[0x12];
    lVar5 = param_2[0x15];
    lVar4 = param_2[0x14];
    lVar6 = param_2[0x16];
    lVar8 = param_2[0x19];
    lVar7 = param_2[0x18];
    param_4[0x17] = param_2[0x17];
    param_4[0x16] = lVar6;
    param_4[0x19] = lVar8;
    param_4[0x18] = lVar7;
    param_4[0x13] = lVar3;
    param_4[0x12] = lVar2;
    param_4[0x15] = lVar5;
    param_4[0x14] = lVar4;
    lVar3 = param_2[0x1b];
    lVar2 = param_2[0x1a];
    lVar5 = param_2[0x1d];
    lVar4 = param_2[0x1c];
    lVar7 = param_2[0x1f];
    lVar6 = param_2[0x1e];
    *(int *)(param_4 + 0x20) = (int)param_2[0x20];
    param_4[0x1d] = lVar5;
    param_4[0x1c] = lVar4;
    param_4[0x1f] = lVar7;
    param_4[0x1e] = lVar6;
    param_4[0x1b] = lVar3;
    param_4[0x1a] = lVar2;
    param_4 = plStack_58 + 0x21;
  }
  uStack_68 = 1;
  FUN_10a193d78(&plStack_80);
  return param_4;
}



/* Entry: 10ac00200; end: 10ac00313;  */

undefined8 *
FUN_10ac00200(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x21) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    *(undefined2 *)(param_4 + 2) = *(undefined2 *)(param_2 + 2);
    param_4[1] = uVar2;
    *param_4 = uVar1;
    param_4[3] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    FUN_10ac00130();
    uVar1 = param_2[6];
    uVar3 = param_2[9];
    uVar2 = param_2[8];
    param_4[7] = param_2[7];
    param_4[6] = uVar1;
    param_4[9] = uVar3;
    param_4[8] = uVar2;
    uVar2 = param_2[0xb];
    uVar1 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    uVar5 = param_2[0xe];
    uVar7 = param_2[0x11];
    uVar6 = param_2[0x10];
    param_4[0xf] = param_2[0xf];
    param_4[0xe] = uVar5;
    param_4[0x11] = uVar7;
    param_4[0x10] = uVar6;
    param_4[0xb] = uVar2;
    param_4[10] = uVar1;
    param_4[0xd] = uVar4;
    param_4[0xc] = uVar3;
    uVar2 = param_2[0x13];
    uVar1 = param_2[0x12];
    uVar4 = param_2[0x15];
    uVar3 = param_2[0x14];
    uVar5 = param_2[0x16];
    uVar7 = param_2[0x19];
    uVar6 = param_2[0x18];
    param_4[0x17] = param_2[0x17];
    param_4[0x16] = uVar5;
    param_4[0x19] = uVar7;
    param_4[0x18] = uVar6;
    param_4[0x13] = uVar2;
    param_4[0x12] = uVar1;
    param_4[0x15] = uVar4;
    param_4[0x14] = uVar3;
    uVar2 = param_2[0x1b];
    uVar1 = param_2[0x1a];
    uVar4 = param_2[0x1d];
    uVar3 = param_2[0x1c];
    uVar6 = param_2[0x1f];
    uVar5 = param_2[0x1e];
    *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    param_4[0x1d] = uVar4;
    param_4[0x1c] = uVar3;
    param_4[0x1f] = uVar6;
    param_4[0x1e] = uVar5;
    param_4[0x1b] = uVar2;
    param_4[0x1a] = uVar1;
    param_4 = puStack_38 + 0x21;
  }
  uStack_48 = 1;
  FUN_10a193d78(&uStack_60);
  return param_4;
}



/* Entry: 10ac00314; end: 10ac0048f;  */

void FUN_10ac00314(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_48;
  
  plVar2 = param_1;
  if ((ulong)((param_1[2] - *param_1 >> 3) * 0xf83e0f83e0f83e1) < param_4) {
    plVar1 = param_1;
    FUN_10ac00490();
    if (0xf83e0f83e0f83e < param_4) {
      FUN_10a193c14();
      param_1[1] = param_4;
      __Unwind_Resume();
      pcStack_58 = FUN_10ac00490;
      lVar3 = *plVar1;
      if (lVar3 != 0) {
        lVar6 = lVar3;
        lVar4 = plVar1[1];
        uStack_80 = param_4;
        lStack_78 = param_2;
        uStack_70 = param_3;
        plStack_68 = param_1;
        puStack_60 = &stack0xfffffffffffffff0;
        if (plVar1[1] != lVar3) {
          do {
            lVar6 = lVar4 + -0x108;
            lStack_88 = lVar4 + -0xf0;
            FUN_10a1901f0(&lStack_88);
            lVar4 = lVar6;
          } while (lVar6 != lVar3);
          lVar6 = *plVar1;
        }
        plVar1[1] = lVar3;
        __ZdlPv(lVar6);
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
      }
      return;
    }
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar3 * 0x1f07c1f07c1f07c2;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0x7c1f07c1f07c1e < (ulong)(lVar3 * 0xf83e0f83e0f83e1)) {
      uVar5 = 0xf83e0f83e0f83e;
    }
    FUN_10ac001b4(param_1,uVar5);
    FUN_10ac00200(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar3 = param_1[1] - *param_1;
    if (param_4 <= (ulong)((lVar3 >> 3) * 0xf83e0f83e0f83e1)) {
      FUN_10ac00508(param_2,param_3);
      for (lVar3 = param_1[1]; lVar3 != param_2; lVar3 = lVar3 + -0x108) {
        lStack_48 = lVar3 + -0xf0;
        FUN_10a1901f0(&lStack_48);
      }
      param_1[1] = param_2;
      return;
    }
    FUN_10ac00508(param_2,param_2 + lVar3);
    FUN_10ac00200(param_1,param_2 + lVar3,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 10ac00490; end: 10ac00507;  */

void FUN_10ac00490(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    lVar1 = param_1[1];
    if (param_1[1] != lVar2) {
      do {
        lVar3 = lVar1 + -0x108;
        lStack_38 = lVar1 + -0xf0;
        FUN_10a1901f0(&lStack_38);
        lVar1 = lVar3;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10ac00508; end: 10ac005df;  */

long * FUN_10ac00508(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 != param_2) {
    plVar2 = param_1 + 4;
    do {
      lVar4 = plVar2[-3];
      lVar3 = plVar2[-4];
      *(short *)(param_3 + 2) = (short)plVar2[-2];
      param_3[1] = lVar4;
      *param_3 = lVar3;
      if (param_3 != plVar2 + -4) {
        FUN_10ac00314(param_3 + 3,plVar2[-1],*plVar2,(*plVar2 - plVar2[-1] >> 3) * 0xf83e0f83e0f83e1
                     );
      }
      lVar3 = plVar2[2];
      lVar5 = plVar2[5];
      lVar4 = plVar2[4];
      param_3[7] = plVar2[3];
      param_3[6] = lVar3;
      param_3[9] = lVar5;
      param_3[8] = lVar4;
      lVar4 = plVar2[7];
      lVar3 = plVar2[6];
      lVar6 = plVar2[9];
      lVar5 = plVar2[8];
      lVar7 = plVar2[10];
      lVar9 = plVar2[0xd];
      lVar8 = plVar2[0xc];
      param_3[0xf] = plVar2[0xb];
      param_3[0xe] = lVar7;
      param_3[0x11] = lVar9;
      param_3[0x10] = lVar8;
      param_3[0xb] = lVar4;
      param_3[10] = lVar3;
      param_3[0xd] = lVar6;
      param_3[0xc] = lVar5;
      lVar4 = plVar2[0xf];
      lVar3 = plVar2[0xe];
      lVar6 = plVar2[0x11];
      lVar5 = plVar2[0x10];
      lVar7 = plVar2[0x12];
      lVar9 = plVar2[0x15];
      lVar8 = plVar2[0x14];
      param_3[0x17] = plVar2[0x13];
      param_3[0x16] = lVar7;
      param_3[0x19] = lVar9;
      param_3[0x18] = lVar8;
      param_3[0x13] = lVar4;
      param_3[0x12] = lVar3;
      param_3[0x15] = lVar6;
      param_3[0x14] = lVar5;
      lVar4 = plVar2[0x17];
      lVar3 = plVar2[0x16];
      lVar6 = plVar2[0x19];
      lVar5 = plVar2[0x18];
      lVar8 = plVar2[0x1b];
      lVar7 = plVar2[0x1a];
      *(int *)(param_3 + 0x20) = (int)plVar2[0x1c];
      param_3[0x1d] = lVar6;
      param_3[0x1c] = lVar5;
      param_3[0x1f] = lVar8;
      param_3[0x1e] = lVar7;
      param_3[0x1b] = lVar4;
      param_3[0x1a] = lVar3;
      param_3 = param_3 + 0x21;
      plVar1 = plVar2 + 0x1d;
      plVar2 = plVar2 + 0x21;
    } while (plVar1 != param_2);
  }
  return param_3;
}



/* Entry: 10ac005e0; end: 10ac005f3;  */

void FUN_10ac005e0(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = (undefined8 *)&UNK_10f69b42f;
  FUN_109ffde64();
  plVar4 = (long *)*puVar1;
  if (plVar4 != (long *)0x0) {
    plVar5 = (long *)puVar1[1];
    plVar3 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar5 = plVar5 + -1;
        lVar2 = *plVar5;
        *plVar5 = 0;
        if (lVar2 != 0) {
          FUN_10ac08ffc();
        }
      } while (plVar5 != plVar4);
      plVar3 = (long *)*puVar1;
    }
    puVar1[1] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar3);
    return;
  }
  return;
}



/* Entry: 10ac005f4; end: 10ac0065f;  */

void FUN_10ac005f4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)param_1[1];
    plVar2 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        lVar1 = *plVar4;
        *plVar4 = 0;
        if (lVar1 != 0) {
          FUN_10ac08ffc();
        }
      } while (plVar4 != plVar3);
      plVar2 = (long *)*param_1;
    }
    param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar2);
    return;
  }
  return;
}



/* Entry: 10ac00660; end: 10ac00673;  */

undefined1  [16] FUN_10ac00660(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&UNK_10f69b42f;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x00010a1943a0();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10ac00674; end: 10ac006f3;  */

undefined1  [16] FUN_10ac00674(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a1943a0();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10ac006f4; end: 10ac00707;  */

long * FUN_10ac006f4(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)&UNK_10f69b42f;
  FUN_109ffde64();
  plVar2 = (long *)plVar1[0x11];
  plVar1[0x11] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)plVar1[0x10];
  plVar1[0x10] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)plVar1[0xf];
  plVar1[0xf] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)plVar1[0xe];
  plVar1[0xe] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)plVar1[0xd];
  plVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)plVar1[0xc];
  plVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)plVar1[0xb];
  plVar1[0xb] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)plVar1[10];
  plVar1[10] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)plVar1[9];
  plVar1[9] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (plVar1[6] != 0) {
    plVar1[7] = plVar1[6];
    __ZdlPv();
  }
  if (plVar1[3] != 0) {
    plVar1[4] = plVar1[3];
    __ZdlPv();
  }
  if (*plVar1 != 0) {
    plVar1[1] = *plVar1;
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10ac00708; end: 10ac0082f;  */

long * FUN_10ac00708(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[0x11];
  param_1[0x11] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0x10];
  param_1[0x10] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[10];
  param_1[10] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ac00830; end: 10ac008c3;  */

void FUN_10ac00830(long *param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  long *plVar2;
  
  if (param_4 != 0) {
    if (param_4 < 0) {
      FUN_10a5e4f14();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac008a8);
      (*pcVar1)();
    }
    plVar2 = param_1;
    FUN_10a5e4f28();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)plVar2 + param_4 * 2;
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(plVar2,param_2,param_3);
    }
    param_1[1] = (long)plVar2 + param_3;
  }
  return;
}



/* Entry: 10ac008c4; end: 10ac01c07;  */

/* WARNING: Possible PIC construction at 0x00010ac0211c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ac02120) */
/* WARNING: Removing unreachable block (ram,0x00010ac02208) */
/* WARNING: Removing unreachable block (ram,0x00010ac02230) */
/* WARNING: Removing unreachable block (ram,0x00010ac02258) */
/* WARNING: Removing unreachable block (ram,0x00010ac02154) */
/* WARNING: Removing unreachable block (ram,0x00010ac0225c) */
/* WARNING: Removing unreachable block (ram,0x00010ac02284) */
/* WARNING: Removing unreachable block (ram,0x00010ac022ac) */
/* WARNING: Removing unreachable block (ram,0x00010ac0218c) */
/* WARNING: Removing unreachable block (ram,0x00010ac022b0) */
/* WARNING: Removing unreachable block (ram,0x00010ac022d8) */
/* WARNING: Removing unreachable block (ram,0x00010ac02300) */
/* WARNING: Removing unreachable block (ram,0x00010ac021c4) */
/* WARNING: Removing unreachable block (ram,0x00010ac02304) */
/* WARNING: Removing unreachable block (ram,0x00010ac0232c) */
/* WARNING: Removing unreachable block (ram,0x00010ac021fc) */
/* WARNING: Removing unreachable block (ram,0x00010ac02354) */

void FUN_10ac008c4(undefined2 *param_1,undefined2 *param_2,long *param_3,long param_4,uint param_5)

{
  int iVar1;
  undefined2 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined2 *unaff_x19;
  long lVar11;
  undefined2 *puVar12;
  ulong uVar13;
  undefined2 *puVar14;
  undefined2 *unaff_x20;
  ulong uVar15;
  undefined2 *unaff_x21;
  undefined2 uVar16;
  undefined2 *unaff_x22;
  undefined2 *unaff_x23;
  long lVar17;
  undefined2 uVar18;
  undefined8 unaff_x24;
  long lVar19;
  undefined8 unaff_x25;
  long lVar20;
  long *unaff_x26;
  ulong uVar21;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined2 *puStack_78;
  
  puStack_78 = param_2;
LAB_10ac008f8:
  puVar14 = puStack_78 + -1;
  puVar7 = param_1;
LAB_10ac00918:
  param_1 = puVar7;
  uVar10 = (long)puStack_78 - (long)param_1 >> 1;
  if (uVar10 - 2 == 0 || (long)uVar10 < 2) {
    if (uVar10 < 2) {
      return;
    }
    if (uVar10 == 2) {
      uVar16 = puStack_78[-1];
      uVar2 = *param_1;
      lVar20 = *param_3;
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar16);
      iVar1 = *(int *)(lVar11 + 4);
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar2);
      if (*(int *)(lVar11 + 4) <= iVar1) {
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar16);
        iVar1 = *(int *)(lVar11 + 4);
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar2);
        if (iVar1 != *(int *)(lVar11 + 4)) {
          return;
        }
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar16);
        iVar1 = *(int *)(lVar11 + 8);
        lVar20 = lVar20 + 0x20;
        FUN_10abea338(lVar20,uVar2);
        if (*(int *)(lVar20 + 8) <= iVar1) {
          return;
        }
      }
      *param_1 = uVar16;
      puStack_78[-1] = uVar2;
      return;
    }
  }
  else {
    if (uVar10 == 3) {
      lVar20 = *param_3;
      puVar7 = param_1 + 1;
      uVar2 = *puVar7;
      uVar16 = *param_1;
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar2);
      iVar1 = *(int *)(lVar11 + 4);
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar16);
      if (iVar1 < *(int *)(lVar11 + 4)) {
LAB_10ac01c60:
        uVar18 = *puVar14;
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar18);
        iVar1 = *(int *)(lVar11 + 4);
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar2);
        if (*(int *)(lVar11 + 4) <= iVar1) {
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar18);
          iVar1 = *(int *)(lVar11 + 4);
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar2);
          if (iVar1 == *(int *)(lVar11 + 4)) {
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar18);
            iVar1 = *(int *)(lVar11 + 8);
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar2);
            if (iVar1 < *(int *)(lVar11 + 8)) goto LAB_10ac01d18;
          }
          *param_1 = uVar2;
          *puVar7 = uVar16;
          uVar18 = *puVar14;
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar18);
          iVar1 = *(int *)(lVar11 + 4);
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar16);
          param_1 = puVar7;
          if (*(int *)(lVar11 + 4) <= iVar1) {
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar18);
            iVar1 = *(int *)(lVar11 + 4);
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar16);
            if (iVar1 != *(int *)(lVar11 + 4)) {
              return;
            }
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar18);
            iVar1 = *(int *)(lVar11 + 8);
            lVar20 = lVar20 + 0x20;
            FUN_10abea338(lVar20,uVar16);
            if (*(int *)(lVar20 + 8) <= iVar1) {
              return;
            }
          }
        }
      }
      else {
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar2);
        iVar1 = *(int *)(lVar11 + 4);
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar16);
        if (iVar1 == *(int *)(lVar11 + 4)) {
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar2);
          iVar1 = *(int *)(lVar11 + 8);
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar16);
          if (iVar1 < *(int *)(lVar11 + 8)) goto LAB_10ac01c60;
        }
        uVar16 = *puVar14;
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar16);
        iVar1 = *(int *)(lVar11 + 4);
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar2);
        if (*(int *)(lVar11 + 4) <= iVar1) {
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar16);
          iVar1 = *(int *)(lVar11 + 4);
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar2);
          if (iVar1 != *(int *)(lVar11 + 4)) {
            return;
          }
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar16);
          iVar1 = *(int *)(lVar11 + 8);
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar2);
          if (*(int *)(lVar11 + 8) <= iVar1) {
            return;
          }
        }
        *puVar7 = uVar16;
        *puVar14 = uVar2;
        uVar18 = *puVar7;
        uVar16 = *param_1;
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar18);
        iVar1 = *(int *)(lVar11 + 4);
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar16);
        puVar14 = puVar7;
        if (*(int *)(lVar11 + 4) <= iVar1) {
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar18);
          iVar1 = *(int *)(lVar11 + 4);
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar16);
          if (iVar1 != *(int *)(lVar11 + 4)) {
            return;
          }
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar18);
          iVar1 = *(int *)(lVar11 + 8);
          lVar20 = lVar20 + 0x20;
          FUN_10abea338(lVar20,uVar16);
          if (*(int *)(lVar20 + 8) <= iVar1) {
            return;
          }
        }
      }
LAB_10ac01d18:
      *param_1 = uVar18;
      *puVar14 = uVar16;
      return;
    }
    puVar7 = puVar14;
    if (uVar10 == 4) {
SUB_10ac01ef0:
      puVar5 = param_1 + 2;
      puVar14 = param_1 + 1;
      *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined2 **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined2 **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined2 **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined2 **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined2 **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      FUN_10ac01c08();
      uVar2 = *puVar7;
      uVar16 = *puVar5;
      lVar20 = *param_3;
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar2);
      iVar1 = *(int *)(lVar11 + 4);
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar16);
      if (*(int *)(lVar11 + 4) <= iVar1) {
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar2);
        iVar1 = *(int *)(lVar11 + 4);
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar16);
        if (iVar1 != *(int *)(lVar11 + 4)) {
          return;
        }
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar2);
        iVar1 = *(int *)(lVar11 + 8);
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar16);
        if (*(int *)(lVar11 + 8) <= iVar1) {
          return;
        }
      }
      *puVar5 = uVar2;
      *puVar7 = uVar16;
      uVar2 = *puVar5;
      uVar16 = *puVar14;
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar2);
      iVar1 = *(int *)(lVar11 + 4);
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar16);
      if (*(int *)(lVar11 + 4) <= iVar1) {
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar2);
        iVar1 = *(int *)(lVar11 + 4);
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar16);
        if (iVar1 != *(int *)(lVar11 + 4)) {
          return;
        }
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar2);
        iVar1 = *(int *)(lVar11 + 8);
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar16);
        if (*(int *)(lVar11 + 8) <= iVar1) {
          return;
        }
      }
      *puVar14 = uVar2;
      *puVar5 = uVar16;
      uVar2 = *puVar14;
      uVar16 = *param_1;
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar2);
      iVar1 = *(int *)(lVar11 + 4);
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar16);
      if (*(int *)(lVar11 + 4) <= iVar1) {
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar2);
        iVar1 = *(int *)(lVar11 + 4);
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar16);
        if (iVar1 != *(int *)(lVar11 + 4)) {
          return;
        }
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar2);
        iVar1 = *(int *)(lVar11 + 8);
        lVar20 = lVar20 + 0x20;
        FUN_10abea338(lVar20,uVar16);
        if (*(int *)(lVar20 + 8) <= iVar1) {
          return;
        }
      }
      *param_1 = uVar2;
      *puVar14 = uVar16;
      return;
    }
    if (uVar10 == 5) {
      unaff_x19 = param_1 + 1;
      unaff_x21 = param_1 + 2;
      unaff_x22 = param_1 + 3;
      unaff_x29 = &stack0xfffffffffffffff0;
      unaff_x30 = 0x10ac02120;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
      puVar7 = unaff_x22;
      unaff_x20 = param_1;
      unaff_x23 = puVar14;
      unaff_x26 = param_3;
      goto SUB_10ac01ef0;
    }
  }
  if ((long)uVar10 < 0x18) {
    puVar14 = param_1 + 1;
    bVar4 = param_1 == puStack_78 || puVar14 == puStack_78;
    if ((param_5 & 1) != 0) {
      if (bVar4) {
        return;
      }
      lVar11 = 0;
      lVar20 = *param_3;
      puVar7 = param_1;
      goto LAB_10ac01338;
    }
    if (bVar4) {
      return;
    }
    lVar17 = *param_3;
    lVar19 = -2;
    lVar11 = 2;
    lVar20 = 0;
    puVar7 = param_1;
    goto LAB_10ac01aa4;
  }
  if (param_4 == 0) {
    if (param_1 == puStack_78) {
      return;
    }
    uVar8 = uVar10 - 2 >> 1;
    lVar11 = *param_3;
    uVar15 = uVar8;
    goto LAB_10ac014ac;
  }
  puVar7 = (undefined2 *)((long)param_1 + (uVar10 & 0xfffffffffffffffe));
  if (uVar10 < 0x81) {
    FUN_10ac01c08(puVar7,param_1,puVar14,*param_3);
  }
  else {
    FUN_10ac01c08(param_1,puVar7,puVar14,*param_3);
    FUN_10ac01c08(param_1 + 1,puVar7 + -1,puStack_78 + -2,*param_3);
    FUN_10ac01c08(param_1 + 2,puVar7 + 1,puStack_78 + -3,*param_3);
    FUN_10ac01c08(puVar7 + -1,puVar7,puVar7 + 1,*param_3);
    uVar2 = *param_1;
    *param_1 = *puVar7;
    *puVar7 = uVar2;
  }
  param_4 = param_4 + -1;
  uVar2 = *param_1;
  if ((param_5 & 1) == 0) {
    uVar16 = param_1[-1];
    lVar20 = *param_3;
    lVar11 = lVar20 + 0x20;
    FUN_10abea338(lVar11,uVar16);
    iVar1 = *(int *)(lVar11 + 4);
    lVar11 = lVar20 + 0x20;
    FUN_10abea338(lVar11,uVar2);
    if (*(int *)(lVar11 + 4) <= iVar1) {
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar16);
      iVar1 = *(int *)(lVar11 + 4);
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar2);
      if (iVar1 == *(int *)(lVar11 + 4)) {
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar16);
        iVar1 = *(int *)(lVar11 + 8);
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar2);
        if (iVar1 < *(int *)(lVar11 + 8)) goto LAB_10ac00a7c;
      }
      uVar16 = *puVar14;
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar2);
      iVar1 = *(int *)(lVar11 + 4);
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar16);
      puVar7 = param_1;
      if (iVar1 < *(int *)(lVar11 + 4)) {
LAB_10ac00e94:
        do {
          do {
            puVar7 = puVar7 + 1;
            if (puVar7 == puStack_78) goto LAB_10ac01c04;
            uVar16 = *puVar7;
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar2);
            iVar1 = *(int *)(lVar11 + 4);
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar16);
            if (iVar1 < *(int *)(lVar11 + 4)) goto LAB_10ac01008;
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar2);
            iVar1 = *(int *)(lVar11 + 4);
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar16);
          } while (iVar1 != *(int *)(lVar11 + 4));
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar2);
          iVar1 = *(int *)(lVar11 + 8);
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar16);
        } while (*(int *)(lVar11 + 8) <= iVar1);
      }
      else {
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar2);
        iVar1 = *(int *)(lVar11 + 4);
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar16);
        if (iVar1 == *(int *)(lVar11 + 4)) {
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar2);
          iVar1 = *(int *)(lVar11 + 8);
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar16);
          if (iVar1 < *(int *)(lVar11 + 8)) goto LAB_10ac00e94;
        }
        do {
          do {
            puVar7 = puVar7 + 1;
            if (puStack_78 <= puVar7) goto LAB_10ac01008;
            uVar16 = *puVar7;
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar2);
            iVar1 = *(int *)(lVar11 + 4);
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar16);
            if (iVar1 < *(int *)(lVar11 + 4)) goto LAB_10ac01008;
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar2);
            iVar1 = *(int *)(lVar11 + 4);
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar16);
          } while (iVar1 != *(int *)(lVar11 + 4));
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar2);
          iVar1 = *(int *)(lVar11 + 8);
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar16);
        } while (*(int *)(lVar11 + 8) <= iVar1);
      }
LAB_10ac01008:
      puVar5 = puStack_78;
      if (puVar7 < puStack_78) {
        puVar5 = puVar14;
        if (puStack_78 != param_1) {
          do {
            uVar16 = *puVar5;
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar2);
            iVar1 = *(int *)(lVar11 + 4);
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar16);
            if (*(int *)(lVar11 + 4) <= iVar1) {
              lVar11 = lVar20 + 0x20;
              FUN_10abea338(lVar11,uVar2);
              iVar1 = *(int *)(lVar11 + 4);
              lVar11 = lVar20 + 0x20;
              FUN_10abea338(lVar11,uVar16);
              if (iVar1 != *(int *)(lVar11 + 4)) goto LAB_10ac010b4;
              lVar11 = lVar20 + 0x20;
              FUN_10abea338(lVar11,uVar2);
              iVar1 = *(int *)(lVar11 + 8);
              lVar11 = lVar20 + 0x20;
              FUN_10abea338(lVar11,uVar16);
              if (*(int *)(lVar11 + 8) <= iVar1) goto LAB_10ac010b4;
            }
            bVar4 = puVar5 == param_1;
            puVar5 = puVar5 + -1;
            if (bVar4) break;
          } while( true );
        }
        goto LAB_10ac01c04;
      }
LAB_10ac010b4:
      if (puVar7 < puVar5) {
        uVar16 = *puVar7;
        uVar18 = *puVar5;
LAB_10ac010c8:
        *puVar7 = uVar18;
        *puVar5 = uVar16;
        do {
          do {
            puVar7 = puVar7 + 1;
            if (puVar7 == puStack_78) goto LAB_10ac01c04;
            uVar16 = *puVar7;
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar2);
            iVar1 = *(int *)(lVar11 + 4);
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar16);
            if (iVar1 < *(int *)(lVar11 + 4)) goto LAB_10ac01160;
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar2);
            iVar1 = *(int *)(lVar11 + 4);
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar16);
          } while (iVar1 != *(int *)(lVar11 + 4));
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar2);
          iVar1 = *(int *)(lVar11 + 8);
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar16);
        } while (*(int *)(lVar11 + 8) <= iVar1);
LAB_10ac01160:
        if (puVar5 != param_1) {
          do {
            puVar5 = puVar5 + -1;
            uVar18 = *puVar5;
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar2);
            iVar1 = *(int *)(lVar11 + 4);
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar18);
            if (*(int *)(lVar11 + 4) <= iVar1) {
              lVar11 = lVar20 + 0x20;
              FUN_10abea338(lVar11,uVar2);
              iVar1 = *(int *)(lVar11 + 4);
              lVar11 = lVar20 + 0x20;
              FUN_10abea338(lVar11,uVar18);
              if (iVar1 != *(int *)(lVar11 + 4)) goto LAB_10ac011f8;
              lVar11 = lVar20 + 0x20;
              FUN_10abea338(lVar11,uVar2);
              iVar1 = *(int *)(lVar11 + 8);
              lVar11 = lVar20 + 0x20;
              FUN_10abea338(lVar11,uVar18);
              if (*(int *)(lVar11 + 8) <= iVar1) goto LAB_10ac011f8;
            }
            if (puVar5 == param_1) break;
          } while( true );
        }
        goto LAB_10ac01c04;
      }
LAB_10ac01200:
      puVar5 = puVar7 + -1;
      if (puVar5 != param_1) {
        *param_1 = *puVar5;
      }
      param_5 = 0;
      *puVar5 = uVar2;
      goto LAB_10ac00918;
    }
  }
LAB_10ac00a7c:
  if (param_1 + 1 != puStack_78) {
    lVar20 = *param_3;
    lVar11 = 2;
    do {
      uVar16 = *(undefined2 *)((long)param_1 + lVar11);
      lVar17 = lVar20 + 0x20;
      FUN_10abea338(lVar17,uVar16);
      iVar1 = *(int *)(lVar17 + 4);
      lVar17 = lVar20 + 0x20;
      FUN_10abea338(lVar17,uVar2);
      if (*(int *)(lVar17 + 4) <= iVar1) {
        lVar17 = lVar20 + 0x20;
        FUN_10abea338(lVar17,uVar16);
        iVar1 = *(int *)(lVar17 + 4);
        lVar17 = lVar20 + 0x20;
        FUN_10abea338(lVar17,uVar2);
        if (iVar1 != *(int *)(lVar17 + 4)) goto LAB_10ac00b24;
        lVar17 = lVar20 + 0x20;
        FUN_10abea338(lVar17,uVar16);
        iVar1 = *(int *)(lVar17 + 8);
        lVar17 = lVar20 + 0x20;
        FUN_10abea338(lVar17,uVar2);
        if (*(int *)(lVar17 + 8) <= iVar1) goto LAB_10ac00b24;
      }
      lVar11 = lVar11 + 2;
      if ((undefined2 *)((long)param_1 + lVar11) == puStack_78) break;
    } while( true );
  }
  goto LAB_10ac01c04;
LAB_10ac01aa4:
  lVar9 = lVar11;
  uVar16 = *(undefined2 *)((long)param_1 + lVar20);
  uVar2 = *puVar14;
  lVar11 = lVar17 + 0x20;
  FUN_10abea338(lVar11,uVar2);
  iVar1 = *(int *)(lVar11 + 4);
  lVar11 = lVar17 + 0x20;
  FUN_10abea338(lVar11,uVar16);
  if (iVar1 < *(int *)(lVar11 + 4)) {
LAB_10ac01ad8:
    *puVar14 = uVar16;
    puVar14 = puVar7;
    lVar11 = lVar19;
    do {
      uVar16 = puVar14[-1];
      lVar20 = lVar17 + 0x20;
      FUN_10abea338(lVar20,uVar2);
      iVar1 = *(int *)(lVar20 + 4);
      lVar20 = lVar17 + 0x20;
      FUN_10abea338(lVar20,uVar16);
      if (*(int *)(lVar20 + 4) <= iVar1) {
        lVar20 = lVar17 + 0x20;
        FUN_10abea338(lVar20,uVar2);
        iVar1 = *(int *)(lVar20 + 4);
        lVar20 = lVar17 + 0x20;
        FUN_10abea338(lVar20,uVar16);
        if (iVar1 != *(int *)(lVar20 + 4)) goto LAB_10ac01b70;
        lVar20 = lVar17 + 0x20;
        FUN_10abea338(lVar20,uVar2);
        iVar1 = *(int *)(lVar20 + 8);
        lVar20 = lVar17 + 0x20;
        FUN_10abea338(lVar20,uVar16);
        if (*(int *)(lVar20 + 8) <= iVar1) goto LAB_10ac01b70;
      }
      *puVar14 = uVar16;
      lVar11 = lVar11 + 2;
      puVar14 = puVar14 + -1;
      if (lVar11 == 0) {
LAB_10ac01c04:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac01c08);
        (*pcVar3)();
      }
    } while( true );
  }
  lVar11 = lVar17 + 0x20;
  FUN_10abea338(lVar11,uVar2);
  iVar1 = *(int *)(lVar11 + 4);
  lVar11 = lVar17 + 0x20;
  FUN_10abea338(lVar11,uVar16);
  if (iVar1 == *(int *)(lVar11 + 4)) {
    lVar11 = lVar17 + 0x20;
    FUN_10abea338(lVar11,uVar2);
    iVar1 = *(int *)(lVar11 + 8);
    lVar11 = lVar17 + 0x20;
    FUN_10abea338(lVar11,uVar16);
    if (iVar1 < *(int *)(lVar11 + 8)) goto LAB_10ac01ad8;
  }
  goto LAB_10ac01bc8;
LAB_10ac01b70:
  *puVar14 = uVar2;
LAB_10ac01bc8:
  lVar11 = lVar9 + 2;
  puVar14 = (undefined2 *)((long)param_1 + lVar11);
  puVar7 = puVar7 + 1;
  lVar19 = lVar19 + -2;
  lVar20 = lVar9;
  if (puVar14 == puStack_78) {
    return;
  }
  goto LAB_10ac01aa4;
LAB_10ac01338:
  uVar2 = puVar7[1];
  uVar16 = *puVar7;
  lVar17 = lVar20 + 0x20;
  FUN_10abea338(lVar17,uVar2);
  iVar1 = *(int *)(lVar17 + 4);
  lVar17 = lVar20 + 0x20;
  FUN_10abea338(lVar17,uVar16);
  if (iVar1 < *(int *)(lVar17 + 4)) {
LAB_10ac01370:
    puVar7[1] = uVar16;
    puVar5 = param_1;
    lVar17 = lVar11;
    if (puVar7 != param_1) {
      do {
        uVar16 = ((undefined2 *)((long)param_1 + lVar17))[-1];
        lVar19 = lVar20 + 0x20;
        FUN_10abea338(lVar19,uVar2);
        iVar1 = *(int *)(lVar19 + 4);
        lVar19 = lVar20 + 0x20;
        FUN_10abea338(lVar19,uVar16);
        if (*(int *)(lVar19 + 4) <= iVar1) {
          lVar19 = lVar20 + 0x20;
          FUN_10abea338(lVar19,uVar2);
          iVar1 = *(int *)(lVar19 + 4);
          lVar19 = lVar20 + 0x20;
          FUN_10abea338(lVar19,uVar16);
          puVar5 = puVar7;
          if (iVar1 != *(int *)(lVar19 + 4)) break;
          lVar19 = lVar20 + 0x20;
          FUN_10abea338(lVar19,uVar2);
          iVar1 = *(int *)(lVar19 + 8);
          lVar19 = lVar20 + 0x20;
          FUN_10abea338(lVar19,uVar16);
          if (*(int *)(lVar19 + 8) <= iVar1) {
            puVar5 = (undefined2 *)((long)param_1 + lVar17);
            break;
          }
        }
        puVar7 = puVar7 + -1;
        *(undefined2 *)((long)param_1 + lVar17) = uVar16;
        lVar17 = lVar17 + -2;
        puVar5 = param_1;
      } while (lVar17 != 0);
    }
    *puVar5 = uVar2;
  }
  else {
    lVar17 = lVar20 + 0x20;
    FUN_10abea338(lVar17,uVar2);
    iVar1 = *(int *)(lVar17 + 4);
    lVar17 = lVar20 + 0x20;
    FUN_10abea338(lVar17,uVar16);
    if (iVar1 == *(int *)(lVar17 + 4)) {
      lVar17 = lVar20 + 0x20;
      FUN_10abea338(lVar17,uVar2);
      iVar1 = *(int *)(lVar17 + 8);
      lVar17 = lVar20 + 0x20;
      FUN_10abea338(lVar17,uVar16);
      if (iVar1 < *(int *)(lVar17 + 8)) goto LAB_10ac01370;
    }
  }
  puVar5 = puVar14 + 1;
  lVar11 = lVar11 + 2;
  puVar7 = puVar14;
  puVar14 = puVar5;
  if (puVar5 == puStack_78) {
    return;
  }
  goto LAB_10ac01338;
LAB_10ac014ac:
  do {
    if ((long)uVar15 <= (long)uVar8) {
      uVar13 = uVar15 << 1 | 1;
      puVar14 = param_1 + uVar13;
      uVar21 = uVar15 * 2 + 2;
      if ((long)uVar21 < (long)uVar10) {
        uVar2 = *puVar14;
        uVar16 = puVar14[1];
        lVar20 = lVar11 + 0x20;
        FUN_10abea338(lVar20,uVar2);
        iVar1 = *(int *)(lVar20 + 4);
        lVar20 = lVar11 + 0x20;
        FUN_10abea338(lVar20,uVar16);
        if (iVar1 < *(int *)(lVar20 + 4)) {
LAB_10ac0150c:
          uVar13 = uVar21;
          puVar14 = puVar14 + 1;
        }
        else {
          lVar20 = lVar11 + 0x20;
          FUN_10abea338(lVar20,uVar2);
          iVar1 = *(int *)(lVar20 + 4);
          lVar20 = lVar11 + 0x20;
          FUN_10abea338(lVar20,uVar16);
          if (iVar1 == *(int *)(lVar20 + 4)) {
            lVar20 = lVar11 + 0x20;
            FUN_10abea338(lVar20,uVar2);
            iVar1 = *(int *)(lVar20 + 8);
            lVar20 = lVar11 + 0x20;
            FUN_10abea338(lVar20,uVar16);
            if (iVar1 < *(int *)(lVar20 + 8)) goto LAB_10ac0150c;
          }
        }
      }
      uVar2 = *puVar14;
      uVar16 = param_1[uVar15];
      lVar20 = lVar11 + 0x20;
      FUN_10abea338(lVar20,uVar2);
      iVar1 = *(int *)(lVar20 + 4);
      lVar20 = lVar11 + 0x20;
      FUN_10abea338(lVar20,uVar16);
      if (*(int *)(lVar20 + 4) <= iVar1) {
        lVar20 = lVar11 + 0x20;
        FUN_10abea338(lVar20,uVar2);
        iVar1 = *(int *)(lVar20 + 4);
        lVar20 = lVar11 + 0x20;
        FUN_10abea338(lVar20,uVar16);
        if (iVar1 == *(int *)(lVar20 + 4)) {
          lVar20 = lVar11 + 0x20;
          FUN_10abea338(lVar20,uVar2);
          iVar1 = *(int *)(lVar20 + 8);
          lVar20 = lVar11 + 0x20;
          FUN_10abea338(lVar20,uVar16);
          if (iVar1 < *(int *)(lVar20 + 8)) goto LAB_10ac01778;
        }
        param_1[uVar15] = uVar2;
        while ((long)uVar13 <= (long)uVar8) {
          lVar20 = uVar13 * 2;
          uVar13 = uVar13 << 1 | 1;
          puVar7 = param_1 + uVar13;
          uVar21 = lVar20 + 2;
          if ((long)uVar21 < (long)uVar10) {
            uVar2 = *puVar7;
            uVar18 = puVar7[1];
            lVar20 = lVar11 + 0x20;
            FUN_10abea338(lVar20,uVar2);
            iVar1 = *(int *)(lVar20 + 4);
            lVar20 = lVar11 + 0x20;
            FUN_10abea338(lVar20,uVar18);
            if (iVar1 < *(int *)(lVar20 + 4)) {
LAB_10ac0166c:
              uVar13 = uVar21;
              puVar7 = puVar7 + 1;
            }
            else {
              lVar20 = lVar11 + 0x20;
              FUN_10abea338(lVar20,uVar2);
              iVar1 = *(int *)(lVar20 + 4);
              lVar20 = lVar11 + 0x20;
              FUN_10abea338(lVar20,uVar18);
              if (iVar1 == *(int *)(lVar20 + 4)) {
                lVar20 = lVar11 + 0x20;
                FUN_10abea338(lVar20,uVar2);
                iVar1 = *(int *)(lVar20 + 8);
                lVar20 = lVar11 + 0x20;
                FUN_10abea338(lVar20,uVar18);
                if (iVar1 < *(int *)(lVar20 + 8)) goto LAB_10ac0166c;
              }
            }
          }
          uVar2 = *puVar7;
          lVar20 = lVar11 + 0x20;
          FUN_10abea338(lVar20,uVar2);
          iVar1 = *(int *)(lVar20 + 4);
          lVar20 = lVar11 + 0x20;
          FUN_10abea338(lVar20,uVar16);
          if (iVar1 < *(int *)(lVar20 + 4)) break;
          lVar20 = lVar11 + 0x20;
          FUN_10abea338(lVar20,uVar2);
          iVar1 = *(int *)(lVar20 + 4);
          lVar20 = lVar11 + 0x20;
          FUN_10abea338(lVar20,uVar16);
          if (iVar1 == *(int *)(lVar20 + 4)) {
            lVar20 = lVar11 + 0x20;
            FUN_10abea338(lVar20,uVar2);
            iVar1 = *(int *)(lVar20 + 8);
            lVar20 = lVar11 + 0x20;
            FUN_10abea338(lVar20,uVar16);
            if (iVar1 < *(int *)(lVar20 + 8)) break;
          }
          *puVar14 = uVar2;
          puVar14 = puVar7;
        }
        *puVar14 = uVar16;
      }
    }
LAB_10ac01778:
    bVar4 = uVar15 != 0;
    uVar15 = uVar15 - 1;
  } while (bVar4);
  lVar11 = *param_3;
  do {
    uVar2 = *param_1;
    lVar20 = *param_3;
    puVar14 = param_1;
    uVar15 = 0;
    do {
      puVar7 = puVar14 + uVar15 + 1;
      uVar21 = uVar15 << 1 | 1;
      uVar8 = uVar15 * 2 + 2;
      if ((long)uVar8 < (long)uVar10) {
        uVar16 = puVar14[uVar15 + 2];
        uVar18 = puVar14[uVar15 + 1];
        lVar17 = lVar20 + 0x20;
        FUN_10abea338(lVar17,uVar18);
        iVar1 = *(int *)(lVar17 + 4);
        lVar17 = lVar20 + 0x20;
        FUN_10abea338(lVar17,uVar16);
        if (iVar1 < *(int *)(lVar17 + 4)) {
LAB_10ac01810:
          puVar7 = puVar14 + uVar15 + 2;
          uVar21 = uVar8;
        }
        else {
          lVar17 = lVar20 + 0x20;
          FUN_10abea338(lVar17,uVar18);
          iVar1 = *(int *)(lVar17 + 4);
          lVar17 = lVar20 + 0x20;
          FUN_10abea338(lVar17,uVar16);
          if (iVar1 == *(int *)(lVar17 + 4)) {
            lVar17 = lVar20 + 0x20;
            FUN_10abea338(lVar17,uVar18);
            iVar1 = *(int *)(lVar17 + 8);
            lVar17 = lVar20 + 0x20;
            FUN_10abea338(lVar17,uVar16);
            if (iVar1 < *(int *)(lVar17 + 8)) goto LAB_10ac01810;
          }
        }
      }
      *puVar14 = *puVar7;
      puVar14 = puVar7;
      uVar15 = uVar21;
    } while ((long)uVar21 <= (long)(uVar10 - 2 >> 1));
    puStack_78 = puStack_78 + -1;
    if (puVar7 == puStack_78) {
      *puVar7 = uVar2;
    }
    else {
      *puVar7 = *puStack_78;
      *puStack_78 = uVar2;
      lVar20 = (long)puVar7 + (2 - (long)param_1) >> 1;
      uVar15 = lVar20 - 2;
      if (1 < lVar20) {
        uVar8 = uVar15 >> 1;
        uVar2 = param_1[uVar8];
        uVar16 = *puVar7;
        lVar20 = lVar11 + 0x20;
        FUN_10abea338(lVar20,uVar2);
        iVar1 = *(int *)(lVar20 + 4);
        lVar20 = lVar11 + 0x20;
        FUN_10abea338(lVar20,uVar16);
        if (iVar1 < *(int *)(lVar20 + 4)) {
LAB_10ac01904:
          *puVar7 = uVar2;
          puVar14 = param_1 + uVar8;
          while (1 < uVar15) {
            uVar15 = uVar8 - 1;
            uVar8 = uVar15 >> 1;
            uVar2 = param_1[uVar8];
            lVar20 = lVar11 + 0x20;
            FUN_10abea338(lVar20,uVar2);
            iVar1 = *(int *)(lVar20 + 4);
            lVar20 = lVar11 + 0x20;
            FUN_10abea338(lVar20,uVar16);
            if (*(int *)(lVar20 + 4) <= iVar1) {
              lVar20 = lVar11 + 0x20;
              FUN_10abea338(lVar20,uVar2);
              iVar1 = *(int *)(lVar20 + 4);
              lVar20 = lVar11 + 0x20;
              FUN_10abea338(lVar20,uVar16);
              if (iVar1 != *(int *)(lVar20 + 4)) break;
              lVar20 = lVar11 + 0x20;
              FUN_10abea338(lVar20,uVar2);
              iVar1 = *(int *)(lVar20 + 8);
              lVar20 = lVar11 + 0x20;
              FUN_10abea338(lVar20,uVar16);
              if (*(int *)(lVar20 + 8) <= iVar1) break;
            }
            *puVar14 = uVar2;
            puVar14 = param_1 + uVar8;
          }
          *puVar14 = uVar16;
        }
        else {
          lVar20 = lVar11 + 0x20;
          FUN_10abea338(lVar20,uVar2);
          iVar1 = *(int *)(lVar20 + 4);
          lVar20 = lVar11 + 0x20;
          FUN_10abea338(lVar20,uVar16);
          if (iVar1 == *(int *)(lVar20 + 4)) {
            lVar20 = lVar11 + 0x20;
            FUN_10abea338(lVar20,uVar2);
            iVar1 = *(int *)(lVar20 + 8);
            lVar20 = lVar11 + 0x20;
            FUN_10abea338(lVar20,uVar16);
            if (iVar1 < *(int *)(lVar20 + 8)) goto LAB_10ac01904;
          }
        }
      }
    }
    bVar4 = (long)uVar10 < 3;
    uVar10 = uVar10 - 1;
    if (bVar4) {
      return;
    }
  } while( true );
LAB_10ac00b24:
  puVar5 = (undefined2 *)((long)param_1 + lVar11);
  puVar12 = puVar14;
  puVar7 = puStack_78;
  if (lVar11 == 2) {
    puVar6 = puStack_78;
    if (puVar5 < puStack_78) {
      uVar18 = *puVar14;
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar18);
      iVar1 = *(int *)(lVar11 + 4);
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar2);
      puVar6 = puVar14;
      if (*(int *)(lVar11 + 4) <= iVar1) {
        do {
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar18);
          iVar1 = *(int *)(lVar11 + 4);
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar2);
          if (iVar1 == *(int *)(lVar11 + 4)) {
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar18);
            iVar1 = *(int *)(lVar11 + 8);
            lVar11 = lVar20 + 0x20;
            FUN_10abea338(lVar11,uVar2);
            if ((puVar6 <= puVar5) || (iVar1 < *(int *)(lVar11 + 8))) break;
          }
          else if (puVar6 <= puVar5) break;
          puVar6 = puVar6 + -1;
          uVar18 = *puVar6;
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar18);
          iVar1 = *(int *)(lVar11 + 4);
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar2);
        } while (*(int *)(lVar11 + 4) <= iVar1);
      }
    }
  }
  else {
    while( true ) {
      puVar6 = puVar12;
      if (puVar7 == param_1) goto LAB_10ac01c04;
      uVar18 = *puVar6;
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar18);
      iVar1 = *(int *)(lVar11 + 4);
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar2);
      if (iVar1 < *(int *)(lVar11 + 4)) break;
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar18);
      iVar1 = *(int *)(lVar11 + 4);
      lVar11 = lVar20 + 0x20;
      FUN_10abea338(lVar11,uVar2);
      if (iVar1 == *(int *)(lVar11 + 4)) {
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar18);
        iVar1 = *(int *)(lVar11 + 8);
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar2);
        if (iVar1 < *(int *)(lVar11 + 8)) break;
      }
      puVar12 = puVar6 + -1;
      puVar7 = puVar6;
    }
  }
  puVar7 = puVar5;
  if (puVar5 < puVar6) {
    uVar18 = *puVar6;
    puVar12 = puVar6;
    do {
      *puVar7 = uVar18;
      *puVar12 = uVar16;
      do {
        do {
          puVar7 = puVar7 + 1;
          if (puVar7 == puStack_78) goto LAB_10ac01c04;
          uVar16 = *puVar7;
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar16);
          iVar1 = *(int *)(lVar11 + 4);
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar2);
        } while (iVar1 < *(int *)(lVar11 + 4));
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar16);
        iVar1 = *(int *)(lVar11 + 4);
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar2);
        if (iVar1 != *(int *)(lVar11 + 4)) break;
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar16);
        iVar1 = *(int *)(lVar11 + 8);
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar2);
      } while (iVar1 < *(int *)(lVar11 + 8));
      do {
        do {
          if (puVar12 == param_1) goto LAB_10ac01c04;
          puVar12 = puVar12 + -1;
          uVar18 = *puVar12;
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar18);
          iVar1 = *(int *)(lVar11 + 4);
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar2);
          if (iVar1 < *(int *)(lVar11 + 4)) goto LAB_10ac00ddc;
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar18);
          iVar1 = *(int *)(lVar11 + 4);
          lVar11 = lVar20 + 0x20;
          FUN_10abea338(lVar11,uVar2);
        } while (iVar1 != *(int *)(lVar11 + 4));
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar18);
        iVar1 = *(int *)(lVar11 + 8);
        lVar11 = lVar20 + 0x20;
        FUN_10abea338(lVar11,uVar2);
      } while (*(int *)(lVar11 + 8) <= iVar1);
LAB_10ac00ddc:
    } while (puVar7 < puVar12);
  }
  puVar12 = puVar7 + -1;
  if (puVar12 != param_1) {
    *param_1 = *puVar12;
  }
  *puVar12 = uVar2;
  if (puVar6 <= puVar5) {
    puVar5 = param_1;
    func_0x00010ac02370(param_1,puVar12,param_3);
    puVar6 = puVar7;
    func_0x00010ac02370(puVar7,puStack_78,param_3);
    if ((int)puVar6 != 0) goto LAB_10ac01228;
    if (((ulong)puVar5 & 1) != 0) goto LAB_10ac00918;
  }
  FUN_10ac008c4(param_1,puVar12,param_3,param_4,param_5 & 1);
  param_5 = 0;
  goto LAB_10ac00918;
LAB_10ac01228:
  puStack_78 = puVar12;
  if (((ulong)puVar5 & 1) != 0) {
    return;
  }
  goto LAB_10ac008f8;
LAB_10ac011f8:
  if (puVar5 <= puVar7) goto LAB_10ac01200;
  goto LAB_10ac010c8;
}



/* Entry: 10ac01c08; end: 10ac020e3;  */

void FUN_10ac01c08(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,long param_4)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar2 = *param_2;
  uVar4 = *param_1;
  lVar3 = param_4 + 0x20;
  FUN_10abea338(lVar3,uVar2);
  iVar1 = *(int *)(lVar3 + 4);
  lVar3 = param_4 + 0x20;
  FUN_10abea338(lVar3,uVar4);
  if (iVar1 < *(int *)(lVar3 + 4)) {
LAB_10ac01c60:
    uVar5 = *param_3;
    lVar3 = param_4 + 0x20;
    FUN_10abea338(lVar3,uVar5);
    iVar1 = *(int *)(lVar3 + 4);
    lVar3 = param_4 + 0x20;
    FUN_10abea338(lVar3,uVar2);
    if (*(int *)(lVar3 + 4) <= iVar1) {
      lVar3 = param_4 + 0x20;
      FUN_10abea338(lVar3,uVar5);
      iVar1 = *(int *)(lVar3 + 4);
      lVar3 = param_4 + 0x20;
      FUN_10abea338(lVar3,uVar2);
      if (iVar1 == *(int *)(lVar3 + 4)) {
        lVar3 = param_4 + 0x20;
        FUN_10abea338(lVar3,uVar5);
        iVar1 = *(int *)(lVar3 + 8);
        lVar3 = param_4 + 0x20;
        FUN_10abea338(lVar3,uVar2);
        if (iVar1 < *(int *)(lVar3 + 8)) goto LAB_10ac01d18;
      }
      *param_1 = uVar2;
      *param_2 = uVar4;
      uVar5 = *param_3;
      lVar3 = param_4 + 0x20;
      FUN_10abea338(lVar3,uVar5);
      iVar1 = *(int *)(lVar3 + 4);
      lVar3 = param_4 + 0x20;
      FUN_10abea338(lVar3,uVar4);
      param_1 = param_2;
      if (*(int *)(lVar3 + 4) <= iVar1) {
        lVar3 = param_4 + 0x20;
        FUN_10abea338(lVar3,uVar5);
        iVar1 = *(int *)(lVar3 + 4);
        lVar3 = param_4 + 0x20;
        FUN_10abea338(lVar3,uVar4);
        if (iVar1 != *(int *)(lVar3 + 4)) {
          return;
        }
        lVar3 = param_4 + 0x20;
        FUN_10abea338(lVar3,uVar5);
        iVar1 = *(int *)(lVar3 + 8);
        param_4 = param_4 + 0x20;
        FUN_10abea338(param_4,uVar4);
        if (*(int *)(param_4 + 8) <= iVar1) {
          return;
        }
      }
    }
  }
  else {
    lVar3 = param_4 + 0x20;
    FUN_10abea338(lVar3,uVar2);
    iVar1 = *(int *)(lVar3 + 4);
    lVar3 = param_4 + 0x20;
    FUN_10abea338(lVar3,uVar4);
    if (iVar1 == *(int *)(lVar3 + 4)) {
      lVar3 = param_4 + 0x20;
      FUN_10abea338(lVar3,uVar2);
      iVar1 = *(int *)(lVar3 + 8);
      lVar3 = param_4 + 0x20;
      FUN_10abea338(lVar3,uVar4);
      if (iVar1 < *(int *)(lVar3 + 8)) goto LAB_10ac01c60;
    }
    uVar4 = *param_3;
    lVar3 = param_4 + 0x20;
    FUN_10abea338(lVar3,uVar4);
    iVar1 = *(int *)(lVar3 + 4);
    lVar3 = param_4 + 0x20;
    FUN_10abea338(lVar3,uVar2);
    if (*(int *)(lVar3 + 4) <= iVar1) {
      lVar3 = param_4 + 0x20;
      FUN_10abea338(lVar3,uVar4);
      iVar1 = *(int *)(lVar3 + 4);
      lVar3 = param_4 + 0x20;
      FUN_10abea338(lVar3,uVar2);
      if (iVar1 != *(int *)(lVar3 + 4)) {
        return;
      }
      lVar3 = param_4 + 0x20;
      FUN_10abea338(lVar3,uVar4);
      iVar1 = *(int *)(lVar3 + 8);
      lVar3 = param_4 + 0x20;
      FUN_10abea338(lVar3,uVar2);
      if (*(int *)(lVar3 + 8) <= iVar1) {
        return;
      }
    }
    *param_2 = uVar4;
    *param_3 = uVar2;
    uVar5 = *param_2;
    uVar4 = *param_1;
    lVar3 = param_4 + 0x20;
    FUN_10abea338(lVar3,uVar5);
    iVar1 = *(int *)(lVar3 + 4);
    lVar3 = param_4 + 0x20;
    FUN_10abea338(lVar3,uVar4);
    param_3 = param_2;
    if (*(int *)(lVar3 + 4) <= iVar1) {
      lVar3 = param_4 + 0x20;
      FUN_10abea338(lVar3,uVar5);
      iVar1 = *(int *)(lVar3 + 4);
      lVar3 = param_4 + 0x20;
      FUN_10abea338(lVar3,uVar4);
      if (iVar1 != *(int *)(lVar3 + 4)) {
        return;
      }
      lVar3 = param_4 + 0x20;
      FUN_10abea338(lVar3,uVar5);
      iVar1 = *(int *)(lVar3 + 8);
      param_4 = param_4 + 0x20;
      FUN_10abea338(param_4,uVar4);
      if (*(int *)(param_4 + 8) <= iVar1) {
        return;
      }
    }
  }
LAB_10ac01d18:
  *param_1 = uVar5;
  *param_3 = uVar4;
  return;
}



/* Entry: 10ac020e4; end: 10ac0267f;  */

void FUN_10ac020e4(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
                  undefined2 *param_5,long *param_6)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010ac01ef0();
  uVar2 = *param_5;
  uVar3 = *param_4;
  lVar5 = *param_6;
  lVar4 = lVar5 + 0x20;
  FUN_10abea338(lVar4,uVar2);
  iVar1 = *(int *)(lVar4 + 4);
  lVar4 = lVar5 + 0x20;
  FUN_10abea338(lVar4,uVar3);
  if (*(int *)(lVar4 + 4) <= iVar1) {
    lVar4 = lVar5 + 0x20;
    FUN_10abea338(lVar4,uVar2);
    iVar1 = *(int *)(lVar4 + 4);
    lVar4 = lVar5 + 0x20;
    FUN_10abea338(lVar4,uVar3);
    if (iVar1 != *(int *)(lVar4 + 4)) {
      return;
    }
    lVar4 = lVar5 + 0x20;
    FUN_10abea338(lVar4,uVar2);
    iVar1 = *(int *)(lVar4 + 8);
    lVar4 = lVar5 + 0x20;
    FUN_10abea338(lVar4,uVar3);
    if (*(int *)(lVar4 + 8) <= iVar1) {
      return;
    }
  }
  *param_4 = uVar2;
  *param_5 = uVar3;
  uVar2 = *param_4;
  uVar3 = *param_3;
  lVar4 = lVar5 + 0x20;
  FUN_10abea338(lVar4,uVar2);
  iVar1 = *(int *)(lVar4 + 4);
  lVar4 = lVar5 + 0x20;
  FUN_10abea338(lVar4,uVar3);
  if (*(int *)(lVar4 + 4) <= iVar1) {
    lVar4 = lVar5 + 0x20;
    FUN_10abea338(lVar4,uVar2);
    iVar1 = *(int *)(lVar4 + 4);
    lVar4 = lVar5 + 0x20;
    FUN_10abea338(lVar4,uVar3);
    if (iVar1 != *(int *)(lVar4 + 4)) {
      return;
    }
    lVar4 = lVar5 + 0x20;
    FUN_10abea338(lVar4,uVar2);
    iVar1 = *(int *)(lVar4 + 8);
    lVar4 = lVar5 + 0x20;
    FUN_10abea338(lVar4,uVar3);
    if (*(int *)(lVar4 + 8) <= iVar1) {
      return;
    }
  }
  *param_3 = uVar2;
  *param_4 = uVar3;
  uVar2 = *param_3;
  uVar3 = *param_2;
  lVar4 = lVar5 + 0x20;
  FUN_10abea338(lVar4,uVar2);
  iVar1 = *(int *)(lVar4 + 4);
  lVar4 = lVar5 + 0x20;
  FUN_10abea338(lVar4,uVar3);
  if (*(int *)(lVar4 + 4) <= iVar1) {
    lVar4 = lVar5 + 0x20;
    FUN_10abea338(lVar4,uVar2);
    iVar1 = *(int *)(lVar4 + 4);
    lVar4 = lVar5 + 0x20;
    FUN_10abea338(lVar4,uVar3);
    if (iVar1 != *(int *)(lVar4 + 4)) {
      return;
    }
    lVar4 = lVar5 + 0x20;
    FUN_10abea338(lVar4,uVar2);
    iVar1 = *(int *)(lVar4 + 8);
    lVar4 = lVar5 + 0x20;
    FUN_10abea338(lVar4,uVar3);
    if (*(int *)(lVar4 + 8) <= iVar1) {
      return;
    }
  }
  *param_2 = uVar2;
  *param_3 = uVar3;
  uVar2 = *param_2;
  uVar3 = *param_1;
  lVar4 = lVar5 + 0x20;
  FUN_10abea338(lVar4,uVar2);
  iVar1 = *(int *)(lVar4 + 4);
  lVar4 = lVar5 + 0x20;
  FUN_10abea338(lVar4,uVar3);
  if (*(int *)(lVar4 + 4) <= iVar1) {
    lVar4 = lVar5 + 0x20;
    FUN_10abea338(lVar4,uVar2);
    iVar1 = *(int *)(lVar4 + 4);
    lVar4 = lVar5 + 0x20;
    FUN_10abea338(lVar4,uVar3);
    if (iVar1 != *(int *)(lVar4 + 4)) {
      return;
    }
    lVar4 = lVar5 + 0x20;
    FUN_10abea338(lVar4,uVar2);
    iVar1 = *(int *)(lVar4 + 8);
    lVar5 = lVar5 + 0x20;
    FUN_10abea338(lVar5,uVar3);
    if (*(int *)(lVar5 + 8) <= iVar1) {
      return;
    }
  }
  *param_1 = uVar2;
  *param_2 = uVar3;
  return;
}



/* Entry: 10ac02680; end: 10ac02693;  */

/* WARNING: Possible PIC construction at 0x00010ac03e2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ac03e30) */
/* WARNING: Removing unreachable block (ram,0x00010ac03e4c) */
/* WARNING: Removing unreachable block (ram,0x00010ac03e58) */
/* WARNING: Removing unreachable block (ram,0x00010ac03eb0) */
/* WARNING: Removing unreachable block (ram,0x00010ac03edc) */
/* WARNING: Removing unreachable block (ram,0x00010ac03ee8) */
/* WARNING: Removing unreachable block (ram,0x00010ac03f40) */
/* WARNING: Removing unreachable block (ram,0x00010ac03f6c) */
/* WARNING: Removing unreachable block (ram,0x00010ac03f78) */
/* WARNING: Removing unreachable block (ram,0x00010ac03fd0) */
/* WARNING: Removing unreachable block (ram,0x00010ac03ffc) */
/* WARNING: Removing unreachable block (ram,0x00010ac0408c) */
/* WARNING: Removing unreachable block (ram,0x00010ac04008) */
/* WARNING: Removing unreachable block (ram,0x00010ac04060) */
/* WARNING: Removing unreachable block (ram,0x00010ac04070) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10ac02680(undefined8 param_1,ushort *param_2,long *param_3,long param_4,ulong param_5)

{
  undefined2 *puVar1;
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  bool bVar6;
  ushort *puVar7;
  long lVar8;
  long lVar9;
  ushort *puVar10;
  ushort *puVar11;
  long lVar12;
  ushort *puVar13;
  ushort *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ushort *unaff_x19;
  ushort *unaff_x20;
  ushort *puVar22;
  long *unaff_x21;
  ushort *unaff_x22;
  ushort *unaff_x23;
  ushort *unaff_x24;
  long lVar23;
  long lVar24;
  undefined8 unaff_x25;
  long lVar25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar26;
  ushort *puStack_80;
  undefined8 *******pppppppuStack_20;
  code *pcStack_18;
  
  puVar5 = &stack0xfffffffffffffff0;
  puVar7 = (ushort *)&UNK_10f69b42f;
  FUN_109ffde64();
  pcStack_18 = FUN_10ac02694;
  puStack_80 = param_2;
  pppppppuStack_20 = (undefined8 *******)&stack0xfffffffffffffff0;
LAB_10ac026c8:
  puVar14 = puStack_80 + -1;
  puVar13 = puVar7;
LAB_10ac026e4:
  do {
    uVar20 = param_5;
    do {
      puVar7 = puVar13;
      uVar19 = (long)puStack_80 - (long)puVar7 >> 1;
      if (uVar19 - 2 != 0 && 1 < (long)uVar19) {
        if (uVar19 == 3) {
          puVar13 = puVar7 + 1;
          lVar8 = *(long *)(*param_3 + 0x1c0);
          uVar20 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
          if ((*puVar13 < uVar20) && (uVar2 = *puVar7, uVar2 < uVar20)) {
            lVar23 = param_3[1];
            lVar9 = lVar23;
            FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)*puVar13 * 0x10));
            lVar12 = lVar23;
            FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar2 * 0x10));
            FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
            lVar9 = param_3[1];
            FUN_10a01f6d4(lVar9,*(undefined2 *)(lVar12 + 2));
            uVar20 = (ulong)*puVar14;
            lVar8 = *(long *)(*param_3 + 0x1c0);
            uVar19 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
            if (*(int *)(lVar23 + 0x38) < *(int *)(lVar9 + 0x38)) {
              if ((uVar20 < uVar19) && (uVar2 = *puVar13, uVar2 < uVar19)) {
                lVar23 = param_3[1];
                lVar9 = lVar23;
                FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + uVar20 * 0x10));
                lVar12 = lVar23;
                FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar2 * 0x10));
                FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
                lVar8 = param_3[1];
                FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
                uVar2 = *puVar7;
                if (*(int *)(lVar23 + 0x38) < *(int *)(lVar8 + 0x38)) {
                  *puVar7 = *puVar14;
                  *puVar14 = uVar2;
                }
                else {
                  *puVar7 = *puVar13;
                  *puVar13 = uVar2;
                  lVar8 = *(long *)(*param_3 + 0x1c0);
                  uVar20 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
                  if ((uVar20 <= *puVar14) || (uVar20 <= uVar2)) goto LAB_10ac03be8;
                  lVar23 = param_3[1];
                  lVar9 = lVar23;
                  FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)*puVar14 * 0x10));
                  lVar12 = lVar23;
                  FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar2 * 0x10));
                  FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
                  lVar8 = param_3[1];
                  FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
                  if (*(int *)(lVar23 + 0x38) < *(int *)(lVar8 + 0x38)) {
                    uVar2 = *puVar13;
                    *puVar13 = *puVar14;
                    *puVar14 = uVar2;
                  }
                }
                return;
              }
            }
            else if ((uVar20 < uVar19) && (uVar2 = *puVar13, uVar2 < uVar19)) {
              lVar23 = param_3[1];
              lVar9 = lVar23;
              FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + uVar20 * 0x10));
              lVar12 = lVar23;
              FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar2 * 0x10));
              FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
              lVar8 = param_3[1];
              FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
              if (*(int *)(lVar8 + 0x38) <= *(int *)(lVar23 + 0x38)) {
                return;
              }
              uVar2 = *puVar13;
              *puVar13 = *puVar14;
              *puVar14 = uVar2;
              lVar8 = *(long *)(*param_3 + 0x1c0);
              uVar20 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
              if ((*puVar13 < uVar20) && (uVar2 = *puVar7, uVar2 < uVar20)) {
                lVar23 = param_3[1];
                lVar9 = lVar23;
                FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)*puVar13 * 0x10));
                lVar12 = lVar23;
                FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar2 * 0x10));
                FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
                lVar8 = param_3[1];
                FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
                if (*(int *)(lVar8 + 0x38) <= *(int *)(lVar23 + 0x38)) {
                  return;
                }
                uVar2 = *puVar7;
                *puVar7 = *puVar13;
                *puVar13 = uVar2;
                return;
              }
            }
          }
LAB_10ac03be8:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac03bec);
          (*pcVar4)();
        }
        puVar13 = puVar14;
        pppppppuVar26 = pppppppuStack_20;
        pcVar4 = pcStack_18;
        if (uVar19 != 4) {
          if (uVar19 != 5) goto LAB_10ac0272c;
          unaff_x19 = puVar7 + 1;
          unaff_x22 = puVar7 + 2;
          unaff_x23 = puVar7 + 3;
          puVar5 = &stack0xffffffffffffff90;
          puVar13 = unaff_x23;
          unaff_x20 = puVar7;
          unaff_x21 = param_3;
          unaff_x24 = puVar14;
          pppppppuVar26 = &pppppppuStack_20;
          pcVar4 = (code *)0x10ac03e30;
        }
        puVar10 = puVar7 + 2;
        puVar14 = puVar7 + 1;
        *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
        *(ushort **)(puVar5 + -0x40) = unaff_x24;
        *(ushort **)(puVar5 + -0x38) = unaff_x23;
        *(ushort **)(puVar5 + -0x30) = unaff_x22;
        *(long **)(puVar5 + -0x28) = unaff_x21;
        *(ushort **)(puVar5 + -0x20) = unaff_x20;
        *(ushort **)(puVar5 + -0x18) = unaff_x19;
        *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar26;
        *(code **)(puVar5 + -8) = pcVar4;
        FUN_10ac038ec();
        lVar8 = *(long *)(*param_3 + 0x1c0);
        uVar20 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
        if ((*puVar13 < uVar20) && (uVar2 = *puVar10, uVar2 < uVar20)) {
          lVar23 = param_3[1];
          lVar9 = lVar23;
          FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)*puVar13 * 0x10));
          lVar12 = lVar23;
          FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar2 * 0x10));
          FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
          lVar8 = param_3[1];
          FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
          if (*(int *)(lVar23 + 0x38) < *(int *)(lVar8 + 0x38)) {
            uVar2 = *puVar10;
            *puVar10 = *puVar13;
            *puVar13 = uVar2;
            lVar8 = *(long *)(*param_3 + 0x1c0);
            uVar20 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
            if ((uVar20 <= *puVar10) || (uVar2 = *puVar14, uVar20 <= uVar2)) goto LAB_10ac03df0;
            lVar23 = param_3[1];
            lVar9 = lVar23;
            FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)*puVar10 * 0x10));
            lVar12 = lVar23;
            FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar2 * 0x10));
            FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
            lVar8 = param_3[1];
            FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
            if (*(int *)(lVar23 + 0x38) < *(int *)(lVar8 + 0x38)) {
              uVar2 = *puVar14;
              *puVar14 = *puVar10;
              *puVar10 = uVar2;
              lVar8 = *(long *)(*param_3 + 0x1c0);
              uVar20 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
              if ((uVar20 <= *puVar14) || (uVar2 = *puVar7, uVar20 <= uVar2)) goto LAB_10ac03df0;
              lVar23 = param_3[1];
              lVar9 = lVar23;
              FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)*puVar14 * 0x10));
              lVar12 = lVar23;
              FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar2 * 0x10));
              FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
              lVar8 = param_3[1];
              FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
              if (*(int *)(lVar23 + 0x38) < *(int *)(lVar8 + 0x38)) {
                uVar2 = *puVar7;
                *puVar7 = *puVar14;
                *puVar14 = uVar2;
              }
            }
          }
          return;
        }
LAB_10ac03df0:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac03df4);
        (*pcVar4)();
      }
      if (uVar19 < 2) {
        return;
      }
      if (uVar19 == 2) {
        lVar8 = *(long *)(*param_3 + 0x1c0);
        uVar20 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
        if ((puStack_80[-1] < uVar20) && (uVar2 = *puVar7, uVar2 < uVar20)) {
          lVar23 = param_3[1];
          lVar9 = lVar23;
          FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)puStack_80[-1] * 0x10));
          lVar12 = lVar23;
          FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar2 * 0x10));
          FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
          lVar8 = param_3[1];
          FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
          if (*(int *)(lVar8 + 0x38) <= *(int *)(lVar23 + 0x38)) {
            return;
          }
          uVar2 = *puVar7;
          *puVar7 = puStack_80[-1];
          puStack_80[-1] = uVar2;
          return;
        }
        goto LAB_10ac038e8;
      }
LAB_10ac0272c:
      if ((long)uVar19 < 0x18) {
        puVar13 = puVar7 + 1;
        bVar6 = puVar7 == puStack_80 || puVar13 == puStack_80;
        if ((uVar20 & 1) != 0) {
          if (bVar6) {
            return;
          }
          lVar8 = 0;
          puVar14 = puVar7;
          goto LAB_10ac030d0;
        }
        if (bVar6) {
          return;
        }
        lVar8 = 2;
        puVar14 = puVar7;
        goto LAB_10ac03780;
      }
      if (param_4 == 0) {
        if (puVar7 == puStack_80) {
          return;
        }
        uVar15 = uVar19 - 2 >> 1;
        uVar20 = uVar15;
        goto LAB_10ac0323c;
      }
      puVar13 = (ushort *)((long)puVar7 + (uVar19 & 0xfffffffffffffffe));
      if (uVar19 < 0x81) {
        FUN_10ac038ec(puVar13,puVar7,puVar14,param_3);
      }
      else {
        FUN_10ac038ec(puVar7,puVar13,puVar14,param_3);
        FUN_10ac038ec(puVar7 + 1,puVar13 + -1,puStack_80 + -2,param_3);
        FUN_10ac038ec(puVar7 + 2,puVar13 + 1,puStack_80 + -3,param_3);
        FUN_10ac038ec(puVar13 + -1,puVar13,puVar13 + 1,param_3);
        uVar2 = *puVar7;
        *puVar7 = *puVar13;
        *puVar13 = uVar2;
      }
      param_4 = param_4 + -1;
      if ((uVar20 & 1) == 0) {
        lVar8 = *(long *)(*param_3 + 0x1c0);
        uVar20 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
        if ((uVar20 <= puVar7[-1]) || (uVar2 = *puVar7, uVar20 <= uVar2)) goto LAB_10ac038e8;
        lVar23 = param_3[1];
        lVar9 = lVar23;
        FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)puVar7[-1] * 0x10));
        lVar12 = lVar23;
        FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar2 * 0x10));
        FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
        lVar8 = param_3[1];
        FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
        if (*(int *)(lVar8 + 0x38) <= *(int *)(lVar23 + 0x38)) {
          uVar2 = *puVar7;
          uVar19 = (ulong)uVar2;
          lVar8 = *(long *)(*param_3 + 0x1c0);
          uVar20 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
          if ((uVar20 <= uVar19) || (uVar3 = *puVar14, uVar20 <= uVar3)) goto LAB_10ac038e8;
          lVar24 = uVar19 * 0x10;
          lVar23 = param_3[1];
          lVar9 = lVar23;
          FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + lVar24));
          lVar12 = lVar23;
          FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar3 * 0x10));
          FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
          lVar8 = param_3[1];
          FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
          puVar13 = puVar7;
          if (*(int *)(lVar23 + 0x38) < *(int *)(lVar8 + 0x38)) goto LAB_10ac02c58;
          goto LAB_10ac02cf0;
        }
      }
      lVar8 = 0;
      uVar2 = *puVar7;
      uVar20 = (ulong)uVar2;
      do {
        puVar13 = (ushort *)((long)puVar7 + lVar8 + 2);
        if (puVar13 == puStack_80) goto LAB_10ac038e8;
        uVar19 = (ulong)*puVar13;
        lVar9 = *(long *)(*param_3 + 0x1c0);
        uVar15 = *(long *)(*param_3 + 0x1c8) - lVar9 >> 4;
        if ((uVar15 <= uVar19) || (uVar15 <= uVar20)) goto LAB_10ac038e8;
        lVar25 = uVar20 * 0x10;
        lVar24 = param_3[1];
        lVar12 = lVar24;
        FUN_10abea338(lVar24,*(undefined2 *)(lVar9 + uVar19 * 0x10));
        lVar23 = lVar24;
        FUN_10abea338(lVar24,*(undefined2 *)(lVar9 + lVar25));
        FUN_10a01f6d4(lVar24,*(undefined2 *)(lVar12 + 2));
        lVar9 = param_3[1];
        FUN_10a01f6d4(lVar9,*(undefined2 *)(lVar23 + 2));
        lVar8 = lVar8 + 2;
      } while (*(int *)(lVar24 + 0x38) < *(int *)(lVar9 + 0x38));
      puVar10 = (ushort *)((long)puVar7 + lVar8);
      puVar11 = puStack_80;
      if (lVar8 == 2) {
        do {
          if (puVar11 <= puVar10) break;
          puVar11 = puVar11 + -1;
          lVar8 = *(long *)(*param_3 + 0x1c0);
          uVar19 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
          if ((uVar19 <= *puVar11) || (uVar19 <= uVar20)) goto LAB_10ac038e8;
          lVar23 = param_3[1];
          lVar9 = lVar23;
          FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)*puVar11 * 0x10));
          lVar12 = lVar23;
          FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + lVar25));
          FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
          lVar8 = param_3[1];
          FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
        } while (*(int *)(lVar8 + 0x38) <= *(int *)(lVar23 + 0x38));
      }
      else {
        do {
          if (puVar11 == puVar7) goto LAB_10ac038e8;
          puVar11 = puVar11 + -1;
          lVar8 = *(long *)(*param_3 + 0x1c0);
          uVar19 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
          if ((uVar19 <= *puVar11) || (uVar19 <= uVar20)) goto LAB_10ac038e8;
          lVar23 = param_3[1];
          lVar9 = lVar23;
          FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)*puVar11 * 0x10));
          lVar12 = lVar23;
          FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + lVar25));
          FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
          lVar8 = param_3[1];
          FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
        } while (*(int *)(lVar8 + 0x38) <= *(int *)(lVar23 + 0x38));
      }
      puVar22 = puVar11;
      puVar13 = puVar10;
      if (puVar10 < puVar11) {
        do {
          uVar3 = *puVar13;
          *puVar13 = *puVar22;
          *puVar22 = uVar3;
          do {
            puVar13 = puVar13 + 1;
            if (puVar13 == puStack_80) goto LAB_10ac038e8;
            lVar8 = *(long *)(*param_3 + 0x1c0);
            uVar19 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
            if ((uVar19 <= *puVar13) || (uVar19 <= uVar20)) goto LAB_10ac038e8;
            lVar23 = param_3[1];
            lVar9 = lVar23;
            FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)*puVar13 * 0x10));
            lVar12 = lVar23;
            FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + lVar25));
            FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
            lVar8 = param_3[1];
            FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
          } while (*(int *)(lVar23 + 0x38) < *(int *)(lVar8 + 0x38));
          do {
            if (puVar22 == puVar7) goto LAB_10ac038e8;
            puVar22 = puVar22 + -1;
            lVar8 = *(long *)(*param_3 + 0x1c0);
            uVar19 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
            if ((uVar19 <= *puVar22) || (uVar19 <= uVar20)) goto LAB_10ac038e8;
            lVar23 = param_3[1];
            lVar9 = lVar23;
            FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)*puVar22 * 0x10));
            lVar12 = lVar23;
            FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + lVar25));
            FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
            lVar8 = param_3[1];
            FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
          } while (*(int *)(lVar8 + 0x38) <= *(int *)(lVar23 + 0x38));
        } while (puVar13 < puVar22);
      }
      puVar22 = puVar13 + -1;
      uVar20 = param_5 & 0xffffffff;
      if (puVar22 != puVar7) {
        *puVar7 = *puVar22;
      }
      *puVar22 = uVar2;
      if (puVar10 < puVar11) break;
      puVar10 = puVar7;
      func_0x00010ac04090(puVar7,puVar22,param_3);
      puVar11 = puVar13;
      func_0x00010ac04090(puVar13,puStack_80,param_3);
      if ((int)puVar11 != 0) {
        param_5 = uVar20;
        puStack_80 = puVar22;
        if (((ulong)puVar10 & 1) != 0) {
          return;
        }
        goto LAB_10ac026c8;
      }
    } while (((ulong)puVar10 & 1) != 0);
    FUN_10ac02694(puVar7,puVar22,param_3,param_4,(uint)param_5 & 1);
    param_5 = 0;
  } while( true );
LAB_10ac03780:
  lVar9 = *(long *)(*param_3 + 0x1c0);
  uVar20 = *(long *)(*param_3 + 0x1c8) - lVar9 >> 4;
  if ((uVar20 <= *puVar13) || (uVar2 = *puVar14, uVar20 <= uVar2)) goto LAB_10ac038e8;
  lVar24 = param_3[1];
  lVar12 = lVar24;
  FUN_10abea338(lVar24,*(undefined2 *)(lVar9 + (ulong)*puVar13 * 0x10));
  lVar23 = lVar24;
  FUN_10abea338(lVar24,*(undefined2 *)(lVar9 + (ulong)uVar2 * 0x10));
  FUN_10a01f6d4(lVar24,*(undefined2 *)(lVar12 + 2));
  lVar9 = param_3[1];
  FUN_10a01f6d4(lVar9,*(undefined2 *)(lVar23 + 2));
  if (*(int *)(lVar24 + 0x38) < *(int *)(lVar9 + 0x38)) {
    uVar2 = *puVar13;
    lVar9 = 0;
    do {
      lVar12 = lVar9;
      ((undefined2 *)((long)puVar14 + lVar12))[1] = *(undefined2 *)((long)puVar14 + lVar12);
      if (lVar8 + lVar12 == 0) goto LAB_10ac038e8;
      lVar9 = *(long *)(*param_3 + 0x1c0);
      uVar20 = *(long *)(*param_3 + 0x1c8) - lVar9 >> 4;
      if ((uVar20 <= uVar2) ||
         (uVar19 = (ulong)*(ushort *)((long)puVar14 + lVar12 + -2), uVar20 <= uVar19))
      goto LAB_10ac038e8;
      lVar25 = param_3[1];
      lVar23 = lVar25;
      FUN_10abea338(lVar25,*(undefined2 *)(lVar9 + (ulong)uVar2 * 0x10));
      lVar24 = lVar25;
      FUN_10abea338(lVar25,*(undefined2 *)(lVar9 + uVar19 * 0x10));
      FUN_10a01f6d4(lVar25,*(undefined2 *)(lVar23 + 2));
      lVar23 = param_3[1];
      FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar24 + 2));
      lVar9 = lVar12 + -2;
    } while (*(int *)(lVar25 + 0x38) < *(int *)(lVar23 + 0x38));
    *(ushort *)((long)puVar14 + lVar12) = uVar2;
  }
  puVar14 = puVar14 + 1;
  lVar8 = lVar8 + 2;
  puVar13 = (ushort *)((long)puVar7 + lVar8);
  if (puVar13 == puStack_80) {
    return;
  }
  goto LAB_10ac03780;
LAB_10ac030d0:
  lVar9 = *(long *)(*param_3 + 0x1c0);
  uVar20 = *(long *)(*param_3 + 0x1c8) - lVar9 >> 4;
  if ((uVar20 <= puVar14[1]) || (uVar2 = *puVar14, uVar20 <= uVar2)) goto LAB_10ac038e8;
  lVar24 = param_3[1];
  lVar12 = lVar24;
  FUN_10abea338(lVar24,*(undefined2 *)(lVar9 + (ulong)puVar14[1] * 0x10));
  lVar23 = lVar24;
  FUN_10abea338(lVar24,*(undefined2 *)(lVar9 + (ulong)uVar2 * 0x10));
  FUN_10a01f6d4(lVar24,*(undefined2 *)(lVar12 + 2));
  lVar9 = param_3[1];
  FUN_10a01f6d4(lVar9,*(undefined2 *)(lVar23 + 2));
  if (*(int *)(lVar24 + 0x38) < *(int *)(lVar9 + 0x38)) {
    uVar2 = *puVar13;
    lVar9 = lVar8;
    do {
      lVar12 = lVar9;
      puVar1 = (undefined2 *)((long)puVar7 + lVar12);
      puVar1[1] = *puVar1;
      puVar14 = puVar7;
      if (lVar12 == 0) goto LAB_10ac03204;
      lVar9 = *(long *)(*param_3 + 0x1c0);
      uVar20 = *(long *)(*param_3 + 0x1c8) - lVar9 >> 4;
      if ((uVar20 <= uVar2) || (uVar3 = puVar1[-1], uVar20 <= uVar3)) goto LAB_10ac038e8;
      lVar25 = param_3[1];
      lVar23 = lVar25;
      FUN_10abea338(lVar25,*(undefined2 *)(lVar9 + (ulong)uVar2 * 0x10));
      lVar24 = lVar25;
      FUN_10abea338(lVar25,*(undefined2 *)(lVar9 + (ulong)uVar3 * 0x10));
      FUN_10a01f6d4(lVar25,*(undefined2 *)(lVar23 + 2));
      lVar23 = param_3[1];
      FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar24 + 2));
      lVar9 = lVar12 + -2;
    } while (*(int *)(lVar25 + 0x38) < *(int *)(lVar23 + 0x38));
    puVar14 = (ushort *)((long)puVar7 + lVar12);
LAB_10ac03204:
    *puVar14 = uVar2;
  }
  puVar10 = puVar13 + 1;
  lVar8 = lVar8 + 2;
  puVar14 = puVar13;
  puVar13 = puVar10;
  if (puVar10 == puStack_80) {
    return;
  }
  goto LAB_10ac030d0;
LAB_10ac0323c:
  do {
    if ((long)uVar20 <= (long)uVar15) {
      uVar18 = uVar20 << 1 | 1;
      puVar13 = puVar7 + uVar18;
      uVar17 = uVar20 * 2 + 2;
      puVar14 = puVar13;
      uVar21 = uVar18;
      if ((long)uVar17 < (long)uVar19) {
        lVar8 = *(long *)(*param_3 + 0x1c0);
        uVar21 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
        if ((uVar21 <= *puVar13) || (uVar16 = (ulong)puVar13[1], uVar21 <= uVar16))
        goto LAB_10ac038e8;
        lVar23 = param_3[1];
        lVar9 = lVar23;
        FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)*puVar13 * 0x10));
        lVar12 = lVar23;
        FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + uVar16 * 0x10));
        FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
        lVar8 = param_3[1];
        FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
        puVar14 = puVar13 + 1;
        uVar21 = uVar17;
        if (*(int *)(lVar8 + 0x38) <= *(int *)(lVar23 + 0x38)) {
          puVar14 = puVar13;
          uVar21 = uVar18;
        }
      }
      lVar8 = *(long *)(*param_3 + 0x1c0);
      uVar17 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
      if (uVar17 <= *puVar14) goto LAB_10ac038e8;
      puVar13 = puVar7 + uVar20;
      uVar2 = *puVar13;
      if (uVar17 <= uVar2) goto LAB_10ac038e8;
      lVar23 = param_3[1];
      lVar9 = lVar23;
      FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)*puVar14 * 0x10));
      lVar12 = lVar23;
      FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar2 * 0x10));
      FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
      lVar8 = param_3[1];
      FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
      if (*(int *)(lVar8 + 0x38) <= *(int *)(lVar23 + 0x38)) {
        uVar2 = *puVar13;
        do {
          puVar10 = puVar14;
          *puVar13 = *puVar10;
          if ((long)uVar15 < (long)uVar21) break;
          uVar18 = uVar21 << 1 | 1;
          puVar13 = puVar7 + uVar18;
          uVar17 = uVar21 * 2 + 2;
          puVar14 = puVar13;
          uVar21 = uVar18;
          if ((long)uVar17 < (long)uVar19) {
            lVar8 = *(long *)(*param_3 + 0x1c0);
            uVar21 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
            if ((uVar21 <= *puVar13) || (uVar16 = (ulong)puVar13[1], uVar21 <= uVar16))
            goto LAB_10ac038e8;
            lVar23 = param_3[1];
            lVar9 = lVar23;
            FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)*puVar13 * 0x10));
            lVar12 = lVar23;
            FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + uVar16 * 0x10));
            FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
            lVar8 = param_3[1];
            FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
            puVar14 = puVar13 + 1;
            uVar21 = uVar17;
            if (*(int *)(lVar8 + 0x38) <= *(int *)(lVar23 + 0x38)) {
              puVar14 = puVar13;
              uVar21 = uVar18;
            }
          }
          lVar8 = *(long *)(*param_3 + 0x1c0);
          uVar17 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
          if ((uVar17 <= *puVar14) || (uVar17 <= uVar2)) goto LAB_10ac038e8;
          lVar23 = param_3[1];
          lVar9 = lVar23;
          FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)*puVar14 * 0x10));
          lVar12 = lVar23;
          FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar2 * 0x10));
          FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
          lVar8 = param_3[1];
          FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
          puVar13 = puVar10;
        } while (*(int *)(lVar8 + 0x38) <= *(int *)(lVar23 + 0x38));
        *puVar10 = uVar2;
      }
    }
    bVar6 = uVar20 != 0;
    uVar20 = uVar20 - 1;
  } while (bVar6);
  do {
    uVar20 = 0;
    uVar2 = *puVar7;
    puVar13 = puVar7;
    do {
      puVar14 = puVar13 + uVar20 + 1;
      uVar17 = uVar20 << 1 | 1;
      uVar15 = uVar20 * 2 + 2;
      puVar10 = puVar14;
      uVar18 = uVar17;
      if ((long)uVar15 < (long)uVar19) {
        lVar8 = *(long *)(*param_3 + 0x1c0);
        uVar18 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
        if (uVar18 <= *puVar14) goto LAB_10ac038e8;
        uVar21 = (ulong)puVar13[uVar20 + 2];
        if (uVar18 <= uVar21) goto LAB_10ac038e8;
        lVar23 = param_3[1];
        lVar9 = lVar23;
        FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)*puVar14 * 0x10));
        lVar12 = lVar23;
        FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + uVar21 * 0x10));
        FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
        lVar8 = param_3[1];
        FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
        puVar10 = puVar13 + uVar20 + 2;
        uVar18 = uVar15;
        if (*(int *)(lVar8 + 0x38) <= *(int *)(lVar23 + 0x38)) {
          puVar10 = puVar14;
          uVar18 = uVar17;
        }
      }
      uVar20 = uVar18;
      *puVar13 = *puVar10;
      puVar13 = puVar10;
    } while ((long)uVar20 <= (long)(uVar19 - 2 >> 1));
    puStack_80 = puStack_80 + -1;
    if (puVar10 == puStack_80) {
      *puVar10 = uVar2;
    }
    else {
      *puVar10 = *puStack_80;
      *puStack_80 = uVar2;
      lVar8 = (long)((long)puVar10 + (2 - (long)puVar7)) >> 1;
      if (1 < lVar8) {
        uVar17 = lVar8 - 2U >> 1;
        uVar20 = (ulong)puVar7[uVar17];
        lVar8 = *(long *)(*param_3 + 0x1c0);
        uVar15 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
        if ((uVar15 <= uVar20) || (uVar2 = *puVar10, uVar15 <= uVar2)) {
LAB_10ac038e8:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac038ec);
          (*pcVar4)();
        }
        lVar23 = param_3[1];
        lVar9 = lVar23;
        FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + uVar20 * 0x10));
        lVar12 = lVar23;
        FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar2 * 0x10));
        FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
        lVar8 = param_3[1];
        FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
        if (*(int *)(lVar23 + 0x38) < *(int *)(lVar8 + 0x38)) {
          uVar2 = *puVar10;
          puVar13 = puVar7 + uVar17;
          do {
            puVar14 = puVar13;
            *puVar10 = *puVar14;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1 >> 1;
            uVar20 = (ulong)puVar7[uVar17];
            lVar8 = *(long *)(*param_3 + 0x1c0);
            uVar15 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
            if ((uVar15 <= uVar20) || (uVar15 <= uVar2)) goto LAB_10ac038e8;
            lVar23 = param_3[1];
            lVar9 = lVar23;
            FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + uVar20 * 0x10));
            lVar12 = lVar23;
            FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar2 * 0x10));
            FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
            lVar8 = param_3[1];
            FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
            puVar10 = puVar14;
            puVar13 = puVar7 + uVar17;
          } while (*(int *)(lVar23 + 0x38) < *(int *)(lVar8 + 0x38));
          *puVar14 = uVar2;
        }
      }
    }
    bVar6 = (long)uVar19 < 3;
    uVar19 = uVar19 - 1;
    if (bVar6) {
      return;
    }
  } while( true );
  while( true ) {
    lVar8 = *(long *)(*param_3 + 0x1c0);
    uVar20 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
    if ((uVar20 <= uVar19) || (uVar3 = *puVar13, uVar20 <= uVar3)) goto LAB_10ac038e8;
    lVar23 = param_3[1];
    lVar9 = lVar23;
    FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + lVar24));
    lVar12 = lVar23;
    FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar3 * 0x10));
    FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
    lVar8 = param_3[1];
    FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
    if (*(int *)(lVar23 + 0x38) < *(int *)(lVar8 + 0x38)) break;
LAB_10ac02cf0:
    puVar13 = puVar13 + 1;
    if (puStack_80 <= puVar13) break;
  }
  goto LAB_10ac02d7c;
  while( true ) {
    lVar8 = *(long *)(*param_3 + 0x1c0);
    uVar20 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
    if ((uVar20 <= uVar19) || (uVar3 = *puVar13, uVar20 <= uVar3)) goto LAB_10ac038e8;
    lVar23 = param_3[1];
    lVar9 = lVar23;
    FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + lVar24));
    lVar12 = lVar23;
    FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar3 * 0x10));
    FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
    lVar8 = param_3[1];
    FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
    if (*(int *)(lVar23 + 0x38) < *(int *)(lVar8 + 0x38)) break;
LAB_10ac02c58:
    puVar13 = puVar13 + 1;
    if (puVar13 == puStack_80) goto LAB_10ac038e8;
  }
LAB_10ac02d7c:
  puVar10 = puStack_80;
  if (puVar13 < puStack_80) {
    do {
      if (puVar10 == puVar7) goto LAB_10ac038e8;
      lVar8 = *(long *)(*param_3 + 0x1c0);
      uVar20 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
      if (uVar20 <= uVar19) goto LAB_10ac038e8;
      puVar10 = puVar10 + -1;
      uVar3 = *puVar10;
      if (uVar20 <= uVar3) goto LAB_10ac038e8;
      lVar23 = param_3[1];
      lVar9 = lVar23;
      FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + lVar24));
      lVar12 = lVar23;
      FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar3 * 0x10));
      FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
      lVar8 = param_3[1];
      FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
    } while (*(int *)(lVar23 + 0x38) < *(int *)(lVar8 + 0x38));
  }
  while (puVar13 < puVar10) {
    uVar3 = *puVar13;
    *puVar13 = *puVar10;
    *puVar10 = uVar3;
    do {
      puVar13 = puVar13 + 1;
      if (puVar13 == puStack_80) goto LAB_10ac038e8;
      lVar8 = *(long *)(*param_3 + 0x1c0);
      uVar20 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
      if ((uVar20 <= uVar19) || (uVar3 = *puVar13, uVar20 <= uVar3)) goto LAB_10ac038e8;
      lVar23 = param_3[1];
      lVar9 = lVar23;
      FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + lVar24));
      lVar12 = lVar23;
      FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar3 * 0x10));
      FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
      lVar8 = param_3[1];
      FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
    } while (*(int *)(lVar8 + 0x38) <= *(int *)(lVar23 + 0x38));
    do {
      if (puVar10 == puVar7) goto LAB_10ac038e8;
      lVar8 = *(long *)(*param_3 + 0x1c0);
      uVar20 = *(long *)(*param_3 + 0x1c8) - lVar8 >> 4;
      if (uVar20 <= uVar19) goto LAB_10ac038e8;
      puVar10 = puVar10 + -1;
      uVar3 = *puVar10;
      if (uVar20 <= uVar3) goto LAB_10ac038e8;
      lVar23 = param_3[1];
      lVar9 = lVar23;
      FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + lVar24));
      lVar12 = lVar23;
      FUN_10abea338(lVar23,*(undefined2 *)(lVar8 + (ulong)uVar3 * 0x10));
      FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar9 + 2));
      lVar8 = param_3[1];
      FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar12 + 2));
    } while (*(int *)(lVar23 + 0x38) < *(int *)(lVar8 + 0x38));
  }
  puVar10 = puVar13 + -1;
  if (puVar10 != puVar7) {
    *puVar7 = *puVar10;
  }
  *puVar10 = uVar2;
  param_5 = 0;
  goto LAB_10ac026e4;
}



/* Entry: 10ac02694; end: 10ac038eb;  */

/* WARNING: Possible PIC construction at 0x00010ac03e2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ac03e30) */
/* WARNING: Removing unreachable block (ram,0x00010ac03e4c) */
/* WARNING: Removing unreachable block (ram,0x00010ac03e58) */
/* WARNING: Removing unreachable block (ram,0x00010ac03eb0) */
/* WARNING: Removing unreachable block (ram,0x00010ac03edc) */
/* WARNING: Removing unreachable block (ram,0x00010ac03ee8) */
/* WARNING: Removing unreachable block (ram,0x00010ac03f40) */
/* WARNING: Removing unreachable block (ram,0x00010ac03f6c) */
/* WARNING: Removing unreachable block (ram,0x00010ac03f78) */
/* WARNING: Removing unreachable block (ram,0x00010ac03fd0) */
/* WARNING: Removing unreachable block (ram,0x00010ac03ffc) */
/* WARNING: Removing unreachable block (ram,0x00010ac0408c) */
/* WARNING: Removing unreachable block (ram,0x00010ac04008) */
/* WARNING: Removing unreachable block (ram,0x00010ac04060) */
/* WARNING: Removing unreachable block (ram,0x00010ac04070) */

void FUN_10ac02694(ushort *param_1,ushort *param_2,long *param_3,long param_4,uint param_5)

{
  undefined2 *puVar1;
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ushort *puVar8;
  ushort *puVar9;
  long lVar10;
  ushort *puVar11;
  ulong uVar12;
  ushort *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ushort *unaff_x19;
  ushort *unaff_x20;
  ushort *puVar20;
  long *unaff_x21;
  ushort *unaff_x22;
  ushort *unaff_x23;
  ushort *unaff_x24;
  long lVar21;
  long lVar22;
  undefined8 unaff_x25;
  long lVar23;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ushort *puStack_70;
  
  puStack_70 = param_2;
LAB_10ac026c8:
  puVar13 = puStack_70 + -1;
  puVar11 = param_1;
LAB_10ac026e8:
  do {
    param_1 = puVar11;
    uVar18 = (long)puStack_70 - (long)param_1 >> 1;
    if (uVar18 - 2 != 0 && 1 < (long)uVar18) {
      if (uVar18 == 3) {
        puVar11 = param_1 + 1;
        lVar6 = *(long *)(*param_3 + 0x1c0);
        uVar18 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
        if ((*puVar11 < uVar18) && (uVar2 = *param_1, uVar2 < uVar18)) {
          lVar21 = param_3[1];
          lVar7 = lVar21;
          FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)*puVar11 * 0x10));
          lVar10 = lVar21;
          FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar2 * 0x10));
          FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
          lVar7 = param_3[1];
          FUN_10a01f6d4(lVar7,*(undefined2 *)(lVar10 + 2));
          uVar18 = (ulong)*puVar13;
          lVar6 = *(long *)(*param_3 + 0x1c0);
          uVar12 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
          if (*(int *)(lVar21 + 0x38) < *(int *)(lVar7 + 0x38)) {
            if ((uVar18 < uVar12) && (uVar2 = *puVar11, uVar2 < uVar12)) {
              lVar21 = param_3[1];
              lVar7 = lVar21;
              FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + uVar18 * 0x10));
              lVar10 = lVar21;
              FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar2 * 0x10));
              FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
              lVar6 = param_3[1];
              FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
              uVar2 = *param_1;
              if (*(int *)(lVar21 + 0x38) < *(int *)(lVar6 + 0x38)) {
                *param_1 = *puVar13;
                *puVar13 = uVar2;
              }
              else {
                *param_1 = *puVar11;
                *puVar11 = uVar2;
                lVar6 = *(long *)(*param_3 + 0x1c0);
                uVar18 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
                if ((uVar18 <= *puVar13) || (uVar18 <= uVar2)) goto LAB_10ac03be8;
                lVar21 = param_3[1];
                lVar7 = lVar21;
                FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)*puVar13 * 0x10));
                lVar10 = lVar21;
                FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar2 * 0x10));
                FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
                lVar6 = param_3[1];
                FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
                if (*(int *)(lVar21 + 0x38) < *(int *)(lVar6 + 0x38)) {
                  uVar2 = *puVar11;
                  *puVar11 = *puVar13;
                  *puVar13 = uVar2;
                }
              }
              return;
            }
          }
          else if ((uVar18 < uVar12) && (uVar2 = *puVar11, uVar2 < uVar12)) {
            lVar21 = param_3[1];
            lVar7 = lVar21;
            FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + uVar18 * 0x10));
            lVar10 = lVar21;
            FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar2 * 0x10));
            FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
            lVar6 = param_3[1];
            FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
            if (*(int *)(lVar6 + 0x38) <= *(int *)(lVar21 + 0x38)) {
              return;
            }
            uVar2 = *puVar11;
            *puVar11 = *puVar13;
            *puVar13 = uVar2;
            lVar6 = *(long *)(*param_3 + 0x1c0);
            uVar18 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
            if ((*puVar11 < uVar18) && (uVar2 = *param_1, uVar2 < uVar18)) {
              lVar21 = param_3[1];
              lVar7 = lVar21;
              FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)*puVar11 * 0x10));
              lVar10 = lVar21;
              FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar2 * 0x10));
              FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
              lVar6 = param_3[1];
              FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
              if (*(int *)(lVar6 + 0x38) <= *(int *)(lVar21 + 0x38)) {
                return;
              }
              uVar2 = *param_1;
              *param_1 = *puVar11;
              *puVar11 = uVar2;
              return;
            }
          }
        }
LAB_10ac03be8:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac03bec);
        (*pcVar4)();
      }
      puVar11 = puVar13;
      if (uVar18 != 4) {
        if (uVar18 != 5) goto LAB_10ac0272c;
        unaff_x19 = param_1 + 1;
        unaff_x22 = param_1 + 2;
        unaff_x23 = param_1 + 3;
        unaff_x29 = &stack0xfffffffffffffff0;
        unaff_x30 = 0x10ac03e30;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        puVar11 = unaff_x23;
        unaff_x20 = param_1;
        unaff_x21 = param_3;
        unaff_x24 = puVar13;
      }
      puVar8 = param_1 + 2;
      puVar13 = param_1 + 1;
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(ushort **)((long)register0x00000008 + -0x40) = unaff_x24;
      *(ushort **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(ushort **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ushort **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ushort **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      FUN_10ac038ec();
      lVar6 = *(long *)(*param_3 + 0x1c0);
      uVar18 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
      if ((*puVar11 < uVar18) && (uVar2 = *puVar8, uVar2 < uVar18)) {
        lVar21 = param_3[1];
        lVar7 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)*puVar11 * 0x10));
        lVar10 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar2 * 0x10));
        FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
        lVar6 = param_3[1];
        FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
        if (*(int *)(lVar21 + 0x38) < *(int *)(lVar6 + 0x38)) {
          uVar2 = *puVar8;
          *puVar8 = *puVar11;
          *puVar11 = uVar2;
          lVar6 = *(long *)(*param_3 + 0x1c0);
          uVar18 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
          if ((uVar18 <= *puVar8) || (uVar2 = *puVar13, uVar18 <= uVar2)) goto LAB_10ac03df0;
          lVar21 = param_3[1];
          lVar7 = lVar21;
          FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)*puVar8 * 0x10));
          lVar10 = lVar21;
          FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar2 * 0x10));
          FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
          lVar6 = param_3[1];
          FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
          if (*(int *)(lVar21 + 0x38) < *(int *)(lVar6 + 0x38)) {
            uVar2 = *puVar13;
            *puVar13 = *puVar8;
            *puVar8 = uVar2;
            lVar6 = *(long *)(*param_3 + 0x1c0);
            uVar18 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
            if ((uVar18 <= *puVar13) || (uVar2 = *param_1, uVar18 <= uVar2)) goto LAB_10ac03df0;
            lVar21 = param_3[1];
            lVar7 = lVar21;
            FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)*puVar13 * 0x10));
            lVar10 = lVar21;
            FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar2 * 0x10));
            FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
            lVar6 = param_3[1];
            FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
            if (*(int *)(lVar21 + 0x38) < *(int *)(lVar6 + 0x38)) {
              uVar2 = *param_1;
              *param_1 = *puVar13;
              *puVar13 = uVar2;
            }
          }
        }
        return;
      }
LAB_10ac03df0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac03df4);
      (*pcVar4)();
    }
    if (uVar18 < 2) {
      return;
    }
    if (uVar18 == 2) {
      lVar6 = *(long *)(*param_3 + 0x1c0);
      uVar18 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
      if ((puStack_70[-1] < uVar18) && (uVar2 = *param_1, uVar2 < uVar18)) {
        lVar21 = param_3[1];
        lVar7 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)puStack_70[-1] * 0x10));
        lVar10 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar2 * 0x10));
        FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
        lVar6 = param_3[1];
        FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
        if (*(int *)(lVar6 + 0x38) <= *(int *)(lVar21 + 0x38)) {
          return;
        }
        uVar2 = *param_1;
        *param_1 = puStack_70[-1];
        puStack_70[-1] = uVar2;
        return;
      }
      goto LAB_10ac038e8;
    }
LAB_10ac0272c:
    if ((long)uVar18 < 0x18) {
      puVar11 = param_1 + 1;
      bVar5 = param_1 == puStack_70 || puVar11 == puStack_70;
      if ((param_5 & 1) != 0) {
        if (bVar5) {
          return;
        }
        lVar6 = 0;
        puVar13 = param_1;
        goto LAB_10ac030d0;
      }
      if (bVar5) {
        return;
      }
      lVar6 = 2;
      puVar13 = param_1;
      break;
    }
    if (param_4 == 0) {
      if (param_1 == puStack_70) {
        return;
      }
      uVar14 = uVar18 - 2 >> 1;
      uVar12 = uVar14;
      goto LAB_10ac0323c;
    }
    puVar11 = (ushort *)((long)param_1 + (uVar18 & 0xfffffffffffffffe));
    if (uVar18 < 0x81) {
      FUN_10ac038ec(puVar11,param_1,puVar13,param_3);
    }
    else {
      FUN_10ac038ec(param_1,puVar11,puVar13,param_3);
      FUN_10ac038ec(param_1 + 1,puVar11 + -1,puStack_70 + -2,param_3);
      FUN_10ac038ec(param_1 + 2,puVar11 + 1,puStack_70 + -3,param_3);
      FUN_10ac038ec(puVar11 + -1,puVar11,puVar11 + 1,param_3);
      uVar2 = *param_1;
      *param_1 = *puVar11;
      *puVar11 = uVar2;
    }
    param_4 = param_4 + -1;
    if ((param_5 & 1) != 0) {
LAB_10ac02850:
      lVar6 = 0;
      uVar2 = *param_1;
      uVar18 = (ulong)uVar2;
      do {
        puVar11 = (ushort *)((long)param_1 + lVar6 + 2);
        if (puVar11 == puStack_70) goto LAB_10ac038e8;
        uVar12 = (ulong)*puVar11;
        lVar7 = *(long *)(*param_3 + 0x1c0);
        uVar14 = *(long *)(*param_3 + 0x1c8) - lVar7 >> 4;
        if ((uVar14 <= uVar12) || (uVar14 <= uVar18)) goto LAB_10ac038e8;
        lVar23 = uVar18 * 0x10;
        lVar22 = param_3[1];
        lVar10 = lVar22;
        FUN_10abea338(lVar22,*(undefined2 *)(lVar7 + uVar12 * 0x10));
        lVar21 = lVar22;
        FUN_10abea338(lVar22,*(undefined2 *)(lVar7 + lVar23));
        FUN_10a01f6d4(lVar22,*(undefined2 *)(lVar10 + 2));
        lVar7 = param_3[1];
        FUN_10a01f6d4(lVar7,*(undefined2 *)(lVar21 + 2));
        lVar6 = lVar6 + 2;
      } while (*(int *)(lVar22 + 0x38) < *(int *)(lVar7 + 0x38));
      puVar8 = (ushort *)((long)param_1 + lVar6);
      puVar9 = puStack_70;
      if (lVar6 == 2) {
        do {
          if (puVar9 <= puVar8) break;
          puVar9 = puVar9 + -1;
          lVar6 = *(long *)(*param_3 + 0x1c0);
          uVar12 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
          if ((uVar12 <= *puVar9) || (uVar12 <= uVar18)) goto LAB_10ac038e8;
          lVar21 = param_3[1];
          lVar7 = lVar21;
          FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)*puVar9 * 0x10));
          lVar10 = lVar21;
          FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + lVar23));
          FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
          lVar6 = param_3[1];
          FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
        } while (*(int *)(lVar6 + 0x38) <= *(int *)(lVar21 + 0x38));
      }
      else {
        do {
          if (puVar9 == param_1) goto LAB_10ac038e8;
          puVar9 = puVar9 + -1;
          lVar6 = *(long *)(*param_3 + 0x1c0);
          uVar12 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
          if ((uVar12 <= *puVar9) || (uVar12 <= uVar18)) goto LAB_10ac038e8;
          lVar21 = param_3[1];
          lVar7 = lVar21;
          FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)*puVar9 * 0x10));
          lVar10 = lVar21;
          FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + lVar23));
          FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
          lVar6 = param_3[1];
          FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
        } while (*(int *)(lVar6 + 0x38) <= *(int *)(lVar21 + 0x38));
      }
      puVar20 = puVar9;
      puVar11 = puVar8;
      if (puVar8 < puVar9) {
        do {
          uVar3 = *puVar11;
          *puVar11 = *puVar20;
          *puVar20 = uVar3;
          do {
            puVar11 = puVar11 + 1;
            if (puVar11 == puStack_70) goto LAB_10ac038e8;
            lVar6 = *(long *)(*param_3 + 0x1c0);
            uVar12 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
            if ((uVar12 <= *puVar11) || (uVar12 <= uVar18)) goto LAB_10ac038e8;
            lVar21 = param_3[1];
            lVar7 = lVar21;
            FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)*puVar11 * 0x10));
            lVar10 = lVar21;
            FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + lVar23));
            FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
            lVar6 = param_3[1];
            FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
          } while (*(int *)(lVar21 + 0x38) < *(int *)(lVar6 + 0x38));
          do {
            if (puVar20 == param_1) goto LAB_10ac038e8;
            puVar20 = puVar20 + -1;
            lVar6 = *(long *)(*param_3 + 0x1c0);
            uVar12 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
            if ((uVar12 <= *puVar20) || (uVar12 <= uVar18)) goto LAB_10ac038e8;
            lVar21 = param_3[1];
            lVar7 = lVar21;
            FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)*puVar20 * 0x10));
            lVar10 = lVar21;
            FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + lVar23));
            FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
            lVar6 = param_3[1];
            FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
          } while (*(int *)(lVar6 + 0x38) <= *(int *)(lVar21 + 0x38));
        } while (puVar11 < puVar20);
      }
      puVar20 = puVar11 + -1;
      if (puVar20 != param_1) {
        *param_1 = *puVar20;
      }
      *puVar20 = uVar2;
      if (puVar9 <= puVar8) {
        puVar8 = param_1;
        func_0x00010ac04090(param_1,puVar20,param_3);
        puVar9 = puVar11;
        func_0x00010ac04090(puVar11,puStack_70,param_3);
        if ((int)puVar9 != 0) goto LAB_10ac02f6c;
        if (((ulong)puVar8 & 1) != 0) goto LAB_10ac026e8;
      }
      FUN_10ac02694(param_1,puVar20,param_3,param_4,param_5 & 1);
      param_5 = 0;
      goto LAB_10ac026e8;
    }
    lVar6 = *(long *)(*param_3 + 0x1c0);
    uVar18 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
    if ((uVar18 <= param_1[-1]) || (uVar2 = *param_1, uVar18 <= uVar2)) goto LAB_10ac038e8;
    lVar21 = param_3[1];
    lVar7 = lVar21;
    FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)param_1[-1] * 0x10));
    lVar10 = lVar21;
    FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar2 * 0x10));
    FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
    lVar6 = param_3[1];
    FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
    if (*(int *)(lVar21 + 0x38) < *(int *)(lVar6 + 0x38)) goto LAB_10ac02850;
    uVar2 = *param_1;
    uVar12 = (ulong)uVar2;
    lVar6 = *(long *)(*param_3 + 0x1c0);
    uVar18 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
    if ((uVar18 <= uVar12) || (uVar3 = *puVar13, uVar18 <= uVar3)) goto LAB_10ac038e8;
    lVar22 = uVar12 * 0x10;
    lVar21 = param_3[1];
    lVar7 = lVar21;
    FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + lVar22));
    lVar10 = lVar21;
    FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar3 * 0x10));
    FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
    lVar6 = param_3[1];
    FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
    puVar11 = param_1;
    if (*(int *)(lVar21 + 0x38) < *(int *)(lVar6 + 0x38)) {
      do {
        puVar11 = puVar11 + 1;
        if (puVar11 == puStack_70) goto LAB_10ac038e8;
        lVar6 = *(long *)(*param_3 + 0x1c0);
        uVar18 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
        if ((uVar18 <= uVar12) || (uVar3 = *puVar11, uVar18 <= uVar3)) goto LAB_10ac038e8;
        lVar21 = param_3[1];
        lVar7 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + lVar22));
        lVar10 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar3 * 0x10));
        FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
        lVar6 = param_3[1];
        FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
      } while (*(int *)(lVar6 + 0x38) <= *(int *)(lVar21 + 0x38));
    }
    else {
      do {
        puVar11 = puVar11 + 1;
        if (puStack_70 <= puVar11) break;
        lVar6 = *(long *)(*param_3 + 0x1c0);
        uVar18 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
        if ((uVar18 <= uVar12) || (uVar3 = *puVar11, uVar18 <= uVar3)) goto LAB_10ac038e8;
        lVar21 = param_3[1];
        lVar7 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + lVar22));
        lVar10 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar3 * 0x10));
        FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
        lVar6 = param_3[1];
        FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
      } while (*(int *)(lVar6 + 0x38) <= *(int *)(lVar21 + 0x38));
    }
    puVar8 = puStack_70;
    if (puVar11 < puStack_70) {
      do {
        if (puVar8 == param_1) goto LAB_10ac038e8;
        lVar6 = *(long *)(*param_3 + 0x1c0);
        uVar18 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
        if (uVar18 <= uVar12) goto LAB_10ac038e8;
        puVar8 = puVar8 + -1;
        uVar3 = *puVar8;
        if (uVar18 <= uVar3) goto LAB_10ac038e8;
        lVar21 = param_3[1];
        lVar7 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + lVar22));
        lVar10 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar3 * 0x10));
        FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
        lVar6 = param_3[1];
        FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
      } while (*(int *)(lVar21 + 0x38) < *(int *)(lVar6 + 0x38));
    }
    while (puVar11 < puVar8) {
      uVar3 = *puVar11;
      *puVar11 = *puVar8;
      *puVar8 = uVar3;
      do {
        puVar11 = puVar11 + 1;
        if (puVar11 == puStack_70) goto LAB_10ac038e8;
        lVar6 = *(long *)(*param_3 + 0x1c0);
        uVar18 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
        if ((uVar18 <= uVar12) || (uVar3 = *puVar11, uVar18 <= uVar3)) goto LAB_10ac038e8;
        lVar21 = param_3[1];
        lVar7 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + lVar22));
        lVar10 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar3 * 0x10));
        FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
        lVar6 = param_3[1];
        FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
      } while (*(int *)(lVar6 + 0x38) <= *(int *)(lVar21 + 0x38));
      do {
        if (puVar8 == param_1) goto LAB_10ac038e8;
        lVar6 = *(long *)(*param_3 + 0x1c0);
        uVar18 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
        if (uVar18 <= uVar12) goto LAB_10ac038e8;
        puVar8 = puVar8 + -1;
        uVar3 = *puVar8;
        if (uVar18 <= uVar3) goto LAB_10ac038e8;
        lVar21 = param_3[1];
        lVar7 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + lVar22));
        lVar10 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar3 * 0x10));
        FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
        lVar6 = param_3[1];
        FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
      } while (*(int *)(lVar21 + 0x38) < *(int *)(lVar6 + 0x38));
    }
    puVar8 = puVar11 + -1;
    if (puVar8 != param_1) {
      *param_1 = *puVar8;
    }
    *puVar8 = uVar2;
    param_5 = 0;
  } while( true );
LAB_10ac03780:
  lVar7 = *(long *)(*param_3 + 0x1c0);
  uVar18 = *(long *)(*param_3 + 0x1c8) - lVar7 >> 4;
  if ((uVar18 <= *puVar11) || (uVar2 = *puVar13, uVar18 <= uVar2)) goto LAB_10ac038e8;
  lVar22 = param_3[1];
  lVar10 = lVar22;
  FUN_10abea338(lVar22,*(undefined2 *)(lVar7 + (ulong)*puVar11 * 0x10));
  lVar21 = lVar22;
  FUN_10abea338(lVar22,*(undefined2 *)(lVar7 + (ulong)uVar2 * 0x10));
  FUN_10a01f6d4(lVar22,*(undefined2 *)(lVar10 + 2));
  lVar7 = param_3[1];
  FUN_10a01f6d4(lVar7,*(undefined2 *)(lVar21 + 2));
  if (*(int *)(lVar22 + 0x38) < *(int *)(lVar7 + 0x38)) {
    uVar2 = *puVar11;
    lVar7 = 0;
    do {
      lVar10 = lVar7;
      ((undefined2 *)((long)puVar13 + lVar10))[1] = *(undefined2 *)((long)puVar13 + lVar10);
      if (lVar6 + lVar10 == 0) goto LAB_10ac038e8;
      lVar7 = *(long *)(*param_3 + 0x1c0);
      uVar18 = *(long *)(*param_3 + 0x1c8) - lVar7 >> 4;
      if ((uVar18 <= uVar2) ||
         (uVar12 = (ulong)*(ushort *)((long)puVar13 + lVar10 + -2), uVar18 <= uVar12))
      goto LAB_10ac038e8;
      lVar23 = param_3[1];
      lVar21 = lVar23;
      FUN_10abea338(lVar23,*(undefined2 *)(lVar7 + (ulong)uVar2 * 0x10));
      lVar22 = lVar23;
      FUN_10abea338(lVar23,*(undefined2 *)(lVar7 + uVar12 * 0x10));
      FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar21 + 2));
      lVar21 = param_3[1];
      FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar22 + 2));
      lVar7 = lVar10 + -2;
    } while (*(int *)(lVar23 + 0x38) < *(int *)(lVar21 + 0x38));
    *(ushort *)((long)puVar13 + lVar10) = uVar2;
  }
  puVar13 = puVar13 + 1;
  lVar6 = lVar6 + 2;
  puVar11 = (ushort *)((long)param_1 + lVar6);
  if (puVar11 == puStack_70) {
    return;
  }
  goto LAB_10ac03780;
LAB_10ac030d0:
  lVar7 = *(long *)(*param_3 + 0x1c0);
  uVar18 = *(long *)(*param_3 + 0x1c8) - lVar7 >> 4;
  if ((uVar18 <= puVar13[1]) || (uVar2 = *puVar13, uVar18 <= uVar2)) goto LAB_10ac038e8;
  lVar22 = param_3[1];
  lVar10 = lVar22;
  FUN_10abea338(lVar22,*(undefined2 *)(lVar7 + (ulong)puVar13[1] * 0x10));
  lVar21 = lVar22;
  FUN_10abea338(lVar22,*(undefined2 *)(lVar7 + (ulong)uVar2 * 0x10));
  FUN_10a01f6d4(lVar22,*(undefined2 *)(lVar10 + 2));
  lVar7 = param_3[1];
  FUN_10a01f6d4(lVar7,*(undefined2 *)(lVar21 + 2));
  if (*(int *)(lVar22 + 0x38) < *(int *)(lVar7 + 0x38)) {
    uVar2 = *puVar11;
    lVar7 = lVar6;
    do {
      lVar10 = lVar7;
      puVar1 = (undefined2 *)((long)param_1 + lVar10);
      puVar1[1] = *puVar1;
      puVar13 = param_1;
      if (lVar10 == 0) goto LAB_10ac03204;
      lVar7 = *(long *)(*param_3 + 0x1c0);
      uVar18 = *(long *)(*param_3 + 0x1c8) - lVar7 >> 4;
      if ((uVar18 <= uVar2) || (uVar3 = puVar1[-1], uVar18 <= uVar3)) goto LAB_10ac038e8;
      lVar23 = param_3[1];
      lVar21 = lVar23;
      FUN_10abea338(lVar23,*(undefined2 *)(lVar7 + (ulong)uVar2 * 0x10));
      lVar22 = lVar23;
      FUN_10abea338(lVar23,*(undefined2 *)(lVar7 + (ulong)uVar3 * 0x10));
      FUN_10a01f6d4(lVar23,*(undefined2 *)(lVar21 + 2));
      lVar21 = param_3[1];
      FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar22 + 2));
      lVar7 = lVar10 + -2;
    } while (*(int *)(lVar23 + 0x38) < *(int *)(lVar21 + 0x38));
    puVar13 = (ushort *)((long)param_1 + lVar10);
LAB_10ac03204:
    *puVar13 = uVar2;
  }
  puVar8 = puVar11 + 1;
  lVar6 = lVar6 + 2;
  puVar13 = puVar11;
  puVar11 = puVar8;
  if (puVar8 == puStack_70) {
    return;
  }
  goto LAB_10ac030d0;
LAB_10ac0323c:
  do {
    if ((long)uVar12 <= (long)uVar14) {
      uVar17 = uVar12 << 1 | 1;
      puVar11 = param_1 + uVar17;
      uVar16 = uVar12 * 2 + 2;
      puVar13 = puVar11;
      uVar19 = uVar17;
      if ((long)uVar16 < (long)uVar18) {
        lVar6 = *(long *)(*param_3 + 0x1c0);
        uVar19 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
        if ((uVar19 <= *puVar11) || (uVar15 = (ulong)puVar11[1], uVar19 <= uVar15))
        goto LAB_10ac038e8;
        lVar21 = param_3[1];
        lVar7 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)*puVar11 * 0x10));
        lVar10 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + uVar15 * 0x10));
        FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
        lVar6 = param_3[1];
        FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
        puVar13 = puVar11 + 1;
        uVar19 = uVar16;
        if (*(int *)(lVar6 + 0x38) <= *(int *)(lVar21 + 0x38)) {
          puVar13 = puVar11;
          uVar19 = uVar17;
        }
      }
      lVar6 = *(long *)(*param_3 + 0x1c0);
      uVar16 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
      if (uVar16 <= *puVar13) goto LAB_10ac038e8;
      puVar11 = param_1 + uVar12;
      uVar2 = *puVar11;
      if (uVar16 <= uVar2) goto LAB_10ac038e8;
      lVar21 = param_3[1];
      lVar7 = lVar21;
      FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)*puVar13 * 0x10));
      lVar10 = lVar21;
      FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar2 * 0x10));
      FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
      lVar6 = param_3[1];
      FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
      if (*(int *)(lVar6 + 0x38) <= *(int *)(lVar21 + 0x38)) {
        uVar2 = *puVar11;
        do {
          puVar8 = puVar13;
          *puVar11 = *puVar8;
          if ((long)uVar14 < (long)uVar19) break;
          uVar17 = uVar19 << 1 | 1;
          puVar11 = param_1 + uVar17;
          uVar16 = uVar19 * 2 + 2;
          puVar13 = puVar11;
          uVar19 = uVar17;
          if ((long)uVar16 < (long)uVar18) {
            lVar6 = *(long *)(*param_3 + 0x1c0);
            uVar19 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
            if ((uVar19 <= *puVar11) || (uVar15 = (ulong)puVar11[1], uVar19 <= uVar15))
            goto LAB_10ac038e8;
            lVar21 = param_3[1];
            lVar7 = lVar21;
            FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)*puVar11 * 0x10));
            lVar10 = lVar21;
            FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + uVar15 * 0x10));
            FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
            lVar6 = param_3[1];
            FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
            puVar13 = puVar11 + 1;
            uVar19 = uVar16;
            if (*(int *)(lVar6 + 0x38) <= *(int *)(lVar21 + 0x38)) {
              puVar13 = puVar11;
              uVar19 = uVar17;
            }
          }
          lVar6 = *(long *)(*param_3 + 0x1c0);
          uVar16 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
          if ((uVar16 <= *puVar13) || (uVar16 <= uVar2)) goto LAB_10ac038e8;
          lVar21 = param_3[1];
          lVar7 = lVar21;
          FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)*puVar13 * 0x10));
          lVar10 = lVar21;
          FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar2 * 0x10));
          FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
          lVar6 = param_3[1];
          FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
          puVar11 = puVar8;
        } while (*(int *)(lVar6 + 0x38) <= *(int *)(lVar21 + 0x38));
        *puVar8 = uVar2;
      }
    }
    bVar5 = uVar12 != 0;
    uVar12 = uVar12 - 1;
  } while (bVar5);
  do {
    uVar12 = 0;
    uVar2 = *param_1;
    puVar11 = param_1;
    do {
      puVar13 = puVar11 + uVar12 + 1;
      uVar16 = uVar12 << 1 | 1;
      uVar14 = uVar12 * 2 + 2;
      puVar8 = puVar13;
      uVar17 = uVar16;
      if ((long)uVar14 < (long)uVar18) {
        lVar6 = *(long *)(*param_3 + 0x1c0);
        uVar17 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
        if (uVar17 <= *puVar13) goto LAB_10ac038e8;
        uVar19 = (ulong)puVar11[uVar12 + 2];
        if (uVar17 <= uVar19) goto LAB_10ac038e8;
        lVar21 = param_3[1];
        lVar7 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)*puVar13 * 0x10));
        lVar10 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + uVar19 * 0x10));
        FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
        lVar6 = param_3[1];
        FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
        puVar8 = puVar11 + uVar12 + 2;
        uVar17 = uVar14;
        if (*(int *)(lVar6 + 0x38) <= *(int *)(lVar21 + 0x38)) {
          puVar8 = puVar13;
          uVar17 = uVar16;
        }
      }
      uVar12 = uVar17;
      *puVar11 = *puVar8;
      puVar11 = puVar8;
    } while ((long)uVar12 <= (long)(uVar18 - 2 >> 1));
    puStack_70 = puStack_70 + -1;
    if (puVar8 == puStack_70) {
      *puVar8 = uVar2;
    }
    else {
      *puVar8 = *puStack_70;
      *puStack_70 = uVar2;
      lVar6 = (long)puVar8 + (2 - (long)param_1) >> 1;
      if (1 < lVar6) {
        uVar16 = lVar6 - 2U >> 1;
        uVar12 = (ulong)param_1[uVar16];
        lVar6 = *(long *)(*param_3 + 0x1c0);
        uVar14 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
        if ((uVar14 <= uVar12) || (uVar2 = *puVar8, uVar14 <= uVar2)) {
LAB_10ac038e8:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac038ec);
          (*pcVar4)();
        }
        lVar21 = param_3[1];
        lVar7 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + uVar12 * 0x10));
        lVar10 = lVar21;
        FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar2 * 0x10));
        FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
        lVar6 = param_3[1];
        FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
        if (*(int *)(lVar21 + 0x38) < *(int *)(lVar6 + 0x38)) {
          uVar2 = *puVar8;
          puVar11 = param_1 + uVar16;
          do {
            puVar13 = puVar11;
            *puVar8 = *puVar13;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1 >> 1;
            uVar12 = (ulong)param_1[uVar16];
            lVar6 = *(long *)(*param_3 + 0x1c0);
            uVar14 = *(long *)(*param_3 + 0x1c8) - lVar6 >> 4;
            if ((uVar14 <= uVar12) || (uVar14 <= uVar2)) goto LAB_10ac038e8;
            lVar21 = param_3[1];
            lVar7 = lVar21;
            FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + uVar12 * 0x10));
            lVar10 = lVar21;
            FUN_10abea338(lVar21,*(undefined2 *)(lVar6 + (ulong)uVar2 * 0x10));
            FUN_10a01f6d4(lVar21,*(undefined2 *)(lVar7 + 2));
            lVar6 = param_3[1];
            FUN_10a01f6d4(lVar6,*(undefined2 *)(lVar10 + 2));
            puVar8 = puVar13;
            puVar11 = param_1 + uVar16;
          } while (*(int *)(lVar21 + 0x38) < *(int *)(lVar6 + 0x38));
          *puVar13 = uVar2;
        }
      }
    }
    bVar5 = (long)uVar18 < 3;
    uVar18 = uVar18 - 1;
    if (bVar5) {
      return;
    }
  } while( true );
LAB_10ac02f6c:
  puStack_70 = puVar20;
  if (((ulong)puVar8 & 1) != 0) {
    return;
  }
  goto LAB_10ac026c8;
}



/* Entry: 10ac038ec; end: 10ac03beb;  */

void FUN_10ac038ec(ushort *param_1,ushort *param_2,ushort *param_3,long *param_4)

{
  ushort uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = *(long *)(*param_4 + 0x1c0);
  uVar7 = *(long *)(*param_4 + 0x1c8) - lVar5 >> 4;
  if ((*param_2 < uVar7) && (uVar1 = *param_1, uVar1 < uVar7)) {
    lVar8 = param_4[1];
    lVar4 = lVar8;
    FUN_10abea338(lVar8,*(undefined2 *)(lVar5 + (ulong)*param_2 * 0x10));
    lVar3 = lVar8;
    FUN_10abea338(lVar8,*(undefined2 *)(lVar5 + (ulong)uVar1 * 0x10));
    FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar4 + 2));
    lVar4 = param_4[1];
    FUN_10a01f6d4(lVar4,*(undefined2 *)(lVar3 + 2));
    uVar7 = (ulong)*param_3;
    lVar5 = *(long *)(*param_4 + 0x1c0);
    uVar6 = *(long *)(*param_4 + 0x1c8) - lVar5 >> 4;
    if (*(int *)(lVar8 + 0x38) < *(int *)(lVar4 + 0x38)) {
      if ((uVar7 < uVar6) && (uVar1 = *param_2, uVar1 < uVar6)) {
        lVar8 = param_4[1];
        lVar4 = lVar8;
        FUN_10abea338(lVar8,*(undefined2 *)(lVar5 + uVar7 * 0x10));
        lVar3 = lVar8;
        FUN_10abea338(lVar8,*(undefined2 *)(lVar5 + (ulong)uVar1 * 0x10));
        FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar4 + 2));
        lVar5 = param_4[1];
        FUN_10a01f6d4(lVar5,*(undefined2 *)(lVar3 + 2));
        uVar1 = *param_1;
        if (*(int *)(lVar8 + 0x38) < *(int *)(lVar5 + 0x38)) {
          *param_1 = *param_3;
          *param_3 = uVar1;
        }
        else {
          *param_1 = *param_2;
          *param_2 = uVar1;
          lVar5 = *(long *)(*param_4 + 0x1c0);
          uVar7 = *(long *)(*param_4 + 0x1c8) - lVar5 >> 4;
          if ((uVar7 <= *param_3) || (uVar7 <= uVar1)) goto LAB_10ac03be8;
          lVar8 = param_4[1];
          lVar4 = lVar8;
          FUN_10abea338(lVar8,*(undefined2 *)(lVar5 + (ulong)*param_3 * 0x10));
          lVar3 = lVar8;
          FUN_10abea338(lVar8,*(undefined2 *)(lVar5 + (ulong)uVar1 * 0x10));
          FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar4 + 2));
          lVar5 = param_4[1];
          FUN_10a01f6d4(lVar5,*(undefined2 *)(lVar3 + 2));
          if (*(int *)(lVar8 + 0x38) < *(int *)(lVar5 + 0x38)) {
            uVar1 = *param_2;
            *param_2 = *param_3;
            *param_3 = uVar1;
          }
        }
        return;
      }
    }
    else if ((uVar7 < uVar6) && (uVar1 = *param_2, uVar1 < uVar6)) {
      lVar8 = param_4[1];
      lVar4 = lVar8;
      FUN_10abea338(lVar8,*(undefined2 *)(lVar5 + uVar7 * 0x10));
      lVar3 = lVar8;
      FUN_10abea338(lVar8,*(undefined2 *)(lVar5 + (ulong)uVar1 * 0x10));
      FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar4 + 2));
      lVar5 = param_4[1];
      FUN_10a01f6d4(lVar5,*(undefined2 *)(lVar3 + 2));
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar8 + 0x38)) {
        return;
      }
      uVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar1;
      lVar5 = *(long *)(*param_4 + 0x1c0);
      uVar7 = *(long *)(*param_4 + 0x1c8) - lVar5 >> 4;
      if ((*param_2 < uVar7) && (uVar1 = *param_1, uVar1 < uVar7)) {
        lVar8 = param_4[1];
        lVar4 = lVar8;
        FUN_10abea338(lVar8,*(undefined2 *)(lVar5 + (ulong)*param_2 * 0x10));
        lVar3 = lVar8;
        FUN_10abea338(lVar8,*(undefined2 *)(lVar5 + (ulong)uVar1 * 0x10));
        FUN_10a01f6d4(lVar8,*(undefined2 *)(lVar4 + 2));
        lVar5 = param_4[1];
        FUN_10a01f6d4(lVar5,*(undefined2 *)(lVar3 + 2));
        if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar8 + 0x38)) {
          return;
        }
        uVar1 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar1;
        return;
      }
    }
  }
LAB_10ac03be8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ac03bec);
  (*pcVar2)();
}



/* Entry: 10ac03bec; end: 10ac0439b;  */

void FUN_10ac03bec(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,long *param_5)

{
  ushort uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  FUN_10ac038ec();
  lVar5 = *(long *)(*param_5 + 0x1c0);
  uVar6 = *(long *)(*param_5 + 0x1c8) - lVar5 >> 4;
  if ((*param_4 < uVar6) && (uVar1 = *param_3, uVar1 < uVar6)) {
    lVar7 = param_5[1];
    lVar3 = lVar7;
    FUN_10abea338(lVar7,*(undefined2 *)(lVar5 + (ulong)*param_4 * 0x10));
    lVar4 = lVar7;
    FUN_10abea338(lVar7,*(undefined2 *)(lVar5 + (ulong)uVar1 * 0x10));
    FUN_10a01f6d4(lVar7,*(undefined2 *)(lVar3 + 2));
    lVar5 = param_5[1];
    FUN_10a01f6d4(lVar5,*(undefined2 *)(lVar4 + 2));
    if (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38)) {
      uVar1 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar1;
      lVar5 = *(long *)(*param_5 + 0x1c0);
      uVar6 = *(long *)(*param_5 + 0x1c8) - lVar5 >> 4;
      if ((uVar6 <= *param_3) || (uVar1 = *param_2, uVar6 <= uVar1)) goto LAB_10ac03df0;
      lVar7 = param_5[1];
      lVar3 = lVar7;
      FUN_10abea338(lVar7,*(undefined2 *)(lVar5 + (ulong)*param_3 * 0x10));
      lVar4 = lVar7;
      FUN_10abea338(lVar7,*(undefined2 *)(lVar5 + (ulong)uVar1 * 0x10));
      FUN_10a01f6d4(lVar7,*(undefined2 *)(lVar3 + 2));
      lVar5 = param_5[1];
      FUN_10a01f6d4(lVar5,*(undefined2 *)(lVar4 + 2));
      if (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38)) {
        uVar1 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar1;
        lVar5 = *(long *)(*param_5 + 0x1c0);
        uVar6 = *(long *)(*param_5 + 0x1c8) - lVar5 >> 4;
        if ((uVar6 <= *param_2) || (uVar1 = *param_1, uVar6 <= uVar1)) goto LAB_10ac03df0;
        lVar7 = param_5[1];
        lVar3 = lVar7;
        FUN_10abea338(lVar7,*(undefined2 *)(lVar5 + (ulong)*param_2 * 0x10));
        lVar4 = lVar7;
        FUN_10abea338(lVar7,*(undefined2 *)(lVar5 + (ulong)uVar1 * 0x10));
        FUN_10a01f6d4(lVar7,*(undefined2 *)(lVar3 + 2));
        lVar5 = param_5[1];
        FUN_10a01f6d4(lVar5,*(undefined2 *)(lVar4 + 2));
        if (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38)) {
          uVar1 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar1;
        }
      }
    }
    return;
  }
LAB_10ac03df0:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ac03df4);
  (*pcVar2)();
}



/* Entry: 10ac0439c; end: 10ac043af;  */

long * FUN_10ac0439c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar3 = (long *)&UNK_10f69b42f;
  FUN_109ffde64();
  lVar12 = plVar3[1] - *plVar3;
  uVar8 = (lVar12 >> 5) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0xba2e8ba2e8ba2e < uVar8) {
    FUN_10ac047dc();
LAB_10ac0466c:
    func_0x000109ffded8();
    FUN_10ac047f0(&plStack_78);
    __Unwind_Resume();
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = 0;
    FUN_10ac00830();
    lVar5 = *(long *)(param_2 + 0x20);
    lVar12 = *(long *)(param_2 + 0x18);
    *(undefined8 *)((long)plVar3 + 0x26) = *(undefined8 *)(param_2 + 0x26);
    plVar3[4] = lVar5;
    plVar3[3] = lVar12;
    plVar3[6] = 0;
    lVar12 = *(long *)(param_2 + 0x30);
    plVar3[6] = lVar12;
    if (lVar12 != 0) {
      puVar7 = (undefined1 *)(param_2 + 0x38);
      plVar4 = plVar3 + 7;
      do {
        *(undefined1 *)plVar4 = *puVar7;
        lVar12 = lVar12 + -1;
        puVar7 = puVar7 + 1;
        plVar4 = (long *)((long)plVar4 + 1);
      } while (lVar12 != 0);
    }
    plVar3[8] = 0;
    lVar12 = *(long *)(param_2 + 0x40);
    plVar3[8] = lVar12;
    if (lVar12 != 0) {
      plVar4 = (long *)(param_2 + 0x48);
      plVar9 = plVar3 + 9;
      do {
        lVar5 = *plVar4;
        plVar9[1] = plVar4[1];
        *plVar9 = lVar5;
        lVar12 = lVar12 + -1;
        plVar4 = plVar4 + 2;
        plVar9 = plVar9 + 2;
      } while (lVar12 != 0);
    }
    plVar3[0x11] = 0;
    lVar12 = *(long *)(param_2 + 0x88);
    plVar3[0x11] = lVar12;
    if (lVar12 != 0) {
      puVar7 = (undefined1 *)(param_2 + 0x90);
      plVar4 = plVar3 + 0x12;
      do {
        *(undefined1 *)plVar4 = *puVar7;
        lVar12 = lVar12 + -1;
        puVar7 = puVar7 + 1;
        plVar4 = (long *)((long)plVar4 + 1);
      } while (lVar12 != 0);
    }
    plVar3[0x13] = *(long *)(param_2 + 0x98);
    plVar3[0x14] = (long)&PTR_FUN_110c54d98;
    plVar3[0x15] = 0;
    lVar12 = *(long *)(param_2 + 0xa8);
    plVar3[0x15] = lVar12;
    if (lVar12 != 0) {
      plVar4 = (long *)(param_2 + 0xb0);
      plVar9 = plVar3 + 0x16;
      do {
        lVar5 = *plVar4;
        plVar9[1] = plVar4[1];
        *plVar9 = lVar5;
        lVar12 = lVar12 + -1;
        plVar4 = plVar4 + 2;
        plVar9 = plVar9 + 2;
      } while (lVar12 != 0);
    }
    lVar5 = *(long *)(param_2 + 0xf8);
    lVar12 = *(long *)(param_2 + 0xf0);
    lVar16 = *(long *)(param_2 + 0x108);
    lVar15 = *(long *)(param_2 + 0x100);
    uVar14 = *(undefined8 *)(param_2 + 0x109);
    *(undefined8 *)((long)plVar3 + 0x111) = *(undefined8 *)(param_2 + 0x111);
    *(undefined8 *)((long)plVar3 + 0x109) = uVar14;
    plVar3[0x1f] = lVar5;
    plVar3[0x1e] = lVar12;
    plVar3[0x21] = lVar16;
    plVar3[0x20] = lVar15;
    plVar3[0x24] = 0;
    lVar12 = *(long *)(param_2 + 0x120);
    plVar3[0x24] = lVar12;
    if (lVar12 != 0) {
      plVar4 = (long *)(param_2 + 0x128);
      plVar9 = plVar3 + 0x25;
      do {
        *plVar9 = *plVar4;
        lVar12 = lVar12 + -1;
        plVar4 = plVar4 + 1;
        plVar9 = plVar9 + 1;
      } while (lVar12 != 0);
    }
    lVar5 = *(long *)(param_2 + 0x150);
    lVar12 = *(long *)(param_2 + 0x148);
    *(undefined2 *)(plVar3 + 0x2b) = *(undefined2 *)(param_2 + 0x158);
    plVar3[0x2a] = lVar5;
    plVar3[0x29] = lVar12;
    return plVar3;
  }
  lVar5 = plVar3[2] - *plVar3 >> 5;
  uVar10 = lVar5 * 0x5d1745d1745d1746;
  if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
    uVar10 = uVar8;
  }
  if (0x5d1745d1745d16 < (ulong)(lVar5 * 0x2e8ba2e8ba2e8ba3)) {
    uVar10 = 0xba2e8ba2e8ba2e;
  }
  plStack_58 = plVar3;
  if (uVar10 == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    if (0xba2e8ba2e8ba2e < uVar10) goto LAB_10ac0466c;
    plVar4 = (long *)(uVar10 * 0x160);
    __Znwm();
  }
  lVar12 = (long)plVar4 + lVar12;
  plStack_78 = plVar4;
  plStack_70 = (long *)lVar12;
  plStack_68 = (long *)lVar12;
  plStack_60 = plVar4 + uVar10 * 0x2c;
  FUN_10ac04684(lVar12,param_2);
  plStack_68 = (long *)(lVar12 + 0x160);
  plVar13 = (long *)*plVar3;
  plVar2 = (long *)plVar3[1];
  plVar1 = (long *)(lVar12 + ((long)plVar13 - (long)plVar2));
  plVar6 = plVar1;
  plVar9 = plVar13;
  plVar11 = plStack_68;
  plVar4 = plVar4 + uVar10 * 0x2c;
  if ((long)plVar13 - (long)plVar2 != 0) {
    do {
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[2] = 0;
      lVar12 = *plVar9;
      plVar6[1] = plVar9[1];
      *plVar6 = lVar12;
      plVar6[2] = plVar9[2];
      *plVar9 = 0;
      plVar9[1] = 0;
      plVar9[2] = 0;
      lVar5 = plVar9[4];
      lVar12 = plVar9[3];
      *(undefined8 *)((long)plVar6 + 0x26) = *(undefined8 *)((long)plVar9 + 0x26);
      plVar6[4] = lVar5;
      plVar6[3] = lVar12;
      plVar6[6] = 0;
      lVar12 = plVar9[6];
      plVar6[6] = lVar12;
      if (lVar12 != 0) {
        lVar5 = 0;
        do {
          *(undefined1 *)((long)plVar6 + lVar5 + 0x38) =
               *(undefined1 *)((long)plVar9 + lVar5 + 0x38);
          lVar5 = lVar5 + 1;
        } while (lVar12 != lVar5);
      }
      plVar6[8] = 0;
      lVar12 = plVar9[8];
      plVar6[8] = lVar12;
      if (lVar12 != 0) {
        lVar5 = 0;
        do {
          uVar14 = *(undefined8 *)((long)plVar9 + lVar5 + 0x48);
          *(undefined8 *)((long)plVar6 + lVar5 + 0x50) =
               *(undefined8 *)((long)plVar9 + lVar5 + 0x50);
          *(undefined8 *)((long)plVar6 + lVar5 + 0x48) = uVar14;
          lVar5 = lVar5 + 0x10;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      plVar6[0x11] = 0;
      lVar12 = plVar9[0x11];
      plVar6[0x11] = lVar12;
      if (lVar12 != 0) {
        lVar5 = 0;
        do {
          *(undefined1 *)((long)plVar6 + lVar5 + 0x90) =
               *(undefined1 *)((long)plVar9 + lVar5 + 0x90);
          lVar5 = lVar5 + 1;
        } while (lVar12 != lVar5);
      }
      plVar6[0x13] = plVar9[0x13];
      plVar6[0x14] = (long)&PTR_FUN_110c54d98;
      plVar6[0x15] = 0;
      lVar12 = plVar9[0x15];
      plVar6[0x15] = lVar12;
      if (lVar12 != 0) {
        lVar5 = 0;
        do {
          uVar14 = *(undefined8 *)((long)plVar9 + lVar5 + 0xb0);
          *(undefined8 *)((long)plVar6 + lVar5 + 0xb8) =
               *(undefined8 *)((long)plVar9 + lVar5 + 0xb8);
          *(undefined8 *)((long)plVar6 + lVar5 + 0xb0) = uVar14;
          lVar5 = lVar5 + 0x10;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      lVar5 = plVar9[0x1f];
      lVar12 = plVar9[0x1e];
      lVar16 = plVar9[0x21];
      lVar15 = plVar9[0x20];
      uVar14 = *(undefined8 *)((long)plVar9 + 0x109);
      *(undefined8 *)((long)plVar6 + 0x111) = *(undefined8 *)((long)plVar9 + 0x111);
      *(undefined8 *)((long)plVar6 + 0x109) = uVar14;
      plVar6[0x1f] = lVar5;
      plVar6[0x1e] = lVar12;
      plVar6[0x21] = lVar16;
      plVar6[0x20] = lVar15;
      plVar6[0x24] = 0;
      lVar12 = plVar9[0x24];
      plVar6[0x24] = lVar12;
      if (lVar12 != 0) {
        lVar5 = 0x128;
        do {
          *(undefined8 *)((long)plVar6 + lVar5) = *(undefined8 *)((long)plVar9 + lVar5);
          lVar5 = lVar5 + 8;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      lVar5 = plVar9[0x2a];
      lVar12 = plVar9[0x29];
      *(short *)(plVar6 + 0x2b) = (short)plVar9[0x2b];
      plVar6[0x2a] = lVar5;
      plVar6[0x29] = lVar12;
      plVar9 = plVar9 + 0x2c;
      plVar6 = plVar6 + 0x2c;
    } while (plVar9 != plVar2);
    do {
      if (*plVar13 != 0) {
        plVar13[1] = *plVar13;
        __ZdlPv();
      }
      plVar13 = plVar13 + 0x2c;
    } while (plVar13 != plVar2);
    plVar13 = (long *)*plVar3;
    plVar11 = plStack_68;
    plVar4 = plStack_60;
  }
  *plVar3 = (long)plVar1;
  plVar3[1] = (long)plVar11;
  plStack_60 = (long *)plVar3[2];
  plVar3[2] = (long)plVar4;
  plStack_78 = plVar13;
  plStack_70 = plVar13;
  plStack_68 = plVar13;
  FUN_10ac047f0(&plStack_78);
  return plVar11;
}



/* Entry: 10ac043b0; end: 10ac04683;  */

long * FUN_10ac043b0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar11 = param_1[1] - *param_1;
  uVar7 = (lVar11 >> 5) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0xba2e8ba2e8ba2e < uVar7) {
    FUN_10ac047dc();
LAB_10ac0466c:
    func_0x000109ffded8();
    FUN_10ac047f0(&plStack_68);
    __Unwind_Resume();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_10ac00830();
    lVar4 = *(long *)(param_2 + 0x20);
    lVar11 = *(long *)(param_2 + 0x18);
    *(undefined8 *)((long)param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
    param_1[4] = lVar4;
    param_1[3] = lVar11;
    param_1[6] = 0;
    lVar11 = *(long *)(param_2 + 0x30);
    param_1[6] = lVar11;
    if (lVar11 != 0) {
      puVar6 = (undefined1 *)(param_2 + 0x38);
      plVar3 = param_1 + 7;
      do {
        *(undefined1 *)plVar3 = *puVar6;
        lVar11 = lVar11 + -1;
        puVar6 = puVar6 + 1;
        plVar3 = (long *)((long)plVar3 + 1);
      } while (lVar11 != 0);
    }
    param_1[8] = 0;
    lVar11 = *(long *)(param_2 + 0x40);
    param_1[8] = lVar11;
    if (lVar11 != 0) {
      plVar3 = (long *)(param_2 + 0x48);
      plVar8 = param_1 + 9;
      do {
        lVar4 = *plVar3;
        plVar8[1] = plVar3[1];
        *plVar8 = lVar4;
        lVar11 = lVar11 + -1;
        plVar3 = plVar3 + 2;
        plVar8 = plVar8 + 2;
      } while (lVar11 != 0);
    }
    param_1[0x11] = 0;
    lVar11 = *(long *)(param_2 + 0x88);
    param_1[0x11] = lVar11;
    if (lVar11 != 0) {
      puVar6 = (undefined1 *)(param_2 + 0x90);
      plVar3 = param_1 + 0x12;
      do {
        *(undefined1 *)plVar3 = *puVar6;
        lVar11 = lVar11 + -1;
        puVar6 = puVar6 + 1;
        plVar3 = (long *)((long)plVar3 + 1);
      } while (lVar11 != 0);
    }
    param_1[0x13] = *(long *)(param_2 + 0x98);
    param_1[0x14] = (long)&PTR_FUN_110c54d98;
    param_1[0x15] = 0;
    lVar11 = *(long *)(param_2 + 0xa8);
    param_1[0x15] = lVar11;
    if (lVar11 != 0) {
      plVar3 = (long *)(param_2 + 0xb0);
      plVar8 = param_1 + 0x16;
      do {
        lVar4 = *plVar3;
        plVar8[1] = plVar3[1];
        *plVar8 = lVar4;
        lVar11 = lVar11 + -1;
        plVar3 = plVar3 + 2;
        plVar8 = plVar8 + 2;
      } while (lVar11 != 0);
    }
    lVar4 = *(long *)(param_2 + 0xf8);
    lVar11 = *(long *)(param_2 + 0xf0);
    lVar15 = *(long *)(param_2 + 0x108);
    lVar14 = *(long *)(param_2 + 0x100);
    uVar13 = *(undefined8 *)(param_2 + 0x109);
    *(undefined8 *)((long)param_1 + 0x111) = *(undefined8 *)(param_2 + 0x111);
    *(undefined8 *)((long)param_1 + 0x109) = uVar13;
    param_1[0x1f] = lVar4;
    param_1[0x1e] = lVar11;
    param_1[0x21] = lVar15;
    param_1[0x20] = lVar14;
    param_1[0x24] = 0;
    lVar11 = *(long *)(param_2 + 0x120);
    param_1[0x24] = lVar11;
    if (lVar11 != 0) {
      plVar3 = (long *)(param_2 + 0x128);
      plVar8 = param_1 + 0x25;
      do {
        *plVar8 = *plVar3;
        lVar11 = lVar11 + -1;
        plVar3 = plVar3 + 1;
        plVar8 = plVar8 + 1;
      } while (lVar11 != 0);
    }
    lVar4 = *(long *)(param_2 + 0x150);
    lVar11 = *(long *)(param_2 + 0x148);
    *(undefined2 *)(param_1 + 0x2b) = *(undefined2 *)(param_2 + 0x158);
    param_1[0x2a] = lVar4;
    param_1[0x29] = lVar11;
    return param_1;
  }
  lVar4 = param_1[2] - *param_1 >> 5;
  uVar9 = lVar4 * 0x5d1745d1745d1746;
  if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
    uVar9 = uVar7;
  }
  if (0x5d1745d1745d16 < (ulong)(lVar4 * 0x2e8ba2e8ba2e8ba3)) {
    uVar9 = 0xba2e8ba2e8ba2e;
  }
  plStack_48 = param_1;
  if (uVar9 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    if (0xba2e8ba2e8ba2e < uVar9) goto LAB_10ac0466c;
    plVar3 = (long *)(uVar9 * 0x160);
    __Znwm();
  }
  lVar11 = (long)plVar3 + lVar11;
  plStack_68 = plVar3;
  plStack_60 = (long *)lVar11;
  plStack_58 = (long *)lVar11;
  plStack_50 = plVar3 + uVar9 * 0x2c;
  FUN_10ac04684(lVar11,param_2);
  plStack_58 = (long *)(lVar11 + 0x160);
  plVar12 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  plVar1 = (long *)(lVar11 + ((long)plVar12 - (long)plVar2));
  plVar5 = plVar1;
  plVar8 = plVar12;
  plVar10 = plStack_58;
  plVar3 = plVar3 + uVar9 * 0x2c;
  if ((long)plVar12 - (long)plVar2 != 0) {
    do {
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = 0;
      lVar11 = *plVar8;
      plVar5[1] = plVar8[1];
      *plVar5 = lVar11;
      plVar5[2] = plVar8[2];
      *plVar8 = 0;
      plVar8[1] = 0;
      plVar8[2] = 0;
      lVar4 = plVar8[4];
      lVar11 = plVar8[3];
      *(undefined8 *)((long)plVar5 + 0x26) = *(undefined8 *)((long)plVar8 + 0x26);
      plVar5[4] = lVar4;
      plVar5[3] = lVar11;
      plVar5[6] = 0;
      lVar11 = plVar8[6];
      plVar5[6] = lVar11;
      if (lVar11 != 0) {
        lVar4 = 0;
        do {
          *(undefined1 *)((long)plVar5 + lVar4 + 0x38) =
               *(undefined1 *)((long)plVar8 + lVar4 + 0x38);
          lVar4 = lVar4 + 1;
        } while (lVar11 != lVar4);
      }
      plVar5[8] = 0;
      lVar11 = plVar8[8];
      plVar5[8] = lVar11;
      if (lVar11 != 0) {
        lVar4 = 0;
        do {
          uVar13 = *(undefined8 *)((long)plVar8 + lVar4 + 0x48);
          *(undefined8 *)((long)plVar5 + lVar4 + 0x50) =
               *(undefined8 *)((long)plVar8 + lVar4 + 0x50);
          *(undefined8 *)((long)plVar5 + lVar4 + 0x48) = uVar13;
          lVar4 = lVar4 + 0x10;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      plVar5[0x11] = 0;
      lVar11 = plVar8[0x11];
      plVar5[0x11] = lVar11;
      if (lVar11 != 0) {
        lVar4 = 0;
        do {
          *(undefined1 *)((long)plVar5 + lVar4 + 0x90) =
               *(undefined1 *)((long)plVar8 + lVar4 + 0x90);
          lVar4 = lVar4 + 1;
        } while (lVar11 != lVar4);
      }
      plVar5[0x13] = plVar8[0x13];
      plVar5[0x14] = (long)&PTR_FUN_110c54d98;
      plVar5[0x15] = 0;
      lVar11 = plVar8[0x15];
      plVar5[0x15] = lVar11;
      if (lVar11 != 0) {
        lVar4 = 0;
        do {
          uVar13 = *(undefined8 *)((long)plVar8 + lVar4 + 0xb0);
          *(undefined8 *)((long)plVar5 + lVar4 + 0xb8) =
               *(undefined8 *)((long)plVar8 + lVar4 + 0xb8);
          *(undefined8 *)((long)plVar5 + lVar4 + 0xb0) = uVar13;
          lVar4 = lVar4 + 0x10;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      lVar4 = plVar8[0x1f];
      lVar11 = plVar8[0x1e];
      lVar15 = plVar8[0x21];
      lVar14 = plVar8[0x20];
      uVar13 = *(undefined8 *)((long)plVar8 + 0x109);
      *(undefined8 *)((long)plVar5 + 0x111) = *(undefined8 *)((long)plVar8 + 0x111);
      *(undefined8 *)((long)plVar5 + 0x109) = uVar13;
      plVar5[0x1f] = lVar4;
      plVar5[0x1e] = lVar11;
      plVar5[0x21] = lVar15;
      plVar5[0x20] = lVar14;
      plVar5[0x24] = 0;
      lVar11 = plVar8[0x24];
      plVar5[0x24] = lVar11;
      if (lVar11 != 0) {
        lVar4 = 0x128;
        do {
          *(undefined8 *)((long)plVar5 + lVar4) = *(undefined8 *)((long)plVar8 + lVar4);
          lVar4 = lVar4 + 8;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      lVar4 = plVar8[0x2a];
      lVar11 = plVar8[0x29];
      *(short *)(plVar5 + 0x2b) = (short)plVar8[0x2b];
      plVar5[0x2a] = lVar4;
      plVar5[0x29] = lVar11;
      plVar8 = plVar8 + 0x2c;
      plVar5 = plVar5 + 0x2c;
    } while (plVar8 != plVar2);
    do {
      if (*plVar12 != 0) {
        plVar12[1] = *plVar12;
        __ZdlPv();
      }
      plVar12 = plVar12 + 0x2c;
    } while (plVar12 != plVar2);
    plVar12 = (long *)*param_1;
    plVar10 = plStack_58;
    plVar3 = plStack_50;
  }
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar10;
  plStack_50 = (long *)param_1[2];
  param_1[2] = (long)plVar3;
  plStack_68 = plVar12;
  plStack_60 = plVar12;
  plStack_58 = plVar12;
  FUN_10ac047f0(&plStack_68);
  return plVar10;
}



/* Entry: 10ac04684; end: 10ac047db;  */

undefined8 * FUN_10ac04684(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10ac00830();
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)((long)param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  param_1[4] = uVar6;
  param_1[3] = uVar5;
  param_1[6] = 0;
  lVar1 = *(long *)(param_2 + 0x30);
  param_1[6] = lVar1;
  if (lVar1 != 0) {
    puVar2 = (undefined1 *)(param_2 + 0x38);
    puVar3 = param_1 + 7;
    do {
      *(undefined1 *)puVar3 = *puVar2;
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
      puVar3 = (undefined8 *)((long)puVar3 + 1);
    } while (lVar1 != 0);
  }
  param_1[8] = 0;
  lVar1 = *(long *)(param_2 + 0x40);
  param_1[8] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_2 + 0x48);
    puVar4 = param_1 + 9;
    do {
      uVar5 = *puVar3;
      puVar4[1] = puVar3[1];
      *puVar4 = uVar5;
      lVar1 = lVar1 + -1;
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 2;
    } while (lVar1 != 0);
  }
  param_1[0x11] = 0;
  lVar1 = *(long *)(param_2 + 0x88);
  param_1[0x11] = lVar1;
  if (lVar1 != 0) {
    puVar2 = (undefined1 *)(param_2 + 0x90);
    puVar3 = param_1 + 0x12;
    do {
      *(undefined1 *)puVar3 = *puVar2;
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
      puVar3 = (undefined8 *)((long)puVar3 + 1);
    } while (lVar1 != 0);
  }
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  param_1[0x14] = &PTR_FUN_110c54d98;
  param_1[0x15] = 0;
  lVar1 = *(long *)(param_2 + 0xa8);
  param_1[0x15] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_2 + 0xb0);
    puVar4 = param_1 + 0x16;
    do {
      uVar5 = *puVar3;
      puVar4[1] = puVar3[1];
      *puVar4 = uVar5;
      lVar1 = lVar1 + -1;
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 2;
    } while (lVar1 != 0);
  }
  uVar6 = *(undefined8 *)(param_2 + 0xf8);
  uVar5 = *(undefined8 *)(param_2 + 0xf0);
  uVar8 = *(undefined8 *)(param_2 + 0x108);
  uVar7 = *(undefined8 *)(param_2 + 0x100);
  uVar9 = *(undefined8 *)(param_2 + 0x109);
  *(undefined8 *)((long)param_1 + 0x111) = *(undefined8 *)(param_2 + 0x111);
  *(undefined8 *)((long)param_1 + 0x109) = uVar9;
  param_1[0x1f] = uVar6;
  param_1[0x1e] = uVar5;
  param_1[0x21] = uVar8;
  param_1[0x20] = uVar7;
  param_1[0x24] = 0;
  lVar1 = *(long *)(param_2 + 0x120);
  param_1[0x24] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_2 + 0x128);
    puVar4 = param_1 + 0x25;
    do {
      *puVar4 = *puVar3;
      lVar1 = lVar1 + -1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (lVar1 != 0);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x150);
  uVar5 = *(undefined8 *)(param_2 + 0x148);
  *(undefined2 *)(param_1 + 0x2b) = *(undefined2 *)(param_2 + 0x158);
  param_1[0x2a] = uVar6;
  param_1[0x29] = uVar5;
  return param_1;
}



/* Entry: 10ac047dc; end: 10ac047ef;  */

long * FUN_10ac047dc(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)&UNK_10f69b42f;
  FUN_109ffde64();
  plVar1 = (long *)plVar2[1];
  plVar4 = (long *)plVar2[2];
  while (plVar3 = plVar4, plVar3 != plVar1) {
    plVar4 = plVar3 + -0x2c;
    plVar2[2] = (long)plVar4;
    if (*plVar4 != 0) {
      plVar3[-0x2b] = *plVar4;
      __ZdlPv();
      plVar4 = (long *)plVar2[2];
    }
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10ac047f0; end: 10ac04883;  */

long * FUN_10ac047f0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)param_1[1];
  plVar3 = (long *)param_1[2];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -0x2c;
    param_1[2] = (long)plVar3;
    if (*plVar3 != 0) {
      plVar2[-0x2b] = *plVar3;
      __ZdlPv();
      plVar3 = (long *)param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ac04884; end: 10ac04953;  */

undefined ** FUN_10ac04884(undefined **param_1,undefined *param_2)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined1 uVar16;
  int iVar17;
  long lVar18;
  long *plVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uStack_58;
  
  puVar20 = PTR___tlv_bootstrap_11340d750;
  ppuVar12 = &PTR___tlv_bootstrap_11340d750;
  ppuVar10 = ppuVar12;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar11 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar10 & 1) == 0) {
    ppuVar10 = ppuVar11;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar10,0x100000000);
    (*(code *)puVar20)();
    *(undefined1 *)ppuVar12 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar15 = (undefined8 *)ppuVar11[2];
  if (puVar15 == (undefined8 *)0x0) {
    param_1[3] = (undefined *)0x0;
    param_1[2] = (undefined *)0x0;
    param_1[5] = (undefined *)0x0;
    param_1[4] = (undefined *)0x0;
    param_1[1] = (undefined *)0x0;
    *param_1 = (undefined *)0x0;
    return ppuVar11;
  }
  cVar3 = *(char *)(puVar15[1] + 0x23);
  *(char *)param_1 = cVar3;
  *(char *)((long)param_1 + 1) = '\0';
  ((char *)((long)param_1 + 2))[0] = '\x13';
  ((char *)((long)param_1 + 2))[1] = '\0';
  param_1[1] = param_2;
  ppuVar12 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar17 = *(int *)ppuVar12;
  if (*(int *)ppuVar12 == 0) {
    uStack_58 = 0;
    _pthread_threadid_np(0,&uStack_58);
    *(int *)ppuVar12 = (int)uStack_58;
    iVar17 = (int)uStack_58;
  }
  param_1[3] = (undefined *)0x0;
  *(int *)(param_1 + 2) = iVar17;
  param_1[4] = (undefined *)0x0;
  *(char *)(param_1 + 5) = '\0';
  if ((cVar3 != '\0') && (puVar15 != (undefined8 *)0x0)) {
    lVar18 = puVar15[1];
    bVar8 = *(byte *)(lVar18 + 0x42) | *(byte *)(lVar18 + 0x43);
    if (((bVar8 & 1) != 0) || (*(char *)(lVar18 + 0x3f) == '\x01')) {
      uVar7 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      puVar20 = (undefined *)cntvct_el0;
      if (uVar7 != 1000000000) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = (ulong)puVar20 / uVar7;
        }
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = (((long)puVar20 - uVar5 * uVar7) * 1000000000) / uVar7;
        }
        puVar20 = (undefined *)(uVar6 + uVar5 * 1000000000);
      }
      param_1[3] = puVar20;
      lVar18 = lRam00000001137ec648;
      if ((bVar8 & 1) != 0) {
        uVar2 = *(undefined4 *)(param_1 + 2);
        uVar4 = *(undefined2 *)((long)param_1 + 2);
        puVar21 = param_1[1];
        puVar13 = puVar15;
        FUN_10a1333cc();
        if (puVar13 != (undefined8 *)0x0) {
          uVar16 = 3;
          if (lRam00000001137ec648 != lVar18) {
            uVar16 = 5;
          }
          lVar1 = 0;
          if (lRam00000001137ec648 != lVar18) {
            lVar1 = lVar18;
          }
          *puVar13 = puVar21;
          puVar13[1] = lVar1;
          puVar13[2] = puVar20;
          *(undefined4 *)(puVar13 + 3) = uVar2;
          *(undefined2 *)((long)puVar13 + 0x1c) = uVar4;
          *(undefined1 *)((long)puVar13 + 0x1e) = uVar16;
          if ((*(byte *)(puVar15 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10ac04afc);
            (*pcVar9)();
          }
          puVar15[0x18] = puVar15[0x18] + 1;
        }
      }
    }
    if (*(char *)(puVar15[1] + 0x41) == '\x01') {
      plVar19 = (long *)puVar15[0xb];
      if (plVar19 != (long *)0x0) {
        plVar14 = plVar19;
        (**(code **)(*plVar19 + 0x28))(plVar19,param_1[1]);
        param_1[4] = (undefined *)plVar14;
      }
      *(bool *)(param_1 + 5) = plVar19 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10ac04954; end: 10ac04afb;  */

undefined1 * FUN_10ac04954(undefined1 *param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined1 uVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uStack_58;
  
  *param_1 = (char)param_2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0x13;
  *(undefined8 *)(param_1 + 8) = param_4;
  ppuVar9 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar13 = *(int *)ppuVar9;
  if (*(int *)ppuVar9 == 0) {
    uStack_58 = 0;
    _pthread_threadid_np(0,&uStack_58);
    *(int *)ppuVar9 = (int)uStack_58;
    iVar13 = (int)uStack_58;
  }
  *(ulong *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 0x10) = iVar13;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x28] = 0;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    lVar14 = param_3[1];
    bVar7 = *(byte *)(lVar14 + 0x42) | *(byte *)(lVar14 + 0x43);
    if (((bVar7 & 1) != 0) || (*(char *)(lVar14 + 0x3f) == '\x01')) {
      uVar6 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar16 = cntvct_el0;
      if (uVar6 != 1000000000) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar16 / uVar6;
        }
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = ((uVar16 - uVar4 * uVar6) * 1000000000) / uVar6;
        }
        uVar16 = uVar5 + uVar4 * 1000000000;
      }
      *(ulong *)(param_1 + 0x18) = uVar16;
      lVar14 = lRam00000001137ec648;
      if ((bVar7 & 1) != 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        uVar3 = *(undefined2 *)(param_1 + 2);
        uVar17 = *(undefined8 *)(param_1 + 8);
        puVar10 = param_3;
        FUN_10a1333cc();
        if (puVar10 != (undefined8 *)0x0) {
          uVar12 = 3;
          if (lRam00000001137ec648 != lVar14) {
            uVar12 = 5;
          }
          lVar1 = 0;
          if (lRam00000001137ec648 != lVar14) {
            lVar1 = lVar14;
          }
          *puVar10 = uVar17;
          puVar10[1] = lVar1;
          puVar10[2] = uVar16;
          *(undefined4 *)(puVar10 + 3) = uVar2;
          *(undefined2 *)((long)puVar10 + 0x1c) = uVar3;
          *(undefined1 *)((long)puVar10 + 0x1e) = uVar12;
          if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10ac04afc);
            (*pcVar8)();
          }
          param_3[0x18] = param_3[0x18] + 1;
        }
      }
    }
    if (*(char *)(param_3[1] + 0x41) == '\x01') {
      plVar15 = (long *)param_3[0xb];
      if (plVar15 != (long *)0x0) {
        plVar11 = plVar15;
        (**(code **)(*plVar15 + 0x28))(plVar15,*(undefined8 *)(param_1 + 8));
        *(long **)(param_1 + 0x20) = plVar11;
      }
      param_1[0x28] = plVar15 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10ac04afc; end: 10ac04b0f;  */

void FUN_10ac04afc(undefined8 param_1,ulong *param_2,undefined2 *param_3,undefined2 *param_4,
                  long param_5)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  
  puVar2 = (ulong *)&UNK_10f69b42f;
  FUN_109ffde64();
  if (0 < param_5) {
    puVar3 = (ulong *)puVar2[1];
    if ((long)(puVar2[2] - (long)puVar3) >> 1 < param_5) {
      uVar7 = *puVar2;
      uVar1 = param_5 + ((long)((long)puVar3 - uVar7) >> 1);
      if ((long)uVar1 < 0) {
        FUN_10a5e4f14();
        puVar3 = puVar2 + 1;
        uVar13 = *puVar2;
        puVar4 = param_2 + 1;
        uVar7 = *param_2;
        uVar1 = uVar13;
        if (uVar7 <= uVar13) {
          uVar1 = uVar7;
        }
        lVar6 = 0;
        if (uVar13 <= uVar7) {
          lVar6 = uVar7 - uVar13;
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(char *)puVar3 = (char)*puVar4;
          puVar3 = (ulong *)((long)puVar3 + 1);
          puVar4 = (ulong *)((long)puVar4 + 1);
        }
        if (uVar13 < uVar7) {
          do {
            *(char *)puVar3 = (char)*puVar4;
            lVar6 = lVar6 + -1;
            puVar4 = (ulong *)((long)puVar4 + 1);
            puVar3 = (ulong *)((long)puVar3 + 1);
          } while (lVar6 != 0);
        }
        *puVar2 = uVar7;
        return;
      }
      uVar5 = puVar2[2] - uVar7;
      uVar13 = uVar5;
      if (uVar5 <= uVar1) {
        uVar13 = uVar1;
      }
      if (0x7ffffffffffffffd < uVar5) {
        uVar13 = 0x7fffffffffffffff;
      }
      if (uVar13 == 0) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = puVar2;
        FUN_10a5e4f28();
      }
      puVar11 = (undefined2 *)((long)puVar3 + ((long)param_2 - uVar7));
      lVar6 = param_5 << 1;
      puVar10 = puVar11;
      do {
        *puVar10 = *param_3;
        lVar6 = lVar6 + -2;
        puVar10 = puVar10 + 1;
        param_3 = param_3 + 1;
      } while (lVar6 != 0);
      _memcpy(puVar11 + param_5,param_2,puVar2[1] - (long)param_2);
      uVar1 = puVar2[1];
      puVar2[1] = (ulong)param_2;
      uVar5 = (long)puVar11 - ((long)param_2 - *puVar2);
      _memcpy(uVar5);
      uVar7 = *puVar2;
      *puVar2 = uVar5;
      puVar2[1] = (ulong)((long)(puVar11 + param_5) + (uVar1 - (long)param_2));
      puVar2[2] = (ulong)((long)puVar3 + uVar13 * 2);
      if (uVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return;
      }
    }
    else {
      lVar6 = (long)puVar3 - (long)param_2;
      if (param_5 <= lVar6 >> 1) {
        puVar4 = (ulong *)((long)param_2 + param_5 * 2);
        puVar8 = puVar3;
        for (puVar9 = (ulong *)((long)puVar3 + param_5 * -2); puVar9 < puVar3;
            puVar9 = (ulong *)((long)puVar9 + 2)) {
          *(short *)puVar8 = (short)*puVar9;
          puVar8 = (ulong *)((long)puVar8 + 2);
        }
        puVar2[1] = (ulong)puVar8;
        if (puVar3 != puVar4) {
          _memmove(puVar4,param_2);
        }
        lVar6 = param_5 << 1;
LAB_10ac04ce8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(param_2,param_3,lVar6);
        return;
      }
      puVar4 = puVar3;
      puVar8 = puVar3;
      for (puVar11 = (undefined2 *)(lVar6 + (long)param_3); puVar11 != param_4;
          puVar11 = puVar11 + 1) {
        *(undefined2 *)puVar8 = *puVar11;
        puVar4 = (ulong *)((long)puVar4 + 2);
        puVar8 = (ulong *)((long)puVar8 + 2);
      }
      puVar2[1] = (ulong)puVar4;
      if (0 < lVar6 >> 1) {
        puVar9 = (ulong *)((long)param_2 + param_5 * 2);
        puVar12 = (ulong *)((long)puVar4 + param_5 * -2);
        for (; puVar12 < puVar3; puVar12 = (ulong *)((long)puVar12 + 2)) {
          *(short *)puVar4 = (short)*puVar12;
          puVar4 = (ulong *)((long)puVar4 + 2);
        }
        puVar2[1] = (ulong)puVar4;
        if (puVar8 != puVar9) {
          _memmove(puVar9,param_2);
        }
        if (puVar3 != param_2) goto LAB_10ac04ce8;
      }
    }
  }
  return;
}



/* Entry: 10ac04b10; end: 10ac04d13;  */

void FUN_10ac04b10(ulong *param_1,ulong *param_2,undefined2 *param_3,undefined2 *param_4,
                  long param_5)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  ulong *puVar11;
  ulong uVar12;
  
  if (0 < param_5) {
    puVar2 = (ulong *)param_1[1];
    if ((long)(param_1[2] - (long)puVar2) >> 1 < param_5) {
      uVar6 = *param_1;
      uVar1 = param_5 + ((long)((long)puVar2 - uVar6) >> 1);
      if ((long)uVar1 < 0) {
        FUN_10a5e4f14();
        puVar2 = param_1 + 1;
        uVar12 = *param_1;
        puVar3 = param_2 + 1;
        uVar6 = *param_2;
        uVar1 = uVar12;
        if (uVar6 <= uVar12) {
          uVar1 = uVar6;
        }
        lVar5 = 0;
        if (uVar12 <= uVar6) {
          lVar5 = uVar6 - uVar12;
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(char *)puVar2 = (char)*puVar3;
          puVar2 = (ulong *)((long)puVar2 + 1);
          puVar3 = (ulong *)((long)puVar3 + 1);
        }
        if (uVar12 < uVar6) {
          do {
            *(char *)puVar2 = (char)*puVar3;
            lVar5 = lVar5 + -1;
            puVar3 = (ulong *)((long)puVar3 + 1);
            puVar2 = (ulong *)((long)puVar2 + 1);
          } while (lVar5 != 0);
        }
        *param_1 = uVar6;
        return;
      }
      uVar4 = param_1[2] - uVar6;
      uVar12 = uVar4;
      if (uVar4 <= uVar1) {
        uVar12 = uVar1;
      }
      if (0x7ffffffffffffffd < uVar4) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar12 == 0) {
        puVar2 = (ulong *)0x0;
      }
      else {
        puVar2 = param_1;
        FUN_10a5e4f28();
      }
      puVar10 = (undefined2 *)((long)puVar2 + ((long)param_2 - uVar6));
      lVar5 = param_5 << 1;
      puVar9 = puVar10;
      do {
        *puVar9 = *param_3;
        lVar5 = lVar5 + -2;
        puVar9 = puVar9 + 1;
        param_3 = param_3 + 1;
      } while (lVar5 != 0);
      _memcpy(puVar10 + param_5,param_2,param_1[1] - (long)param_2);
      uVar1 = param_1[1];
      param_1[1] = (ulong)param_2;
      uVar4 = (long)puVar10 - ((long)param_2 - *param_1);
      _memcpy(uVar4);
      uVar6 = *param_1;
      *param_1 = uVar4;
      param_1[1] = (long)(puVar10 + param_5) + (uVar1 - (long)param_2);
      param_1[2] = (long)puVar2 + uVar12 * 2;
      if (uVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return;
      }
    }
    else {
      lVar5 = (long)puVar2 - (long)param_2;
      if (param_5 <= lVar5 >> 1) {
        puVar3 = (ulong *)((long)param_2 + param_5 * 2);
        puVar7 = puVar2;
        for (puVar8 = (ulong *)((long)puVar2 + param_5 * -2); puVar8 < puVar2;
            puVar8 = (ulong *)((long)puVar8 + 2)) {
          *(short *)puVar7 = (short)*puVar8;
          puVar7 = (ulong *)((long)puVar7 + 2);
        }
        param_1[1] = (ulong)puVar7;
        if (puVar2 != puVar3) {
          _memmove(puVar3,param_2);
        }
        lVar5 = param_5 << 1;
LAB_10ac04ce8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(param_2,param_3,lVar5);
        return;
      }
      puVar3 = puVar2;
      puVar7 = puVar2;
      for (puVar10 = (undefined2 *)(lVar5 + (long)param_3); puVar10 != param_4;
          puVar10 = puVar10 + 1) {
        *(undefined2 *)puVar7 = *puVar10;
        puVar3 = (ulong *)((long)puVar3 + 2);
        puVar7 = (ulong *)((long)puVar7 + 2);
      }
      param_1[1] = (ulong)puVar3;
      if (0 < lVar5 >> 1) {
        puVar8 = (ulong *)((long)param_2 + param_5 * 2);
        puVar11 = (ulong *)((long)puVar3 + param_5 * -2);
        for (; puVar11 < puVar2; puVar11 = (ulong *)((long)puVar11 + 2)) {
          *(short *)puVar3 = (short)*puVar11;
          puVar3 = (ulong *)((long)puVar3 + 2);
        }
        param_1[1] = (ulong)puVar3;
        if (puVar7 != puVar8) {
          _memmove(puVar8,param_2);
        }
        if (puVar2 != param_2) goto LAB_10ac04ce8;
      }
    }
  }
  return;
}



/* Entry: 10ac04d14; end: 10ac04e7f;  */

void FUN_10ac04d14(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  puVar3 = param_1 + 1;
  uVar6 = *param_1;
  puVar2 = param_2 + 1;
  uVar4 = *param_2;
  uVar1 = uVar6;
  if (uVar4 <= uVar6) {
    uVar1 = uVar4;
  }
  lVar5 = 0;
  if (uVar6 <= uVar4) {
    lVar5 = uVar4 - uVar6;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(char *)puVar3 = (char)*puVar2;
    puVar3 = (ulong *)((long)puVar3 + 1);
    puVar2 = (ulong *)((long)puVar2 + 1);
  }
  if (uVar6 < uVar4) {
    do {
      *(char *)puVar3 = (char)*puVar2;
      lVar5 = lVar5 + -1;
      puVar2 = (ulong *)((long)puVar2 + 1);
      puVar3 = (ulong *)((long)puVar3 + 1);
    } while (lVar5 != 0);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 10ac04e80; end: 10ac04ecf;  */

void FUN_10ac04e80(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10ac04ed0; end: 10ac04ef7;  */

void FUN_10ac04ed0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FUN_109ffde64(&UNK_10f69b42f);
  puVar1 = (undefined8 *)&UNK_10f69b42f;
  FUN_109ffde64();
  puVar4 = (undefined8 *)*puVar1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)puVar1[1];
  puVar2 = puVar4;
  if (puVar3 != puVar4) {
    do {
      puVar3 = puVar3 + -0x10;
      (**(code **)*puVar3)(puVar3);
    } while (puVar3 != puVar4);
    puVar2 = (undefined8 *)*puVar1;
  }
  puVar1[1] = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 10ac04ef8; end: 10ac04f6f;  */

void FUN_10ac04ef8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = puVar3;
  if (puVar2 != puVar3) {
    do {
      puVar2 = puVar2 + -0x10;
      (**(code **)*puVar2)(puVar2);
    } while (puVar2 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 10ac04f70; end: 10ac04feb;  */

void FUN_10ac04f70(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_1 != param_2) {
    puVar3 = param_1 + 1;
    uVar4 = *param_1;
    puVar2 = param_2 + 1;
    uVar5 = *param_2;
    uVar7 = uVar4;
    if (uVar5 <= uVar4) {
      uVar7 = uVar5;
    }
    lVar1 = 0;
    if (uVar4 <= uVar5) {
      lVar1 = uVar5 - uVar4;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      uVar6 = *puVar2;
      puVar3[1] = puVar2[1];
      *puVar3 = uVar6;
      puVar3 = puVar3 + 2;
      puVar2 = puVar2 + 2;
    }
    if (uVar4 < uVar5) {
      do {
        uVar7 = *puVar2;
        puVar3[1] = puVar2[1];
        *puVar3 = uVar7;
        lVar1 = lVar1 + -1;
        puVar2 = puVar2 + 2;
        puVar3 = puVar3 + 2;
      } while (lVar1 != 0);
    }
    *param_1 = *param_2;
  }
  return;
}



/* Entry: 10ac04fec; end: 10ac05107;  */

ulong * FUN_10ac04fec(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long lStack_60;
  long lStack_58;
  
  if (param_1 != param_2) {
    puVar3 = param_1 + 1;
    uVar1 = *param_1;
    puVar4 = param_2 + 1;
    uVar2 = *param_2;
    lStack_60 = 0;
    if (uVar1 <= uVar2) {
      lStack_60 = uVar2 - uVar1;
    }
    uVar5 = uVar1;
    if (uVar2 <= uVar1) {
      uVar5 = uVar2;
    }
    lStack_58 = 0;
    if (uVar2 <= uVar1) {
      lStack_58 = uVar1 - uVar2;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      FUN_10a026ab4(puVar3,puVar4);
      uVar1 = puVar4[4];
      uVar2 = puVar4[2];
      puVar3[3] = puVar4[3];
      puVar3[2] = uVar2;
      puVar3[4] = uVar1;
      FUN_10a026ab4(puVar3 + 5,puVar4 + 5);
      uVar2 = puVar4[8];
      uVar1 = puVar4[7];
      puVar3[9] = puVar4[9];
      puVar3[8] = uVar2;
      puVar3[7] = uVar1;
      uVar1 = puVar4[0xc];
      uVar2 = puVar4[10];
      puVar3[0xb] = puVar4[0xb];
      puVar3[10] = uVar2;
      *(int *)(puVar3 + 0xc) = (int)uVar1;
      puVar3 = puVar3 + 0xd;
      puVar4 = puVar4 + 0xd;
    }
    FUN_10a18da98(&lStack_60,puVar3,puVar4);
    if (*param_2 < *param_1) {
      FUN_10ac05108(param_1);
    }
    else {
      *param_1 = *param_2;
    }
  }
  return param_1;
}



/* Entry: 10ac05108; end: 10ac0518b;  */

void FUN_10ac05108(ulong *param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  
  uVar3 = *param_1;
  lVar2 = uVar3 - param_2;
  if (uVar3 < param_2 || lVar2 == 0) {
    if (param_2 != uVar3) {
      puVar4 = param_1 + uVar3 * 0xd + 1;
      do {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0xffffffffffffffff;
        puVar4[4] = 0xffffffffffffffff;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[8] = 0xffffffffffffffff;
        puVar4[9] = 0xffffffffffffffff;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        *(undefined4 *)(puVar4 + 0xc) = 0;
        puVar4 = puVar4 + 0xd;
        bVar1 = lVar2 != -1;
        lVar2 = lVar2 + 1;
      } while (bVar1);
    }
  }
  else {
    func_0x00010a048e34(param_1 + param_2 * 0xd + 1);
  }
  *param_1 = param_2;
  return;
}



/* Entry: 10ac0518c; end: 10ac0519f;  */

undefined8 * FUN_10ac0518c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  puVar3 = (undefined8 *)&UNK_10f69b42f;
  FUN_109ffde64();
  lVar1 = (long)param_2 - (long)puVar3;
  puVar11 = param_3;
  if ((lVar1 != 0) && (lVar2 = (long)param_3 - (long)param_2, puVar11 = puVar3, lVar2 != 0)) {
    if (puVar3 + 1 == param_2) {
      uVar12 = *puVar3;
      _memmove(puVar3);
      *(undefined8 *)((long)puVar3 + lVar2) = uVar12;
      puVar11 = (undefined8 *)((long)puVar3 + lVar2);
    }
    else if (param_2 + 1 == param_3) {
      puVar4 = param_3 + -1;
      uVar12 = *puVar4;
      puVar11 = (undefined8 *)((long)param_3 - ((long)puVar4 - (long)puVar3));
      if ((long)puVar4 - (long)puVar3 != 0) {
        _memmove(puVar11,puVar3,(long)puVar4 - (long)puVar3);
      }
      *puVar3 = uVar12;
    }
    else {
      lVar5 = lVar1 >> 3;
      lVar7 = lVar2 >> 3;
      lVar8 = lVar5;
      puVar4 = param_2;
      if (lVar5 == lVar2 >> 3) {
        do {
          puVar10 = puVar4 + 1;
          uVar12 = *puVar3;
          *puVar3 = *puVar4;
          *puVar4 = uVar12;
          if (puVar3 + 1 == param_2) {
            return param_2;
          }
          puVar11 = param_2;
          puVar3 = puVar3 + 1;
          puVar4 = puVar10;
        } while (puVar10 != param_3);
      }
      else {
        do {
          lVar6 = lVar7;
          lVar7 = 0;
          if (lVar6 != 0) {
            lVar7 = lVar8 / lVar6;
          }
          lVar7 = lVar8 - lVar7 * lVar6;
          lVar8 = lVar6;
        } while (lVar7 != 0);
        puVar11 = puVar3 + lVar6;
        do {
          puVar11 = puVar11 + -1;
          uVar12 = *puVar11;
          puVar4 = (undefined8 *)(lVar1 + (long)puVar11);
          puVar10 = puVar11;
          do {
            puVar9 = puVar4;
            *puVar10 = *puVar9;
            lVar7 = (long)param_3 - (long)puVar9 >> 3;
            puVar4 = (undefined8 *)((long)puVar9 + lVar1);
            if (lVar7 <= lVar5) {
              puVar4 = puVar3 + (lVar5 - lVar7);
            }
            puVar10 = puVar9;
          } while (puVar4 != puVar11);
          *puVar9 = uVar12;
        } while (puVar11 != puVar3);
        puVar11 = (undefined8 *)(lVar2 + (long)puVar3);
      }
    }
  }
  return puVar11;
}



/* Entry: 10ac051a0; end: 10ac052ef;  */

undefined8 * FUN_10ac051a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  lVar1 = (long)param_2 - (long)param_1;
  puVar10 = param_3;
  if ((lVar1 != 0) && (lVar2 = (long)param_3 - (long)param_2, puVar10 = param_1, lVar2 != 0)) {
    if (param_1 + 1 == param_2) {
      uVar11 = *param_1;
      _memmove(param_1,param_2,lVar2);
      *(undefined8 *)((long)param_1 + lVar2) = uVar11;
      puVar10 = (undefined8 *)((long)param_1 + lVar2);
    }
    else if (param_2 + 1 == param_3) {
      puVar3 = param_3 + -1;
      uVar11 = *puVar3;
      puVar10 = (undefined8 *)((long)param_3 - ((long)puVar3 - (long)param_1));
      if ((long)puVar3 - (long)param_1 != 0) {
        _memmove(puVar10,param_1,(long)puVar3 - (long)param_1);
      }
      *param_1 = uVar11;
    }
    else {
      lVar4 = lVar1 >> 3;
      lVar6 = lVar2 >> 3;
      lVar7 = lVar4;
      puVar3 = param_2;
      if (lVar4 == lVar2 >> 3) {
        do {
          puVar9 = puVar3 + 1;
          uVar11 = *param_1;
          *param_1 = *puVar3;
          *puVar3 = uVar11;
          if (param_1 + 1 == param_2) {
            return param_2;
          }
          puVar10 = param_2;
          param_1 = param_1 + 1;
          puVar3 = puVar9;
        } while (puVar9 != param_3);
      }
      else {
        do {
          lVar5 = lVar6;
          lVar6 = 0;
          if (lVar5 != 0) {
            lVar6 = lVar7 / lVar5;
          }
          lVar6 = lVar7 - lVar6 * lVar5;
          lVar7 = lVar5;
        } while (lVar6 != 0);
        puVar10 = param_1 + lVar5;
        do {
          puVar10 = puVar10 + -1;
          uVar11 = *puVar10;
          puVar3 = (undefined8 *)(lVar1 + (long)puVar10);
          puVar9 = puVar10;
          do {
            puVar8 = puVar3;
            *puVar9 = *puVar8;
            lVar6 = (long)param_3 - (long)puVar8 >> 3;
            puVar3 = (undefined8 *)((long)puVar8 + lVar1);
            if (lVar6 <= lVar4) {
              puVar3 = param_1 + (lVar4 - lVar6);
            }
            puVar9 = puVar8;
          } while (puVar3 != puVar10);
          *puVar8 = uVar11;
        } while (puVar10 != param_1);
        puVar10 = (undefined8 *)(lVar2 + (long)param_1);
      }
    }
  }
  return puVar10;
}



/* Entry: 10ac052f0; end: 10ac05393;  */

undefined8 * FUN_10ac052f0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a756aac(param_1);
    puVar5 = (undefined8 *)param_1[1];
    puVar2 = puVar5 + param_2 * 2;
    do {
      lVar6 = param_3[1];
      uVar7 = *param_3;
      puVar5[1] = param_3[1];
      *puVar5 = uVar7;
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar2);
    param_1[1] = puVar2;
  }
  return param_1;
}



/* Entry: 10ac05394; end: 10ac053ef;  */

void FUN_10ac05394(long *param_1)

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
        lVar1 = lVar1 + -0x10;
        func_0x00010a0523dc();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10ac053f0; end: 10ac053f3;  */

undefined8 * FUN_10ac053f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c554b0;
  param_1[3] = &PTR_FUN_110c554d8;
  FUN_10ac0569c(param_1 + 0x10);
  func_0x00010ac057b8(param_1 + 0xd);
  __ZNSt3__15mutexD1Ev(param_1 + 4);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10ac053f4; end: 10ac05407;  */

void FUN_10ac053f4(void)

{
  func_0x00010ac05814();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac05408; end: 10ac0560b;  */

undefined8 ** FUN_10ac05408(undefined8 param_1,undefined8 *param_2)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int iVar13;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 **ppuStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 **ppuStack_70;
  undefined1 auStack_68 [8];
  undefined8 *apuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = (undefined8 **)0x28;
  __Znwm();
  ppuVar4[1] = (undefined8 *)0x0;
  *ppuVar4 = (undefined8 *)0x0;
  ppuVar4[3] = (undefined8 *)0x0;
  ppuVar4[2] = (undefined8 *)0x0;
  ppuVar4[4] = (undefined8 *)0x0;
  uStack_b0 = 0;
  uStack_ac = *param_2;
  uStack_9c = 0;
  uStack_a4 = 0x2500000001;
  uStack_94 = 0x100000001;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_c0 = 0;
  ppuStack_b8 = (undefined8 **)0x0;
  lVar5 = 0;
  FUN_10a2421c8();
  plVar6 = *(long **)(lVar5 + 0x228);
  (**(code **)(*plVar6 + 0x20))(plVar6,&uStack_b0);
  FUN_10a099d88(&uStack_c0,plVar6);
  uStack_c8 = 0;
  FUN_10a5492f0(auStack_78,&uStack_c8,&uStack_c0);
  FUN_10a015bec(ppuVar4,auStack_78);
  plVar6 = (long *)(*ppuVar4)[0x4d];
  if (plVar6 == (long *)0x0) {
    iVar13 = 0;
    plVar7 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0xb0))();
    plVar7 = (long *)(*ppuVar4)[0x4d];
    iVar13 = (int)plVar6 << 4;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0xb8))();
    }
  }
  uVar10 = (ulong)(uint)(iVar13 * (int)plVar7);
  puVar11 = ppuVar4[2];
  uVar12 = (long)ppuVar4[3] - (long)puVar11;
  if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
    if (uVar10 < uVar12) {
      ppuVar4[3] = (undefined8 *)((long)puVar11 + uVar10);
    }
  }
  else {
    func_0x000107c27d58(ppuVar4 + 2,uVar10 - uVar12);
  }
  FUN_10a044790(auStack_68);
  ppuVar8 = apuStack_60;
  (*(code *)*apuStack_60[0])();
  if (ppuStack_70 != (undefined8 **)0x0) {
    ppuVar9 = ppuStack_70 + 1;
    do {
      puVar11 = *ppuVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar3) {
        *ppuVar9 = (undefined8 *)((long)puVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar11 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_70)[2])(ppuStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar8 = ppuStack_70;
    }
  }
  ppuVar9 = ppuStack_b8;
  if (ppuStack_b8 != (undefined8 **)0x0) {
    ppuVar1 = ppuStack_b8 + 1;
    do {
      puVar11 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = (undefined8 *)((long)puVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar11 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_b8)[2])(ppuStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar8 = ppuVar9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  func_0x00010a0523dc(&uStack_c0);
  __Unwind_Resume();
  *ppuVar8 = &PTR_FUN_110c554d8;
  FUN_10ac0569c(ppuVar8 + 0xd);
  func_0x00010ac057b8(ppuVar8 + 10);
  __ZNSt3__15mutexD1Ev(ppuVar8 + 1);
  return ppuVar8;
}



/* Entry: 10ac0560c; end: 10ac0569b;  */

undefined8 * FUN_10ac0560c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c554d8;
  FUN_10ac0569c(param_1 + 0xd);
  func_0x00010ac057b8(param_1 + 10);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10ac0569c; end: 10ac056f7;  */

long * FUN_10ac0569c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10ac056f8(plVar1 + 3);
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



/* Entry: 10ac056f8; end: 10ac0586f;  */

void FUN_10ac056f8(long *param_1)

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
      plVar1 = (long *)plVar1[1];
      func_0x00010ac05754();
    }
  }
  return;
}



/* Entry: 10ac05870; end: 10ac05873;  */

void FUN_10ac05870(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ac05874; end: 10ac05887;  */

void FUN_10ac05874(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac05888; end: 10ac0589f;  */

void FUN_10ac05888(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ac05898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10ac058a0; end: 10ac058d7;  */

undefined8 FUN_10ac058a0(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c55560);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ac058d8; end: 10ac058db;  */

void FUN_10ac058d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac058dc; end: 10ac05933;  */

long FUN_10ac058dc(long param_1)

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



/* Entry: 10ac05934; end: 10ac059fb;  */

long * FUN_10ac05934(long *param_1,uint param_2,uint param_3)

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
    uVar3 = (ulong)param_2 + 0x9e3779b9;
    uVar3 = uVar3 * 0x40 + (ulong)param_3 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar2 + 0x7fffffffffffffff & uVar3;
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
          if (*(uint *)(plVar6 + 2) == param_2 && *(uint *)((long)plVar6 + 0x14) == param_3) {
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



/* Entry: 10ac059fc; end: 10ac06083;  */

void FUN_10ac059fc(undefined8 ******param_1,undefined8 *****param_2)

{
  undefined8 *******pppppppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 *****pppppuVar10;
  undefined8 ******ppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *****pppppuVar13;
  ulong uVar14;
  undefined8 ******ppppppuVar15;
  undefined8 *****pppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined8 ******ppppppuVar19;
  undefined8 ****ppppuVar20;
  undefined8 *******pppppppuVar21;
  undefined8 ****ppppuVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *****pppppuVar25;
  undefined8 ******ppppppuVar26;
  undefined8 ******ppppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 ******ppppppuStack_90;
  undefined8 ******ppppppuStack_88;
  undefined8 uStack_80;
  undefined8 ******ppppppuStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 uStack_68;
  
  pppppuVar10 = param_1[2];
  if (pppppuVar10 == (undefined8 *****)0x0) {
    pppppuVar10 = (undefined8 *****)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((pppppuVar10 != (undefined8 *****)0x0) &&
       (pppppuVar25 = param_1[1], pppppuVar25 != (undefined8 *****)0x0)) {
      __ZNSt3__15mutex4lockEv(pppppuVar25 + 4);
      if (param_2 == (undefined8 *****)0x0) {
        FUN_10a00946c(&UNK_10f633df4);
        goto LAB_10ac06018;
      }
      ppppppuVar11 = (undefined8 ******)0x18;
      __Znwm();
      ppppppuVar11[2] = (undefined8 *****)0x0;
      uVar4 = *(uint *)param_1;
      uVar23 = (ulong)uVar4;
      if (ppppppuVar11 + 2 == param_1) {
        uVar5 = *(uint *)((long)param_1 + 4);
      }
      else {
        uVar5 = *(uint *)((long)param_1 + 4);
        *(uint *)(ppppppuVar11 + 2) = uVar4;
        *(uint *)((long)ppppppuVar11 + 0x14) = uVar5;
      }
      uVar24 = (ulong)uVar5;
      pppppuVar13 = (undefined8 *****)pppppuVar25[0xd];
      *ppppppuVar11 = pppppuVar13;
      ppppppuVar11[1] = pppppuVar25 + 0xd;
      pppppuVar13[1] = ppppppuVar11;
      pppppuVar25[0xd] = ppppppuVar11;
      pppppuVar25[0xf] = (undefined8 ****)((long)pppppuVar25[0xf] + 1);
      pppppppuVar1 = (undefined8 *******)(pppppuVar25 + 0x10);
      pppppppuVar12 = pppppppuVar1;
      FUN_10ac05934(pppppppuVar1,uVar23,uVar24);
      pppppppuVar21 = pppppppuVar12;
      if (pppppppuVar12 == (undefined8 *******)0x0) {
        ppppppuStack_b0 = &ppppppuStack_b0;
        uStack_a0 = 0;
        uStack_98 = (undefined8 *****)0x0;
        if ((undefined8 ******)&uStack_98 == param_1) {
          uVar24 = 0;
          uVar23 = 0;
        }
        else {
          uStack_98 = (undefined8 *****)CONCAT44(uVar5,uVar4);
        }
        uStack_80 = 0;
        uVar14 = uVar23 + 0x9e3779b9;
        ppppppuVar26 = (undefined8 ******)
                       (uVar14 * 0x40 + uVar24 + (uVar14 >> 2) + 0x9e3779b9 ^ uVar14);
        ppppppuVar19 = (undefined8 ******)pppppuVar25[0x11];
        ppppppuStack_a8 = ppppppuStack_b0;
        ppppppuStack_90 = &ppppppuStack_90;
        ppppppuStack_88 = &ppppppuStack_90;
        if (ppppppuVar19 != (undefined8 ******)0x0) {
          uVar14 = (long)ppppppuVar19 - 1;
          if (((ulong)ppppppuVar19 & uVar14) == 0) {
            ppppppuVar11 = (undefined8 ******)
                           ((ulong)ppppppuVar26 & (long)ppppppuVar19 + 0x7fffffffffffffffU);
          }
          else {
            ppppppuVar11 = ppppppuVar26;
            if (ppppppuVar19 <= ppppppuVar26) {
              uVar8 = 0;
              if (ppppppuVar19 != (undefined8 ******)0x0) {
                uVar8 = (ulong)ppppppuVar26 / (ulong)ppppppuVar19;
              }
              ppppppuVar11 = (undefined8 ******)((long)ppppppuVar26 - uVar8 * (long)ppppppuVar19);
            }
          }
          if ((*pppppppuVar1)[(long)ppppppuVar11] != (undefined8 *****)0x0) {
            for (pppppppuVar21 = (undefined8 *******)*(*pppppppuVar1)[(long)ppppppuVar11];
                pppppppuVar21 != (undefined8 *******)0x0;
                pppppppuVar21 = (undefined8 *******)*pppppppuVar21) {
              ppppppuVar15 = pppppppuVar21[1];
              if (ppppppuVar15 == ppppppuVar26) {
                if (*(int *)(pppppppuVar21 + 2) == (int)uVar23 &&
                    *(int *)((long)pppppppuVar21 + 0x14) == (int)uVar24) goto LAB_10ac05ecc;
              }
              else {
                if (((ulong)ppppppuVar19 & uVar14) == 0) {
                  ppppppuVar15 = (undefined8 ******)((ulong)ppppppuVar15 & uVar14);
                }
                else if (ppppppuVar19 <= ppppppuVar15) {
                  uVar8 = 0;
                  if (ppppppuVar19 != (undefined8 ******)0x0) {
                    uVar8 = (ulong)ppppppuVar15 / (ulong)ppppppuVar19;
                  }
                  ppppppuVar15 = (undefined8 ******)
                                 ((long)ppppppuVar15 - uVar8 * (long)ppppppuVar19);
                }
                if (ppppppuVar15 != ppppppuVar11) break;
              }
            }
          }
        }
        pppppppuVar21 = (undefined8 *******)0x30;
        __Znwm();
        uStack_68 = 1;
        *pppppppuVar21 = (undefined8 ******)0x0;
        pppppppuVar21[1] = ppppppuVar26;
        *(int *)(pppppppuVar21 + 2) = (int)uVar23;
        *(int *)((long)pppppppuVar21 + 0x14) = (int)uVar24;
        pppppppuVar21[3] = pppppppuVar21 + 3;
        pppppppuVar21[4] = pppppppuVar21 + 3;
        pppppppuVar21[5] = (undefined8 ******)0x0;
        ppppppuStack_78 = pppppppuVar21;
        ppppppuStack_70 = pppppppuVar1;
        if ((ppppppuVar19 == (undefined8 ******)0x0) ||
           (*(float *)(pppppuVar25 + 0x14) * (float)ppppppuVar19 <
            (float)((long)pppppuVar25[0x13] + 1))) {
          uVar23 = 1;
          if ((undefined8 ******)0x2 < ppppppuVar19) {
            uVar23 = (ulong)(((ulong)ppppppuVar19 & (long)ppppppuVar19 - 1U) != 0);
          }
          ppppppuVar11 = (undefined8 ******)(uVar23 | (long)ppppppuVar19 << 1);
          ppppppuVar15 = (undefined8 ******)
                         (long)((float)((long)pppppuVar25[0x13] + 1) /
                               *(float *)(pppppuVar25 + 0x14));
          if (ppppppuVar11 <= ppppppuVar15) {
            ppppppuVar11 = ppppppuVar15;
          }
          if ((long)ppppppuVar11 - 1U == 0) {
            ppppppuVar11 = (undefined8 ******)0x2;
          }
          else if (((ulong)ppppppuVar11 & (long)ppppppuVar11 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            ppppppuVar19 = (undefined8 ******)pppppuVar25[0x11];
          }
          if (ppppppuVar19 < ppppppuVar11) {
LAB_10ac05ccc:
            ppppppuVar19 = ppppppuVar11;
            if ((ulong)ppppppuVar19 >> 0x3d != 0) {
              func_0x000109ffded8();
LAB_10ac06018:
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10ac0601c);
              (*pcVar9)();
            }
            ppppppuVar11 = (undefined8 ******)((long)ppppppuVar19 << 3);
            __Znwm();
            ppppppuVar15 = *pppppppuVar1;
            *pppppppuVar1 = ppppppuVar11;
            if (ppppppuVar15 != (undefined8 ******)0x0) {
              __ZdlPv();
            }
            ppppppuVar11 = (undefined8 ******)0x0;
            pppppuVar25[0x11] = ppppppuVar19;
            do {
              (*pppppppuVar1)[(long)ppppppuVar11] = (undefined8 *****)0x0;
              ppppppuVar11 = (undefined8 ******)((long)ppppppuVar11 + 1);
            } while (ppppppuVar19 != ppppppuVar11);
            pppppuVar13 = (undefined8 *****)pppppuVar25[0x12];
            if (pppppuVar13 != (undefined8 *****)0x0) {
              ppppppuVar11 = (undefined8 ******)pppppuVar13[1];
              uVar23 = (long)ppppppuVar19 - 1;
              if (((ulong)ppppppuVar19 & uVar23) == 0) {
                ppppppuVar11 = (undefined8 ******)((ulong)ppppppuVar11 & uVar23);
              }
              else if (ppppppuVar19 <= ppppppuVar11) {
                uVar24 = 0;
                if (ppppppuVar19 != (undefined8 ******)0x0) {
                  uVar24 = (ulong)ppppppuVar11 / (ulong)ppppppuVar19;
                }
                ppppppuVar11 = (undefined8 ******)((long)ppppppuVar11 - uVar24 * (long)ppppppuVar19)
                ;
              }
              (*pppppppuVar1)[(long)ppppppuVar11] = pppppuVar25 + 0x12;
              pppppuVar16 = (undefined8 *****)*pppppuVar13;
              while (pppppuVar16 != (undefined8 *****)0x0) {
                ppppppuVar15 = (undefined8 ******)pppppuVar16[1];
                if (((ulong)ppppppuVar19 & uVar23) == 0) {
                  ppppppuVar15 = (undefined8 ******)((ulong)ppppppuVar15 & uVar23);
                }
                else if (ppppppuVar19 <= ppppppuVar15) {
                  uVar24 = 0;
                  if (ppppppuVar19 != (undefined8 ******)0x0) {
                    uVar24 = (ulong)ppppppuVar15 / (ulong)ppppppuVar19;
                  }
                  ppppppuVar15 = (undefined8 ******)
                                 ((long)ppppppuVar15 - uVar24 * (long)ppppppuVar19);
                }
                pppppuVar17 = pppppuVar16;
                if (ppppppuVar15 != ppppppuVar11) {
                  ppppppuVar18 = *pppppppuVar1;
                  if (ppppppuVar18[(long)ppppppuVar15] == (undefined8 *****)0x0) {
                    ppppppuVar18[(long)ppppppuVar15] = pppppuVar13;
                    ppppppuVar11 = ppppppuVar15;
                  }
                  else {
                    *pppppuVar13 = *pppppuVar16;
                    *pppppuVar16 = *ppppppuVar18[(long)ppppppuVar15];
                    *ppppppuVar18[(long)ppppppuVar15] = pppppuVar16;
                    pppppuVar17 = pppppuVar13;
                  }
                }
                pppppuVar13 = pppppuVar17;
                pppppuVar16 = (undefined8 *****)*pppppuVar17;
              }
            }
          }
          else if (ppppppuVar11 < ppppppuVar19) {
            ppppppuVar15 = (undefined8 ******)
                           (long)((float)pppppuVar25[0x13] / *(float *)(pppppuVar25 + 0x14));
            if ((ppppppuVar19 < (undefined8 ******)0x3) ||
               (((ulong)ppppppuVar19 & (long)ppppppuVar19 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((undefined8 ******)0x1 < ppppppuVar15) {
              ppppppuVar15 = (undefined8 ******)(1L << (-LZCOUNT((long)ppppppuVar15 + -1) & 0x3fU));
            }
            if (ppppppuVar11 <= ppppppuVar15) {
              ppppppuVar11 = ppppppuVar15;
            }
            if (ppppppuVar11 < ppppppuVar19) {
              if (ppppppuVar11 != (undefined8 ******)0x0) goto LAB_10ac05ccc;
              ppppppuVar11 = *pppppppuVar1;
              *pppppppuVar1 = (undefined8 ******)0x0;
              if (ppppppuVar11 != (undefined8 ******)0x0) {
                __ZdlPv();
              }
              ppppppuVar19 = (undefined8 ******)0x0;
              pppppuVar25[0x11] = (undefined8 ****)0x0;
            }
            else {
              ppppppuVar19 = (undefined8 ******)pppppuVar25[0x11];
            }
          }
          if (((ulong)ppppppuVar19 & (long)ppppppuVar19 - 1U) == 0) {
            ppppppuVar11 = (undefined8 ******)
                           ((long)ppppppuVar19 + 0x7fffffffffffffffU & (ulong)ppppppuVar26);
          }
          else {
            ppppppuVar11 = ppppppuVar26;
            if (ppppppuVar19 <= ppppppuVar26) {
              uVar23 = 0;
              if (ppppppuVar19 != (undefined8 ******)0x0) {
                uVar23 = (ulong)ppppppuVar26 / (ulong)ppppppuVar19;
              }
              ppppppuVar11 = (undefined8 ******)((long)ppppppuVar26 - uVar23 * (long)ppppppuVar19);
            }
          }
        }
        ppppppuVar26 = *pppppppuVar1;
        pppppuVar13 = ppppppuVar26[(long)ppppppuVar11];
        if (pppppuVar13 == (undefined8 *****)0x0) {
          pppppuVar13 = pppppuVar25 + 0x12;
          *pppppppuVar21 = (undefined8 ******)*pppppuVar13;
          *pppppuVar13 = pppppppuVar21;
          ppppppuVar26[(long)ppppppuVar11] = pppppuVar13;
          if (*pppppppuVar21 != (undefined8 ******)0x0) {
            ppppppuVar11 = (undefined8 ******)(*pppppppuVar21)[1];
            if (((ulong)ppppppuVar19 & (long)ppppppuVar19 - 1U) == 0) {
              ppppppuVar11 = (undefined8 ******)((ulong)ppppppuVar11 & (long)ppppppuVar19 - 1U);
            }
            else if (ppppppuVar19 <= ppppppuVar11) {
              uVar23 = 0;
              if (ppppppuVar19 != (undefined8 ******)0x0) {
                uVar23 = (ulong)ppppppuVar11 / (ulong)ppppppuVar19;
              }
              ppppppuVar11 = (undefined8 ******)((long)ppppppuVar11 - uVar23 * (long)ppppppuVar19);
            }
            (*pppppppuVar1)[(long)ppppppuVar11] = pppppppuVar21;
          }
        }
        else {
          *pppppppuVar21 = (undefined8 ******)*pppppuVar13;
          *pppppuVar13 = pppppppuVar21;
        }
        pppppuVar25[0x13] = (undefined8 ****)((long)pppppuVar25[0x13] + 1);
LAB_10ac05ecc:
        FUN_10ac056f8(&ppppppuStack_90);
        pppppppuVar12 = &ppppppuStack_b0;
        FUN_10ac056f8();
        ppppppuVar11 = (undefined8 ******)pppppuVar25[0xd];
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      ppppppuVar19 = (undefined8 ******)0x28;
      __Znwm();
      ppppppuVar19[2] = ppppppuVar11;
      ppppppuVar19[3] = param_2;
      ppppppuVar19[4] = pppppppuVar12;
      pppppppuVar12 = pppppppuVar21 + 3;
      ppppppuVar11 = *pppppppuVar12;
      *ppppppuVar19 = ppppppuVar11;
      ppppppuVar19[1] = pppppppuVar12;
      ppppppuVar11[1] = ppppppuVar19;
      *pppppppuVar12 = ppppppuVar19;
      pppppppuVar21[5] = (undefined8 ******)((long)pppppppuVar21[5] + 1);
      while (ppppuVar22 = pppppuVar25[0xf],
            (undefined8 ****)(ulong)*(uint *)(pppppuVar25 + 0xc) < ppppuVar22) {
        ppppuVar20 = pppppuVar25[0xe];
        pppppppuVar12 = pppppppuVar1;
        FUN_10ac05934(pppppppuVar1,*(undefined4 *)(ppppuVar20 + 2),
                      *(undefined4 *)((long)ppppuVar20 + 0x14));
        if (pppppppuVar12 == (undefined8 *******)0x0) {
          FUN_109ffdddc(&UNK_10f639994);
          goto LAB_10ac06018;
        }
        if (pppppppuVar12[5] == (undefined8 ******)0x0) goto LAB_10ac06018;
        pppuVar2 = *ppppuVar20;
        pppuVar3 = ppppuVar20[1];
        pppuVar2[1] = pppuVar3;
        *pppuVar3 = pppuVar2;
        pppppuVar25[0xf] = (undefined8 ****)((long)ppppuVar22 + -1);
        __ZdlPv(ppppuVar20);
        ppppppuVar11 = pppppppuVar12[5];
        if (ppppppuVar11 == (undefined8 ******)0x0) goto LAB_10ac06018;
        pppppuVar13 = *pppppppuVar12[4];
        pppppuVar16 = pppppppuVar12[4][1];
        pppppuVar13[1] = pppppuVar16;
        *pppppuVar16 = pppppuVar13;
        pppppppuVar12[5] = (undefined8 ******)((long)ppppppuVar11 + -1);
        func_0x00010ac05754();
      }
      __ZNSt3__15mutex6unlockEv(pppppuVar25 + 4);
      goto joined_r0x00010ac05aac;
    }
  }
  if (param_2 != (undefined8 *****)0x0) {
    if (param_2[2] != (undefined8 ****)0x0) {
      param_2[3] = param_2[2];
      __ZdlPv();
    }
    func_0x00010a05248c(param_2);
    __ZdlPv();
  }
joined_r0x00010ac05aac:
  if (pppppuVar10 != (undefined8 *****)0x0) {
    pppppuVar25 = pppppuVar10 + 1;
    do {
      ppppuVar22 = *pppppuVar25;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppuVar25,0x10);
      if (bVar7) {
        *pppppuVar25 = (undefined8 ****)((long)ppppuVar22 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppppuVar22 == (undefined8 ****)0x0) {
      (*(code *)(*pppppuVar10)[2])(pppppuVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar10);
    }
  }
  return;
}



/* Entry: 10ac06084; end: 10ac060f7;  */

void FUN_10ac06084(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c55720;
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10ac060f8; end: 10ac06137;  */

void FUN_10ac060f8(long param_1)

{
  FUN_10ac059fc(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10ac06138; end: 10ac06173;  */

long FUN_10ac06138(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c55760);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ac06174; end: 10ac06177;  */

void FUN_10ac06174(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac06178; end: 10ac061bf;  */

void FUN_10ac06178(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10ac056f8(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ac061c0; end: 10ac061d3;  */

undefined1  [16] FUN_10ac061c0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&UNK_10f69b42f;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_10a0cfe2c();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10ac061d4; end: 10ac0630b;  */

undefined1  [16] FUN_10ac061d4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10a0cfe2c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10ac0630c; end: 10ac063e3;  */

void FUN_10ac0630c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = lVar3;
    lVar1 = param_1[1];
    if (param_1[1] != lVar3) {
      do {
        lVar2 = lVar1 + -0x18;
        FUN_10a0da1b8(lVar2,*(undefined8 *)(lVar1 + -0x10));
        lVar1 = lVar2;
      } while (lVar2 != lVar3);
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



/* Entry: 10ac063e4; end: 10ac0652f;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10ac063e4(long *param_1,ulong *param_2,long *param_3,long param_4,uint param_5)

{
  undefined *puVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong *puVar19;
  long lVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong *puStack_300;
  ulong uStack_2f8;
  undefined2 uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined4 uStack_200;
  ulong *puStack_1f8;
  ulong *puStack_1f0;
  ulong uStack_1e8;
  undefined2 uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined4 uStack_f0;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  puVar12 = (undefined8 *)param_1[1];
  if ((ulong *)(param_1[2] - (long)puVar12 >> 5) < param_2) {
    lVar20 = (long)puVar12 - *param_1;
    puVar1 = (undefined *)((long)param_2 + (lVar20 >> 5));
    if ((ulong)puVar1 >> 0x3b != 0) {
      FUN_10a36f344();
      func_0x00010a36f4bc(&plStack_58);
      __Unwind_Resume(param_1);
      puVar5 = (ulong *)&UNK_10f69b42f;
      FUN_109ffde64();
      do {
        puVar19 = param_2 + -0x21;
        puVar18 = puVar5;
LAB_10ac065a4:
        puVar5 = puVar18;
        uVar14 = (long)param_2 - (long)puVar5;
        uVar17 = ((long)uVar14 >> 3) * 0xf83e0f83e0f83e1;
        if (uVar17 - 2 == 0 || (long)uVar17 < 2) {
          if (uVar17 < 2) {
            return;
          }
          if (uVar17 == 2) {
            lVar20 = *param_3;
            func_0x00010a01e9ec(lVar20,(int)*puVar19);
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(int)*puVar5);
            if (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
                *(float *)(*(long *)(lVar20 + 0x1a8) + 0x4f0)) {
              return;
            }
            FUN_10ac07f70(puVar5,puVar19);
            return;
          }
        }
        else {
          if (uVar17 == 3) {
            FUN_10ac08118(puVar5,puVar5 + 0x21,puVar19,param_3);
            return;
          }
          if (uVar17 == 4) {
            FUN_10ac08274(puVar5,puVar5 + 0x21,puVar5 + 0x42,puVar19,param_3);
            return;
          }
          if (uVar17 == 5) {
            FUN_10ac08388(puVar5,puVar5 + 0x21,puVar5 + 0x42,puVar5 + 99,puVar19,param_3);
            return;
          }
        }
        if ((long)uVar14 < 0x18c0) {
          if ((param_5 & 1) == 0) {
            if (puVar5 == param_2) {
              return;
            }
            puVar18 = puVar5 + 0x21;
            if (puVar18 == param_2) {
              return;
            }
            lVar20 = 0x108;
            puVar19 = puVar5;
            lVar6 = 0;
            do {
              lVar10 = lVar20;
              lVar20 = *param_3;
              func_0x00010a01e9ec(lVar20,(int)*puVar18);
              lVar7 = *param_3;
              func_0x00010a01e9ec(lVar7,(int)*puVar19);
              if (*(float *)(*(long *)(lVar20 + 0x1a8) + 0x4f0) <
                  *(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0)) {
                uStack_1e8 = puVar18[1];
                puStack_1f0 = (ulong *)*puVar18;
                uStack_1e0 = (undefined2)puVar18[2];
                uStack_1d0 = puVar19[0x25];
                uStack_1d8 = puVar19[0x24];
                uStack_1c8 = puVar19[0x26];
                puVar19[0x24] = 0;
                puVar19[0x25] = 0;
                puVar19[0x26] = 0;
                uStack_f0 = (undefined4)puVar19[0x41];
                uStack_118 = puVar19[0x3c];
                uStack_120 = puVar19[0x3b];
                uStack_108 = puVar19[0x3e];
                uStack_110 = puVar19[0x3d];
                uStack_f8 = puVar19[0x40];
                uStack_100 = puVar19[0x3f];
                uStack_158 = puVar19[0x34];
                uStack_160 = puVar19[0x33];
                uStack_148 = puVar19[0x36];
                uStack_150 = puVar19[0x35];
                uStack_138 = puVar19[0x38];
                uStack_140 = puVar19[0x37];
                uStack_128 = puVar19[0x3a];
                uStack_130 = puVar19[0x39];
                uStack_198 = puVar19[0x2c];
                uStack_1a0 = puVar19[0x2b];
                uStack_188 = puVar19[0x2e];
                uStack_190 = puVar19[0x2d];
                uStack_178 = puVar19[0x30];
                uStack_180 = puVar19[0x2f];
                uStack_168 = puVar19[0x32];
                uStack_170 = puVar19[0x31];
                uStack_1b8 = puVar19[0x28];
                uStack_1c0 = puVar19[0x27];
                uStack_1a8 = puVar19[0x2a];
                uStack_1b0 = puVar19[0x29];
                do {
                  lVar20 = lVar6;
                  puVar12 = (undefined8 *)((long)puVar5 + lVar20);
                  puVar12[0x22] = puVar12[1];
                  puVar12[0x21] = *puVar12;
                  *(undefined2 *)(puVar12 + 0x23) = *(undefined2 *)(puVar12 + 2);
                  FUN_10ac00490(puVar12 + 0x24);
                  puVar12[0x25] = puVar12[4];
                  puVar12[0x24] = puVar12[3];
                  puVar12[0x27] = puVar12[6];
                  puVar12[0x26] = puVar12[5];
                  puVar12[4] = 0;
                  puVar12[5] = 0;
                  puVar12[3] = 0;
                  puVar12[0x28] = puVar12[7];
                  puVar12[0x3e] = puVar12[0x1d];
                  puVar12[0x3d] = puVar12[0x1c];
                  puVar12[0x40] = puVar12[0x1f];
                  puVar12[0x3f] = puVar12[0x1e];
                  *(undefined4 *)(puVar12 + 0x41) = *(undefined4 *)(puVar12 + 0x20);
                  puVar12[0x36] = puVar12[0x15];
                  puVar12[0x35] = puVar12[0x14];
                  puVar12[0x38] = puVar12[0x17];
                  puVar12[0x37] = puVar12[0x16];
                  puVar12[0x3a] = puVar12[0x19];
                  puVar12[0x39] = puVar12[0x18];
                  puVar12[0x3c] = puVar12[0x1b];
                  puVar12[0x3b] = puVar12[0x1a];
                  puVar12[0x2e] = puVar12[0xd];
                  puVar12[0x2d] = puVar12[0xc];
                  puVar12[0x30] = puVar12[0xf];
                  puVar12[0x2f] = puVar12[0xe];
                  puVar12[0x32] = puVar12[0x11];
                  puVar12[0x31] = puVar12[0x10];
                  puVar12[0x34] = puVar12[0x13];
                  puVar12[0x33] = puVar12[0x12];
                  puVar12[0x2a] = puVar12[9];
                  puVar12[0x29] = puVar12[8];
                  puVar12[0x2c] = puVar12[0xb];
                  puVar12[0x2b] = puVar12[10];
                  if (lVar20 == -0x108) {
LAB_10ac07edc:
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac07ee0);
                    (*pcVar3)();
                  }
                  lVar7 = *param_3;
                  func_0x00010a01e9ec(lVar7,(ulong)puStack_1f0 & 0xffffffff);
                  lVar11 = *param_3;
                  func_0x00010a01e9ec(lVar11,*(undefined4 *)((long)puVar5 + lVar20 + -0x108));
                  lVar6 = lVar20 + -0x108;
                } while (*(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0) <
                         *(float *)(*(long *)(lVar11 + 0x1a8) + 0x4f0));
                *(undefined2 *)((long)puVar5 + lVar20 + 0x10) = uStack_1e0;
                *(ulong *)((long)puVar5 + lVar20 + 8) = uStack_1e8;
                *(ulong **)((long)puVar5 + lVar20) = puStack_1f0;
                FUN_10ac00490((undefined *)((long)puVar5 + lVar20 + 0x18));
                *(ulong *)((long)puVar5 + lVar20 + 0x20) = uStack_1d0;
                *(ulong *)((long)puVar5 + lVar20 + 0x18) = uStack_1d8;
                *(ulong *)((long)puVar5 + lVar20 + 0x28) = uStack_1c8;
                uStack_1d8 = 0;
                uStack_1d0 = 0;
                uStack_1c8 = 0;
                *(ulong *)((long)puVar5 + lVar20 + 0x30) = uStack_1c0;
                *(ulong *)((long)puVar5 + lVar20 + 0x38) = uStack_1b8;
                *(ulong *)((long)puVar5 + lVar20 + 0x48) = uStack_1a8;
                *(ulong *)((long)puVar5 + lVar20 + 0x40) = uStack_1b0;
                *(ulong *)((long)puVar5 + lVar20 + 0x78) = uStack_178;
                *(ulong *)((long)puVar5 + lVar20 + 0x70) = uStack_180;
                *(ulong *)((long)puVar5 + lVar20 + 0x88) = uStack_168;
                *(ulong *)((long)puVar5 + lVar20 + 0x80) = uStack_170;
                *(ulong *)((long)puVar5 + lVar20 + 0x58) = uStack_198;
                *(ulong *)((long)puVar5 + lVar20 + 0x50) = uStack_1a0;
                *(ulong *)((long)puVar5 + lVar20 + 0x68) = uStack_188;
                *(ulong *)((long)puVar5 + lVar20 + 0x60) = uStack_190;
                *(ulong *)((long)puVar5 + lVar20 + 0xb8) = uStack_138;
                *(ulong *)((long)puVar5 + lVar20 + 0xb0) = uStack_140;
                *(ulong *)((long)puVar5 + lVar20 + 200) = uStack_128;
                *(ulong *)((long)puVar5 + lVar20 + 0xc0) = uStack_130;
                *(ulong *)((long)puVar5 + lVar20 + 0x98) = uStack_158;
                *(ulong *)((long)puVar5 + lVar20 + 0x90) = uStack_160;
                *(ulong *)((long)puVar5 + lVar20 + 0xa8) = uStack_148;
                *(ulong *)((long)puVar5 + lVar20 + 0xa0) = uStack_150;
                *(undefined4 *)((long)puVar5 + lVar20 + 0x100) = uStack_f0;
                *(ulong *)((long)puVar5 + lVar20 + 0xe8) = uStack_108;
                *(ulong *)((long)puVar5 + lVar20 + 0xe0) = uStack_110;
                *(ulong *)((long)puVar5 + lVar20 + 0xf8) = uStack_f8;
                *(ulong *)((long)puVar5 + lVar20 + 0xf0) = uStack_100;
                *(ulong *)((long)puVar5 + lVar20 + 0xd8) = uStack_118;
                *(ulong *)((long)puVar5 + lVar20 + 0xd0) = uStack_120;
                puStack_300 = &uStack_1d8;
                FUN_10a1901f0(&puStack_300);
              }
              puVar19 = (ulong *)((long)puVar5 + lVar10);
              puVar18 = (ulong *)((long)puVar5 + lVar10 + 0x108);
              lVar20 = lVar10 + 0x108;
              lVar6 = lVar10;
              if (puVar18 == param_2) {
                return;
              }
            } while( true );
          }
          if (puVar5 == param_2) {
            return;
          }
          if (puVar5 + 0x21 == param_2) {
            return;
          }
          lVar20 = 0;
          puVar18 = puVar5 + 0x21;
          puVar19 = puVar5;
          goto LAB_10ac0706c;
        }
        if (param_4 == 0) {
          if (puVar5 == param_2) {
            return;
          }
          uVar16 = uVar17 - 2 >> 1;
          uVar23 = uVar16;
          goto LAB_10ac072bc;
        }
        puVar18 = puVar5 + (uVar17 >> 1) * 0x21;
        if (uVar14 < 0x8401) {
          FUN_10ac08118(puVar18,puVar5,puVar19,param_3);
        }
        else {
          FUN_10ac08118(puVar5,puVar18,puVar19,param_3);
          FUN_10ac08118(puVar5 + 0x21,puVar18 + -0x21,param_2 + -0x42,param_3);
          FUN_10ac08118(puVar5 + 0x42,puVar18 + 0x21,param_2 + -99,param_3);
          FUN_10ac08118(puVar18 + -0x21,puVar18,puVar18 + 0x21,param_3);
          uStack_1e8 = puVar5[1];
          puStack_1f0 = (ulong *)*puVar5;
          uStack_1e0 = (undefined2)puVar5[2];
          puVar8 = puVar5 + 3;
          uVar16 = puVar5[4];
          uVar17 = *puVar8;
          uVar14 = puVar5[5];
          puVar5[4] = 0;
          puVar5[5] = 0;
          *puVar8 = 0;
          uStack_1b8 = puVar5[7];
          uStack_1c0 = puVar5[6];
          uStack_1a8 = puVar5[9];
          uStack_1b0 = puVar5[8];
          uStack_138 = puVar5[0x17];
          uStack_140 = puVar5[0x16];
          uStack_128 = puVar5[0x19];
          uStack_130 = puVar5[0x18];
          uStack_158 = puVar5[0x13];
          uStack_160 = puVar5[0x12];
          uStack_148 = puVar5[0x15];
          uStack_150 = puVar5[0x14];
          uStack_178 = puVar5[0xf];
          uStack_180 = puVar5[0xe];
          uStack_168 = puVar5[0x11];
          uStack_170 = puVar5[0x10];
          uStack_198 = puVar5[0xb];
          uStack_1a0 = puVar5[10];
          uStack_188 = puVar5[0xd];
          uStack_190 = puVar5[0xc];
          uStack_f0 = (undefined4)puVar5[0x20];
          uStack_108 = puVar5[0x1d];
          uStack_110 = puVar5[0x1c];
          uStack_f8 = puVar5[0x1f];
          uStack_100 = puVar5[0x1e];
          uStack_118 = puVar5[0x1b];
          uStack_120 = puVar5[0x1a];
          uVar24 = puVar18[1];
          uVar23 = *puVar18;
          *(short *)(puVar5 + 2) = (short)puVar18[2];
          puVar5[1] = uVar24;
          *puVar5 = uVar23;
          FUN_10ac00490(puVar8);
          puVar9 = puVar18 + 3;
          uVar23 = *puVar9;
          puVar5[4] = puVar18[4];
          *puVar8 = uVar23;
          puVar5[5] = puVar18[5];
          *puVar9 = 0;
          puVar18[4] = 0;
          puVar18[5] = 0;
          puVar5[6] = puVar18[6];
          puVar5[7] = puVar18[7];
          uVar23 = puVar18[8];
          puVar5[9] = puVar18[9];
          puVar5[8] = uVar23;
          uVar24 = puVar18[0xb];
          uVar23 = puVar18[10];
          uVar25 = puVar18[0xd];
          uVar26 = puVar18[0xc];
          uVar27 = puVar18[0xe];
          uVar29 = puVar18[0x11];
          uVar28 = puVar18[0x10];
          puVar5[0xf] = puVar18[0xf];
          puVar5[0xe] = uVar27;
          puVar5[0x11] = uVar29;
          puVar5[0x10] = uVar28;
          puVar5[0xb] = uVar24;
          puVar5[10] = uVar23;
          puVar5[0xd] = uVar25;
          puVar5[0xc] = uVar26;
          uVar24 = puVar18[0x13];
          uVar23 = puVar18[0x12];
          uVar25 = puVar18[0x15];
          uVar26 = puVar18[0x14];
          uVar27 = puVar18[0x16];
          uVar29 = puVar18[0x19];
          uVar28 = puVar18[0x18];
          puVar5[0x17] = puVar18[0x17];
          puVar5[0x16] = uVar27;
          puVar5[0x19] = uVar29;
          puVar5[0x18] = uVar28;
          puVar5[0x13] = uVar24;
          puVar5[0x12] = uVar23;
          puVar5[0x15] = uVar25;
          puVar5[0x14] = uVar26;
          uVar24 = puVar18[0x1b];
          uVar23 = puVar18[0x1a];
          uVar25 = puVar18[0x1d];
          uVar26 = puVar18[0x1c];
          uVar28 = puVar18[0x1f];
          uVar27 = puVar18[0x1e];
          *(int *)(puVar5 + 0x20) = (int)puVar18[0x20];
          puVar5[0x1d] = uVar25;
          puVar5[0x1c] = uVar26;
          puVar5[0x1f] = uVar28;
          puVar5[0x1e] = uVar27;
          puVar5[0x1b] = uVar24;
          puVar5[0x1a] = uVar23;
          *(undefined2 *)(puVar18 + 2) = uStack_1e0;
          puVar18[1] = uStack_1e8;
          *puVar18 = (ulong)puStack_1f0;
          FUN_10ac00490(puVar9);
          puVar18[4] = uVar16;
          *puVar9 = uVar17;
          puVar18[5] = uVar14;
          uStack_1d8 = 0;
          uStack_1d0 = 0;
          uStack_1c8 = 0;
          puVar18[6] = uStack_1c0;
          puVar18[7] = uStack_1b8;
          puVar18[9] = uStack_1a8;
          puVar18[8] = uStack_1b0;
          puVar18[0xf] = uStack_178;
          puVar18[0xe] = uStack_180;
          puVar18[0x11] = uStack_168;
          puVar18[0x10] = uStack_170;
          puVar18[0xb] = uStack_198;
          puVar18[10] = uStack_1a0;
          puVar18[0xd] = uStack_188;
          puVar18[0xc] = uStack_190;
          puVar18[0x17] = uStack_138;
          puVar18[0x16] = uStack_140;
          puVar18[0x19] = uStack_128;
          puVar18[0x18] = uStack_130;
          puVar18[0x13] = uStack_158;
          puVar18[0x12] = uStack_160;
          puVar18[0x15] = uStack_148;
          puVar18[0x14] = uStack_150;
          *(undefined4 *)(puVar18 + 0x20) = uStack_f0;
          puVar18[0x1d] = uStack_108;
          puVar18[0x1c] = uStack_110;
          puVar18[0x1f] = uStack_f8;
          puVar18[0x1e] = uStack_100;
          puVar18[0x1b] = uStack_118;
          puVar18[0x1a] = uStack_120;
          puStack_300 = &uStack_1d8;
          FUN_10a1901f0(&puStack_300);
        }
        param_4 = param_4 + -1;
        if ((param_5 & 1) == 0) {
          lVar20 = *param_3;
          func_0x00010a01e9ec(lVar20,(int)puVar5[-0x21]);
          lVar6 = *param_3;
          func_0x00010a01e9ec(lVar6,(int)*puVar5);
          if (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
              *(float *)(*(long *)(lVar20 + 0x1a8) + 0x4f0)) {
            uStack_1e8 = puVar5[1];
            puStack_1f0 = (ulong *)*puVar5;
            uStack_1e0 = (undefined2)puVar5[2];
            puVar8 = puVar5 + 3;
            uStack_1d0 = puVar5[4];
            uStack_1d8 = *puVar8;
            uStack_1c8 = puVar5[5];
            puVar5[4] = 0;
            puVar5[5] = 0;
            *puVar8 = 0;
            uStack_1b8 = puVar5[7];
            uStack_1c0 = puVar5[6];
            uStack_1a8 = puVar5[9];
            uStack_1b0 = puVar5[8];
            uStack_108 = puVar5[0x1d];
            uStack_110 = puVar5[0x1c];
            uStack_f8 = puVar5[0x1f];
            uStack_100 = puVar5[0x1e];
            uStack_f0 = (undefined4)puVar5[0x20];
            uStack_118 = puVar5[0x1b];
            uStack_120 = puVar5[0x1a];
            uStack_138 = puVar5[0x17];
            uStack_140 = puVar5[0x16];
            uStack_128 = puVar5[0x19];
            uStack_130 = puVar5[0x18];
            uStack_158 = puVar5[0x13];
            uStack_160 = puVar5[0x12];
            uStack_148 = puVar5[0x15];
            uStack_150 = puVar5[0x14];
            uStack_178 = puVar5[0xf];
            uStack_180 = puVar5[0xe];
            uStack_168 = puVar5[0x11];
            uStack_170 = puVar5[0x10];
            uStack_198 = puVar5[0xb];
            uStack_1a0 = puVar5[10];
            uStack_188 = puVar5[0xd];
            uStack_190 = puVar5[0xc];
            lVar20 = *param_3;
            func_0x00010a01e9ec(lVar20,(ulong)puStack_1f0 & 0xffffffff);
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(int)*puVar19);
            puVar18 = puVar5;
            if (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
                *(float *)(*(long *)(lVar20 + 0x1a8) + 0x4f0)) {
              do {
                puVar18 = puVar18 + 0x21;
                if (param_2 <= puVar18) break;
                lVar20 = *param_3;
                func_0x00010a01e9ec(lVar20,(ulong)puStack_1f0 & 0xffffffff);
                lVar6 = *param_3;
                func_0x00010a01e9ec(lVar6,(int)*puVar18);
              } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
                       *(float *)(*(long *)(lVar20 + 0x1a8) + 0x4f0));
            }
            else {
              do {
                puVar18 = puVar18 + 0x21;
                if (puVar18 == param_2) goto LAB_10ac07edc;
                lVar20 = *param_3;
                func_0x00010a01e9ec(lVar20,(ulong)puStack_1f0 & 0xffffffff);
                lVar6 = *param_3;
                func_0x00010a01e9ec(lVar6,(int)*puVar18);
              } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
                       *(float *)(*(long *)(lVar20 + 0x1a8) + 0x4f0));
            }
            puVar9 = param_2;
            if (puVar18 < param_2) {
              do {
                if (puVar9 == puVar5) goto LAB_10ac07edc;
                lVar20 = *param_3;
                func_0x00010a01e9ec(lVar20,(ulong)puStack_1f0 & 0xffffffff);
                puVar9 = puVar9 + -0x21;
                lVar6 = *param_3;
                func_0x00010a01e9ec(lVar6,(int)*puVar9);
              } while (*(float *)(*(long *)(lVar20 + 0x1a8) + 0x4f0) <
                       *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0));
            }
            while (puVar18 < puVar9) {
              FUN_10ac07f70(puVar18,puVar9);
              do {
                puVar18 = puVar18 + 0x21;
                if (puVar18 == param_2) goto LAB_10ac07edc;
                lVar20 = *param_3;
                func_0x00010a01e9ec(lVar20,(ulong)puStack_1f0 & 0xffffffff);
                lVar6 = *param_3;
                func_0x00010a01e9ec(lVar6,(int)*puVar18);
              } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
                       *(float *)(*(long *)(lVar20 + 0x1a8) + 0x4f0));
              do {
                if (puVar9 == puVar5) goto LAB_10ac07edc;
                lVar20 = *param_3;
                func_0x00010a01e9ec(lVar20,(ulong)puStack_1f0 & 0xffffffff);
                puVar9 = puVar9 + -0x21;
                lVar6 = *param_3;
                func_0x00010a01e9ec(lVar6,(int)*puVar9);
              } while (*(float *)(*(long *)(lVar20 + 0x1a8) + 0x4f0) <
                       *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0));
            }
            puVar9 = puVar18 + -0x21;
            if (puVar9 != puVar5) {
              uVar17 = puVar18[-0x20];
              uVar14 = *puVar9;
              *(short *)(puVar5 + 2) = (short)puVar18[-0x1f];
              puVar5[1] = uVar17;
              *puVar5 = uVar14;
              FUN_10ac00490(puVar8);
              uVar14 = puVar18[-0x1e];
              puVar5[4] = puVar18[-0x1d];
              puVar5[3] = uVar14;
              puVar5[5] = puVar18[-0x1c];
              puVar18[-0x1e] = 0;
              puVar18[-0x1d] = 0;
              puVar18[-0x1c] = 0;
              puVar5[6] = puVar18[-0x1b];
              puVar5[7] = puVar18[-0x1a];
              uVar14 = puVar18[-0x19];
              puVar5[9] = puVar18[-0x18];
              puVar5[8] = uVar14;
              uVar17 = puVar18[-0x16];
              uVar14 = puVar18[-0x17];
              uVar16 = puVar18[-0x14];
              uVar23 = puVar18[-0x15];
              uVar24 = puVar18[-0x13];
              uVar25 = puVar18[-0x10];
              uVar26 = puVar18[-0x11];
              puVar5[0xf] = puVar18[-0x12];
              puVar5[0xe] = uVar24;
              puVar5[0x11] = uVar25;
              puVar5[0x10] = uVar26;
              puVar5[0xb] = uVar17;
              puVar5[10] = uVar14;
              puVar5[0xd] = uVar16;
              puVar5[0xc] = uVar23;
              uVar17 = puVar18[-0xe];
              uVar14 = puVar18[-0xf];
              uVar16 = puVar18[-0xc];
              uVar23 = puVar18[-0xd];
              uVar24 = puVar18[-0xb];
              uVar25 = puVar18[-8];
              uVar26 = puVar18[-9];
              puVar5[0x17] = puVar18[-10];
              puVar5[0x16] = uVar24;
              puVar5[0x19] = uVar25;
              puVar5[0x18] = uVar26;
              puVar5[0x13] = uVar17;
              puVar5[0x12] = uVar14;
              puVar5[0x15] = uVar16;
              puVar5[0x14] = uVar23;
              uVar17 = puVar18[-6];
              uVar14 = puVar18[-7];
              uVar16 = puVar18[-4];
              uVar23 = puVar18[-5];
              uVar26 = puVar18[-2];
              uVar24 = puVar18[-3];
              *(int *)(puVar5 + 0x20) = (int)puVar18[-1];
              puVar5[0x1d] = uVar16;
              puVar5[0x1c] = uVar23;
              puVar5[0x1f] = uVar26;
              puVar5[0x1e] = uVar24;
              puVar5[0x1b] = uVar17;
              puVar5[0x1a] = uVar14;
            }
            *(undefined2 *)(puVar18 + -0x1f) = uStack_1e0;
            puVar18[-0x20] = uStack_1e8;
            *puVar9 = (ulong)puStack_1f0;
            FUN_10ac00490(puVar18 + -0x1e);
            puVar18[-0x1d] = uStack_1d0;
            puVar18[-0x1e] = uStack_1d8;
            puVar18[-0x1c] = uStack_1c8;
            uStack_1d8 = 0;
            uStack_1d0 = 0;
            uStack_1c8 = 0;
            puVar18[-0x1b] = uStack_1c0;
            puVar18[-0x1a] = uStack_1b8;
            puVar18[-0x18] = uStack_1a8;
            puVar18[-0x19] = uStack_1b0;
            puVar18[-0x10] = uStack_168;
            puVar18[-0x11] = uStack_170;
            puVar18[-0x12] = uStack_178;
            puVar18[-0x13] = uStack_180;
            puVar18[-0x14] = uStack_188;
            puVar18[-0x15] = uStack_190;
            puVar18[-0x16] = uStack_198;
            puVar18[-0x17] = uStack_1a0;
            puVar18[-8] = uStack_128;
            puVar18[-9] = uStack_130;
            puVar18[-10] = uStack_138;
            puVar18[-0xb] = uStack_140;
            puVar18[-0xc] = uStack_148;
            puVar18[-0xd] = uStack_150;
            puVar18[-0xe] = uStack_158;
            puVar18[-0xf] = uStack_160;
            *(undefined4 *)(puVar18 + -1) = uStack_f0;
            puVar18[-2] = uStack_f8;
            puVar18[-3] = uStack_100;
            puVar18[-4] = uStack_108;
            puVar18[-5] = uStack_110;
            puVar18[-6] = uStack_118;
            puVar18[-7] = uStack_120;
            puStack_300 = &uStack_1d8;
            FUN_10a1901f0(&puStack_300);
            param_5 = 0;
            goto LAB_10ac065a4;
          }
        }
        lVar20 = 0;
        uStack_1e8 = puVar5[1];
        puStack_1f0 = (ulong *)*puVar5;
        uStack_1e0 = (undefined2)puVar5[2];
        puVar8 = puVar5 + 3;
        uStack_1d0 = puVar5[4];
        uStack_1d8 = *puVar8;
        uStack_1c8 = puVar5[5];
        puVar5[4] = 0;
        puVar5[5] = 0;
        *puVar8 = 0;
        uStack_1b8 = puVar5[7];
        uStack_1c0 = puVar5[6];
        uStack_1a8 = puVar5[9];
        uStack_1b0 = puVar5[8];
        uStack_108 = puVar5[0x1d];
        uStack_110 = puVar5[0x1c];
        uStack_f8 = puVar5[0x1f];
        uStack_100 = puVar5[0x1e];
        uStack_f0 = (undefined4)puVar5[0x20];
        uStack_118 = puVar5[0x1b];
        uStack_120 = puVar5[0x1a];
        uStack_138 = puVar5[0x17];
        uStack_140 = puVar5[0x16];
        uStack_128 = puVar5[0x19];
        uStack_130 = puVar5[0x18];
        uStack_158 = puVar5[0x13];
        uStack_160 = puVar5[0x12];
        uStack_148 = puVar5[0x15];
        uStack_150 = puVar5[0x14];
        uStack_178 = puVar5[0xf];
        uStack_180 = puVar5[0xe];
        uStack_168 = puVar5[0x11];
        uStack_170 = puVar5[0x10];
        uStack_198 = puVar5[0xb];
        uStack_1a0 = puVar5[10];
        uStack_188 = puVar5[0xd];
        uStack_190 = puVar5[0xc];
        do {
          puVar18 = (ulong *)((long)puVar5 + lVar20 + 0x108);
          if (puVar18 == param_2) goto LAB_10ac07edc;
          lVar6 = *param_3;
          func_0x00010a01e9ec(lVar6,(int)*puVar18);
          lVar7 = *param_3;
          func_0x00010a01e9ec(lVar7,(ulong)puStack_1f0 & 0xffffffff);
          lVar20 = lVar20 + 0x108;
        } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <
                 *(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0));
        puVar9 = (ulong *)((long)puVar5 + lVar20);
        puVar21 = param_2;
        if (lVar20 == 0x108) {
          do {
            if (puVar21 <= puVar9) break;
            puVar21 = puVar21 + -0x21;
            lVar20 = *param_3;
            func_0x00010a01e9ec(lVar20,(int)*puVar21);
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(ulong)puStack_1f0 & 0xffffffff);
          } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
                   *(float *)(*(long *)(lVar20 + 0x1a8) + 0x4f0));
        }
        else {
          do {
            if (puVar21 == puVar5) goto LAB_10ac07edc;
            puVar21 = puVar21 + -0x21;
            lVar20 = *param_3;
            func_0x00010a01e9ec(lVar20,(int)*puVar21);
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(ulong)puStack_1f0 & 0xffffffff);
          } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
                   *(float *)(*(long *)(lVar20 + 0x1a8) + 0x4f0));
        }
        puVar18 = puVar9;
        puVar22 = puVar21;
        if (puVar9 < puVar21) {
          do {
            FUN_10ac07f70(puVar18,puVar22);
            do {
              puVar18 = puVar18 + 0x21;
              if (puVar18 == param_2) goto LAB_10ac07edc;
              lVar20 = *param_3;
              func_0x00010a01e9ec(lVar20,(int)*puVar18);
              lVar6 = *param_3;
              func_0x00010a01e9ec(lVar6,(ulong)puStack_1f0 & 0xffffffff);
            } while (*(float *)(*(long *)(lVar20 + 0x1a8) + 0x4f0) <
                     *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0));
            do {
              if (puVar22 == puVar5) goto LAB_10ac07edc;
              puVar22 = puVar22 + -0x21;
              lVar20 = *param_3;
              func_0x00010a01e9ec(lVar20,(int)*puVar22);
              lVar6 = *param_3;
              func_0x00010a01e9ec(lVar6,(ulong)puStack_1f0 & 0xffffffff);
            } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
                     *(float *)(*(long *)(lVar20 + 0x1a8) + 0x4f0));
          } while (puVar18 < puVar22);
        }
        puVar22 = puVar18 + -0x21;
        if (puVar22 != puVar5) {
          uVar17 = puVar18[-0x20];
          uVar14 = *puVar22;
          *(short *)(puVar5 + 2) = (short)puVar18[-0x1f];
          puVar5[1] = uVar17;
          *puVar5 = uVar14;
          FUN_10ac00490(puVar8);
          uVar14 = puVar18[-0x1e];
          puVar5[4] = puVar18[-0x1d];
          puVar5[3] = uVar14;
          puVar5[5] = puVar18[-0x1c];
          puVar18[-0x1e] = 0;
          puVar18[-0x1d] = 0;
          puVar18[-0x1c] = 0;
          puVar5[6] = puVar18[-0x1b];
          puVar5[7] = puVar18[-0x1a];
          uVar14 = puVar18[-0x19];
          puVar5[9] = puVar18[-0x18];
          puVar5[8] = uVar14;
          uVar17 = puVar18[-0x16];
          uVar14 = puVar18[-0x17];
          uVar16 = puVar18[-0x14];
          uVar23 = puVar18[-0x15];
          uVar24 = puVar18[-0x13];
          uVar25 = puVar18[-0x10];
          uVar26 = puVar18[-0x11];
          puVar5[0xf] = puVar18[-0x12];
          puVar5[0xe] = uVar24;
          puVar5[0x11] = uVar25;
          puVar5[0x10] = uVar26;
          puVar5[0xb] = uVar17;
          puVar5[10] = uVar14;
          puVar5[0xd] = uVar16;
          puVar5[0xc] = uVar23;
          uVar17 = puVar18[-0xe];
          uVar14 = puVar18[-0xf];
          uVar16 = puVar18[-0xc];
          uVar23 = puVar18[-0xd];
          uVar24 = puVar18[-0xb];
          uVar25 = puVar18[-8];
          uVar26 = puVar18[-9];
          puVar5[0x17] = puVar18[-10];
          puVar5[0x16] = uVar24;
          puVar5[0x19] = uVar25;
          puVar5[0x18] = uVar26;
          puVar5[0x13] = uVar17;
          puVar5[0x12] = uVar14;
          puVar5[0x15] = uVar16;
          puVar5[0x14] = uVar23;
          uVar17 = puVar18[-6];
          uVar14 = puVar18[-7];
          uVar16 = puVar18[-4];
          uVar23 = puVar18[-5];
          uVar26 = puVar18[-2];
          uVar24 = puVar18[-3];
          *(int *)(puVar5 + 0x20) = (int)puVar18[-1];
          puVar5[0x1d] = uVar16;
          puVar5[0x1c] = uVar23;
          puVar5[0x1f] = uVar26;
          puVar5[0x1e] = uVar24;
          puVar5[0x1b] = uVar17;
          puVar5[0x1a] = uVar14;
        }
        *(undefined2 *)(puVar18 + -0x1f) = uStack_1e0;
        puVar18[-0x20] = uStack_1e8;
        *puVar22 = (ulong)puStack_1f0;
        FUN_10ac00490(puVar18 + -0x1e);
        puVar18[-0x1d] = uStack_1d0;
        puVar18[-0x1e] = uStack_1d8;
        puVar18[-0x1c] = uStack_1c8;
        uStack_1d8 = 0;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        puVar18[-0x1b] = uStack_1c0;
        puVar18[-0x1a] = uStack_1b8;
        puVar18[-0x18] = uStack_1a8;
        puVar18[-0x19] = uStack_1b0;
        puVar18[-0x10] = uStack_168;
        puVar18[-0x11] = uStack_170;
        puVar18[-0x12] = uStack_178;
        puVar18[-0x13] = uStack_180;
        puVar18[-0x14] = uStack_188;
        puVar18[-0x15] = uStack_190;
        puVar18[-0x16] = uStack_198;
        puVar18[-0x17] = uStack_1a0;
        puVar18[-8] = uStack_128;
        puVar18[-9] = uStack_130;
        puVar18[-10] = uStack_138;
        puVar18[-0xb] = uStack_140;
        puVar18[-0xc] = uStack_148;
        puVar18[-0xd] = uStack_150;
        puVar18[-0xe] = uStack_158;
        puVar18[-0xf] = uStack_160;
        *(undefined4 *)(puVar18 + -1) = uStack_f0;
        puVar18[-2] = uStack_f8;
        puVar18[-3] = uStack_100;
        puVar18[-4] = uStack_108;
        puVar18[-5] = uStack_110;
        puVar18[-6] = uStack_118;
        puVar18[-7] = uStack_120;
        puStack_300 = &uStack_1d8;
        FUN_10a1901f0(&puStack_300);
        if (puVar9 < puVar21) goto LAB_10ac06be8;
        puVar8 = puVar5;
        FUN_10ac084ec(puVar5,puVar22,param_3);
        puVar9 = puVar18;
        FUN_10ac084ec(puVar18,param_2,param_3);
        if ((int)puVar9 == 0) goto code_r0x00010ac06be4;
        param_2 = puVar22;
        if (((ulong)puVar8 & 1) != 0) {
          return;
        }
      } while( true );
    }
    uVar14 = param_1[2] - *param_1;
    puVar15 = (undefined *)((long)uVar14 >> 4);
    if (puVar15 <= puVar1) {
      puVar15 = puVar1;
    }
    if (0x7fffffffffffffdf < uVar14) {
      puVar15 = (undefined *)0x7ffffffffffffff;
    }
    plStack_38 = param_1;
    if (puVar15 == (undefined *)0x0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1;
      FUN_10a36f358();
    }
    plStack_50 = (long *)((long)plVar4 + lVar20);
    puVar13 = plStack_50 + (long)param_2 * 4;
    puVar12 = plStack_50;
    do {
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0x28cd94bfde;
      puVar12 = puVar12 + 4;
    } while (puVar12 != puVar13);
    lVar20 = (long)plStack_50 + (*param_1 - param_1[1]);
    plStack_58 = plVar4;
    plStack_48 = puVar13;
    plStack_40 = plVar4 + (long)puVar15 * 4;
    func_0x00010a36f38c(param_1,*param_1,param_1[1],lVar20);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar20;
    param_1[1] = (long)puVar13;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar4 + (long)puVar15 * 4);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00010a36f4bc(&plStack_58);
  }
  else {
    puVar13 = puVar12;
    if (param_2 != (ulong *)0x0) {
      puVar13 = puVar12 + (long)param_2 * 4;
      do {
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0x28cd94bfde;
        puVar12 = puVar12 + 4;
      } while (puVar12 != puVar13);
    }
    param_1[1] = (long)puVar13;
  }
  return;
LAB_10ac0706c:
  puVar8 = puVar18;
  lVar6 = *param_3;
  func_0x00010a01e9ec(lVar6,(int)puVar19[0x21]);
  lVar7 = *param_3;
  func_0x00010a01e9ec(lVar7,(int)*puVar19);
  if (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) < *(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0)) {
    uStack_1e8 = puVar8[1];
    puStack_1f0 = (ulong *)*puVar8;
    uStack_1e0 = (undefined2)puVar8[2];
    uStack_1d0 = puVar19[0x25];
    uStack_1d8 = puVar19[0x24];
    uStack_1c8 = puVar19[0x26];
    puVar19[0x24] = 0;
    puVar19[0x25] = 0;
    puVar19[0x26] = 0;
    uStack_f0 = (undefined4)puVar19[0x41];
    uStack_118 = puVar19[0x3c];
    uStack_120 = puVar19[0x3b];
    uStack_108 = puVar19[0x3e];
    uStack_110 = puVar19[0x3d];
    uStack_f8 = puVar19[0x40];
    uStack_100 = puVar19[0x3f];
    uStack_158 = puVar19[0x34];
    uStack_160 = puVar19[0x33];
    uStack_148 = puVar19[0x36];
    uStack_150 = puVar19[0x35];
    uStack_138 = puVar19[0x38];
    uStack_140 = puVar19[0x37];
    uStack_128 = puVar19[0x3a];
    uStack_130 = puVar19[0x39];
    uStack_198 = puVar19[0x2c];
    uStack_1a0 = puVar19[0x2b];
    uStack_188 = puVar19[0x2e];
    uStack_190 = puVar19[0x2d];
    uStack_178 = puVar19[0x30];
    uStack_180 = puVar19[0x2f];
    uStack_168 = puVar19[0x32];
    uStack_170 = puVar19[0x31];
    uStack_1b8 = puVar19[0x28];
    uStack_1c0 = puVar19[0x27];
    uStack_1a8 = puVar19[0x2a];
    uStack_1b0 = puVar19[0x29];
    lVar6 = lVar20;
    do {
      lVar7 = lVar6;
      puVar12 = (undefined8 *)((long)puVar5 + lVar7);
      puVar12[0x22] = puVar12[1];
      puVar12[0x21] = *puVar12;
      *(undefined2 *)(puVar12 + 0x23) = *(undefined2 *)(puVar12 + 2);
      FUN_10ac00490(puVar12 + 0x24);
      puVar12[0x25] = puVar12[4];
      puVar12[0x24] = puVar12[3];
      puVar12[0x27] = puVar12[6];
      puVar12[0x26] = puVar12[5];
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[3] = 0;
      puVar12[0x28] = puVar12[7];
      puVar12[0x3e] = puVar12[0x1d];
      puVar12[0x3d] = puVar12[0x1c];
      puVar12[0x40] = puVar12[0x1f];
      puVar12[0x3f] = puVar12[0x1e];
      *(undefined4 *)(puVar12 + 0x41) = *(undefined4 *)(puVar12 + 0x20);
      puVar12[0x36] = puVar12[0x15];
      puVar12[0x35] = puVar12[0x14];
      puVar12[0x38] = puVar12[0x17];
      puVar12[0x37] = puVar12[0x16];
      puVar12[0x3a] = puVar12[0x19];
      puVar12[0x39] = puVar12[0x18];
      puVar12[0x3c] = puVar12[0x1b];
      puVar12[0x3b] = puVar12[0x1a];
      puVar12[0x2e] = puVar12[0xd];
      puVar12[0x2d] = puVar12[0xc];
      puVar12[0x30] = puVar12[0xf];
      puVar12[0x2f] = puVar12[0xe];
      puVar12[0x32] = puVar12[0x11];
      puVar12[0x31] = puVar12[0x10];
      puVar12[0x34] = puVar12[0x13];
      puVar12[0x33] = puVar12[0x12];
      puVar12[0x2a] = puVar12[9];
      puVar12[0x29] = puVar12[8];
      puVar12[0x2c] = puVar12[0xb];
      puVar12[0x2b] = puVar12[10];
      puVar18 = puVar5;
      if (lVar7 == 0) goto LAB_10ac071e8;
      lVar10 = *param_3;
      func_0x00010a01e9ec(lVar10,(ulong)puStack_1f0 & 0xffffffff);
      lVar11 = *param_3;
      func_0x00010a01e9ec(lVar11,*(undefined4 *)(puVar12 + -0x21));
      lVar6 = lVar7 + -0x108;
    } while (*(float *)(*(long *)(lVar10 + 0x1a8) + 0x4f0) <
             *(float *)(*(long *)(lVar11 + 0x1a8) + 0x4f0));
    puVar18 = (ulong *)((long)puVar5 + lVar7);
LAB_10ac071e8:
    *(undefined2 *)(puVar18 + 2) = uStack_1e0;
    puVar18[1] = uStack_1e8;
    *puVar18 = (ulong)puStack_1f0;
    FUN_10ac00490(puVar12 + 3);
    puVar12[3] = uStack_1d8;
    puVar18[5] = uStack_1c8;
    puVar18[4] = uStack_1d0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1d8 = 0;
    puVar18[6] = uStack_1c0;
    puVar18[7] = uStack_1b8;
    puVar12[0x17] = uStack_138;
    puVar12[0x16] = uStack_140;
    puVar12[0x19] = uStack_128;
    puVar12[0x18] = uStack_130;
    puVar12[0x13] = uStack_158;
    puVar12[0x12] = uStack_160;
    puVar12[0x15] = uStack_148;
    puVar12[0x14] = uStack_150;
    puVar12[0xf] = uStack_178;
    puVar12[0xe] = uStack_180;
    puVar12[0x11] = uStack_168;
    puVar12[0x10] = uStack_170;
    puVar12[0xb] = uStack_198;
    puVar12[10] = uStack_1a0;
    puVar12[0xd] = uStack_188;
    puVar12[0xc] = uStack_190;
    puVar12[9] = uStack_1a8;
    puVar12[8] = uStack_1b0;
    *(undefined4 *)(puVar12 + 0x20) = uStack_f0;
    puVar12[0x1d] = uStack_108;
    puVar12[0x1c] = uStack_110;
    puVar12[0x1f] = uStack_f8;
    puVar12[0x1e] = uStack_100;
    puVar12[0x1b] = uStack_118;
    puVar12[0x1a] = uStack_120;
    puStack_300 = &uStack_1d8;
    FUN_10a1901f0(&puStack_300);
  }
  lVar20 = lVar20 + 0x108;
  puVar18 = puVar8 + 0x21;
  puVar19 = puVar8;
  if (puVar8 + 0x21 == param_2) {
    return;
  }
  goto LAB_10ac0706c;
LAB_10ac072bc:
  do {
    if ((long)uVar23 <= (long)uVar16) {
      uVar26 = uVar23 << 1 | 1;
      puVar18 = puVar5 + uVar26 * 0x21;
      uVar24 = uVar23 * 2 + 2;
      if ((long)uVar24 < (long)uVar17) {
        lVar20 = *param_3;
        func_0x00010a01e9ec(lVar20,(int)*puVar18);
        lVar6 = *param_3;
        func_0x00010a01e9ec(lVar6,(int)puVar18[0x21]);
        if (*(float *)(*(long *)(lVar20 + 0x1a8) + 0x4f0) <
            *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0)) {
          puVar18 = puVar18 + 0x21;
          uVar26 = uVar24;
        }
      }
      puVar19 = puVar5 + uVar23 * 0x21;
      lVar20 = *param_3;
      func_0x00010a01e9ec(lVar20,(int)*puVar18);
      lVar6 = *param_3;
      func_0x00010a01e9ec(lVar6,(int)*puVar19);
      if (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
          *(float *)(*(long *)(lVar20 + 0x1a8) + 0x4f0)) {
        uStack_1e8 = puVar19[1];
        puStack_1f0 = (ulong *)*puVar19;
        uStack_1e0 = (undefined2)puVar19[2];
        uStack_1d0 = puVar19[4];
        uStack_1d8 = puVar19[3];
        uStack_1c8 = puVar19[5];
        puVar19[4] = 0;
        puVar19[5] = 0;
        puVar19[3] = 0;
        uStack_178 = puVar19[0xf];
        uStack_180 = puVar19[0xe];
        uStack_168 = puVar19[0x11];
        uStack_170 = puVar19[0x10];
        uStack_198 = puVar19[0xb];
        uStack_1a0 = puVar19[10];
        uStack_188 = puVar19[0xd];
        uStack_190 = puVar19[0xc];
        uStack_138 = puVar19[0x17];
        uStack_140 = puVar19[0x16];
        uStack_128 = puVar19[0x19];
        uStack_130 = puVar19[0x18];
        uStack_158 = puVar19[0x13];
        uStack_160 = puVar19[0x12];
        uStack_148 = puVar19[0x15];
        uStack_150 = puVar19[0x14];
        uStack_108 = puVar19[0x1d];
        uStack_110 = puVar19[0x1c];
        uStack_f8 = puVar19[0x1f];
        uStack_100 = puVar19[0x1e];
        uStack_f0 = (undefined4)puVar19[0x20];
        uStack_118 = puVar19[0x1b];
        uStack_120 = puVar19[0x1a];
        uStack_1b8 = puVar19[7];
        uStack_1c0 = puVar19[6];
        uStack_1a8 = puVar19[9];
        uStack_1b0 = puVar19[8];
        do {
          puVar9 = puVar18;
          uVar25 = puVar9[1];
          uVar24 = *puVar9;
          *(short *)(puVar19 + 2) = (short)puVar9[2];
          puVar19[1] = uVar25;
          *puVar19 = uVar24;
          FUN_10ac00490(puVar19 + 3);
          puVar8 = puVar9 + 3;
          uVar24 = *puVar8;
          puVar19[4] = puVar9[4];
          puVar19[3] = uVar24;
          puVar19[5] = puVar9[5];
          *puVar8 = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar19[6] = puVar9[6];
          puVar19[7] = puVar9[7];
          uVar24 = puVar9[8];
          puVar19[9] = puVar9[9];
          puVar19[8] = uVar24;
          uVar25 = puVar9[0xb];
          uVar24 = puVar9[10];
          uVar28 = puVar9[0xd];
          uVar27 = puVar9[0xc];
          uVar29 = puVar9[0xe];
          uVar31 = puVar9[0x11];
          uVar30 = puVar9[0x10];
          puVar19[0xf] = puVar9[0xf];
          puVar19[0xe] = uVar29;
          puVar19[0x11] = uVar31;
          puVar19[0x10] = uVar30;
          puVar19[0xb] = uVar25;
          puVar19[10] = uVar24;
          puVar19[0xd] = uVar28;
          puVar19[0xc] = uVar27;
          uVar25 = puVar9[0x13];
          uVar24 = puVar9[0x12];
          uVar28 = puVar9[0x15];
          uVar27 = puVar9[0x14];
          uVar29 = puVar9[0x16];
          uVar31 = puVar9[0x19];
          uVar30 = puVar9[0x18];
          puVar19[0x17] = puVar9[0x17];
          puVar19[0x16] = uVar29;
          puVar19[0x19] = uVar31;
          puVar19[0x18] = uVar30;
          puVar19[0x13] = uVar25;
          puVar19[0x12] = uVar24;
          puVar19[0x15] = uVar28;
          puVar19[0x14] = uVar27;
          uVar25 = puVar9[0x1b];
          uVar24 = puVar9[0x1a];
          uVar28 = puVar9[0x1d];
          uVar27 = puVar9[0x1c];
          uVar30 = puVar9[0x1f];
          uVar29 = puVar9[0x1e];
          *(int *)(puVar19 + 0x20) = (int)puVar9[0x20];
          puVar19[0x1d] = uVar28;
          puVar19[0x1c] = uVar27;
          puVar19[0x1f] = uVar30;
          puVar19[0x1e] = uVar29;
          puVar19[0x1b] = uVar25;
          puVar19[0x1a] = uVar24;
          if ((long)uVar16 < (long)uVar26) break;
          uVar25 = uVar26 << 1 | 1;
          puVar18 = puVar5 + uVar25 * 0x21;
          uVar24 = uVar26 * 2 + 2;
          uVar26 = uVar25;
          if ((long)uVar24 < (long)uVar17) {
            lVar20 = *param_3;
            func_0x00010a01e9ec(lVar20,(int)*puVar18);
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(int)puVar18[0x21]);
            if (*(float *)(*(long *)(lVar20 + 0x1a8) + 0x4f0) <
                *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0)) {
              uVar26 = uVar24;
              puVar18 = puVar18 + 0x21;
            }
          }
          lVar20 = *param_3;
          func_0x00010a01e9ec(lVar20,(int)*puVar18);
          lVar6 = *param_3;
          func_0x00010a01e9ec(lVar6,(ulong)puStack_1f0 & 0xffffffff);
          puVar19 = puVar9;
        } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
                 *(float *)(*(long *)(lVar20 + 0x1a8) + 0x4f0));
        *(undefined2 *)(puVar9 + 2) = uStack_1e0;
        puVar9[1] = uStack_1e8;
        *puVar9 = (ulong)puStack_1f0;
        FUN_10ac00490(puVar8);
        puVar9[4] = uStack_1d0;
        puVar9[3] = uStack_1d8;
        puVar9[5] = uStack_1c8;
        uStack_1d8 = 0;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        puVar9[6] = uStack_1c0;
        puVar9[7] = uStack_1b8;
        *(undefined4 *)(puVar9 + 0x20) = uStack_f0;
        puVar9[0x1f] = uStack_f8;
        puVar9[0x1e] = uStack_100;
        puVar9[0x1d] = uStack_108;
        puVar9[0x1c] = uStack_110;
        puVar9[0x1b] = uStack_118;
        puVar9[0x1a] = uStack_120;
        puVar9[0x19] = uStack_128;
        puVar9[0x18] = uStack_130;
        puVar9[0x17] = uStack_138;
        puVar9[0x16] = uStack_140;
        puVar9[0x15] = uStack_148;
        puVar9[0x14] = uStack_150;
        puVar9[0x13] = uStack_158;
        puVar9[0x12] = uStack_160;
        puVar9[0x11] = uStack_168;
        puVar9[0x10] = uStack_170;
        puVar9[0xf] = uStack_178;
        puVar9[0xe] = uStack_180;
        puVar9[0xd] = uStack_188;
        puVar9[0xc] = uStack_190;
        puVar9[0xb] = uStack_198;
        puVar9[10] = uStack_1a0;
        puVar9[9] = uStack_1a8;
        puVar9[8] = uStack_1b0;
        puStack_300 = &uStack_1d8;
        FUN_10a1901f0(&puStack_300);
      }
    }
    bVar2 = uVar23 != 0;
    uVar23 = uVar23 - 1;
  } while (bVar2);
  lVar20 = (uVar14 >> 3) * 0xf83e0f83e0f83e1;
  do {
    uStack_2f8 = puVar5[1];
    puStack_300 = (ulong *)*puVar5;
    uStack_2f0 = (undefined2)puVar5[2];
    uStack_2e0 = puVar5[4];
    uStack_2e8 = puVar5[3];
    uStack_2d8 = puVar5[5];
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    uStack_2c8 = puVar5[7];
    uStack_2d0 = puVar5[6];
    uStack_2b8 = puVar5[9];
    uStack_2c0 = puVar5[8];
    uStack_218 = puVar5[0x1d];
    uStack_220 = puVar5[0x1c];
    uStack_208 = puVar5[0x1f];
    uStack_210 = puVar5[0x1e];
    uStack_200 = (undefined4)puVar5[0x20];
    uStack_228 = puVar5[0x1b];
    uStack_230 = puVar5[0x1a];
    uStack_248 = puVar5[0x17];
    uStack_250 = puVar5[0x16];
    uStack_238 = puVar5[0x19];
    uStack_240 = puVar5[0x18];
    uStack_268 = puVar5[0x13];
    uStack_270 = puVar5[0x12];
    uStack_258 = puVar5[0x15];
    uStack_260 = puVar5[0x14];
    uStack_288 = puVar5[0xf];
    uStack_290 = puVar5[0xe];
    uStack_278 = puVar5[0x11];
    uStack_280 = puVar5[0x10];
    uStack_2a8 = puVar5[0xb];
    uStack_2b0 = puVar5[10];
    uStack_298 = puVar5[0xd];
    uStack_2a0 = puVar5[0xc];
    puVar18 = puVar5;
    uVar14 = 0;
    do {
      uVar23 = uVar14 << 1 | 1;
      uVar17 = uVar14 * 2 + 2;
      puVar19 = puVar18 + uVar14 * 0x21 + 0x21;
      if ((long)uVar17 < lVar20) {
        lVar6 = *param_3;
        func_0x00010a01e9ec(lVar6,(int)puVar18[uVar14 * 0x21 + 0x21]);
        lVar7 = *param_3;
        func_0x00010a01e9ec(lVar7,(int)puVar18[uVar14 * 0x21 + 0x42]);
        if (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <
            *(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0)) {
          puVar19 = puVar18 + uVar14 * 0x21 + 0x42;
          uVar23 = uVar17;
        }
      }
      uVar17 = puVar19[1];
      uVar14 = *puVar19;
      *(short *)(puVar18 + 2) = (short)puVar19[2];
      puVar18[1] = uVar17;
      *puVar18 = uVar14;
      FUN_10ac00490(puVar18 + 3);
      puVar8 = puVar19 + 3;
      uVar14 = *puVar8;
      puVar18[4] = puVar19[4];
      puVar18[3] = uVar14;
      puVar18[5] = puVar19[5];
      *puVar8 = 0;
      puVar19[4] = 0;
      puVar19[5] = 0;
      puVar18[6] = puVar19[6];
      puVar18[7] = puVar19[7];
      uVar14 = puVar19[8];
      puVar18[9] = puVar19[9];
      puVar18[8] = uVar14;
      uVar17 = puVar19[0xb];
      uVar14 = puVar19[10];
      uVar24 = puVar19[0xd];
      uVar16 = puVar19[0xc];
      uVar26 = puVar19[0xe];
      uVar27 = puVar19[0x11];
      uVar25 = puVar19[0x10];
      puVar18[0xf] = puVar19[0xf];
      puVar18[0xe] = uVar26;
      puVar18[0x11] = uVar27;
      puVar18[0x10] = uVar25;
      puVar18[0xb] = uVar17;
      puVar18[10] = uVar14;
      puVar18[0xd] = uVar24;
      puVar18[0xc] = uVar16;
      uVar17 = puVar19[0x13];
      uVar14 = puVar19[0x12];
      uVar24 = puVar19[0x15];
      uVar16 = puVar19[0x14];
      uVar26 = puVar19[0x16];
      uVar27 = puVar19[0x19];
      uVar25 = puVar19[0x18];
      puVar18[0x17] = puVar19[0x17];
      puVar18[0x16] = uVar26;
      puVar18[0x19] = uVar27;
      puVar18[0x18] = uVar25;
      puVar18[0x13] = uVar17;
      puVar18[0x12] = uVar14;
      puVar18[0x15] = uVar24;
      puVar18[0x14] = uVar16;
      uVar17 = puVar19[0x1b];
      uVar14 = puVar19[0x1a];
      uVar24 = puVar19[0x1d];
      uVar16 = puVar19[0x1c];
      uVar25 = puVar19[0x1f];
      uVar26 = puVar19[0x1e];
      *(int *)(puVar18 + 0x20) = (int)puVar19[0x20];
      puVar18[0x1d] = uVar24;
      puVar18[0x1c] = uVar16;
      puVar18[0x1f] = uVar25;
      puVar18[0x1e] = uVar26;
      puVar18[0x1b] = uVar17;
      puVar18[0x1a] = uVar14;
      puVar18 = puVar19;
      uVar14 = uVar23;
    } while ((long)uVar23 <= (long)(lVar20 - 2U >> 1));
    puVar18 = param_2 + -0x21;
    if (puVar19 == puVar18) {
      *(undefined2 *)(puVar19 + 2) = uStack_2f0;
      puVar19[1] = uStack_2f8;
      *puVar19 = (ulong)puStack_300;
      FUN_10ac00490(puVar8);
      puVar19[4] = uStack_2e0;
      puVar19[3] = uStack_2e8;
      puVar19[5] = uStack_2d8;
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      puVar19[6] = uStack_2d0;
      puVar19[7] = uStack_2c8;
      *(undefined4 *)(puVar19 + 0x20) = uStack_200;
      puVar19[0x1f] = uStack_208;
      puVar19[0x1e] = uStack_210;
      puVar19[0x1d] = uStack_218;
      puVar19[0x1c] = uStack_220;
      puVar19[0x1b] = uStack_228;
      puVar19[0x1a] = uStack_230;
      puVar19[0x19] = uStack_238;
      puVar19[0x18] = uStack_240;
      puVar19[0x17] = uStack_248;
      puVar19[0x16] = uStack_250;
      puVar19[0x15] = uStack_258;
      puVar19[0x14] = uStack_260;
      puVar19[0x13] = uStack_268;
      puVar19[0x12] = uStack_270;
      puVar19[0x11] = uStack_278;
      puVar19[0x10] = uStack_280;
      puVar19[0xf] = uStack_288;
      puVar19[0xe] = uStack_290;
      puVar19[0xd] = uStack_298;
      puVar19[0xc] = uStack_2a0;
      puVar19[0xb] = uStack_2a8;
      puVar19[10] = uStack_2b0;
      puVar19[9] = uStack_2b8;
      puVar19[8] = uStack_2c0;
    }
    else {
      uVar17 = param_2[-0x20];
      uVar14 = *puVar18;
      *(short *)(puVar19 + 2) = (short)param_2[-0x1f];
      puVar19[1] = uVar17;
      *puVar19 = uVar14;
      FUN_10ac00490(puVar8);
      puVar9 = param_2 + -0x1e;
      uVar14 = *puVar9;
      puVar19[4] = param_2[-0x1d];
      puVar19[3] = uVar14;
      puVar19[5] = param_2[-0x1c];
      *puVar9 = 0;
      param_2[-0x1d] = 0;
      param_2[-0x1c] = 0;
      puVar19[6] = param_2[-0x1b];
      puVar19[7] = param_2[-0x1a];
      uVar14 = param_2[-0x19];
      puVar19[9] = param_2[-0x18];
      puVar19[8] = uVar14;
      uVar17 = param_2[-0x16];
      uVar14 = param_2[-0x17];
      uVar16 = param_2[-0x14];
      uVar23 = param_2[-0x15];
      uVar26 = param_2[-0x12];
      uVar24 = param_2[-0x13];
      uVar25 = param_2[-0x11];
      puVar19[0x11] = param_2[-0x10];
      puVar19[0x10] = uVar25;
      puVar19[0xf] = uVar26;
      puVar19[0xe] = uVar24;
      puVar19[0xd] = uVar16;
      puVar19[0xc] = uVar23;
      puVar19[0xb] = uVar17;
      puVar19[10] = uVar14;
      uVar17 = param_2[-0xe];
      uVar14 = param_2[-0xf];
      uVar16 = param_2[-0xc];
      uVar23 = param_2[-0xd];
      uVar26 = param_2[-10];
      uVar24 = param_2[-0xb];
      uVar25 = param_2[-9];
      puVar19[0x19] = param_2[-8];
      puVar19[0x18] = uVar25;
      puVar19[0x17] = uVar26;
      puVar19[0x16] = uVar24;
      puVar19[0x15] = uVar16;
      puVar19[0x14] = uVar23;
      puVar19[0x13] = uVar17;
      puVar19[0x12] = uVar14;
      uVar17 = param_2[-6];
      uVar14 = param_2[-7];
      uVar16 = param_2[-4];
      uVar23 = param_2[-5];
      uVar26 = param_2[-2];
      uVar24 = param_2[-3];
      *(int *)(puVar19 + 0x20) = (int)param_2[-1];
      puVar19[0x1f] = uVar26;
      puVar19[0x1e] = uVar24;
      puVar19[0x1d] = uVar16;
      puVar19[0x1c] = uVar23;
      puVar19[0x1b] = uVar17;
      puVar19[0x1a] = uVar14;
      *(undefined2 *)(param_2 + -0x1f) = uStack_2f0;
      param_2[-0x20] = uStack_2f8;
      *puVar18 = (ulong)puStack_300;
      FUN_10ac00490(puVar9);
      param_2[-0x1d] = uStack_2e0;
      *puVar9 = uStack_2e8;
      param_2[-0x1c] = uStack_2d8;
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      param_2[-0x1b] = uStack_2d0;
      param_2[-0x1a] = uStack_2c8;
      param_2[-0x18] = uStack_2b8;
      param_2[-0x19] = uStack_2c0;
      param_2[-0x10] = uStack_278;
      param_2[-0x11] = uStack_280;
      param_2[-0x12] = uStack_288;
      param_2[-0x13] = uStack_290;
      param_2[-0x14] = uStack_298;
      param_2[-0x15] = uStack_2a0;
      param_2[-0x16] = uStack_2a8;
      param_2[-0x17] = uStack_2b0;
      param_2[-8] = uStack_238;
      param_2[-9] = uStack_240;
      param_2[-10] = uStack_248;
      param_2[-0xb] = uStack_250;
      param_2[-0xc] = uStack_258;
      param_2[-0xd] = uStack_260;
      param_2[-0xe] = uStack_268;
      param_2[-0xf] = uStack_270;
      *(undefined4 *)(param_2 + -1) = uStack_200;
      param_2[-2] = uStack_208;
      param_2[-3] = uStack_210;
      param_2[-4] = uStack_218;
      param_2[-5] = uStack_220;
      param_2[-6] = uStack_228;
      param_2[-7] = uStack_230;
      puVar1 = (undefined *)((long)puVar19 + (0x108 - (long)puVar5));
      if (0x108 < (long)puVar1) {
        uVar14 = ((ulong)puVar1 >> 3) * 0xf83e0f83e0f83e1 - 2 >> 1;
        lVar6 = *param_3;
        func_0x00010a01e9ec(lVar6,(int)puVar5[uVar14 * 0x21]);
        lVar7 = *param_3;
        func_0x00010a01e9ec(lVar7,(int)*puVar19);
        if (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <
            *(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0)) {
          uStack_1e8 = puVar19[1];
          puStack_1f0 = (ulong *)*puVar19;
          uStack_1e0 = (undefined2)puVar19[2];
          uStack_1d0 = puVar19[4];
          uStack_1d8 = puVar19[3];
          uStack_1c8 = puVar19[5];
          puVar19[4] = 0;
          puVar19[5] = 0;
          *puVar8 = 0;
          uStack_1b8 = puVar19[7];
          uStack_1c0 = puVar19[6];
          uStack_1a8 = puVar19[9];
          uStack_1b0 = puVar19[8];
          uStack_108 = puVar19[0x1d];
          uStack_110 = puVar19[0x1c];
          uStack_f8 = puVar19[0x1f];
          uStack_100 = puVar19[0x1e];
          uStack_f0 = (undefined4)puVar19[0x20];
          uStack_118 = puVar19[0x1b];
          uStack_120 = puVar19[0x1a];
          uStack_138 = puVar19[0x17];
          uStack_140 = puVar19[0x16];
          uStack_128 = puVar19[0x19];
          uStack_130 = puVar19[0x18];
          uStack_158 = puVar19[0x13];
          uStack_160 = puVar19[0x12];
          uStack_148 = puVar19[0x15];
          uStack_150 = puVar19[0x14];
          uStack_178 = puVar19[0xf];
          uStack_180 = puVar19[0xe];
          uStack_168 = puVar19[0x11];
          uStack_170 = puVar19[0x10];
          uStack_198 = puVar19[0xb];
          uStack_1a0 = puVar19[10];
          uStack_188 = puVar19[0xd];
          uStack_190 = puVar19[0xc];
          puVar8 = puVar5 + uVar14 * 0x21;
          do {
            puVar21 = puVar8;
            uVar23 = puVar21[1];
            uVar17 = *puVar21;
            *(short *)(puVar19 + 2) = (short)puVar21[2];
            puVar19[1] = uVar23;
            *puVar19 = uVar17;
            FUN_10ac00490(puVar19 + 3);
            puVar9 = puVar21 + 3;
            uVar17 = *puVar9;
            puVar19[4] = puVar21[4];
            puVar19[3] = uVar17;
            puVar19[5] = puVar21[5];
            *puVar9 = 0;
            puVar21[4] = 0;
            puVar21[5] = 0;
            puVar19[6] = puVar21[6];
            puVar19[7] = puVar21[7];
            uVar17 = puVar21[8];
            puVar19[9] = puVar21[9];
            puVar19[8] = uVar17;
            uVar23 = puVar21[0xb];
            uVar17 = puVar21[10];
            uVar24 = puVar21[0xd];
            uVar16 = puVar21[0xc];
            uVar26 = puVar21[0xe];
            uVar27 = puVar21[0x11];
            uVar25 = puVar21[0x10];
            puVar19[0xf] = puVar21[0xf];
            puVar19[0xe] = uVar26;
            puVar19[0x11] = uVar27;
            puVar19[0x10] = uVar25;
            puVar19[0xb] = uVar23;
            puVar19[10] = uVar17;
            puVar19[0xd] = uVar24;
            puVar19[0xc] = uVar16;
            uVar23 = puVar21[0x13];
            uVar17 = puVar21[0x12];
            uVar24 = puVar21[0x15];
            uVar16 = puVar21[0x14];
            uVar26 = puVar21[0x16];
            uVar27 = puVar21[0x19];
            uVar25 = puVar21[0x18];
            puVar19[0x17] = puVar21[0x17];
            puVar19[0x16] = uVar26;
            puVar19[0x19] = uVar27;
            puVar19[0x18] = uVar25;
            puVar19[0x13] = uVar23;
            puVar19[0x12] = uVar17;
            puVar19[0x15] = uVar24;
            puVar19[0x14] = uVar16;
            uVar23 = puVar21[0x1b];
            uVar17 = puVar21[0x1a];
            uVar24 = puVar21[0x1d];
            uVar16 = puVar21[0x1c];
            uVar25 = puVar21[0x1f];
            uVar26 = puVar21[0x1e];
            *(int *)(puVar19 + 0x20) = (int)puVar21[0x20];
            puVar19[0x1d] = uVar24;
            puVar19[0x1c] = uVar16;
            puVar19[0x1f] = uVar25;
            puVar19[0x1e] = uVar26;
            puVar19[0x1b] = uVar23;
            puVar19[0x1a] = uVar17;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1 >> 1;
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(int)puVar5[uVar14 * 0x21]);
            lVar7 = *param_3;
            func_0x00010a01e9ec(lVar7,(ulong)puStack_1f0 & 0xffffffff);
            puVar8 = puVar5 + uVar14 * 0x21;
            puVar19 = puVar21;
          } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <
                   *(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0));
          *(undefined2 *)(puVar21 + 2) = uStack_1e0;
          puVar21[1] = uStack_1e8;
          *puVar21 = (ulong)puStack_1f0;
          FUN_10ac00490(puVar9);
          puVar21[4] = uStack_1d0;
          puVar21[3] = uStack_1d8;
          puVar21[5] = uStack_1c8;
          uStack_1d8 = 0;
          uStack_1d0 = 0;
          uStack_1c8 = 0;
          puVar21[6] = uStack_1c0;
          puVar21[7] = uStack_1b8;
          *(undefined4 *)(puVar21 + 0x20) = uStack_f0;
          puVar21[0x1f] = uStack_f8;
          puVar21[0x1e] = uStack_100;
          puVar21[0x1d] = uStack_108;
          puVar21[0x1c] = uStack_110;
          puVar21[0x1b] = uStack_118;
          puVar21[0x1a] = uStack_120;
          puVar21[0x19] = uStack_128;
          puVar21[0x18] = uStack_130;
          puVar21[0x17] = uStack_138;
          puVar21[0x16] = uStack_140;
          puVar21[0x15] = uStack_148;
          puVar21[0x14] = uStack_150;
          puVar21[0x13] = uStack_158;
          puVar21[0x12] = uStack_160;
          puVar21[0x11] = uStack_168;
          puVar21[0x10] = uStack_170;
          puVar21[0xf] = uStack_178;
          puVar21[0xe] = uStack_180;
          puVar21[0xd] = uStack_188;
          puVar21[0xc] = uStack_190;
          puVar21[0xb] = uStack_198;
          puVar21[10] = uStack_1a0;
          puVar21[9] = uStack_1a8;
          puVar21[8] = uStack_1b0;
          puStack_1f8 = &uStack_1d8;
          FUN_10a1901f0(&puStack_1f8);
        }
      }
    }
    puStack_1f0 = &uStack_2e8;
    FUN_10a1901f0(&puStack_1f0);
    bVar2 = lVar20 < 3;
    lVar20 = lVar20 + -1;
    param_2 = puVar18;
    if (bVar2) {
      return;
    }
  } while( true );
code_r0x00010ac06be4:
  if (((ulong)puVar8 & 1) == 0) {
LAB_10ac06be8:
    FUN_10ac06544(puVar5,puVar22,param_3,param_4,param_5 & 1);
    param_5 = 0;
  }
  goto LAB_10ac065a4;
}



/* Entry: 10ac06530; end: 10ac06543;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10ac06530(undefined8 param_1,ulong *param_2,long *param_3,long param_4,uint param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong *puStack_2a0;
  ulong uStack_298;
  undefined2 uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined4 uStack_1a0;
  ulong *puStack_198;
  ulong *puStack_190;
  ulong uStack_188;
  undefined2 uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined4 uStack_90;
  
  puVar5 = (ulong *)&UNK_10f69b42f;
  FUN_109ffde64();
  do {
    puVar17 = param_2 + -0x21;
    puVar16 = puVar5;
LAB_10ac065a4:
    puVar5 = puVar16;
    uVar13 = (long)param_2 - (long)puVar5;
    uVar15 = ((long)uVar13 >> 3) * 0xf83e0f83e0f83e1;
    if (uVar15 - 2 == 0 || (long)uVar15 < 2) {
      if (uVar15 < 2) {
        return;
      }
      if (uVar15 == 2) {
        lVar6 = *param_3;
        func_0x00010a01e9ec(lVar6,(int)*puVar17);
        lVar7 = *param_3;
        func_0x00010a01e9ec(lVar7,(int)*puVar5);
        if (*(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0) <=
            *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0)) {
          return;
        }
        FUN_10ac07f70(puVar5,puVar17);
        return;
      }
    }
    else {
      if (uVar15 == 3) {
        FUN_10ac08118(puVar5,puVar5 + 0x21,puVar17,param_3);
        return;
      }
      if (uVar15 == 4) {
        FUN_10ac08274(puVar5,puVar5 + 0x21,puVar5 + 0x42,puVar17,param_3);
        return;
      }
      if (uVar15 == 5) {
        FUN_10ac08388(puVar5,puVar5 + 0x21,puVar5 + 0x42,puVar5 + 99,puVar17,param_3);
        return;
      }
    }
    if ((long)uVar13 < 0x18c0) {
      if ((param_5 & 1) == 0) {
        if (puVar5 == param_2) {
          return;
        }
        puVar16 = puVar5 + 0x21;
        if (puVar16 == param_2) {
          return;
        }
        lVar6 = 0x108;
        puVar17 = puVar5;
        lVar7 = 0;
        do {
          lVar11 = lVar6;
          lVar6 = *param_3;
          func_0x00010a01e9ec(lVar6,(int)*puVar16);
          lVar8 = *param_3;
          func_0x00010a01e9ec(lVar8,(int)*puVar17);
          if (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <
              *(float *)(*(long *)(lVar8 + 0x1a8) + 0x4f0)) {
            uStack_188 = puVar16[1];
            puStack_190 = (ulong *)*puVar16;
            uStack_180 = (undefined2)puVar16[2];
            uStack_170 = puVar17[0x25];
            uStack_178 = puVar17[0x24];
            uStack_168 = puVar17[0x26];
            puVar17[0x24] = 0;
            puVar17[0x25] = 0;
            puVar17[0x26] = 0;
            uStack_90 = (undefined4)puVar17[0x41];
            uStack_b8 = puVar17[0x3c];
            uStack_c0 = puVar17[0x3b];
            uStack_a8 = puVar17[0x3e];
            uStack_b0 = puVar17[0x3d];
            uStack_98 = puVar17[0x40];
            uStack_a0 = puVar17[0x3f];
            uStack_f8 = puVar17[0x34];
            uStack_100 = puVar17[0x33];
            uStack_e8 = puVar17[0x36];
            uStack_f0 = puVar17[0x35];
            uStack_d8 = puVar17[0x38];
            uStack_e0 = puVar17[0x37];
            uStack_c8 = puVar17[0x3a];
            uStack_d0 = puVar17[0x39];
            uStack_138 = puVar17[0x2c];
            uStack_140 = puVar17[0x2b];
            uStack_128 = puVar17[0x2e];
            uStack_130 = puVar17[0x2d];
            uStack_118 = puVar17[0x30];
            uStack_120 = puVar17[0x2f];
            uStack_108 = puVar17[0x32];
            uStack_110 = puVar17[0x31];
            uStack_158 = puVar17[0x28];
            uStack_160 = puVar17[0x27];
            uStack_148 = puVar17[0x2a];
            uStack_150 = puVar17[0x29];
            do {
              lVar6 = lVar7;
              puVar2 = (undefined8 *)((long)puVar5 + lVar6);
              puVar2[0x22] = puVar2[1];
              puVar2[0x21] = *puVar2;
              *(undefined2 *)(puVar2 + 0x23) = *(undefined2 *)(puVar2 + 2);
              FUN_10ac00490(puVar2 + 0x24);
              puVar2[0x25] = puVar2[4];
              puVar2[0x24] = puVar2[3];
              puVar2[0x27] = puVar2[6];
              puVar2[0x26] = puVar2[5];
              puVar2[4] = 0;
              puVar2[5] = 0;
              puVar2[3] = 0;
              puVar2[0x28] = puVar2[7];
              puVar2[0x3e] = puVar2[0x1d];
              puVar2[0x3d] = puVar2[0x1c];
              puVar2[0x40] = puVar2[0x1f];
              puVar2[0x3f] = puVar2[0x1e];
              *(undefined4 *)(puVar2 + 0x41) = *(undefined4 *)(puVar2 + 0x20);
              puVar2[0x36] = puVar2[0x15];
              puVar2[0x35] = puVar2[0x14];
              puVar2[0x38] = puVar2[0x17];
              puVar2[0x37] = puVar2[0x16];
              puVar2[0x3a] = puVar2[0x19];
              puVar2[0x39] = puVar2[0x18];
              puVar2[0x3c] = puVar2[0x1b];
              puVar2[0x3b] = puVar2[0x1a];
              puVar2[0x2e] = puVar2[0xd];
              puVar2[0x2d] = puVar2[0xc];
              puVar2[0x30] = puVar2[0xf];
              puVar2[0x2f] = puVar2[0xe];
              puVar2[0x32] = puVar2[0x11];
              puVar2[0x31] = puVar2[0x10];
              puVar2[0x34] = puVar2[0x13];
              puVar2[0x33] = puVar2[0x12];
              puVar2[0x2a] = puVar2[9];
              puVar2[0x29] = puVar2[8];
              puVar2[0x2c] = puVar2[0xb];
              puVar2[0x2b] = puVar2[10];
              if (lVar6 == -0x108) {
LAB_10ac07edc:
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac07ee0);
                (*pcVar4)();
              }
              lVar8 = *param_3;
              func_0x00010a01e9ec(lVar8,(ulong)puStack_190 & 0xffffffff);
              lVar12 = *param_3;
              func_0x00010a01e9ec(lVar12,*(undefined4 *)((long)puVar5 + lVar6 + -0x108));
              lVar7 = lVar6 + -0x108;
            } while (*(float *)(*(long *)(lVar8 + 0x1a8) + 0x4f0) <
                     *(float *)(*(long *)(lVar12 + 0x1a8) + 0x4f0));
            *(undefined2 *)((long)puVar5 + lVar6 + 0x10) = uStack_180;
            *(ulong *)((long)puVar5 + lVar6 + 8) = uStack_188;
            *(ulong **)((long)puVar5 + lVar6) = puStack_190;
            FUN_10ac00490((undefined *)((long)puVar5 + lVar6 + 0x18));
            *(ulong *)((long)puVar5 + lVar6 + 0x20) = uStack_170;
            *(ulong *)((long)puVar5 + lVar6 + 0x18) = uStack_178;
            *(ulong *)((long)puVar5 + lVar6 + 0x28) = uStack_168;
            uStack_178 = 0;
            uStack_170 = 0;
            uStack_168 = 0;
            *(ulong *)((long)puVar5 + lVar6 + 0x30) = uStack_160;
            *(ulong *)((long)puVar5 + lVar6 + 0x38) = uStack_158;
            *(ulong *)((long)puVar5 + lVar6 + 0x48) = uStack_148;
            *(ulong *)((long)puVar5 + lVar6 + 0x40) = uStack_150;
            *(ulong *)((long)puVar5 + lVar6 + 0x78) = uStack_118;
            *(ulong *)((long)puVar5 + lVar6 + 0x70) = uStack_120;
            *(ulong *)((long)puVar5 + lVar6 + 0x88) = uStack_108;
            *(ulong *)((long)puVar5 + lVar6 + 0x80) = uStack_110;
            *(ulong *)((long)puVar5 + lVar6 + 0x58) = uStack_138;
            *(ulong *)((long)puVar5 + lVar6 + 0x50) = uStack_140;
            *(ulong *)((long)puVar5 + lVar6 + 0x68) = uStack_128;
            *(ulong *)((long)puVar5 + lVar6 + 0x60) = uStack_130;
            *(ulong *)((long)puVar5 + lVar6 + 0xb8) = uStack_d8;
            *(ulong *)((long)puVar5 + lVar6 + 0xb0) = uStack_e0;
            *(ulong *)((long)puVar5 + lVar6 + 200) = uStack_c8;
            *(ulong *)((long)puVar5 + lVar6 + 0xc0) = uStack_d0;
            *(ulong *)((long)puVar5 + lVar6 + 0x98) = uStack_f8;
            *(ulong *)((long)puVar5 + lVar6 + 0x90) = uStack_100;
            *(ulong *)((long)puVar5 + lVar6 + 0xa8) = uStack_e8;
            *(ulong *)((long)puVar5 + lVar6 + 0xa0) = uStack_f0;
            *(undefined4 *)((long)puVar5 + lVar6 + 0x100) = uStack_90;
            *(ulong *)((long)puVar5 + lVar6 + 0xe8) = uStack_a8;
            *(ulong *)((long)puVar5 + lVar6 + 0xe0) = uStack_b0;
            *(ulong *)((long)puVar5 + lVar6 + 0xf8) = uStack_98;
            *(ulong *)((long)puVar5 + lVar6 + 0xf0) = uStack_a0;
            *(ulong *)((long)puVar5 + lVar6 + 0xd8) = uStack_b8;
            *(ulong *)((long)puVar5 + lVar6 + 0xd0) = uStack_c0;
            puStack_2a0 = &uStack_178;
            FUN_10a1901f0(&puStack_2a0);
          }
          puVar17 = (ulong *)((long)puVar5 + lVar11);
          puVar16 = (ulong *)((long)puVar5 + lVar11 + 0x108);
          lVar6 = lVar11 + 0x108;
          lVar7 = lVar11;
          if (puVar16 == param_2) {
            return;
          }
        } while( true );
      }
      if (puVar5 == param_2) {
        return;
      }
      if (puVar5 + 0x21 == param_2) {
        return;
      }
      lVar6 = 0;
      puVar16 = puVar5 + 0x21;
      puVar17 = puVar5;
      break;
    }
    if (param_4 == 0) {
      if (puVar5 == param_2) {
        return;
      }
      uVar14 = uVar15 - 2 >> 1;
      uVar20 = uVar14;
      goto LAB_10ac072bc;
    }
    puVar16 = puVar5 + (uVar15 >> 1) * 0x21;
    if (uVar13 < 0x8401) {
      FUN_10ac08118(puVar16,puVar5,puVar17,param_3);
    }
    else {
      FUN_10ac08118(puVar5,puVar16,puVar17,param_3);
      FUN_10ac08118(puVar5 + 0x21,puVar16 + -0x21,param_2 + -0x42,param_3);
      FUN_10ac08118(puVar5 + 0x42,puVar16 + 0x21,param_2 + -99,param_3);
      FUN_10ac08118(puVar16 + -0x21,puVar16,puVar16 + 0x21,param_3);
      uStack_188 = puVar5[1];
      puStack_190 = (ulong *)*puVar5;
      uStack_180 = (undefined2)puVar5[2];
      puVar9 = puVar5 + 3;
      uVar14 = puVar5[4];
      uVar15 = *puVar9;
      uVar13 = puVar5[5];
      puVar5[4] = 0;
      puVar5[5] = 0;
      *puVar9 = 0;
      uStack_158 = puVar5[7];
      uStack_160 = puVar5[6];
      uStack_148 = puVar5[9];
      uStack_150 = puVar5[8];
      uStack_d8 = puVar5[0x17];
      uStack_e0 = puVar5[0x16];
      uStack_c8 = puVar5[0x19];
      uStack_d0 = puVar5[0x18];
      uStack_f8 = puVar5[0x13];
      uStack_100 = puVar5[0x12];
      uStack_e8 = puVar5[0x15];
      uStack_f0 = puVar5[0x14];
      uStack_118 = puVar5[0xf];
      uStack_120 = puVar5[0xe];
      uStack_108 = puVar5[0x11];
      uStack_110 = puVar5[0x10];
      uStack_138 = puVar5[0xb];
      uStack_140 = puVar5[10];
      uStack_128 = puVar5[0xd];
      uStack_130 = puVar5[0xc];
      uStack_90 = (undefined4)puVar5[0x20];
      uStack_a8 = puVar5[0x1d];
      uStack_b0 = puVar5[0x1c];
      uStack_98 = puVar5[0x1f];
      uStack_a0 = puVar5[0x1e];
      uStack_b8 = puVar5[0x1b];
      uStack_c0 = puVar5[0x1a];
      uVar21 = puVar16[1];
      uVar20 = *puVar16;
      *(short *)(puVar5 + 2) = (short)puVar16[2];
      puVar5[1] = uVar21;
      *puVar5 = uVar20;
      FUN_10ac00490(puVar9);
      puVar10 = puVar16 + 3;
      uVar20 = *puVar10;
      puVar5[4] = puVar16[4];
      *puVar9 = uVar20;
      puVar5[5] = puVar16[5];
      *puVar10 = 0;
      puVar16[4] = 0;
      puVar16[5] = 0;
      puVar5[6] = puVar16[6];
      puVar5[7] = puVar16[7];
      uVar20 = puVar16[8];
      puVar5[9] = puVar16[9];
      puVar5[8] = uVar20;
      uVar21 = puVar16[0xb];
      uVar20 = puVar16[10];
      uVar22 = puVar16[0xd];
      uVar23 = puVar16[0xc];
      uVar24 = puVar16[0xe];
      uVar26 = puVar16[0x11];
      uVar25 = puVar16[0x10];
      puVar5[0xf] = puVar16[0xf];
      puVar5[0xe] = uVar24;
      puVar5[0x11] = uVar26;
      puVar5[0x10] = uVar25;
      puVar5[0xb] = uVar21;
      puVar5[10] = uVar20;
      puVar5[0xd] = uVar22;
      puVar5[0xc] = uVar23;
      uVar21 = puVar16[0x13];
      uVar20 = puVar16[0x12];
      uVar22 = puVar16[0x15];
      uVar23 = puVar16[0x14];
      uVar24 = puVar16[0x16];
      uVar26 = puVar16[0x19];
      uVar25 = puVar16[0x18];
      puVar5[0x17] = puVar16[0x17];
      puVar5[0x16] = uVar24;
      puVar5[0x19] = uVar26;
      puVar5[0x18] = uVar25;
      puVar5[0x13] = uVar21;
      puVar5[0x12] = uVar20;
      puVar5[0x15] = uVar22;
      puVar5[0x14] = uVar23;
      uVar21 = puVar16[0x1b];
      uVar20 = puVar16[0x1a];
      uVar22 = puVar16[0x1d];
      uVar23 = puVar16[0x1c];
      uVar25 = puVar16[0x1f];
      uVar24 = puVar16[0x1e];
      *(int *)(puVar5 + 0x20) = (int)puVar16[0x20];
      puVar5[0x1d] = uVar22;
      puVar5[0x1c] = uVar23;
      puVar5[0x1f] = uVar25;
      puVar5[0x1e] = uVar24;
      puVar5[0x1b] = uVar21;
      puVar5[0x1a] = uVar20;
      *(undefined2 *)(puVar16 + 2) = uStack_180;
      puVar16[1] = uStack_188;
      *puVar16 = (ulong)puStack_190;
      FUN_10ac00490(puVar10);
      puVar16[4] = uVar14;
      *puVar10 = uVar15;
      puVar16[5] = uVar13;
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      puVar16[6] = uStack_160;
      puVar16[7] = uStack_158;
      puVar16[9] = uStack_148;
      puVar16[8] = uStack_150;
      puVar16[0xf] = uStack_118;
      puVar16[0xe] = uStack_120;
      puVar16[0x11] = uStack_108;
      puVar16[0x10] = uStack_110;
      puVar16[0xb] = uStack_138;
      puVar16[10] = uStack_140;
      puVar16[0xd] = uStack_128;
      puVar16[0xc] = uStack_130;
      puVar16[0x17] = uStack_d8;
      puVar16[0x16] = uStack_e0;
      puVar16[0x19] = uStack_c8;
      puVar16[0x18] = uStack_d0;
      puVar16[0x13] = uStack_f8;
      puVar16[0x12] = uStack_100;
      puVar16[0x15] = uStack_e8;
      puVar16[0x14] = uStack_f0;
      *(undefined4 *)(puVar16 + 0x20) = uStack_90;
      puVar16[0x1d] = uStack_a8;
      puVar16[0x1c] = uStack_b0;
      puVar16[0x1f] = uStack_98;
      puVar16[0x1e] = uStack_a0;
      puVar16[0x1b] = uStack_b8;
      puVar16[0x1a] = uStack_c0;
      puStack_2a0 = &uStack_178;
      FUN_10a1901f0(&puStack_2a0);
    }
    param_4 = param_4 + -1;
    if ((param_5 & 1) == 0) {
      lVar6 = *param_3;
      func_0x00010a01e9ec(lVar6,(int)puVar5[-0x21]);
      lVar7 = *param_3;
      func_0x00010a01e9ec(lVar7,(int)*puVar5);
      if (*(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0) <=
          *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0)) {
        uStack_188 = puVar5[1];
        puStack_190 = (ulong *)*puVar5;
        uStack_180 = (undefined2)puVar5[2];
        puVar9 = puVar5 + 3;
        uStack_170 = puVar5[4];
        uStack_178 = *puVar9;
        uStack_168 = puVar5[5];
        puVar5[4] = 0;
        puVar5[5] = 0;
        *puVar9 = 0;
        uStack_158 = puVar5[7];
        uStack_160 = puVar5[6];
        uStack_148 = puVar5[9];
        uStack_150 = puVar5[8];
        uStack_a8 = puVar5[0x1d];
        uStack_b0 = puVar5[0x1c];
        uStack_98 = puVar5[0x1f];
        uStack_a0 = puVar5[0x1e];
        uStack_90 = (undefined4)puVar5[0x20];
        uStack_b8 = puVar5[0x1b];
        uStack_c0 = puVar5[0x1a];
        uStack_d8 = puVar5[0x17];
        uStack_e0 = puVar5[0x16];
        uStack_c8 = puVar5[0x19];
        uStack_d0 = puVar5[0x18];
        uStack_f8 = puVar5[0x13];
        uStack_100 = puVar5[0x12];
        uStack_e8 = puVar5[0x15];
        uStack_f0 = puVar5[0x14];
        uStack_118 = puVar5[0xf];
        uStack_120 = puVar5[0xe];
        uStack_108 = puVar5[0x11];
        uStack_110 = puVar5[0x10];
        uStack_138 = puVar5[0xb];
        uStack_140 = puVar5[10];
        uStack_128 = puVar5[0xd];
        uStack_130 = puVar5[0xc];
        lVar6 = *param_3;
        func_0x00010a01e9ec(lVar6,(ulong)puStack_190 & 0xffffffff);
        lVar7 = *param_3;
        func_0x00010a01e9ec(lVar7,(int)*puVar17);
        puVar16 = puVar5;
        if (*(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0) <=
            *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0)) {
          do {
            puVar16 = puVar16 + 0x21;
            if (param_2 <= puVar16) break;
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(ulong)puStack_190 & 0xffffffff);
            lVar7 = *param_3;
            func_0x00010a01e9ec(lVar7,(int)*puVar16);
          } while (*(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0) <=
                   *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0));
        }
        else {
          do {
            puVar16 = puVar16 + 0x21;
            if (puVar16 == param_2) goto LAB_10ac07edc;
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(ulong)puStack_190 & 0xffffffff);
            lVar7 = *param_3;
            func_0x00010a01e9ec(lVar7,(int)*puVar16);
          } while (*(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0) <=
                   *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0));
        }
        puVar10 = param_2;
        if (puVar16 < param_2) {
          do {
            if (puVar10 == puVar5) goto LAB_10ac07edc;
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(ulong)puStack_190 & 0xffffffff);
            puVar10 = puVar10 + -0x21;
            lVar7 = *param_3;
            func_0x00010a01e9ec(lVar7,(int)*puVar10);
          } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <
                   *(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0));
        }
        while (puVar16 < puVar10) {
          FUN_10ac07f70(puVar16,puVar10);
          do {
            puVar16 = puVar16 + 0x21;
            if (puVar16 == param_2) goto LAB_10ac07edc;
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(ulong)puStack_190 & 0xffffffff);
            lVar7 = *param_3;
            func_0x00010a01e9ec(lVar7,(int)*puVar16);
          } while (*(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0) <=
                   *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0));
          do {
            if (puVar10 == puVar5) goto LAB_10ac07edc;
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(ulong)puStack_190 & 0xffffffff);
            puVar10 = puVar10 + -0x21;
            lVar7 = *param_3;
            func_0x00010a01e9ec(lVar7,(int)*puVar10);
          } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <
                   *(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0));
        }
        puVar10 = puVar16 + -0x21;
        if (puVar10 != puVar5) {
          uVar15 = puVar16[-0x20];
          uVar13 = *puVar10;
          *(short *)(puVar5 + 2) = (short)puVar16[-0x1f];
          puVar5[1] = uVar15;
          *puVar5 = uVar13;
          FUN_10ac00490(puVar9);
          uVar13 = puVar16[-0x1e];
          puVar5[4] = puVar16[-0x1d];
          puVar5[3] = uVar13;
          puVar5[5] = puVar16[-0x1c];
          puVar16[-0x1e] = 0;
          puVar16[-0x1d] = 0;
          puVar16[-0x1c] = 0;
          puVar5[6] = puVar16[-0x1b];
          puVar5[7] = puVar16[-0x1a];
          uVar13 = puVar16[-0x19];
          puVar5[9] = puVar16[-0x18];
          puVar5[8] = uVar13;
          uVar15 = puVar16[-0x16];
          uVar13 = puVar16[-0x17];
          uVar14 = puVar16[-0x14];
          uVar20 = puVar16[-0x15];
          uVar21 = puVar16[-0x13];
          uVar22 = puVar16[-0x10];
          uVar23 = puVar16[-0x11];
          puVar5[0xf] = puVar16[-0x12];
          puVar5[0xe] = uVar21;
          puVar5[0x11] = uVar22;
          puVar5[0x10] = uVar23;
          puVar5[0xb] = uVar15;
          puVar5[10] = uVar13;
          puVar5[0xd] = uVar14;
          puVar5[0xc] = uVar20;
          uVar15 = puVar16[-0xe];
          uVar13 = puVar16[-0xf];
          uVar14 = puVar16[-0xc];
          uVar20 = puVar16[-0xd];
          uVar21 = puVar16[-0xb];
          uVar22 = puVar16[-8];
          uVar23 = puVar16[-9];
          puVar5[0x17] = puVar16[-10];
          puVar5[0x16] = uVar21;
          puVar5[0x19] = uVar22;
          puVar5[0x18] = uVar23;
          puVar5[0x13] = uVar15;
          puVar5[0x12] = uVar13;
          puVar5[0x15] = uVar14;
          puVar5[0x14] = uVar20;
          uVar15 = puVar16[-6];
          uVar13 = puVar16[-7];
          uVar14 = puVar16[-4];
          uVar20 = puVar16[-5];
          uVar23 = puVar16[-2];
          uVar21 = puVar16[-3];
          *(int *)(puVar5 + 0x20) = (int)puVar16[-1];
          puVar5[0x1d] = uVar14;
          puVar5[0x1c] = uVar20;
          puVar5[0x1f] = uVar23;
          puVar5[0x1e] = uVar21;
          puVar5[0x1b] = uVar15;
          puVar5[0x1a] = uVar13;
        }
        *(undefined2 *)(puVar16 + -0x1f) = uStack_180;
        puVar16[-0x20] = uStack_188;
        *puVar10 = (ulong)puStack_190;
        FUN_10ac00490(puVar16 + -0x1e);
        puVar16[-0x1d] = uStack_170;
        puVar16[-0x1e] = uStack_178;
        puVar16[-0x1c] = uStack_168;
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_168 = 0;
        puVar16[-0x1b] = uStack_160;
        puVar16[-0x1a] = uStack_158;
        puVar16[-0x18] = uStack_148;
        puVar16[-0x19] = uStack_150;
        puVar16[-0x10] = uStack_108;
        puVar16[-0x11] = uStack_110;
        puVar16[-0x12] = uStack_118;
        puVar16[-0x13] = uStack_120;
        puVar16[-0x14] = uStack_128;
        puVar16[-0x15] = uStack_130;
        puVar16[-0x16] = uStack_138;
        puVar16[-0x17] = uStack_140;
        puVar16[-8] = uStack_c8;
        puVar16[-9] = uStack_d0;
        puVar16[-10] = uStack_d8;
        puVar16[-0xb] = uStack_e0;
        puVar16[-0xc] = uStack_e8;
        puVar16[-0xd] = uStack_f0;
        puVar16[-0xe] = uStack_f8;
        puVar16[-0xf] = uStack_100;
        *(undefined4 *)(puVar16 + -1) = uStack_90;
        puVar16[-2] = uStack_98;
        puVar16[-3] = uStack_a0;
        puVar16[-4] = uStack_a8;
        puVar16[-5] = uStack_b0;
        puVar16[-6] = uStack_b8;
        puVar16[-7] = uStack_c0;
        puStack_2a0 = &uStack_178;
        FUN_10a1901f0(&puStack_2a0);
        param_5 = 0;
        goto LAB_10ac065a4;
      }
    }
    lVar6 = 0;
    uStack_188 = puVar5[1];
    puStack_190 = (ulong *)*puVar5;
    uStack_180 = (undefined2)puVar5[2];
    puVar9 = puVar5 + 3;
    uStack_170 = puVar5[4];
    uStack_178 = *puVar9;
    uStack_168 = puVar5[5];
    puVar5[4] = 0;
    puVar5[5] = 0;
    *puVar9 = 0;
    uStack_158 = puVar5[7];
    uStack_160 = puVar5[6];
    uStack_148 = puVar5[9];
    uStack_150 = puVar5[8];
    uStack_a8 = puVar5[0x1d];
    uStack_b0 = puVar5[0x1c];
    uStack_98 = puVar5[0x1f];
    uStack_a0 = puVar5[0x1e];
    uStack_90 = (undefined4)puVar5[0x20];
    uStack_b8 = puVar5[0x1b];
    uStack_c0 = puVar5[0x1a];
    uStack_d8 = puVar5[0x17];
    uStack_e0 = puVar5[0x16];
    uStack_c8 = puVar5[0x19];
    uStack_d0 = puVar5[0x18];
    uStack_f8 = puVar5[0x13];
    uStack_100 = puVar5[0x12];
    uStack_e8 = puVar5[0x15];
    uStack_f0 = puVar5[0x14];
    uStack_118 = puVar5[0xf];
    uStack_120 = puVar5[0xe];
    uStack_108 = puVar5[0x11];
    uStack_110 = puVar5[0x10];
    uStack_138 = puVar5[0xb];
    uStack_140 = puVar5[10];
    uStack_128 = puVar5[0xd];
    uStack_130 = puVar5[0xc];
    do {
      puVar16 = (ulong *)((long)puVar5 + lVar6 + 0x108);
      if (puVar16 == param_2) goto LAB_10ac07edc;
      lVar7 = *param_3;
      func_0x00010a01e9ec(lVar7,(int)*puVar16);
      lVar8 = *param_3;
      func_0x00010a01e9ec(lVar8,(ulong)puStack_190 & 0xffffffff);
      lVar6 = lVar6 + 0x108;
    } while (*(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0) <
             *(float *)(*(long *)(lVar8 + 0x1a8) + 0x4f0));
    puVar10 = (ulong *)((long)puVar5 + lVar6);
    puVar18 = param_2;
    if (lVar6 == 0x108) {
      do {
        if (puVar18 <= puVar10) break;
        puVar18 = puVar18 + -0x21;
        lVar6 = *param_3;
        func_0x00010a01e9ec(lVar6,(int)*puVar18);
        lVar7 = *param_3;
        func_0x00010a01e9ec(lVar7,(ulong)puStack_190 & 0xffffffff);
      } while (*(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0) <=
               *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0));
    }
    else {
      do {
        if (puVar18 == puVar5) goto LAB_10ac07edc;
        puVar18 = puVar18 + -0x21;
        lVar6 = *param_3;
        func_0x00010a01e9ec(lVar6,(int)*puVar18);
        lVar7 = *param_3;
        func_0x00010a01e9ec(lVar7,(ulong)puStack_190 & 0xffffffff);
      } while (*(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0) <=
               *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0));
    }
    puVar16 = puVar10;
    puVar19 = puVar18;
    if (puVar10 < puVar18) {
      do {
        FUN_10ac07f70(puVar16,puVar19);
        do {
          puVar16 = puVar16 + 0x21;
          if (puVar16 == param_2) goto LAB_10ac07edc;
          lVar6 = *param_3;
          func_0x00010a01e9ec(lVar6,(int)*puVar16);
          lVar7 = *param_3;
          func_0x00010a01e9ec(lVar7,(ulong)puStack_190 & 0xffffffff);
        } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <
                 *(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0));
        do {
          if (puVar19 == puVar5) goto LAB_10ac07edc;
          puVar19 = puVar19 + -0x21;
          lVar6 = *param_3;
          func_0x00010a01e9ec(lVar6,(int)*puVar19);
          lVar7 = *param_3;
          func_0x00010a01e9ec(lVar7,(ulong)puStack_190 & 0xffffffff);
        } while (*(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0) <=
                 *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0));
      } while (puVar16 < puVar19);
    }
    puVar19 = puVar16 + -0x21;
    if (puVar19 != puVar5) {
      uVar15 = puVar16[-0x20];
      uVar13 = *puVar19;
      *(short *)(puVar5 + 2) = (short)puVar16[-0x1f];
      puVar5[1] = uVar15;
      *puVar5 = uVar13;
      FUN_10ac00490(puVar9);
      uVar13 = puVar16[-0x1e];
      puVar5[4] = puVar16[-0x1d];
      puVar5[3] = uVar13;
      puVar5[5] = puVar16[-0x1c];
      puVar16[-0x1e] = 0;
      puVar16[-0x1d] = 0;
      puVar16[-0x1c] = 0;
      puVar5[6] = puVar16[-0x1b];
      puVar5[7] = puVar16[-0x1a];
      uVar13 = puVar16[-0x19];
      puVar5[9] = puVar16[-0x18];
      puVar5[8] = uVar13;
      uVar15 = puVar16[-0x16];
      uVar13 = puVar16[-0x17];
      uVar14 = puVar16[-0x14];
      uVar20 = puVar16[-0x15];
      uVar21 = puVar16[-0x13];
      uVar22 = puVar16[-0x10];
      uVar23 = puVar16[-0x11];
      puVar5[0xf] = puVar16[-0x12];
      puVar5[0xe] = uVar21;
      puVar5[0x11] = uVar22;
      puVar5[0x10] = uVar23;
      puVar5[0xb] = uVar15;
      puVar5[10] = uVar13;
      puVar5[0xd] = uVar14;
      puVar5[0xc] = uVar20;
      uVar15 = puVar16[-0xe];
      uVar13 = puVar16[-0xf];
      uVar14 = puVar16[-0xc];
      uVar20 = puVar16[-0xd];
      uVar21 = puVar16[-0xb];
      uVar22 = puVar16[-8];
      uVar23 = puVar16[-9];
      puVar5[0x17] = puVar16[-10];
      puVar5[0x16] = uVar21;
      puVar5[0x19] = uVar22;
      puVar5[0x18] = uVar23;
      puVar5[0x13] = uVar15;
      puVar5[0x12] = uVar13;
      puVar5[0x15] = uVar14;
      puVar5[0x14] = uVar20;
      uVar15 = puVar16[-6];
      uVar13 = puVar16[-7];
      uVar14 = puVar16[-4];
      uVar20 = puVar16[-5];
      uVar23 = puVar16[-2];
      uVar21 = puVar16[-3];
      *(int *)(puVar5 + 0x20) = (int)puVar16[-1];
      puVar5[0x1d] = uVar14;
      puVar5[0x1c] = uVar20;
      puVar5[0x1f] = uVar23;
      puVar5[0x1e] = uVar21;
      puVar5[0x1b] = uVar15;
      puVar5[0x1a] = uVar13;
    }
    *(undefined2 *)(puVar16 + -0x1f) = uStack_180;
    puVar16[-0x20] = uStack_188;
    *puVar19 = (ulong)puStack_190;
    FUN_10ac00490(puVar16 + -0x1e);
    puVar16[-0x1d] = uStack_170;
    puVar16[-0x1e] = uStack_178;
    puVar16[-0x1c] = uStack_168;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    puVar16[-0x1b] = uStack_160;
    puVar16[-0x1a] = uStack_158;
    puVar16[-0x18] = uStack_148;
    puVar16[-0x19] = uStack_150;
    puVar16[-0x10] = uStack_108;
    puVar16[-0x11] = uStack_110;
    puVar16[-0x12] = uStack_118;
    puVar16[-0x13] = uStack_120;
    puVar16[-0x14] = uStack_128;
    puVar16[-0x15] = uStack_130;
    puVar16[-0x16] = uStack_138;
    puVar16[-0x17] = uStack_140;
    puVar16[-8] = uStack_c8;
    puVar16[-9] = uStack_d0;
    puVar16[-10] = uStack_d8;
    puVar16[-0xb] = uStack_e0;
    puVar16[-0xc] = uStack_e8;
    puVar16[-0xd] = uStack_f0;
    puVar16[-0xe] = uStack_f8;
    puVar16[-0xf] = uStack_100;
    *(undefined4 *)(puVar16 + -1) = uStack_90;
    puVar16[-2] = uStack_98;
    puVar16[-3] = uStack_a0;
    puVar16[-4] = uStack_a8;
    puVar16[-5] = uStack_b0;
    puVar16[-6] = uStack_b8;
    puVar16[-7] = uStack_c0;
    puStack_2a0 = &uStack_178;
    FUN_10a1901f0(&puStack_2a0);
    if (puVar10 < puVar18) goto LAB_10ac06be8;
    puVar9 = puVar5;
    FUN_10ac084ec(puVar5,puVar19,param_3);
    puVar10 = puVar16;
    FUN_10ac084ec(puVar16,param_2,param_3);
    if ((int)puVar10 == 0) goto code_r0x00010ac06be4;
    param_2 = puVar19;
    if (((ulong)puVar9 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10ac0706c:
  puVar9 = puVar16;
  lVar7 = *param_3;
  func_0x00010a01e9ec(lVar7,(int)puVar17[0x21]);
  lVar8 = *param_3;
  func_0x00010a01e9ec(lVar8,(int)*puVar17);
  if (*(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0) < *(float *)(*(long *)(lVar8 + 0x1a8) + 0x4f0)) {
    uStack_188 = puVar9[1];
    puStack_190 = (ulong *)*puVar9;
    uStack_180 = (undefined2)puVar9[2];
    uStack_170 = puVar17[0x25];
    uStack_178 = puVar17[0x24];
    uStack_168 = puVar17[0x26];
    puVar17[0x24] = 0;
    puVar17[0x25] = 0;
    puVar17[0x26] = 0;
    uStack_90 = (undefined4)puVar17[0x41];
    uStack_b8 = puVar17[0x3c];
    uStack_c0 = puVar17[0x3b];
    uStack_a8 = puVar17[0x3e];
    uStack_b0 = puVar17[0x3d];
    uStack_98 = puVar17[0x40];
    uStack_a0 = puVar17[0x3f];
    uStack_f8 = puVar17[0x34];
    uStack_100 = puVar17[0x33];
    uStack_e8 = puVar17[0x36];
    uStack_f0 = puVar17[0x35];
    uStack_d8 = puVar17[0x38];
    uStack_e0 = puVar17[0x37];
    uStack_c8 = puVar17[0x3a];
    uStack_d0 = puVar17[0x39];
    uStack_138 = puVar17[0x2c];
    uStack_140 = puVar17[0x2b];
    uStack_128 = puVar17[0x2e];
    uStack_130 = puVar17[0x2d];
    uStack_118 = puVar17[0x30];
    uStack_120 = puVar17[0x2f];
    uStack_108 = puVar17[0x32];
    uStack_110 = puVar17[0x31];
    uStack_158 = puVar17[0x28];
    uStack_160 = puVar17[0x27];
    uStack_148 = puVar17[0x2a];
    uStack_150 = puVar17[0x29];
    lVar7 = lVar6;
    do {
      lVar8 = lVar7;
      puVar2 = (undefined8 *)((long)puVar5 + lVar8);
      puVar2[0x22] = puVar2[1];
      puVar2[0x21] = *puVar2;
      *(undefined2 *)(puVar2 + 0x23) = *(undefined2 *)(puVar2 + 2);
      FUN_10ac00490(puVar2 + 0x24);
      puVar2[0x25] = puVar2[4];
      puVar2[0x24] = puVar2[3];
      puVar2[0x27] = puVar2[6];
      puVar2[0x26] = puVar2[5];
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[3] = 0;
      puVar2[0x28] = puVar2[7];
      puVar2[0x3e] = puVar2[0x1d];
      puVar2[0x3d] = puVar2[0x1c];
      puVar2[0x40] = puVar2[0x1f];
      puVar2[0x3f] = puVar2[0x1e];
      *(undefined4 *)(puVar2 + 0x41) = *(undefined4 *)(puVar2 + 0x20);
      puVar2[0x36] = puVar2[0x15];
      puVar2[0x35] = puVar2[0x14];
      puVar2[0x38] = puVar2[0x17];
      puVar2[0x37] = puVar2[0x16];
      puVar2[0x3a] = puVar2[0x19];
      puVar2[0x39] = puVar2[0x18];
      puVar2[0x3c] = puVar2[0x1b];
      puVar2[0x3b] = puVar2[0x1a];
      puVar2[0x2e] = puVar2[0xd];
      puVar2[0x2d] = puVar2[0xc];
      puVar2[0x30] = puVar2[0xf];
      puVar2[0x2f] = puVar2[0xe];
      puVar2[0x32] = puVar2[0x11];
      puVar2[0x31] = puVar2[0x10];
      puVar2[0x34] = puVar2[0x13];
      puVar2[0x33] = puVar2[0x12];
      puVar2[0x2a] = puVar2[9];
      puVar2[0x29] = puVar2[8];
      puVar2[0x2c] = puVar2[0xb];
      puVar2[0x2b] = puVar2[10];
      puVar16 = puVar5;
      if (lVar8 == 0) goto LAB_10ac071e8;
      lVar11 = *param_3;
      func_0x00010a01e9ec(lVar11,(ulong)puStack_190 & 0xffffffff);
      lVar12 = *param_3;
      func_0x00010a01e9ec(lVar12,*(undefined4 *)(puVar2 + -0x21));
      lVar7 = lVar8 + -0x108;
    } while (*(float *)(*(long *)(lVar11 + 0x1a8) + 0x4f0) <
             *(float *)(*(long *)(lVar12 + 0x1a8) + 0x4f0));
    puVar16 = (ulong *)((long)puVar5 + lVar8);
LAB_10ac071e8:
    *(undefined2 *)(puVar16 + 2) = uStack_180;
    puVar16[1] = uStack_188;
    *puVar16 = (ulong)puStack_190;
    FUN_10ac00490(puVar2 + 3);
    puVar2[3] = uStack_178;
    puVar16[5] = uStack_168;
    puVar16[4] = uStack_170;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_178 = 0;
    puVar16[6] = uStack_160;
    puVar16[7] = uStack_158;
    puVar2[0x17] = uStack_d8;
    puVar2[0x16] = uStack_e0;
    puVar2[0x19] = uStack_c8;
    puVar2[0x18] = uStack_d0;
    puVar2[0x13] = uStack_f8;
    puVar2[0x12] = uStack_100;
    puVar2[0x15] = uStack_e8;
    puVar2[0x14] = uStack_f0;
    puVar2[0xf] = uStack_118;
    puVar2[0xe] = uStack_120;
    puVar2[0x11] = uStack_108;
    puVar2[0x10] = uStack_110;
    puVar2[0xb] = uStack_138;
    puVar2[10] = uStack_140;
    puVar2[0xd] = uStack_128;
    puVar2[0xc] = uStack_130;
    puVar2[9] = uStack_148;
    puVar2[8] = uStack_150;
    *(undefined4 *)(puVar2 + 0x20) = uStack_90;
    puVar2[0x1d] = uStack_a8;
    puVar2[0x1c] = uStack_b0;
    puVar2[0x1f] = uStack_98;
    puVar2[0x1e] = uStack_a0;
    puVar2[0x1b] = uStack_b8;
    puVar2[0x1a] = uStack_c0;
    puStack_2a0 = &uStack_178;
    FUN_10a1901f0(&puStack_2a0);
  }
  lVar6 = lVar6 + 0x108;
  puVar16 = puVar9 + 0x21;
  puVar17 = puVar9;
  if (puVar9 + 0x21 == param_2) {
    return;
  }
  goto LAB_10ac0706c;
LAB_10ac072bc:
  do {
    if ((long)uVar20 <= (long)uVar14) {
      uVar23 = uVar20 << 1 | 1;
      puVar16 = puVar5 + uVar23 * 0x21;
      uVar21 = uVar20 * 2 + 2;
      if ((long)uVar21 < (long)uVar15) {
        lVar6 = *param_3;
        func_0x00010a01e9ec(lVar6,(int)*puVar16);
        lVar7 = *param_3;
        func_0x00010a01e9ec(lVar7,(int)puVar16[0x21]);
        if (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <
            *(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0)) {
          puVar16 = puVar16 + 0x21;
          uVar23 = uVar21;
        }
      }
      puVar17 = puVar5 + uVar20 * 0x21;
      lVar6 = *param_3;
      func_0x00010a01e9ec(lVar6,(int)*puVar16);
      lVar7 = *param_3;
      func_0x00010a01e9ec(lVar7,(int)*puVar17);
      if (*(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0) <=
          *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0)) {
        uStack_188 = puVar17[1];
        puStack_190 = (ulong *)*puVar17;
        uStack_180 = (undefined2)puVar17[2];
        uStack_170 = puVar17[4];
        uStack_178 = puVar17[3];
        uStack_168 = puVar17[5];
        puVar17[4] = 0;
        puVar17[5] = 0;
        puVar17[3] = 0;
        uStack_118 = puVar17[0xf];
        uStack_120 = puVar17[0xe];
        uStack_108 = puVar17[0x11];
        uStack_110 = puVar17[0x10];
        uStack_138 = puVar17[0xb];
        uStack_140 = puVar17[10];
        uStack_128 = puVar17[0xd];
        uStack_130 = puVar17[0xc];
        uStack_d8 = puVar17[0x17];
        uStack_e0 = puVar17[0x16];
        uStack_c8 = puVar17[0x19];
        uStack_d0 = puVar17[0x18];
        uStack_f8 = puVar17[0x13];
        uStack_100 = puVar17[0x12];
        uStack_e8 = puVar17[0x15];
        uStack_f0 = puVar17[0x14];
        uStack_a8 = puVar17[0x1d];
        uStack_b0 = puVar17[0x1c];
        uStack_98 = puVar17[0x1f];
        uStack_a0 = puVar17[0x1e];
        uStack_90 = (undefined4)puVar17[0x20];
        uStack_b8 = puVar17[0x1b];
        uStack_c0 = puVar17[0x1a];
        uStack_158 = puVar17[7];
        uStack_160 = puVar17[6];
        uStack_148 = puVar17[9];
        uStack_150 = puVar17[8];
        do {
          puVar10 = puVar16;
          uVar22 = puVar10[1];
          uVar21 = *puVar10;
          *(short *)(puVar17 + 2) = (short)puVar10[2];
          puVar17[1] = uVar22;
          *puVar17 = uVar21;
          FUN_10ac00490(puVar17 + 3);
          puVar9 = puVar10 + 3;
          uVar21 = *puVar9;
          puVar17[4] = puVar10[4];
          puVar17[3] = uVar21;
          puVar17[5] = puVar10[5];
          *puVar9 = 0;
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar17[6] = puVar10[6];
          puVar17[7] = puVar10[7];
          uVar21 = puVar10[8];
          puVar17[9] = puVar10[9];
          puVar17[8] = uVar21;
          uVar22 = puVar10[0xb];
          uVar21 = puVar10[10];
          uVar25 = puVar10[0xd];
          uVar24 = puVar10[0xc];
          uVar26 = puVar10[0xe];
          uVar28 = puVar10[0x11];
          uVar27 = puVar10[0x10];
          puVar17[0xf] = puVar10[0xf];
          puVar17[0xe] = uVar26;
          puVar17[0x11] = uVar28;
          puVar17[0x10] = uVar27;
          puVar17[0xb] = uVar22;
          puVar17[10] = uVar21;
          puVar17[0xd] = uVar25;
          puVar17[0xc] = uVar24;
          uVar22 = puVar10[0x13];
          uVar21 = puVar10[0x12];
          uVar25 = puVar10[0x15];
          uVar24 = puVar10[0x14];
          uVar26 = puVar10[0x16];
          uVar28 = puVar10[0x19];
          uVar27 = puVar10[0x18];
          puVar17[0x17] = puVar10[0x17];
          puVar17[0x16] = uVar26;
          puVar17[0x19] = uVar28;
          puVar17[0x18] = uVar27;
          puVar17[0x13] = uVar22;
          puVar17[0x12] = uVar21;
          puVar17[0x15] = uVar25;
          puVar17[0x14] = uVar24;
          uVar22 = puVar10[0x1b];
          uVar21 = puVar10[0x1a];
          uVar25 = puVar10[0x1d];
          uVar24 = puVar10[0x1c];
          uVar27 = puVar10[0x1f];
          uVar26 = puVar10[0x1e];
          *(int *)(puVar17 + 0x20) = (int)puVar10[0x20];
          puVar17[0x1d] = uVar25;
          puVar17[0x1c] = uVar24;
          puVar17[0x1f] = uVar27;
          puVar17[0x1e] = uVar26;
          puVar17[0x1b] = uVar22;
          puVar17[0x1a] = uVar21;
          if ((long)uVar14 < (long)uVar23) break;
          uVar22 = uVar23 << 1 | 1;
          puVar16 = puVar5 + uVar22 * 0x21;
          uVar21 = uVar23 * 2 + 2;
          uVar23 = uVar22;
          if ((long)uVar21 < (long)uVar15) {
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(int)*puVar16);
            lVar7 = *param_3;
            func_0x00010a01e9ec(lVar7,(int)puVar16[0x21]);
            if (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <
                *(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0)) {
              uVar23 = uVar21;
              puVar16 = puVar16 + 0x21;
            }
          }
          lVar6 = *param_3;
          func_0x00010a01e9ec(lVar6,(int)*puVar16);
          lVar7 = *param_3;
          func_0x00010a01e9ec(lVar7,(ulong)puStack_190 & 0xffffffff);
          puVar17 = puVar10;
        } while (*(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0) <=
                 *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0));
        *(undefined2 *)(puVar10 + 2) = uStack_180;
        puVar10[1] = uStack_188;
        *puVar10 = (ulong)puStack_190;
        FUN_10ac00490(puVar9);
        puVar10[4] = uStack_170;
        puVar10[3] = uStack_178;
        puVar10[5] = uStack_168;
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_168 = 0;
        puVar10[6] = uStack_160;
        puVar10[7] = uStack_158;
        *(undefined4 *)(puVar10 + 0x20) = uStack_90;
        puVar10[0x1f] = uStack_98;
        puVar10[0x1e] = uStack_a0;
        puVar10[0x1d] = uStack_a8;
        puVar10[0x1c] = uStack_b0;
        puVar10[0x1b] = uStack_b8;
        puVar10[0x1a] = uStack_c0;
        puVar10[0x19] = uStack_c8;
        puVar10[0x18] = uStack_d0;
        puVar10[0x17] = uStack_d8;
        puVar10[0x16] = uStack_e0;
        puVar10[0x15] = uStack_e8;
        puVar10[0x14] = uStack_f0;
        puVar10[0x13] = uStack_f8;
        puVar10[0x12] = uStack_100;
        puVar10[0x11] = uStack_108;
        puVar10[0x10] = uStack_110;
        puVar10[0xf] = uStack_118;
        puVar10[0xe] = uStack_120;
        puVar10[0xd] = uStack_128;
        puVar10[0xc] = uStack_130;
        puVar10[0xb] = uStack_138;
        puVar10[10] = uStack_140;
        puVar10[9] = uStack_148;
        puVar10[8] = uStack_150;
        puStack_2a0 = &uStack_178;
        FUN_10a1901f0(&puStack_2a0);
      }
    }
    bVar3 = uVar20 != 0;
    uVar20 = uVar20 - 1;
  } while (bVar3);
  lVar6 = (uVar13 >> 3) * 0xf83e0f83e0f83e1;
  do {
    uStack_298 = puVar5[1];
    puStack_2a0 = (ulong *)*puVar5;
    uStack_290 = (undefined2)puVar5[2];
    uStack_280 = puVar5[4];
    uStack_288 = puVar5[3];
    uStack_278 = puVar5[5];
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    uStack_268 = puVar5[7];
    uStack_270 = puVar5[6];
    uStack_258 = puVar5[9];
    uStack_260 = puVar5[8];
    uStack_1b8 = puVar5[0x1d];
    uStack_1c0 = puVar5[0x1c];
    uStack_1a8 = puVar5[0x1f];
    uStack_1b0 = puVar5[0x1e];
    uStack_1a0 = (undefined4)puVar5[0x20];
    uStack_1c8 = puVar5[0x1b];
    uStack_1d0 = puVar5[0x1a];
    uStack_1e8 = puVar5[0x17];
    uStack_1f0 = puVar5[0x16];
    uStack_1d8 = puVar5[0x19];
    uStack_1e0 = puVar5[0x18];
    uStack_208 = puVar5[0x13];
    uStack_210 = puVar5[0x12];
    uStack_1f8 = puVar5[0x15];
    uStack_200 = puVar5[0x14];
    uStack_228 = puVar5[0xf];
    uStack_230 = puVar5[0xe];
    uStack_218 = puVar5[0x11];
    uStack_220 = puVar5[0x10];
    uStack_248 = puVar5[0xb];
    uStack_250 = puVar5[10];
    uStack_238 = puVar5[0xd];
    uStack_240 = puVar5[0xc];
    puVar16 = puVar5;
    uVar13 = 0;
    do {
      uVar20 = uVar13 << 1 | 1;
      uVar15 = uVar13 * 2 + 2;
      puVar17 = puVar16 + uVar13 * 0x21 + 0x21;
      if ((long)uVar15 < lVar6) {
        lVar7 = *param_3;
        func_0x00010a01e9ec(lVar7,(int)puVar16[uVar13 * 0x21 + 0x21]);
        lVar8 = *param_3;
        func_0x00010a01e9ec(lVar8,(int)puVar16[uVar13 * 0x21 + 0x42]);
        if (*(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0) <
            *(float *)(*(long *)(lVar8 + 0x1a8) + 0x4f0)) {
          puVar17 = puVar16 + uVar13 * 0x21 + 0x42;
          uVar20 = uVar15;
        }
      }
      uVar15 = puVar17[1];
      uVar13 = *puVar17;
      *(short *)(puVar16 + 2) = (short)puVar17[2];
      puVar16[1] = uVar15;
      *puVar16 = uVar13;
      FUN_10ac00490(puVar16 + 3);
      puVar9 = puVar17 + 3;
      uVar13 = *puVar9;
      puVar16[4] = puVar17[4];
      puVar16[3] = uVar13;
      puVar16[5] = puVar17[5];
      *puVar9 = 0;
      puVar17[4] = 0;
      puVar17[5] = 0;
      puVar16[6] = puVar17[6];
      puVar16[7] = puVar17[7];
      uVar13 = puVar17[8];
      puVar16[9] = puVar17[9];
      puVar16[8] = uVar13;
      uVar15 = puVar17[0xb];
      uVar13 = puVar17[10];
      uVar21 = puVar17[0xd];
      uVar14 = puVar17[0xc];
      uVar23 = puVar17[0xe];
      uVar24 = puVar17[0x11];
      uVar22 = puVar17[0x10];
      puVar16[0xf] = puVar17[0xf];
      puVar16[0xe] = uVar23;
      puVar16[0x11] = uVar24;
      puVar16[0x10] = uVar22;
      puVar16[0xb] = uVar15;
      puVar16[10] = uVar13;
      puVar16[0xd] = uVar21;
      puVar16[0xc] = uVar14;
      uVar15 = puVar17[0x13];
      uVar13 = puVar17[0x12];
      uVar21 = puVar17[0x15];
      uVar14 = puVar17[0x14];
      uVar23 = puVar17[0x16];
      uVar24 = puVar17[0x19];
      uVar22 = puVar17[0x18];
      puVar16[0x17] = puVar17[0x17];
      puVar16[0x16] = uVar23;
      puVar16[0x19] = uVar24;
      puVar16[0x18] = uVar22;
      puVar16[0x13] = uVar15;
      puVar16[0x12] = uVar13;
      puVar16[0x15] = uVar21;
      puVar16[0x14] = uVar14;
      uVar15 = puVar17[0x1b];
      uVar13 = puVar17[0x1a];
      uVar21 = puVar17[0x1d];
      uVar14 = puVar17[0x1c];
      uVar22 = puVar17[0x1f];
      uVar23 = puVar17[0x1e];
      *(int *)(puVar16 + 0x20) = (int)puVar17[0x20];
      puVar16[0x1d] = uVar21;
      puVar16[0x1c] = uVar14;
      puVar16[0x1f] = uVar22;
      puVar16[0x1e] = uVar23;
      puVar16[0x1b] = uVar15;
      puVar16[0x1a] = uVar13;
      puVar16 = puVar17;
      uVar13 = uVar20;
    } while ((long)uVar20 <= (long)(lVar6 - 2U >> 1));
    puVar16 = param_2 + -0x21;
    if (puVar17 == puVar16) {
      *(undefined2 *)(puVar17 + 2) = uStack_290;
      puVar17[1] = uStack_298;
      *puVar17 = (ulong)puStack_2a0;
      FUN_10ac00490(puVar9);
      puVar17[4] = uStack_280;
      puVar17[3] = uStack_288;
      puVar17[5] = uStack_278;
      uStack_288 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      puVar17[6] = uStack_270;
      puVar17[7] = uStack_268;
      *(undefined4 *)(puVar17 + 0x20) = uStack_1a0;
      puVar17[0x1f] = uStack_1a8;
      puVar17[0x1e] = uStack_1b0;
      puVar17[0x1d] = uStack_1b8;
      puVar17[0x1c] = uStack_1c0;
      puVar17[0x1b] = uStack_1c8;
      puVar17[0x1a] = uStack_1d0;
      puVar17[0x19] = uStack_1d8;
      puVar17[0x18] = uStack_1e0;
      puVar17[0x17] = uStack_1e8;
      puVar17[0x16] = uStack_1f0;
      puVar17[0x15] = uStack_1f8;
      puVar17[0x14] = uStack_200;
      puVar17[0x13] = uStack_208;
      puVar17[0x12] = uStack_210;
      puVar17[0x11] = uStack_218;
      puVar17[0x10] = uStack_220;
      puVar17[0xf] = uStack_228;
      puVar17[0xe] = uStack_230;
      puVar17[0xd] = uStack_238;
      puVar17[0xc] = uStack_240;
      puVar17[0xb] = uStack_248;
      puVar17[10] = uStack_250;
      puVar17[9] = uStack_258;
      puVar17[8] = uStack_260;
    }
    else {
      uVar15 = param_2[-0x20];
      uVar13 = *puVar16;
      *(short *)(puVar17 + 2) = (short)param_2[-0x1f];
      puVar17[1] = uVar15;
      *puVar17 = uVar13;
      FUN_10ac00490(puVar9);
      puVar10 = param_2 + -0x1e;
      uVar13 = *puVar10;
      puVar17[4] = param_2[-0x1d];
      puVar17[3] = uVar13;
      puVar17[5] = param_2[-0x1c];
      *puVar10 = 0;
      param_2[-0x1d] = 0;
      param_2[-0x1c] = 0;
      puVar17[6] = param_2[-0x1b];
      puVar17[7] = param_2[-0x1a];
      uVar13 = param_2[-0x19];
      puVar17[9] = param_2[-0x18];
      puVar17[8] = uVar13;
      uVar15 = param_2[-0x16];
      uVar13 = param_2[-0x17];
      uVar14 = param_2[-0x14];
      uVar20 = param_2[-0x15];
      uVar23 = param_2[-0x12];
      uVar21 = param_2[-0x13];
      uVar22 = param_2[-0x11];
      puVar17[0x11] = param_2[-0x10];
      puVar17[0x10] = uVar22;
      puVar17[0xf] = uVar23;
      puVar17[0xe] = uVar21;
      puVar17[0xd] = uVar14;
      puVar17[0xc] = uVar20;
      puVar17[0xb] = uVar15;
      puVar17[10] = uVar13;
      uVar15 = param_2[-0xe];
      uVar13 = param_2[-0xf];
      uVar14 = param_2[-0xc];
      uVar20 = param_2[-0xd];
      uVar23 = param_2[-10];
      uVar21 = param_2[-0xb];
      uVar22 = param_2[-9];
      puVar17[0x19] = param_2[-8];
      puVar17[0x18] = uVar22;
      puVar17[0x17] = uVar23;
      puVar17[0x16] = uVar21;
      puVar17[0x15] = uVar14;
      puVar17[0x14] = uVar20;
      puVar17[0x13] = uVar15;
      puVar17[0x12] = uVar13;
      uVar15 = param_2[-6];
      uVar13 = param_2[-7];
      uVar14 = param_2[-4];
      uVar20 = param_2[-5];
      uVar23 = param_2[-2];
      uVar21 = param_2[-3];
      *(int *)(puVar17 + 0x20) = (int)param_2[-1];
      puVar17[0x1f] = uVar23;
      puVar17[0x1e] = uVar21;
      puVar17[0x1d] = uVar14;
      puVar17[0x1c] = uVar20;
      puVar17[0x1b] = uVar15;
      puVar17[0x1a] = uVar13;
      *(undefined2 *)(param_2 + -0x1f) = uStack_290;
      param_2[-0x20] = uStack_298;
      *puVar16 = (ulong)puStack_2a0;
      FUN_10ac00490(puVar10);
      param_2[-0x1d] = uStack_280;
      *puVar10 = uStack_288;
      param_2[-0x1c] = uStack_278;
      uStack_288 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      param_2[-0x1b] = uStack_270;
      param_2[-0x1a] = uStack_268;
      param_2[-0x18] = uStack_258;
      param_2[-0x19] = uStack_260;
      param_2[-0x10] = uStack_218;
      param_2[-0x11] = uStack_220;
      param_2[-0x12] = uStack_228;
      param_2[-0x13] = uStack_230;
      param_2[-0x14] = uStack_238;
      param_2[-0x15] = uStack_240;
      param_2[-0x16] = uStack_248;
      param_2[-0x17] = uStack_250;
      param_2[-8] = uStack_1d8;
      param_2[-9] = uStack_1e0;
      param_2[-10] = uStack_1e8;
      param_2[-0xb] = uStack_1f0;
      param_2[-0xc] = uStack_1f8;
      param_2[-0xd] = uStack_200;
      param_2[-0xe] = uStack_208;
      param_2[-0xf] = uStack_210;
      *(undefined4 *)(param_2 + -1) = uStack_1a0;
      param_2[-2] = uStack_1a8;
      param_2[-3] = uStack_1b0;
      param_2[-4] = uStack_1b8;
      param_2[-5] = uStack_1c0;
      param_2[-6] = uStack_1c8;
      param_2[-7] = uStack_1d0;
      puVar1 = (undefined *)((long)puVar17 + (0x108 - (long)puVar5));
      if (0x108 < (long)puVar1) {
        uVar13 = ((ulong)puVar1 >> 3) * 0xf83e0f83e0f83e1 - 2 >> 1;
        lVar7 = *param_3;
        func_0x00010a01e9ec(lVar7,(int)puVar5[uVar13 * 0x21]);
        lVar8 = *param_3;
        func_0x00010a01e9ec(lVar8,(int)*puVar17);
        if (*(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0) <
            *(float *)(*(long *)(lVar8 + 0x1a8) + 0x4f0)) {
          uStack_188 = puVar17[1];
          puStack_190 = (ulong *)*puVar17;
          uStack_180 = (undefined2)puVar17[2];
          uStack_170 = puVar17[4];
          uStack_178 = puVar17[3];
          uStack_168 = puVar17[5];
          puVar17[4] = 0;
          puVar17[5] = 0;
          *puVar9 = 0;
          uStack_158 = puVar17[7];
          uStack_160 = puVar17[6];
          uStack_148 = puVar17[9];
          uStack_150 = puVar17[8];
          uStack_a8 = puVar17[0x1d];
          uStack_b0 = puVar17[0x1c];
          uStack_98 = puVar17[0x1f];
          uStack_a0 = puVar17[0x1e];
          uStack_90 = (undefined4)puVar17[0x20];
          uStack_b8 = puVar17[0x1b];
          uStack_c0 = puVar17[0x1a];
          uStack_d8 = puVar17[0x17];
          uStack_e0 = puVar17[0x16];
          uStack_c8 = puVar17[0x19];
          uStack_d0 = puVar17[0x18];
          uStack_f8 = puVar17[0x13];
          uStack_100 = puVar17[0x12];
          uStack_e8 = puVar17[0x15];
          uStack_f0 = puVar17[0x14];
          uStack_118 = puVar17[0xf];
          uStack_120 = puVar17[0xe];
          uStack_108 = puVar17[0x11];
          uStack_110 = puVar17[0x10];
          uStack_138 = puVar17[0xb];
          uStack_140 = puVar17[10];
          uStack_128 = puVar17[0xd];
          uStack_130 = puVar17[0xc];
          puVar9 = puVar5 + uVar13 * 0x21;
          do {
            puVar18 = puVar9;
            uVar20 = puVar18[1];
            uVar15 = *puVar18;
            *(short *)(puVar17 + 2) = (short)puVar18[2];
            puVar17[1] = uVar20;
            *puVar17 = uVar15;
            FUN_10ac00490(puVar17 + 3);
            puVar10 = puVar18 + 3;
            uVar15 = *puVar10;
            puVar17[4] = puVar18[4];
            puVar17[3] = uVar15;
            puVar17[5] = puVar18[5];
            *puVar10 = 0;
            puVar18[4] = 0;
            puVar18[5] = 0;
            puVar17[6] = puVar18[6];
            puVar17[7] = puVar18[7];
            uVar15 = puVar18[8];
            puVar17[9] = puVar18[9];
            puVar17[8] = uVar15;
            uVar20 = puVar18[0xb];
            uVar15 = puVar18[10];
            uVar21 = puVar18[0xd];
            uVar14 = puVar18[0xc];
            uVar23 = puVar18[0xe];
            uVar24 = puVar18[0x11];
            uVar22 = puVar18[0x10];
            puVar17[0xf] = puVar18[0xf];
            puVar17[0xe] = uVar23;
            puVar17[0x11] = uVar24;
            puVar17[0x10] = uVar22;
            puVar17[0xb] = uVar20;
            puVar17[10] = uVar15;
            puVar17[0xd] = uVar21;
            puVar17[0xc] = uVar14;
            uVar20 = puVar18[0x13];
            uVar15 = puVar18[0x12];
            uVar21 = puVar18[0x15];
            uVar14 = puVar18[0x14];
            uVar23 = puVar18[0x16];
            uVar24 = puVar18[0x19];
            uVar22 = puVar18[0x18];
            puVar17[0x17] = puVar18[0x17];
            puVar17[0x16] = uVar23;
            puVar17[0x19] = uVar24;
            puVar17[0x18] = uVar22;
            puVar17[0x13] = uVar20;
            puVar17[0x12] = uVar15;
            puVar17[0x15] = uVar21;
            puVar17[0x14] = uVar14;
            uVar20 = puVar18[0x1b];
            uVar15 = puVar18[0x1a];
            uVar21 = puVar18[0x1d];
            uVar14 = puVar18[0x1c];
            uVar22 = puVar18[0x1f];
            uVar23 = puVar18[0x1e];
            *(int *)(puVar17 + 0x20) = (int)puVar18[0x20];
            puVar17[0x1d] = uVar21;
            puVar17[0x1c] = uVar14;
            puVar17[0x1f] = uVar22;
            puVar17[0x1e] = uVar23;
            puVar17[0x1b] = uVar20;
            puVar17[0x1a] = uVar15;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1 >> 1;
            lVar7 = *param_3;
            func_0x00010a01e9ec(lVar7,(int)puVar5[uVar13 * 0x21]);
            lVar8 = *param_3;
            func_0x00010a01e9ec(lVar8,(ulong)puStack_190 & 0xffffffff);
            puVar9 = puVar5 + uVar13 * 0x21;
            puVar17 = puVar18;
          } while (*(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0) <
                   *(float *)(*(long *)(lVar8 + 0x1a8) + 0x4f0));
          *(undefined2 *)(puVar18 + 2) = uStack_180;
          puVar18[1] = uStack_188;
          *puVar18 = (ulong)puStack_190;
          FUN_10ac00490(puVar10);
          puVar18[4] = uStack_170;
          puVar18[3] = uStack_178;
          puVar18[5] = uStack_168;
          uStack_178 = 0;
          uStack_170 = 0;
          uStack_168 = 0;
          puVar18[6] = uStack_160;
          puVar18[7] = uStack_158;
          *(undefined4 *)(puVar18 + 0x20) = uStack_90;
          puVar18[0x1f] = uStack_98;
          puVar18[0x1e] = uStack_a0;
          puVar18[0x1d] = uStack_a8;
          puVar18[0x1c] = uStack_b0;
          puVar18[0x1b] = uStack_b8;
          puVar18[0x1a] = uStack_c0;
          puVar18[0x19] = uStack_c8;
          puVar18[0x18] = uStack_d0;
          puVar18[0x17] = uStack_d8;
          puVar18[0x16] = uStack_e0;
          puVar18[0x15] = uStack_e8;
          puVar18[0x14] = uStack_f0;
          puVar18[0x13] = uStack_f8;
          puVar18[0x12] = uStack_100;
          puVar18[0x11] = uStack_108;
          puVar18[0x10] = uStack_110;
          puVar18[0xf] = uStack_118;
          puVar18[0xe] = uStack_120;
          puVar18[0xd] = uStack_128;
          puVar18[0xc] = uStack_130;
          puVar18[0xb] = uStack_138;
          puVar18[10] = uStack_140;
          puVar18[9] = uStack_148;
          puVar18[8] = uStack_150;
          puStack_198 = &uStack_178;
          FUN_10a1901f0(&puStack_198);
        }
      }
    }
    puStack_190 = &uStack_288;
    FUN_10a1901f0(&puStack_190);
    bVar3 = lVar6 < 3;
    lVar6 = lVar6 + -1;
    param_2 = puVar16;
    if (bVar3) {
      return;
    }
  } while( true );
code_r0x00010ac06be4:
  if (((ulong)puVar9 & 1) == 0) {
LAB_10ac06be8:
    FUN_10ac06544(puVar5,puVar19,param_3,param_4,param_5 & 1);
    param_5 = 0;
  }
  goto LAB_10ac065a4;
}



/* Entry: 10ac06544; end: 10ac07f6f;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10ac06544(ulong *param_1,ulong *param_2,long *param_3,long param_4,uint param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong *puStack_290;
  ulong uStack_288;
  undefined2 uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined4 uStack_190;
  ulong *puStack_188;
  ulong *puStack_180;
  ulong uStack_178;
  undefined2 uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined4 uStack_80;
  
  do {
    puVar15 = param_2 + -0x21;
    puVar14 = param_1;
LAB_10ac065a4:
    param_1 = puVar14;
    uVar11 = (long)param_2 - (long)param_1;
    uVar13 = ((long)uVar11 >> 3) * 0xf83e0f83e0f83e1;
    if (uVar13 - 2 == 0 || (long)uVar13 < 2) {
      if (uVar13 < 2) {
        return;
      }
      if (uVar13 == 2) {
        lVar4 = *param_3;
        func_0x00010a01e9ec(lVar4,(int)*puVar15);
        lVar5 = *param_3;
        func_0x00010a01e9ec(lVar5,(int)*param_1);
        if (*(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0) <=
            *(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0)) {
          return;
        }
        FUN_10ac07f70(param_1,puVar15);
        return;
      }
    }
    else {
      if (uVar13 == 3) {
        FUN_10ac08118(param_1,param_1 + 0x21,puVar15,param_3);
        return;
      }
      if (uVar13 == 4) {
        FUN_10ac08274(param_1,param_1 + 0x21,param_1 + 0x42,puVar15,param_3);
        return;
      }
      if (uVar13 == 5) {
        FUN_10ac08388(param_1,param_1 + 0x21,param_1 + 0x42,param_1 + 99,puVar15,param_3);
        return;
      }
    }
    if ((long)uVar11 < 0x18c0) {
      if ((param_5 & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        puVar14 = param_1 + 0x21;
        if (puVar14 == param_2) {
          return;
        }
        lVar4 = 0x108;
        puVar15 = param_1;
        lVar5 = 0;
        do {
          lVar9 = lVar4;
          lVar4 = *param_3;
          func_0x00010a01e9ec(lVar4,(int)*puVar14);
          lVar6 = *param_3;
          func_0x00010a01e9ec(lVar6,(int)*puVar15);
          if (*(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0) <
              *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0)) {
            uStack_178 = puVar14[1];
            puStack_180 = (ulong *)*puVar14;
            uStack_170 = (undefined2)puVar14[2];
            uStack_160 = puVar15[0x25];
            uStack_168 = puVar15[0x24];
            uStack_158 = puVar15[0x26];
            puVar15[0x24] = 0;
            puVar15[0x25] = 0;
            puVar15[0x26] = 0;
            uStack_80 = (undefined4)puVar15[0x41];
            uStack_a8 = puVar15[0x3c];
            uStack_b0 = puVar15[0x3b];
            uStack_98 = puVar15[0x3e];
            uStack_a0 = puVar15[0x3d];
            uStack_88 = puVar15[0x40];
            uStack_90 = puVar15[0x3f];
            uStack_e8 = puVar15[0x34];
            uStack_f0 = puVar15[0x33];
            uStack_d8 = puVar15[0x36];
            uStack_e0 = puVar15[0x35];
            uStack_c8 = puVar15[0x38];
            uStack_d0 = puVar15[0x37];
            uStack_b8 = puVar15[0x3a];
            uStack_c0 = puVar15[0x39];
            uStack_128 = puVar15[0x2c];
            uStack_130 = puVar15[0x2b];
            uStack_118 = puVar15[0x2e];
            uStack_120 = puVar15[0x2d];
            uStack_108 = puVar15[0x30];
            uStack_110 = puVar15[0x2f];
            uStack_f8 = puVar15[0x32];
            uStack_100 = puVar15[0x31];
            uStack_148 = puVar15[0x28];
            uStack_150 = puVar15[0x27];
            uStack_138 = puVar15[0x2a];
            uStack_140 = puVar15[0x29];
            do {
              lVar4 = lVar5;
              puVar1 = (undefined8 *)((long)param_1 + lVar4);
              puVar1[0x22] = puVar1[1];
              puVar1[0x21] = *puVar1;
              *(undefined2 *)(puVar1 + 0x23) = *(undefined2 *)(puVar1 + 2);
              FUN_10ac00490(puVar1 + 0x24);
              puVar1[0x25] = puVar1[4];
              puVar1[0x24] = puVar1[3];
              puVar1[0x27] = puVar1[6];
              puVar1[0x26] = puVar1[5];
              puVar1[4] = 0;
              puVar1[5] = 0;
              puVar1[3] = 0;
              puVar1[0x28] = puVar1[7];
              puVar1[0x3e] = puVar1[0x1d];
              puVar1[0x3d] = puVar1[0x1c];
              puVar1[0x40] = puVar1[0x1f];
              puVar1[0x3f] = puVar1[0x1e];
              *(undefined4 *)(puVar1 + 0x41) = *(undefined4 *)(puVar1 + 0x20);
              puVar1[0x36] = puVar1[0x15];
              puVar1[0x35] = puVar1[0x14];
              puVar1[0x38] = puVar1[0x17];
              puVar1[0x37] = puVar1[0x16];
              puVar1[0x3a] = puVar1[0x19];
              puVar1[0x39] = puVar1[0x18];
              puVar1[0x3c] = puVar1[0x1b];
              puVar1[0x3b] = puVar1[0x1a];
              puVar1[0x2e] = puVar1[0xd];
              puVar1[0x2d] = puVar1[0xc];
              puVar1[0x30] = puVar1[0xf];
              puVar1[0x2f] = puVar1[0xe];
              puVar1[0x32] = puVar1[0x11];
              puVar1[0x31] = puVar1[0x10];
              puVar1[0x34] = puVar1[0x13];
              puVar1[0x33] = puVar1[0x12];
              puVar1[0x2a] = puVar1[9];
              puVar1[0x29] = puVar1[8];
              puVar1[0x2c] = puVar1[0xb];
              puVar1[0x2b] = puVar1[10];
              if (lVar4 == -0x108) {
LAB_10ac07edc:
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac07ee0);
                (*pcVar3)();
              }
              lVar6 = *param_3;
              func_0x00010a01e9ec(lVar6,(ulong)puStack_180 & 0xffffffff);
              lVar10 = *param_3;
              func_0x00010a01e9ec(lVar10,*(undefined4 *)((long)param_1 + lVar4 + -0x108));
              lVar5 = lVar4 + -0x108;
            } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <
                     *(float *)(*(long *)(lVar10 + 0x1a8) + 0x4f0));
            *(undefined2 *)((long)param_1 + lVar4 + 0x10) = uStack_170;
            *(ulong *)((long)param_1 + lVar4 + 8) = uStack_178;
            *(ulong **)((long)param_1 + lVar4) = puStack_180;
            FUN_10ac00490((long)param_1 + lVar4 + 0x18);
            *(ulong *)((long)param_1 + lVar4 + 0x20) = uStack_160;
            *(ulong *)((long)param_1 + lVar4 + 0x18) = uStack_168;
            *(ulong *)((long)param_1 + lVar4 + 0x28) = uStack_158;
            uStack_168 = 0;
            uStack_160 = 0;
            uStack_158 = 0;
            *(ulong *)((long)param_1 + lVar4 + 0x30) = uStack_150;
            *(ulong *)((long)param_1 + lVar4 + 0x38) = uStack_148;
            *(ulong *)((long)param_1 + lVar4 + 0x48) = uStack_138;
            *(ulong *)((long)param_1 + lVar4 + 0x40) = uStack_140;
            *(ulong *)((long)param_1 + lVar4 + 0x78) = uStack_108;
            *(ulong *)((long)param_1 + lVar4 + 0x70) = uStack_110;
            *(ulong *)((long)param_1 + lVar4 + 0x88) = uStack_f8;
            *(ulong *)((long)param_1 + lVar4 + 0x80) = uStack_100;
            *(ulong *)((long)param_1 + lVar4 + 0x58) = uStack_128;
            *(ulong *)((long)param_1 + lVar4 + 0x50) = uStack_130;
            *(ulong *)((long)param_1 + lVar4 + 0x68) = uStack_118;
            *(ulong *)((long)param_1 + lVar4 + 0x60) = uStack_120;
            *(ulong *)((long)param_1 + lVar4 + 0xb8) = uStack_c8;
            *(ulong *)((long)param_1 + lVar4 + 0xb0) = uStack_d0;
            *(ulong *)((long)param_1 + lVar4 + 200) = uStack_b8;
            *(ulong *)((long)param_1 + lVar4 + 0xc0) = uStack_c0;
            *(ulong *)((long)param_1 + lVar4 + 0x98) = uStack_e8;
            *(ulong *)((long)param_1 + lVar4 + 0x90) = uStack_f0;
            *(ulong *)((long)param_1 + lVar4 + 0xa8) = uStack_d8;
            *(ulong *)((long)param_1 + lVar4 + 0xa0) = uStack_e0;
            *(undefined4 *)((long)param_1 + lVar4 + 0x100) = uStack_80;
            *(ulong *)((long)param_1 + lVar4 + 0xe8) = uStack_98;
            *(ulong *)((long)param_1 + lVar4 + 0xe0) = uStack_a0;
            *(ulong *)((long)param_1 + lVar4 + 0xf8) = uStack_88;
            *(ulong *)((long)param_1 + lVar4 + 0xf0) = uStack_90;
            *(ulong *)((long)param_1 + lVar4 + 0xd8) = uStack_a8;
            *(ulong *)((long)param_1 + lVar4 + 0xd0) = uStack_b0;
            puStack_290 = &uStack_168;
            FUN_10a1901f0(&puStack_290);
          }
          puVar15 = (ulong *)((long)param_1 + lVar9);
          puVar14 = (ulong *)((long)param_1 + lVar9 + 0x108);
          lVar4 = lVar9 + 0x108;
          lVar5 = lVar9;
          if (puVar14 == param_2) {
            return;
          }
        } while( true );
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 0x21 == param_2) {
        return;
      }
      lVar4 = 0;
      puVar14 = param_1 + 0x21;
      puVar15 = param_1;
      break;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar12 = uVar13 - 2 >> 1;
      uVar18 = uVar12;
      goto LAB_10ac072bc;
    }
    puVar14 = param_1 + (uVar13 >> 1) * 0x21;
    if (uVar11 < 0x8401) {
      FUN_10ac08118(puVar14,param_1,puVar15,param_3);
    }
    else {
      FUN_10ac08118(param_1,puVar14,puVar15,param_3);
      FUN_10ac08118(param_1 + 0x21,puVar14 + -0x21,param_2 + -0x42,param_3);
      FUN_10ac08118(param_1 + 0x42,puVar14 + 0x21,param_2 + -99,param_3);
      FUN_10ac08118(puVar14 + -0x21,puVar14,puVar14 + 0x21,param_3);
      uStack_178 = param_1[1];
      puStack_180 = (ulong *)*param_1;
      uStack_170 = (undefined2)param_1[2];
      puVar7 = param_1 + 3;
      uVar12 = param_1[4];
      uVar13 = *puVar7;
      uVar11 = param_1[5];
      param_1[4] = 0;
      param_1[5] = 0;
      *puVar7 = 0;
      uStack_148 = param_1[7];
      uStack_150 = param_1[6];
      uStack_138 = param_1[9];
      uStack_140 = param_1[8];
      uStack_c8 = param_1[0x17];
      uStack_d0 = param_1[0x16];
      uStack_b8 = param_1[0x19];
      uStack_c0 = param_1[0x18];
      uStack_e8 = param_1[0x13];
      uStack_f0 = param_1[0x12];
      uStack_d8 = param_1[0x15];
      uStack_e0 = param_1[0x14];
      uStack_108 = param_1[0xf];
      uStack_110 = param_1[0xe];
      uStack_f8 = param_1[0x11];
      uStack_100 = param_1[0x10];
      uStack_128 = param_1[0xb];
      uStack_130 = param_1[10];
      uStack_118 = param_1[0xd];
      uStack_120 = param_1[0xc];
      uStack_80 = (undefined4)param_1[0x20];
      uStack_98 = param_1[0x1d];
      uStack_a0 = param_1[0x1c];
      uStack_88 = param_1[0x1f];
      uStack_90 = param_1[0x1e];
      uStack_a8 = param_1[0x1b];
      uStack_b0 = param_1[0x1a];
      uVar19 = puVar14[1];
      uVar18 = *puVar14;
      *(short *)(param_1 + 2) = (short)puVar14[2];
      param_1[1] = uVar19;
      *param_1 = uVar18;
      FUN_10ac00490(puVar7);
      puVar8 = puVar14 + 3;
      uVar18 = *puVar8;
      param_1[4] = puVar14[4];
      *puVar7 = uVar18;
      param_1[5] = puVar14[5];
      *puVar8 = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      param_1[6] = puVar14[6];
      param_1[7] = puVar14[7];
      uVar18 = puVar14[8];
      param_1[9] = puVar14[9];
      param_1[8] = uVar18;
      uVar19 = puVar14[0xb];
      uVar18 = puVar14[10];
      uVar20 = puVar14[0xd];
      uVar21 = puVar14[0xc];
      uVar22 = puVar14[0xe];
      uVar24 = puVar14[0x11];
      uVar23 = puVar14[0x10];
      param_1[0xf] = puVar14[0xf];
      param_1[0xe] = uVar22;
      param_1[0x11] = uVar24;
      param_1[0x10] = uVar23;
      param_1[0xb] = uVar19;
      param_1[10] = uVar18;
      param_1[0xd] = uVar20;
      param_1[0xc] = uVar21;
      uVar19 = puVar14[0x13];
      uVar18 = puVar14[0x12];
      uVar20 = puVar14[0x15];
      uVar21 = puVar14[0x14];
      uVar22 = puVar14[0x16];
      uVar24 = puVar14[0x19];
      uVar23 = puVar14[0x18];
      param_1[0x17] = puVar14[0x17];
      param_1[0x16] = uVar22;
      param_1[0x19] = uVar24;
      param_1[0x18] = uVar23;
      param_1[0x13] = uVar19;
      param_1[0x12] = uVar18;
      param_1[0x15] = uVar20;
      param_1[0x14] = uVar21;
      uVar19 = puVar14[0x1b];
      uVar18 = puVar14[0x1a];
      uVar20 = puVar14[0x1d];
      uVar21 = puVar14[0x1c];
      uVar23 = puVar14[0x1f];
      uVar22 = puVar14[0x1e];
      *(int *)(param_1 + 0x20) = (int)puVar14[0x20];
      param_1[0x1d] = uVar20;
      param_1[0x1c] = uVar21;
      param_1[0x1f] = uVar23;
      param_1[0x1e] = uVar22;
      param_1[0x1b] = uVar19;
      param_1[0x1a] = uVar18;
      *(undefined2 *)(puVar14 + 2) = uStack_170;
      puVar14[1] = uStack_178;
      *puVar14 = (ulong)puStack_180;
      FUN_10ac00490(puVar8);
      puVar14[4] = uVar12;
      *puVar8 = uVar13;
      puVar14[5] = uVar11;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      puVar14[6] = uStack_150;
      puVar14[7] = uStack_148;
      puVar14[9] = uStack_138;
      puVar14[8] = uStack_140;
      puVar14[0xf] = uStack_108;
      puVar14[0xe] = uStack_110;
      puVar14[0x11] = uStack_f8;
      puVar14[0x10] = uStack_100;
      puVar14[0xb] = uStack_128;
      puVar14[10] = uStack_130;
      puVar14[0xd] = uStack_118;
      puVar14[0xc] = uStack_120;
      puVar14[0x17] = uStack_c8;
      puVar14[0x16] = uStack_d0;
      puVar14[0x19] = uStack_b8;
      puVar14[0x18] = uStack_c0;
      puVar14[0x13] = uStack_e8;
      puVar14[0x12] = uStack_f0;
      puVar14[0x15] = uStack_d8;
      puVar14[0x14] = uStack_e0;
      *(undefined4 *)(puVar14 + 0x20) = uStack_80;
      puVar14[0x1d] = uStack_98;
      puVar14[0x1c] = uStack_a0;
      puVar14[0x1f] = uStack_88;
      puVar14[0x1e] = uStack_90;
      puVar14[0x1b] = uStack_a8;
      puVar14[0x1a] = uStack_b0;
      puStack_290 = &uStack_168;
      FUN_10a1901f0(&puStack_290);
    }
    param_4 = param_4 + -1;
    if ((param_5 & 1) == 0) {
      lVar4 = *param_3;
      func_0x00010a01e9ec(lVar4,(int)param_1[-0x21]);
      lVar5 = *param_3;
      func_0x00010a01e9ec(lVar5,(int)*param_1);
      if (*(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0) <=
          *(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0)) {
        uStack_178 = param_1[1];
        puStack_180 = (ulong *)*param_1;
        uStack_170 = (undefined2)param_1[2];
        puVar7 = param_1 + 3;
        uStack_160 = param_1[4];
        uStack_168 = *puVar7;
        uStack_158 = param_1[5];
        param_1[4] = 0;
        param_1[5] = 0;
        *puVar7 = 0;
        uStack_148 = param_1[7];
        uStack_150 = param_1[6];
        uStack_138 = param_1[9];
        uStack_140 = param_1[8];
        uStack_98 = param_1[0x1d];
        uStack_a0 = param_1[0x1c];
        uStack_88 = param_1[0x1f];
        uStack_90 = param_1[0x1e];
        uStack_80 = (undefined4)param_1[0x20];
        uStack_a8 = param_1[0x1b];
        uStack_b0 = param_1[0x1a];
        uStack_c8 = param_1[0x17];
        uStack_d0 = param_1[0x16];
        uStack_b8 = param_1[0x19];
        uStack_c0 = param_1[0x18];
        uStack_e8 = param_1[0x13];
        uStack_f0 = param_1[0x12];
        uStack_d8 = param_1[0x15];
        uStack_e0 = param_1[0x14];
        uStack_108 = param_1[0xf];
        uStack_110 = param_1[0xe];
        uStack_f8 = param_1[0x11];
        uStack_100 = param_1[0x10];
        uStack_128 = param_1[0xb];
        uStack_130 = param_1[10];
        uStack_118 = param_1[0xd];
        uStack_120 = param_1[0xc];
        lVar4 = *param_3;
        func_0x00010a01e9ec(lVar4,(ulong)puStack_180 & 0xffffffff);
        lVar5 = *param_3;
        func_0x00010a01e9ec(lVar5,(int)*puVar15);
        puVar14 = param_1;
        if (*(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0) <=
            *(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0)) {
          do {
            puVar14 = puVar14 + 0x21;
            if (param_2 <= puVar14) break;
            lVar4 = *param_3;
            func_0x00010a01e9ec(lVar4,(ulong)puStack_180 & 0xffffffff);
            lVar5 = *param_3;
            func_0x00010a01e9ec(lVar5,(int)*puVar14);
          } while (*(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0) <=
                   *(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0));
        }
        else {
          do {
            puVar14 = puVar14 + 0x21;
            if (puVar14 == param_2) goto LAB_10ac07edc;
            lVar4 = *param_3;
            func_0x00010a01e9ec(lVar4,(ulong)puStack_180 & 0xffffffff);
            lVar5 = *param_3;
            func_0x00010a01e9ec(lVar5,(int)*puVar14);
          } while (*(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0) <=
                   *(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0));
        }
        puVar8 = param_2;
        if (puVar14 < param_2) {
          do {
            if (puVar8 == param_1) goto LAB_10ac07edc;
            lVar4 = *param_3;
            func_0x00010a01e9ec(lVar4,(ulong)puStack_180 & 0xffffffff);
            puVar8 = puVar8 + -0x21;
            lVar5 = *param_3;
            func_0x00010a01e9ec(lVar5,(int)*puVar8);
          } while (*(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0) <
                   *(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0));
        }
        while (puVar14 < puVar8) {
          FUN_10ac07f70(puVar14,puVar8);
          do {
            puVar14 = puVar14 + 0x21;
            if (puVar14 == param_2) goto LAB_10ac07edc;
            lVar4 = *param_3;
            func_0x00010a01e9ec(lVar4,(ulong)puStack_180 & 0xffffffff);
            lVar5 = *param_3;
            func_0x00010a01e9ec(lVar5,(int)*puVar14);
          } while (*(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0) <=
                   *(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0));
          do {
            if (puVar8 == param_1) goto LAB_10ac07edc;
            lVar4 = *param_3;
            func_0x00010a01e9ec(lVar4,(ulong)puStack_180 & 0xffffffff);
            puVar8 = puVar8 + -0x21;
            lVar5 = *param_3;
            func_0x00010a01e9ec(lVar5,(int)*puVar8);
          } while (*(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0) <
                   *(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0));
        }
        puVar8 = puVar14 + -0x21;
        if (puVar8 != param_1) {
          uVar13 = puVar14[-0x20];
          uVar11 = *puVar8;
          *(short *)(param_1 + 2) = (short)puVar14[-0x1f];
          param_1[1] = uVar13;
          *param_1 = uVar11;
          FUN_10ac00490(puVar7);
          uVar11 = puVar14[-0x1e];
          param_1[4] = puVar14[-0x1d];
          param_1[3] = uVar11;
          param_1[5] = puVar14[-0x1c];
          puVar14[-0x1e] = 0;
          puVar14[-0x1d] = 0;
          puVar14[-0x1c] = 0;
          param_1[6] = puVar14[-0x1b];
          param_1[7] = puVar14[-0x1a];
          uVar11 = puVar14[-0x19];
          param_1[9] = puVar14[-0x18];
          param_1[8] = uVar11;
          uVar13 = puVar14[-0x16];
          uVar11 = puVar14[-0x17];
          uVar12 = puVar14[-0x14];
          uVar18 = puVar14[-0x15];
          uVar19 = puVar14[-0x13];
          uVar20 = puVar14[-0x10];
          uVar21 = puVar14[-0x11];
          param_1[0xf] = puVar14[-0x12];
          param_1[0xe] = uVar19;
          param_1[0x11] = uVar20;
          param_1[0x10] = uVar21;
          param_1[0xb] = uVar13;
          param_1[10] = uVar11;
          param_1[0xd] = uVar12;
          param_1[0xc] = uVar18;
          uVar13 = puVar14[-0xe];
          uVar11 = puVar14[-0xf];
          uVar12 = puVar14[-0xc];
          uVar18 = puVar14[-0xd];
          uVar19 = puVar14[-0xb];
          uVar20 = puVar14[-8];
          uVar21 = puVar14[-9];
          param_1[0x17] = puVar14[-10];
          param_1[0x16] = uVar19;
          param_1[0x19] = uVar20;
          param_1[0x18] = uVar21;
          param_1[0x13] = uVar13;
          param_1[0x12] = uVar11;
          param_1[0x15] = uVar12;
          param_1[0x14] = uVar18;
          uVar13 = puVar14[-6];
          uVar11 = puVar14[-7];
          uVar12 = puVar14[-4];
          uVar18 = puVar14[-5];
          uVar21 = puVar14[-2];
          uVar19 = puVar14[-3];
          *(int *)(param_1 + 0x20) = (int)puVar14[-1];
          param_1[0x1d] = uVar12;
          param_1[0x1c] = uVar18;
          param_1[0x1f] = uVar21;
          param_1[0x1e] = uVar19;
          param_1[0x1b] = uVar13;
          param_1[0x1a] = uVar11;
        }
        *(undefined2 *)(puVar14 + -0x1f) = uStack_170;
        puVar14[-0x20] = uStack_178;
        *puVar8 = (ulong)puStack_180;
        FUN_10ac00490(puVar14 + -0x1e);
        puVar14[-0x1d] = uStack_160;
        puVar14[-0x1e] = uStack_168;
        puVar14[-0x1c] = uStack_158;
        uStack_168 = 0;
        uStack_160 = 0;
        uStack_158 = 0;
        puVar14[-0x1b] = uStack_150;
        puVar14[-0x1a] = uStack_148;
        puVar14[-0x18] = uStack_138;
        puVar14[-0x19] = uStack_140;
        puVar14[-0x10] = uStack_f8;
        puVar14[-0x11] = uStack_100;
        puVar14[-0x12] = uStack_108;
        puVar14[-0x13] = uStack_110;
        puVar14[-0x14] = uStack_118;
        puVar14[-0x15] = uStack_120;
        puVar14[-0x16] = uStack_128;
        puVar14[-0x17] = uStack_130;
        puVar14[-8] = uStack_b8;
        puVar14[-9] = uStack_c0;
        puVar14[-10] = uStack_c8;
        puVar14[-0xb] = uStack_d0;
        puVar14[-0xc] = uStack_d8;
        puVar14[-0xd] = uStack_e0;
        puVar14[-0xe] = uStack_e8;
        puVar14[-0xf] = uStack_f0;
        *(undefined4 *)(puVar14 + -1) = uStack_80;
        puVar14[-2] = uStack_88;
        puVar14[-3] = uStack_90;
        puVar14[-4] = uStack_98;
        puVar14[-5] = uStack_a0;
        puVar14[-6] = uStack_a8;
        puVar14[-7] = uStack_b0;
        puStack_290 = &uStack_168;
        FUN_10a1901f0(&puStack_290);
        param_5 = 0;
        goto LAB_10ac065a4;
      }
    }
    lVar4 = 0;
    uStack_178 = param_1[1];
    puStack_180 = (ulong *)*param_1;
    uStack_170 = (undefined2)param_1[2];
    puVar7 = param_1 + 3;
    uStack_160 = param_1[4];
    uStack_168 = *puVar7;
    uStack_158 = param_1[5];
    param_1[4] = 0;
    param_1[5] = 0;
    *puVar7 = 0;
    uStack_148 = param_1[7];
    uStack_150 = param_1[6];
    uStack_138 = param_1[9];
    uStack_140 = param_1[8];
    uStack_98 = param_1[0x1d];
    uStack_a0 = param_1[0x1c];
    uStack_88 = param_1[0x1f];
    uStack_90 = param_1[0x1e];
    uStack_80 = (undefined4)param_1[0x20];
    uStack_a8 = param_1[0x1b];
    uStack_b0 = param_1[0x1a];
    uStack_c8 = param_1[0x17];
    uStack_d0 = param_1[0x16];
    uStack_b8 = param_1[0x19];
    uStack_c0 = param_1[0x18];
    uStack_e8 = param_1[0x13];
    uStack_f0 = param_1[0x12];
    uStack_d8 = param_1[0x15];
    uStack_e0 = param_1[0x14];
    uStack_108 = param_1[0xf];
    uStack_110 = param_1[0xe];
    uStack_f8 = param_1[0x11];
    uStack_100 = param_1[0x10];
    uStack_128 = param_1[0xb];
    uStack_130 = param_1[10];
    uStack_118 = param_1[0xd];
    uStack_120 = param_1[0xc];
    do {
      puVar14 = (ulong *)((long)param_1 + lVar4 + 0x108);
      if (puVar14 == param_2) goto LAB_10ac07edc;
      lVar5 = *param_3;
      func_0x00010a01e9ec(lVar5,(int)*puVar14);
      lVar6 = *param_3;
      func_0x00010a01e9ec(lVar6,(ulong)puStack_180 & 0xffffffff);
      lVar4 = lVar4 + 0x108;
    } while (*(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0) <
             *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0));
    puVar8 = (ulong *)((long)param_1 + lVar4);
    puVar16 = param_2;
    if (lVar4 == 0x108) {
      do {
        if (puVar16 <= puVar8) break;
        puVar16 = puVar16 + -0x21;
        lVar4 = *param_3;
        func_0x00010a01e9ec(lVar4,(int)*puVar16);
        lVar5 = *param_3;
        func_0x00010a01e9ec(lVar5,(ulong)puStack_180 & 0xffffffff);
      } while (*(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0) <=
               *(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0));
    }
    else {
      do {
        if (puVar16 == param_1) goto LAB_10ac07edc;
        puVar16 = puVar16 + -0x21;
        lVar4 = *param_3;
        func_0x00010a01e9ec(lVar4,(int)*puVar16);
        lVar5 = *param_3;
        func_0x00010a01e9ec(lVar5,(ulong)puStack_180 & 0xffffffff);
      } while (*(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0) <=
               *(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0));
    }
    puVar14 = puVar8;
    puVar17 = puVar16;
    if (puVar8 < puVar16) {
      do {
        FUN_10ac07f70(puVar14,puVar17);
        do {
          puVar14 = puVar14 + 0x21;
          if (puVar14 == param_2) goto LAB_10ac07edc;
          lVar4 = *param_3;
          func_0x00010a01e9ec(lVar4,(int)*puVar14);
          lVar5 = *param_3;
          func_0x00010a01e9ec(lVar5,(ulong)puStack_180 & 0xffffffff);
        } while (*(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0) <
                 *(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0));
        do {
          if (puVar17 == param_1) goto LAB_10ac07edc;
          puVar17 = puVar17 + -0x21;
          lVar4 = *param_3;
          func_0x00010a01e9ec(lVar4,(int)*puVar17);
          lVar5 = *param_3;
          func_0x00010a01e9ec(lVar5,(ulong)puStack_180 & 0xffffffff);
        } while (*(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0) <=
                 *(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0));
      } while (puVar14 < puVar17);
    }
    puVar17 = puVar14 + -0x21;
    if (puVar17 != param_1) {
      uVar13 = puVar14[-0x20];
      uVar11 = *puVar17;
      *(short *)(param_1 + 2) = (short)puVar14[-0x1f];
      param_1[1] = uVar13;
      *param_1 = uVar11;
      FUN_10ac00490(puVar7);
      uVar11 = puVar14[-0x1e];
      param_1[4] = puVar14[-0x1d];
      param_1[3] = uVar11;
      param_1[5] = puVar14[-0x1c];
      puVar14[-0x1e] = 0;
      puVar14[-0x1d] = 0;
      puVar14[-0x1c] = 0;
      param_1[6] = puVar14[-0x1b];
      param_1[7] = puVar14[-0x1a];
      uVar11 = puVar14[-0x19];
      param_1[9] = puVar14[-0x18];
      param_1[8] = uVar11;
      uVar13 = puVar14[-0x16];
      uVar11 = puVar14[-0x17];
      uVar12 = puVar14[-0x14];
      uVar18 = puVar14[-0x15];
      uVar19 = puVar14[-0x13];
      uVar20 = puVar14[-0x10];
      uVar21 = puVar14[-0x11];
      param_1[0xf] = puVar14[-0x12];
      param_1[0xe] = uVar19;
      param_1[0x11] = uVar20;
      param_1[0x10] = uVar21;
      param_1[0xb] = uVar13;
      param_1[10] = uVar11;
      param_1[0xd] = uVar12;
      param_1[0xc] = uVar18;
      uVar13 = puVar14[-0xe];
      uVar11 = puVar14[-0xf];
      uVar12 = puVar14[-0xc];
      uVar18 = puVar14[-0xd];
      uVar19 = puVar14[-0xb];
      uVar20 = puVar14[-8];
      uVar21 = puVar14[-9];
      param_1[0x17] = puVar14[-10];
      param_1[0x16] = uVar19;
      param_1[0x19] = uVar20;
      param_1[0x18] = uVar21;
      param_1[0x13] = uVar13;
      param_1[0x12] = uVar11;
      param_1[0x15] = uVar12;
      param_1[0x14] = uVar18;
      uVar13 = puVar14[-6];
      uVar11 = puVar14[-7];
      uVar12 = puVar14[-4];
      uVar18 = puVar14[-5];
      uVar21 = puVar14[-2];
      uVar19 = puVar14[-3];
      *(int *)(param_1 + 0x20) = (int)puVar14[-1];
      param_1[0x1d] = uVar12;
      param_1[0x1c] = uVar18;
      param_1[0x1f] = uVar21;
      param_1[0x1e] = uVar19;
      param_1[0x1b] = uVar13;
      param_1[0x1a] = uVar11;
    }
    *(undefined2 *)(puVar14 + -0x1f) = uStack_170;
    puVar14[-0x20] = uStack_178;
    *puVar17 = (ulong)puStack_180;
    FUN_10ac00490(puVar14 + -0x1e);
    puVar14[-0x1d] = uStack_160;
    puVar14[-0x1e] = uStack_168;
    puVar14[-0x1c] = uStack_158;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    puVar14[-0x1b] = uStack_150;
    puVar14[-0x1a] = uStack_148;
    puVar14[-0x18] = uStack_138;
    puVar14[-0x19] = uStack_140;
    puVar14[-0x10] = uStack_f8;
    puVar14[-0x11] = uStack_100;
    puVar14[-0x12] = uStack_108;
    puVar14[-0x13] = uStack_110;
    puVar14[-0x14] = uStack_118;
    puVar14[-0x15] = uStack_120;
    puVar14[-0x16] = uStack_128;
    puVar14[-0x17] = uStack_130;
    puVar14[-8] = uStack_b8;
    puVar14[-9] = uStack_c0;
    puVar14[-10] = uStack_c8;
    puVar14[-0xb] = uStack_d0;
    puVar14[-0xc] = uStack_d8;
    puVar14[-0xd] = uStack_e0;
    puVar14[-0xe] = uStack_e8;
    puVar14[-0xf] = uStack_f0;
    *(undefined4 *)(puVar14 + -1) = uStack_80;
    puVar14[-2] = uStack_88;
    puVar14[-3] = uStack_90;
    puVar14[-4] = uStack_98;
    puVar14[-5] = uStack_a0;
    puVar14[-6] = uStack_a8;
    puVar14[-7] = uStack_b0;
    puStack_290 = &uStack_168;
    FUN_10a1901f0(&puStack_290);
    if (puVar8 < puVar16) goto LAB_10ac06be8;
    puVar7 = param_1;
    FUN_10ac084ec(param_1,puVar17,param_3);
    puVar8 = puVar14;
    FUN_10ac084ec(puVar14,param_2,param_3);
    if ((int)puVar8 == 0) goto code_r0x00010ac06be4;
    param_2 = puVar17;
    if (((ulong)puVar7 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10ac0706c:
  puVar7 = puVar14;
  lVar5 = *param_3;
  func_0x00010a01e9ec(lVar5,(int)puVar15[0x21]);
  lVar6 = *param_3;
  func_0x00010a01e9ec(lVar6,(int)*puVar15);
  if (*(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0) < *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0)) {
    uStack_178 = puVar7[1];
    puStack_180 = (ulong *)*puVar7;
    uStack_170 = (undefined2)puVar7[2];
    uStack_160 = puVar15[0x25];
    uStack_168 = puVar15[0x24];
    uStack_158 = puVar15[0x26];
    puVar15[0x24] = 0;
    puVar15[0x25] = 0;
    puVar15[0x26] = 0;
    uStack_80 = (undefined4)puVar15[0x41];
    uStack_a8 = puVar15[0x3c];
    uStack_b0 = puVar15[0x3b];
    uStack_98 = puVar15[0x3e];
    uStack_a0 = puVar15[0x3d];
    uStack_88 = puVar15[0x40];
    uStack_90 = puVar15[0x3f];
    uStack_e8 = puVar15[0x34];
    uStack_f0 = puVar15[0x33];
    uStack_d8 = puVar15[0x36];
    uStack_e0 = puVar15[0x35];
    uStack_c8 = puVar15[0x38];
    uStack_d0 = puVar15[0x37];
    uStack_b8 = puVar15[0x3a];
    uStack_c0 = puVar15[0x39];
    uStack_128 = puVar15[0x2c];
    uStack_130 = puVar15[0x2b];
    uStack_118 = puVar15[0x2e];
    uStack_120 = puVar15[0x2d];
    uStack_108 = puVar15[0x30];
    uStack_110 = puVar15[0x2f];
    uStack_f8 = puVar15[0x32];
    uStack_100 = puVar15[0x31];
    uStack_148 = puVar15[0x28];
    uStack_150 = puVar15[0x27];
    uStack_138 = puVar15[0x2a];
    uStack_140 = puVar15[0x29];
    lVar5 = lVar4;
    do {
      lVar6 = lVar5;
      puVar1 = (undefined8 *)((long)param_1 + lVar6);
      puVar1[0x22] = puVar1[1];
      puVar1[0x21] = *puVar1;
      *(undefined2 *)(puVar1 + 0x23) = *(undefined2 *)(puVar1 + 2);
      FUN_10ac00490(puVar1 + 0x24);
      puVar1[0x25] = puVar1[4];
      puVar1[0x24] = puVar1[3];
      puVar1[0x27] = puVar1[6];
      puVar1[0x26] = puVar1[5];
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[3] = 0;
      puVar1[0x28] = puVar1[7];
      puVar1[0x3e] = puVar1[0x1d];
      puVar1[0x3d] = puVar1[0x1c];
      puVar1[0x40] = puVar1[0x1f];
      puVar1[0x3f] = puVar1[0x1e];
      *(undefined4 *)(puVar1 + 0x41) = *(undefined4 *)(puVar1 + 0x20);
      puVar1[0x36] = puVar1[0x15];
      puVar1[0x35] = puVar1[0x14];
      puVar1[0x38] = puVar1[0x17];
      puVar1[0x37] = puVar1[0x16];
      puVar1[0x3a] = puVar1[0x19];
      puVar1[0x39] = puVar1[0x18];
      puVar1[0x3c] = puVar1[0x1b];
      puVar1[0x3b] = puVar1[0x1a];
      puVar1[0x2e] = puVar1[0xd];
      puVar1[0x2d] = puVar1[0xc];
      puVar1[0x30] = puVar1[0xf];
      puVar1[0x2f] = puVar1[0xe];
      puVar1[0x32] = puVar1[0x11];
      puVar1[0x31] = puVar1[0x10];
      puVar1[0x34] = puVar1[0x13];
      puVar1[0x33] = puVar1[0x12];
      puVar1[0x2a] = puVar1[9];
      puVar1[0x29] = puVar1[8];
      puVar1[0x2c] = puVar1[0xb];
      puVar1[0x2b] = puVar1[10];
      puVar14 = param_1;
      if (lVar6 == 0) goto LAB_10ac071e8;
      lVar9 = *param_3;
      func_0x00010a01e9ec(lVar9,(ulong)puStack_180 & 0xffffffff);
      lVar10 = *param_3;
      func_0x00010a01e9ec(lVar10,*(undefined4 *)(puVar1 + -0x21));
      lVar5 = lVar6 + -0x108;
    } while (*(float *)(*(long *)(lVar9 + 0x1a8) + 0x4f0) <
             *(float *)(*(long *)(lVar10 + 0x1a8) + 0x4f0));
    puVar14 = (ulong *)((long)param_1 + lVar6);
LAB_10ac071e8:
    *(undefined2 *)(puVar14 + 2) = uStack_170;
    puVar14[1] = uStack_178;
    *puVar14 = (ulong)puStack_180;
    FUN_10ac00490(puVar1 + 3);
    puVar1[3] = uStack_168;
    puVar14[5] = uStack_158;
    puVar14[4] = uStack_160;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_168 = 0;
    puVar14[6] = uStack_150;
    puVar14[7] = uStack_148;
    puVar1[0x17] = uStack_c8;
    puVar1[0x16] = uStack_d0;
    puVar1[0x19] = uStack_b8;
    puVar1[0x18] = uStack_c0;
    puVar1[0x13] = uStack_e8;
    puVar1[0x12] = uStack_f0;
    puVar1[0x15] = uStack_d8;
    puVar1[0x14] = uStack_e0;
    puVar1[0xf] = uStack_108;
    puVar1[0xe] = uStack_110;
    puVar1[0x11] = uStack_f8;
    puVar1[0x10] = uStack_100;
    puVar1[0xb] = uStack_128;
    puVar1[10] = uStack_130;
    puVar1[0xd] = uStack_118;
    puVar1[0xc] = uStack_120;
    puVar1[9] = uStack_138;
    puVar1[8] = uStack_140;
    *(undefined4 *)(puVar1 + 0x20) = uStack_80;
    puVar1[0x1d] = uStack_98;
    puVar1[0x1c] = uStack_a0;
    puVar1[0x1f] = uStack_88;
    puVar1[0x1e] = uStack_90;
    puVar1[0x1b] = uStack_a8;
    puVar1[0x1a] = uStack_b0;
    puStack_290 = &uStack_168;
    FUN_10a1901f0(&puStack_290);
  }
  lVar4 = lVar4 + 0x108;
  puVar14 = puVar7 + 0x21;
  puVar15 = puVar7;
  if (puVar7 + 0x21 == param_2) {
    return;
  }
  goto LAB_10ac0706c;
LAB_10ac072bc:
  do {
    if ((long)uVar18 <= (long)uVar12) {
      uVar21 = uVar18 << 1 | 1;
      puVar14 = param_1 + uVar21 * 0x21;
      uVar19 = uVar18 * 2 + 2;
      if ((long)uVar19 < (long)uVar13) {
        lVar4 = *param_3;
        func_0x00010a01e9ec(lVar4,(int)*puVar14);
        lVar5 = *param_3;
        func_0x00010a01e9ec(lVar5,(int)puVar14[0x21]);
        if (*(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0) <
            *(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0)) {
          puVar14 = puVar14 + 0x21;
          uVar21 = uVar19;
        }
      }
      puVar15 = param_1 + uVar18 * 0x21;
      lVar4 = *param_3;
      func_0x00010a01e9ec(lVar4,(int)*puVar14);
      lVar5 = *param_3;
      func_0x00010a01e9ec(lVar5,(int)*puVar15);
      if (*(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0) <=
          *(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0)) {
        uStack_178 = puVar15[1];
        puStack_180 = (ulong *)*puVar15;
        uStack_170 = (undefined2)puVar15[2];
        uStack_160 = puVar15[4];
        uStack_168 = puVar15[3];
        uStack_158 = puVar15[5];
        puVar15[4] = 0;
        puVar15[5] = 0;
        puVar15[3] = 0;
        uStack_108 = puVar15[0xf];
        uStack_110 = puVar15[0xe];
        uStack_f8 = puVar15[0x11];
        uStack_100 = puVar15[0x10];
        uStack_128 = puVar15[0xb];
        uStack_130 = puVar15[10];
        uStack_118 = puVar15[0xd];
        uStack_120 = puVar15[0xc];
        uStack_c8 = puVar15[0x17];
        uStack_d0 = puVar15[0x16];
        uStack_b8 = puVar15[0x19];
        uStack_c0 = puVar15[0x18];
        uStack_e8 = puVar15[0x13];
        uStack_f0 = puVar15[0x12];
        uStack_d8 = puVar15[0x15];
        uStack_e0 = puVar15[0x14];
        uStack_98 = puVar15[0x1d];
        uStack_a0 = puVar15[0x1c];
        uStack_88 = puVar15[0x1f];
        uStack_90 = puVar15[0x1e];
        uStack_80 = (undefined4)puVar15[0x20];
        uStack_a8 = puVar15[0x1b];
        uStack_b0 = puVar15[0x1a];
        uStack_148 = puVar15[7];
        uStack_150 = puVar15[6];
        uStack_138 = puVar15[9];
        uStack_140 = puVar15[8];
        do {
          puVar8 = puVar14;
          uVar20 = puVar8[1];
          uVar19 = *puVar8;
          *(short *)(puVar15 + 2) = (short)puVar8[2];
          puVar15[1] = uVar20;
          *puVar15 = uVar19;
          FUN_10ac00490(puVar15 + 3);
          puVar7 = puVar8 + 3;
          uVar19 = *puVar7;
          puVar15[4] = puVar8[4];
          puVar15[3] = uVar19;
          puVar15[5] = puVar8[5];
          *puVar7 = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar15[6] = puVar8[6];
          puVar15[7] = puVar8[7];
          uVar19 = puVar8[8];
          puVar15[9] = puVar8[9];
          puVar15[8] = uVar19;
          uVar20 = puVar8[0xb];
          uVar19 = puVar8[10];
          uVar23 = puVar8[0xd];
          uVar22 = puVar8[0xc];
          uVar24 = puVar8[0xe];
          uVar26 = puVar8[0x11];
          uVar25 = puVar8[0x10];
          puVar15[0xf] = puVar8[0xf];
          puVar15[0xe] = uVar24;
          puVar15[0x11] = uVar26;
          puVar15[0x10] = uVar25;
          puVar15[0xb] = uVar20;
          puVar15[10] = uVar19;
          puVar15[0xd] = uVar23;
          puVar15[0xc] = uVar22;
          uVar20 = puVar8[0x13];
          uVar19 = puVar8[0x12];
          uVar23 = puVar8[0x15];
          uVar22 = puVar8[0x14];
          uVar24 = puVar8[0x16];
          uVar26 = puVar8[0x19];
          uVar25 = puVar8[0x18];
          puVar15[0x17] = puVar8[0x17];
          puVar15[0x16] = uVar24;
          puVar15[0x19] = uVar26;
          puVar15[0x18] = uVar25;
          puVar15[0x13] = uVar20;
          puVar15[0x12] = uVar19;
          puVar15[0x15] = uVar23;
          puVar15[0x14] = uVar22;
          uVar20 = puVar8[0x1b];
          uVar19 = puVar8[0x1a];
          uVar23 = puVar8[0x1d];
          uVar22 = puVar8[0x1c];
          uVar25 = puVar8[0x1f];
          uVar24 = puVar8[0x1e];
          *(int *)(puVar15 + 0x20) = (int)puVar8[0x20];
          puVar15[0x1d] = uVar23;
          puVar15[0x1c] = uVar22;
          puVar15[0x1f] = uVar25;
          puVar15[0x1e] = uVar24;
          puVar15[0x1b] = uVar20;
          puVar15[0x1a] = uVar19;
          if ((long)uVar12 < (long)uVar21) break;
          uVar20 = uVar21 << 1 | 1;
          puVar14 = param_1 + uVar20 * 0x21;
          uVar19 = uVar21 * 2 + 2;
          uVar21 = uVar20;
          if ((long)uVar19 < (long)uVar13) {
            lVar4 = *param_3;
            func_0x00010a01e9ec(lVar4,(int)*puVar14);
            lVar5 = *param_3;
            func_0x00010a01e9ec(lVar5,(int)puVar14[0x21]);
            if (*(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0) <
                *(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0)) {
              uVar21 = uVar19;
              puVar14 = puVar14 + 0x21;
            }
          }
          lVar4 = *param_3;
          func_0x00010a01e9ec(lVar4,(int)*puVar14);
          lVar5 = *param_3;
          func_0x00010a01e9ec(lVar5,(ulong)puStack_180 & 0xffffffff);
          puVar15 = puVar8;
        } while (*(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0) <=
                 *(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0));
        *(undefined2 *)(puVar8 + 2) = uStack_170;
        puVar8[1] = uStack_178;
        *puVar8 = (ulong)puStack_180;
        FUN_10ac00490(puVar7);
        puVar8[4] = uStack_160;
        puVar8[3] = uStack_168;
        puVar8[5] = uStack_158;
        uStack_168 = 0;
        uStack_160 = 0;
        uStack_158 = 0;
        puVar8[6] = uStack_150;
        puVar8[7] = uStack_148;
        *(undefined4 *)(puVar8 + 0x20) = uStack_80;
        puVar8[0x1f] = uStack_88;
        puVar8[0x1e] = uStack_90;
        puVar8[0x1d] = uStack_98;
        puVar8[0x1c] = uStack_a0;
        puVar8[0x1b] = uStack_a8;
        puVar8[0x1a] = uStack_b0;
        puVar8[0x19] = uStack_b8;
        puVar8[0x18] = uStack_c0;
        puVar8[0x17] = uStack_c8;
        puVar8[0x16] = uStack_d0;
        puVar8[0x15] = uStack_d8;
        puVar8[0x14] = uStack_e0;
        puVar8[0x13] = uStack_e8;
        puVar8[0x12] = uStack_f0;
        puVar8[0x11] = uStack_f8;
        puVar8[0x10] = uStack_100;
        puVar8[0xf] = uStack_108;
        puVar8[0xe] = uStack_110;
        puVar8[0xd] = uStack_118;
        puVar8[0xc] = uStack_120;
        puVar8[0xb] = uStack_128;
        puVar8[10] = uStack_130;
        puVar8[9] = uStack_138;
        puVar8[8] = uStack_140;
        puStack_290 = &uStack_168;
        FUN_10a1901f0(&puStack_290);
      }
    }
    bVar2 = uVar18 != 0;
    uVar18 = uVar18 - 1;
  } while (bVar2);
  lVar4 = (uVar11 >> 3) * 0xf83e0f83e0f83e1;
  do {
    uStack_288 = param_1[1];
    puStack_290 = (ulong *)*param_1;
    uStack_280 = (undefined2)param_1[2];
    uStack_270 = param_1[4];
    uStack_278 = param_1[3];
    uStack_268 = param_1[5];
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[3] = 0;
    uStack_258 = param_1[7];
    uStack_260 = param_1[6];
    uStack_248 = param_1[9];
    uStack_250 = param_1[8];
    uStack_1a8 = param_1[0x1d];
    uStack_1b0 = param_1[0x1c];
    uStack_198 = param_1[0x1f];
    uStack_1a0 = param_1[0x1e];
    uStack_190 = (undefined4)param_1[0x20];
    uStack_1b8 = param_1[0x1b];
    uStack_1c0 = param_1[0x1a];
    uStack_1d8 = param_1[0x17];
    uStack_1e0 = param_1[0x16];
    uStack_1c8 = param_1[0x19];
    uStack_1d0 = param_1[0x18];
    uStack_1f8 = param_1[0x13];
    uStack_200 = param_1[0x12];
    uStack_1e8 = param_1[0x15];
    uStack_1f0 = param_1[0x14];
    uStack_218 = param_1[0xf];
    uStack_220 = param_1[0xe];
    uStack_208 = param_1[0x11];
    uStack_210 = param_1[0x10];
    uStack_238 = param_1[0xb];
    uStack_240 = param_1[10];
    uStack_228 = param_1[0xd];
    uStack_230 = param_1[0xc];
    puVar14 = param_1;
    uVar11 = 0;
    do {
      uVar18 = uVar11 << 1 | 1;
      uVar13 = uVar11 * 2 + 2;
      puVar15 = puVar14 + uVar11 * 0x21 + 0x21;
      if ((long)uVar13 < lVar4) {
        lVar5 = *param_3;
        func_0x00010a01e9ec(lVar5,(int)puVar14[uVar11 * 0x21 + 0x21]);
        lVar6 = *param_3;
        func_0x00010a01e9ec(lVar6,(int)puVar14[uVar11 * 0x21 + 0x42]);
        if (*(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0) <
            *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0)) {
          puVar15 = puVar14 + uVar11 * 0x21 + 0x42;
          uVar18 = uVar13;
        }
      }
      uVar13 = puVar15[1];
      uVar11 = *puVar15;
      *(short *)(puVar14 + 2) = (short)puVar15[2];
      puVar14[1] = uVar13;
      *puVar14 = uVar11;
      FUN_10ac00490(puVar14 + 3);
      puVar7 = puVar15 + 3;
      uVar11 = *puVar7;
      puVar14[4] = puVar15[4];
      puVar14[3] = uVar11;
      puVar14[5] = puVar15[5];
      *puVar7 = 0;
      puVar15[4] = 0;
      puVar15[5] = 0;
      puVar14[6] = puVar15[6];
      puVar14[7] = puVar15[7];
      uVar11 = puVar15[8];
      puVar14[9] = puVar15[9];
      puVar14[8] = uVar11;
      uVar13 = puVar15[0xb];
      uVar11 = puVar15[10];
      uVar19 = puVar15[0xd];
      uVar12 = puVar15[0xc];
      uVar21 = puVar15[0xe];
      uVar22 = puVar15[0x11];
      uVar20 = puVar15[0x10];
      puVar14[0xf] = puVar15[0xf];
      puVar14[0xe] = uVar21;
      puVar14[0x11] = uVar22;
      puVar14[0x10] = uVar20;
      puVar14[0xb] = uVar13;
      puVar14[10] = uVar11;
      puVar14[0xd] = uVar19;
      puVar14[0xc] = uVar12;
      uVar13 = puVar15[0x13];
      uVar11 = puVar15[0x12];
      uVar19 = puVar15[0x15];
      uVar12 = puVar15[0x14];
      uVar21 = puVar15[0x16];
      uVar22 = puVar15[0x19];
      uVar20 = puVar15[0x18];
      puVar14[0x17] = puVar15[0x17];
      puVar14[0x16] = uVar21;
      puVar14[0x19] = uVar22;
      puVar14[0x18] = uVar20;
      puVar14[0x13] = uVar13;
      puVar14[0x12] = uVar11;
      puVar14[0x15] = uVar19;
      puVar14[0x14] = uVar12;
      uVar13 = puVar15[0x1b];
      uVar11 = puVar15[0x1a];
      uVar19 = puVar15[0x1d];
      uVar12 = puVar15[0x1c];
      uVar20 = puVar15[0x1f];
      uVar21 = puVar15[0x1e];
      *(int *)(puVar14 + 0x20) = (int)puVar15[0x20];
      puVar14[0x1d] = uVar19;
      puVar14[0x1c] = uVar12;
      puVar14[0x1f] = uVar20;
      puVar14[0x1e] = uVar21;
      puVar14[0x1b] = uVar13;
      puVar14[0x1a] = uVar11;
      puVar14 = puVar15;
      uVar11 = uVar18;
    } while ((long)uVar18 <= (long)(lVar4 - 2U >> 1));
    puVar14 = param_2 + -0x21;
    if (puVar15 == puVar14) {
      *(undefined2 *)(puVar15 + 2) = uStack_280;
      puVar15[1] = uStack_288;
      *puVar15 = (ulong)puStack_290;
      FUN_10ac00490(puVar7);
      puVar15[4] = uStack_270;
      puVar15[3] = uStack_278;
      puVar15[5] = uStack_268;
      uStack_278 = 0;
      uStack_270 = 0;
      uStack_268 = 0;
      puVar15[6] = uStack_260;
      puVar15[7] = uStack_258;
      *(undefined4 *)(puVar15 + 0x20) = uStack_190;
      puVar15[0x1f] = uStack_198;
      puVar15[0x1e] = uStack_1a0;
      puVar15[0x1d] = uStack_1a8;
      puVar15[0x1c] = uStack_1b0;
      puVar15[0x1b] = uStack_1b8;
      puVar15[0x1a] = uStack_1c0;
      puVar15[0x19] = uStack_1c8;
      puVar15[0x18] = uStack_1d0;
      puVar15[0x17] = uStack_1d8;
      puVar15[0x16] = uStack_1e0;
      puVar15[0x15] = uStack_1e8;
      puVar15[0x14] = uStack_1f0;
      puVar15[0x13] = uStack_1f8;
      puVar15[0x12] = uStack_200;
      puVar15[0x11] = uStack_208;
      puVar15[0x10] = uStack_210;
      puVar15[0xf] = uStack_218;
      puVar15[0xe] = uStack_220;
      puVar15[0xd] = uStack_228;
      puVar15[0xc] = uStack_230;
      puVar15[0xb] = uStack_238;
      puVar15[10] = uStack_240;
      puVar15[9] = uStack_248;
      puVar15[8] = uStack_250;
    }
    else {
      uVar13 = param_2[-0x20];
      uVar11 = *puVar14;
      *(short *)(puVar15 + 2) = (short)param_2[-0x1f];
      puVar15[1] = uVar13;
      *puVar15 = uVar11;
      FUN_10ac00490(puVar7);
      puVar8 = param_2 + -0x1e;
      uVar11 = *puVar8;
      puVar15[4] = param_2[-0x1d];
      puVar15[3] = uVar11;
      puVar15[5] = param_2[-0x1c];
      *puVar8 = 0;
      param_2[-0x1d] = 0;
      param_2[-0x1c] = 0;
      puVar15[6] = param_2[-0x1b];
      puVar15[7] = param_2[-0x1a];
      uVar11 = param_2[-0x19];
      puVar15[9] = param_2[-0x18];
      puVar15[8] = uVar11;
      uVar13 = param_2[-0x16];
      uVar11 = param_2[-0x17];
      uVar12 = param_2[-0x14];
      uVar18 = param_2[-0x15];
      uVar21 = param_2[-0x12];
      uVar19 = param_2[-0x13];
      uVar20 = param_2[-0x11];
      puVar15[0x11] = param_2[-0x10];
      puVar15[0x10] = uVar20;
      puVar15[0xf] = uVar21;
      puVar15[0xe] = uVar19;
      puVar15[0xd] = uVar12;
      puVar15[0xc] = uVar18;
      puVar15[0xb] = uVar13;
      puVar15[10] = uVar11;
      uVar13 = param_2[-0xe];
      uVar11 = param_2[-0xf];
      uVar12 = param_2[-0xc];
      uVar18 = param_2[-0xd];
      uVar21 = param_2[-10];
      uVar19 = param_2[-0xb];
      uVar20 = param_2[-9];
      puVar15[0x19] = param_2[-8];
      puVar15[0x18] = uVar20;
      puVar15[0x17] = uVar21;
      puVar15[0x16] = uVar19;
      puVar15[0x15] = uVar12;
      puVar15[0x14] = uVar18;
      puVar15[0x13] = uVar13;
      puVar15[0x12] = uVar11;
      uVar13 = param_2[-6];
      uVar11 = param_2[-7];
      uVar12 = param_2[-4];
      uVar18 = param_2[-5];
      uVar21 = param_2[-2];
      uVar19 = param_2[-3];
      *(int *)(puVar15 + 0x20) = (int)param_2[-1];
      puVar15[0x1f] = uVar21;
      puVar15[0x1e] = uVar19;
      puVar15[0x1d] = uVar12;
      puVar15[0x1c] = uVar18;
      puVar15[0x1b] = uVar13;
      puVar15[0x1a] = uVar11;
      *(undefined2 *)(param_2 + -0x1f) = uStack_280;
      param_2[-0x20] = uStack_288;
      *puVar14 = (ulong)puStack_290;
      FUN_10ac00490(puVar8);
      param_2[-0x1d] = uStack_270;
      *puVar8 = uStack_278;
      param_2[-0x1c] = uStack_268;
      uStack_278 = 0;
      uStack_270 = 0;
      uStack_268 = 0;
      param_2[-0x1b] = uStack_260;
      param_2[-0x1a] = uStack_258;
      param_2[-0x18] = uStack_248;
      param_2[-0x19] = uStack_250;
      param_2[-0x10] = uStack_208;
      param_2[-0x11] = uStack_210;
      param_2[-0x12] = uStack_218;
      param_2[-0x13] = uStack_220;
      param_2[-0x14] = uStack_228;
      param_2[-0x15] = uStack_230;
      param_2[-0x16] = uStack_238;
      param_2[-0x17] = uStack_240;
      param_2[-8] = uStack_1c8;
      param_2[-9] = uStack_1d0;
      param_2[-10] = uStack_1d8;
      param_2[-0xb] = uStack_1e0;
      param_2[-0xc] = uStack_1e8;
      param_2[-0xd] = uStack_1f0;
      param_2[-0xe] = uStack_1f8;
      param_2[-0xf] = uStack_200;
      *(undefined4 *)(param_2 + -1) = uStack_190;
      param_2[-2] = uStack_198;
      param_2[-3] = uStack_1a0;
      param_2[-4] = uStack_1a8;
      param_2[-5] = uStack_1b0;
      param_2[-6] = uStack_1b8;
      param_2[-7] = uStack_1c0;
      uVar11 = (long)puVar15 + (0x108 - (long)param_1);
      if (0x108 < (long)uVar11) {
        uVar11 = (uVar11 >> 3) * 0xf83e0f83e0f83e1 - 2 >> 1;
        lVar5 = *param_3;
        func_0x00010a01e9ec(lVar5,(int)param_1[uVar11 * 0x21]);
        lVar6 = *param_3;
        func_0x00010a01e9ec(lVar6,(int)*puVar15);
        if (*(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0) <
            *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0)) {
          uStack_178 = puVar15[1];
          puStack_180 = (ulong *)*puVar15;
          uStack_170 = (undefined2)puVar15[2];
          uStack_160 = puVar15[4];
          uStack_168 = puVar15[3];
          uStack_158 = puVar15[5];
          puVar15[4] = 0;
          puVar15[5] = 0;
          *puVar7 = 0;
          uStack_148 = puVar15[7];
          uStack_150 = puVar15[6];
          uStack_138 = puVar15[9];
          uStack_140 = puVar15[8];
          uStack_98 = puVar15[0x1d];
          uStack_a0 = puVar15[0x1c];
          uStack_88 = puVar15[0x1f];
          uStack_90 = puVar15[0x1e];
          uStack_80 = (undefined4)puVar15[0x20];
          uStack_a8 = puVar15[0x1b];
          uStack_b0 = puVar15[0x1a];
          uStack_c8 = puVar15[0x17];
          uStack_d0 = puVar15[0x16];
          uStack_b8 = puVar15[0x19];
          uStack_c0 = puVar15[0x18];
          uStack_e8 = puVar15[0x13];
          uStack_f0 = puVar15[0x12];
          uStack_d8 = puVar15[0x15];
          uStack_e0 = puVar15[0x14];
          uStack_108 = puVar15[0xf];
          uStack_110 = puVar15[0xe];
          uStack_f8 = puVar15[0x11];
          uStack_100 = puVar15[0x10];
          uStack_128 = puVar15[0xb];
          uStack_130 = puVar15[10];
          uStack_118 = puVar15[0xd];
          uStack_120 = puVar15[0xc];
          puVar7 = param_1 + uVar11 * 0x21;
          do {
            puVar16 = puVar7;
            uVar18 = puVar16[1];
            uVar13 = *puVar16;
            *(short *)(puVar15 + 2) = (short)puVar16[2];
            puVar15[1] = uVar18;
            *puVar15 = uVar13;
            FUN_10ac00490(puVar15 + 3);
            puVar8 = puVar16 + 3;
            uVar13 = *puVar8;
            puVar15[4] = puVar16[4];
            puVar15[3] = uVar13;
            puVar15[5] = puVar16[5];
            *puVar8 = 0;
            puVar16[4] = 0;
            puVar16[5] = 0;
            puVar15[6] = puVar16[6];
            puVar15[7] = puVar16[7];
            uVar13 = puVar16[8];
            puVar15[9] = puVar16[9];
            puVar15[8] = uVar13;
            uVar18 = puVar16[0xb];
            uVar13 = puVar16[10];
            uVar19 = puVar16[0xd];
            uVar12 = puVar16[0xc];
            uVar21 = puVar16[0xe];
            uVar22 = puVar16[0x11];
            uVar20 = puVar16[0x10];
            puVar15[0xf] = puVar16[0xf];
            puVar15[0xe] = uVar21;
            puVar15[0x11] = uVar22;
            puVar15[0x10] = uVar20;
            puVar15[0xb] = uVar18;
            puVar15[10] = uVar13;
            puVar15[0xd] = uVar19;
            puVar15[0xc] = uVar12;
            uVar18 = puVar16[0x13];
            uVar13 = puVar16[0x12];
            uVar19 = puVar16[0x15];
            uVar12 = puVar16[0x14];
            uVar21 = puVar16[0x16];
            uVar22 = puVar16[0x19];
            uVar20 = puVar16[0x18];
            puVar15[0x17] = puVar16[0x17];
            puVar15[0x16] = uVar21;
            puVar15[0x19] = uVar22;
            puVar15[0x18] = uVar20;
            puVar15[0x13] = uVar18;
            puVar15[0x12] = uVar13;
            puVar15[0x15] = uVar19;
            puVar15[0x14] = uVar12;
            uVar18 = puVar16[0x1b];
            uVar13 = puVar16[0x1a];
            uVar19 = puVar16[0x1d];
            uVar12 = puVar16[0x1c];
            uVar20 = puVar16[0x1f];
            uVar21 = puVar16[0x1e];
            *(int *)(puVar15 + 0x20) = (int)puVar16[0x20];
            puVar15[0x1d] = uVar19;
            puVar15[0x1c] = uVar12;
            puVar15[0x1f] = uVar20;
            puVar15[0x1e] = uVar21;
            puVar15[0x1b] = uVar18;
            puVar15[0x1a] = uVar13;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1 >> 1;
            lVar5 = *param_3;
            func_0x00010a01e9ec(lVar5,(int)param_1[uVar11 * 0x21]);
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(ulong)puStack_180 & 0xffffffff);
            puVar7 = param_1 + uVar11 * 0x21;
            puVar15 = puVar16;
          } while (*(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0) <
                   *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0));
          *(undefined2 *)(puVar16 + 2) = uStack_170;
          puVar16[1] = uStack_178;
          *puVar16 = (ulong)puStack_180;
          FUN_10ac00490(puVar8);
          puVar16[4] = uStack_160;
          puVar16[3] = uStack_168;
          puVar16[5] = uStack_158;
          uStack_168 = 0;
          uStack_160 = 0;
          uStack_158 = 0;
          puVar16[6] = uStack_150;
          puVar16[7] = uStack_148;
          *(undefined4 *)(puVar16 + 0x20) = uStack_80;
          puVar16[0x1f] = uStack_88;
          puVar16[0x1e] = uStack_90;
          puVar16[0x1d] = uStack_98;
          puVar16[0x1c] = uStack_a0;
          puVar16[0x1b] = uStack_a8;
          puVar16[0x1a] = uStack_b0;
          puVar16[0x19] = uStack_b8;
          puVar16[0x18] = uStack_c0;
          puVar16[0x17] = uStack_c8;
          puVar16[0x16] = uStack_d0;
          puVar16[0x15] = uStack_d8;
          puVar16[0x14] = uStack_e0;
          puVar16[0x13] = uStack_e8;
          puVar16[0x12] = uStack_f0;
          puVar16[0x11] = uStack_f8;
          puVar16[0x10] = uStack_100;
          puVar16[0xf] = uStack_108;
          puVar16[0xe] = uStack_110;
          puVar16[0xd] = uStack_118;
          puVar16[0xc] = uStack_120;
          puVar16[0xb] = uStack_128;
          puVar16[10] = uStack_130;
          puVar16[9] = uStack_138;
          puVar16[8] = uStack_140;
          puStack_188 = &uStack_168;
          FUN_10a1901f0(&puStack_188);
        }
      }
    }
    puStack_180 = &uStack_278;
    FUN_10a1901f0(&puStack_180);
    bVar2 = lVar4 < 3;
    lVar4 = lVar4 + -1;
    param_2 = puVar14;
    if (bVar2) {
      return;
    }
  } while( true );
code_r0x00010ac06be4:
  if (((ulong)puVar7 & 1) == 0) {
LAB_10ac06be8:
    FUN_10ac06544(param_1,puVar17,param_3,param_4,param_5 & 1);
    param_5 = 0;
  }
  goto LAB_10ac065a4;
}



/* Entry: 10ac07f70; end: 10ac08117;  */

void FUN_10ac07f70(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined4 uStack_60;
  undefined8 *puStack_58;
  
  uVar11 = param_1[1];
  uVar9 = *param_1;
  uVar1 = *(undefined2 *)(param_1 + 2);
  puVar2 = param_1 + 3;
  uVar7 = param_1[4];
  uVar5 = *puVar2;
  uVar4 = param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  *puVar2 = 0;
  uStack_88 = param_1[0x1b];
  uStack_90 = param_1[0x1a];
  uStack_78 = param_1[0x1d];
  uStack_80 = param_1[0x1c];
  uStack_68 = param_1[0x1f];
  uStack_70 = param_1[0x1e];
  uStack_60 = *(undefined4 *)(param_1 + 0x20);
  uStack_c8 = param_1[0x13];
  uStack_d0 = param_1[0x12];
  uStack_b8 = param_1[0x15];
  uStack_c0 = param_1[0x14];
  uStack_a8 = param_1[0x17];
  uStack_b0 = param_1[0x16];
  uStack_98 = param_1[0x19];
  uStack_a0 = param_1[0x18];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uVar8 = param_2[1];
  uVar6 = *param_2;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[1] = uVar8;
  *param_1 = uVar6;
  FUN_10ac00490(puVar2);
  puVar3 = param_2 + 3;
  uVar6 = *puVar3;
  param_1[4] = param_2[4];
  *puVar2 = uVar6;
  param_1[5] = param_2[5];
  *puVar3 = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  uVar6 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar6;
  uVar8 = param_2[0xb];
  uVar6 = param_2[10];
  uVar12 = param_2[0xd];
  uVar10 = param_2[0xc];
  uVar13 = param_2[0xe];
  uVar15 = param_2[0x11];
  uVar14 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar13;
  param_1[0x11] = uVar15;
  param_1[0x10] = uVar14;
  param_1[0xb] = uVar8;
  param_1[10] = uVar6;
  param_1[0xd] = uVar12;
  param_1[0xc] = uVar10;
  uVar8 = param_2[0x13];
  uVar6 = param_2[0x12];
  uVar12 = param_2[0x15];
  uVar10 = param_2[0x14];
  uVar13 = param_2[0x16];
  uVar15 = param_2[0x19];
  uVar14 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar13;
  param_1[0x19] = uVar15;
  param_1[0x18] = uVar14;
  param_1[0x13] = uVar8;
  param_1[0x12] = uVar6;
  param_1[0x15] = uVar12;
  param_1[0x14] = uVar10;
  uVar8 = param_2[0x1b];
  uVar6 = param_2[0x1a];
  uVar12 = param_2[0x1d];
  uVar10 = param_2[0x1c];
  uVar14 = param_2[0x1f];
  uVar13 = param_2[0x1e];
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  param_1[0x1d] = uVar12;
  param_1[0x1c] = uVar10;
  param_1[0x1f] = uVar14;
  param_1[0x1e] = uVar13;
  param_1[0x1b] = uVar8;
  param_1[0x1a] = uVar6;
  param_2[1] = uVar11;
  *param_2 = uVar9;
  *(undefined2 *)(param_2 + 2) = uVar1;
  FUN_10ac00490(puVar3);
  param_2[4] = uVar7;
  *puVar3 = uVar5;
  param_2[5] = uVar4;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_148 = 0;
  param_2[0x1b] = uStack_88;
  param_2[0x1a] = uStack_90;
  param_2[0x1d] = uStack_78;
  param_2[0x1c] = uStack_80;
  param_2[0x1f] = uStack_68;
  param_2[0x1e] = uStack_70;
  *(undefined4 *)(param_2 + 0x20) = uStack_60;
  param_2[0x13] = uStack_c8;
  param_2[0x12] = uStack_d0;
  param_2[0x15] = uStack_b8;
  param_2[0x14] = uStack_c0;
  param_2[0x17] = uStack_a8;
  param_2[0x16] = uStack_b0;
  param_2[0x19] = uStack_98;
  param_2[0x18] = uStack_a0;
  param_2[0xb] = uStack_108;
  param_2[10] = uStack_110;
  param_2[0xd] = uStack_f8;
  param_2[0xc] = uStack_100;
  param_2[0xf] = uStack_e8;
  param_2[0xe] = uStack_f0;
  param_2[0x11] = uStack_d8;
  param_2[0x10] = uStack_e0;
  param_2[7] = uStack_128;
  param_2[6] = uStack_130;
  param_2[9] = uStack_118;
  param_2[8] = uStack_120;
  puStack_58 = &uStack_148;
  FUN_10a1901f0(&puStack_58);
  return;
}



/* Entry: 10ac08118; end: 10ac08273;  */

void FUN_10ac08118(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined4 uStack_60;
  undefined8 *puStack_58;
  
  lVar2 = *param_4;
  func_0x00010a01e9ec(lVar2,*(undefined4 *)param_2);
  lVar3 = *param_4;
  func_0x00010a01e9ec(lVar3,*(undefined4 *)param_1);
  fVar20 = *(float *)(*(long *)(lVar2 + 0x1a8) + 0x4f0);
  fVar21 = *(float *)(*(long *)(lVar3 + 0x1a8) + 0x4f0);
  lVar2 = *param_4;
  func_0x00010a01e9ec(lVar2,*(undefined4 *)param_3);
  lVar3 = *param_4;
  func_0x00010a01e9ec(lVar3,*(undefined4 *)param_2);
  fVar7 = *(float *)(*(long *)(lVar2 + 0x1a8) + 0x4f0);
  fVar12 = *(float *)(*(long *)(lVar3 + 0x1a8) + 0x4f0);
  if (fVar21 <= fVar20) {
    if (fVar7 < fVar12) {
      FUN_10ac07f70(param_2,param_3);
      lVar2 = *param_4;
      func_0x00010a01e9ec(lVar2,*(undefined4 *)param_2);
      lVar3 = *param_4;
      func_0x00010a01e9ec(lVar3,*(undefined4 *)param_1);
      param_3 = param_2;
      if (*(float *)(*(long *)(lVar2 + 0x1a8) + 0x4f0) <
          *(float *)(*(long *)(lVar3 + 0x1a8) + 0x4f0)) goto LAB_10ac08244;
    }
    return;
  }
  if (fVar12 <= fVar7) {
    FUN_10ac07f70(param_1,param_2);
    lVar2 = *param_4;
    func_0x00010a01e9ec(lVar2,*(undefined4 *)param_3);
    lVar3 = *param_4;
    func_0x00010a01e9ec(lVar3,*(undefined4 *)param_2);
    param_1 = param_2;
    if (*(float *)(*(long *)(lVar3 + 0x1a8) + 0x4f0) <= *(float *)(*(long *)(lVar2 + 0x1a8) + 0x4f0)
       ) {
      return;
    }
  }
LAB_10ac08244:
  uVar15 = param_1[1];
  uVar13 = *param_1;
  uVar1 = *(undefined2 *)(param_1 + 2);
  puVar4 = param_1 + 3;
  uVar10 = param_1[4];
  uVar8 = *puVar4;
  uVar6 = param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  *puVar4 = 0;
  uStack_88 = param_1[0x1b];
  uStack_90 = param_1[0x1a];
  uStack_78 = param_1[0x1d];
  uStack_80 = param_1[0x1c];
  uStack_68 = param_1[0x1f];
  uStack_70 = param_1[0x1e];
  uStack_60 = *(undefined4 *)(param_1 + 0x20);
  uStack_c8 = param_1[0x13];
  uStack_d0 = param_1[0x12];
  uStack_b8 = param_1[0x15];
  uStack_c0 = param_1[0x14];
  uStack_a8 = param_1[0x17];
  uStack_b0 = param_1[0x16];
  uStack_98 = param_1[0x19];
  uStack_a0 = param_1[0x18];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uVar11 = param_3[1];
  uVar9 = *param_3;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_3 + 2);
  param_1[1] = uVar11;
  *param_1 = uVar9;
  FUN_10ac00490(puVar4);
  puVar5 = param_3 + 3;
  uVar9 = *puVar5;
  param_1[4] = param_3[4];
  *puVar4 = uVar9;
  param_1[5] = param_3[5];
  *puVar5 = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_1[6] = param_3[6];
  param_1[7] = param_3[7];
  uVar9 = param_3[8];
  param_1[9] = param_3[9];
  param_1[8] = uVar9;
  uVar11 = param_3[0xb];
  uVar9 = param_3[10];
  uVar16 = param_3[0xd];
  uVar14 = param_3[0xc];
  uVar17 = param_3[0xe];
  uVar19 = param_3[0x11];
  uVar18 = param_3[0x10];
  param_1[0xf] = param_3[0xf];
  param_1[0xe] = uVar17;
  param_1[0x11] = uVar19;
  param_1[0x10] = uVar18;
  param_1[0xb] = uVar11;
  param_1[10] = uVar9;
  param_1[0xd] = uVar16;
  param_1[0xc] = uVar14;
  uVar11 = param_3[0x13];
  uVar9 = param_3[0x12];
  uVar16 = param_3[0x15];
  uVar14 = param_3[0x14];
  uVar17 = param_3[0x16];
  uVar19 = param_3[0x19];
  uVar18 = param_3[0x18];
  param_1[0x17] = param_3[0x17];
  param_1[0x16] = uVar17;
  param_1[0x19] = uVar19;
  param_1[0x18] = uVar18;
  param_1[0x13] = uVar11;
  param_1[0x12] = uVar9;
  param_1[0x15] = uVar16;
  param_1[0x14] = uVar14;
  uVar11 = param_3[0x1b];
  uVar9 = param_3[0x1a];
  uVar16 = param_3[0x1d];
  uVar14 = param_3[0x1c];
  uVar18 = param_3[0x1f];
  uVar17 = param_3[0x1e];
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  param_1[0x1d] = uVar16;
  param_1[0x1c] = uVar14;
  param_1[0x1f] = uVar18;
  param_1[0x1e] = uVar17;
  param_1[0x1b] = uVar11;
  param_1[0x1a] = uVar9;
  param_3[1] = uVar15;
  *param_3 = uVar13;
  *(undefined2 *)(param_3 + 2) = uVar1;
  FUN_10ac00490(puVar5);
  param_3[4] = uVar10;
  *puVar5 = uVar8;
  param_3[5] = uVar6;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_148 = 0;
  param_3[0x1b] = uStack_88;
  param_3[0x1a] = uStack_90;
  param_3[0x1d] = uStack_78;
  param_3[0x1c] = uStack_80;
  param_3[0x1f] = uStack_68;
  param_3[0x1e] = uStack_70;
  *(undefined4 *)(param_3 + 0x20) = uStack_60;
  param_3[0x13] = uStack_c8;
  param_3[0x12] = uStack_d0;
  param_3[0x15] = uStack_b8;
  param_3[0x14] = uStack_c0;
  param_3[0x17] = uStack_a8;
  param_3[0x16] = uStack_b0;
  param_3[0x19] = uStack_98;
  param_3[0x18] = uStack_a0;
  param_3[0xb] = uStack_108;
  param_3[10] = uStack_110;
  param_3[0xd] = uStack_f8;
  param_3[0xc] = uStack_100;
  param_3[0xf] = uStack_e8;
  param_3[0xe] = uStack_f0;
  param_3[0x11] = uStack_d8;
  param_3[0x10] = uStack_e0;
  param_3[7] = uStack_128;
  param_3[6] = uStack_130;
  param_3[9] = uStack_118;
  param_3[8] = uStack_120;
  puStack_58 = &uStack_148;
  FUN_10a1901f0(&puStack_58);
  return;
}



/* Entry: 10ac08274; end: 10ac08387;  */

void FUN_10ac08274(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  long *param_5)

{
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined4 uStack_60;
  undefined8 *puStack_58;
  
  FUN_10ac08118();
  lVar2 = *param_5;
  func_0x00010a01e9ec(lVar2,*param_4);
  lVar3 = *param_5;
  func_0x00010a01e9ec(lVar3,*param_3);
  if (*(float *)(*(long *)(lVar2 + 0x1a8) + 0x4f0) < *(float *)(*(long *)(lVar3 + 0x1a8) + 0x4f0)) {
    FUN_10ac07f70(param_3,param_4);
    lVar2 = *param_5;
    func_0x00010a01e9ec(lVar2,*param_3);
    lVar3 = *param_5;
    func_0x00010a01e9ec(lVar3,*(undefined4 *)param_2);
    if (*(float *)(*(long *)(lVar2 + 0x1a8) + 0x4f0) < *(float *)(*(long *)(lVar3 + 0x1a8) + 0x4f0))
    {
      FUN_10ac07f70(param_2,param_3);
      lVar2 = *param_5;
      func_0x00010a01e9ec(lVar2,*(undefined4 *)param_2);
      lVar3 = *param_5;
      func_0x00010a01e9ec(lVar3,*(undefined4 *)param_1);
      if (*(float *)(*(long *)(lVar2 + 0x1a8) + 0x4f0) <
          *(float *)(*(long *)(lVar3 + 0x1a8) + 0x4f0)) {
        uVar13 = param_1[1];
        uVar11 = *param_1;
        uVar1 = *(undefined2 *)(param_1 + 2);
        puVar4 = param_1 + 3;
        uVar9 = param_1[4];
        uVar7 = *puVar4;
        uVar6 = param_1[5];
        param_1[4] = 0;
        param_1[5] = 0;
        *puVar4 = 0;
        uStack_88 = param_1[0x1b];
        uStack_90 = param_1[0x1a];
        uStack_78 = param_1[0x1d];
        uStack_80 = param_1[0x1c];
        uStack_68 = param_1[0x1f];
        uStack_70 = param_1[0x1e];
        uStack_60 = *(undefined4 *)(param_1 + 0x20);
        uStack_c8 = param_1[0x13];
        uStack_d0 = param_1[0x12];
        uStack_b8 = param_1[0x15];
        uStack_c0 = param_1[0x14];
        uStack_a8 = param_1[0x17];
        uStack_b0 = param_1[0x16];
        uStack_98 = param_1[0x19];
        uStack_a0 = param_1[0x18];
        uStack_108 = param_1[0xb];
        uStack_110 = param_1[10];
        uStack_f8 = param_1[0xd];
        uStack_100 = param_1[0xc];
        uStack_e8 = param_1[0xf];
        uStack_f0 = param_1[0xe];
        uStack_d8 = param_1[0x11];
        uStack_e0 = param_1[0x10];
        uStack_128 = param_1[7];
        uStack_130 = param_1[6];
        uStack_118 = param_1[9];
        uStack_120 = param_1[8];
        uVar10 = param_2[1];
        uVar8 = *param_2;
        *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
        param_1[1] = uVar10;
        *param_1 = uVar8;
        FUN_10ac00490(puVar4);
        puVar5 = param_2 + 3;
        uVar8 = *puVar5;
        param_1[4] = param_2[4];
        *puVar4 = uVar8;
        param_1[5] = param_2[5];
        *puVar5 = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_1[6] = param_2[6];
        param_1[7] = param_2[7];
        uVar8 = param_2[8];
        param_1[9] = param_2[9];
        param_1[8] = uVar8;
        uVar10 = param_2[0xb];
        uVar8 = param_2[10];
        uVar14 = param_2[0xd];
        uVar12 = param_2[0xc];
        uVar15 = param_2[0xe];
        uVar17 = param_2[0x11];
        uVar16 = param_2[0x10];
        param_1[0xf] = param_2[0xf];
        param_1[0xe] = uVar15;
        param_1[0x11] = uVar17;
        param_1[0x10] = uVar16;
        param_1[0xb] = uVar10;
        param_1[10] = uVar8;
        param_1[0xd] = uVar14;
        param_1[0xc] = uVar12;
        uVar10 = param_2[0x13];
        uVar8 = param_2[0x12];
        uVar14 = param_2[0x15];
        uVar12 = param_2[0x14];
        uVar15 = param_2[0x16];
        uVar17 = param_2[0x19];
        uVar16 = param_2[0x18];
        param_1[0x17] = param_2[0x17];
        param_1[0x16] = uVar15;
        param_1[0x19] = uVar17;
        param_1[0x18] = uVar16;
        param_1[0x13] = uVar10;
        param_1[0x12] = uVar8;
        param_1[0x15] = uVar14;
        param_1[0x14] = uVar12;
        uVar10 = param_2[0x1b];
        uVar8 = param_2[0x1a];
        uVar14 = param_2[0x1d];
        uVar12 = param_2[0x1c];
        uVar16 = param_2[0x1f];
        uVar15 = param_2[0x1e];
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
        param_1[0x1d] = uVar14;
        param_1[0x1c] = uVar12;
        param_1[0x1f] = uVar16;
        param_1[0x1e] = uVar15;
        param_1[0x1b] = uVar10;
        param_1[0x1a] = uVar8;
        param_2[1] = uVar13;
        *param_2 = uVar11;
        *(undefined2 *)(param_2 + 2) = uVar1;
        FUN_10ac00490(puVar5);
        param_2[4] = uVar9;
        *puVar5 = uVar7;
        param_2[5] = uVar6;
        uStack_140 = 0;
        uStack_138 = 0;
        uStack_148 = 0;
        param_2[0x1b] = uStack_88;
        param_2[0x1a] = uStack_90;
        param_2[0x1d] = uStack_78;
        param_2[0x1c] = uStack_80;
        param_2[0x1f] = uStack_68;
        param_2[0x1e] = uStack_70;
        *(undefined4 *)(param_2 + 0x20) = uStack_60;
        param_2[0x13] = uStack_c8;
        param_2[0x12] = uStack_d0;
        param_2[0x15] = uStack_b8;
        param_2[0x14] = uStack_c0;
        param_2[0x17] = uStack_a8;
        param_2[0x16] = uStack_b0;
        param_2[0x19] = uStack_98;
        param_2[0x18] = uStack_a0;
        param_2[0xb] = uStack_108;
        param_2[10] = uStack_110;
        param_2[0xd] = uStack_f8;
        param_2[0xc] = uStack_100;
        param_2[0xf] = uStack_e8;
        param_2[0xe] = uStack_f0;
        param_2[0x11] = uStack_d8;
        param_2[0x10] = uStack_e0;
        param_2[7] = uStack_128;
        param_2[6] = uStack_130;
        param_2[9] = uStack_118;
        param_2[8] = uStack_120;
        puStack_58 = &uStack_148;
        FUN_10a1901f0(&puStack_58);
        return;
      }
    }
  }
  return;
}



/* Entry: 10ac08388; end: 10ac084eb;  */

void FUN_10ac08388(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,long *param_6)

{
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined4 uStack_60;
  undefined8 *puStack_58;
  
  FUN_10ac08274();
  lVar2 = *param_6;
  func_0x00010a01e9ec(lVar2,*param_5);
  lVar3 = *param_6;
  func_0x00010a01e9ec(lVar3,*param_4);
  if (*(float *)(*(long *)(lVar2 + 0x1a8) + 0x4f0) < *(float *)(*(long *)(lVar3 + 0x1a8) + 0x4f0)) {
    FUN_10ac07f70(param_4,param_5);
    lVar2 = *param_6;
    func_0x00010a01e9ec(lVar2,*param_4);
    lVar3 = *param_6;
    func_0x00010a01e9ec(lVar3,*param_3);
    if (*(float *)(*(long *)(lVar2 + 0x1a8) + 0x4f0) < *(float *)(*(long *)(lVar3 + 0x1a8) + 0x4f0))
    {
      FUN_10ac07f70(param_3,param_4);
      lVar2 = *param_6;
      func_0x00010a01e9ec(lVar2,*param_3);
      lVar3 = *param_6;
      func_0x00010a01e9ec(lVar3,*(undefined4 *)param_2);
      if (*(float *)(*(long *)(lVar2 + 0x1a8) + 0x4f0) <
          *(float *)(*(long *)(lVar3 + 0x1a8) + 0x4f0)) {
        FUN_10ac07f70(param_2,param_3);
        lVar2 = *param_6;
        func_0x00010a01e9ec(lVar2,*(undefined4 *)param_2);
        lVar3 = *param_6;
        func_0x00010a01e9ec(lVar3,*(undefined4 *)param_1);
        if (*(float *)(*(long *)(lVar2 + 0x1a8) + 0x4f0) <
            *(float *)(*(long *)(lVar3 + 0x1a8) + 0x4f0)) {
          uVar13 = param_1[1];
          uVar11 = *param_1;
          uVar1 = *(undefined2 *)(param_1 + 2);
          puVar4 = param_1 + 3;
          uVar9 = param_1[4];
          uVar7 = *puVar4;
          uVar6 = param_1[5];
          param_1[4] = 0;
          param_1[5] = 0;
          *puVar4 = 0;
          uStack_88 = param_1[0x1b];
          uStack_90 = param_1[0x1a];
          uStack_78 = param_1[0x1d];
          uStack_80 = param_1[0x1c];
          uStack_68 = param_1[0x1f];
          uStack_70 = param_1[0x1e];
          uStack_60 = *(undefined4 *)(param_1 + 0x20);
          uStack_c8 = param_1[0x13];
          uStack_d0 = param_1[0x12];
          uStack_b8 = param_1[0x15];
          uStack_c0 = param_1[0x14];
          uStack_a8 = param_1[0x17];
          uStack_b0 = param_1[0x16];
          uStack_98 = param_1[0x19];
          uStack_a0 = param_1[0x18];
          uStack_108 = param_1[0xb];
          uStack_110 = param_1[10];
          uStack_f8 = param_1[0xd];
          uStack_100 = param_1[0xc];
          uStack_e8 = param_1[0xf];
          uStack_f0 = param_1[0xe];
          uStack_d8 = param_1[0x11];
          uStack_e0 = param_1[0x10];
          uStack_128 = param_1[7];
          uStack_130 = param_1[6];
          uStack_118 = param_1[9];
          uStack_120 = param_1[8];
          uVar10 = param_2[1];
          uVar8 = *param_2;
          *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
          param_1[1] = uVar10;
          *param_1 = uVar8;
          FUN_10ac00490(puVar4);
          puVar5 = param_2 + 3;
          uVar8 = *puVar5;
          param_1[4] = param_2[4];
          *puVar4 = uVar8;
          param_1[5] = param_2[5];
          *puVar5 = 0;
          param_2[4] = 0;
          param_2[5] = 0;
          param_1[6] = param_2[6];
          param_1[7] = param_2[7];
          uVar8 = param_2[8];
          param_1[9] = param_2[9];
          param_1[8] = uVar8;
          uVar10 = param_2[0xb];
          uVar8 = param_2[10];
          uVar14 = param_2[0xd];
          uVar12 = param_2[0xc];
          uVar15 = param_2[0xe];
          uVar17 = param_2[0x11];
          uVar16 = param_2[0x10];
          param_1[0xf] = param_2[0xf];
          param_1[0xe] = uVar15;
          param_1[0x11] = uVar17;
          param_1[0x10] = uVar16;
          param_1[0xb] = uVar10;
          param_1[10] = uVar8;
          param_1[0xd] = uVar14;
          param_1[0xc] = uVar12;
          uVar10 = param_2[0x13];
          uVar8 = param_2[0x12];
          uVar14 = param_2[0x15];
          uVar12 = param_2[0x14];
          uVar15 = param_2[0x16];
          uVar17 = param_2[0x19];
          uVar16 = param_2[0x18];
          param_1[0x17] = param_2[0x17];
          param_1[0x16] = uVar15;
          param_1[0x19] = uVar17;
          param_1[0x18] = uVar16;
          param_1[0x13] = uVar10;
          param_1[0x12] = uVar8;
          param_1[0x15] = uVar14;
          param_1[0x14] = uVar12;
          uVar10 = param_2[0x1b];
          uVar8 = param_2[0x1a];
          uVar14 = param_2[0x1d];
          uVar12 = param_2[0x1c];
          uVar16 = param_2[0x1f];
          uVar15 = param_2[0x1e];
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
          param_1[0x1d] = uVar14;
          param_1[0x1c] = uVar12;
          param_1[0x1f] = uVar16;
          param_1[0x1e] = uVar15;
          param_1[0x1b] = uVar10;
          param_1[0x1a] = uVar8;
          param_2[1] = uVar13;
          *param_2 = uVar11;
          *(undefined2 *)(param_2 + 2) = uVar1;
          FUN_10ac00490(puVar5);
          param_2[4] = uVar9;
          *puVar5 = uVar7;
          param_2[5] = uVar6;
          uStack_140 = 0;
          uStack_138 = 0;
          uStack_148 = 0;
          param_2[0x1b] = uStack_88;
          param_2[0x1a] = uStack_90;
          param_2[0x1d] = uStack_78;
          param_2[0x1c] = uStack_80;
          param_2[0x1f] = uStack_68;
          param_2[0x1e] = uStack_70;
          *(undefined4 *)(param_2 + 0x20) = uStack_60;
          param_2[0x13] = uStack_c8;
          param_2[0x12] = uStack_d0;
          param_2[0x15] = uStack_b8;
          param_2[0x14] = uStack_c0;
          param_2[0x17] = uStack_a8;
          param_2[0x16] = uStack_b0;
          param_2[0x19] = uStack_98;
          param_2[0x18] = uStack_a0;
          param_2[0xb] = uStack_108;
          param_2[10] = uStack_110;
          param_2[0xd] = uStack_f8;
          param_2[0xc] = uStack_100;
          param_2[0xf] = uStack_e8;
          param_2[0xe] = uStack_f0;
          param_2[0x11] = uStack_d8;
          param_2[0x10] = uStack_e0;
          param_2[7] = uStack_128;
          param_2[6] = uStack_130;
          param_2[9] = uStack_118;
          param_2[8] = uStack_120;
          puStack_58 = &uStack_148;
          FUN_10a1901f0(&puStack_58);
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10ac084ec; end: 10ac088bb;  */

bool FUN_10ac084ec(ulong *param_1,ulong *param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  int iStack_184;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined4 uStack_80;
  ulong *apuStack_70 [2];
  
  uVar8 = ((long)param_2 - (long)param_1 >> 3) * 0xf83e0f83e0f83e1;
  if ((long)uVar8 < 3) {
    if (uVar8 < 2) {
      return true;
    }
    if (uVar8 == 2) {
      lVar3 = *param_3;
      func_0x00010a01e9ec(lVar3,(int)param_2[-0x21]);
      lVar4 = *param_3;
      func_0x00010a01e9ec(lVar4,(int)*param_1);
      if (*(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0) <=
          *(float *)(*(long *)(lVar3 + 0x1a8) + 0x4f0)) {
        return true;
      }
      FUN_10ac07f70(param_1,param_2 + -0x21);
      return true;
    }
  }
  else {
    if (uVar8 == 3) {
      FUN_10ac08118(param_1,param_1 + 0x21,param_2 + -0x21,param_3);
      return true;
    }
    if (uVar8 == 4) {
      FUN_10ac08274(param_1,param_1 + 0x21,param_1 + 0x42,param_2 + -0x21,param_3);
      return true;
    }
    if (uVar8 == 5) {
      FUN_10ac08388(param_1,param_1 + 0x21,param_1 + 0x42,param_1 + 99,param_2 + -0x21,param_3);
      return true;
    }
  }
  FUN_10ac08118(param_1,param_1 + 0x21,param_1 + 0x42,param_3);
  if (param_1 + 99 != param_2) {
    lVar3 = 0;
    iStack_184 = 0;
    puVar9 = param_1 + 0x42;
    puVar10 = param_1 + 99;
    do {
      lVar4 = *param_3;
      func_0x00010a01e9ec(lVar4,(int)*puVar10);
      lVar5 = *param_3;
      func_0x00010a01e9ec(lVar5,(int)*puVar9);
      if (*(float *)(*(long *)(lVar4 + 0x1a8) + 0x4f0) <
          *(float *)(*(long *)(lVar5 + 0x1a8) + 0x4f0)) {
        uVar12 = puVar10[1];
        uVar11 = *puVar10;
        uVar8 = puVar10[2];
        uStack_160 = puVar10[4];
        uStack_168 = puVar10[3];
        uStack_158 = puVar10[5];
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        uStack_a8 = puVar10[0x1b];
        uStack_b0 = puVar10[0x1a];
        uStack_98 = puVar10[0x1d];
        uStack_a0 = puVar10[0x1c];
        uStack_88 = puVar10[0x1f];
        uStack_90 = puVar10[0x1e];
        uStack_80 = (undefined4)puVar10[0x20];
        uStack_e8 = puVar10[0x13];
        uStack_f0 = puVar10[0x12];
        uStack_d8 = puVar10[0x15];
        uStack_e0 = puVar10[0x14];
        uStack_c8 = puVar10[0x17];
        uStack_d0 = puVar10[0x16];
        uStack_b8 = puVar10[0x19];
        uStack_c0 = puVar10[0x18];
        uStack_128 = puVar10[0xb];
        uStack_130 = puVar10[10];
        uStack_118 = puVar10[0xd];
        uStack_120 = puVar10[0xc];
        uStack_108 = puVar10[0xf];
        uStack_110 = puVar10[0xe];
        uStack_f8 = puVar10[0x11];
        uStack_100 = puVar10[0x10];
        uStack_148 = puVar10[7];
        uStack_150 = puVar10[6];
        uStack_138 = puVar10[9];
        uStack_140 = puVar10[8];
        lVar4 = lVar3;
        do {
          lVar5 = lVar4;
          *(undefined8 *)((long)param_1 + lVar5 + 800) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x218);
          *(undefined8 *)((long)param_1 + lVar5 + 0x318) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x210);
          *(undefined2 *)((long)param_1 + lVar5 + 0x328) =
               *(undefined2 *)((long)param_1 + lVar5 + 0x220);
          puVar1 = (undefined8 *)((long)param_1 + lVar5 + 0x228);
          FUN_10ac00490((long)param_1 + lVar5 + 0x330);
          *(undefined8 *)((long)param_1 + lVar5 + 0x338) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x230);
          *(undefined8 *)((long)param_1 + lVar5 + 0x330) = *puVar1;
          *(undefined8 *)((long)param_1 + lVar5 + 0x348) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x240);
          *(undefined8 *)((long)param_1 + lVar5 + 0x340) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x238);
          *(undefined8 *)((long)param_1 + lVar5 + 0x238) = 0;
          *(undefined8 *)((long)param_1 + lVar5 + 0x230) = 0;
          *puVar1 = 0;
          *(undefined8 *)((long)param_1 + lVar5 + 0x350) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x248);
          *(undefined8 *)((long)param_1 + lVar5 + 0x400) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x2f8);
          *(undefined8 *)((long)param_1 + lVar5 + 0x3f8) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x2f0);
          *(undefined8 *)((long)param_1 + lVar5 + 0x410) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x308);
          *(undefined8 *)((long)param_1 + lVar5 + 0x408) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x300);
          *(undefined4 *)((long)param_1 + lVar5 + 0x418) =
               *(undefined4 *)((long)param_1 + lVar5 + 0x310);
          *(undefined8 *)((long)param_1 + lVar5 + 0x3c0) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x2b8);
          *(undefined8 *)((long)param_1 + lVar5 + 0x3b8) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x2b0);
          *(undefined8 *)((long)param_1 + lVar5 + 0x3d0) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x2c8);
          *(undefined8 *)((long)param_1 + lVar5 + 0x3c8) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x2c0);
          *(undefined8 *)((long)param_1 + lVar5 + 0x3e0) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x2d8);
          *(undefined8 *)((long)param_1 + lVar5 + 0x3d8) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x2d0);
          *(undefined8 *)((long)param_1 + lVar5 + 0x3f0) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x2e8);
          *(undefined8 *)((long)param_1 + lVar5 + 1000) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x2e0);
          *(undefined8 *)((long)param_1 + lVar5 + 0x380) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x278);
          *(undefined8 *)((long)param_1 + lVar5 + 0x378) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x270);
          *(undefined8 *)((long)param_1 + lVar5 + 0x390) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x288);
          *(undefined8 *)((long)param_1 + lVar5 + 0x388) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x280);
          *(undefined8 *)((long)param_1 + lVar5 + 0x3a0) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x298);
          *(undefined8 *)((long)param_1 + lVar5 + 0x398) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x290);
          *(undefined8 *)((long)param_1 + lVar5 + 0x3b0) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x2a8);
          *(undefined8 *)((long)param_1 + lVar5 + 0x3a8) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x2a0);
          *(undefined8 *)((long)param_1 + lVar5 + 0x360) =
               *(undefined8 *)((long)param_1 + lVar5 + 600);
          *(undefined8 *)((long)param_1 + lVar5 + 0x358) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x250);
          *(undefined8 *)((long)param_1 + lVar5 + 0x370) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x268);
          *(undefined8 *)((long)param_1 + lVar5 + 0x368) =
               *(undefined8 *)((long)param_1 + lVar5 + 0x260);
          puVar9 = param_1;
          if (lVar5 == -0x210) goto LAB_10ac08794;
          lVar6 = *param_3;
          func_0x00010a01e9ec(lVar6,uVar11 & 0xffffffff);
          lVar7 = *param_3;
          func_0x00010a01e9ec(lVar7,*(undefined4 *)((long)param_1 + lVar5 + 0x108));
          lVar4 = lVar5 + -0x108;
        } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <
                 *(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0));
        puVar9 = (ulong *)((long)param_1 + lVar5 + 0x210);
LAB_10ac08794:
        puVar9[1] = uVar12;
        *puVar9 = uVar11;
        *(short *)(puVar9 + 2) = (short)uVar8;
        FUN_10ac00490(puVar1);
        *(ulong *)((long)param_1 + lVar5 + 0x228) = uStack_168;
        puVar9[5] = uStack_158;
        puVar9[4] = uStack_160;
        uStack_160 = 0;
        uStack_158 = 0;
        uStack_168 = 0;
        puVar9[6] = uStack_150;
        puVar9[7] = uStack_148;
        *(ulong *)((long)param_1 + lVar5 + 0x2f8) = uStack_98;
        *(ulong *)((long)param_1 + lVar5 + 0x2f0) = uStack_a0;
        *(ulong *)((long)param_1 + lVar5 + 0x308) = uStack_88;
        *(ulong *)((long)param_1 + lVar5 + 0x300) = uStack_90;
        *(undefined4 *)((long)param_1 + lVar5 + 0x310) = uStack_80;
        *(ulong *)((long)param_1 + lVar5 + 0x2b8) = uStack_d8;
        *(ulong *)((long)param_1 + lVar5 + 0x2b0) = uStack_e0;
        *(ulong *)((long)param_1 + lVar5 + 0x2c8) = uStack_c8;
        *(ulong *)((long)param_1 + lVar5 + 0x2c0) = uStack_d0;
        *(ulong *)((long)param_1 + lVar5 + 0x2d8) = uStack_b8;
        *(ulong *)((long)param_1 + lVar5 + 0x2d0) = uStack_c0;
        *(ulong *)((long)param_1 + lVar5 + 0x2e8) = uStack_a8;
        *(ulong *)((long)param_1 + lVar5 + 0x2e0) = uStack_b0;
        *(ulong *)((long)param_1 + lVar5 + 0x278) = uStack_118;
        *(ulong *)((long)param_1 + lVar5 + 0x270) = uStack_120;
        *(ulong *)((long)param_1 + lVar5 + 0x288) = uStack_108;
        *(ulong *)((long)param_1 + lVar5 + 0x280) = uStack_110;
        *(ulong *)((long)param_1 + lVar5 + 0x298) = uStack_f8;
        *(ulong *)((long)param_1 + lVar5 + 0x290) = uStack_100;
        *(ulong *)((long)param_1 + lVar5 + 0x2a8) = uStack_e8;
        *(ulong *)((long)param_1 + lVar5 + 0x2a0) = uStack_f0;
        iStack_184 = iStack_184 + 1;
        *(ulong *)((long)param_1 + lVar5 + 600) = uStack_138;
        *(ulong *)((long)param_1 + lVar5 + 0x250) = uStack_140;
        *(ulong *)((long)param_1 + lVar5 + 0x268) = uStack_128;
        *(ulong *)((long)param_1 + lVar5 + 0x260) = uStack_130;
        apuStack_70[0] = &uStack_168;
        if (iStack_184 == 8) {
          FUN_10a1901f0(apuStack_70);
          return puVar10 + 0x21 == param_2;
        }
        FUN_10a1901f0(apuStack_70);
      }
      puVar2 = puVar10 + 0x21;
      lVar3 = lVar3 + 0x108;
      puVar9 = puVar10;
      puVar10 = puVar2;
    } while (puVar2 != param_2);
  }
  return true;
}



/* Entry: 10ac088bc; end: 10ac08b8b;  */

void FUN_10ac088bc(undefined4 param_1,undefined4 *param_2,undefined4 param_3,short param_4,
                  undefined4 param_5,undefined4 param_6,byte param_7,undefined2 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined8 *param_12,
                  undefined8 *param_13)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar8 = param_13[1];
  uVar5 = *param_13;
  uVar13 = param_13[3];
  uVar11 = param_13[2];
  uVar9 = param_13[5];
  uVar6 = param_13[4];
  *param_2 = param_3;
  *(short *)(param_2 + 1) = param_4;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined2 *)(param_2 + 4) = param_8;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  param_2[0xc] = param_9;
  *(undefined2 *)(param_2 + 0xd) = 0;
  *(undefined1 *)((long)param_2 + 0x36) = 0;
  *(undefined1 *)((long)param_2 + 0x37) = (undefined1)param_10;
  param_2[0xe] = param_5;
  param_2[0xf] = param_6;
  *(undefined1 *)(param_2 + 0x10) = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  param_2[0x17] = param_1;
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined1 *)((long)param_2 + 0x62) = 0;
  param_2[0x19] = 0;
  *(undefined2 *)(param_2 + 0x1a) = 0xffff;
  uVar4 = param_12[1];
  uVar3 = *param_12;
  uVar10 = param_12[3];
  uVar7 = param_12[2];
  uVar14 = param_12[5];
  uVar12 = param_12[4];
  uVar15 = param_12[6];
  *(undefined8 *)(param_2 + 0x29) = param_12[7];
  *(undefined8 *)(param_2 + 0x27) = uVar15;
  *(undefined8 *)(param_2 + 0x25) = uVar14;
  *(undefined8 *)(param_2 + 0x23) = uVar12;
  *(undefined8 *)(param_2 + 0x21) = uVar10;
  *(undefined8 *)(param_2 + 0x1f) = uVar7;
  *(undefined8 *)(param_2 + 0x1d) = uVar4;
  *(undefined8 *)(param_2 + 0x1b) = uVar3;
  *(undefined8 *)(param_2 + 0x2e) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x32) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined8 *)(param_2 + 0x38) = uVar8;
  *(undefined8 *)(param_2 + 0x36) = uVar5;
  uVar2 = 0x80;
  if (((param_4 == -1 | param_10._1_1_) & (param_7 ^ 0xff) & 1) == 0) {
    uVar2 = 0;
  }
  *(undefined8 *)(param_2 + 0x3c) = uVar13;
  *(undefined8 *)(param_2 + 0x3a) = uVar11;
  *(undefined8 *)(param_2 + 0x40) = uVar9;
  *(undefined8 *)(param_2 + 0x3e) = uVar6;
  uVar1 = 0x100;
  if (((param_4 == -1 | param_7 | param_10._2_1_) & 1) == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_2 + 0x18) = uVar2 | param_7 | uVar1;
  return;
}



/* Entry: 10ac08b8c; end: 10ac08b9f;  */

undefined1  [16] FUN_10ac08b8c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_109ffde64(&UNK_10f69b42f);
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar1 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    FUN_10a0e65b0(param_4,param_2);
    *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    FUN_10ac08c50(param_4 + 0x18,param_2 + 0x18);
    *(undefined8 *)(param_4 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    param_4 = param_4 + 0x38;
    uVar1 = param_3;
  }
  auVar4._8_8_ = param_4;
  auVar4._0_8_ = uVar1;
  return auVar4;
}



/* Entry: 10ac08ba0; end: 10ac08bd3;  */

undefined1  [16] FUN_10ac08ba0(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar1 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    FUN_10a0e65b0(param_4,param_2);
    *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    FUN_10ac08c50(param_4 + 0x18,param_2 + 0x18);
    *(undefined8 *)(param_4 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    param_4 = param_4 + 0x38;
    uVar1 = param_3;
  }
  auVar4._8_8_ = param_4;
  auVar4._0_8_ = uVar1;
  return auVar4;
}



/* Entry: 10ac08bd4; end: 10ac08c4f;  */

undefined1  [16] FUN_10ac08bd4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    FUN_10a0e65b0(param_4,param_2);
    *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    FUN_10ac08c50(param_4 + 0x18,param_2 + 0x18);
    *(undefined8 *)(param_4 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    param_4 = param_4 + 0x38;
    lVar1 = param_3;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = lVar1;
  return auVar2;
}


