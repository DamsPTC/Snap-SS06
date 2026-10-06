/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d218f0; end: 109d219e7;  */

void FUN_109d218f0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  code *pcVar1;
  undefined ***pppuVar2;
  int iStack_5c;
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined **ppuStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010937dd38(param_1);
  if (param_3 != 0) {
    param_3 = param_3 * 0x18;
    do {
      uStack_50 = param_2[1];
      puStack_58 = (undefined8 *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uStack_50 = (ulong)*(byte *)((long)param_2 + 0x17);
        puStack_58 = param_2;
      }
      ppuStack_48 = &PTR_DAT_110b3c700;
      pppuVar2 = &ppuStack_48;
      FUN_109cd2dd8(pppuVar2,&puStack_58);
      if (pppuVar2 == (undefined ***)&PTR_FUN_110b3ca00) {
        iStack_5c = 0;
LAB_109d219b4:
        func_0x000105688514(&UNK_10f5ac9cf);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x109d219c4);
        (*pcVar1)();
      }
      iStack_5c = *(int *)(pppuVar2 + 2);
      if (iStack_5c == 0) goto LAB_109d219b4;
      func_0x00010937ddc4(param_1,&iStack_5c);
      param_2 = param_2 + 3;
      param_3 = param_3 + -0x18;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 109d219e8; end: 109d21b73;  */

long * FUN_109d219e8(byte *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  byte *pbVar9;
  long alStack_148 [3];
  long *plStack_130;
  long alStack_128 [3];
  long *plStack_110;
  undefined1 auStack_100 [152];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  pbVar9 = param_1 + 8;
  pbVar9[0] = 0;
  pbVar9[1] = 0;
  pbVar9[2] = 0;
  pbVar9[3] = 0;
  pbVar9[4] = 0;
  pbVar9[5] = 0;
  pbVar9[6] = 0;
  pbVar9[7] = 0;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  puVar6 = (undefined8 *)*param_2;
  uVar1 = param_2[1];
  func_0x0001093830cc(alStack_148);
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
    puVar6 = param_2;
  }
  func_0x000109477bd0(alStack_128,puVar6,(long)puVar6 + uVar1,alStack_148,param_4,param_5);
  func_0x000109477cb8(alStack_128,1,param_1);
  func_0x0001094790dc(auStack_100);
  if (plStack_110 == alStack_128) {
    lVar7 = 0x20;
LAB_109d21aa4:
    (**(code **)(*plStack_110 + lVar7))();
  }
  else if (plStack_110 != (long *)0x0) {
    lVar7 = 0x28;
    goto LAB_109d21aa4;
  }
  plVar4 = plStack_130;
  if (plStack_130 == alStack_148) {
    lVar7 = 0x20;
LAB_109d21ad0:
    (**(code **)(*plStack_130 + lVar7))();
  }
  else if (plStack_130 != (long *)0x0) {
    lVar7 = 0x28;
    goto LAB_109d21ad0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x000109478158(alStack_128);
  if (plStack_130 == alStack_148) {
    lVar7 = 0x20;
  }
  else {
    if (plStack_130 == (long *)0x0) goto LAB_109d21b60;
    lVar7 = 0x28;
  }
  (**(code **)(*plStack_130 + lVar7))();
LAB_109d21b60:
  puVar6 = (undefined8 *)(ulong)*param_1;
  func_0x000109380ffc(pbVar9);
  __Unwind_Resume();
  plVar8 = plVar4 + 1;
  func_0x000109d21be8();
  if (plVar8 != plVar4) {
    uVar5 = *puVar6;
    uVar1 = plVar4[5];
    plVar3 = (long *)plVar4[4];
    if (-1 < (char)*(byte *)((long)plVar4 + 0x37)) {
      uVar1 = (ulong)*(byte *)((long)plVar4 + 0x37);
      plVar3 = plVar4 + 4;
    }
    func_0x000107c2abd8(uVar5,puVar6[1],plVar3,uVar1);
    if (((uint)uVar5 >> 7 & 1) == 0) {
      return plVar4;
    }
  }
  return plVar8;
}



/* Entry: 109d21b74; end: 109d21c5f;  */

undefined8 * FUN_109d21b74(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = param_1 + 1;
  func_0x000109d21be8(param_1,param_2,*puVar4,puVar4);
  if (puVar4 != param_1) {
    uVar3 = *param_2;
    uVar1 = param_1[5];
    puVar2 = (undefined8 *)param_1[4];
    if (-1 < (char)*(byte *)((long)param_1 + 0x37)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x37);
      puVar2 = param_1 + 4;
    }
    func_0x000107c2abd8(uVar3,param_2[1],puVar2,uVar1);
    if (((uint)uVar3 >> 7 & 1) == 0) {
      return param_1;
    }
  }
  return puVar4;
}



/* Entry: 109d21c60; end: 109d21df3;  */

char **** FUN_109d21c60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char ****ppppcVar1;
  char ****ppppcVar2;
  char ***pppcVar3;
  char *****pppppcVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  char ****ppppcStack_120;
  char ***pppcStack_118;
  char **ppcStack_110;
  undefined8 uStack_108;
  char ****ppppcStack_100;
  char ***pppcStack_f8;
  char **ppcStack_f0;
  undefined8 uStack_e8;
  char ***pppcStack_e0;
  char **ppcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  char ***pppcStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_88;
  long lStack_80;
  byte abStack_70 [8];
  char **ppcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long alStack_48 [3];
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_30 = (long *)0x0;
  uVar6 = 0;
  uVar7 = 0;
  uStack_60 = param_2;
  uStack_58 = param_3;
  func_0x000109888a14(abStack_70,&uStack_60,alStack_48,0,0);
  if (plStack_30 == alStack_48) {
    lVar8 = 0x20;
  }
  else {
    if (plStack_30 == (long *)0x0) goto LAB_109d21cd0;
    lVar8 = 0x28;
  }
  (**(code **)(*plStack_30 + lVar8))();
LAB_109d21cd0:
  if (abStack_70[0] == 9) {
    *param_1 = 0;
    param_1[1] = 0;
    uVar5 = 9;
    param_1[2] = 0;
  }
  else {
    func_0x00010937c260(&lStack_88,abStack_70);
    FUN_109d218f0(param_1,lStack_88,(lStack_80 - lStack_88 >> 3) * -0x5555555555555555);
    plStack_50 = &lStack_88;
    func_0x000104c607c8(&plStack_50);
    uVar5 = (ulong)abStack_70[0];
  }
  ppppcVar1 = (char ****)&ppcStack_68;
  func_0x000109380ffc();
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return ppppcVar1;
    }
    ___stack_chk_fail();
    uVar9 = (uint)uVar7;
    if ((int)uVar5 == 0) break;
    plStack_50 = &lStack_88;
    func_0x000104c607c8(&plStack_50);
    uVar5 = (ulong)abStack_70[0];
    func_0x000109380ffc(&ppcStack_68);
    ___cxa_begin_catch();
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    ___cxa_end_catch();
  }
  ppppcVar2 = ppppcVar1;
  __Unwind_Resume();
  pcStack_98 = FUN_109d21df4;
  if (*(char *)ppppcVar2 == '\x01') {
    uStack_c8 = 0x8000000000000000;
    uStack_d0 = 0;
    pppcVar3 = ppppcVar2[1];
    pppcStack_e0 = (char ***)ppppcVar2;
    uStack_c0 = uVar5;
    uStack_b8 = uVar6;
    pppcStack_b0 = (char ***)ppppcVar1;
    puStack_a8 = param_1;
    puStack_a0 = &stack0xfffffffffffffff0;
    FUN_109d21b74(pppcVar3,&PTR_DAT_110b3f4c8);
    pppcStack_f8 = (char ***)0x0;
    ppcStack_f0 = (char **)0x0;
    uStack_e8 = 0x8000000000000000;
    if (*(char *)ppppcVar2 == '\x02') {
      ppcStack_f0 = ppppcVar2[1][1];
    }
    else if (*(char *)ppppcVar2 == '\x01') {
      pppcStack_f8 = ppppcVar2[1] + 1;
    }
    else {
      uStack_e8 = 1;
    }
    ppppcVar1 = &pppcStack_e0;
    ppppcStack_100 = ppppcVar2;
    ppcStack_d8 = (char **)pppcVar3;
    func_0x00010937c708(ppppcVar1,&ppppcStack_100);
    if (((ulong)ppppcVar1 & 1) == 0) {
      ppppcVar1 = &pppcStack_e0;
      func_0x00010938cf68();
      if (*(char *)ppppcVar1 == '\x01') {
        ppppcVar1 = &pppcStack_e0;
        func_0x00010938cf68();
        pppcStack_f8 = (char ***)0x0;
        ppcStack_f0 = (char **)0x0;
        uStack_e8 = 0x8000000000000000;
        ppppcStack_100 = ppppcVar1;
        if (*(char *)ppppcVar1 == '\x01') {
          pppcVar3 = ppppcVar1[1];
          FUN_109d21b74(pppcVar3,&uStack_c0);
          pppcStack_f8 = pppcVar3;
        }
        else if (*(char *)ppppcVar1 == '\x02') {
          ppcStack_f0 = ppppcVar1[1][1];
        }
        else {
          uStack_e8 = 1;
        }
        ppppcVar1 = &pppcStack_e0;
        func_0x00010938cf68();
        pppcStack_118 = (char ***)0x0;
        ppcStack_110 = (char **)0x0;
        uStack_108 = 0x8000000000000000;
        if (*(char *)ppppcVar1 == '\x02') {
          ppcStack_110 = ppppcVar1[1][1];
        }
        else if (*(char *)ppppcVar1 == '\x01') {
          pppcStack_118 = ppppcVar1[1] + 1;
        }
        else {
          uStack_108 = 1;
        }
        pppppcVar4 = &ppppcStack_100;
        ppppcStack_120 = ppppcVar1;
        func_0x00010937c708(pppppcVar4,&ppppcStack_120);
        if (((ulong)pppppcVar4 & 1) == 0) {
          pppppcVar4 = &ppppcStack_100;
          func_0x00010938cf68();
          if (*(char *)pppppcVar4 == '\x04') {
            func_0x00010938cf68(&ppppcStack_100);
            func_0x00010938d198();
            uVar9 = (uint)(byte)ppppcStack_120;
          }
        }
      }
    }
  }
  return (char ****)(ulong)(uVar9 & 1);
}



/* Entry: 109d21df4; end: 109d21f9b;  */

byte FUN_109d21df4(char ****param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  char ***pppcVar1;
  char ****ppppcVar2;
  char *****pppppcVar3;
  char ****ppppcStack_90;
  char ***pppcStack_88;
  char **ppcStack_80;
  undefined8 uStack_78;
  char ****ppppcStack_70;
  char ***pppcStack_68;
  char **ppcStack_60;
  undefined8 uStack_58;
  char ***pppcStack_50;
  char **ppcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)param_1 == '\x01') {
    uStack_38 = 0x8000000000000000;
    uStack_40 = 0;
    pppcVar1 = param_1[1];
    pppcStack_50 = (char ***)param_1;
    uStack_30 = param_2;
    uStack_28 = param_3;
    FUN_109d21b74(pppcVar1,&PTR_DAT_110b3f4c8);
    pppcStack_68 = (char ***)0x0;
    ppcStack_60 = (char **)0x0;
    uStack_58 = 0x8000000000000000;
    if (*(char *)param_1 == '\x02') {
      ppcStack_60 = param_1[1][1];
    }
    else if (*(char *)param_1 == '\x01') {
      pppcStack_68 = param_1[1] + 1;
    }
    else {
      uStack_58 = 1;
    }
    ppppcVar2 = &pppcStack_50;
    ppppcStack_70 = param_1;
    ppcStack_48 = (char **)pppcVar1;
    func_0x00010937c708(ppppcVar2,&ppppcStack_70);
    if (((ulong)ppppcVar2 & 1) == 0) {
      ppppcVar2 = &pppcStack_50;
      func_0x00010938cf68();
      if (*(char *)ppppcVar2 == '\x01') {
        ppppcVar2 = &pppcStack_50;
        func_0x00010938cf68();
        pppcStack_68 = (char ***)0x0;
        ppcStack_60 = (char **)0x0;
        uStack_58 = 0x8000000000000000;
        ppppcStack_70 = ppppcVar2;
        if (*(char *)ppppcVar2 == '\x01') {
          pppcVar1 = ppppcVar2[1];
          FUN_109d21b74(pppcVar1,&uStack_30);
          pppcStack_68 = pppcVar1;
        }
        else if (*(char *)ppppcVar2 == '\x02') {
          ppcStack_60 = ppppcVar2[1][1];
        }
        else {
          uStack_58 = 1;
        }
        ppppcVar2 = &pppcStack_50;
        func_0x00010938cf68();
        pppcStack_88 = (char ***)0x0;
        ppcStack_80 = (char **)0x0;
        uStack_78 = 0x8000000000000000;
        if (*(char *)ppppcVar2 == '\x02') {
          ppcStack_80 = ppppcVar2[1][1];
        }
        else if (*(char *)ppppcVar2 == '\x01') {
          pppcStack_88 = ppppcVar2[1] + 1;
        }
        else {
          uStack_78 = 1;
        }
        pppppcVar3 = &ppppcStack_70;
        ppppcStack_90 = ppppcVar2;
        func_0x00010937c708(pppppcVar3,&ppppcStack_90);
        if (((ulong)pppppcVar3 & 1) == 0) {
          pppppcVar3 = &ppppcStack_70;
          func_0x00010938cf68();
          if (*(char *)pppppcVar3 == '\x04') {
            func_0x00010938cf68(&ppppcStack_70);
            func_0x00010938d198();
            param_4 = (byte)ppppcStack_90;
          }
        }
      }
    }
  }
  return param_4 & 1;
}



/* Entry: 109d21f9c; end: 109d2236f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109d21f9c(ulong *param_1,char *******param_2,undefined8 param_3,char ******param_4,
                  undefined8 param_5,ulong param_6,code *param_7)

{
  ulong uVar1;
  ulong *puVar2;
  bool bVar3;
  code *pcVar4;
  char ******ppppppcVar5;
  char *******pppppppcVar6;
  char *******pppppppcVar7;
  undefined1 *puVar8;
  ulong *puVar9;
  undefined **ppuVar10;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  ulong uStack_d8;
  undefined7 uStack_d0;
  byte bStack_c9;
  char cStack_c8;
  char *******pppppppcStack_c0;
  char ******ppppppcStack_b8;
  char *****pppppcStack_b0;
  undefined8 uStack_a8;
  char *******pppppppcStack_a0;
  char ******ppppppcStack_98;
  char *****pppppcStack_90;
  undefined8 uStack_88;
  char *******pppppppcStack_80;
  char ******ppppppcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char ******ppppppcStack_58;
  
  uStack_60 = param_3;
  ppppppcStack_58 = param_4;
  if (*(char *)param_2 == '\x01') {
    uStack_68 = 0x8000000000000000;
    uStack_70 = 0;
    ppppppcVar5 = param_2[1];
    pppppppcStack_80 = param_2;
    FUN_109d21b74(ppppppcVar5,&PTR_DAT_110b3f4c8);
    ppppppcStack_98 = (char ******)0x0;
    pppppcStack_90 = (char *****)0x0;
    uStack_88 = 0x8000000000000000;
    if (*(char *)param_2 == '\x02') {
      pppppcStack_90 = param_2[1][1];
    }
    else if (*(char *)param_2 == '\x01') {
      ppppppcStack_98 = param_2[1] + 1;
    }
    else {
      uStack_88 = 1;
    }
    pppppppcVar6 = (char *******)&pppppppcStack_80;
    pppppppcStack_a0 = param_2;
    ppppppcStack_78 = ppppppcVar5;
    func_0x00010937c708(pppppppcVar6,&pppppppcStack_a0);
    if (((ulong)pppppppcVar6 & 1) != 0) goto LAB_109d22198;
    pppppppcVar6 = (char *******)&pppppppcStack_80;
    func_0x00010938cf68();
    if (*(char *)pppppppcVar6 != '\x01') goto LAB_109d22198;
    pppppppcVar6 = (char *******)&pppppppcStack_80;
    func_0x00010938cf68();
    ppppppcStack_98 = (char ******)0x0;
    pppppcStack_90 = (char *****)0x0;
    uStack_88 = 0x8000000000000000;
    pppppppcStack_a0 = pppppppcVar6;
    if (*(char *)pppppppcVar6 == '\x01') {
      ppppppcVar5 = pppppppcVar6[1];
      FUN_109d21b74(ppppppcVar5,&uStack_60);
      ppppppcStack_98 = ppppppcVar5;
    }
    else if (*(char *)pppppppcVar6 == '\x02') {
      pppppcStack_90 = pppppppcVar6[1][1];
    }
    else {
      uStack_88 = 1;
    }
    pppppppcVar6 = (char *******)&pppppppcStack_80;
    func_0x00010938cf68();
    ppppppcStack_b8 = (char ******)0x0;
    pppppcStack_b0 = (char *****)0x0;
    uStack_a8 = 0x8000000000000000;
    if (*(char *)pppppppcVar6 == '\x02') {
      pppppcStack_b0 = pppppppcVar6[1][1];
    }
    else if (*(char *)pppppppcVar6 == '\x01') {
      ppppppcStack_b8 = pppppppcVar6[1] + 1;
    }
    else {
      uStack_a8 = 1;
    }
    pppppppcVar7 = (char *******)&pppppppcStack_a0;
    pppppppcStack_c0 = pppppppcVar6;
    func_0x00010937c708(pppppppcVar7,&pppppppcStack_c0);
    if (((ulong)pppppppcVar7 & 1) != 0) goto LAB_109d22198;
    pppppppcVar6 = (char *******)&pppppppcStack_a0;
    func_0x00010938cf68();
    if (*(char *)pppppppcVar6 != '\x03') goto LAB_109d22198;
    func_0x00010938cf68(&pppppppcStack_a0);
    func_0x00010937c804(&uStack_e0);
    cStack_c8 = '\x01';
    uVar1 = uStack_d8;
    puVar8 = (undefined1 *)CONCAT71(uStack_df,uStack_e0);
    if (-1 < (char)bStack_c9) {
      uVar1 = (ulong)bStack_c9;
      puVar8 = &uStack_e0;
    }
    (*param_7)(puVar8,uVar1);
    if ((int)puVar8 == 0) {
      if ((char ******)0x7ffffffffffffff7 < param_4) goto LAB_109d2233c;
      if (param_4 < (char ******)0x17) {
        uStack_70 = CONCAT17((char)param_4,(undefined7)uStack_70);
        pppppppcVar7 = (char *******)&pppppppcStack_80;
        if (param_4 != (char ******)0x0) goto LAB_109d22290;
      }
      else {
        pppppppcVar6 = (char *******)0x19;
        if (((ulong)param_4 | 7) != 0x17) {
          pppppppcVar6 = (char *******)(((ulong)param_4 | 7) + 1);
        }
        pppppppcVar7 = pppppppcVar6;
        __Znwm();
        uStack_70 = (ulong)pppppppcVar6 | 0x8000000000000000;
        pppppppcStack_80 = pppppppcVar7;
        ppppppcStack_78 = param_4;
LAB_109d22290:
        _memmove(pppppppcVar7,param_3,param_4);
      }
      *(char *)((long)pppppppcVar7 + (long)param_4) = '\0';
      pppppppcVar6 = pppppppcStack_80;
      if (-1 < (long)uStack_70) {
        pppppppcVar6 = (char *******)&pppppppcStack_80;
      }
      FUN_10ae030a0(0,pppppppcVar6);
      FUN_10ae030a0();
      ppuVar10 = &PTR_PTR_1132fed80;
      FUN_10ae079a0();
      FUN_10ae030d8();
      FUN_10ae030d8();
      FUN_10ae07cd4(ppuVar10,&PTR_PTR_1132fed80);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppppcStack_80);
      }
      goto LAB_109d221a0;
    }
    if ((char)bStack_c9 < '\0') {
      func_0x000107c3192c(param_1,CONCAT71(uStack_df,uStack_e0),uStack_d8);
      bVar3 = false;
    }
    else {
      bVar3 = false;
      param_1[1] = uStack_d8;
      *param_1 = CONCAT71(uStack_df,uStack_e0);
      param_1[2] = CONCAT17(bStack_c9,uStack_d0);
    }
  }
  else {
LAB_109d22198:
    uStack_e0 = 0;
    cStack_c8 = '\0';
LAB_109d221a0:
    bVar3 = true;
  }
  if ((cStack_c8 == '\x01') && ((char)bStack_c9 < '\0')) {
    __ZdlPv(CONCAT71(uStack_df,uStack_e0));
  }
  if (!bVar3) {
    return;
  }
  if (0x7ffffffffffffff7 < param_6) {
    func_0x000104c4f6b8();
LAB_109d2233c:
    func_0x000104c4f6b8();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109d22344);
    (*pcVar4)();
  }
  if (param_6 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_6;
    puVar9 = param_1;
    if (param_6 == 0) goto LAB_109d22220;
  }
  else {
    puVar2 = (ulong *)0x19;
    if ((param_6 | 7) != 0x17) {
      puVar2 = (ulong *)((param_6 | 7) + 1);
    }
    puVar9 = puVar2;
    __Znwm();
    param_1[1] = param_6;
    param_1[2] = (ulong)puVar2 | 0x8000000000000000;
    *param_1 = (ulong)puVar9;
  }
  _memmove(puVar9,param_5,param_6);
  param_1 = puVar9;
LAB_109d22220:
  *(undefined1 *)((long)param_1 + param_6) = 0;
  return;
}



/* Entry: 109d22370; end: 109d22437;  */

