/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00713098; end: 0071319b;  */

long FUN_00713098(ulong *param_1,int param_2,uint *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  if (param_1 != (ulong *)0x0) {
    if (param_4 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *param_4 + 1;
    }
    puVar7 = (undefined8 *)0x0;
    for (uVar8 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)); uVar8 < *param_1;
        uVar8 = uVar8 + 1) {
      puVar9 = *(undefined8 **)(param_1[1] + uVar8 * 8);
      iVar2 = (int)*puVar9;
      FUN_00702384();
      if (iVar2 == param_2) {
        if (param_4 != (int *)0x0) {
          *param_4 = (int)uVar8;
          puVar7 = puVar9;
          goto LAB_00713144;
        }
        bVar1 = puVar7 != (undefined8 *)0x0;
        puVar7 = puVar9;
        if (bVar1) {
          if (param_3 == (uint *)0x0) {
            return 0;
          }
          uVar4 = 0xfffffffe;
          goto LAB_0071317c;
        }
      }
    }
    if (puVar7 != (undefined8 *)0x0) {
LAB_00713144:
      if (param_3 != (uint *)0x0) {
        *param_3 = (uint)(0 < *(int *)(puVar7 + 1));
      }
      puVar9 = puVar7;
      FUN_00712fb4();
      lVar3 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        piVar5 = (int *)puVar7[2];
        lVar6 = *(long *)(piVar5 + 2);
        if (puVar9[1] == 0) {
          lVar3 = 0;
          (*(code *)puVar9[4])(0,&stack0xffffffffffffffd8,(long)*piVar5);
        }
        else {
          lVar3 = 0;
          FUN_006ce6e8(0,&stack0xffffffffffffffd8,(long)*piVar5);
        }
        if ((lVar3 != 0) && (lVar6 != *(long *)((int *)puVar7[2] + 2) + (long)*(int *)puVar7[2])) {
          if (puVar9[1] == 0) {
            (*(code *)puVar9[3])();
          }
          else {
            FUN_006d0240();
          }
          FUN_0071319c(0x14,0,0xa4);
          lVar3 = 0;
        }
      }
      return lVar3;
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = -1;
  }
  if (param_3 != (uint *)0x0) {
    uVar4 = 0xffffffff;
LAB_0071317c:
    *param_3 = uVar4;
  }
  return 0;
}



/* Entry: 0071319c; end: 007131a7;  */

void FUN_0071319c(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 007131a8; end: 00713333;  */

long * FUN_007131a8(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined8 uStack_68;
  
  plVar1 = (long *)&DAT_00a1ea38;
  FUN_006d0610();
  if (plVar1 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    if (param_3 == (ulong *)0x0) {
      return plVar1;
    }
    uVar7 = 0;
    do {
      if (*param_3 <= uVar7) {
        return plVar1;
      }
      lVar4 = *(long *)(param_3[1] + uVar7 * 8);
      lVar5 = *(long *)(lVar4 + 8);
      lVar2 = lVar5;
      _strncmp(lVar5,&UNK_0091cb15,9);
      if (((int)lVar2 == 0) && (*(char *)(lVar5 + 9) != '\0')) {
        lStack_70 = 10;
        plVar8 = plVar1;
      }
      else {
        lVar2 = lVar5;
        _strncmp(lVar5,&UNK_0091cb1f,8);
        if (((int)lVar2 != 0) || (*(char *)(lVar5 + 8) == '\0')) {
          plVar6 = (long *)0x0;
          uVar3 = 0x87;
          goto LAB_007132d8;
        }
        lStack_70 = 9;
        plVar8 = plVar1 + 1;
      }
      lStack_70 = lVar5 + lStack_70;
      uStack_68 = *(undefined8 *)(lVar4 + 0x10);
      plVar6 = (long *)&DAT_00a1e9b0;
      FUN_006d0610();
      lVar2 = *plVar6;
      FUN_00710760(lVar2,param_1,param_2,auStack_78,1);
      if (lVar2 == 0) goto LAB_007132ec;
      lVar2 = *plVar8;
      if (lVar2 == 0) {
        FUN_00705ed8();
        *plVar8 = lVar2;
        if (lVar2 == 0) break;
      }
      func_0x00706268();
      uVar7 = uVar7 + 1;
    } while (lVar2 != 0);
  }
  uVar3 = 0x41;
LAB_007132d8:
  FUN_006de8e4(0x14,0,uVar3,0,0);
LAB_007132ec:
  if (plVar1 != (long *)0x0) {
    FUN_0071338c(plVar1);
  }
  if (plVar6 != (long *)0x0) {
    FUN_006d0240(plVar6,&DAT_00a1e9b0);
  }
  return (long *)0x0;
}



/* Entry: 00713334; end: 0071338b;  */

undefined8
FUN_00713334(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00713668(*param_2,param_3,param_4,&UNK_0091cb28);
  FUN_00713668(param_2[1],param_3,param_4,&UNK_0091cb32);
  return 1;
}



/* Entry: 0071338c; end: 00713397;  */

void FUN_0071338c(undefined8 param_1)

{
  func_0x006d05f8(param_1,&DAT_00a1ea38);
  return;
}



/* Entry: 00713398; end: 00713667;  */

void FUN_00713398(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 auStack_40 [2];
  undefined8 *puStack_38;
  
  iVar4 = (int)auStack_40;
  puVar11 = *(undefined8 **)(*param_1 + 0x28);
  if ((puVar11 == (undefined8 *)0x0) || ((int *)*puVar11 == (int *)0x0)) {
    lVar8 = 0;
  }
  else {
    lVar8 = (long)*(int *)*puVar11;
  }
  if ((long *)param_1[0xf] == (long *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)param_1[0xf];
  }
  puVar7 = (ulong *)*param_2;
  if (puVar7 == (ulong *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar7;
  }
  uVar1 = lVar10 + lVar8;
  lVar8 = 0;
  if ((long *)param_2[1] != (long *)0x0) {
    lVar8 = *(long *)param_2[1];
  }
  uVar9 = lVar8 + uVar9;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar9;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  if ((((puVar11 == (undefined8 *)0x0) || ((int *)*puVar11 == (int *)0x0)) ||
      ((ulong)(long)*(int *)*puVar11 <= uVar1)) && ((puVar7 == (ulong *)0x0 || (*puVar7 <= uVar9))))
  {
    if (uVar9 == 0) {
      if (0x100000 < uVar9 * uVar1) {
        return;
      }
    }
    else if (0x100000 < uVar9 * uVar1 || SUB168(auVar2 * auVar3,8) != 0) {
      return;
    }
    if (((puVar11 == (undefined8 *)0x0) || ((int *)*puVar11 == (int *)0x0)) ||
       (*(int *)*puVar11 < 1)) {
LAB_00713508:
      uVar9 = 0;
      do {
        puVar7 = (ulong *)param_1[0xf];
        if (puVar7 == (ulong *)0x0) {
          return;
        }
        if (*puVar7 <= uVar9) {
          return;
        }
        iVar4 = (int)*(undefined8 *)(puVar7[1] + uVar9 * 8);
        func_0x00713ba8();
        uVar9 = uVar9 + 1;
      } while (iVar4 == 0);
    }
    else {
      auStack_40[0] = 4;
      puStack_38 = puVar11;
      func_0x00713ba8();
      if (iVar4 == 0) {
        auStack_40[0] = 1;
        puVar6 = (undefined8 *)0xffffffff;
        do {
          puVar5 = puVar11;
          FUN_0070cc54(puVar11,0x30,puVar6);
          if ((int)puVar5 == -1) goto LAB_00713508;
          puVar6 = puVar11;
          func_0x0070cc1c(puVar11,puVar5);
          if (puVar6 == (undefined8 *)0x0) {
            puStack_38 = (undefined8 *)0x0;
          }
          else {
            puStack_38 = (undefined8 *)puVar6[1];
          }
        } while ((*(int *)((long)puStack_38 + 4) == 0x16) &&
                (iVar4 = (int)auStack_40, func_0x00713ba8(), puVar6 = puVar5, iVar4 == 0));
      }
    }
  }
  return;
}



/* Entry: 00713668; end: 00713833;  */

void FUN_00713668(ulong *param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  if (param_1 != (ulong *)0x0) {
    if (*param_1 != 0) {
      FUN_006d2bcc(param_2,&UNK_0091cb3b);
    }
    for (uVar6 = 0; uVar6 < *param_1; uVar6 = uVar6 + 1) {
      puVar5 = *(undefined8 **)(param_1[1] + uVar6 * 8);
      FUN_006d2bcc(param_2,&UNK_0091c80a);
      piVar1 = (int *)*puVar5;
      if (*piVar1 == 7) {
        iVar4 = **(int **)(piVar1 + 2);
        func_0x006d1a14(param_2,&UNK_0091cb43);
        if (iVar4 == 8) {
          puVar3 = &UNK_0091cb47;
        }
        else {
          if (iVar4 == 0x20) {
            for (iVar4 = 0; iVar4 != 0x10; iVar4 = iVar4 + 1) {
              FUN_006d2bcc(param_2,&UNK_0091cb5f);
              pcVar2 = "/";
              if ((iVar4 == 7) || (pcVar2 = ":", iVar4 != 0xf)) {
                func_0x006d1a14(param_2,pcVar2);
              }
            }
            goto LAB_007137f8;
          }
          puVar3 = &UNK_0091cb62;
        }
        FUN_006d2bcc(param_2,puVar3);
      }
      else {
        FUN_00710534(param_2);
      }
LAB_007137f8:
      func_0x006d1a14(param_2,"\n");
    }
  }
  return;
}



/* Entry: 00713834; end: 00713af3;  */

undefined4 FUN_00713834(long param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char **ppcVar4;
  long lVar5;
  undefined8 uVar6;
  char **ppcVar7;
  undefined4 uVar8;
  int *extraout_x9;
  int *extraout_x9_00;
  long lVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  char *pcStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  ulong uStack_38;
  char *pcStack_30;
  ulong uStack_28;
  
  iVar3 = (int)&pcStack_60;
  ppcVar4 = &pcStack_60;
  uVar8 = 0x33;
  switch(*param_2) {
  case 1:
    func_0x00713b84(0x33);
    pcStack_40 = *(char **)(extraout_x9 + 2);
    uStack_38 = (ulong)*extraout_x9;
    ppcVar4 = &pcStack_30;
    FUN_006d433c(ppcVar4,&uStack_50,0x40);
    if ((int)ppcVar4 == 0) goto code_r0x00713a30;
    ppcVar4 = &pcStack_40;
    FUN_006d433c(ppcVar4,&pcStack_60,0x40);
    if ((int)ppcVar4 == 0) {
      uVar12 = uStack_38;
      if ((uStack_38 != 0) && (*pcStack_40 == '.')) goto code_r0x00713970;
    }
    else {
      if ((uStack_58 != 0) && (FUN_006d41bc(&pcStack_60,uStack_50,uStack_48), iVar3 == 0)) {
        return 0x2f;
      }
      if (uStack_38 == 0) {
        uVar12 = 0;
      }
      else {
        pcStack_40 = pcStack_40 + 1;
        uVar12 = uStack_38 - 1;
      }
    }
    if (uStack_28 != 0) {
      pcStack_30 = pcStack_30 + 1;
      uStack_28 = uStack_28 - 1;
    }
    pcVar10 = pcStack_40;
    ppcVar7 = &pcStack_30;
code_r0x00713ac4:
    func_0x00713b1c(pcVar10,uVar12,ppcVar7);
    iVar3 = (int)pcVar10;
    break;
  case 2:
    pcStack_30 = *(char **)(*(uint **)(param_1 + 8) + 2);
    uVar1 = **(uint **)(param_1 + 8);
    uStack_28 = (ulong)(int)uVar1;
    pcStack_40 = *(char **)(*(uint **)(param_2 + 2) + 2);
    uVar2 = **(uint **)(param_2 + 2);
    uStack_38 = (ulong)(int)uVar2;
    if (uVar2 == 0) {
      return 0;
    }
    if (*pcStack_40 != '.') {
      pcVar10 = pcStack_30;
      uVar12 = uStack_28;
      if (uVar2 < uVar1) {
        if (uStack_28 < ~uStack_38 + uStack_28) {
          return 0x2f;
        }
        pcVar10 = pcStack_30 + ~uStack_38 + uStack_28 + 1;
        uVar12 = uStack_38;
        if (pcStack_30[~uStack_38 + uStack_28] != '.') {
          return 0x2f;
        }
      }
      ppcVar7 = &pcStack_40;
      goto code_r0x00713ac4;
    }
code_r0x00713970:
    ppcVar4 = &pcStack_30;
code_r0x00713974:
    func_0x00713af4(ppcVar4,&pcStack_40);
    iVar3 = (int)ppcVar4;
    break;
  default:
    goto LAB_00713ad4;
  case 4:
    lVar9 = *(long *)(param_1 + 8);
    lVar11 = *(long *)(param_2 + 2);
    if (((*(int *)(lVar9 + 8) == 0) || (lVar5 = lVar9, func_0x0070db0c(lVar9,0), -1 < (int)lVar5))
       && ((*(int *)(lVar11 + 8) == 0 ||
           (lVar5 = lVar11, func_0x0070db0c(lVar11,0), -1 < (int)lVar5)))) {
      if (*(int *)(lVar9 + 0x20) < *(int *)(lVar11 + 0x20)) {
        return 0x2f;
      }
      if (*(int *)(lVar11 + 0x20) != 0) {
        uVar6 = *(undefined8 *)(lVar11 + 0x18);
        _memcmp(uVar6,*(undefined8 *)(lVar9 + 0x18));
        if ((int)uVar6 != 0) {
          return 0x2f;
        }
      }
      return 0;
    }
    return 0x11;
  case 6:
    func_0x00713b84(0x33);
    pcVar10 = *(char **)(extraout_x9_00 + 2);
    iVar3 = *extraout_x9_00;
    uVar12 = (ulong)iVar3;
    ppcVar7 = &pcStack_30;
    pcStack_40 = pcVar10;
    uStack_38 = uVar12;
    FUN_006d433c(ppcVar7,&uStack_50,0x3a);
    if (((((int)ppcVar7 != 0) && (uStack_28 != 0)) && (uStack_28 != 1)) &&
       (pcStack_30[1] == '/' && uStack_28 != 2)) {
      uStack_28 = uStack_28 - 3;
      if (pcStack_30[2] == '/') {
        ppcVar7 = &pcStack_30;
        pcStack_30 = pcStack_30 + 3;
        FUN_006d433c(ppcVar7,&pcStack_60,0x3a);
        if ((int)ppcVar7 == 0) {
          ppcVar7 = &pcStack_30;
          FUN_006d433c(ppcVar7,&pcStack_60,0x2f);
          if ((int)ppcVar7 == 0) {
            uStack_58 = uStack_28;
            pcStack_60 = pcStack_30;
          }
        }
        if (uStack_58 != 0) {
          ppcVar7 = &pcStack_60;
          if ((iVar3 == 0) || (ppcVar7 = &pcStack_60, *pcVar10 != '.')) goto code_r0x00713ac4;
          goto code_r0x00713974;
        }
      }
    }
code_r0x00713a30:
    uVar8 = 0x35;
    goto LAB_00713ad4;
  }
  uVar8 = 0x2f;
  if (iVar3 != 0) {
    uVar8 = 0;
  }
LAB_00713ad4:
  return uVar8;
}



/* Entry: 00713af4; end: 00713baf;  */

bool FUN_00713af4(long *param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar3 = param_2[1];
  if ((ulong)param_1[1] < uVar3) {
    return false;
  }
  if (uVar3 != param_2[1]) {
    return false;
  }
  uVar2 = 0;
  do {
    uVar6 = uVar2;
    if (uVar3 == uVar6) break;
    bVar1 = *(byte *)(*param_1 + (param_1[1] - uVar3) + uVar6);
    uVar4 = bVar1 | 0x20;
    if (0x19 < bVar1 - 0x41) {
      uVar4 = (uint)bVar1;
    }
    bVar1 = *(byte *)(*param_2 + uVar6);
    uVar5 = bVar1 | 0x20;
    if (0x19 < bVar1 - 0x41) {
      uVar5 = (uint)bVar1;
    }
    uVar2 = uVar6 + 1;
  } while (uVar4 == uVar5);
  return uVar3 <= uVar6;
}



/* Entry: 00713bb0; end: 00713c17;  */

bool FUN_00713bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = param_3;
  FUN_006d2bcc(param_3,&UNK_0091c80a);
  if ((int)uVar2 < 1) {
    bVar1 = false;
  }
  else {
    FUN_006cd064(param_3,param_2);
    bVar1 = (int)param_3 != 0;
  }
  return bVar1;
}



/* Entry: 00713c18; end: 00713c23;  */

undefined8 FUN_00713c18(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  puVar2 = &uStack_18;
  FUN_006d0644(puVar2,&DAT_00a112a0);
  uVar1 = 0;
  if ((int)puVar2 != 0) {
    uVar1 = uStack_18;
  }
  return uVar1;
}



/* Entry: 00713c24; end: 0071413b;  */

undefined8 FUN_00713c24(undefined8 param_1,long *param_2,undefined8 param_3)

{
  FUN_006d2bcc(param_3,&UNK_0091cb77);
  if (*param_2 == 0) {
    func_0x007141c0();
  }
  else {
    FUN_006ce5a0(param_3);
  }
  func_0x007141b4();
  func_0x007141c0();
  FUN_006cc67c(param_3,*(undefined8 *)param_2[1]);
  func_0x007141b4();
  if ((*(long *)(param_2[1] + 8) != 0) && (*(long *)(*(long *)(param_2[1] + 8) + 8) != 0)) {
    func_0x007141c0();
  }
  return 1;
}



/* Entry: 0071413c; end: 007141f3;  */

void FUN_0071413c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)();
    return;
  }
  return;
}



