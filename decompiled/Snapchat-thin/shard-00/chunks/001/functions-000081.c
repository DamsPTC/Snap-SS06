/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10021f05c; end: 10021f087;  */

long FUN_10021f05c(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x10) + 0x68),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010021f070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Entry: 10021f088; end: 10021f0af;  */

undefined8 FUN_10021f088(undefined8 param_1)

{
  func_0x00010021f044(param_1,0);
  return param_1;
}



/* Entry: 10021f0b0; end: 10021f113;  */

long * FUN_10021f0b0(long *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  int iVar7;
  
  iVar7 = (int)*param_1;
  while( true ) {
    if (iVar7 == -1) {
      return (long *)0x0;
    }
    if (iVar7 == 0) break;
    iVar2 = iVar7 + -1;
    lVar3 = *param_1;
    if ((int)lVar3 == iVar7) {
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar4) {
        *(int *)param_1 = iVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
      bVar4 = cVar1 == '\0';
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    iVar7 = (int)lVar3;
    if (bVar4) {
      return (long *)(ulong)(iVar2 == 0);
    }
  }
  func_0x000107c60ebc();
  plVar5 = param_1;
  if ((param_1 == (long *)0x0) || (FUN_10021f0b0(), (int)plVar5 == 0)) {
    return plVar5;
  }
  if ((param_1[2] != 0) && (pcVar6 = *(code **)(param_1[2] + 0x88), pcVar6 != (code *)0x0)) {
    (*pcVar6)(param_1);
    param_1[1] = 0;
    *(int *)((long)param_1 + 4) = 0;
  }
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  param_1 = param_1 + -1;
  if (*param_1 + 8 != 0) {
    func_0x000107c60ee4(param_1,*param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return param_1;
}



/* Entry: 10021f114; end: 10021f16b;  */

void FUN_10021f114(long param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  
  if ((param_1 == 0) || (lVar1 = param_1, FUN_10021f0b0(), (int)lVar1 == 0)) {
    return;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (pcVar2 = *(code **)(*(long *)(param_1 + 0x10) + 0x88), pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (param_1 != 0) {
    plVar3 = (long *)(param_1 + -8);
    if (*plVar3 + 8 != 0) {
      func_0x000107c60ee4(plVar3,*plVar3 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar3);
    return;
  }
  return;
}



/* Entry: 10021f16c; end: 10021f173;  */

void FUN_10021f16c(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 != (long *)0x0) {
    iVar1 = (int)plVar2 + 0x50;
    FUN_10021f0b0();
    if (iVar1 != 0) {
      if (*(code **)(*plVar2 + 0x18) != (code *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      FUN_10021f290(0x113310d28,plVar2,plVar2 + 9);
      FUN_10021f3c8(plVar2[1]);
      FUN_10021f3c8(plVar2[2]);
      FUN_10021f3c8(plVar2[3]);
      FUN_10021f3c8(plVar2[4]);
      FUN_10021f3c8(plVar2[5]);
      FUN_10021f3c8(plVar2[6]);
      FUN_10021f3c8(plVar2[7]);
      FUN_10021f3c8(plVar2[8]);
      func_0x00010021f414(plVar2[0x24]);
      func_0x00010021f414(plVar2[0x25]);
      func_0x00010021f414(plVar2[0x26]);
      FUN_10021f3c8(plVar2[0x27]);
      FUN_10021f3c8(plVar2[0x28]);
      FUN_10021f3c8(plVar2[0x29]);
      FUN_10021f3c8(plVar2[0x2a]);
      if ((int)plVar2[0x2b] != 0) {
        uVar3 = 0;
        do {
          func_0x000107c2b4c4(*(undefined8 *)(plVar2[0x2c] + uVar3 * 8));
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(plVar2 + 0x2b));
      }
      FUN_1001e33e0(plVar2[0x2c]);
      FUN_1001e33e0(plVar2[0x2d]);
      func_0x000107c61280(plVar2 + 0xb);
      if (plVar2 != (long *)0x0) {
        plVar2 = plVar2 + -1;
        if (*plVar2 + 8 != 0) {
          func_0x000107c60ee4(plVar2,*plVar2 + 8);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(plVar2);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 10021f174; end: 10021f28f;  */

void FUN_10021f174(long *param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (param_1 != (long *)0x0) {
    iVar1 = (int)param_1 + 0x50;
    FUN_10021f0b0();
    if (iVar1 != 0) {
      if (*(code **)(*param_1 + 0x18) != (code *)0x0) {
        (**(code **)(*param_1 + 0x18))(param_1);
      }
      FUN_10021f290(0x113310d28,param_1,param_1 + 9);
      FUN_10021f3c8(param_1[1]);
      FUN_10021f3c8(param_1[2]);
      FUN_10021f3c8(param_1[3]);
      FUN_10021f3c8(param_1[4]);
      FUN_10021f3c8(param_1[5]);
      FUN_10021f3c8(param_1[6]);
      FUN_10021f3c8(param_1[7]);
      FUN_10021f3c8(param_1[8]);
      func_0x00010021f414(param_1[0x24]);
      func_0x00010021f414(param_1[0x25]);
      func_0x00010021f414(param_1[0x26]);
      FUN_10021f3c8(param_1[0x27]);
      FUN_10021f3c8(param_1[0x28]);
      FUN_10021f3c8(param_1[0x29]);
      FUN_10021f3c8(param_1[0x2a]);
      if ((int)param_1[0x2b] != 0) {
        uVar2 = 0;
        do {
          func_0x000107c2b4c4(*(undefined8 *)(param_1[0x2c] + uVar2 * 8));
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0x2b));
      }
      FUN_1001e33e0(param_1[0x2c]);
      FUN_1001e33e0(param_1[0x2d]);
      func_0x000107c61280(param_1 + 0xb);
      if (param_1 != (long *)0x0) {
        param_1 = param_1 + -1;
        if (*param_1 + 8 != 0) {
          func_0x000107c60ee4(param_1,*param_1 + 8);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(param_1);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 10021f290; end: 10021f3c7;  */

/* WARNING: Removing unreachable block (ram,0x0001004d2c90) */
/* WARNING: Removing unreachable block (ram,0x0001004d2c94) */

void FUN_10021f290(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  long *plVar9;
  ulong uVar10;
  
  if (*param_3 != 0) {
    puVar7 = param_1;
    func_0x000107c61288();
    if ((int)puVar7 != 0) {
LAB_10021f3c4:
      func_0x000107c60ebc();
      if (puVar7 != (undefined8 *)0x0) {
        uVar2 = *(uint *)((long)puVar7 + 0x14);
        if ((uVar2 >> 1 & 1) == 0) {
          FUN_1001e33e0(*puVar7);
          uVar2 = *(uint *)((long)puVar7 + 0x14);
        }
        if ((uVar2 & 1) != 0) {
          if (puVar7 != (undefined8 *)0x0) {
            plVar9 = puVar7 + -1;
            if (*plVar9 + 8 != 0) {
              func_0x000107c60ee4(plVar9,*plVar9 + 8);
            }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_11034c310)(plVar9);
            return;
          }
          return;
        }
        *puVar7 = 0;
      }
      return;
    }
    puVar4 = (ulong *)param_1[0x19];
    if ((puVar4 == (ulong *)0x0) || (*puVar4 == 0)) {
      func_0x000107c6128c();
      puVar7 = param_1;
      if ((int)param_1 != 0) goto LAB_10021f3c4;
      puVar4 = (ulong *)0x0;
    }
    else {
      FUN_100229de4();
      puVar7 = param_1;
      func_0x000107c6128c();
      if ((int)puVar7 != 0) goto LAB_10021f3c4;
      if (puVar4 == (ulong *)0x0) {
        lVar5 = 0xe;
        FUN_1001e82f0(0xe,0);
        if (lVar5 != 0) {
          iVar3 = *(int *)(lVar5 + 0x180);
          uVar2 = iVar3 + 1U & 0xf;
          *(uint *)(lVar5 + 0x180) = uVar2;
          if (uVar2 == *(uint *)(lVar5 + 0x184)) {
            *(uint *)(lVar5 + 0x184) = iVar3 + 2U & 0xf;
          }
          puVar7 = (undefined8 *)(lVar5 + (ulong)uVar2 * 0x18);
          FUN_1001e33e0(puVar7[1]);
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = &UNK_10f6c65c2;
          *(undefined2 *)((long)puVar7 + 0x14) = 0xdd;
          *(undefined4 *)(puVar7 + 2) = 0xe000041;
        }
        return;
      }
      if (*puVar4 != 0) {
        uVar10 = 0;
        do {
          puVar7 = *(undefined8 **)(puVar4[1] + uVar10 * 8);
          if ((code *)puVar7[2] != (code *)0x0) {
            uVar6 = 0;
            uVar1 = uVar10 + *(byte *)(param_1 + 0x1a);
            puVar8 = (ulong *)*param_3;
            if ((puVar8 != (ulong *)0x0) && (-1 < (int)uVar1)) {
              if ((uVar1 & 0x7fffffff) < *puVar8) {
                uVar6 = *(undefined8 *)(puVar8[1] + (uVar1 & 0x7fffffff) * 8);
              }
              else {
                uVar6 = 0;
              }
            }
            (*(code *)puVar7[2])(param_2,uVar6,param_3,uVar1,*puVar7,puVar7[1]);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *puVar4);
      }
    }
    FUN_1004d1b78(puVar4);
    FUN_1004d1b78(*param_3);
    *param_3 = 0;
  }
  return;
}



/* Entry: 10021f3c8; end: 10021f447;  */

void FUN_10021f3c8(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(uint *)((long)param_1 + 0x14);
    if ((uVar1 >> 1 & 1) == 0) {
      FUN_1001e33e0(*param_1);
      uVar1 = *(uint *)((long)param_1 + 0x14);
    }
    if ((uVar1 & 1) != 0) {
      if (param_1 != (undefined8 *)0x0) {
        plVar2 = param_1 + -1;
        if (*plVar2 + 8 != 0) {
          func_0x000107c60ee4(plVar2,*plVar2 + 8);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(plVar2);
        return;
      }
      return;
    }
    *param_1 = 0;
  }
  return;
}



/* Entry: 10021f448; end: 1002219cb;  */

void FUN_10021f448(undefined8 param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined1 auStack_50 [24];
  long alStack_38 [3];
  
  alStack_38[1] = 0xaaaaaaaaaaaaaaaa;
  alStack_38[2] = 0xaaaaaaaaaaaaaaaa;
  puVar3 = &DAT_10f3b8b2a;
  if (param_2 == 0) {
    puVar3 = &UNK_10f74acbf;
  }
  alStack_38[0] = -0x5555555555555556;
  switch(param_4) {
  case 1:
    break;
  case 2:
    break;
  case 4:
    break;
  case 5:
  case 3:
    func_0x00010021f568(puVar3);
    puVar3 = &UNK_10e5834b0;
    uVar1 = 10;
    goto code_r0x00010021f51c;
  }
  func_0x00010021f568(puVar3);
  puVar3 = &UNK_10e5834d8;
  uVar1 = 9;
code_r0x00010021f51c:
  func_0x00010021f66c(auStack_50,uVar1,puVar3);
  plVar2 = alStack_38;
  func_0x00010021f7e0(plVar2,auStack_50,1);
  func_0x0001002206f4(auStack_50);
  (**(code **)(*plVar2 + 0x30))(plVar2,param_3);
  func_0x000107c60ca0(alStack_38);
  return;
}



/* Entry: 1002219cc; end: 100221c6b;  */

void FUN_1002219cc(ulong *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  byte bVar4;
  code *pcVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar6 = (ulong)bVar4;
  uVar12 = param_1[1];
  uVar1 = uVar12;
  if (-1 < (char)bVar4) {
    uVar1 = uVar6;
  }
  if (param_2 < 0) goto LAB_100221c60;
  uVar16 = uVar1;
  if (param_2 != 0) {
    uVar8 = param_2 - 1U & 0xfffffffffffffff;
    lVar9 = param_3;
    if (3 < uVar8) {
      uVar8 = uVar8 + 1;
      uVar16 = uVar8 & 3;
      uVar13 = 4;
      if (uVar16 != 0) {
        uVar13 = uVar16;
      }
      lVar10 = uVar8 - uVar13;
      lVar9 = lVar10 * 0x10;
      lVar14 = 0;
      lVar15 = 0;
      lVar17 = 0;
      plVar11 = (long *)(param_3 + 0x28);
      uVar16 = uVar1;
      do {
        uVar16 = plVar11[-4] + uVar16;
        lVar17 = plVar11[-2] + lVar17;
        lVar14 = *plVar11 + lVar14;
        lVar15 = plVar11[2] + lVar15;
        plVar11 = plVar11 + 8;
        lVar10 = lVar10 + -4;
      } while (lVar10 != 0);
      lVar9 = param_3 + lVar9;
      uVar16 = lVar14 + uVar16 + lVar15 + lVar17;
    }
    do {
      uVar16 = *(long *)(lVar9 + 8) + uVar16;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != param_3 + param_2 * 0x10);
  }
  if ((char)bVar4 < '\0') {
    if (uVar16 <= uVar12) {
LAB_100221bb4:
      param_1[1] = uVar16;
      *(undefined1 *)(*param_1 + uVar16) = 0;
      goto joined_r0x000100221be4;
    }
    uVar13 = (param_1[2] & 0x7fffffffffffffff) - 1;
    uVar7 = (uint)(param_1[2] >> 0x3f);
    uVar8 = uVar16 - uVar12;
    if (uVar8 <= uVar13 - uVar12) goto LAB_100221bb0;
  }
  else {
    if (uVar16 <= uVar6) {
      *(byte *)((long)param_1 + 0x17) = (byte)uVar16;
      *(undefined1 *)((long)param_1 + uVar16) = 0;
      goto joined_r0x000100221be4;
    }
    uVar7 = 0;
    uVar13 = 0x16;
    uVar8 = uVar16 - uVar6;
    uVar12 = uVar6;
    if (uVar8 <= 0x16 - uVar6) {
LAB_100221bb0:
      if (uVar7 == 0) {
        *(byte *)((long)param_1 + 0x17) = (byte)uVar16 & 0x7f;
        *(undefined1 *)((long)param_1 + uVar16) = 0;
        goto joined_r0x000100221be4;
      }
      goto LAB_100221bb4;
    }
  }
  if (0x7ffffffffffffff7 - uVar13 < (uVar8 - uVar13) + uVar12) {
    func_0x000104c4f6b8();
LAB_100221c60:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0,0x100221c64);
    (*pcVar5)();
  }
  puVar2 = (ulong *)*param_1;
  if (-1 < (char)bVar4) {
    puVar2 = param_1;
  }
  uVar6 = 0x7ffffffffffffff7;
  if (uVar13 < 0x3ffffffffffffff3) {
    uVar8 = uVar16;
    if (uVar16 <= uVar13 * 2) {
      uVar8 = uVar13 * 2;
    }
    uVar3 = 0x19;
    if ((uVar8 | 7) != 0x17) {
      uVar3 = (uVar8 | 7) + 1;
    }
    uVar6 = 0x17;
    if (0x16 < uVar8) {
      uVar6 = uVar3;
    }
  }
  uVar8 = uVar6;
  func_0x000107c60e20();
  if (uVar12 != 0) {
    func_0x000107c610b8(uVar8,puVar2,uVar12);
  }
  if (uVar13 != 0x16) {
    func_0x000107c60e14(puVar2);
  }
  *param_1 = uVar8;
  param_1[2] = uVar6 | 0x8000000000000000;
  param_1[1] = uVar16;
  *(undefined1 *)(*param_1 + uVar16) = 0;
joined_r0x000100221be4:
  if (param_2 != 0) {
    puVar2 = (ulong *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar2 = param_1;
    }
    lVar9 = (long)puVar2 + uVar1;
    param_2 = param_2 << 4;
    plVar11 = (long *)(param_3 + 8);
    do {
      while (*plVar11 == 0) {
        param_2 = param_2 + -0x10;
        plVar11 = plVar11 + 2;
        if (param_2 == 0) {
          return;
        }
      }
      func_0x000107c610b8(lVar9,plVar11[-1]);
      lVar9 = lVar9 + *plVar11;
      param_2 = param_2 + -0x10;
      plVar11 = plVar11 + 2;
    } while (param_2 != 0);
  }
  return;
}



/* Entry: 100221c6c; end: 100221cb7;  */

void FUN_100221c6c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_1002219cc(&uStack_38,param_2,param_3);
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  return;
}



/* Entry: 100221cb8; end: 100223ff7;  */

void FUN_100221cb8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010015efe4(param_1,1,param_3,(int)param_3 + 1,1);
                    /* WARNING: Could not recover jumptable at 0x000100221cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



/* Entry: 100223ff8; end: 100224083;  */

bool FUN_100223ff8(long param_1,undefined1 *param_2,uint param_3)

{
  ushort uVar1;
  ushort *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 200);
  if (lVar3 == 0) {
    puVar2 = (ushort *)&UNK_10e52acc8;
    lVar3 = 9;
  }
  else {
    puVar2 = *(ushort **)(*(long *)(param_1 + 8) + 0xc0);
  }
  lVar3 = lVar3 << 1;
  do {
    uVar1 = *puVar2;
    if (uVar1 == param_3) goto LAB_10022406c;
    lVar3 = lVar3 + -2;
    puVar2 = puVar2 + 1;
  } while (lVar3 != 0);
  FUN_1004d2c58(0x10,0,0xf5,&UNK_10f6cfd23,0x1f2);
  *param_2 = 0x2f;
LAB_10022406c:
  return uVar1 == param_3;
}



/* Entry: 100224084; end: 100224227;  */

undefined8 FUN_100224084(ulong *param_1,long param_2)

{
  ushort uVar1;
  ulong *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ushort *puVar9;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  
  if (param_1[0xba] == 0) {
    FUN_1004d2c58(0x10,0,0x44,&UNK_10f6d12c1,0x14a);
    return 0;
  }
  uVar6 = *param_1;
  uVar5 = *(ulong *)(param_2 + 0x10);
  if ((1 < uVar5) && ((uVar5 & 0xfffffffffffffffe) != 2)) {
    puVar9 = *(ushort **)(param_2 + 8);
    uVar8 = (ulong)((uint)(puVar9[1] >> 8) | (puVar9[1] & 0xff00ff) << 8);
    if (uVar5 - 4 == uVar8) {
      uVar1 = *puVar9 >> 8 | *puVar9 << 8;
      uStack_41 = 0x32;
      puVar2 = param_1;
      FUN_100223ff8(param_1,&uStack_41,uVar1);
      uVar3 = uStack_41;
      if (((ulong)puVar2 & 1) != 0) {
        *(ushort *)(param_1[0xbb] + 8) = uVar1;
        uStack_58 = 0;
        uStack_50 = 0;
        puVar2 = param_1;
        FUN_100224228(param_1,&uStack_58,*(byte *)(uVar6 + 0xa4) & 1);
        uVar4 = uStack_58;
        if (((ulong)puVar2 & 1) == 0) {
          uVar4 = 0x50;
        }
        else {
          uVar5 = uVar6;
          FUN_100224594(uVar6,puVar9 + 2,uVar8,uVar1,param_1[0xba],uStack_58,uStack_50);
          if ((uVar5 & 1) != 0) {
            uVar7 = 1;
            goto LAB_100224208;
          }
          FUN_1004d2c58(0x10,0,0x72,&UNK_10f6d12c1,0x169);
          uVar4 = 0x33;
        }
        func_0x000107c2b730(uVar6,2,uVar4);
        uVar7 = 0;
        uVar4 = uStack_58;
LAB_100224208:
        FUN_1001e33e0(uVar4);
        return uVar7;
      }
      goto LAB_100224178;
    }
  }
  FUN_1004d2c58(0x10,0,0x89,&UNK_10f6d12c1,0x153);
  uVar3 = 0x32;
LAB_100224178:
  func_0x000107c2b730(uVar6,2,uVar3);
  return 0;
}



/* Entry: 100224228; end: 1002243c3;  */

undefined8 FUN_100224228(long param_1,long param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  ushort *puVar7;
  long lVar8;
  uint auStack_a8 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [64];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  puVar3 = &uStack_a0;
  FUN_1001ebea0(puVar3,0xe2);
  if ((int)puVar3 == 0) {
    uVar6 = 0x3d;
  }
  else {
    lVar8 = 0x40;
    do {
      puVar3 = &uStack_a0;
      FUN_1001ec260(puVar3,0x20);
      if ((int)puVar3 == 0) {
        uVar6 = 0x43;
        goto LAB_10022436c;
      }
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    if (param_3 < 3) {
      puVar3 = &uStack_a0;
      FUN_1001ed748(puVar3,(&PTR_DAT_110c8aa58)[param_3],
                    *(undefined8 *)(&UNK_10e52b368 + (ulong)param_3 * 8));
      if ((int)puVar3 == 0) {
        uVar6 = 0x5b;
      }
      else {
        param_1 = param_1 + 0x198;
        FUN_1001fdb40(param_1,auStack_78,auStack_a8);
        if ((int)param_1 != 0) {
          puVar3 = &uStack_a0;
          uVar5 = auStack_a8[0];
          FUN_1001ed748(puVar3,auStack_78);
          if ((int)puVar3 != 0) {
            uVar4 = 0;
            func_0x0001001ed84c();
            if ((uVar4 & 1) != 0) {
              uVar6 = 1;
              goto LAB_100224374;
            }
          }
        }
        uVar6 = 100;
      }
    }
    else {
      uVar6 = 0x53;
    }
  }
LAB_10022436c:
  uVar5 = 0x41;
  param_2 = 0;
  FUN_1004d2c58(0x10,0,0x41,&UNK_10f6d12c1,uVar6);
  uVar6 = 0;
LAB_100224374:
  uVar2 = (uint)&uStack_a0;
  FUN_1001ed8c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return uVar6;
  }
  func_0x000107c60e78();
  FUN_1001ed8c0(&uStack_a0);
  func_0x000107c60bd8();
  lVar8 = 0xd;
  puVar7 = (ushort *)&UNK_110c8a828;
  while (*puVar7 != uVar5) {
    puVar7 = puVar7 + 0x10;
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 != *(int *)(puVar7 + 2)) {
    return 0;
  }
  FUN_1001fa5c4();
  if (0x303 < uVar2) {
    if (iVar1 == 0x198) {
      if (*(int *)(puVar7 + 4) == 0) {
        return 0;
      }
      if (*(int *)(**(long **)(param_2 + 8) + 0x28) != *(int *)(puVar7 + 4)) {
        return 0;
      }
    }
    else if ((iVar1 == 6) && ((puVar7[0xc] & 1) == 0)) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 1002243c4; end: 10022446f;  */

undefined8 FUN_1002243c4(uint param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  ushort *puVar3;
  
  lVar2 = 0xd;
  puVar3 = (ushort *)&UNK_110c8a828;
  while (*puVar3 != param_3) {
    puVar3 = puVar3 + 0x10;
    lVar2 = lVar2 + -1;
    if (lVar2 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 != *(int *)(puVar3 + 2)) {
    return 0;
  }
  FUN_1001fa5c4();
  if (0x303 < param_1) {
    if (iVar1 == 0x198) {
      if (*(int *)(puVar3 + 4) == 0) {
        return 0;
      }
      if (*(int *)(**(long **)(param_2 + 8) + 0x28) != *(int *)(puVar3 + 4)) {
        return 0;
      }
    }
    else if ((iVar1 == 6) && ((puVar3[0xc] & 1) == 0)) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 100224470; end: 100224593;  */

void FUN_100224470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined8 uVar1;
  ushort *puVar2;
  undefined8 uStack_48;
  
  FUN_1002243c4(param_1,param_3,param_4);
  if ((int)param_1 == 0) {
    FUN_1004d2c58(0x10,0,0xf5,&UNK_10f6d0be3,0xaf);
  }
  else {
    puVar2 = (ushort *)&UNK_110c8a828;
    if ((uint)param_4 != 0xff01) {
      do {
        puVar2 = puVar2 + 0x10;
      } while ((uint)*puVar2 != (uint)param_4);
    }
    if (*(code **)(puVar2 + 8) == (code *)0x0) {
      param_1 = 0;
    }
    else {
      (**(code **)(puVar2 + 8))();
    }
    func_0x0001002247b8(param_2,&uStack_48,param_1,0,param_3,param_5 != 0);
    if ((((int)param_2 != 0) && ((char)puVar2[0xc] == '\x01')) &&
       (uVar1 = uStack_48, func_0x0001002249bc(uStack_48,6,0xffffffff,0x1001,6,0), (int)uVar1 != 0))
    {
      func_0x0001002249bc(uStack_48,6,0x18,0x1003,0xffffffff,0);
    }
  }
  return;
}



/* Entry: 100224594; end: 100224643;  */

bool FUN_100224594(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  bool bVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  iVar1 = (int)&uStack_50;
  uStack_48 = 0;
  uStack_50 = 0;
  puStack_38 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_100224470(param_1,&uStack_50,param_5,param_4,1);
  if ((param_1 & 1) == 0) {
    bVar2 = false;
  }
  else {
    FUN_100224e44(&uStack_50,param_2,param_3,param_6,param_7);
    bVar2 = iVar1 != 0;
  }
  FUN_1001e33e0(uStack_48);
  if (puStack_38 != (undefined8 *)0x0) {
    (*(code *)*puStack_38)(uStack_40);
  }
  return bVar2;
}



/* Entry: 100224644; end: 1002248eb;  */

undefined8 * FUN_100224644(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  
  if (param_3 == -1) {
    if (param_1 == (int *)0x0) {
      return (undefined8 *)0x0;
    }
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      return (undefined8 *)0x0;
    }
    param_3 = **(int **)(param_1 + 4);
  }
  lVar5 = 0;
  while (piVar8 = *(int **)((long)&PTR_DAT_110c7c768 + lVar5), *piVar8 != param_3) {
    lVar5 = lVar5 + 8;
    if (lVar5 == 0x20) {
      FUN_1004d2c58(6,0,0x80,&UNK_10f6c60a7,100);
      func_0x000107c2b2a4(&UNK_10f6c611b);
      return (undefined8 *)0x0;
    }
  }
  puVar4 = (undefined8 *)0x38;
  func_0x000107c610a0();
  if (puVar4 == (undefined8 *)0x0) {
    FUN_1004d2c58(6,0,0x41,&UNK_10f6c60a7,0x6b);
    return (undefined8 *)0x0;
  }
  *puVar4 = 0x30;
  puVar7 = puVar4 + 1;
  *puVar7 = piVar8;
  puVar9 = puVar4 + 3;
  puVar4[4] = 0;
  *puVar9 = 0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  puVar4[2] = param_2;
  if (param_1 != (int *)0x0) {
    iVar6 = *param_1;
    do {
      if (iVar6 == -1) break;
      iVar1 = *param_1;
      if (iVar1 == iVar6) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *param_1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        bVar3 = cVar2 == '\0';
      }
      else {
        bVar3 = false;
        ClearExclusiveLocal();
      }
      iVar6 = iVar1;
    } while (!bVar3);
    *puVar9 = param_1;
  }
  if (*(code **)(piVar8 + 2) == (code *)0x0) {
    return puVar7;
  }
  puVar4 = puVar7;
  (**(code **)(piVar8 + 2))();
  if ((int)puVar4 < 1) {
    FUN_10021f114(*puVar9);
    FUN_1001e33e0(puVar7);
    return (undefined8 *)0x0;
  }
  return puVar7;
}



/* Entry: 1002248ec; end: 10022495f;  */

bool FUN_1002248ec(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x50;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x48;
    *(undefined8 *)((long)puVar1 + 0x14) = 0;
    *(undefined8 *)((long)puVar1 + 0xc) = 0;
    *(undefined8 *)((long)puVar1 + 0x34) = 0;
    *(undefined8 *)((long)puVar1 + 0x2c) = 0;
    *(undefined8 *)((long)puVar1 + 0x24) = 0;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    *(undefined8 *)((long)puVar1 + 0x44) = 0;
    *(undefined8 *)((long)puVar1 + 0x3c) = 0;
    *(undefined4 *)(puVar1 + 1) = 0x800;
    *(undefined4 *)((long)puVar1 + 0x4c) = 0;
    *(undefined4 *)(puVar1 + 3) = 1;
    *(undefined4 *)(puVar1 + 6) = 0xfffffffe;
    *(undefined8 **)(param_1 + 0x28) = puVar1 + 1;
  }
  return puVar1 != (undefined8 *)0x0;
}



/* Entry: 100224960; end: 100224a8b;  */

undefined8 FUN_100224960(long *param_1)

{
  long lVar1;
  
  if (((param_1 != (long *)0x0) && (lVar1 = *param_1, lVar1 != 0)) &&
     ((*(long *)(lVar1 + 0x38) != 0 || (*(long *)(lVar1 + 0x40) != 0)))) {
    *(undefined4 *)(param_1 + 4) = 0x10;
    return 1;
  }
  FUN_1004d2c58(6,0,0x7d,&UNK_10f6c60a7,0xf1);
  return 0;
}



/* Entry: 100224a8c; end: 100224def;  */

undefined8 FUN_100224a8c(long param_1,int param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  
  puVar6 = *(uint **)(param_1 + 0x28);
  if (param_2 < 0x1006) {
    if (param_2 < 0x1002) {
      if (param_2 == 1) {
        if ((param_4 == (uint *)0x0) || (puVar6[4] != 3)) {
LAB_100224c9c:
          *(uint **)(puVar6 + 6) = param_4;
          return 1;
        }
        uVar2 = 0x73;
        uVar3 = 0x179;
        goto LAB_100224d9c;
      }
      if (param_2 == 2) goto LAB_100224c24;
      if (param_2 == 0x1001) {
        if ((param_3 < 7) && ((1 << (ulong)(param_3 & 0x1f) & 0x5aU) != 0)) {
          if ((param_3 == 3) && (*(long *)(puVar6 + 6) != 0)) {
            FUN_1004d2c58(6,0,0x73,&UNK_10f6c6377,0x179);
          }
          else {
            if (param_3 == 4) {
              bVar1 = *(byte *)(param_1 + 0x20) & 0xc0;
            }
            else {
              if (param_3 != 6) goto LAB_100224dd8;
              bVar1 = *(byte *)(param_1 + 0x20) & 0x18;
            }
            if (bVar1 != 0) {
              if (*(long *)(puVar6 + 6) == 0) {
                FUN_10072d3bc();
                *(long *)(puVar6 + 6) = param_1;
              }
LAB_100224dd8:
              puVar6[4] = param_3;
              return 1;
            }
          }
        }
        uVar2 = 0x6d;
        uVar3 = 0x195;
        goto LAB_100224d9c;
      }
    }
    else {
      if (param_2 - 0x1003U < 2) {
        if (puVar6[4] != 6) {
          uVar2 = 0x74;
          uVar3 = 0x1a6;
          goto LAB_100224d9c;
        }
        if (param_2 != 0x1004) {
          if (-3 < (int)param_3) {
            puVar6[10] = param_3;
            return 1;
          }
          return 0;
        }
        uVar4 = puVar6[10];
LAB_100224d1c:
        *param_4 = uVar4;
        return 1;
      }
      if (param_2 == 0x1002) {
        uVar4 = puVar6[4];
        goto LAB_100224d1c;
      }
      if (param_2 == 0x1005) {
        if (0xff < (int)param_3) {
          *puVar6 = param_3;
          return 1;
        }
        uVar2 = 0x70;
        uVar3 = 0x1b5;
        goto LAB_100224d9c;
      }
    }
  }
  else if (param_2 < 0x1009) {
    if (param_2 - 0x1007U < 2) {
      if (puVar6[4] != 4) {
        uVar2 = 0x73;
        uVar3 = 0x1c6;
        goto LAB_100224d9c;
      }
      if (param_2 != 0x1008) goto LAB_100224c9c;
LAB_100224c24:
      lVar5 = *(long *)(puVar6 + 6);
LAB_100224c28:
      *(long *)param_4 = lVar5;
      return 1;
    }
    if (param_2 == 0x1006) {
      if (param_4 == (uint *)0x0) {
        return 0;
      }
      FUN_10021f3c8(*(undefined8 *)(puVar6 + 2));
      *(uint **)(puVar6 + 2) = param_4;
      return 1;
    }
  }
  else {
    if (param_2 - 0x1009U < 2) {
      if ((puVar6[4] | 2) != 6) {
        uVar2 = 0x71;
        uVar3 = 0x1df;
        goto LAB_100224d9c;
      }
      if (param_2 != 0x100a) {
        *(uint **)(puVar6 + 8) = param_4;
        return 1;
      }
      lVar5 = *(long *)(puVar6 + 8);
      if (lVar5 != 0) goto LAB_100224c28;
      goto LAB_100224c24;
    }
    if (param_2 == 0x100b) {
      if (puVar6[4] == 4) {
        FUN_1001e33e0(*(undefined8 *)(puVar6 + 0xe));
        uVar2 = *(undefined8 *)(param_4 + 2);
        *(undefined8 *)(puVar6 + 0xe) = *(undefined8 *)param_4;
        *(undefined8 *)(puVar6 + 0x10) = uVar2;
        return 1;
      }
      uVar2 = 0x73;
      uVar3 = 0x1ef;
      goto LAB_100224d9c;
    }
    if (param_2 == 0x100c) {
      if (puVar6[4] == 4) {
        uVar2 = *(undefined8 *)(puVar6 + 0x10);
        *(undefined8 *)param_4 = *(undefined8 *)(puVar6 + 0xe);
        *(undefined8 *)(param_4 + 2) = uVar2;
        return 1;
      }
      uVar2 = 0x73;
      uVar3 = 0x1fb;
      goto LAB_100224d9c;
    }
  }
  uVar2 = 0x65;
  uVar3 = 0x202;
LAB_100224d9c:
  FUN_1004d2c58(6,0,uVar2,&UNK_10f6c6377,uVar3);
  return 0;
}



/* Entry: 100224df0; end: 100224e43;  */

bool FUN_100224df0(long *param_1)

{
  bool bVar1;
  
  bVar1 = *(long *)(*(long *)param_1[2] + 0x38) == 0;
  if (bVar1) {
    FUN_1004d2c58(6,0,0x7d,&UNK_10f6c5f3e,0x8e);
  }
  else {
    (**(code **)(*param_1 + 0x18))();
  }
  return !bVar1;
}



/* Entry: 100224e44; end: 100225223;  */

long * FUN_100224e44(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined1 auStack_78 [64];
  long lStack_38;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (*(long *)(*plVar2 + 0x38) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x40);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      FUN_1004d2c58(6,0,0x7d,&UNK_10f6c5f3e,0xe2);
      return (long *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x000100224ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar2,param_2,param_3);
    return plVar2;
  }
  puVar3 = param_1;
  FUN_100224df0(param_1,param_4,param_5);
  if ((int)puVar3 == 0) {
    return (long *)0x0;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(**(long **)(param_1 + 0x10) + 0x38) == 0) {
    lVar6 = 6;
    param_2 = (undefined1 *)0x0;
    FUN_1004d2c58(6,0,0x7d,&UNK_10f6c5f3e,0xb2);
    plVar2 = (long *)0x0;
    goto LAB_100225114;
  }
  lStack_98 = 0;
  uStack_a0 = 0;
  puStack_88 = (undefined8 *)0x0;
  lStack_90 = 0;
  iVar1 = (int)&uStack_a0;
  puVar3 = param_1;
  FUN_1001fca40();
  if (iVar1 == 0) {
LAB_1002250d0:
    param_2 = puVar3;
    plVar2 = (long *)0x0;
  }
  else {
    puVar5 = &uStack_a0;
    puVar3 = auStack_78;
    FUN_1001fcc88(puVar5,puVar3,&uStack_a4);
    if ((int)puVar5 == 0) goto LAB_1002250d0;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    FUN_100225224(uVar4,param_2,param_3,auStack_78,uStack_a4);
    plVar2 = (long *)(ulong)((int)uVar4 != 0);
  }
  lVar6 = lStack_98;
  FUN_1001e33e0();
  if (puStack_88 != (undefined8 *)0x0) {
    lVar6 = lStack_90;
    (*(code *)*puStack_88)();
  }
LAB_100225114:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar2;
  }
  func_0x000107c60e78();
  puVar5 = (undefined8 *)0x50;
  func_0x000107c610a0();
  plVar2 = (long *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0x48;
    *(undefined8 *)((long)puVar5 + 0x14) = 0;
    *(undefined8 *)((long)puVar5 + 0xc) = 0;
    *(undefined8 *)((long)puVar5 + 0x34) = 0;
    *(undefined8 *)((long)puVar5 + 0x2c) = 0;
    *(undefined8 *)((long)puVar5 + 0x24) = 0;
    *(undefined8 *)((long)puVar5 + 0x1c) = 0;
    *(undefined8 *)((long)puVar5 + 0x44) = 0;
    *(undefined8 *)((long)puVar5 + 0x3c) = 0;
    *(undefined4 *)((long)puVar5 + 0x4c) = 0;
    puVar7 = puVar5 + 1;
    *(undefined4 *)puVar7 = 0x800;
    *(undefined4 *)(puVar5 + 3) = 1;
    *(undefined4 *)(puVar5 + 6) = 0xfffffffe;
    *(undefined8 **)(lVar6 + 0x28) = puVar7;
    puVar8 = *(undefined4 **)(param_2 + 0x28);
    *(undefined4 *)puVar7 = *puVar8;
    lVar6 = *(long *)(puVar8 + 2);
    if (lVar6 != 0) {
      func_0x000107c2b320();
      puVar5[2] = lVar6;
      if (lVar6 == 0) {
        return (long *)0x0;
      }
    }
    *(undefined4 *)(puVar5 + 3) = puVar8[4];
    uVar4 = *(undefined8 *)(puVar8 + 6);
    puVar5[5] = *(undefined8 *)(puVar8 + 8);
    puVar5[4] = uVar4;
    *(undefined4 *)(puVar5 + 6) = puVar8[10];
    if (*(long *)(puVar8 + 0xe) != 0) {
      FUN_1001e33e0(puVar5[8]);
      lVar6 = *(long *)(puVar8 + 0xe);
      FUN_1002039d0(lVar6,*(undefined8 *)(puVar8 + 0x10));
      puVar5[8] = lVar6;
      if (lVar6 == 0) {
        return (long *)0x0;
      }
      puVar5[9] = *(undefined8 *)(puVar8 + 0x10);
    }
    plVar2 = (long *)0x1;
  }
  return plVar2;
}



/* Entry: 100225224; end: 100225297;  */

long * FUN_100225224(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x38), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    uVar1 = 0x7d;
    uVar2 = 0xfb;
  }
  else {
    if ((int)param_1[4] == 0x10) {
                    /* WARNING: Could not recover jumptable at 0x000100225250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return param_1;
    }
    uVar1 = 0x7e;
    uVar2 = 0xff;
  }
  FUN_1004d2c58(6,0,uVar1,&UNK_10f6c60a7,uVar2);
  return (long *)0x0;
}



/* Entry: 100225298; end: 100225413;  */

/* WARNING: Removing unreachable block (ram,0x000100736ff8) */

long * FUN_100225298(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4,ulong param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  byte bVar10;
  code *pcVar11;
  byte *pbVar12;
  long *plVar13;
  long *plVar14;
  ulong *puVar15;
  ulong uVar16;
  int iStack_6c;
  ulong uStack_68;
  ulong in_stack_ffffffffffffffa8;
  
  plVar13 = *(long **)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x10);
  plVar14 = *(long **)(lVar2 + 8);
  piVar7 = (int *)plVar13[3];
  if (piVar7 == (int *)0x0) {
    if ((*(long *)(lVar2 + 0x10) == 0) ||
       (pcVar11 = *(code **)(*(long *)(lVar2 + 0x10) + 0x60), pcVar11 == (code *)0x0)) {
      lVar2 = 0;
    }
    else {
      (*pcVar11)();
      lVar2 = (long)(int)lVar2;
    }
    plVar3 = plVar13;
    func_0x000107c2b2e4(plVar13,param_1);
    if ((int)plVar3 == 0) {
      return plVar3;
    }
    func_0x0001002255a8(plVar14,&stack0xffffffffffffffa8,plVar13[6],lVar2,param_2,param_3,
                        (int)plVar13[2]);
    if ((int)plVar14 == 0 || in_stack_ffffffffffffffa8 != param_5) {
      return (long *)0x0;
    }
    if (param_5 == 0) {
      return (long *)0x1;
    }
    bVar10 = 0;
    pbVar12 = (byte *)plVar13[6];
    do {
      bVar10 = *pbVar12 ^ *param_4 | bVar10;
      param_5 = param_5 - 1;
      pbVar12 = pbVar12 + 1;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
    return (long *)(ulong)(bVar10 == 0);
  }
  if ((int)plVar13[2] != 6) {
    if ((int)plVar13[2] != 1) {
      return (long *)0x0;
    }
    iVar1 = *piVar7;
    lVar2 = plVar14[1];
    if ((lVar2 == 0) || (plVar14[2] == 0)) {
      uVar6 = 0x90;
      uVar9 = 0x259;
LAB_10073705c:
      FUN_1004d2c58(4,0,uVar6,&UNK_10f6c73f8,uVar9);
      return (long *)0x0;
    }
    if (*(code **)(*plVar14 + 0x20) == (code *)0x0) {
      FUN_100202834();
      plVar13 = (long *)(ulong)((int)lVar2 + 7U >> 3);
    }
    else {
      plVar13 = plVar14;
      (**(code **)(*plVar14 + 0x20))();
    }
    iStack_6c = 0;
    if ((iVar1 == 0x72) && (param_5 != 0x24)) {
      uVar6 = 0x7d;
      uVar9 = 0x265;
      goto LAB_10073705c;
    }
    uVar16 = (ulong)plVar13 & 0xffffffff;
    puVar4 = (ulong *)(uVar16 + 8);
    func_0x000107c610a0();
    if (puVar4 == (ulong *)0x0) {
      uVar6 = 0x41;
      uVar9 = 0x26b;
      goto LAB_10073705c;
    }
    *puVar4 = uVar16;
    func_0x0001002255a8(plVar14,&uStack_68,puVar4 + 1,uVar16,param_2,param_3,1);
    if ((int)plVar14 != 0) {
      puVar5 = &stack0xffffffffffffffa8;
      FUN_100738404(puVar5,&stack0xffffffffffffffa0,&iStack_6c,iVar1,param_4,param_5);
      if ((int)puVar5 != 0) {
        if (uStack_68 == 0) {
          plVar14 = (long *)0x1;
          goto LAB_100737028;
        }
        FUN_1004d2c58(4,0,0x69,&UNK_10f6c73f8,0x27a);
      }
    }
    plVar14 = (long *)0x0;
LAB_100737028:
    FUN_1001e33e0(puVar4 + 1);
    if (iStack_6c != 0) {
      FUN_1001e33e0(0);
      return plVar14;
    }
    return plVar14;
  }
  lVar8 = plVar13[4];
  lVar2 = plVar13[5];
  if (param_5 != (uint)piVar7[1]) {
    uVar6 = 0x7d;
    uVar9 = 0x293;
LAB_100225514:
    FUN_1004d2c58(4,0,uVar6,&UNK_10f6c73f8,uVar9);
    return (long *)0x0;
  }
  if (*(code **)(*plVar14 + 0x20) == (code *)0x0) {
    iVar1 = (int)plVar14[1];
    FUN_100202834();
    plVar13 = (long *)(ulong)(iVar1 + 7U >> 3);
  }
  else {
    plVar13 = plVar14;
    (**(code **)(*plVar14 + 0x20))();
  }
  uVar16 = (ulong)plVar13 & 0xffffffff;
  puVar4 = (ulong *)(uVar16 + 8);
  uStack_68 = uVar16;
  func_0x000107c610a0();
  if (puVar4 == (ulong *)0x0) {
    uVar6 = 0x41;
    uVar9 = 0x29a;
    goto LAB_100225514;
  }
  puVar15 = puVar4 + 1;
  *puVar4 = uVar16;
  plVar13 = plVar14;
  func_0x0001002255a8(plVar14,&uStack_68,puVar15,uVar16,param_2,param_3,3);
  uVar16 = uStack_68;
  if ((int)plVar13 != 0) {
    if (*(code **)(*plVar14 + 0x20) == (code *)0x0) {
      iVar1 = (int)plVar14[1];
      FUN_100202834();
      plVar13 = (long *)(ulong)(iVar1 + 7U >> 3);
    }
    else {
      plVar13 = plVar14;
      (**(code **)(*plVar14 + 0x20))();
    }
    if (uVar16 == ((ulong)plVar13 & 0xffffffff)) {
      FUN_1002286f8(plVar14,param_4,piVar7,lVar8,puVar15,(int)lVar2);
      goto LAB_10022557c;
    }
    FUN_1004d2c58(4,0,0x44,&UNK_10f6c73f8,0x2a4);
  }
  plVar14 = (long *)0x0;
LAB_10022557c:
  FUN_1001e33e0(puVar15);
  return plVar14;
}



/* Entry: 100225414; end: 100225873;  */

long * FUN_100225414(long *param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uStack_68;
  
  if (param_3 != *(uint *)(param_4 + 4)) {
    uVar4 = 0x7d;
    uVar5 = 0x293;
LAB_100225514:
    FUN_1004d2c58(4,0,uVar4,&UNK_10f6c73f8,uVar5);
    return (long *)0x0;
  }
  if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
    iVar1 = (int)param_1[1];
    FUN_100202834();
    plVar2 = (long *)(ulong)(iVar1 + 7U >> 3);
  }
  else {
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x20))();
  }
  uVar7 = (ulong)plVar2 & 0xffffffff;
  puVar3 = (ulong *)(uVar7 + 8);
  uStack_68 = uVar7;
  func_0x000107c610a0();
  if (puVar3 == (ulong *)0x0) {
    uVar4 = 0x41;
    uVar5 = 0x29a;
    goto LAB_100225514;
  }
  puVar6 = puVar3 + 1;
  *puVar3 = uVar7;
  plVar2 = param_1;
  func_0x0001002255a8(param_1,&uStack_68,puVar6,uVar7,param_7,param_8,3);
  uVar7 = uStack_68;
  if ((int)plVar2 != 0) {
    if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
      iVar1 = (int)param_1[1];
      FUN_100202834();
      plVar2 = (long *)(ulong)(iVar1 + 7U >> 3);
    }
    else {
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x20))();
    }
    if (uVar7 == ((ulong)plVar2 & 0xffffffff)) {
      FUN_1002286f8(param_1,param_2,param_4,param_5,puVar6,param_6);
      goto LAB_10022557c;
    }
    FUN_1004d2c58(4,0,0x44,&UNK_10f6c73f8,0x2a4);
  }
  param_1 = (long *)0x0;
LAB_10022557c:
  FUN_1001e33e0(puVar6);
  return param_1;
}



/* Entry: 100225874; end: 1002258cf;  */

undefined8 * FUN_100225874(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x30;
    puVar1[4] = 0;
    puVar1[3] = 0;
    *(undefined8 *)((long)puVar1 + 0x2a) = 0;
    *(undefined8 *)((long)puVar1 + 0x22) = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    return puVar1 + 1;
  }
  FUN_1004d2c58(3,0,0x41,&UNK_10f6c6725,0x6f);
  return (undefined8 *)0x0;
}



/* Entry: 1002258d0; end: 100225973;  */

void FUN_1002258d0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (uVar4 == *(ulong *)(param_1 + 0x18)) {
    uVar1 = 0x20;
    if (uVar4 != 0) {
      uVar1 = uVar4 * 3 >> 1;
    }
    if (uVar4 < uVar1 && uVar1 >> 0x3d == 0) {
      lVar3 = *(long *)(param_1 + 8);
      FUN_1001e43fc(lVar3,uVar1 << 3);
      if (lVar3 != 0) {
        *(long *)(param_1 + 8) = lVar3;
        *(ulong *)(param_1 + 0x18) = uVar1;
        uVar4 = *(ulong *)(param_1 + 0x10);
        goto LAB_100225948;
      }
    }
    *(undefined2 *)(param_1 + 0x28) = 0x101;
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
LAB_100225948:
    *(undefined8 *)(lVar3 + uVar4 * 8) = uVar2;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  }
  return;
}



/* Entry: 100225974; end: 100225a87;  */

long FUN_100225974(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  if ((char)param_1[5] != '\0') {
    if (*(char *)((long)param_1 + 0x29) != '\0') {
      FUN_1004d2c58(3,0,0x74,&UNK_10f6c6725,0x9c);
      *(undefined1 *)((long)param_1 + 0x29) = 0;
      return 0;
    }
    return 0;
  }
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
    FUN_1001e2bf4();
    *param_1 = (long)plVar1;
    if (plVar1 == (long *)0x0) {
      FUN_1004d2c58(3,0,0x41,&UNK_10f6c6725,0xa5);
      goto LAB_100225a70;
    }
  }
  lVar4 = param_1[4];
  if (lVar4 == *plVar1) {
    FUN_10020254c();
    if (plVar1 != (long *)0x0) {
      puVar2 = (undefined8 *)*param_1;
      func_0x0001001e2c8c(puVar2,plVar1,*puVar2);
      if (puVar2 != (undefined8 *)0x0) {
        plVar1 = (long *)*param_1;
        lVar4 = param_1[4];
        goto LAB_100225a08;
      }
    }
    FUN_1004d2c58(3,0,0x74,&UNK_10f6c6725,0xae);
    FUN_10021f3c8(plVar1);
LAB_100225a70:
    *(undefined1 *)(param_1 + 5) = 1;
    return 0;
  }
LAB_100225a08:
  lVar3 = *(long *)(plVar1[1] + lVar4 * 8);
  *(undefined4 *)(lVar3 + 0x10) = 0;
  *(undefined4 *)(lVar3 + 8) = 0;
  param_1[4] = lVar4 + 1;
  return lVar3;
}



/* Entry: 100225a88; end: 100225b6f;  */

ulong FUN_100225a88(ulong *param_1,ulong param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  
  uVar3 = param_2;
  if (param_4 <= param_2) {
    uVar3 = param_4;
  }
  if (uVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    puVar4 = param_1;
    puVar6 = param_3;
    do {
      uVar7 = *puVar4;
      uVar1 = uVar7 - *puVar6;
      uVar7 = (long)((uVar1 ^ uVar7 | *puVar6 ^ uVar7) ^ uVar7) >> 0x3f;
      uVar2 = -(ulong)(uVar1 != 0) & ((uVar7 ^ 0xffffffffffffffff) & 1 | uVar7) |
              -(ulong)(uVar1 == 0) & uVar2;
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar3 != 0);
  }
  lVar5 = param_2 - param_4;
  if (param_2 < param_4) {
    uVar3 = 0;
    lVar5 = param_4 - param_2;
    puVar4 = param_3 + param_2;
    do {
      uVar3 = *puVar4 | uVar3;
      lVar5 = lVar5 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
    uVar2 = (ulong)(-(uint)(uVar3 != 0) | -(uint)(uVar3 == 0) & (uint)uVar2);
  }
  else if (param_4 < param_2) {
    uVar3 = 0;
    puVar4 = param_1 + param_4;
    do {
      uVar3 = *puVar4 | uVar3;
      lVar5 = lVar5 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
    return (ulong)(-(uint)(uVar3 != 0) & 1 | -(uint)(uVar3 == 0) & (uint)uVar2);
  }
  return uVar2;
}



/* Entry: 100225b70; end: 100225c17;  */

undefined8 * FUN_100225b70(long *param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar2 = param_2;
  puVar4 = param_2;
  func_0x000107c61288();
  if ((int)puVar2 == 0) {
    lVar7 = *param_1;
    puVar2 = param_2;
    func_0x000107c6128c();
    if ((int)puVar2 == 0) {
      if (lVar7 != 0) {
        return (undefined8 *)0x1;
      }
      puVar2 = param_2;
      func_0x000107c61290();
      if ((int)puVar2 == 0) {
        if (*param_1 == 0) {
          FUN_100225c18();
          *param_1 = param_3;
          puVar6 = (undefined8 *)(ulong)(param_3 != 0);
          puVar4 = param_4;
        }
        else {
          puVar6 = (undefined8 *)0x1;
        }
        func_0x000107c6128c();
        puVar2 = param_2;
        if ((int)param_2 == 0) {
          return puVar6;
        }
      }
    }
  }
  func_0x000107c60ebc();
  puVar6 = (undefined8 *)0x48;
  func_0x000107c610a0();
  if (puVar6 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = 0x40;
    puVar5 = puVar6 + 1;
    puVar6[2] = 0;
    *puVar5 = 0;
    puVar6[4] = 0;
    puVar6[3] = 0;
    puVar6[6] = 0;
    puVar6[5] = 0;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar3 = puVar5;
    FUN_100225d14(puVar5,puVar2);
    if ((int)puVar3 != 0) {
      if (puVar4 == (undefined8 *)0x0) {
        FUN_100225874();
        puVar2 = puVar3;
        if (puVar3 == (undefined8 *)0x0) goto LAB_100225cf4;
      }
      else {
        puVar3 = puVar4;
        puVar2 = (undefined8 *)0x0;
      }
      *(undefined4 *)(puVar6 + 3) = 0;
      *(undefined4 *)(puVar6 + 2) = 0;
      puVar4 = puVar5;
      FUN_100225ee0(puVar5,*(int *)(puVar6 + 5) << 7);
      if ((int)puVar4 != 0) {
        iVar1 = 0;
        FUN_100225f7c(0,puVar5,puVar5,puVar6 + 4,puVar3);
        if (iVar1 != 0) {
          puVar4 = puVar5;
          FUN_1002269c4(puVar5,(long)*(int *)(puVar6 + 5));
          FUN_100226a68(puVar2);
          if ((int)puVar4 != 0) {
            return puVar5;
          }
          goto LAB_100225cf4;
        }
      }
      FUN_100226a68(puVar2);
    }
  }
LAB_100225cf4:
  func_0x00010021f414(puVar5);
  return (undefined8 *)0x0;
}



/* Entry: 100225c18; end: 100225d13;  */

undefined8 * FUN_100225c18(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar2 = (undefined8 *)0x48;
  func_0x000107c610a0();
  if (puVar2 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = 0x40;
    puVar5 = puVar2 + 1;
    puVar2[2] = 0;
    *puVar5 = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    puVar2[8] = 0;
    puVar2[7] = 0;
    puVar3 = puVar5;
    FUN_100225d14(puVar5,param_1);
    if ((int)puVar3 != 0) {
      if (param_2 == (undefined8 *)0x0) {
        FUN_100225874();
        puVar6 = puVar3;
        if (puVar3 == (undefined8 *)0x0) goto LAB_100225cf4;
      }
      else {
        puVar3 = param_2;
        puVar6 = (undefined8 *)0x0;
      }
      *(undefined4 *)(puVar2 + 3) = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      puVar4 = puVar5;
      FUN_100225ee0(puVar5,*(int *)(puVar2 + 5) << 7);
      if ((int)puVar4 != 0) {
        iVar1 = 0;
        FUN_100225f7c(0,puVar5,puVar5,puVar2 + 4,puVar3);
        if (iVar1 != 0) {
          puVar3 = puVar5;
          FUN_1002269c4(puVar5,(long)*(int *)(puVar2 + 5));
          FUN_100226a68(puVar6);
          if ((int)puVar3 != 0) {
            return puVar5;
          }
          goto LAB_100225cf4;
        }
      }
      FUN_100226a68(puVar6);
    }
  }
LAB_100225cf4:
  func_0x00010021f414(puVar5);
  return (undefined8 *)0x0;
}



/* Entry: 100225d14; end: 100225edf;  */

undefined8 FUN_100225d14(long param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 != 0) {
    lVar10 = 0;
    uVar9 = 0;
    do {
      uVar9 = *(ulong *)((byte *)*param_2 + lVar10 * 8) | uVar9;
      lVar10 = lVar10 + 1;
    } while (iVar2 != lVar10);
    if (uVar9 != 0) {
      if ((0 < iVar2) && ((*(byte *)*param_2 & 1) != 0)) {
        if (*(int *)(param_2 + 2) != 0) {
          uVar5 = 0x6d;
          uVar6 = 0xad;
          goto LAB_100225d94;
        }
        lVar10 = param_1 + 0x18;
        func_0x000100225e74();
        if (lVar10 == 0) {
          uVar5 = 0x44;
          uVar6 = 0xb3;
          goto LAB_100225d94;
        }
        uVar7 = *(uint *)(param_1 + 0x20);
        if ((int)uVar7 < 1) {
          if (uVar7 != 0) goto LAB_100225e30;
        }
        else {
          do {
            if (*(long *)(*(long *)(param_1 + 0x18) + -8 + (ulong)uVar7 * 8) != 0) {
              *(uint *)(param_1 + 0x20) = uVar7;
              goto LAB_100225e30;
            }
            uVar4 = uVar7 - 1;
            bVar1 = 0 < (int)uVar7;
            uVar7 = uVar4;
          } while (uVar4 != 0 && bVar1);
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        *(undefined4 *)(param_1 + 0x28) = 0;
LAB_100225e30:
        uVar8 = 0;
        uVar9 = 1;
        lVar10 = 0x40;
        do {
          uVar3 = uVar9 & 1;
          uVar11 = **(ulong **)(param_1 + 0x18) & -uVar3;
          uVar9 = (uVar11 & uVar9) + ((uVar11 ^ uVar9) >> 1);
          uVar8 = -uVar3 & 0x8000000000000000 | uVar8 >> 1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        *(ulong *)(param_1 + 0x30) = uVar8;
        *(undefined8 *)(param_1 + 0x38) = 0;
        return 1;
      }
      uVar5 = 0x68;
      uVar6 = 0xa9;
      goto LAB_100225d94;
    }
  }
  uVar5 = 0x69;
  uVar6 = 0xa5;
LAB_100225d94:
  FUN_1004d2c58(3,0,uVar5,&UNK_10f6c6a15,uVar6);
  return 0;
}



/* Entry: 100225ee0; end: 100225f7b;  */

long * FUN_100225ee0(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
  if ((int)param_2 < 0) {
    return (long *)0x0;
  }
  uVar2 = param_2 >> 6;
  if ((int)param_1[1] <= (int)(param_2 >> 6)) {
    plVar3 = param_1;
    FUN_100202744(param_1,uVar2 + 1);
    if ((int)plVar3 == 0) {
      return plVar3;
    }
    iVar1 = (int)param_1[1];
    if (iVar1 <= (int)uVar2) {
      func_0x000107c60ee4(*param_1 + (long)iVar1 * 8,(ulong)(uVar2 - iVar1) * 8 + 8);
    }
    *(uint *)(param_1 + 1) = uVar2 + 1;
  }
  *(ulong *)(*param_1 + (ulong)uVar2 * 8) =
       *(ulong *)(*param_1 + (ulong)uVar2 * 8) | 1L << (param_2 & 0x3f);
  return (long *)0x1;
}



/* Entry: 100225f7c; end: 100226517;  */

undefined8 FUN_100225f7c(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong *puVar8;
  bool bVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  ulong *puVar25;
  int iVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong *puVar31;
  
  uVar19 = (ulong)*(uint *)(param_3 + 1);
  if (0 < (int)*(uint *)(param_3 + 1)) {
    do {
      if (*(long *)(*param_3 + -8 + uVar19 * 8) != 0) goto LAB_100225fd4;
      iVar17 = (int)uVar19;
      uVar18 = iVar17 - 1;
      uVar19 = (ulong)uVar18;
    } while (uVar18 != 0 && 0 < iVar17);
    uVar19 = 0;
  }
LAB_100225fd4:
  uVar18 = *(uint *)(param_4 + 1);
  uVar23 = uVar18;
  if (0 < (int)uVar18) {
    do {
      if (*(long *)(*param_4 + -8 + (ulong)uVar23 * 8) != 0) goto LAB_100226004;
      uVar4 = uVar23 - 1;
      bVar9 = 0 < (int)uVar23;
      uVar23 = uVar4;
    } while (uVar4 != 0 && bVar9);
    uVar23 = 0;
  }
LAB_100226004:
  if (((0 < (int)uVar19) && (*(long *)(*param_3 + uVar19 * 8 + -8) == 0)) ||
     ((0 < (int)uVar23 && (*(long *)(*param_4 + (ulong)uVar23 * 8 + -8) == 0)))) {
    uVar14 = 0x6f;
    uVar16 = 0xd4;
    goto LAB_100226180;
  }
  if (uVar18 != 0) {
    uVar19 = 0;
    lVar20 = (long)(int)uVar18;
    puVar25 = (ulong *)*param_4;
    do {
      uVar19 = *puVar25 | uVar19;
      lVar20 = lVar20 + -1;
      puVar25 = puVar25 + 1;
    } while (lVar20 != 0);
    if (uVar19 != 0) {
      FUN_1002258d0(param_5);
      plVar10 = param_5;
      FUN_100225974();
      plVar11 = param_5;
      FUN_100225974();
      plVar12 = param_5;
      FUN_100225974();
      if (param_1 == (long *)0x0) {
        param_1 = param_5;
        FUN_100225974();
      }
      if ((plVar12 == (long *)0x0) || (param_1 == (long *)0x0)) goto LAB_1002264c0;
      plVar13 = param_4;
      FUN_100202834();
      uVar18 = (uint)plVar13 & 0x3f;
      plVar13 = plVar12;
      FUN_100226518(plVar12,param_4,0x40 - uVar18);
      if ((int)plVar13 == 0) goto LAB_1002264c0;
      if (0 < (int)*(uint *)(plVar12 + 1)) {
        uVar23 = *(uint *)(plVar12 + 1);
        do {
          if (*(long *)(*plVar12 + -8 + (ulong)uVar23 * 8) != 0) goto LAB_1002260f8;
          uVar4 = uVar23 - 1;
          bVar9 = 0 < (int)uVar23;
          uVar23 = uVar4;
        } while (uVar4 != 0 && bVar9);
        uVar23 = 0;
LAB_1002260f8:
        *(uint *)(plVar12 + 1) = uVar23;
      }
      *(undefined4 *)(plVar12 + 2) = 0;
      plVar13 = plVar11;
      FUN_100226518(plVar11,param_3);
      if ((int)plVar13 == 0) goto LAB_1002264c0;
      uVar23 = *(uint *)(plVar11 + 1);
      uVar19 = (ulong)uVar23;
      if ((int)uVar23 < 1) {
        if (uVar23 == 0) goto LAB_1002261b0;
      }
      else {
        do {
          iVar17 = (int)uVar19;
          if (*(long *)(*plVar11 + -8 + uVar19 * 8) != 0) {
            *(int *)(plVar11 + 1) = iVar17;
            goto LAB_1002261bc;
          }
          uVar19 = (ulong)(iVar17 - 1U);
        } while (iVar17 - 1U != 0 && 0 < iVar17);
        *(undefined4 *)(plVar11 + 1) = 0;
LAB_1002261b0:
        uVar19 = 0;
      }
LAB_1002261bc:
      *(undefined4 *)(plVar11 + 2) = 0;
      if ((int)plVar12[1] + 1 < (int)uVar19) {
        plVar13 = plVar11;
        FUN_100202744(plVar11,(long)((int)uVar19 + 1));
        if ((int)plVar13 == 0) goto LAB_1002264c0;
        lVar20 = *plVar11;
        lVar27 = plVar11[1];
        *(undefined8 *)(lVar20 + (long)(int)lVar27 * 8) = 0;
        iVar17 = (int)lVar27 + 1;
      }
      else {
        plVar13 = plVar11;
        FUN_100202744(plVar11,(long)(int)plVar12[1] + 2);
        if ((int)plVar13 == 0) goto LAB_1002264c0;
        iVar1 = (int)plVar11[1];
        iVar17 = (int)plVar12[1] + 2;
        lVar20 = *plVar11;
        if (iVar1 < iVar17) {
          func_0x000107c60ee4(lVar20 + (long)iVar1 * 8,
                              (ulong)(((int)plVar12[1] - iVar1) + 1) * 8 + 8);
        }
      }
      *(int *)(plVar11 + 1) = iVar17;
      iVar1 = (int)plVar12[1];
      lVar21 = (long)iVar1;
      iVar3 = iVar17 - iVar1;
      lVar27 = *plVar12 + lVar21 * 8;
      if (iVar1 == 1) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(ulong *)(lVar27 + -0x10);
      }
      uVar29 = *(ulong *)(lVar27 + -8);
      uVar23 = *(uint *)(param_3 + 2);
      *(uint *)(param_1 + 2) = *(uint *)(param_4 + 2) ^ uVar23;
      plVar13 = param_1;
      FUN_100202744(param_1,(long)(iVar3 + 1));
      if ((int)plVar13 == 0) goto LAB_1002264c0;
      iVar2 = iVar3 + -1;
      *(int *)(param_1 + 1) = iVar2;
      lVar27 = *param_1;
      plVar13 = plVar10;
      FUN_100202744();
      if ((int)plVar13 == 0) goto LAB_1002264c0;
      puVar25 = (ulong *)(lVar27 + (long)iVar2 * 8);
      if ((int)param_1[1] == 0) {
        *(undefined4 *)(param_1 + 2) = 0;
      }
      else {
        puVar25 = puVar25 + -1;
      }
      if (1 < iVar3) {
        iVar26 = 0;
        lVar27 = lVar20 + (long)iVar3 * 8;
        puVar8 = (ulong *)(lVar20 + (long)iVar17 * 8);
        do {
          puVar31 = puVar8 + -1;
          if (*puVar31 == uVar29) {
            uVar30 = 0xffffffffffffffff;
          }
          else {
            uVar28 = puVar8[-2];
            uVar30 = uVar28;
            func_0x000107c60e88(uVar28,*puVar31,uVar29,0);
            uVar28 = uVar28 - uVar29 * uVar30;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar30;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar19;
            uVar24 = uVar30 * uVar19;
            for (uVar22 = SUB168(auVar6 * auVar7,8);
                !CARRY8(uVar28,~uVar22) && !CARRY8(uVar28 + ~uVar22,(ulong)(uVar24 <= puVar8[-3]));
                uVar22 = uVar22 - bVar9) {
              uVar30 = uVar30 - 1;
              bVar9 = CARRY8(uVar28,uVar29);
              uVar28 = uVar28 + uVar29;
              if (bVar9) break;
              bVar9 = uVar24 < uVar19;
              uVar24 = uVar24 - uVar19;
            }
          }
          lVar20 = *plVar10;
          FUN_10022667c(lVar20,*plVar12,lVar21,uVar30);
          lVar15 = *plVar10;
          *(long *)(lVar15 + lVar21 * 8) = lVar20;
          lVar27 = lVar27 + -8;
          lVar20 = lVar27;
          func_0x00010022673c(lVar27,lVar27,lVar15,(long)(iVar1 + 1));
          if (lVar20 != 0) {
            uVar30 = uVar30 - 1;
            lVar20 = lVar27;
            FUN_100411698(lVar27,lVar27,*plVar12,lVar21);
            if (lVar20 != 0) {
              *puVar31 = *puVar31 + 1;
            }
          }
          *puVar25 = uVar30;
          iVar26 = iVar26 + 1;
          puVar25 = puVar25 + -1;
          puVar8 = puVar31;
        } while (iVar26 != iVar2);
      }
      uVar4 = *(uint *)(plVar11 + 1);
      if ((int)uVar4 < 1) {
        if (uVar4 == 0) goto LAB_10022644c;
      }
      else {
        do {
          if (*(long *)(*plVar11 + -8 + (ulong)uVar4 * 8) != 0) {
            *(uint *)(plVar11 + 1) = uVar4;
            goto LAB_100226458;
          }
          uVar5 = uVar4 - 1;
          bVar9 = 0 < (int)uVar4;
          uVar4 = uVar5;
        } while (uVar5 != 0 && bVar9);
        *(undefined4 *)(plVar11 + 1) = 0;
LAB_10022644c:
        *(undefined4 *)(plVar11 + 2) = 0;
      }
LAB_100226458:
      if (param_2 != (long *)0x0) {
        plVar10 = param_2;
        FUN_100226828(param_2,plVar11,0x80 - uVar18);
        if ((int)plVar10 == 0) {
LAB_1002264c0:
          if ((char)param_5[5] != '\0') {
            return 0;
          }
          lVar20 = param_5[2];
          param_5[2] = lVar20 + -1;
          param_5[4] = *(long *)(param_5[1] + (lVar20 + -1) * 8);
          return 0;
        }
        lVar20 = (long)(int)param_2[1];
        if ((int)param_2[1] != 0) {
          uVar19 = 0;
          puVar25 = (ulong *)*param_2;
          do {
            uVar19 = *puVar25 | uVar19;
            lVar20 = lVar20 + -1;
            puVar25 = puVar25 + 1;
          } while (lVar20 != 0);
          if (uVar19 != 0) {
            *(uint *)(param_2 + 2) = uVar23;
          }
        }
      }
      uVar18 = *(uint *)(param_1 + 1);
      if ((int)uVar18 < 1) {
        if (uVar18 != 0) goto LAB_1002264f4;
      }
      else {
        do {
          if (*(long *)(*param_1 + -8 + (ulong)uVar18 * 8) != 0) {
            *(uint *)(param_1 + 1) = uVar18;
            goto LAB_1002264f4;
          }
          uVar23 = uVar18 - 1;
          bVar9 = 0 < (int)uVar18;
          uVar18 = uVar23;
        } while (uVar23 != 0 && bVar9);
        *(undefined4 *)(param_1 + 1) = 0;
      }
      *(undefined4 *)(param_1 + 2) = 0;
LAB_1002264f4:
      if ((char)param_5[5] == '\0') {
        lVar20 = param_5[2];
        param_5[2] = lVar20 + -1;
        param_5[4] = *(long *)(param_5[1] + (lVar20 + -1) * 8);
      }
      return 1;
    }
  }
  uVar14 = 0x69;
  uVar16 = 0xd9;
LAB_100226180:
  FUN_1004d2c58(3,0,uVar14,&UNK_10f6c679f,uVar16);
  return 0;
}



/* Entry: 100226518; end: 10022667b;  */

void FUN_100226518(long *param_1,long *param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  
  uVar5 = (uint)param_3;
  if ((int)uVar5 < 0) {
    FUN_1004d2c58(3,0,0x6d,&UNK_10f6c6c09,0x49);
  }
  else {
    *(int *)(param_1 + 2) = (int)param_2[2];
    plVar3 = param_1;
    FUN_100202744(param_1,(long)(int)((int)param_2[1] + (uVar5 >> 6) + 1));
    if ((int)plVar3 != 0) {
      uVar13 = param_3 >> 6 & 0x3ffffff;
      lVar7 = *param_2;
      lVar4 = *param_1;
      uVar2 = *(uint *)(param_2 + 1);
      uVar10 = (ulong)uVar2;
      iVar12 = (int)uVar13;
      iVar6 = uVar2 + iVar12;
      *(undefined8 *)(lVar4 + (long)iVar6 * 8) = 0;
      if ((param_3 & 0x3f) == 0) {
        if (0 < (int)uVar2) {
          do {
            uVar11 = uVar10 - 1;
            *(undefined8 *)(lVar4 + uVar13 * 8 + uVar11 * 8) = *(undefined8 *)(lVar7 + uVar11 * 8);
            bVar1 = 1 < uVar10;
            uVar10 = uVar11;
          } while (bVar1);
        }
      }
      else if (0 < (int)uVar2) {
        puVar9 = (ulong *)(lVar4 + uVar10 * 8 + uVar13 * 8);
        uVar11 = *puVar9;
        uVar13 = uVar10 + 1;
        puVar8 = (ulong *)(lVar7 + uVar10 * 8);
        do {
          puVar8 = puVar8 + -1;
          uVar10 = *puVar8;
          *puVar9 = uVar11 | uVar10 >> ((ulong)(0x40 - (uVar5 & 0x3f)) & 0x3f);
          uVar11 = uVar10 << (uVar5 & 0x3f);
          puVar9 = puVar9 + -1;
          *puVar9 = uVar11;
          uVar13 = uVar13 - 1;
        } while (1 < uVar13);
      }
      if (0x3f < uVar5) {
        func_0x000107c60ee4(lVar4,iVar12 << 3);
        iVar6 = (int)param_2[1] + iVar12;
      }
      uVar5 = iVar6 + 1;
      *(uint *)(param_1 + 1) = uVar5;
      if (iVar6 < 0) {
        if (uVar5 != 0) {
          return;
        }
      }
      else {
        do {
          if (*(long *)(*param_1 + -8 + (ulong)uVar5 * 8) != 0) {
            *(uint *)(param_1 + 1) = uVar5;
            return;
          }
          uVar2 = uVar5 - 1;
          bVar1 = 0 < (int)uVar5;
          uVar5 = uVar2;
        } while (uVar2 != 0 && bVar1);
        *(undefined4 *)(param_1 + 1) = 0;
      }
      *(undefined4 *)(param_1 + 2) = 0;
    }
  }
  return;
}



/* Entry: 10022667c; end: 100226827;  */

ulong FUN_10022667c(long *param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (param_3 == 0) {
    uVar13 = 0;
  }
  else {
    if (param_3 < 4) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = *param_2;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = param_4;
        uVar13 = SUB168(auVar1 * auVar6,8);
        uVar12 = *param_2 * param_4;
        if (CARRY8(uVar12,uVar11)) {
          uVar13 = uVar13 + 1;
        }
        *param_1 = uVar12 + uVar11;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = param_2[1];
        auVar7._8_8_ = 0;
        auVar7._0_8_ = param_4;
        uVar11 = SUB168(auVar2 * auVar7,8);
        uVar12 = param_2[1] * param_4;
        if (CARRY8(uVar12,uVar13)) {
          uVar11 = uVar11 + 1;
        }
        param_1[1] = uVar12 + uVar13;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = param_2[2];
        auVar8._8_8_ = 0;
        auVar8._0_8_ = param_4;
        uVar13 = SUB168(auVar3 * auVar8,8);
        uVar12 = param_2[2] * param_4;
        if (CARRY8(uVar12,uVar11)) {
          uVar13 = uVar13 + 1;
        }
        param_1[2] = uVar12 + uVar11;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_2[3];
        auVar9._8_8_ = 0;
        auVar9._0_8_ = param_4;
        uVar11 = SUB168(auVar4 * auVar9,8);
        uVar12 = param_2[3] * param_4;
        if (CARRY8(uVar12,uVar13)) {
          uVar11 = uVar11 + 1;
        }
        param_1[3] = uVar12 + uVar13;
        param_2 = param_2 + 4;
        param_1 = param_1 + 4;
        param_3 = param_3 - 4;
      } while (3 < param_3);
      if (param_3 == 0) {
        return uVar11;
      }
    }
    do {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_4;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *param_2;
      uVar13 = SUB168(auVar5 * auVar10,8);
      uVar12 = param_4 * *param_2;
      if (CARRY8(uVar12,uVar11)) {
        uVar13 = uVar13 + 1;
      }
      *param_1 = uVar12 + uVar11;
      param_3 = param_3 - 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      uVar11 = uVar13;
    } while (param_3 != 0);
  }
  return uVar13;
}



/* Entry: 100226828; end: 1002269c3;  */

void FUN_100226828(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  
  if ((int)param_3 < 0) {
    FUN_1004d2c58(3,0,0x6d,&UNK_10f6c6c09,0x9e);
  }
  else {
    plVar3 = param_1;
    FUN_100202744(param_1,(long)*(int *)(param_2 + 1));
    if ((int)plVar3 != 0) {
      func_0x0001002268e8(*param_1,*param_2,param_3,(long)*(int *)(param_2 + 1));
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      uVar4 = *(uint *)(param_2 + 1);
      *(uint *)(param_1 + 1) = uVar4;
      if ((int)uVar4 < 1) {
        if (uVar4 != 0) {
          return;
        }
      }
      else {
        do {
          if (*(long *)(*param_1 + -8 + (ulong)uVar4 * 8) != 0) {
            *(uint *)(param_1 + 1) = uVar4;
            return;
          }
          uVar2 = uVar4 - 1;
          bVar1 = 0 < (int)uVar4;
          uVar4 = uVar2;
        } while (uVar2 != 0 && bVar1);
        *(undefined4 *)(param_1 + 1) = 0;
      }
      *(undefined4 *)(param_1 + 2) = 0;
    }
  }
  return;
}



/* Entry: 1002269c4; end: 100226a67;  */

void FUN_1002269c4(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  
  lVar2 = (long)(int)param_1[1] - param_2;
  if ((ulong)(long)(int)param_1[1] < param_2 || lVar2 == 0) {
    plVar1 = param_1;
    FUN_100202744(param_1,param_2);
    if ((int)plVar1 == 0) {
      return;
    }
    if ((param_2 - (long)(int)param_1[1] & 0x1fffffffffffffff) != 0) {
      func_0x000107c60ee4(*param_1 + (long)(int)param_1[1] * 8);
    }
  }
  else {
    uVar3 = 0;
    puVar4 = (ulong *)(*param_1 + param_2 * 8);
    do {
      uVar3 = *puVar4 | uVar3;
      lVar2 = lVar2 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar2 != 0);
    if (uVar3 != 0) {
      FUN_1004d2c58(3,0,0x66,&UNK_10f6c66ac,0x199);
      return;
    }
  }
  *(int *)(param_1 + 1) = (int)param_2;
  return;
}



/* Entry: 100226a68; end: 100226ae3;  */

void FUN_100226a68(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = (ulong *)*param_1;
  if (puVar3 != (ulong *)0x0) {
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      uVar4 = 0;
      do {
        if (*(long *)(puVar3[1] + uVar4 * 8) != 0) {
          FUN_10021f3c8();
          uVar1 = *puVar3;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    FUN_1001e33e0(puVar3[1]);
    FUN_1001e33e0(puVar3);
  }
  FUN_1001e33e0(param_1[1]);
  if (param_1 != (undefined8 *)0x0) {
    plVar2 = param_1 + -1;
    if (*plVar2 + 8 != 0) {
      func_0x000107c60ee4(plVar2,*plVar2 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar2);
    return;
  }
  return;
}



/* Entry: 100226ae4; end: 100226f43;  */

/* WARNING: Type propagation algorithm not settling */

ulong * FUN_100226ae4(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                     ulong *param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined *puVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  ulong *puVar20;
  uint uVar21;
  ulong uVar22;
  ulong **ppuVar23;
  ulong *apuStack_170 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = (uint)param_4[1];
  if ((int)uVar14 < 1) {
LAB_100226b30:
    puVar9 = (ulong *)0x68;
    puVar12 = (ulong *)0x24d;
LAB_100226bbc:
    puVar11 = (ulong *)&UNK_10f6c6819;
    puVar8 = (ulong *)0x0;
    puVar4 = (ulong *)0x3;
    FUN_1004d2c58();
  }
  else {
    puVar20 = (ulong *)*param_4;
    uVar22 = *puVar20;
    if ((uVar22 & 1) == 0) goto LAB_100226b30;
    if ((int)param_4[2] != 0) {
      puVar9 = (ulong *)0x6d;
      puVar12 = (ulong *)0x251;
      goto LAB_100226bbc;
    }
    if ((int)param_2[2] != 0) {
LAB_100226ba4:
      puVar9 = (ulong *)0x6b;
      puVar12 = (ulong *)0x255;
      goto LAB_100226bbc;
    }
    iVar3 = (int)*param_2;
    puVar8 = (ulong *)(long)(int)param_2[1];
    puVar9 = puVar20;
    puVar11 = (ulong *)(ulong)uVar14;
    puVar12 = param_5;
    FUN_100225a88();
    if (-1 < iVar3) goto LAB_100226ba4;
    puVar4 = param_3;
    FUN_100202834();
    iVar3 = (int)puVar4;
    if (iVar3 != 0) {
      FUN_1002258d0(param_5);
      puVar5 = param_5;
      FUN_100225974();
      puVar6 = param_5;
      FUN_100225974();
      puVar4 = (ulong *)0x0;
      puVar20 = (ulong *)0x0;
      apuStack_170[0] = puVar6;
      if ((puVar5 != (ulong *)0x0) && (puVar6 != (ulong *)0x0)) {
        if (param_6 == (ulong *)0x0) {
          puVar8 = param_5;
          func_0x000107c2b378();
          puVar4 = param_4;
          if (param_4 == (ulong *)0x0) {
            puVar20 = (ulong *)0x0;
            goto LAB_100226f1c;
          }
        }
        else {
          puVar4 = (ulong *)0x0;
          param_4 = param_6;
        }
        if (iVar3 < 0x2a0) {
          if (iVar3 < 0xf0) {
            if (iVar3 < 0x50) {
              uVar14 = 3;
              if (iVar3 < 0x18) {
                uVar14 = 1;
              }
            }
            else {
              uVar14 = 4;
            }
          }
          else {
            uVar14 = 5;
          }
        }
        else {
          uVar14 = 6;
        }
        puVar20 = puVar6;
        puVar9 = param_4;
        puVar11 = param_4;
        puVar12 = param_5;
        FUN_100226f44();
        puVar8 = param_2;
        if ((int)puVar20 == 0) {
LAB_100226ef8:
          puVar20 = (ulong *)0x0;
        }
        else {
          if (1 < uVar14) {
            puVar20 = param_5;
            FUN_100225974();
            puVar8 = param_2;
            if ((puVar20 == (ulong *)0x0) ||
               (puVar7 = puVar20, puVar9 = puVar6, puVar11 = param_4, puVar12 = param_5,
               FUN_100226f44(), puVar8 = puVar6, (int)puVar7 == 0)) goto LAB_100226ef8;
            ppuVar23 = apuStack_170;
            uVar19 = 2;
            do {
              ppuVar23 = ppuVar23 + 1;
              puVar6 = param_5;
              FUN_100225974();
              *ppuVar23 = puVar6;
              if (puVar6 == (ulong *)0x0) goto LAB_100226ef8;
              puVar8 = ppuVar23[-1];
              puVar9 = puVar20;
              puVar11 = param_4;
              puVar12 = param_5;
              FUN_100226f44();
              if ((int)puVar6 == 0) goto LAB_100226ef8;
              uVar1 = uVar19 >> (ulong)(uVar14 - 1 & 0x1f);
              uVar19 = uVar19 + 1;
            } while (uVar1 == 0);
          }
          bVar2 = false;
          uVar19 = iVar3 - 1;
          uVar1 = uVar19;
joined_r0x000100226db8:
          uVar1 = uVar1 - 1;
          if ((int)uVar19 < 0) {
LAB_100226ddc:
            if ((bVar2) &&
               (puVar20 = puVar5, puVar8 = puVar5, puVar9 = puVar5, puVar11 = param_4,
               puVar12 = param_5, FUN_100226f44(), (int)puVar20 == 0)) goto LAB_100226ef8;
            if (uVar19 == 0) goto LAB_100226f00;
            uVar19 = uVar19 - 1;
            goto joined_r0x000100226db8;
          }
          if (((uint)param_3[1] <= uVar19 >> 6) ||
             ((*(ulong *)(*param_3 + (ulong)(uVar19 >> 6) * 8) >> ((ulong)uVar19 & 0x3f) & 1) == 0))
          goto LAB_100226ddc;
          if ((uVar14 < 2) || (uVar19 == 0)) {
            lVar18 = 0;
            uVar21 = 0;
          }
          else {
            uVar21 = 0;
            uVar16 = 1;
            uVar17 = 1;
            do {
              if (((-1 < (int)uVar1) && (uVar1 >> 6 < (uint)param_3[1])) &&
                 ((*(ulong *)(*param_3 + (ulong)(uVar1 >> 6) * 8) >> ((ulong)uVar1 & 0x3f) & 1) != 0
                 )) {
                uVar17 = uVar17 << (ulong)(uVar16 - uVar21 & 0x1f) | 1;
                uVar21 = uVar16;
              }
              if ((int)uVar19 <= (int)uVar16) break;
              uVar16 = uVar16 + 1;
              uVar1 = uVar1 - 1;
            } while (uVar16 < uVar14);
            lVar18 = (long)((ulong)uVar17 << 0x20) >> 0x21;
          }
          if (bVar2) {
            iVar3 = uVar21 + 1;
            do {
              puVar20 = puVar5;
              puVar8 = puVar5;
              puVar9 = puVar5;
              puVar11 = param_4;
              puVar12 = param_5;
              FUN_100226f44();
              if ((int)puVar20 == 0) goto LAB_100226ef8;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            puVar9 = apuStack_170[lVar18];
            puVar20 = puVar5;
            puVar8 = puVar5;
            puVar11 = param_4;
            puVar12 = param_5;
            FUN_100226f44();
            if ((int)puVar20 == 0) goto LAB_100226ef8;
          }
          else {
            puVar8 = apuStack_170[lVar18];
            puVar20 = puVar5;
            func_0x000100225e74();
            if (puVar20 == (ulong *)0x0) goto LAB_100226ef8;
          }
          if (uVar19 != uVar21) {
            uVar19 = uVar19 + ~uVar21;
            bVar2 = true;
            uVar1 = uVar19;
            goto joined_r0x000100226db8;
          }
LAB_100226f00:
          puVar11 = param_5;
          FUN_100228330(param_1);
          puVar8 = puVar5;
          puVar9 = param_4;
          puVar20 = param_1;
        }
      }
LAB_100226f1c:
      func_0x00010021f414();
      if ((char)param_5[5] == '\0') {
        uVar22 = param_5[2];
        param_5[2] = uVar22 - 1;
        param_5[4] = *(ulong *)(param_5[1] + (uVar22 - 1) * 8);
      }
      goto LAB_100226bc4;
    }
    uVar22 = uVar22 & 0xfffffffffffffffe;
    if (uVar14 != 1) {
      puVar15 = (undefined *)((long)(ulong)uVar14 + -1);
      do {
        puVar20 = puVar20 + 1;
        uVar22 = *puVar20 | uVar22;
        puVar15 = puVar15 + -1;
      } while (puVar15 != (undefined *)0x0);
    }
    if (uVar22 == 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      puVar20 = (ulong *)0x1;
      goto LAB_100226bc4;
    }
    puVar20 = (ulong *)0x1;
    puVar8 = (ulong *)0x1;
    puVar4 = param_1;
    FUN_100202744();
    if ((int)puVar4 != 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined8 *)*param_1 = 1;
      *(undefined4 *)(param_1 + 1) = 1;
      goto LAB_100226bc4;
    }
  }
  puVar20 = (ulong *)0x0;
LAB_100226bc4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar20;
  }
  func_0x000107c60e78();
  if (((int)puVar8[2] == 0) && ((int)puVar9[2] == 0)) {
    iVar3 = (int)puVar11[4];
    if (((iVar3 < 2) || ((int)puVar8[1] != iVar3)) || ((int)puVar9[1] != iVar3)) {
      FUN_1002258d0(puVar12);
      puVar5 = puVar12;
      FUN_100225974();
      puVar20 = puVar5;
      if (puVar5 != (ulong *)0x0) {
        if (puVar8 == puVar9) {
          func_0x000107c2b3b0();
          iVar3 = (int)puVar20;
        }
        else {
          func_0x000107c2b398();
          iVar3 = (int)puVar20;
        }
        if (iVar3 != 0) {
          FUN_1002283b8(puVar4,puVar5,puVar11);
          puVar20 = puVar4;
        }
      }
      if ((char)puVar12[5] != '\0') {
        return puVar20;
      }
      uVar22 = puVar12[2];
      puVar12[2] = uVar22 - 1;
      puVar12[4] = *(ulong *)(puVar12[1] + (uVar22 - 1) * 8);
      return puVar20;
    }
    puVar20 = puVar4;
    FUN_100202744(puVar4,iVar3);
    if ((int)puVar20 == 0) {
      return puVar20;
    }
    uVar22 = *puVar4;
    FUN_1002270c0(uVar22,*puVar8,*puVar9,puVar11[3],puVar11 + 6,iVar3);
    if ((int)uVar22 != 0) {
      *(undefined4 *)(puVar4 + 2) = 0;
      *(int *)(puVar4 + 1) = iVar3;
      return (ulong *)0x1;
    }
    uVar10 = 0x44;
    uVar13 = 0x1b4;
  }
  else {
    uVar10 = 0x6d;
    uVar13 = 0x1a4;
  }
  FUN_1004d2c58(3,0,uVar10,&UNK_10f6c6a15,uVar13);
  return (ulong *)0x0;
}



/* Entry: 100226f44; end: 1002270bf;  */

void FUN_100226f44(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  long param_5)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((*(int *)(param_2 + 2) == 0) && (*(int *)(param_3 + 2) == 0)) {
    iVar1 = *(int *)(param_4 + 0x20);
    if (((iVar1 < 2) || (*(int *)(param_2 + 1) != iVar1)) || (*(int *)(param_3 + 1) != iVar1)) {
      FUN_1002258d0(param_5);
      lVar6 = param_5;
      FUN_100225974();
      if (lVar6 != 0) {
        if (param_2 == param_3) {
          lVar3 = lVar6;
          func_0x000107c2b3b0();
          iVar1 = (int)lVar3;
        }
        else {
          lVar3 = lVar6;
          func_0x000107c2b398();
          iVar1 = (int)lVar3;
        }
        if (iVar1 != 0) {
          FUN_1002283b8(param_1,lVar6,param_4);
        }
      }
      if (*(char *)(param_5 + 0x28) != '\0') {
        return;
      }
      lVar6 = *(long *)(param_5 + 0x10) + -1;
      *(long *)(param_5 + 0x10) = lVar6;
      *(undefined8 *)(param_5 + 0x20) = *(undefined8 *)(*(long *)(param_5 + 8) + lVar6 * 8);
      return;
    }
    puVar2 = param_1;
    FUN_100202744(param_1,iVar1);
    if ((int)puVar2 == 0) {
      return;
    }
    uVar4 = *param_1;
    FUN_1002270c0(uVar4,*param_2,*param_3,*(undefined8 *)(param_4 + 0x18),param_4 + 0x30,iVar1);
    if ((int)uVar4 != 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      *(int *)(param_1 + 1) = iVar1;
      return;
    }
    uVar4 = 0x44;
    uVar5 = 0x1b4;
  }
  else {
    uVar4 = 0x6d;
    uVar5 = 0x1a4;
  }
  FUN_1004d2c58(3,0,uVar4,&UNK_10f6c6a15,uVar5);
  return;
}



/* Entry: 1002270c0; end: 10022832f;  */

undefined1  [16]
FUN_1002270c0(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,long *param_5,
             ulong param_6)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  bool bVar210;
  bool bVar211;
  bool bVar212;
  bool bVar213;
  bool bVar214;
  bool bVar215;
  bool bVar216;
  bool bVar217;
  ulong *puVar218;
  ulong *puVar219;
  ulong *puVar220;
  ulong *puVar221;
  ulong *puVar222;
  long lVar223;
  ulong uVar224;
  long lVar225;
  ulong uVar226;
  ulong uVar227;
  ulong uVar228;
  ulong uVar229;
  ulong uVar230;
  long lVar231;
  ulong uVar232;
  ulong uVar233;
  ulong uVar234;
  ulong uVar235;
  long lVar236;
  ulong uVar237;
  ulong uVar238;
  ulong uVar239;
  ulong uVar240;
  ulong *puVar241;
  ulong *puVar242;
  long lVar243;
  ulong uVar244;
  ulong uVar245;
  long lVar246;
  ulong uVar247;
  ulong *puVar248;
  ulong uVar249;
  ulong uVar250;
  ulong uVar251;
  ulong uVar252;
  ulong uVar253;
  ulong uVar254;
  ulong uVar255;
  ulong uVar256;
  undefined8 *puVar257;
  ulong uVar258;
  ulong uVar259;
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  ulong auStack_a0 [4];
  
  if ((param_6 & 7) == 0) {
    if (param_2 == param_3) {
      uVar227 = *param_2;
      uVar224 = param_2[1];
      uVar238 = param_2[2];
      uVar228 = param_2[3];
      uVar226 = param_2[4];
      uVar239 = param_2[5];
      uVar235 = param_2[6];
      uVar240 = param_2[7];
      lVar246 = param_6 * -0x10;
      puVar221 = (ulong *)(&stack0xffffffffffffff80 + lVar246);
      lVar223 = param_6 * 8;
      lVar243 = *param_5;
      puVar219 = puVar221;
      lVar231 = lVar223;
      while( true ) {
        lVar231 = lVar231 + -0x40;
        puVar219[8] = 0;
        puVar219[9] = 0;
        puVar219[10] = 0;
        puVar219[0xb] = 0;
        puVar219[0xc] = 0;
        puVar219[0xd] = 0;
        puVar219[0xe] = 0;
        puVar219[0xf] = 0;
        if (lVar231 == 0) break;
        puVar219[0x10] = 0;
        puVar219[0x11] = 0;
        puVar219[0x12] = 0;
        puVar219[0x13] = 0;
        puVar219[0x14] = 0;
        puVar219[0x15] = 0;
        puVar219[0x16] = 0;
        puVar219[0x17] = 0;
        puVar219 = puVar219 + 0x10;
      }
      puVar219 = param_2 + param_6;
      uVar244 = 0;
      uVar245 = 0;
      uVar259 = 0;
      uVar253 = 0;
      uVar234 = 0;
      uVar258 = 0;
      uVar247 = 0;
      uVar229 = 0;
      puVar218 = param_2 + 8;
      puVar248 = puVar221;
      while( true ) {
        uVar230 = uVar224 * uVar227;
        uVar233 = uVar238 * uVar227;
        uVar237 = uVar228 * uVar227;
        uVar249 = uVar226 * uVar227;
        uVar232 = uVar239 * uVar227;
        bVar210 = CARRY8(uVar259,uVar233) ||
                  CARRY8(uVar259 + uVar233,(ulong)CARRY8(uVar245,uVar230));
        uVar252 = uVar259 + uVar233 + (ulong)CARRY8(uVar245,uVar230);
        uVar233 = uVar235 * uVar227;
        bVar216 = CARRY8(uVar253,uVar237) || CARRY8(uVar253 + uVar237,(ulong)bVar210);
        uVar255 = uVar253 + uVar237 + (ulong)bVar210;
        uVar253 = uVar240 * uVar227;
        bVar210 = CARRY8(uVar234,uVar249) || CARRY8(uVar234 + uVar249,(ulong)bVar216);
        uVar249 = uVar234 + uVar249 + (ulong)bVar216;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar224;
        auVar118._8_8_ = 0;
        auVar118._0_8_ = uVar227;
        uVar237 = SUB168(auVar14 * auVar118,8);
        bVar216 = CARRY8(uVar258,uVar232) || CARRY8(uVar258 + uVar232,(ulong)bVar210);
        uVar258 = uVar258 + uVar232 + (ulong)bVar210;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar238;
        auVar119._8_8_ = 0;
        auVar119._0_8_ = uVar227;
        uVar259 = SUB168(auVar15 * auVar119,8);
        bVar210 = CARRY8(uVar247,uVar233) || CARRY8(uVar247 + uVar233,(ulong)bVar216);
        uVar233 = uVar247 + uVar233 + (ulong)bVar216;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar228;
        auVar120._8_8_ = 0;
        auVar120._0_8_ = uVar227;
        uVar234 = SUB168(auVar16 * auVar120,8);
        uVar250 = uVar229 + uVar253 + (ulong)bVar210;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar226;
        auVar121._8_8_ = 0;
        auVar121._0_8_ = uVar227;
        uVar247 = SUB168(auVar17 * auVar121,8);
        *puVar248 = uVar244;
        puVar248[1] = uVar245 + uVar230;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar239;
        auVar122._8_8_ = 0;
        auVar122._0_8_ = uVar227;
        uVar245 = SUB168(auVar18 * auVar122,8);
        bVar216 = CARRY8(uVar255,uVar259) ||
                  CARRY8(uVar255 + uVar259,(ulong)CARRY8(uVar252,uVar237));
        uVar232 = uVar255 + uVar259 + (ulong)CARRY8(uVar252,uVar237);
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar235;
        auVar123._8_8_ = 0;
        auVar123._0_8_ = uVar227;
        uVar244 = SUB168(auVar19 * auVar123,8);
        bVar217 = CARRY8(uVar249,uVar234) || CARRY8(uVar249 + uVar234,(ulong)bVar216);
        uVar230 = uVar249 + uVar234 + (ulong)bVar216;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar240;
        auVar124._8_8_ = 0;
        auVar124._0_8_ = uVar227;
        bVar216 = CARRY8(uVar258,uVar247) || CARRY8(uVar258 + uVar247,(ulong)bVar217);
        uVar249 = uVar258 + uVar247 + (ulong)bVar217;
        uVar247 = uVar238 * uVar224;
        bVar217 = CARRY8(uVar233,uVar245) || CARRY8(uVar233 + uVar245,(ulong)bVar216);
        uVar255 = uVar233 + uVar245 + (ulong)bVar216;
        uVar258 = uVar228 * uVar224;
        uVar251 = uVar250 + uVar244 + (ulong)bVar217;
        uVar259 = uVar226 * uVar224;
        uVar229 = (ulong)(CARRY8(uVar229,uVar253) || CARRY8(uVar229 + uVar253,(ulong)bVar210)) +
                  SUB168(auVar20 * auVar124,8) +
                  (ulong)(CARRY8(uVar250,uVar244) || CARRY8(uVar250 + uVar244,(ulong)bVar217));
        uVar234 = uVar239 * uVar224;
        uVar245 = uVar235 * uVar224;
        bVar210 = CARRY8(uVar230,uVar258) ||
                  CARRY8(uVar230 + uVar258,(ulong)CARRY8(uVar232,uVar247));
        uVar233 = uVar230 + uVar258 + (ulong)CARRY8(uVar232,uVar247);
        uVar253 = uVar240 * uVar224;
        bVar216 = CARRY8(uVar249,uVar259) || CARRY8(uVar249 + uVar259,(ulong)bVar210);
        uVar249 = uVar249 + uVar259 + (ulong)bVar210;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar238;
        auVar125._8_8_ = 0;
        auVar125._0_8_ = uVar224;
        uVar244 = SUB168(auVar21 * auVar125,8);
        bVar210 = CARRY8(uVar255,uVar234) || CARRY8(uVar255 + uVar234,(ulong)bVar216);
        uVar255 = uVar255 + uVar234 + (ulong)bVar216;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar228;
        auVar126._8_8_ = 0;
        auVar126._0_8_ = uVar224;
        uVar234 = SUB168(auVar22 * auVar126,8);
        bVar216 = CARRY8(uVar251,uVar245) || CARRY8(uVar251 + uVar245,(ulong)bVar210);
        uVar250 = uVar251 + uVar245 + (ulong)bVar210;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar226;
        auVar127._8_8_ = 0;
        auVar127._0_8_ = uVar224;
        uVar245 = SUB168(auVar23 * auVar127,8);
        uVar230 = uVar229 + uVar253 + (ulong)bVar216;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar239;
        auVar128._8_8_ = 0;
        auVar128._0_8_ = uVar224;
        uVar258 = SUB168(auVar24 * auVar128,8);
        puVar248[2] = uVar252 + uVar237;
        puVar248[3] = uVar232 + uVar247;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar235;
        auVar129._8_8_ = 0;
        auVar129._0_8_ = uVar224;
        uVar259 = SUB168(auVar25 * auVar129,8);
        bVar210 = CARRY8(uVar249,uVar234) ||
                  CARRY8(uVar249 + uVar234,(ulong)CARRY8(uVar233,uVar244));
        uVar232 = uVar249 + uVar234 + (ulong)CARRY8(uVar233,uVar244);
        auVar26._8_8_ = 0;
        auVar26._0_8_ = uVar240;
        auVar130._8_8_ = 0;
        auVar130._0_8_ = uVar224;
        bVar217 = CARRY8(uVar255,uVar245) || CARRY8(uVar255 + uVar245,(ulong)bVar210);
        uVar237 = uVar255 + uVar245 + (ulong)bVar210;
        uVar234 = uVar228 * uVar238;
        bVar210 = CARRY8(uVar250,uVar258) || CARRY8(uVar250 + uVar258,(ulong)bVar217);
        uVar249 = uVar250 + uVar258 + (ulong)bVar217;
        uVar245 = uVar226 * uVar238;
        uVar258 = uVar230 + uVar259 + (ulong)bVar210;
        uVar224 = uVar239 * uVar238;
        uVar229 = (ulong)(CARRY8(uVar229,uVar253) || CARRY8(uVar229 + uVar253,(ulong)bVar216)) +
                  SUB168(auVar26 * auVar130,8) +
                  (ulong)(CARRY8(uVar230,uVar259) || CARRY8(uVar230 + uVar259,(ulong)bVar210));
        uVar259 = uVar235 * uVar238;
        uVar247 = uVar240 * uVar238;
        bVar210 = CARRY8(uVar237,uVar245) ||
                  CARRY8(uVar237 + uVar245,(ulong)CARRY8(uVar232,uVar234));
        uVar237 = uVar237 + uVar245 + (ulong)CARRY8(uVar232,uVar234);
        auVar27._8_8_ = 0;
        auVar27._0_8_ = uVar228;
        auVar131._8_8_ = 0;
        auVar131._0_8_ = uVar238;
        uVar253 = SUB168(auVar27 * auVar131,8);
        bVar216 = CARRY8(uVar249,uVar224) || CARRY8(uVar249 + uVar224,(ulong)bVar210);
        uVar249 = uVar249 + uVar224 + (ulong)bVar210;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = uVar226;
        auVar132._8_8_ = 0;
        auVar132._0_8_ = uVar238;
        uVar224 = SUB168(auVar28 * auVar132,8);
        bVar210 = CARRY8(uVar258,uVar259) || CARRY8(uVar258 + uVar259,(ulong)bVar216);
        uVar258 = uVar258 + uVar259 + (ulong)bVar216;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = uVar239;
        auVar133._8_8_ = 0;
        auVar133._0_8_ = uVar238;
        uVar259 = SUB168(auVar29 * auVar133,8);
        uVar230 = uVar229 + uVar247 + (ulong)bVar210;
        auVar30._8_8_ = 0;
        auVar30._0_8_ = uVar235;
        auVar134._8_8_ = 0;
        auVar134._0_8_ = uVar238;
        uVar245 = SUB168(auVar30 * auVar134,8);
        puVar248[4] = uVar233 + uVar244;
        puVar248[5] = uVar232 + uVar234;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = uVar240;
        auVar135._8_8_ = 0;
        auVar135._0_8_ = uVar238;
        bVar216 = CARRY8(uVar249,uVar224) ||
                  CARRY8(uVar249 + uVar224,(ulong)CARRY8(uVar237,uVar253));
        uVar249 = uVar249 + uVar224 + (ulong)CARRY8(uVar237,uVar253);
        uVar244 = uVar226 * uVar228;
        bVar217 = CARRY8(uVar258,uVar259) || CARRY8(uVar258 + uVar259,(ulong)bVar216);
        uVar259 = uVar258 + uVar259 + (ulong)bVar216;
        uVar238 = uVar239 * uVar228;
        uVar232 = uVar230 + uVar245 + (ulong)bVar217;
        uVar234 = uVar235 * uVar228;
        uVar230 = (ulong)(CARRY8(uVar229,uVar247) || CARRY8(uVar229 + uVar247,(ulong)bVar210)) +
                  SUB168(auVar31 * auVar135,8) +
                  (ulong)(CARRY8(uVar230,uVar245) || CARRY8(uVar230 + uVar245,(ulong)bVar217));
        uVar258 = uVar240 * uVar228;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar226;
        auVar136._8_8_ = 0;
        auVar136._0_8_ = uVar228;
        uVar224 = SUB168(auVar32 * auVar136,8);
        bVar210 = CARRY8(uVar259,uVar238) ||
                  CARRY8(uVar259 + uVar238,(ulong)CARRY8(uVar249,uVar244));
        uVar245 = uVar259 + uVar238 + (ulong)CARRY8(uVar249,uVar244);
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar239;
        auVar137._8_8_ = 0;
        auVar137._0_8_ = uVar228;
        uVar259 = SUB168(auVar33 * auVar137,8);
        bVar216 = CARRY8(uVar232,uVar234) || CARRY8(uVar232 + uVar234,(ulong)bVar210);
        uVar234 = uVar232 + uVar234 + (ulong)bVar210;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar235;
        auVar138._8_8_ = 0;
        auVar138._0_8_ = uVar228;
        uVar247 = SUB168(auVar34 * auVar138,8);
        uVar232 = uVar230 + uVar258 + (ulong)bVar216;
        auVar35._8_8_ = 0;
        auVar35._0_8_ = uVar240;
        auVar139._8_8_ = 0;
        auVar139._0_8_ = uVar228;
        puVar222 = puVar248 + 8;
        puVar248[6] = uVar237 + uVar253;
        puVar248[7] = uVar249 + uVar244;
        uVar238 = uVar245 + uVar224;
        uVar228 = uVar239 * uVar226;
        bVar210 = CARRY8(uVar234,uVar259) ||
                  CARRY8(uVar234 + uVar259,(ulong)CARRY8(uVar245,uVar224));
        uVar229 = uVar234 + uVar259 + (ulong)CARRY8(uVar245,uVar224);
        uVar234 = uVar235 * uVar226;
        uVar233 = uVar232 + uVar247 + (ulong)bVar210;
        uVar245 = uVar240 * uVar226;
        uVar230 = (ulong)(CARRY8(uVar230,uVar258) || CARRY8(uVar230 + uVar258,(ulong)bVar216)) +
                  SUB168(auVar35 * auVar139,8) +
                  (ulong)(CARRY8(uVar232,uVar247) || CARRY8(uVar232 + uVar247,(ulong)bVar210));
        auVar36._8_8_ = 0;
        auVar36._0_8_ = uVar239;
        auVar140._8_8_ = 0;
        auVar140._0_8_ = uVar226;
        uVar253 = SUB168(auVar36 * auVar140,8);
        uVar224 = uVar229 + uVar228;
        auVar37._8_8_ = 0;
        auVar37._0_8_ = uVar235;
        auVar141._8_8_ = 0;
        auVar141._0_8_ = uVar226;
        uVar259 = SUB168(auVar37 * auVar141,8);
        bVar210 = CARRY8(uVar233,uVar234) ||
                  CARRY8(uVar233 + uVar234,(ulong)CARRY8(uVar229,uVar228));
        uVar228 = uVar233 + uVar234 + (ulong)CARRY8(uVar229,uVar228);
        auVar38._8_8_ = 0;
        auVar38._0_8_ = uVar240;
        auVar142._8_8_ = 0;
        auVar142._0_8_ = uVar226;
        uVar229 = uVar230 + uVar245 + (ulong)bVar210;
        uVar247 = uVar235 * uVar239;
        uVar226 = uVar228 + uVar253;
        uVar258 = uVar240 * uVar239;
        uVar232 = uVar229 + uVar259 + (ulong)CARRY8(uVar228,uVar253);
        auVar39._8_8_ = 0;
        auVar39._0_8_ = uVar235;
        auVar143._8_8_ = 0;
        auVar143._0_8_ = uVar239;
        uVar234 = SUB168(auVar39 * auVar143,8);
        uVar259 = (ulong)(CARRY8(uVar230,uVar245) || CARRY8(uVar230 + uVar245,(ulong)bVar210)) +
                  SUB168(auVar38 * auVar142,8) +
                  (ulong)(CARRY8(uVar229,uVar259) ||
                         CARRY8(uVar229 + uVar259,(ulong)CARRY8(uVar228,uVar253)));
        auVar40._8_8_ = 0;
        auVar40._0_8_ = uVar240;
        auVar144._8_8_ = 0;
        auVar144._0_8_ = uVar239;
        uVar228 = uVar232 + uVar247;
        uVar245 = uVar259 + uVar258 + (ulong)CARRY8(uVar232,uVar247);
        auVar41._8_8_ = 0;
        auVar41._0_8_ = uVar240;
        auVar145._8_8_ = 0;
        auVar145._0_8_ = uVar235;
        uVar239 = uVar245 + uVar234;
        uVar259 = (ulong)(CARRY8(uVar259,uVar258) ||
                         CARRY8(uVar259 + uVar258,(ulong)CARRY8(uVar232,uVar247))) +
                  SUB168(auVar40 * auVar144,8) + (ulong)CARRY8(uVar245,uVar234);
        uVar247 = uVar259 + uVar240 * uVar235;
        puVar220 = puVar219 + -param_6;
        uVar235 = (ulong)CARRY8(uVar259,uVar240 * uVar235) + SUB168(auVar41 * auVar145,8);
        if (puVar219 == puVar218) break;
        uVar240 = *puVar222;
        uVar245 = puVar248[9];
        uVar259 = puVar248[10];
        uVar253 = puVar248[0xb];
        uVar234 = puVar248[0xc];
        uVar258 = puVar248[0xd];
        uVar229 = puVar248[0xe];
        uVar244 = uVar238 + uVar240;
        bVar210 = CARRY8(uVar224,uVar245) ||
                  CARRY8(uVar224 + uVar245,(ulong)CARRY8(uVar238,uVar240));
        uVar245 = uVar224 + uVar245 + (ulong)CARRY8(uVar238,uVar240);
        uVar238 = *puVar218;
        uVar240 = puVar218[1];
        bVar216 = CARRY8(uVar226,uVar259) || CARRY8(uVar226 + uVar259,(ulong)bVar210);
        uVar259 = uVar226 + uVar259 + (ulong)bVar210;
        bVar210 = CARRY8(uVar228,uVar253) || CARRY8(uVar228 + uVar253,(ulong)bVar216);
        uVar253 = uVar228 + uVar253 + (ulong)bVar216;
        uVar226 = puVar218[2];
        uVar228 = puVar218[3];
        bVar216 = CARRY8(uVar239,uVar234) || CARRY8(uVar239 + uVar234,(ulong)bVar210);
        uVar234 = uVar239 + uVar234 + (ulong)bVar210;
        bVar210 = CARRY8(uVar247,uVar258) || CARRY8(uVar247 + uVar258,(ulong)bVar216);
        uVar258 = uVar247 + uVar258 + (ulong)bVar216;
        uVar224 = puVar218[4];
        uVar239 = puVar218[5];
        bVar216 = CARRY8(uVar235,uVar229) || CARRY8(uVar235 + uVar229,(ulong)bVar210);
        uVar247 = uVar235 + uVar229 + (ulong)bVar210;
        bVar210 = CARRY8(puVar248[0xf],(ulong)bVar216);
        uVar229 = puVar248[0xf] + (ulong)bVar216;
        uVar235 = puVar218[6];
        uVar230 = puVar218[7];
        puVar248 = puVar218 + 8;
        lVar231 = -0x40;
        while( true ) {
          do {
            puVar220 = puVar222;
            uVar232 = uVar238 * uVar227;
            uVar237 = uVar240 * uVar227;
            lVar231 = lVar231 + 8;
            uVar249 = uVar226 * uVar227;
            uVar252 = uVar228 * uVar227;
            uVar233 = uVar224 * uVar227;
            bVar216 = CARRY8(uVar245,uVar237) ||
                      CARRY8(uVar245 + uVar237,(ulong)CARRY8(uVar244,uVar232));
            uVar255 = uVar245 + uVar237 + (ulong)CARRY8(uVar244,uVar232);
            uVar245 = uVar239 * uVar227;
            bVar217 = CARRY8(uVar259,uVar249) || CARRY8(uVar259 + uVar249,(ulong)bVar216);
            uVar250 = uVar259 + uVar249 + (ulong)bVar216;
            uVar237 = uVar235 * uVar227;
            bVar216 = CARRY8(uVar253,uVar252) || CARRY8(uVar253 + uVar252,(ulong)bVar217);
            uVar252 = uVar253 + uVar252 + (ulong)bVar217;
            uVar249 = uVar230 * uVar227;
            bVar217 = CARRY8(uVar234,uVar233) || CARRY8(uVar234 + uVar233,(ulong)bVar216);
            uVar233 = uVar234 + uVar233 + (ulong)bVar216;
            auVar42._8_8_ = 0;
            auVar42._0_8_ = uVar238;
            auVar146._8_8_ = 0;
            auVar146._0_8_ = uVar227;
            uVar259 = SUB168(auVar42 * auVar146,8);
            bVar216 = CARRY8(uVar258,uVar245) || CARRY8(uVar258 + uVar245,(ulong)bVar217);
            uVar251 = uVar258 + uVar245 + (ulong)bVar217;
            auVar43._8_8_ = 0;
            auVar43._0_8_ = uVar240;
            auVar147._8_8_ = 0;
            auVar147._0_8_ = uVar227;
            uVar245 = SUB168(auVar43 * auVar147,8);
            bVar217 = CARRY8(uVar247,uVar237) || CARRY8(uVar247 + uVar237,(ulong)bVar216);
            uVar237 = uVar247 + uVar237 + (ulong)bVar216;
            auVar44._8_8_ = 0;
            auVar44._0_8_ = uVar226;
            auVar148._8_8_ = 0;
            auVar148._0_8_ = uVar227;
            uVar253 = SUB168(auVar44 * auVar148,8);
            uVar256 = uVar229 + uVar249 + (ulong)bVar217;
            auVar45._8_8_ = 0;
            auVar45._0_8_ = uVar228;
            auVar149._8_8_ = 0;
            auVar149._0_8_ = uVar227;
            uVar258 = SUB168(auVar45 * auVar149,8);
            uVar249 = (ulong)bVar210 +
                      (ulong)(CARRY8(uVar229,uVar249) || CARRY8(uVar229 + uVar249,(ulong)bVar217));
            puVar222 = puVar220 + 1;
            *puVar220 = uVar244 + uVar232;
            uVar244 = uVar255 + uVar259;
            auVar46._8_8_ = 0;
            auVar46._0_8_ = uVar224;
            auVar150._8_8_ = 0;
            auVar150._0_8_ = uVar227;
            uVar234 = SUB168(auVar46 * auVar150,8);
            bVar210 = CARRY8(uVar250,uVar245) ||
                      CARRY8(uVar250 + uVar245,(ulong)CARRY8(uVar255,uVar259));
            uVar245 = uVar250 + uVar245 + (ulong)CARRY8(uVar255,uVar259);
            auVar47._8_8_ = 0;
            auVar47._0_8_ = uVar239;
            auVar151._8_8_ = 0;
            auVar151._0_8_ = uVar227;
            uVar247 = SUB168(auVar47 * auVar151,8);
            bVar216 = CARRY8(uVar252,uVar253) || CARRY8(uVar252 + uVar253,(ulong)bVar210);
            uVar259 = uVar252 + uVar253 + (ulong)bVar210;
            auVar48._8_8_ = 0;
            auVar48._0_8_ = uVar235;
            auVar152._8_8_ = 0;
            auVar152._0_8_ = uVar227;
            uVar229 = SUB168(auVar48 * auVar152,8);
            bVar210 = CARRY8(uVar233,uVar258) || CARRY8(uVar233 + uVar258,(ulong)bVar216);
            uVar253 = uVar233 + uVar258 + (ulong)bVar216;
            auVar49._8_8_ = 0;
            auVar49._0_8_ = uVar230;
            auVar153._8_8_ = 0;
            auVar153._0_8_ = uVar227;
            uVar232 = SUB168(auVar49 * auVar153,8);
            uVar227 = *(ulong *)((long)puVar218 + lVar231);
            bVar216 = CARRY8(uVar251,uVar234) || CARRY8(uVar251 + uVar234,(ulong)bVar210);
            uVar234 = uVar251 + uVar234 + (ulong)bVar210;
            bVar210 = CARRY8(uVar237,uVar247) || CARRY8(uVar237 + uVar247,(ulong)bVar216);
            uVar258 = uVar237 + uVar247 + (ulong)bVar216;
            bVar216 = CARRY8(uVar256,uVar229) || CARRY8(uVar256 + uVar229,(ulong)bVar210);
            uVar247 = uVar256 + uVar229 + (ulong)bVar210;
            bVar210 = CARRY8(uVar249,uVar232) || CARRY8(uVar249 + uVar232,(ulong)bVar216);
            uVar229 = uVar249 + uVar232 + (ulong)bVar216;
          } while (lVar231 != 0);
          if (puVar248 == puVar219) break;
          uVar227 = *puVar222;
          uVar238 = puVar220[2];
          uVar226 = puVar220[3];
          uVar224 = puVar220[4];
          uVar235 = puVar220[5];
          uVar239 = puVar220[6];
          uVar230 = puVar220[7];
          uVar232 = puVar220[8];
          bVar210 = CARRY8(uVar244,uVar227);
          uVar244 = uVar244 + uVar227;
          uVar227 = puVar218[-8];
          bVar216 = CARRY8(uVar245,uVar238) || CARRY8(uVar245 + uVar238,(ulong)bVar210);
          uVar245 = uVar245 + uVar238 + (ulong)bVar210;
          uVar238 = *puVar248;
          uVar240 = puVar248[1];
          bVar210 = CARRY8(uVar259,uVar226) || CARRY8(uVar259 + uVar226,(ulong)bVar216);
          uVar259 = uVar259 + uVar226 + (ulong)bVar216;
          bVar216 = CARRY8(uVar253,uVar224) || CARRY8(uVar253 + uVar224,(ulong)bVar210);
          uVar253 = uVar253 + uVar224 + (ulong)bVar210;
          uVar226 = puVar248[2];
          uVar228 = puVar248[3];
          bVar210 = CARRY8(uVar234,uVar235) || CARRY8(uVar234 + uVar235,(ulong)bVar216);
          uVar234 = uVar234 + uVar235 + (ulong)bVar216;
          bVar216 = CARRY8(uVar258,uVar239) || CARRY8(uVar258 + uVar239,(ulong)bVar210);
          uVar258 = uVar258 + uVar239 + (ulong)bVar210;
          uVar224 = puVar248[4];
          uVar239 = puVar248[5];
          bVar217 = CARRY8(uVar247,uVar230) || CARRY8(uVar247 + uVar230,(ulong)bVar216);
          uVar247 = uVar247 + uVar230 + (ulong)bVar216;
          lVar231 = -0x40;
          bVar210 = CARRY8(uVar229,uVar232) || CARRY8(uVar229 + uVar232,(ulong)bVar217);
          uVar229 = uVar229 + uVar232 + (ulong)bVar217;
          uVar235 = puVar248[6];
          uVar230 = puVar248[7];
          puVar248 = puVar248 + 8;
        }
        uVar227 = *puVar218;
        uVar224 = puVar218[1];
        puVar242 = puVar218 + 8;
        uVar238 = puVar218[2];
        uVar228 = puVar218[3];
        uVar226 = puVar218[4];
        uVar239 = puVar218[5];
        puVar241 = (ulong *)((long)puVar222 - ((long)puVar219 - (long)puVar242));
        uVar235 = puVar218[6];
        uVar240 = puVar218[7];
        puVar218 = puVar242;
        puVar248 = puVar222;
        if ((long)puVar219 - (long)puVar242 != 0) {
          *puVar222 = uVar244;
          puVar220[2] = uVar245;
          uVar244 = *puVar241;
          uVar245 = puVar241[1];
          puVar220[3] = uVar259;
          puVar220[4] = uVar253;
          uVar259 = puVar241[2];
          uVar253 = puVar241[3];
          puVar220[5] = uVar234;
          puVar220[6] = uVar258;
          uVar234 = puVar241[4];
          uVar258 = puVar241[5];
          puVar220[7] = uVar247;
          puVar220[8] = uVar229;
          uVar247 = puVar241[6];
          uVar229 = puVar241[7];
          puVar248 = puVar241;
        }
      }
      uVar227 = *puVar220;
      uVar245 = puVar220[1];
      uVar240 = *(ulong *)(&stack0xffffffffffffff88 + lVar246);
      uVar253 = *(ulong *)(&stack0xffffffffffffff90 + lVar246);
      uVar259 = puVar220[2];
      uVar258 = puVar220[3];
      uVar234 = *(ulong *)(&stack0xffffffffffffff98 + lVar246);
      uVar229 = *(ulong *)(&stack0xffffffffffffffa0 + lVar246);
      *puVar222 = uVar238;
      puVar248[9] = uVar224;
      uVar224 = uVar227 * uVar227;
      puVar248[10] = uVar226;
      puVar248[0xb] = uVar228;
      auVar50._8_8_ = 0;
      auVar50._0_8_ = uVar227;
      auVar154._8_8_ = 0;
      auVar154._0_8_ = uVar227;
      uVar238 = SUB168(auVar50 * auVar154,8);
      puVar248[0xc] = uVar239;
      puVar248[0xd] = uVar247;
      uVar226 = uVar245 * uVar245;
      puVar248[0xe] = uVar235;
      puVar248[0xf] = uVar249 + uVar244;
      auVar51._8_8_ = 0;
      auVar51._0_8_ = uVar245;
      auVar155._8_8_ = 0;
      auVar155._0_8_ = uVar245;
      uVar235 = SUB168(auVar51 * auVar155,8);
      uVar227 = uVar240 * 2;
      bVar210 = CARRY8(uVar238,uVar227);
      uVar238 = uVar238 + uVar227;
      uVar227 = uVar240 >> 0x3f | uVar253 << 1;
      lVar231 = lVar223 + -0x20;
      puVar219 = puVar221;
      do {
        puVar218 = puVar219;
        bVar216 = CARRY8(uVar226,uVar227) || CARRY8(uVar226 + uVar227,(ulong)bVar210);
        uVar253 = uVar253 >> 0x3f | uVar234 << 1;
        lVar231 = lVar231 + -0x20;
        bVar217 = CARRY8(uVar235,uVar253) || CARRY8(uVar235 + uVar253,(ulong)bVar216);
        uVar240 = uVar259 * uVar259;
        uVar228 = puVar220[4];
        uVar239 = puVar220[5];
        auVar52._8_8_ = 0;
        auVar52._0_8_ = uVar259;
        auVar156._8_8_ = 0;
        auVar156._0_8_ = uVar259;
        uVar244 = SUB168(auVar52 * auVar156,8);
        uVar247 = uVar258 * uVar258;
        auVar53._8_8_ = 0;
        auVar53._0_8_ = uVar258;
        auVar157._8_8_ = 0;
        auVar157._0_8_ = uVar258;
        uVar245 = SUB168(auVar53 * auVar157,8);
        uVar230 = uVar234 >> 0x3f | uVar229 << 1;
        *puVar218 = uVar224;
        puVar218[1] = uVar238;
        bVar211 = CARRY8(uVar240,uVar230) || CARRY8(uVar240 + uVar230,(ulong)bVar217);
        uVar224 = uVar229 >> 0x3f | puVar218[5] << 1;
        puVar218[2] = uVar226 + uVar227 + (ulong)bVar210;
        puVar218[3] = uVar235 + uVar253 + (ulong)bVar216;
        bVar210 = CARRY8(uVar244,uVar224) || CARRY8(uVar244 + uVar224,(ulong)bVar211);
        uVar234 = puVar218[5] >> 0x3f | puVar218[6] << 1;
        bVar216 = CARRY8(uVar247,uVar234) || CARRY8(uVar247 + uVar234,(ulong)bVar210);
        uVar229 = puVar218[6] >> 0x3f | puVar218[7] << 1;
        bVar212 = CARRY8(uVar245,uVar229) || CARRY8(uVar245 + uVar229,(ulong)bVar216);
        uVar253 = puVar218[10];
        uVar227 = uVar228 * uVar228;
        uVar259 = puVar220[6];
        uVar258 = puVar220[7];
        auVar54._8_8_ = 0;
        auVar54._0_8_ = uVar228;
        auVar158._8_8_ = 0;
        auVar158._0_8_ = uVar228;
        uVar238 = SUB168(auVar54 * auVar158,8);
        uVar226 = uVar239 * uVar239;
        auVar55._8_8_ = 0;
        auVar55._0_8_ = uVar239;
        auVar159._8_8_ = 0;
        auVar159._0_8_ = uVar239;
        uVar235 = SUB168(auVar55 * auVar159,8);
        puVar218[4] = uVar240 + uVar230 + (ulong)bVar217;
        puVar218[5] = uVar244 + uVar224 + (ulong)bVar211;
        uVar224 = puVar218[7] >> 0x3f | puVar218[8] << 1;
        puVar218[6] = uVar247 + uVar234 + (ulong)bVar210;
        puVar218[7] = uVar245 + uVar229 + (ulong)bVar216;
        bVar216 = CARRY8(uVar227,uVar224) || CARRY8(uVar227 + uVar224,(ulong)bVar212);
        uVar224 = uVar227 + uVar224 + (ulong)bVar212;
        uVar227 = puVar218[8] >> 0x3f | puVar218[9] << 1;
        bVar210 = CARRY8(uVar238,uVar227) || CARRY8(uVar238 + uVar227,(ulong)bVar216);
        uVar238 = uVar238 + uVar227 + (ulong)bVar216;
        uVar234 = puVar218[0xb];
        uVar229 = puVar218[0xc];
        uVar227 = puVar218[9] >> 0x3f | uVar253 << 1;
        puVar219 = puVar218 + 8;
        puVar220 = puVar220 + 4;
      } while (lVar231 != 0);
      bVar216 = CARRY8(uVar226,uVar227) || CARRY8(uVar226 + uVar227,(ulong)bVar210);
      uVar228 = uVar253 >> 0x3f | uVar234 << 1;
      bVar217 = CARRY8(uVar235,uVar228) || CARRY8(uVar235 + uVar228,(ulong)bVar216);
      uVar244 = puVar218[0xe];
      uVar240 = uVar259 * uVar259;
      auVar56._8_8_ = 0;
      auVar56._0_8_ = uVar259;
      auVar160._8_8_ = 0;
      auVar160._0_8_ = uVar259;
      uVar230 = SUB168(auVar56 * auVar160,8);
      puVar218[8] = uVar224;
      puVar218[9] = uVar238;
      uVar232 = uVar258 * uVar258;
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uVar258;
      auVar161._8_8_ = 0;
      auVar161._0_8_ = uVar258;
      puVar218[10] = uVar226 + uVar227 + (ulong)bVar210;
      puVar218[0xb] = uVar235 + uVar228 + (ulong)bVar216;
      uVar237 = uVar234 >> 0x3f | uVar229 << 1;
      bVar210 = CARRY8(uVar240,uVar237) || CARRY8(uVar240 + uVar237,(ulong)bVar217);
      uVar227 = uVar229 >> 0x3f | puVar218[0xd] << 1;
      uVar238 = *puVar221;
      uVar259 = *(ulong *)(&stack0xffffffffffffff88 + lVar246);
      bVar216 = CARRY8(uVar230,uVar227) || CARRY8(uVar230 + uVar227,(ulong)bVar210);
      uVar233 = puVar218[0xd] >> 0x3f | uVar244 << 1;
      uVar226 = *param_4;
      uVar234 = param_4[1];
      uVar235 = param_4[2];
      uVar247 = param_4[3];
      uVar224 = param_4[4];
      uVar245 = param_4[5];
      uVar249 = lVar243 * uVar238;
      uVar228 = param_4[6];
      uVar253 = param_4[7];
      puVar219 = param_4 + param_6;
      uVar239 = *(ulong *)(&stack0xffffffffffffff90 + lVar246);
      uVar258 = *(ulong *)(&stack0xffffffffffffff98 + lVar246);
      puVar218[0xc] = uVar240 + uVar237 + (ulong)bVar217;
      puVar218[0xd] = uVar230 + uVar227 + (ulong)bVar210;
      uVar240 = *(ulong *)(&stack0xffffffffffffffa0 + lVar246);
      uVar229 = *(ulong *)(&stack0xffffffffffffffa8 + lVar246);
      puVar218[0xe] = uVar232 + uVar233 + (ulong)bVar216;
      puVar218[0xf] =
           (SUB168(auVar57 * auVar161,8) - ((long)uVar244 >> 0x3f)) +
           (ulong)(CARRY8(uVar232,uVar233) || CARRY8(uVar232 + uVar233,(ulong)bVar216));
      uVar244 = *(ulong *)(&stack0xffffffffffffffb0 + lVar246);
      uVar230 = *(ulong *)(&stack0xffffffffffffffb8 + lVar246);
      param_4 = param_4 + 8;
      uVar227 = 0;
      lVar231 = 8;
      puVar218 = puVar221;
      do {
        do {
          puVar248 = puVar218;
          uVar233 = uVar234 * uVar249;
          lVar231 = lVar231 + -1;
          uVar237 = uVar235 * uVar249;
          puVar218 = puVar248 + 1;
          *puVar248 = uVar249;
          uVar252 = uVar247 * uVar249;
          uVar232 = uVar224 * uVar249;
          bVar210 = CARRY8(uVar259,uVar233) || CARRY8(uVar259 + uVar233,(ulong)(uVar238 != 0));
          uVar255 = uVar259 + uVar233 + (ulong)(uVar238 != 0);
          uVar238 = uVar245 * uVar249;
          bVar216 = CARRY8(uVar239,uVar237) || CARRY8(uVar239 + uVar237,(ulong)bVar210);
          uVar250 = uVar239 + uVar237 + (ulong)bVar210;
          uVar233 = uVar228 * uVar249;
          bVar210 = CARRY8(uVar258,uVar252) || CARRY8(uVar258 + uVar252,(ulong)bVar216);
          uVar252 = uVar258 + uVar252 + (ulong)bVar216;
          uVar237 = uVar253 * uVar249;
          bVar216 = CARRY8(uVar240,uVar232) || CARRY8(uVar240 + uVar232,(ulong)bVar210);
          uVar251 = uVar240 + uVar232 + (ulong)bVar210;
          auVar58._8_8_ = 0;
          auVar58._0_8_ = uVar226;
          auVar162._8_8_ = 0;
          auVar162._0_8_ = uVar249;
          uVar239 = SUB168(auVar58 * auVar162,8);
          bVar210 = CARRY8(uVar229,uVar238) || CARRY8(uVar229 + uVar238,(ulong)bVar216);
          uVar256 = uVar229 + uVar238 + (ulong)bVar216;
          auVar59._8_8_ = 0;
          auVar59._0_8_ = uVar234;
          auVar163._8_8_ = 0;
          auVar163._0_8_ = uVar249;
          uVar259 = SUB168(auVar59 * auVar163,8);
          bVar216 = CARRY8(uVar244,uVar233) || CARRY8(uVar244 + uVar233,(ulong)bVar210);
          uVar233 = uVar244 + uVar233 + (ulong)bVar210;
          auVar60._8_8_ = 0;
          auVar60._0_8_ = uVar235;
          auVar164._8_8_ = 0;
          auVar164._0_8_ = uVar249;
          uVar258 = SUB168(auVar60 * auVar164,8);
          uVar254 = uVar230 + uVar237 + (ulong)bVar216;
          auVar61._8_8_ = 0;
          auVar61._0_8_ = uVar247;
          auVar165._8_8_ = 0;
          auVar165._0_8_ = uVar249;
          uVar229 = SUB168(auVar61 * auVar165,8);
          uVar238 = uVar255 + uVar239;
          auVar62._8_8_ = 0;
          auVar62._0_8_ = uVar224;
          auVar166._8_8_ = 0;
          auVar166._0_8_ = uVar249;
          uVar240 = SUB168(auVar62 * auVar166,8);
          bVar210 = CARRY8(uVar250,uVar259) ||
                    CARRY8(uVar250 + uVar259,(ulong)CARRY8(uVar255,uVar239));
          uVar259 = uVar250 + uVar259 + (ulong)CARRY8(uVar255,uVar239);
          auVar63._8_8_ = 0;
          auVar63._0_8_ = uVar245;
          auVar167._8_8_ = 0;
          auVar167._0_8_ = uVar249;
          uVar244 = SUB168(auVar63 * auVar167,8);
          bVar217 = CARRY8(uVar252,uVar258) || CARRY8(uVar252 + uVar258,(ulong)bVar210);
          uVar239 = uVar252 + uVar258 + (ulong)bVar210;
          auVar64._8_8_ = 0;
          auVar64._0_8_ = uVar228;
          auVar168._8_8_ = 0;
          auVar168._0_8_ = uVar249;
          uVar232 = SUB168(auVar64 * auVar168,8);
          bVar210 = CARRY8(uVar251,uVar229) || CARRY8(uVar251 + uVar229,(ulong)bVar217);
          uVar258 = uVar251 + uVar229 + (ulong)bVar217;
          auVar65._8_8_ = 0;
          auVar65._0_8_ = uVar253;
          auVar169._8_8_ = 0;
          auVar169._0_8_ = uVar249;
          uVar249 = lVar243 * uVar238;
          bVar217 = CARRY8(uVar256,uVar240) || CARRY8(uVar256 + uVar240,(ulong)bVar210);
          uVar240 = uVar256 + uVar240 + (ulong)bVar210;
          bVar210 = CARRY8(uVar233,uVar244) || CARRY8(uVar233 + uVar244,(ulong)bVar217);
          uVar229 = uVar233 + uVar244 + (ulong)bVar217;
          uVar244 = uVar254 + uVar232 + (ulong)bVar210;
          uVar230 = (ulong)(CARRY8(uVar230,uVar237) || CARRY8(uVar230 + uVar237,(ulong)bVar216)) +
                    SUB168(auVar65 * auVar169,8) +
                    (ulong)(CARRY8(uVar254,uVar232) || CARRY8(uVar254 + uVar232,(ulong)bVar210));
        } while (lVar231 != 0);
        uVar233 = *puVar218;
        uVar249 = puVar248[2];
        uVar237 = puVar248[3];
        uVar252 = puVar248[4];
        uVar232 = uVar238 + uVar233;
        bVar210 = CARRY8(uVar259,uVar249) ||
                  CARRY8(uVar259 + uVar249,(ulong)CARRY8(uVar238,uVar233));
        uVar255 = uVar259 + uVar249 + (ulong)CARRY8(uVar238,uVar233);
        uVar238 = puVar248[5];
        uVar259 = puVar248[6];
        bVar216 = CARRY8(uVar239,uVar237) || CARRY8(uVar239 + uVar237,(ulong)bVar210);
        uVar233 = uVar239 + uVar237 + (ulong)bVar210;
        bVar210 = CARRY8(uVar258,uVar252) || CARRY8(uVar258 + uVar252,(ulong)bVar216);
        uVar252 = uVar258 + uVar252 + (ulong)bVar216;
        uVar239 = puVar248[7];
        uVar258 = puVar248[8];
        bVar216 = CARRY8(uVar240,uVar238) || CARRY8(uVar240 + uVar238,(ulong)bVar210);
        uVar240 = uVar240 + uVar238 + (ulong)bVar210;
        bVar210 = CARRY8(uVar229,uVar259) || CARRY8(uVar229 + uVar259,(ulong)bVar216);
        uVar229 = uVar229 + uVar259 + (ulong)bVar216;
        bVar216 = CARRY8(uVar244,uVar239) || CARRY8(uVar244 + uVar239,(ulong)bVar210);
        uVar237 = uVar244 + uVar239 + (ulong)bVar210;
        bVar210 = CARRY8(uVar230,uVar258) || CARRY8(uVar230 + uVar258,(ulong)bVar216);
        uVar244 = uVar230 + uVar258 + (ulong)bVar216;
        if (puVar219 == param_4) {
          uVar238 = ~uVar234;
          bVar217 = CARRY8(uVar255 + uVar238,(ulong)(uVar226 <= uVar232));
          *puVar221 = 0;
          *(undefined8 *)(&stack0xffffffffffffff88 + lVar246) = 0;
          uVar239 = ~uVar235;
          bVar211 = CARRY8(uVar233 + uVar239,(ulong)(CARRY8(uVar255,uVar238) || bVar217));
          *(undefined8 *)(&stack0xffffffffffffff90 + lVar246) = 0;
          *(undefined8 *)(&stack0xffffffffffffff98 + lVar246) = 0;
          uVar259 = ~uVar247;
          bVar212 = CARRY8(uVar252 + uVar259,(ulong)(CARRY8(uVar233,uVar239) || bVar211));
          *(undefined8 *)(&stack0xffffffffffffffa0 + lVar246) = 0;
          *(undefined8 *)(&stack0xffffffffffffffa8 + lVar246) = 0;
          uVar258 = ~uVar224;
          bVar213 = CARRY8(uVar240 + uVar258,(ulong)(CARRY8(uVar252,uVar259) || bVar212));
          *(undefined8 *)(&stack0xffffffffffffffb0 + lVar246) = 0;
          *(undefined8 *)(&stack0xffffffffffffffb8 + lVar246) = 0;
          uVar230 = ~uVar245;
          bVar214 = CARRY8(uVar229 + uVar230,(ulong)(CARRY8(uVar240,uVar258) || bVar213));
          *(undefined8 *)(&stack0xffffffffffffffc0 + lVar246) = 0;
          *(undefined8 *)(&stack0xffffffffffffffc8 + lVar246) = 0;
          uVar249 = ~uVar228;
          bVar215 = CARRY8(uVar237 + uVar249,(ulong)(CARRY8(uVar229,uVar230) || bVar214));
          *(undefined8 *)(&stack0xffffffffffffffd0 + lVar246) = 0;
          *(undefined8 *)(&stack0xffffffffffffffd8 + lVar246) = 0;
          *(undefined8 *)(&stack0xffffffffffffffe0 + lVar246) = 0;
          *(undefined8 *)(&stack0xffffffffffffffe8 + lVar246) = 0;
          bVar216 = (ulong)bVar210 != 0;
          bVar210 = CARRY8((ulong)bVar210 - 1,
                           (ulong)(CARRY8(uVar244,~uVar253) ||
                                  CARRY8(uVar244 + ~uVar253,
                                         (ulong)(CARRY8(uVar237,uVar249) || bVar215))));
          *(undefined8 *)(&stack0xfffffffffffffff0 + lVar246) = 0;
          *(undefined8 *)(&stack0xfffffffffffffff8 + lVar246) = 0;
          uVar227 = uVar252;
          if (bVar216 || bVar210) {
            uVar227 = uVar252 - (uVar247 + (!CARRY8(uVar233,uVar239) && !bVar211));
            uVar233 = uVar233 - (uVar235 + (!CARRY8(uVar255,uVar238) && !bVar217));
            uVar255 = uVar255 - (uVar234 + (uVar226 > uVar232));
            uVar232 = uVar232 - uVar226;
          }
          *param_1 = uVar232;
          param_1[1] = uVar255;
          uVar238 = uVar229;
          if (bVar216 || bVar210) {
            uVar238 = uVar229 - (uVar245 + (!CARRY8(uVar240,uVar258) && !bVar213));
            uVar240 = uVar240 - (uVar224 + (!CARRY8(uVar252,uVar259) && !bVar212));
          }
          param_1[2] = uVar233;
          param_1[3] = uVar227;
          if (bVar216 || bVar210) {
            uVar244 = uVar244 - (uVar253 + (!CARRY8(uVar237,uVar249) && !bVar215));
            uVar237 = uVar237 - (uVar228 + (!CARRY8(uVar229,uVar230) && !bVar214));
          }
          param_1[4] = uVar240;
          param_1[5] = uVar238;
          param_1[6] = uVar237;
          param_1[7] = uVar244;
          goto LAB_100227cb0;
        }
        uVar247 = puVar248[-7];
        uVar238 = *param_4;
        uVar228 = param_4[1];
        uVar226 = param_4[2];
        uVar239 = param_4[3];
        uVar235 = param_4[4];
        uVar259 = param_4[5];
        lVar231 = -0x40;
        uVar224 = param_4[6];
        uVar234 = param_4[7];
        param_4 = param_4 + 8;
        puVar220 = puVar218;
        while( true ) {
          do {
            puVar222 = puVar220;
            uVar245 = uVar238 * uVar247;
            uVar258 = uVar228 * uVar247;
            lVar231 = lVar231 + 8;
            uVar230 = uVar226 * uVar247;
            uVar249 = uVar239 * uVar247;
            uVar253 = uVar235 * uVar247;
            bVar216 = CARRY8(uVar255,uVar258) ||
                      CARRY8(uVar255 + uVar258,(ulong)CARRY8(uVar232,uVar245));
            uVar255 = uVar255 + uVar258 + (ulong)CARRY8(uVar232,uVar245);
            uVar258 = uVar259 * uVar247;
            bVar217 = CARRY8(uVar233,uVar230) || CARRY8(uVar233 + uVar230,(ulong)bVar216);
            uVar250 = uVar233 + uVar230 + (ulong)bVar216;
            uVar230 = uVar224 * uVar247;
            bVar216 = CARRY8(uVar252,uVar249) || CARRY8(uVar252 + uVar249,(ulong)bVar217);
            uVar249 = uVar252 + uVar249 + (ulong)bVar217;
            uVar233 = uVar234 * uVar247;
            bVar217 = CARRY8(uVar240,uVar253) || CARRY8(uVar240 + uVar253,(ulong)bVar216);
            uVar252 = uVar240 + uVar253 + (ulong)bVar216;
            auVar66._8_8_ = 0;
            auVar66._0_8_ = uVar238;
            auVar170._8_8_ = 0;
            auVar170._0_8_ = uVar247;
            uVar240 = SUB168(auVar66 * auVar170,8);
            bVar216 = CARRY8(uVar229,uVar258) || CARRY8(uVar229 + uVar258,(ulong)bVar217);
            uVar251 = uVar229 + uVar258 + (ulong)bVar217;
            auVar67._8_8_ = 0;
            auVar67._0_8_ = uVar228;
            auVar171._8_8_ = 0;
            auVar171._0_8_ = uVar247;
            uVar253 = SUB168(auVar67 * auVar171,8);
            bVar217 = CARRY8(uVar237,uVar230) || CARRY8(uVar237 + uVar230,(ulong)bVar216);
            uVar230 = uVar237 + uVar230 + (ulong)bVar216;
            auVar68._8_8_ = 0;
            auVar68._0_8_ = uVar226;
            auVar172._8_8_ = 0;
            auVar172._0_8_ = uVar247;
            uVar258 = SUB168(auVar68 * auVar172,8);
            uVar237 = uVar244 + uVar233 + (ulong)bVar217;
            auVar69._8_8_ = 0;
            auVar69._0_8_ = uVar239;
            auVar173._8_8_ = 0;
            auVar173._0_8_ = uVar247;
            uVar229 = SUB168(auVar69 * auVar173,8);
            uVar256 = (ulong)bVar210 +
                      (ulong)(CARRY8(uVar244,uVar233) || CARRY8(uVar244 + uVar233,(ulong)bVar217));
            puVar220 = puVar222 + 1;
            *puVar222 = uVar232 + uVar245;
            uVar232 = uVar255 + uVar240;
            auVar70._8_8_ = 0;
            auVar70._0_8_ = uVar235;
            auVar174._8_8_ = 0;
            auVar174._0_8_ = uVar247;
            uVar244 = SUB168(auVar70 * auVar174,8);
            bVar210 = CARRY8(uVar250,uVar253) ||
                      CARRY8(uVar250 + uVar253,(ulong)CARRY8(uVar255,uVar240));
            uVar255 = uVar250 + uVar253 + (ulong)CARRY8(uVar255,uVar240);
            auVar71._8_8_ = 0;
            auVar71._0_8_ = uVar259;
            auVar175._8_8_ = 0;
            auVar175._0_8_ = uVar247;
            uVar245 = SUB168(auVar71 * auVar175,8);
            bVar216 = CARRY8(uVar249,uVar258) || CARRY8(uVar249 + uVar258,(ulong)bVar210);
            uVar233 = uVar249 + uVar258 + (ulong)bVar210;
            auVar72._8_8_ = 0;
            auVar72._0_8_ = uVar224;
            auVar176._8_8_ = 0;
            auVar176._0_8_ = uVar247;
            uVar253 = SUB168(auVar72 * auVar176,8);
            bVar210 = CARRY8(uVar252,uVar229) || CARRY8(uVar252 + uVar229,(ulong)bVar216);
            uVar252 = uVar252 + uVar229 + (ulong)bVar216;
            auVar73._8_8_ = 0;
            auVar73._0_8_ = uVar234;
            auVar177._8_8_ = 0;
            auVar177._0_8_ = uVar247;
            uVar258 = SUB168(auVar73 * auVar177,8);
            uVar247 = *(ulong *)((long)puVar218 + lVar231);
            bVar216 = CARRY8(uVar251,uVar244) || CARRY8(uVar251 + uVar244,(ulong)bVar210);
            uVar240 = uVar251 + uVar244 + (ulong)bVar210;
            bVar210 = CARRY8(uVar230,uVar245) || CARRY8(uVar230 + uVar245,(ulong)bVar216);
            uVar229 = uVar230 + uVar245 + (ulong)bVar216;
            bVar216 = CARRY8(uVar237,uVar253) || CARRY8(uVar237 + uVar253,(ulong)bVar210);
            uVar237 = uVar237 + uVar253 + (ulong)bVar210;
            bVar210 = CARRY8(uVar256,uVar258) || CARRY8(uVar256 + uVar258,(ulong)bVar216);
            uVar244 = uVar256 + uVar258 + (ulong)bVar216;
          } while (lVar231 != 0);
          uVar239 = *puVar220;
          uVar251 = puVar222[2];
          puVar242 = puVar219 + -param_6;
          uVar258 = puVar222[3];
          uVar256 = puVar222[4];
          uVar230 = puVar222[5];
          uVar254 = puVar222[6];
          uVar250 = puVar222[7];
          uVar1 = puVar222[8];
          if (puVar219 == param_4) break;
          uVar247 = puVar248[-7];
          bVar210 = CARRY8(uVar232,uVar239);
          uVar232 = uVar232 + uVar239;
          bVar216 = CARRY8(uVar255,uVar251) || CARRY8(uVar255 + uVar251,(ulong)bVar210);
          uVar255 = uVar255 + uVar251 + (ulong)bVar210;
          uVar238 = *param_4;
          uVar228 = param_4[1];
          bVar210 = CARRY8(uVar233,uVar258) || CARRY8(uVar233 + uVar258,(ulong)bVar216);
          uVar233 = uVar233 + uVar258 + (ulong)bVar216;
          bVar216 = CARRY8(uVar252,uVar256) || CARRY8(uVar252 + uVar256,(ulong)bVar210);
          uVar252 = uVar252 + uVar256 + (ulong)bVar210;
          uVar226 = param_4[2];
          uVar239 = param_4[3];
          bVar210 = CARRY8(uVar240,uVar230) || CARRY8(uVar240 + uVar230,(ulong)bVar216);
          uVar240 = uVar240 + uVar230 + (ulong)bVar216;
          bVar216 = CARRY8(uVar229,uVar254) || CARRY8(uVar229 + uVar254,(ulong)bVar210);
          uVar229 = uVar229 + uVar254 + (ulong)bVar210;
          uVar235 = param_4[4];
          uVar259 = param_4[5];
          bVar217 = CARRY8(uVar237,uVar250) || CARRY8(uVar237 + uVar250,(ulong)bVar216);
          uVar237 = uVar237 + uVar250 + (ulong)bVar216;
          lVar231 = -0x40;
          bVar210 = CARRY8(uVar244,uVar1) || CARRY8(uVar244 + uVar1,(ulong)bVar217);
          uVar244 = uVar244 + uVar1 + (ulong)bVar217;
          uVar224 = param_4[6];
          uVar234 = param_4[7];
          param_4 = param_4 + 8;
        }
        bVar210 = uVar227 != 0;
        bVar216 = CARRY8(uVar232,uVar239) || CARRY8(uVar232 + uVar239,(ulong)bVar210);
        bVar217 = CARRY8(uVar255,uVar251) || CARRY8(uVar255 + uVar251,(ulong)bVar216);
        uVar238 = *puVar218;
        uVar259 = puVar248[2];
        bVar211 = CARRY8(uVar233,uVar258) || CARRY8(uVar233 + uVar258,(ulong)bVar217);
        uVar226 = *puVar242;
        uVar234 = puVar242[1];
        bVar212 = CARRY8(uVar252,uVar256) || CARRY8(uVar252 + uVar256,(ulong)bVar211);
        uVar235 = puVar242[2];
        uVar247 = puVar242[3];
        bVar213 = CARRY8(uVar240,uVar230) || CARRY8(uVar240 + uVar230,(ulong)bVar212);
        bVar214 = CARRY8(uVar229,uVar254) || CARRY8(uVar229 + uVar254,(ulong)bVar213);
        uVar224 = puVar242[4];
        uVar245 = puVar242[5];
        bVar215 = CARRY8(uVar237,uVar250) || CARRY8(uVar237 + uVar250,(ulong)bVar214);
        uVar228 = puVar242[6];
        uVar253 = puVar242[7];
        param_4 = puVar242 + 8;
        uVar227 = (ulong)(CARRY8(uVar244,uVar1) || CARRY8(uVar244 + uVar1,(ulong)bVar215));
        uVar249 = lVar243 * uVar238;
        *puVar220 = uVar232 + uVar239 + (ulong)bVar210;
        puVar222[2] = uVar255 + uVar251 + (ulong)bVar216;
        puVar222[3] = uVar233 + uVar258 + (ulong)bVar217;
        puVar222[4] = uVar252 + uVar256 + (ulong)bVar211;
        uVar239 = puVar248[3];
        uVar258 = puVar248[4];
        puVar222[5] = uVar240 + uVar230 + (ulong)bVar212;
        puVar222[6] = uVar229 + uVar254 + (ulong)bVar213;
        uVar240 = puVar248[5];
        uVar229 = puVar248[6];
        puVar222[7] = uVar237 + uVar250 + (ulong)bVar214;
        puVar222[8] = uVar244 + uVar1 + (ulong)bVar215;
        uVar244 = puVar248[7];
        uVar230 = puVar248[8];
        lVar231 = 8;
      } while (puVar222 + 9 != (ulong *)&stack0xffffffffffffff80);
      puVar248 = puVar248 + 9;
      uVar232 = uVar238 - uVar226;
      bVar210 = CARRY8(uVar259,~uVar234) || CARRY8(uVar259 + ~uVar234,(ulong)(uVar226 <= uVar238));
      uVar259 = uVar259 - (uVar234 + (uVar226 > uVar238));
      lVar246 = lVar223 + -0x40;
      puVar219 = param_1;
      do {
        puVar218 = puVar219;
        lVar231 = uVar235 + !bVar210;
        uVar235 = ~uVar235;
        bVar210 = CARRY8(uVar239 + uVar235,(ulong)bVar210);
        uVar238 = *param_4;
        uVar234 = param_4[1];
        lVar243 = uVar247 + (!CARRY8(uVar239,uVar235) && !bVar210);
        uVar247 = ~uVar247;
        bVar210 = CARRY8(uVar258 + uVar247,(ulong)(CARRY8(uVar239,uVar235) || bVar210));
        *puVar218 = uVar232;
        puVar218[1] = uVar259;
        uVar226 = ~uVar224;
        bVar216 = CARRY8(uVar240 + uVar226,(ulong)(CARRY8(uVar258,uVar247) || bVar210));
        uVar259 = uVar240 - (uVar224 + (!CARRY8(uVar258,uVar247) && !bVar210));
        uVar235 = param_4[2];
        uVar247 = param_4[3];
        uVar224 = ~uVar245;
        bVar210 = CARRY8(uVar229 + uVar224,(ulong)(CARRY8(uVar240,uVar226) || bVar216));
        uVar232 = uVar229 - (uVar245 + (!CARRY8(uVar240,uVar226) && !bVar216));
        puVar218[2] = uVar239 - lVar231;
        puVar218[3] = uVar258 - lVar243;
        uVar226 = ~uVar228;
        bVar216 = CARRY8(uVar244 + uVar226,(ulong)(CARRY8(uVar229,uVar224) || bVar210));
        uVar237 = uVar244 - (uVar228 + (!CARRY8(uVar229,uVar224) && !bVar210));
        uVar224 = param_4[4];
        uVar245 = param_4[5];
        uVar228 = ~uVar253;
        bVar210 = CARRY8(uVar230,uVar228);
        bVar217 = CARRY8(uVar230 + uVar228,(ulong)(CARRY8(uVar244,uVar226) || bVar216));
        uVar249 = uVar230 - (uVar253 + (!CARRY8(uVar244,uVar226) && !bVar216));
        uVar228 = param_4[6];
        uVar253 = param_4[7];
        param_4 = param_4 + 8;
        uVar226 = *puVar248;
        uVar233 = puVar248[1];
        lVar246 = lVar246 + -0x40;
        uVar239 = puVar248[2];
        uVar258 = puVar248[3];
        uVar240 = puVar248[4];
        uVar229 = puVar248[5];
        uVar244 = puVar248[6];
        uVar230 = puVar248[7];
        puVar248 = puVar248 + 8;
        puVar218[4] = uVar259;
        puVar218[5] = uVar232;
        uVar259 = ~uVar238;
        bVar216 = CARRY8(uVar226 + uVar259,(ulong)(bVar210 || bVar217));
        uVar232 = uVar226 - (uVar238 + (!bVar210 && !bVar217));
        puVar218[6] = uVar237;
        puVar218[7] = uVar249;
        uVar238 = ~uVar234;
        bVar217 = CARRY8(uVar233 + uVar238,(ulong)(CARRY8(uVar226,uVar259) || bVar216));
        bVar210 = CARRY8(uVar233,uVar238) || bVar217;
        uVar259 = uVar233 - (uVar234 + (!CARRY8(uVar226,uVar259) && !bVar216));
        puVar219 = puVar218 + 8;
      } while (lVar246 != 0);
      uVar226 = ~uVar235;
      bVar210 = CARRY8(uVar239 + uVar226,(ulong)bVar210);
      puVar219 = puVar221 + param_6;
      uVar234 = *param_1;
      uVar237 = param_1[1];
      uVar249 = ~uVar247;
      bVar216 = CARRY8(uVar258 + uVar249,(ulong)(CARRY8(uVar239,uVar226) || bVar210));
      puVar218[8] = uVar232;
      puVar218[9] = uVar259;
      uVar252 = ~uVar224;
      bVar211 = CARRY8(uVar240 + uVar252,(ulong)(CARRY8(uVar258,uVar249) || bVar216));
      uVar259 = param_1[2];
      uVar232 = param_1[3];
      uVar255 = ~uVar245;
      bVar212 = CARRY8(uVar229 + uVar255,(ulong)(CARRY8(uVar240,uVar252) || bVar211));
      puVar218[10] = uVar239 - (uVar235 + (!CARRY8(uVar233,uVar238) && !bVar217));
      puVar218[0xb] = uVar258 - (uVar247 + (!CARRY8(uVar239,uVar226) && !bVar210));
      uVar247 = ~uVar228;
      bVar217 = CARRY8(uVar244 + uVar247,(ulong)(CARRY8(uVar229,uVar255) || bVar212));
      uVar238 = *puVar219;
      uVar226 = puVar219[1];
      uVar239 = puVar219[2];
      uVar235 = puVar219[3];
      bVar210 = uVar227 != 0;
      bVar213 = CARRY8(uVar227 - 1,
                       (ulong)(CARRY8(uVar230,~uVar253) ||
                              CARRY8(uVar230 + ~uVar253,(ulong)(CARRY8(uVar244,uVar247) || bVar217))
                              ));
      puVar218[0xc] = uVar240 - (uVar224 + (!CARRY8(uVar258,uVar249) && !bVar216));
      puVar218[0xd] = uVar229 - (uVar245 + (!CARRY8(uVar240,uVar252) && !bVar211));
      puVar218[0xe] = uVar244 - (uVar228 + (!CARRY8(uVar229,uVar255) && !bVar212));
      puVar218[0xf] = uVar230 - (uVar253 + (!CARRY8(uVar244,uVar247) && !bVar217));
      lVar223 = lVar223 + -0x20;
      puVar218 = param_1;
      do {
        puVar220 = puVar218;
        puVar248 = puVar221;
        lVar223 = lVar223 + -0x20;
        uVar227 = uVar238;
        if (bVar210 || bVar213) {
          uVar227 = uVar234;
        }
        *puVar248 = 0;
        puVar248[1] = 0;
        uVar224 = uVar226;
        if (bVar210 || bVar213) {
          uVar224 = uVar237;
        }
        uVar234 = puVar220[4];
        uVar237 = puVar220[5];
        uVar238 = puVar219[4];
        uVar226 = puVar219[5];
        uVar228 = uVar239;
        if (bVar210 || bVar213) {
          uVar228 = uVar259;
        }
        puVar248[2] = 0;
        puVar248[3] = 0;
        uVar240 = uVar235;
        if (bVar210 || bVar213) {
          uVar240 = uVar232;
        }
        uVar259 = puVar220[6];
        uVar232 = puVar220[7];
        uVar239 = puVar219[6];
        uVar235 = puVar219[7];
        param_1 = puVar219 + 4;
        *puVar220 = uVar227;
        puVar220[1] = uVar224;
        puVar220[2] = uVar228;
        puVar220[3] = uVar240;
        *param_1 = 0;
        puVar219[5] = 0;
        puVar219[6] = 0;
        puVar219[7] = 0;
        puVar219 = param_1;
        puVar221 = puVar248 + 4;
        puVar218 = puVar220 + 4;
      } while (lVar223 != 0);
      if (bVar210 || bVar213) {
        uVar238 = uVar234;
      }
      puVar248[4] = 0;
      puVar248[5] = 0;
      if (bVar210 || bVar213) {
        uVar226 = uVar237;
      }
      puVar248[6] = 0;
      puVar248[7] = 0;
      if (bVar210 || bVar213) {
        uVar235 = uVar232;
        uVar239 = uVar259;
      }
      puVar220[4] = uVar238;
      puVar220[5] = uVar226;
      puVar220[6] = uVar239;
      puVar220[7] = uVar235;
LAB_100227cb0:
      auVar261._8_8_ = param_1;
      auVar261._0_8_ = 1;
      return auVar261;
    }
  }
  else if ((param_6 & 3) != 0) {
    uVar228 = *param_3;
    uVar227 = param_2[1];
    uVar224 = param_6 * 8;
    lVar223 = *param_5;
    puVar248 = (ulong *)((ulong)(&stack0xffffffffffffffc0 + param_6 * -8) & 0xfffffffffffffff0);
    uVar238 = param_4[1];
    lVar225 = *param_2 * uVar228;
    lVar246 = uVar224 - 0x10;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *param_2;
    auVar106._8_8_ = 0;
    auVar106._0_8_ = uVar228;
    uVar226 = SUB168(auVar2 * auVar106,8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar227;
    auVar107._8_8_ = 0;
    auVar107._0_8_ = uVar228;
    lVar231 = SUB168(auVar3 * auVar107,8);
    uVar239 = lVar225 * lVar223;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *param_4;
    auVar108._8_8_ = 0;
    auVar108._0_8_ = uVar239;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar238;
    auVar109._8_8_ = 0;
    auVar109._0_8_ = uVar239;
    lVar243 = SUB168(auVar5 * auVar109,8);
    uVar235 = SUB168(auVar4 * auVar108,8) + (ulong)(lVar225 != 0);
    puVar221 = param_2 + 2;
    puVar219 = puVar248;
    puVar218 = param_4 + 2;
    while( true ) {
      uVar240 = uVar238 * uVar239;
      uVar238 = uVar227 * uVar228;
      if (lVar246 == 0) break;
      uVar227 = *puVar221;
      uVar244 = uVar238 + uVar226;
      lVar246 = lVar246 + -8;
      uVar226 = lVar231 + (ulong)CARRY8(uVar238,uVar226);
      uVar238 = *puVar218;
      uVar259 = uVar240 + uVar235;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar227;
      auVar110._8_8_ = 0;
      auVar110._0_8_ = uVar228;
      lVar231 = SUB168(auVar6 * auVar110,8);
      uVar235 = lVar243 + (ulong)CARRY8(uVar240,uVar235) + (ulong)CARRY8(uVar259,uVar244);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar238;
      auVar111._8_8_ = 0;
      auVar111._0_8_ = uVar239;
      lVar243 = SUB168(auVar7 * auVar111,8);
      *puVar219 = uVar259 + uVar244;
      puVar221 = puVar221 + 1;
      puVar219 = puVar219 + 1;
      puVar218 = puVar218 + 1;
    }
    uVar228 = uVar238 + uVar226;
    puVar221 = puVar221 + -param_6;
    uVar226 = lVar231 + (ulong)CARRY8(uVar238,uVar226);
    uVar238 = uVar240 + uVar235;
    puVar218 = puVar218 + -param_6;
    uVar235 = lVar243 + (ulong)CARRY8(uVar240,uVar235);
    lVar246 = uVar224 - 8;
    uVar227 = (ulong)(CARRY8(uVar235,uVar226) ||
                     CARRY8(uVar235 + uVar226,(ulong)CARRY8(uVar238,uVar228)));
    *puVar219 = uVar238 + uVar228;
    puVar219[1] = uVar235 + uVar226 + (ulong)CARRY8(uVar238,uVar228);
    do {
      param_3 = param_3 + 1;
      uVar239 = *param_3;
      uVar238 = puVar221[1];
      uVar235 = *puVar221 * uVar239;
      lVar243 = uVar224 - 0x10;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *puVar221;
      auVar112._8_8_ = 0;
      auVar112._0_8_ = uVar239;
      uVar226 = puVar218[1];
      lVar231 = uVar235 + *puVar248;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar238;
      auVar113._8_8_ = 0;
      auVar113._0_8_ = uVar239;
      lVar225 = SUB168(auVar9 * auVar113,8);
      uVar235 = SUB168(auVar8 * auVar112,8) + (ulong)CARRY8(uVar235,*puVar248);
      uVar240 = lVar231 * lVar223;
      lVar246 = lVar246 + -8;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *puVar218;
      auVar114._8_8_ = 0;
      auVar114._0_8_ = uVar240;
      lVar236 = SUB168(auVar10 * auVar114,8);
      bVar210 = lVar231 != 0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar226;
      auVar115._8_8_ = 0;
      auVar115._0_8_ = uVar240;
      uVar228 = SUB168(auVar11 * auVar115,8);
      puVar221 = puVar221 + 2;
      puVar218 = puVar218 + 2;
      puVar219 = puVar248;
      while( true ) {
        uVar259 = uVar226 * uVar240;
        uVar244 = uVar238 * uVar239;
        puVar220 = puVar219 + 1;
        if (lVar243 == 0) break;
        uVar238 = *puVar221;
        lVar243 = lVar243 + -8;
        lVar231 = lVar225 + (ulong)CARRY8(uVar244,uVar235);
        uVar234 = uVar259 + lVar236 + (ulong)bVar210;
        uVar226 = *puVar218;
        lVar236 = uVar228 + CARRY8(uVar259,lVar236 + (ulong)bVar210);
        uVar259 = uVar244 + uVar235 + *puVar220;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar238;
        auVar116._8_8_ = 0;
        auVar116._0_8_ = uVar239;
        lVar225 = SUB168(auVar12 * auVar116,8);
        uVar235 = lVar231 + (ulong)CARRY8(uVar244 + uVar235,*puVar220);
        bVar210 = CARRY8(uVar234,uVar259);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar226;
        auVar117._8_8_ = 0;
        auVar117._0_8_ = uVar240;
        uVar228 = SUB168(auVar13 * auVar117,8);
        *puVar219 = uVar234 + uVar259;
        puVar221 = puVar221 + 1;
        puVar218 = puVar218 + 1;
        puVar219 = puVar220;
      }
      uVar239 = lVar236 + (ulong)bVar210;
      puVar221 = puVar221 + -param_6;
      uVar238 = uVar259 + uVar239;
      puVar218 = puVar218 + -param_6;
      uVar240 = uVar228 + uVar227 + (ulong)CARRY8(uVar259,uVar239);
      uVar226 = uVar244 + uVar235 + *puVar220;
      uVar235 = lVar225 + (ulong)CARRY8(uVar244,uVar235) +
                (ulong)CARRY8(uVar244 + uVar235,*puVar220);
      uVar227 = (ulong)(CARRY8(uVar228,uVar227) ||
                       CARRY8(uVar228 + uVar227,(ulong)CARRY8(uVar259,uVar239))) +
                (ulong)(CARRY8(uVar240,uVar235) ||
                       CARRY8(uVar240 + uVar235,(ulong)CARRY8(uVar238,uVar226)));
      *puVar219 = uVar238 + uVar226;
      *puVar220 = uVar240 + uVar235 + (ulong)CARRY8(uVar238,uVar226);
    } while (lVar246 != 0);
    uVar226 = *puVar248;
    uVar238 = *puVar218;
    bVar210 = 7 < uVar224;
    lVar246 = uVar224 - 8;
    puVar221 = param_1;
    puVar219 = puVar248;
    do {
      puVar220 = puVar221;
      puVar219 = puVar219 + 1;
      puVar218 = puVar218 + 1;
      bVar211 = !bVar210;
      uVar235 = ~uVar238;
      bVar216 = CARRY8(uVar226,uVar235);
      bVar217 = CARRY8(uVar226 + uVar235,(ulong)bVar210);
      bVar210 = bVar216 || bVar217;
      uVar235 = uVar226 - (uVar238 + bVar211);
      uVar226 = *puVar219;
      lVar246 = lVar246 + -8;
      uVar238 = *puVar218;
      *puVar220 = uVar235;
      puVar221 = puVar220 + 1;
    } while (lVar246 != 0);
    bVar210 = CARRY8(uVar227 - 1,
                     (ulong)(CARRY8(uVar226,~uVar238) || CARRY8(uVar226 + ~uVar238,(ulong)bVar210)))
    ;
    auVar260._8_8_ = puVar220 + 2;
    puVar220[1] = uVar226 - (uVar238 + (!bVar216 && !bVar217));
    uVar238 = *puVar248;
    uVar226 = *param_1;
    lVar246 = uVar224 - 8;
    do {
      puVar219 = puVar248 + 1;
      puVar221 = param_1 + 1;
      lVar246 = lVar246 + -8;
      uVar235 = uVar238;
      if (uVar227 != 0 || bVar210) {
        uVar235 = uVar226;
      }
      uVar238 = *puVar219;
      uVar226 = *puVar221;
      *puVar248 = 0;
      *param_1 = uVar235;
      param_1 = puVar221;
      puVar248 = puVar219;
    } while (lVar246 != 0);
    if (uVar227 != 0 || bVar210) {
      uVar238 = uVar226;
    }
    *puVar219 = 0;
    *puVar221 = uVar238;
    auVar260._0_8_ = 1;
    return auVar260;
  }
  lVar246 = param_6 * -8;
  puVar221 = (ulong *)(&stack0xffffffffffffff80 + lVar246);
  lVar231 = *param_5;
  puVar219 = param_2 + param_6;
  uVar253 = *param_3;
  uVar235 = *param_2;
  uVar240 = param_2[1];
  uVar224 = param_2[2];
  uVar244 = param_2[3];
  uVar238 = 0;
  uVar245 = 0;
  uVar247 = 0;
  uVar226 = 0;
  uVar228 = *param_4;
  uVar259 = param_4[1];
  uVar239 = param_4[2];
  uVar234 = param_4[3];
  bVar210 = (ulong *)0xffffffffffffffdf < param_4;
  uVar227 = 0;
  uVar258 = 0;
  puVar218 = auStack_a0 + -param_6;
  do {
    uVar229 = uVar235 * uVar253;
    uVar227 = uVar227 + bVar210;
    uVar232 = uVar240 * uVar253;
    uVar233 = uVar224 * uVar253;
    uVar258 = uVar258 + 8 & 0x1f;
    uVar237 = uVar244 * uVar253;
    lVar243 = uVar238 + uVar229;
    auVar74._8_8_ = 0;
    auVar74._0_8_ = uVar235;
    auVar178._8_8_ = 0;
    auVar178._0_8_ = uVar253;
    uVar230 = SUB168(auVar74 * auVar178,8);
    bVar210 = CARRY8(uVar245,uVar232) || CARRY8(uVar245 + uVar232,(ulong)CARRY8(uVar238,uVar229));
    uVar229 = uVar245 + uVar232 + (ulong)CARRY8(uVar238,uVar229);
    uVar255 = lVar243 * lVar231;
    bVar216 = CARRY8(uVar247,uVar233) || CARRY8(uVar247 + uVar233,(ulong)bVar210);
    uVar232 = uVar247 + uVar233 + (ulong)bVar210;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = uVar240;
    auVar179._8_8_ = 0;
    auVar179._0_8_ = uVar253;
    uVar247 = SUB168(auVar75 * auVar179,8);
    uVar233 = uVar226 + uVar237 + (ulong)bVar216;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = uVar224;
    auVar180._8_8_ = 0;
    auVar180._0_8_ = uVar253;
    uVar245 = SUB168(auVar76 * auVar180,8);
    auVar77._8_8_ = 0;
    auVar77._0_8_ = uVar244;
    auVar181._8_8_ = 0;
    auVar181._0_8_ = uVar253;
    uVar253 = *(ulong *)((long)param_3 + uVar258);
    uVar238 = uVar229 + uVar230;
    puVar248 = puVar218 + 1;
    *puVar218 = uVar255;
    bVar210 = CARRY8(uVar232,uVar247) || CARRY8(uVar232 + uVar247,(ulong)CARRY8(uVar229,uVar230));
    uVar230 = uVar232 + uVar247 + (ulong)CARRY8(uVar229,uVar230);
    uVar247 = uVar259 * uVar255;
    uVar249 = uVar233 + uVar245 + (ulong)bVar210;
    uVar229 = uVar239 * uVar255;
    uVar252 = (ulong)(CARRY8(uVar226,uVar237) || CARRY8(uVar226 + uVar237,(ulong)bVar216)) +
              SUB168(auVar77 * auVar181,8) +
              (ulong)(CARRY8(uVar233,uVar245) || CARRY8(uVar233 + uVar245,(ulong)bVar210));
    uVar245 = uVar234 * uVar255;
    auVar78._8_8_ = 0;
    auVar78._0_8_ = uVar228;
    auVar182._8_8_ = 0;
    auVar182._0_8_ = uVar255;
    uVar226 = SUB168(auVar78 * auVar182,8);
    bVar210 = CARRY8(uVar238,uVar247) || CARRY8(uVar238 + uVar247,(ulong)(lVar243 != 0));
    uVar232 = uVar238 + uVar247 + (ulong)(lVar243 != 0);
    auVar79._8_8_ = 0;
    auVar79._0_8_ = uVar259;
    auVar183._8_8_ = 0;
    auVar183._0_8_ = uVar255;
    uVar247 = SUB168(auVar79 * auVar183,8);
    bVar216 = CARRY8(uVar230,uVar229) || CARRY8(uVar230 + uVar229,(ulong)bVar210);
    uVar233 = uVar230 + uVar229 + (ulong)bVar210;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = uVar239;
    auVar184._8_8_ = 0;
    auVar184._0_8_ = uVar255;
    uVar229 = SUB168(auVar80 * auVar184,8);
    bVar210 = CARRY8(uVar249,uVar245) || CARRY8(uVar249 + uVar245,(ulong)bVar216);
    uVar237 = uVar249 + uVar245 + (ulong)bVar216;
    auVar81._8_8_ = 0;
    auVar81._0_8_ = uVar234;
    auVar185._8_8_ = 0;
    auVar185._0_8_ = uVar255;
    uVar230 = SUB168(auVar81 * auVar185,8);
    uVar249 = uVar252 + uVar227 + (ulong)bVar210;
    uVar227 = (ulong)(CARRY8(uVar252,uVar227) || CARRY8(uVar252 + uVar227,(ulong)bVar210));
    uVar238 = uVar232 + uVar226;
    bVar210 = CARRY8(uVar233,uVar247) || CARRY8(uVar233 + uVar247,(ulong)CARRY8(uVar232,uVar226));
    uVar245 = uVar233 + uVar247 + (ulong)CARRY8(uVar232,uVar226);
    bVar216 = CARRY8(uVar237,uVar229) || CARRY8(uVar237 + uVar229,(ulong)bVar210);
    uVar247 = uVar237 + uVar229 + (ulong)bVar210;
    bVar210 = CARRY8(uVar249,uVar230) || CARRY8(uVar249 + uVar230,(ulong)bVar216);
    uVar226 = uVar249 + uVar230 + (ulong)bVar216;
    puVar218 = puVar248;
  } while (uVar258 != 0);
  if (puVar219 == param_2 + 4) {
    uVar235 = ~uVar259;
    bVar216 = CARRY8(uVar245 + uVar235,(ulong)(uVar228 <= uVar238));
    auStack_a0[-param_6] = 0;
    auStack_a0[1 - param_6] = 0;
    uVar224 = ~uVar239;
    bVar217 = CARRY8(uVar247 + uVar224,(ulong)(CARRY8(uVar245,uVar235) || bVar216));
    auStack_a0[2 - param_6] = 0;
    auStack_a0[3 - param_6] = 0;
    *puVar221 = 0;
    *(undefined8 *)(&stack0xffffffffffffff88 + lVar246) = 0;
    *(undefined8 *)(&stack0xffffffffffffff90 + lVar246) = 0;
    *(undefined8 *)(&stack0xffffffffffffff98 + lVar246) = 0;
    if (uVar227 + bVar210 != 0 ||
        CARRY8((uVar227 + bVar210) - 1,
               (ulong)(CARRY8(uVar226,~uVar234) ||
                      CARRY8(uVar226 + ~uVar234,(ulong)(CARRY8(uVar247,uVar224) || bVar217))))) {
      uVar226 = uVar226 - (uVar234 + (!CARRY8(uVar247,uVar224) && !bVar217));
      uVar247 = uVar247 - (uVar239 + (!CARRY8(uVar245,uVar235) && !bVar216));
      uVar245 = uVar245 - (uVar259 + (uVar228 > uVar238));
      uVar238 = uVar238 - uVar228;
    }
    *param_1 = uVar238;
    param_1[1] = uVar245;
    param_1[2] = uVar247;
    param_1[3] = uVar226;
  }
  else {
    uVar235 = param_2[4];
    uVar240 = param_2[5];
    uVar224 = param_2[6];
    uVar244 = param_2[7];
    param_2 = param_2 + 8;
    uVar229 = auStack_a0[-param_6];
    uVar228 = param_4[4];
    uVar259 = param_4[5];
    uVar239 = param_4[6];
    uVar234 = param_4[7];
    param_4 = param_4 + 8;
    uVar258 = 0;
    while( true ) {
      do {
        puVar218 = puVar248;
        uVar232 = uVar235 * uVar253;
        uVar227 = uVar227 + bVar210;
        uVar237 = uVar240 * uVar253;
        uVar249 = uVar224 * uVar253;
        uVar258 = uVar258 + 8 & 0x1f;
        uVar252 = uVar244 * uVar253;
        uVar230 = uVar238 + uVar232;
        auVar82._8_8_ = 0;
        auVar82._0_8_ = uVar235;
        auVar186._8_8_ = 0;
        auVar186._0_8_ = uVar253;
        uVar233 = SUB168(auVar82 * auVar186,8);
        bVar210 = CARRY8(uVar245,uVar237) ||
                  CARRY8(uVar245 + uVar237,(ulong)CARRY8(uVar238,uVar232));
        uVar237 = uVar245 + uVar237 + (ulong)CARRY8(uVar238,uVar232);
        auVar83._8_8_ = 0;
        auVar83._0_8_ = uVar240;
        auVar187._8_8_ = 0;
        auVar187._0_8_ = uVar253;
        uVar245 = SUB168(auVar83 * auVar187,8);
        bVar216 = CARRY8(uVar247,uVar249) || CARRY8(uVar247 + uVar249,(ulong)bVar210);
        uVar249 = uVar247 + uVar249 + (ulong)bVar210;
        auVar84._8_8_ = 0;
        auVar84._0_8_ = uVar224;
        auVar188._8_8_ = 0;
        auVar188._0_8_ = uVar253;
        uVar232 = SUB168(auVar84 * auVar188,8);
        uVar250 = uVar226 + uVar252 + (ulong)bVar216;
        auVar85._8_8_ = 0;
        auVar85._0_8_ = uVar244;
        auVar189._8_8_ = 0;
        auVar189._0_8_ = uVar253;
        uVar253 = *(ulong *)((long)param_3 + uVar258);
        uVar238 = uVar237 + uVar233;
        uVar247 = uVar228 * uVar229;
        bVar210 = CARRY8(uVar249,uVar245) ||
                  CARRY8(uVar249 + uVar245,(ulong)CARRY8(uVar237,uVar233));
        uVar255 = uVar249 + uVar245 + (ulong)CARRY8(uVar237,uVar233);
        uVar245 = uVar259 * uVar229;
        uVar251 = uVar250 + uVar232 + (ulong)bVar210;
        uVar233 = uVar239 * uVar229;
        uVar250 = (ulong)(CARRY8(uVar226,uVar252) || CARRY8(uVar226 + uVar252,(ulong)bVar216)) +
                  SUB168(auVar85 * auVar189,8) +
                  (ulong)(CARRY8(uVar250,uVar232) || CARRY8(uVar250 + uVar232,(ulong)bVar210));
        uVar237 = uVar234 * uVar229;
        auVar86._8_8_ = 0;
        auVar86._0_8_ = uVar228;
        auVar190._8_8_ = 0;
        auVar190._0_8_ = uVar229;
        uVar226 = SUB168(auVar86 * auVar190,8);
        bVar210 = CARRY8(uVar238,uVar245) ||
                  CARRY8(uVar238 + uVar245,(ulong)CARRY8(uVar230,uVar247));
        uVar249 = uVar238 + uVar245 + (ulong)CARRY8(uVar230,uVar247);
        auVar87._8_8_ = 0;
        auVar87._0_8_ = uVar259;
        auVar191._8_8_ = 0;
        auVar191._0_8_ = uVar229;
        uVar245 = SUB168(auVar87 * auVar191,8);
        bVar216 = CARRY8(uVar255,uVar233) || CARRY8(uVar255 + uVar233,(ulong)bVar210);
        uVar252 = uVar255 + uVar233 + (ulong)bVar210;
        auVar88._8_8_ = 0;
        auVar88._0_8_ = uVar239;
        auVar192._8_8_ = 0;
        auVar192._0_8_ = uVar229;
        uVar232 = SUB168(auVar88 * auVar192,8);
        bVar210 = CARRY8(uVar251,uVar237) || CARRY8(uVar251 + uVar237,(ulong)bVar216);
        uVar237 = uVar251 + uVar237 + (ulong)bVar216;
        uVar255 = uVar250 + uVar227 + (ulong)bVar210;
        auVar89._8_8_ = 0;
        auVar89._0_8_ = uVar234;
        auVar193._8_8_ = 0;
        auVar193._0_8_ = uVar229;
        uVar233 = SUB168(auVar89 * auVar193,8);
        uVar227 = (ulong)(CARRY8(uVar250,uVar227) || CARRY8(uVar250 + uVar227,(ulong)bVar210));
        uVar229 = *(ulong *)((long)auStack_a0 + uVar258 + lVar246);
        puVar248 = puVar218 + 1;
        *puVar218 = uVar230 + uVar247;
        uVar238 = uVar249 + uVar226;
        bVar210 = CARRY8(uVar252,uVar245) ||
                  CARRY8(uVar252 + uVar245,(ulong)CARRY8(uVar249,uVar226));
        uVar245 = uVar252 + uVar245 + (ulong)CARRY8(uVar249,uVar226);
        bVar216 = CARRY8(uVar237,uVar232) || CARRY8(uVar237 + uVar232,(ulong)bVar210);
        uVar247 = uVar237 + uVar232 + (ulong)bVar210;
        bVar210 = CARRY8(uVar255,uVar233) || CARRY8(uVar255 + uVar233,(ulong)bVar216);
        uVar226 = uVar255 + uVar233 + (ulong)bVar216;
      } while (uVar258 != 0);
      puVar220 = puVar219 + -param_6;
      if (puVar219 == param_2) break;
      uVar235 = *param_2;
      uVar240 = param_2[1];
      uVar224 = param_2[2];
      uVar244 = param_2[3];
      param_2 = param_2 + 4;
      uVar228 = *param_4;
      uVar259 = param_4[1];
      uVar239 = param_4[2];
      uVar234 = param_4[3];
      param_4 = param_4 + 4;
    }
    puVar222 = param_3 + 4;
    uVar229 = *puVar222;
    uVar227 = uVar227 + bVar210;
    uVar224 = *puVar220;
    uVar244 = puVar220[1];
    param_4 = param_4 + -param_6;
    uVar228 = puVar220[2];
    uVar259 = puVar220[3];
    puVar220 = puVar220 + 4;
    *puVar248 = uVar238;
    puVar218[2] = uVar245;
    uVar235 = *puVar221;
    uVar234 = *(ulong *)(&stack0xffffffffffffff88 + lVar246);
    puVar218[3] = uVar247;
    puVar218[4] = uVar226;
    uVar226 = *(ulong *)(&stack0xffffffffffffff90 + lVar246);
    uVar247 = *(ulong *)(&stack0xffffffffffffff98 + lVar246);
    uVar239 = *param_4;
    uVar245 = param_4[1];
    uVar240 = param_4[2];
    uVar253 = param_4[3];
    bVar210 = (ulong *)0xffffffffffffffdf < param_4;
    param_4 = param_4 + 4;
    uVar238 = 0;
    uVar258 = 0;
    puVar218 = auStack_a0 + -param_6;
    while( true ) {
      do {
        puVar248 = puVar218;
        uVar230 = uVar224 * uVar229;
        uVar238 = uVar238 + bVar210;
        uVar233 = uVar244 * uVar229;
        uVar237 = uVar228 * uVar229;
        uVar258 = uVar258 + 8 & 0x1f;
        uVar249 = uVar259 * uVar229;
        lVar243 = uVar235 + uVar230;
        auVar90._8_8_ = 0;
        auVar90._0_8_ = uVar224;
        auVar194._8_8_ = 0;
        auVar194._0_8_ = uVar229;
        uVar232 = SUB168(auVar90 * auVar194,8);
        bVar210 = CARRY8(uVar234,uVar233) ||
                  CARRY8(uVar234 + uVar233,(ulong)CARRY8(uVar235,uVar230));
        uVar230 = uVar234 + uVar233 + (ulong)CARRY8(uVar235,uVar230);
        uVar250 = lVar243 * lVar231;
        bVar216 = CARRY8(uVar226,uVar237) || CARRY8(uVar226 + uVar237,(ulong)bVar210);
        uVar233 = uVar226 + uVar237 + (ulong)bVar210;
        auVar91._8_8_ = 0;
        auVar91._0_8_ = uVar244;
        auVar195._8_8_ = 0;
        auVar195._0_8_ = uVar229;
        uVar235 = SUB168(auVar91 * auVar195,8);
        uVar252 = uVar247 + uVar249 + (ulong)bVar216;
        auVar92._8_8_ = 0;
        auVar92._0_8_ = uVar228;
        auVar196._8_8_ = 0;
        auVar196._0_8_ = uVar229;
        uVar234 = SUB168(auVar92 * auVar196,8);
        auVar93._8_8_ = 0;
        auVar93._0_8_ = uVar259;
        auVar197._8_8_ = 0;
        auVar197._0_8_ = uVar229;
        uVar229 = *(ulong *)((long)puVar222 + uVar258);
        uVar226 = uVar230 + uVar232;
        *puVar248 = uVar250;
        bVar210 = CARRY8(uVar233,uVar235) ||
                  CARRY8(uVar233 + uVar235,(ulong)CARRY8(uVar230,uVar232));
        uVar237 = uVar233 + uVar235 + (ulong)CARRY8(uVar230,uVar232);
        uVar235 = uVar245 * uVar250;
        uVar255 = uVar252 + uVar234 + (ulong)bVar210;
        uVar230 = uVar240 * uVar250;
        uVar252 = (ulong)(CARRY8(uVar247,uVar249) || CARRY8(uVar247 + uVar249,(ulong)bVar216)) +
                  SUB168(auVar93 * auVar197,8) +
                  (ulong)(CARRY8(uVar252,uVar234) || CARRY8(uVar252 + uVar234,(ulong)bVar210));
        uVar232 = uVar253 * uVar250;
        auVar94._8_8_ = 0;
        auVar94._0_8_ = uVar239;
        auVar198._8_8_ = 0;
        auVar198._0_8_ = uVar250;
        uVar234 = SUB168(auVar94 * auVar198,8);
        bVar210 = CARRY8(uVar226,uVar235) || CARRY8(uVar226 + uVar235,(ulong)(lVar243 != 0));
        uVar233 = uVar226 + uVar235 + (ulong)(lVar243 != 0);
        auVar95._8_8_ = 0;
        auVar95._0_8_ = uVar245;
        auVar199._8_8_ = 0;
        auVar199._0_8_ = uVar250;
        uVar226 = SUB168(auVar95 * auVar199,8);
        bVar216 = CARRY8(uVar237,uVar230) || CARRY8(uVar237 + uVar230,(ulong)bVar210);
        uVar237 = uVar237 + uVar230 + (ulong)bVar210;
        auVar96._8_8_ = 0;
        auVar96._0_8_ = uVar240;
        auVar200._8_8_ = 0;
        auVar200._0_8_ = uVar250;
        uVar247 = SUB168(auVar96 * auVar200,8);
        bVar210 = CARRY8(uVar255,uVar232) || CARRY8(uVar255 + uVar232,(ulong)bVar216);
        uVar232 = uVar255 + uVar232 + (ulong)bVar216;
        auVar97._8_8_ = 0;
        auVar97._0_8_ = uVar253;
        auVar201._8_8_ = 0;
        auVar201._0_8_ = uVar250;
        uVar230 = SUB168(auVar97 * auVar201,8);
        uVar249 = uVar252 + uVar238 + (ulong)bVar210;
        uVar238 = (ulong)(CARRY8(uVar252,uVar238) || CARRY8(uVar252 + uVar238,(ulong)bVar210));
        uVar235 = uVar233 + uVar234;
        bVar210 = CARRY8(uVar237,uVar226) ||
                  CARRY8(uVar237 + uVar226,(ulong)CARRY8(uVar233,uVar234));
        uVar234 = uVar237 + uVar226 + (ulong)CARRY8(uVar233,uVar234);
        bVar216 = CARRY8(uVar232,uVar247) || CARRY8(uVar232 + uVar247,(ulong)bVar210);
        uVar226 = uVar232 + uVar247 + (ulong)bVar210;
        bVar210 = CARRY8(uVar249,uVar230) || CARRY8(uVar249 + uVar230,(ulong)bVar216);
        uVar247 = uVar249 + uVar230 + (ulong)bVar216;
        puVar218 = puVar248 + 1;
      } while (uVar258 != 0);
      uVar238 = uVar238 + bVar210;
      uVar228 = puVar248[5];
      uVar259 = puVar248[6];
      uVar239 = puVar248[7];
      uVar245 = puVar248[8];
      uVar240 = *puVar220;
      uVar253 = puVar220[1];
      uVar244 = puVar220[2];
      uVar258 = puVar220[3];
      puVar220 = puVar220 + 4;
      uVar224 = uVar235 + uVar228;
      bVar210 = CARRY8(uVar234,uVar259) || CARRY8(uVar234 + uVar259,(ulong)CARRY8(uVar235,uVar228));
      uVar234 = uVar234 + uVar259 + (ulong)CARRY8(uVar235,uVar228);
      bVar216 = CARRY8(uVar226,uVar239) || CARRY8(uVar226 + uVar239,(ulong)bVar210);
      uVar230 = uVar226 + uVar239 + (ulong)bVar210;
      bVar210 = CARRY8(uVar247,uVar245) || CARRY8(uVar247 + uVar245,(ulong)bVar216);
      uVar247 = uVar247 + uVar245 + (ulong)bVar216;
      uVar245 = auStack_a0[-param_6];
      uVar226 = *param_4;
      uVar228 = param_4[1];
      uVar235 = param_4[2];
      uVar239 = param_4[3];
      param_4 = param_4 + 4;
      uVar259 = 0;
      while( true ) {
        do {
          puVar248 = puVar218;
          uVar233 = uVar240 * uVar229;
          uVar238 = uVar238 + bVar210;
          uVar249 = uVar253 * uVar229;
          uVar252 = uVar244 * uVar229;
          uVar259 = uVar259 + 8 & 0x1f;
          uVar255 = uVar258 * uVar229;
          uVar232 = uVar224 + uVar233;
          auVar98._8_8_ = 0;
          auVar98._0_8_ = uVar240;
          auVar202._8_8_ = 0;
          auVar202._0_8_ = uVar229;
          uVar237 = SUB168(auVar98 * auVar202,8);
          bVar210 = CARRY8(uVar234,uVar249) ||
                    CARRY8(uVar234 + uVar249,(ulong)CARRY8(uVar224,uVar233));
          uVar250 = uVar234 + uVar249 + (ulong)CARRY8(uVar224,uVar233);
          auVar99._8_8_ = 0;
          auVar99._0_8_ = uVar253;
          auVar203._8_8_ = 0;
          auVar203._0_8_ = uVar229;
          uVar233 = SUB168(auVar99 * auVar203,8);
          bVar216 = CARRY8(uVar230,uVar252) || CARRY8(uVar230 + uVar252,(ulong)bVar210);
          uVar230 = uVar230 + uVar252 + (ulong)bVar210;
          auVar100._8_8_ = 0;
          auVar100._0_8_ = uVar244;
          auVar204._8_8_ = 0;
          auVar204._0_8_ = uVar229;
          uVar249 = SUB168(auVar100 * auVar204,8);
          uVar251 = uVar247 + uVar255 + (ulong)bVar216;
          auVar101._8_8_ = 0;
          auVar101._0_8_ = uVar258;
          auVar205._8_8_ = 0;
          auVar205._0_8_ = uVar229;
          uVar229 = *(ulong *)((long)puVar222 + uVar259);
          uVar224 = uVar250 + uVar237;
          uVar234 = uVar226 * uVar245;
          bVar210 = CARRY8(uVar230,uVar233) ||
                    CARRY8(uVar230 + uVar233,(ulong)CARRY8(uVar250,uVar237));
          uVar252 = uVar230 + uVar233 + (ulong)CARRY8(uVar250,uVar237);
          uVar230 = uVar228 * uVar245;
          uVar250 = uVar251 + uVar249 + (ulong)bVar210;
          uVar233 = uVar235 * uVar245;
          uVar251 = (ulong)(CARRY8(uVar247,uVar255) || CARRY8(uVar247 + uVar255,(ulong)bVar216)) +
                    SUB168(auVar101 * auVar205,8) +
                    (ulong)(CARRY8(uVar251,uVar249) || CARRY8(uVar251 + uVar249,(ulong)bVar210));
          uVar237 = uVar239 * uVar245;
          auVar102._8_8_ = 0;
          auVar102._0_8_ = uVar226;
          auVar206._8_8_ = 0;
          auVar206._0_8_ = uVar245;
          uVar247 = SUB168(auVar102 * auVar206,8);
          bVar210 = CARRY8(uVar224,uVar230) ||
                    CARRY8(uVar224 + uVar230,(ulong)CARRY8(uVar232,uVar234));
          uVar249 = uVar224 + uVar230 + (ulong)CARRY8(uVar232,uVar234);
          auVar103._8_8_ = 0;
          auVar103._0_8_ = uVar228;
          auVar207._8_8_ = 0;
          auVar207._0_8_ = uVar245;
          uVar230 = SUB168(auVar103 * auVar207,8);
          bVar216 = CARRY8(uVar252,uVar233) || CARRY8(uVar252 + uVar233,(ulong)bVar210);
          uVar252 = uVar252 + uVar233 + (ulong)bVar210;
          auVar104._8_8_ = 0;
          auVar104._0_8_ = uVar235;
          auVar208._8_8_ = 0;
          auVar208._0_8_ = uVar245;
          uVar233 = SUB168(auVar104 * auVar208,8);
          bVar210 = CARRY8(uVar250,uVar237) || CARRY8(uVar250 + uVar237,(ulong)bVar216);
          uVar255 = uVar250 + uVar237 + (ulong)bVar216;
          auVar105._8_8_ = 0;
          auVar105._0_8_ = uVar239;
          auVar209._8_8_ = 0;
          auVar209._0_8_ = uVar245;
          uVar237 = SUB168(auVar105 * auVar209,8);
          uVar250 = uVar251 + uVar238 + (ulong)bVar210;
          uVar245 = *(ulong *)((long)auStack_a0 + uVar259 + lVar246);
          uVar238 = (ulong)(CARRY8(uVar251,uVar238) || CARRY8(uVar251 + uVar238,(ulong)bVar210));
          puVar218 = puVar248 + 1;
          *puVar248 = uVar232 + uVar234;
          uVar224 = uVar249 + uVar247;
          bVar210 = CARRY8(uVar252,uVar230) ||
                    CARRY8(uVar252 + uVar230,(ulong)CARRY8(uVar249,uVar247));
          uVar234 = uVar252 + uVar230 + (ulong)CARRY8(uVar249,uVar247);
          bVar216 = CARRY8(uVar255,uVar233) || CARRY8(uVar255 + uVar233,(ulong)bVar210);
          uVar230 = uVar255 + uVar233 + (ulong)bVar210;
          bVar210 = CARRY8(uVar250,uVar237) || CARRY8(uVar250 + uVar237,(ulong)bVar216);
          uVar247 = uVar250 + uVar237 + (ulong)bVar216;
        } while (uVar259 != 0);
        puVar242 = param_4 + -param_6;
        uVar238 = uVar238 + bVar210;
        if (puVar219 == puVar220) break;
        uVar226 = puVar248[5];
        uVar228 = puVar248[6];
        uVar235 = puVar248[7];
        uVar239 = puVar248[8];
        uVar240 = *puVar220;
        uVar253 = puVar220[1];
        uVar244 = puVar220[2];
        uVar258 = puVar220[3];
        puVar220 = puVar220 + 4;
        bVar210 = CARRY8(uVar224,uVar226);
        uVar224 = uVar224 + uVar226;
        bVar216 = CARRY8(uVar234,uVar228) || CARRY8(uVar234 + uVar228,(ulong)bVar210);
        uVar234 = uVar234 + uVar228 + (ulong)bVar210;
        bVar217 = CARRY8(uVar230,uVar235) || CARRY8(uVar230 + uVar235,(ulong)bVar216);
        uVar230 = uVar230 + uVar235 + (ulong)bVar216;
        bVar210 = CARRY8(uVar247,uVar239) || CARRY8(uVar247 + uVar239,(ulong)bVar217);
        uVar247 = uVar247 + uVar239 + (ulong)bVar217;
        uVar226 = *param_4;
        uVar228 = param_4[1];
        uVar235 = param_4[2];
        uVar239 = param_4[3];
        param_4 = param_4 + 4;
      }
      puVar222 = puVar222 + 4;
      bVar210 = CARRY8(uVar234,(ulong)CARRY8(uVar224,uVar227));
      puVar220 = puVar220 + -param_6;
      bVar216 = CARRY8(uVar230,(ulong)bVar210);
      *puVar218 = uVar224 + uVar227;
      puVar248[2] = uVar234 + CARRY8(uVar224,uVar227);
      uVar235 = *puVar221;
      uVar234 = *(ulong *)(&stack0xffffffffffffff88 + lVar246);
      uVar227 = uVar238 + CARRY8(uVar247,(ulong)bVar216);
      puVar248[3] = uVar230 + bVar210;
      puVar248[4] = uVar247 + bVar216;
      uVar226 = *(ulong *)(&stack0xffffffffffffff90 + lVar246);
      uVar247 = *(ulong *)(&stack0xffffffffffffff98 + lVar246);
      uVar239 = *puVar242;
      uVar245 = puVar242[1];
      uVar240 = puVar242[2];
      uVar253 = puVar242[3];
      param_4 = puVar242 + 4;
      if (puVar222 == param_3 + param_6) break;
      uVar229 = *puVar222;
      uVar224 = *puVar220;
      uVar244 = puVar220[1];
      uVar228 = puVar220[2];
      uVar259 = puVar220[3];
      bVar210 = (ulong *)0xffffffffffffffdf < puVar220;
      puVar220 = puVar220 + 4;
      uVar238 = 0;
      uVar258 = 0;
      puVar218 = auStack_a0 + -param_6;
    }
    uVar238 = uVar235 - uVar239;
    puVar219 = (ulong *)(&stack0xffffffffffffffa0 + lVar246);
    bVar210 = CARRY8(uVar234,~uVar245) || CARRY8(uVar234 + ~uVar245,(ulong)(uVar239 <= uVar235));
    uVar234 = uVar234 - (uVar245 + (uVar239 > uVar235));
    lVar231 = param_6 * 8 + -0x20;
    puVar218 = param_1;
    do {
      puVar248 = puVar218;
      uVar244 = ~uVar240;
      bVar216 = CARRY8(uVar226 + uVar244,(ulong)bVar210);
      uVar259 = uVar226 - (uVar240 + !bVar210);
      uVar235 = *param_4;
      uVar228 = param_4[1];
      lVar231 = lVar231 + -0x20;
      uVar224 = *puVar219;
      uVar239 = puVar219[1];
      uVar240 = ~uVar253;
      bVar210 = CARRY8(uVar247,uVar240);
      bVar217 = CARRY8(uVar247 + uVar240,(ulong)(CARRY8(uVar226,uVar244) || bVar216));
      uVar245 = uVar247 - (uVar253 + (!CARRY8(uVar226,uVar244) && !bVar216));
      uVar240 = param_4[2];
      uVar253 = param_4[3];
      param_4 = param_4 + 4;
      uVar226 = puVar219[2];
      uVar247 = puVar219[3];
      puVar219 = puVar219 + 4;
      *puVar248 = uVar238;
      puVar248[1] = uVar234;
      uVar244 = ~uVar235;
      bVar216 = CARRY8(uVar224 + uVar244,(ulong)(bVar210 || bVar217));
      uVar238 = uVar224 - (uVar235 + (!bVar210 && !bVar217));
      puVar248[2] = uVar259;
      puVar248[3] = uVar245;
      uVar235 = ~uVar228;
      bVar217 = CARRY8(uVar239 + uVar235,(ulong)(CARRY8(uVar224,uVar244) || bVar216));
      bVar210 = CARRY8(uVar239,uVar235) || bVar217;
      uVar234 = uVar239 - (uVar228 + (!CARRY8(uVar224,uVar244) && !bVar216));
      puVar218 = puVar248 + 4;
    } while (lVar231 != 0);
    uVar258 = ~uVar240;
    bVar216 = CARRY8(uVar226 + uVar258,(ulong)bVar210);
    uVar244 = *param_1;
    uVar245 = param_1[1];
    puVar248[4] = uVar238;
    puVar248[5] = uVar234;
    uVar259 = param_1[2];
    uVar234 = param_1[3];
    puVar248[6] = uVar226 - (uVar240 + (!CARRY8(uVar239,uVar235) && !bVar217));
    puVar248[7] = uVar247 - (uVar253 + (!CARRY8(uVar226,uVar258) && !bVar216));
    uVar238 = *puVar221;
    uVar235 = *(ulong *)(&stack0xffffffffffffff88 + lVar246);
    uVar224 = *(ulong *)(&stack0xffffffffffffff90 + lVar246);
    uVar228 = *(ulong *)(&stack0xffffffffffffff98 + lVar246);
    bVar210 = uVar227 != 0;
    bVar216 = CARRY8(uVar227 - 1,
                     (ulong)(CARRY8(uVar247,~uVar253) ||
                            CARRY8(uVar247 + ~uVar253,(ulong)(CARRY8(uVar226,uVar258) || bVar216))))
    ;
    lVar246 = param_6 * 8 + -0x20;
    puVar219 = auStack_a0 + -param_6;
    do {
      puVar218 = param_1;
      puVar257 = puVar219;
      lVar246 = lVar246 + -0x20;
      uVar227 = uVar238;
      if (bVar210 || bVar216) {
        uVar227 = uVar244;
      }
      *puVar257 = 0;
      puVar257[1] = 0;
      uVar226 = uVar235;
      if (bVar210 || bVar216) {
        uVar226 = uVar245;
      }
      uVar244 = puVar218[4];
      uVar245 = puVar218[5];
      uVar238 = puVar221[4];
      uVar235 = puVar221[5];
      uVar239 = uVar224;
      if (bVar210 || bVar216) {
        uVar239 = uVar259;
      }
      puVar257[2] = 0;
      puVar257[3] = 0;
      uVar240 = uVar228;
      if (bVar210 || bVar216) {
        uVar240 = uVar234;
      }
      uVar259 = puVar218[6];
      uVar234 = puVar218[7];
      uVar224 = puVar221[6];
      uVar228 = puVar221[7];
      puVar221 = puVar221 + 4;
      *puVar218 = uVar227;
      puVar218[1] = uVar226;
      puVar218[2] = uVar239;
      puVar218[3] = uVar240;
      puVar219 = puVar257 + 4;
      param_1 = puVar218 + 4;
    } while (lVar246 != 0);
    if (bVar210 || bVar216) {
      uVar238 = uVar244;
    }
    puVar257[4] = 0;
    puVar257[5] = 0;
    if (bVar210 || bVar216) {
      uVar235 = uVar245;
    }
    puVar257[6] = 0;
    puVar257[7] = 0;
    if (bVar210 || bVar216) {
      uVar224 = uVar259;
    }
    puVar257[7] = 0;
    puVar257[8] = 0;
    if (bVar210 || bVar216) {
      uVar228 = uVar234;
    }
    puVar257[8] = 0;
    puVar257[9] = 0;
    puVar218[4] = uVar238;
    puVar218[5] = uVar235;
    puVar218[6] = uVar224;
    puVar218[7] = uVar228;
    param_1 = puVar221;
  }
  auVar262._8_8_ = param_1;
  auVar262._0_8_ = 1;
  return auVar262;
}



/* Entry: 100228330; end: 1002283b7;  */

void FUN_100228330(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  FUN_1002258d0(param_4);
  lVar2 = param_4;
  FUN_100225974();
  if ((lVar2 != 0) && (lVar1 = lVar2, func_0x000100225e74(), lVar1 != 0)) {
    FUN_1002283b8(param_1,lVar2,param_3);
  }
  if (*(char *)(param_4 + 0x28) == '\0') {
    lVar2 = *(long *)(param_4 + 0x10) + -1;
    *(long *)(param_4 + 0x10) = lVar2;
    *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(*(long *)(param_4 + 8) + lVar2 * 8);
  }
  return;
}



/* Entry: 1002283b8; end: 10022846b;  */

long * FUN_1002283b8(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  long *plVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  if ((int)param_2[2] == 0) {
    if (*(int *)(param_3 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      plVar3 = (long *)0x1;
    }
    else {
      plVar3 = param_2;
      FUN_1002269c4(param_2,(long)*(int *)(param_3 + 0x20) << 1);
      if (((int)plVar3 != 0) &&
         (plVar3 = param_1, FUN_100202744(param_1,(long)*(int *)(param_3 + 0x20)), (int)plVar3 != 0)
         ) {
        lVar7 = (long)*(int *)(param_3 + 0x20);
        *(int *)(param_1 + 1) = *(int *)(param_3 + 0x20);
        *(undefined4 *)(param_1 + 2) = 0;
        puVar4 = (ulong *)*param_1;
        plVar3 = (long *)*param_2;
        iVar2 = *(int *)(param_3 + 0x20);
        if (lVar7 == iVar2 && (long)iVar2 * 2 - (long)(int)param_2[1] == 0) {
          uVar9 = *(undefined8 *)(param_3 + 0x18);
          uVar11 = 0;
          if (iVar2 != 0) {
            lVar12 = *(long *)(param_3 + 0x30);
            plVar10 = plVar3;
            lVar13 = lVar7;
            do {
              plVar5 = plVar10;
              FUN_100228588(plVar10,uVar9,lVar7,*plVar10 * lVar12);
              uVar1 = (long)plVar5 + uVar11 + plVar10[lVar7];
              uVar11 = (ulong)((uint)(uVar1 <= (ulong)plVar10[lVar7]) &
                              ((uint)((long)plVar5 + uVar11 != 0) | (uint)uVar11));
              plVar10[lVar7] = uVar1;
              plVar10 = plVar10 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
          puVar8 = (ulong *)(plVar3 + lVar7);
          puVar6 = puVar4;
          func_0x00010022673c(puVar4,puVar8,uVar9,lVar7);
          if (lVar7 != 0) {
            do {
              *puVar4 = *puVar4 & ~(uVar11 - (long)puVar6) | *puVar8 & uVar11 - (long)puVar6;
              lVar7 = lVar7 + -1;
              puVar4 = puVar4 + 1;
              puVar8 = puVar8 + 1;
            } while (lVar7 != 0);
          }
          plVar3 = (long *)0x1;
        }
        else {
          FUN_1004d2c58(3,0,0x42,&UNK_10f6c6a15,0x125);
          plVar3 = (long *)0x0;
        }
        return plVar3;
      }
    }
  }
  else {
    FUN_1004d2c58(3,0,0x6d,&UNK_10f6c6a15,0x142);
    plVar3 = (long *)0x0;
  }
  return plVar3;
}



/* Entry: 10022846c; end: 100228587;  */

undefined8 FUN_10022846c(ulong *param_1,long param_2,long *param_3,long param_4,long param_5)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  iVar2 = *(int *)(param_5 + 0x20);
  if (param_2 == iVar2 && (long)iVar2 * 2 - param_4 == 0) {
    uVar3 = *(undefined8 *)(param_5 + 0x18);
    uVar8 = 0;
    if (iVar2 != 0) {
      lVar9 = *(long *)(param_5 + 0x30);
      plVar7 = param_3;
      lVar10 = param_2;
      do {
        plVar4 = plVar7;
        FUN_100228588(plVar7,uVar3,param_2,*plVar7 * lVar9);
        uVar1 = (long)plVar4 + uVar8 + plVar7[param_2];
        uVar8 = (ulong)((uint)(uVar1 <= (ulong)plVar7[param_2]) &
                       ((uint)((long)plVar4 + uVar8 != 0) | (uint)uVar8));
        plVar7[param_2] = uVar1;
        plVar7 = plVar7 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    puVar5 = param_1;
    func_0x00010022673c(param_1,param_3 + param_2,uVar3,param_2);
    if (param_2 != 0) {
      puVar6 = (ulong *)(param_3 + param_2);
      do {
        *param_1 = *param_1 & ~(uVar8 - (long)puVar5) | *puVar6 & uVar8 - (long)puVar5;
        param_2 = param_2 + -1;
        param_1 = param_1 + 1;
        puVar6 = puVar6 + 1;
      } while (param_2 != 0);
    }
    uVar3 = 1;
  }
  else {
    FUN_1004d2c58(3,0,0x42,&UNK_10f6c6a15,0x125);
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 100228588; end: 10022867b;  */

ulong FUN_100228588(ulong *param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (param_3 == 0) {
    uVar11 = 0;
  }
  else {
    if (param_3 < 4) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = *param_2;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = param_4;
        uVar13 = *param_2 * param_4;
        uVar14 = *param_1 + uVar11;
        uVar12 = (ulong)CARRY8(*param_1,uVar11) + SUB168(auVar1 * auVar6,8) +
                 (ulong)CARRY8(uVar14,uVar13);
        *param_1 = uVar14 + uVar13;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = param_2[1];
        auVar7._8_8_ = 0;
        auVar7._0_8_ = param_4;
        uVar14 = SUB168(auVar2 * auVar7,8);
        uVar13 = param_2[1] * param_4;
        uVar11 = uVar13 + param_1[1];
        if (CARRY8(uVar13,param_1[1])) {
          uVar14 = uVar14 + 1;
        }
        if (CARRY8(uVar11,uVar12)) {
          uVar14 = uVar14 + 1;
        }
        param_1[1] = uVar11 + uVar12;
        uVar12 = param_2[2] * param_4;
        uVar11 = uVar12 + param_1[2];
        auVar3._8_8_ = 0;
        auVar3._0_8_ = param_2[2];
        auVar8._8_8_ = 0;
        auVar8._0_8_ = param_4;
        uVar13 = SUB168(auVar3 * auVar8,8);
        if (CARRY8(uVar12,param_1[2])) {
          uVar13 = uVar13 + 1;
        }
        if (CARRY8(uVar11,uVar14)) {
          uVar13 = uVar13 + 1;
        }
        param_1[2] = uVar11 + uVar14;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_2[3];
        auVar9._8_8_ = 0;
        auVar9._0_8_ = param_4;
        uVar11 = SUB168(auVar4 * auVar9,8);
        uVar12 = param_2[3] * param_4;
        uVar14 = uVar12 + param_1[3];
        if (CARRY8(uVar12,param_1[3])) {
          uVar11 = uVar11 + 1;
        }
        if (CARRY8(uVar14,uVar13)) {
          uVar11 = uVar11 + 1;
        }
        param_1[3] = uVar14 + uVar13;
        param_2 = param_2 + 4;
        param_1 = param_1 + 4;
        param_3 = param_3 - 4;
      } while (3 < param_3);
      if (param_3 == 0) {
        return uVar11;
      }
    }
    do {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_4;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *param_2;
      uVar13 = param_4 * *param_2;
      uVar14 = *param_1 + uVar11;
      uVar11 = (ulong)CARRY8(*param_1,uVar11) + SUB168(auVar5 * auVar10,8) +
               (ulong)CARRY8(uVar14,uVar13);
      *param_1 = uVar14 + uVar13;
      param_3 = param_3 - 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return uVar11;
}



/* Entry: 10022867c; end: 1002286f7;  */

undefined8 FUN_10022867c(long param_1,ulong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  undefined1 *puVar5;
  byte bVar6;
  ulong uVar7;
  
  uVar2 = (long)*(int *)(param_3 + 1) * 8;
  lVar4 = uVar2 - param_2;
  if (param_2 <= uVar2 && lVar4 != 0) {
    bVar6 = 0;
    pbVar3 = (undefined1 *)*param_3 + param_2;
    do {
      bVar6 = *pbVar3 | bVar6;
      lVar4 = lVar4 + -1;
      pbVar3 = pbVar3 + 1;
    } while (lVar4 != 0);
    uVar2 = param_2;
    if (bVar6 != 0) {
      return 0;
    }
  }
  if (uVar2 != 0) {
    puVar5 = (undefined1 *)(param_2 + param_1);
    puVar1 = (undefined1 *)*param_3;
    uVar7 = uVar2;
    do {
      puVar5 = puVar5 + -1;
      *puVar5 = *puVar1;
      uVar7 = uVar7 - 1;
      puVar1 = puVar1 + 1;
    } while (uVar7 != 0);
  }
  if (param_2 - uVar2 != 0) {
    func_0x000107c60ee4(param_1,param_2 - uVar2);
  }
  return 1;
}



/* Entry: 1002286f8; end: 100228ae3;  */

long * FUN_1002286f8(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                    uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  long *plVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  byte *pbVar16;
  long *plVar17;
  byte *pbVar18;
  byte *unaff_x24;
  uint uVar19;
  ulong unaff_x25;
  int iVar20;
  byte *pbVar21;
  uint uVar22;
  uint uStack_1b4;
  long lStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined8 *puStack_198;
  undefined1 auStack_188 [64];
  long lStack_148;
  byte *pbStack_140;
  ulong uStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  long *plStack_110;
  byte *pbStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  int iStack_e4;
  byte *pbStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_a8 [64];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbStack_c8 = (byte *)0x0;
  lStack_d0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  pbStack_c0 = (byte *)0x0;
  pbVar7 = param_3;
  if (param_4 != (byte *)0x0) {
    pbVar7 = param_4;
  }
  uVar19 = *(uint *)(param_3 + 4);
  pbVar16 = (byte *)(ulong)uVar19;
  uVar22 = param_6;
  if (((param_6 == 0xfffffffe) || (uVar22 = uVar19, param_6 == 0xffffffff)) ||
     (uVar22 = param_6, -3 < (int)param_6)) {
    unaff_x25 = *(ulong *)(param_1 + 8);
    FUN_100202834();
    uVar1 = (uint)unaff_x25 + 7;
    uVar3 = uVar1 & 7;
    if (*(code **)(*(long *)param_1 + 0x20) == (code *)0x0) {
      unaff_x24 = (byte *)(ulong)(uVar1 >> 3);
    }
    else {
      unaff_x24 = param_1;
      (**(code **)(*(long *)param_1 + 0x20))();
    }
    if (*param_5 >> (ulong)uVar3 == 0) {
      uVar1 = (uint)unaff_x25 & 7;
      unaff_x25 = (ulong)uVar1;
      bVar4 = uVar1 == 1;
      if (bVar4) {
        param_5 = param_5 + 1;
      }
      iVar20 = (int)unaff_x24 - (uint)bVar4;
      if (iVar20 < (int)(uVar19 + 2) || iVar20 < (int)(uVar22 + uVar19 + 2)) {
        pbVar11 = (byte *)0x71;
        pbVar13 = (byte *)0x212;
      }
      else if (param_5[(long)iVar20 + -1] == 0xbc) {
        uVar2 = iVar20 + ~uVar19;
        pbStack_d8 = param_2;
        if (uVar2 < 0xfffffff8) {
          pbStack_e0 = (byte *)(long)(int)uVar2;
          pbVar11 = pbStack_e0 + 8;
          iStack_e4 = -(uint)bVar4;
          func_0x000107c610a0();
          if (pbVar11 != (byte *)0x0) {
            pbVar18 = param_5 + (int)uVar2;
            pbVar14 = pbVar11 + 8;
            *(byte **)pbVar11 = pbStack_e0;
            pbVar6 = pbVar14;
            pbVar10 = pbStack_e0;
            pbVar11 = pbVar18;
            pbVar12 = pbVar16;
            pbVar13 = pbVar7;
            FUN_100228ae4(pbVar14,pbStack_e0,pbVar18,pbVar16);
            pbVar21 = pbStack_e0;
            param_2 = pbVar18;
            if ((int)pbVar6 != 0) {
              iVar20 = (int)pbStack_e0;
              pbVar10 = pbVar14;
              pbVar7 = pbStack_e0;
              if (0 < iVar20) {
                do {
                  *pbVar10 = *pbVar10 ^ *param_5;
                  pbVar7 = pbVar7 + -1;
                  pbVar10 = pbVar10 + 1;
                  param_5 = param_5 + 1;
                } while (pbVar7 != (byte *)0x0);
              }
              if (uVar1 != 1) {
                *pbVar14 = *pbVar14 & (byte)(0xff >> (ulong)(8 - uVar3 & 0x1f));
              }
              pbVar7 = (byte *)0x0;
              do {
                pbVar10 = pbVar14 + (long)pbVar7;
                param_5 = pbVar7 + 1;
                bVar4 = (long)pbVar7 < (long)(iVar20 + -1);
                pbVar7 = param_5;
              } while (*pbVar10 == 0 && bVar4);
              pbVar7 = pbVar21;
              if (*pbVar10 == 1) {
                if (((int)uVar22 < 0) ||
                   ((~uVar22 + (int)unaff_x24 + iStack_e4) - uVar19 == (int)param_5)) {
                  iVar5 = (int)&lStack_d0;
                  pbVar10 = param_3;
                  FUN_1001fc024();
                  if (iVar5 != 0) {
                    (**(code **)(lStack_d0 + 0x18))(&lStack_d0,&UNK_10e525a40,8);
                    (**(code **)(lStack_d0 + 0x18))(&lStack_d0,pbStack_d8,pbVar16);
                    pbVar11 = (byte *)(long)(iVar20 - (int)param_5);
                    (**(code **)(lStack_d0 + 0x18))(&lStack_d0,pbVar14 + (long)param_5,pbVar11);
                    (**(code **)(lStack_d0 + 0x20))(&lStack_d0,auStack_a8);
                    param_2 = pbStack_c8;
                    pbVar10 = (byte *)(ulong)*(uint *)(lStack_d0 + 0x2c);
                    if (*(uint *)(lStack_d0 + 0x2c) != 0) {
                      func_0x000107c60ee4(pbStack_c8);
                    }
                    if (uVar19 != 0) {
                      puVar8 = auStack_a8;
                      pbVar10 = pbVar18;
                      func_0x000107c610b0(puVar8,pbVar18,pbVar16);
                      pbVar11 = pbVar16;
                      if ((int)puVar8 != 0) {
                        pbVar11 = (byte *)0x69;
                        pbVar13 = (byte *)0x23c;
                        param_3 = pbVar18;
                        goto LAB_100228a0c;
                      }
                    }
                    plVar17 = (long *)0x1;
                    goto LAB_100228994;
                  }
                  goto LAB_100228a10;
                }
                pbVar11 = (byte *)0x8a;
                pbVar13 = (byte *)0x231;
              }
              else {
                pbVar11 = (byte *)0x8b;
                pbVar13 = (byte *)0x22d;
              }
LAB_100228a0c:
              pbVar12 = &UNK_10f6c7379;
              pbVar10 = (byte *)0x0;
              FUN_1004d2c58(4,0,pbVar11,&UNK_10f6c7379);
            }
LAB_100228a10:
            pbVar21 = pbVar7;
            pbVar18 = param_3;
            plVar17 = (long *)0x0;
            goto LAB_100228994;
          }
        }
        pbVar11 = (byte *)0x41;
        pbVar13 = (byte *)0x21d;
        param_2 = (byte *)(ulong)uVar2;
      }
      else {
        pbVar11 = (byte *)0x7f;
        pbVar13 = (byte *)0x216;
      }
    }
    else {
      pbVar11 = (byte *)0x7a;
      pbVar13 = (byte *)0x209;
      param_5 = param_1;
    }
  }
  else {
    pbVar11 = (byte *)0x8a;
    pbVar13 = (byte *)0x202;
    param_5 = param_1;
  }
  pbVar12 = &UNK_10f6c7379;
  pbVar10 = (byte *)0x0;
  FUN_1004d2c58(4,0,pbVar11,&UNK_10f6c7379);
  plVar17 = (long *)0x0;
  pbVar14 = (byte *)0x0;
  pbVar18 = param_3;
  pbVar21 = pbVar7;
LAB_100228994:
  FUN_1001e33e0(pbVar14);
  pbVar7 = pbStack_c8;
  FUN_1001e33e0();
  if (puStack_b8 != (undefined8 *)0x0) {
    pbVar7 = pbStack_c0;
    (*(code *)*puStack_b8)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar17;
  }
  func_0x000107c60e78();
  pcStack_f8 = FUN_100228ae4;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_1a8 = (long *)0x0;
  lStack_1b0 = 0;
  puStack_198 = (undefined8 *)0x0;
  plStack_1a0 = (long *)0x0;
  pbStack_140 = pbVar21;
  uStack_138 = unaff_x25;
  pbStack_130 = unaff_x24;
  pbStack_128 = param_5;
  pbStack_120 = pbVar18;
  pbStack_118 = param_2;
  plStack_110 = plVar17;
  pbStack_108 = pbVar14;
  puStack_100 = &stack0xfffffffffffffff0;
  if (pbVar10 != (byte *)0x0) {
    uVar19 = 0;
    pbVar16 = (byte *)(ulong)*(uint *)(pbVar13 + 4);
    do {
      uVar22 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
      uStack_1b4 = uVar22 >> 0x10 | uVar22 << 0x10;
      plVar17 = &lStack_1b0;
      FUN_1001fc024(plVar17,pbVar13);
      if ((int)plVar17 == 0) {
        plVar17 = (long *)0x0;
        goto LAB_100228c08;
      }
      (**(code **)(lStack_1b0 + 0x18))(&lStack_1b0,pbVar11,pbVar12);
      (**(code **)(lStack_1b0 + 0x18))(&lStack_1b0,&uStack_1b4,4);
      if (pbVar10 < pbVar16) {
        (**(code **)(lStack_1b0 + 0x20))(&lStack_1b0,auStack_188);
        if (*(int *)(lStack_1b0 + 0x2c) != 0) {
          func_0x000107c60ee4(plStack_1a8);
        }
        func_0x000107c610b4(pbVar7,auStack_188,pbVar10);
        break;
      }
      (**(code **)(lStack_1b0 + 0x20))(&lStack_1b0,pbVar7);
      if (*(int *)(lStack_1b0 + 0x2c) != 0) {
        func_0x000107c60ee4(plStack_1a8);
      }
      pbVar7 = pbVar7 + (long)pbVar16;
      uVar19 = uVar19 + 1;
      pbVar10 = pbVar10 + -(long)pbVar16;
    } while (pbVar10 != (byte *)0x0);
  }
  plVar17 = (long *)0x1;
LAB_100228c08:
  plVar9 = plStack_1a8;
  FUN_1001e33e0();
  if (puStack_198 != (undefined8 *)0x0) {
    plVar9 = plStack_1a0;
    (*(code *)*puStack_198)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return plVar17;
  }
  func_0x000107c60e78();
  lVar15 = plVar9[5];
  if (lVar15 == 0) {
    return plVar9;
  }
  FUN_10021f3c8(*(undefined8 *)(lVar15 + 8));
  FUN_1001e33e0(*(undefined8 *)(lVar15 + 0x30));
  FUN_1001e33e0(*(undefined8 *)(lVar15 + 0x38));
  if (lVar15 != 0) {
    plVar17 = (long *)(lVar15 + -8);
    if (*plVar17 + 8 != 0) {
      func_0x000107c60ee4(plVar17,*plVar17 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar17);
    return plVar17;
  }
  return (long *)0x0;
}



/* Entry: 100228ae4; end: 100228c5f;  */

long * FUN_100228ae4(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uStack_c4;
  long lStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined8 *puStack_a8;
  undefined1 auStack_98 [64];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_b8 = (long *)0x0;
  lStack_c0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  plStack_b0 = (long *)0x0;
  if (param_2 != 0) {
    uVar5 = 0;
    uVar6 = (ulong)*(uint *)(param_5 + 4);
    do {
      uVar1 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      uStack_c4 = uVar1 >> 0x10 | uVar1 << 0x10;
      plVar3 = &lStack_c0;
      FUN_1001fc024(plVar3,param_5);
      if ((int)plVar3 == 0) {
        plVar3 = (long *)0x0;
        goto LAB_100228c08;
      }
      (**(code **)(lStack_c0 + 0x18))(&lStack_c0,param_3,param_4);
      (**(code **)(lStack_c0 + 0x18))(&lStack_c0,&uStack_c4,4);
      if (param_2 < uVar6) {
        (**(code **)(lStack_c0 + 0x20))(&lStack_c0,auStack_98);
        if (*(int *)(lStack_c0 + 0x2c) != 0) {
          func_0x000107c60ee4(plStack_b8);
        }
        func_0x000107c610b4(param_1,auStack_98,param_2);
        break;
      }
      (**(code **)(lStack_c0 + 0x20))(&lStack_c0,param_1);
      if (*(int *)(lStack_c0 + 0x2c) != 0) {
        func_0x000107c60ee4(plStack_b8);
      }
      param_1 = param_1 + uVar6;
      uVar5 = uVar5 + 1;
      param_2 = param_2 - uVar6;
    } while (param_2 != 0);
  }
  plVar3 = (long *)0x1;
LAB_100228c08:
  plVar2 = plStack_b8;
  FUN_1001e33e0();
  if (puStack_a8 != (undefined8 *)0x0) {
    plVar2 = plStack_b0;
    (*(code *)*puStack_a8)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar3;
  }
  func_0x000107c60e78();
  lVar4 = plVar2[5];
  if (lVar4 == 0) {
    return plVar2;
  }
  FUN_10021f3c8(*(undefined8 *)(lVar4 + 8));
  FUN_1001e33e0(*(undefined8 *)(lVar4 + 0x30));
  FUN_1001e33e0(*(undefined8 *)(lVar4 + 0x38));
  if (lVar4 == 0) {
    return (long *)0x0;
  }
  plVar3 = (long *)(lVar4 + -8);
  if (*plVar3 + 8 != 0) {
    func_0x000107c60ee4(plVar3,*plVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(plVar3);
  return plVar3;
}



/* Entry: 100228c60; end: 100228deb;  */

void FUN_100228c60(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
    return;
  }
  FUN_10021f3c8(*(undefined8 *)(lVar2 + 8));
  FUN_1001e33e0(*(undefined8 *)(lVar2 + 0x30));
  FUN_1001e33e0(*(undefined8 *)(lVar2 + 0x38));
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + -8);
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 100228dec; end: 100228f63;  */

/* WARNING: Possible PIC construction at 0x000100228e68: Changing call to branch */

long * FUN_100228dec(long param_1,long *param_2,ulong *param_3,undefined8 param_4,undefined8 param_5
                    ,ulong *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  ulong *puStack_158;
  undefined8 uStack_150;
  ulong *puStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  uint uStack_11c;
  long alStack_118 [8];
  long lStack_d8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong auStack_88 [8];
  long lStack_48;
  
  puVar7 = &uStack_90;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)(param_1 + 0x198);
  puVar6 = auStack_88;
  FUN_1001fdb40();
  if ((int)plVar10 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return plVar10;
    }
    uVar12 = 0x100228ea0;
    func_0x000107c60e78();
  }
  else {
    puVar7 = *(undefined8 **)(param_1 + 0x1a0);
    param_6 = auStack_88;
    uVar12 = 0x100228e6c;
    plVar10 = param_2;
    puVar6 = param_3;
    param_7 = uStack_90;
  }
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined4 *)((long)puVar7 + 4);
  uStack_130 = 0;
  uStack_128 = 0;
  plVar4 = alStack_118;
  puStack_a0 = &stack0xfffffffffffffff0;
  uStack_98 = uVar12;
  FUN_1001fd7e8(plVar4,uVar1);
  if ((int)plVar4 != 0) {
    FUN_1001fc924(puVar7,alStack_118,uVar1,param_6,param_7,plVar10,&uStack_11c);
    plVar4 = (long *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar6 = (ulong)uStack_11c;
      plVar4 = (long *)0x1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return plVar4;
  }
  func_0x000107c60e78();
  pcStack_138 = FUN_100228f64;
  lVar11 = *plVar4;
  *(char *)(*(long *)(lVar11 + 0x30) + 0x1aa) = (char)*(undefined4 *)(plVar4[0x34] + 4);
  plVar5 = plVar4;
  uStack_150 = param_7;
  puStack_148 = puVar6;
  ppuStack_140 = &puStack_a0;
  FUN_1001fdbcc();
  if (((((int)plVar5 == 0) ||
       (lVar9 = lVar11, FUN_1001fdd2c(lVar11,&UNK_10f6d149f,plVar4 + 0x1d,plVar4[4]),
       (int)lVar9 == 0)) ||
      (plVar5 = plVar4,
      FUN_1001fdbcc(plVar4,plVar4 + 0x23,plVar4[4],plVar4 + 0x33,&UNK_10e52b419,0xc),
      (int)plVar5 == 0)) ||
     ((lVar9 = lVar11, FUN_1001fdd2c(lVar11,&UNK_10f6d14b7,plVar4 + 0x23,plVar4[4]), (int)lVar9 == 0
      || (FUN_1001fdbcc(plVar4,*(long *)(lVar11 + 0x30) + 0x178,
                        *(undefined1 *)(*(long *)(lVar11 + 0x30) + 0x1aa),plVar4 + 0x33,
                        &UNK_10e52b426,10), (int)plVar4 == 0)))) {
    return (long *)0x0;
  }
  lVar9 = *(long *)(lVar11 + 0x30);
  uVar8 = (ulong)*(byte *)(lVar9 + 0x1aa);
  puVar3 = &UNK_10f6d14cf;
  if (*(long *)(*(long *)(lVar11 + 0x68) + 0x2b0) == 0) {
    return (long *)0x1;
  }
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  puVar2 = puVar3;
  plStack_160 = plVar10;
  puStack_158 = param_6;
  func_0x000107c613d0(&UNK_10f6d14cf);
  puVar7 = &uStack_180;
  FUN_1001ebea0(puVar7,puVar2 + uVar8 * 2 + 0x43);
  if ((int)puVar7 == 0) {
LAB_1001fde2c:
    uVar12 = 0;
  }
  else {
    func_0x000107c613d0(&UNK_10f6d14cf);
    puVar7 = &uStack_180;
    FUN_1001ed748(puVar7,&UNK_10f6d14cf,puVar3);
    if ((int)puVar7 == 0) goto LAB_1001fde2c;
    puVar7 = &uStack_180;
    FUN_1001ec260(puVar7,0x20);
    if ((int)puVar7 == 0) goto LAB_1001fde2c;
    puVar7 = &uStack_180;
    func_0x000107c34fc4(puVar7,*(long *)(lVar11 + 0x30) + 0x30,0x20);
    if ((int)puVar7 == 0) goto LAB_1001fde2c;
    puVar7 = &uStack_180;
    FUN_1001ec260(puVar7,0x20);
    if ((int)puVar7 == 0) goto LAB_1001fde2c;
    puVar7 = &uStack_180;
    func_0x000107c34fc4(puVar7,lVar9 + 0x178,uVar8);
    if ((int)puVar7 == 0) goto LAB_1001fde2c;
    puVar7 = &uStack_180;
    FUN_1001ec260(puVar7,0);
    if ((int)puVar7 == 0) goto LAB_1001fde2c;
    puVar7 = &uStack_180;
    func_0x0001001ed84c(puVar7,&uStack_190);
    uVar12 = uStack_190;
    if (((ulong)puVar7 & 1) != 0) {
      (**(code **)(*(long *)(lVar11 + 0x68) + 0x2b0))(lVar11,uStack_190);
      plVar10 = (long *)0x1;
      goto LAB_1001fde34;
    }
  }
  plVar10 = (long *)0x0;
LAB_1001fde34:
  FUN_1001e33e0(uVar12);
  FUN_1001ed8c0(&uStack_180);
  return plVar10;
}



/* Entry: 100228f64; end: 10022905f;  */

undefined8 FUN_100228f64(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar8 = *param_1;
  *(char *)(*(long *)(lVar8 + 0x30) + 0x1aa) = (char)*(undefined4 *)(param_1[0x34] + 4);
  plVar4 = param_1;
  FUN_1001fdbcc(param_1,param_1 + 0x1d,param_1[4],param_1 + 0x33,&UNK_10e52b40c,0xc);
  if (((((int)plVar4 == 0) ||
       (lVar6 = lVar8, FUN_1001fdd2c(lVar8,&UNK_10f6d149f,param_1 + 0x1d,param_1[4]),
       (int)lVar6 == 0)) ||
      (plVar4 = param_1,
      FUN_1001fdbcc(param_1,param_1 + 0x23,param_1[4],param_1 + 0x33,&UNK_10e52b419,0xc),
      (int)plVar4 == 0)) ||
     (lVar6 = lVar8, FUN_1001fdd2c(lVar8,&UNK_10f6d14b7,param_1 + 0x23,param_1[4]), (int)lVar6 == 0)
     ) {
    return 0;
  }
  FUN_1001fdbcc(param_1,*(long *)(lVar8 + 0x30) + 0x178,
                *(undefined1 *)(*(long *)(lVar8 + 0x30) + 0x1aa),param_1 + 0x33,&UNK_10e52b426,10);
  if ((int)param_1 == 0) {
    return 0;
  }
  lVar6 = *(long *)(lVar8 + 0x30);
  uVar5 = (ulong)*(byte *)(lVar6 + 0x1aa);
  puVar3 = &UNK_10f6d14cf;
  if (*(long *)(*(long *)(lVar8 + 0x68) + 0x2b0) == 0) {
    return 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puVar1 = puVar3;
  func_0x000107c613d0(&UNK_10f6d14cf);
  puVar2 = &uStack_50;
  FUN_1001ebea0(puVar2,puVar1 + uVar5 * 2 + 0x43);
  if ((int)puVar2 == 0) {
LAB_1001fde2c:
    uVar9 = 0;
  }
  else {
    func_0x000107c613d0(&UNK_10f6d14cf);
    puVar2 = &uStack_50;
    FUN_1001ed748(puVar2,&UNK_10f6d14cf,puVar3);
    if ((int)puVar2 == 0) goto LAB_1001fde2c;
    puVar2 = &uStack_50;
    FUN_1001ec260(puVar2,0x20);
    if ((int)puVar2 == 0) goto LAB_1001fde2c;
    puVar2 = &uStack_50;
    func_0x000107c34fc4(puVar2,*(long *)(lVar8 + 0x30) + 0x30,0x20);
    if ((int)puVar2 == 0) goto LAB_1001fde2c;
    puVar2 = &uStack_50;
    FUN_1001ec260(puVar2,0x20);
    if ((int)puVar2 == 0) goto LAB_1001fde2c;
    puVar2 = &uStack_50;
    func_0x000107c34fc4(puVar2,lVar6 + 0x178,uVar5);
    if ((int)puVar2 == 0) goto LAB_1001fde2c;
    puVar2 = &uStack_50;
    FUN_1001ec260(puVar2,0);
    if ((int)puVar2 == 0) goto LAB_1001fde2c;
    puVar2 = &uStack_50;
    func_0x0001001ed84c(puVar2,&uStack_60);
    uVar9 = uStack_60;
    if (((ulong)puVar2 & 1) != 0) {
      (**(code **)(*(long *)(lVar8 + 0x68) + 0x2b0))(lVar8,uStack_60);
      uVar7 = 1;
      goto LAB_1001fde34;
    }
  }
  uVar7 = 0;
LAB_1001fde34:
  FUN_1001e33e0(uVar9);
  FUN_1001ed8c0(&uStack_50);
  return uVar7;
}



/* Entry: 100229060; end: 100229177;  */

long * FUN_100229060(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_b0 [32];
  long alStack_90 [5];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  iVar1 = (int)auStack_b0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = (long *)*param_1;
  FUN_100228dec(param_1,auStack_68,alStack_90 + 4,*(byte *)((long)plVar2 + 0xa4) & 1);
  if (((ulong)param_1 & 1) == 0) {
    func_0x000107c2b730(plVar2,2,0x50);
    plVar3 = (long *)0x10;
    FUN_1004d2c58(0x10,0,0x8e,&UNK_10f6d12c1,0x289);
    plVar2 = (long *)0x0;
  }
  else {
    alStack_90[1] = 0;
    alStack_90[0] = 0;
    alStack_90[3] = 0;
    alStack_90[2] = 0;
    plVar3 = plVar2;
    (**(code **)(*plVar2 + 0x58))(plVar2,alStack_90,auStack_b0,0x14);
    if (((int)plVar3 == 0) || (FUN_1001ed748(auStack_b0,auStack_68,alStack_90[4]), iVar1 == 0)) {
      plVar2 = (long *)0x0;
    }
    else {
      FUN_100229178(plVar2,alStack_90);
    }
    plVar3 = alStack_90;
    FUN_1001ed8c0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar2;
  }
  func_0x000107c60e78();
  FUN_1001ed8c0(alStack_90);
  func_0x000107c60bd8();
  uStack_e0 = 0;
  uStack_d8 = 0;
  plVar2 = plVar3;
  (**(code **)(*plVar3 + 0x60))();
  if ((int)plVar2 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    uStack_f0 = uStack_e0;
    uStack_e8 = uStack_d8;
    uStack_e0 = 0;
    uStack_d8 = 0;
    (**(code **)(*plVar3 + 0x68))(plVar3,&uStack_f0);
    FUN_1001e33e0(uStack_f0);
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  FUN_1001e33e0(uStack_e0);
  return plVar3;
}



/* Entry: 100229178; end: 10022921f;  */

long * FUN_100229178(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x60))(param_1,param_2,&uStack_30);
  if ((int)plVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    uStack_40 = uStack_30;
    uStack_38 = uStack_28;
    uStack_30 = 0;
    uStack_28 = 0;
    (**(code **)(*param_1 + 0x68))(param_1,&uStack_40);
    FUN_1001e33e0(uStack_40);
    uStack_40 = 0;
    uStack_38 = 0;
  }
  FUN_1001e33e0(uStack_30);
  return param_1;
}



/* Entry: 100229220; end: 100229297;  */

undefined8 FUN_100229220(long *param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  if (*(code **)(*param_1 + 0x40) == (code *)0x0) {
    pbVar1 = (byte *)(param_1 + 0x4a);
    param_1 = (long *)(param_4 + *pbVar1);
    if (CARRY8(param_4,(ulong)*pbVar1)) {
      FUN_1004d2c58(0x1e,0,0x45,&UNK_10f6c6d00,0x119);
      param_1 = (long *)0x0;
      uVar2 = 0;
      goto LAB_100229284;
    }
  }
  else {
    (**(code **)(*param_1 + 0x40))(param_1,param_3,param_4);
  }
  uVar2 = 1;
LAB_100229284:
  *param_2 = (long)param_1;
  return uVar2;
}



/* Entry: 100229298; end: 1002293c7;  */

undefined8
FUN_100229298(long *param_1,ulong param_2,ulong param_3,undefined8 *param_4,long param_5,
             undefined8 param_6,undefined8 param_7,ulong param_8,long param_9,undefined4 param_10,
             undefined4 param_11,long param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((((param_8 == param_2) || (param_9 + param_8 <= param_2 || param_9 + param_2 <= param_8)) &&
      ((param_5 + param_3 <= param_2 || (param_9 + param_2 <= param_3)))) &&
     ((param_5 + param_3 <= param_8 || (param_9 + param_8 <= param_3)))) {
    if ((param_12 == 0) || (*(int *)(*param_1 + 4) != 0)) {
      (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,param_4,param_5);
      if ((int)param_1 != 0) {
        return 1;
      }
      goto LAB_100229320;
    }
    uVar1 = 0x70;
    uVar2 = 0xa7;
  }
  else {
    uVar1 = 0x73;
    uVar2 = 0xa2;
  }
  FUN_1004d2c58(0x1e,0,uVar1,&UNK_10f6c6d00,uVar2);
LAB_100229320:
  if (param_9 != 0) {
    func_0x000107c60ee4(param_2,param_9);
  }
  if (param_5 != 0) {
    func_0x000107c60ee4(param_3,param_5);
  }
  *param_4 = 0;
  return 0;
}



/* Entry: 1002293c8; end: 100229493;  */

void FUN_1002293c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_x5;
  long in_x6;
  ulong uVar3;
  ulong uVar4;
  
  if (in_x6 == 0xc) {
    uVar3 = (*(ulong *)(in_x5 + 4) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(in_x5 + 4) & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
    if (*(char *)(param_1 + 0x248) == '\0') {
      uVar4 = *(ulong *)(param_1 + 0x240);
    }
    else {
      *(ulong *)(param_1 + 0x240) = uVar3;
      *(undefined1 *)(param_1 + 0x248) = 0;
      uVar4 = uVar3;
    }
    uVar4 = uVar4 ^ uVar3;
    if ((uVar4 != 0xffffffffffffffff) && (*(ulong *)(param_1 + 0x238) <= uVar4)) {
      *(ulong *)(param_1 + 0x238) = uVar4 + 1;
      FUN_100229494(param_1 + 8);
      return;
    }
    uVar1 = 0x7d;
    uVar2 = 0x58b;
  }
  else {
    uVar1 = 0x79;
    uVar2 = 0x575;
  }
  FUN_1004d2c58(0x1e,0,uVar1,&UNK_10f6c74f3,uVar2);
  return;
}



/* Entry: 100229494; end: 1002298bf;  */

/* WARNING: Possible PIC construction at 0x0001002295d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002295d4) */
/* WARNING: Removing unreachable block (ram,0x0001002295d8) */

undefined8 *
FUN_100229494(byte *param_1,byte *param_2,byte *param_3,ulong *param_4,byte *param_5,code *param_6,
             byte *param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11,byte *param_12,
             byte *param_13,byte *param_14)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  code *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar11 = param_14 + (long)param_11;
  if (CARRY8((ulong)param_14,(ulong)param_11)) {
    param_13 = (byte *)0x75;
    param_5 = (byte *)0x3d1;
LAB_1002295f4:
    param_7 = &UNK_10f6c74f3;
    param_12 = (byte *)0x0;
    FUN_1004d2c58(0x1e,0);
    puVar9 = (undefined8 *)0x0;
    pcVar10 = param_6;
LAB_1002295fc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return puVar9;
    }
    func_0x000107c60e78();
    param_2 = param_7;
  }
  else {
    if (param_5 < pbVar11) {
      param_13 = (byte *)0x67;
      param_5 = (byte *)0x3d5;
      goto LAB_1002295f4;
    }
    if (param_7 == (byte *)0x0) {
      param_13 = (byte *)0x6f;
      param_5 = (byte *)0x3d9;
      goto LAB_1002295f4;
    }
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    pcVar10 = param_6;
    func_0x000107c610b4(&uStack_1b0,param_1 + 0xf8,0x130);
    FUN_1001ff79c(&uStack_200,param_1,param_6);
    if (param_13 != (byte *)0x0) {
      puVar9 = &uStack_200;
      func_0x0001001ff8d0(puVar9,param_12);
      if ((int)puVar9 != 0) goto LAB_1002295b4;
      goto LAB_1002295fc;
    }
LAB_1002295b4:
    pcVar10 = *(code **)(param_1 + 0x228);
    param_12 = param_1;
    if (pcVar10 == (code *)0x0) {
      puVar9 = &uStack_200;
      func_0x000107c2b4b0(puVar9,param_1);
      param_13 = param_8;
      param_7 = param_2;
      param_5 = param_9;
      if ((int)puVar9 != 0) {
        if (param_11 != (byte *)0x0) {
          pcVar10 = *(code **)(param_1 + 0x228);
          param_2 = param_3;
          param_5 = param_11;
          if (pcVar10 == (code *)0x0) {
            puVar9 = &uStack_200;
            func_0x000107c2b4b0(puVar9,param_1);
            iVar8 = (int)puVar9;
            param_12 = param_1;
            param_13 = param_10;
          }
          else {
            puVar9 = &uStack_200;
            func_0x0001002296b0(puVar9,param_1);
            iVar8 = (int)puVar9;
            param_12 = param_1;
            param_13 = param_10;
          }
          param_7 = param_2;
          if (iVar8 == 0) goto LAB_1002295fc;
        }
        param_12 = param_3 + (long)param_11;
        func_0x0001001ffcc0(&uStack_200,param_12);
        *param_4 = (ulong)pbVar11;
        puVar9 = (undefined8 *)0x1;
        param_13 = param_14;
        param_7 = param_2;
      }
      goto LAB_1002295fc;
    }
    puVar9 = &uStack_200;
    param_13 = param_8;
    param_5 = param_9;
  }
  if ((byte *)0xfffffffe0 < param_5 + puVar9[7]) {
    return (undefined8 *)0x0;
  }
  if (CARRY8(puVar9[7],(ulong)param_5)) {
    return (undefined8 *)0x0;
  }
  pcVar4 = (code *)puVar9[0x2c];
  pcVar5 = (code *)puVar9[0x2d];
  puVar9[7] = param_5 + puVar9[7];
  if (*(int *)((long)puVar9 + 0x184) != 0) {
    (*pcVar4)(puVar9 + 8,puVar9 + 0xc);
    *(undefined4 *)((long)puVar9 + 0x184) = 0;
  }
  pbVar11 = (byte *)(ulong)*(uint *)(puVar9 + 0x30);
  if (*(uint *)(puVar9 + 0x30) != 0) {
    if (param_5 == (byte *)0x0) goto LAB_10022989c;
    puVar1 = puVar9 + 8;
    pbVar12 = param_2;
    pbVar13 = param_13;
    pbVar14 = param_5;
    do {
      param_13 = pbVar13 + 1;
      bVar3 = *(byte *)((long)(puVar9 + 2) + (long)pbVar11) ^ *pbVar13;
      param_2 = pbVar12 + 1;
      *pbVar12 = bVar3;
      *(byte *)((long)puVar1 + (long)pbVar11) = *(byte *)((long)puVar1 + (long)pbVar11) ^ bVar3;
      param_5 = pbVar14 + -1;
      uVar15 = (uint)pbVar11 & 0xf;
      pbVar11 = (byte *)(ulong)((uint)pbVar11 + 1 & 0xf);
      if (uVar15 == 0xf) break;
      bVar7 = pbVar14 != (byte *)0x1;
      pbVar12 = param_2;
      pbVar13 = param_13;
      pbVar14 = param_5;
    } while (bVar7);
    if (uVar15 != 0xf) goto LAB_10022989c;
    (*pcVar4)(puVar1,puVar9 + 0xc);
  }
  uVar15 = (*(uint *)((long)puVar9 + 0xc) & 0xff00ff00) >> 8 |
           (*(uint *)((long)puVar9 + 0xc) & 0xff00ff) << 8;
  uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
  for (; (byte *)0xbff < param_5; param_5 = param_5 + -0xc00) {
    (*pcVar10)(param_13,param_2,0xc0,param_12,puVar9);
    uVar15 = uVar15 + 0xc0;
    uVar6 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
    *(uint *)((long)puVar9 + 0xc) = uVar6 >> 0x10 | uVar6 << 0x10;
    (*pcVar5)(puVar9 + 8,puVar9 + 0xc,param_2,0xc00);
    param_2 = param_2 + 0xc00;
    param_13 = param_13 + 0xc00;
  }
  uVar2 = (ulong)param_5 & 0xff0;
  if (uVar2 != 0) {
    (*pcVar10)(param_13,param_2,(ulong)param_5 >> 4,param_12,puVar9);
    uVar15 = uVar15 + (int)((ulong)param_5 >> 4);
    uVar6 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
    *(uint *)((long)puVar9 + 0xc) = uVar6 >> 0x10 | uVar6 << 0x10;
    param_13 = param_13 + uVar2;
    param_5 = (byte *)((ulong)param_5 & 0xf);
    (*pcVar5)(puVar9 + 8,puVar9 + 0xc,param_2,uVar2);
    param_2 = param_2 + uVar2;
  }
  if (param_5 == (byte *)0x0) {
    pbVar11 = (byte *)0x0;
  }
  else {
    (*(code *)puVar9[0x2e])(puVar9,puVar9 + 2,param_12);
    pbVar11 = (byte *)0x0;
    uVar15 = (uVar15 + 1 & 0xff00ff00) >> 8 | (uVar15 + 1 & 0xff00ff) << 8;
    *(uint *)((long)puVar9 + 0xc) = uVar15 >> 0x10 | uVar15 << 0x10;
    do {
      bVar3 = *(byte *)((long)(puVar9 + 2) + ((ulong)pbVar11 & 0xffffffff)) ^
              param_13[(ulong)pbVar11 & 0xffffffff];
      param_2[(ulong)pbVar11 & 0xffffffff] = bVar3;
      *(byte *)((long)puVar9 + ((ulong)pbVar11 & 0xffffffff) + 0x40) =
           *(byte *)((long)puVar9 + ((ulong)pbVar11 & 0xffffffff) + 0x40) ^ bVar3;
      pbVar11 = pbVar11 + 1;
    } while (param_5 != pbVar11);
  }
LAB_10022989c:
  *(int *)(puVar9 + 0x30) = (int)pbVar11;
  return (undefined8 *)0x1;
}



/* Entry: 1002298c0; end: 1002298c3;  */

void FUN_1002298c0(void)

{
  return;
}



/* Entry: 1002298c4; end: 100229923;  */

long * FUN_1002298c4(long param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  ulong uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [64];
  long lStack_58;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x1a0) + 4);
  if (0x30 < uVar1) {
    FUN_1004d2c58(0x10,0,0x44,&UNK_10f6d13d3,0x145);
    return (long *)0x0;
  }
  lVar8 = *(long *)(param_1 + 0x5d8);
  *(uint *)(lVar8 + 0xc) = uVar1;
  plVar9 = (long *)(lVar8 + 0x10);
  plVar2 = (long *)(param_1 + 0x198);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1001fdb40(plVar2,auStack_98,&uStack_a0);
  if ((int)plVar2 != 0) {
    uStack_a8 = uStack_a0;
    plVar2 = plVar9;
    puStack_b0 = auStack_98;
    FUN_1001fd7e8(plVar9,(ulong)uVar1,*(undefined8 *)(param_1 + 0x1a0),param_1 + 0x28,
                  *(undefined8 *)(param_1 + 0x20),&UNK_10e52b43d,10);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar2;
  }
  func_0x000107c60e78();
  puStack_d0 = &UNK_10e52b43d;
  uStack_c8 = 10;
  pcStack_b8 = FUN_1001fdc88;
  lVar8 = *plVar2;
  plVar3 = plVar2;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_1001fdbcc();
  if ((((int)plVar3 == 0) ||
      (lVar7 = lVar8, FUN_1001fdd2c(lVar8,&UNK_10f6d145f,plVar2 + 0x11,plVar2[4]), (int)lVar7 == 0))
     || (plVar3 = plVar2,
        FUN_1001fdbcc(plVar2,plVar2 + 0x17,plVar2[4],plVar2 + 0x33,&UNK_10e52b3ff,0xc),
        (int)plVar3 == 0)) {
    return (long *)0x0;
  }
  lVar7 = plVar2[4];
  puVar6 = &UNK_10f6d147f;
  if (*(long *)(*(long *)(lVar8 + 0x68) + 0x2b0) == 0) {
    return (long *)0x1;
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  puVar4 = puVar6;
  plStack_e0 = plVar9;
  uStack_d8 = (ulong)uVar1;
  func_0x000107c613d0(&UNK_10f6d147f);
  puVar5 = &uStack_100;
  FUN_1001ebea0(puVar5,puVar4 + lVar7 * 2 + 0x43);
  if ((int)puVar5 == 0) {
LAB_1001fde2c:
    uVar10 = 0;
  }
  else {
    func_0x000107c613d0(&UNK_10f6d147f);
    puVar5 = &uStack_100;
    FUN_1001ed748(puVar5,&UNK_10f6d147f,puVar6);
    if ((int)puVar5 == 0) goto LAB_1001fde2c;
    puVar5 = &uStack_100;
    FUN_1001ec260(puVar5,0x20);
    if ((int)puVar5 == 0) goto LAB_1001fde2c;
    puVar5 = &uStack_100;
    func_0x000107c34fc4(puVar5,*(long *)(lVar8 + 0x30) + 0x30,0x20);
    if ((int)puVar5 == 0) goto LAB_1001fde2c;
    puVar5 = &uStack_100;
    FUN_1001ec260(puVar5,0x20);
    if ((int)puVar5 == 0) goto LAB_1001fde2c;
    puVar5 = &uStack_100;
    func_0x000107c34fc4(puVar5,plVar2 + 0x17,lVar7);
    if ((int)puVar5 == 0) goto LAB_1001fde2c;
    puVar5 = &uStack_100;
    FUN_1001ec260(puVar5,0);
    if ((int)puVar5 == 0) goto LAB_1001fde2c;
    puVar5 = &uStack_100;
    func_0x0001001ed84c(puVar5,&uStack_110);
    uVar10 = uStack_110;
    if (((ulong)puVar5 & 1) != 0) {
      (**(code **)(*(long *)(lVar8 + 0x68) + 0x2b0))(lVar8,uStack_110);
      plVar9 = (long *)0x1;
      goto LAB_1001fde34;
    }
  }
  plVar9 = (long *)0x0;
LAB_1001fde34:
  FUN_1001e33e0(uVar10);
  FUN_1001ed8c0(&uStack_100);
  return plVar9;
}



/* Entry: 100229924; end: 100229943;  */

void FUN_100229924(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(*(long *)(param_1 + 0x30) + 0xd8);
  if (((long *)*plVar1 == (long *)0x0) || (*(long *)*plVar1 != 0)) {
    return;
  }
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_1001e33e0(*(undefined8 *)(lVar2 + 8));
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + -8);
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 100229944; end: 100229de3;  */

void FUN_100229944(undefined8 *param_1,long param_2,uint param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)(param_2 + 0x98);
  puVar8 = &uStack_58;
  FUN_1001fc2b8();
  if (puVar8 == (undefined8 *)0x0) {
LAB_100229c48:
    *param_1 = puVar8;
  }
  else {
    bVar5 = *(byte *)(puVar8 + 0x36);
    bVar2 = bVar5 & 0xf | (*(byte *)(param_2 + 0x1b0) >> 4 & 1) << 4;
    *(byte *)(puVar8 + 0x36) = bVar5 & 0xe0 | bVar2;
    *(undefined2 *)((long)puVar8 + 4) = *(undefined2 *)(param_2 + 4);
    *(byte *)(puVar8 + 0x36) = *(byte *)(param_2 + 0x1b0) & 0x20 | bVar5 & 0xc0 | bVar2;
    cVar6 = *(char *)(param_2 + 100);
    *(char *)((long)puVar8 + 100) = cVar6;
    if (cVar6 != '\0') {
      func_0x000107c610b4((long)puVar8 + 0x65,param_2 + 0x65);
    }
    iVar16 = *(int *)(param_2 + 0xc);
    *(int *)((long)puVar8 + 0xc) = iVar16;
    if (iVar16 != 0) {
      func_0x000107c610b4(puVar8 + 2,param_2 + 0x10);
    }
    puVar8[0x1a] = *(undefined8 *)(param_2 + 0xd0);
    lVar9 = *(long *)(param_2 + 0x88);
    if (lVar9 == 0) {
LAB_100229a14:
      puVar10 = *(ulong **)(param_2 + 0x90);
      if (puVar10 != (ulong *)0x0) {
        FUN_100229de4();
        if ((puVar10 != (ulong *)0x0) && (uVar15 = *puVar10, uVar15 != 0)) {
          uVar17 = 0;
          uVar11 = puVar10[1];
LAB_100229a38:
          lVar9 = *(long *)(uVar11 + uVar17 * 8);
          if (lVar9 == 0) goto LAB_100229a98;
          piVar1 = (int *)(lVar9 + 0x18);
          iVar16 = *piVar1;
          do {
            if (iVar16 == -1) break;
            iVar4 = *piVar1;
            if (iVar4 == iVar16) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar16 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              bVar7 = cVar6 == '\0';
            }
            else {
              bVar7 = false;
              ClearExclusiveLocal();
            }
            iVar16 = iVar4;
          } while (!bVar7);
          *(long *)(puVar10[1] + uVar17 * 8) = lVar9;
          uVar11 = puVar10[1];
          if (*(long *)(uVar11 + uVar17 * 8) != 0) {
            uVar15 = *puVar10;
            goto LAB_100229a98;
          }
          if (uVar17 != 0) {
            uVar15 = 0;
            do {
              if (*(long *)(puVar10[1] + uVar15 * 8) != 0) {
                FUN_100229fdc();
              }
              uVar15 = uVar15 + 1;
            } while (uVar17 != uVar15);
            uVar11 = puVar10[1];
          }
          FUN_1001e33e0(uVar11);
          FUN_1001e33e0(puVar10);
          puVar10 = (ulong *)0x0;
        }
LAB_100229ae0:
        FUN_1001e3370(puVar8 + 0x12,puVar10);
        if (puVar8[0x12] == 0) goto LAB_100229da8;
      }
      puVar12 = puVar8;
      (**(code **)(*(long *)(param_2 + 0x98) + 0x38))(puVar8,param_2);
      if ((int)puVar12 != 0) {
        puVar8[0x17] = *(undefined8 *)(param_2 + 0xb8);
        lVar9 = *(long *)(param_2 + 0x108);
        if (lVar9 != 0) {
          piVar1 = (int *)(lVar9 + 0x18);
          iVar16 = *piVar1;
          do {
            if (iVar16 == -1) break;
            iVar4 = *piVar1;
            if (iVar4 == iVar16) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar16 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              bVar7 = cVar6 == '\0';
            }
            else {
              bVar7 = false;
              ClearExclusiveLocal();
            }
            iVar16 = iVar4;
          } while (!bVar7);
        }
        lVar14 = puVar8[0x21];
        puVar8[0x21] = lVar9;
        if (lVar14 != 0) {
          FUN_100229fdc();
        }
        lVar9 = *(long *)(param_2 + 0x100);
        if (lVar9 != 0) {
          piVar1 = (int *)(lVar9 + 0x18);
          iVar16 = *piVar1;
          do {
            if (iVar16 == -1) break;
            iVar4 = *piVar1;
            if (iVar4 == iVar16) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar16 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              bVar7 = cVar6 == '\0';
            }
            else {
              bVar7 = false;
              ClearExclusiveLocal();
            }
            iVar16 = iVar4;
          } while (!bVar7);
        }
        lVar14 = puVar8[0x20];
        puVar8[0x20] = lVar9;
        if (lVar14 != 0) {
          FUN_100229fdc();
        }
        uVar18 = *(undefined8 *)(param_2 + 0x110);
        uVar20 = *(undefined8 *)(param_2 + 0x128);
        uVar19 = *(undefined8 *)(param_2 + 0x120);
        puVar8[0x23] = *(undefined8 *)(param_2 + 0x118);
        puVar8[0x22] = uVar18;
        puVar8[0x25] = uVar20;
        puVar8[0x24] = uVar19;
        *(byte *)(puVar8 + 0x36) = *(byte *)(puVar8 + 0x36) & 0xfd | *(byte *)(param_2 + 0x1b0) & 2;
        *(undefined2 *)(puVar8 + 1) = *(undefined2 *)(param_2 + 8);
        puVar8[0x18] = *(undefined8 *)(param_2 + 0xc0);
        puVar8[0x19] = *(undefined8 *)(param_2 + 200);
        if ((param_3 >> 1 & 1) == 0) {
LAB_100229c00:
          if ((param_3 & 1) != 0) {
            uVar18 = *(undefined8 *)(param_2 + 0xf0);
            lVar9 = *(long *)(param_2 + 0xf8);
            puVar12 = puVar8 + 0x1e;
            FUN_1001e6684(puVar12,lVar9);
            uVar3 = (uint)puVar12 ^ 1;
            if (lVar9 == 0) {
              uVar3 = 1;
            }
            if ((uVar3 & 1) == 0) {
              func_0x000107c610b4(puVar8[0x1e],uVar18,lVar9);
            }
            if ((uint)puVar12 == 0) goto LAB_100229da8;
          }
          *(byte *)(puVar8 + 0x36) = *(byte *)(puVar8 + 0x36) | 4;
          goto LAB_100229c48;
        }
        iVar16 = *(int *)(param_2 + 0x40);
        *(int *)(puVar8 + 8) = iVar16;
        if (iVar16 != 0) {
          func_0x000107c610b4((long)puVar8 + 0x44,param_2 + 0x44);
        }
        *(undefined2 *)((long)puVar8 + 6) = *(undefined2 *)(param_2 + 6);
        if (*(char *)(param_2 + 0x170) == '\0') {
          uVar13 = 0;
        }
        else {
          func_0x000107c610b4(puVar8 + 0x26,param_2 + 0x130);
          uVar13 = *(undefined1 *)(param_2 + 0x170);
        }
        *(undefined1 *)(puVar8 + 0x2e) = uVar13;
        *(undefined4 *)((long)puVar8 + 0x174) = *(undefined4 *)(param_2 + 0x174);
        puVar8[0x2f] = *(undefined8 *)(param_2 + 0x178);
        bVar5 = *(byte *)(puVar8 + 0x36);
        bVar2 = *(byte *)(param_2 + 0x1b0) & 1;
        *(byte *)(puVar8 + 0x36) = bVar5 & 0xfe | bVar2;
        *(byte *)(puVar8 + 0x36) = bVar5 & 0xbe | bVar2 | *(byte *)(param_2 + 0x1b0) & 0x40;
        uVar18 = *(undefined8 *)(param_2 + 0x180);
        lVar9 = *(long *)(param_2 + 0x188);
        puVar12 = puVar8 + 0x30;
        FUN_1001e6684(puVar12,lVar9);
        uVar3 = (uint)puVar12 ^ 1;
        if (lVar9 == 0) {
          uVar3 = 1;
        }
        if ((uVar3 & 1) == 0) {
          func_0x000107c610b4(puVar8[0x30],uVar18,lVar9);
        }
        if ((uint)puVar12 != 0) {
          uVar18 = *(undefined8 *)(param_2 + 0x1b8);
          lVar9 = *(long *)(param_2 + 0x1c0);
          puVar12 = puVar8 + 0x37;
          FUN_1001e6684(puVar12,lVar9);
          uVar3 = (uint)puVar12 ^ 1;
          if (lVar9 == 0) {
            uVar3 = 1;
          }
          if ((uVar3 & 1) == 0) {
            func_0x000107c610b4(puVar8[0x37],uVar18,lVar9);
          }
          if ((uint)puVar12 != 0) {
            uVar18 = *(undefined8 *)(param_2 + 400);
            lVar9 = *(long *)(param_2 + 0x198);
            puVar12 = puVar8 + 0x32;
            FUN_1001e6684(puVar12,lVar9);
            uVar3 = (uint)puVar12 ^ 1;
            if (lVar9 == 0) {
              uVar3 = 1;
            }
            if ((uVar3 & 1) == 0) {
              func_0x000107c610b4(puVar8[0x32],uVar18,lVar9);
            }
            if ((uint)puVar12 != 0) {
              uVar18 = *(undefined8 *)(param_2 + 0x1a0);
              lVar9 = *(long *)(param_2 + 0x1a8);
              puVar12 = puVar8 + 0x34;
              FUN_1001e6684(puVar12,lVar9);
              uVar3 = (uint)puVar12 ^ 1;
              if (lVar9 == 0) {
                uVar3 = 1;
              }
              if ((uVar3 & 1) == 0) {
                func_0x000107c610b4(puVar8[0x34],uVar18,lVar9);
              }
              if ((uint)puVar12 != 0) goto LAB_100229c00;
            }
          }
        }
      }
    }
    else {
      func_0x0001001e6ec8();
      lVar14 = puVar8[0x11];
      puVar8[0x11] = lVar9;
      if (lVar14 != 0) {
        FUN_1001e33e0(lVar14);
        lVar9 = puVar8[0x11];
      }
      if (lVar9 != 0) goto LAB_100229a14;
    }
LAB_100229da8:
    *param_1 = 0;
    FUN_100229edc(puVar8);
  }
  return;
LAB_100229a98:
  uVar17 = uVar17 + 1;
  if (uVar15 <= uVar17) goto LAB_100229ae0;
  goto LAB_100229a38;
}



/* Entry: 100229de4; end: 100229eab;  */

undefined8 * FUN_100229de4(ulong *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_1 != (ulong *)0x0) {
    puVar1 = (undefined8 *)0x30;
    func_0x000107c610a0();
    if (puVar1 != (undefined8 *)0x0) {
      puVar4 = puVar1 + 1;
      puVar1[2] = 0;
      *puVar4 = 0;
      *puVar1 = 0x28;
      puVar1[4] = 0;
      puVar1[3] = 0;
      puVar1[5] = 0;
      uVar5 = param_1[3];
      lVar6 = uVar5 * 8;
      if (lVar6 != -8) {
        plVar2 = (long *)(lVar6 + 8);
        func_0x000107c610a0();
        if (plVar2 != (long *)0x0) {
          *plVar2 = lVar6;
          uVar3 = *param_1;
          puVar1[1] = uVar3;
          puVar1[2] = plVar2 + 1;
          if ((uVar3 & 0x1fffffffffffffff) != 0) {
            func_0x000107c610b4(plVar2 + 1,param_1[1]);
          }
          *(int *)(puVar1 + 3) = (int)param_1[2];
          uVar3 = param_1[4];
          puVar1[4] = uVar5;
          puVar1[5] = uVar3;
          return puVar4;
        }
      }
      puVar1[2] = 0;
      FUN_1001e33e0(puVar4);
    }
  }
  return (undefined8 *)0x0;
}



/* Entry: 100229eac; end: 100229eb3;  */

undefined8 FUN_100229eac(void)

{
  return 1;
}



/* Entry: 100229eb4; end: 100229edb;  */

void FUN_100229eb4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_100229edc();
  }
  return;
}



/* Entry: 100229edc; end: 100229f17;  */

void FUN_100229edc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if ((param_1 != 0) && (lVar1 = param_1, FUN_10021f0b0(), (int)lVar1 != 0)) {
    FUN_100229f18();
    if (param_1 != 0) {
      plVar2 = (long *)(param_1 + -8);
      if (*plVar2 + 8 != 0) {
        func_0x000107c60ee4(plVar2,*plVar2 + 8);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(plVar2);
      return;
    }
    return;
  }
  return;
}



/* Entry: 100229f18; end: 100229fd7;  */

long FUN_100229f18(long param_1)

{
  long lVar1;
  
  FUN_10021f290(0x113311a70,param_1,param_1 + 0xd8);
  (**(code **)(*(long *)(param_1 + 0x98) + 0x40))(param_1);
  FUN_1001e33e0(*(undefined8 *)(param_1 + 0x1b8));
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  FUN_1001e33e0(*(undefined8 *)(param_1 + 0x1a0));
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  FUN_1001e33e0(*(undefined8 *)(param_1 + 400));
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  FUN_1001e33e0(*(undefined8 *)(param_1 + 0x180));
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  lVar1 = *(long *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (lVar1 != 0) {
    FUN_100229fdc();
  }
  lVar1 = *(long *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (lVar1 != 0) {
    FUN_100229fdc();
  }
  FUN_1001e33e0(*(undefined8 *)(param_1 + 0xf0));
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_1001e3370(param_1 + 0x90,0);
  lVar1 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (lVar1 != 0) {
    FUN_1001e33e0();
  }
  return param_1;
}



/* Entry: 100229fd8; end: 100229fdb;  */

void FUN_100229fd8(void)

{
  return;
}



/* Entry: 100229fdc; end: 10022a113;  */

long * FUN_100229fdc(long *param_1)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  uint uVar11;
  long *unaff_x19;
  long *plVar12;
  long *unaff_x20;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 auStack_88 [2];
  long *plStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar13 = (long *)*param_1;
  if (plVar13 == (long *)0x0) {
    plVar13 = param_1 + 3;
    FUN_10021f0b0();
    if ((int)plVar13 == 0) {
      return plVar13;
    }
LAB_10022a0f8:
    if (*(int *)((long)param_1 + 0x1c) == 0) {
      FUN_1001e33e0(param_1[1]);
    }
code_r0x0001001e33e0:
    if (param_1 != (long *)0x0) {
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      param_1 = param_1 + -1;
      if (*param_1 + 8 != 0) {
        func_0x000107c60ee4(param_1,*param_1 + 8);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(param_1);
      return param_1;
    }
    return (long *)0x0;
  }
  plVar9 = plVar13 + 1;
  func_0x000107c61290();
  if ((int)plVar9 == 0) {
    iVar10 = (int)param_1 + 0x18;
    FUN_10021f0b0();
    if (iVar10 == 0) {
      plVar9 = (long *)(*param_1 + 8);
      func_0x000107c6128c();
      if ((int)plVar9 == 0) {
        return plVar9;
      }
    }
    else {
      unaff_x21 = *plVar13;
      plVar9 = param_1;
      (**(code **)(unaff_x21 + 0x28))();
      uVar1 = *(ulong *)(unaff_x21 + 0x10);
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = ((ulong)plVar9 & 0xffffffff) / uVar1;
      }
      puVar15 = (undefined8 *)
                (*(long *)(unaff_x21 + 8) + (((ulong)plVar9 & 0xffffffff) - uVar4 * uVar1) * 8);
      unaff_x22 = (undefined8 *)*puVar15;
      if (unaff_x22 == (undefined8 *)0x0) {
LAB_10022a0c0:
        plVar9 = (long *)0x0;
      }
      else {
        uVar6 = *unaff_x22;
        (**(code **)(unaff_x21 + 0x20))(uVar6,param_1);
        if ((int)uVar6 != 0) {
          do {
            puVar15 = unaff_x22;
            unaff_x22 = (undefined8 *)puVar15[1];
            if (unaff_x22 == (undefined8 *)0x0) goto LAB_10022a0c0;
            uVar6 = *unaff_x22;
            (**(code **)(unaff_x21 + 0x20))(uVar6,param_1);
          } while ((int)uVar6 != 0);
          puVar15 = puVar15 + 1;
        }
        plVar9 = (long *)0x0;
        if ((undefined8 *)*puVar15 != (undefined8 *)0x0) {
          plVar9 = *(long **)*puVar15;
        }
      }
      if (plVar9 == param_1) {
        func_0x000107c2b530(*plVar13,param_1,FUN_100203a4c,0x10040443c);
      }
      plVar9 = (long *)(*param_1 + 8);
      func_0x000107c6128c();
      if ((int)plVar9 == 0) goto LAB_10022a0f8;
    }
  }
  func_0x000107c60ebc();
  pcStack_48 = FUN_10022a114;
  plVar12 = *(long **)(plVar9[6] + 0x1c8);
  plVar7 = plVar9;
  if ((*(byte *)(plVar12 + 0x36) >> 2 & 1) == 0) {
    plVar14 = (long *)plVar9[0xe];
    if (((int)plVar12[8] != 0) || (plVar12[0x1f] != 0)) {
      uVar11 = 0xfffffffd;
      if ((*(byte *)((long)plVar9 + 0xa4) & 1) == 0) {
        uVar11 = 0xfffffffe;
      }
      if ((*(uint *)((long)plVar14 + 0x11c) | uVar11) == 0xffffffff) {
        puStack_70 = unaff_x22;
        lStack_68 = unaff_x21;
        plStack_60 = plVar13;
        plStack_58 = param_1;
        puStack_50 = &stack0xfffffffffffffff0;
        if (((*(uint *)((long)plVar14 + 0x11c) >> 9 & 1) == 0) &&
           ((*(byte *)((long)plVar9 + 0xa4) & 1) != 0)) {
          iVar10 = (int)*plVar12;
          do {
            if (iVar10 == -1) break;
            lVar8 = *plVar12;
            if ((int)lVar8 == iVar10) {
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar5) {
                *(int *)plVar12 = iVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              bVar5 = cVar3 == '\0';
            }
            else {
              bVar5 = false;
              ClearExclusiveLocal();
            }
            iVar10 = (int)lVar8;
          } while (!bVar5);
          plVar7 = plVar14 + 2;
          func_0x000107c61290();
          if ((int)plVar7 != 0) {
LAB_10022a2d4:
            func_0x000107c60ebc();
            FUN_100229edc(plVar12);
            func_0x000107c60bd8();
            (**(code **)(*(long *)(*(long *)(*plVar7 + 0x68) + 8) + 0x50))();
            FUN_10022a528(plVar7 + 0xc2,0);
            FUN_1001e33e0(plVar7[0xc0]);
            plVar7[0xc1] = 0;
            plVar7[0xc0] = 0;
            FUN_10022a550(plVar7 + 0xbe,0);
            FUN_10022a590(plVar7 + 0xbd,0);
            FUN_100229eb4(plVar7 + 0xbc,0);
            FUN_100229eb4(plVar7 + 0xbb,0);
            lVar8 = plVar7[0xba];
            plVar7[0xba] = 0;
            if (lVar8 != 0) {
              FUN_10021f114();
            }
            lVar8 = plVar7[0xb9];
            plVar7[0xb9] = 0;
            if (lVar8 != 0) {
              FUN_10021f114();
            }
            FUN_1001e33e0(plVar7[0xb7]);
            plVar7[0xb8] = 0;
            plVar7[0xb7] = 0;
            FUN_1001e3370(plVar7 + 0xb5,0);
            lVar8 = plVar7[0xb4];
            plVar7[0xb4] = 0;
            if (lVar8 != 0) {
              FUN_1001e33e0();
            }
            FUN_1001e33e0(plVar7[0xb2]);
            plVar7[0xb3] = 0;
            plVar7[0xb2] = 0;
            if (plVar7[0x5a] != 0) {
              (**(code **)(plVar7[0x5a] + 0x18))(plVar7 + 0x5a);
              plVar7[0x5a] = 0;
            }
            FUN_1001e33e0(plVar7[0x55]);
            plVar7[0x56] = 0;
            plVar7[0x55] = 0;
            FUN_1001e33e0(plVar7[0x53]);
            plVar7[0x54] = 0;
            plVar7[0x53] = 0;
            FUN_1001e33e0(plVar7[0x51]);
            plVar7[0x52] = 0;
            plVar7[0x51] = 0;
            FUN_1001e33e0(plVar7[0x4f]);
            plVar7[0x50] = 0;
            plVar7[0x4f] = 0;
            FUN_1001e33e0(plVar7[0x4d]);
            plVar7[0x4e] = 0;
            plVar7[0x4d] = 0;
            FUN_1001e33e0(plVar7[0x4b]);
            plVar7[0x4c] = 0;
            plVar7[0x4b] = 0;
            FUN_1001e33e0(plVar7[0x49]);
            plVar7[0x4a] = 0;
            plVar7[0x49] = 0;
            FUN_1001e33e0(plVar7[0x47]);
            plVar7[0x48] = 0;
            plVar7[0x47] = 0;
            FUN_1001e33e0(plVar7[0x45]);
            plVar7[0x46] = 0;
            plVar7[0x45] = 0;
            FUN_1001e33e0(plVar7[0x43]);
            plVar7[0x44] = 0;
            plVar7[0x43] = 0;
            FUN_1001e33e0(plVar7[0x41]);
            plVar7[0x42] = 0;
            plVar7[0x41] = 0;
            FUN_10022a5a8(plVar7 + 0x38);
            FUN_10022a5a8(plVar7 + 0x33);
            lVar8 = 400;
            do {
              puVar15 = *(undefined8 **)((long)plVar7 + lVar8);
              *(undefined8 *)((long)plVar7 + lVar8) = 0;
              if (puVar15 != (undefined8 *)0x0) {
                (**(code **)*puVar15)(puVar15);
                FUN_1001e33e0(puVar15);
              }
              lVar8 = lVar8 + -8;
            } while (lVar8 != 0x180);
            lVar8 = plVar7[0x30];
            plVar7[0x30] = 0;
            if (lVar8 != 0) {
              func_0x000107c2b2a8();
            }
            return plVar7;
          }
          plStack_78 = plVar12;
          func_0x000107c2b86c(plVar14,&plStack_78);
          plVar13 = plStack_78;
          plStack_78 = (long *)0x0;
          if (plVar13 != (long *)0x0) {
            FUN_100229edc();
          }
          if (*(char *)((long)plVar14 + 0x11c) < '\0') {
            plVar7 = plVar14 + 2;
            func_0x000107c6128c();
            if ((int)plVar7 != 0) goto LAB_10022a2d4;
          }
          else {
            iVar2 = (int)plVar14[0x23];
            iVar10 = 0;
            if (iVar2 < 0xfe) {
              iVar10 = iVar2 + 1;
            }
            *(int *)(plVar14 + 0x23) = iVar10;
            plVar7 = plVar14 + 2;
            func_0x000107c6128c();
            if ((int)plVar7 != 0) goto LAB_10022a2d4;
            if (0xfd < iVar2) {
              FUN_1001fc600(plVar9[0xd],auStack_88);
              plVar7 = plVar14;
              func_0x000107c2b870(plVar14,auStack_88[0]);
            }
          }
        }
        if (plVar14[0x25] != 0) {
          iVar10 = (int)*plVar12;
          do {
            if (iVar10 == -1) break;
            lVar8 = *plVar12;
            if ((int)lVar8 == iVar10) {
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar5) {
                *(int *)plVar12 = iVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              bVar5 = cVar3 == '\0';
            }
            else {
              bVar5 = false;
              ClearExclusiveLocal();
            }
            iVar10 = (int)lVar8;
          } while (!bVar5);
          (*(code *)plVar14[0x25])(plVar9,plVar12);
          plVar7 = plVar9;
          if ((int)plVar9 == 0) {
            plVar13 = plVar12;
            if ((plVar12 == (long *)0x0) || (FUN_10021f0b0(), (int)plVar13 == 0)) {
              return plVar13;
            }
            FUN_100229f18();
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
            param_1 = plVar12;
            unaff_x19 = plStack_58;
            unaff_x20 = plStack_60;
            unaff_x29 = puStack_50;
            unaff_x30 = pcStack_48;
            goto code_r0x0001001e33e0;
          }
        }
      }
    }
  }
  return plVar7;
}



/* Entry: 10022a114; end: 10022a2eb;  */

long * FUN_10022a114(long *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 auStack_48 [2];
  long *plStack_38;
  
  plVar8 = *(long **)(param_1[6] + 0x1c8);
  plVar4 = param_1;
  if ((*(byte *)(plVar8 + 0x36) >> 2 & 1) == 0) {
    plVar9 = (long *)param_1[0xe];
    if (((int)plVar8[8] != 0) || (plVar8[0x1f] != 0)) {
      uVar7 = 0xfffffffd;
      if ((*(byte *)((long)param_1 + 0xa4) & 1) == 0) {
        uVar7 = 0xfffffffe;
      }
      if ((*(uint *)((long)plVar9 + 0x11c) | uVar7) == 0xffffffff) {
        if (((*(uint *)((long)plVar9 + 0x11c) >> 9 & 1) == 0) &&
           ((*(byte *)((long)param_1 + 0xa4) & 1) != 0)) {
          iVar6 = (int)*plVar8;
          do {
            if (iVar6 == -1) break;
            lVar5 = *plVar8;
            if ((int)lVar5 == iVar6) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *(int *)plVar8 = iVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              bVar3 = cVar2 == '\0';
            }
            else {
              bVar3 = false;
              ClearExclusiveLocal();
            }
            iVar6 = (int)lVar5;
          } while (!bVar3);
          plVar4 = plVar9 + 2;
          func_0x000107c61290();
          if ((int)plVar4 != 0) {
LAB_10022a2d4:
            func_0x000107c60ebc();
            FUN_100229edc(plVar8);
            func_0x000107c60bd8();
            (**(code **)(*(long *)(*(long *)(*plVar4 + 0x68) + 8) + 0x50))();
            FUN_10022a528(plVar4 + 0xc2,0);
            FUN_1001e33e0(plVar4[0xc0]);
            plVar4[0xc1] = 0;
            plVar4[0xc0] = 0;
            FUN_10022a550(plVar4 + 0xbe,0);
            FUN_10022a590(plVar4 + 0xbd,0);
            FUN_100229eb4(plVar4 + 0xbc,0);
            FUN_100229eb4(plVar4 + 0xbb,0);
            lVar5 = plVar4[0xba];
            plVar4[0xba] = 0;
            if (lVar5 != 0) {
              FUN_10021f114();
            }
            lVar5 = plVar4[0xb9];
            plVar4[0xb9] = 0;
            if (lVar5 != 0) {
              FUN_10021f114();
            }
            FUN_1001e33e0(plVar4[0xb7]);
            plVar4[0xb8] = 0;
            plVar4[0xb7] = 0;
            FUN_1001e3370(plVar4 + 0xb5,0);
            lVar5 = plVar4[0xb4];
            plVar4[0xb4] = 0;
            if (lVar5 != 0) {
              FUN_1001e33e0();
            }
            FUN_1001e33e0(plVar4[0xb2]);
            plVar4[0xb3] = 0;
            plVar4[0xb2] = 0;
            if (plVar4[0x5a] != 0) {
              (**(code **)(plVar4[0x5a] + 0x18))(plVar4 + 0x5a);
              plVar4[0x5a] = 0;
            }
            FUN_1001e33e0(plVar4[0x55]);
            plVar4[0x56] = 0;
            plVar4[0x55] = 0;
            FUN_1001e33e0(plVar4[0x53]);
            plVar4[0x54] = 0;
            plVar4[0x53] = 0;
            FUN_1001e33e0(plVar4[0x51]);
            plVar4[0x52] = 0;
            plVar4[0x51] = 0;
            FUN_1001e33e0(plVar4[0x4f]);
            plVar4[0x50] = 0;
            plVar4[0x4f] = 0;
            FUN_1001e33e0(plVar4[0x4d]);
            plVar4[0x4e] = 0;
            plVar4[0x4d] = 0;
            FUN_1001e33e0(plVar4[0x4b]);
            plVar4[0x4c] = 0;
            plVar4[0x4b] = 0;
            FUN_1001e33e0(plVar4[0x49]);
            plVar4[0x4a] = 0;
            plVar4[0x49] = 0;
            FUN_1001e33e0(plVar4[0x47]);
            plVar4[0x48] = 0;
            plVar4[0x47] = 0;
            FUN_1001e33e0(plVar4[0x45]);
            plVar4[0x46] = 0;
            plVar4[0x45] = 0;
            FUN_1001e33e0(plVar4[0x43]);
            plVar4[0x44] = 0;
            plVar4[0x43] = 0;
            FUN_1001e33e0(plVar4[0x41]);
            plVar4[0x42] = 0;
            plVar4[0x41] = 0;
            FUN_10022a5a8(plVar4 + 0x38);
            FUN_10022a5a8(plVar4 + 0x33);
            lVar5 = 400;
            do {
              puVar10 = *(undefined8 **)((long)plVar4 + lVar5);
              *(undefined8 *)((long)plVar4 + lVar5) = 0;
              if (puVar10 != (undefined8 *)0x0) {
                (**(code **)*puVar10)(puVar10);
                FUN_1001e33e0(puVar10);
              }
              lVar5 = lVar5 + -8;
            } while (lVar5 != 0x180);
            lVar5 = plVar4[0x30];
            plVar4[0x30] = 0;
            if (lVar5 != 0) {
              func_0x000107c2b2a8();
            }
            return plVar4;
          }
          plStack_38 = plVar8;
          func_0x000107c2b86c(plVar9,&plStack_38);
          plVar4 = plStack_38;
          plStack_38 = (long *)0x0;
          if (plVar4 != (long *)0x0) {
            FUN_100229edc();
          }
          if (*(char *)((long)plVar9 + 0x11c) < '\0') {
            plVar4 = plVar9 + 2;
            func_0x000107c6128c();
            if ((int)plVar4 != 0) goto LAB_10022a2d4;
          }
          else {
            iVar1 = (int)plVar9[0x23];
            iVar6 = 0;
            if (iVar1 < 0xfe) {
              iVar6 = iVar1 + 1;
            }
            *(int *)(plVar9 + 0x23) = iVar6;
            plVar4 = plVar9 + 2;
            func_0x000107c6128c();
            if ((int)plVar4 != 0) goto LAB_10022a2d4;
            if (0xfd < iVar1) {
              FUN_1001fc600(param_1[0xd],auStack_48);
              plVar4 = plVar9;
              func_0x000107c2b870(plVar9,auStack_48[0]);
            }
          }
        }
        if (plVar9[0x25] != 0) {
          iVar6 = (int)*plVar8;
          do {
            if (iVar6 == -1) break;
            lVar5 = *plVar8;
            if ((int)lVar5 == iVar6) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *(int *)plVar8 = iVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              bVar3 = cVar2 == '\0';
            }
            else {
              bVar3 = false;
              ClearExclusiveLocal();
            }
            iVar6 = (int)lVar5;
          } while (!bVar3);
          (*(code *)plVar9[0x25])(param_1,plVar8);
          plVar4 = param_1;
          if ((int)param_1 == 0) {
            plVar4 = plVar8;
            if ((plVar8 != (long *)0x0) && (FUN_10021f0b0(), (int)plVar4 != 0)) {
              FUN_100229f18();
              if (plVar8 != (long *)0x0) {
                plVar8 = plVar8 + -1;
                if (*plVar8 + 8 != 0) {
                  func_0x000107c60ee4(plVar8,*plVar8 + 8);
                }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__free_11034c310)(plVar8);
                return plVar8;
              }
              return (long *)0x0;
            }
            return plVar4;
          }
        }
      }
    }
  }
  return plVar4;
}