undefined8 FUN_109d22370(void)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_21;
  
  if ((bRam00000001138335a0 & 1) == 0) {
    puVar1 = (undefined8 *)0x1138335a0;
    ___cxa_guard_acquire();
    if ((int)puVar1 != 0) {
      FUN_109d1a80c();
      FUN_109d2276c(&uStack_40,&uStack_21,&UNK_10f5acb12,&UNK_10e0416ec,*puVar1);
      uRam0000000113833598 = uStack_38;
      uRam0000000113833590 = uStack_40;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001092b3360(&uStack_40);
      ___cxa_atexit(FUN_109d1dc18,0x113833590,0x100000000);
      ___cxa_guard_release(0x1138335a0);
    }
  }
  return 0x113833590;
}



/* Entry: 109d22438; end: 109d224ff;  */

undefined8 FUN_109d22438(void)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_21;
  
  if ((bRam00000001138335c0 & 1) == 0) {
    puVar1 = (undefined8 *)0x1138335c0;
    ___cxa_guard_acquire();
    if ((int)puVar1 != 0) {
      FUN_109d1a80c();
      FUN_109d229ac(&uStack_40,&uStack_21,&UNK_10f5acb21,&UNK_10e0416f0,*puVar1);
      uRam00000001138335b8 = uStack_38;
      uRam00000001138335b0 = uStack_40;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001092b3360(&uStack_40);
      ___cxa_atexit(FUN_109d1dc18,0x1138335b0,0x100000000);
      ___cxa_guard_release(0x1138335c0);
    }
  }
  return 0x1138335b0;
}



/* Entry: 109d22500; end: 109d225ab;  */

undefined8 FUN_109d22500(void)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam00000001138335e0 & 1) == 0) {
    iVar1 = 0x138335e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_109d225ac(&uStack_30);
      uRam00000001138335d8 = uStack_28;
      uRam00000001138335d0 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_109d22710(&uStack_30);
      ___cxa_atexit(FUN_109d22768,0x1138335d0,0x100000000);
      ___cxa_guard_release(0x1138335e0);
    }
  }
  return 0x1138335d0;
}



/* Entry: 109d225ac; end: 109d2270f;  */

void FUN_109d225ac(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = (undefined8 *)0x48;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110b3f5a0;
  puVar6[3] = &PTR_DAT_110b3f5f0;
  *(undefined1 *)(puVar6 + 4) = 0;
  FUN_109d22370();
  lVar5 = lRam0000000113833598;
  uVar4 = uRam0000000113833590;
  if (lRam0000000113833598 != 0) {
    plVar1 = (long *)(lRam0000000113833598 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar7 = (undefined8 *)0x30;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = uVar4;
  *puVar7 = &PTR_FUN_110b3f650;
  puVar7[4] = lVar5;
  *(undefined2 *)(puVar7 + 5) = 0;
  puVar6[5] = puVar7 + 3;
  puVar6[6] = puVar7;
  FUN_109d22438();
  lVar5 = lRam00000001138335b8;
  uVar4 = uRam00000001138335b0;
  if (lRam00000001138335b8 != 0) {
    plVar1 = (long *)(lRam00000001138335b8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar7 = (undefined8 *)0x28;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = uVar4;
  *puVar7 = &PTR_DAT_110b3f6a0;
  puVar7[4] = lVar5;
  puVar6[7] = puVar7 + 3;
  puVar6[8] = puVar7;
  *param_1 = puVar6 + 3;
  param_1[1] = puVar6;
  return;
}



/* Entry: 109d22710; end: 109d22767;  */

long FUN_109d22710(long param_1)

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



/* Entry: 109d22768; end: 109d2276b;  */

long FUN_109d22768(long param_1)

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



/* Entry: 109d2276c; end: 109d227db;  */

void FUN_109d2276c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xd0;
  __Znwm();
  FUN_109d227dc();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109d227dc; end: 109d22823;  */

undefined8 * FUN_109d227dc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ae90f0;
  FUN_109d22824(param_1 + 3);
  return param_1;
}



/* Entry: 109d22824; end: 109d228cb;  */

undefined1 * FUN_109d22824(undefined1 *param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long *extraout_x8;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  long lStack_c8;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_38;
  
  puVar9 = &uStack_80;
  puVar2 = &uStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_2;
  _strlen();
  lVar8 = (long)*param_3;
  puStack_78 = &UNK_1053a6a3c;
  ppuStack_70 = &PTR_DAT_110ae9180;
  uStack_80 = param_4;
  FUN_109d228cc(param_1);
  func_0x0001092ba41c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined8 *)0x158;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar4 = puVar3 + 3;
  *puVar3 = &PTR_FUN_110b3f488;
  FUN_109d2079c(puVar4,lVar8,puVar9);
  puStack_108 = &UNK_109896774;
  ppuStack_100 = &PTR_DAT_110b17068;
  puStack_110 = puVar4;
  puStack_f8 = puVar4;
  puStack_f0 = puVar3;
  func_0x000109d18d1c(puVar2,param_2,uVar1,&puStack_110);
  iVar7 = (int)param_2;
  func_0x0001092ba41c(&puStack_110);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return (undefined1 *)puVar2;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  puVar5 = (undefined1 *)0xd0;
  __Znwm();
  puVar6 = puVar5;
  FUN_109d22a1c();
  *extraout_x8 = (long)(puVar5 + 0x18);
  extraout_x8[1] = (long)puVar5;
  return puVar6;
}



/* Entry: 109d228cc; end: 109d229ab;  */

long FUN_109d228cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long *extraout_x8;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)0x158;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110b3f488;
  FUN_109d2079c(puVar2,param_4,param_5);
  puStack_88 = &UNK_109896774;
  ppuStack_80 = &PTR_DAT_110b17068;
  puStack_90 = puVar2;
  puStack_78 = puVar2;
  puStack_70 = puVar1;
  func_0x000109d18d1c(param_1,param_2,param_3,&puStack_90);
  iVar5 = (int)param_2;
  func_0x0001092ba41c(&puStack_90);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lVar3 = 0xd0;
  __Znwm();
  lVar4 = lVar3;
  FUN_109d22a1c();
  *extraout_x8 = lVar3 + 0x18;
  extraout_x8[1] = lVar3;
  return lVar4;
}



/* Entry: 109d229ac; end: 109d22a1b;  */

void FUN_109d229ac(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xd0;
  __Znwm();
  FUN_109d22a1c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109d22a1c; end: 109d22a63;  */

undefined8 * FUN_109d22a1c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ae90f0;
  FUN_109d22a64(param_1 + 3);
  return param_1;
}



/* Entry: 109d22a64; end: 109d22b0b;  */

undefined8 * FUN_109d22a64(undefined8 *param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_38;
  
  puVar2 = &uStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_2;
  _strlen(param_2);
  puStack_78 = &UNK_1053a6a3c;
  ppuStack_70 = &PTR_DAT_110ae9180;
  uStack_80 = param_4;
  FUN_109d228cc(param_1,param_2,uVar1,(long)*param_3,&uStack_80);
  func_0x0001092ba41c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  *puVar2 = &PTR_FUN_110b3f5a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return puVar2;
}



/* Entry: 109d22b0c; end: 109d22b1b;  */

void FUN_109d22b0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f5a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109d22b1c; end: 109d22b3b;  */

void FUN_109d22b1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f5a0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d22b3c; end: 109d22b9b;  */

void FUN_109d22b3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109d22b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 109d22b9c; end: 109d22cbb;  */

void FUN_109d22b9c(undefined4 *param_1)

{
  *(undefined4 *)((long)param_1 + 3) = 0;
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 7) = 0x10001;
  *(undefined4 *)((long)param_1 + 0xb) = 0x1010101;
  *(undefined2 *)((long)param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0x11) = 0;
  func_0x000107c31940(param_1 + 6,"");
  func_0x000107c31940(param_1 + 0xc,"");
  func_0x000107c31940(param_1 + 0x12,&DAT_10f5aca3f);
  func_0x000107c31940(param_1 + 0x18,"Default");
  func_0x000107c31940(param_1 + 0x1e,"default");
  param_1[0x24] = 0xffffffff;
  func_0x000107c31940(param_1 + 0x26,"default");
  return;
}



/* Entry: 109d22cbc; end: 109d22d3b;  */

undefined8 * FUN_109d22cbc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b3f5f0;
  func_0x000109d22e0c(param_1 + 4);
  func_0x000109d22db4(param_1 + 2);
  return param_1;
}



/* Entry: 109d22d3c; end: 109d22d4b;  */

void FUN_109d22d3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f650;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109d22d4c; end: 109d22d6b;  */

void FUN_109d22d4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f650;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d22d6c; end: 109d22d87;  */

long FUN_109d22d6c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x20);
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
  return param_1 + 0x18;
}



/* Entry: 109d22d88; end: 109d22da7;  */

void FUN_109d22d88(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b3f6a0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d22da8; end: 109d22db3;  */

long FUN_109d22da8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x20);
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
  return param_1 + 0x18;
}



/* Entry: 109d22db4; end: 109d22eab;  */

long FUN_109d22db4(long param_1)

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



/* Entry: 109d22eac; end: 109d22f8b;  */

void FUN_109d22eac(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined8 extraout_x8;
  long lVar7;
  long lStack_f0;
  long *plStack_e8;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_1053a6a3c;
  ppuStack_a0 = &PTR_DAT_110ae9180;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  puStack_68 = &UNK_1053a6a3c;
  ppuStack_60 = &PTR_DAT_110ae9180;
  ppuVar6 = &puStack_a8;
  FUN_109d22f8c(*param_1);
  (*(code *)*ppuStack_60)(&ppuStack_60);
  pppuVar5 = &ppuStack_a0;
  (*(code *)*ppuStack_a0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  __Unwind_Resume();
  (**(code **)(*pppuVar5[0x12] + 8))(&lStack_f0);
  if (lStack_f0 != 0) {
    __ZNSt3__15mutex4lockEv(pppuVar5 + 0x14);
    if (ppuVar6[1][8] == '\x01') {
      (*(code *)*ppuVar6)(ppuVar6);
    }
    FUN_109cdb3f0(extraout_x8,pppuVar5 + 2,param_2,1);
    if (ppuVar6[9][8] == '\x01') {
      (*(code *)ppuVar6[8])(ppuVar6 + 8);
    }
    __ZNSt3__15mutex6unlockEv(pppuVar5 + 0x14);
    if (plStack_e8 != (long *)0x0) {
      plVar1 = plStack_e8 + 1;
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
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
      }
    }
    return;
  }
  func_0x000105688514(&UNK_10f5acb2f);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109d23084);
  (*pcVar4)();
}



/* Entry: 109d22f8c; end: 109d230bb;  */

void FUN_109d22f8c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  
  (**(code **)(**(long **)(param_2 + 0x90) + 8))(&lStack_40);
  if (lStack_40 != 0) {
    __ZNSt3__15mutex4lockEv(param_2 + 0xa0);
    if (*(char *)(param_4[1] + 8) == '\x01') {
      (*(code *)*param_4)(param_4);
    }
    FUN_109cdb3f0(param_1,param_2 + 0x10,param_3,1);
    if (*(char *)(param_4[9] + 8) == '\x01') {
      (*(code *)param_4[8])(param_4 + 8);
    }
    __ZNSt3__15mutex6unlockEv(param_2 + 0xa0);
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
    return;
  }
  func_0x000105688514(&UNK_10f5acb2f);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109d23084);
  (*pcVar4)();
}



/* Entry: 109d230bc; end: 109d23567;  */