/* Entry: 007141f4; end: 00714247;  */

undefined8 FUN_007141f4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  uStack_28 = param_3;
  func_0x00715694(&UNK_0091cc78,*param_2,&uStack_28);
  func_0x00715694(&UNK_0091cc90,param_2[1],&uStack_28);
  return uStack_28;
}



/* Entry: 00714248; end: 00714397;  */

long * FUN_00714248(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  plVar3 = (long *)&DAT_00a1ed70;
  FUN_006d0610();
  if (plVar3 == (long *)0x0) {
    func_0x007143a4(0x14,0,0x41);
  }
  else {
    if (param_3 != (ulong *)0x0) {
      for (uVar6 = 0; uVar6 < *param_3; uVar6 = uVar6 + 1) {
        lVar4 = *(long *)(param_3[1] + uVar6 * 8);
        uVar5 = *(undefined8 *)(lVar4 + 8);
        uVar1 = uVar5;
        _strcmp(uVar5,&DAT_0091cc4d);
        plVar2 = plVar3;
        if ((int)uVar1 != 0) {
          _strcmp(uVar5,&DAT_0091cc63);
          if ((int)uVar5 != 0) {
            func_0x007143a4(0x14,0,0x7b);
            FUN_006de97c(6);
            goto LAB_0071436c;
          }
          plVar2 = plVar3 + 1;
        }
        FUN_007157fc(lVar4,plVar2);
        if ((int)lVar4 == 0) goto LAB_0071436c;
      }
    }
    if ((plVar3[1] == 0) && (*plVar3 == 0)) {
      func_0x007143a4(0x14,0,0x75);
LAB_0071436c:
      FUN_00714398(plVar3);
      plVar3 = (long *)0x0;
    }
  }
  return plVar3;
}



/* Entry: 00714398; end: 007143af;  */

void FUN_00714398(undefined8 param_1)

{
  func_0x006d05f8(param_1,&DAT_00a1ed70);
  return;
}



/* Entry: 007143b0; end: 00714467;  */