/* Entry: 10022a2ec; end: 10022a523;  */

long * FUN_10022a2ec(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  (**(code **)(*(long *)(*(long *)(*param_1 + 0x68) + 8) + 0x50))();
  FUN_10022a528(param_1 + 0xc2,0);
  FUN_1001e33e0(param_1[0xc0]);
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  FUN_10022a550(param_1 + 0xbe,0);
  FUN_10022a590(param_1 + 0xbd,0);
  FUN_100229eb4(param_1 + 0xbc,0);
  FUN_100229eb4(param_1 + 0xbb,0);
  lVar1 = param_1[0xba];
  param_1[0xba] = 0;
  if (lVar1 != 0) {
    FUN_10021f114();
  }
  lVar1 = param_1[0xb9];
  param_1[0xb9] = 0;
  if (lVar1 != 0) {
    FUN_10021f114();
  }
  FUN_1001e33e0(param_1[0xb7]);
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  FUN_1001e3370(param_1 + 0xb5,0);
  lVar1 = param_1[0xb4];
  param_1[0xb4] = 0;
  if (lVar1 != 0) {
    FUN_1001e33e0();
  }
  FUN_1001e33e0(param_1[0xb2]);
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  if (param_1[0x5a] != 0) {
    (**(code **)(param_1[0x5a] + 0x18))(param_1 + 0x5a);
    param_1[0x5a] = 0;
  }
  FUN_1001e33e0(param_1[0x55]);
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  FUN_1001e33e0(param_1[0x53]);
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  FUN_1001e33e0(param_1[0x51]);
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  FUN_1001e33e0(param_1[0x4f]);
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  FUN_1001e33e0(param_1[0x4d]);
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  FUN_1001e33e0(param_1[0x4b]);
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  FUN_1001e33e0(param_1[0x49]);
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  FUN_1001e33e0(param_1[0x47]);
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  FUN_1001e33e0(param_1[0x45]);
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  FUN_1001e33e0(param_1[0x43]);
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  FUN_1001e33e0(param_1[0x41]);
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  FUN_10022a5a8(param_1 + 0x38);
  FUN_10022a5a8(param_1 + 0x33);
  lVar1 = 400;
  do {
    puVar2 = *(undefined8 **)((long)param_1 + lVar1);
    *(undefined8 *)((long)param_1 + lVar1) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      FUN_1001e33e0(puVar2);
    }
    lVar1 = lVar1 + -8;
  } while (lVar1 != 0x180);
  lVar1 = param_1[0x30];
  param_1[0x30] = 0;
  if (lVar1 != 0) {
    func_0x000107c2b2a8();
  }
  return param_1;
}