void FUN_109d230bc(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *extraout_x8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lStack_148;
  long *plStack_140;
  long lStack_138;
  long *plStack_130;
  long *plStack_128;
  long lStack_120;
  code *pcStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_3 == 0) {
    func_0x000105688514(&UNK_10f5acb5a);
LAB_109d234ec:
    puVar7 = &UNK_10f5acb2f;
  }
  else {
    (**(code **)(*(long *)param_2[0x12] + 8))(&plStack_130);
    if (plStack_130 == (long *)0x0) goto LAB_109d234ec;
    if (*plStack_130 != 0) {
      FUN_109d23568(&plStack_140);
      puVar11 = (undefined8 *)*plStack_130;
      lStack_f8 = param_2[1];
      uStack_100 = *param_2;
      if (param_2[1] != 0) {
        plVar12 = (long *)(param_2[1] + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_148 = lStack_138;
      if (lStack_138 != 0) {
        plVar12 = (long *)(lStack_138 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 0x200000000;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_f0 = *param_4;
      (**(code **)(param_4[1] + 0x10))(apuStack_e8);
      uStack_b0 = param_4[8];
      (**(code **)(param_4[9] + 0x10))(apuStack_a8,param_4 + 9);
      plStack_68 = (long *)param_3[1];
      lStack_70 = *param_3;
      if (param_3[1] != 0) {
        plVar12 = (long *)(param_3[1] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_60 = lStack_148;
      if (lStack_148 != 0) {
        plVar12 = (long *)(lStack_148 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 0x200000000;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar12 = (long *)puVar11[2];
      puStack_108 = puVar11;
      if (plVar12 == (long *)0x0) {
        puVar6 = (undefined8 *)0xb8;
        __Znwm();
        puVar6[1] = lStack_f8;
        *puVar6 = uStack_100;
        uStack_100 = 0;
        lStack_f8 = 0;
        puVar6[2] = uStack_f0;
        (*(code *)apuStack_e8[0][2])(puVar6 + 3,apuStack_e8);
        puVar6[10] = uStack_b0;
        (*(code *)apuStack_a8[0][2])(puVar6 + 0xb,apuStack_a8);
        puVar6[0x13] = plStack_68;
        puVar6[0x12] = lStack_70;
        lStack_70 = 0;
        plStack_68 = (long *)0x0;
        puVar6[0x14] = lStack_60;
        puVar6[0x16] = 0x109d23df8;
        lStack_60 = 0;
        pcStack_118 = FUN_109d23b58;
        puStack_110 = puVar6;
        (**(code **)*puVar11)(puVar11,&pcStack_118);
LAB_109d23360:
        lStack_120 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_120);
        if (lStack_60 != 0) {
          func_0x0001092b4274(&lStack_60);
        }
        plVar12 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 1;
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
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        (*(code *)*apuStack_a8[0])(apuStack_a8);
        (*(code *)*apuStack_e8[0])(apuStack_e8);
        if (lStack_f8 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (lStack_148 != 0) {
          func_0x0001092b4274(&lStack_148);
        }
        *param_1 = plStack_140;
        if (plStack_140 != (long *)0x0) {
          plVar12 = plStack_140 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = *plVar12 + 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (lStack_138 != 0) {
          func_0x0001092b4274(&lStack_138);
        }
        iVar8 = (int)lStack_138;
        if (plStack_140 != (long *)0x0) {
          puVar2 = (ulong *)(plStack_140 + 1);
          do {
            uVar10 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar10 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar10 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plStack_140 + 8))();
            }
          }
        }
        plVar12 = plStack_140;
        if (plStack_128 != (long *)0x0) {
          plVar1 = plStack_128 + 1;
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
            (**(code **)(*plStack_128 + 0x10))(plStack_128);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            plVar12 = plStack_128;
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          return;
        }
        ___stack_chk_fail();
        if (iVar8 != 0) {
          func_0x000104bd46a0();
        }
        __Unwind_Resume(plVar12);
        puVar11 = (undefined8 *)0xc8;
        __Znwm();
        *(undefined2 *)(puVar11 + 3) = 4;
        puVar11[2] = 0;
        puVar11[1] = 0x200000006;
        puVar11[5] = 0;
        puVar11[4] = 0;
        puVar11[7] = 0;
        puVar11[6] = 0;
        puVar11[9] = 0;
        puVar11[8] = 0;
        puVar11[0xb] = 0;
        puVar11[10] = 0;
        puVar11[0xd] = 0;
        puVar11[0xc] = 0;
        puVar11[0xf] = 0;
        puVar11[0xe] = 0;
        puVar11[0x10] = 0;
        puVar11[0x11] = puVar11 + 3;
        puVar11[0x12] = 0;
        *puVar11 = &PTR_DAT_110b3f740;
        *(undefined1 *)(puVar11 + 0x13) = 0;
        *(undefined1 *)(puVar11 + 0x18) = 0;
        *extraout_x8 = puVar11;
        extraout_x8[1] = puVar11;
        return;
      }
      lStack_120 = 0;
      (**(code **)(*plVar12 + 0x28))(plVar12,0,&lStack_120);
      if (lStack_120 == 0) {
        puVar6 = (undefined8 *)0xc0;
        __Znwm();
        puVar6[1] = lStack_f8;
        *puVar6 = uStack_100;
        uStack_100 = 0;
        lStack_f8 = 0;
        puVar6[2] = uStack_f0;
        (*(code *)apuStack_e8[0][2])(puVar6 + 3,apuStack_e8);
        puVar6[10] = uStack_b0;
        (*(code *)apuStack_a8[0][2])(puVar6 + 0xb,apuStack_a8);
        puVar6[0x13] = plStack_68;
        puVar6[0x12] = lStack_70;
        lStack_70 = 0;
        plStack_68 = (long *)0x0;
        puVar6[0x14] = lStack_60;
        lStack_60 = 0;
        puVar6[0x16] = FUN_109d23d8c;
        puVar6[0x17] = plVar12;
        pcStack_118 = (code *)0x109d23b28;
        puStack_110 = puVar6;
        (**(code **)*puVar11)(puVar11,&pcStack_118);
        __ZNSt13exception_ptrD1Ev(&lStack_120);
        goto LAB_109d23360;
      }
      func_0x0001092af97c(&lStack_120);
      goto LAB_109d23504;
    }
    puVar7 = &UNK_10f5acb72;
  }
  func_0x000105688514(puVar7);
LAB_109d23504:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109d23508);
  (*pcVar5)();
}



/* Entry: 109d23568; end: 109d235d7;  */

void FUN_109d23568(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xc8;
  __Znwm();
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110b3f740;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  return;
}



/* Entry: 109d235d8; end: 109d236af;  */

long FUN_109d235d8(long param_1)

{
  if (*(long *)(param_1 + 0xa0) != 0) {
    func_0x0001092b4274();
  }
  FUN_109d2372c(param_1 + 0x90);
  (*(code *)**(undefined8 **)(param_1 + 0x58))();
  (*(code *)**(undefined8 **)(param_1 + 0x18))((undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109d236b0; end: 109d2372b;  */

void FUN_109d236b0(undefined8 *param_1)

{
  undefined **appuStack_48 [2];
  undefined1 auStack_38 [8];
  undefined **appuStack_30 [2];
  
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (appuStack_48);
  appuStack_48[0] = &PTR_DAT_1108a6410;
  __ZNSt13runtime_errorC2ERKS_(appuStack_30,appuStack_48);
  appuStack_30[0] = &PTR_DAT_1108a6410;
  FUN_109d23e64(auStack_38,appuStack_30);
  __ZNSt13runtime_errorD2Ev(appuStack_30);
  func_0x000109d1b350(*param_1,auStack_38);
  __ZNSt13exception_ptrD1Ev(auStack_38);
  __ZNSt13runtime_errorD2Ev(appuStack_48);
  return;
}



/* Entry: 109d2372c; end: 109d23783;  */

long FUN_109d2372c(long param_1)

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



/* Entry: 109d23784; end: 109d237eb;  */

void FUN_109d23784(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = 0xf8;
  __Znwm();
  FUN_109d237ec();
  lVar6 = lVar4 + 0x18;
  *param_1 = lVar6;
  param_1[1] = lVar4;
  if ((lVar6 != 0) &&
     ((lVar5 = *(long *)(lVar4 + 0x20), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(lVar4 + 0x20);
    }
    *(long *)lVar6 = lVar6;
    *(long **)(lVar4 + 0x20) = plVar7;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 109d237ec; end: 109d23833;  */

undefined8 * FUN_109d237ec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b3f6f0;
  FUN_109d238ac(param_1 + 3);
  return param_1;
}



/* Entry: 109d23834; end: 109d23843;  */

void FUN_109d23834(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f6f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109d23844; end: 109d23863;  */

void FUN_109d23844(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f6f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d23864; end: 109d238ab;  */

void FUN_109d23864(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0xb8);
  func_0x000109a1921c(param_1 + 0xa8);
  FUN_109cda590(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 109d238ac; end: 109d2396b;  */

void FUN_109d238ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d2396c; end: 109d23b57;  */

void FUN_109d2396c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
  }
  return;
}



/* Entry: 109d23b58; end: 109d23d8b;  */

void FUN_109d23b58(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **appuStack_88 [3];
  undefined **appuStack_70 [5];
  long lStack_48;
  long *plStack_40;
  undefined1 auStack_38 [8];
  
  lStack_48 = 0;
  plStack_40 = (long *)0x0;
  plVar4 = (long *)param_1[1];
  if (((plVar4 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_40 = plVar4, plVar4 == (long *)0x0)) ||
     (lVar5 = *param_1, lStack_48 = lVar5, lVar5 == 0)) {
    plVar4 = plStack_40;
    __ZNSt13runtime_errorC2EPKc(appuStack_88,&UNK_10f5acbb1);
    appuStack_88[0] = &PTR_DAT_1108a6410;
    __ZNSt13runtime_errorC2ERKS_(appuStack_70,appuStack_88);
    appuStack_70[0] = &PTR_DAT_1108a6410;
    FUN_109d23e64(auStack_38,appuStack_70);
    __ZNSt13runtime_errorD2Ev(appuStack_70);
    func_0x000109d1b350(param_1[0x14],auStack_38);
    __ZNSt13exception_ptrD1Ev(auStack_38);
    __ZNSt13runtime_errorD2Ev(appuStack_88);
    if (plVar4 == (long *)0x0) goto LAB_109d23ca0;
  }
  else {
    __ZNSt3__15mutex4lockEv(lVar5 + 0xa0);
    if (*(char *)(param_1[3] + 8) == '\x01') {
      (*(code *)param_1[2])();
    }
    FUN_109cdb3f0(appuStack_70,lVar5 + 0x10,param_1[0x12],1);
    FUN_109d23ecc(param_1[0x14],appuStack_70);
    func_0x000109379fe8(appuStack_70);
    if (*(char *)(param_1[0xb] + 8) == '\x01') {
      (*(code *)param_1[10])();
    }
    __ZNSt3__15mutex6unlockEv(lVar5 + 0xa0);
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
LAB_109d23ca0:
  (*(code *)param_1[0x16])(param_1);
  return;
}



/* Entry: 109d23d8c; end: 109d23e63;  */

void FUN_109d23d8c(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0xa0) != 0) {
      func_0x0001092b4274();
    }
    FUN_109d2372c(param_1 + 0x90);
    (*(code *)**(undefined8 **)(param_1 + 0x58))();
    (*(code *)**(undefined8 **)(param_1 + 0x18))((undefined8 *)(param_1 + 0x18));
    if (*(long *)(param_1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 109d23e64; end: 109d23ecb;  */

void FUN_109d23e64(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC2ERKS_();
  *puVar2 = &PTR_DAT_1108a6410;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d23eac);
  (*pcVar1)();
}



/* Entry: 109d23ecc; end: 109d23f6f;  */

undefined1 FUN_109d23ecc(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(param_1 + 0xc0) == '\x01') {
          func_0x000109379fe8(param_1 + 0x98);
          *(undefined1 *)(param_1 + 0xc0) = 0;
        }
        func_0x000109519ddc(param_1 + 0x98,param_2);
        *(undefined1 *)(param_1 + 0xc0) = 1;
        *(undefined8 *)(param_1 + 0x10) = 2;
        FUN_109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 109d23f70; end: 109d25d67;  */

void FUN_109d23f70(long *param_1,long *param_2)

{
  long **pplVar1;
  ulong *puVar2;
  long *plVar3;
  int *piVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long *plVar18;
  long *plVar19;
  long ***ppplVar20;
  ulong uVar21;
  undefined *puVar22;
  long lVar23;
  undefined8 *puVar24;
  long *plVar25;
  long lVar26;
  long *plStack_370;
  long *plStack_368;
  undefined8 *puStack_360;
  long *plStack_358;
  undefined *apuStack_350 [2];
  undefined8 uStack_340;
  long *plStack_338;
  long lStack_330;
  long *plStack_328;
  long *plStack_318;
  long lStack_310;
  long *plStack_308;
  undefined8 *puStack_300;
  long *plStack_2f8;
  undefined *puStack_2f0;
  long *plStack_2e8;
  long **pplStack_2e0;
  undefined **ppuStack_2d8;
  long lStack_2d0;
  long *plStack_2c8;
  long alStack_2c0 [4];
  long *plStack_2a0;
  undefined **ppuStack_298;
  long **pplStack_290;
  long *plStack_288;
  long alStack_280 [2];
  undefined8 uStack_270;
  char cStack_259;
  undefined8 uStack_258;
  long **pplStack_250;
  undefined7 uStack_248;
  char cStack_241;
  long lStack_240;
  long lStack_238;
  long lStack_228;
  long lStack_220;
  undefined8 *puStack_210;
  long *plStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  long *aplStack_1e0 [3];
  undefined8 uStack_1c8;
  char cStack_1b1;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined7 uStack_1a0;
  char cStack_199;
  long lStack_198;
  long lStack_190;
  long lStack_180;
  long lStack_178;
  long lStack_168;
  long *plStack_160;
  undefined2 uStack_158;
  long *plStack_150;
  long lStack_148;
  undefined8 *apuStack_140 [7];
  long lStack_108;
  undefined8 *apuStack_100 [7];
  long lStack_c8;
  long lStack_c0;
  long **pplStack_b8;
  undefined **ppuStack_b0;
  undefined8 *puStack_a8;
  long *plStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar26 = *param_2;
  if (lVar26 == 0) {
    func_0x000105688514(&UNK_10f5acc08);
LAB_109d257c4:
    func_0x000105688514(&UNK_10f5acc2c);
  }
  else {
    plVar19 = param_2 + 10;
    if ((undefined8 *)*plVar19 == (undefined8 *)0x0) goto LAB_109d257c4;
    (*(code *)**(undefined8 **)*plVar19)(&plStack_370);
    if (plStack_370 != (long *)0x0) {
      FUN_109d25d68();
      lVar9 = lRam00000001137e1da8;
      plVar8 = plRam00000001137e1d98;
      __ZNSt3__115recursive_mutex4lockEv(plRam00000001137e1d98 + 7);
      uVar21 = lVar9 + 0x10;
      __ZNSt3__115recursive_mutex8try_lockEv();
      if ((uVar21 & 1) == 0) {
        do {
          __ZNSt3__115recursive_mutex6unlockEv(plVar8 + 7);
          _sched_yield();
          __ZNSt3__115recursive_mutex4lockEv(lVar9 + 0x10);
          plVar25 = plVar8 + 7;
          __ZNSt3__115recursive_mutex8try_lockEv();
          if (((ulong)plVar25 & 1) != 0) break;
          __ZNSt3__115recursive_mutex6unlockEv(lVar9 + 0x10);
          _sched_yield();
          __ZNSt3__115recursive_mutex4lockEv(plVar8 + 7);
          iVar12 = (int)lVar9 + 0x10;
          __ZNSt3__115recursive_mutex8try_lockEv();
        } while (iVar12 == 0);
      }
      FUN_109d26668(param_1,plRam00000001137e1d98,lVar26);
      if (*param_1 == 0) {
        func_0x000109a1aa04(param_1);
        FUN_109d26a54(&pplStack_b8,lRam00000001137e1da8,lVar26);
        ppuVar16 = ppuStack_b0;
        if (pplStack_b8 != (long **)0x0) {
          FUN_109d26db8(&plStack_2a0);
          lVar26 = alStack_280[0];
          FUN_109d2711c(alStack_280[0],&pplStack_b8);
          *param_1 = (long)plStack_2a0;
          param_1[1] = (long)ppuStack_298;
          plVar19 = plStack_2a0;
          if (ppuStack_298 != (undefined **)0x0) {
            ppuVar16 = ppuStack_298 + 1;
            do {
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
              if (bVar11) {
                *ppuVar16 = *ppuVar16 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            plVar19 = (long *)*param_1;
          }
          if (plVar19 != (long *)0x0) {
            plVar19 = plVar19 + 3;
            do {
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar11) {
                *(int *)plVar19 = (int)*plVar19 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              lVar26 = alStack_280[0];
            } while (cVar6 != '\0');
          }
          if (lVar26 != 0) {
            func_0x0001092b4274(alStack_280,lVar26);
          }
          if (plStack_288 != (long *)0x0) {
            plVar19 = plStack_288 + 1;
            do {
              lVar26 = *plVar19;
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar11) {
                *plVar19 = lVar26 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar26 == 0) {
              (**(code **)(*plStack_288 + 0x10))(plStack_288);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_288);
            }
          }
          ppuVar16 = ppuStack_298;
          if (plStack_2a0 != (long *)0x0) {
            plVar19 = plStack_2a0 + 3;
            do {
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar11) {
                *(int *)plVar19 = (int)*plVar19 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          if (ppuStack_298 != (undefined **)0x0) {
            ppuVar17 = ppuStack_298 + 1;
            do {
              puVar22 = *ppuVar17;
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
              if (bVar11) {
                *ppuVar17 = puVar22 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (puVar22 == (undefined *)0x0) {
              (**(code **)(*ppuStack_298 + 0x10))(ppuStack_298);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar16);
            }
          }
          ppuVar16 = ppuStack_b0;
          if (ppuStack_b0 != (undefined **)0x0) {
            ppuVar17 = ppuStack_b0 + 1;
            do {
              puVar22 = *ppuVar17;
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
              if (bVar11) {
                *ppuVar17 = puVar22 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (puVar22 == (undefined *)0x0) {
              (**(code **)(*ppuStack_b0 + 0x10))(ppuStack_b0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar16);
            }
          }
          goto LAB_109d24058;
        }
        if (ppuStack_b0 != (undefined **)0x0) {
          ppuVar17 = ppuStack_b0 + 1;
          do {
            puVar22 = *ppuVar17;
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
            if (bVar11) {
              *ppuVar17 = puVar22 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (puVar22 == (undefined *)0x0) {
            (**(code **)(*ppuStack_b0 + 0x10))(ppuStack_b0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar16);
          }
        }
        plVar25 = plStack_370;
        cVar6 = '\0';
        if (*(char *)((long)param_2 + 0x62) == '\0') {
          cVar6 = *(char *)((long)param_2 + 0x61) + '\x01';
        }
        if ((char)param_2[0xc] != '\x01') {
          FUN_109d25e00(&pplStack_b8,lVar26,param_2 + 2,plVar19,cVar6,param_2 + 0xd);
          FUN_109d26db8(&pplStack_2e0);
          plStack_2a0 = (long *)0x109d2acb4;
          ppuStack_298 = &PTR_DAT_110b3f998;
          pplStack_290 = (long **)FUN_109d2acac;
          (*(code *)pplStack_b8)(&lStack_310,&plStack_2a0,&pplStack_b8);
          (*(code *)*ppuStack_298)(&ppuStack_298);
          FUN_109d2711c(alStack_2c0[0],&lStack_310);
          if (plStack_308 != (long *)0x0) {
            plVar19 = plStack_308 + 1;
            do {
              lVar26 = *plVar19;
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar11) {
                *plVar19 = lVar26 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar26 == 0) {
              (**(code **)(*plStack_308 + 0x10))(plStack_308);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_308);
            }
          }
          *param_1 = (long)pplStack_2e0;
          param_1[1] = (long)ppuStack_2d8;
          if (ppuStack_2d8 != (undefined **)0x0) {
            ppuVar16 = ppuStack_2d8 + 1;
            do {
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
              if (bVar11) {
                *ppuVar16 = *ppuVar16 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          if (pplStack_2e0 != (long **)0x0) {
            pplVar1 = pplStack_2e0 + 3;
            do {
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
              if (bVar11) {
                *(int *)pplVar1 = *(int *)pplVar1 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          if (alStack_2c0[0] != 0) {
            func_0x0001092b4274(alStack_2c0);
          }
          if (plStack_2c8 != (long *)0x0) {
            plVar19 = plStack_2c8 + 1;
            do {
              lVar26 = *plVar19;
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar11) {
                *plVar19 = lVar26 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar26 == 0) {
              (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2c8);
            }
          }
          ppuVar16 = ppuStack_2d8;
          if (pplStack_2e0 != (long **)0x0) {
            pplVar1 = pplStack_2e0 + 3;
            do {
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
              if (bVar11) {
                *(int *)pplVar1 = *(int *)pplVar1 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          if (ppuStack_2d8 != (undefined **)0x0) {
            ppuVar17 = ppuStack_2d8 + 1;
            do {
              puVar22 = *ppuVar17;
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
              if (bVar11) {
                *ppuVar17 = puVar22 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (puVar22 == (undefined *)0x0) {
              (**(code **)(*ppuStack_2d8 + 0x10))(ppuStack_2d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar16);
            }
          }
          ppplVar20 = &pplStack_b8;
          ppuVar16 = ppuStack_b0;
LAB_109d244e8:
          (*(code *)*ppuVar16)(ppplVar20 + 1);
          goto LAB_109d24058;
        }
        lVar13 = *plStack_370;
        if (lVar13 != 0) {
          if ((char)plStack_370[2] == '\x01') {
            plStack_318 = (long *)0x0;
            ___dynamic_cast(lVar13,&PTR_DAT_110b3eb60,&PTR_DAT_110b3ec30,0);
            if (lVar13 == 0) {
              uVar5 = *(undefined1 *)((long)plVar25 + 0x11);
              plStack_150 = (long *)0x0;
            }
            else {
              FUN_109d19404(&plStack_318,lVar13 + 0x38);
              uVar5 = *(undefined1 *)((long)plStack_370 + 0x11);
              plStack_150 = plStack_318;
              if (plStack_318 != (long *)0x0) {
                plVar19 = plStack_318 + 1;
                do {
                  cVar7 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar11) {
                    *plVar19 = *plVar19 + 4;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
            }
            FUN_109d27278(&plStack_2a0,lVar26);
            lStack_1a8 = param_2[2];
            (**(code **)(param_2[3] + 0x10))(&uStack_1a0,param_2 + 3);
            plStack_160 = (long *)param_2[0xb];
            lStack_168 = param_2[10];
            if (param_2[0xb] != 0) {
              plVar19 = (long *)(param_2[0xb] + 8);
              do {
                cVar7 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar11) {
                  *plVar19 = *plVar19 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            uStack_158 = CONCAT11(uVar5,cVar6);
            lStack_148 = param_2[0xd];
            (**(code **)(param_2[0xe] + 0x10))(apuStack_140);
            lStack_108 = param_2[0x15];
            (**(code **)(param_2[0x16] + 0x10))(apuStack_100,param_2 + 0x16);
            lStack_c0 = param_2[0x1e];
            lStack_c8 = param_2[0x1d];
            param_2[0x1d] = 0;
            param_2[0x1e] = 0;
            pplStack_2e0 = (long **)FUN_109d2746c;
            ppuStack_2d8 = &PTR_FUN_110b3f928;
            lVar13 = 0x1e8;
            __Znwm();
            FUN_109d27278();
            *(long *)(lVar13 + 0xf8) = lStack_1a8;
            (**(code **)(CONCAT17(cStack_199,uStack_1a0) + 0x10))(lVar13 + 0x100,&uStack_1a0);
            plVar19 = plStack_150;
            *(long *)(lVar13 + 0x138) = lStack_168;
            *(long **)(lVar13 + 0x140) = plStack_160;
            if (plStack_160 != (long *)0x0) {
              plVar25 = plStack_160 + 1;
              do {
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar11) {
                  *plVar25 = *plVar25 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            *(undefined2 *)(lVar13 + 0x148) = uStack_158;
            plStack_150 = (long *)0x0;
            *(long **)(lVar13 + 0x150) = plVar19;
            *(long *)(lVar13 + 0x158) = lStack_148;
            (*(code *)apuStack_140[0][2])(lVar13 + 0x160,apuStack_140);
            *(long *)(lVar13 + 0x198) = lStack_108;
            (*(code *)apuStack_100[0][2])(lVar13 + 0x1a0,apuStack_100);
            *(long *)(lVar13 + 0x1e0) = lStack_c0;
            *(long *)(lVar13 + 0x1d8) = lStack_c8;
            lStack_c8 = 0;
            lStack_c0 = 0;
            lStack_2d0 = lVar13;
            (*(code *)*apuStack_100[0])(apuStack_100);
            (*(code *)*apuStack_140[0])(apuStack_140);
            plVar19 = plStack_150;
            if (plStack_150 != (long *)0x0) {
              puVar2 = (ulong *)(plStack_150 + 1);
              do {
                uVar21 = *puVar2;
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar11) {
                  *puVar2 = uVar21 - 4;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if ((uVar21 & 0x1fffffffc) == 4) {
                (**(code **)(*plStack_150 + 0x10))(plStack_150);
                do {
                  uVar21 = *puVar2;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar11) {
                    *puVar2 = uVar21 - 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (uVar21 - 1 == 0) {
                  (**(code **)(*plVar19 + 8))(plVar19);
                }
              }
            }
            plVar19 = plStack_160;
            if (plStack_160 != (long *)0x0) {
              plVar25 = plStack_160 + 1;
              do {
                lVar13 = *plVar25;
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar11) {
                  *plVar25 = lVar13 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar13 == 0) {
                (**(code **)(*plStack_160 + 0x10))(plStack_160);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
              }
            }
            (**(code **)CONCAT17(cStack_199,uStack_1a0))(&uStack_1a0);
            if (uStack_1f8._7_1_ < '\0') {
              __ZdlPv(plStack_208);
            }
            if (lStack_228 != 0) {
              lStack_220 = lStack_228;
              __ZdlPv();
            }
            if (lStack_240 != 0) {
              lStack_238 = lStack_240;
              __ZdlPv();
            }
            if (cStack_241 < '\0') {
              __ZdlPv(uStack_258);
            }
            if (cStack_259 < '\0') {
              __ZdlPv(uStack_270);
            }
            pplStack_b8 = &plStack_288;
            func_0x000109378cec(&pplStack_b8);
            pplStack_b8 = &plStack_2a0;
            func_0x000109378cec(&pplStack_b8);
            plVar19 = plRam00000001137e1d98;
            puVar22 = (undefined *)*plStack_370;
            __ZNSt3__115recursive_mutex4lockEv(plRam00000001137e1d98 + 7);
            FUN_109d26668(param_1,plVar19,lVar26);
            if (*param_1 == 0) {
              func_0x000109a1aa04(param_1);
              FUN_109d26db8(&lStack_310);
              plStack_2e8 = (long *)0x0;
              puVar15 = puVar22;
              ___dynamic_cast(puVar22,&PTR_DAT_110b3eb60,&PTR_DAT_110b3ec30,0);
              if (puVar15 != (undefined *)0x0) {
                FUN_109d19404(&plStack_2e8,puVar15 + 0x38);
              }
              if (plStack_2f8 != (long *)0x0) {
                plVar25 = plStack_2f8 + 1;
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar11) {
                    *plVar25 = *plVar25 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              if (puStack_2f0 != (undefined *)0x0) {
                plVar25 = (long *)(puStack_2f0 + 8);
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar11) {
                    *plVar25 = *plVar25 + 0x200000000;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              if (plStack_2e8 != (long *)0x0) {
                plVar25 = plStack_2e8 + 1;
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar11) {
                    *plVar25 = *plVar25 + 4;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              lVar13 = plVar19[1];
              ppuStack_298 = (undefined **)plVar19[1];
              plStack_2a0 = (long *)*plVar19;
              if (lVar13 != 0) {
                plVar25 = (long *)(lVar13 + 0x10);
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar11) {
                    *plVar25 = *plVar25 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              pplStack_b8 = (long **)FUN_109d297c4;
              ppuStack_b0 = &PTR_FUN_110b3f940;
              uStack_340 = 0;
              plStack_338 = (long *)0x0;
              plStack_a0 = plStack_2f8;
              puStack_a8 = puStack_300;
              plStack_90 = plStack_2e8;
              puStack_98 = puStack_2f0;
              lStack_330 = 0;
              plStack_328 = (long *)0x0;
              plStack_358 = plStack_2f8;
              puStack_360 = puStack_300;
              if (plStack_2f8 != (long *)0x0) {
                plVar25 = plStack_2f8 + 1;
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar11) {
                    *plVar25 = *plVar25 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              apuStack_350[0] = puStack_2f0;
              if (puStack_2f0 != (undefined *)0x0) {
                plVar25 = (long *)(puStack_2f0 + 8);
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar11) {
                    *plVar25 = *plVar25 + 0x200000000;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              if (lVar13 != 0) {
                plVar25 = (long *)(lVar13 + 0x10);
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar11) {
                    *plVar25 = *plVar25 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              pplStack_290 = pplStack_2e0;
              (*(code *)ppuStack_2d8[2])(&plStack_288,&ppuStack_2d8);
              pplStack_250 = pplStack_b8;
              (*(code *)ppuStack_b0[2])(&uStack_248,&ppuStack_b0);
              plStack_208 = plStack_358;
              puStack_210 = puStack_360;
              if (plStack_358 != (long *)0x0) {
                plVar25 = plStack_358 + 1;
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar11) {
                    *plVar25 = *plVar25 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              puStack_200 = apuStack_350[0];
              if (apuStack_350[0] != (undefined *)0x0) {
                plVar25 = (long *)(apuStack_350[0] + 8);
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar11) {
                    *plVar25 = *plVar25 + 0x200000000;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              FUN_109d27278(&uStack_1f8,lVar26);
              if (apuStack_350[0] != (undefined *)0x0) {
                func_0x0001092b4274(apuStack_350);
              }
              plVar25 = plStack_358;
              if (plStack_358 != (long *)0x0) {
                plVar18 = plStack_358 + 1;
                do {
                  lVar23 = *plVar18;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar11) {
                    *plVar18 = lVar23 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar23 == 0) {
                  (**(code **)(*plStack_358 + 0x10))(plStack_358);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
                }
              }
              (*(code *)*ppuStack_b0)(&ppuStack_b0);
              if (lVar13 != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv(lVar13);
              }
              ppuVar16 = (undefined **)0x208;
              __Znwm();
              *ppuVar16 = FUN_109d2b5dc;
              ppuVar16[1] = FUN_109d2b908;
              func_0x0001092ba17c(ppuVar16 + 2);
              plVar25 = (long *)ppuVar16[7];
              if (plVar25 != (long *)0x0) {
                plVar18 = plVar25 + 1;
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar11) {
                    *plVar18 = *plVar18 + 4;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              ppuVar16[10] = (undefined *)ppuStack_298;
              ppuVar16[9] = (undefined *)plStack_2a0;
              plStack_2a0 = (long *)0x0;
              ppuStack_298 = (undefined **)0x0;
              ppuVar16[0xb] = (undefined *)pplStack_290;
              (*(code *)plStack_288[2])(ppuVar16 + 0xc,&plStack_288);
              ppuVar16[0x13] = (undefined *)pplStack_250;
              (**(code **)(CONCAT17(cStack_241,uStack_248) + 0x10))(ppuVar16 + 0x14,&uStack_248);
              ppuVar16[0x1c] = (undefined *)plStack_208;
              ppuVar16[0x1b] = (undefined *)puStack_210;
              puStack_210 = (undefined8 *)0x0;
              plStack_208 = (long *)0x0;
              ppuVar16[0x1d] = puStack_200;
              puStack_200 = (undefined *)0x0;
              FUN_109d29d28(ppuVar16 + 0x1e,&uStack_1f8);
              ppuVar16[0x3d] = puVar22;
              *(undefined1 *)(ppuVar16 + 0x3e) = 0;
              *(undefined1 *)(ppuVar16 + 0x40) = 0;
              ppuVar17 = ppuVar16 + 0x3d;
              func_0x0001092ba064(ppuVar17,ppuVar16);
              if (((ulong)ppuVar17 & 1) == 0) {
                FUN_109d2994c(ppuVar16 + 0x3f,ppuVar16 + 9);
                ppuVar16[0x3d] = ppuVar16[0x3f];
                plVar18 = (long *)(ppuVar16[0x3f] + 8);
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar11) {
                    *plVar18 = *plVar18 + 4;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (((uint)*(undefined8 *)(ppuVar16[0x3d] + 0x10) >> 1 & 1) == 0) {
                  *(undefined1 *)(ppuVar16 + 0x40) = 1;
                  puVar22 = ppuVar16[0x3d];
                  plVar18 = (long *)(puVar22 + 0x10);
                  puVar24 = (undefined8 *)ppuVar16[3];
                  do {
                    lVar13 = *plVar18;
                    if (lVar13 == 0) {
                      cVar6 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                      if (bVar11) {
                        *plVar18 = 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                      bVar11 = cVar6 == '\0';
                    }
                    else {
                      bVar11 = false;
                      ClearExclusiveLocal();
                    }
                    if (bVar11) {
                      pplStack_b8 = (long **)0x0;
                      ppuStack_b0 = ppuVar16;
                      puStack_a8 = puVar24;
                      func_0x000109d1b588(puVar22 + 0x18,&pplStack_b8);
                      *(undefined8 *)(puVar22 + 0x10) = 0;
                      goto LAB_109d2547c;
                    }
                  } while (((uint)lVar13 >> 1 & 1) == 0);
                }
                plVar18 = (long *)ppuVar16[0x3d];
                if (((uint)*(undefined8 *)(ppuVar16[0x3d] + 0x10) >> 5 & 1) != 0) {
                  func_0x0001092af97c(plVar18 + 0x12);
                  goto LAB_109d257fc;
                }
                if (plVar18 != (long *)0x0) {
                  puVar2 = (ulong *)(plVar18 + 1);
                  do {
                    uVar21 = *puVar2;
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar11) {
                      *puVar2 = uVar21 - 4;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if ((uVar21 & 0x1fffffffc) == 4) {
                    do {
                      uVar21 = *puVar2;
                      cVar6 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                      if (bVar11) {
                        *puVar2 = uVar21 - 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (uVar21 - 1 == 0) {
                      (**(code **)(*plVar18 + 8))();
                    }
                  }
                }
                plVar18 = (long *)ppuVar16[0x3f];
                if (plVar18 != (long *)0x0) {
                  puVar2 = (ulong *)(plVar18 + 1);
                  do {
                    uVar21 = *puVar2;
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar11) {
                      *puVar2 = uVar21 - 4;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if ((uVar21 & 0x1fffffffc) == 4) {
                    do {
                      uVar21 = *puVar2;
                      cVar6 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                      if (bVar11) {
                        *puVar2 = uVar21 - 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (uVar21 - 1 == 0) {
                      (**(code **)(*plVar18 + 8))();
                    }
                  }
                }
                func_0x0001092ba100(ppuVar16 + 2);
                if (*(char *)((long)ppuVar16 + 0x19f) < '\0') {
                  __ZdlPv(ppuVar16[0x31]);
                }
                if (ppuVar16[0x2d] != (undefined *)0x0) {
                  ppuVar16[0x2e] = ppuVar16[0x2d];
                  __ZdlPv();
                }
                if (ppuVar16[0x2a] != (undefined *)0x0) {
                  ppuVar16[0x2b] = ppuVar16[0x2a];
                  __ZdlPv();
                }
                if (*(char *)((long)ppuVar16 + 0x14f) < '\0') {
                  __ZdlPv(ppuVar16[0x27]);
                }
                if (*(char *)((long)ppuVar16 + 0x137) < '\0') {
                  __ZdlPv(ppuVar16[0x24]);
                }
                pplStack_b8 = (long **)(ppuVar16 + 0x21);
                func_0x000109378cec(&pplStack_b8);
                pplStack_b8 = (long **)(ppuVar16 + 0x1e);
                func_0x000109378cec(&pplStack_b8);
                if (ppuVar16[0x1d] != (undefined *)0x0) {
                  func_0x0001092b4274(ppuVar16 + 0x1d);
                }
                plVar18 = (long *)ppuVar16[0x1c];
                if (plVar18 != (long *)0x0) {
                  plVar3 = plVar18 + 1;
                  do {
                    lVar13 = *plVar3;
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                    if (bVar11) {
                      *plVar3 = lVar13 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (lVar13 == 0) {
                    (**(code **)(*plVar18 + 0x10))(plVar18);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
                  }
                }
                (**(code **)ppuVar16[0x14])(ppuVar16 + 0x14);
                (**(code **)ppuVar16[0xc])(ppuVar16 + 0xc);
                if (ppuVar16[10] != (undefined *)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                func_0x000109d1a1d0(ppuVar16 + 2);
                __ZdlPv(ppuVar16);
              }
LAB_109d2547c:
              if (plVar25 != (long *)0x0) {
                puVar2 = (ulong *)(plVar25 + 1);
                do {
                  uVar21 = *puVar2;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar11) {
                    *puVar2 = uVar21 - 4;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if ((uVar21 & 0x1fffffffc) == 4) {
                  do {
                    uVar21 = *puVar2;
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar11) {
                      *puVar2 = uVar21 - 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (uVar21 - 1 == 0) {
                    (**(code **)(*plVar25 + 8))();
                  }
                }
              }
              FUN_109d2a054(plVar19 + 2,lVar26,lVar26,&lStack_310);
              *param_1 = lStack_310;
              param_1[1] = (long)plStack_308;
              lVar26 = lStack_310;
              if (plStack_308 != (long *)0x0) {
                plVar25 = plStack_308 + 1;
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar11) {
                    *plVar25 = *plVar25 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                lVar26 = *param_1;
              }
              if (lVar26 != 0) {
                piVar4 = (int *)(lVar26 + 0x18);
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                  if (bVar11) {
                    *piVar4 = *piVar4 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              if ((long)plStack_150 < 0) {
                __ZdlPv(plStack_160);
              }
              if (lStack_180 != 0) {
                lStack_178 = lStack_180;
                __ZdlPv();
              }
              if (lStack_198 != 0) {
                lStack_190 = lStack_198;
                __ZdlPv();
              }
              if (cStack_199 < '\0') {
                __ZdlPv(uStack_1b0);
              }
              if (cStack_1b1 < '\0') {
                __ZdlPv(uStack_1c8);
              }
              pplStack_b8 = aplStack_1e0;
              func_0x000109378cec(&pplStack_b8);
              pplStack_b8 = (long **)&uStack_1f8;
              func_0x000109378cec(&pplStack_b8);
              if (puStack_200 != (undefined *)0x0) {
                func_0x0001092b4274(&puStack_200);
              }
              plVar25 = plStack_208;
              if (plStack_208 != (long *)0x0) {
                plVar18 = plStack_208 + 1;
                do {
                  lVar26 = *plVar18;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar11) {
                    *plVar18 = lVar26 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar26 == 0) {
                  (**(code **)(*plStack_208 + 0x10))(plStack_208);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
                }
              }
              (**(code **)CONCAT17(cStack_241,uStack_248))(&uStack_248);
              (*(code *)*plStack_288)(&plStack_288);
              if (ppuStack_298 != (undefined **)0x0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              plVar25 = plStack_328;
              if (plStack_328 != (long *)0x0) {
                puVar2 = (ulong *)(plStack_328 + 1);
                do {
                  uVar21 = *puVar2;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar11) {
                    *puVar2 = uVar21 - 4;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if ((uVar21 & 0x1fffffffc) == 4) {
                  (**(code **)(*plStack_328 + 0x10))(plStack_328);
                  do {
                    uVar21 = *puVar2;
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar11) {
                      *puVar2 = uVar21 - 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (uVar21 - 1 == 0) {
                    (**(code **)(*plVar25 + 8))(plVar25);
                  }
                }
              }
              if (lStack_330 != 0) {
                func_0x0001092b4274(&lStack_330);
              }
              plVar25 = plStack_338;
              if (plStack_338 != (long *)0x0) {
                plVar18 = plStack_338 + 1;
                do {
                  lVar26 = *plVar18;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar11) {
                    *plVar18 = lVar26 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar26 == 0) {
                  (**(code **)(*plStack_338 + 0x10))(plStack_338);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
                }
              }
              plVar25 = plStack_2e8;
              if (plStack_2e8 != (long *)0x0) {
                puVar2 = (ulong *)(plStack_2e8 + 1);
                do {
                  uVar21 = *puVar2;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar11) {
                    *puVar2 = uVar21 - 4;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if ((uVar21 & 0x1fffffffc) == 4) {
                  (**(code **)(*plStack_2e8 + 0x10))(plStack_2e8);
                  do {
                    uVar21 = *puVar2;
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar11) {
                      *puVar2 = uVar21 - 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (uVar21 - 1 == 0) {
                    (**(code **)(*plVar25 + 8))(plVar25);
                  }
                }
              }
              if (puStack_2f0 != (undefined *)0x0) {
                func_0x0001092b4274(&puStack_2f0);
              }
              if (plStack_2f8 != (long *)0x0) {
                plVar25 = plStack_2f8 + 1;
                do {
                  lVar26 = *plVar25;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar11) {
                    *plVar25 = lVar26 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar26 == 0) {
                  (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2f8);
                }
              }
              if (lStack_310 != 0) {
                piVar4 = (int *)(lStack_310 + 0x18);
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                  if (bVar11) {
                    *piVar4 = *piVar4 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              if (plStack_308 != (long *)0x0) {
                plVar25 = plStack_308 + 1;
                do {
                  lVar26 = *plVar25;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar11) {
                    *plVar25 = lVar26 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar26 == 0) {
                  (**(code **)(*plStack_308 + 0x10))(plStack_308);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_308);
                }
              }
            }
            __ZNSt3__115recursive_mutex6unlockEv(plVar19 + 7);
            (*(code *)*ppuStack_2d8)(&ppuStack_2d8);
            plVar19 = plStack_318;
            if (plStack_318 != (long *)0x0) {
              puVar2 = (ulong *)(plStack_318 + 1);
              do {
                uVar21 = *puVar2;
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar11) {
                  *puVar2 = uVar21 - 4;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if ((uVar21 & 0x1fffffffc) == 4) {
                (**(code **)(*plStack_318 + 0x10))(plStack_318);
                do {
                  uVar21 = *puVar2;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar11) {
                    *puVar2 = uVar21 - 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (uVar21 - 1 == 0) {
                  (**(code **)(*plVar19 + 8))(plVar19);
                }
              }
            }
            goto LAB_109d24058;
          }
          FUN_109d25e00(&pplStack_2e0,lVar26,param_2 + 2,plVar19,cVar6,param_2 + 0xd);
          plVar19 = plRam00000001137e1d98;
          puVar24 = (undefined8 *)*plStack_370;
          __ZNSt3__115recursive_mutex4lockEv(plRam00000001137e1d98 + 7);
          FUN_109d26668(param_1,plVar19,lVar26);
          if (*param_1 == 0) {
            func_0x000109a1aa04(param_1);
            FUN_109d26db8(&lStack_310);
            plStack_318 = (long *)0x0;
            puVar14 = puVar24;
            ___dynamic_cast(puVar24,&PTR_DAT_110b3eb60,&PTR_DAT_110b3ec30,0);
            if (puVar14 != (undefined8 *)0x0) {
              FUN_109d19404(&plStack_318,puVar14 + 7);
            }
            if (plStack_2f8 != (long *)0x0) {
              plVar25 = plStack_2f8 + 1;
              do {
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar11) {
                  *plVar25 = *plVar25 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            if (puStack_2f0 != (undefined *)0x0) {
              plVar25 = (long *)(puStack_2f0 + 8);
              do {
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar11) {
                  *plVar25 = *plVar25 + 0x200000000;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            if (plStack_318 != (long *)0x0) {
              plVar25 = plStack_318 + 1;
              do {
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar11) {
                  *plVar25 = *plVar25 + 4;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            lVar13 = plVar19[1];
            ppuStack_298 = (undefined **)plVar19[1];
            plStack_2a0 = (long *)*plVar19;
            if (lVar13 != 0) {
              plVar25 = (long *)(lVar13 + 0x10);
              do {
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar11) {
                  *plVar25 = *plVar25 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            pplStack_b8 = (long **)FUN_109d2a880;
            ppuStack_b0 = &PTR_FUN_110b3f978;
            uStack_340 = 0;
            plStack_338 = (long *)0x0;
            plStack_a0 = plStack_2f8;
            puStack_a8 = puStack_300;
            plStack_90 = plStack_318;
            puStack_98 = puStack_2f0;
            lStack_330 = 0;
            plStack_328 = (long *)0x0;
            plStack_358 = plStack_2f8;
            puStack_360 = puStack_300;
            if (plStack_2f8 != (long *)0x0) {
              plVar25 = plStack_2f8 + 1;
              do {
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar11) {
                  *plVar25 = *plVar25 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            apuStack_350[0] = puStack_2f0;
            if (puStack_2f0 != (undefined *)0x0) {
              plVar25 = (long *)(puStack_2f0 + 8);
              do {
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar11) {
                  *plVar25 = *plVar25 + 0x200000000;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            if (lVar13 != 0) {
              plVar25 = (long *)(lVar13 + 0x10);
              do {
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar11) {
                  *plVar25 = *plVar25 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            pplStack_290 = pplStack_2e0;
            (*(code *)ppuStack_2d8[2])(&plStack_288,&ppuStack_2d8);
            pplStack_250 = pplStack_b8;
            (*(code *)ppuStack_b0[2])(&uStack_248,&ppuStack_b0);
            plStack_208 = plStack_358;
            puStack_210 = puStack_360;
            if (plStack_358 != (long *)0x0) {
              plVar25 = plStack_358 + 1;
              do {
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar11) {
                  *plVar25 = *plVar25 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            puStack_200 = apuStack_350[0];
            if (apuStack_350[0] != (undefined *)0x0) {
              plVar25 = (long *)(apuStack_350[0] + 8);
              do {
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar11) {
                  *plVar25 = *plVar25 + 0x200000000;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            FUN_109d27278(&uStack_1f8,lVar26);
            if (apuStack_350[0] != (undefined *)0x0) {
              func_0x0001092b4274(apuStack_350);
            }
            plVar25 = plStack_358;
            if (plStack_358 != (long *)0x0) {
              plVar18 = plStack_358 + 1;
              do {
                lVar23 = *plVar18;
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar11) {
                  *plVar18 = lVar23 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar23 == 0) {
                (**(code **)(*plStack_358 + 0x10))(plStack_358);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
              }
            }
            (*(code *)*ppuStack_b0)(&ppuStack_b0);
            if (lVar13 != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv(lVar13);
            }
            plVar25 = (long *)puVar24[2];
            if (plVar25 == (long *)0x0) {
              ppuVar16 = (undefined **)0x1b0;
              __Znwm();
              ppuVar16[1] = (undefined *)ppuStack_298;
              *ppuVar16 = (undefined *)plStack_2a0;
              plStack_2a0 = (long *)0x0;
              ppuStack_298 = (undefined **)0x0;
              ppuVar16[2] = (undefined *)pplStack_290;
              (*(code *)plStack_288[2])(ppuVar16 + 3,&plStack_288);
              ppuVar16[10] = (undefined *)pplStack_250;
              (**(code **)(CONCAT17(cStack_241,uStack_248) + 0x10))(ppuVar16 + 0xb,&uStack_248);
              ppuVar16[0x13] = (undefined *)plStack_208;
              ppuVar16[0x12] = (undefined *)puStack_210;
              puStack_210 = (undefined8 *)0x0;
              plStack_208 = (long *)0x0;
              ppuVar16[0x14] = puStack_200;
              puStack_200 = (undefined *)0x0;
              FUN_109d29d28(ppuVar16 + 0x15,&uStack_1f8);
              ppuVar16[0x35] = (undefined *)0x109d2ac30;
              pplStack_b8 = (long **)FUN_109d2aa38;
              ppuStack_b0 = ppuVar16;
              puStack_a8 = puVar24;
              (**(code **)*puVar24)(puVar24,&pplStack_b8);
            }
            else {
              plStack_2e8 = (long *)0x0;
              (**(code **)(*plVar25 + 0x28))(plVar25,0,&plStack_2e8);
              if (plStack_2e8 != (long *)0x0) {
                func_0x0001092af97c(&plStack_2e8);
                goto LAB_109d257fc;
              }
              ppuVar16 = (undefined **)0x1b8;
              __Znwm();
              ppuVar16[1] = (undefined *)ppuStack_298;
              *ppuVar16 = (undefined *)plStack_2a0;
              plStack_2a0 = (long *)0x0;
              ppuStack_298 = (undefined **)0x0;
              ppuVar16[2] = (undefined *)pplStack_290;
              (*(code *)plStack_288[2])(ppuVar16 + 3,&plStack_288);
              ppuVar16[10] = (undefined *)pplStack_250;
              (**(code **)(CONCAT17(cStack_241,uStack_248) + 0x10))(ppuVar16 + 0xb,&uStack_248);
              ppuVar16[0x13] = (undefined *)plStack_208;
              ppuVar16[0x12] = (undefined *)puStack_210;
              puStack_210 = (undefined8 *)0x0;
              plStack_208 = (long *)0x0;
              ppuVar16[0x14] = puStack_200;
              puStack_200 = (undefined *)0x0;
              FUN_109d29d28(ppuVar16 + 0x15,&uStack_1f8);
              ppuVar16[0x35] = FUN_109d2abb4;
              ppuVar16[0x36] = (undefined *)plVar25;
              pplStack_b8 = (long **)FUN_109d2aa08;
              ppuStack_b0 = ppuVar16;
              puStack_a8 = puVar24;
              (**(code **)*puVar24)(puVar24,&pplStack_b8);
              __ZNSt13exception_ptrD1Ev(&plStack_2e8);
            }
            plStack_2e8 = (long *)0x0;
            __ZNSt13exception_ptrD1Ev(&plStack_2e8);
            FUN_109d2a054(plVar19 + 2,lVar26,lVar26,&lStack_310);
            *param_1 = lStack_310;
            param_1[1] = (long)plStack_308;
            lVar26 = lStack_310;
            if (plStack_308 != (long *)0x0) {
              plVar25 = plStack_308 + 1;
              do {
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar11) {
                  *plVar25 = *plVar25 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              lVar26 = *param_1;
            }
            if (lVar26 != 0) {
              piVar4 = (int *)(lVar26 + 0x18);
              do {
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                if (bVar11) {
                  *piVar4 = *piVar4 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            if ((long)plStack_150 < 0) {
              __ZdlPv(plStack_160);
            }
            if (lStack_180 != 0) {
              lStack_178 = lStack_180;
              __ZdlPv();
            }
            if (lStack_198 != 0) {
              lStack_190 = lStack_198;
              __ZdlPv();
            }
            if (cStack_199 < '\0') {
              __ZdlPv(uStack_1b0);
            }
            if (cStack_1b1 < '\0') {
              __ZdlPv(uStack_1c8);
            }
            pplStack_b8 = aplStack_1e0;
            func_0x000109378cec(&pplStack_b8);
            pplStack_b8 = (long **)&uStack_1f8;
            func_0x000109378cec(&pplStack_b8);
            if (puStack_200 != (undefined *)0x0) {
              func_0x0001092b4274(&puStack_200);
            }
            plVar25 = plStack_208;
            if (plStack_208 != (long *)0x0) {
              plVar18 = plStack_208 + 1;
              do {
                lVar26 = *plVar18;
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar11) {
                  *plVar18 = lVar26 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar26 == 0) {
                (**(code **)(*plStack_208 + 0x10))(plStack_208);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
              }
            }
            (**(code **)CONCAT17(cStack_241,uStack_248))(&uStack_248);
            (*(code *)*plStack_288)(&plStack_288);
            if (ppuStack_298 != (undefined **)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            plVar25 = plStack_328;
            if (plStack_328 != (long *)0x0) {
              puVar2 = (ulong *)(plStack_328 + 1);
              do {
                uVar21 = *puVar2;
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar11) {
                  *puVar2 = uVar21 - 4;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if ((uVar21 & 0x1fffffffc) == 4) {
                (**(code **)(*plStack_328 + 0x10))(plStack_328);
                do {
                  uVar21 = *puVar2;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar11) {
                    *puVar2 = uVar21 - 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (uVar21 - 1 == 0) {
                  (**(code **)(*plVar25 + 8))(plVar25);
                }
              }
            }
            if (lStack_330 != 0) {
              func_0x0001092b4274(&lStack_330);
            }
            plVar25 = plStack_338;
            if (plStack_338 != (long *)0x0) {
              plVar18 = plStack_338 + 1;
              do {
                lVar26 = *plVar18;
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar11) {
                  *plVar18 = lVar26 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar26 == 0) {
                (**(code **)(*plStack_338 + 0x10))(plStack_338);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
              }
            }
            plVar25 = plStack_318;
            if (plStack_318 != (long *)0x0) {
              puVar2 = (ulong *)(plStack_318 + 1);
              do {
                uVar21 = *puVar2;
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar11) {
                  *puVar2 = uVar21 - 4;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if ((uVar21 & 0x1fffffffc) == 4) {
                (**(code **)(*plStack_318 + 0x10))(plStack_318);
                do {
                  uVar21 = *puVar2;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar11) {
                    *puVar2 = uVar21 - 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (uVar21 - 1 == 0) {
                  (**(code **)(*plVar25 + 8))(plVar25);
                }
              }
            }
            if (puStack_2f0 != (undefined *)0x0) {
              func_0x0001092b4274(&puStack_2f0);
            }
            if (plStack_2f8 != (long *)0x0) {
              plVar25 = plStack_2f8 + 1;
              do {
                lVar26 = *plVar25;
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar11) {
                  *plVar25 = lVar26 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar26 == 0) {
                (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2f8);
              }
            }
            if (lStack_310 != 0) {
              piVar4 = (int *)(lStack_310 + 0x18);
              do {
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                if (bVar11) {
                  *piVar4 = *piVar4 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            if (plStack_308 != (long *)0x0) {
              plVar25 = plStack_308 + 1;
              do {
                lVar26 = *plVar25;
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar11) {
                  *plVar25 = lVar26 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar26 == 0) {
                (**(code **)(*plStack_308 + 0x10))(plStack_308);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_308);
              }
            }
          }
          __ZNSt3__115recursive_mutex6unlockEv(plVar19 + 7);
          ppplVar20 = &pplStack_2e0;
          ppuVar16 = ppuStack_2d8;
          goto LAB_109d244e8;
        }
      }
      else {
LAB_109d24058:
        __ZNSt3__115recursive_mutex6unlockEv(plVar8 + 7);
        __ZNSt3__115recursive_mutex6unlockEv(lVar9 + 0x10);
        if (plStack_368 != (long *)0x0) {
          plVar19 = plStack_368 + 1;
          do {
            lVar26 = *plVar19;
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar11) {
              *plVar19 = lVar26 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*plStack_368 + 0x10))(plStack_368);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_368);
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
          return;
        }
        ___stack_chk_fail();
      }
      func_0x000105688514(&UNK_10f5acc88);
      goto LAB_109d257fc;
    }
  }
  func_0x000105688514(&UNK_10f5acc4e);
LAB_109d257fc:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x109d25800);
  (*pcVar10)();
}



/* Entry: 109d25d68; end: 109d25dab;  */

void FUN_109d25d68(void)

{
  int iVar1;
  
  if ((bRam00000001137e1db8 & 1) == 0) {
    iVar1 = 0x137e1db8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_109d260c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1137e1db8);
      return;
    }
  }
  return;
}



/* Entry: 109d25dac; end: 109d25dff;  */

/* WARNING: Possible PIC construction at 0x000109d25dd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d25dd4) */
/* WARNING: Removing unreachable block (ram,0x000109d25ddc) */
/* WARNING: Removing unreachable block (ram,0x000109d25de0) */
/* WARNING: Removing unreachable block (ram,0x000109d25de8) */
/* WARNING: Removing unreachable block (ram,0x000109d25df0) */

long FUN_109d25dac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x0001092b4274();
  }
  plVar5 = *(long **)(param_1 + 0x18);
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
  return param_1 + 0x10;
}



/* Entry: 109d25e00; end: 109d260c3;  */

void FUN_109d25e00(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined8 *param_6)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 **ppuVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *puStack_240;
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined8 uStack_208;
  char cStack_1f1;
  undefined8 uStack_1f0;
  char cStack_1d9;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1a0;
  char cStack_189;
  undefined8 uStack_140;
  undefined8 *apuStack_138 [7];
  undefined8 uStack_100;
  long *plStack_f8;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *apuStack_e0 [7];
  undefined8 uStack_a8;
  undefined8 *apuStack_a0 [7];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar4 = &puStack_240;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d27278(auStack_238);
  uStack_140 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_138,param_3 + 1);
  plStack_f8 = (long *)param_4[1];
  uStack_100 = *param_4;
  if (param_4[1] != 0) {
    plVar5 = (long *)(param_4[1] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_e8 = *param_6;
  uStack_f0 = param_5;
  (**(code **)(param_6[1] + 0x10))(apuStack_e0);
  uStack_a8 = param_6[8];
  (**(code **)(param_6[9] + 0x10))(apuStack_a0,param_6 + 9);
  uStack_60 = param_6[0x11];
  uStack_68 = param_6[0x10];
  param_6[0x10] = 0;
  param_6[0x11] = 0;
  *param_1 = FUN_109d2a4ec;
  param_1[1] = &PTR_FUN_110b3f960;
  lVar3 = 0x1e0;
  __Znwm();
  FUN_109d27278();
  *(undefined8 *)(lVar3 + 0xf8) = uStack_140;
  (*(code *)apuStack_138[0][2])(lVar3 + 0x100,apuStack_138);
  *(undefined8 *)(lVar3 + 0x138) = uStack_100;
  *(long **)(lVar3 + 0x140) = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar5 = plStack_f8 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(undefined1 *)(lVar3 + 0x148) = uStack_f0;
  *(undefined8 *)(lVar3 + 0x150) = uStack_e8;
  (*(code *)apuStack_e0[0][2])(lVar3 + 0x158,apuStack_e0);
  *(undefined8 *)(lVar3 + 400) = uStack_a8;
  (*(code *)apuStack_a0[0][2])(lVar3 + 0x198,apuStack_a0);
  *(undefined8 *)(lVar3 + 0x1d8) = uStack_60;
  *(undefined8 *)(lVar3 + 0x1d0) = uStack_68;
  uStack_68 = 0;
  uStack_60 = 0;
  param_1[2] = lVar3;
  (*(code *)*apuStack_a0[0])(apuStack_a0);
  (*(code *)*apuStack_e0[0])(apuStack_e0);
  plVar5 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar7 = plStack_f8 + 1;
    do {
      lVar6 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  (*(code *)*apuStack_138[0])(apuStack_138);
  if (cStack_189 < '\0') {
    __ZdlPv(uStack_1a0);
  }
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    __ZdlPv();
  }
  if (lStack_1d8 != 0) {
    lStack_1d0 = lStack_1d8;
    __ZdlPv();
  }
  if (cStack_1d9 < '\0') {
    __ZdlPv(uStack_1f0);
  }
  if (cStack_1f1 < '\0') {
    __ZdlPv(uStack_208);
  }
  puStack_240 = auStack_220;
  func_0x000109378cec(&puStack_240);
  puStack_240 = auStack_238;
  func_0x000109378cec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __ZdlPv(lVar3);
  FUN_109d2a48c(auStack_238);
  __Unwind_Resume(ppuVar4);
  plRam00000001137e1da0 = (long *)0x0;
  plRam00000001137e1d98 = (long *)0x0;
  plRam00000001137e1db0 = (long *)0x0;
  plRam00000001137e1da8 = (long *)0x0;
  plVar5 = (long *)0x90;
  __Znwm();
  plVar7 = plVar5 + 1;
  *plVar7 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110b3f778;
  plVar8 = plVar5 + 3;
  plVar5[4] = 0;
  *plVar8 = 0;
  plVar5[10] = 0;
  plVar5[9] = 0;
  plVar5[6] = 0;
  plVar5[5] = 0;
  plVar5[8] = 0;
  plVar5[7] = 0;
  plVar5[0xc] = 0;
  plVar5[0xb] = 0;
  plVar5[0xe] = 0;
  plVar5[0xd] = 0;
  plVar5[0x10] = 0;
  plVar5[0xf] = 0;
  plVar5[0x11] = 0;
  *(undefined4 *)(plVar5 + 9) = 0x3f800000;
  __ZNSt3__115recursive_mutexC1Ev(plVar5 + 10);
  plRam00000001137e1d98 = plVar8;
  plRam00000001137e1da0 = plVar5;
  if (plVar5[4] == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar8 = plVar5 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5[3] = (long)(plVar5 + 3);
    plVar5[4] = (long)plVar5;
  }
  else {
    if (*(long *)(plVar5[4] + 8) != -1) goto LAB_109d261e4;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar8 = plVar5 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5[3] = (long)(plVar5 + 3);
    plVar5[4] = (long)plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar3 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_109d261e4:
  plVar5 = (long *)0x90;
  __Znwm();
  plVar7 = plVar5 + 1;
  *plVar7 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110b3f7c8;
  plVar8 = plVar5 + 3;
  plVar5[4] = 0;
  *plVar8 = 0;
  plVar5[8] = 0;
  plVar5[7] = 0;
  plVar5[10] = 0;
  plVar5[9] = 0;
  plVar5[0xc] = 0;
  plVar5[0xb] = 0;
  plVar5[0xe] = 0;
  plVar5[0xd] = 0;
  plVar5[0x10] = 0;
  plVar5[0xf] = 0;
  plVar5[0x11] = 0;
  plVar5[6] = 0;
  plVar5[5] = 0;
  __ZNSt3__115recursive_mutexC1Ev();
  plVar5[0x10] = 0;
  plVar5[0xf] = 0;
  plVar5[0xe] = 0;
  plVar5[0xd] = 0;
  *(undefined4 *)(plVar5 + 0x11) = 0x3f800000;
  plRam00000001137e1da8 = plVar8;
  plRam00000001137e1db0 = plVar5;
  if (plVar5[4] == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar8 = plVar5 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5[3] = (long)(plVar5 + 3);
    plVar5[4] = (long)plVar5;
  }
  else {
    if (*(long *)(plVar5[4] + 8) != -1) {
      return;
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar8 = plVar5 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5[3] = (long)(plVar5 + 3);
    plVar5[4] = (long)plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar3 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 != 0) {
    return;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
  return;
}



/* Entry: 109d260c4; end: 109d2636f;  */

void FUN_109d260c4(void)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plRam00000001137e1da0 = (long *)0x0;
  plRam00000001137e1d98 = (long *)0x0;
  plRam00000001137e1db0 = (long *)0x0;
  plRam00000001137e1da8 = (long *)0x0;
  plVar3 = (long *)0x90;
  __Znwm();
  plVar5 = plVar3 + 1;
  *plVar5 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110b3f778;
  plVar6 = plVar3 + 3;
  plVar3[4] = 0;
  *plVar6 = 0;
  plVar3[10] = 0;
  plVar3[9] = 0;
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  plVar3[0xc] = 0;
  plVar3[0xb] = 0;
  plVar3[0xe] = 0;
  plVar3[0xd] = 0;
  plVar3[0x10] = 0;
  plVar3[0xf] = 0;
  plVar3[0x11] = 0;
  *(undefined4 *)(plVar3 + 9) = 0x3f800000;
  __ZNSt3__115recursive_mutexC1Ev(plVar3 + 10);
  plRam00000001137e1d98 = plVar6;
  plRam00000001137e1da0 = plVar3;
  if (plVar3[4] == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar6 = plVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3[3] = (long)(plVar3 + 3);
    plVar3[4] = (long)plVar3;
  }
  else {
    if (*(long *)(plVar3[4] + 8) != -1) goto LAB_109d261e4;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar6 = plVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3[3] = (long)(plVar3 + 3);
    plVar3[4] = (long)plVar3;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar4 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
  }
LAB_109d261e4:
  plVar3 = (long *)0x90;
  __Znwm();
  plVar5 = plVar3 + 1;
  *plVar5 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110b3f7c8;
  plVar6 = plVar3 + 3;
  plVar3[4] = 0;
  *plVar6 = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  plVar3[10] = 0;
  plVar3[9] = 0;
  plVar3[0xc] = 0;
  plVar3[0xb] = 0;
  plVar3[0xe] = 0;
  plVar3[0xd] = 0;
  plVar3[0x10] = 0;
  plVar3[0xf] = 0;
  plVar3[0x11] = 0;
  plVar3[6] = 0;
  plVar3[5] = 0;
  __ZNSt3__115recursive_mutexC1Ev();
  plVar3[0x10] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0xd] = 0;
  *(undefined4 *)(plVar3 + 0x11) = 0x3f800000;
  plRam00000001137e1da8 = plVar6;
  plRam00000001137e1db0 = plVar3;
  if (plVar3[4] == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar6 = plVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3[3] = (long)(plVar3 + 3);
    plVar3[4] = (long)plVar3;
  }
  else {
    if (*(long *)(plVar3[4] + 8) != -1) {
      return;
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar6 = plVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3[3] = (long)(plVar3 + 3);
    plVar3[4] = (long)plVar3;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar4 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
  return;
}



/* Entry: 109d26370; end: 109d2637f;  */

void FUN_109d26370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f778;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109d26380; end: 109d2639f;  */

void FUN_109d26380(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f778;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d263a0; end: 109d263df;  */

void FUN_109d263a0(long param_1)

{
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x50);
  FUN_109d263e4(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 109d263e0; end: 109d263e3;  */

void FUN_109d263e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d263e4; end: 109d2644b;  */

long * FUN_109d263e4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000109a1aa04(plVar1 + 0x21);
    FUN_109d2644c(plVar1 + 2);
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



/* Entry: 109d2644c; end: 109d26537;  */

long FUN_109d2644c(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0xaf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x98));
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  lStack_28 = param_1 + 0x18;
  func_0x000109378cec(&lStack_28);
  lStack_28 = param_1;
  func_0x000109378cec(&lStack_28);
  return param_1;
}



/* Entry: 109d26538; end: 109d26547;  */

void FUN_109d26538(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f7c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109d26548; end: 109d26567;  */

void FUN_109d26548(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f7c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d26568; end: 109d265df;  */

void FUN_109d26568(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0x78);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_109d265e4(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
  return;
}



/* Entry: 109d265e0; end: 109d265e3;  */

void FUN_109d265e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d265e4; end: 109d26667;  */

long FUN_109d265e4(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x100) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)(param_1 + 0xaf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x98));
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  lStack_28 = param_1 + 0x18;
  func_0x000109378cec(&lStack_28);
  lStack_28 = param_1;
  func_0x000109378cec(&lStack_28);
  return param_1;
}



/* Entry: 109d26668; end: 109d26747;  */

void FUN_109d26668(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x38);
  lVar5 = param_2 + 0x10;
  FUN_109d26748(lVar5,param_3);
  if (lVar5 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (*(long *)(lVar5 + 0x108) == 0) {
      lStack_40 = 0;
      plStack_38 = (long *)0x0;
    }
    else {
      FUN_109d26860(&lStack_40);
      if (lStack_40 != 0) {
        *param_1 = lStack_40;
        param_1[1] = (long)plStack_38;
        goto LAB_109d2671c;
      }
    }
    FUN_109d26914(param_2 + 0x10,lVar5);
    plVar4 = plStack_38;
    *param_1 = 0;
    param_1[1] = 0;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
LAB_109d2671c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_2 + 0x38);
  return;
}



/* Entry: 109d26748; end: 109d2685f;  */

long * FUN_109d26748(long *param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined1 uStack_61;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = *(ulong *)(param_2 + 0xf0);
    uVar7 = uVar5 - 1;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = uVar7 & uVar6;
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar6 / uVar5;
        }
        uVar8 = uVar6 - uVar8 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        return (long *)0x0;
      }
      do {
        uVar4 = plVar3[1];
        if (uVar4 == uVar6) {
          plStack_88 = plVar3 + 2;
          plStack_80 = plVar3 + 0xb;
          plStack_78 = plVar3 + 0xe;
          plStack_70 = plVar3 + 0x11;
          puVar2 = &uStack_61;
          lStack_a8 = param_2;
          lStack_a0 = param_2 + 0x48;
          lStack_98 = param_2 + 0x60;
          lStack_90 = param_2 + 0x78;
          FUN_109d2d6b8(puVar2,&plStack_88,&lStack_a8);
          if (((ulong)puVar2 & 1) != 0) {
            return plVar3;
          }
        }
        else {
          if ((uVar5 & uVar7) == 0) {
            uVar4 = uVar4 & uVar7;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar8) {
            return (long *)0x0;
          }
        }
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109d26860; end: 109d26913;  */

void FUN_109d26860(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  piVar1 = (int *)(param_2 + 3);
  do {
    iVar3 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  plVar7 = (long *)param_2[1];
  if (plVar7 != (long *)0x0) {
    uVar9 = *param_2;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar7 != (long *)0x0) {
      *param_1 = uVar9;
      param_1[1] = plVar7;
      plVar2 = plVar7 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        lVar8 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 != 0) {
        return;
      }
      (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
      return;
    }
  }
  func_0x0001092315e8();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109d26910);
  (*pcVar6)();
}



/* Entry: 109d26914; end: 109d26a1f;  */

void FUN_109d26914(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar2 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_2);
  if (plVar7 == param_1 + 2) {
LAB_109d26990:
    if (lVar3 == 0) {
LAB_109d269c0:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_109d269c8;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_109d269c0;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_109d26990;
LAB_109d269c8:
    if (lVar3 == 0) goto LAB_109d26a04;
  }
  uVar8 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*param_1 + uVar8 * 8) = plVar7;
    lVar3 = *param_2;
  }
LAB_109d26a04:
  *plVar7 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  func_0x000109a1aa04(param_2 + 0x21);
  FUN_109d2644c(param_2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109d26a20; end: 109d26a53;  */

void FUN_109d26a20(ulong param_1,long param_2)

{
  if ((param_1 & 1) != 0) {
    func_0x000109a1aa04(param_2 + 0x108);
    FUN_109d2644c(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109d26a54; end: 109d26b27;  */

void FUN_109d26a54(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x10);
  lVar5 = param_2 + 0x50;
  FUN_109d26b28(lVar5,param_3);
  if (lVar5 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar4 = *(long **)(lVar5 + 0x110);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      if ((plVar4 != (long *)0x0) && (*(long *)(lVar5 + 0x108) != 0)) {
        *param_1 = *(long *)(lVar5 + 0x108);
        param_1[1] = (long)plVar4;
        goto LAB_109d26b00;
      }
    }
    FUN_109d26c40(param_2 + 0x50,lVar5);
    *param_1 = 0;
    param_1[1] = 0;
    if (plVar4 != (long *)0x0) {
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
LAB_109d26b00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_2 + 0x10);
  return;
}



/* Entry: 109d26b28; end: 109d26c3f;  */

long * FUN_109d26b28(long *param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined1 uStack_61;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = *(ulong *)(param_2 + 0xf0);
    uVar7 = uVar5 - 1;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = uVar7 & uVar6;
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar6 / uVar5;
        }
        uVar8 = uVar6 - uVar8 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        return (long *)0x0;
      }
      do {
        uVar4 = plVar3[1];
        if (uVar4 == uVar6) {
          plStack_88 = plVar3 + 2;
          plStack_80 = plVar3 + 0xb;
          plStack_78 = plVar3 + 0xe;
          plStack_70 = plVar3 + 0x11;
          puVar2 = &uStack_61;
          lStack_a8 = param_2;
          lStack_a0 = param_2 + 0x48;
          lStack_98 = param_2 + 0x60;
          lStack_90 = param_2 + 0x78;
          FUN_109d2d6b8(puVar2,&plStack_88,&lStack_a8);
          if (((ulong)puVar2 & 1) != 0) {
            return plVar3;
          }
        }
        else {
          if ((uVar5 & uVar7) == 0) {
            uVar4 = uVar4 & uVar7;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar8) {
            return (long *)0x0;
          }
        }
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109d26c40; end: 109d26db7;  */

void FUN_109d26c40(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar2 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_2);
  if (plVar7 == param_1 + 2) {
LAB_109d26ccc:
    if (lVar3 == 0) {
LAB_109d26cfc:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_109d26d04;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_109d26cfc;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_109d26ccc;
LAB_109d26d04:
    if (lVar3 == 0) goto LAB_109d26d40;
  }
  uVar8 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*param_1 + uVar8 * 8) = plVar7;
    lVar3 = *param_2;
  }
LAB_109d26d40:
  *plVar7 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  FUN_109d265e4(param_2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109d26db8; end: 109d26f8f;  */

void FUN_109d26db8(undefined8 *param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  puVar5 = (undefined8 *)0xb0;
  __Znwm();
  puVar5[2] = 0;
  puVar5[1] = 0x200000006;
  *(undefined2 *)(puVar5 + 3) = 4;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = puVar5 + 3;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_DAT_110b3f818;
  *(undefined1 *)(puVar5 + 0x13) = 0;
  *(undefined1 *)(puVar5 + 0x15) = 0;
  plVar6 = (long *)0x38;
  puStack_48 = puVar5;
  __Znwm();
  plVar9 = plVar6 + 1;
  *plVar9 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110b3f850;
  plVar6[5] = (long)puVar5;
  plStack_50 = (long *)0x0;
  *(undefined4 *)(plVar6 + 6) = 0;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = *plVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar1 = plVar6 + 2;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar6[3] = (long)(plVar6 + 3);
  plVar6[4] = (long)plVar6;
  do {
    lVar7 = *plVar9;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
  FUN_109d26860(&uStack_60,plVar6 + 3);
  puVar5 = puStack_48;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = *plVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puStack_48 = (undefined8 *)0x0;
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[2] = plVar6 + 3;
  param_1[3] = plVar6;
  param_1[4] = puVar5;
  do {
    lVar7 = *plVar9;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
  if (puStack_48 != (undefined8 *)0x0) {
    func_0x0001092b4274(&puStack_48);
  }
  if (plStack_50 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_50 + 1);
    do {
      uVar8 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar8 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar8 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plStack_50 + 8))();
      }
    }
  }
  return;
}



/* Entry: 109d26f90; end: 109d2706f;  */

long FUN_109d26f90(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001092b4274();
  }
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



/* Entry: 109d27070; end: 109d2707f;  */

void FUN_109d27070(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f850;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109d27080; end: 109d2709f;  */

void FUN_109d27080(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f850;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d270a0; end: 109d27117;  */

void FUN_109d270a0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
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
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 109d27118; end: 109d2711b;  */

void FUN_109d27118(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d2711c; end: 109d271b3;  */

void FUN_109d2711c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(param_1 + 0xa8) == '\x01') {
          func_0x000109a19d1c(param_1 + 0x98);
        }
        uVar9 = *param_2;
        *(undefined8 *)(param_1 + 0xa0) = param_2[1];
        *(undefined8 *)(param_1 + 0x98) = uVar9;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)(param_1 + 0xa8) = 1;
        *(undefined8 *)(param_1 + 0x10) = 2;
        uStack_78 = *(undefined8 *)(param_1 + 0x60);
        uStack_80 = *(undefined8 *)(param_1 + 0x58);
        uStack_68 = *(undefined8 *)(param_1 + 0x70);
        uStack_70 = *(undefined8 *)(param_1 + 0x68);
        uStack_58 = *(undefined8 *)(param_1 + 0x80);
        uStack_60 = *(undefined8 *)(param_1 + 0x78);
        uStack_c0 = *(undefined8 *)(param_1 + 0x18);
        uStack_b8 = *(undefined8 *)(param_1 + 0x20);
        uStack_a8 = *(undefined8 *)(param_1 + 0x30);
        uStack_b0 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 **)(param_1 + 0x88) = (undefined8 *)(param_1 + 0x18);
        *(undefined1 *)(param_1 + 0x19) = 0;
        uStack_98 = *(undefined8 *)(param_1 + 0x40);
        uStack_a0 = *(undefined8 *)(param_1 + 0x38);
        uStack_88 = *(undefined8 *)(param_1 + 0x50);
        uStack_90 = *(undefined8 *)(param_1 + 0x48);
        puVar5 = &uStack_c0;
        do {
          uVar6 = (ulong)*(byte *)((long)puVar5 + 1);
          if (uVar6 != 0) {
            puVar8 = (undefined8 *)((long)puVar5 + 0x20);
            do {
              uStack_48 = puVar8[-1];
              uStack_50 = puVar8[-2];
              uStack_40 = *puVar8;
              (*(code *)**(undefined8 **)*puVar8)((undefined8 *)*puVar8,&uStack_50);
              uVar6 = uVar6 - 1;
              puVar8 = puVar8 + 3;
            } while (uVar6 != 0);
          }
          puVar7 = *(undefined1 **)((long)puVar5 + 8);
          if (puVar5 != &uStack_c0) {
            _free(puVar5);
          }
          puVar5 = (undefined8 *)puVar7;
        } while (puVar7 != (undefined1 *)0x0);
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return;
    }
  } while( true );
}



/* Entry: 109d271b4; end: 109d27277;  */

long FUN_109d271b4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  func_0x000109a1aa5c(param_1 + 0x1d8);
  (*(code *)**(undefined8 **)(param_1 + 0x1a0))(param_1 + 0x1a0);
  (*(code *)**(undefined8 **)(param_1 + 0x160))(param_1 + 0x160);
  plVar5 = *(long **)(param_1 + 0x150);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  func_0x000109a1921c(param_1 + 0x138);
  (*(code *)**(undefined8 **)(param_1 + 0x100))(param_1 + 0x100);
  if (*(char *)(param_1 + 0xaf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x98));
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  func_0x000109378cec(&stack0xffffffffffffffd8);
  func_0x000109378cec(&stack0xffffffffffffffd8);
  return param_1;
}



/* Entry: 109d27278; end: 109d2746b;  */

undefined8 * FUN_109d27278(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000109379218();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  func_0x000109379218(param_1 + 3,*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x20),
                      (*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3) *
                      0x2e8ba2e8ba2e8ba3);
  if (*(char *)(param_2 + 0x47) < '\0') {
    func_0x000107c3192c(param_1 + 6,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38))
    ;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    param_1[8] = *(undefined8 *)(param_2 + 0x40);
    param_1[7] = uVar3;
    param_1[6] = uVar2;
  }
  if (*(char *)(param_2 + 0x5f) < '\0') {
    func_0x000107c3192c(param_1 + 9,*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x50))
    ;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
    param_1[10] = uVar3;
    param_1[9] = uVar2;
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  func_0x0001094078b0(param_1 + 0xc,*(long *)(param_2 + 0x60),*(long *)(param_2 + 0x68),
                      *(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x60) >> 2);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  func_0x0001092cc0dc(param_1 + 0xf,*(long *)(param_2 + 0x78),*(long *)(param_2 + 0x80),
                      *(long *)(param_2 + 0x80) - *(long *)(param_2 + 0x78) >> 2);
  uVar1 = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((long)param_1 + 0x93) = *(undefined4 *)(param_2 + 0x93);
  *(undefined4 *)(param_1 + 0x12) = uVar1;
  if (*(char *)(param_2 + 0xaf) < '\0') {
    func_0x000107c3192c(param_1 + 0x13,*(undefined8 *)(param_2 + 0x98),
                        *(undefined8 *)(param_2 + 0xa0));
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0xa0);
    uVar2 = *(undefined8 *)(param_2 + 0x98);
    param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
    param_1[0x14] = uVar3;
    param_1[0x13] = uVar2;
  }
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  uVar5 = *(undefined8 *)(param_2 + 200);
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  uVar7 = *(undefined8 *)(param_2 + 0xd8);
  uVar6 = *(undefined8 *)(param_2 + 0xd0);
  uVar8 = *(undefined8 *)(param_2 + 0xd9);
  *(undefined8 *)((long)param_1 + 0xe1) = *(undefined8 *)(param_2 + 0xe1);
  *(undefined8 *)((long)param_1 + 0xd9) = uVar8;
  param_1[0x19] = uVar5;
  param_1[0x18] = uVar4;
  param_1[0x1b] = uVar7;
  param_1[0x1a] = uVar6;
  param_1[0x17] = uVar3;
  param_1[0x16] = uVar2;
  param_1[0x1e] = *(undefined8 *)(param_2 + 0xf0);
  return param_1;
}



/* Entry: 109d2746c; end: 109d28187;  */

/* WARNING: Removing unreachable block (ram,0x000109d27ca4) */
/* WARNING: Removing unreachable block (ram,0x000109d27758) */
/* WARNING: Removing unreachable block (ram,0x000109d279c0) */
/* WARNING: Removing unreachable block (ram,0x000109d27a7c) */
/* WARNING: Removing unreachable block (ram,0x000109d277c8) */
/* WARNING: Removing unreachable block (ram,0x000109d27718) */

void FUN_109d2746c(undefined8 *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  code *pcStack_c0;
  long *plStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined8 *apuStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = *(long *)(param_3 + 0x10);
  lStack_a8 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_a0,param_2 + 1);
  plVar5 = (long *)0x100;
  __Znwm();
  *plVar5 = (long)FUN_109d2acf0;
  plVar5[1] = (long)FUN_109d2b148;
  plVar9 = plVar5 + 9;
  *plVar9 = lStack_a8;
  plVar5[0x1e] = lVar14;
  (*(code *)apuStack_a0[0][2])(plVar5 + 10,apuStack_a0);
  puVar6 = (undefined8 *)0xb0;
  __Znwm();
  plVar8 = puVar6 + 1;
  puVar6[2] = 0;
  *plVar8 = 0x200000006;
  *(undefined2 *)(puVar6 + 3) = 4;
  lVar12 = 0;
  lVar13 = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = puVar6 + 3;
  puVar6[0x12] = 0;
  *puVar6 = &PTR_DAT_110b3f818;
  *(undefined1 *)(puVar6 + 0x13) = 0;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  ppuVar10 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  plVar5[3] = lVar13;
  plVar5[2] = lVar12;
  plVar5[5] = lVar13;
  plVar5[4] = lVar12;
  plVar5[6] = 0;
  FUN_109d18960(plVar5 + 2,*ppuVar10,0);
  plVar5[7] = (long)puVar6;
  plVar5[8] = (long)puVar6;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *param_1 = puVar6;
  FUN_109d28188(plVar5 + 0x19,lVar14,lVar14 + 0xf8,*(undefined1 *)(lVar14 + 0x148));
  if (*(char *)(lVar14 + 0xaf) < '\0') {
    func_0x000107c3192c(plVar5 + 0x16,*(undefined8 *)(lVar14 + 0x98),*(undefined8 *)(lVar14 + 0xa0))
    ;
  }
  else {
    lVar13 = *(long *)(lVar14 + 0xa0);
    lVar12 = *(long *)(lVar14 + 0x98);
    plVar5[0x18] = *(long *)(lVar14 + 0xa8);
    plVar5[0x17] = lVar13;
    plVar5[0x16] = lVar12;
  }
  plVar8 = plVar9;
  (*(code *)*plVar9)();
  if ((int)plVar8 == 0) {
    if (*(char *)(*(long *)(lVar14 + 0x160) + 8) == '\x01') {
      (**(code **)(lVar14 + 0x158))(lVar14 + 0x158);
    }
    FUN_109d06cf4(plVar5 + 0x1b,plVar5 + 0x16,plVar5 + 0x19);
    *(undefined1 *)(plVar5 + 0x15) = 0;
    plVar5[0x14] = 0;
    plVar5[0x13] = 0;
    plVar5[0x12] = 0;
    plVar5[0x11] = 0;
    if ((*(char *)(lVar14 + 0x149) == '\x01') && (lVar14 = *(long *)(lVar14 + 0x150), lVar14 != 0))
    {
      plVar7 = (long *)0x130;
      __Znwm();
      plVar7[2] = 0;
      plVar7[1] = 0x200000006;
      *(undefined2 *)(plVar7 + 3) = 4;
      plVar7[5] = 0;
      plVar7[4] = 0;
      plVar7[7] = 0;
      plVar7[6] = 0;
      plVar7[9] = 0;
      plVar7[8] = 0;
      plVar7[0xb] = 0;
      plVar7[10] = 0;
      plVar7[0xd] = 0;
      plVar7[0xc] = 0;
      plVar7[0xf] = 0;
      plVar7[0xe] = 0;
      plVar7[0x10] = 0;
      plVar7[0x11] = (long)(plVar7 + 3);
      plVar7[0x12] = 0;
      *(undefined1 *)(plVar7 + 0x13) = 0;
      *(undefined1 *)(plVar7 + 0x18) = 0;
      *plVar7 = (long)&PTR_FUN_110b3f8a0;
      plVar15 = plVar7 + 0x19;
      *plVar15 = plVar5[0x1b];
      plVar5[0x1b] = 0;
      plVar8 = (long *)(lVar14 + 8);
      plVar7[0x1a] = lVar14;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar7[0x1d] = 0;
      plVar7[0x1e] = 0x32aaaba7;
      plVar7[0x25] = 0;
      plVar7[0x20] = 0;
      plVar7[0x1f] = 0;
      plVar7[0x22] = 0;
      plVar7[0x21] = 0;
      plVar7[0x24] = 0;
      plVar7[0x23] = 0;
      lStack_d0 = 0;
      plVar7[0x1b] = (long)plVar7;
      plVar7[0x1c] = 0;
      plStack_c8 = plVar15;
      if (((uint)*(undefined8 *)(plVar7[0x1a] + 0x10) >> 1 & 1) == 0) {
        __ZNSt3__15mutex4lockEv(plVar7 + 0x1e);
        lVar14 = *plVar15;
        plVar8 = (long *)(lVar14 + 0x10);
        do {
          lVar12 = *plVar8;
          if (lVar12 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar12 = lVar14 + 0x18;
              pcStack_c0 = FUN_109d28c7c;
              ppuStack_b0 = &PTR_PTR_1132fed68;
              plStack_b8 = plVar15;
              func_0x000109d1b588(lVar12,&pcStack_c0);
              *(undefined8 *)(lVar14 + 0x10) = 0;
              plStack_c8[3] = lVar12;
              lVar14 = plVar7[0x1a];
              plVar8 = (long *)(lVar14 + 0x10);
              goto LAB_109d279ac;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar12 >> 1 & 1) == 0);
        plStack_c8[3] = 0;
        lVar14 = plVar7[0x1b];
        plVar8 = (long *)(lVar14 + 0x10);
        do {
          lVar12 = *plVar8;
          if (lVar12 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = 2;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              func_0x000109d1b4dc(lVar14 + 0x18);
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar12 >> 1 & 1) == 0);
        plVar8 = (long *)plVar7[0x1a];
        plVar7[0x1a] = 0;
        if (plVar8 != (long *)0x0) {
          puVar1 = (ulong *)(plVar8 + 1);
          do {
            uVar11 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar11 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            do {
              uVar11 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar11 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar8 + 8))(plVar8);
            }
          }
        }
        lVar14 = plVar7[0x1b];
        plVar7[0x1b] = 0;
        if (lVar14 != 0) {
          func_0x0001092b4274(plVar7 + 0x1b);
        }
        plVar5[0x1d] = *plVar15;
        *plVar15 = 0;
        plStack_d8 = plVar7;
LAB_109d27bec:
        __ZNSt3__15mutex6unlockEv(plVar7 + 0x1e);
      }
      else {
        lVar14 = plVar7[0x1b];
        plVar8 = plVar7;
        FUN_109d1857c();
        func_0x000109d1b350(lVar14,plVar8);
        plVar8 = (long *)*plVar15;
        *plVar15 = 0;
        if (plVar8 != (long *)0x0) {
          puVar1 = (ulong *)(plVar8 + 1);
          do {
            uVar11 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar11 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar11 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
        }
        plVar8 = (long *)plVar7[0x1a];
        plVar7[0x1a] = 0;
        if (plVar8 != (long *)0x0) {
          puVar1 = (ulong *)(plVar8 + 1);
          do {
            uVar11 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar11 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            do {
              uVar11 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar11 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar8 + 8))(plVar8);
            }
          }
        }
        lVar14 = plVar7[0x1b];
        plVar7[0x1b] = 0;
        if (lVar14 != 0) {
          func_0x0001092b4274(plVar7 + 0x1b);
        }
        plVar5[0x1d] = (long)plVar7;
        plStack_d8 = (long *)0x0;
      }
      if (lStack_d0 != 0) {
        func_0x0001092b4274(&lStack_d0);
      }
      if (plStack_d8 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_d8 + 1);
        do {
          uVar11 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar11 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar11 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plStack_d8 + 8))();
          }
        }
      }
      plVar5[0x1c] = plVar5[0x1d];
      plVar8 = (long *)(plVar5[0x1d] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((uint)*(undefined8 *)(plVar5[0x1c] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(plVar5 + 0x1f) = 0;
        lVar14 = plVar5[0x1c];
        plVar8 = (long *)(lVar14 + 0x10);
        ppuVar10 = (undefined **)plVar5[3];
        do {
          lVar12 = *plVar8;
          if (lVar12 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_109d27eec;
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar12 >> 1 & 1) == 0);
      }
      lVar14 = plVar5[0x1c];
      if (((uint)*(undefined8 *)(plVar5[0x1c] + 0x10) >> 5 & 1) != 0) {
        func_0x0001092af97c(lVar14 + 0x90);
        goto LAB_109d27f70;
      }
      lVar13 = *(long *)(lVar14 + 0x98);
      *(undefined8 *)(lVar14 + 0x98) = 0;
      lVar12 = plVar5[0x11];
      plVar5[0x11] = lVar13;
      if (lVar12 != 0) {
        FUN_109cda590();
        __ZdlPv();
      }
      if (*(char *)((long)plVar5 + 0xa7) < '\0') {
        __ZdlPv(plVar5[0x12]);
      }
      lVar13 = *(long *)(lVar14 + 0xa8);
      lVar12 = *(long *)(lVar14 + 0xa0);
      plVar5[0x14] = *(long *)(lVar14 + 0xb0);
      plVar5[0x13] = lVar13;
      plVar5[0x12] = lVar12;
      *(undefined1 *)(lVar14 + 0xb7) = 0;
      *(undefined1 *)(lVar14 + 0xa0) = 0;
      *(undefined1 *)(plVar5 + 0x15) = *(undefined1 *)(lVar14 + 0xb8);
      plVar8 = (long *)plVar5[0x1c];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar11 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar11 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar11 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = (long *)plVar5[0x1d];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar11 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar11 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1 - 1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar11;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          goto LAB_109d27d9c;
        }
      }
    }
    else {
      plVar5[0x1c] = plVar5[0x1b];
      plVar8 = (long *)(plVar5[0x1b] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((uint)*(undefined8 *)(plVar5[0x1c] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(plVar5 + 0x1f) = 1;
        lVar14 = plVar5[0x1c];
        plVar8 = (long *)(lVar14 + 0x10);
        ppuVar10 = (undefined **)plVar5[3];
        do {
          lVar12 = *plVar8;
          if (lVar12 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_109d27eec;
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar12 >> 1 & 1) == 0);
      }
      lVar14 = plVar5[0x1c];
      if (((uint)*(undefined8 *)(plVar5[0x1c] + 0x10) >> 5 & 1) != 0) {
        func_0x0001092af97c(lVar14 + 0x90);
        goto LAB_109d27f70;
      }
      lVar13 = *(long *)(lVar14 + 0x98);
      *(undefined8 *)(lVar14 + 0x98) = 0;
      lVar12 = plVar5[0x11];
      plVar5[0x11] = lVar13;
      if (lVar12 != 0) {
        FUN_109cda590();
        __ZdlPv();
      }
      if (*(char *)((long)plVar5 + 0xa7) < '\0') {
        __ZdlPv(plVar5[0x12]);
      }
      lVar13 = *(long *)(lVar14 + 0xa8);
      lVar12 = *(long *)(lVar14 + 0xa0);
      plVar5[0x14] = *(long *)(lVar14 + 0xb0);
      plVar5[0x13] = lVar13;
      plVar5[0x12] = lVar12;
      *(undefined1 *)(lVar14 + 0xb7) = 0;
      *(undefined1 *)(lVar14 + 0xa0) = 0;
      *(undefined1 *)(plVar5 + 0x15) = *(undefined1 *)(lVar14 + 0xb8);
      plVar8 = (long *)plVar5[0x1c];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar11 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar11 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1 - 1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar11;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_109d27d9c:
          if (uVar11 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
    }
    lVar14 = plVar5[0x1e];
    FUN_109d282c8(&pcStack_c0,plVar5 + 0x11,lVar14,lVar14 + 0x138,*(undefined1 *)(lVar14 + 0x148),
                  lVar14 + 0x158,plVar9);
    FUN_109d28288(plVar5 + 2,&pcStack_c0);
    plVar9 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar8 = plStack_b8 + 1;
      do {
        lVar14 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (*(char *)((long)plVar5 + 0xa7) < '\0') {
      __ZdlPv(plVar5[0x12]);
    }
    if (plVar5[0x11] != 0) {
      FUN_109cda590();
      __ZdlPv();
    }
    plVar9 = (long *)plVar5[0x1b];
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar11 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar11 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar11 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    if (*(char *)((long)plVar5 + 199) < '\0') {
      __ZdlPv(plVar5[0x16]);
    }
    plVar9 = (long *)plVar5[0x1a];
    if (plVar9 != (long *)0x0) {
      plVar8 = plVar9 + 1;
      do {
        lVar14 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    func_0x000109d1a1d0(plVar5 + 2);
    (**(code **)plVar5[10])(plVar5 + 10);
    __ZdlPv(plVar5);
    goto LAB_109d27f00;
  }
LAB_109d27f4c:
  func_0x000105688514(&UNK_10f5accd0);
LAB_109d27f70:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109d27f74);
  (*pcVar4)();
LAB_109d279ac:
  do {
    lVar13 = *plVar8;
    if (lVar13 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar12 = lVar14 + 0x18;
        pcStack_c0 = FUN_109d28e74;
        ppuStack_b0 = &PTR_PTR_1132fed68;
        plStack_b8 = plVar15;
        func_0x000109d1b588(lVar12,&pcStack_c0);
        *(undefined8 *)(lVar14 + 0x10) = 0;
        plStack_c8[4] = lVar12;
        plVar5[0x1d] = (long)plVar7;
        goto LAB_109d27be8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar13 >> 1 & 1) == 0);
  plStack_c8[4] = 0;
  lVar14 = plVar7[0x1b];
  FUN_109d1857c();
  func_0x000109d1b350(lVar14,lVar12);
  plVar8 = (long *)plVar7[0x1a];
  plVar7[0x1a] = 0;
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar11 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar11 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      do {
        uVar11 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar11 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  lVar12 = *plVar15;
  plVar8 = (long *)(lVar12 + 0x10);
  lVar14 = plStack_c8[3];
  while (lVar13 = *plVar8, lVar13 != 0) {
    ClearExclusiveLocal();
LAB_109d27a90:
    if (((uint)lVar13 >> 1 & 1) != 0) goto LAB_109d27be0;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar3) {
    *plVar8 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_109d27a90;
  pcStack_c0 = FUN_109d28c7c;
  ppuStack_b0 = &PTR_PTR_1132fed68;
  plStack_b8 = plVar15;
  FUN_109d1b624(lVar12 + 0x18,&pcStack_c0,lVar14);
  *(undefined8 *)(lVar12 + 0x10) = 0;
  plStack_c8[3] = 0;
  plVar8 = (long *)*plVar15;
  *plVar15 = 0;
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar11 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar11 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      do {
        uVar11 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar11 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  lVar14 = plVar7[0x1b];
  plVar7[0x1b] = 0;
  if (lVar14 != 0) {
    func_0x0001092b4274(plVar7 + 0x1b);
  }
LAB_109d27be0:
  plVar5[0x1d] = (long)plVar7;
LAB_109d27be8:
  plStack_d8 = (long *)0x0;
  goto LAB_109d27bec;
LAB_109d27eec:
  ppuStack_b0 = ppuVar10;
  pcStack_c0 = (code *)0x0;
  plStack_b8 = plVar5;
  func_0x000109d1b588(lVar14 + 0x18,&pcStack_c0);
  *(undefined8 *)(lVar14 + 0x10) = 0;
LAB_109d27f00:
  (*(code *)*apuStack_a0[0])(apuStack_a0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  goto LAB_109d27f4c;
}



/* Entry: 109d28188; end: 109d28287;  */

void FUN_109d28188(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auStack_60 [24];
  byte bStack_48;
  long lStack_38;
  
  puVar6 = auStack_60;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (*(code *)*param_3)(auStack_60,param_3);
  puVar4 = (undefined8 *)0x120;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar5 = puVar4 + 3;
  *puVar4 = &PTR_DAT_110af4c20;
  FUN_109d03d44(puVar5,param_2,auStack_60,param_2 + 0x60,param_2 + 0x78,param_4);
  *param_1 = puVar5;
  param_1[1] = puVar4;
  (*(code *)(&PTR_DAT_110af4bf0)[bStack_48])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__119__shared_weak_countD2Ev(puVar4);
  __ZdlPv();
  (*(code *)(&PTR_DAT_110af4bf0)[bStack_48])(auStack_60);
  __Unwind_Resume();
  plVar9 = (long *)(puVar6 + 0x30);
  FUN_109d2711c(*plVar9);
  plVar7 = (long *)*plVar9;
  *plVar9 = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar8 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar8 >> 0x21 == 1) {
      FUN_109d1b3c4(plVar7,1,plVar9);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar7 != (long *)0x0) && (uVar8 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 8))(plVar7);
        return;
      }
    }
    return;
  }
  return;
}



/* Entry: 109d28288; end: 109d282c7;  */

void FUN_109d28288(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  FUN_109d2711c(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 109d282c8; end: 109d28c7b;  */

void FUN_109d282c8(long *param_1,long *param_2,long **param_3,undefined8 param_4,int param_5,
                  long param_6,undefined8 *param_7)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long lStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  long lStack_3b8;
  long alStack_3b0 [3];
  long alStack_398 [3];
  undefined8 uStack_380;
  char cStack_369;
  undefined8 uStack_368;
  char cStack_351;
  long lStack_350;
  long lStack_348;
  long lStack_338;
  long lStack_330;
  undefined8 uStack_318;
  char cStack_301;
  long *plStack_2b0;
  long lStack_2a8;
  long alStack_2a0 [3];
  long alStack_288 [3];
  undefined8 uStack_270;
  char cStack_259;
  undefined8 uStack_258;
  char cStack_241;
  long lStack_240;
  long lStack_238;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_208;
  char cStack_1f1;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *aplStack_178 [3];
  undefined8 uStack_160;
  char cStack_149;
  undefined8 uStack_148;
  char cStack_131;
  long lStack_130;
  long lStack_128;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_f8;
  char cStack_e1;
  long **pplStack_90;
  long **pplStack_88;
  long **pplStack_80;
  long **pplStack_78;
  undefined1 auStack_69 [9];
  
  if ((param_5 == 0) || (*param_2 != 0)) {
    (*(code *)*param_7)();
    if ((int)param_7 != 0) goto LAB_109d28b00;
    if (*(char *)(*(long *)(param_6 + 0x48) + 8) == '\x01') {
      (**(code **)(param_6 + 0x40))();
    }
    if (*(undefined1 **)(param_6 + 0x80) != (undefined1 *)0x0) {
      **(undefined1 **)(param_6 + 0x80) = (char)param_2[4];
    }
    *param_1 = 0;
    param_1[1] = 0;
    if (*param_2 == 0) {
      return;
    }
    lVar6 = 0x10;
    __Znwm();
    func_0x000109d22e64();
    FUN_109d25d68();
    plVar4 = plRam00000001137e1da8;
    __ZNSt3__115recursive_mutex4lockEv(plRam00000001137e1da8 + 2);
    lStack_3d0 = 0;
    plStack_3c8 = (long *)0x0;
    FUN_109d26a54(&plStack_1a0,plVar4,param_3);
    plVar18 = plStack_198;
    plVar7 = plStack_1a0;
    if (plStack_198 != (long *)0x0) {
      plVar19 = plStack_198 + 1;
      do {
        lVar11 = *plVar19;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar2) {
          *plVar19 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    if (plVar7 == (long *)0x0) {
      lStack_2a8 = plVar4[1];
      plStack_2b0 = (long *)*plVar4;
      if (plVar4[1] != 0) {
        plVar7 = (long *)(plVar4[1] + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_109d27278(alStack_2a0,param_3);
      lStack_3b8 = lStack_2a8;
      plStack_3c0 = plStack_2b0;
      plStack_2b0 = (long *)0x0;
      lStack_2a8 = 0;
      FUN_109d27278(alStack_3b0,alStack_2a0);
      plVar7 = (long *)0x128;
      __Znwm();
      plStack_198 = (long *)lStack_3b8;
      plStack_1a0 = plStack_3c0;
      plStack_3c0 = (long *)0x0;
      lStack_3b8 = 0;
      FUN_109d27278(&plStack_190,alStack_3b0);
      *plVar7 = (long)&PTR_FUN_110b3f8d8;
      plVar7[1] = 0;
      plVar7[2] = 0;
      plVar7[3] = lVar6;
      plVar7[5] = (long)plStack_198;
      plVar7[4] = (long)plStack_1a0;
      plStack_1a0 = (long *)0x0;
      plStack_198 = (long *)0x0;
      FUN_109d27278(plVar7 + 6,&plStack_190);
      if (cStack_e1 < '\0') {
        __ZdlPv(uStack_f8);
      }
      if (lStack_118 != 0) {
        lStack_110 = lStack_118;
        __ZdlPv();
      }
      if (lStack_130 != 0) {
        lStack_128 = lStack_130;
        __ZdlPv();
      }
      if (cStack_131 < '\0') {
        __ZdlPv(uStack_148);
      }
      if (cStack_149 < '\0') {
        __ZdlPv(uStack_160);
      }
      pplStack_90 = aplStack_178;
      func_0x000109378cec(&pplStack_90);
      pplStack_90 = &plStack_190;
      func_0x000109378cec(&pplStack_90);
      if (plStack_198 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar18 = plStack_3c8;
      lStack_3d0 = lVar6;
      if (plStack_3c8 != (long *)0x0) {
        plVar19 = plStack_3c8 + 1;
        do {
          lVar6 = *plVar19;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar2) {
            *plVar19 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          lVar6 = *plStack_3c8;
          plStack_3c8 = plVar7;
          (**(code **)(lVar6 + 0x10))(plVar18);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          plVar7 = plStack_3c8;
        }
      }
      plStack_3c8 = plVar7;
      if (cStack_301 < '\0') {
        __ZdlPv(uStack_318);
      }
      if (lStack_338 != 0) {
        lStack_330 = lStack_338;
        __ZdlPv();
      }
      if (lStack_350 != 0) {
        lStack_348 = lStack_350;
        __ZdlPv();
      }
      if (cStack_351 < '\0') {
        __ZdlPv(uStack_368);
      }
      if (cStack_369 < '\0') {
        __ZdlPv(uStack_380);
      }
      plStack_1a0 = alStack_398;
      func_0x000109378cec(&plStack_1a0);
      plStack_1a0 = alStack_3b0;
      func_0x000109378cec(&plStack_1a0);
      if (lStack_3b8 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar7 = plVar4 + 10;
      plVar16 = param_3[0x1e];
      plVar18 = (long *)plVar4[0xb];
      plVar19 = param_1;
      if (plVar18 != (long *)0x0) {
        uVar17 = (long)plVar18 - 1;
        if (((ulong)plVar18 & uVar17) == 0) {
          plVar19 = (long *)(uVar17 & (ulong)plVar16);
        }
        else {
          plVar19 = plVar16;
          if (plVar18 <= plVar16) {
            uVar3 = 0;
            if (plVar18 != (long *)0x0) {
              uVar3 = (ulong)plVar16 / (ulong)plVar18;
            }
            plVar19 = (long *)((long)plVar16 - uVar3 * (long)plVar18);
          }
        }
        plVar9 = *(long **)(*plVar7 + (long)plVar19 * 8);
        if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
          do {
            plVar10 = (long *)plVar9[1];
            if (plVar10 == plVar16) {
              plStack_1a0 = plVar9 + 2;
              plStack_198 = plVar9 + 0xb;
              plStack_190 = plVar9 + 0xe;
              plStack_188 = plVar9 + 0x11;
              puVar8 = auStack_69;
              pplStack_90 = param_3;
              pplStack_88 = param_3 + 9;
              pplStack_80 = param_3 + 0xc;
              pplStack_78 = param_3 + 0xf;
              FUN_109d2d6b8(puVar8,&plStack_1a0,&pplStack_90);
              plVar10 = plStack_3c8;
              if (((ulong)puVar8 & 1) != 0) {
                lStack_3d0 = 0;
                plStack_3c8 = (long *)0x0;
                if (plVar10 != (long *)0x0) {
                  plVar7 = plVar10 + 1;
                  do {
                    lVar6 = *plVar7;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                    if (bVar2) {
                      *plVar7 = lVar6 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (lVar6 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
                  }
                }
                goto LAB_109d2896c;
              }
            }
            else {
              if (((ulong)plVar18 & uVar17) == 0) {
                plVar10 = (long *)((ulong)plVar10 & uVar17);
              }
              else if (plVar18 <= plVar10) {
                uVar3 = 0;
                if (plVar18 != (long *)0x0) {
                  uVar3 = (ulong)plVar10 / (ulong)plVar18;
                }
                plVar10 = (long *)((long)plVar10 - uVar3 * (long)plVar18);
              }
              if (plVar10 != plVar19) break;
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
      plVar9 = (long *)0x118;
      __Znwm();
      plStack_190 = (long *)0x0;
      *plVar9 = 0;
      plVar9[1] = (long)plVar16;
      plStack_1a0 = plVar9;
      plStack_198 = plVar7;
      FUN_109d27278(plVar9 + 2,param_3);
      plVar9[0x21] = lStack_3d0;
      plVar9[0x22] = (long)plStack_3c8;
      if (plStack_3c8 != (long *)0x0) {
        plVar10 = plStack_3c8 + 2;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = *plVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_190 = (long *)CONCAT71(plStack_190._1_7_,1);
      if ((plVar18 == (long *)0x0) ||
         (*(float *)(plVar4 + 0xe) * (float)plVar18 < (float)(plVar4[0xd] + 1))) {
        uVar17 = 1;
        if ((long *)0x2 < plVar18) {
          uVar17 = (ulong)(((ulong)plVar18 & (long)plVar18 - 1U) != 0);
        }
        plVar19 = (long *)(uVar17 | (long)plVar18 << 1);
        plVar18 = (long *)(long)((float)(plVar4[0xd] + 1) / *(float *)(plVar4 + 0xe));
        if (plVar19 <= plVar18) {
          plVar19 = plVar18;
        }
        if ((long)plVar19 - 1U == 0) {
          plVar19 = (long *)0x2;
        }
        else if (((ulong)plVar19 & (long)plVar19 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        plVar18 = (long *)plVar4[0xb];
        if (plVar18 < plVar19) {
LAB_109d28778:
          if ((ulong)plVar19 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_109d28bb0;
          }
          lVar6 = (long)plVar19 << 3;
          __Znwm();
          lVar11 = *plVar7;
          *plVar7 = lVar6;
          if (lVar11 != 0) {
            __ZdlPv();
          }
          plVar18 = (long *)0x0;
          plVar4[0xb] = (long)plVar19;
          do {
            *(undefined8 *)(*plVar7 + (long)plVar18 * 8) = 0;
            plVar18 = (long *)((long)plVar18 + 1);
          } while (plVar19 != plVar18);
          plVar10 = (long *)plVar4[0xc];
          plVar18 = plVar19;
          if (plVar10 != (long *)0x0) {
            plVar12 = (long *)plVar10[1];
            uVar17 = (long)plVar19 - 1;
            if (((ulong)plVar19 & uVar17) == 0) {
              plVar12 = (long *)((ulong)plVar12 & uVar17);
            }
            else if (plVar19 <= plVar12) {
              uVar3 = 0;
              if (plVar19 != (long *)0x0) {
                uVar3 = (ulong)plVar12 / (ulong)plVar19;
              }
              plVar12 = (long *)((long)plVar12 - uVar3 * (long)plVar19);
            }
            *(long **)(*plVar7 + (long)plVar12 * 8) = plVar4 + 0xc;
            plVar13 = (long *)*plVar10;
            while (plVar13 != (long *)0x0) {
              plVar15 = (long *)plVar13[1];
              if (((ulong)plVar19 & uVar17) == 0) {
                plVar15 = (long *)((ulong)plVar15 & uVar17);
              }
              else if (plVar19 <= plVar15) {
                uVar3 = 0;
                if (plVar19 != (long *)0x0) {
                  uVar3 = (ulong)plVar15 / (ulong)plVar19;
                }
                plVar15 = (long *)((long)plVar15 - uVar3 * (long)plVar19);
              }
              plVar14 = plVar13;
              if (plVar15 != plVar12) {
                lVar6 = *plVar7;
                if (*(long *)(lVar6 + (long)plVar15 * 8) == 0) {
                  *(long **)(lVar6 + (long)plVar15 * 8) = plVar10;
                  plVar12 = plVar15;
                }
                else {
                  *plVar10 = *plVar13;
                  *plVar13 = **(undefined8 **)(lVar6 + (long)plVar15 * 8);
                  **(long **)(lVar6 + (long)plVar15 * 8) = (long)plVar13;
                  plVar14 = plVar10;
                }
              }
              plVar10 = plVar14;
              plVar13 = (long *)*plVar14;
            }
          }
        }
        else if (plVar19 < plVar18) {
          plVar10 = (long *)(long)((float)(ulong)plVar4[0xd] / *(float *)(plVar4 + 0xe));
          if ((plVar18 < (long *)0x3) || (((ulong)plVar18 & (long)plVar18 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar10) {
            plVar10 = (long *)(1L << (-LZCOUNT((long)plVar10 + -1) & 0x3fU));
          }
          if (plVar19 <= plVar10) {
            plVar19 = plVar10;
          }
          if (plVar19 < plVar18) {
            if (plVar19 != (long *)0x0) goto LAB_109d28778;
            lVar6 = *plVar7;
            *plVar7 = 0;
            if (lVar6 != 0) {
              __ZdlPv();
            }
            plVar4[0xb] = 0;
            plVar18 = (long *)0x0;
          }
          else {
            plVar18 = (long *)plVar4[0xb];
          }
        }
        if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
          plVar19 = (long *)((long)plVar18 - 1U & (ulong)plVar16);
        }
        else {
          plVar19 = plVar16;
          if (plVar18 <= plVar16) {
            uVar17 = 0;
            if (plVar18 != (long *)0x0) {
              uVar17 = (ulong)plVar16 / (ulong)plVar18;
            }
            plVar19 = (long *)((long)plVar16 - uVar17 * (long)plVar18);
          }
        }
      }
      lVar6 = *plVar7;
      plVar16 = *(long **)(lVar6 + (long)plVar19 * 8);
      if (plVar16 == (long *)0x0) {
        plVar16 = plVar4 + 0xc;
        *plVar9 = *plVar16;
        *plVar16 = (long)plVar9;
        *(long **)(lVar6 + (long)plVar19 * 8) = plVar16;
        if (*plVar9 != 0) {
          plVar19 = *(long **)(*plVar9 + 8);
          if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
            plVar19 = (long *)((ulong)plVar19 & (long)plVar18 - 1U);
          }
          else if (plVar18 <= plVar19) {
            uVar17 = 0;
            if (plVar18 != (long *)0x0) {
              uVar17 = (ulong)plVar19 / (ulong)plVar18;
            }
            plVar19 = (long *)((long)plVar19 - uVar17 * (long)plVar18);
          }
          *(long **)(*plVar7 + (long)plVar19 * 8) = plVar9;
        }
      }
      else {
        *plVar9 = *plVar16;
        *plVar16 = (long)plVar9;
      }
      plVar4[0xd] = plVar4[0xd] + 1;
LAB_109d2896c:
      if (cStack_1f1 < '\0') {
        __ZdlPv(uStack_208);
      }
      if (lStack_228 != 0) {
        lStack_220 = lStack_228;
        __ZdlPv();
      }
      if (lStack_240 != 0) {
        lStack_238 = lStack_240;
        __ZdlPv();
      }
      if (cStack_241 < '\0') {
        __ZdlPv(uStack_258);
      }
      if (cStack_259 < '\0') {
        __ZdlPv(uStack_270);
      }
      plStack_1a0 = alStack_288;
      func_0x000109378cec(&plStack_1a0);
      plStack_1a0 = alStack_2a0;
      func_0x000109378cec(&plStack_1a0);
      if (lStack_2a8 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      lVar6 = 0;
    }
    __ZNSt3__115recursive_mutex6unlockEv(plVar4 + 2);
    func_0x000109d2926c(param_1,&lStack_3d0);
    plVar4 = plStack_3c8;
    if (plStack_3c8 != (long *)0x0) {
      plVar7 = plStack_3c8 + 1;
      do {
        lVar11 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_3c8 + 0x10))(plStack_3c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*param_1 != 0) {
      if (lVar6 != 0) {
        func_0x000109d23a1c(lVar6);
        __ZdlPv();
      }
      return;
    }
  }
  else {
    func_0x000105688514(&UNK_10f5accf7);
LAB_109d28b00:
    func_0x000105688514(&UNK_10f5accd0);
  }
  func_0x000105688514(&UNK_10f5acd18);
LAB_109d28bb0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109d28bb4);
  (*pcVar5)();
}



/* Entry: 109d28c7c; end: 109d28e73;  */

void FUN_109d28c7c(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong unaff_x21;
  ulong unaff_x22;
  code *pcVar10;
  code *pcStack_c8;
  long *plStack_c0;
  undefined **ppuStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  code *pcStack_80;
  long *plStack_78;
  code *pcStack_70;
  long *plStack_68;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined7 uStack_58;
  byte bStack_51;
  byte bStack_50;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_70 = FUN_109d28e74;
  uStack_60 = 0x1132fed68;
  uStack_59 = 0;
  plStack_68 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_70);
  lVar9 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    lVar7 = *param_1;
    plVar5 = *(long **)(lVar7 + 0xa0);
    pcVar10 = *(code **)(lVar7 + 0x98);
    uStack_48 = (undefined7)*(undefined8 *)(lVar7 + 0xa8);
    uStack_41 = (undefined1)*(undefined8 *)(lVar7 + 0xaf);
    uStack_40 = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0xaf) >> 8);
    bStack_51 = *(byte *)(lVar7 + 0xb7);
    unaff_x21 = (ulong)bStack_51;
    *(undefined8 *)(lVar7 + 0xa8) = 0;
    *(undefined8 *)(lVar7 + 0xb0) = 0;
    *(undefined8 *)(lVar7 + 0x98) = 0;
    *(undefined8 *)(lVar7 + 0xa0) = 0;
    bStack_50 = *(byte *)(lVar7 + 0xb8);
    unaff_x22 = (ulong)bStack_50;
    plVar4 = (long *)*param_1;
    *param_1 = 0;
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          pcStack_80 = pcVar10;
          plStack_78 = plVar5;
          (**(code **)(*plVar4 + 8))();
          pcVar10 = pcStack_80;
          plVar5 = plStack_78;
        }
      }
    }
    uStack_60 = uStack_48;
    uStack_59 = uStack_41;
    uStack_58 = uStack_40;
    pcStack_70 = pcVar10;
    plStack_68 = plVar5;
    FUN_109d087c8(lVar9,&pcStack_70);
    if ((char)bStack_51 < '\0') {
      __ZdlPv(plStack_68);
    }
    pcVar10 = pcStack_70;
    pcStack_70 = (code *)0x0;
    if (pcVar10 != (code *)0x0) {
      FUN_109cda590();
      __ZdlPv();
    }
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_70,*param_1 + 0x90);
    func_0x000109d1b350(lVar9,&pcStack_70);
    __ZNSt13exception_ptrD1Ev(&pcStack_70);
    plVar5 = (long *)*param_1;
    *param_1 = 0;
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  iVar6 = (int)param_1 + 0x18;
  plVar5 = param_1;
  FUN_109d291fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  pcStack_88 = FUN_109d28e74;
  uStack_b0 = unaff_x22;
  uStack_a8 = unaff_x21;
  lStack_a0 = lVar9;
  plStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  __ZNSt3__15mutex4lockEv(plVar5 + 5);
  pcStack_c8 = FUN_109d28c7c;
  ppuStack_b8 = &PTR_PTR_1132fed68;
  plVar4 = plVar5;
  plStack_c0 = plVar5;
  func_0x0001098adf90(plVar5,plVar5 + 3,&pcStack_c8);
  lVar9 = plVar5[2];
  FUN_109d1857c();
  func_0x000109d1b350(lVar9,plVar4);
  plVar4 = (long *)plVar5[1];
  plVar5[1] = 0;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar8 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  FUN_109d291fc(plVar5,plVar5 + 4);
  return;
}



/* Entry: 109d28e74; end: 109d28f53;  */

void FUN_109d28e74(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_109d28c7c;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
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
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_109d291fc(param_1,param_1 + 0x20);
  return;
}



/* Entry: 109d28f54; end: 109d28fc7;  */

long * FUN_109d28f54(long *param_1)

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



/* Entry: 109d28fc8; end: 109d291fb;  */

undefined8 * FUN_109d28fc8(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110b3f8a0;
  __ZNSt3__15mutexD1Ev(param_1 + 0x1e);
  if (param_1[0x1b] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x1a];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = (long *)param_1[0x19];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_FUN_110b3e530;
  func_0x000109d083cc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 109d291fc; end: 109d29303;  */

void FUN_109d291fc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lStack_28;
  
  *param_2 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x0001092b4274(&lStack_28,lVar1);
      if (lStack_28 != 0) {
        func_0x0001092b4274(&lStack_28);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 109d29304; end: 109d293c7;  */

void FUN_109d29304(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[1];
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    if (*param_1 != 0) {
      FUN_109d29558(*param_1,param_1 + 2);
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
  if (param_2 == 0) {
    return;
  }
  func_0x000109d23a1c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d293c8; end: 109d29443;  */

void FUN_109d293c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f8d8;
  FUN_109d2644c(param_1 + 6);
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109d29444; end: 109d29517;  */

void FUN_109d29444(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x18);
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_109d29558(*(long *)(param_1 + 0x20),param_1 + 0x30);
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
  if (lVar6 != 0) {
    func_0x000109d23a1c(lVar6);
    __ZdlPv();
  }
  FUN_109d2644c(param_1 + 0x30);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 109d29518; end: 109d29553;  */

long FUN_109d29518(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b3f918);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d29554; end: 109d29557;  */

void FUN_109d29554(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d29558; end: 109d295c7;  */

void FUN_109d29558(long param_1,undefined8 param_2)

{
  long lVar1;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x10);
  lVar1 = param_1 + 0x50;
  FUN_109d26b28(lVar1,param_2);
  if ((lVar1 != 0) &&
     ((*(long *)(lVar1 + 0x110) == 0 || (*(long *)(*(long *)(lVar1 + 0x110) + 8) == -1)))) {
    FUN_109d26c40(param_1 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_1 + 0x10);
  return;
}



/* Entry: 109d295c8; end: 109d296a3;  */

void FUN_109d295c8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 != 0) {
    func_0x000109a1aa5c(lVar5 + 0x1d8);
    (*(code *)**(undefined8 **)(lVar5 + 0x1a0))(lVar5 + 0x1a0);
    (*(code *)**(undefined8 **)(lVar5 + 0x160))(lVar5 + 0x160);
    plVar6 = *(long **)(lVar5 + 0x150);
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar4 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        do {
          uVar4 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar4 - 1 == 0) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    func_0x000109a1921c(lVar5 + 0x138);
    (*(code *)**(undefined8 **)(lVar5 + 0x100))(lVar5 + 0x100);
    FUN_109d2644c(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109d296a4; end: 109d296bb;  */

void FUN_109d296a4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 109d296bc; end: 109d2972f;  */

long FUN_109d296bc(long param_1)

{
  FUN_109d2644c(param_1 + 0xa8);
  if (*(long *)(param_1 + 0xa0) != 0) {
    func_0x0001092b4274();
  }
  func_0x000109a1aa04(param_1 + 0x90);
  (*(code *)**(undefined8 **)(param_1 + 0x58))();
  (*(code *)**(undefined8 **)(param_1 + 0x18))((undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109d29730; end: 109d297c3;  */

long FUN_109d29730(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x18);
  if (plVar7 != (long *)0x0) {
    puVar2 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      do {
        uVar5 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001092b4274();
  }
  plVar7 = *(long **)(param_1 + 8);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return param_1;
}