ulong * FUN_007143b0(ulong *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong *puStack_e0;
  undefined1 auStack_d8 [80];
  ulong auStack_88 [10];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_e0 = param_3;
  if (param_2 != (ulong *)0x0) {
    for (uVar4 = 0; uVar4 < *param_2; uVar4 = uVar4 + 1) {
      puVar5 = *(undefined8 **)(param_2[1] + uVar4 * 8);
      func_0x006cc674(auStack_88,0x50,*puVar5);
      func_0x006cc674(auStack_d8,0x50,puVar5[1]);
      param_1 = auStack_88;
      FUN_00715244(param_1,auStack_d8,&puStack_e0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return puStack_e0;
  }
  puVar3 = puStack_e0;
  ___stack_chk_fail();
  FUN_00705ed8();
  if (param_1 == (ulong *)0x0) {
    func_0x007145cc();
  }
  else if (puVar3 != (ulong *)0x0) {
    for (uVar4 = 0; uVar4 < *puVar3; uVar4 = uVar4 + 1) {
      lVar6 = *(long *)(puVar3[1] + uVar4 * 8);
      if ((*(long *)(lVar6 + 0x10) == 0) || (lVar1 = *(long *)(lVar6 + 8), lVar1 == 0)) {
LAB_00714518:
        func_0x007145ac(param_1);
        FUN_006de8e4(0x14,0,0x81,0,0);
        FUN_006de97c(6);
        return (ulong *)0x0;
      }
      FUN_007024d4(lVar1,0);
      lVar6 = *(long *)(lVar6 + 0x10);
      FUN_007024d4(lVar6,0);
      if ((lVar1 == 0) || (lVar6 == 0)) goto LAB_00714518;
      plVar2 = (long *)&DAT_00a1ee60;
      FUN_006d0610();
      if (plVar2 == (long *)0x0) {
        func_0x007145ac(param_1);
        func_0x007145cc();
        return (ulong *)0x0;
      }
      *plVar2 = lVar1;
      plVar2[1] = lVar6;
      func_0x00706268(param_1,plVar2);
    }
  }
  return param_1;
}



/* Entry: 00714468; end: 0071459f;  */

long FUN_00714468(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  FUN_00705ed8();
  if (param_1 == 0) {
    func_0x007145cc();
  }
  else if (param_3 != (ulong *)0x0) {
    for (uVar3 = 0; uVar3 < *param_3; uVar3 = uVar3 + 1) {
      lVar4 = *(long *)(param_3[1] + uVar3 * 8);
      if ((*(long *)(lVar4 + 0x10) == 0) || (lVar1 = *(long *)(lVar4 + 8), lVar1 == 0)) {
LAB_00714518:
        func_0x007145ac(param_1);
        FUN_006de8e4(0x14,0,0x81,0,0);
        FUN_006de97c(6);
        return 0;
      }
      FUN_007024d4(lVar1,0);
      lVar4 = *(long *)(lVar4 + 0x10);
      FUN_007024d4(lVar4,0);
      if ((lVar1 == 0) || (lVar4 == 0)) goto LAB_00714518;
      plVar2 = (long *)&DAT_00a1ee60;
      FUN_006d0610();
      if (plVar2 == (long *)0x0) {
        func_0x007145ac(param_1);
        func_0x007145cc();
        return 0;
      }
      *plVar2 = lVar1;
      plVar2[1] = lVar4;
      func_0x00706268(param_1,plVar2);
    }
  }
  return param_1;
}



/* Entry: 007145a0; end: 007145e3;  */

void FUN_007145a0(undefined8 param_1)

{
  func_0x006d05f8(param_1,&DAT_00a1ee60);
  return;
}



/* Entry: 007145e4; end: 00714c3b;  */

/* WARNING: Possible PIC construction at 0x00714e94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00714e98) */
/* WARNING: Removing unreachable block (ram,0x00714e9c) */
/* WARNING: Removing unreachable block (ram,0x00714ea0) */
/* WARNING: Removing unreachable block (ram,0x00714ea8) */
/* WARNING: Removing unreachable block (ram,0x00714eb8) */
/* WARNING: Removing unreachable block (ram,0x00714eb0) */
/* WARNING: Removing unreachable block (ram,0x00714ebc) */

ulong FUN_007145e4(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x19;
  int unaff_w20;
  
  lVar3 = param_1;
  func_0x00714664();
  if ((int)lVar3 == 0) {
    return 0xffffffff;
  }
  if (param_2 == -1) {
    return 1;
  }
  if (8 < param_2 - 1U) {
    return 0xffffffff;
  }
  uVar4 = (ulong)(param_2 - 1U) * 0x30 + 0xb2a778;
  switch(param_2) {
  case 1:
    uVar5 = (uint)*(undefined8 *)(param_1 + 0x38);
    if (((uVar5 >> 2 & 1) != 0) && ((*(byte *)(param_1 + 0x48) >> 1 & 1) == 0)) {
      return 0;
    }
    if (param_3 == 0) {
      if (((uVar5 >> 1 & 1) != 0) && ((*(byte *)(param_1 + 0x40) & 0x88) == 0)) {
        return 0;
      }
      if ((uVar5 >> 3 & 1) == 0) {
        return 1;
      }
      if (*(char *)(param_1 + 0x50) < '\0') {
        return 1;
      }
      return 0;
    }
    break;
  case 3:
  case 2:
    uVar5 = (uint)*(undefined8 *)(param_1 + 0x38);
    if (((uVar5 >> 2 & 1) != 0) && ((*(byte *)(param_1 + 0x48) & 1) == 0)) {
      return 0;
    }
    if (param_3 == 0) {
      if (((uVar5 >> 3 & 1) != 0) && ((*(byte *)(param_1 + 0x50) >> 6 & 1) == 0)) {
        return 0;
      }
      if (((uVar5 >> 1 & 1) != 0) && ((*(byte *)(param_1 + 0x40) & 0xa8) == 0)) {
        return 0;
      }
      return 1;
    }
    break;
  case 4:
    func_0x00715098();
    if (unaff_w20 != 0) {
      return uVar4;
    }
    if ((int)uVar4 != 0) {
      if (((*(byte *)(unaff_x19 + 0x38) >> 1 & 1) != 0) &&
         ((*(byte *)(unaff_x19 + 0x40) & 0xc0) == 0)) {
        return 0;
      }
      return 1;
    }
    return uVar4;
  case 5:
    func_0x00715098();
    if ((unaff_w20 == 0) && ((int)uVar4 != 0)) {
      if (((*(byte *)(unaff_x19 + 0x38) >> 1 & 1) == 0) ||
         ((*(byte *)(unaff_x19 + 0x40) >> 5 & 1) != 0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    return uVar4;
  case 6:
    if (param_3 == 0) {
      if ((*(byte *)(param_1 + 0x38) >> 1 & 1) == 0) {
        return 1;
      }
      if ((*(byte *)(param_1 + 0x40) >> 1 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    break;
  case 7:
    return 1;
  case 8:
    if (param_3 == 0) {
      return 1;
    }
    break;
  case 9:
    if (param_3 == 0) {
      uVar5 = (uint)*(undefined8 *)(param_1 + 0x38);
      if ((uVar5 >> 1 & 1) == 0) {
        if ((uVar5 >> 2 & 1) == 0) {
          return 0;
        }
      }
      else {
        if ((uVar5 >> 2 & 1) == 0) {
          return 0;
        }
        if (*(ulong *)(param_1 + 0x40) == 0) {
          return 0;
        }
        if ((*(ulong *)(param_1 + 0x40) & 0xffffffffffffff3f) != 0) {
          return 0;
        }
      }
      if (*(long *)(param_1 + 0x48) != 0x40) {
        return 0;
      }
      lVar3 = param_1;
      func_0x007150b4(param_1,0x7e);
      if (-1 < (int)lVar3) {
        func_0x00709064(param_1,lVar3);
        if (param_1 == 0) {
          return 0;
        }
        if (*(int *)(param_1 + 8) < 1) {
          return 0;
        }
      }
      return 1;
    }
  }
  uVar5 = (uint)*(ulong *)(param_1 + 0x38);
  if (((uVar5 >> 1 & 1) != 0) && ((*(byte *)(param_1 + 0x40) >> 2 & 1) == 0)) {
    return 0;
  }
  uVar1 = 0;
  if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
    uVar1 = uVar5 >> 4 & 1;
  }
  uVar2 = 1;
  if ((~uVar5 & 0x2040) != 0) {
    uVar2 = uVar1;
  }
  return (ulong)uVar2;
}



/* Entry: 00714c3c; end: 00714c4b;  */

int FUN_00714c3c(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}



/* Entry: 00714c4c; end: 00714d27;  */

undefined8 FUN_00714c4c(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  lVar2 = *param_2;
  if (((lVar2 != 0) && (param_1[0xb] != 0)) && (FUN_006ce48c(), (int)lVar2 != 0)) {
    return 0x1e;
  }
  if (param_2[2] == 0) {
LAB_00714ca8:
    plVar4 = (long *)param_2[1];
    if (plVar4 != (long *)0x0) {
      lVar2 = 0;
      do {
        if (*plVar4 == lVar2) goto LAB_00714cec;
        piVar5 = *(int **)(plVar4[1] + lVar2 * 8);
        lVar2 = lVar2 + 1;
      } while (*piVar5 != 4);
      lVar2 = *(long *)(piVar5 + 2);
      if ((lVar2 != 0) && (func_0x007150bc(*param_1), (int)lVar2 != 0)) goto LAB_00714c9c;
    }
LAB_00714cec:
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(*param_1 + 8);
    FUN_006cbb40();
    if (iVar1 == 0) goto LAB_00714ca8;
LAB_00714c9c:
    uVar3 = 0x1f;
  }
  return uVar3;
}



/* Entry: 00714d28; end: 00714d5f;  */

uint FUN_00714d28(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ulong *)(param_1 + 0x38);
  if (((uVar3 >> 1 & 1) != 0) && ((*(byte *)(param_1 + 0x40) >> 2 & 1) == 0)) {
    return 0;
  }
  uVar1 = 0;
  if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
    uVar1 = uVar3 >> 4 & 1;
  }
  uVar2 = 1;
  if ((~uVar3 & 0x2040) != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 00714d60; end: 00714e03;  */

void FUN_00714d60(long *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)*(undefined8 *)(*param_1 + 0x28);
  func_0x007150bc(*param_2);
  if ((((iVar1 == 0) && (func_0x00714664(), (int)param_1 != 0)) &&
      (puVar2 = param_2, func_0x00714664(), (int)puVar2 != 0)) && (param_2[0xc] != 0)) {
    FUN_00714c4c();
  }
  return;
}



/* Entry: 00714e04; end: 00714e7f;  */

uint FUN_00714e04(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(undefined8 *)(param_2 + 0x38);
  if (((uVar3 >> 2 & 1) == 0) || ((*(byte *)(param_2 + 0x48) >> 1 & 1) != 0)) {
    if (param_3 == 0) {
      if ((((uVar3 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0x40) & 0x88) != 0)) &&
         (((uVar3 >> 3 & 1) == 0 || (*(char *)(param_2 + 0x50) < '\0')))) {
        return 1;
      }
    }
    else {
      uVar3 = (uint)*(ulong *)(param_2 + 0x38);
      if (((uVar3 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0x40) >> 2 & 1) != 0)) {
        uVar1 = 0;
        if ((*(ulong *)(param_2 + 0x38) & 1) != 0) {
          uVar1 = uVar3 >> 4 & 1;
        }
        uVar2 = 1;
        if ((~uVar3 & 0x2040) != 0) {
          uVar2 = uVar1;
        }
        return uVar2;
      }
    }
  }
  return 0;
}



/* Entry: 00714e80; end: 00714f3f;  */

void FUN_00714e80(void)

{
  func_0x00714e40();
  return;
}



/* Entry: 00714f40; end: 00714f6f;  */

uint FUN_00714f40(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    if (((*(byte *)(param_2 + 0x38) >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0x40) >> 1 & 1) != 0))
    {
      return 1;
    }
  }
  else {
    uVar3 = (uint)*(ulong *)(param_2 + 0x38);
    if (((uVar3 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0x40) >> 2 & 1) != 0)) {
      uVar1 = 0;
      if ((*(ulong *)(param_2 + 0x38) & 1) != 0) {
        uVar1 = uVar3 >> 4 & 1;
      }
      uVar2 = 1;
      if ((~uVar3 & 0x2040) != 0) {
        uVar2 = uVar1;
      }
      return uVar2;
    }
  }
  return 0;
}



/* Entry: 00714f70; end: 00715007;  */

uint FUN_00714f70(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  if (param_3 != 0) {
    uVar4 = (uint)*(ulong *)(param_2 + 0x38);
    if (((uVar4 >> 1 & 1) != 0) && ((*(byte *)(param_2 + 0x40) >> 2 & 1) == 0)) {
      return 0;
    }
    uVar1 = 0;
    if ((*(ulong *)(param_2 + 0x38) & 1) != 0) {
      uVar1 = uVar4 >> 4 & 1;
    }
    uVar2 = 1;
    if ((~uVar4 & 0x2040) != 0) {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  uVar4 = (uint)*(undefined8 *)(param_2 + 0x38);
  if ((uVar4 >> 1 & 1) == 0) {
    if ((uVar4 >> 2 & 1) == 0) {
      return 0;
    }
  }
  else {
    if ((uVar4 >> 2 & 1) == 0) {
      return 0;
    }
    if (*(ulong *)(param_2 + 0x40) == 0) {
      return 0;
    }
    if ((*(ulong *)(param_2 + 0x40) & 0xffffffffffffff3f) != 0) {
      return 0;
    }
  }
  if (*(long *)(param_2 + 0x48) != 0x40) {
    return 0;
  }
  lVar3 = param_2;
  func_0x007150b4(param_2,0x7e);
  if (-1 < (int)lVar3) {
    func_0x00709064(param_2,lVar3);
    if (param_2 == 0) {
      return 0;
    }
    if (*(int *)(param_2 + 8) < 1) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 00715008; end: 007150cf;  */

uint FUN_00715008(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(undefined8 *)(param_1 + 0x38);
  if (((uVar3 >> 2 & 1) == 0) || ((*(byte *)(param_1 + 0x48) >> 2 & 1) != 0)) {
    if (param_2 == 0) {
      if ((uVar3 >> 3 & 1) != 0) {
        return *(uint *)(param_1 + 0x50) >> 5 & 1;
      }
      return 1;
    }
    if (((uVar3 >> 3 & 1) == 0) || ((*(byte *)(param_1 + 0x50) >> 1 & 1) != 0)) {
      uVar3 = (uint)*(ulong *)(param_1 + 0x38);
      if (((uVar3 >> 1 & 1) == 0) || ((*(byte *)(param_1 + 0x40) >> 2 & 1) != 0)) {
        uVar1 = 0;
        if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
          uVar1 = uVar3 >> 4 & 1;
        }
        uVar2 = 1;
        if ((~uVar3 & 0x2040) != 0) {
          uVar2 = uVar1;
        }
        return uVar2;
      }
    }
  }
  return 0;
}



/* Entry: 007150d0; end: 00715237;  */

dword * FUN_007150d0(undefined8 param_1,int *param_2,dword *param_3)

{
  uint uVar1;
  int iVar2;
  dword *pdVar3;
  dword *pdVar4;
  dword *pdVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  dword *pdVar9;
  undefined8 uVar10;
  dword dVar11;
  uint uStack_7c;
  dword adStack_78 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  pdVar9 = param_3;
  pdVar5 = param_3;
  _strcmp(param_3,&UNK_0091cdc7);
  dVar11 = (dword)pdVar5;
  if ((int)pdVar9 == 0) {
    func_0x006d0a68();
    if (pdVar9 == (dword *)0x0) goto LAB_00715168;
    pdVar5 = pdVar9;
    if (param_2 == (int *)0x0) {
LAB_007151e8:
      dVar11 = 0x90;
    }
    else {
      if (*param_2 == 1) goto LAB_00715204;
      plVar6 = *(long **)(param_2 + 6);
      if (plVar6 == (long *)0x0) {
        plVar6 = *(long **)(param_2 + 4);
        if (plVar6 == (long *)0x0) goto LAB_007151e8;
        lVar8 = 0x30;
      }
      else {
        lVar8 = 0x28;
      }
      piVar7 = *(int **)(*(long *)(*plVar6 + lVar8) + 8);
      if (piVar7 == (int *)0x0) goto LAB_007151e8;
      uVar10 = *(undefined8 *)(piVar7 + 2);
      iVar2 = *piVar7;
      pdVar4 = pdVar9;
      FUN_006eaae0();
      pdVar3 = adStack_78;
      FUN_006ea778(uVar10,(long)iVar2,pdVar3,&uStack_7c,pdVar4,0);
      dVar11 = (dword)pdVar3;
      if ((int)uVar10 == 0) goto LAB_007151f8;
      dVar11 = uStack_7c;
      FUN_006ce2d0(pdVar9,adStack_78);
      if ((int)pdVar5 != 0) goto LAB_00715204;
      dVar11 = 0x41;
    }
    FUN_00715238(0x14,0);
    pdVar5 = pdVar9;
  }
  else {
    func_0x006d0a68();
    if (pdVar9 == (dword *)0x0) {
LAB_00715168:
      pdVar5 = &MACH_HEADER.sizeofcmds;
      dVar11 = 0x41;
      FUN_00715238(0x14,0);
      goto LAB_00715204;
    }
    func_0x00715b04(param_3,adStack_78);
    *(dword **)(pdVar9 + 2) = param_3;
    pdVar5 = pdVar9;
    if (param_3 != (dword *)0x0) {
      *pdVar9 = adStack_78[0];
      pdVar5 = param_3;
      goto LAB_00715204;
    }
  }
LAB_007151f8:
  FUN_006ce410();
  pdVar9 = (dword *)0x0;
LAB_00715204:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pdVar9;
  }
  ___stack_chk_fail();
  pdVar3 = pdVar5;
  FUN_006de604();
  pdVar9 = (dword *)0x0;
  if (pdVar3 != (dword *)0x0) {
    if (((int)pdVar5 == 2) && (dVar11 == 0)) {
      pdVar9 = pdVar3;
      ___error();
      dVar11 = *pdVar9;
    }
    iVar2 = pdVar3[0x60];
    uVar1 = iVar2 + 1U & 0xf;
    pdVar3[0x60] = uVar1;
    if (uVar1 == pdVar3[0x61]) {
      pdVar3[0x61] = iVar2 + 2U & 0xf;
    }
    pdVar3 = pdVar3 + (ulong)uVar1 * 6;
    pdVar9 = pdVar3;
    func_0x006de65c(pdVar3);
    *(undefined8 *)pdVar3 = 0;
    *(undefined2 *)(pdVar3 + 5) = 0;
    pdVar3[4] = dVar11 & 0xfff | (int)pdVar5 << 0x18;
  }
  return pdVar9;
}



/* Entry: 00715238; end: 00715243;  */

void FUN_00715238(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 00715244; end: 0071529b;  */

undefined8 FUN_00715244(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    _strlen(param_2);
  }
  lVar4 = *param_3;
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
    if (param_2 == 0) goto LAB_007152d8;
LAB_00715320:
    func_0x00716bbc();
    FUN_00715da4();
    if (param_1 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      param_1 = (undefined8 *)0x0;
      goto LAB_00715348;
    }
    func_0x00716bbc();
    FUN_007020bc();
    puVar3 = param_1;
    if (param_1 == (undefined8 *)0x0) {
      param_1 = (undefined8 *)0x0;
      goto LAB_00715348;
    }
  }
  else {
    FUN_00701fd0(param_1,param_2,lVar1);
    puVar2 = param_1;
    if (param_1 == (undefined8 *)0x0) {
      param_1 = (undefined8 *)0x0;
      puVar3 = (undefined8 *)0x0;
      goto LAB_00715348;
    }
    if (param_2 != 0) goto LAB_00715320;
LAB_007152d8:
    puVar3 = (undefined8 *)0x0;
  }
  FUN_006d72fc();
  if (param_1 != (undefined8 *)0x0) {
    lVar1 = *param_3;
    if (lVar1 == 0) {
      FUN_00705ed8();
      *param_3 = lVar1;
      if (lVar1 == 0) goto LAB_00715348;
    }
    *param_1 = 0;
    param_1[1] = puVar2;
    param_1[2] = puVar3;
    func_0x00706268();
    if (lVar1 != 0) {
      return 1;
    }
  }
LAB_00715348:
  func_0x00716aa4();
  func_0x00716a58();
  if (lVar4 == 0) {
    FUN_00705f10(*param_3);
    *param_3 = 0;
  }
  func_0x00701ed0(param_1);
  func_0x00701ed0(puVar2);
  func_0x00701ed0(puVar3);
  return 0;
}



/* Entry: 0071529c; end: 0071539b;  */

undefined8
FUN_0071529c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,long *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *param_5;
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
    if (param_4 != 0) goto LAB_007152d8;
LAB_00715320:
    func_0x00716bbc();
    FUN_00715da4();
    if (param_1 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      param_1 = (undefined8 *)0x0;
      goto LAB_00715348;
    }
    func_0x00716bbc();
    FUN_007020bc();
    puVar3 = param_1;
    if (param_1 == (undefined8 *)0x0) {
      param_1 = (undefined8 *)0x0;
      goto LAB_00715348;
    }
  }
  else {
    FUN_00701fd0();
    puVar2 = param_1;
    if (param_1 == (undefined8 *)0x0) {
      param_1 = (undefined8 *)0x0;
      puVar3 = (undefined8 *)0x0;
      goto LAB_00715348;
    }
    if (param_4 == 0) goto LAB_00715320;
LAB_007152d8:
    puVar3 = (undefined8 *)0x0;
  }
  FUN_006d72fc();
  if (param_1 != (undefined8 *)0x0) {
    lVar1 = *param_5;
    if (lVar1 == 0) {
      FUN_00705ed8();
      *param_5 = lVar1;
      if (lVar1 == 0) goto LAB_00715348;
    }
    *param_1 = 0;
    param_1[1] = puVar2;
    param_1[2] = puVar3;
    func_0x00706268();
    if (lVar1 != 0) {
      return 1;
    }
  }
LAB_00715348:
  func_0x00716aa4();
  func_0x00716a58();
  if (lVar4 == 0) {
    FUN_00705f10(*param_5);
    *param_5 = 0;
  }
  func_0x00701ed0(param_1);
  func_0x00701ed0(puVar2);
  func_0x00701ed0(puVar3);
  return 0;
}