/* Entry: 10022a524; end: 10022a527;  */

void FUN_10022a524(void)

{
  return;
}



/* Entry: 10022a528; end: 10022a54f;  */

void FUN_10022a528(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000107c2b6f0();
  }
  return;
}



/* Entry: 10022a550; end: 10022a58f;  */

void FUN_10022a550(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  FUN_1001e33e0(*puVar2);
  *puVar2 = 0;
  puVar2[1] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar1 = puVar2 + -1;
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 10022a590; end: 10022a5a7;  */

void FUN_10022a590(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_1;
  *param_1 = param_2;
  if (lVar2 == 0) {
    return;
  }
  if (lVar2 != 0) {
    iVar1 = (int)lVar2 + 0x18;
    func_0x000107c2b58c();
    if (iVar1 != 0) {
      func_0x00010ae594f0(lVar2 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + -8);
        if (*plVar3 + 8 != 0) {
          func_0x000107c60ee4(plVar3,*plVar3 + 8);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(plVar3);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 10022a5a8; end: 10022a68f;  */

long FUN_10022a5a8(long param_1)

{
  FUN_1001e33e0(*(undefined8 *)(param_1 + 0x10));
  if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x0001001e6c68(param_1,0);
  return param_1;
}



/* Entry: 10022a690; end: 10022a693;  */

void FUN_10022a690(void)

{
  return;
}



/* Entry: 10022a694; end: 10022a773;  */

long * FUN_10022a694(long *param_1)

{
  long lVar1;
  
  if (*(long *)(*param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(*param_1 + 0x68) + 8) + 0x60))(param_1);
  }
  FUN_1001e33e0(param_1[0x1b]);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_10022a774(param_1 + 0x1a,0);
  FUN_1001e33e0(param_1[0x18]);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_1001e33e0(param_1[0x16]);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_1001e33e0(param_1[0x14]);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_10022a7b0(param_1 + 0x12);
  FUN_1001e33e0(param_1[0xf]);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  lVar1 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar1 != 0) {
    FUN_10021f114();
  }
  FUN_1001e33e0(param_1[0xc]);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_1001e3370(param_1 + 10,0);
  lVar1 = param_1[7];
  param_1[7] = 0;
  if (lVar1 != 0) {
    FUN_1001e33e0();
  }
  FUN_1001e3290(param_1 + 4,0);
  func_0x0001001e45f8(param_1 + 3,0);
  return param_1;
}



/* Entry: 10022a774; end: 10022a7af;  */

void FUN_10022a774(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *param_1 = param_2;
  if (lVar2 == 0) {
    return;
  }
  FUN_1001e33e0(*(undefined8 *)(lVar2 + 8));
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + -8);
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 10022a7b0; end: 10022a7df;  */

undefined8 FUN_10022a7b0(undefined8 param_1)

{
  FUN_1001e801c(param_1,0,0);
  return param_1;
}



/* Entry: 10022a7e0; end: 10022a7e3;  */

void FUN_10022a7e0(void)

{
  return;
}



/* Entry: 10022a7e4; end: 10022a84f;  */

void FUN_10022a7e4(long *param_1)

{
  long lVar1;
  
  if (param_1 != (long *)0x0) {
    (**(code **)(param_1[6] + 8))();
    FUN_1001e3370(param_1 + 1,0);
    lVar1 = *param_1;
    *param_1 = 0;
    if (lVar1 != 0) {
      FUN_10021f114();
    }
    param_1[5] = 0;
    FUN_10022a8ec(param_1 + 0x13,0);
    lVar1 = param_1[0x14];
    param_1[0x14] = 0;
    if (lVar1 != 0) {
      FUN_10021f114();
    }
    param_1[0x15] = 0;
  }
  return;
}



/* Entry: 10022a850; end: 10022a8eb;  */

long * FUN_10022a850(long *param_1)

{
  long lVar1;
  
  FUN_10022a7e4();
  (**(code **)(param_1[6] + 0x10))(param_1);
  lVar1 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar1 != 0) {
    FUN_10021f114();
  }
  FUN_10022a8ec(param_1 + 0x13,0);
  lVar1 = param_1[0xd];
  param_1[0xd] = 0;
  if (lVar1 != 0) {
    FUN_100229fdc();
  }
  lVar1 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar1 != 0) {
    FUN_100229fdc();
  }
  FUN_1001e33e0(param_1[7]);
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_1001e3370(param_1 + 1,0);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10021f114();
  }
  return param_1;
}