/* Entry: 0071539c; end: 007153b3;  */

/* WARNING: Removing unreachable block (ram,0x007152d8) */

undefined8 FUN_0071539c(undefined8 *param_1,int *param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *param_3;
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FUN_00701fd0(param_1,*(undefined8 *)(param_2 + 2),(long)*param_2);
    puVar2 = param_1;
    if (param_1 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      param_1 = (undefined8 *)0x0;
      goto LAB_00715348;
    }
  }
  func_0x00716bbc();
  FUN_00715da4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00716bbc();
    FUN_007020bc();
    if (param_1 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = param_1;
      FUN_006d72fc();
      if (puVar3 != (undefined8 *)0x0) {
        lVar1 = *param_3;
        if (lVar1 == 0) {
          FUN_00705ed8();
          *param_3 = lVar1;
          if (lVar1 == 0) goto LAB_00715348;
        }
        *puVar3 = 0;
        puVar3[1] = puVar2;
        puVar3[2] = param_1;
        func_0x00706268();
        if (lVar1 != 0) {
          return 1;
        }
      }
    }
  }
  else {
    puVar3 = (undefined8 *)0x0;
    param_1 = (undefined8 *)0x0;
  }
LAB_00715348:
  func_0x00716aa4();
  func_0x00716a58();
  if (lVar4 == 0) {
    FUN_00705f10(*param_3);
    *param_3 = 0;
  }
  func_0x00701ed0(puVar3);
  func_0x00701ed0(puVar2);
  func_0x00701ed0(param_1);
  return 0;
}



/* Entry: 007153b4; end: 007153ff;  */

/* WARNING: Possible PIC construction at 0x007153d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x007153e8: Changing call to branch */

void FUN_007153b4(long *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  puVar1 = &stack0xfffffffffffffff0;
  if ((long *)param_1[1] == (long *)0x0) {
    if (param_1[2] != 0) {
      func_0x00701ed0();
    }
    plVar2 = param_1;
    if ((long *)*param_1 != (long *)0x0) {
      unaff_x30 = 0x7153ec;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      plVar2 = (long *)*param_1;
      unaff_x19 = param_1;
      unaff_x29 = puVar1;
    }
  }
  else {
    unaff_x30 = 0x7153d4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    plVar2 = (long *)param_1[1];
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  plVar2 = plVar2 + -1;
  FUN_00701f08(plVar2,*plVar2 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(plVar2);
  return;
}



/* Entry: 00715400; end: 0071541b;  */

undefined8 FUN_00715400(undefined8 *param_1,int param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar1 = &UNK_0091cdd1;
  if (param_2 != 0) {
    puVar1 = &UNK_0091cdcc;
  }
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar1;
    _strlen(puVar1);
  }
  lVar6 = *param_3;
  if (param_1 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
    if (puVar1 == (undefined *)0x0) goto LAB_007152d8;
LAB_00715320:
    func_0x00716bbc();
    FUN_00715da4();
    if (param_1 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
      param_1 = (undefined8 *)0x0;
      goto LAB_00715348;
    }
    func_0x00716bbc();
    FUN_007020bc();
    puVar5 = param_1;
    if (param_1 == (undefined8 *)0x0) {
      param_1 = (undefined8 *)0x0;
      goto LAB_00715348;
    }
  }
  else {
    FUN_00701fd0(param_1,puVar1,puVar3);
    puVar4 = param_1;
    if (param_1 == (undefined8 *)0x0) {
      param_1 = (undefined8 *)0x0;
      puVar5 = (undefined8 *)0x0;
      goto LAB_00715348;
    }
    if (puVar1 != (undefined *)0x0) goto LAB_00715320;
LAB_007152d8:
    puVar5 = (undefined8 *)0x0;
  }
  FUN_006d72fc();
  if (param_1 != (undefined8 *)0x0) {
    lVar2 = *param_3;
    if (lVar2 == 0) {
      FUN_00705ed8();
      *param_3 = lVar2;
      if (lVar2 == 0) goto LAB_00715348;
    }
    *param_1 = 0;
    param_1[1] = puVar4;
    param_1[2] = puVar5;
    func_0x00706268();
    if (lVar2 != 0) {
      return 1;
    }
  }
LAB_00715348:
  func_0x00716aa4();
  func_0x00716a58();
  if (lVar6 == 0) {
    FUN_00705f10(*param_3);
    *param_3 = 0;
  }
  func_0x00701ed0(param_1);
  func_0x00701ed0(puVar4);
  func_0x00701ed0(puVar5);
  return 0;
}



/* Entry: 0071541c; end: 0071546f;  */

long FUN_0071541c(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    FUN_006cc0a4(param_2,0);
    if ((param_2 == 0) || (FUN_00715470(), param_2 == 0)) {
      func_0x00716a40();
      param_2 = 0;
    }
    func_0x00716ba8();
  }
  return param_2;
}



/* Entry: 00715470; end: 00715527;  */

char * FUN_00715470(char *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  uint uVar8;
  ulong uStack_80;
  char *pcStack_78;
  undefined1 auStack_70 [32];
  
  pcVar7 = param_1;
  FUN_006e3e84();
  if (0x1f < (uint)pcVar7) {
    FUN_006d2e64();
    if (param_1 == (char *)0x0) {
      pcVar7 = (char *)0x0;
    }
    else {
      pcVar4 = param_1;
      _strlen();
      pcVar7 = pcVar4 + 3;
      FUN_00701e90();
      if (pcVar7 == (char *)0x0) {
        func_0x00716a40();
      }
      else {
        if (*param_1 == '-') {
          func_0x00716b70();
          param_1 = param_1 + 1;
        }
        else {
          func_0x00716b70();
        }
        func_0x00702178(pcVar7,param_1,pcVar4 + 3);
      }
      func_0x00716ae8();
    }
    return pcVar7;
  }
  puVar2 = auStack_70;
  FUN_006d35b0(puVar2,0x10);
  if ((int)puVar2 == 0) {
LAB_006d3204:
    pcVar7 = (char *)0x0;
  }
  else {
    puVar2 = auStack_70;
    FUN_006d3a70(puVar2,0);
    if ((int)puVar2 == 0) goto LAB_006d3204;
    pcVar7 = param_1;
    FUN_006e3858();
    if ((int)pcVar7 == 0) {
      pcVar7 = param_1;
      func_0x006e3d14();
      if (pcVar7 == (char *)0x0) goto LAB_006d3218;
      while (pcVar4 = pcVar7, FUN_006e3858(), (int)pcVar4 == 0) {
        pcVar4 = pcVar7;
        FUN_006e522c(pcVar7,10000000000000000000);
        if (pcVar4 == (char *)0xffffffffffffffff) goto LAB_006d3218;
        pcVar3 = pcVar7;
        FUN_006e3858();
        uVar8 = 0;
        while( true ) {
          if ((0x12 < uVar8) || ((int)pcVar3 != 0 && pcVar4 == (char *)0x0)) break;
          puVar2 = auStack_70;
          FUN_006d3a70(puVar2,(int)pcVar4 + (int)(char *)((ulong)pcVar4 / 10) * -10 & 0xffU | 0x30);
          if ((int)puVar2 == 0) goto LAB_006d3208;
          uVar8 = uVar8 + 1;
          pcVar4 = (char *)((ulong)pcVar4 / 10);
        }
      }
LAB_006d31a8:
      if (*(int *)(param_1 + 0x10) != 0) {
        puVar2 = auStack_70;
        FUN_006d3a70(puVar2,0x2d);
        if ((int)puVar2 == 0) goto LAB_006d3208;
      }
      puVar2 = auStack_70;
      FUN_006d36d4(puVar2,&pcStack_78,&uStack_80);
      if ((int)puVar2 != 0) {
        uVar6 = uStack_80 >> 1;
        for (uVar5 = 0; uStack_80 = uStack_80 - 1, uVar6 != uVar5; uVar5 = uVar5 + 1) {
          cVar1 = pcStack_78[uVar5];
          pcStack_78[uVar5] = pcStack_78[uStack_80];
          pcStack_78[uStack_80] = cVar1;
        }
        FUN_006e3cd0(pcVar7);
        return pcStack_78;
      }
    }
    else {
      puVar2 = auStack_70;
      FUN_006d3a70(puVar2,0x30);
      pcVar7 = (char *)0x0;
      if ((int)puVar2 != 0) goto LAB_006d31a8;
    }
  }
LAB_006d3208:
  FUN_006d33b8(3,0,0x41);
LAB_006d3218:
  FUN_006e3cd0(pcVar7);
  func_0x006d3688(auStack_70);
  return (char *)0x0;
}



/* Entry: 00715528; end: 0071557b;  */

long FUN_00715528(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    FUN_006cc018(param_2,0);
    if ((param_2 == 0) || (FUN_00715470(), param_2 == 0)) {
      func_0x00716a40();
      param_2 = 0;
    }
    func_0x00716ba8();
  }
  return param_2;
}



/* Entry: 0071557c; end: 007157fb;  */

ulong FUN_0071557c(ulong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_38;
  
  if (param_2 != (char *)0x0) {
    FUN_006e3c80();
    cVar1 = *param_2;
    if (cVar1 == '-') {
      param_2 = param_2 + 1;
    }
    uStack_38 = param_1;
    if ((*param_2 == '0') && ((byte)(param_2[1] | 0x20U) == 0x78)) {
      param_2 = param_2 + 2;
      puVar3 = &uStack_38;
      FUN_006d2f58(puVar3,param_2);
      iVar2 = (int)puVar3;
      uVar4 = uStack_38;
    }
    else {
      puVar3 = &uStack_38;
      FUN_006d32ec(puVar3,param_2);
      iVar2 = (int)puVar3;
      uVar4 = uStack_38;
    }
    uStack_38 = uVar4;
    if ((iVar2 != 0) && (param_2[iVar2] == '\0')) {
      if (cVar1 == '-') {
        uVar5 = uVar4;
        FUN_006e3858();
      }
      else {
        uVar5 = 1;
      }
      func_0x006cbf50(uVar4,0);
      func_0x00716ba8();
      if (uVar4 != 0) {
        if ((uVar5 & 1) != 0) {
          return uVar4;
        }
        *(uint *)(uVar4 + 4) = *(uint *)(uVar4 + 4) | 0x100;
        return uVar4;
      }
      func_0x00716aa4();
      func_0x00716a58();
      return 0;
    }
    FUN_006e3cd0(uVar4);
    func_0x00716aa4();
  }
  func_0x00716a58();
  return 0;
}



/* Entry: 007157fc; end: 0071583b;  */

bool FUN_007157fc(long param_1,long *param_2)

{
  FUN_0071557c(param_1,*(undefined8 *)(param_1 + 0x10));
  if (param_1 == 0) {
    func_0x00716a64();
  }
  else {
    *param_2 = param_1;
  }
  return param_1 != 0;
}



/* Entry: 0071583c; end: 007159c7;  */

undefined8 FUN_0071583c(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined8 uStack_58;
  
  uStack_58 = 0;
  FUN_00701fd0();
  if (param_1 != (byte *)0x0) {
    iVar7 = 1;
    pbVar2 = param_1;
    pbVar3 = (byte *)0x0;
    pbVar6 = param_1;
    pbVar1 = param_1;
    while( true ) {
      uVar4 = (uint)*pbVar1;
      if (*pbVar1 < 0xe && (1 << (ulong)(uVar4 & 0x1f) & 0x2401U) != 0) break;
      pbVar5 = pbVar3;
      if (iVar7 == 1) {
        if (uVar4 == 0x2c) {
          func_0x00716b04();
          if (pbVar2 == (byte *)0x0) goto LAB_00715984;
          param_1 = pbVar6 + 1;
          pbVar3 = pbVar2;
          FUN_00715244();
          pbVar5 = pbVar2;
        }
        else {
          pbVar3 = pbVar2;
          if (uVar4 == 0x3a) {
            func_0x00716b04();
            if (pbVar2 != (byte *)0x0) {
              param_1 = pbVar6 + 1;
              pbVar5 = pbVar2;
              goto LAB_007158f8;
            }
            goto LAB_00715984;
          }
        }
        iVar7 = 1;
      }
      else if (uVar4 == 0x2c) {
        func_0x00716b04();
        if (pbVar2 == (byte *)0x0) goto LAB_00715984;
        FUN_00715244(pbVar3,pbVar2,&uStack_58);
        pbVar5 = (byte *)0x0;
        iVar7 = 1;
        param_1 = pbVar1 + 1;
      }
      else {
LAB_007158f8:
        iVar7 = 2;
        pbVar3 = pbVar2;
      }
      pbVar6 = pbVar6 + 1;
      pbVar2 = pbVar3;
      pbVar3 = pbVar5;
      pbVar1 = pbVar1 + 1;
    }
    FUN_007159c8();
    if (iVar7 == 2) {
      if (param_1 != (byte *)0x0) {
LAB_00715968:
        FUN_00715244(pbVar3,param_1,&uStack_58);
        func_0x00716ae8();
        return uStack_58;
      }
    }
    else if (param_1 != (byte *)0x0) {
      pbVar3 = param_1;
      param_1 = (byte *)0x0;
      goto LAB_00715968;
    }
  }
LAB_00715984:
  func_0x00716aa4();
  func_0x00716a58();
  func_0x00716ae8();
  FUN_00705f40(uStack_58,FUN_007163c0,FUN_007153b4);
  return 0;
}



/* Entry: 007159c8; end: 00715a3f;  */

byte * FUN_007159c8(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  
  while( true ) {
    uVar2 = (uint)*param_1;
    if (*param_1 == 0) {
      return (byte *)0x0;
    }
    _isspace();
    if (uVar2 == 0) break;
    param_1 = param_1 + 1;
  }
  pbVar3 = param_1;
  _strlen();
  do {
    pbVar1 = pbVar3 + -1;
    if (pbVar1 == (byte *)0x0) {
      return param_1;
    }
    uVar2 = (uint)(param_1 + (long)pbVar3)[-1];
    _isspace();
    pbVar3 = pbVar1;
  } while (uVar2 != 0);
  (param_1 + (long)pbVar1)[1] = 0;
  pbVar3 = (byte *)0x0;
  if (*param_1 != 0) {
    pbVar3 = param_1;
  }
  return pbVar3;
}



/* Entry: 00715a40; end: 00715c6b;  */

undefined8 FUN_00715a40(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  puVar1 = auStack_50;
  FUN_006d35b0(puVar1,param_2 * 3 + 1);
  if ((int)puVar1 != 0) {
    lVar2 = 0;
    do {
      if (param_2 == lVar2) {
        puVar1 = auStack_50;
        FUN_006d3a70(puVar1,0);
        if ((int)puVar1 != 0) {
          puVar1 = auStack_50;
          FUN_006d36d4(puVar1,&uStack_58,auStack_60);
          if ((int)puVar1 != 0) {
            return uStack_58;
          }
        }
        break;
      }
      if (lVar2 != 0) {
        puVar1 = auStack_50;
        FUN_006d3a70(puVar1,0x3a);
        if ((int)puVar1 == 0) break;
      }
      func_0x00716b94(*(byte *)(param_1 + lVar2) >> 4);
      if ((int)puVar1 == 0) break;
      func_0x00716b94(*(byte *)(param_1 + lVar2) & 0xf);
      lVar2 = lVar2 + 1;
    } while ((int)puVar1 != 0);
  }
  func_0x00716a40();
  func_0x006d3688(auStack_50);
  return 0;
}



/* Entry: 00715c6c; end: 00715d37;  */

bool FUN_00715c6c(char *param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 != 0) {
    uVar2 = param_2 - (ulong)(param_1[param_2 + -1] == '.');
    if (1 < uVar2) {
      if ((*param_1 != '*') || (param_1[1] != '.')) goto LAB_00715cb0;
      param_1 = param_1 + 2;
      uVar2 = uVar2 - 2;
    }
    if (uVar2 != 0) {
LAB_00715cb0:
      uVar5 = 0;
      for (uVar3 = 0; uVar4 = uVar2, uVar2 != uVar3; uVar3 = uVar3 + 1) {
        bVar1 = param_1[uVar3];
        if ((9 < bVar1 - 0x30 && 0x19 < (bVar1 & 0xffffffdf) - 0x41) && (bVar1 != 0x5f)) {
          uVar4 = uVar3;
          if (bVar1 == 0x2e) {
            if (uVar3 <= uVar5 || uVar2 - 1 <= uVar3) break;
            uVar5 = uVar3 + 1;
          }
          else if ((bVar1 != 0x3a) && (bVar1 != 0x2d || uVar3 <= uVar5)) break;
        }
      }
      return uVar2 <= uVar4;
    }
  }
  return false;
}



/* Entry: 00715d38; end: 00715da3;  */

undefined8
FUN_00715d38(ulong *param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  
  if ((param_2 == 0) || (puVar1 = param_1, func_0x00716b7c(), puVar1 != (ulong *)0x0)) {
    return 0xfffffffe;
  }
  puVar1 = param_1;
  func_0x00709070(FUN_007163cc,param_1,0x55,0,0,2,param_5);
  if (puVar1 == (ulong *)0x0) {
    if ((param_4 & 0x20) == 0) {
      lVar7 = *(long *)(*param_1 + 0x28);
      lVar4 = 0xffffffff;
      do {
        lVar3 = lVar7;
        FUN_0070cc54(lVar7,0xd,lVar4);
        if ((int)lVar3 < 0) goto LAB_00715f20;
        lVar4 = lVar7;
        func_0x0070cc1c(lVar7,lVar3);
        uVar2 = 0;
        if (lVar4 != 0) {
          uVar2 = *(undefined8 *)(lVar4 + 8);
        }
        func_0x00716acc();
        lVar4 = lVar3;
      } while ((int)uVar2 == 0);
    }
    else {
LAB_00715f20:
      uVar2 = 0;
    }
  }
  else {
    for (uVar6 = 0; uVar6 < *puVar1; uVar6 = uVar6 + 1) {
      piVar5 = *(int **)(puVar1[1] + uVar6 * 8);
      if (*piVar5 == 2) {
        uVar2 = *(undefined8 *)(piVar5 + 2);
        func_0x00716acc(uVar2,0x16);
        if ((int)uVar2 != 0) goto LAB_00715f2c;
      }
    }
    uVar2 = 0;
LAB_00715f2c:
    func_0x00712984(puVar1);
  }
  return uVar2;
}



/* Entry: 00715da4; end: 00715dbb;  */

undefined8 FUN_00715da4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memchr_0099a3e8)(param_1,0,param_2);
    return param_1;
  }
  return 0;
}



/* Entry: 00715dbc; end: 00715f3f;  */

undefined8
FUN_00715dbc(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,int param_5)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  ulong *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  
  bVar2 = param_5 == 2;
  uVar10 = 0;
  if (bVar2) {
    uVar10 = 0xd;
  }
  uVar9 = 4;
  if (bVar2) {
    uVar9 = 0x16;
  }
  bVar3 = param_5 != 1;
  uVar1 = 0x30;
  if (bVar3) {
    uVar1 = uVar10;
  }
  uVar10 = 0x16;
  if (bVar3) {
    uVar10 = uVar9;
  }
  puVar4 = param_1;
  func_0x00709070(FUN_007163cc,param_1,0x55,0,0);
  if (puVar4 == (ulong *)0x0) {
    if (bVar3 && !bVar2 || (param_4 & 0x20) != 0) {
LAB_00715f20:
      uVar5 = 0;
    }
    else {
      lVar12 = *(long *)(*param_1 + 0x28);
      lVar7 = 0xffffffff;
      do {
        lVar6 = lVar12;
        FUN_0070cc54(lVar12,uVar1,lVar7);
        if ((int)lVar6 < 0) goto LAB_00715f20;
        lVar7 = lVar12;
        func_0x0070cc1c(lVar12,lVar6);
        uVar5 = 0;
        if (lVar7 != 0) {
          uVar5 = *(undefined8 *)(lVar7 + 8);
        }
        func_0x00716acc();
        lVar7 = lVar6;
      } while ((int)uVar5 == 0);
    }
  }
  else {
    for (uVar11 = 0; uVar11 < *puVar4; uVar11 = uVar11 + 1) {
      piVar8 = *(int **)(puVar4[1] + uVar11 * 8);
      if (*piVar8 == param_5) {
        uVar5 = *(undefined8 *)(piVar8 + 2);
        func_0x00716acc(uVar5,uVar10);
        if ((int)uVar5 != 0) goto LAB_00715f2c;
      }
    }
    uVar5 = 0;
LAB_00715f2c:
    func_0x00712984(puVar4);
  }
  return uVar5;
}



/* Entry: 00715f40; end: 00715f9b;  */

/* WARNING: Removing unreachable block (ram,0x00715e5c) */
/* WARNING: Removing unreachable block (ram,0x00715e50) */
/* WARNING: Removing unreachable block (ram,0x00715e44) */
/* WARNING: Removing unreachable block (ram,0x00715e3c) */
/* WARNING: Removing unreachable block (ram,0x00715e40) */
/* WARNING: Removing unreachable block (ram,0x00715e48) */
/* WARNING: Removing unreachable block (ram,0x00715e58) */
/* WARNING: Removing unreachable block (ram,0x00715e60) */

undefined8 FUN_00715f40(ulong *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  
  if ((param_2 == 0) || (func_0x00716b7c(), param_1 != (ulong *)0x0)) {
    return 0xfffffffe;
  }
  func_0x00716bbc();
  puVar1 = param_1;
  func_0x00709070(FUN_007163cc);
  if (puVar1 == (ulong *)0x0) {
    if ((param_4 & 0x20) == 0) {
      lVar7 = *(long *)(*param_1 + 0x28);
      lVar4 = 0xffffffff;
      do {
        lVar3 = lVar7;
        FUN_0070cc54(lVar7,0x30,lVar4);
        if ((int)lVar3 < 0) goto LAB_00715f20;
        lVar4 = lVar7;
        func_0x0070cc1c(lVar7,lVar3);
        uVar2 = 0;
        if (lVar4 != 0) {
          uVar2 = *(undefined8 *)(lVar4 + 8);
        }
        func_0x00716acc();
        lVar4 = lVar3;
      } while ((int)uVar2 == 0);
    }
    else {
LAB_00715f20:
      uVar2 = 0;
    }
  }
  else {
    for (uVar6 = 0; uVar6 < *puVar1; uVar6 = uVar6 + 1) {
      piVar5 = *(int **)(puVar1[1] + uVar6 * 8);
      if (*piVar5 == 1) {
        uVar2 = *(undefined8 *)(piVar5 + 2);
        func_0x00716acc(uVar2,0x16);
        if ((int)uVar2 != 0) goto LAB_00715f2c;
      }
    }
    uVar2 = 0;
LAB_00715f2c:
    func_0x00712984(puVar1);
  }
  return uVar2;
}



/* Entry: 00715f9c; end: 00715fb3;  */

/* WARNING: Removing unreachable block (ram,0x00715e44) */
/* WARNING: Removing unreachable block (ram,0x00715e3c) */
/* WARNING: Removing unreachable block (ram,0x00715e40) */
/* WARNING: Removing unreachable block (ram,0x00715e48) */
/* WARNING: Removing unreachable block (ram,0x00715ed4) */
/* WARNING: Removing unreachable block (ram,0x00715ee0) */
/* WARNING: Removing unreachable block (ram,0x00715ef4) */
/* WARNING: Removing unreachable block (ram,0x00715f08) */
/* WARNING: Removing unreachable block (ram,0x00715f0c) */
/* WARNING: Removing unreachable block (ram,0x00715f18) */

undefined8 FUN_00715f9c(ulong *param_1,long param_2)

{
  undefined8 uVar1;
  int *piVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0xfffffffe;
  }
  func_0x00709070(FUN_007163cc,param_1,0x55,0,0,7,0);
  if (param_1 == (ulong *)0x0) {
    uVar1 = 0;
  }
  else {
    for (uVar3 = 0; uVar3 < *param_1; uVar3 = uVar3 + 1) {
      piVar2 = *(int **)(param_1[1] + uVar3 * 8);
      if (*piVar2 == 7) {
        uVar1 = *(undefined8 *)(piVar2 + 2);
        func_0x00716acc(uVar1,4);
        if ((int)uVar1 != 0) goto LAB_00715f2c;
      }
    }
    uVar1 = 0;
LAB_00715f2c:
    func_0x00712984(param_1);
  }
  return uVar1;
}



/* Entry: 00715fb4; end: 0071610f;  */

/* WARNING: Type propagation algorithm not settling */