/* Entry: 10022a8ec; end: 10022a913;  */

void FUN_10022a8ec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000107c2b764();
  }
  return;
}



/* Entry: 10022a914; end: 10022a973;  */

void FUN_10022a914(void)

{
  return;
}



/* Entry: 10022a974; end: 10022a987;  */

/* WARNING: Possible PIC construction at 0x00010015efa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010015efa8) */
/* WARNING: Removing unreachable block (ram,0x00010015efb0) */
/* WARNING: Removing unreachable block (ram,0x00010015efc4) */

undefined ***
FUN_10022a974(undefined8 ****param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  char cVar2;
  int iVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined ***pppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 ***pppuStack_68;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  
  uStack_b0 = 1;
  ppppuVar4 = param_1;
  uVar8 = param_4;
  uStack_94 = param_2;
  iStack_98 = param_3;
  func_0x000107c613d0();
  if ((undefined8 ****)0x7ffffffffffffff7 < ppppuVar4) {
    uVar9 = 0x10015efe4;
    func_0x000107c35c54();
    goto SUB_10015efe4;
  }
  if (ppppuVar4 < (undefined8 ****)0x17) {
    uStack_58 = CONCAT17((char)ppppuVar4,(undefined7)uStack_58);
    ppppuVar5 = &pppuStack_68;
    if (ppppuVar4 != (undefined8 ****)0x0) goto LAB_10015ef7c;
  }
  else {
    ppppuVar6 = (undefined8 ****)0x19;
    if (((ulong)ppppuVar4 | 7) != 0x17) {
      ppppuVar6 = (undefined8 ****)(((ulong)ppppuVar4 | 7) + 1);
    }
    ppppuVar5 = ppppuVar6;
    func_0x000107c60e20();
    uStack_58 = (ulong)ppppuVar6 | 0x8000000000000000;
    pppuStack_68 = ppppuVar5;
    pppuStack_60 = ppppuVar4;
LAB_10015ef7c:
    func_0x000107c610b4(ppppuVar5,param_1,ppppuVar4);
  }
  *(undefined1 *)((long)ppppuVar5 + (long)ppppuVar4) = 0;
  ppppuVar4 = &pppuStack_68;
  uStack_b0 = 1;
  uVar9 = 0x10015efa8;
  uVar8 = param_4;
  uStack_94 = param_2;
  iStack_98 = param_3;
SUB_10015efe4:
  pppuVar7 = &ppuStack_d0;
  uStack_88 = 1;
  iStack_9c = (int)uVar8;
  if ((iStack_98 == 1) && (iStack_9c == 2)) {
    iStack_9c = 3;
    iStack_98 = 2;
  }
  cVar2 = *(char *)((long)ppppuVar4 + 0x17);
  ppppuVar6 = (undefined8 ****)*ppppuVar4;
  if (-1 < (long)cVar2) {
    ppppuVar6 = ppppuVar4;
  }
  pppuVar1 = ppppuVar4[1];
  if (-1 < cVar2) {
    pppuVar1 = (undefined8 ***)(long)cVar2;
  }
  uStack_90 = param_4;
  puStack_80 = &stack0xfffffffffffffff0;
  uStack_78 = uVar9;
  FUN_100121bd8(ppppuVar6,pppuVar1,&uStack_94,&iStack_98,&iStack_9c);
  if (((ulong)ppppuVar6 & 1) != 0) {
    uStack_c0 = 1;
    uStack_bc = uStack_94;
    iStack_b8 = iStack_98;
    iStack_b4 = iStack_9c;
    ppuStack_d0 = &PTR_DAT_110cd4f40;
    uStack_a8 = 0;
    pppuStack_c8 = ppppuVar4;
    FUN_100122250(&ppuStack_d0);
    return pppuVar7;
  }
  if ((bRam000000011383aa60 & 1) != 0) {
    return (undefined ***)(undefined1 *)0x11383aa48;
  }
  iVar3 = 0x1383aa60;
  func_0x000107c60e48();
  if (iVar3 == 0) {
    return (undefined ***)(undefined1 *)0x11383aa48;
  }
  uRam000000011383aa58 = 0;
  ppuRam000000011383aa48 = &PTR_DAT_110cd4ab8;
  puRam000000011383aa50 = &UNK_10f7443ef;
  func_0x000107c60e4c(0x11383aa60);
  return (undefined ***)(undefined1 *)0x11383aa48;
}