dword * FUN_00715fb4(undefined8 *param_1,dword *param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined8 *puVar4;
  dword *pdVar5;
  dword *pdVar6;
  dword *pdVar7;
  dword *pdVar8;
  dword *pdVar9;
  uint uVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  dword *pdVar11;
  dword *pdVar12;
  long unaff_x21;
  undefined8 *unaff_x22;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  dword adStack_f8 [8];
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  dword *pdStack_c0;
  dword *pdStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  dword adStack_98 [4];
  undefined8 uStack_88;
  dword *pdStack_80;
  undefined8 *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 auStack_54 [2];
  undefined8 uStack_44;
  int iStack_3c;
  undefined8 uStack_38;
  
  pdVar5 = param_2;
  func_0x00716b60();
  uStack_38 = extraout_x8;
  _strchr(pdVar5,0x3a);
  if (pdVar5 == (dword *)0x0) {
    puVar4 = param_1;
    FUN_0071625c(param_1,param_2);
    in_ZR = (int)puVar4 == 0;
    uVar10 = 0;
    if (!(bool)in_ZR) {
      uVar10 = 4;
    }
    pdVar5 = (dword *)(ulong)uVar10;
  }
  else {
    uStack_44 = -0x100000000;
    iStack_3c = 0;
    pdVar5 = param_2;
    FUN_006d7344(param_2,0x3a,0,FUN_00716924,auStack_54);
    if ((int)pdVar5 != 0) {
      uVar10 = (uint)uStack_44;
      uVar2 = uStack_44._4_4_;
      param_2 = (dword *)(ulong)uStack_44._4_4_;
      unaff_x21 = (long)(int)(uint)uStack_44;
      if (uStack_44._4_4_ == 0xffffffff) {
        in_ZR = (uint)uStack_44 == 0x10;
        if ((bool)in_ZR) {
LAB_00716078:
          param_1[1] = auStack_54[1];
          *param_1 = auStack_54[0];
LAB_00716080:
          pdVar5 = &MACH_HEADER.ncmds;
          goto LAB_007160f8;
        }
      }
      else {
        in_ZR = (uint)uStack_44 == 0x10;
        if ((!(bool)in_ZR) && (in_ZR = iStack_3c == 3, iStack_3c < 4)) {
          if (iStack_3c == 2) {
            in_ZR = true;
            if ((uStack_44._4_4_ == 0) || (in_ZR = (uint)uStack_44 == uStack_44._4_4_, (bool)in_ZR))
            goto LAB_007160a4;
          }
          else {
            in_ZR = iStack_3c == 3;
            if ((bool)in_ZR) {
              in_ZR = (uint)uStack_44 == 0;
              if ((int)(uint)uStack_44 < 1) {
LAB_007160a4:
                if (uStack_44 < 0) goto LAB_00716078;
                unaff_x22 = auStack_54;
                func_0x00716a34(param_1,auStack_54,param_2);
                param_1 = (undefined8 *)((long)param_1 + (long)param_2);
                _bzero(param_1,0x10 - unaff_x21);
                in_ZR = uVar10 == uVar2;
                if (!(bool)in_ZR) {
                  func_0x00716a34((long)param_1 + (0x10 - unaff_x21),
                                  (char *)((long)unaff_x22 + (long)param_2),
                                  (long)(int)(uVar10 - uVar2));
                }
                goto LAB_00716080;
              }
            }
            else if ((uStack_44._4_4_ != 0) &&
                    (in_ZR = (uint)uStack_44 == uStack_44._4_4_, !(bool)in_ZR)) goto LAB_007160a4;
          }
        }
      }
    }
    pdVar5 = (dword *)0x0;
  }
LAB_007160f8:
  func_0x00716af0(uStack_38,pdVar5);
  if ((bool)in_ZR) {
    return pdVar5;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_00716110;
  pdStack_80 = param_2;
  puStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00716b60();
  pdVar5 = adStack_98;
  uStack_88 = extraout_x8_00;
  FUN_00715fb4();
  pdVar6 = pdVar5;
  if ((int)pdVar5 == 0) {
LAB_00716164:
    pdVar5 = param_2;
    pdVar11 = (dword *)0x0;
    pdVar7 = pdVar6;
  }
  else {
    func_0x006d0a68();
    pdVar7 = pdVar6;
    pdVar11 = pdVar6;
    if ((pdVar6 != (dword *)0x0) && (FUN_006ce2d0(pdVar6,adStack_98,pdVar5), (int)pdVar7 == 0)) {
      FUN_006ce410();
      param_2 = pdVar5;
      goto LAB_00716164;
    }
  }
  func_0x00716af0(uStack_88);
  if ((bool)in_ZR) {
    return pdVar11;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_0071618c;
  pdVar8 = pdVar7;
  puStack_d0 = unaff_x22;
  lStack_c8 = unaff_x21;
  pdStack_c0 = pdVar5;
  pdStack_b8 = pdVar11;
  ppuStack_b0 = &puStack_70;
  func_0x00716b60();
  pdVar11 = (dword *)(segment_command_00000020.segname + 7);
  uStack_d8 = extraout_x8_01;
  _strchr();
  pdVar5 = (dword *)0x0;
  pdVar6 = pdVar11;
  if (pdVar8 != (dword *)0x0) {
    pdVar6 = pdVar7;
    FUN_00701fd0();
    pdVar9 = (dword *)0x0;
    pdVar12 = (dword *)0x0;
    if (pdVar6 == (dword *)0x0) goto LAB_00716240;
    pcVar1 = (char *)((long)pdVar6 + ((long)pdVar8 - (long)pdVar7));
    *pcVar1 = '\0';
    pdVar5 = adStack_f8;
    FUN_00715fb4();
    iVar3 = (int)pdVar5;
    if (iVar3 == 0) {
      func_0x00716ae8();
    }
    else {
      pdVar7 = (dword *)((long)adStack_f8 + ((ulong)pdVar5 & 0xffffffff));
      pdVar6 = (dword *)(pcVar1 + 1);
      FUN_00715fb4();
      pdVar5 = pdVar7;
      func_0x00716ae8();
      in_ZR = iVar3 == (int)pdVar7;
      if ((bool)in_ZR) {
        func_0x006d0a68();
        pdVar9 = pdVar5;
        pdVar11 = pdVar6;
        pdVar12 = pdVar5;
        if (pdVar5 == (dword *)0x0) goto LAB_00716240;
        pdVar6 = adStack_f8;
        FUN_006ce2d0(pdVar5,pdVar6,iVar3 << 1);
        pdVar11 = pdVar6;
        if ((int)pdVar9 != 0) goto LAB_00716240;
        FUN_006ce410();
      }
    }
  }
  pdVar12 = (dword *)0x0;
  pdVar9 = pdVar5;
  pdVar11 = pdVar6;
LAB_00716240:
  func_0x00716af0(uStack_d8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    _sscanf(pdVar11,&UNK_0091ce1f);
    if ((int)pdVar11 == 4) {
      pdVar5 = (dword *)0x0;
      if ((((uStack_124 < 0x100) && (uStack_128 < 0x100)) && (uStack_12c < 0x100)) &&
         (uStack_130 < 0x100)) {
        *(char *)pdVar9 = (char)uStack_124;
        *(char *)((long)pdVar9 + 1) = (char)uStack_128;
        *(char *)((long)pdVar9 + 2) = (char)uStack_12c;
        pdVar5 = (dword *)((long)&MACH_HEADER.magic + 1);
        *(char *)((long)pdVar9 + 3) = (char)uStack_130;
      }
    }
    else {
      pdVar5 = (dword *)0x0;
    }
    return pdVar5;
  }
  return pdVar12;
}



/* Entry: 00716110; end: 0071618b;  */

char * FUN_00716110(undefined8 param_1)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  char *pcVar7;
  char *pcVar8;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  char acStack_98 [32];
  undefined8 uStack_78;
  char acStack_38 [16];
  undefined8 uStack_28;
  
  func_0x00716b60(param_1,param_1);
  pcVar6 = acStack_38;
  uStack_28 = extraout_x8;
  FUN_00715fb4();
  pcVar2 = pcVar6;
  if ((int)pcVar6 == 0) {
LAB_00716164:
    pcVar7 = (char *)0x0;
    pcVar3 = pcVar2;
  }
  else {
    func_0x006d0a68();
    pcVar3 = pcVar2;
    pcVar7 = pcVar2;
    if ((pcVar2 != (char *)0x0) && (FUN_006ce2d0(pcVar2,acStack_38,pcVar6), (int)pcVar3 == 0)) {
      FUN_006ce410();
      goto LAB_00716164;
    }
  }
  func_0x00716af0(uStack_28);
  if ((bool)in_ZR) {
    return pcVar7;
  }
  ___stack_chk_fail();
  pcVar7 = pcVar3;
  func_0x00716b60();
  pcVar5 = segment_command_00000020.segname + 7;
  uStack_78 = extraout_x8_00;
  _strchr();
  pcVar6 = (char *)0x0;
  pcVar2 = pcVar5;
  if (pcVar7 != (char *)0x0) {
    pcVar2 = pcVar3;
    FUN_00701fd0();
    pcVar4 = (char *)0x0;
    pcVar8 = (char *)0x0;
    if (pcVar2 == (char *)0x0) goto LAB_00716240;
    pcVar3 = pcVar2 + ((long)pcVar7 - (long)pcVar3);
    *pcVar3 = '\0';
    pcVar6 = acStack_98;
    FUN_00715fb4();
    iVar1 = (int)pcVar6;
    if (iVar1 == 0) {
      func_0x00716ae8();
    }
    else {
      pcVar7 = acStack_98 + ((ulong)pcVar6 & 0xffffffff);
      pcVar2 = pcVar3 + 1;
      FUN_00715fb4();
      pcVar6 = pcVar7;
      func_0x00716ae8();
      in_ZR = iVar1 == (int)pcVar7;
      if ((bool)in_ZR) {
        func_0x006d0a68();
        pcVar4 = pcVar6;
        pcVar5 = pcVar2;
        pcVar8 = pcVar6;
        if (pcVar6 == (char *)0x0) goto LAB_00716240;
        pcVar2 = acStack_98;
        FUN_006ce2d0(pcVar6,pcVar2,iVar1 << 1);
        pcVar5 = pcVar2;
        if ((int)pcVar4 != 0) goto LAB_00716240;
        FUN_006ce410();
      }
    }
  }
  pcVar8 = (char *)0x0;
  pcVar4 = pcVar6;
  pcVar5 = pcVar2;
LAB_00716240:
  func_0x00716af0(uStack_78);
  if ((bool)in_ZR) {
    return pcVar8;
  }
  ___stack_chk_fail();
  _sscanf(pcVar5,&UNK_0091ce1f);
  if ((int)pcVar5 == 4) {
    pcVar6 = (char *)0x0;
    if ((((uStack_c4 < 0x100) && (uStack_c8 < 0x100)) && (uStack_cc < 0x100)) && (uStack_d0 < 0x100)
       ) {
      *pcVar4 = (char)uStack_c4;
      pcVar4[1] = (char)uStack_c8;
      pcVar4[2] = (char)uStack_cc;
      pcVar6 = (char *)((long)&MACH_HEADER.magic + 1);
      pcVar4[3] = (char)uStack_d0;
    }
  }
  else {
    pcVar6 = (char *)0x0;
  }
  return pcVar6;
}



/* Entry: 0071618c; end: 0071625b;  */

char * FUN_0071618c(char *param_1)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 extraout_x8;
  char *pcVar7;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  char acStack_58 [32];
  undefined8 uStack_38;
  
  pcVar2 = param_1;
  func_0x00716b60();
  pcVar4 = segment_command_00000020.segname + 7;
  uStack_38 = extraout_x8;
  _strchr();
  pcVar6 = (char *)0x0;
  pcVar3 = pcVar4;
  if (pcVar2 != (char *)0x0) {
    pcVar3 = param_1;
    FUN_00701fd0();
    pcVar5 = (char *)0x0;
    pcVar7 = (char *)0x0;
    if (pcVar3 == (char *)0x0) goto LAB_00716240;
    pcVar2 = pcVar3 + ((long)pcVar2 - (long)param_1);
    *pcVar2 = '\0';
    pcVar6 = acStack_58;
    FUN_00715fb4();
    iVar1 = (int)pcVar6;
    if (iVar1 == 0) {
      func_0x00716ae8();
    }
    else {
      pcVar4 = acStack_58 + ((ulong)pcVar6 & 0xffffffff);
      pcVar3 = pcVar2 + 1;
      FUN_00715fb4();
      pcVar6 = pcVar4;
      func_0x00716ae8();
      in_ZR = iVar1 == (int)pcVar4;
      if ((bool)in_ZR) {
        func_0x006d0a68();
        pcVar5 = pcVar6;
        pcVar4 = pcVar3;
        pcVar7 = pcVar6;
        if (pcVar6 == (char *)0x0) goto LAB_00716240;
        pcVar3 = acStack_58;
        FUN_006ce2d0(pcVar6,pcVar3,iVar1 << 1);
        pcVar4 = pcVar3;
        if ((int)pcVar5 != 0) goto LAB_00716240;
        FUN_006ce410();
      }
    }
  }
  pcVar7 = (char *)0x0;
  pcVar5 = pcVar6;
  pcVar4 = pcVar3;
LAB_00716240:
  func_0x00716af0(uStack_38);
  if ((bool)in_ZR) {
    return pcVar7;
  }
  ___stack_chk_fail();
  _sscanf(pcVar4,&UNK_0091ce1f);
  if ((int)pcVar4 == 4) {
    pcVar6 = (char *)0x0;
    if ((((uStack_84 < 0x100) && (uStack_88 < 0x100)) && (uStack_8c < 0x100)) && (uStack_90 < 0x100)
       ) {
      *pcVar5 = (char)uStack_84;
      pcVar5[1] = (char)uStack_88;
      pcVar5[2] = (char)uStack_8c;
      pcVar6 = (char *)((long)&MACH_HEADER.magic + 1);
      pcVar5[3] = (char)uStack_90;
    }
  }
  else {
    pcVar6 = (char *)0x0;
  }
  return pcVar6;
}



/* Entry: 0071625c; end: 007162fb;  */

undefined8 FUN_0071625c(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  _sscanf(param_2,&UNK_0091ce1f);
  if ((int)param_2 == 4) {
    uVar1 = 0;
    if ((((uStack_24 < 0x100) && (uStack_28 < 0x100)) && (uStack_2c < 0x100)) && (uStack_30 < 0x100)
       ) {
      *param_1 = (char)uStack_24;
      param_1[1] = (char)uStack_28;
      param_1[2] = (char)uStack_2c;
      uVar1 = 1;
      param_1[3] = (char)uStack_30;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 007162fc; end: 007163bf;  */

void FUN_007162fc(long param_1,ulong *param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  
  if ((param_1 != 0) && (param_2 != (ulong *)0x0)) {
    uVar7 = 0;
    do {
      if (*param_2 <= uVar7) {
        return;
      }
      lVar4 = *(long *)(param_2[1] + uVar7 * 8);
      pcVar5 = *(char **)(lVar4 + 8);
      pcVar1 = pcVar5;
      do {
        pcVar6 = pcVar1 + 1;
        cVar2 = *pcVar1;
        if (cVar2 == '\0') goto LAB_00716374;
      } while (((cVar2 != ',') && (cVar2 != ':')) && (pcVar1 = pcVar6, cVar2 != '.'));
      if (*pcVar6 != '\0') {
        pcVar5 = pcVar6;
      }
LAB_00716374:
      pcVar1 = pcVar5;
      if (*pcVar5 == '+') {
        pcVar1 = pcVar5 + 1;
      }
      lVar3 = param_1;
      FUN_0070cf60(param_1,pcVar1,param_3,*(undefined8 *)(lVar4 + 0x10),0xffffffff,0xffffffff,
                   -(uint)(*pcVar5 == '+'));
      uVar7 = uVar7 + 1;
    } while ((int)lVar3 != 0);
  }
  return;
}



/* Entry: 007163c0; end: 007163cb;  */

void FUN_007163c0(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007163c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 007163cc; end: 0071648b;  */

/* WARNING: Removing unreachable block (ram,0x007167c4) */

bool FUN_007163cc(long param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == param_4) {
    uVar1 = 0;
    lVar3 = param_3;
    lVar4 = param_1;
    do {
      uVar2 = uVar1;
      lVar4 = lVar4 + -1;
      lVar3 = lVar3 + -1;
      if (param_2 == uVar2) goto LAB_00716460;
    } while ((*(char *)(lVar4 + param_2) != '@') &&
            (uVar1 = uVar2 + 1, *(char *)(lVar3 + param_2) != '@'));
    lVar4 = lVar4 + param_2;
    FUN_0071648c(lVar4,uVar2 + 1,lVar3 + param_2,uVar2 + 1);
    if ((int)lVar4 != 0) {
      if (param_2 - 1 != uVar2) {
        param_2 = ~uVar2 + param_2;
      }
LAB_00716460:
      FUN_00716918(param_1,param_3,param_2);
      return (int)param_1 == 0;
    }
  }
  return false;
}



/* Entry: 0071648c; end: 007164ef;  */

undefined8 FUN_0071648c(byte *param_1,long param_2,byte *param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  
  if (param_2 == param_4) {
    while( true ) {
      if (param_2 == 0) {
        return 1;
      }
      bVar2 = *param_1;
      if (bVar2 == 0) break;
      bVar3 = *param_3;
      if ((uint)bVar2 != (uint)bVar3) {
        uVar4 = (uint)bVar2;
        uVar1 = uVar4 | 0x20;
        if (0x19 < uVar4 - 0x41) {
          uVar1 = uVar4;
        }
        uVar4 = bVar3 | 0x20;
        if (0x19 < bVar3 - 0x41) {
          uVar4 = (uint)bVar3;
        }
        if (uVar1 != uVar4) {
          return 0;
        }
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
    }
  }
  return 0;
}



/* Entry: 007164f0; end: 00716793;  */

byte * FUN_007164f0(byte *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  byte *pbVar10;
  byte bVar11;
  byte bVar12;
  
  pbVar2 = param_1;
  pbVar4 = param_2;
  if (((byte *)((long)&MACH_HEADER.magic + 1) < param_4) && (*param_3 == 0x2e)) {
LAB_0071667c:
    func_0x00716bbc();
    if (pbVar4 == param_4) {
      while( true ) {
        if (pbVar4 == (byte *)0x0) {
          return (byte *)((long)&MACH_HEADER.magic + 1);
        }
        bVar12 = *pbVar2;
        if (bVar12 == 0) break;
        bVar11 = *param_3;
        if ((uint)bVar12 != (uint)bVar11) {
          uVar5 = (uint)bVar12;
          uVar6 = uVar5 | 0x20;
          if (0x19 < uVar5 - 0x41) {
            uVar6 = uVar5;
          }
          uVar5 = bVar11 | 0x20;
          if (0x19 < bVar11 - 0x41) {
            uVar5 = (uint)bVar11;
          }
          if (uVar6 != uVar5) {
            return (byte *)0x0;
          }
        }
        pbVar2 = pbVar2 + 1;
        param_3 = param_3 + 1;
        pbVar4 = pbVar4 + -1;
      }
    }
    return (byte *)0x0;
  }
  iVar9 = 0;
  pbVar10 = (byte *)0x0;
  bVar12 = 1;
  pbVar3 = param_1;
  for (pbVar7 = param_2; pbVar7 != (byte *)0x0; pbVar7 = pbVar7 + -1) {
    bVar11 = *pbVar3;
    if (bVar11 == 0x2a) {
      if (pbVar7 == (byte *)((long)&MACH_HEADER.magic + 1)) {
        bVar1 = true;
      }
      else {
        bVar1 = pbVar3[1] == 0x2e;
      }
      if ((pbVar10 != (byte *)0x0) || ((((bVar12 & 8) == 0 && iVar9 == 0) & bVar12 & bVar1) != 1))
      goto LAB_0071667c;
      iVar9 = 0;
      bVar12 = bVar12 & 0xf6;
      pbVar10 = pbVar3;
    }
    else {
      uVar6 = (bVar11 & 0xffffffdf) - 0x41;
      uVar5 = (uint)bVar11;
      bVar1 = uVar5 - 0x30 < 10;
      if ((!bVar1 && 0x18 < uVar6) && (bVar1 || uVar6 != 0x19)) {
        if (uVar5 == 0x2d) {
          if ((bVar12 & 1) != 0) goto LAB_0071667c;
          bVar12 = bVar12 | 4;
        }
        else {
          if ((uVar5 != 0x2e) || ((bVar12 & 5) != 0)) goto LAB_0071667c;
          iVar9 = iVar9 + 1;
          bVar12 = 1;
        }
      }
      else {
        bVar11 = bVar12;
        if (((byte *)((long)&MACH_HEADER.magic + 3) < pbVar7) && ((bVar12 & 1) != 0)) {
          pbVar4 = &UNK_0091ce1a;
          pbVar2 = pbVar3;
          func_0x00702030(pbVar3,&UNK_0091ce1a,4);
          bVar11 = 8;
          if ((int)pbVar2 != 0) {
            bVar11 = bVar12;
          }
        }
        bVar12 = bVar11 & 0xfa;
      }
    }
    pbVar3 = pbVar3 + 1;
  }
  if ((((bVar12 & 5) != 0) || (iVar9 < 2)) || (pbVar10 == (byte *)0x0)) goto LAB_0071667c;
  lVar8 = (long)pbVar10 - (long)param_1;
  pbVar2 = param_1 + (long)param_2 + ~(ulong)pbVar10;
  if (param_4 < pbVar2 + lVar8) {
LAB_00716674:
    pbVar2 = (byte *)0x0;
  }
  else {
    pbVar4 = param_1;
    FUN_0071648c(param_1,lVar8,param_3,lVar8);
    if ((int)pbVar4 == 0) {
      return pbVar4;
    }
    pbVar4 = param_3 + ((long)param_4 - (long)pbVar2);
    pbVar3 = pbVar4;
    FUN_0071648c(pbVar4,pbVar2,pbVar10 + 1,pbVar2);
    if ((int)pbVar3 == 0) {
      return pbVar3;
    }
    if ((pbVar10 == param_1) && (pbVar10[1] == 0x2e)) {
      if (param_4 == pbVar2) goto LAB_00716674;
    }
    else if (((byte *)((long)&MACH_HEADER.magic + 3) < param_4) &&
            (pbVar2 = param_3, func_0x00702030(param_3,&UNK_0091ce1a,4), (int)pbVar2 == 0)) {
      return pbVar2;
    }
    param_3 = param_3 + lVar8;
    if ((pbVar4 != param_3 + 1) || (*param_3 != 0x2a)) {
      for (param_4 = param_4 + (1 - (long)param_2); param_4 != (byte *)0x0; param_4 = param_4 + -1)
      {
        bVar12 = *param_3;
        if ((9 < bVar12 - 0x30 && 0x19 < bVar12 - 0x41) &&
           (uVar6 = (uint)bVar12,
           (uVar6 != 0x2d && 0x18 < uVar6 - 0x61) && (uVar6 == 0x2d || uVar6 - 0x61 != 0x19)))
        goto LAB_00716674;
        param_3 = param_3 + 1;
      }
    }
    pbVar2 = (byte *)((long)&MACH_HEADER.magic + 1);
  }
  return pbVar2;
}



/* Entry: 00716794; end: 007167c7;  */

bool FUN_00716794(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  if (param_2 == param_4) {
    FUN_00716918(param_1,param_3,param_2);
    return (int)param_1 == 0;
  }
  return false;
}



/* Entry: 007167c8; end: 00716917;  */

ulong FUN_007167c8(int *param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,ulong *param_8)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uStack_58;
  
  uVar1 = *(ulong *)(param_1 + 2);
  if ((uVar1 != 0) && (*param_1 != 0)) {
    if (param_2 < 1) {
      puVar2 = &uStack_58;
      FUN_006cceb8(puVar2,param_1);
      if ((int)puVar2 < 0) {
        return 0xffffffff;
      }
      uVar1 = (ulong)puVar2 & 0xffffffff;
      if ((param_5 == 2) && (uVar4 = uStack_58, FUN_00715c6c(uStack_58,uVar1), (int)uVar4 == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = uStack_58;
        func_0x00716b20(uStack_58,uVar1);
        if ((param_8 != (ulong *)0x0) && (0 < (int)uVar4)) {
          uVar3 = uStack_58;
          FUN_007020bc(uStack_58,uVar1);
          *param_8 = uVar3;
        }
      }
      func_0x00701ed0(uStack_58);
      return uVar4;
    }
    if (param_2 == param_1[1]) {
      if (param_2 == 0x16) {
        func_0x00716b20();
      }
      else {
        if (*param_1 != (int)param_7) {
          return 0;
        }
        FUN_00716918(uVar1,param_6,param_7);
        uVar1 = (ulong)((int)uVar1 == 0);
      }
      if (param_8 != (ulong *)0x0) {
        if (0 < (int)uVar1) {
          uVar4 = *(ulong *)(param_1 + 2);
          FUN_007020bc(uVar4,(long)*param_1);
          *param_8 = uVar4;
          return uVar1;
        }
        return uVar1;
      }
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 00716918; end: 00716923;  */

undefined8 FUN_00716918(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcmp_0099a3f0)();
    return param_1;
  }
  return 0;
}



/* Entry: 00716924; end: 00716a33;  */

long FUN_00716924(byte *param_1,uint param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_3 + 0x10);
  if (iVar3 == 0x10) {
    return 0;
  }
  if (param_2 == 0) {
    if (*(int *)(param_3 + 0x14) == -1) {
      *(int *)(param_3 + 0x14) = iVar3;
    }
    else if (*(int *)(param_3 + 0x14) != iVar3) {
      return 0;
    }
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
  }
  else {
    if ((int)param_2 < 5) {
      uVar4 = 0;
      for (; param_2 != 0; param_2 = param_2 - 1) {
        bVar1 = *param_1;
        if (bVar1 - 0x30 < 10) {
          iVar5 = -0x30;
        }
        else if (bVar1 - 0x41 < 6) {
          iVar5 = -0x37;
        }
        else {
          if (5 < bVar1 - 0x61) {
            return 0;
          }
          iVar5 = -0x57;
        }
        uVar4 = iVar5 + (uint)bVar1 | uVar4 << 4;
        param_1 = param_1 + 1;
      }
      *(ushort *)(param_3 + iVar3) = (ushort)(uVar4 >> 8) & 0xff | (ushort)((uVar4 & 0xff00ff) << 8)
      ;
      iVar3 = *(int *)(param_3 + 0x10) + 2;
    }
    else {
      if ((0xc < iVar3) || (param_1[param_2] != 0)) {
        return 0;
      }
      lVar2 = param_3 + iVar3;
      FUN_0071625c(lVar2,param_1);
      if ((int)lVar2 == 0) {
        return lVar2;
      }
      iVar3 = *(int *)(param_3 + 0x10) + 4;
    }
    *(int *)(param_3 + 0x10) = iVar3;
  }
  return 1;
}



/* Entry: 00716a34; end: 00716bc7;  */

void FUN_00716a34(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)();
    return;
  }
  return;
}



/* Entry: 00716bc8; end: 00716c1b;  */

long FUN_00716bc8(void)

{
  code *pcVar1;
  dword *pdVar2;
  long lStack_20;
  long lStack_18;
  
  pdVar2 = &MACH_HEADER.cputype;
  _clock_gettime(4,&lStack_20);
  if ((int)pdVar2 == 0) {
    return lStack_18 + lStack_20 * 1000000000;
  }
  ___error();
  __ZNSt3__120__throw_system_errorEiPKc(*pdVar2,&UNK_0091ce2b);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x716c18);
  (*pcVar1)();
}



/* Entry: 00716c1c; end: 00716c6f;  */

long FUN_00716c1c(void)

{
  code *pcVar1;
  dword *pdVar2;
  long lStack_20;
  long lStack_18;
  
  pdVar2 = &MACH_HEADER.cpusubtype;
  _clock_gettime(8,&lStack_20);
  if ((int)pdVar2 == 0) {
    return lStack_18 + lStack_20 * 1000000000;
  }
  ___error();
  __ZNSt3__120__throw_system_errorEiPKc(*pdVar2,&UNK_0091ce55);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x716c6c);
  (*pcVar1)();
}