/* Entry: 10022a988; end: 10022a9cf;  */

undefined2 FUN_10022a988(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
  if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x618) >> 3 & 1) != 0)) {
    plVar2 = (long *)(*(long *)(param_1 + 0x30) + 0x1c8);
  }
  else {
    lVar1 = *(long *)(lVar3 + 0x5e0);
    if ((lVar1 != 0) || (lVar1 = *(long *)(lVar3 + 0x5d8), lVar1 != 0)) goto LAB_10022a9c0;
    plVar2 = (long *)(param_1 + 0x58);
  }
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    return 0;
  }
LAB_10022a9c0:
  return *(undefined2 *)(lVar1 + 8);
}



/* Entry: 10022a9d0; end: 10022ac7f;  */

long FUN_10022a9d0(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  piVar3 = (int *)*param_2;
  if (piVar3 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x000100206f40(param_1);
  piVar3 = (int *)param_2[1];
  if (piVar3 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x000100206f40(param_1 + 8);
  uVar4 = param_2[4];
  uVar5 = param_2[2];
  *(undefined8 *)(param_1 + 0x18) = param_2[3];
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  func_0x0001001811b4(param_1 + 0x28,param_2 + 5);
  func_0x000107c60ca4(param_1 + 0x40,param_2 + 8);
  func_0x000100222180(param_1 + 0x58,param_2 + 0xb);
  uVar4 = *(undefined8 *)((long)param_2 + 0x75);
  *(undefined8 *)(param_1 + 0x70) = param_2[0xe];
  *(undefined8 *)(param_1 + 0x75) = uVar4;
  return param_1;
}



/* Entry: 10022ac80; end: 10022ad7f;  */

bool FUN_10022ac80(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
  if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x619) >> 3 & 1) != 0)) &&
     ((*(byte *)(param_1 + 0xa4) & 1) == 0)) {
    return *(long *)(lVar1 + 0x5f0) != 0;
  }
  return *(int *)(*(long *)(param_1 + 0x30) + 0xd0) == 1;
}



/* Entry: 10022ad80; end: 10022ada7;  */

int FUN_10022ad80(int param_1)

{
  int iVar1;
  
  func_0x00010022ad4c();
  iVar1 = (param_1 - 0x301U & 0xffff) + 3;
  if ((param_1 - 0x301U & 0xfffc) != 0) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Entry: 10022ada8; end: 10022add7;  */

uint FUN_10022ada8(long param_1)

{
  long lVar1;
  
  if ((*(ushort *)(*(long *)(param_1 + 0x30) + 0xd4) >> 6 & 1) != 0) {
    return 1;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
  if (lVar1 != 0) {
    return *(uint *)(lVar1 + 0x618) >> 0xb & 1;
  }
  return 0;
}



/* Entry: 10022add8; end: 10022ae1b;  */

ushort FUN_10022add8(long param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x30) + 0xd4);
  if ((uVar1 >> 1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1001fa5c4();
    if ((uint)param_1 < 0x304) {
      uVar1 = uVar1 >> 8 & 1;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* Entry: 10022ae1c; end: 10022be8f;  */

void FUN_10022ae1c(long *param_1)

{
  func_0x00010015d870(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010022ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



/* Entry: 10022be90; end: 10022bf2f;  */

ulong FUN_10022be90(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    uVar1 = param_1;
    FUN_10022bf30();
    if ((0 < (int)uVar1) && (uVar1 = param_3, 0 < (int)param_3)) {
      uVar2 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x88);
      uVar1 = uVar2;
      if ((param_3 & 0xffffffff) <= uVar2) {
        uVar1 = param_3 & 0xffffffff;
      }
      if (uVar2 != 0) {
        func_0x000107c610b4(param_2,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x80),uVar1);
      }
    }
  }
  else {
    FUN_1004d2c58(0x10,0,0x42,&UNK_10f6d0a17,0x401);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 10022bf30; end: 10022c15f;  */

void FUN_10022bf30(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  byte bStack_79;
  undefined8 uStack_78;
  undefined1 uStack_69;
  undefined1 auStack_68 [40];
  
  *(undefined4 *)(param_1[6] + 0xbc) = 0;
  plVar2 = param_1;
  FUN_1001e83a0();
  func_0x000107c60e5c();
  *(undefined4 *)plVar2 = 0;
  if (param_1[5] == 0) {
    uVar3 = 0xe2;
    uVar4 = 0x3ae;
LAB_10022bf9c:
    FUN_1004d2c58(0x10,0,uVar3,&UNK_10f6d0a17,uVar4);
  }
  else {
    lVar5 = param_1[6];
    if (*(int *)(lVar5 + 0xa8) == 2) {
      func_0x000107c2b2b0(*(undefined8 *)(lVar5 + 0xb0));
    }
    else {
      lVar6 = *(long *)(lVar5 + 0x88);
      while (lVar6 == 0) {
        if ((*(ushort *)(lVar5 + 0xd4) >> 0xe & 1) != 0) {
          *(undefined4 *)(lVar5 + 0xbc) = 0x13;
          return;
        }
        while ((*(long *)(param_1[6] + 0x110) != 0 &&
               ((*(ushort *)(*(long *)(param_1[6] + 0x110) + 0x618) & 0x2008) == 0))) {
          plVar2 = param_1;
          FUN_1001e8bc0();
          if ((int)plVar2 < 0) {
            return;
          }
          if ((int)plVar2 == 0) {
            uVar3 = 0xd7;
            uVar4 = 0x3c6;
            goto LAB_10022bf9c;
          }
        }
        plVar2 = param_1;
        (**(code **)(*param_1 + 0x18))(param_1,auStack_68);
        if ((int)plVar2 == 0) {
          uStack_69 = 0x32;
          lVar5 = param_1[6];
          uStack_78 = 0;
          if (*(int *)(lVar5 + 0xa8) == 2) {
            func_0x000107c2b2b0(*(undefined8 *)(lVar5 + 0xb0));
            uStack_69 = 0;
LAB_10022c0ec:
            plVar2 = (long *)0x4;
          }
          else {
            plVar2 = param_1;
            (**(code **)(*param_1 + 0x40))
                      (param_1,lVar5 + 0x80,&uStack_78,&uStack_69,
                       *(long *)(lVar5 + 0x50) + (ulong)*(ushort *)(lVar5 + 0x58),
                       *(undefined2 *)(lVar5 + 0x5a));
            if ((int)plVar2 == 4) {
              lVar6 = param_1[6];
              *(undefined4 *)(lVar6 + 0xa8) = 2;
              func_0x000107c2b2ac();
              lVar5 = *(long *)(lVar6 + 0xb0);
              *(long **)(lVar6 + 0xb0) = plVar2;
              if (lVar5 != 0) {
                func_0x000107c2b2a8();
              }
              goto LAB_10022c0ec;
            }
          }
          plVar1 = param_1;
          FUN_1001f296c(param_1,&bStack_79,plVar2,uStack_78,uStack_69);
          if ((int)plVar1 < 1) {
            return;
          }
          if ((bStack_79 & 1) == 0) {
            *(undefined1 *)(param_1[6] + 0xcc) = 0;
          }
        }
        else {
          lVar5 = *(long *)(param_1[6] + 0x110);
          if ((lVar5 == 0) || ((*(uint *)(lVar5 + 0x618) >> 3 & 1) != 0)) {
            plVar2 = param_1;
            FUN_10023688c(param_1,auStack_68);
            if ((int)plVar2 == 0) {
              func_0x000107c2b788(param_1[6]);
              return;
            }
            (**(code **)(*param_1 + 0x20))(param_1);
          }
          else {
            *(uint *)(lVar5 + 0x618) = *(uint *)(lVar5 + 0x618) & 0xffffdff7;
          }
        }
        lVar5 = param_1[6];
        lVar6 = *(long *)(lVar5 + 0x88);
      }
    }
  }
  return;
}



/* Entry: 10022c160; end: 10022c2cb;  */

void FUN_10022c160(ulong param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  byte bVar6;
  long lVar7;
  undefined8 uStack_48;
  ulong uStack_40;
  char cStack_31;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uVar2 = param_1;
  FUN_1001f23a0(param_1,&cStack_31,&uStack_48,param_3,param_4,param_5,param_6);
  if ((int)uVar2 != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0xa4) & 1) == 0) {
    bVar6 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
    bVar6 = 0;
    if (lVar7 != 0) {
      bVar6 = *(byte *)(lVar7 + 0x619) >> 3 & 1;
    }
  }
  if (cStack_31 == '\x17') {
    if (bVar6 != 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
      uVar1 = *(ushort *)(lVar7 + 0x61e);
      if (0x3800 - (ulong)uVar1 < uStack_40) {
        uVar3 = 300;
        uVar4 = 0x151;
        goto LAB_10022c26c;
      }
      *(ushort *)(lVar7 + 0x61e) = uVar1 + (short)uStack_40;
    }
    if (uStack_40 != 0) {
      param_2[1] = uStack_40;
      *param_2 = uStack_48;
    }
  }
  else {
    if (cStack_31 == '\x16') {
      if (((*(byte *)(param_1 + 0xa4) & 1) == 0) ||
         (uVar2 = param_1, FUN_1001fa5c4(), 0x303 < (uint)uVar2)) {
        FUN_1001fa2c8(param_1,uStack_48,uStack_40);
        if ((param_1 & 1) != 0) {
          return;
        }
        uVar5 = 0x50;
      }
      else {
        FUN_1004d2c58(0x10,0,0xb6,&UNK_10f6d009d,0x13d);
        uVar5 = 100;
      }
    }
    else {
      uVar3 = 0xe1;
      uVar4 = 0x14a;
LAB_10022c26c:
      FUN_1004d2c58(0x10,0,uVar3,&UNK_10f6d009d,uVar4);
      uVar5 = 10;
    }
    *param_4 = uVar5;
  }
  return;
}



/* Entry: 10022c2cc; end: 10022c2f7;  */

void FUN_10022c2cc(long param_1)

{
  if (param_1 != 0) {
    FUN_10014f860(param_1 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10022c2f8; end: 10022c4cf;  */

void FUN_10022c2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ddd140,&UNK_10d9a2bc0);
  puVar1 = &UNK_11041cc48;
  func_0x000107c613fc(&UNK_11041cc48,0xb8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  FUN_1000823a8(FUN_10063f5e0,puVar1);
  return;
}