/* Entry: 00716c70; end: 00716cdb; -[DJSharedSate init] */

long FUN_00716c70(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00717b3c(param_1,PTR_s_init_00abbf70);
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSCondition_00ac36a8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    func_0x00717aec(uVar2);
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return param_1;
}



/* Entry: 00716cdc; end: 00716cfb; -[DJSharedSate isReady] */

bool FUN_00716cdc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return true;
  }
  return *(long *)(param_1 + 0x18) != 0;
}



/* Entry: 00716cfc; end: 00716d03; -[DJSharedSate value] */

undefined8 FUN_00716cfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00716d04; end: 00716d23; -[DJSharedSate setValue:] */

void FUN_00716d04(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_00717a5c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00716d24; end: 00716d2b; -[DJSharedSate exception] */

undefined8 FUN_00716d24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00716d2c; end: 00716d4b; -[DJSharedSate setException:] */

void FUN_00716d2c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_00717a5c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00716d4c; end: 00716d53; -[DJSharedSate cond] */

undefined8 FUN_00716d4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00716d54; end: 00716d73; -[DJSharedSate setCond:] */

void FUN_00716d54(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_00717a5c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00716d74; end: 00716d7b; -[DJSharedSate handler] */

undefined8 FUN_00716d74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 00716d7c; end: 00716d83; -[DJSharedSate setHandler:] */

void FUN_00716d7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 00716d84; end: 00716d8b; -[DJSharedSate ready] */

undefined1 FUN_00716d84(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 00716d8c; end: 00716d93; -[DJSharedSate setReady:] */

void FUN_00716d8c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 00716d94; end: 00716dcf; -[DJSharedSate .cxx_destruct] */

void FUN_00716d94(long param_1)

{
  func_0x00717b0c(param_1 + 0x28);
  func_0x00717b0c(param_1 + 0x20);
  func_0x00717b0c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00716dd0; end: 00716e2f; -[DJFuture initWithSharedState:] */

long FUN_00716dd0(long param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  
  FUN_00717a5c();
  func_0x00717b3c();
  if (param_1 != 0) {
    func_0x00717aa0();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = unaff_x19;
    _objc_release(uVar1);
  }
  func_0x00717a6c();
  return param_1;
}



/* Entry: 00716e30; end: 00716f5b; -[DJFuture isReady] */

/* WARNING: Removing unreachable block (ram,0x00716f08) */

uint FUN_00716e30(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00717aa0();
  _objc_sync_exit(param_1);
  func_0x00717a74();
  uVar1 = uVar3;
  func_0x00780920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00717a90();
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_00716f5c;
  puStack_40 = &UNK_00a1ef60;
  func_0x00717aa0();
  uStack_38 = uVar3;
  func_0x00717aa8();
  _objc_retain(auStack_58);
  func_0x00788640(uVar1);
  puVar2 = auStack_58;
  (*pcStack_48)(puVar2);
  func_0x00793000(uVar1);
  func_0x00717b04();
  func_0x00717a74();
  func_0x00717a7c();
  func_0x00717a74();
  func_0x00717a6c();
  return (uint)puVar2 & 1;
}



/* Entry: 00716f5c; end: 00716f63;  */

void FUN_00716f5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00787c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x20),PTR_s_isReady_00abcc10);
  return;
}



/* Entry: 00716f64; end: 007170a3; -[DJFuture get] */

/* WARNING: Removing unreachable block (ram,0x00717050) */

void FUN_00716f64(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00717aa0();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  func_0x00717a74();
  uVar1 = uVar3;
  func_0x00780920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00717a90();
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_007170a4;
  puStack_40 = &UNK_00a1ef90;
  func_0x00717aa0();
  uStack_38 = uVar3;
  func_0x00717aa8();
  _objc_retain(auStack_58);
  func_0x00788640(uVar1);
  puVar2 = auStack_58;
  (*pcStack_48)(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00793000(uVar1);
  func_0x00717b04();
  func_0x00717a74();
  func_0x00717a7c();
  func_0x00717a74();
  func_0x00717a6c();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 007170a4; end: 0071712b;  */

void FUN_007170a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  
  while( true ) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00787c20();
    lVar3 = *(long *)(param_1 + 0x20);
    if ((uVar2 & 1) != 0) break;
    func_0x00780920();
    _objc_retainAutoreleasedReturnValue();
    func_0x007939c0();
    func_0x00717a74();
  }
  func_0x00782f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00793590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(lVar4,PTR_s_value_00abfa70);
    return;
  }
  func_0x00782f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
  func_0x00717a74();
  func_0x00717b20();
  _objc_retain(param_3);
  puVar5 = PTR_PTR_00ac3680;
  _objc_alloc_init();
  puVar6 = puVar5;
  func_0x00783f20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_00999f30;
  puStack_c0 = PTR___NSConcreteStackBlock_00999f30;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_00717380;
  puStack_a8 = &UNK_00a1efc0;
  func_0x00717aa8();
  puStack_a0 = puVar5;
  func_0x00717aa0();
  ppuVar7 = &puStack_c0;
  uStack_98 = param_3;
  _objc_retainBlock();
  _objc_retain(lVar4);
  _objc_sync_enter(lVar4);
  uVar9 = *(undefined8 *)(lVar4 + 8);
  _objc_retain(uVar9);
  uVar8 = *(undefined8 *)(lVar4 + 8);
  *(undefined8 *)(lVar4 + 8) = 0;
  _objc_release(uVar8);
  _objc_sync_exit(lVar4);
  _objc_release(lVar4);
  uStack_f0 = 0;
  uStack_e0 = 0x3032000000;
  pcStack_d8 = FUN_0071749c;
  uStack_d0 = 0x7174ac;
  uStack_c8 = 0;
  uVar8 = uVar9;
  puStack_e8 = &uStack_f0;
  func_0x00780920(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_00717554;
  puStack_110 = &UNK_009e3a30;
  _objc_retain(uVar9);
  uStack_108 = uVar9;
  puStack_f8 = &uStack_f0;
  _objc_retain(ppuVar7);
  ppuStack_100 = ppuVar7;
  FUN_007174b4(uVar8,&puStack_128);
  _objc_release(uVar8);
  if (puStack_e8[5] != 0) {
    (*(code *)ppuVar7[2])(ppuVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00717ad4();
  func_0x00717a7c();
  func_0x00717a84();
  func_0x00717ae4();
  func_0x00717b28();
  _objc_release(uStack_98);
  _objc_release(puStack_a0);
  _objc_release(ppuVar7);
  func_0x00717a74();
  func_0x00717a6c();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar6);
  return;
}



/* Entry: 0071712c; end: 0071737f; -[DJFuture then:] */

void FUN_0071712c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_00ac3680;
  _objc_alloc_init();
  puVar3 = puVar2;
  func_0x00783f20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_00999f30;
  puStack_a0 = PTR___NSConcreteStackBlock_00999f30;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_00717380;
  puStack_88 = &UNK_00a1efc0;
  func_0x00717aa8();
  puStack_80 = puVar2;
  func_0x00717aa0();
  ppuVar4 = &puStack_a0;
  uStack_78 = param_3;
  _objc_retainBlock();
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar5);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_0071749c;
  uStack_b0 = 0x7174ac;
  uStack_a8 = 0;
  uVar5 = uVar6;
  puStack_c8 = &uStack_d0;
  func_0x00780920(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_00717554;
  puStack_f0 = &UNK_009e3a30;
  _objc_retain(uVar6);
  uStack_e8 = uVar6;
  puStack_d8 = &uStack_d0;
  _objc_retain(ppuVar4);
  ppuStack_e0 = ppuVar4;
  FUN_007174b4(uVar5,&puStack_108);
  _objc_release(uVar5);
  if (puStack_c8[5] != 0) {
    (*(code *)ppuVar4[2])(ppuVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00717ad4();
  func_0x00717a7c();
  func_0x00717a84();
  func_0x00717ae4();
  func_0x00717b28();
  _objc_release(uStack_78);
  _objc_release(puStack_80);
  _objc_release(ppuVar4);
  func_0x00717a74();
  func_0x00717a6c();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 00717380; end: 00717467;  */

undefined8 FUN_00717380(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x00717af4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  puVar3 = PTR_PTR_00ac36b0;
  _objc_alloc(PTR_PTR_00ac36b0);
  func_0x00786800();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00791140(uVar1);
  func_0x00717b28();
  func_0x00717acc();
  func_0x00717a6c();
  return 0;
}



/* Entry: 00717468; end: 0071749b;  */

void FUN_00717468(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  return;
}



/* Entry: 0071749c; end: 007174b3;  */

void FUN_0071749c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 007174b4; end: 00717553;  */

/* WARNING: Removing unreachable block (ram,0x00717510) */

void FUN_007174b4(undefined8 param_1,long param_2)

{
  _objc_retain();
  func_0x00717aa8();
  func_0x00788640(param_1);
  (**(code **)(param_2 + 0x10))(param_2);
  func_0x00793000(param_1);
  func_0x00717a74();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00717554; end: 0071759f;  */

void FUN_00717554(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00787c20();
  if (iVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    func_0x00717aa8();
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0078e430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setHandler__00abe618,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 007175a0; end: 007175ab; -[DJFuture .cxx_destruct] */

void FUN_007175a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 007175ac; end: 00717627; -[DJPromise init] */

long FUN_007175ac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00717b3c(param_1,PTR_s_init_00abbf70);
  if (param_1 != 0) {
    puVar1 = PTR_PTR_00ac36b8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    func_0x00717aec(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00717aa8();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    _objc_release(uVar2);
  }
  return param_1;
}



/* Entry: 00717628; end: 0071767b; -[DJPromise getFuture] */

void FUN_00717628(undefined8 param_1)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  _objc_alloc(PTR_PTR_00ac36b0);
  func_0x00786800();
  func_0x00717b30();
  func_0x00717a6c();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0071767c; end: 0071780f; -[DJPromise updateAndCallResultHandler:] */

void FUN_0071767c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar3 = *(long *)(param_1 + 8);
  func_0x00717aa8();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  func_0x00717acc();
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_00717810;
  pcStack_40 = FUN_00717838;
  uStack_38 = 0;
  lVar2 = lVar3;
  puStack_58 = &uStack_60;
  func_0x00780920(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00717a90();
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_00717840;
  puStack_80 = &UNK_009e3a30;
  func_0x00717aa0();
  uStack_70 = param_3;
  func_0x00717aa8();
  lStack_78 = lVar3;
  puStack_68 = &uStack_60;
  FUN_007174b4(lVar2,auStack_98);
  func_0x00717acc();
  if (puStack_58[5] != 0) {
    func_0x00784220();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00717acc();
  }
  func_0x00717a7c();
  func_0x00717ad4();
  func_0x00717a84();
  func_0x00717ae4();
  func_0x00717a74();
  func_0x00717a6c();
  return;
}



/* Entry: 00717810; end: 00717837;  */

void FUN_00717810(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 00717838; end: 0071783f;  */

void FUN_00717838(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 00717840; end: 007178cf;  */

void FUN_00717840(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00784220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  func_0x00717aec(uVar2);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00780920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077fca0();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 007178d0; end: 00717933; -[DJPromise setValue:] */

void FUN_007178d0(void)

{
  FUN_00717a5c();
  func_0x00717a90();
  func_0x00717aa0();
  func_0x00717b14();
  func_0x00717a7c();
  func_0x00717a6c();
  return;
}



/* Entry: 00717934; end: 00717973;  */

void FUN_00717934(void)

{
  func_0x00717af4();
  func_0x00791140();
  func_0x0078fb20();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 00717974; end: 007179bf; -[DJPromise setValue] */

void FUN_00717974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNull_00ac2f90;
  func_0x00789b20(PTR__OBJC_CLASS___NSNull_00ac2f90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00791140(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}


