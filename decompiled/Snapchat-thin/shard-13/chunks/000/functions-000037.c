/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109de7584; end: 109de75bf;  */

long FUN_109de7584(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b5b778);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109de75c0; end: 109de75cb;  */

undefined ** FUN_109de75c0(void)

{
  return &PTR_DAT_110b5b778;
}



/* Entry: 109de75cc; end: 109de7623;  */

undefined8 * FUN_109de75cc(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b5b798;
  plVar1 = (long *)param_1[0x17];
  if (plVar1 == param_1 + 0x14) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto SUB_109d2f664;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
SUB_109d2f664:
  *param_1 = &PTR____cxa_pure_virtual_110b5bf28;
  if (param_1[0xc] != param_1[0xb]) {
    _free();
  }
  if ((undefined8 *)param_1[8] != param_1 + 10) {
    _free();
  }
  return param_1;
}



/* Entry: 109de7624; end: 109de769b;  */

ulong FUN_109de7624(long param_1,undefined2 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uStack_34;
  
  uStack_34 = 0;
  uVar1 = param_1 + 0x98;
  func_0x000109df3a40(uVar1,param_1);
  if ((uVar1 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x80) = uStack_34;
    *(undefined2 *)(param_1 + 0xc) = param_2;
    plVar2 = *(long **)(param_1 + 0xb8);
    if (plVar2 == (long *)0x0) {
      func_0x000104c501e4();
      return 1;
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_34);
  }
  return uVar1;
}



/* Entry: 109de769c; end: 109de76a3;  */

undefined8 FUN_109de769c(void)

{
  return 1;
}



/* Entry: 109de76a4; end: 109de76ff;  */

void FUN_109de76a4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b5b798;
  plVar1 = (long *)param_1[0x17];
  if (plVar1 == param_1 + 0x14) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109de76ec;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109de76ec:
  func_0x000109d2f664(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109de7700; end: 109de771b;  */

long FUN_109de7700(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 7;
  if (*(long *)(param_1 + 0x18) != 1) {
    lVar3 = *(long *)(param_1 + 0x18) + 7;
  }
  lVar2 = param_1;
  (**(code **)(*(long *)(param_1 + 0x98) + 0x10))();
  if (lVar2 != 0) {
    lVar1 = 3;
    if ((*(ushort *)(param_1 + 10) & 0x400) != 0) {
      lVar1 = 6;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
    }
    lVar3 = lVar1 + lVar3 + lVar2;
  }
  return lVar3;
}



/* Entry: 109de771c; end: 109de778b;  */

void FUN_109de771c(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined **ppuStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (param_3 == 0) {
    if ((*(char *)(param_1 + 0x94) != '\x01') ||
       (iVar1 = *(int *)(param_1 + 0x80), *(int *)(param_1 + 0x90) == iVar1)) {
      return;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x80);
  }
  uStack_18 = *(undefined4 *)(param_1 + 0x90);
  uStack_14 = *(undefined1 *)(param_1 + 0x94);
  ppuStack_20 = &PTR_DAT_110b5b8e8;
  FUN_109df4950(param_1 + 0x98,param_1,iVar1,&ppuStack_20,param_2);
  return;
}



/* Entry: 109de778c; end: 109de77b7;  */

void FUN_109de778c(long param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x94) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0x90);
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  return;
}



/* Entry: 109de77b8; end: 109de77db;  */

void FUN_109de77b8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110b5b848;
  return;
}



/* Entry: 109de77dc; end: 109de77f7;  */

void FUN_109de77dc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110b5b848;
  return;
}



/* Entry: 109de77f8; end: 109de7833;  */

long FUN_109de77f8(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b5b8b8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109de7834; end: 109de78e3;  */

undefined ** FUN_109de7834(void)

{
  return &PTR_DAT_110b5b8b8;
}



/* Entry: 109de78e4; end: 109de7b87;  */

void FUN_109de78e4(undefined8 *param_1,uint param_2,int param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  int *piVar11;
  undefined *puVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  uint *puVar18;
  long lStack_80;
  uint uStack_78;
  long lStack_70;
  uint auStack_68 [2];
  
  bVar10 = 9;
  if (param_3 == 0) {
    bVar10 = 1;
  }
  *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf0 | bVar10;
  piVar11 = (int *)*param_1;
  iVar1 = piVar11[4];
  iVar8 = *piVar11;
  if (iVar1 != 1) {
    iVar8 = iVar8 + 1;
  }
  *(int *)(param_1 + 2) = iVar8;
  uVar2 = piVar11[2];
  plVar16 = param_1 + 1;
  if (uVar2 - 0x40 < 0xffffff80) {
    plVar16 = (long *)*plVar16;
  }
  uVar3 = uVar2 + 0x40 >> 6;
  auStack_68[0] = 1;
  lStack_70 = 0;
  if (iVar1 == 1) {
    puVar18 = auStack_68;
    func_0x000109d301b0(&lStack_80,uVar2 - 1,0xffffffffffffffff,1);
    param_2 = 0;
    lStack_70 = lStack_80;
    auStack_68[0] = uStack_78;
    param_4 = &lStack_70;
LAB_109de79c8:
    lVar7 = lStack_70;
    uVar17 = auStack_68[0];
    if ((uint)((ulong)uStack_78 + 0x3f >> 6) < uVar3) {
      bVar4 = false;
      goto LAB_109de79ec;
    }
LAB_109de7a40:
    if (0x40 < uStack_78) {
      param_4 = (long *)*param_4;
    }
    uVar9 = (uint)((ulong)uStack_78 + 0x3f >> 6);
    uVar5 = uVar3;
    if (uVar9 <= uVar3) {
      uVar5 = uVar9;
    }
    uVar14 = (ulong)uVar5;
    plVar13 = plVar16;
    if (uVar5 != 0) {
      do {
        *plVar13 = *param_4;
        uVar14 = uVar14 - 1;
        plVar13 = plVar13 + 1;
        param_4 = param_4 + 1;
      } while (uVar14 != 0);
    }
    puVar12 = (undefined *)*param_1;
    iVar8 = *(int *)(puVar12 + 8);
    uVar5 = iVar8 - 1U >> 6;
    plVar16[uVar5] = plVar16[uVar5] & (-1L << ((ulong)(iVar8 - 1U) & 0x3f) ^ 0xffffffffffffffffU);
    while (uVar5 = uVar5 + 1, uVar5 != uVar3) {
      plVar16[uVar5] = 0;
    }
    uVar14 = (ulong)(iVar8 - 2);
    if (param_2 == 0) goto LAB_109de7a24;
LAB_109de7ac0:
    plVar16[uVar14 >> 6] = plVar16[uVar14 >> 6] & (1L << (uVar14 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar2 < 0xffffffc0) {
      if (*plVar16 != 0) goto LAB_109de7afc;
      uVar14 = 0;
      do {
        if ((ulong)uVar3 - 1 == uVar14) goto LAB_109de7ae0;
        lVar6 = uVar14 + 1;
        uVar14 = uVar14 + 1;
      } while (plVar16[lVar6] == 0);
      if (uVar14 < uVar3) goto LAB_109de7afc;
    }
LAB_109de7ae0:
    uVar15 = (ulong)(iVar8 - 3U >> 6);
    uVar14 = plVar16[uVar15] | 1L << ((ulong)(iVar8 - 3U) & 0x3f);
  }
  else {
    puVar18 = (uint *)(param_4 + 1);
    if (param_4 != (long *)0x0) {
      uStack_78 = *puVar18;
      goto LAB_109de79c8;
    }
    bVar4 = true;
LAB_109de79ec:
    uVar17 = auStack_68[0];
    lVar7 = lStack_70;
    *plVar16 = 0;
    if (0x7f < uVar2 + 0x40) {
      _bzero(plVar16 + 1,(ulong)(uVar3 - 1) << 3);
    }
    if (!bVar4) {
      uStack_78 = *puVar18;
      goto LAB_109de7a40;
    }
    puVar12 = (undefined *)*param_1;
    iVar8 = *(int *)(puVar12 + 8);
    uVar14 = (ulong)(iVar8 - 2);
    if ((param_2 & 1) != 0) goto LAB_109de7ac0;
LAB_109de7a24:
    uVar15 = uVar14 >> 6;
    uVar14 = 1L << (uVar14 & 0x3f) | plVar16[uVar15];
  }
  plVar16[uVar15] = uVar14;
LAB_109de7afc:
  if (puVar12 == &DAT_10e05aea8) {
    uVar2 = iVar8 - 1U >> 6;
    plVar16[uVar2] = plVar16[uVar2] | 1L << ((ulong)(iVar8 - 1U) & 0x3f);
  }
  if ((0x40 < uVar17) && (lVar7 != 0)) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109de7b88; end: 109de7c9f;  */

long * FUN_109de7b88(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_1 != param_2) {
    lVar3 = *param_2;
    if (*param_1 != lVar3) {
      if ((*(int *)(*param_1 + 8) - 0x40U < 0xffffff80) && (param_1[1] != 0)) {
        __ZdaPv();
        lVar3 = *param_2;
      }
      *param_1 = lVar3;
      uVar1 = *(int *)(lVar3 + 8) + 0x40;
      if (0x7f < uVar1) {
        uVar2 = (ulong)(uVar1 >> 3 & 0x1ffffff8);
        __Znam();
        param_1[1] = uVar2;
      }
    }
    func_0x000109de7840(param_1,param_2);
  }
  return param_1;
}



/* Entry: 109de7ca0; end: 109de7d77;  */

bool FUN_109de7ca0(long *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (((*(byte *)((long)param_1 + 0x14) & 6) != 0 && (*(byte *)((long)param_1 + 0x14) & 7) != 3) &&
     ((int)param_1[2] == *(int *)(*param_1 + 4))) {
    iVar1 = *(int *)(*param_1 + 8);
    param_1 = param_1 + 1;
    if (iVar1 - 0x40U < 0xffffff80) {
      param_1 = (long *)*param_1;
    }
    uVar2 = iVar1 - 1;
    return ((ulong)param_1[uVar2 >> 6] >> ((ulong)uVar2 & 0x3f) & 1) == 0;
  }
  return false;
}



/* Entry: 109de7d78; end: 109de7e43;  */

void FUN_109de7d78(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000109de7db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e05adb8)
                          [(*(byte *)(param_1 + 0x14) & 7) * 4 + (*(byte *)(param_2 + 0x14) & 7)] *
             4 + 0x109de7db8))(param_1,3);
  return;
}



/* Entry: 109de7e44; end: 109de7f13;  */

bool FUN_109de7e44(long *param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  
  if (param_1 == param_2) {
    return true;
  }
  if (*param_1 == *param_2) {
    bVar4 = *(byte *)((long)param_1 + 0x14);
    bVar1 = bVar4 & 7;
    if ((bVar1 == (*(byte *)((long)param_2 + 0x14) & 7)) &&
       (((*(byte *)((long)param_2 + 0x14) ^ bVar4) >> 3 & 1) == 0)) {
      if ((bVar4 & 7) == 0) {
        return true;
      }
      if (bVar1 == 3) {
        return true;
      }
      if ((((bVar4 & 6) == 0) || (bVar1 == 3)) || ((int)param_1[2] == (int)param_2[2])) {
        iVar3 = *(int *)(*param_1 + 8);
        param_1 = param_1 + 1;
        if (iVar3 - 0x40U < 0xffffff80) {
          param_1 = (long *)*param_1;
        }
        plVar2 = (long *)param_2[1];
        if (0xffffff7f < *(int *)(*param_2 + 8) - 0x40U) {
          plVar2 = param_2 + 1;
        }
        _memcmp(param_1,plVar2,iVar3 + 0x40U >> 3 & 0x1ffffff8);
        return (int)param_1 == 0;
      }
    }
  }
  return false;
}



/* Entry: 109de7f14; end: 109de7fcf;  */

long * FUN_109de7f14(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  *param_1 = param_2;
  uVar1 = *(int *)(param_2 + 8) + 0x40;
  if (0x7f < uVar1) {
    uVar3 = (ulong)(uVar1 >> 3 & 0x1ffffff8);
    __Znam();
    param_1[1] = uVar3;
  }
  *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf0 | 2;
  iVar2 = *(int *)(param_2 + 8);
  plVar5 = param_1 + 1;
  if (iVar2 - 0x40U < 0xffffff80) {
    puVar4 = (undefined8 *)*plVar5;
    *puVar4 = 0;
    _bzero(puVar4 + 1,(ulong)((iVar2 + 0x40U >> 6) - 1) << 3);
    plVar5 = (long *)*plVar5;
  }
  else {
    *plVar5 = 0;
  }
  *(int *)(param_1 + 2) = iVar2 + -1;
  *plVar5 = param_3;
  FUN_109de7fd0(param_1,1,0);
  return param_1;
}



/* Entry: 109de7fd0; end: 109de828f;  */

undefined8 FUN_109de7fd0(long *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong *puVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  ulong *puVar11;
  uint uVar12;
  long *plVar13;
  int *piVar14;
  
  if ((*(byte *)((long)param_1 + 0x14) & 6) == 0 || (*(byte *)((long)param_1 + 0x14) & 7) == 3) {
    return 0;
  }
  plVar13 = param_1 + 1;
  piVar14 = (int *)*param_1;
  iVar7 = piVar14[2];
  plVar8 = plVar13;
  if (iVar7 - 0x40U < 0xffffff80) {
    plVar8 = (long *)*plVar13;
  }
  uVar10 = iVar7 + 0x40U >> 6;
  iVar9 = uVar10 * -0x40;
  uVar10 = uVar10 - 1;
  do {
    iVar9 = iVar9 + 0x40;
    if (plVar8[uVar10] != 0) {
      uVar12 = (int)LZCOUNT(plVar8[uVar10]) - iVar9 ^ 0x3f;
      uVar10 = uVar12 + 1;
      if (uVar12 != 0xffffffff) {
        iVar9 = (int)param_1[2] + (uVar10 - iVar7);
        if (*piVar14 < iVar9) goto FUN_109de9458;
        uVar12 = piVar14[1] - (int)param_1[2];
        if (piVar14[1] <= iVar9) {
          uVar12 = uVar10 - iVar7;
        }
        if ((int)uVar12 < 0) {
          FUN_109de9368(param_1,-uVar12);
          return 0;
        }
        if (uVar12 != 0) {
          plVar8 = param_1;
          FUN_109de8d3c(param_1,uVar12);
          uVar4 = (uint)plVar8;
          uVar1 = 3;
          if (uVar4 != 2) {
            uVar1 = uVar4;
          }
          uVar2 = 1;
          if (uVar4 != 0) {
            uVar2 = uVar1;
          }
          if ((int)param_3 != 0) {
            uVar4 = uVar2;
          }
          param_3 = (ulong)uVar4;
          bVar3 = uVar12 <= uVar10;
          uVar12 = uVar10 - uVar12;
          uVar10 = 0;
          if (bVar3) {
            uVar10 = uVar12;
          }
          piVar14 = (int *)*param_1;
        }
        goto LAB_109de8090;
      }
      break;
    }
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0xffffffff);
  uVar10 = 0;
LAB_109de8090:
  if (((piVar14[4] != 1) || ((int)param_1[2] != *piVar14)) ||
     (plVar8 = param_1, func_0x000109de7d08(), (int)plVar8 == 0)) {
    if ((int)param_3 == 0) {
      if (uVar10 != 0) {
        return 0;
      }
      *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf8 | 3;
      return 0;
    }
    plVar8 = param_1;
    FUN_109de9620(param_1,param_2,param_3,0);
    if (((ulong)plVar8 & 1) == 0) {
      uVar12 = piVar14[2];
LAB_109de818c:
      if (uVar10 == uVar12) {
        return 0x10;
      }
      if (uVar10 == 0) {
        *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf8 | 3;
      }
      return 0x18;
    }
    if (uVar10 == 0) {
      *(int *)(param_1 + 2) = piVar14[1];
    }
    FUN_109de8398(param_1);
    piVar14 = (int *)*param_1;
    uVar12 = piVar14[2];
    if (uVar12 - 0x40 < 0xffffff80) {
      plVar13 = (long *)*plVar13;
    }
    uVar10 = uVar12 + 0x40 >> 6;
    iVar7 = uVar10 * -0x40;
    uVar10 = uVar10 - 1;
    do {
      iVar7 = iVar7 + 0x40;
      if (plVar13[uVar10] != 0) {
        uVar10 = (int)LZCOUNT(plVar13[uVar10]) - iVar7 ^ 0x3f;
        goto LAB_109de8210;
      }
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0xffffffff);
    uVar10 = 0xffffffff;
LAB_109de8210:
    if (uVar10 == uVar12) {
      if ((int)param_1[2] != *piVar14) {
        FUN_109de8d3c(param_1,1);
        return 0x10;
      }
      *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf8;
      return 0x14;
    }
    uVar10 = uVar10 + 1;
    if (((piVar14[4] != 1) || ((int)param_1[2] != *piVar14)) ||
       (plVar8 = param_1, func_0x000109de7d08(), (int)plVar8 == 0)) goto LAB_109de818c;
  }
FUN_109de9458:
  iVar7 = (int)param_2;
  if (iVar7 < 3) {
    if (iVar7 == 1) {
LAB_109de9524:
      if (*(int *)(*param_1 + 0x10) == 1) {
        FUN_109de78e4(param_1,0,*(byte *)((long)param_1 + 0x14) >> 3 & 1,0);
      }
      else {
        *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf8;
      }
      return 0x14;
    }
    if (iVar7 == 2) {
      bVar6 = *(byte *)((long)param_1 + 0x14);
      if ((bVar6 >> 3 & 1) != 0) goto LAB_109de94ac;
      goto LAB_109de9524;
    }
  }
  else {
    if (iVar7 == 3) {
      bVar6 = *(byte *)((long)param_1 + 0x14);
      if ((bVar6 >> 3 & 1) != 0) goto LAB_109de9524;
      goto LAB_109de94ac;
    }
    if (iVar7 == 4) goto LAB_109de9524;
  }
  bVar6 = *(byte *)((long)param_1 + 0x14);
LAB_109de94ac:
  *(byte *)((long)param_1 + 0x14) = bVar6 & 0xf8 | 2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)*param_1;
  iVar7 = ((undefined4 *)*param_1)[2];
  puVar11 = (ulong *)(param_1 + 1);
  puVar5 = puVar11;
  if (iVar7 - 0x40U < 0xffffff80) {
    puVar5 = (ulong *)*puVar11;
  }
  FUN_109de9568(puVar5,iVar7 + 0x40U >> 6);
  if (*(int *)(*param_1 + 0x10) == 1) {
    if (*(int *)(*param_1 + 8) - 0x40U < 0xffffff80) {
      puVar11 = (ulong *)*puVar11;
    }
    *puVar11 = *puVar11 & 0xfffffffffffffffe;
  }
  return 0x10;
}



/* Entry: 109de8290; end: 109de82df;  */

long * FUN_109de8290(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  *param_1 = param_2;
  uVar1 = *(int *)(param_2 + 8) + 0x40;
  if (0x7f < uVar1) {
    uVar2 = (ulong)(uVar1 >> 3 & 0x1ffffff8);
    __Znam();
    param_1[1] = uVar2;
  }
  FUN_109de82e0(param_1,0);
  return param_1;
}



/* Entry: 109de82e0; end: 109de833f;  */

void FUN_109de82e0(long *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  
  bVar1 = 0xb;
  if (param_2 == 0) {
    bVar1 = 3;
  }
  *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf0 | bVar1;
  iVar2 = *(int *)(*param_1 + 8);
  *(int *)(param_1 + 2) = *(int *)(*param_1 + 4) + -1;
  if (iVar2 - 0x40U < 0xffffff80) {
    puVar3 = (undefined8 *)param_1[1];
    *puVar3 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(puVar3 + 1,(ulong)((iVar2 + 0x40U >> 6) - 1) << 3);
    return;
  }
  param_1[1] = 0;
  return;
}



/* Entry: 109de8340; end: 109de8397;  */

long * FUN_109de8340(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_2;
  *param_1 = lVar3;
  uVar1 = *(int *)(lVar3 + 8) + 0x40;
  if (0x7f < uVar1) {
    uVar2 = (ulong)(uVar1 >> 3 & 0x1ffffff8);
    __Znam();
    param_1[1] = uVar2;
  }
  func_0x000109de7840(param_1,param_2);
  return param_1;
}



/* Entry: 109de8398; end: 109de84ff;  */

void FUN_109de8398(long *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = (ulong *)(param_1 + 1);
  uVar1 = *(uint *)(*param_1 + 8);
  if (uVar1 - 0x40 < 0xffffff80) {
    puVar2 = (ulong *)*puVar2;
  }
  else if (0xffffffbf < uVar1) {
    return;
  }
  uVar3 = *puVar2;
  *puVar2 = uVar3 + 1;
  if (uVar3 == 0xffffffffffffffff) {
    uVar3 = (ulong)(uVar1 + 0x40 >> 6);
    do {
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
      if (uVar3 == 0) {
        return;
      }
      uVar4 = *puVar2;
      *puVar2 = uVar4 + 1;
    } while (0xfffffffffffffffe < uVar4);
  }
  return;
}



/* Entry: 109de8500; end: 109de8867;  */

long * FUN_109de8500(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *puVar9;
  int iVar10;
  long *plVar11;
  undefined *puVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  undefined1 *puVar19;
  uint uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined *puVar24;
  uint uVar25;
  ulong *puVar26;
  int iStack_15c;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_89;
  long alStack_88 [4];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar22 = (undefined8 *)*param_1;
  uVar4 = *(uint *)(puVar22 + 1);
  uVar1 = uVar4 * 2 + 0x40;
  uVar20 = uVar1 >> 6;
  if (uVar1 < 0x140) {
    plVar7 = alStack_88;
  }
  else {
    plVar7 = (long *)(ulong)(uVar20 << 3);
    __Znam();
  }
  plVar8 = param_1 + 1;
  plVar18 = plVar8;
  if (uVar4 - 0x40 < 0xffffff80) {
    plVar18 = (long *)*plVar8;
  }
  puVar19 = (undefined1 *)(ulong)(uVar4 + 0x40 >> 6);
  puVar26 = (ulong *)param_2[1];
  if (0xffffff7f < *(int *)(*param_2 + 8) - 0x40U) {
    puVar26 = (ulong *)(param_2 + 1);
  }
  plVar13 = plVar7;
  plVar11 = plVar18;
  puVar9 = puVar19;
  FUN_109df24c8();
  iVar10 = uVar20 * -0x40;
  uVar14 = uVar20 - 1;
  do {
    iVar10 = iVar10 + 0x40;
    if (plVar7[uVar14] != 0) {
      uVar14 = ((int)LZCOUNT(plVar7[uVar14]) - iVar10 ^ 0x3fU) + 1;
      goto LAB_109de8610;
    }
    uVar14 = uVar14 - 1;
  } while (uVar14 != 0xffffffff);
  uVar14 = 0;
LAB_109de8610:
  iVar10 = (int)param_2[2] + (int)param_1[2] + 2;
  *(int *)(param_1 + 2) = iVar10;
  if ((*(byte *)(param_3 + 0x14) & 7) == 3) {
    plVar23 = (long *)0x0;
  }
  else {
    lVar17 = *plVar8;
    iVar6 = uVar4 * 2 - uVar14;
    if (iVar6 != 0) {
      FUN_109df0fe4(plVar7,uVar20,iVar6);
      *(int *)(param_1 + 2) = iVar10 - iVar6;
    }
    uStack_a0 = *puVar22;
    uStack_90 = *(undefined4 *)(puVar22 + 2);
    uStack_98._4_4_ = (undefined4)((ulong)puVar22[1] >> 0x20);
    uStack_98 = CONCAT44(uStack_98._4_4_,uVar4 << 1) | 1;
    plVar11 = plVar7;
    if (uVar20 == 1) {
      plVar11 = (long *)*plVar7;
    }
    *param_1 = (long)&uStack_a0;
    param_1[1] = (long)plVar11;
    FUN_109de8340(&lStack_b8,param_3);
    puVar9 = &uStack_89;
    FUN_109de8868(&lStack_b8,&uStack_a0,0);
    FUN_109de8d3c(&lStack_b8,1);
    plVar11 = &lStack_b8;
    puVar26 = (ulong *)0x0;
    plVar23 = param_1;
    FUN_109de8db8();
    uVar14 = uVar20 - 1;
    if (uVar14 == 0) {
      *plVar7 = *plVar8;
    }
    *param_1 = (long)puVar22;
    param_1[1] = lVar17;
    iVar10 = uVar20 * -0x40;
    do {
      iVar10 = iVar10 + 0x40;
      if (plVar7[uVar14] != 0) {
        uVar14 = ((int)LZCOUNT(plVar7[uVar14]) - iVar10 ^ 0x3fU) + 1;
        goto LAB_109de8734;
      }
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0xffffffff);
    uVar14 = 0;
LAB_109de8734:
    plVar13 = plVar23;
    if ((*(int *)(lStack_b8 + 8) - 0x40U < 0xffffff80) &&
       (plVar13 = plStack_b0, plStack_b0 != (long *)0x0)) {
      __ZdaPv();
      plVar13 = plStack_b0;
    }
    iVar10 = (int)param_1[2];
  }
  *(uint *)(param_1 + 2) = iVar10 + ~uVar4;
  uVar20 = uVar14 - uVar4;
  uVar21 = (ulong)uVar20;
  if (uVar4 <= uVar14 && uVar20 != 0) {
    plVar11 = (long *)(ulong)(uVar14 + 0x3f >> 6);
    plVar8 = plVar7;
    FUN_109dea7ec(plVar7,plVar11,uVar21);
    plVar13 = plVar7;
    func_0x000109df0f28();
    uVar25 = (uint)plVar8;
    uVar14 = 3;
    if (uVar25 != 2) {
      uVar14 = uVar25;
    }
    uVar15 = 1;
    if (uVar25 != 0) {
      uVar15 = uVar14;
    }
    if ((int)plVar23 != 0) {
      uVar25 = uVar15;
    }
    plVar23 = (long *)(ulong)uVar25;
    *(uint *)(param_1 + 2) = uVar20 + iVar10 + ~uVar4;
    puVar26 = (ulong *)uVar21;
  }
  plVar8 = plVar7;
  if (uVar4 < 0xffffffc0) {
    do {
      *plVar18 = *plVar8;
      puVar19 = puVar19 + -1;
      plVar8 = plVar8 + 1;
      plVar18 = plVar18 + 1;
    } while (puVar19 != (undefined1 *)0x0);
  }
  if (0x13f < uVar1) {
    __ZdaPv();
    plVar13 = plVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar23;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar24 = (undefined *)*plVar13;
  plVar7 = plVar13;
  FUN_109de9830();
  bVar3 = false;
  uVar1 = (int)plVar11[1] + 0x40;
  uVar4 = *(uint *)(puVar24 + 8);
  uVar20 = (int)plVar11[1] - uVar4;
  if ((plVar11 != (long *)&DAT_10e05aea8) && (puVar24 == &DAT_10e05aea8)) {
    if ((*(byte *)((long)plVar13 + 0x14) & 7) == 1) {
      if (uVar4 - 0x40 < 0xffffff80) {
        uVar21 = *(ulong *)plVar13[1];
      }
      else {
        uVar21 = plVar13[1];
      }
      if ((-1 < (long)uVar21) || ((uVar21 >> 0x3e & 1) == 0)) {
        bVar3 = true;
        goto LAB_109de8918;
      }
    }
    bVar3 = false;
  }
LAB_109de8918:
  uVar14 = uVar1 >> 6;
  uVar25 = uVar4 + 0x40 >> 6;
  uVar21 = (ulong)uVar25;
  if ((int)uVar20 < 0) {
    bVar5 = *(byte *)((long)plVar13 + 0x14) & 7;
    if ((*(byte *)((long)plVar13 + 0x14) & 6) == 0 || bVar5 == 3) {
      if ((bVar5 == 1) && (*(int *)(puVar24 + 0x10) != 1)) {
LAB_109de8ce4:
        plVar8 = plVar13 + 1;
        if (uVar4 - 0x40 < 0xffffff80) {
          plVar8 = (long *)*plVar8;
        }
        plVar18 = plVar8;
        FUN_109dea7ec(plVar8,uVar21,-uVar20);
        iStack_15c = (int)plVar18;
        func_0x000109df0f28(plVar8,uVar21,-uVar20);
        puVar26 = (ulong *)((ulong)puVar26 & 0xffffffff);
        goto LAB_109de892c;
      }
    }
    else {
      plVar8 = plVar13 + 1;
      if (uVar4 - 0x40 < 0xffffff80) {
        plVar8 = (long *)*plVar8;
      }
      iVar10 = uVar25 * -0x40;
      uVar15 = uVar25 - 1;
      do {
        iVar10 = iVar10 + 0x40;
        if (plVar8[uVar15] != 0) {
          uVar15 = (int)LZCOUNT(plVar8[uVar15]) - iVar10 ^ 0x3f;
          goto LAB_109de8c20;
        }
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0xffffffff);
      uVar15 = 0xffffffff;
LAB_109de8c20:
      iVar10 = uVar15 + 1;
      iVar6 = (int)plVar13[2];
      uVar16 = *(int *)((long)plVar11 + 4) - iVar6;
      if (*(int *)((long)plVar11 + 4) <= (int)((iVar10 - uVar4) + iVar6)) {
        uVar16 = iVar10 - uVar4;
      }
      if ((int)uVar16 < 0) {
        if (uVar16 <= uVar20) {
          uVar16 = uVar20;
        }
        uVar20 = uVar20 - uVar16;
      }
      else {
        if (iVar10 + uVar20 != 0 && (int)(iVar10 + uVar20) < 0 == SCARRY4(iVar10,uVar20))
        goto LAB_109de8ce4;
        uVar16 = uVar15 + uVar20;
        uVar20 = -uVar15;
      }
      *(uint *)(plVar13 + 2) = uVar16 + iVar6;
      if ((int)uVar20 < 0) goto LAB_109de8ce4;
    }
  }
  iStack_15c = 0;
LAB_109de892c:
  if (uVar25 < uVar14) {
    plVar8 = (long *)(ulong)(uVar14 << 3);
    __Znam();
    *plVar8 = 0;
    if (0x7f < uVar1) {
      _bzero(plVar8 + 1,(ulong)(uVar14 - 1) << 3);
    }
    bVar5 = *(byte *)((long)plVar13 + 0x14) & 7;
    uVar1 = *(int *)(*plVar13 + 8) - 0x40;
    if ((bVar5 == 1) || ((*(byte *)((long)plVar13 + 0x14) & 6) != 0 && bVar5 != 3)) {
      plVar18 = plVar13 + 1;
      if (uVar1 < 0xffffff80) {
        plVar18 = (long *)*plVar18;
      }
      plVar23 = plVar8;
      if (uVar4 < 0xffffffc0) {
        do {
          *plVar23 = *plVar18;
          uVar21 = uVar21 - 1;
          plVar18 = plVar18 + 1;
          plVar23 = plVar23 + 1;
        } while (uVar21 != 0);
      }
    }
    if ((uVar1 < 0xffffff80) && (plVar13[1] != 0)) {
      __ZdaPv();
    }
    plVar13[1] = (long)plVar8;
  }
  else if (uVar14 == 1 && uVar25 != 1) {
    bVar5 = *(byte *)((long)plVar13 + 0x14) & 7;
    uVar1 = *(int *)(*plVar13 + 8) - 0x40;
    if ((bVar5 == 1) || ((*(byte *)((long)plVar13 + 0x14) & 6) != 0 && bVar5 != 3)) {
      plVar8 = plVar13 + 1;
      if (uVar1 < 0xffffff80) {
        plVar8 = (long *)*plVar8;
      }
      lVar17 = *plVar8;
    }
    else {
      lVar17 = 0;
    }
    if ((uVar1 < 0xffffff80) && (plVar13[1] != 0)) {
      __ZdaPv();
    }
    plVar13[1] = lVar17;
  }
  *plVar13 = (long)plVar11;
  if ((0 < (int)uVar20) &&
     (bVar5 = *(byte *)((long)plVar13 + 0x14) & 7,
     bVar5 == 1 || (*(byte *)((long)plVar13 + 0x14) & 6) != 0 && bVar5 != 3)) {
    plVar8 = plVar13 + 1;
    if ((int)plVar11[1] - 0x40U < 0xffffff80) {
      plVar8 = (long *)*plVar8;
    }
    FUN_109df0fe4(plVar8,uVar14,uVar20);
  }
  bVar5 = *(byte *)((long)plVar13 + 0x14);
  if (((bVar5 & 6) == 0) || ((bVar5 & 7) == 3)) {
    if ((bVar5 & 7) == 0) {
      if (*(int *)(*plVar13 + 0x10) == 1) {
        FUN_109de78e4(plVar13,0,bVar5 >> 3 & 1,0);
        *puVar9 = 1;
        return (long *)0x10;
      }
    }
    else if ((bVar5 & 7) == 1) {
      puVar12 = (undefined *)*plVar13;
      if (*(int *)(puVar12 + 0x10) == 1) {
        *puVar9 = *(int *)(puVar24 + 0x10) != 1;
        FUN_109de78e4(plVar13,0,*(byte *)((long)plVar13 + 0x14) >> 3 & 1,0);
        return plVar7;
      }
      bVar2 = bVar3;
      if (iStack_15c != 0) {
        bVar2 = true;
      }
      *puVar9 = bVar2;
      if (puVar12 != &DAT_10e05aea8) {
        bVar3 = true;
      }
      if (!bVar3) {
        *(ulong *)plVar13[1] = *(ulong *)plVar13[1] | 0x8000000000000000;
      }
      if ((int)plVar7 != 0) {
        plVar13 = plVar13 + 1;
        if (*(int *)(puVar12 + 8) - 0x40U < 0xffffff80) {
          plVar13 = (long *)*plVar13;
        }
        uVar1 = *(int *)(puVar12 + 8) - 2;
        uVar4 = uVar1 >> 6;
        plVar13[uVar4] = plVar13[uVar4] | 1L << ((ulong)uVar1 & 0x3f);
        return (long *)0x1;
      }
      return (long *)0x0;
    }
    plVar13 = (long *)0x0;
    *puVar9 = 0;
  }
  else {
    FUN_109de7fd0(plVar13,puVar26,iStack_15c);
    *puVar9 = (int)plVar13 != 0;
  }
  return plVar13;
}



/* Entry: 109de8868; end: 109de8d3b;  */

void FUN_109de8868(long *param_1,undefined *param_2,ulong param_3,undefined1 *param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  undefined *puVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  long *plVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  undefined *puVar20;
  int iStack_6c;
  
  puVar20 = (undefined *)*param_1;
  plVar9 = param_1;
  FUN_109de9830();
  bVar3 = false;
  uVar1 = *(int *)(param_2 + 8) + 0x40;
  uVar4 = *(uint *)(puVar20 + 8);
  uVar19 = *(int *)(param_2 + 8) - uVar4;
  if ((param_2 != &DAT_10e05aea8) && (puVar20 == &DAT_10e05aea8)) {
    if ((*(byte *)((long)param_1 + 0x14) & 7) == 1) {
      if (uVar4 - 0x40 < 0xffffff80) {
        uVar12 = *(ulong *)param_1[1];
      }
      else {
        uVar12 = param_1[1];
      }
      if ((-1 < (long)uVar12) || ((uVar12 >> 0x3e & 1) == 0)) {
        bVar3 = true;
        goto LAB_109de8918;
      }
    }
    bVar3 = false;
  }
LAB_109de8918:
  uVar7 = uVar1 >> 6;
  uVar8 = uVar4 + 0x40 >> 6;
  uVar12 = (ulong)uVar8;
  if ((int)uVar19 < 0) {
    bVar6 = *(byte *)((long)param_1 + 0x14) & 7;
    if ((*(byte *)((long)param_1 + 0x14) & 6) == 0 || bVar6 == 3) {
      if ((bVar6 == 1) && (*(int *)(puVar20 + 0x10) != 1)) {
LAB_109de8ce4:
        plVar10 = param_1 + 1;
        if (uVar4 - 0x40 < 0xffffff80) {
          plVar10 = (long *)*plVar10;
        }
        plVar13 = plVar10;
        FUN_109dea7ec(plVar10,uVar12,-uVar19);
        iStack_6c = (int)plVar13;
        func_0x000109df0f28(plVar10,uVar12,-uVar19);
        param_3 = param_3 & 0xffffffff;
        goto LAB_109de892c;
      }
    }
    else {
      plVar10 = param_1 + 1;
      if (uVar4 - 0x40 < 0xffffff80) {
        plVar10 = (long *)*plVar10;
      }
      iVar14 = uVar8 * -0x40;
      uVar16 = uVar8 - 1;
      do {
        iVar14 = iVar14 + 0x40;
        if (plVar10[uVar16] != 0) {
          uVar16 = (int)LZCOUNT(plVar10[uVar16]) - iVar14 ^ 0x3f;
          goto LAB_109de8c20;
        }
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0xffffffff);
      uVar16 = 0xffffffff;
LAB_109de8c20:
      iVar14 = uVar16 + 1;
      iVar5 = (int)param_1[2];
      uVar17 = *(int *)(param_2 + 4) - iVar5;
      if (*(int *)(param_2 + 4) <= (int)((iVar14 - uVar4) + iVar5)) {
        uVar17 = iVar14 - uVar4;
      }
      if ((int)uVar17 < 0) {
        if (uVar17 <= uVar19) {
          uVar17 = uVar19;
        }
        uVar19 = uVar19 - uVar17;
      }
      else {
        if (iVar14 + uVar19 != 0 && (int)(iVar14 + uVar19) < 0 == SCARRY4(iVar14,uVar19))
        goto LAB_109de8ce4;
        uVar17 = uVar16 + uVar19;
        uVar19 = -uVar16;
      }
      *(uint *)(param_1 + 2) = uVar17 + iVar5;
      if ((int)uVar19 < 0) goto LAB_109de8ce4;
    }
  }
  iStack_6c = 0;
LAB_109de892c:
  if (uVar8 < uVar7) {
    plVar10 = (long *)(ulong)(uVar7 << 3);
    __Znam();
    *plVar10 = 0;
    if (0x7f < uVar1) {
      _bzero(plVar10 + 1,(ulong)(uVar7 - 1) << 3);
    }
    bVar6 = *(byte *)((long)param_1 + 0x14) & 7;
    uVar1 = *(int *)(*param_1 + 8) - 0x40;
    if ((bVar6 == 1) || ((*(byte *)((long)param_1 + 0x14) & 6) != 0 && bVar6 != 3)) {
      plVar13 = param_1 + 1;
      if (uVar1 < 0xffffff80) {
        plVar13 = (long *)*plVar13;
      }
      plVar15 = plVar10;
      if (uVar4 < 0xffffffc0) {
        do {
          *plVar15 = *plVar13;
          uVar12 = uVar12 - 1;
          plVar13 = plVar13 + 1;
          plVar15 = plVar15 + 1;
        } while (uVar12 != 0);
      }
    }
    if ((uVar1 < 0xffffff80) && (param_1[1] != 0)) {
      __ZdaPv();
    }
    param_1[1] = (long)plVar10;
  }
  else if (uVar7 == 1 && uVar8 != 1) {
    bVar6 = *(byte *)((long)param_1 + 0x14) & 7;
    uVar1 = *(int *)(*param_1 + 8) - 0x40;
    if ((bVar6 == 1) || ((*(byte *)((long)param_1 + 0x14) & 6) != 0 && bVar6 != 3)) {
      plVar10 = param_1 + 1;
      if (uVar1 < 0xffffff80) {
        plVar10 = (long *)*plVar10;
      }
      lVar18 = *plVar10;
    }
    else {
      lVar18 = 0;
    }
    if ((uVar1 < 0xffffff80) && (param_1[1] != 0)) {
      __ZdaPv();
    }
    param_1[1] = lVar18;
  }
  *param_1 = (long)param_2;
  if ((0 < (int)uVar19) &&
     (bVar6 = *(byte *)((long)param_1 + 0x14) & 7,
     bVar6 == 1 || (*(byte *)((long)param_1 + 0x14) & 6) != 0 && bVar6 != 3)) {
    plVar10 = param_1 + 1;
    if (*(int *)(param_2 + 8) - 0x40U < 0xffffff80) {
      plVar10 = (long *)*plVar10;
    }
    FUN_109df0fe4(plVar10,uVar7,uVar19);
  }
  bVar6 = *(byte *)((long)param_1 + 0x14);
  if (((bVar6 & 6) == 0) || ((bVar6 & 7) == 3)) {
    if ((bVar6 & 7) == 0) {
      if (*(int *)(*param_1 + 0x10) == 1) {
        FUN_109de78e4(param_1,0,bVar6 >> 3 & 1,0);
        *param_4 = 1;
        return;
      }
    }
    else if ((bVar6 & 7) == 1) {
      puVar11 = (undefined *)*param_1;
      if (*(int *)(puVar11 + 0x10) == 1) {
        *param_4 = *(int *)(puVar20 + 0x10) != 1;
        FUN_109de78e4(param_1,0,*(byte *)((long)param_1 + 0x14) >> 3 & 1,0);
        return;
      }
      bVar2 = bVar3;
      if (iStack_6c != 0) {
        bVar2 = true;
      }
      *param_4 = bVar2;
      if (puVar11 != &DAT_10e05aea8) {
        bVar3 = true;
      }
      if (!bVar3) {
        *(ulong *)param_1[1] = *(ulong *)param_1[1] | 0x8000000000000000;
      }
      if ((int)plVar9 == 0) {
        return;
      }
      param_1 = param_1 + 1;
      if (*(int *)(puVar11 + 8) - 0x40U < 0xffffff80) {
        param_1 = (long *)*param_1;
      }
      uVar1 = *(int *)(puVar11 + 8) - 2;
      uVar4 = uVar1 >> 6;
      param_1[uVar4] = param_1[uVar4] | 1L << ((ulong)uVar1 & 0x3f);
      return;
    }
    *param_4 = 0;
  }
  else {
    FUN_109de7fd0(param_1,param_3,iStack_6c);
    *param_4 = (int)param_1 != 0;
  }
  return;
}



/* Entry: 109de8d3c; end: 109de8db7;  */

long FUN_109de8d3c(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  *(int *)(param_1 + 2) = (int)param_1[2] + (int)param_2;
  plVar3 = param_1 + 1;
  if (*(int *)(*param_1 + 8) - 0x40U < 0xffffff80) {
    plVar3 = (long *)*plVar3;
  }
  uVar1 = *(int *)(*param_1 + 8) + 0x40U >> 6;
  lVar2 = (long)plVar3;
  FUN_109dea7ec(plVar3,uVar1,param_2);
  func_0x000109df0f28(plVar3,uVar1,param_2);
  return lVar2;
}



/* Entry: 109de8db8; end: 109de8f7b;  */

long * FUN_109de8db8(long *param_1,long param_2,byte param_3)

{
  uint uVar1;
  undefined8 *****pppppuVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long lStack_58;
  undefined8 ****ppppuStack_50;
  int iStack_48;
  
  lVar5 = param_1[2];
  iVar4 = *(int *)(param_2 + 0x10);
  uVar6 = (int)lVar5 - iVar4;
  if (((param_3 ^ ((*(byte *)(param_2 + 0x14) ^ *(byte *)((long)param_1 + 0x14)) & 8) == 0) & 1) ==
      0) {
    FUN_109de8340(&lStack_58,param_2);
    if ((int)lVar5 == iVar4) {
      uVar6 = 0;
    }
    else if ((int)uVar6 < 1) {
      plVar7 = param_1;
      FUN_109de8d3c(param_1,~uVar6);
      uVar6 = (uint)plVar7;
      pppppuVar2 = (undefined8 *****)ppppuStack_50;
      if (0xffffff7f < *(int *)(lStack_58 + 8) - 0x40U) {
        pppppuVar2 = &ppppuStack_50;
      }
      FUN_109df0fe4(pppppuVar2,*(int *)(lStack_58 + 8) + 0x40U >> 6,1);
      iStack_48 = iStack_48 + -1;
    }
    else {
      plVar7 = &lStack_58;
      FUN_109de8d3c(plVar7,uVar6 - 1);
      uVar6 = (uint)plVar7;
      FUN_109de9368(param_1,1);
    }
    plVar7 = param_1;
    FUN_109de93bc(param_1,&lStack_58);
    if ((int)plVar7 == 0) {
      func_0x000109de8478(&lStack_58,param_1,uVar6 != 0);
      func_0x000109de7890(param_1,&lStack_58);
      *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) ^ 8;
    }
    else {
      func_0x000109de8478(param_1,&lStack_58,uVar6 != 0);
    }
    uVar3 = uVar6;
    if (uVar6 == 3) {
      uVar3 = 1;
    }
    uVar1 = 3;
    if (uVar6 != 1) {
      uVar1 = uVar3;
    }
    plVar7 = (long *)(ulong)uVar1;
  }
  else {
    if ((int)uVar6 < 1) {
      plVar7 = param_1;
      FUN_109de8d3c(param_1,-uVar6);
      func_0x000109de83f8(param_1,param_2);
      return plVar7;
    }
    FUN_109de8340(&lStack_58,param_2);
    plVar7 = &lStack_58;
    FUN_109de8d3c(plVar7,uVar6);
    func_0x000109de83f8(param_1,&lStack_58);
  }
  if ((*(int *)(lStack_58 + 8) - 0x40U < 0xffffff80) &&
     ((undefined8 *****)ppppuStack_50 != (undefined8 *****)0x0)) {
    __ZdaPv();
  }
  return plVar7;
}



/* Entry: 109de8f7c; end: 109de9013;  */

undefined8 * FUN_109de8f7c(undefined8 *param_1,undefined8 param_2)

{
  long lStack_38;
  long lStack_30;
  
  FUN_109de8290(&lStack_38,*param_1);
  FUN_109de8500(param_1,param_2,&lStack_38);
  if ((*(int *)(lStack_38 + 8) - 0x40U < 0xffffff80) && (lStack_30 != 0)) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 109de9014; end: 109de9367;  */

ulong * FUN_109de9014(ulong *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  bool bVar17;
  ulong uVar18;
  long *plVar19;
  ulong *puVar20;
  uint uVar21;
  ulong uVar22;
  ulong *puVar23;
  uint uVar24;
  ulong auStack_88 [4];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar23 = param_1 + 1;
  uVar2 = *(uint *)(*param_1 + 8);
  uVar22 = (ulong)uVar2;
  if (uVar2 - 0x40 < 0xffffff80) {
    puVar23 = (ulong *)*puVar23;
  }
  plVar11 = (long *)param_2[1];
  if (0xffffff7f < *(int *)(*param_2 + 8) - 0x40U) {
    plVar11 = param_2 + 1;
  }
  uVar1 = uVar2 + 0x40;
  uVar24 = uVar1 >> 6;
  plVar19 = (long *)(ulong)uVar24;
  plVar6 = param_2;
  if (uVar1 < 0xc0) {
    puVar4 = auStack_88;
    puVar20 = puVar4 + (long)plVar19;
    puVar5 = param_1;
    if (uVar2 < 0xffffffc0) goto LAB_109de90b8;
  }
  else {
    puVar4 = (ulong *)(ulong)(uVar24 << 4);
    __Znam();
    puVar20 = puVar4 + (long)plVar19;
    puVar5 = puVar4;
LAB_109de90b8:
    plVar8 = (long *)0x0;
    do {
      puVar4[(long)plVar8] = puVar23[(long)plVar8];
      puVar20[(long)plVar8] = plVar11[(long)plVar8];
      puVar23[(long)plVar8] = 0;
      plVar8 = (long *)((long)plVar8 + 1);
    } while (plVar19 != plVar8);
  }
  iVar7 = (int)param_1[2] - (int)param_2[2];
  *(int *)(param_1 + 2) = iVar7;
  iVar12 = uVar24 * -0x40;
  uVar21 = uVar24 - 1;
  uVar15 = uVar21;
  do {
    iVar12 = iVar12 + 0x40;
    if (puVar20[uVar15] != 0) {
      uVar15 = (int)LZCOUNT(puVar20[uVar15]) - iVar12 ^ 0xffffffc0;
      goto LAB_109de9128;
    }
    uVar15 = uVar15 - 1;
  } while (uVar15 != 0xffffffff);
  uVar15 = 0;
LAB_109de9128:
  if (uVar15 + uVar2 != 0) {
    *(uint *)(param_1 + 2) = uVar15 + uVar2 + iVar7;
    puVar5 = puVar20;
    plVar6 = plVar19;
    FUN_109df0fe4();
  }
  iVar7 = uVar24 * -0x40;
  do {
    iVar7 = iVar7 + 0x40;
    if (puVar4[uVar21] != 0) {
      uVar24 = (int)LZCOUNT(puVar4[uVar21]) - iVar7 ^ 0xffffffc0;
      goto LAB_109de9178;
    }
    uVar21 = uVar21 - 1;
  } while (uVar21 != 0xffffffff);
  uVar24 = 0;
LAB_109de9178:
  if (uVar24 + uVar2 != 0) {
    *(uint *)(param_1 + 2) = (int)param_1[2] - (uVar24 + uVar2);
    puVar5 = puVar4;
    plVar6 = plVar19;
    FUN_109df0fe4();
  }
  lVar9 = (long)plVar19 << 3;
  do {
    if (lVar9 == 0) goto LAB_109de91dc;
    uVar13 = *(ulong *)((long)puVar4 + lVar9 + -8);
    uVar16 = *(ulong *)((long)puVar20 + lVar9 + -8);
    lVar9 = lVar9 + -8;
  } while (uVar13 == uVar16);
  if (uVar13 < uVar16) {
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    puVar5 = puVar4;
    plVar6 = plVar19;
    FUN_109df0fe4(puVar4,plVar19,1);
  }
LAB_109de91dc:
  lVar9 = (long)plVar19 << 3;
  uVar24 = uVar2;
  while (lVar10 = lVar9, uVar24 != 0) {
    do {
      if (lVar10 == 0) goto LAB_109de9210;
      uVar13 = *(ulong *)((long)puVar4 + lVar10 + -8);
      uVar16 = *(ulong *)((long)puVar20 + lVar10 + -8);
      lVar10 = lVar10 + -8;
    } while (uVar13 == uVar16);
    if (uVar16 < uVar13) {
LAB_109de9210:
      if (uVar2 < 0xffffffc0) {
        bVar17 = true;
        puVar5 = puVar4;
        puVar14 = puVar20;
        plVar11 = plVar19;
        do {
          uVar16 = *puVar5;
          uVar18 = *puVar14;
          bVar3 = uVar16 < uVar18;
          uVar13 = uVar16 - uVar18;
          if (!bVar17) {
            bVar3 = uVar16 <= uVar16 + ~uVar18;
            uVar13 = uVar16 + ~uVar18;
          }
          *puVar5 = uVar13;
          bVar17 = (bool)(bVar3 ^ 1);
          plVar11 = (long *)((long)plVar11 + -1);
          puVar5 = puVar5 + 1;
          puVar14 = puVar14 + 1;
        } while (plVar11 != (long *)0x0);
      }
      uVar24 = (int)uVar22 - 1;
      uVar22 = (ulong)uVar24;
      uVar24 = uVar24 >> 6;
      puVar23[uVar24] = puVar23[uVar24] | 1L << (uVar22 & 0x3f);
    }
    else {
      uVar22 = (ulong)((int)uVar22 - 1);
    }
    puVar5 = puVar4;
    plVar6 = plVar19;
    FUN_109df0fe4(puVar4,plVar19,1);
    uVar24 = (uint)uVar22;
  }
  do {
    if (lVar9 == 0) {
      puVar23 = (ulong *)0x2;
      goto LAB_109de9318;
    }
    uVar22 = *(ulong *)((long)puVar4 + lVar9 + -8);
    uVar13 = *(ulong *)((long)puVar20 + lVar9 + -8);
    lVar9 = lVar9 + -8;
  } while (uVar22 == uVar13);
  if (uVar13 < uVar22) {
    puVar23 = (ulong *)0x3;
  }
  else {
    if (0xffffffbf < uVar2) {
      puVar23 = (ulong *)0x0;
      goto LAB_109de9328;
    }
    if (*puVar4 == 0) {
      plVar11 = (long *)0x0;
      do {
        if ((long *)((long)plVar19 - 1U) == plVar11) {
          puVar23 = (ulong *)0x0;
          goto LAB_109de9318;
        }
        lVar9 = (long)plVar11 + 1;
        plVar11 = (long *)((long)plVar11 + 1);
      } while (puVar4[lVar9] == 0);
      puVar23 = (ulong *)(ulong)(plVar11 < plVar19);
    }
    else {
      puVar23 = (ulong *)0x1;
    }
  }
LAB_109de9318:
  if (0xbf < uVar1) {
    __ZdaPv();
    puVar5 = puVar4;
  }
LAB_109de9328:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar23 = puVar5 + 1;
    if (*(int *)(*puVar5 + 8) - 0x40U < 0xffffff80) {
      puVar23 = (ulong *)*puVar23;
    }
    FUN_109df0fe4(puVar23,*(int *)(*puVar5 + 8) + 0x40U >> 6,plVar6);
    *(int *)(puVar5 + 2) = (int)puVar5[2] - (int)plVar6;
    return puVar23;
  }
  return puVar23;
}



/* Entry: 109de9368; end: 109de93bb;  */

void FUN_109de9368(long *param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = param_1 + 1;
  if (*(int *)(*param_1 + 8) - 0x40U < 0xffffff80) {
    plVar1 = (long *)*plVar1;
  }
  FUN_109df0fe4(plVar1,*(int *)(*param_1 + 8) + 0x40U >> 6,param_2);
  *(int *)(param_1 + 2) = (int)param_1[2] - (int)param_2;
  return;
}



/* Entry: 109de93bc; end: 109de9457;  */

uint FUN_109de93bc(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = (int)param_1[2] - (int)param_2[2];
  if (uVar2 == 0) {
    plVar4 = param_1 + 1;
    if (*(int *)(*param_1 + 8) - 0x40U < 0xffffff80) {
      plVar4 = (long *)*plVar4;
    }
    plVar1 = (long *)param_2[1];
    if (0xffffff7f < *(int *)(*param_2 + 8) - 0x40U) {
      plVar1 = param_2 + 1;
    }
    lVar3 = (ulong)(*(int *)(*param_1 + 8) + 0x40U >> 6) << 3;
    do {
      lVar5 = lVar3;
      if (lVar5 == 0) goto LAB_109de9430;
      uVar6 = *(ulong *)((long)plVar4 + lVar5 + -8);
      uVar7 = *(ulong *)((long)plVar1 + lVar5 + -8);
      lVar3 = lVar5 + -8;
    } while (uVar6 == uVar7);
    if (uVar6 < uVar7) {
LAB_109de9430:
      return (uint)(lVar5 == 0);
    }
  }
  else if ((int)uVar2 < 1) {
    return ~uVar2 >> 0x1f;
  }
  return 2;
}



/* Entry: 109de9458; end: 109de9567;  */

undefined8 FUN_109de9458(long *param_1,int param_2)

{
  int iVar1;
  ulong *puVar2;
  byte bVar3;
  ulong *puVar4;
  
  if (param_2 < 3) {
    if (param_2 == 1) {
LAB_109de9524:
      if (*(int *)(*param_1 + 0x10) == 1) {
        FUN_109de78e4(param_1,0,*(byte *)((long)param_1 + 0x14) >> 3 & 1,0);
      }
      else {
        *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf8;
      }
      return 0x14;
    }
    if (param_2 == 2) {
      bVar3 = *(byte *)((long)param_1 + 0x14);
      if ((bVar3 >> 3 & 1) != 0) goto LAB_109de94ac;
      goto LAB_109de9524;
    }
  }
  else {
    if (param_2 == 3) {
      bVar3 = *(byte *)((long)param_1 + 0x14);
      if ((bVar3 >> 3 & 1) != 0) goto LAB_109de9524;
      goto LAB_109de94ac;
    }
    if (param_2 == 4) goto LAB_109de9524;
  }
  bVar3 = *(byte *)((long)param_1 + 0x14);
LAB_109de94ac:
  *(byte *)((long)param_1 + 0x14) = bVar3 & 0xf8 | 2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)*param_1;
  iVar1 = ((undefined4 *)*param_1)[2];
  puVar4 = (ulong *)(param_1 + 1);
  puVar2 = puVar4;
  if (iVar1 - 0x40U < 0xffffff80) {
    puVar2 = (ulong *)*puVar4;
  }
  FUN_109de9568(puVar2,iVar1 + 0x40U >> 6);
  if (*(int *)(*param_1 + 0x10) == 1) {
    if (*(int *)(*param_1 + 8) - 0x40U < 0xffffff80) {
      puVar4 = (ulong *)*puVar4;
    }
    *puVar4 = *puVar4 & 0xfffffffffffffffe;
  }
  return 0x10;
}



/* Entry: 109de9568; end: 109de961f;  */

void FUN_109de9568(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 < 0x41) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_3 - 0x41 >> 6;
    _memset(param_1,0xff,uVar1 * 8 + 8);
    uVar1 = uVar1 + 1;
    param_3 = (param_3 - (param_3 - 0x41 & 0xffffffc0)) - 0x40;
  }
  if (param_3 != 0) {
    *(ulong *)(param_1 + (ulong)uVar1 * 8) = 0xffffffffffffffff >> ((ulong)-param_3 & 0x3f);
    uVar1 = uVar1 + 1;
  }
  if (uVar1 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(param_1 + (ulong)uVar1 * 8,(ulong)(param_2 + ~uVar1) * 8 + 8);
    return;
  }
  return;
}



/* Entry: 109de9620; end: 109de96bf;  */

uint FUN_109de9620(long *param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  long *plVar2;
  
  if (1 < param_2) {
    if (param_2 == 2) {
      bVar1 = (*(byte *)((long)param_1 + 0x14) & 8) == 0;
    }
    else {
      if (param_2 == 3) {
        return *(byte *)((long)param_1 + 0x14) >> 3 & 1;
      }
      bVar1 = (param_3 & 0xfffffffe) == 2;
    }
    return (uint)bVar1;
  }
  if (param_2 != 0) {
    if (param_3 == 3) {
      return 1;
    }
    if ((param_3 == 2) && ((*(byte *)((long)param_1 + 0x14) & 7) != 3)) {
      plVar2 = param_1 + 1;
      if (*(int *)(*param_1 + 8) - 0x40U < 0xffffff80) {
        plVar2 = (long *)*plVar2;
      }
      return (uint)((ulong)plVar2[param_4 >> 6] >> ((ulong)param_4 & 0x3f)) & 1;
    }
  }
  return 0;
}



/* Entry: 109de96c0; end: 109de982f;  */

void FUN_109de96c0(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000109de9708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e05adc8)
                          [(*(byte *)(param_1 + 0x14) & 7) * 4 + (*(byte *)(param_2 + 0x14) & 7)] *
             4 + 0x109de970c))(0);
  return;
}



/* Entry: 109de9830; end: 109de988b;  */

bool FUN_109de9830(long *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (((*(byte *)((long)param_1 + 0x14) & 7) == 1) && (*(int *)(*param_1 + 0x10) != 1)) {
    iVar1 = *(int *)(*param_1 + 8);
    param_1 = param_1 + 1;
    if (iVar1 - 0x40U < 0xffffff80) {
      param_1 = (long *)*param_1;
    }
    uVar2 = iVar1 - 2;
    return ((ulong)param_1[uVar2 >> 6] >> ((ulong)uVar2 & 0x3f) & 1) == 0;
  }
  return false;
}



/* Entry: 109de988c; end: 109de9ad7;  */

void FUN_109de988c(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000109de98cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e05add8)
                          [(*(byte *)(param_1 + 0x14) & 7) * 4 + (*(byte *)(param_2 + 0x14) & 7)] *
             4 + 0x109de98d0))(0);
  return;
}



/* Entry: 109de9ad8; end: 109de9c8f;  */

void FUN_109de9ad8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  
  lVar2 = param_1;
  FUN_109de96c0(param_1,param_2,param_4);
  if ((int)lVar2 == 2) {
    lVar2 = param_1;
    FUN_109de8db8(param_1,param_2,param_4);
    FUN_109de7fd0(param_1,param_3,lVar2);
  }
  bVar1 = *(byte *)(param_1 + 0x14);
  if (((bVar1 & 7) == 3) &&
     (((*(byte *)(param_2 + 0x14) & 7) != 3 ||
      ((uint)param_4 != ((*(byte *)(param_2 + 0x14) ^ bVar1) & 8) >> 3)))) {
    bVar3 = 8;
    if ((int)param_3 != 3) {
      bVar3 = 0;
    }
    *(byte *)(param_1 + 0x14) = bVar1 & 0xf3 | bVar3;
  }
  return;
}



/* Entry: 109de9c90; end: 109de9fc3;  */

void FUN_109de9c90(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000109de9cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e05adf8)
                          [(*(byte *)(param_1 + 0x14) & 7) * 4 + (*(byte *)(param_2 + 0x14) & 7)] *
             4 + 0x109de9ce0))();
  return;
}



/* Entry: 109de9fc4; end: 109dea0b7;  */

int FUN_109de9fc4(long *param_1)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  long lStack_38;
  long lStack_30;
  int iStack_28;
  
  bVar1 = *(byte *)((long)param_1 + 0x14) & 7;
  if ((*(byte *)((long)param_1 + 0x14) & 7) == 0) {
    iVar3 = 0x7fffffff;
  }
  else if (bVar1 == 1) {
    iVar3 = -0x80000000;
  }
  else if (bVar1 == 3) {
    iVar3 = -0x7fffffff;
  }
  else {
    plVar2 = param_1;
    FUN_109de7ca0();
    if (((ulong)plVar2 & 1) == 0) {
      iVar3 = (int)param_1[2];
    }
    else {
      FUN_109de8340(&lStack_38,param_1);
      iVar3 = *(int *)(*param_1 + 8) + -1;
      iStack_28 = iStack_28 + iVar3;
      FUN_109de7fd0(&lStack_38,1,0);
      iVar3 = iStack_28 - iVar3;
      if ((*(int *)(lStack_38 + 8) - 0x40U < 0xffffff80) && (lStack_30 != 0)) {
        __ZdaPv();
      }
    }
  }
  return iVar3;
}



/* Entry: 109dea0b8; end: 109dea18b;  */

long * FUN_109dea0b8(long *param_1,long *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  long *plVar8;
  
  piVar7 = (int *)*param_2;
  iVar1 = *piVar7 + piVar7[2] + ~piVar7[1];
  iVar3 = -2 - iVar1;
  if (-2 - iVar1 <= param_3) {
    iVar3 = param_3;
  }
  if (iVar1 + 1 < iVar3) {
    iVar3 = iVar1 + 1;
  }
  *(int *)(param_2 + 2) = iVar3 + (int)param_2[2];
  FUN_109de7fd0(param_2,param_4,0);
  if (((*(byte *)((long)param_2 + 0x14) & 7) == 1) && (*(int *)(*param_2 + 0x10) != 1)) {
    iVar1 = *(int *)(*param_2 + 8);
    plVar8 = param_2 + 1;
    if (iVar1 - 0x40U < 0xffffff80) {
      plVar8 = (long *)*plVar8;
    }
    uVar5 = iVar1 - 2;
    uVar6 = uVar5 >> 6;
    plVar8[uVar6] = plVar8[uVar6] | 1L << ((ulong)uVar5 & 0x3f);
  }
  *param_1 = (long)&UNK_10e05aebc;
  if ((*(int *)(*param_1 + 8) - 0x40U < 0xffffff80) && (param_1[1] != 0)) {
    __ZdaPv();
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(int *)(param_1 + 2) = (int)param_2[2];
  bVar4 = *(byte *)((long)param_1 + 0x14);
  bVar2 = *(byte *)((long)param_2 + 0x14) & 7;
  *(byte *)((long)param_1 + 0x14) = bVar4 & 0xf8 | bVar2;
  *(byte *)((long)param_1 + 0x14) = bVar4 & 0xf0 | bVar2 | *(byte *)((long)param_2 + 0x14) & 8;
  *param_2 = (long)&UNK_10e05aebc;
  return param_1;
}



/* Entry: 109dea18c; end: 109dea30b;  */

ulong FUN_109dea18c(ulong param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  long lStack_48;
  long lStack_40;
  
  bVar2 = *(byte *)(param_1 + 0x14);
  *(byte *)(param_1 + 0x14) = *(byte *)(param_2 + 0x14) & 8 ^ bVar2;
  if ((((bVar2 & 6) == 0 || (bVar2 & 7) == 3) ||
      ((*(byte *)(param_2 + 0x14) & 6) == 0 || (*(byte *)(param_2 + 0x14) & 7) == 3)) ||
     ((*(byte *)(param_3 + 0x14) & 6) == 0)) {
    uVar4 = param_1;
    FUN_109de988c(param_1,param_2);
    if ((int)uVar4 == 0) {
      uVar4 = param_1;
      FUN_109de96c0(param_1,param_3,0);
      if ((int)uVar4 == 2) {
        uVar3 = param_1;
        FUN_109de8db8(param_1,param_3,0);
        uVar4 = param_1;
        FUN_109de7fd0(param_1,param_4,uVar3);
      }
      bVar2 = *(byte *)(param_1 + 0x14);
      if (((bVar2 & 7) == 3) &&
         (((*(byte *)(param_3 + 0x14) & 7) != 3 || (((*(byte *)(param_3 + 0x14) ^ bVar2) & 8) != 0))
         )) {
        bVar5 = 8;
        if ((int)param_4 != 3) {
          bVar5 = 0;
        }
        *(byte *)(param_1 + 0x14) = bVar2 & 0xf3 | bVar5;
      }
      return uVar4;
    }
    uVar4 = 1;
  }
  else {
    FUN_109de8340(&lStack_48,param_3);
    uVar4 = param_1;
    FUN_109de8500(param_1,param_2,&lStack_48);
    if ((*(int *)(lStack_48 + 8) - 0x40U < 0xffffff80) && (lStack_40 != 0)) {
      __ZdaPv();
    }
    uVar3 = param_1;
    FUN_109de7fd0(param_1,param_4,uVar4);
    uVar1 = (uint)uVar3;
    if ((int)uVar4 != 0) {
      uVar1 = (uint)uVar3 | 0x10;
    }
    uVar4 = (ulong)uVar1;
    bVar2 = *(byte *)(param_1 + 0x14);
    if ((((bVar2 & 7) == 3) && ((uVar1 >> 3 & 1) == 0)) &&
       (((*(byte *)(param_3 + 0x14) ^ bVar2) >> 3 & 1) != 0)) {
      bVar5 = 8;
      if ((int)param_4 != 3) {
        bVar5 = 0;
      }
      *(byte *)(param_1 + 0x14) = bVar2 & 0xf3 | bVar5;
    }
  }
  return uVar4;
}



/* Entry: 109dea30c; end: 109dea4e7;  */

long FUN_109dea30c(long param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  uint uVar3;
  byte bVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  uint uVar7;
  undefined8 **ppuStack_70;
  uint uStack_68;
  undefined8 **ppuStack_60;
  uint uStack_58;
  
  uVar3 = *(uint *)(param_2 + 1);
  uVar1 = (ulong)uVar3 + 0x3f;
  uStack_58 = uVar3;
  if (uVar3 < 0x41) {
    pppuVar6 = (undefined8 ***)*param_2;
  }
  else {
    pppuVar6 = (undefined8 ***)(uVar1 >> 3 & 0x3ffffff8);
    __Znam();
    _memcpy();
  }
  ppuStack_60 = pppuVar6;
  bVar4 = *(byte *)(param_1 + 0x14);
  *(byte *)(param_1 + 0x14) = bVar4 & 0xf7;
  pppuVar5 = pppuVar6;
  uVar7 = uVar3;
  if (param_3 != 0) {
    pppuVar2 = &ppuStack_60;
    if (0x40 < uVar3) {
      pppuVar2 = pppuVar6 + (uVar3 - 1 >> 6);
    }
    if (((ulong)*pppuVar2 >> ((ulong)(uVar3 - 1) & 0x3f) & 1) != 0) {
      *(byte *)(param_1 + 0x14) = bVar4 | 8;
      ppuStack_70 = pppuVar6;
      uStack_68 = uVar3;
      if (0x40 < uVar3) {
        pppuVar5 = (undefined8 ***)(uVar1 >> 3 & 0x3ffffff8);
        __Znam();
        ppuStack_70 = pppuVar5;
        _memcpy();
      }
      func_0x000109d30524(&ppuStack_70);
      FUN_109deffd0(&ppuStack_70);
      uVar7 = uStack_68;
      pppuVar5 = (undefined8 ***)ppuStack_70;
      uStack_68 = 0;
      if ((uVar3 < 0x41) || (pppuVar6 == (undefined8 ***)0x0)) {
        ppuStack_60 = ppuStack_70;
        uStack_58 = uVar7;
      }
      else {
        __ZdaPv(pppuVar6);
        ppuStack_60 = pppuVar5;
        uStack_58 = uVar7;
        if ((0x40 < uStack_68) && ((undefined8 ***)ppuStack_70 != (undefined8 ***)0x0)) {
          __ZdaPv();
        }
      }
    }
  }
  pppuVar6 = &ppuStack_60;
  if (0x40 < uVar7) {
    pppuVar6 = pppuVar5;
  }
  FUN_109dea90c(param_1,pppuVar6,uVar1 >> 6,param_4);
  if ((0x40 < uVar7) && (pppuVar5 != (undefined8 ***)0x0)) {
    __ZdaPv(pppuVar5);
  }
  return param_1;
}



/* Entry: 109dea4e8; end: 109dea7eb;  */

undefined4
FUN_109dea4e8(long *param_1,ulong *param_2,undefined8 param_3,uint param_4,uint param_5,
             undefined8 param_6,byte *param_7)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  ulong *puVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  
  *param_7 = 0;
  bVar1 = *(byte *)((long)param_1 + 0x14) & 7;
  if (bVar1 < 2) {
    return 1;
  }
  uVar12 = param_4 + 0x3f;
  uVar10 = uVar12 >> 6;
  uVar16 = (ulong)uVar10;
  if (bVar1 == 3) {
    *param_2 = 0;
    if (0x7f < uVar12) {
      _bzero(param_2 + 1,(ulong)(uVar10 - 1) << 3);
    }
    bVar7 = (bool)((*(byte *)((long)param_1 + 0x14) >> 3 ^ 0xff) & 1);
    goto LAB_109dea56c;
  }
  plVar15 = param_1 + 1;
  uVar2 = *(uint *)(*param_1 + 8);
  if (uVar2 - 0x40 < 0xffffff80) {
    plVar15 = (long *)*plVar15;
  }
  uVar3 = *(uint *)(param_1 + 2);
  if ((int)uVar3 < 0) {
    *param_2 = 0;
    if (0x7f < uVar12) {
      _bzero(param_2 + 1,(ulong)(uVar10 - 1) << 3);
    }
    iVar8 = uVar2 + ~uVar3;
joined_r0x000109dea604:
    if ((iVar8 == 0) ||
       (FUN_109dea7ec(plVar15,*(int *)(*param_1 + 8) + 0x40U >> 6,iVar8), (int)plVar15 == 0)) {
      bVar4 = true;
    }
    else {
      plVar6 = param_1;
      FUN_109de9620(param_1,param_6,plVar15,iVar8);
      if ((int)plVar6 == 0) {
        bVar4 = false;
      }
      else {
        if (uVar12 < 0x40) {
          return 1;
        }
        uVar9 = *param_2;
        *param_2 = uVar9 + 1;
        if (uVar9 == 0xffffffffffffffff) {
          uVar9 = 0;
          do {
            if (uVar16 - 1 == uVar9) {
              return 1;
            }
            uVar14 = param_2[uVar9 + 1];
            param_2[uVar9 + 1] = uVar14 + 1;
            uVar9 = uVar9 + 1;
          } while (0xfffffffffffffffe < uVar14);
          if (uVar16 <= uVar9) {
            return 1;
          }
        }
        bVar4 = false;
      }
    }
  }
  else {
    if (param_4 <= uVar3) {
      return 1;
    }
    uVar3 = uVar3 + 1;
    iVar8 = uVar2 - uVar3;
    if (uVar3 <= uVar2 && iVar8 != 0) {
      FUN_109df234c(param_2,uVar16,plVar15,uVar3,iVar8);
      goto joined_r0x000109dea604;
    }
    FUN_109df234c(param_2,uVar16,plVar15,uVar2,0);
    FUN_109df0fe4(param_2,uVar16,uVar3 - *(int *)(*param_1 + 8));
    bVar4 = true;
  }
  iVar8 = uVar10 * -0x40;
  uVar10 = uVar10 - 1;
  do {
    iVar8 = iVar8 + 0x40;
    if (param_2[uVar10] != 0) {
      uVar10 = (int)LZCOUNT(param_2[uVar10]) - iVar8 ^ 0x3f;
      goto LAB_109dea714;
    }
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0xffffffff);
  uVar10 = 0xffffffff;
LAB_109dea714:
  uVar2 = uVar10 + 1;
  if ((*(byte *)((long)param_1 + 0x14) >> 3 & 1) == 0) {
    bVar5 = uVar2 < param_4 + (param_5 ^ 1);
    bVar7 = false;
    if (bVar5) {
      bVar7 = bVar4;
    }
    uVar11 = 0x10;
    if (!bVar5) {
      uVar11 = 1;
    }
    if (!bVar7) {
      return uVar11;
    }
  }
  else {
    if ((param_5 & 1) == 0) {
      if (uVar10 != 0xffffffff) {
        return 1;
      }
    }
    else if (uVar2 == param_4) {
      if (0x3f < uVar12) {
        iVar8 = 0;
        puVar13 = param_2;
        uVar9 = uVar16;
        do {
          uVar14 = *puVar13;
          if (uVar14 != 0) {
            uVar9 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar12 = (int)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) - iVar8;
            goto LAB_109dea7e0;
          }
          iVar8 = iVar8 + -0x40;
          uVar9 = uVar9 - 1;
          puVar13 = puVar13 + 1;
        } while (uVar9 != 0);
      }
      uVar12 = 0xffffffff;
LAB_109dea7e0:
      if (uVar12 != uVar10) {
        return 1;
      }
    }
    else if (param_4 < uVar2) {
      return 1;
    }
    FUN_109df246c(param_2,uVar16);
    if (!bVar4) {
      return 0x10;
    }
    bVar7 = true;
  }
LAB_109dea56c:
  *param_7 = bVar7;
  return 0;
}



/* Entry: 109dea7ec; end: 109dea873;  */

undefined8 FUN_109dea7ec(ulong *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  if (param_2 != 0) {
    iVar1 = 0;
    uVar3 = (ulong)param_2;
    puVar4 = param_1;
    do {
      uVar5 = *puVar4;
      if (uVar5 != 0) {
        uVar3 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        iVar2 = (int)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20);
        if (param_3 <= (uint)(iVar2 - iVar1)) {
          return 0;
        }
        if ((iVar2 - param_3) + 1 != iVar1) {
          if ((param_3 <= param_2 * 0x40) &&
             ((param_1[param_3 - 1 >> 6] >> ((ulong)(param_3 - 1) & 0x3f) & 1) != 0)) {
            return 3;
          }
          return 1;
        }
        return 2;
      }
      iVar1 = iVar1 + -0x40;
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
  }
  return 0;
}



/* Entry: 109dea874; end: 109dea90b;  */

long FUN_109dea874(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = param_1;
  FUN_109dea4e8();
  if ((int)lVar4 == 1) {
    uVar3 = param_4 + 0x3fU >> 6;
    iVar1 = param_4 - param_5;
    if ((*(byte *)(param_1 + 0x14) & 8) != 0) {
      iVar1 = param_5;
    }
    iVar2 = 0;
    if ((*(byte *)(param_1 + 0x14) & 7) != 1) {
      iVar2 = iVar1;
    }
    FUN_109de9568(param_2,uVar3,iVar2);
    if ((param_5 != 0) && ((*(byte *)(param_1 + 0x14) >> 3 & 1) != 0)) {
      FUN_109df0fe4(param_2,uVar3,param_4 + -1);
    }
  }
  return lVar4;
}



/* Entry: 109dea90c; end: 109deaa1f;  */

undefined8 FUN_109dea90c(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong *puVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  ulong *puVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  int *piVar15;
  ulong uVar16;
  
  *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf8 | 2;
  iVar7 = (int)param_3 * -0x40;
  uVar10 = (int)param_3 - 1;
  do {
    iVar7 = iVar7 + 0x40;
    lVar9 = *(long *)(param_2 + (ulong)uVar10 * 8);
    if (lVar9 != 0) {
      uVar10 = (int)LZCOUNT(lVar9) - iVar7 ^ 0x3f;
      goto LAB_109dea978;
    }
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0xffffffff);
  uVar10 = 0xffffffff;
LAB_109dea978:
  uVar12 = uVar10 + 1;
  plVar13 = param_1 + 1;
  uVar2 = *(uint *)(*param_1 + 8);
  if (uVar2 - 0x40 < 0xffffff80) {
    plVar13 = (long *)*plVar13;
  }
  uVar4 = uVar2 + 0x40 >> 6;
  if (uVar12 < uVar2) {
    *(uint *)(param_1 + 2) = uVar2 - 1;
    FUN_109df234c(plVar13,uVar4,param_2,uVar12,0);
    uVar16 = 0;
  }
  else {
    *(uint *)(param_1 + 2) = uVar10;
    uVar16 = param_2;
    FUN_109dea7ec(param_2,param_3,uVar12 - uVar2);
    FUN_109df234c(plVar13,uVar4,param_2,uVar2,uVar12 - uVar2);
  }
  if ((*(byte *)((long)param_1 + 0x14) & 6) == 0 || (*(byte *)((long)param_1 + 0x14) & 7) == 3) {
    return 0;
  }
  plVar14 = param_1 + 1;
  piVar15 = (int *)*param_1;
  iVar7 = piVar15[2];
  plVar13 = plVar14;
  if (iVar7 - 0x40U < 0xffffff80) {
    plVar13 = (long *)*plVar14;
  }
  uVar10 = iVar7 + 0x40U >> 6;
  iVar8 = uVar10 * -0x40;
  uVar10 = uVar10 - 1;
  do {
    iVar8 = iVar8 + 0x40;
    if (plVar13[uVar10] != 0) {
      uVar12 = (int)LZCOUNT(plVar13[uVar10]) - iVar8 ^ 0x3f;
      uVar10 = uVar12 + 1;
      if (uVar12 != 0xffffffff) {
        iVar8 = (int)param_1[2] + (uVar10 - iVar7);
        if (*piVar15 < iVar8) goto FUN_109de9458;
        uVar12 = piVar15[1] - (int)param_1[2];
        if (piVar15[1] <= iVar8) {
          uVar12 = uVar10 - iVar7;
        }
        if ((int)uVar12 < 0) {
          FUN_109de9368(param_1,-uVar12);
          return 0;
        }
        if (uVar12 != 0) {
          plVar13 = param_1;
          FUN_109de8d3c(param_1,uVar12);
          uVar4 = (uint)plVar13;
          uVar2 = 3;
          if (uVar4 != 2) {
            uVar2 = uVar4;
          }
          uVar1 = 1;
          if (uVar4 != 0) {
            uVar1 = uVar2;
          }
          if ((int)uVar16 != 0) {
            uVar4 = uVar1;
          }
          uVar16 = (ulong)uVar4;
          bVar3 = uVar12 <= uVar10;
          uVar12 = uVar10 - uVar12;
          uVar10 = 0;
          if (bVar3) {
            uVar10 = uVar12;
          }
          piVar15 = (int *)*param_1;
        }
        goto LAB_109de8090;
      }
      break;
    }
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0xffffffff);
  uVar10 = 0;
LAB_109de8090:
  if (((piVar15[4] != 1) || ((int)param_1[2] != *piVar15)) ||
     (plVar13 = param_1, func_0x000109de7d08(), (int)plVar13 == 0)) {
    if ((int)uVar16 == 0) {
      if (uVar10 != 0) {
        return 0;
      }
      *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf8 | 3;
      return 0;
    }
    plVar13 = param_1;
    FUN_109de9620(param_1,param_4,uVar16,0);
    if (((ulong)plVar13 & 1) == 0) {
      uVar12 = piVar15[2];
LAB_109de818c:
      if (uVar10 == uVar12) {
        return 0x10;
      }
      if (uVar10 == 0) {
        *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf8 | 3;
      }
      return 0x18;
    }
    if (uVar10 == 0) {
      *(int *)(param_1 + 2) = piVar15[1];
    }
    FUN_109de8398(param_1);
    piVar15 = (int *)*param_1;
    uVar12 = piVar15[2];
    if (uVar12 - 0x40 < 0xffffff80) {
      plVar14 = (long *)*plVar14;
    }
    uVar10 = uVar12 + 0x40 >> 6;
    iVar7 = uVar10 * -0x40;
    uVar10 = uVar10 - 1;
    do {
      iVar7 = iVar7 + 0x40;
      if (plVar14[uVar10] != 0) {
        uVar10 = (int)LZCOUNT(plVar14[uVar10]) - iVar7 ^ 0x3f;
        goto LAB_109de8210;
      }
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0xffffffff);
    uVar10 = 0xffffffff;
LAB_109de8210:
    if (uVar10 == uVar12) {
      if ((int)param_1[2] != *piVar15) {
        FUN_109de8d3c(param_1,1);
        return 0x10;
      }
      *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf8;
      return 0x14;
    }
    uVar10 = uVar10 + 1;
    if (((piVar15[4] != 1) || ((int)param_1[2] != *piVar15)) ||
       (plVar13 = param_1, func_0x000109de7d08(), (int)plVar13 == 0)) goto LAB_109de818c;
  }
FUN_109de9458:
  iVar7 = (int)param_4;
  if (iVar7 < 3) {
    if (iVar7 == 1) {
LAB_109de9524:
      if (*(int *)(*param_1 + 0x10) == 1) {
        FUN_109de78e4(param_1,0,*(byte *)((long)param_1 + 0x14) >> 3 & 1,0);
      }
      else {
        *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf8;
      }
      return 0x14;
    }
    if (iVar7 == 2) {
      bVar6 = *(byte *)((long)param_1 + 0x14);
      if ((bVar6 >> 3 & 1) != 0) goto LAB_109de94ac;
      goto LAB_109de9524;
    }
  }
  else {
    if (iVar7 == 3) {
      bVar6 = *(byte *)((long)param_1 + 0x14);
      if ((bVar6 >> 3 & 1) != 0) goto LAB_109de9524;
      goto LAB_109de94ac;
    }
    if (iVar7 == 4) goto LAB_109de9524;
  }
  bVar6 = *(byte *)((long)param_1 + 0x14);
LAB_109de94ac:
  *(byte *)((long)param_1 + 0x14) = bVar6 & 0xf8 | 2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)*param_1;
  iVar7 = ((undefined4 *)*param_1)[2];
  puVar11 = (ulong *)(param_1 + 1);
  puVar5 = puVar11;
  if (iVar7 - 0x40U < 0xffffff80) {
    puVar5 = (ulong *)*puVar11;
  }
  FUN_109de9568(puVar5,iVar7 + 0x40U >> 6);
  if (*(int *)(*param_1 + 0x10) == 1) {
    if (*(int *)(*param_1 + 8) - 0x40U < 0xffffff80) {
      puVar11 = (ulong *)*puVar11;
    }
    *puVar11 = *puVar11 & 0xfffffffffffffffe;
  }
  return 0x10;
}



/* Entry: 109deaa20; end: 109deafff;  */

void FUN_109deaa20(undefined8 *param_1,byte **param_2,byte *param_3,long param_4,byte *param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  byte *pbVar10;
  byte **ppbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte **ppbVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  byte *pbVar18;
  ulong uVar19;
  bool bVar20;
  byte **ppbVar21;
  undefined *apuStack_150 [4];
  undefined2 uStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  undefined **ppuStack_118;
  byte *pbStack_110;
  undefined8 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *apbStack_a8 [4];
  undefined2 uStack_88;
  byte *pbStack_80;
  byte abStack_78 [8];
  undefined **ppuStack_70;
  byte *pbStack_68;
  byte bStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(byte *)((long)param_2 + 0x14) = *(byte *)((long)param_2 + 0x14) & 0xf8 | 2;
  uVar1 = *(uint *)(*param_2 + 8);
  if (uVar1 - 0x40 < 0xffffff80) {
    pbVar10 = param_2[1];
    pbVar10[0] = 0;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10[4] = 0;
    pbVar10[5] = 0;
    pbVar10[6] = 0;
    pbVar10[7] = 0;
    _bzero(pbVar10 + 8,(ulong)((uVar1 + 0x40 >> 6) - 1) << 3);
    *(undefined4 *)(param_2 + 2) = 0;
    ppbVar21 = (byte **)param_2[1];
  }
  else {
    ppbVar21 = param_2 + 1;
    *(undefined4 *)(param_2 + 2) = 0;
    param_2[1] = (byte *)0x0;
  }
  pbVar12 = param_3 + param_4;
  ppbVar11 = &pbStack_68;
  ppbVar14 = &pbStack_c0;
  pbVar10 = param_3;
  pbVar13 = pbVar12;
  FUN_109deb000();
  if ((bStack_60 & 1) != 0) goto LAB_109deaae4;
  pbVar10 = pbStack_68;
  if (pbStack_68 == pbVar12) {
    pbVar13 = (byte *)0x0;
  }
  else {
    pbVar13 = (byte *)0x0;
    bVar20 = false;
    uVar19 = (ulong)((uVar1 & 0xffffffc0) + 0x40);
    bVar2 = *(byte *)(param_1 + 1);
    pbVar18 = pbStack_c0;
    do {
      bVar3 = *pbVar10;
      if (bVar3 == 0x2e) {
        bVar9 = pbVar18 != pbVar12;
        pbVar18 = pbVar10;
        pbVar8 = pbVar10;
        if (bVar9) {
          apbStack_a8[0] = &UNK_10f601d68;
          uStack_88 = 0x103;
          func_0x000109df6eb4();
          abStack_78[0] = 3;
          abStack_78[1] = 0;
          abStack_78[2] = 0;
          abStack_78[3] = 0;
          abStack_78[4] = 0;
          abStack_78[5] = 0;
          abStack_78[6] = 0;
          abStack_78[7] = 0;
          ppuStack_70 = &PTR_PTR_1132fef20;
          param_2 = apbStack_a8;
          pbVar10 = abStack_78;
          FUN_109d3aa88(&pbStack_c8);
          *(byte *)(param_1 + 1) = bVar2 | 1;
          pbStack_68 = pbStack_c8;
          goto LAB_109deaaf0;
        }
      }
      else {
        if ((long)*(short *)(&UNK_10e0431c0 + (ulong)bVar3 * 2) == 0xffffffffffffffff) break;
        pbVar8 = pbStack_c0;
        if ((int)uVar19 == 0) {
          if (!bVar20) {
            if ((ulong)bVar3 - 0x39 < 0xfffffffffffffff7) {
              pbVar13 = (byte *)0x3;
            }
            else {
              pbVar7 = pbVar10;
              if ((bVar3 & 0xf7) == 0x30) {
                do {
                  pbVar7 = pbVar7 + 1;
                  if (pbVar7 == pbVar12) {
                    apbStack_a8[0] = &UNK_10f601e1b;
                    uStack_88 = 0x103;
                    func_0x000109df6eb4();
                    abStack_78[0] = 3;
                    abStack_78[1] = 0;
                    abStack_78[2] = 0;
                    abStack_78[3] = 0;
                    abStack_78[4] = 0;
                    abStack_78[5] = 0;
                    abStack_78[6] = 0;
                    abStack_78[7] = 0;
                    ppuStack_70 = &PTR_PTR_1132fef20;
                    ppbVar11 = apbStack_a8;
                    pbVar10 = abStack_78;
                    FUN_109d3aa88(&pbStack_80);
                    pbStack_68 = pbStack_80;
                    goto LAB_109deaaec;
                  }
                  bVar4 = *pbVar7;
                } while ((bVar4 == 0x30) || (bVar4 == 0x2e));
                if (*(short *)(&UNK_10e0431c0 + (ulong)bVar4 * 2) == -1) {
                  pbVar13 = (byte *)0x0;
                  if (bVar3 != 0x30) {
                    pbVar13 = (byte *)0x2;
                  }
                }
                else {
                  pbVar13 = (byte *)0x3;
                  if (bVar3 == 0x30) {
                    pbVar13 = (byte *)0x1;
                  }
                }
              }
              else {
                pbVar13 = (byte *)0x1;
              }
            }
          }
          uVar19 = 0;
          bVar20 = true;
        }
        else {
          uVar5 = (int)uVar19 - 4;
          uVar19 = (ulong)uVar5;
          uVar5 = uVar5 >> 6;
          ppbVar21[uVar5] =
               (byte *)((ulong)ppbVar21[uVar5] |
                       ((long)*(short *)(&UNK_10e0431c0 + (ulong)bVar3 * 2) & 0xffffffffU) <<
                       (uVar19 & 0x3f));
        }
      }
      pbStack_c0 = pbVar8;
      pbVar10 = pbVar10 + 1;
    } while (pbVar10 != pbVar12);
  }
  if (pbVar10 == pbVar12) {
    apbStack_a8[0] = &UNK_10f601d86;
    uStack_88 = 0x103;
    func_0x000109df6eb4();
    abStack_78[0] = 3;
    abStack_78[1] = 0;
    abStack_78[2] = 0;
    abStack_78[3] = 0;
    abStack_78[4] = 0;
    abStack_78[5] = 0;
    abStack_78[6] = 0;
    abStack_78[7] = 0;
    ppuStack_70 = &PTR_PTR_1132fef20;
    param_2 = apbStack_a8;
    pbVar10 = abStack_78;
    FUN_109d3aa88(&pbStack_d0);
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
    pbStack_68 = pbStack_d0;
LAB_109deaaf0:
    *param_1 = pbStack_68;
  }
  else {
    if ((*pbVar10 | 0x20) != 0x70) {
      apbStack_a8[0] = &UNK_10f601da6;
      uStack_88 = 0x103;
      func_0x000109df6eb4();
      abStack_78[0] = 3;
      abStack_78[1] = 0;
      abStack_78[2] = 0;
      abStack_78[3] = 0;
      abStack_78[4] = 0;
      abStack_78[5] = 0;
      abStack_78[6] = 0;
      abStack_78[7] = 0;
      ppuStack_70 = &PTR_PTR_1132fef20;
      param_2 = apbStack_a8;
      pbVar10 = abStack_78;
      FUN_109d3aa88(&pbStack_d8);
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
      pbStack_68 = pbStack_d8;
      goto LAB_109deaaf0;
    }
    if (pbVar10 == param_3) {
      apbStack_a8[0] = &UNK_10f601dc7;
      uStack_88 = 0x103;
      func_0x000109df6eb4();
      abStack_78[0] = 3;
      abStack_78[1] = 0;
      abStack_78[2] = 0;
      abStack_78[3] = 0;
      abStack_78[4] = 0;
      abStack_78[5] = 0;
      abStack_78[6] = 0;
      abStack_78[7] = 0;
      ppuStack_70 = &PTR_PTR_1132fef20;
      param_2 = apbStack_a8;
      pbVar10 = abStack_78;
      FUN_109d3aa88(&pbStack_e0);
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
      pbStack_68 = pbStack_e0;
      goto LAB_109deaaf0;
    }
    if ((pbStack_c0 != pbVar12) && ((long)pbVar10 - (long)param_3 == 1)) {
      apbStack_a8[0] = &UNK_10f601dc7;
      uStack_88 = 0x103;
      func_0x000109df6eb4();
      abStack_78[0] = 3;
      abStack_78[1] = 0;
      abStack_78[2] = 0;
      abStack_78[3] = 0;
      abStack_78[4] = 0;
      abStack_78[5] = 0;
      abStack_78[6] = 0;
      abStack_78[7] = 0;
      ppuStack_70 = &PTR_PTR_1132fef20;
      param_2 = apbStack_a8;
      pbVar10 = abStack_78;
      FUN_109d3aa88(&pbStack_e8);
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
      pbStack_68 = pbStack_e8;
      goto LAB_109deaaf0;
    }
    if (pbVar10 != pbStack_68) {
      if (pbStack_c0 == pbVar12) {
        pbStack_c0 = pbVar10;
      }
      pbVar18 = pbVar10 + 1;
      if (pbVar18 == pbVar12) {
        apbStack_a8[0] = &UNK_10f601e42;
        uStack_88 = 0x103;
        func_0x000109df6eb4();
        abStack_78[0] = 3;
        abStack_78[1] = 0;
        abStack_78[2] = 0;
        abStack_78[3] = 0;
        abStack_78[4] = 0;
        abStack_78[5] = 0;
        abStack_78[6] = 0;
        abStack_78[7] = 0;
        ppuStack_70 = &PTR_PTR_1132fef20;
        ppbVar11 = apbStack_a8;
        pbVar10 = abStack_78;
        FUN_109d3aa88(&pbStack_80);
        pbStack_68 = pbStack_80;
      }
      else {
        bVar2 = *pbVar18;
        if (((bVar2 != 0x2d) && (bVar2 != 0x2b)) || (pbVar18 = pbVar10 + 2, pbVar18 != pbVar12)) {
          if (pbVar18 == pbVar12) {
            iVar17 = 0;
          }
          else {
            iVar17 = 0;
            do {
              if (9 < (int)(char)*pbVar18 - 0x30U) {
                apbStack_a8[0] = &UNK_10f601e59;
                uStack_88 = 0x103;
                func_0x000109df6eb4();
                abStack_78[0] = 3;
                abStack_78[1] = 0;
                abStack_78[2] = 0;
                abStack_78[3] = 0;
                abStack_78[4] = 0;
                abStack_78[5] = 0;
                abStack_78[6] = 0;
                abStack_78[7] = 0;
                ppuStack_70 = &PTR_PTR_1132fef20;
                ppbVar11 = apbStack_a8;
                pbVar10 = abStack_78;
                FUN_109d3aa88(&pbStack_b8);
                pbStack_68 = pbStack_b8;
                goto LAB_109deaae4;
              }
              iVar17 = ((int)(char)*pbVar18 - 0x30U) + iVar17 * 10;
              if (0x7fff < iVar17) goto LAB_109deaf48;
              pbVar18 = pbVar18 + 1;
            } while (pbVar18 != pbVar12);
          }
          iVar6 = (int)pbStack_c0 - (int)pbStack_68;
          iVar6 = (*(int *)(*param_2 + 8) - (uVar1 & 0xffffffc0)) + (iVar6 - (iVar6 >> 0x1f)) * 4 +
                  -0x41;
          if (iVar6 == (short)iVar6) {
            iVar15 = -iVar17;
            if (bVar2 != 0x2d) {
              iVar15 = iVar17;
            }
            iVar15 = iVar15 + iVar6;
            if (iVar15 != (short)iVar15) goto LAB_109deaf48;
          }
          else {
LAB_109deaf48:
            iVar15 = -0x8000;
            if (bVar2 != 0x2d) {
              iVar15 = 0x7fff;
            }
          }
          *(int *)(param_2 + 2) = iVar15;
          goto LAB_109deaf58;
        }
        apbStack_a8[0] = &UNK_10f601e42;
        uStack_88 = 0x103;
        func_0x000109df6eb4();
        abStack_78[0] = 3;
        abStack_78[1] = 0;
        abStack_78[2] = 0;
        abStack_78[3] = 0;
        abStack_78[4] = 0;
        abStack_78[5] = 0;
        abStack_78[6] = 0;
        abStack_78[7] = 0;
        ppuStack_70 = &PTR_PTR_1132fef20;
        ppbVar11 = apbStack_a8;
        pbVar10 = abStack_78;
        FUN_109d3aa88(&pbStack_b0);
        pbStack_68 = pbStack_b0;
      }
LAB_109deaae4:
      bVar2 = *(byte *)(param_1 + 1);
LAB_109deaaec:
      *(byte *)(param_1 + 1) = bVar2 | 1;
      param_2 = ppbVar11;
      goto LAB_109deaaf0;
    }
LAB_109deaf58:
    pbVar10 = param_5;
    FUN_109de7fd0();
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfe;
    *(int *)param_1 = (int)param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_f8 = FUN_109deb000;
  *ppbVar14 = pbVar13;
  pbVar12 = pbVar10;
  if (pbVar10 != pbVar13) {
    lVar16 = (long)pbVar13 - (long)pbVar10;
    do {
      if (*pbVar10 != 0x30) {
        pbVar12 = pbVar10;
        if (*pbVar10 == 0x2e) {
          *ppbVar14 = pbVar10;
          if (lVar16 == 1) {
            apuStack_150[0] = &UNK_10f601dc7;
            uStack_130 = 0x103;
            pbStack_110 = param_5;
            puStack_108 = param_1;
            puStack_100 = &stack0xfffffffffffffff0;
            func_0x000109df6eb4();
            pbStack_120 = (byte *)0x3;
            ppuStack_118 = &PTR_PTR_1132fef20;
            FUN_109d3aa88(&pbStack_128,apuStack_150,&pbStack_120);
            *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 1;
            *param_2 = pbStack_128;
            return;
          }
          goto LAB_109deb0ac;
        }
        break;
      }
      pbVar10 = pbVar10 + 1;
      pbVar12 = pbVar13;
    } while (pbVar10 != pbVar13);
  }
LAB_109deb0c4:
  *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xfe;
  *param_2 = pbVar12;
  return;
  while (pbVar12 = pbVar10, *pbVar10 == 0x30) {
LAB_109deb0ac:
    pbVar10 = pbVar10 + 1;
    pbVar12 = pbVar13;
    if (pbVar10 == pbVar13) break;
  }
  goto LAB_109deb0c4;
}



/* Entry: 109deb000; end: 109deb12f;  */

void FUN_109deb000(undefined8 *param_1,char *param_2,char *param_3,undefined8 *param_4)

{
  char *pcVar1;
  long lVar2;
  undefined *apuStack_60 [4];
  undefined2 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined **ppuStack_28;
  
  *param_4 = param_3;
  pcVar1 = param_2;
  if (param_2 != param_3) {
    lVar2 = (long)param_3 - (long)param_2;
    do {
      if (*param_2 != '0') {
        pcVar1 = param_2;
        if (*param_2 == '.') {
          *param_4 = param_2;
          if (lVar2 == 1) {
            apuStack_60[0] = &UNK_10f601dc7;
            uStack_40 = 0x103;
            func_0x000109df6eb4();
            uStack_30 = 3;
            ppuStack_28 = &PTR_PTR_1132fef20;
            FUN_109d3aa88(&uStack_38,apuStack_60,&uStack_30);
            *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
            *param_1 = uStack_38;
            return;
          }
          goto LAB_109deb0ac;
        }
        break;
      }
      param_2 = param_2 + 1;
      pcVar1 = param_3;
    } while (param_2 != param_3);
  }
  goto LAB_109deb0c4;
  while (pcVar1 = param_2, *param_2 == '0') {
LAB_109deb0ac:
    param_2 = param_2 + 1;
    pcVar1 = param_3;
    if (param_2 == param_3) break;
  }
LAB_109deb0c4:
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfe;
  *param_1 = pcVar1;
  return;
}



/* Entry: 109deb130; end: 109deb6df;  */

/* WARNING: Removing unreachable block (ram,0x000109de79c0) */
/* WARNING: Removing unreachable block (ram,0x000109de7ac0) */
/* WARNING: Removing unreachable block (ram,0x000109de7b58) */
/* WARNING: Removing unreachable block (ram,0x000109de7b60) */
/* WARNING: Removing unreachable block (ram,0x000109de7b68) */
/* WARNING: Removing unreachable block (ram,0x000109de7b70) */
/* WARNING: Removing unreachable block (ram,0x000109de7b7c) */
/* WARNING: Removing unreachable block (ram,0x000109de7b84) */
/* WARNING: Removing unreachable block (ram,0x000109de7ae0) */
/* WARNING: Type propagation algorithm not settling */

long *******
FUN_109deb130(long *******param_1,undefined8 param_2,undefined4 param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  long ******pppppplVar3;
  bool bVar4;
  long ******pppppplVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long ******pppppplVar11;
  byte bVar12;
  long *******ppppppplVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *******ppppppplVar19;
  uint *puVar20;
  long *******unaff_x25;
  int iVar21;
  ulong uVar22;
  long *******ppppppplStack_4cb0;
  uint uStack_4ca8;
  long *******ppppppplStack_4ca0;
  uint auStack_4c98 [2];
  long *******ppppppplStack_4c90;
  ulong uStack_4c88;
  ulong uStack_4c80;
  long *******ppppppplStack_4c78;
  long ******pppppplStack_4c70;
  long *******ppppppplStack_4c68;
  ulong uStack_4c60;
  long *******ppppppplStack_4c58;
  ulong uStack_4c50;
  long *******ppppppplStack_4c48;
  undefined1 *puStack_4c40;
  code *pcStack_4c38;
  int iStack_4c2c;
  long *******ppppppplStack_4c28;
  uint uStack_4c1c;
  uint uStack_4c18;
  uint uStack_4c14;
  undefined8 uStack_4c10;
  undefined4 uStack_4c04;
  undefined8 uStack_4c00;
  undefined8 uStack_4bf8;
  undefined4 uStack_4bf0;
  long ******apppppplStack_4be0 [600];
  long ******pppppplStack_3920;
  long *******ppppppplStack_3918;
  uint uStack_2660;
  undefined8 uStack_265c;
  undefined8 uStack_2654;
  undefined8 uStack_264c;
  undefined8 uStack_2644;
  undefined8 uStack_263c;
  undefined4 uStack_2634;
  undefined4 uStack_2630;
  undefined4 uStack_262c;
  undefined8 uStack_2628;
  long ******pppppplStack_2620;
  long *******ppppppplStack_2618;
  int iStack_2610;
  byte bStack_260c;
  long lStack_78;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_4c04 = param_3;
  uStack_4c10 = param_2;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_4bf8 = 0;
  uStack_4c00 = 0xffff800100007fff;
  uStack_4bf0 = 0;
  iStack_4c2c = param_5;
  uStack_4c18 = (uint)(param_5 == 1 || param_5 == 4);
  uStack_4c14 = param_4;
  uVar18 = (ulong)(*(int *)(*param_1 + 1) + 0x4aU >> 6);
  uVar9 = -param_4;
  if (-1 < (int)param_4) {
    uVar9 = param_4;
  }
  pppppplStack_2620 = (long ******)0x5f5e1;
  uStack_2628 = 0;
  uStack_262c = 0;
  uStack_2634 = 0;
  uStack_2630 = 0;
  uStack_263c = 0;
  uStack_2644 = 0;
  uStack_264c = 0;
  uStack_2654 = 0;
  uStack_265c = 0;
  uVar22 = 1;
  uStack_2660 = 1;
  apppppplStack_4be0[0] = *(long *******)(&UNK_10e05aee8 + (ulong)(uVar9 & 7) * 8);
  if (7 < uVar9) {
    uVar9 = uVar9 >> 3;
    ppppppplVar6 = &pppppplStack_3920;
    pppppplVar11 = (long ******)&pppppplStack_2620;
    uVar22 = 1;
    uVar17 = 0xffffffff;
    puVar20 = &uStack_2660;
    ppppppplVar19 = apppppplStack_4be0;
    do {
      uVar15 = *puVar20;
      if (uVar15 == 0) {
        uVar10 = (&uStack_2660)[uVar17 & 0xffffffff];
        uVar16 = (ulong)uVar10;
        FUN_109df24c8(pppppplVar11,pppppplVar11 + -uVar16,pppppplVar11 + -uVar16,uVar16,uVar16);
        uVar10 = uVar10 * 2;
        uVar15 = uVar10 - 1;
        if (pppppplVar11[uVar15] != (long *****)0x0) {
          uVar15 = uVar10;
        }
        *puVar20 = uVar15;
      }
      unaff_x25 = ppppppplVar19;
      if ((uVar9 & 1) != 0) {
        FUN_109df24c8(ppppppplVar6,ppppppplVar19,pppppplVar11,uVar22,(ulong)uVar15);
        uVar10 = uVar15 + (int)uVar22;
        uVar1 = uVar10 - 1;
        if (ppppppplVar6[uVar1] != (long ******)0x0) {
          uVar1 = uVar10;
        }
        uVar22 = (ulong)uVar1;
        unaff_x25 = ppppppplVar6;
        ppppppplVar6 = ppppppplVar19;
      }
      pppppplVar11 = pppppplVar11 + uVar15;
      uVar17 = uVar17 + 1;
      puVar20 = puVar20 + 1;
      bVar4 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
      ppppppplVar19 = unaff_x25;
    } while (bVar4);
    if ((unaff_x25 != apppppplStack_4be0) && ((int)uVar22 != 0)) {
      ppppppplVar6 = unaff_x25;
      uVar17 = uVar22;
      pppppplVar11 = (long ******)apppppplStack_4be0;
      do {
        *pppppplVar11 = (long *****)*ppppppplVar6;
        uVar17 = uVar17 - 1;
        ppppppplVar6 = ppppppplVar6 + 1;
        pppppplVar11 = pppppplVar11 + 1;
      } while (uVar17 != 0);
    }
  }
  ppppppplStack_4c28 = param_1 + 1;
  uStack_4c1c = (uint)uVar22;
  do {
    iVar2 = (int)uVar18 * 0x40 + -1;
    uStack_4bf8 = CONCAT44(uStack_4bf8._4_4_,iVar2);
    iVar21 = *(int *)(*param_1 + 1);
    FUN_109de8290(&pppppplStack_2620,&uStack_4c00);
    bStack_260c = *(byte *)((long)param_1 + 0x14) & 8 | bStack_260c & 0xf0 | 3;
    iVar8 = *(int *)(pppppplStack_2620 + 1);
    iStack_2610 = *(int *)((long)pppppplStack_2620 + 4) + -1;
    if (iVar8 - 0x40U < 0xffffff80) {
      *ppppppplStack_2618 = (long ******)0x0;
      _bzero(ppppppplStack_2618 + 1,(ulong)((iVar8 + 0x40U >> 6) - 1) << 3);
    }
    else {
      ppppppplStack_2618 = (long *******)0x0;
    }
    FUN_109de8290(&pppppplStack_3920,&uStack_4c00);
    pppppplVar11 = (long ******)&pppppplStack_2620;
    FUN_109dea90c(pppppplVar11,uStack_4c10,uStack_4c04,1);
    pppppplVar5 = (long ******)&pppppplStack_3920;
    FUN_109dea90c(pppppplVar5,apppppplStack_4be0,uVar22,1);
    uVar9 = iVar2 - iVar21;
    uVar22 = (ulong)uVar9;
    iStack_2610 = iStack_2610 + uStack_4c14;
    uVar17 = uVar22;
    if ((int)uStack_4c14 < 0) {
      ppppppplVar6 = &pppppplStack_2620;
      iVar8 = (int)&pppppplStack_3920;
      FUN_109de9014();
      iVar21 = *(int *)((long)*param_1 + 4) - iStack_2610;
      if (iVar21 != 0 && iStack_2610 <= *(int *)((long)*param_1 + 4)) {
        uVar9 = iVar21 + uVar9;
        uVar17 = (ulong)uVar9;
        if ((uint)uStack_4bf8 <= uVar9) {
          uVar9 = (uint)uStack_4bf8;
        }
        uVar22 = (ulong)uVar9;
      }
      uVar9 = 0;
      if ((int)pppppplVar5 != 0 || (int)ppppppplVar6 != 0) {
        uVar9 = 2;
      }
    }
    else {
      ppppppplVar6 = &pppppplStack_2620;
      iVar8 = (int)&pppppplStack_3920;
      FUN_109de8f7c();
      uVar9 = (uint)((int)pppppplVar5 != 0);
    }
    ppppppplVar19 = ppppppplStack_2618;
    pppppplVar5 = pppppplStack_2620;
    if ((int)pppppplVar11 != 0) {
      uVar9 = uVar9 + 1;
    }
    bVar4 = (int)ppppppplVar6 != 0;
    uVar15 = 2;
    if (!bVar4) {
      uVar15 = 0;
    }
    if (uVar9 != 0) {
      uVar15 = (uint)bVar4 | uVar9 << 1;
    }
    ppppppplVar7 = ppppppplStack_2618;
    if (0xffffff7f < *(int *)(pppppplStack_2620 + 1) - 0x40U) {
      ppppppplVar7 = (long *******)&ppppppplStack_2618;
    }
    iVar21 = (int)uVar22;
    uVar9 = iVar21 - 1;
    uVar10 = uVar9 >> 6;
    uVar14 = (ulong)ppppppplVar7[uVar10] & 0xffffffffffffffffU >> (uVar9 & 0x3f ^ 0x3f);
    uVar16 = 1L << ((ulong)uVar9 & 0x3f);
    if (uStack_4c18 == 0) {
      uVar16 = 0;
    }
    if (uVar9 < 0x40) {
      pppppplVar3 = (long ******)(uVar14 - uVar16);
      pppppplVar11 = (long ******)-(long)pppppplVar3;
      if (-1 < (long)pppppplVar3) {
        pppppplVar11 = pppppplVar3;
      }
    }
    else {
      if (uVar14 == uVar16) {
        do {
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            pppppplVar11 = *ppppppplVar7;
            goto LAB_109deb558;
          }
        } while (ppppppplVar7[uVar10] == (long ******)0x0);
      }
      else if (uVar14 == uVar16 - 1) {
        do {
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            pppppplVar11 = (long ******)-(long)*ppppppplVar7;
            goto LAB_109deb558;
          }
        } while (ppppppplVar7[uVar10] == (long ******)0xffffffffffffffff);
      }
      pppppplVar11 = (long ******)0xffffffffffffffff;
    }
LAB_109deb558:
    uVar16 = (long)pppppplVar11 << 1;
    if (uVar15 <= uVar16) {
      ppppppplVar6 = ppppppplStack_4c28;
      if (*(int *)(*param_1 + 1) - 0x40U < 0xffffff80) {
        ppppppplVar6 = (long *******)*ppppppplStack_4c28;
      }
      FUN_109df234c(ppppppplVar6,*(int *)(*param_1 + 1) + 0x40U >> 6,ppppppplVar7,
                    (uint)uStack_4bf8 - iVar21,uVar22);
      *(uint *)(param_1 + 2) = (iStack_2610 + iVar21 + *(int *)(*param_1 + 1)) - (uint)uStack_4bf8;
      ppppppplVar7 = ppppppplVar19;
      if (0xffffff7f < *(int *)(pppppplVar5 + 1) - 0x40U) {
        ppppppplVar7 = (long *******)&ppppppplStack_2618;
      }
      FUN_109dea7ec(ppppppplVar7,*(int *)(pppppplVar5 + 1) + 0x40U >> 6,uVar17);
      ppppppplVar6 = param_1;
      iVar8 = iStack_4c2c;
      FUN_109de7fd0(param_1,iStack_4c2c,ppppppplVar7);
      unaff_x25 = ppppppplVar6;
    }
    uVar22 = (ulong)uStack_4c1c;
    if ((*(int *)(pppppplStack_3920 + 1) - 0x40U < 0xffffff80) &&
       (ppppppplVar6 = ppppppplStack_3918, ppppppplStack_3918 != (long *******)0x0)) {
      __ZdaPv();
    }
    if (0x7f < *(int *)(pppppplVar5 + 1) + 0x40U && ppppppplVar19 != (long *******)0x0) {
      ppppppplVar6 = ppppppplVar19;
      __ZdaPv();
    }
    uVar18 = (ulong)(uint)((int)uVar18 << 1);
  } while (uVar16 < uVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return unaff_x25;
  }
  ___stack_chk_fail();
  ppppppplVar7 = ppppppplVar6;
  __Unwind_Resume();
  pppppplVar11 = *ppppppplVar7;
  if (*(int *)(pppppplVar11 + 2) != 1) {
    bVar12 = 8;
    if (iVar8 == 0) {
      bVar12 = 0;
    }
    *(byte *)((long)ppppppplVar7 + 0x14) = *(byte *)((long)ppppppplVar7 + 0x14) & 0xf0 | bVar12;
    *(int *)(ppppppplVar7 + 2) = *(int *)pppppplVar11 + 1;
    iVar8 = *(int *)(pppppplVar11 + 1);
    if (iVar8 - 0x40U < 0xffffff80) {
      ppppppplVar6 = (long *******)(ppppppplVar7[1] + 1);
      *ppppppplVar7[1] = (long *****)0x0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__bzero_11034bf90)(ppppppplVar6,(ulong)((iVar8 + 0x40U >> 6) - 1) << 3);
      return ppppppplVar6;
    }
    ppppppplVar7[1] = (long ******)0x0;
    return ppppppplVar7;
  }
  ppppppplStack_4c90 = ppppppplVar19;
  uStack_4c88 = uVar17;
  uStack_4c80 = uVar22;
  ppppppplStack_4c78 = unaff_x25;
  pppppplStack_4c70 = pppppplVar5;
  ppppppplStack_4c68 = param_1;
  uStack_4c60 = uVar18;
  ppppppplStack_4c58 = (long *******)&ppppppplStack_2618;
  uStack_4c50 = uVar16;
  ppppppplStack_4c48 = ppppppplVar6;
  puStack_4c40 = &stack0xfffffffffffffff0;
  pcStack_4c38 = FUN_109deb6e0;
  ppppppplVar6 = (long *******)0x0;
  bVar12 = 9;
  if (iVar8 == 0) {
    bVar12 = 1;
  }
  *(byte *)((long)ppppppplVar7 + 0x14) = *(byte *)((long)ppppppplVar7 + 0x14) & 0xf0 | bVar12;
  pppppplVar11 = *ppppppplVar7;
  iVar21 = *(int *)(pppppplVar11 + 2);
  iVar8 = *(int *)pppppplVar11;
  if (iVar21 != 1) {
    iVar8 = iVar8 + 1;
  }
  *(int *)(ppppppplVar7 + 2) = iVar8;
  iVar8 = *(int *)(pppppplVar11 + 1);
  ppppppplVar19 = ppppppplVar7 + 1;
  if (iVar8 - 0x40U < 0xffffff80) {
    ppppppplVar19 = (long *******)*ppppppplVar19;
  }
  uVar9 = iVar8 + 0x40U >> 6;
  auStack_4c98[0] = 1;
  ppppppplStack_4ca0 = (long *******)0x0;
  if (iVar21 == 1) {
    puVar20 = auStack_4c98;
    func_0x000109d301b0(&ppppppplStack_4cb0,iVar8 + -1,0xffffffffffffffff,1);
    ppppppplStack_4ca0 = ppppppplStack_4cb0;
    auStack_4c98[0] = uStack_4ca8;
    ppppppplVar6 = (long *******)&ppppppplStack_4ca0;
    uVar15 = uStack_4ca8;
    if ((uint)((ulong)uStack_4ca8 + 0x3f >> 6) < uVar9) {
      bVar4 = false;
      goto LAB_109de79ec;
    }
  }
  else {
    puVar20 = (uint *)0x8;
    bVar4 = true;
LAB_109de79ec:
    uStack_4ca8 = auStack_4c98[0];
    ppppppplStack_4cb0 = ppppppplStack_4ca0;
    *ppppppplVar19 = (long ******)0x0;
    if (0x7f < iVar8 + 0x40U) {
      _bzero(ppppppplVar19 + 1,(ulong)(uVar9 - 1) << 3);
    }
    if (bVar4) {
      pppppplVar11 = *ppppppplVar7;
      iVar8 = *(int *)(pppppplVar11 + 1);
      ppppppplVar6 = ppppppplStack_4cb0;
      goto LAB_109de7a24;
    }
    uVar15 = *puVar20;
  }
  if (0x40 < uVar15) {
    ppppppplVar6 = (long *******)*ppppppplVar6;
  }
  uVar10 = (uint)((ulong)uVar15 + 0x3f >> 6);
  uVar15 = uVar9;
  if (uVar10 <= uVar9) {
    uVar15 = uVar10;
  }
  uVar18 = (ulong)uVar15;
  ppppppplVar13 = ppppppplVar19;
  if (uVar15 != 0) {
    do {
      *ppppppplVar13 = *ppppppplVar6;
      uVar18 = uVar18 - 1;
      ppppppplVar13 = ppppppplVar13 + 1;
      ppppppplVar6 = ppppppplVar6 + 1;
    } while (uVar18 != 0);
  }
  pppppplVar11 = *ppppppplVar7;
  iVar8 = *(int *)(pppppplVar11 + 1);
  uVar15 = iVar8 - 1U >> 6;
  ppppppplVar19[uVar15] =
       (long ******)
       ((ulong)ppppppplVar19[uVar15] & (-1L << ((ulong)(iVar8 - 1U) & 0x3f) ^ 0xffffffffffffffffU));
  while (uVar15 = uVar15 + 1, ppppppplVar6 = ppppppplStack_4cb0, uVar15 != uVar9) {
    ppppppplVar19[uVar15] = (long ******)0x0;
  }
LAB_109de7a24:
  uVar9 = iVar8 - 2U >> 6;
  ppppppplVar19[uVar9] =
       (long ******)(1L << ((ulong)(iVar8 - 2U) & 0x3f) | (ulong)ppppppplVar19[uVar9]);
  if (pppppplVar11 == (long ******)&DAT_10e05aea8) {
    uVar9 = iVar8 - 1U >> 6;
    ppppppplVar19[uVar9] =
         (long ******)((ulong)ppppppplVar19[uVar9] | 1L << ((ulong)(iVar8 - 1U) & 0x3f));
  }
  if ((0x40 < uStack_4ca8) && (ppppppplVar6 != (long *******)0x0)) {
    __ZdaPv();
  }
  return ppppppplVar6;
}



/* Entry: 109deb6e0; end: 109deb75b;  */

/* WARNING: Removing unreachable block (ram,0x000109de79c0) */
/* WARNING: Removing unreachable block (ram,0x000109de7ac0) */
/* WARNING: Removing unreachable block (ram,0x000109de7b58) */
/* WARNING: Removing unreachable block (ram,0x000109de7b60) */
/* WARNING: Removing unreachable block (ram,0x000109de7b68) */
/* WARNING: Removing unreachable block (ram,0x000109de7b70) */
/* WARNING: Removing unreachable block (ram,0x000109de7b7c) */
/* WARNING: Removing unreachable block (ram,0x000109de7b84) */
/* WARNING: Removing unreachable block (ram,0x000109de7ae0) */

void FUN_109deb6e0(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  byte bVar10;
  undefined *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  uint *puVar16;
  long lStack_80;
  uint uStack_78;
  long lStack_70;
  uint auStack_68 [2];
  
  piVar9 = (int *)*param_1;
  if (piVar9[4] != 1) {
    bVar10 = 8;
    if (param_2 == 0) {
      bVar10 = 0;
    }
    *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf0 | bVar10;
    *(int *)(param_1 + 2) = *piVar9 + 1;
    iVar2 = piVar9[2];
    if (0xffffff7f < iVar2 - 0x40U) {
      param_1[1] = 0;
      return;
    }
    puVar6 = (undefined8 *)param_1[1];
    *puVar6 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(puVar6 + 1,(ulong)((iVar2 + 0x40U >> 6) - 1) << 3);
    return;
  }
  plVar13 = (long *)0x0;
  bVar10 = 9;
  if (param_2 == 0) {
    bVar10 = 1;
  }
  *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf0 | bVar10;
  piVar9 = (int *)*param_1;
  iVar1 = piVar9[4];
  iVar2 = *piVar9;
  if (iVar1 != 1) {
    iVar2 = iVar2 + 1;
  }
  *(int *)(param_1 + 2) = iVar2;
  iVar2 = piVar9[2];
  plVar14 = param_1 + 1;
  if (iVar2 - 0x40U < 0xffffff80) {
    plVar14 = (long *)*plVar14;
  }
  uVar3 = iVar2 + 0x40U >> 6;
  auStack_68[0] = 1;
  lStack_70 = 0;
  if (iVar1 == 1) {
    puVar16 = auStack_68;
    func_0x000109d301b0(&lStack_80,iVar2 + -1,0xffffffffffffffff,1);
    lStack_70 = lStack_80;
    auStack_68[0] = uStack_78;
    plVar13 = &lStack_70;
    uVar15 = uStack_78;
    if ((uint)((ulong)uStack_78 + 0x3f >> 6) < uVar3) {
      bVar4 = false;
      goto LAB_109de79ec;
    }
  }
  else {
    puVar16 = (uint *)0x8;
    bVar4 = true;
LAB_109de79ec:
    uVar15 = auStack_68[0];
    lStack_80 = lStack_70;
    *plVar14 = 0;
    if (0x7f < iVar2 + 0x40U) {
      _bzero(plVar14 + 1,(ulong)(uVar3 - 1) << 3);
    }
    if (bVar4) {
      puVar11 = (undefined *)*param_1;
      iVar2 = *(int *)(puVar11 + 8);
      goto LAB_109de7a24;
    }
    uStack_78 = *puVar16;
  }
  if (0x40 < uStack_78) {
    plVar13 = (long *)*plVar13;
  }
  uVar7 = (uint)((ulong)uStack_78 + 0x3f >> 6);
  uVar5 = uVar3;
  if (uVar7 <= uVar3) {
    uVar5 = uVar7;
  }
  uVar8 = (ulong)uVar5;
  plVar12 = plVar14;
  if (uVar5 != 0) {
    do {
      *plVar12 = *plVar13;
      uVar8 = uVar8 - 1;
      plVar12 = plVar12 + 1;
      plVar13 = plVar13 + 1;
    } while (uVar8 != 0);
  }
  puVar11 = (undefined *)*param_1;
  iVar2 = *(int *)(puVar11 + 8);
  uVar5 = iVar2 - 1U >> 6;
  plVar14[uVar5] = plVar14[uVar5] & (-1L << ((ulong)(iVar2 - 1U) & 0x3f) ^ 0xffffffffffffffffU);
  while (uVar5 = uVar5 + 1, uVar5 != uVar3) {
    plVar14[uVar5] = 0;
  }
LAB_109de7a24:
  uVar3 = iVar2 - 2U >> 6;
  plVar14[uVar3] = 1L << ((ulong)(iVar2 - 2U) & 0x3f) | plVar14[uVar3];
  if (puVar11 == &DAT_10e05aea8) {
    uVar3 = iVar2 - 1U >> 6;
    plVar14[uVar3] = plVar14[uVar3] | 1L << ((ulong)(iVar2 - 1U) & 0x3f);
  }
  if ((0x40 < uVar15) && (lStack_80 != 0)) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109deb75c; end: 109dec27f;  */

/* WARNING: Possible PIC construction at 0x000109deaad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109deb8fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109deaad8) */
/* WARNING: Removing unreachable block (ram,0x000109deab28) */
/* WARNING: Removing unreachable block (ram,0x000109deac54) */
/* WARNING: Removing unreachable block (ram,0x000109deab34) */
/* WARNING: Removing unreachable block (ram,0x000109deab5c) */
/* WARNING: Removing unreachable block (ram,0x000109deab80) */
/* WARNING: Removing unreachable block (ram,0x000109deab8c) */
/* WARNING: Removing unreachable block (ram,0x000109deabb4) */
/* WARNING: Removing unreachable block (ram,0x000109deabb8) */
/* WARNING: Removing unreachable block (ram,0x000109deabd0) */
/* WARNING: Removing unreachable block (ram,0x000109deac0c) */
/* WARNING: Removing unreachable block (ram,0x000109deabdc) */
/* WARNING: Removing unreachable block (ram,0x000109deabe8) */
/* WARNING: Removing unreachable block (ram,0x000109deabf4) */
/* WARNING: Removing unreachable block (ram,0x000109deac18) */
/* WARNING: Removing unreachable block (ram,0x000109deac34) */
/* WARNING: Removing unreachable block (ram,0x000109deac38) */
/* WARNING: Removing unreachable block (ram,0x000109deac28) */
/* WARNING: Removing unreachable block (ram,0x000109deac2c) */
/* WARNING: Removing unreachable block (ram,0x000109deac3c) */
/* WARNING: Removing unreachable block (ram,0x000109deabfc) */
/* WARNING: Removing unreachable block (ram,0x000109deac08) */
/* WARNING: Removing unreachable block (ram,0x000109deadbc) */
/* WARNING: Removing unreachable block (ram,0x000109deabc4) */
/* WARNING: Removing unreachable block (ram,0x000109deac40) */
/* WARNING: Removing unreachable block (ram,0x000109deab94) */
/* WARNING: Removing unreachable block (ram,0x000109deab68) */
/* WARNING: Removing unreachable block (ram,0x000109dead74) */
/* WARNING: Removing unreachable block (ram,0x000109deab70) */
/* WARNING: Removing unreachable block (ram,0x000109deac48) */
/* WARNING: Removing unreachable block (ram,0x000109deac50) */
/* WARNING: Removing unreachable block (ram,0x000109deac5c) */
/* WARNING: Removing unreachable block (ram,0x000109deacdc) */
/* WARNING: Removing unreachable block (ram,0x000109deac64) */
/* WARNING: Removing unreachable block (ram,0x000109dead28) */
/* WARNING: Removing unreachable block (ram,0x000109deac74) */
/* WARNING: Removing unreachable block (ram,0x000109deae00) */
/* WARNING: Removing unreachable block (ram,0x000109deac7c) */
/* WARNING: Removing unreachable block (ram,0x000109deac88) */
/* WARNING: Removing unreachable block (ram,0x000109deae4c) */
/* WARNING: Removing unreachable block (ram,0x000109deae54) */
/* WARNING: Removing unreachable block (ram,0x000109deae5c) */
/* WARNING: Removing unreachable block (ram,0x000109deae64) */
/* WARNING: Removing unreachable block (ram,0x000109deaed4) */
/* WARNING: Removing unreachable block (ram,0x000109deae70) */
/* WARNING: Removing unreachable block (ram,0x000109deae84) */
/* WARNING: Removing unreachable block (ram,0x000109deae8c) */
/* WARNING: Removing unreachable block (ram,0x000109deaf78) */
/* WARNING: Removing unreachable block (ram,0x000109deae98) */
/* WARNING: Removing unreachable block (ram,0x000109deaf14) */
/* WARNING: Removing unreachable block (ram,0x000109deaea0) */
/* WARNING: Removing unreachable block (ram,0x000109deaea8) */
/* WARNING: Removing unreachable block (ram,0x000109deafb8) */
/* WARNING: Removing unreachable block (ram,0x000109deaeb8) */
/* WARNING: Removing unreachable block (ram,0x000109deaec4) */
/* WARNING: Removing unreachable block (ram,0x000109deaf18) */
/* WARNING: Removing unreachable block (ram,0x000109deaf34) */
/* WARNING: Removing unreachable block (ram,0x000109deaf38) */
/* WARNING: Removing unreachable block (ram,0x000109deaf48) */
/* WARNING: Removing unreachable block (ram,0x000109deaf50) */
/* WARNING: Removing unreachable block (ram,0x000109deaf54) */
/* WARNING: Removing unreachable block (ram,0x000109deaf58) */
/* WARNING: Removing unreachable block (ram,0x000109deaed0) */
/* WARNING: Removing unreachable block (ram,0x000109deac90) */
/* WARNING: Removing unreachable block (ram,0x000109deaae4) */
/* WARNING: Removing unreachable block (ram,0x000109deaaec) */
/* WARNING: Removing unreachable block (ram,0x000109deaaf0) */
/* WARNING: Removing unreachable block (ram,0x000109deaaf4) */
/* WARNING: Removing unreachable block (ram,0x000109deaff8) */
/* WARNING: Removing unreachable block (ram,0x000109deab0c) */
/* WARNING: Removing unreachable block (ram,0x000109deb900) */
/* WARNING: Removing unreachable block (ram,0x000109deb910) */
/* WARNING: Removing unreachable block (ram,0x000109deb924) */
/* WARNING: Removing unreachable block (ram,0x000109deb954) */
/* WARNING: Removing unreachable block (ram,0x000109deb930) */
/* WARNING: Removing unreachable block (ram,0x000109debbe8) */
/* WARNING: Removing unreachable block (ram,0x000109deb938) */
/* WARNING: Removing unreachable block (ram,0x000109debc24) */
/* WARNING: Removing unreachable block (ram,0x000109deb948) */
/* WARNING: Removing unreachable block (ram,0x000109deb958) */
/* WARNING: Removing unreachable block (ram,0x000109debc28) */
/* WARNING: Removing unreachable block (ram,0x000109deb968) */
/* WARNING: Removing unreachable block (ram,0x000109deb974) */
/* WARNING: Removing unreachable block (ram,0x000109debc2c) */
/* WARNING: Removing unreachable block (ram,0x000109debc98) */
/* WARNING: Removing unreachable block (ram,0x000109debc34) */
/* WARNING: Removing unreachable block (ram,0x000109debcd8) */
/* WARNING: Removing unreachable block (ram,0x000109debc44) */
/* WARNING: Removing unreachable block (ram,0x000109debd20) */
/* WARNING: Removing unreachable block (ram,0x000109debc4c) */
/* WARNING: Removing unreachable block (ram,0x000109debc54) */
/* WARNING: Removing unreachable block (ram,0x000109debdb4) */
/* WARNING: Removing unreachable block (ram,0x000109debdc0) */
/* WARNING: Removing unreachable block (ram,0x000109debdcc) */
/* WARNING: Removing unreachable block (ram,0x000109debdd4) */
/* WARNING: Removing unreachable block (ram,0x000109dec07c) */
/* WARNING: Removing unreachable block (ram,0x000109debde0) */
/* WARNING: Removing unreachable block (ram,0x000109debde8) */
/* WARNING: Removing unreachable block (ram,0x000109debdf4) */
/* WARNING: Removing unreachable block (ram,0x000109dec1d0) */
/* WARNING: Removing unreachable block (ram,0x000109debe00) */
/* WARNING: Removing unreachable block (ram,0x000109debe04) */
/* WARNING: Removing unreachable block (ram,0x000109dec12c) */
/* WARNING: Removing unreachable block (ram,0x000109dec134) */
/* WARNING: Removing unreachable block (ram,0x000109dec13c) */
/* WARNING: Removing unreachable block (ram,0x000109dec210) */
/* WARNING: Removing unreachable block (ram,0x000109dec14c) */
/* WARNING: Removing unreachable block (ram,0x000109dec160) */
/* WARNING: Removing unreachable block (ram,0x000109dec164) */
/* WARNING: Removing unreachable block (ram,0x000109dec168) */
/* WARNING: Removing unreachable block (ram,0x000109dec080) */
/* WARNING: Removing unreachable block (ram,0x000109dec088) */
/* WARNING: Removing unreachable block (ram,0x000109debc9c) */
/* WARNING: Removing unreachable block (ram,0x000109debd14) */
/* WARNING: Removing unreachable block (ram,0x000109debca4) */
/* WARNING: Removing unreachable block (ram,0x000109debcb0) */
/* WARNING: Removing unreachable block (ram,0x000109debcb4) */
/* WARNING: Removing unreachable block (ram,0x000109debe54) */
/* WARNING: Removing unreachable block (ram,0x000109debcbc) */
/* WARNING: Removing unreachable block (ram,0x000109debcc8) */
/* WARNING: Removing unreachable block (ram,0x000109debe5c) */
/* WARNING: Removing unreachable block (ram,0x000109debe60) */
/* WARNING: Removing unreachable block (ram,0x000109debe74) */
/* WARNING: Removing unreachable block (ram,0x000109debcd0) */
/* WARNING: Removing unreachable block (ram,0x000109debe14) */
/* WARNING: Removing unreachable block (ram,0x000109debc5c) */
/* WARNING: Removing unreachable block (ram,0x000109debd58) */
/* WARNING: Removing unreachable block (ram,0x000109deb908) */
/* WARNING: Removing unreachable block (ram,0x000109debd5c) */
/* WARNING: Removing unreachable block (ram,0x000109debd60) */
/* WARNING: Removing unreachable block (ram,0x000109debdac) */
/* WARNING: Removing unreachable block (ram,0x000109debe8c) */
/* WARNING: Removing unreachable block (ram,0x000109debe94) */
/* WARNING: Removing unreachable block (ram,0x000109debebc) */
/* WARNING: Removing unreachable block (ram,0x000109debed8) */
/* WARNING: Removing unreachable block (ram,0x000109debee8) */
/* WARNING: Removing unreachable block (ram,0x000109dec034) */
/* WARNING: Removing unreachable block (ram,0x000109dec094) */
/* WARNING: Removing unreachable block (ram,0x000109dec054) */
/* WARNING: Removing unreachable block (ram,0x000109dec098) */
/* WARNING: Removing unreachable block (ram,0x000109debf08) */
/* WARNING: Removing unreachable block (ram,0x000109dec170) */
/* WARNING: Removing unreachable block (ram,0x000109debf28) */
/* WARNING: Removing unreachable block (ram,0x000109debf68) */
/* WARNING: Removing unreachable block (ram,0x000109debf70) */
/* WARNING: Removing unreachable block (ram,0x000109debf7c) */
/* WARNING: Removing unreachable block (ram,0x000109debfc4) */
/* WARNING: Removing unreachable block (ram,0x000109debf88) */
/* WARNING: Removing unreachable block (ram,0x000109debf8c) */
/* WARNING: Removing unreachable block (ram,0x000109dec180) */
/* WARNING: Removing unreachable block (ram,0x000109debf9c) */
/* WARNING: Removing unreachable block (ram,0x000109debfb8) */
/* WARNING: Removing unreachable block (ram,0x000109debfc0) */
/* WARNING: Removing unreachable block (ram,0x000109debfc8) */
/* WARNING: Removing unreachable block (ram,0x000109debff0) */
/* WARNING: Removing unreachable block (ram,0x000109debffc) */
/* WARNING: Removing unreachable block (ram,0x000109debec8) */
/* WARNING: Removing unreachable block (ram,0x000109dec0a8) */
/* WARNING: Removing unreachable block (ram,0x000109debea4) */
/* WARNING: Removing unreachable block (ram,0x000109dec0ac) */
/* WARNING: Removing unreachable block (ram,0x000109debd64) */

void FUN_109deb75c(undefined8 *param_1,byte **param_2,byte *param_3,ulong param_4,byte **param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  byte bVar3;
  int iVar4;
  byte **ppbVar5;
  byte **ppbVar6;
  byte *pbVar7;
  long *plVar8;
  undefined8 uVar9;
  byte bVar10;
  ulong uVar11;
  long lVar12;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined8 *puVar13;
  ulong *extraout_x8_01;
  ulong uVar14;
  ulong *puVar15;
  byte **ppbVar16;
  byte **unaff_x20;
  byte *pbVar17;
  byte **unaff_x21;
  byte *unaff_x22;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puStack_298;
  uint uStack_290;
  undefined8 *puStack_288;
  uint uStack_280;
  undefined4 uStack_27c;
  long lStack_270;
  long *plStack_268;
  byte bStack_25c;
  long lStack_258;
  long *plStack_250;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  undefined4 uStack_230;
  byte bStack_229;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  long lStack_218;
  byte *pbStack_210;
  byte **ppbStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  ulong uStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  byte **ppbStack_1b8;
  byte bStack_1a9;
  byte abStack_1a8 [64];
  undefined1 auStack_168 [24];
  undefined *apuStack_150 [4];
  undefined2 uStack_130;
  long lStack_128;
  byte *pbStack_120;
  byte **ppbStack_118;
  byte **ppbStack_110;
  byte **ppbStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *apbStack_e0 [2];
  undefined8 auStack_d0 [2];
  undefined8 uStack_c0;
  byte *pbStack_b8;
  ulong uStack_b0;
  undefined2 uStack_98;
  byte **ppbStack_88;
  undefined **ppuStack_80;
  byte abStack_70 [8];
  long lStack_68;
  
  ppbVar5 = &pbStack_f0;
  puVar2 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == 0) {
    pbStack_b8 = &UNK_10f601de1;
    uStack_98 = 0x103;
    func_0x000109df6eb4();
    ppbStack_88 = (byte **)0x3;
    ppuStack_80 = &PTR_PTR_1132fef20;
    ppbVar5 = &pbStack_b8;
    FUN_109d3aa88(apbStack_e0,ppbVar5,&ppbStack_88);
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
    pbStack_f0 = apbStack_e0[0];
    param_2 = unaff_x20;
    param_5 = unaff_x21;
LAB_109debd70:
    *param_1 = pbStack_f0;
    param_3 = unaff_x22;
  }
  else {
    ppbVar6 = param_2;
    if (param_4 < 3) {
LAB_109deb7ac:
      bVar10 = 8;
      if (*param_3 != 0x2d) {
        bVar10 = 0;
      }
      *(byte *)((long)param_2 + 0x14) = *(byte *)((long)param_2 + 0x14) & 0xf7 | bVar10;
      if ((*param_3 == 0x2d) || (*param_3 == 0x2b)) {
        param_4 = param_4 - 1;
        if (param_4 == 0) {
          pbStack_b8 = &UNK_10f601df7;
          uStack_98 = 0x103;
          func_0x000109df6eb4();
          ppbStack_88 = (byte **)0x3;
          ppuStack_80 = &PTR_PTR_1132fef20;
          ppbVar5 = &pbStack_b8;
          FUN_109d3aa88(&pbStack_e8,ppbVar5,&ppbStack_88);
          *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
          pbStack_f0 = pbStack_e8;
          unaff_x22 = param_3;
          goto LAB_109debd70;
        }
        param_3 = param_3 + 1;
      }
      if (((param_4 < 2) || (*param_3 != 0x30)) || ((param_3[1] | 0x20) != 0x78)) {
        pbVar17 = param_3 + param_4;
        puVar13 = auStack_d0;
        pcStack_f8 = (code *)0x109deb900;
      }
      else {
        if (param_4 - 2 == 0) {
          pbStack_b8 = &UNK_10f601e0c;
          uStack_98 = 0x103;
          func_0x000109deb0e4(&pbStack_f0,&pbStack_b8);
          *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
          unaff_x22 = param_3;
          goto LAB_109debd70;
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_109dec250;
        param_3 = param_3 + 2;
        *(byte *)((long)param_2 + 0x14) = *(byte *)((long)param_2 + 0x14) & 0xf8 | 2;
        iVar4 = *(int *)(*param_2 + 8);
        if (iVar4 - 0x40U < 0xffffff80) {
          pbVar17 = param_2[1];
          pbVar17[0] = 0;
          pbVar17[1] = 0;
          pbVar17[2] = 0;
          pbVar17[3] = 0;
          pbVar17[4] = 0;
          pbVar17[5] = 0;
          pbVar17[6] = 0;
          pbVar17[7] = 0;
          _bzero(pbVar17 + 8,(ulong)((iVar4 + 0x40U >> 6) - 1) << 3);
          *(undefined4 *)(param_2 + 2) = 0;
        }
        else {
          *(undefined4 *)(param_2 + 2) = 0;
          param_2[1] = (byte *)0x0;
        }
        pbVar17 = param_3 + (param_4 - 2);
        puVar13 = &uStack_c0;
        pcStack_f8 = (code *)0x109deaad8;
        param_2 = param_5;
        puVar2 = (undefined1 *)register0x00000008;
      }
      ppbStack_110 = param_2;
      ppbStack_108 = (byte **)param_1;
      puStack_100 = &stack0xfffffffffffffff0;
      *puVar13 = pbVar17;
      pbVar7 = param_3;
      if (param_3 != pbVar17) {
        lVar12 = (long)pbVar17 - (long)param_3;
        do {
          if (*param_3 != 0x30) {
            pbVar7 = param_3;
            if (*param_3 == 0x2e) {
              *puVar13 = param_3;
              if (lVar12 == 1) {
                apuStack_150[0] = &UNK_10f601dc7;
                uStack_130 = 0x103;
                func_0x000109df6eb4();
                pbStack_120 = (byte *)0x3;
                ppbStack_118 = &PTR_PTR_1132fef20;
                FUN_109d3aa88(&lStack_128,apuStack_150,&pbStack_120);
                puVar2[-0x60] = puVar2[-0x60] | 1;
                *(long *)(puVar2 + -0x68) = lStack_128;
                return;
              }
              goto LAB_109deb0ac;
            }
            break;
          }
          param_3 = param_3 + 1;
          pbVar7 = pbVar17;
        } while (param_3 != pbVar17);
      }
LAB_109deb0c4:
      puVar2[-0x60] = puVar2[-0x60] & 0xfe;
      *(byte **)(puVar2 + -0x68) = pbVar7;
      return;
    }
    pbVar17 = param_3;
    if (param_4 == 8) {
      if (*(long *)param_3 != 0x5954494e49464e49) goto LAB_109deb9d8;
LAB_109deba6c:
      uVar18 = 0;
LAB_109deba74:
      ppbVar5 = param_2;
      FUN_109deb6e0(param_2,uVar18);
    }
    else {
      if (param_4 == 4) {
        if (*(int *)param_3 == 0x666e492b) goto LAB_109deba6c;
LAB_109deb9d8:
        bVar10 = *param_3;
        if (bVar10 == 0x2d) {
          if (param_4 == 3) goto LAB_109deb7ac;
          pbVar17 = param_3 + 1;
          if (param_4 == 9) {
            if (*(long *)pbVar17 == 0x5954494e49464e49) goto LAB_109deba34;
          }
          else if ((param_4 == 4) &&
                  ((*(short *)pbVar17 == 0x6e69 && param_3[3] == 0x66 ||
                   (*(short *)pbVar17 == 0x6e49 && param_3[3] == 0x66)))) {
LAB_109deba34:
            uVar18 = 1;
            goto LAB_109deba74;
          }
          bVar10 = *pbVar17;
          uVar18 = 1;
          uVar11 = param_4 - 1;
        }
        else {
          uVar18 = 0;
          uVar11 = param_4;
        }
      }
      else {
        if (param_4 != 3) goto LAB_109deb9d8;
        if (*(short *)param_3 == 0x6e69 && param_3[2] == 0x66) goto LAB_109deba6c;
        bVar10 = *param_3;
        if (bVar10 == 0x2d) goto LAB_109deb7ac;
        uVar18 = 0;
        uVar11 = 3;
      }
      if ((bVar10 | 0x20) == 0x73) {
        uVar11 = uVar11 - 1;
        if (uVar11 < 3) goto LAB_109deb7ac;
        pbVar17 = pbVar17 + 1;
        uVar19 = 1;
      }
      else {
        uVar19 = 0;
      }
      if ((*(short *)pbVar17 != 0x616e || pbVar17[2] != 0x6e) &&
         (*(short *)pbVar17 != 0x614e || pbVar17[2] != 0x4e)) goto LAB_109deb7ac;
      pbVar7 = pbVar17 + 3;
      uStack_b0 = uVar11 - 3;
      pbStack_b8 = pbVar7;
      if (uVar11 < 3 || uStack_b0 == 0) {
        ppbVar5 = param_2;
        FUN_109de78e4(param_2,uVar19,uVar18,0);
      }
      else {
        bVar10 = *pbVar7;
        if (bVar10 == 0x28) {
          if ((uStack_b0 < 3) || (pbVar17[uVar11 - 1] != 0x29)) goto LAB_109deb7ac;
          pbVar7 = pbVar17 + 4;
          uStack_b0 = uVar11 - 5;
          bVar10 = pbVar17[4];
        }
        pbStack_b8 = pbVar7;
        if (bVar10 == 0x30) {
          uVar11 = uStack_b0 - 2;
          if (1 < uStack_b0) {
            iVar4 = (int)(char)pbVar7[1];
            ___tolower();
            if (iVar4 == 0x78) {
              uVar9 = 0x10;
              pbStack_b8 = pbVar7 + 2;
              uStack_b0 = uVar11;
              goto LAB_109dec0c4;
            }
          }
          uVar9 = 8;
        }
        else {
          uVar9 = 10;
        }
LAB_109dec0c4:
        ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,1);
        ppbStack_88 = (byte **)0x0;
        ppbVar6 = &pbStack_b8;
        FUN_109e04094(ppbVar6,uVar9,&ppbStack_88);
        if (((ulong)ppbVar6 & 1) != 0) {
          if ((0x40 < (uint)ppuStack_80) && (ppbVar6 = ppbStack_88, ppbStack_88 != (byte **)0x0)) {
            ppbVar6 = ppbStack_88;
            __ZdaPv();
          }
          goto LAB_109deb7ac;
        }
        ppbVar5 = param_2;
        FUN_109de78e4(param_2,uVar19,uVar18,&ppbStack_88);
        if ((0x40 < (uint)ppuStack_80) && (ppbVar5 = ppbStack_88, ppbStack_88 != (byte **)0x0)) {
          __ZdaPv();
        }
      }
    }
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfe;
    *(undefined4 *)param_1 = 0;
  }
  ppbVar6 = ppbVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_109dec250:
  ___stack_chk_fail();
  if ((0x40 < (uint)ppuStack_80) && (ppbStack_88 != (byte **)0x0)) {
    __ZdaPv();
  }
  ppbVar5 = ppbVar6;
  __Unwind_Resume();
  pbStack_120 = param_3;
  ppbStack_118 = param_5;
  ppbStack_110 = param_2;
  ppbStack_108 = ppbVar6;
  puStack_100 = puVar2;
  pcStack_f8 = FUN_109dec280;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar10 = *(byte *)((long)ppbVar5 + 0x14);
  abStack_1a8[0] = bVar10 & 7;
  bVar3 = bVar10 >> 3 & 1;
  if ((bVar10 & 6) == 0 || abStack_1a8[0] == 3) {
    bVar10 = 0;
    if (abStack_1a8[0] != 1) {
      bVar10 = bVar3;
    }
    ppbStack_1b8 = (byte **)CONCAT71(ppbStack_1b8._1_7_,bVar10);
    ppbVar16 = (byte **)*ppbVar5;
    pbVar17 = abStack_1a8;
    FUN_109d2fb48(abStack_1a8);
    pbVar7 = abStack_1a8;
    FUN_109defbfc(pbVar7,0,(ulong)pbVar17 | 1,auStack_168,&ppbStack_1b8,ppbVar16 + 1);
  }
  else {
    ppbVar16 = ppbVar5 + 1;
    pbVar17 = *ppbVar5 + 8;
    ppbVar6 = (byte **)*ppbVar16;
    if (0xffffff7f < *(int *)pbVar17 - 0x40U) {
      ppbVar6 = ppbVar16;
    }
    bStack_1a9 = bVar3;
    FUN_109d7e498(ppbVar6,ppbVar6 + (*(int *)pbVar17 + 0x40U >> 6));
    ppbStack_1b8 = ppbVar6;
    FUN_109d2fb48(abStack_1a8);
    pbVar7 = abStack_1a8;
    FUN_109defc74(pbVar7,0,(ulong)abStack_1a8 | 1,auStack_168,&bStack_1a9,pbVar17,ppbVar5 + 2,
                  &ppbStack_1b8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_109dec398;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar10 = pbVar7[0x14];
  if ((bVar10 & 6) == 0 || (bVar10 & 7) == 3) {
    if ((bVar10 & 7) == 3) {
      uStack_1e8 = 0;
      uStack_1e0 = 0;
    }
    else {
      if ((bVar10 & 7) == 0) {
        uStack_1e8 = 0x8000000000000000;
      }
      else {
        puVar15 = (ulong *)(pbVar7 + 8);
        if (*(int *)(*(long *)pbVar7 + 8) - 0x40U < 0xffffff80) {
          puVar15 = (ulong *)*puVar15;
        }
        uStack_1e8 = *puVar15;
      }
      uStack_1e0 = 0x7fff;
    }
  }
  else {
    puVar15 = (ulong *)(pbVar7 + 8);
    if (*(int *)(*(long *)pbVar7 + 8) - 0x40U < 0xffffff80) {
      puVar15 = (ulong *)*puVar15;
    }
    uStack_1e8 = *puVar15;
    uStack_1e0 = uStack_1e8 >> 0x3f;
    if (*(int *)(pbVar7 + 0x10) + 0x3fffU != 1) {
      uStack_1e0 = (ulong)(*(int *)(pbVar7 + 0x10) + 0x3fffU & 0x7fff);
    }
  }
  uStack_1e0 = uStack_1e0 | ((ulong)(bVar10 >> 3) & 1) << 0xf;
  *(undefined4 *)(extraout_x8 + 1) = 0x50;
  plVar8 = extraout_x8;
  ppuStack_1d0 = &puStack_100;
  func_0x000109defe68(extraout_x8,&uStack_1e8,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
    ___stack_chk_fail();
    pcStack_1f8 = FUN_109dec498;
    lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar13 = (undefined8 *)*plVar8;
    uStack_230 = *(undefined4 *)(puVar13 + 2);
    uStack_238 = puVar13[1];
    _uStack_240 = CONCAT44(0xfffffc02,(int)*puVar13);
    pbStack_210 = pbVar17;
    ppbStack_208 = ppbVar16;
    pppuStack_200 = &ppuStack_1d0;
    FUN_109de8340(&lStack_258,plVar8);
    FUN_109de8868(&lStack_258,&uStack_240,1,&bStack_229);
    FUN_109de8340(&lStack_270,&lStack_258);
    FUN_109de8868(&lStack_270,&DAT_10e05ae44,1,&bStack_229);
    FUN_109dec730(&puStack_288,&lStack_270);
    if (uStack_280 < 0x41) {
      puStack_228 = puStack_288;
    }
    else {
      puStack_228 = (undefined8 *)*puStack_288;
      __ZdaPv();
    }
    if ((((bStack_25c & 6) == 0) || ((bStack_25c & 7) == 3)) || ((bStack_229 & 1) == 0)) {
      puStack_220 = (undefined8 *)0x0;
    }
    else {
      FUN_109de8868(&lStack_270,&uStack_240,1,&bStack_229);
      FUN_109de8340(&puStack_288,&lStack_258);
      FUN_109de9ad8(&puStack_288,&lStack_270,1,1);
      FUN_109de8868(&puStack_288,&DAT_10e05ae44,1,&bStack_229);
      FUN_109dec730(&puStack_298,&puStack_288);
      if (uStack_290 < 0x41) {
        puStack_220 = puStack_298;
      }
      else {
        puStack_220 = (undefined8 *)*puStack_298;
        __ZdaPv();
      }
      if ((*(int *)(puStack_288 + 1) - 0x40U < 0xffffff80) && (CONCAT44(uStack_27c,uStack_280) != 0)
         ) {
        __ZdaPv();
      }
    }
    *(undefined4 *)(extraout_x8_00 + 1) = 0x80;
    plVar8 = extraout_x8_00;
    func_0x000109defe68(extraout_x8_00,&puStack_228,2);
    if ((*(int *)(lStack_270 + 8) - 0x40U < 0xffffff80) &&
       (plVar8 = plStack_268, plStack_268 != (long *)0x0)) {
      __ZdaPv();
    }
    if ((*(int *)(lStack_258 + 8) - 0x40U < 0xffffff80) &&
       (plVar8 = plStack_250, plStack_250 != (long *)0x0)) {
      __ZdaPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
      ___stack_chk_fail();
      if ((*(int *)(puStack_288 + 1) - 0x40U < 0xffffff80) && (CONCAT44(uStack_27c,uStack_280) != 0)
         ) {
        __ZdaPv();
      }
      if ((*(int *)(lStack_270 + 8) - 0x40U < 0xffffff80) && (plStack_268 != (long *)0x0)) {
        __ZdaPv();
      }
      if ((*(int *)(lStack_258 + 8) - 0x40U < 0xffffff80) && (plStack_250 != (long *)0x0)) {
        __ZdaPv();
      }
      __Unwind_Resume();
      bVar10 = *(byte *)((long)plVar8 + 0x14);
      if ((bVar10 & 6) == 0 || (bVar10 & 7) == 3) {
        if ((bVar10 & 7) == 3) {
          uVar14 = 0;
          uVar11 = 0;
        }
        else {
          if ((bVar10 & 7) == 0) {
            uVar14 = 0;
          }
          else {
            puVar15 = (ulong *)(plVar8 + 1);
            if (*(int *)(*plVar8 + 8) - 0x40U < 0xffffff80) {
              puVar15 = (ulong *)*puVar15;
            }
            uVar14 = *puVar15;
          }
          uVar11 = 0x7ff;
        }
      }
      else {
        uVar1 = (int)plVar8[2] + 0x3ff;
        puVar15 = (ulong *)(plVar8 + 1);
        if (*(int *)(*plVar8 + 8) - 0x40U < 0xffffff80) {
          puVar15 = (ulong *)*puVar15;
        }
        uVar14 = *puVar15;
        uVar11 = (ulong)uVar1;
        if (uVar1 == 1) {
          uVar11 = uVar14 >> 0x34 & 1;
        }
      }
      *(undefined4 *)(extraout_x8_01 + 1) = 0x40;
      *extraout_x8_01 =
           ((ulong)bVar10 & 8) << 0x3c | (uVar11 & 0x7ff) << 0x34 | uVar14 & 0xfffffffffffff;
      uVar1 = (uint)extraout_x8_01[1];
      puVar15 = extraout_x8_01;
      if (uVar1 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0xffffffffffffffff >> ((ulong)-uVar1 & 0x3f);
        if (0x40 < uVar1) {
          puVar15 = (ulong *)(*extraout_x8_01 + (ulong)((int)((ulong)uVar1 + 0x3f >> 6) - 1) * 8);
        }
      }
      *puVar15 = *puVar15 & uVar11;
      return;
    }
    return;
  }
  return;
  while (pbVar7 = param_3, *param_3 == 0x30) {
LAB_109deb0ac:
    param_3 = param_3 + 1;
    pbVar7 = pbVar17;
    if (param_3 == pbVar17) break;
  }
  goto LAB_109deb0c4;
}



/* Entry: 109dec280; end: 109dec397;  */

void FUN_109dec280(long *param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  byte *pbVar5;
  ulong uVar6;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined8 *puVar7;
  ulong *extraout_x8_01;
  ulong uVar8;
  ulong *puVar9;
  long *plVar10;
  byte *pbVar11;
  undefined8 *puStack_1a8;
  uint uStack_1a0;
  undefined8 *puStack_198;
  uint uStack_190;
  undefined4 uStack_18c;
  long lStack_180;
  long *plStack_178;
  byte bStack_16c;
  long lStack_168;
  long *plStack_160;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined4 uStack_140;
  byte bStack_139;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  long lStack_128;
  byte *pbStack_120;
  long *plStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  ulong uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  byte bStack_b9;
  byte abStack_b8 [64];
  undefined1 auStack_78 [64];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar2 = *(byte *)((long)param_1 + 0x14);
  abStack_b8[0] = bVar2 & 7;
  bVar3 = bVar2 >> 3 & 1;
  if ((bVar2 & 6) == 0 || abStack_b8[0] == 3) {
    bVar2 = 0;
    if (abStack_b8[0] != 1) {
      bVar2 = bVar3;
    }
    lStack_c8 = CONCAT71(lStack_c8._1_7_,bVar2);
    plVar10 = (long *)*param_1;
    pbVar11 = abStack_b8;
    FUN_109d2fb48(abStack_b8);
    pbVar5 = abStack_b8;
    FUN_109defbfc(pbVar5,0,(ulong)pbVar11 | 1,auStack_78,&lStack_c8,plVar10 + 1);
  }
  else {
    plVar10 = param_1 + 1;
    pbVar11 = (byte *)(*param_1 + 8);
    plVar4 = (long *)*plVar10;
    if (0xffffff7f < *(int *)pbVar11 - 0x40U) {
      plVar4 = plVar10;
    }
    bStack_b9 = bVar3;
    FUN_109d7e498(plVar4,plVar4 + (*(int *)pbVar11 + 0x40U >> 6));
    lStack_c8 = (long)plVar4;
    FUN_109d2fb48(abStack_b8);
    pbVar5 = abStack_b8;
    FUN_109defc74(pbVar5,0,(ulong)abStack_b8 | 1,auStack_78,&bStack_b9,pbVar11,param_1 + 2,
                  &lStack_c8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_109dec398;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar2 = pbVar5[0x14];
  if ((bVar2 & 6) == 0 || (bVar2 & 7) == 3) {
    if ((bVar2 & 7) == 3) {
      uStack_f8 = 0;
      uStack_f0 = 0;
    }
    else {
      if ((bVar2 & 7) == 0) {
        uStack_f8 = 0x8000000000000000;
      }
      else {
        puVar9 = (ulong *)(pbVar5 + 8);
        if (*(int *)(*(long *)pbVar5 + 8) - 0x40U < 0xffffff80) {
          puVar9 = (ulong *)*puVar9;
        }
        uStack_f8 = *puVar9;
      }
      uStack_f0 = 0x7fff;
    }
  }
  else {
    puVar9 = (ulong *)(pbVar5 + 8);
    if (*(int *)(*(long *)pbVar5 + 8) - 0x40U < 0xffffff80) {
      puVar9 = (ulong *)*puVar9;
    }
    uStack_f8 = *puVar9;
    uStack_f0 = uStack_f8 >> 0x3f;
    if (*(int *)(pbVar5 + 0x10) + 0x3fffU != 1) {
      uStack_f0 = (ulong)(*(int *)(pbVar5 + 0x10) + 0x3fffU & 0x7fff);
    }
  }
  uStack_f0 = uStack_f0 | ((ulong)(bVar2 >> 3) & 1) << 0xf;
  *(undefined4 *)(extraout_x8 + 1) = 0x50;
  plVar4 = extraout_x8;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x000109defe68(extraout_x8,&uStack_f8,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_108 = FUN_109dec498;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (undefined8 *)*plVar4;
  uStack_140 = *(undefined4 *)(puVar7 + 2);
  uStack_148 = puVar7[1];
  _uStack_150 = CONCAT44(0xfffffc02,(int)*puVar7);
  pbStack_120 = pbVar11;
  plStack_118 = plVar10;
  ppuStack_110 = &puStack_e0;
  FUN_109de8340(&lStack_168,plVar4);
  FUN_109de8868(&lStack_168,&uStack_150,1,&bStack_139);
  FUN_109de8340(&lStack_180,&lStack_168);
  FUN_109de8868(&lStack_180,&DAT_10e05ae44,1,&bStack_139);
  FUN_109dec730(&puStack_198,&lStack_180);
  if (uStack_190 < 0x41) {
    puStack_138 = puStack_198;
  }
  else {
    puStack_138 = (undefined8 *)*puStack_198;
    __ZdaPv();
  }
  if ((((bStack_16c & 6) == 0) || ((bStack_16c & 7) == 3)) || ((bStack_139 & 1) == 0)) {
    puStack_130 = (undefined8 *)0x0;
  }
  else {
    FUN_109de8868(&lStack_180,&uStack_150,1,&bStack_139);
    FUN_109de8340(&puStack_198,&lStack_168);
    FUN_109de9ad8(&puStack_198,&lStack_180,1,1);
    FUN_109de8868(&puStack_198,&DAT_10e05ae44,1,&bStack_139);
    FUN_109dec730(&puStack_1a8,&puStack_198);
    if (uStack_1a0 < 0x41) {
      puStack_130 = puStack_1a8;
    }
    else {
      puStack_130 = (undefined8 *)*puStack_1a8;
      __ZdaPv();
    }
    if ((*(int *)(puStack_198 + 1) - 0x40U < 0xffffff80) && (CONCAT44(uStack_18c,uStack_190) != 0))
    {
      __ZdaPv();
    }
  }
  *(undefined4 *)(extraout_x8_00 + 1) = 0x80;
  plVar4 = extraout_x8_00;
  func_0x000109defe68(extraout_x8_00,&puStack_138,2);
  if ((*(int *)(lStack_180 + 8) - 0x40U < 0xffffff80) &&
     (plVar4 = plStack_178, plStack_178 != (long *)0x0)) {
    __ZdaPv();
  }
  if ((*(int *)(lStack_168 + 8) - 0x40U < 0xffffff80) &&
     (plVar4 = plStack_160, plStack_160 != (long *)0x0)) {
    __ZdaPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  if ((*(int *)(puStack_198 + 1) - 0x40U < 0xffffff80) && (CONCAT44(uStack_18c,uStack_190) != 0)) {
    __ZdaPv();
  }
  if ((*(int *)(lStack_180 + 8) - 0x40U < 0xffffff80) && (plStack_178 != (long *)0x0)) {
    __ZdaPv();
  }
  if ((*(int *)(lStack_168 + 8) - 0x40U < 0xffffff80) && (plStack_160 != (long *)0x0)) {
    __ZdaPv();
  }
  __Unwind_Resume();
  bVar2 = *(byte *)((long)plVar4 + 0x14);
  if ((bVar2 & 6) == 0 || (bVar2 & 7) == 3) {
    if ((bVar2 & 7) == 3) {
      uVar8 = 0;
      uVar6 = 0;
    }
    else {
      if ((bVar2 & 7) == 0) {
        uVar8 = 0;
      }
      else {
        puVar9 = (ulong *)(plVar4 + 1);
        if (*(int *)(*plVar4 + 8) - 0x40U < 0xffffff80) {
          puVar9 = (ulong *)*puVar9;
        }
        uVar8 = *puVar9;
      }
      uVar6 = 0x7ff;
    }
  }
  else {
    uVar1 = (int)plVar4[2] + 0x3ff;
    puVar9 = (ulong *)(plVar4 + 1);
    if (*(int *)(*plVar4 + 8) - 0x40U < 0xffffff80) {
      puVar9 = (ulong *)*puVar9;
    }
    uVar8 = *puVar9;
    uVar6 = (ulong)uVar1;
    if (uVar1 == 1) {
      uVar6 = uVar8 >> 0x34 & 1;
    }
  }
  *(undefined4 *)(extraout_x8_01 + 1) = 0x40;
  *extraout_x8_01 = ((ulong)bVar2 & 8) << 0x3c | (uVar6 & 0x7ff) << 0x34 | uVar8 & 0xfffffffffffff;
  uVar1 = (uint)extraout_x8_01[1];
  puVar9 = extraout_x8_01;
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0xffffffffffffffff >> ((ulong)-uVar1 & 0x3f);
    if (0x40 < uVar1) {
      puVar9 = (ulong *)(*extraout_x8_01 + (ulong)((int)((ulong)uVar1 + 0x3f >> 6) - 1) * 8);
    }
  }
  *puVar9 = *puVar9 & uVar6;
  return;
}



/* Entry: 109dec398; end: 109dec497;  */

void FUN_109dec398(long *param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long *extraout_x8;
  undefined8 *puVar5;
  ulong *extraout_x8_00;
  ulong uVar6;
  ulong *puVar7;
  undefined8 *puStack_d8;
  uint uStack_d0;
  undefined8 *puStack_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  long lStack_b0;
  long *plStack_a8;
  byte bStack_9c;
  long lStack_98;
  long *plStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  byte bStack_69;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar2 = *(byte *)((long)param_2 + 0x14);
  if ((bVar2 & 6) == 0 || (bVar2 & 7) == 3) {
    if ((bVar2 & 7) == 3) {
      uStack_28 = 0;
      uStack_20 = 0;
    }
    else {
      if ((bVar2 & 7) == 0) {
        uStack_28 = 0x8000000000000000;
      }
      else {
        puVar7 = (ulong *)(param_2 + 1);
        if (*(int *)(*param_2 + 8) - 0x40U < 0xffffff80) {
          puVar7 = (ulong *)*puVar7;
        }
        uStack_28 = *puVar7;
      }
      uStack_20 = 0x7fff;
    }
  }
  else {
    uVar1 = (int)param_2[2] + 0x3fff;
    puVar7 = (ulong *)(param_2 + 1);
    if (*(int *)(*param_2 + 8) - 0x40U < 0xffffff80) {
      puVar7 = (ulong *)*puVar7;
    }
    uStack_28 = *puVar7;
    uStack_20 = uStack_28 >> 0x3f;
    if (uVar1 != 1) {
      uStack_20 = (ulong)(uVar1 & 0x7fff);
    }
  }
  uStack_20 = uStack_20 | ((ulong)(bVar2 >> 3) & 1) << 0xf;
  *(undefined4 *)(param_1 + 1) = 0x50;
  func_0x000109defe68(param_1,&uStack_28,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = (undefined8 *)*param_1;
    uStack_70 = *(undefined4 *)(puVar5 + 2);
    uStack_78 = puVar5[1];
    _uStack_80 = CONCAT44(0xfffffc02,(int)*puVar5);
    FUN_109de8340(&lStack_98,param_1);
    FUN_109de8868(&lStack_98,&uStack_80,1,&bStack_69);
    FUN_109de8340(&lStack_b0,&lStack_98);
    FUN_109de8868(&lStack_b0,&DAT_10e05ae44,1,&bStack_69);
    FUN_109dec730(&puStack_c8,&lStack_b0);
    if (uStack_c0 < 0x41) {
      puStack_68 = puStack_c8;
    }
    else {
      puStack_68 = (undefined8 *)*puStack_c8;
      __ZdaPv();
    }
    if ((((bStack_9c & 6) == 0) || ((bStack_9c & 7) == 3)) || ((bStack_69 & 1) == 0)) {
      puStack_60 = (undefined8 *)0x0;
    }
    else {
      FUN_109de8868(&lStack_b0,&uStack_80,1,&bStack_69);
      FUN_109de8340(&puStack_c8,&lStack_98);
      FUN_109de9ad8(&puStack_c8,&lStack_b0,1,1);
      FUN_109de8868(&puStack_c8,&DAT_10e05ae44,1,&bStack_69);
      FUN_109dec730(&puStack_d8,&puStack_c8);
      if (uStack_d0 < 0x41) {
        puStack_60 = puStack_d8;
      }
      else {
        puStack_60 = (undefined8 *)*puStack_d8;
        __ZdaPv();
      }
      if ((*(int *)(puStack_c8 + 1) - 0x40U < 0xffffff80) && (CONCAT44(uStack_bc,uStack_c0) != 0)) {
        __ZdaPv();
      }
    }
    *(undefined4 *)(extraout_x8 + 1) = 0x80;
    plVar3 = extraout_x8;
    func_0x000109defe68(extraout_x8,&puStack_68,2);
    if ((*(int *)(lStack_b0 + 8) - 0x40U < 0xffffff80) &&
       (plVar3 = plStack_a8, plStack_a8 != (long *)0x0)) {
      __ZdaPv();
    }
    if ((*(int *)(lStack_98 + 8) - 0x40U < 0xffffff80) &&
       (plVar3 = plStack_90, plStack_90 != (long *)0x0)) {
      __ZdaPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
    if ((*(int *)(puStack_c8 + 1) - 0x40U < 0xffffff80) && (CONCAT44(uStack_bc,uStack_c0) != 0)) {
      __ZdaPv();
    }
    if ((*(int *)(lStack_b0 + 8) - 0x40U < 0xffffff80) && (plStack_a8 != (long *)0x0)) {
      __ZdaPv();
    }
    if ((*(int *)(lStack_98 + 8) - 0x40U < 0xffffff80) && (plStack_90 != (long *)0x0)) {
      __ZdaPv();
    }
    __Unwind_Resume();
    bVar2 = *(byte *)((long)plVar3 + 0x14);
    if ((bVar2 & 6) == 0 || (bVar2 & 7) == 3) {
      if ((bVar2 & 7) == 3) {
        uVar6 = 0;
        uVar4 = 0;
      }
      else {
        if ((bVar2 & 7) == 0) {
          uVar6 = 0;
        }
        else {
          puVar7 = (ulong *)(plVar3 + 1);
          if (*(int *)(*plVar3 + 8) - 0x40U < 0xffffff80) {
            puVar7 = (ulong *)*puVar7;
          }
          uVar6 = *puVar7;
        }
        uVar4 = 0x7ff;
      }
    }
    else {
      uVar1 = (int)plVar3[2] + 0x3ff;
      puVar7 = (ulong *)(plVar3 + 1);
      if (*(int *)(*plVar3 + 8) - 0x40U < 0xffffff80) {
        puVar7 = (ulong *)*puVar7;
      }
      uVar6 = *puVar7;
      uVar4 = (ulong)uVar1;
      if (uVar1 == 1) {
        uVar4 = uVar6 >> 0x34 & 1;
      }
    }
    *(undefined4 *)(extraout_x8_00 + 1) = 0x40;
    *extraout_x8_00 = ((ulong)bVar2 & 8) << 0x3c | (uVar4 & 0x7ff) << 0x34 | uVar6 & 0xfffffffffffff
    ;
    uVar1 = (uint)extraout_x8_00[1];
    puVar7 = extraout_x8_00;
    if (uVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0xffffffffffffffff >> ((ulong)-uVar1 & 0x3f);
      if (0x40 < uVar1) {
        puVar7 = (ulong *)(*extraout_x8_00 + (ulong)((int)((ulong)uVar1 + 0x3f >> 6) - 1) * 8);
      }
    }
    *puVar7 = *puVar7 & uVar4;
    return;
  }
  return;
}



/* Entry: 109dec498; end: 109dec72f;  */

void FUN_109dec498(long *param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong *extraout_x8;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puStack_a8;
  uint uStack_a0;
  undefined8 *puStack_98;
  uint uStack_90;
  undefined4 uStack_8c;
  long lStack_80;
  long *plStack_78;
  byte bStack_6c;
  long lStack_68;
  long *plStack_60;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  byte bStack_39;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)*param_2;
  uStack_40 = *(undefined4 *)(puVar4 + 2);
  uStack_48 = puVar4[1];
  _uStack_50 = CONCAT44(0xfffffc02,(int)*puVar4);
  FUN_109de8340(&lStack_68,param_2);
  FUN_109de8868(&lStack_68,&uStack_50,1,&bStack_39);
  FUN_109de8340(&lStack_80,&lStack_68);
  FUN_109de8868(&lStack_80,&DAT_10e05ae44,1,&bStack_39);
  FUN_109dec730(&puStack_98,&lStack_80);
  if (uStack_90 < 0x41) {
    puStack_38 = puStack_98;
  }
  else {
    puStack_38 = (undefined8 *)*puStack_98;
    __ZdaPv();
  }
  if ((((bStack_6c & 6) == 0) || ((bStack_6c & 7) == 3)) || ((bStack_39 & 1) == 0)) {
    puStack_30 = (undefined8 *)0x0;
  }
  else {
    FUN_109de8868(&lStack_80,&uStack_50,1,&bStack_39);
    FUN_109de8340(&puStack_98,&lStack_68);
    FUN_109de9ad8(&puStack_98,&lStack_80,1,1);
    FUN_109de8868(&puStack_98,&DAT_10e05ae44,1,&bStack_39);
    FUN_109dec730(&puStack_a8,&puStack_98);
    if (uStack_a0 < 0x41) {
      puStack_30 = puStack_a8;
    }
    else {
      puStack_30 = (undefined8 *)*puStack_a8;
      __ZdaPv();
    }
    if ((*(int *)(puStack_98 + 1) - 0x40U < 0xffffff80) && (CONCAT44(uStack_8c,uStack_90) != 0)) {
      __ZdaPv();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0x80;
  func_0x000109defe68(param_1,&puStack_38,2);
  if ((*(int *)(lStack_80 + 8) - 0x40U < 0xffffff80) &&
     (param_1 = plStack_78, plStack_78 != (long *)0x0)) {
    __ZdaPv();
  }
  if ((*(int *)(lStack_68 + 8) - 0x40U < 0xffffff80) &&
     (param_1 = plStack_60, plStack_60 != (long *)0x0)) {
    __ZdaPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((*(int *)(puStack_98 + 1) - 0x40U < 0xffffff80) && (CONCAT44(uStack_8c,uStack_90) != 0)) {
    __ZdaPv();
  }
  if ((*(int *)(lStack_80 + 8) - 0x40U < 0xffffff80) && (plStack_78 != (long *)0x0)) {
    __ZdaPv();
  }
  if ((*(int *)(lStack_68 + 8) - 0x40U < 0xffffff80) && (plStack_60 != (long *)0x0)) {
    __ZdaPv();
  }
  __Unwind_Resume();
  bVar2 = *(byte *)((long)param_1 + 0x14);
  if ((bVar2 & 6) == 0 || (bVar2 & 7) == 3) {
    if ((bVar2 & 7) == 3) {
      uVar5 = 0;
      uVar3 = 0;
    }
    else {
      if ((bVar2 & 7) == 0) {
        uVar5 = 0;
      }
      else {
        puVar6 = (ulong *)(param_1 + 1);
        if (*(int *)(*param_1 + 8) - 0x40U < 0xffffff80) {
          puVar6 = (ulong *)*puVar6;
        }
        uVar5 = *puVar6;
      }
      uVar3 = 0x7ff;
    }
  }
  else {
    uVar1 = (int)param_1[2] + 0x3ff;
    puVar6 = (ulong *)(param_1 + 1);
    if (*(int *)(*param_1 + 8) - 0x40U < 0xffffff80) {
      puVar6 = (ulong *)*puVar6;
    }
    uVar5 = *puVar6;
    uVar3 = (ulong)uVar1;
    if (uVar1 == 1) {
      uVar3 = uVar5 >> 0x34 & 1;
    }
  }
  *(undefined4 *)(extraout_x8 + 1) = 0x40;
  *extraout_x8 = ((ulong)bVar2 & 8) << 0x3c | (uVar3 & 0x7ff) << 0x34 | uVar5 & 0xfffffffffffff;
  uVar1 = (uint)extraout_x8[1];
  puVar6 = extraout_x8;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffffffffffff >> ((ulong)-uVar1 & 0x3f);
    if (0x40 < uVar1) {
      puVar6 = (ulong *)(*extraout_x8 + (ulong)((int)((ulong)uVar1 + 0x3f >> 6) - 1) * 8);
    }
  }
  *puVar6 = *puVar6 & uVar3;
  return;
}



/* Entry: 109dec730; end: 109dec7e3;  */

void FUN_109dec730(ulong *param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  
  bVar2 = *(byte *)((long)param_2 + 0x14);
  if ((bVar2 & 6) == 0 || (bVar2 & 7) == 3) {
    if ((bVar2 & 7) == 3) {
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      if ((bVar2 & 7) == 0) {
        uVar4 = 0;
      }
      else {
        puVar5 = (ulong *)(param_2 + 1);
        if (*(int *)(*param_2 + 8) - 0x40U < 0xffffff80) {
          puVar5 = (ulong *)*puVar5;
        }
        uVar4 = *puVar5;
      }
      uVar3 = 0x7ff;
    }
  }
  else {
    uVar1 = (int)param_2[2] + 0x3ff;
    puVar5 = (ulong *)(param_2 + 1);
    if (*(int *)(*param_2 + 8) - 0x40U < 0xffffff80) {
      puVar5 = (ulong *)*puVar5;
    }
    uVar4 = *puVar5;
    uVar3 = (ulong)uVar1;
    if (uVar1 == 1) {
      uVar3 = uVar4 >> 0x34 & 1;
    }
  }
  *(undefined4 *)(param_1 + 1) = 0x40;
  *param_1 = ((ulong)bVar2 & 8) << 0x3c | (uVar3 & 0x7ff) << 0x34 | uVar4 & 0xfffffffffffff;
  uVar1 = (uint)param_1[1];
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffffffffffff >> ((ulong)-uVar1 & 0x3f);
    if (0x40 < uVar1) {
      param_1 = (ulong *)(*param_1 + (ulong)((int)((ulong)uVar1 + 0x3f >> 6) - 1) * 8);
    }
  }
  *param_1 = *param_1 & uVar3;
  return;
}



/* Entry: 109dec7e4; end: 109dec8ef;  */

void FUN_109dec7e4(long *param_1,long *param_2)

{
  byte bVar1;
  ulong *extraout_x8;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  long lStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((long)param_2 + 0x14);
  if ((bVar1 & 6) == 0 || (bVar1 & 7) == 3) {
    if ((bVar1 & 7) == 3) {
      lStack_28 = 0;
      uVar4 = 0;
      uVar8 = 0;
    }
    else {
      if ((bVar1 & 7) == 0) {
        lStack_28 = 0;
        uVar4 = 0;
      }
      else {
        plVar5 = param_2 + 1;
        if (*(int *)(*param_2 + 8) - 0x40U < 0xffffff80) {
          plVar5 = (long *)*plVar5;
        }
        lStack_28 = *plVar5;
        uVar4 = plVar5[1];
      }
      uVar8 = 0x7fff;
    }
  }
  else {
    uVar7 = (int)param_2[2] + 0x3fff;
    plVar5 = param_2 + 1;
    if (*(int *)(*param_2 + 8) - 0x40U < 0xffffff80) {
      plVar5 = (long *)*plVar5;
    }
    lStack_28 = *plVar5;
    uVar4 = plVar5[1];
    uVar8 = (ulong)uVar7;
    if (uVar7 == 1) {
      uVar8 = uVar4 >> 0x30 & 1;
    }
  }
  uStack_20 = ((ulong)bVar1 & 8) << 0x3c | (uVar8 & 0x7fff) << 0x30 | uVar4 & 0xffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0x80;
  func_0x000109defe68(param_1,&lStack_28,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  bVar1 = *(byte *)((long)param_1 + 0x14);
  if ((bVar1 & 6) == 0 || (bVar1 & 7) == 3) {
    if ((bVar1 & 7) == 3) {
      uVar2 = 0;
      uVar7 = 0;
    }
    else {
      if ((bVar1 & 7) == 0) {
        uVar2 = 0;
      }
      else {
        puVar6 = (uint *)(param_1 + 1);
        if (*(int *)(*param_1 + 8) - 0x40U < 0xffffff80) {
          puVar6 = *(uint **)puVar6;
        }
        uVar2 = *puVar6;
      }
      uVar7 = 0xff;
    }
  }
  else {
    uVar7 = (int)param_1[2] + 0x7f;
    puVar6 = (uint *)(param_1 + 1);
    if (*(int *)(*param_1 + 8) - 0x40U < 0xffffff80) {
      puVar6 = *(uint **)puVar6;
    }
    uVar2 = *puVar6;
    if (uVar7 == 1) {
      uVar7 = uVar2 >> 0x17 & 1;
    }
  }
  *(undefined4 *)(extraout_x8 + 1) = 0x20;
  *extraout_x8 = (ulong)((bVar1 & 8) << 0x1c | (uVar7 & 0xff) << 0x17 | uVar2 & 0x7fffff);
  uVar7 = (uint)extraout_x8[1];
  puVar3 = extraout_x8;
  if (uVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffffffffffff >> ((ulong)-uVar7 & 0x3f);
    if (0x40 < uVar7) {
      puVar3 = (ulong *)(*extraout_x8 + (ulong)((int)((ulong)uVar7 + 0x3f >> 6) - 1) * 8);
    }
  }
  *puVar3 = *puVar3 & uVar4;
  return;
}



/* Entry: 109dec8f0; end: 109decd1b;  */

void FUN_109dec8f0(ulong *param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  bVar1 = *(byte *)((long)param_2 + 0x14);
  if ((bVar1 & 6) == 0 || (bVar1 & 7) == 3) {
    if ((bVar1 & 7) == 3) {
      uVar3 = 0;
      uVar5 = 0;
    }
    else {
      if ((bVar1 & 7) == 0) {
        uVar3 = 0;
      }
      else {
        puVar4 = (uint *)(param_2 + 1);
        if (*(int *)(*param_2 + 8) - 0x40U < 0xffffff80) {
          puVar4 = *(uint **)puVar4;
        }
        uVar3 = *puVar4;
      }
      uVar5 = 0xff;
    }
  }
  else {
    uVar5 = (int)param_2[2] + 0x7f;
    puVar4 = (uint *)(param_2 + 1);
    if (*(int *)(*param_2 + 8) - 0x40U < 0xffffff80) {
      puVar4 = *(uint **)puVar4;
    }
    uVar3 = *puVar4;
    if (uVar5 == 1) {
      uVar5 = uVar3 >> 0x17 & 1;
    }
  }
  *(undefined4 *)(param_1 + 1) = 0x20;
  *param_1 = (ulong)((bVar1 & 8) << 0x1c | (uVar5 & 0xff) << 0x17 | uVar3 & 0x7fffff);
  uVar5 = (uint)param_1[1];
  if (uVar5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffffffffffff >> ((ulong)-uVar5 & 0x3f);
    if (0x40 < uVar5) {
      param_1 = (ulong *)(*param_1 + (ulong)((int)((ulong)uVar5 + 0x3f >> 6) - 1) * 8);
    }
  }
  *param_1 = *param_1 & uVar2;
  return;
}



/* Entry: 109decd1c; end: 109dece43;  */

/* WARNING: Removing unreachable block (ram,0x000109de79c0) */
/* WARNING: Removing unreachable block (ram,0x000109de7ac0) */
/* WARNING: Removing unreachable block (ram,0x000109de7b58) */
/* WARNING: Removing unreachable block (ram,0x000109de7b60) */
/* WARNING: Removing unreachable block (ram,0x000109de7b68) */
/* WARNING: Removing unreachable block (ram,0x000109de7b70) */
/* WARNING: Removing unreachable block (ram,0x000109de7b7c) */
/* WARNING: Removing unreachable block (ram,0x000109de7b84) */
/* WARNING: Removing unreachable block (ram,0x000109de7ae0) */

void FUN_109decd1c(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  byte bVar13;
  undefined *puVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  uint uVar18;
  uint *puVar19;
  long lStack_80;
  uint uStack_78;
  long lStack_70;
  uint auStack_68 [2];
  
  if (0x40 < *(uint *)(param_2 + 1)) {
    param_2 = (long *)*param_2;
  }
  lVar1 = *param_2;
  uVar11 = param_2[1];
  uVar16 = uVar11 & 0x7fff;
  *param_1 = (long)&DAT_10e05aea8;
  plVar9 = (long *)0x10;
  __Znam();
  param_1[1] = (long)plVar9;
  bVar13 = *(byte *)((long)param_1 + 0x14);
  uVar11 = uVar11 >> 0xc;
  bVar5 = (byte)uVar11 & 8;
  *(byte *)((long)param_1 + 0x14) = bVar13 & 0xf7 | bVar5;
  if (uVar16 == 0 && lVar1 == 0) {
    bVar13 = 0xb;
    if ((uVar11 & 8) == 0) {
      bVar13 = 3;
    }
    *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf0 | bVar13;
    iVar3 = *(int *)(*param_1 + 8);
    *(int *)(param_1 + 2) = *(int *)(*param_1 + 4) + -1;
    if (0xffffff7f < iVar3 - 0x40U) {
      param_1[1] = 0;
      return;
    }
    puVar8 = (undefined8 *)param_1[1];
    *puVar8 = 0;
code_r0x00010bdbdc44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(puVar8 + 1,(ulong)((iVar3 + 0x40U >> 6) - 1) << 3);
    return;
  }
  if (lVar1 != -0x8000000000000000 || uVar16 != 0x7fff) {
    if ((lVar1 == -0x8000000000000000 || uVar16 != 0x7fff) &&
       ((lVar1 < 0 || (uVar16 == 0 || uVar16 == 0x7fff)))) {
      *(byte *)((long)param_1 + 0x14) = bVar13 & 0xf0 | bVar5 | 2;
      *(int *)(param_1 + 2) = (int)uVar16 + -0x3fff;
      *plVar9 = lVar1;
      plVar9[1] = 0;
      if (uVar16 == 0) {
        *(undefined4 *)(param_1 + 2) = 0xffffc002;
      }
    }
    else {
      *(byte *)((long)param_1 + 0x14) = bVar13 & 0xf0 | bVar5 | 1;
      *(undefined4 *)(param_1 + 2) = 0x4000;
      *plVar9 = lVar1;
      plVar9[1] = 0;
    }
    return;
  }
  bVar7 = (uVar11 & 8) == 0;
  piVar12 = (int *)*param_1;
  if (piVar12[4] != 1) {
    bVar13 = 8;
    if (bVar7) {
      bVar13 = 0;
    }
    *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf0 | bVar13;
    *(int *)(param_1 + 2) = *piVar12 + 1;
    iVar3 = piVar12[2];
    if (0xffffff7f < iVar3 - 0x40U) {
      param_1[1] = 0;
      return;
    }
    puVar8 = (undefined8 *)param_1[1];
    *puVar8 = 0;
    goto code_r0x00010bdbdc44;
  }
  plVar9 = (long *)0x0;
  bVar13 = 9;
  if (bVar7) {
    bVar13 = 1;
  }
  *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf0 | bVar13;
  piVar12 = (int *)*param_1;
  iVar2 = piVar12[4];
  iVar3 = *piVar12;
  if (iVar2 != 1) {
    iVar3 = iVar3 + 1;
  }
  *(int *)(param_1 + 2) = iVar3;
  iVar3 = piVar12[2];
  plVar17 = param_1 + 1;
  if (iVar3 - 0x40U < 0xffffff80) {
    plVar17 = (long *)*plVar17;
  }
  uVar4 = iVar3 + 0x40U >> 6;
  auStack_68[0] = 1;
  lStack_70 = 0;
  if (iVar2 == 1) {
    puVar19 = auStack_68;
    func_0x000109d301b0(&lStack_80,iVar3 + -1,0xffffffffffffffff,1);
    lStack_70 = lStack_80;
    auStack_68[0] = uStack_78;
    plVar9 = &lStack_70;
    uVar18 = uStack_78;
    if ((uint)((ulong)uStack_78 + 0x3f >> 6) < uVar4) {
      bVar7 = false;
      goto LAB_109de79ec;
    }
  }
  else {
    puVar19 = (uint *)0x8;
    bVar7 = true;
LAB_109de79ec:
    uVar18 = auStack_68[0];
    lStack_80 = lStack_70;
    *plVar17 = 0;
    if (0x7f < iVar3 + 0x40U) {
      _bzero(plVar17 + 1,(ulong)(uVar4 - 1) << 3);
    }
    if (bVar7) {
      puVar14 = (undefined *)*param_1;
      iVar3 = *(int *)(puVar14 + 8);
      goto LAB_109de7a24;
    }
    uStack_78 = *puVar19;
  }
  if (0x40 < uStack_78) {
    plVar9 = (long *)*plVar9;
  }
  uVar10 = (uint)((ulong)uStack_78 + 0x3f >> 6);
  uVar6 = uVar4;
  if (uVar10 <= uVar4) {
    uVar6 = uVar10;
  }
  uVar11 = (ulong)uVar6;
  plVar15 = plVar17;
  if (uVar6 != 0) {
    do {
      *plVar15 = *plVar9;
      uVar11 = uVar11 - 1;
      plVar15 = plVar15 + 1;
      plVar9 = plVar9 + 1;
    } while (uVar11 != 0);
  }
  puVar14 = (undefined *)*param_1;
  iVar3 = *(int *)(puVar14 + 8);
  uVar6 = iVar3 - 1U >> 6;
  plVar17[uVar6] = plVar17[uVar6] & (-1L << ((ulong)(iVar3 - 1U) & 0x3f) ^ 0xffffffffffffffffU);
  while (uVar6 = uVar6 + 1, uVar6 != uVar4) {
    plVar17[uVar6] = 0;
  }
LAB_109de7a24:
  uVar4 = iVar3 - 2U >> 6;
  plVar17[uVar4] = 1L << ((ulong)(iVar3 - 2U) & 0x3f) | plVar17[uVar4];
  if (puVar14 == &DAT_10e05aea8) {
    uVar4 = iVar3 - 1U >> 6;
    plVar17[uVar4] = plVar17[uVar4] | 1L << ((ulong)(iVar3 - 1U) & 0x3f);
  }
  if ((0x40 < uVar18) && (lStack_80 != 0)) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109dece44; end: 109decf53;  */

void FUN_109dece44(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined4 uStack_58;
  long lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_31;
  
  if (0x40 < *(uint *)(param_2 + 1)) {
    param_2 = (long *)*param_2;
  }
  lStack_50 = *param_2;
  uVar1 = param_2[1];
  uStack_48 = 0x40;
  FUN_109decf54(param_1,&lStack_50);
  FUN_109de8868(param_1,&UNK_10e05aed0,1,&uStack_31);
  if ((*(byte *)(param_1 + 0x14) & 6) != 0 && (*(byte *)(param_1 + 0x14) & 7) != 3) {
    uStack_58 = 0x40;
    uStack_60 = uVar1;
    FUN_109decf54(&lStack_50,&uStack_60);
    FUN_109de8868(&lStack_50,&UNK_10e05aed0,1,&uStack_31);
    FUN_109de9ad8(param_1,&lStack_50,1,0);
    if ((*(int *)(lStack_50 + 8) - 0x40U < 0xffffff80) && (CONCAT44(uStack_44,uStack_48) != 0)) {
      __ZdaPv();
    }
  }
  return;
}



/* Entry: 109decf54; end: 109ded007;  */

/* WARNING: Removing unreachable block (ram,0x000109de79c0) */
/* WARNING: Removing unreachable block (ram,0x000109de7ac0) */
/* WARNING: Removing unreachable block (ram,0x000109de7b58) */
/* WARNING: Removing unreachable block (ram,0x000109de7b60) */
/* WARNING: Removing unreachable block (ram,0x000109de7b68) */
/* WARNING: Removing unreachable block (ram,0x000109de7b70) */
/* WARNING: Removing unreachable block (ram,0x000109de7b7c) */
/* WARNING: Removing unreachable block (ram,0x000109de7b84) */
/* WARNING: Removing unreachable block (ram,0x000109de7ae0) */

void FUN_109decf54(long *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  byte bVar11;
  undefined *puVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  uint uVar18;
  uint *puVar19;
  long lStack_80;
  uint uStack_78;
  long lStack_70;
  uint auStack_68 [2];
  
  if (0x40 < (uint)param_2[1]) {
    param_2 = (ulong *)*param_2;
  }
  uVar15 = *param_2;
  uVar14 = uVar15 >> 0x34 & 0x7ff;
  uVar10 = uVar15 & 0xfffffffffffff;
  *param_1 = (long)&DAT_10e05ae44;
  bVar11 = *(byte *)((long)param_1 + 0x14) & 0xf0;
  bVar5 = (byte)((uint)(uVar15 >> 0x3f) << 3);
  *(byte *)((long)param_1 + 0x14) = bVar11 | *(byte *)((long)param_1 + 0x14) & 7 | bVar5;
  if (uVar14 == 0 && uVar10 == 0) {
    bVar11 = 0xb;
    if (-1 < (long)uVar15) {
      bVar11 = 3;
    }
    *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf0 | bVar11;
    iVar2 = *(int *)(*param_1 + 8);
    *(int *)(param_1 + 2) = *(int *)(*param_1 + 4) + -1;
    if (0xffffff7f < iVar2 - 0x40U) {
      param_1[1] = 0;
      return;
    }
    puVar7 = (undefined8 *)param_1[1];
    *puVar7 = 0;
code_r0x00010bdbdc44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(puVar7 + 1,(ulong)((iVar2 + 0x40U >> 6) - 1) << 3);
    return;
  }
  if ((uVar10 != 0) || (uVar14 != 0x7ff)) {
    bVar11 = bVar11 | bVar5;
    if ((uVar10 == 0) || (uVar14 != 0x7ff)) {
      *(byte *)((long)param_1 + 0x14) = bVar11 | 2;
      *(int *)(param_1 + 2) = (int)uVar14 + -0x3ff;
      param_1[1] = uVar10;
      if (uVar14 == 0) {
        *(undefined4 *)(param_1 + 2) = 0xfffffc02;
        return;
      }
      uVar10 = uVar10 | 0x10000000000000;
    }
    else {
      *(byte *)((long)param_1 + 0x14) = bVar11 | 1;
      *(undefined4 *)(param_1 + 2) = 0x400;
    }
    param_1[1] = uVar10;
    return;
  }
  piVar9 = (int *)*param_1;
  if (piVar9[4] != 1) {
    bVar11 = 8;
    if (-1 < (long)uVar15) {
      bVar11 = 0;
    }
    *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf0 | bVar11;
    *(int *)(param_1 + 2) = *piVar9 + 1;
    iVar2 = piVar9[2];
    if (0xffffff7f < iVar2 - 0x40U) {
      param_1[1] = 0;
      return;
    }
    puVar7 = (undefined8 *)param_1[1];
    *puVar7 = 0;
    goto code_r0x00010bdbdc44;
  }
  plVar16 = (long *)0x0;
  bVar11 = 9;
  if (-1 < (long)uVar15) {
    bVar11 = 1;
  }
  *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf0 | bVar11;
  piVar9 = (int *)*param_1;
  iVar1 = piVar9[4];
  iVar2 = *piVar9;
  if (iVar1 != 1) {
    iVar2 = iVar2 + 1;
  }
  *(int *)(param_1 + 2) = iVar2;
  iVar2 = piVar9[2];
  plVar17 = param_1 + 1;
  if (iVar2 - 0x40U < 0xffffff80) {
    plVar17 = (long *)*plVar17;
  }
  uVar3 = iVar2 + 0x40U >> 6;
  auStack_68[0] = 1;
  lStack_70 = 0;
  if (iVar1 == 1) {
    puVar19 = auStack_68;
    func_0x000109d301b0(&lStack_80,iVar2 + -1,0xffffffffffffffff,1);
    lStack_70 = lStack_80;
    auStack_68[0] = uStack_78;
    plVar16 = &lStack_70;
    uVar18 = uStack_78;
    if ((uint)((ulong)uStack_78 + 0x3f >> 6) < uVar3) {
      bVar4 = false;
      goto LAB_109de79ec;
    }
  }
  else {
    puVar19 = (uint *)0x8;
    bVar4 = true;
LAB_109de79ec:
    uVar18 = auStack_68[0];
    lStack_80 = lStack_70;
    *plVar17 = 0;
    if (0x7f < iVar2 + 0x40U) {
      _bzero(plVar17 + 1,(ulong)(uVar3 - 1) << 3);
    }
    if (bVar4) {
      puVar12 = (undefined *)*param_1;
      iVar2 = *(int *)(puVar12 + 8);
      goto LAB_109de7a24;
    }
    uStack_78 = *puVar19;
  }
  if (0x40 < uStack_78) {
    plVar16 = (long *)*plVar16;
  }
  uVar8 = (uint)((ulong)uStack_78 + 0x3f >> 6);
  uVar6 = uVar3;
  if (uVar8 <= uVar3) {
    uVar6 = uVar8;
  }
  uVar10 = (ulong)uVar6;
  plVar13 = plVar17;
  if (uVar6 != 0) {
    do {
      *plVar13 = *plVar16;
      uVar10 = uVar10 - 1;
      plVar13 = plVar13 + 1;
      plVar16 = plVar16 + 1;
    } while (uVar10 != 0);
  }
  puVar12 = (undefined *)*param_1;
  iVar2 = *(int *)(puVar12 + 8);
  uVar6 = iVar2 - 1U >> 6;
  plVar17[uVar6] = plVar17[uVar6] & (-1L << ((ulong)(iVar2 - 1U) & 0x3f) ^ 0xffffffffffffffffU);
  while (uVar6 = uVar6 + 1, uVar6 != uVar3) {
    plVar17[uVar6] = 0;
  }
LAB_109de7a24:
  uVar3 = iVar2 - 2U >> 6;
  plVar17[uVar3] = 1L << ((ulong)(iVar2 - 2U) & 0x3f) | plVar17[uVar3];
  if (puVar12 == &DAT_10e05aea8) {
    uVar3 = iVar2 - 1U >> 6;
    plVar17[uVar3] = plVar17[uVar3] | 1L << ((ulong)(iVar2 - 1U) & 0x3f);
  }
  if ((0x40 < uVar18) && (lStack_80 != 0)) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109ded008; end: 109ded137;  */

/* WARNING: Removing unreachable block (ram,0x000109de79c0) */
/* WARNING: Removing unreachable block (ram,0x000109de7ac0) */
/* WARNING: Removing unreachable block (ram,0x000109de7b58) */
/* WARNING: Removing unreachable block (ram,0x000109de7b60) */
/* WARNING: Removing unreachable block (ram,0x000109de7b68) */
/* WARNING: Removing unreachable block (ram,0x000109de7b70) */
/* WARNING: Removing unreachable block (ram,0x000109de7b7c) */
/* WARNING: Removing unreachable block (ram,0x000109de7b84) */
/* WARNING: Removing unreachable block (ram,0x000109de7ae0) */

void FUN_109ded008(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  byte bVar13;
  undefined *puVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  uint uVar19;
  uint *puVar20;
  long lStack_80;
  uint uStack_78;
  long lStack_70;
  uint auStack_68 [2];
  
  if (0x40 < *(uint *)(param_2 + 1)) {
    param_2 = (long *)*param_2;
  }
  lVar1 = *param_2;
  uVar11 = param_2[1];
  uVar17 = uVar11 >> 0x30 & 0x7fff;
  uVar16 = uVar11 & 0xffffffffffff;
  *param_1 = (long)&DAT_10e05ae58;
  plVar9 = (long *)0x10;
  __Znam();
  param_1[1] = (long)plVar9;
  bVar13 = *(byte *)((long)param_1 + 0x14) & 0xf0;
  bVar6 = (byte)((uint)(uVar11 >> 0x3f) << 3);
  *(byte *)((long)param_1 + 0x14) = bVar13 | *(byte *)((long)param_1 + 0x14) & 7 | bVar6;
  if ((uVar17 == 0 && lVar1 == 0) && uVar16 == 0) {
    bVar13 = 0xb;
    if (-1 < (long)uVar11) {
      bVar13 = 3;
    }
    *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf0 | bVar13;
    iVar3 = *(int *)(*param_1 + 8);
    *(int *)(param_1 + 2) = *(int *)(*param_1 + 4) + -1;
    if (0xffffff7f < iVar3 - 0x40U) {
      param_1[1] = 0;
      return;
    }
    puVar8 = (undefined8 *)param_1[1];
    *puVar8 = 0;
code_r0x00010bdbdc44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(puVar8 + 1,(ulong)((iVar3 + 0x40U >> 6) - 1) << 3);
    return;
  }
  if ((uVar17 != 0x7fff || lVar1 != 0) || uVar16 != 0) {
    bVar13 = bVar13 | bVar6;
    if (uVar17 == 0x7fff && (lVar1 != 0 || uVar16 != 0)) {
      *(byte *)((long)param_1 + 0x14) = bVar13 | 1;
      *(undefined4 *)(param_1 + 2) = 0x4000;
      *plVar9 = lVar1;
      plVar9[1] = uVar16;
    }
    else {
      *(byte *)((long)param_1 + 0x14) = bVar13 | 2;
      *(int *)(param_1 + 2) = (int)uVar17 + -0x3fff;
      *plVar9 = lVar1;
      plVar9[1] = uVar16;
      if (uVar17 == 0) {
        *(undefined4 *)(param_1 + 2) = 0xffffc002;
      }
      else {
        plVar9[1] = uVar16 | 0x1000000000000;
      }
    }
    return;
  }
  piVar12 = (int *)*param_1;
  if (piVar12[4] != 1) {
    bVar13 = 8;
    if (-1 < (long)uVar11) {
      bVar13 = 0;
    }
    *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf0 | bVar13;
    *(int *)(param_1 + 2) = *piVar12 + 1;
    iVar3 = piVar12[2];
    if (0xffffff7f < iVar3 - 0x40U) {
      param_1[1] = 0;
      return;
    }
    puVar8 = (undefined8 *)param_1[1];
    *puVar8 = 0;
    goto code_r0x00010bdbdc44;
  }
  plVar9 = (long *)0x0;
  bVar13 = 9;
  if (-1 < (long)uVar11) {
    bVar13 = 1;
  }
  *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf0 | bVar13;
  piVar12 = (int *)*param_1;
  iVar2 = piVar12[4];
  iVar3 = *piVar12;
  if (iVar2 != 1) {
    iVar3 = iVar3 + 1;
  }
  *(int *)(param_1 + 2) = iVar3;
  iVar3 = piVar12[2];
  plVar18 = param_1 + 1;
  if (iVar3 - 0x40U < 0xffffff80) {
    plVar18 = (long *)*plVar18;
  }
  uVar4 = iVar3 + 0x40U >> 6;
  auStack_68[0] = 1;
  lStack_70 = 0;
  if (iVar2 == 1) {
    puVar20 = auStack_68;
    func_0x000109d301b0(&lStack_80,iVar3 + -1,0xffffffffffffffff,1);
    lStack_70 = lStack_80;
    auStack_68[0] = uStack_78;
    plVar9 = &lStack_70;
    uVar19 = uStack_78;
    if ((uint)((ulong)uStack_78 + 0x3f >> 6) < uVar4) {
      bVar5 = false;
      goto LAB_109de79ec;
    }
  }
  else {
    puVar20 = (uint *)0x8;
    bVar5 = true;
LAB_109de79ec:
    uVar19 = auStack_68[0];
    lStack_80 = lStack_70;
    *plVar18 = 0;
    if (0x7f < iVar3 + 0x40U) {
      _bzero(plVar18 + 1,(ulong)(uVar4 - 1) << 3);
    }
    if (bVar5) {
      puVar14 = (undefined *)*param_1;
      iVar3 = *(int *)(puVar14 + 8);
      goto LAB_109de7a24;
    }
    uStack_78 = *puVar20;
  }
  if (0x40 < uStack_78) {
    plVar9 = (long *)*plVar9;
  }
  uVar10 = (uint)((ulong)uStack_78 + 0x3f >> 6);
  uVar7 = uVar4;
  if (uVar10 <= uVar4) {
    uVar7 = uVar10;
  }
  uVar11 = (ulong)uVar7;
  plVar15 = plVar18;
  if (uVar7 != 0) {
    do {
      *plVar15 = *plVar9;
      uVar11 = uVar11 - 1;
      plVar15 = plVar15 + 1;
      plVar9 = plVar9 + 1;
    } while (uVar11 != 0);
  }
  puVar14 = (undefined *)*param_1;
  iVar3 = *(int *)(puVar14 + 8);
  uVar7 = iVar3 - 1U >> 6;
  plVar18[uVar7] = plVar18[uVar7] & (-1L << ((ulong)(iVar3 - 1U) & 0x3f) ^ 0xffffffffffffffffU);
  while (uVar7 = uVar7 + 1, uVar7 != uVar4) {
    plVar18[uVar7] = 0;
  }
LAB_109de7a24:
  uVar4 = iVar3 - 2U >> 6;
  plVar18[uVar4] = 1L << ((ulong)(iVar3 - 2U) & 0x3f) | plVar18[uVar4];
  if (puVar14 == &DAT_10e05aea8) {
    uVar4 = iVar3 - 1U >> 6;
    plVar18[uVar4] = plVar18[uVar4] | 1L << ((ulong)(iVar3 - 1U) & 0x3f);
  }
  if ((0x40 < uVar19) && (lStack_80 != 0)) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109ded138; end: 109ded5a3;  */

/* WARNING: Removing unreachable block (ram,0x000109de79c0) */
/* WARNING: Removing unreachable block (ram,0x000109de7ac0) */
/* WARNING: Removing unreachable block (ram,0x000109de7b58) */
/* WARNING: Removing unreachable block (ram,0x000109de7b60) */
/* WARNING: Removing unreachable block (ram,0x000109de7b68) */
/* WARNING: Removing unreachable block (ram,0x000109de7b70) */
/* WARNING: Removing unreachable block (ram,0x000109de7b7c) */
/* WARNING: Removing unreachable block (ram,0x000109de7b84) */
/* WARNING: Removing unreachable block (ram,0x000109de7ae0) */

void FUN_109ded138(long *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  ulong uVar11;
  byte bVar12;
  undefined *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  uint *puVar17;
  long lStack_80;
  uint uStack_78;
  long lStack_70;
  uint auStack_68 [2];
  
  if (0x40 < (uint)param_2[1]) {
    param_2 = (ulong *)*param_2;
  }
  uVar11 = *param_2;
  uVar9 = (uint)uVar11;
  uVar3 = uVar9 >> 0x17 & 0xff;
  *param_1 = (long)&DAT_10e05ae30;
  bVar5 = ((char)(uVar11 >> 0x18) >> 7) * -8;
  bVar12 = *(byte *)((long)param_1 + 0x14) & 0xf0;
  *(byte *)((long)param_1 + 0x14) = bVar12 | *(byte *)((long)param_1 + 0x14) & 7 | bVar5;
  if (uVar3 == 0 && (uVar11 & 0x7fffff) == 0) {
    bVar12 = 0xb;
    if (-1 < (int)uVar9) {
      bVar12 = 3;
    }
    *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf0 | bVar12;
    iVar2 = *(int *)(*param_1 + 8);
    *(int *)(param_1 + 2) = *(int *)(*param_1 + 4) + -1;
    if (0xffffff7f < iVar2 - 0x40U) {
      param_1[1] = 0;
      return;
    }
    puVar7 = (undefined8 *)param_1[1];
    *puVar7 = 0;
code_r0x00010bdbdc44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(puVar7 + 1,(ulong)((iVar2 + 0x40U >> 6) - 1) << 3);
    return;
  }
  if (((uVar11 & 0x7fffff) != 0) || (uVar3 != 0xff)) {
    bVar12 = bVar12 | bVar5;
    if (((uVar11 & 0x7fffff) == 0) || (uVar3 != 0xff)) {
      *(byte *)((long)param_1 + 0x14) = bVar12 | 2;
      *(uint *)(param_1 + 2) = uVar3 - 0x7f;
      param_1[1] = uVar11 & 0x7fffff;
      if (uVar3 == 0) {
        *(undefined4 *)(param_1 + 2) = 0xffffff82;
        return;
      }
      uVar11 = uVar11 & 0x7fffff | 0x800000;
    }
    else {
      *(byte *)((long)param_1 + 0x14) = bVar12 | 1;
      *(undefined4 *)(param_1 + 2) = 0x80;
      uVar11 = uVar11 & 0x7fffff;
    }
    param_1[1] = uVar11;
    return;
  }
  piVar10 = (int *)*param_1;
  if (piVar10[4] != 1) {
    bVar12 = 8;
    if (-1 < (int)uVar9) {
      bVar12 = 0;
    }
    *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf0 | bVar12;
    *(int *)(param_1 + 2) = *piVar10 + 1;
    iVar2 = piVar10[2];
    if (0xffffff7f < iVar2 - 0x40U) {
      param_1[1] = 0;
      return;
    }
    puVar7 = (undefined8 *)param_1[1];
    *puVar7 = 0;
    goto code_r0x00010bdbdc44;
  }
  plVar15 = (long *)0x0;
  bVar12 = 9;
  if (-1 < (int)uVar9) {
    bVar12 = 1;
  }
  *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xf0 | bVar12;
  piVar10 = (int *)*param_1;
  iVar1 = piVar10[4];
  iVar2 = *piVar10;
  if (iVar1 != 1) {
    iVar2 = iVar2 + 1;
  }
  *(int *)(param_1 + 2) = iVar2;
  iVar2 = piVar10[2];
  plVar16 = param_1 + 1;
  if (iVar2 - 0x40U < 0xffffff80) {
    plVar16 = (long *)*plVar16;
  }
  uVar3 = iVar2 + 0x40U >> 6;
  auStack_68[0] = 1;
  lStack_70 = 0;
  if (iVar1 == 1) {
    puVar17 = auStack_68;
    func_0x000109d301b0(&lStack_80,iVar2 + -1,0xffffffffffffffff,1);
    lStack_70 = lStack_80;
    auStack_68[0] = uStack_78;
    plVar15 = &lStack_70;
    uVar9 = uStack_78;
    if ((uint)((ulong)uStack_78 + 0x3f >> 6) < uVar3) {
      bVar4 = false;
      goto LAB_109de79ec;
    }
  }
  else {
    puVar17 = (uint *)0x8;
    bVar4 = true;
LAB_109de79ec:
    uVar9 = auStack_68[0];
    lStack_80 = lStack_70;
    *plVar16 = 0;
    if (0x7f < iVar2 + 0x40U) {
      _bzero(plVar16 + 1,(ulong)(uVar3 - 1) << 3);
    }
    if (bVar4) {
      puVar13 = (undefined *)*param_1;
      iVar2 = *(int *)(puVar13 + 8);
      goto LAB_109de7a24;
    }
    uStack_78 = *puVar17;
  }
  if (0x40 < uStack_78) {
    plVar15 = (long *)*plVar15;
  }
  uVar8 = (uint)((ulong)uStack_78 + 0x3f >> 6);
  uVar6 = uVar3;
  if (uVar8 <= uVar3) {
    uVar6 = uVar8;
  }
  uVar11 = (ulong)uVar6;
  plVar14 = plVar16;
  if (uVar6 != 0) {
    do {
      *plVar14 = *plVar15;
      uVar11 = uVar11 - 1;
      plVar14 = plVar14 + 1;
      plVar15 = plVar15 + 1;
    } while (uVar11 != 0);
  }
  puVar13 = (undefined *)*param_1;
  iVar2 = *(int *)(puVar13 + 8);
  uVar6 = iVar2 - 1U >> 6;
  plVar16[uVar6] = plVar16[uVar6] & (-1L << ((ulong)(iVar2 - 1U) & 0x3f) ^ 0xffffffffffffffffU);
  while (uVar6 = uVar6 + 1, uVar6 != uVar3) {
    plVar16[uVar6] = 0;
  }
LAB_109de7a24:
  uVar3 = iVar2 - 2U >> 6;
  plVar16[uVar3] = 1L << ((ulong)(iVar2 - 2U) & 0x3f) | plVar16[uVar3];
  if (puVar13 == &DAT_10e05aea8) {
    uVar3 = iVar2 - 1U >> 6;
    plVar16[uVar3] = plVar16[uVar3] | 1L << ((ulong)(iVar2 - 1U) & 0x3f);
  }
  if ((0x40 < uVar9) && (lStack_80 != 0)) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109ded5a4; end: 109ded637;  */

undefined8 * FUN_109ded5a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x50;
  __Znam();
  puVar1[1] = 2;
  *puVar1 = 0x20;
  FUN_109de8290(puVar1 + 3,&DAT_10e05ae44);
  FUN_109de8290(puVar1 + 7,&DAT_10e05ae44);
  param_1[1] = puVar1 + 2;
  return param_1;
}



/* Entry: 109ded638; end: 109ded6cb;  */

undefined8 * FUN_109ded638(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x50;
  __Znam();
  puVar1[1] = 2;
  *puVar1 = 0x20;
  FUN_109de8290(puVar1 + 3,&DAT_10e05ae44);
  FUN_109de8290(puVar1 + 7,&DAT_10e05ae44);
  param_1[1] = puVar1 + 2;
  return param_1;
}



/* Entry: 109ded6cc; end: 109ded7a7;  */

undefined8 * FUN_109ded6cc(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined4 uStack_58;
  long lStack_50;
  undefined4 uStack_48;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x50;
  __Znam();
  puVar2[1] = 2;
  *puVar2 = 0x20;
  plVar1 = param_3;
  if (0x40 < *(uint *)(param_3 + 1)) {
    plVar1 = (long *)*param_3;
  }
  lStack_50 = *plVar1;
  uStack_48 = 0x40;
  FUN_109decf54(puVar2 + 3,&lStack_50);
  if (0x40 < *(uint *)(param_3 + 1)) {
    param_3 = (long *)*param_3;
  }
  uStack_60 = param_3[1];
  uStack_58 = 0x40;
  FUN_109decf54(puVar2 + 7,&uStack_60);
  param_1[1] = puVar2 + 2;
  return param_1;
}



/* Entry: 109ded7a8; end: 109ded867;  */

undefined8 * FUN_109ded7a8(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x50;
  __Znam();
  puVar1[1] = 2;
  *puVar1 = 0x20;
  if (*(undefined **)(param_3 + 8) == &DAT_10e05ae6c) {
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    puVar1[3] = &DAT_10e05ae6c;
    puVar1[4] = uVar2;
    *(undefined **)(param_3 + 8) = &UNK_10e05aebc;
    *(undefined8 *)(param_3 + 0x10) = 0;
  }
  else {
    puVar1[3] = &UNK_10e05aebc;
    func_0x000109de7c14();
  }
  if (*(undefined **)(param_4 + 8) == &DAT_10e05ae6c) {
    uVar2 = *(undefined8 *)(param_4 + 0x10);
    puVar1[7] = &DAT_10e05ae6c;
    puVar1[8] = uVar2;
    *(undefined **)(param_4 + 8) = &UNK_10e05aebc;
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  else {
    puVar1[7] = &UNK_10e05aebc;
    func_0x000109de7c14(puVar1 + 7);
  }
  param_1[1] = puVar1 + 2;
  return param_1;
}



/* Entry: 109ded868; end: 109ded913;  */

undefined8 * FUN_109ded868(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)0x50;
    __Znam();
    puVar2[1] = 2;
    *puVar2 = 0x20;
    FUN_109d32470(puVar2 + 3,lVar1 + 8);
    FUN_109d32470(puVar2 + 7,param_2[1] + 0x28);
    puVar2 = puVar2 + 2;
  }
  param_1[1] = puVar2;
  return param_1;
}



/* Entry: 109ded914; end: 109ded99f;  */

long * FUN_109ded914(long *param_1,long *param_2)

{
  long lVar1;
  
  if ((*param_1 == *param_2) && (param_2[1] != 0)) {
    FUN_109d328a8(param_1[1] + 8,param_2[1] + 8);
    FUN_109d328a8(param_1[1] + 0x28,param_2[1] + 0x28);
  }
  else if (param_1 != param_2) {
    lVar1 = param_1[1];
    param_1[1] = 0;
    if (lVar1 != 0) {
      func_0x000109d3229c();
    }
    FUN_109ded868(param_1,param_2);
  }
  return param_1;
}



/* Entry: 109ded9a0; end: 109dedacf;  */

ulong FUN_109ded9a0(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  if (*(undefined **)(param_1 + 8) == &DAT_10e05ae6c) {
    uVar10 = *(ulong *)(param_1 + 0x10);
    lVar11 = *(long *)(param_2 + 0x10);
    uVar9 = uVar10;
    FUN_109ded9a0(uVar10,lVar11);
    if ((int)uVar9 == 1) {
      uVar13 = uVar10 + 0x20;
      lVar12 = lVar11 + 0x20;
      uVar9 = uVar13;
      FUN_109ded9a0(uVar13,lVar12);
      if ((uVar9 & 1) == 0) {
        uVar7 = uVar10;
        if (*(undefined **)(uVar10 + 8) == &DAT_10e05ae6c) {
          uVar7 = *(ulong *)(uVar10 + 0x10);
        }
        if (*(undefined **)(uVar10 + 0x28) == &DAT_10e05ae6c) {
          uVar13 = *(ulong *)(uVar10 + 0x30);
        }
        bVar4 = *(byte *)(uVar13 + 0x1c) ^ *(byte *)(uVar7 + 0x1c);
        lVar8 = lVar11;
        if (*(undefined **)(lVar11 + 8) == &DAT_10e05ae6c) {
          lVar8 = *(long *)(lVar11 + 0x10);
        }
        if (*(undefined **)(lVar11 + 0x28) == &DAT_10e05ae6c) {
          lVar12 = *(long *)(lVar11 + 0x30);
        }
        bVar5 = *(byte *)(lVar12 + 0x1c) ^ *(byte *)(lVar8 + 0x1c);
        if (((bVar4 >> 3 & 1) == 0) || ((bVar5 >> 3 & 1) != 0)) {
          if (((uint)((bVar4 & 8) == 0) & (bVar5 & 8) >> 3) == 0) {
            if (((((bVar4 | bVar5) >> 3 & 1) != 0) && ((bVar4 >> 3 & 1) != 0)) &&
               ((bVar5 >> 3 & 1) != 0)) {
              uVar9 = (ulong)(2 - (int)uVar9);
            }
          }
          else {
            uVar9 = 2;
          }
        }
        else {
          uVar9 = 0;
        }
      }
    }
    return uVar9;
  }
  uVar3 = *(int *)(param_1 + 0x18) - *(int *)(param_2 + 0x18);
  if (uVar3 == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x10);
    iVar2 = *(int *)(*(long *)(param_1 + 8) + 8);
    if (iVar2 - 0x40U < 0xffffff80) {
      puVar6 = (undefined8 *)*puVar6;
    }
    plVar1 = (long *)*(long *)(param_2 + 0x10);
    if (0xffffff7f < *(int *)(*(long *)(param_2 + 8) + 8) - 0x40U) {
      plVar1 = (long *)(param_2 + 0x10);
    }
    lVar11 = (ulong)(iVar2 + 0x40U >> 6) << 3;
    do {
      lVar12 = lVar11;
      if (lVar12 == 0) goto LAB_109de9430;
      uVar9 = *(ulong *)((long)puVar6 + lVar12 + -8);
      uVar10 = *(ulong *)((long)plVar1 + lVar12 + -8);
      lVar11 = lVar12 + -8;
    } while (uVar9 == uVar10);
    if (uVar9 < uVar10) {
LAB_109de9430:
      return (ulong)(lVar12 == 0);
    }
  }
  else if ((int)uVar3 < 1) {
    return (ulong)(~uVar3 >> 0x1f);
  }
  return 2;
}



/* Entry: 109dedad0; end: 109dee267;  */

long * FUN_109dedad0(undefined8 param_1,long param_2,long param_3,undefined1 *param_4,
                    undefined8 param_5)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long *plVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  long lStack_c0;
  byte bStack_b4;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  byte bStack_74;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_2 + 8);
  puVar16 = *(undefined **)(lVar13 + 8);
  lVar14 = lVar13;
  if (puVar16 == &DAT_10e05ae6c) {
    lVar14 = *(long *)(lVar13 + 0x10);
  }
  lVar18 = param_2;
  if ((*(byte *)(lVar14 + 0x1c) & 7) != 1) {
    lVar15 = *(long *)(param_3 + 8);
    puVar17 = *(undefined **)(lVar15 + 8);
    lVar14 = lVar15;
    if (puVar17 == &DAT_10e05ae6c) {
      lVar14 = *(long *)(lVar15 + 0x10);
    }
    lVar18 = param_3;
    if ((*(byte *)(lVar14 + 0x1c) & 7) != 1) {
      lVar14 = lVar13;
      if (puVar16 == &DAT_10e05ae6c) {
        lVar14 = *(long *)(lVar13 + 0x10);
      }
      if ((*(byte *)(lVar14 + 0x1c) & 7) != 3) {
        lVar14 = lVar15;
        if (puVar17 == &DAT_10e05ae6c) {
          lVar14 = *(long *)(lVar15 + 0x10);
        }
        lVar18 = param_2;
        if ((*(byte *)(lVar14 + 0x1c) & 7) != 3) {
          lVar14 = lVar13;
          if (puVar16 == &DAT_10e05ae6c) {
            lVar14 = *(long *)(lVar13 + 0x10);
          }
          if ((*(byte *)(lVar14 + 0x1c) & 7) == 0) {
            lVar14 = lVar15;
            if (puVar17 == &DAT_10e05ae6c) {
              lVar14 = *(long *)(lVar15 + 0x10);
            }
            if ((*(byte *)(lVar14 + 0x1c) & 7) == 0) {
              lVar14 = lVar13;
              if (puVar16 == &DAT_10e05ae6c) {
                lVar14 = *(long *)(lVar13 + 0x10);
              }
              lVar18 = lVar15;
              if (puVar17 == &DAT_10e05ae6c) {
                lVar18 = *(long *)(lVar15 + 0x10);
              }
              if (((*(byte *)(lVar18 + 0x1c) ^ *(byte *)(lVar14 + 0x1c)) >> 3 & 1) != 0) {
                lVar14 = *(long *)(param_4 + 8);
                if (*(undefined **)(lVar14 + 8) == &DAT_10e05ae6c) {
                  lVar14 = *(long *)(lVar14 + 0x10);
                }
                FUN_109dee268(param_4,0,*(byte *)(lVar14 + 0x1c) >> 3 & 1,0);
                plVar19 = (long *)0x1;
                goto LAB_109dedba8;
              }
            }
          }
          if (puVar16 == &DAT_10e05ae6c) {
            lVar13 = *(long *)(lVar13 + 0x10);
          }
          lVar18 = param_2;
          if ((*(byte *)(lVar13 + 0x1c) & 7) != 0) {
            if (puVar17 == &DAT_10e05ae6c) {
              lVar15 = *(long *)(lVar15 + 0x10);
            }
            lVar18 = param_3;
            if ((*(byte *)(lVar15 + 0x1c) & 7) != 0) {
              FUN_109d32470(auStack_e8);
              FUN_109d32470(auStack_108,*(long *)(param_2 + 8) + 0x28);
              FUN_109d32470(auStack_128,*(long *)(param_3 + 8) + 8);
              FUN_109d32470(auStack_148,*(long *)(param_3 + 8) + 0x28);
              FUN_109d32470(&puStack_88,auStack_e8);
              plVar19 = &lStack_90;
              func_0x000109d32690(plVar19,auStack_130,param_5);
              bVar2 = bStack_74;
              if (puStack_88 == &DAT_10e05ae6c) {
                bVar2 = *(byte *)(lStack_80 + 0x1c);
              }
              if ((bVar2 & 6) == 0) {
                if ((bVar2 & 7) == 0) {
                  puVar10 = auStack_f0;
                  FUN_109ded9a0(puVar10,auStack_130);
                  FUN_109d328a8(&puStack_88,auStack_148);
                  plVar19 = &lStack_90;
                  func_0x000109d32690(plVar19,auStack_110,param_5);
                  if ((int)puVar10 == 2) {
                    plVar11 = &lStack_90;
                    func_0x000109d32690(plVar11,auStack_130,param_5);
                    uVar21 = (uint)plVar11;
                    plVar11 = &lStack_90;
                    func_0x000109d32690(plVar11,auStack_f0,param_5);
                    uVar3 = (uint)plVar11;
                  }
                  else {
                    plVar11 = &lStack_90;
                    func_0x000109d32690(plVar11,auStack_f0,param_5);
                    uVar21 = (uint)plVar11;
                    plVar11 = &lStack_90;
                    func_0x000109d32690(plVar11,auStack_130,param_5);
                    uVar3 = (uint)plVar11;
                  }
                  uVar3 = uVar3 | uVar21 | (uint)plVar19;
                  plVar19 = (long *)(ulong)uVar3;
                  if (puStack_88 == &DAT_10e05ae6c) {
                    bStack_74 = *(byte *)(lStack_80 + 0x1c);
                  }
                  if (((bStack_74 & 7) == 1) || ((bStack_74 & 7) == 0)) {
                    FUN_109d32568(*(long *)(param_4 + 8) + 8,&puStack_88);
                    FUN_109d32198(*(long *)(param_4 + 8) + 0x20,0);
                  }
                  else {
                    FUN_109d328a8(*(long *)(param_4 + 8) + 8,&puStack_88);
                    FUN_109d32470(auStack_a8,auStack_108);
                    puVar12 = auStack_b0;
                    func_0x000109d32690(puVar12,auStack_150,param_5);
                    if ((int)puVar10 == 2) {
                      FUN_109d328a8(*(long *)(param_4 + 8) + 0x28,auStack_e8);
                      lVar14 = *(long *)(param_4 + 8) + 0x20;
                      FUN_109d324f4(lVar14,&lStack_90,param_5);
                      uVar20 = (uint)lVar14;
                      lVar14 = *(long *)(param_4 + 8) + 0x20;
                      func_0x000109d32690(lVar14,auStack_130,param_5);
                      uVar22 = (uint)lVar14;
                      lVar14 = *(long *)(param_4 + 8) + 0x20;
                      func_0x000109d32690(lVar14,auStack_b0,param_5);
                      uVar21 = (uint)lVar14;
                    }
                    else {
                      FUN_109d328a8(*(long *)(param_4 + 8) + 0x28,auStack_128);
                      lVar14 = *(long *)(param_4 + 8) + 0x20;
                      FUN_109d324f4(lVar14,&lStack_90,param_5);
                      uVar20 = (uint)lVar14;
                      lVar14 = *(long *)(param_4 + 8) + 0x20;
                      func_0x000109d32690(lVar14,auStack_f0,param_5);
                      uVar22 = (uint)lVar14;
                      lVar14 = *(long *)(param_4 + 8) + 0x20;
                      func_0x000109d32690(lVar14,auStack_b0,param_5);
                      uVar21 = (uint)lVar14;
                    }
                    plVar19 = (long *)(ulong)((uint)puVar12 | uVar3 | uVar22 | uVar20 | uVar21);
                    FUN_109d32234(auStack_a8);
                  }
                }
                else {
                  FUN_109d32568(*(long *)(param_4 + 8) + 8,&puStack_88);
                  FUN_109d32198(*(long *)(param_4 + 8) + 0x20,0);
                }
              }
              else {
                FUN_109d32470(auStack_a8,auStack_e8);
                puVar4 = auStack_b0;
                FUN_109d324f4(puVar4,&lStack_90,param_5);
                FUN_109d32470(&puStack_c8,auStack_a8);
                puVar10 = auStack_d0;
                func_0x000109d32690(puVar10,auStack_130,param_5);
                puVar5 = auStack_b0;
                func_0x000109d32690(puVar5,&lStack_90,param_5);
                puVar6 = auStack_b0;
                FUN_109d324f4(puVar6,auStack_f0,param_5);
                FUN_109d324a0(auStack_b0);
                puVar12 = auStack_d0;
                func_0x000109d32690(puVar12,auStack_b0,param_5);
                puVar7 = auStack_d0;
                func_0x000109d32690(puVar7,auStack_110,param_5);
                puVar8 = auStack_d0;
                func_0x000109d32690(puVar8,auStack_150,param_5);
                if (puStack_c8 == &DAT_10e05ae6c) {
                  bStack_b4 = *(byte *)(lStack_c0 + 0x1c);
                }
                if (((bStack_b4 & 7) == 3) && ((bStack_b4 >> 3 & 1) == 0)) {
                  FUN_109d32568(*(long *)(param_4 + 8) + 8,&puStack_88);
                  FUN_109d32198(*(long *)(param_4 + 8) + 0x20,0);
                  plVar19 = (long *)0x0;
                }
                else {
                  FUN_109d328a8(*(long *)(param_4 + 8) + 8,&puStack_88);
                  uVar9 = *(undefined8 *)(param_4 + 8);
                  func_0x000109d32690(uVar9,auStack_d0,param_5);
                  uVar3 = (uint)puVar4 | (uint)puVar10 | (uint)puVar5 | (uint)puVar6 |
                          (uint)puVar12 | (uint)puVar7 | (uint)puVar8 | (uint)uVar9 | (uint)plVar19;
                  plVar19 = (long *)(ulong)uVar3;
                  lVar14 = *(long *)(param_4 + 8);
                  if (*(undefined **)(lVar14 + 8) == &DAT_10e05ae6c) {
                    bVar2 = *(byte *)(*(long *)(lVar14 + 0x10) + 0x1c);
                  }
                  else {
                    bVar2 = *(byte *)(lVar14 + 0x1c);
                  }
                  if (((bVar2 & 7) == 1) || ((bVar2 & 7) == 0)) {
                    FUN_109d32198(lVar14 + 0x20,0);
                  }
                  else {
                    FUN_109d32568(lVar14 + 0x28,&puStack_88);
                    lVar14 = *(long *)(param_4 + 8) + 0x20;
                    FUN_109d324f4(lVar14,*(long *)(param_4 + 8),param_5);
                    lVar13 = *(long *)(param_4 + 8) + 0x20;
                    func_0x000109d32690(lVar13,auStack_d0,param_5);
                    plVar19 = (long *)(ulong)((uint)lVar14 | (uint)lVar13 | uVar3);
                  }
                }
                FUN_109d32234(&puStack_c8);
                FUN_109d32234(auStack_a8);
              }
              FUN_109d32234(&puStack_88);
              FUN_109d32234(auStack_148);
              FUN_109d32234(auStack_128);
              FUN_109d32234(auStack_108);
              param_4 = auStack_e8;
              FUN_109d32234();
              goto LAB_109dedba8;
            }
          }
        }
      }
    }
  }
  FUN_109ded914(param_4,lVar18);
  plVar19 = (long *)0x0;
LAB_109dedba8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar19;
  }
  ___stack_chk_fail();
  FUN_109d32234(&puStack_88);
  FUN_109d32234(auStack_148);
  FUN_109d32234(auStack_128);
  FUN_109d32234(auStack_108);
  FUN_109d32234(auStack_e8);
  __Unwind_Resume();
  FUN_109d32518(*(undefined8 *)(param_4 + 8));
  lVar14 = *(long *)(param_4 + 8) + 0x20;
  if (*(undefined **)(*(long *)(param_4 + 8) + 0x28) == &DAT_10e05ae6c) {
    do {
      FUN_109d32198(*(undefined8 *)(lVar14 + 0x10),0);
      plVar19 = (long *)(lVar14 + 0x10);
      lVar14 = *plVar19 + 0x20;
    } while (*(undefined **)(*plVar19 + 0x28) == &DAT_10e05ae6c);
  }
  *(byte *)(lVar14 + 0x1c) = *(byte *)(lVar14 + 0x1c) & 0xf0 | 3;
  lVar13 = *(long *)(lVar14 + 8);
  iVar1 = *(int *)(lVar13 + 8);
  *(int *)(lVar14 + 0x18) = *(int *)(lVar13 + 4) + -1;
  if (iVar1 - 0x40U < 0xffffff80) {
    plVar19 = *(undefined8 **)(lVar14 + 0x10) + 1;
    **(undefined8 **)(lVar14 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(plVar19,(ulong)((iVar1 + 0x40U >> 6) - 1) << 3);
    return plVar19;
  }
  *(undefined8 *)(lVar14 + 0x10) = 0;
  return (long *)(lVar14 + 8);
}



/* Entry: 109dee268; end: 109dee297;  */

void FUN_109dee268(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  FUN_109d32518(*(undefined8 *)(param_1 + 8));
  lVar4 = *(long *)(param_1 + 8) + 0x20;
  if (*(undefined **)(*(long *)(param_1 + 8) + 0x28) == &DAT_10e05ae6c) {
    do {
      FUN_109d32198(*(undefined8 *)(lVar4 + 0x10),0);
      plVar1 = (long *)(lVar4 + 0x10);
      lVar4 = *plVar1 + 0x20;
    } while (*(undefined **)(*plVar1 + 0x28) == &DAT_10e05ae6c);
  }
  *(byte *)(lVar4 + 0x1c) = *(byte *)(lVar4 + 0x1c) & 0xf0 | 3;
  iVar2 = *(int *)(*(long *)(lVar4 + 8) + 8);
  *(int *)(lVar4 + 0x18) = *(int *)(*(long *)(lVar4 + 8) + 4) + -1;
  if (iVar2 - 0x40U < 0xffffff80) {
    puVar3 = *(undefined8 **)(lVar4 + 0x10);
    *puVar3 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(puVar3 + 1,(ulong)((iVar2 + 0x40U >> 6) - 1) << 3);
    return;
  }
  *(undefined8 *)(lVar4 + 0x10) = 0;
  return;
}



/* Entry: 109dee298; end: 109dee307;  */

long FUN_109dee298(long param_1)

{
  long lVar1;
  
  FUN_109d324a0(*(undefined8 *)(param_1 + 8));
  lVar1 = *(long *)(param_1 + 8) + 0x20;
  FUN_109d324a0(lVar1);
  FUN_109dedad0();
  FUN_109d324a0(*(undefined8 *)(param_1 + 8));
  FUN_109d324a0(*(long *)(param_1 + 8) + 0x20);
  return lVar1;
}



/* Entry: 109dee308; end: 109dee863;  */

undefined1 * FUN_109dee308(undefined **param_1,undefined **param_2,undefined1 *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined1 *unaff_x22;
  long lStack_210;
  uint uStack_208;
  undefined *puStack_200;
  undefined *apuStack_1f8 [4];
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [24];
  long lStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined **ppuStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  uint uStack_178;
  uint uStack_174;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  long lStack_140;
  byte bStack_134;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  long lStack_100;
  byte bStack_f4;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined *apuStack_88 [3];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1[1];
  puVar14 = *(undefined **)(puVar3 + 8);
  puVar11 = puVar3;
  if (puVar14 == &DAT_10e05ae6c) {
    puVar11 = *(undefined **)(puVar3 + 0x10);
  }
  ppuVar9 = param_1;
  puVar10 = param_3;
  if ((puVar11[0x1c] & 7) == 1) {
LAB_109dee3b4:
    FUN_109ded914(param_1,ppuVar9);
  }
  else {
    puVar12 = param_2[1];
    puVar13 = *(undefined **)(puVar12 + 8);
    puVar11 = puVar12;
    if (puVar13 == &DAT_10e05ae6c) {
      puVar11 = *(undefined **)(puVar12 + 0x10);
    }
    ppuVar9 = param_2;
    if ((puVar11[0x1c] & 7) == 1) goto LAB_109dee3b4;
    puVar11 = puVar3;
    if (puVar14 == &DAT_10e05ae6c) {
      puVar11 = *(undefined **)(puVar3 + 0x10);
    }
    if ((puVar11[0x1c] & 7) != 3) {
LAB_109dee434:
      puVar11 = puVar3;
      if (puVar14 == &DAT_10e05ae6c) {
        puVar11 = *(undefined **)(puVar3 + 0x10);
      }
      if ((puVar11[0x1c] & 7) == 0) {
        puVar11 = puVar12;
        if (puVar13 == &DAT_10e05ae6c) {
          puVar11 = *(undefined **)(puVar12 + 0x10);
        }
        if ((puVar11[0x1c] & 7) == 3) goto LAB_109dee470;
      }
      if (puVar14 == &DAT_10e05ae6c) {
        bVar1 = *(byte *)(*(long *)(puVar3 + 0x10) + 0x1c);
      }
      else {
        bVar1 = puVar3[0x1c];
      }
      ppuVar9 = param_1;
      if (((bVar1 & 7) != 3) && ((bVar1 & 7) != 0)) {
        if (puVar13 == &DAT_10e05ae6c) {
          puVar12 = *(undefined **)(puVar12 + 0x10);
        }
        ppuVar9 = param_2;
        if (((puVar12[0x1c] & 7) != 3) && ((puVar12[0x1c] & 7) != 0)) {
          FUN_109d32470(apuStack_88);
          FUN_109d32470(auStack_a8,param_1[1] + 0x28);
          FUN_109d32470(auStack_c8,param_2[1] + 8);
          FUN_109d32470(auStack_e8,param_2[1] + 0x28);
          FUN_109d32470(&puStack_108,apuStack_88);
          puVar15 = auStack_110;
          func_0x000109d326c8(puVar15,auStack_d0,param_3);
          if (puStack_108 == &DAT_10e05ae6c) {
            bStack_f4 = *(byte *)(lStack_100 + 0x1c);
          }
          if (((bStack_f4 & 6) == 0) || ((bStack_f4 & 7) == 3)) {
            FUN_109d328a8(param_1[1] + 8,&puStack_108);
            ppuVar9 = (undefined **)0x0;
            FUN_109d32198(param_1[1] + 0x20,0);
          }
          else {
            FUN_109d32470(auStack_128,apuStack_88);
            FUN_109d324a0(auStack_110);
            puVar10 = auStack_130;
            FUN_109d32830(puVar10,auStack_d0,auStack_110,param_3);
            FUN_109d324a0(auStack_110);
            FUN_109d32470(&puStack_148,apuStack_88);
            uStack_174 = (uint)puVar10;
            puVar10 = auStack_150;
            func_0x000109d326c8(puVar10,auStack_f0,param_3);
            uStack_178 = (uint)puVar10;
            FUN_109d32470(auStack_168,auStack_a8);
            puVar4 = auStack_170;
            func_0x000109d326c8(puVar4,auStack_d0,param_3);
            puVar5 = auStack_150;
            func_0x000109d32690(puVar5,auStack_170,param_3);
            puVar6 = auStack_130;
            func_0x000109d32690(puVar6,auStack_150,param_3);
            FUN_109d32234(auStack_168);
            FUN_109d32234(&puStack_148);
            FUN_109d32470(&puStack_148,&puStack_108);
            puVar7 = auStack_150;
            puVar10 = param_3;
            func_0x000109d32690(puVar7,auStack_130,param_3);
            FUN_109d328a8(param_1[1] + 8,&puStack_148);
            uVar2 = uStack_174 | uStack_178 | (uint)puVar4 | (uint)puVar5 |
                    (uint)puVar6 | (uint)puVar7 | (uint)puVar15;
            if (puStack_148 == &DAT_10e05ae6c) {
              bStack_134 = *(byte *)(lStack_140 + 0x1c);
            }
            if (((bStack_134 & 7) == 1) || ((bStack_134 & 7) == 0)) {
              ppuVar9 = (undefined **)0x0;
              FUN_109d32198(param_1[1] + 0x20,0);
            }
            else {
              puVar10 = auStack_110;
              FUN_109d324f4(puVar10,auStack_150,param_3);
              puVar15 = auStack_110;
              func_0x000109d32690(puVar15,auStack_130,param_3);
              ppuVar9 = &puStack_108;
              FUN_109d328a8(param_1[1] + 0x28,ppuVar9);
              uVar2 = (uint)puVar10 | (uint)puVar15 | uVar2;
              puVar10 = param_3;
              param_3 = puVar15;
            }
            puVar15 = (undefined1 *)(ulong)uVar2;
            FUN_109d32234(&puStack_148);
            FUN_109d32234(auStack_128);
          }
          unaff_x22 = auStack_110;
          FUN_109d32234(&puStack_108);
          FUN_109d32234(auStack_e8);
          FUN_109d32234(auStack_c8);
          FUN_109d32234(auStack_a8);
          param_1 = apuStack_88;
          FUN_109d32234();
          goto LAB_109dee3bc;
        }
      }
      goto LAB_109dee3b4;
    }
    puVar11 = puVar12;
    if (puVar13 == &DAT_10e05ae6c) {
      puVar11 = *(undefined **)(puVar12 + 0x10);
    }
    if ((puVar11[0x1c] & 7) != 0) goto LAB_109dee434;
LAB_109dee470:
    puVar10 = (undefined1 *)0x0;
    FUN_109d32518(puVar3,0,0,0);
    param_1 = (undefined **)(param_1[1] + 0x20);
    ppuVar9 = (undefined **)0x0;
    FUN_109d32198(param_1,0);
  }
  puVar15 = (undefined1 *)0x0;
LAB_109dee3bc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar15;
  }
  ___stack_chk_fail();
  FUN_109d32234(auStack_128);
  FUN_109d32234(&puStack_108);
  FUN_109d32234(auStack_e8);
  FUN_109d32234(auStack_c8);
  FUN_109d32234(auStack_a8);
  FUN_109d32234(apuStack_88);
  ppuVar8 = param_1;
  __Unwind_Resume();
  pcStack_188 = FUN_109dee864;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1b0 = unaff_x22;
  puStack_1a8 = puVar15;
  puStack_1a0 = param_3;
  ppuStack_198 = param_1;
  puStack_190 = &stack0xfffffffffffffff0;
  FUN_109deea4c(&puStack_200);
  FUN_109dece44(auStack_1d0,&puStack_200);
  if ((0x40 < (uint)apuStack_1f8[0]) && (puStack_200 != (undefined *)0x0)) {
    __ZdaPv();
  }
  FUN_109deea4c(&lStack_210,ppuVar9);
  FUN_109dece44(apuStack_1f8,&lStack_210);
  puVar15 = auStack_1d8;
  func_0x000109d326e8(puVar15,&puStack_200,puVar10);
  FUN_109d32234(apuStack_1f8);
  if ((0x40 < uStack_208) && (lStack_210 != 0)) {
    __ZdaPv();
  }
  FUN_109d323e4(&lStack_210,auStack_1d8);
  FUN_109ded6cc(&puStack_200,&DAT_10e05ae6c,&lStack_210);
  puVar11 = apuStack_1f8[0];
  if (&puStack_200 == ppuVar8) {
    apuStack_1f8[0] = (undefined *)0x0;
    if (puVar11 != (undefined *)0x0) {
      func_0x000109d3229c((ulong)&puStack_200 | 8);
    }
  }
  else {
    puVar11 = ppuVar8[1];
    ppuVar8[1] = (undefined *)0x0;
    if (puVar11 != (undefined *)0x0) {
      func_0x000109d3229c();
    }
    ppuVar8[1] = apuStack_1f8[0];
    *ppuVar8 = puStack_200;
    puStack_200 = &UNK_10e05aebc;
    apuStack_1f8[0] = (undefined *)0x0;
  }
  if ((0x40 < uStack_208) && (lStack_210 != 0)) {
    __ZdaPv();
  }
  puVar10 = auStack_1d0;
  FUN_109d32234(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
    ___stack_chk_fail();
    if ((0x40 < uStack_208) && (lStack_210 != 0)) {
      __ZdaPv();
    }
    FUN_109d32234(auStack_1d0);
    do {
      do {
        __Unwind_Resume(puVar10);
      } while ((uint)apuStack_1f8[0] < 0x41);
      if (puStack_200 != (undefined *)0x0) {
        __ZdaPv();
      }
    } while( true );
  }
  return puVar15;
}



/* Entry: 109dee864; end: 109deea4b;  */

undefined1 * FUN_109dee864(undefined **param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lStack_90;
  uint uStack_88;
  undefined *puStack_80;
  undefined *apuStack_78 [4];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109deea4c(&puStack_80);
  FUN_109dece44(auStack_50,&puStack_80);
  if ((0x40 < (uint)apuStack_78[0]) && (puStack_80 != (undefined *)0x0)) {
    __ZdaPv();
  }
  FUN_109deea4c(&lStack_90,param_2);
  FUN_109dece44(apuStack_78,&lStack_90);
  puVar1 = auStack_58;
  func_0x000109d326e8(puVar1,&puStack_80,param_3);
  FUN_109d32234(apuStack_78);
  if ((0x40 < uStack_88) && (lStack_90 != 0)) {
    __ZdaPv();
  }
  FUN_109d323e4(&lStack_90,auStack_58);
  FUN_109ded6cc(&puStack_80,&DAT_10e05ae6c,&lStack_90);
  puVar3 = apuStack_78[0];
  if (&puStack_80 == param_1) {
    apuStack_78[0] = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      func_0x000109d3229c((ulong)&puStack_80 | 8);
    }
  }
  else {
    puVar3 = param_1[1];
    param_1[1] = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      func_0x000109d3229c();
    }
    param_1[1] = apuStack_78[0];
    *param_1 = puStack_80;
    puStack_80 = &UNK_10e05aebc;
    apuStack_78[0] = (undefined *)0x0;
  }
  if ((0x40 < uStack_88) && (lStack_90 != 0)) {
    __ZdaPv();
  }
  puVar2 = auStack_50;
  FUN_109d32234(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  if ((0x40 < uStack_88) && (lStack_90 != 0)) {
    __ZdaPv();
  }
  FUN_109d32234(auStack_50);
  do {
    do {
      __Unwind_Resume(puVar2);
    } while ((uint)apuStack_78[0] < 0x41);
    if (puStack_80 != (undefined *)0x0) {
      __ZdaPv();
    }
  } while( true );
}



/* Entry: 109deea4c; end: 109deeb63;  */

undefined ** FUN_109deea4c(undefined **param_1,long param_2)

{
  undefined8 ***pppuVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined8 **ppuVar4;
  undefined *puVar5;
  long lStack_100;
  uint uStack_f8;
  undefined *puStack_f0;
  undefined *apuStack_e8 [4];
  undefined *puStack_c8;
  undefined1 auStack_c0 [24];
  long lStack_a8;
  undefined8 *puStack_68;
  uint uStack_60;
  undefined8 **ppuStack_58;
  uint uStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d323e4(&ppuStack_58,*(long *)(param_2 + 8));
  pppuVar1 = &ppuStack_58;
  if (0x40 < uStack_50) {
    pppuVar1 = (undefined8 ***)ppuStack_58;
  }
  puStack_48 = *pppuVar1;
  FUN_109d323e4(&puStack_68,*(long *)(param_2 + 8) + 0x20);
  if (uStack_60 < 0x41) {
    puStack_40 = puStack_68;
  }
  else {
    puStack_40 = (undefined8 *)*puStack_68;
    __ZdaPv();
  }
  if ((0x40 < uStack_50) && ((undefined8 ***)ppuStack_58 != (undefined8 ***)0x0)) {
    __ZdaPv();
  }
  *(undefined4 *)(param_1 + 1) = 0x80;
  ppuVar4 = &puStack_48;
  func_0x000109defe68(param_1,ppuVar4,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((0x40 < uStack_50) && ((undefined8 ***)ppuStack_58 != (undefined8 ***)0x0)) {
    __ZdaPv();
  }
  __Unwind_Resume();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109deea4c(&puStack_f0);
  FUN_109dece44(auStack_c0,&puStack_f0);
  if ((0x40 < (uint)apuStack_e8[0]) && (puStack_f0 != (undefined *)0x0)) {
    __ZdaPv();
  }
  FUN_109deea4c(&lStack_100,ppuVar4);
  FUN_109dece44(apuStack_e8,&lStack_100);
  ppuVar2 = &puStack_c8;
  func_0x000109d32708(ppuVar2,&puStack_f0);
  FUN_109d32234(apuStack_e8);
  if ((0x40 < uStack_f8) && (lStack_100 != 0)) {
    __ZdaPv();
  }
  FUN_109d323e4(&lStack_100,&puStack_c8);
  FUN_109ded6cc(&puStack_f0,&DAT_10e05ae6c,&lStack_100);
  puVar5 = apuStack_e8[0];
  if (&puStack_f0 == param_1) {
    apuStack_e8[0] = (undefined *)0x0;
    if (puVar5 != (undefined *)0x0) {
      func_0x000109d3229c((ulong)&puStack_f0 | 8);
    }
  }
  else {
    puVar5 = param_1[1];
    param_1[1] = (undefined *)0x0;
    if (puVar5 != (undefined *)0x0) {
      func_0x000109d3229c();
    }
    param_1[1] = apuStack_e8[0];
    *param_1 = puStack_f0;
    puStack_f0 = &UNK_10e05aebc;
    apuStack_e8[0] = (undefined *)0x0;
  }
  if ((0x40 < uStack_f8) && (lStack_100 != 0)) {
    __ZdaPv();
  }
  puVar3 = auStack_c0;
  FUN_109d32234(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  if ((0x40 < uStack_f8) && (lStack_100 != 0)) {
    __ZdaPv();
  }
  FUN_109d32234(auStack_c0);
  do {
    do {
      __Unwind_Resume(puVar3);
    } while ((uint)apuStack_e8[0] < 0x41);
    if (puStack_f0 != (undefined *)0x0) {
      __ZdaPv();
    }
  } while( true );
}



/* Entry: 109deeb64; end: 109deed43;  */

undefined1 * FUN_109deeb64(undefined **param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lStack_90;
  uint uStack_88;
  undefined *puStack_80;
  undefined *apuStack_78 [4];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109deea4c(&puStack_80);
  FUN_109dece44(auStack_50,&puStack_80);
  if ((0x40 < (uint)apuStack_78[0]) && (puStack_80 != (undefined *)0x0)) {
    __ZdaPv();
  }
  FUN_109deea4c(&lStack_90,param_2);
  FUN_109dece44(apuStack_78,&lStack_90);
  puVar1 = auStack_58;
  func_0x000109d32708(puVar1,&puStack_80);
  FUN_109d32234(apuStack_78);
  if ((0x40 < uStack_88) && (lStack_90 != 0)) {
    __ZdaPv();
  }
  FUN_109d323e4(&lStack_90,auStack_58);
  FUN_109ded6cc(&puStack_80,&DAT_10e05ae6c,&lStack_90);
  puVar3 = apuStack_78[0];
  if (&puStack_80 == param_1) {
    apuStack_78[0] = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      func_0x000109d3229c((ulong)&puStack_80 | 8);
    }
  }
  else {
    puVar3 = param_1[1];
    param_1[1] = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      func_0x000109d3229c();
    }
    param_1[1] = apuStack_78[0];
    *param_1 = puStack_80;
    puStack_80 = &UNK_10e05aebc;
    apuStack_78[0] = (undefined *)0x0;
  }
  if ((0x40 < uStack_88) && (lStack_90 != 0)) {
    __ZdaPv();
  }
  puVar2 = auStack_50;
  FUN_109d32234(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  if ((0x40 < uStack_88) && (lStack_90 != 0)) {
    __ZdaPv();
  }
  FUN_109d32234(auStack_50);
  do {
    do {
      __Unwind_Resume(puVar2);
    } while ((uint)apuStack_78[0] < 0x41);
    if (puStack_80 != (undefined *)0x0) {
      __ZdaPv();
    }
  } while( true );
}



/* Entry: 109deed44; end: 109deefbf;  */

undefined1 *
FUN_109deed44(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lStack_d0;
  uint uStack_c8;
  long lStack_c0;
  uint uStack_b8;
  long lStack_b0;
  uint auStack_a8 [6];
  undefined *puStack_90;
  undefined *apuStack_88 [4];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109deea4c(&puStack_90);
  FUN_109dece44(auStack_60,&puStack_90);
  if ((0x40 < (uint)apuStack_88[0]) && (puStack_90 != (undefined *)0x0)) {
    __ZdaPv();
  }
  FUN_109deea4c(&lStack_c0,param_2);
  FUN_109dece44(apuStack_88,&lStack_c0);
  FUN_109deea4c(&lStack_d0,param_3);
  FUN_109dece44(auStack_a8,&lStack_d0);
  puVar1 = auStack_68;
  FUN_109d32830(puVar1,&puStack_90,&lStack_b0,param_4);
  FUN_109d32234(auStack_a8);
  if ((0x40 < uStack_c8) && (lStack_d0 != 0)) {
    __ZdaPv();
  }
  FUN_109d32234(apuStack_88);
  if ((0x40 < uStack_b8) && (lStack_c0 != 0)) {
    __ZdaPv();
  }
  FUN_109d323e4(&lStack_b0,auStack_68);
  FUN_109ded6cc(&puStack_90,&DAT_10e05ae6c,&lStack_b0);
  puVar3 = apuStack_88[0];
  if (&puStack_90 == param_1) {
    apuStack_88[0] = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      func_0x000109d3229c((ulong)&puStack_90 | 8);
    }
  }
  else {
    puVar3 = param_1[1];
    param_1[1] = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      func_0x000109d3229c();
    }
    param_1[1] = apuStack_88[0];
    *param_1 = puStack_90;
    puStack_90 = &UNK_10e05aebc;
    apuStack_88[0] = (undefined *)0x0;
  }
  if ((0x40 < auStack_a8[0]) && (lStack_b0 != 0)) {
    __ZdaPv();
  }
  puVar2 = auStack_60;
  FUN_109d32234(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if ((0x40 < auStack_a8[0]) && (lStack_b0 != 0)) {
      __ZdaPv();
    }
    FUN_109d32234(auStack_60);
    do {
      do {
        do {
          __Unwind_Resume(puVar2);
        } while ((uint)apuStack_88[0] < 0x41);
      } while (puStack_90 == (undefined *)0x0);
      __ZdaPv();
    } while( true );
  }
  return puVar1;
}



/* Entry: 109deefc0; end: 109def13f;  */

void FUN_109deefc0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = param_1[1];
    FUN_109d32888(uVar3,*(undefined8 *)(param_2 + 8));
    if ((int)uVar3 != 1) {
      return;
    }
    plVar1 = param_1 + 1;
    plVar2 = (long *)(param_2 + 8);
    param_1 = (undefined8 *)(*plVar1 + 0x28);
    param_2 = *plVar2 + 0x28;
  } while ((undefined *)*param_1 == &DAT_10e05ae6c);
                    /* WARNING: Could not recover jumptable at 0x000109de7db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e05adb8)
                          [(*(byte *)(*plVar1 + 0x3c) & 7) * 4 + (*(byte *)(*plVar2 + 0x3c) & 7)] *
             4 + 0x109de7db8))(param_1,3);
  return;
}



/* Entry: 109def140; end: 109def15b;  */

void FUN_109def140(undefined1 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined8 *puVar10;
  ulong *extraout_x8_01;
  ulong uVar11;
  long *plVar12;
  ulong *unaff_x19;
  int *piVar13;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar14;
  
  while (puVar8 = (ulong *)(param_1 + 8), (undefined *)*puVar8 == &DAT_10e05ae6c) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
      FUN_109d2fb48((undefined1 *)((long)register0x00000008 + -0xa8));
      uVar9 = *(ulong *)((long)register0x00000008 + -0x30) ^ *puVar8 >> 0x20;
      uVar11 = ((*puVar8 & 0xffffffff) * 8 + 8 ^ uVar9) * -0x622015f714c7d297;
      uVar9 = (uVar9 ^ uVar11 >> 0x2f ^ uVar11) * -0x622015f714c7d297;
      param_1 = (undefined1 *)((uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297);
    }
    else {
      FUN_109def140();
      *(long *)((long)register0x00000008 + -0xb0) = lVar7;
      lVar7 = *(long *)(param_1 + 0x10) + 0x20;
      FUN_109def140();
      *(long *)((long)register0x00000008 + -0xb8) = lVar7;
      puVar8 = (ulong *)((long)register0x00000008 + -0xa8);
      FUN_109d2fb48((undefined1 *)((long)register0x00000008 + -0xa8));
      param_1 = (undefined1 *)((long)register0x00000008 + -0xa8);
      FUN_109da20e0(param_1,0,(undefined1 *)((long)register0x00000008 + -0xa8),
                    (undefined1 *)((long)register0x00000008 + -0x68),
                    (undefined1 *)((long)register0x00000008 + -0xb0),
                    (undefined1 *)((long)register0x00000008 + -0xb8));
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28)) {
      return;
    }
    unaff_x30 = FUN_109def140;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = puVar8;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  bVar3 = param_1[0x1c];
  bVar4 = bVar3 & 7;
  bVar5 = bVar3 >> 3 & 1;
  if ((bVar3 & 6) == 0 || bVar4 == 3) {
    bVar3 = 0;
    if (bVar4 != 1) {
      bVar3 = bVar5;
    }
    *(byte *)((long)register0x00000008 + -200) = bVar3;
    plVar12 = (long *)*puVar8;
    piVar13 = (int *)((long)register0x00000008 + -0xb8);
    FUN_109d2fb48((undefined1 *)((long)register0x00000008 + -0xb8));
    *(byte *)((long)register0x00000008 + -0xb8) = bVar4;
    plVar6 = (long *)((long)register0x00000008 + -0xb8);
    FUN_109defbfc(plVar6,0,(ulong)piVar13 | 1,(undefined1 *)((long)register0x00000008 + -0x78),
                  (undefined1 *)((long)register0x00000008 + -200),plVar12 + 1);
  }
  else {
    *(byte *)((long)register0x00000008 + -0xb9) = bVar5;
    plVar12 = (long *)(param_1 + 0x10);
    piVar13 = (int *)(*puVar8 + 8);
    plVar6 = (long *)*plVar12;
    if (0xffffff7f < *piVar13 - 0x40U) {
      plVar6 = plVar12;
    }
    FUN_109d7e498(plVar6,plVar6 + (*piVar13 + 0x40U >> 6));
    *(long **)((long)register0x00000008 + -200) = plVar6;
    FUN_109d2fb48((undefined1 *)((long)register0x00000008 + -0xb8));
    *(byte *)((long)register0x00000008 + -0xb8) = bVar4;
    plVar6 = (long *)((long)register0x00000008 + -0xb8);
    FUN_109defc74(plVar6,0,(ulong)((long)register0x00000008 + -0xb8) | 1,
                  (undefined1 *)((long)register0x00000008 + -0x78),
                  (undefined1 *)((long)register0x00000008 + -0xb9),piVar13,param_1 + 0x18,
                  (undefined1 *)((long)register0x00000008 + -200));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 **)((long)register0x00000008 + -0xe0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0xd8) = FUN_109dec398;
  *(undefined8 *)((long)register0x00000008 + -0xe8) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  bVar4 = *(byte *)((long)plVar6 + 0x14);
  if ((bVar4 & 6) == 0 || (bVar4 & 7) == 3) {
    if ((bVar4 & 7) == 3) {
      uVar11 = 0;
      uVar9 = 0;
    }
    else {
      if ((bVar4 & 7) == 0) {
        uVar11 = 0x8000000000000000;
      }
      else {
        puVar8 = (ulong *)(plVar6 + 1);
        if (*(int *)(*plVar6 + 8) - 0x40U < 0xffffff80) {
          puVar8 = (ulong *)*puVar8;
        }
        uVar11 = *puVar8;
      }
      uVar9 = 0x7fff;
    }
  }
  else {
    uVar1 = (int)plVar6[2] + 0x3fff;
    puVar8 = (ulong *)(plVar6 + 1);
    if (*(int *)(*plVar6 + 8) - 0x40U < 0xffffff80) {
      puVar8 = (ulong *)*puVar8;
    }
    uVar11 = *puVar8;
    uVar9 = uVar11 >> 0x3f;
    if (uVar1 != 1) {
      uVar9 = (ulong)(uVar1 & 0x7fff);
    }
  }
  *(ulong *)((long)register0x00000008 + -0xf8) = uVar11;
  *(ulong *)((long)register0x00000008 + -0xf0) = uVar9 | ((ulong)(bVar4 >> 3) & 1) << 0xf;
  *(undefined4 *)(extraout_x8 + 1) = 0x50;
  plVar6 = extraout_x8;
  func_0x000109defe68(extraout_x8,(undefined1 *)((long)register0x00000008 + -0xf8),2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xe8)) {
    return;
  }
  ___stack_chk_fail();
  *(int **)((long)register0x00000008 + -0x120) = piVar13;
  *(long **)((long)register0x00000008 + -0x118) = plVar12;
  *(undefined1 **)((long)register0x00000008 + -0x110) =
       (undefined1 *)((long)register0x00000008 + -0xe0);
  *(code **)((long)register0x00000008 + -0x108) = FUN_109dec498;
  *(undefined8 *)((long)register0x00000008 + -0x128) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (undefined8 *)*plVar6;
  uVar2 = *(undefined4 *)(puVar10 + 2);
  uVar14 = *puVar10;
  *(undefined8 *)((long)register0x00000008 + -0x148) = puVar10[1];
  *(undefined8 *)((long)register0x00000008 + -0x150) = uVar14;
  *(undefined4 *)((long)register0x00000008 + -0x140) = uVar2;
  *(undefined4 *)((long)register0x00000008 + -0x14c) = 0xfffffc02;
  FUN_109de8340((undefined1 *)((long)register0x00000008 + -0x168),plVar6);
  FUN_109de8868((undefined1 *)((long)register0x00000008 + -0x168),
                (undefined1 *)((long)register0x00000008 + -0x150),1,
                (undefined1 *)((long)register0x00000008 + -0x139));
  FUN_109de8340((undefined1 *)((long)register0x00000008 + -0x180),
                (undefined1 *)((long)register0x00000008 + -0x168));
  FUN_109de8868((undefined1 *)((long)register0x00000008 + -0x180),&DAT_10e05ae44,1,
                (undefined1 *)((long)register0x00000008 + -0x139));
  FUN_109dec730((undefined1 *)((long)register0x00000008 + -0x198),
                (undefined1 *)((long)register0x00000008 + -0x180));
  if (*(uint *)((long)register0x00000008 + -400) < 0x41) {
    *(undefined8 *)((long)register0x00000008 + -0x138) =
         *(undefined8 *)((long)register0x00000008 + -0x198);
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x138) =
         **(undefined8 **)((long)register0x00000008 + -0x198);
    __ZdaPv();
  }
  if ((((*(byte *)((long)register0x00000008 + -0x16c) & 6) == 0) ||
      ((*(byte *)((long)register0x00000008 + -0x16c) & 7) == 3)) ||
     ((*(byte *)((long)register0x00000008 + -0x139) & 1) == 0)) {
    *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
  }
  else {
    FUN_109de8868((undefined1 *)((long)register0x00000008 + -0x180),
                  (undefined1 *)((long)register0x00000008 + -0x150),1,
                  (undefined1 *)((long)register0x00000008 + -0x139));
    FUN_109de8340((undefined1 *)((long)register0x00000008 + -0x198),
                  (undefined1 *)((long)register0x00000008 + -0x168));
    FUN_109de9ad8((undefined1 *)((long)register0x00000008 + -0x198),
                  (undefined1 *)((long)register0x00000008 + -0x180),1,1);
    FUN_109de8868((undefined1 *)((long)register0x00000008 + -0x198),&DAT_10e05ae44,1,
                  (undefined1 *)((long)register0x00000008 + -0x139));
    FUN_109dec730((undefined1 *)((long)register0x00000008 + -0x1a8),
                  (undefined1 *)((long)register0x00000008 + -0x198));
    if (*(uint *)((long)register0x00000008 + -0x1a0) < 0x41) {
      *(undefined8 *)((long)register0x00000008 + -0x130) =
           *(undefined8 *)((long)register0x00000008 + -0x1a8);
    }
    else {
      *(undefined8 *)((long)register0x00000008 + -0x130) =
           **(undefined8 **)((long)register0x00000008 + -0x1a8);
      __ZdaPv();
    }
    if ((*(int *)(*(long *)((long)register0x00000008 + -0x198) + 8) - 0x40U < 0xffffff80) &&
       (*(long *)((long)register0x00000008 + -400) != 0)) {
      __ZdaPv();
    }
  }
  *(undefined4 *)(extraout_x8_00 + 1) = 0x80;
  plVar6 = extraout_x8_00;
  func_0x000109defe68(extraout_x8_00,(undefined1 *)((long)register0x00000008 + -0x138),2);
  if ((*(int *)(*(long *)((long)register0x00000008 + -0x180) + 8) - 0x40U < 0xffffff80) &&
     (plVar6 = *(long **)((long)register0x00000008 + -0x178), plVar6 != (long *)0x0)) {
    __ZdaPv();
  }
  if ((*(int *)(*(long *)((long)register0x00000008 + -0x168) + 8) - 0x40U < 0xffffff80) &&
     (plVar6 = *(long **)((long)register0x00000008 + -0x160), plVar6 != (long *)0x0)) {
    __ZdaPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x128)) {
    return;
  }
  ___stack_chk_fail();
  if ((*(int *)(*(long *)((long)register0x00000008 + -0x198) + 8) - 0x40U < 0xffffff80) &&
     (*(long *)((long)register0x00000008 + -400) != 0)) {
    __ZdaPv();
  }
  if ((*(int *)(*(long *)((long)register0x00000008 + -0x180) + 8) - 0x40U < 0xffffff80) &&
     (*(long *)((long)register0x00000008 + -0x178) != 0)) {
    __ZdaPv();
  }
  if ((*(int *)(*(long *)((long)register0x00000008 + -0x168) + 8) - 0x40U < 0xffffff80) &&
     (*(long *)((long)register0x00000008 + -0x160) != 0)) {
    __ZdaPv();
  }
  __Unwind_Resume();
  bVar4 = *(byte *)((long)plVar6 + 0x14);
  if ((bVar4 & 6) == 0 || (bVar4 & 7) == 3) {
    if ((bVar4 & 7) == 3) {
      uVar11 = 0;
      uVar9 = 0;
    }
    else {
      if ((bVar4 & 7) == 0) {
        uVar11 = 0;
      }
      else {
        puVar8 = (ulong *)(plVar6 + 1);
        if (*(int *)(*plVar6 + 8) - 0x40U < 0xffffff80) {
          puVar8 = (ulong *)*puVar8;
        }
        uVar11 = *puVar8;
      }
      uVar9 = 0x7ff;
    }
  }
  else {
    uVar1 = (int)plVar6[2] + 0x3ff;
    puVar8 = (ulong *)(plVar6 + 1);
    if (*(int *)(*plVar6 + 8) - 0x40U < 0xffffff80) {
      puVar8 = (ulong *)*puVar8;
    }
    uVar11 = *puVar8;
    uVar9 = (ulong)uVar1;
    if (uVar1 == 1) {
      uVar9 = uVar11 >> 0x34 & 1;
    }
  }
  *(undefined4 *)(extraout_x8_01 + 1) = 0x40;
  *extraout_x8_01 = ((ulong)bVar4 & 8) << 0x3c | (uVar9 & 0x7ff) << 0x34 | uVar11 & 0xfffffffffffff;
  uVar1 = (uint)extraout_x8_01[1];
  puVar8 = extraout_x8_01;
  if (uVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0xffffffffffffffff >> ((ulong)-uVar1 & 0x3f);
    if (0x40 < uVar1) {
      puVar8 = (ulong *)(*extraout_x8_01 + (ulong)((int)((ulong)uVar1 + 0x3f >> 6) - 1) * 8);
    }
  }
  *puVar8 = *puVar8 & uVar9;
  return;
}



/* Entry: 109def15c; end: 109def2eb;  */

/* WARNING: Possible PIC construction at 0x000109deaad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109deb8fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109deaad8) */
/* WARNING: Removing unreachable block (ram,0x000109deab28) */
/* WARNING: Removing unreachable block (ram,0x000109deac54) */
/* WARNING: Removing unreachable block (ram,0x000109deab34) */
/* WARNING: Removing unreachable block (ram,0x000109deab5c) */
/* WARNING: Removing unreachable block (ram,0x000109deab80) */
/* WARNING: Removing unreachable block (ram,0x000109deab8c) */
/* WARNING: Removing unreachable block (ram,0x000109deabb4) */
/* WARNING: Removing unreachable block (ram,0x000109deabb8) */
/* WARNING: Removing unreachable block (ram,0x000109deabd0) */
/* WARNING: Removing unreachable block (ram,0x000109deac0c) */
/* WARNING: Removing unreachable block (ram,0x000109deabdc) */
/* WARNING: Removing unreachable block (ram,0x000109deabe8) */
/* WARNING: Removing unreachable block (ram,0x000109deabf4) */
/* WARNING: Removing unreachable block (ram,0x000109deac18) */
/* WARNING: Removing unreachable block (ram,0x000109deac34) */
/* WARNING: Removing unreachable block (ram,0x000109deac38) */
/* WARNING: Removing unreachable block (ram,0x000109deac28) */
/* WARNING: Removing unreachable block (ram,0x000109deac2c) */
/* WARNING: Removing unreachable block (ram,0x000109deac3c) */
/* WARNING: Removing unreachable block (ram,0x000109deabfc) */
/* WARNING: Removing unreachable block (ram,0x000109deac08) */
/* WARNING: Removing unreachable block (ram,0x000109deadbc) */
/* WARNING: Removing unreachable block (ram,0x000109deabc4) */
/* WARNING: Removing unreachable block (ram,0x000109deac40) */
/* WARNING: Removing unreachable block (ram,0x000109deab94) */
/* WARNING: Removing unreachable block (ram,0x000109deab68) */
/* WARNING: Removing unreachable block (ram,0x000109dead74) */
/* WARNING: Removing unreachable block (ram,0x000109deab70) */
/* WARNING: Removing unreachable block (ram,0x000109deac48) */
/* WARNING: Removing unreachable block (ram,0x000109deac50) */
/* WARNING: Removing unreachable block (ram,0x000109deac5c) */
/* WARNING: Removing unreachable block (ram,0x000109deacdc) */
/* WARNING: Removing unreachable block (ram,0x000109deac64) */
/* WARNING: Removing unreachable block (ram,0x000109dead28) */
/* WARNING: Removing unreachable block (ram,0x000109deac74) */
/* WARNING: Removing unreachable block (ram,0x000109deae00) */
/* WARNING: Removing unreachable block (ram,0x000109deac7c) */
/* WARNING: Removing unreachable block (ram,0x000109deac88) */
/* WARNING: Removing unreachable block (ram,0x000109deae4c) */
/* WARNING: Removing unreachable block (ram,0x000109deae54) */
/* WARNING: Removing unreachable block (ram,0x000109deae5c) */
/* WARNING: Removing unreachable block (ram,0x000109deae64) */
/* WARNING: Removing unreachable block (ram,0x000109deaed4) */
/* WARNING: Removing unreachable block (ram,0x000109deae70) */
/* WARNING: Removing unreachable block (ram,0x000109deae84) */
/* WARNING: Removing unreachable block (ram,0x000109deae8c) */
/* WARNING: Removing unreachable block (ram,0x000109deaf78) */
/* WARNING: Removing unreachable block (ram,0x000109deae98) */
/* WARNING: Removing unreachable block (ram,0x000109deaf14) */
/* WARNING: Removing unreachable block (ram,0x000109deaea0) */
/* WARNING: Removing unreachable block (ram,0x000109deaea8) */
/* WARNING: Removing unreachable block (ram,0x000109deafb8) */
/* WARNING: Removing unreachable block (ram,0x000109deaeb8) */
/* WARNING: Removing unreachable block (ram,0x000109deaec4) */
/* WARNING: Removing unreachable block (ram,0x000109deaf18) */
/* WARNING: Removing unreachable block (ram,0x000109deaf34) */
/* WARNING: Removing unreachable block (ram,0x000109deaf38) */
/* WARNING: Removing unreachable block (ram,0x000109deaf48) */
/* WARNING: Removing unreachable block (ram,0x000109deaf50) */
/* WARNING: Removing unreachable block (ram,0x000109deaf54) */
/* WARNING: Removing unreachable block (ram,0x000109deaf58) */
/* WARNING: Removing unreachable block (ram,0x000109deaed0) */
/* WARNING: Removing unreachable block (ram,0x000109deac90) */
/* WARNING: Removing unreachable block (ram,0x000109deaae4) */
/* WARNING: Removing unreachable block (ram,0x000109deaaec) */
/* WARNING: Removing unreachable block (ram,0x000109deaaf0) */
/* WARNING: Removing unreachable block (ram,0x000109deaaf4) */
/* WARNING: Removing unreachable block (ram,0x000109deaff8) */
/* WARNING: Removing unreachable block (ram,0x000109deab0c) */
/* WARNING: Removing unreachable block (ram,0x000109deb900) */
/* WARNING: Removing unreachable block (ram,0x000109deb910) */
/* WARNING: Removing unreachable block (ram,0x000109deb924) */
/* WARNING: Removing unreachable block (ram,0x000109deb954) */
/* WARNING: Removing unreachable block (ram,0x000109deb930) */
/* WARNING: Removing unreachable block (ram,0x000109debbe8) */
/* WARNING: Removing unreachable block (ram,0x000109deb938) */
/* WARNING: Removing unreachable block (ram,0x000109debc24) */
/* WARNING: Removing unreachable block (ram,0x000109deb948) */
/* WARNING: Removing unreachable block (ram,0x000109deb958) */
/* WARNING: Removing unreachable block (ram,0x000109debc28) */
/* WARNING: Removing unreachable block (ram,0x000109deb968) */
/* WARNING: Removing unreachable block (ram,0x000109deb974) */
/* WARNING: Removing unreachable block (ram,0x000109debc2c) */
/* WARNING: Removing unreachable block (ram,0x000109debc98) */
/* WARNING: Removing unreachable block (ram,0x000109debc34) */
/* WARNING: Removing unreachable block (ram,0x000109debcd8) */
/* WARNING: Removing unreachable block (ram,0x000109debc44) */
/* WARNING: Removing unreachable block (ram,0x000109debd20) */
/* WARNING: Removing unreachable block (ram,0x000109debc4c) */
/* WARNING: Removing unreachable block (ram,0x000109debc54) */
/* WARNING: Removing unreachable block (ram,0x000109debdb4) */
/* WARNING: Removing unreachable block (ram,0x000109debdc0) */
/* WARNING: Removing unreachable block (ram,0x000109debdcc) */
/* WARNING: Removing unreachable block (ram,0x000109debdd4) */
/* WARNING: Removing unreachable block (ram,0x000109dec07c) */
/* WARNING: Removing unreachable block (ram,0x000109debde0) */
/* WARNING: Removing unreachable block (ram,0x000109debde8) */
/* WARNING: Removing unreachable block (ram,0x000109debdf4) */
/* WARNING: Removing unreachable block (ram,0x000109dec1d0) */
/* WARNING: Removing unreachable block (ram,0x000109debe00) */
/* WARNING: Removing unreachable block (ram,0x000109debe04) */
/* WARNING: Removing unreachable block (ram,0x000109dec12c) */
/* WARNING: Removing unreachable block (ram,0x000109dec134) */
/* WARNING: Removing unreachable block (ram,0x000109dec13c) */
/* WARNING: Removing unreachable block (ram,0x000109dec210) */
/* WARNING: Removing unreachable block (ram,0x000109dec14c) */
/* WARNING: Removing unreachable block (ram,0x000109dec160) */
/* WARNING: Removing unreachable block (ram,0x000109dec164) */
/* WARNING: Removing unreachable block (ram,0x000109dec168) */
/* WARNING: Removing unreachable block (ram,0x000109dec080) */
/* WARNING: Removing unreachable block (ram,0x000109dec088) */
/* WARNING: Removing unreachable block (ram,0x000109debc9c) */
/* WARNING: Removing unreachable block (ram,0x000109debd14) */
/* WARNING: Removing unreachable block (ram,0x000109debca4) */
/* WARNING: Removing unreachable block (ram,0x000109debcb0) */
/* WARNING: Removing unreachable block (ram,0x000109debcb4) */
/* WARNING: Removing unreachable block (ram,0x000109debe54) */
/* WARNING: Removing unreachable block (ram,0x000109debcbc) */
/* WARNING: Removing unreachable block (ram,0x000109debcc8) */
/* WARNING: Removing unreachable block (ram,0x000109debe5c) */
/* WARNING: Removing unreachable block (ram,0x000109debe60) */
/* WARNING: Removing unreachable block (ram,0x000109debe74) */
/* WARNING: Removing unreachable block (ram,0x000109debcd0) */
/* WARNING: Removing unreachable block (ram,0x000109debe14) */
/* WARNING: Removing unreachable block (ram,0x000109debc5c) */
/* WARNING: Removing unreachable block (ram,0x000109debd58) */
/* WARNING: Removing unreachable block (ram,0x000109deb908) */
/* WARNING: Removing unreachable block (ram,0x000109debd5c) */
/* WARNING: Removing unreachable block (ram,0x000109debd60) */
/* WARNING: Removing unreachable block (ram,0x000109debdac) */
/* WARNING: Removing unreachable block (ram,0x000109debe8c) */
/* WARNING: Removing unreachable block (ram,0x000109debe94) */
/* WARNING: Removing unreachable block (ram,0x000109debebc) */
/* WARNING: Removing unreachable block (ram,0x000109debed8) */
/* WARNING: Removing unreachable block (ram,0x000109debee8) */
/* WARNING: Removing unreachable block (ram,0x000109dec034) */
/* WARNING: Removing unreachable block (ram,0x000109dec094) */
/* WARNING: Removing unreachable block (ram,0x000109dec054) */
/* WARNING: Removing unreachable block (ram,0x000109dec098) */
/* WARNING: Removing unreachable block (ram,0x000109debf08) */
/* WARNING: Removing unreachable block (ram,0x000109dec170) */
/* WARNING: Removing unreachable block (ram,0x000109debf28) */
/* WARNING: Removing unreachable block (ram,0x000109debf68) */
/* WARNING: Removing unreachable block (ram,0x000109debf70) */
/* WARNING: Removing unreachable block (ram,0x000109debf7c) */
/* WARNING: Removing unreachable block (ram,0x000109debfc4) */
/* WARNING: Removing unreachable block (ram,0x000109debf88) */
/* WARNING: Removing unreachable block (ram,0x000109debf8c) */
/* WARNING: Removing unreachable block (ram,0x000109dec180) */
/* WARNING: Removing unreachable block (ram,0x000109debf9c) */
/* WARNING: Removing unreachable block (ram,0x000109debfb8) */
/* WARNING: Removing unreachable block (ram,0x000109debfc0) */
/* WARNING: Removing unreachable block (ram,0x000109debfc8) */
/* WARNING: Removing unreachable block (ram,0x000109debff0) */
/* WARNING: Removing unreachable block (ram,0x000109debffc) */
/* WARNING: Removing unreachable block (ram,0x000109debec8) */
/* WARNING: Removing unreachable block (ram,0x000109dec0a8) */
/* WARNING: Removing unreachable block (ram,0x000109debea4) */
/* WARNING: Removing unreachable block (ram,0x000109dec0ac) */
/* WARNING: Removing unreachable block (ram,0x000109debd64) */

void FUN_109def15c(long *param_1,long *param_2,byte *param_3,byte *param_4,long *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  undefined1 *puVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte bVar12;
  ulong uVar13;
  long lVar14;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined8 *puVar15;
  ulong *extraout_x8_01;
  long *extraout_x8_02;
  byte *pbVar16;
  ulong uVar17;
  ulong *puVar18;
  byte *pbVar19;
  long *plVar20;
  long *unaff_x19;
  int *piVar21;
  long *unaff_x20;
  long *unaff_x21;
  byte *unaff_x22;
  byte *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 uVar22;
  undefined8 unaff_x25;
  byte *pbVar23;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 uVar24;
  code *unaff_x30;
  
  puVar2 = (undefined1 *)register0x00000008;
  do {
    plVar8 = param_1;
    pbVar10 = param_4;
    pbVar16 = param_3;
    puVar6 = puVar2;
    param_4 = puVar6 + -0x90;
    *(undefined1 **)(puVar6 + -0x40) = unaff_x24;
    *(byte **)(puVar6 + -0x38) = unaff_x23;
    *(byte **)(puVar6 + -0x30) = unaff_x22;
    *(long **)(puVar6 + -0x28) = unaff_x21;
    *(long **)(puVar6 + -0x20) = unaff_x20;
    *(long **)(puVar6 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar6 + -0x10) = unaff_x29;
    *(code **)(puVar6 + -8) = unaff_x30;
    unaff_x29 = puVar6 + -0x10;
    *(undefined8 *)(puVar6 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x24 = puVar6 + -0x68;
    FUN_109de8290(puVar6 + -0x60,&UNK_10e05aed0);
    FUN_109def2ec(plVar8,puVar6 + -0x68,pbVar16,pbVar10);
    FUN_109d323e4(puVar6 + -0x90,puVar6 + -0x68);
    unaff_x21 = (long *)(puVar6 + -0x80);
    FUN_109ded6cc(puVar6 + -0x80,&DAT_10e05ae6c);
    if (unaff_x21 == param_2) {
      param_3 = *(byte **)(puVar6 + -0x78);
      *(undefined8 *)(puVar6 + -0x78) = 0;
      if (param_3 != (byte *)0x0) {
        func_0x000109d3229c((ulong)(puVar6 + -0x80) | 8);
      }
    }
    else {
      param_3 = (byte *)param_2[1];
      param_2[1] = 0;
      if (param_3 != (byte *)0x0) {
        func_0x000109d3229c();
      }
      lVar14 = *(long *)(puVar6 + -0x80);
      param_2[1] = *(long *)(puVar6 + -0x78);
      *param_2 = lVar14;
      *(undefined **)(puVar6 + -0x80) = &UNK_10e05aebc;
      *(undefined8 *)(puVar6 + -0x78) = 0;
    }
    if ((0x40 < *(uint *)(puVar6 + -0x88)) && (*(long *)(puVar6 + -0x90) != 0)) {
      __ZdaPv();
    }
    unaff_x20 = (long *)(puVar6 + -0x60);
    func_0x000109d32234();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x48)) {
      return;
    }
    ___stack_chk_fail();
    if ((0x40 < *(uint *)(puVar6 + -0x88)) && (*(long *)(puVar6 + -0x90) != 0)) {
      __ZdaPv();
    }
    if ((*(byte *)(plVar8 + 1) & 1) != 0) {
      plVar9 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    func_0x000109d32234(puVar6 + -0x60);
    unaff_x30 = FUN_109def2ec;
    plVar9 = unaff_x20;
    __Unwind_Resume();
    param_2 = plVar9 + 1;
    puVar2 = puVar6 + -0x90;
    param_1 = extraout_x8_02;
    unaff_x19 = plVar8;
    unaff_x22 = pbVar10;
    unaff_x23 = pbVar16;
  } while ((undefined *)*param_2 == &DAT_10e05ae6c);
  plVar20 = (long *)(puVar6 + -0x180);
  *(undefined8 *)(puVar6 + -0xf0) = unaff_x28;
  *(undefined8 *)(puVar6 + -0xe8) = unaff_x27;
  *(undefined8 *)(puVar6 + -0xe0) = unaff_x26;
  *(undefined8 *)(puVar6 + -0xd8) = unaff_x25;
  *(undefined1 **)(puVar6 + -0xd0) = unaff_x24;
  *(byte **)(puVar6 + -200) = pbVar16;
  *(byte **)(puVar6 + -0xc0) = pbVar10;
  *(long **)(puVar6 + -0xb8) = unaff_x21;
  *(long **)(puVar6 + -0xb0) = unaff_x20;
  *(long **)(puVar6 + -0xa8) = plVar8;
  *(undefined1 **)(puVar6 + -0xa0) = unaff_x29;
  *(code **)(puVar6 + -0x98) = FUN_109def2ec;
  puVar2 = puVar6 + -0xa0;
  *(undefined8 *)(puVar6 + -0xf8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == (byte *)0x0) {
    *(undefined **)(puVar6 + -0x148) = &UNK_10f601de1;
    *(undefined2 *)(puVar6 + -0x128) = 0x103;
    func_0x000109df6eb4();
    *(undefined8 *)(puVar6 + -0x118) = 3;
    *(undefined ***)(puVar6 + -0x110) = &PTR_PTR_1132fef20;
    plVar20 = (long *)(puVar6 + -0x148);
    FUN_109d3aa88(puVar6 + -0x170,plVar20,puVar6 + -0x118);
    *(byte *)(extraout_x8_02 + 1) = *(byte *)(extraout_x8_02 + 1) | 1;
    lVar14 = *(long *)(puVar6 + -0x170);
    param_2 = unaff_x20;
    param_5 = unaff_x21;
LAB_109debd70:
    *extraout_x8_02 = lVar14;
    param_3 = pbVar10;
  }
  else {
    plVar8 = param_2;
    if (param_4 < (byte *)0x3) {
LAB_109deb7ac:
      bVar12 = 8;
      if (*param_3 != 0x2d) {
        bVar12 = 0;
      }
      *(byte *)((long)plVar9 + 0x1c) = *(byte *)((long)plVar9 + 0x1c) & 0xf7 | bVar12;
      if ((*param_3 == 0x2d) || (*param_3 == 0x2b)) {
        param_4 = param_4 + -1;
        if (param_4 == (byte *)0x0) {
          *(undefined **)(puVar6 + -0x148) = &UNK_10f601df7;
          *(undefined2 *)(puVar6 + -0x128) = 0x103;
          func_0x000109df6eb4();
          *(undefined8 *)(puVar6 + -0x118) = 3;
          *(undefined ***)(puVar6 + -0x110) = &PTR_PTR_1132fef20;
          plVar20 = (long *)(puVar6 + -0x148);
          FUN_109d3aa88(puVar6 + -0x178,plVar20,puVar6 + -0x118);
          *(byte *)(extraout_x8_02 + 1) = *(byte *)(extraout_x8_02 + 1) | 1;
          lVar14 = *(long *)(puVar6 + -0x178);
          pbVar10 = param_3;
          goto LAB_109debd70;
        }
        param_3 = param_3 + 1;
      }
      if (((param_4 < (byte *)0x2) || (*param_3 != 0x30)) || ((param_3[1] | 0x20) != 0x78)) {
        param_4 = param_3 + (long)param_4;
        puVar15 = (undefined8 *)(puVar6 + -0x160);
        uVar24 = 0x109deb900;
      }
      else {
        if (param_4 + -2 == (byte *)0x0) {
          *(undefined **)(puVar6 + -0x148) = &UNK_10f601e0c;
          *(undefined2 *)(puVar6 + -0x128) = 0x103;
          func_0x000109deb0e4(puVar6 + -0x180,puVar6 + -0x148);
          *(byte *)(extraout_x8_02 + 1) = *(byte *)(extraout_x8_02 + 1) | 1;
          lVar14 = *(long *)(puVar6 + -0x180);
          pbVar10 = param_3;
          goto LAB_109debd70;
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar6 + -0xf8))
        goto LAB_109dec250;
        param_3 = param_3 + 2;
        *(undefined8 *)(puVar6 + -0xe0) = *(undefined8 *)(puVar6 + -0xe0);
        *(undefined8 *)(puVar6 + -0xd8) = *(undefined8 *)(puVar6 + -0xd8);
        *(undefined8 *)(puVar6 + -0xd0) = *(undefined8 *)(puVar6 + -0xd0);
        *(undefined8 *)(puVar6 + -200) = *(undefined8 *)(puVar6 + -200);
        *(undefined8 *)(puVar6 + -0xc0) = *(undefined8 *)(puVar6 + -0xc0);
        *(undefined8 *)(puVar6 + -0xb8) = *(undefined8 *)(puVar6 + -0xb8);
        *(undefined8 *)(puVar6 + -0xb0) = *(undefined8 *)(puVar6 + -0xb0);
        *(undefined8 *)(puVar6 + -0xa8) = *(undefined8 *)(puVar6 + -0xa8);
        *(undefined8 *)(puVar6 + -0xa0) = *(undefined8 *)(puVar6 + -0xa0);
        *(undefined8 *)(puVar6 + -0x98) = *(undefined8 *)(puVar6 + -0x98);
        *(undefined8 *)(puVar6 + -0xe8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        *(byte *)((long)plVar9 + 0x1c) = *(byte *)((long)plVar9 + 0x1c) & 0xf8 | 2;
        iVar7 = *(int *)(*param_2 + 8);
        if (iVar7 - 0x40U < 0xffffff80) {
          puVar15 = (undefined8 *)plVar9[2];
          *puVar15 = 0;
          _bzero(puVar15 + 1,(ulong)((iVar7 + 0x40U >> 6) - 1) << 3);
          *(undefined4 *)(plVar9 + 3) = 0;
        }
        else {
          *(undefined4 *)(plVar9 + 3) = 0;
          plVar9[2] = 0;
        }
        param_4 = param_3 + (long)(param_4 + -2);
        puVar15 = (undefined8 *)(puVar6 + -0x150);
        uVar24 = 0x109deaad8;
        param_2 = param_5;
        puVar2 = puVar6 + -0x90;
      }
      *(long **)(puVar6 + -0x1a0) = param_2;
      *(long **)(puVar6 + -0x198) = extraout_x8_02;
      *(undefined1 **)(puVar6 + -400) = puVar6 + -0xa0;
      *(undefined8 *)(puVar6 + -0x188) = uVar24;
      *puVar15 = param_4;
      pbVar10 = param_3;
      if (param_3 != param_4) {
        lVar14 = (long)param_4 - (long)param_3;
        do {
          if (*param_3 != 0x30) {
            pbVar10 = param_3;
            if (*param_3 == 0x2e) {
              *puVar15 = param_3;
              if (lVar14 == 1) {
                *(undefined **)(puVar6 + -0x1e0) = &UNK_10f601dc7;
                *(undefined2 *)(puVar6 + -0x1c0) = 0x103;
                func_0x000109df6eb4();
                *(undefined8 *)(puVar6 + -0x1b0) = 3;
                *(undefined ***)(puVar6 + -0x1a8) = &PTR_PTR_1132fef20;
                FUN_109d3aa88(puVar6 + -0x1b8,puVar6 + -0x1e0,puVar6 + -0x1b0);
                puVar2[-0x60] = puVar2[-0x60] | 1;
                *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)(puVar6 + -0x1b8);
                return;
              }
              goto LAB_109deb0ac;
            }
            break;
          }
          param_3 = param_3 + 1;
          pbVar10 = param_4;
        } while (param_3 != param_4);
      }
LAB_109deb0c4:
      puVar2[-0x60] = puVar2[-0x60] & 0xfe;
      *(byte **)(puVar2 + -0x68) = pbVar10;
      return;
    }
    pbVar10 = param_3;
    if (param_4 == (byte *)0x8) {
      if (*(long *)param_3 != 0x5954494e49464e49) goto LAB_109deb9d8;
LAB_109deba6c:
      uVar24 = 0;
LAB_109deba74:
      plVar20 = param_2;
      FUN_109deb6e0(param_2,uVar24);
    }
    else {
      if (param_4 == (byte *)0x4) {
        if (*(int *)param_3 == 0x666e492b) goto LAB_109deba6c;
LAB_109deb9d8:
        bVar12 = *param_3;
        if (bVar12 == 0x2d) {
          if (param_4 == (byte *)0x3) goto LAB_109deb7ac;
          pbVar10 = param_3 + 1;
          if (param_4 == (byte *)0x9) {
            if (*(long *)pbVar10 == 0x5954494e49464e49) goto LAB_109deba34;
          }
          else if ((param_4 == (byte *)0x4) &&
                  ((*(short *)pbVar10 == 0x6e69 && param_3[3] == 0x66 ||
                   (*(short *)pbVar10 == 0x6e49 && param_3[3] == 0x66)))) {
LAB_109deba34:
            uVar24 = 1;
            goto LAB_109deba74;
          }
          bVar12 = *pbVar10;
          uVar24 = 1;
          pbVar16 = param_4 + -1;
        }
        else {
          uVar24 = 0;
          pbVar16 = param_4;
        }
      }
      else {
        if (param_4 != (byte *)0x3) goto LAB_109deb9d8;
        if (*(short *)param_3 == 0x6e69 && param_3[2] == 0x66) goto LAB_109deba6c;
        bVar12 = *param_3;
        if (bVar12 == 0x2d) goto LAB_109deb7ac;
        uVar24 = 0;
        pbVar16 = (byte *)0x3;
      }
      if ((bVar12 | 0x20) == 0x73) {
        pbVar16 = pbVar16 + -1;
        if (pbVar16 < (byte *)0x3) goto LAB_109deb7ac;
        pbVar10 = pbVar10 + 1;
        uVar22 = 1;
      }
      else {
        uVar22 = 0;
      }
      if ((*(short *)pbVar10 != 0x616e || pbVar10[2] != 0x6e) &&
         (*(short *)pbVar10 != 0x614e || pbVar10[2] != 0x4e)) goto LAB_109deb7ac;
      pbVar23 = pbVar10 + 3;
      pbVar19 = pbVar16 + -3;
      *(byte **)(puVar6 + -0x148) = pbVar23;
      *(byte **)(puVar6 + -0x140) = pbVar19;
      if (pbVar16 < (byte *)0x3 || pbVar19 == (byte *)0x0) {
        plVar20 = param_2;
        FUN_109de78e4(param_2,uVar22,uVar24,0);
      }
      else {
        bVar12 = *pbVar23;
        if (bVar12 == 0x28) {
          if ((pbVar19 < (byte *)0x3) || ((pbVar10 + (long)pbVar16)[-1] != 0x29))
          goto LAB_109deb7ac;
          pbVar23 = pbVar10 + 4;
          pbVar19 = pbVar16 + -5;
          *(byte **)(puVar6 + -0x148) = pbVar23;
          *(byte **)(puVar6 + -0x140) = pbVar19;
          bVar12 = pbVar10[4];
        }
        if (bVar12 == 0x30) {
          if ((byte *)0x1 < pbVar19) {
            iVar7 = (int)(char)pbVar23[1];
            ___tolower();
            if (iVar7 == 0x78) {
              *(byte **)(puVar6 + -0x148) = pbVar23 + 2;
              *(byte **)(puVar6 + -0x140) = pbVar19 + -2;
              uVar11 = 0x10;
              goto LAB_109dec0c4;
            }
          }
          uVar11 = 8;
        }
        else {
          uVar11 = 10;
        }
LAB_109dec0c4:
        *(undefined4 *)(puVar6 + -0x110) = 1;
        *(undefined8 *)(puVar6 + -0x118) = 0;
        plVar8 = (long *)(puVar6 + -0x148);
        FUN_109e04094(plVar8,uVar11,puVar6 + -0x118);
        if (((ulong)plVar8 & 1) != 0) {
          if ((0x40 < *(uint *)(puVar6 + -0x110)) &&
             (plVar8 = *(long **)(puVar6 + -0x118), plVar8 != (long *)0x0)) {
            __ZdaPv();
          }
          goto LAB_109deb7ac;
        }
        plVar20 = param_2;
        FUN_109de78e4(param_2,uVar22,uVar24,puVar6 + -0x118);
        if ((0x40 < *(uint *)(puVar6 + -0x110)) &&
           (plVar20 = *(long **)(puVar6 + -0x118), plVar20 != (long *)0x0)) {
          __ZdaPv();
        }
      }
    }
    *(byte *)(extraout_x8_02 + 1) = *(byte *)(extraout_x8_02 + 1) & 0xfe;
    *(undefined4 *)extraout_x8_02 = 0;
  }
  plVar8 = plVar20;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0xf8)) {
    return;
  }
LAB_109dec250:
  ___stack_chk_fail();
  if ((0x40 < *(uint *)(puVar6 + -0x110)) && (*(long *)(puVar6 + -0x118) != 0)) {
    __ZdaPv();
  }
  plVar9 = plVar8;
  __Unwind_Resume();
  *(byte **)(puVar6 + -0x1b0) = param_3;
  *(long **)(puVar6 + -0x1a8) = param_5;
  *(long **)(puVar6 + -0x1a0) = param_2;
  *(long **)(puVar6 + -0x198) = plVar8;
  *(undefined1 **)(puVar6 + -400) = puVar2;
  *(code **)(puVar6 + -0x188) = FUN_109dec280;
  *(undefined8 *)(puVar6 + -0x1b8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  bVar4 = *(byte *)((long)plVar9 + 0x14);
  bVar12 = bVar4 & 7;
  bVar5 = bVar4 >> 3 & 1;
  if ((bVar4 & 6) == 0 || bVar12 == 3) {
    bVar4 = 0;
    if (bVar12 != 1) {
      bVar4 = bVar5;
    }
    puVar6[-0x248] = bVar4;
    plVar20 = (long *)*plVar9;
    piVar21 = (int *)(puVar6 + -0x238);
    FUN_109d2fb48(puVar6 + -0x238);
    puVar6[-0x238] = bVar12;
    plVar8 = (long *)(puVar6 + -0x238);
    FUN_109defbfc(plVar8,0,(ulong)piVar21 | 1,puVar6 + -0x1f8,puVar6 + -0x248,plVar20 + 1);
  }
  else {
    puVar6[-0x239] = bVar5;
    plVar20 = plVar9 + 1;
    piVar21 = (int *)(*plVar9 + 8);
    plVar8 = (long *)*plVar20;
    if (0xffffff7f < *piVar21 - 0x40U) {
      plVar8 = plVar20;
    }
    FUN_109d7e498(plVar8,plVar8 + (*piVar21 + 0x40U >> 6));
    *(long **)(puVar6 + -0x248) = plVar8;
    FUN_109d2fb48(puVar6 + -0x238);
    puVar6[-0x238] = bVar12;
    plVar8 = (long *)(puVar6 + -0x238);
    FUN_109defc74(plVar8,0,(ulong)(puVar6 + -0x238) | 1,puVar6 + -0x1f8,puVar6 + -0x239,piVar21,
                  plVar9 + 2,puVar6 + -0x248);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x1b8)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 **)(puVar6 + -0x260) = puVar6 + -400;
  *(code **)(puVar6 + -600) = FUN_109dec398;
  *(undefined8 *)(puVar6 + -0x268) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  bVar12 = *(byte *)((long)plVar8 + 0x14);
  if ((bVar12 & 6) == 0 || (bVar12 & 7) == 3) {
    if ((bVar12 & 7) == 3) {
      uVar17 = 0;
      uVar13 = 0;
    }
    else {
      if ((bVar12 & 7) == 0) {
        uVar17 = 0x8000000000000000;
      }
      else {
        puVar18 = (ulong *)(plVar8 + 1);
        if (*(int *)(*plVar8 + 8) - 0x40U < 0xffffff80) {
          puVar18 = (ulong *)*puVar18;
        }
        uVar17 = *puVar18;
      }
      uVar13 = 0x7fff;
    }
  }
  else {
    uVar1 = (int)plVar8[2] + 0x3fff;
    puVar18 = (ulong *)(plVar8 + 1);
    if (*(int *)(*plVar8 + 8) - 0x40U < 0xffffff80) {
      puVar18 = (ulong *)*puVar18;
    }
    uVar17 = *puVar18;
    uVar13 = uVar17 >> 0x3f;
    if (uVar1 != 1) {
      uVar13 = (ulong)(uVar1 & 0x7fff);
    }
  }
  *(ulong *)(puVar6 + -0x278) = uVar17;
  *(ulong *)(puVar6 + -0x270) = uVar13 | ((ulong)(bVar12 >> 3) & 1) << 0xf;
  *(undefined4 *)(extraout_x8 + 1) = 0x50;
  plVar8 = extraout_x8;
  func_0x000109defe68(extraout_x8,puVar6 + -0x278,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar6 + -0x268)) {
    ___stack_chk_fail();
    *(int **)(puVar6 + -0x2a0) = piVar21;
    *(long **)(puVar6 + -0x298) = plVar20;
    *(undefined1 **)(puVar6 + -0x290) = puVar6 + -0x260;
    *(code **)(puVar6 + -0x288) = FUN_109dec498;
    *(undefined8 *)(puVar6 + -0x2a8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar15 = (undefined8 *)*plVar8;
    uVar3 = *(undefined4 *)(puVar15 + 2);
    uVar24 = *puVar15;
    *(undefined8 *)(puVar6 + -0x2c8) = puVar15[1];
    *(undefined8 *)(puVar6 + -0x2d0) = uVar24;
    *(undefined4 *)(puVar6 + -0x2c0) = uVar3;
    *(undefined4 *)(puVar6 + -0x2cc) = 0xfffffc02;
    FUN_109de8340(puVar6 + -0x2e8,plVar8);
    FUN_109de8868(puVar6 + -0x2e8,puVar6 + -0x2d0,1,puVar6 + -0x2b9);
    FUN_109de8340(puVar6 + -0x300,puVar6 + -0x2e8);
    FUN_109de8868(puVar6 + -0x300,&DAT_10e05ae44,1,puVar6 + -0x2b9);
    FUN_109dec730(puVar6 + -0x318,puVar6 + -0x300);
    if (*(uint *)(puVar6 + -0x310) < 0x41) {
      *(undefined8 *)(puVar6 + -0x2b8) = *(undefined8 *)(puVar6 + -0x318);
    }
    else {
      *(undefined8 *)(puVar6 + -0x2b8) = **(undefined8 **)(puVar6 + -0x318);
      __ZdaPv();
    }
    if ((((puVar6[-0x2ec] & 6) == 0) || ((puVar6[-0x2ec] & 7) == 3)) || ((puVar6[-0x2b9] & 1) == 0))
    {
      *(undefined8 *)(puVar6 + -0x2b0) = 0;
    }
    else {
      FUN_109de8868(puVar6 + -0x300,puVar6 + -0x2d0,1,puVar6 + -0x2b9);
      FUN_109de8340(puVar6 + -0x318,puVar6 + -0x2e8);
      FUN_109de9ad8(puVar6 + -0x318,puVar6 + -0x300,1,1);
      FUN_109de8868(puVar6 + -0x318,&DAT_10e05ae44,1,puVar6 + -0x2b9);
      FUN_109dec730(puVar6 + -0x328,puVar6 + -0x318);
      if (*(uint *)(puVar6 + -800) < 0x41) {
        *(undefined8 *)(puVar6 + -0x2b0) = *(undefined8 *)(puVar6 + -0x328);
      }
      else {
        *(undefined8 *)(puVar6 + -0x2b0) = **(undefined8 **)(puVar6 + -0x328);
        __ZdaPv();
      }
      if ((*(int *)(*(long *)(puVar6 + -0x318) + 8) - 0x40U < 0xffffff80) &&
         (*(long *)(puVar6 + -0x310) != 0)) {
        __ZdaPv();
      }
    }
    *(undefined4 *)(extraout_x8_00 + 1) = 0x80;
    plVar8 = extraout_x8_00;
    func_0x000109defe68(extraout_x8_00,puVar6 + -0x2b8,2);
    if ((*(int *)(*(long *)(puVar6 + -0x300) + 8) - 0x40U < 0xffffff80) &&
       (plVar8 = *(long **)(puVar6 + -0x2f8), plVar8 != (long *)0x0)) {
      __ZdaPv();
    }
    if ((*(int *)(*(long *)(puVar6 + -0x2e8) + 8) - 0x40U < 0xffffff80) &&
       (plVar8 = *(long **)(puVar6 + -0x2e0), plVar8 != (long *)0x0)) {
      __ZdaPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar6 + -0x2a8)) {
      ___stack_chk_fail();
      if ((*(int *)(*(long *)(puVar6 + -0x318) + 8) - 0x40U < 0xffffff80) &&
         (*(long *)(puVar6 + -0x310) != 0)) {
        __ZdaPv();
      }
      if ((*(int *)(*(long *)(puVar6 + -0x300) + 8) - 0x40U < 0xffffff80) &&
         (*(long *)(puVar6 + -0x2f8) != 0)) {
        __ZdaPv();
      }
      if ((*(int *)(*(long *)(puVar6 + -0x2e8) + 8) - 0x40U < 0xffffff80) &&
         (*(long *)(puVar6 + -0x2e0) != 0)) {
        __ZdaPv();
      }
      __Unwind_Resume();
      bVar12 = *(byte *)((long)plVar8 + 0x14);
      if ((bVar12 & 6) == 0 || (bVar12 & 7) == 3) {
        if ((bVar12 & 7) == 3) {
          uVar17 = 0;
          uVar13 = 0;
        }
        else {
          if ((bVar12 & 7) == 0) {
            uVar17 = 0;
          }
          else {
            puVar18 = (ulong *)(plVar8 + 1);
            if (*(int *)(*plVar8 + 8) - 0x40U < 0xffffff80) {
              puVar18 = (ulong *)*puVar18;
            }
            uVar17 = *puVar18;
          }
          uVar13 = 0x7ff;
        }
      }
      else {
        uVar1 = (int)plVar8[2] + 0x3ff;
        puVar18 = (ulong *)(plVar8 + 1);
        if (*(int *)(*plVar8 + 8) - 0x40U < 0xffffff80) {
          puVar18 = (ulong *)*puVar18;
        }
        uVar17 = *puVar18;
        uVar13 = (ulong)uVar1;
        if (uVar1 == 1) {
          uVar13 = uVar17 >> 0x34 & 1;
        }
      }
      *(undefined4 *)(extraout_x8_01 + 1) = 0x40;
      *extraout_x8_01 =
           ((ulong)bVar12 & 8) << 0x3c | (uVar13 & 0x7ff) << 0x34 | uVar17 & 0xfffffffffffff;
      uVar1 = (uint)extraout_x8_01[1];
      puVar18 = extraout_x8_01;
      if (uVar1 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0xffffffffffffffff >> ((ulong)-uVar1 & 0x3f);
        if (0x40 < uVar1) {
          puVar18 = (ulong *)(*extraout_x8_01 + (ulong)((int)((ulong)uVar1 + 0x3f >> 6) - 1) * 8);
        }
      }
      *puVar18 = *puVar18 & uVar13;
      return;
    }
    return;
  }
  return;
  while (pbVar10 = param_3, *param_3 == 0x30) {
LAB_109deb0ac:
    param_3 = param_3 + 1;
    pbVar10 = param_4;
    if (param_3 == param_4) break;
  }
  goto LAB_109deb0c4;
}



/* Entry: 109def2ec; end: 109def307;  */

/* WARNING: Possible PIC construction at 0x000109deaad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109deb8fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109deaad8) */
/* WARNING: Removing unreachable block (ram,0x000109deab28) */
/* WARNING: Removing unreachable block (ram,0x000109deac54) */
/* WARNING: Removing unreachable block (ram,0x000109deab34) */
/* WARNING: Removing unreachable block (ram,0x000109deab5c) */
/* WARNING: Removing unreachable block (ram,0x000109deab80) */
/* WARNING: Removing unreachable block (ram,0x000109deab8c) */
/* WARNING: Removing unreachable block (ram,0x000109deabb4) */
/* WARNING: Removing unreachable block (ram,0x000109deabb8) */
/* WARNING: Removing unreachable block (ram,0x000109deabd0) */
/* WARNING: Removing unreachable block (ram,0x000109deac0c) */
/* WARNING: Removing unreachable block (ram,0x000109deabdc) */
/* WARNING: Removing unreachable block (ram,0x000109deabe8) */
/* WARNING: Removing unreachable block (ram,0x000109deabf4) */
/* WARNING: Removing unreachable block (ram,0x000109deac18) */
/* WARNING: Removing unreachable block (ram,0x000109deac34) */
/* WARNING: Removing unreachable block (ram,0x000109deac38) */
/* WARNING: Removing unreachable block (ram,0x000109deac28) */
/* WARNING: Removing unreachable block (ram,0x000109deac2c) */
/* WARNING: Removing unreachable block (ram,0x000109deac3c) */
/* WARNING: Removing unreachable block (ram,0x000109deabfc) */
/* WARNING: Removing unreachable block (ram,0x000109deac08) */
/* WARNING: Removing unreachable block (ram,0x000109deadbc) */
/* WARNING: Removing unreachable block (ram,0x000109deabc4) */
/* WARNING: Removing unreachable block (ram,0x000109deac40) */
/* WARNING: Removing unreachable block (ram,0x000109deab94) */
/* WARNING: Removing unreachable block (ram,0x000109deab68) */
/* WARNING: Removing unreachable block (ram,0x000109dead74) */
/* WARNING: Removing unreachable block (ram,0x000109deab70) */
/* WARNING: Removing unreachable block (ram,0x000109deac48) */
/* WARNING: Removing unreachable block (ram,0x000109deac50) */
/* WARNING: Removing unreachable block (ram,0x000109deac5c) */
/* WARNING: Removing unreachable block (ram,0x000109deacdc) */
/* WARNING: Removing unreachable block (ram,0x000109deac64) */
/* WARNING: Removing unreachable block (ram,0x000109dead28) */
/* WARNING: Removing unreachable block (ram,0x000109deac74) */
/* WARNING: Removing unreachable block (ram,0x000109deae00) */
/* WARNING: Removing unreachable block (ram,0x000109deac7c) */
/* WARNING: Removing unreachable block (ram,0x000109deac88) */
/* WARNING: Removing unreachable block (ram,0x000109deae4c) */
/* WARNING: Removing unreachable block (ram,0x000109deae54) */
/* WARNING: Removing unreachable block (ram,0x000109deae5c) */
/* WARNING: Removing unreachable block (ram,0x000109deae64) */
/* WARNING: Removing unreachable block (ram,0x000109deaed4) */
/* WARNING: Removing unreachable block (ram,0x000109deae70) */
/* WARNING: Removing unreachable block (ram,0x000109deae84) */
/* WARNING: Removing unreachable block (ram,0x000109deae8c) */
/* WARNING: Removing unreachable block (ram,0x000109deaf78) */
/* WARNING: Removing unreachable block (ram,0x000109deae98) */
/* WARNING: Removing unreachable block (ram,0x000109deaf14) */
/* WARNING: Removing unreachable block (ram,0x000109deaea0) */
/* WARNING: Removing unreachable block (ram,0x000109deaea8) */
/* WARNING: Removing unreachable block (ram,0x000109deafb8) */
/* WARNING: Removing unreachable block (ram,0x000109deaeb8) */
/* WARNING: Removing unreachable block (ram,0x000109deaec4) */
/* WARNING: Removing unreachable block (ram,0x000109deaf18) */
/* WARNING: Removing unreachable block (ram,0x000109deaf34) */
/* WARNING: Removing unreachable block (ram,0x000109deaf38) */
/* WARNING: Removing unreachable block (ram,0x000109deaf48) */
/* WARNING: Removing unreachable block (ram,0x000109deaf50) */
/* WARNING: Removing unreachable block (ram,0x000109deaf54) */
/* WARNING: Removing unreachable block (ram,0x000109deaf58) */
/* WARNING: Removing unreachable block (ram,0x000109deaed0) */
/* WARNING: Removing unreachable block (ram,0x000109deac90) */
/* WARNING: Removing unreachable block (ram,0x000109deaae4) */
/* WARNING: Removing unreachable block (ram,0x000109deaaec) */
/* WARNING: Removing unreachable block (ram,0x000109deaaf0) */
/* WARNING: Removing unreachable block (ram,0x000109deaaf4) */
/* WARNING: Removing unreachable block (ram,0x000109deaff8) */
/* WARNING: Removing unreachable block (ram,0x000109deab0c) */
/* WARNING: Removing unreachable block (ram,0x000109deb900) */
/* WARNING: Removing unreachable block (ram,0x000109deb910) */
/* WARNING: Removing unreachable block (ram,0x000109deb924) */
/* WARNING: Removing unreachable block (ram,0x000109deb954) */
/* WARNING: Removing unreachable block (ram,0x000109deb930) */
/* WARNING: Removing unreachable block (ram,0x000109debbe8) */
/* WARNING: Removing unreachable block (ram,0x000109deb938) */
/* WARNING: Removing unreachable block (ram,0x000109debc24) */
/* WARNING: Removing unreachable block (ram,0x000109deb948) */
/* WARNING: Removing unreachable block (ram,0x000109deb958) */
/* WARNING: Removing unreachable block (ram,0x000109debc28) */
/* WARNING: Removing unreachable block (ram,0x000109deb968) */
/* WARNING: Removing unreachable block (ram,0x000109deb974) */
/* WARNING: Removing unreachable block (ram,0x000109debc2c) */
/* WARNING: Removing unreachable block (ram,0x000109debc98) */
/* WARNING: Removing unreachable block (ram,0x000109debc34) */
/* WARNING: Removing unreachable block (ram,0x000109debcd8) */
/* WARNING: Removing unreachable block (ram,0x000109debc44) */
/* WARNING: Removing unreachable block (ram,0x000109debd20) */
/* WARNING: Removing unreachable block (ram,0x000109debc4c) */
/* WARNING: Removing unreachable block (ram,0x000109debc54) */
/* WARNING: Removing unreachable block (ram,0x000109debdb4) */
/* WARNING: Removing unreachable block (ram,0x000109debdc0) */
/* WARNING: Removing unreachable block (ram,0x000109debdcc) */
/* WARNING: Removing unreachable block (ram,0x000109debdd4) */
/* WARNING: Removing unreachable block (ram,0x000109dec07c) */
/* WARNING: Removing unreachable block (ram,0x000109debde0) */
/* WARNING: Removing unreachable block (ram,0x000109debde8) */
/* WARNING: Removing unreachable block (ram,0x000109debdf4) */
/* WARNING: Removing unreachable block (ram,0x000109dec1d0) */
/* WARNING: Removing unreachable block (ram,0x000109debe00) */
/* WARNING: Removing unreachable block (ram,0x000109debe04) */
/* WARNING: Removing unreachable block (ram,0x000109dec12c) */
/* WARNING: Removing unreachable block (ram,0x000109dec134) */
/* WARNING: Removing unreachable block (ram,0x000109dec13c) */
/* WARNING: Removing unreachable block (ram,0x000109dec210) */
/* WARNING: Removing unreachable block (ram,0x000109dec14c) */
/* WARNING: Removing unreachable block (ram,0x000109dec160) */
/* WARNING: Removing unreachable block (ram,0x000109dec164) */
/* WARNING: Removing unreachable block (ram,0x000109dec168) */
/* WARNING: Removing unreachable block (ram,0x000109dec080) */
/* WARNING: Removing unreachable block (ram,0x000109dec088) */
/* WARNING: Removing unreachable block (ram,0x000109debc9c) */
/* WARNING: Removing unreachable block (ram,0x000109debd14) */
/* WARNING: Removing unreachable block (ram,0x000109debca4) */
/* WARNING: Removing unreachable block (ram,0x000109debcb0) */
/* WARNING: Removing unreachable block (ram,0x000109debcb4) */
/* WARNING: Removing unreachable block (ram,0x000109debe54) */
/* WARNING: Removing unreachable block (ram,0x000109debcbc) */
/* WARNING: Removing unreachable block (ram,0x000109debcc8) */
/* WARNING: Removing unreachable block (ram,0x000109debe5c) */
/* WARNING: Removing unreachable block (ram,0x000109debe60) */
/* WARNING: Removing unreachable block (ram,0x000109debe74) */
/* WARNING: Removing unreachable block (ram,0x000109debcd0) */
/* WARNING: Removing unreachable block (ram,0x000109debe14) */
/* WARNING: Removing unreachable block (ram,0x000109debc5c) */
/* WARNING: Removing unreachable block (ram,0x000109debd58) */
/* WARNING: Removing unreachable block (ram,0x000109deb908) */
/* WARNING: Removing unreachable block (ram,0x000109debd5c) */
/* WARNING: Removing unreachable block (ram,0x000109debd60) */
/* WARNING: Removing unreachable block (ram,0x000109debdac) */
/* WARNING: Removing unreachable block (ram,0x000109debe8c) */
/* WARNING: Removing unreachable block (ram,0x000109debe94) */
/* WARNING: Removing unreachable block (ram,0x000109debebc) */
/* WARNING: Removing unreachable block (ram,0x000109debed8) */
/* WARNING: Removing unreachable block (ram,0x000109debee8) */
/* WARNING: Removing unreachable block (ram,0x000109dec034) */
/* WARNING: Removing unreachable block (ram,0x000109dec094) */
/* WARNING: Removing unreachable block (ram,0x000109dec054) */
/* WARNING: Removing unreachable block (ram,0x000109dec098) */
/* WARNING: Removing unreachable block (ram,0x000109debf08) */
/* WARNING: Removing unreachable block (ram,0x000109dec170) */
/* WARNING: Removing unreachable block (ram,0x000109debf28) */
/* WARNING: Removing unreachable block (ram,0x000109debf68) */
/* WARNING: Removing unreachable block (ram,0x000109debf70) */
/* WARNING: Removing unreachable block (ram,0x000109debf7c) */
/* WARNING: Removing unreachable block (ram,0x000109debfc4) */
/* WARNING: Removing unreachable block (ram,0x000109debf88) */
/* WARNING: Removing unreachable block (ram,0x000109debf8c) */
/* WARNING: Removing unreachable block (ram,0x000109dec180) */
/* WARNING: Removing unreachable block (ram,0x000109debf9c) */
/* WARNING: Removing unreachable block (ram,0x000109debfb8) */
/* WARNING: Removing unreachable block (ram,0x000109debfc0) */
/* WARNING: Removing unreachable block (ram,0x000109debfc8) */
/* WARNING: Removing unreachable block (ram,0x000109debff0) */
/* WARNING: Removing unreachable block (ram,0x000109debffc) */
/* WARNING: Removing unreachable block (ram,0x000109debec8) */
/* WARNING: Removing unreachable block (ram,0x000109dec0a8) */
/* WARNING: Removing unreachable block (ram,0x000109debea4) */
/* WARNING: Removing unreachable block (ram,0x000109dec0ac) */
/* WARNING: Removing unreachable block (ram,0x000109debd64) */

void FUN_109def2ec(long *param_1,long *param_2,byte *param_3,byte *param_4,long *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte bVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined8 *puVar16;
  ulong *extraout_x8_01;
  long *extraout_x8_02;
  byte *pbVar17;
  ulong uVar18;
  ulong *puVar19;
  byte *pbVar20;
  long *plVar21;
  long *unaff_x19;
  int *piVar22;
  long *unaff_x20;
  long *unaff_x21;
  byte *unaff_x22;
  byte *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 uVar23;
  undefined8 unaff_x25;
  byte *pbVar24;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 uVar25;
  code *unaff_x30;
  
  while (pbVar11 = param_4, pbVar14 = param_3, plVar8 = param_2 + 1,
        (undefined *)*plVar8 == &DAT_10e05ae6c) {
    param_4 = (byte *)((long)register0x00000008 + -0x90);
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(byte **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x24 = (undefined1 *)((long)register0x00000008 + -0x68);
    FUN_109de8290((undefined1 *)((long)register0x00000008 + -0x60),&UNK_10e05aed0);
    FUN_109def2ec(param_1,(undefined1 *)((long)register0x00000008 + -0x68),pbVar14,pbVar11);
    FUN_109d323e4((undefined1 *)((long)register0x00000008 + -0x90),
                  (undefined1 *)((long)register0x00000008 + -0x68));
    unaff_x21 = (long *)((long)register0x00000008 + -0x80);
    FUN_109ded6cc((undefined1 *)((long)register0x00000008 + -0x80),&DAT_10e05ae6c);
    if (unaff_x21 == plVar8) {
      param_3 = *(byte **)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
      if (param_3 != (byte *)0x0) {
        func_0x000109d3229c((ulong)((long)register0x00000008 + -0x80) | 8);
      }
    }
    else {
      param_3 = (byte *)param_2[2];
      param_2[2] = 0;
      if (param_3 != (byte *)0x0) {
        func_0x000109d3229c();
      }
      lVar15 = *(long *)((long)register0x00000008 + -0x80);
      param_2[2] = *(long *)((long)register0x00000008 + -0x78);
      *plVar8 = lVar15;
      *(undefined **)((long)register0x00000008 + -0x80) = &UNK_10e05aebc;
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    }
    if ((0x40 < *(uint *)((long)register0x00000008 + -0x88)) &&
       (*(long *)((long)register0x00000008 + -0x90) != 0)) {
      __ZdaPv();
    }
    unaff_x20 = (long *)((long)register0x00000008 + -0x60);
    func_0x000109d32234();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
      return;
    }
    ___stack_chk_fail();
    if ((0x40 < *(uint *)((long)register0x00000008 + -0x88)) &&
       (*(long *)((long)register0x00000008 + -0x90) != 0)) {
      __ZdaPv();
    }
    if ((*(byte *)(param_1 + 1) & 1) != 0) {
      plVar8 = (long *)*param_1;
      *param_1 = 0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    func_0x000109d32234((undefined1 *)((long)register0x00000008 + -0x60));
    unaff_x30 = FUN_109def2ec;
    param_2 = unaff_x20;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    param_1 = extraout_x8_02;
    unaff_x19 = param_1;
    unaff_x22 = pbVar11;
    unaff_x23 = pbVar14;
  }
  plVar7 = (long *)((long)register0x00000008 + -0xf0);
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(byte **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar2 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x68) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (pbVar11 == (byte *)0x0) {
    *(undefined **)((long)register0x00000008 + -0xb8) = &UNK_10f601de1;
    *(undefined2 *)((long)register0x00000008 + -0x98) = 0x103;
    func_0x000109df6eb4();
    *(undefined8 *)((long)register0x00000008 + -0x88) = 3;
    *(undefined ***)((long)register0x00000008 + -0x80) = &PTR_PTR_1132fef20;
    plVar7 = (long *)((long)register0x00000008 + -0xb8);
    FUN_109d3aa88((undefined1 *)((long)register0x00000008 + -0xe0),plVar7,
                  (undefined1 *)((long)register0x00000008 + -0x88));
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
    lVar15 = *(long *)((long)register0x00000008 + -0xe0);
    plVar8 = unaff_x20;
    param_5 = unaff_x21;
LAB_109debd70:
    *param_1 = lVar15;
    pbVar14 = unaff_x22;
  }
  else {
    plVar21 = plVar8;
    if (pbVar11 < (byte *)0x3) {
LAB_109deb7ac:
      bVar12 = 8;
      if (*pbVar14 != 0x2d) {
        bVar12 = 0;
      }
      *(byte *)((long)param_2 + 0x1c) = *(byte *)((long)param_2 + 0x1c) & 0xf7 | bVar12;
      if ((*pbVar14 == 0x2d) || (*pbVar14 == 0x2b)) {
        pbVar11 = pbVar11 + -1;
        if (pbVar11 == (byte *)0x0) {
          *(undefined **)((long)register0x00000008 + -0xb8) = &UNK_10f601df7;
          *(undefined2 *)((long)register0x00000008 + -0x98) = 0x103;
          func_0x000109df6eb4();
          *(undefined8 *)((long)register0x00000008 + -0x88) = 3;
          *(undefined ***)((long)register0x00000008 + -0x80) = &PTR_PTR_1132fef20;
          plVar7 = (long *)((long)register0x00000008 + -0xb8);
          FUN_109d3aa88((undefined1 *)((long)register0x00000008 + -0xe8),plVar7,
                        (undefined1 *)((long)register0x00000008 + -0x88));
          *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
          lVar15 = *(long *)((long)register0x00000008 + -0xe8);
          unaff_x22 = pbVar14;
          goto LAB_109debd70;
        }
        pbVar14 = pbVar14 + 1;
      }
      if (((pbVar11 < (byte *)0x2) || (*pbVar14 != 0x30)) || ((pbVar14[1] | 0x20) != 0x78)) {
        pbVar11 = pbVar14 + (long)pbVar11;
        puVar16 = (undefined8 *)((long)register0x00000008 + -0xd0);
        uVar25 = 0x109deb900;
      }
      else {
        if (pbVar11 + -2 == (byte *)0x0) {
          *(undefined **)((long)register0x00000008 + -0xb8) = &UNK_10f601e0c;
          *(undefined2 *)((long)register0x00000008 + -0x98) = 0x103;
          func_0x000109deb0e4((undefined1 *)((long)register0x00000008 + -0xf0),
                              (undefined1 *)((long)register0x00000008 + -0xb8));
          *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
          lVar15 = *(long *)((long)register0x00000008 + -0xf0);
          unaff_x22 = pbVar14;
          goto LAB_109debd70;
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x68)
           ) goto LAB_109dec250;
        pbVar14 = pbVar14 + 2;
        *(undefined8 *)((long)register0x00000008 + -0x50) =
             *(undefined8 *)((long)register0x00000008 + -0x50);
        *(undefined8 *)((long)register0x00000008 + -0x48) =
             *(undefined8 *)((long)register0x00000008 + -0x48);
        *(undefined8 *)((long)register0x00000008 + -0x40) =
             *(undefined8 *)((long)register0x00000008 + -0x40);
        *(undefined8 *)((long)register0x00000008 + -0x38) =
             *(undefined8 *)((long)register0x00000008 + -0x38);
        *(undefined8 *)((long)register0x00000008 + -0x30) =
             *(undefined8 *)((long)register0x00000008 + -0x30);
        *(undefined8 *)((long)register0x00000008 + -0x28) =
             *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        *(undefined8 *)((long)register0x00000008 + -0x58) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        *(byte *)((long)param_2 + 0x1c) = *(byte *)((long)param_2 + 0x1c) & 0xf8 | 2;
        iVar6 = *(int *)(*plVar8 + 8);
        if (iVar6 - 0x40U < 0xffffff80) {
          puVar16 = (undefined8 *)param_2[2];
          *puVar16 = 0;
          _bzero(puVar16 + 1,(ulong)((iVar6 + 0x40U >> 6) - 1) << 3);
          *(undefined4 *)(param_2 + 3) = 0;
        }
        else {
          *(undefined4 *)(param_2 + 3) = 0;
          param_2[2] = 0;
        }
        pbVar11 = pbVar14 + (long)(pbVar11 + -2);
        puVar16 = (undefined8 *)((long)register0x00000008 + -0xc0);
        uVar25 = 0x109deaad8;
        plVar8 = param_5;
        puVar2 = (undefined1 *)register0x00000008;
      }
      *(long **)((long)register0x00000008 + -0x110) = plVar8;
      *(long **)((long)register0x00000008 + -0x108) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0x100) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar25;
      *puVar16 = pbVar11;
      pbVar9 = pbVar14;
      if (pbVar14 != pbVar11) {
        lVar15 = (long)pbVar11 - (long)pbVar14;
        do {
          if (*pbVar14 != 0x30) {
            pbVar9 = pbVar14;
            if (*pbVar14 == 0x2e) {
              *puVar16 = pbVar14;
              if (lVar15 == 1) {
                *(undefined **)((long)register0x00000008 + -0x150) = &UNK_10f601dc7;
                *(undefined2 *)((long)register0x00000008 + -0x130) = 0x103;
                func_0x000109df6eb4();
                *(undefined8 *)((long)register0x00000008 + -0x120) = 3;
                *(undefined ***)((long)register0x00000008 + -0x118) = &PTR_PTR_1132fef20;
                FUN_109d3aa88((undefined1 *)((long)register0x00000008 + -0x128),
                              (undefined1 *)((long)register0x00000008 + -0x150),
                              (undefined1 *)((long)register0x00000008 + -0x120));
                puVar2[-0x60] = puVar2[-0x60] | 1;
                *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)((long)register0x00000008 + -0x128)
                ;
                return;
              }
              goto LAB_109deb0ac;
            }
            break;
          }
          pbVar14 = pbVar14 + 1;
          pbVar9 = pbVar11;
        } while (pbVar14 != pbVar11);
      }
LAB_109deb0c4:
      puVar2[-0x60] = puVar2[-0x60] & 0xfe;
      *(byte **)(puVar2 + -0x68) = pbVar9;
      return;
    }
    pbVar9 = pbVar14;
    if (pbVar11 == (byte *)0x8) {
      if (*(long *)pbVar14 != 0x5954494e49464e49) goto LAB_109deb9d8;
LAB_109deba6c:
      uVar25 = 0;
LAB_109deba74:
      plVar7 = plVar8;
      FUN_109deb6e0(plVar8,uVar25);
    }
    else {
      if (pbVar11 == (byte *)0x4) {
        if (*(int *)pbVar14 == 0x666e492b) goto LAB_109deba6c;
LAB_109deb9d8:
        bVar12 = *pbVar14;
        if (bVar12 == 0x2d) {
          if (pbVar11 == (byte *)0x3) goto LAB_109deb7ac;
          pbVar9 = pbVar14 + 1;
          if (pbVar11 == (byte *)0x9) {
            if (*(long *)pbVar9 == 0x5954494e49464e49) goto LAB_109deba34;
          }
          else if ((pbVar11 == (byte *)0x4) &&
                  ((*(short *)pbVar9 == 0x6e69 && pbVar14[3] == 0x66 ||
                   (*(short *)pbVar9 == 0x6e49 && pbVar14[3] == 0x66)))) {
LAB_109deba34:
            uVar25 = 1;
            goto LAB_109deba74;
          }
          bVar12 = *pbVar9;
          uVar25 = 1;
          pbVar17 = pbVar11 + -1;
        }
        else {
          uVar25 = 0;
          pbVar17 = pbVar11;
        }
      }
      else {
        if (pbVar11 != (byte *)0x3) goto LAB_109deb9d8;
        if (*(short *)pbVar14 == 0x6e69 && pbVar14[2] == 0x66) goto LAB_109deba6c;
        bVar12 = *pbVar14;
        if (bVar12 == 0x2d) goto LAB_109deb7ac;
        uVar25 = 0;
        pbVar17 = (byte *)0x3;
      }
      if ((bVar12 | 0x20) == 0x73) {
        pbVar17 = pbVar17 + -1;
        if (pbVar17 < (byte *)0x3) goto LAB_109deb7ac;
        pbVar9 = pbVar9 + 1;
        uVar23 = 1;
      }
      else {
        uVar23 = 0;
      }
      if ((*(short *)pbVar9 != 0x616e || pbVar9[2] != 0x6e) &&
         (*(short *)pbVar9 != 0x614e || pbVar9[2] != 0x4e)) goto LAB_109deb7ac;
      pbVar24 = pbVar9 + 3;
      pbVar20 = pbVar17 + -3;
      *(byte **)((long)register0x00000008 + -0xb8) = pbVar24;
      *(byte **)((long)register0x00000008 + -0xb0) = pbVar20;
      if (pbVar17 < (byte *)0x3 || pbVar20 == (byte *)0x0) {
        plVar7 = plVar8;
        FUN_109de78e4(plVar8,uVar23,uVar25,0);
      }
      else {
        bVar12 = *pbVar24;
        if (bVar12 == 0x28) {
          if ((pbVar20 < (byte *)0x3) || ((pbVar9 + (long)pbVar17)[-1] != 0x29)) goto LAB_109deb7ac;
          pbVar24 = pbVar9 + 4;
          pbVar20 = pbVar17 + -5;
          *(byte **)((long)register0x00000008 + -0xb8) = pbVar24;
          *(byte **)((long)register0x00000008 + -0xb0) = pbVar20;
          bVar12 = pbVar9[4];
        }
        if (bVar12 == 0x30) {
          if ((byte *)0x1 < pbVar20) {
            iVar6 = (int)(char)pbVar24[1];
            ___tolower();
            if (iVar6 == 0x78) {
              *(byte **)((long)register0x00000008 + -0xb8) = pbVar24 + 2;
              *(byte **)((long)register0x00000008 + -0xb0) = pbVar20 + -2;
              uVar10 = 0x10;
              goto LAB_109dec0c4;
            }
          }
          uVar10 = 8;
        }
        else {
          uVar10 = 10;
        }
LAB_109dec0c4:
        *(undefined4 *)((long)register0x00000008 + -0x80) = 1;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        plVar21 = (long *)((long)register0x00000008 + -0xb8);
        FUN_109e04094(plVar21,uVar10,(undefined1 *)((long)register0x00000008 + -0x88));
        if (((ulong)plVar21 & 1) != 0) {
          if ((0x40 < *(uint *)((long)register0x00000008 + -0x80)) &&
             (plVar21 = *(long **)((long)register0x00000008 + -0x88), plVar21 != (long *)0x0)) {
            __ZdaPv();
          }
          goto LAB_109deb7ac;
        }
        plVar7 = plVar8;
        FUN_109de78e4(plVar8,uVar23,uVar25,(undefined1 *)((long)register0x00000008 + -0x88));
        if ((0x40 < *(uint *)((long)register0x00000008 + -0x80)) &&
           (plVar7 = *(long **)((long)register0x00000008 + -0x88), plVar7 != (long *)0x0)) {
          __ZdaPv();
        }
      }
    }
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfe;
    *(undefined4 *)param_1 = 0;
  }
  plVar21 = plVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
    return;
  }
LAB_109dec250:
  ___stack_chk_fail();
  if ((0x40 < *(uint *)((long)register0x00000008 + -0x80)) &&
     (*(long *)((long)register0x00000008 + -0x88) != 0)) {
    __ZdaPv();
  }
  plVar7 = plVar21;
  __Unwind_Resume();
  *(byte **)((long)register0x00000008 + -0x120) = pbVar14;
  *(long **)((long)register0x00000008 + -0x118) = param_5;
  *(long **)((long)register0x00000008 + -0x110) = plVar8;
  *(long **)((long)register0x00000008 + -0x108) = plVar21;
  *(undefined1 **)((long)register0x00000008 + -0x100) = puVar2;
  *(code **)((long)register0x00000008 + -0xf8) = FUN_109dec280;
  *(undefined8 *)((long)register0x00000008 + -0x128) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  bVar4 = *(byte *)((long)plVar7 + 0x14);
  bVar12 = bVar4 & 7;
  bVar5 = bVar4 >> 3 & 1;
  if ((bVar4 & 6) == 0 || bVar12 == 3) {
    bVar4 = 0;
    if (bVar12 != 1) {
      bVar4 = bVar5;
    }
    *(byte *)((long)register0x00000008 + -0x1b8) = bVar4;
    plVar21 = (long *)*plVar7;
    piVar22 = (int *)((long)register0x00000008 + -0x1a8);
    FUN_109d2fb48((undefined1 *)((long)register0x00000008 + -0x1a8));
    *(byte *)((long)register0x00000008 + -0x1a8) = bVar12;
    plVar8 = (long *)((long)register0x00000008 + -0x1a8);
    FUN_109defbfc(plVar8,0,(ulong)piVar22 | 1,(undefined1 *)((long)register0x00000008 + -0x168),
                  (undefined1 *)((long)register0x00000008 + -0x1b8),plVar21 + 1);
  }
  else {
    *(byte *)((long)register0x00000008 + -0x1a9) = bVar5;
    plVar21 = plVar7 + 1;
    piVar22 = (int *)(*plVar7 + 8);
    plVar8 = (long *)*plVar21;
    if (0xffffff7f < *piVar22 - 0x40U) {
      plVar8 = plVar21;
    }
    FUN_109d7e498(plVar8,plVar8 + (*piVar22 + 0x40U >> 6));
    *(long **)((long)register0x00000008 + -0x1b8) = plVar8;
    FUN_109d2fb48((undefined1 *)((long)register0x00000008 + -0x1a8));
    *(byte *)((long)register0x00000008 + -0x1a8) = bVar12;
    plVar8 = (long *)((long)register0x00000008 + -0x1a8);
    FUN_109defc74(plVar8,0,(ulong)((long)register0x00000008 + -0x1a8) | 1,
                  (undefined1 *)((long)register0x00000008 + -0x168),
                  (undefined1 *)((long)register0x00000008 + -0x1a9),piVar22,plVar7 + 2,
                  (undefined1 *)((long)register0x00000008 + -0x1b8));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x128)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 **)((long)register0x00000008 + -0x1d0) =
       (undefined1 *)((long)register0x00000008 + -0x100);
  *(code **)((long)register0x00000008 + -0x1c8) = FUN_109dec398;
  *(undefined8 *)((long)register0x00000008 + -0x1d8) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  bVar12 = *(byte *)((long)plVar8 + 0x14);
  if ((bVar12 & 6) == 0 || (bVar12 & 7) == 3) {
    if ((bVar12 & 7) == 3) {
      uVar18 = 0;
      uVar13 = 0;
    }
    else {
      if ((bVar12 & 7) == 0) {
        uVar18 = 0x8000000000000000;
      }
      else {
        puVar19 = (ulong *)(plVar8 + 1);
        if (*(int *)(*plVar8 + 8) - 0x40U < 0xffffff80) {
          puVar19 = (ulong *)*puVar19;
        }
        uVar18 = *puVar19;
      }
      uVar13 = 0x7fff;
    }
  }
  else {
    uVar1 = (int)plVar8[2] + 0x3fff;
    puVar19 = (ulong *)(plVar8 + 1);
    if (*(int *)(*plVar8 + 8) - 0x40U < 0xffffff80) {
      puVar19 = (ulong *)*puVar19;
    }
    uVar18 = *puVar19;
    uVar13 = uVar18 >> 0x3f;
    if (uVar1 != 1) {
      uVar13 = (ulong)(uVar1 & 0x7fff);
    }
  }
  *(ulong *)((long)register0x00000008 + -0x1e8) = uVar18;
  *(ulong *)((long)register0x00000008 + -0x1e0) = uVar13 | ((ulong)(bVar12 >> 3) & 1) << 0xf;
  *(undefined4 *)(extraout_x8 + 1) = 0x50;
  plVar8 = extraout_x8;
  func_0x000109defe68(extraout_x8,(undefined1 *)((long)register0x00000008 + -0x1e8),2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x1d8)) {
    ___stack_chk_fail();
    *(int **)((long)register0x00000008 + -0x210) = piVar22;
    *(long **)((long)register0x00000008 + -0x208) = plVar21;
    *(undefined1 **)((long)register0x00000008 + -0x200) =
         (undefined1 *)((long)register0x00000008 + -0x1d0);
    *(code **)((long)register0x00000008 + -0x1f8) = FUN_109dec498;
    *(undefined8 *)((long)register0x00000008 + -0x218) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar16 = (undefined8 *)*plVar8;
    uVar3 = *(undefined4 *)(puVar16 + 2);
    uVar25 = *puVar16;
    *(undefined8 *)((long)register0x00000008 + -0x238) = puVar16[1];
    *(undefined8 *)((long)register0x00000008 + -0x240) = uVar25;
    *(undefined4 *)((long)register0x00000008 + -0x230) = uVar3;
    *(undefined4 *)((long)register0x00000008 + -0x23c) = 0xfffffc02;
    FUN_109de8340((undefined1 *)((long)register0x00000008 + -600),plVar8);
    FUN_109de8868((undefined1 *)((long)register0x00000008 + -600),
                  (undefined1 *)((long)register0x00000008 + -0x240),1,
                  (undefined1 *)((long)register0x00000008 + -0x229));
    FUN_109de8340((undefined1 *)((long)register0x00000008 + -0x270),
                  (undefined1 *)((long)register0x00000008 + -600));
    FUN_109de8868((undefined1 *)((long)register0x00000008 + -0x270),&DAT_10e05ae44,1,
                  (undefined1 *)((long)register0x00000008 + -0x229));
    FUN_109dec730((undefined1 *)((long)register0x00000008 + -0x288),
                  (undefined1 *)((long)register0x00000008 + -0x270));
    if (*(uint *)((long)register0x00000008 + -0x280) < 0x41) {
      *(undefined8 *)((long)register0x00000008 + -0x228) =
           *(undefined8 *)((long)register0x00000008 + -0x288);
    }
    else {
      *(undefined8 *)((long)register0x00000008 + -0x228) =
           **(undefined8 **)((long)register0x00000008 + -0x288);
      __ZdaPv();
    }
    if ((((*(byte *)((long)register0x00000008 + -0x25c) & 6) == 0) ||
        ((*(byte *)((long)register0x00000008 + -0x25c) & 7) == 3)) ||
       ((*(byte *)((long)register0x00000008 + -0x229) & 1) == 0)) {
      *(undefined8 *)((long)register0x00000008 + -0x220) = 0;
    }
    else {
      FUN_109de8868((undefined1 *)((long)register0x00000008 + -0x270),
                    (undefined1 *)((long)register0x00000008 + -0x240),1,
                    (undefined1 *)((long)register0x00000008 + -0x229));
      FUN_109de8340((undefined1 *)((long)register0x00000008 + -0x288),
                    (undefined1 *)((long)register0x00000008 + -600));
      FUN_109de9ad8((undefined1 *)((long)register0x00000008 + -0x288),
                    (undefined1 *)((long)register0x00000008 + -0x270),1,1);
      FUN_109de8868((undefined1 *)((long)register0x00000008 + -0x288),&DAT_10e05ae44,1,
                    (undefined1 *)((long)register0x00000008 + -0x229));
      FUN_109dec730((undefined1 *)((long)register0x00000008 + -0x298),
                    (undefined1 *)((long)register0x00000008 + -0x288));
      if (*(uint *)((long)register0x00000008 + -0x290) < 0x41) {
        *(undefined8 *)((long)register0x00000008 + -0x220) =
             *(undefined8 *)((long)register0x00000008 + -0x298);
      }
      else {
        *(undefined8 *)((long)register0x00000008 + -0x220) =
             **(undefined8 **)((long)register0x00000008 + -0x298);
        __ZdaPv();
      }
      if ((*(int *)(*(long *)((long)register0x00000008 + -0x288) + 8) - 0x40U < 0xffffff80) &&
         (*(long *)((long)register0x00000008 + -0x280) != 0)) {
        __ZdaPv();
      }
    }
    *(undefined4 *)(extraout_x8_00 + 1) = 0x80;
    plVar8 = extraout_x8_00;
    func_0x000109defe68(extraout_x8_00,(undefined1 *)((long)register0x00000008 + -0x228),2);
    if ((*(int *)(*(long *)((long)register0x00000008 + -0x270) + 8) - 0x40U < 0xffffff80) &&
       (plVar8 = *(long **)((long)register0x00000008 + -0x268), plVar8 != (long *)0x0)) {
      __ZdaPv();
    }
    if ((*(int *)(*(long *)((long)register0x00000008 + -600) + 8) - 0x40U < 0xffffff80) &&
       (plVar8 = *(long **)((long)register0x00000008 + -0x250), plVar8 != (long *)0x0)) {
      __ZdaPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x218)) {
      ___stack_chk_fail();
      if ((*(int *)(*(long *)((long)register0x00000008 + -0x288) + 8) - 0x40U < 0xffffff80) &&
         (*(long *)((long)register0x00000008 + -0x280) != 0)) {
        __ZdaPv();
      }
      if ((*(int *)(*(long *)((long)register0x00000008 + -0x270) + 8) - 0x40U < 0xffffff80) &&
         (*(long *)((long)register0x00000008 + -0x268) != 0)) {
        __ZdaPv();
      }
      if ((*(int *)(*(long *)((long)register0x00000008 + -600) + 8) - 0x40U < 0xffffff80) &&
         (*(long *)((long)register0x00000008 + -0x250) != 0)) {
        __ZdaPv();
      }
      __Unwind_Resume();
      bVar12 = *(byte *)((long)plVar8 + 0x14);
      if ((bVar12 & 6) == 0 || (bVar12 & 7) == 3) {
        if ((bVar12 & 7) == 3) {
          uVar18 = 0;
          uVar13 = 0;
        }
        else {
          if ((bVar12 & 7) == 0) {
            uVar18 = 0;
          }
          else {
            puVar19 = (ulong *)(plVar8 + 1);
            if (*(int *)(*plVar8 + 8) - 0x40U < 0xffffff80) {
              puVar19 = (ulong *)*puVar19;
            }
            uVar18 = *puVar19;
          }
          uVar13 = 0x7ff;
        }
      }
      else {
        uVar1 = (int)plVar8[2] + 0x3ff;
        puVar19 = (ulong *)(plVar8 + 1);
        if (*(int *)(*plVar8 + 8) - 0x40U < 0xffffff80) {
          puVar19 = (ulong *)*puVar19;
        }
        uVar18 = *puVar19;
        uVar13 = (ulong)uVar1;
        if (uVar1 == 1) {
          uVar13 = uVar18 >> 0x34 & 1;
        }
      }
      *(undefined4 *)(extraout_x8_01 + 1) = 0x40;
      *extraout_x8_01 =
           ((ulong)bVar12 & 8) << 0x3c | (uVar13 & 0x7ff) << 0x34 | uVar18 & 0xfffffffffffff;
      uVar1 = (uint)extraout_x8_01[1];
      puVar19 = extraout_x8_01;
      if (uVar1 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0xffffffffffffffff >> ((ulong)-uVar1 & 0x3f);
        if (0x40 < uVar1) {
          puVar19 = (ulong *)(*extraout_x8_01 + (ulong)((int)((ulong)uVar1 + 0x3f >> 6) - 1) * 8);
        }
      }
      *puVar19 = *puVar19 & uVar13;
      return;
    }
    return;
  }
  return;
  while (pbVar9 = pbVar14, *pbVar14 == 0x30) {
LAB_109deb0ac:
    pbVar14 = pbVar14 + 1;
    pbVar9 = pbVar11;
    if (pbVar14 == pbVar11) break;
  }
  goto LAB_109deb0c4;
}



/* Entry: 109def308; end: 109def41f;  */

long * FUN_109def308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 **ppuVar12;
  undefined **ppuVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  long *plVar16;
  long lVar17;
  long extraout_x8;
  ulong uVar18;
  long *plVar19;
  int iVar20;
  undefined8 *puVar21;
  uint uVar22;
  uint uVar23;
  undefined1 uVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined1 **ppuVar27;
  uint uVar28;
  long *plVar29;
  undefined **ppuVar30;
  long *plStack_2d0;
  uint uStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined1 *****pppppuStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined4 uStack_298;
  uint uStack_294;
  long *plStack_290;
  long *plStack_288;
  uint uStack_280;
  int iStack_27c;
  undefined1 *puStack_278;
  undefined1 ****ppppuStack_220;
  code *pcStack_218;
  undefined1 uStack_201;
  long *plStack_200;
  long *plStack_1f8;
  byte bStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  long *plStack_1c8;
  undefined1 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long *plStack_1a8;
  undefined *puStack_198;
  undefined1 auStack_190 [24];
  undefined *puStack_178;
  long alStack_170 [3];
  long lStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  uint uStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  long lStack_f8;
  long alStack_f0 [3];
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  uint uStack_80;
  long lStack_78;
  undefined *apuStack_70 [3];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109deea4c(&ppuStack_88);
  FUN_109dece44(apuStack_70,&ppuStack_88);
  plVar7 = &lStack_78;
  uVar10 = param_2;
  uVar26 = param_3;
  ppuVar30 = param_4;
  FUN_109d32674(plVar7,param_2,param_3,param_4,param_5,param_6,param_7);
  ppuVar8 = apuStack_70;
  FUN_109d32234();
  if ((0x40 < uStack_80) && (ppuVar8 = ppuStack_88, ppuStack_88 != (undefined **)0x0)) {
    __ZdaPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar7;
  }
  ___stack_chk_fail();
  FUN_109d32234(apuStack_70);
  if ((0x40 < uStack_80) && (ppuStack_88 != (undefined **)0x0)) {
    __ZdaPv();
  }
  ppuVar9 = ppuVar8;
  __Unwind_Resume();
  ppuVar13 = &puStack_120;
  pcStack_98 = FUN_109def420;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d0 = param_2;
  uStack_c8 = param_3;
  ppuStack_c0 = param_4;
  uStack_b8 = param_5;
  uStack_b0 = param_6;
  ppuStack_a8 = ppuVar8;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_109de8290(alStack_f0,&UNK_10e05aed0);
  plVar7 = &lStack_f8;
  FUN_109d5e7ec(plVar7,uVar10,uVar26);
  FUN_109d323e4(&puStack_120,&lStack_f8);
  ppuVar8 = &puStack_110;
  FUN_109ded6cc(&puStack_110,&DAT_10e05ae6c);
  puVar11 = puStack_108;
  if (ppuVar8 == ppuVar9) {
    puStack_108 = (undefined8 *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      func_0x000109d3229c((ulong)&puStack_110 | 8);
    }
  }
  else {
    puVar11 = (undefined8 *)ppuVar9[1];
    ppuVar9[1] = (undefined *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      func_0x000109d3229c();
    }
    ppuVar9[1] = (undefined *)puStack_108;
    *ppuVar9 = puStack_110;
    puStack_110 = &UNK_10e05aebc;
    puStack_108 = (undefined8 *)0x0;
  }
  if ((0x40 < uStack_118) && (puStack_120 != (undefined *)0x0)) {
    __ZdaPv();
  }
  plVar16 = alStack_f0;
  FUN_109d32234();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return plVar7;
  }
  ___stack_chk_fail();
  if ((0x40 < uStack_118) && (puStack_120 != (undefined *)0x0)) {
    __ZdaPv();
  }
  FUN_109d32234(alStack_f0);
  plVar7 = plVar16;
  __Unwind_Resume();
  pcStack_128 = FUN_109def58c;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = uVar10;
  ppuStack_148 = ppuVar8;
  ppuStack_140 = ppuVar9;
  plStack_138 = plVar16;
  ppuStack_130 = &puStack_a0;
  if (ppuVar13 == (undefined **)&DAT_10e05ae6c) {
    uVar26 = *puVar11;
    puStack_1b0 = &UNK_10e05aebc;
    func_0x000109de7c14(&puStack_1b0);
    FUN_109d32794(&puStack_178,&puStack_1b0,uVar26);
    ppuVar9 = &puStack_198;
    FUN_109de8290(auStack_190,&DAT_10e05ae44);
    ppuVar8 = &puStack_178;
    ppuVar13 = &puStack_178;
    ppuVar30 = &puStack_198;
    FUN_109ded7a8(plVar7,&DAT_10e05ae6c,ppuVar13);
    FUN_109d32234(auStack_190);
    plVar16 = alStack_170;
    FUN_109d32234();
    if ((*(int *)(puStack_1b0 + 8) - 0x40U < 0xffffff80) &&
       (plVar16 = plStack_1a8, plStack_1a8 != (long *)0x0)) {
      __ZdaPv();
    }
  }
  else {
    *plVar7 = (long)&UNK_10e05aebc;
    plVar16 = plVar7;
    func_0x000109de7c14();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return plVar7;
  }
  ___stack_chk_fail();
  FUN_109d32234(ppuVar9 + 1);
  FUN_109d32234(alStack_170);
  if ((*(int *)(puStack_1b0 + 8) - 0x40U < 0xffffff80) && (plStack_1a8 != (long *)0x0)) {
    __ZdaPv();
  }
  plVar7 = plVar16;
  __Unwind_Resume();
  pcStack_1b8 = FUN_109def6e8;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1e0 = uVar10;
  ppuStack_1d8 = ppuVar8;
  ppuStack_1d0 = ppuVar9;
  plStack_1c8 = plVar16;
  pppuStack_1c0 = &ppuStack_130;
  FUN_109d32854(plVar7 + 1);
  puVar14 = (undefined1 *)0x1;
  FUN_109def2ec(&plStack_1f8,plVar7,ppuVar13);
  plStack_200 = plStack_1f8;
  ppuVar27 = (undefined1 **)(ulong)bStack_1f0;
  if ((bStack_1f0 & 1) == 0) {
    plStack_200 = (long *)0x0;
  }
  else {
    plStack_1f8 = (long *)0x0;
  }
  ppuVar12 = (undefined1 **)&uStack_201;
  FUN_109d3b1b0(&plStack_200);
  plVar16 = plStack_200;
  if (plStack_200 != (long *)0x0) {
    (**(code **)(*plStack_200 + 8))();
  }
  if (((bStack_1f0 & 1) != 0) && (plVar16 = plStack_1f8, plStack_1f8 != (long *)0x0)) {
    (**(code **)(*plStack_1f8 + 8))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return plVar7;
  }
  ___stack_chk_fail();
  if (plStack_200 != (long *)0x0) {
    (**(code **)(*plStack_200 + 8))();
  }
  if (((bStack_1f0 & 1) != 0) && (plStack_1f8 != (long *)0x0)) {
    (**(code **)(*plStack_1f8 + 8))();
  }
  FUN_109d32234(plVar7 + 1);
  __Unwind_Resume();
  pcStack_218 = FUN_109def808;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar16 + 1;
  ppppuStack_220 = &pppuStack_1c0;
  if ((undefined1 **)*plVar7 == ppuVar12) {
    plVar19 = (long *)0x0;
    *puVar14 = 0;
  }
  else {
    ppuVar27 = ppuVar12;
    if ((undefined1 **)*plVar7 == (undefined1 **)&DAT_10e05ae6c) {
      plVar19 = (long *)(plVar16[2] + 8);
      FUN_109de8868(plVar19,ppuVar12);
      plVar29 = plVar7;
      if ((undefined *)plVar16[1] == &DAT_10e05ae6c) {
        plVar29 = (long *)(plVar16[2] + 8);
      }
      puStack_2a0 = &UNK_10e05aebc;
      func_0x000109de7c14(&puStack_2a0,plVar29);
      FUN_109d32794(&puStack_278,&puStack_2a0,ppuVar12);
      FUN_109d32568(plVar7,&stack0xfffffffffffffd90);
      plVar16 = (long *)&stack0xfffffffffffffd90;
      FUN_109d32234();
      if (*(int *)(puStack_2a0 + 8) - 0x40U < 0xffffff80) {
        plVar29 = (long *)CONCAT44(uStack_294,uStack_298);
joined_r0x000109def924:
        plVar16 = plVar29;
        ppuVar27 = ppuVar12;
        if (plVar16 != (long *)0x0) {
          __ZdaPv();
        }
      }
    }
    else {
      if (ppuVar12 != (undefined1 **)&DAT_10e05ae6c) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) goto LAB_109def9c4;
        plVar29 = (long *)*plVar7;
        plVar19 = plVar7;
        puStack_278 = puVar14;
        FUN_109de9830();
        uVar25 = 0;
        uVar1 = *(int *)(ppuVar12 + 1) + 0x40;
        uVar2 = *(uint *)(plVar29 + 1);
        uVar28 = *(int *)(ppuVar12 + 1) - uVar2;
        if ((ppuVar12 != (undefined1 **)&DAT_10e05aea8) && (plVar29 == (long *)&DAT_10e05aea8)) {
          if ((*(byte *)((long)plVar16 + 0x1c) & 7) == 1) {
            if (uVar2 - 0x40 < 0xffffff80) {
              uVar18 = *(ulong *)plVar16[2];
            }
            else {
              uVar18 = plVar16[2];
            }
            if ((-1 < (long)uVar18) || ((uVar18 >> 0x3e & 1) == 0)) {
              uVar25 = 1;
              goto LAB_109de8918;
            }
          }
          uVar25 = 0;
        }
LAB_109de8918:
        uVar5 = uVar1 >> 6;
        uVar6 = uVar2 + 0x40 >> 6;
        uVar18 = (ulong)uVar6;
        plStack_290 = plVar19;
        plStack_288 = plVar29;
        if ((int)uVar28 < 0) {
          bVar4 = *(byte *)((long)plVar16 + 0x1c) & 7;
          if ((*(byte *)((long)plVar16 + 0x1c) & 6) == 0 || bVar4 == 3) {
            if ((bVar4 == 1) && ((int)plVar29[2] != 1)) {
LAB_109de8ce4:
              plVar19 = plVar16 + 2;
              if (uVar2 - 0x40 < 0xffffff80) {
                plVar19 = (long *)*plVar19;
              }
              lVar17 = (long)plVar19;
              uStack_294 = (uint)ppuVar30;
              uStack_280 = uVar25;
              FUN_109dea7ec(plVar19,uVar18,-uVar28);
              iStack_27c = (int)lVar17;
              func_0x000109df0f28(plVar19,uVar18,-uVar28);
              ppuVar30 = (undefined **)(ulong)uStack_294;
              uVar25 = uStack_280;
              goto LAB_109de892c;
            }
          }
          else {
            plVar19 = plVar16 + 2;
            if (uVar2 - 0x40 < 0xffffff80) {
              plVar19 = (long *)*plVar19;
            }
            iVar20 = uVar6 * -0x40;
            uVar22 = uVar6 - 1;
            do {
              iVar20 = iVar20 + 0x40;
              if (plVar19[uVar22] != 0) {
                uVar22 = (int)LZCOUNT(plVar19[uVar22]) - iVar20 ^ 0x3f;
                goto LAB_109de8c20;
              }
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0xffffffff);
            uVar22 = 0xffffffff;
LAB_109de8c20:
            iVar20 = uVar22 + 1;
            iVar3 = (int)plVar16[3];
            uVar23 = *(int *)((long)ppuVar12 + 4) - iVar3;
            if (*(int *)((long)ppuVar12 + 4) <= (int)((iVar20 - uVar2) + iVar3)) {
              uVar23 = iVar20 - uVar2;
            }
            if ((int)uVar23 < 0) {
              if (uVar23 <= uVar28) {
                uVar23 = uVar28;
              }
              uVar28 = uVar28 - uVar23;
            }
            else {
              if (iVar20 + uVar28 != 0 && (int)(iVar20 + uVar28) < 0 == SCARRY4(iVar20,uVar28))
              goto LAB_109de8ce4;
              uVar23 = uVar22 + uVar28;
              uVar28 = -uVar22;
            }
            *(uint *)(plVar16 + 3) = uVar23 + iVar3;
            if ((int)uVar28 < 0) goto LAB_109de8ce4;
          }
        }
        iStack_27c = 0;
LAB_109de892c:
        if (uVar6 < uVar5) {
          puVar11 = (undefined8 *)(ulong)(uVar5 << 3);
          uStack_280 = uVar25;
          __Znam();
          *puVar11 = 0;
          if (0x7f < uVar1) {
            _bzero(puVar11 + 1,(ulong)(uVar5 - 1) << 3);
          }
          bVar4 = *(byte *)((long)plVar16 + 0x1c) & 7;
          uVar1 = *(int *)(*plVar7 + 8) - 0x40;
          if ((bVar4 == 1) || ((*(byte *)((long)plVar16 + 0x1c) & 6) != 0 && bVar4 != 3)) {
            plVar19 = plVar16 + 2;
            if (uVar1 < 0xffffff80) {
              plVar19 = (long *)*plVar19;
            }
            puVar21 = puVar11;
            if (uVar2 < 0xffffffc0) {
              do {
                *puVar21 = *plVar19;
                uVar18 = uVar18 - 1;
                plVar19 = plVar19 + 1;
                puVar21 = puVar21 + 1;
              } while (uVar18 != 0);
            }
          }
          if ((uVar1 < 0xffffff80) && (plVar16[2] != 0)) {
            __ZdaPv();
          }
          plVar16[2] = (long)puVar11;
          uVar25 = uStack_280;
        }
        else if (uVar5 == 1 && uVar6 != 1) {
          bVar4 = *(byte *)((long)plVar16 + 0x1c) & 7;
          uVar1 = *(int *)(*plVar7 + 8) - 0x40;
          if ((bVar4 == 1) || ((*(byte *)((long)plVar16 + 0x1c) & 6) != 0 && bVar4 != 3)) {
            plVar19 = plVar16 + 2;
            if (uVar1 < 0xffffff80) {
              plVar19 = (long *)*plVar19;
            }
            lVar17 = *plVar19;
          }
          else {
            lVar17 = 0;
          }
          if ((uVar1 < 0xffffff80) && (plVar16[2] != 0)) {
            __ZdaPv();
          }
          plVar16[2] = lVar17;
        }
        uVar24 = (undefined1)uVar25;
        *plVar7 = (long)ppuVar12;
        if ((0 < (int)uVar28) &&
           (bVar4 = *(byte *)((long)plVar16 + 0x1c) & 7,
           bVar4 == 1 || (*(byte *)((long)plVar16 + 0x1c) & 6) != 0 && bVar4 != 3)) {
          plVar19 = plVar16 + 2;
          if (*(int *)(ppuVar12 + 1) - 0x40U < 0xffffff80) {
            plVar19 = (long *)*plVar19;
          }
          FUN_109df0fe4(plVar19,uVar5,uVar28);
        }
        bVar4 = *(byte *)((long)plVar16 + 0x1c);
        if (((bVar4 & 6) == 0) || ((bVar4 & 7) == 3)) {
          if ((bVar4 & 7) == 0) {
            if (*(int *)(*plVar7 + 0x10) == 1) {
              FUN_109de78e4(plVar7,0,bVar4 >> 3 & 1,0);
              *puStack_278 = 1;
              return (long *)0x10;
            }
          }
          else if ((bVar4 & 7) == 1) {
            puVar15 = (undefined *)*plVar7;
            if (*(int *)(puVar15 + 0x10) == 1) {
              *puStack_278 = (int)plStack_288[2] != 1;
              FUN_109de78e4(plVar7,0,*(byte *)((long)plVar16 + 0x1c) >> 3 & 1,0);
              return plStack_290;
            }
            if (iStack_27c != 0) {
              uVar24 = 1;
            }
            *puStack_278 = uVar24;
            if (puVar15 != &DAT_10e05aea8) {
              uVar25 = 1;
            }
            if ((uVar25 & 1) == 0) {
              *(ulong *)plVar16[2] = *(ulong *)plVar16[2] | 0x8000000000000000;
            }
            if ((int)plStack_290 != 0) {
              plVar16 = plVar16 + 2;
              if (*(int *)(puVar15 + 8) - 0x40U < 0xffffff80) {
                plVar16 = (long *)*plVar16;
              }
              uVar1 = *(int *)(puVar15 + 8) - 2;
              uVar25 = uVar1 >> 6;
              plVar16[uVar25] = plVar16[uVar25] | 1L << ((ulong)uVar1 & 0x3f);
              return (long *)0x1;
            }
            return (long *)0x0;
          }
          plVar7 = (long *)0x0;
          *puStack_278 = 0;
        }
        else {
          FUN_109de7fd0(plVar7,ppuVar30,iStack_27c);
          *puStack_278 = (int)plVar7 != 0;
        }
        return plVar7;
      }
      plVar19 = plVar7;
      FUN_109de8868(plVar7,&UNK_10e05aed0);
      func_0x000109decc74(&plStack_288,plVar7);
      ppuVar12 = &puStack_278;
      FUN_109ded6cc(&stack0xfffffffffffffd90,&DAT_10e05ae6c,&plStack_288);
      FUN_109d32568(plVar7,&stack0xfffffffffffffd90);
      plVar16 = (long *)&stack0xfffffffffffffd90;
      FUN_109d32234();
      ppuVar27 = ppuVar12;
      plVar29 = plStack_288;
      if (0x40 < uStack_280) goto joined_r0x000109def924;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return plVar19;
  }
LAB_109def9c4:
  ___stack_chk_fail();
  FUN_109d32234(ppuVar27 + 1);
  if ((0x40 < uStack_280) && (plStack_288 != (long *)0x0)) {
    __ZdaPv();
  }
  plVar19 = plVar16;
  __Unwind_Resume();
  pcStack_2a8 = FUN_109defa38;
  plStack_2c0 = plVar7;
  plStack_2b8 = plVar16;
  pppppuStack_2b0 = &ppppuStack_220;
  func_0x000109d301b0(&plStack_2d0,*(undefined4 *)((long)plVar19 + 0xc),0xffffffffffffffff,1);
  plVar7 = (long *)(extraout_x8 + 8);
  func_0x000109d322e8(plVar7,plVar19,&plStack_2d0);
  if ((0x40 < uStack_2c8) && (plVar7 = plStack_2d0, plStack_2d0 != (long *)0x0)) {
    __ZdaPv();
    plVar7 = plStack_2d0;
  }
  return plVar7;
}



/* Entry: 109def420; end: 109def58b;  */

long * FUN_109def420(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 **ppuVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long *plVar13;
  long lVar14;
  long extraout_x8;
  ulong uVar15;
  long *plVar16;
  int iVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 uVar21;
  uint uVar22;
  undefined8 uVar23;
  undefined **ppuVar24;
  undefined1 **ppuVar25;
  uint uVar26;
  long *plVar27;
  long *plStack_240;
  uint uStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined1 ****ppppuStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined4 uStack_208;
  uint uStack_204;
  long *plStack_200;
  long *plStack_1f8;
  uint uStack_1f0;
  int iStack_1ec;
  undefined1 *puStack_1e8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined1 uStack_171;
  long *plStack_170;
  long *plStack_168;
  byte bStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long *plStack_118;
  undefined *puStack_108;
  undefined1 auStack_100 [24];
  undefined *puStack_e8;
  long alStack_e0 [3];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  uint uStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  long lStack_68;
  long alStack_60 [3];
  long lStack_48;
  
  ppuVar10 = &puStack_90;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109de8290(alStack_60,&UNK_10e05aed0);
  plVar7 = &lStack_68;
  FUN_109d5e7ec(plVar7,param_2,param_3);
  FUN_109d323e4(&puStack_90,&lStack_68);
  ppuVar24 = &puStack_80;
  FUN_109ded6cc(&puStack_80,&DAT_10e05ae6c);
  puVar8 = puStack_78;
  if (ppuVar24 == param_1) {
    puStack_78 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      func_0x000109d3229c((ulong)&puStack_80 | 8);
    }
  }
  else {
    puVar8 = (undefined8 *)param_1[1];
    param_1[1] = (undefined *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      func_0x000109d3229c();
    }
    param_1[1] = (undefined *)puStack_78;
    *param_1 = puStack_80;
    puStack_80 = &UNK_10e05aebc;
    puStack_78 = (undefined8 *)0x0;
  }
  if ((0x40 < uStack_88) && (puStack_90 != (undefined *)0x0)) {
    __ZdaPv();
  }
  plVar13 = alStack_60;
  func_0x000109d32234();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar7;
  }
  ___stack_chk_fail();
  if ((0x40 < uStack_88) && (puStack_90 != (undefined *)0x0)) {
    __ZdaPv();
  }
  func_0x000109d32234(alStack_60);
  plVar7 = plVar13;
  __Unwind_Resume();
  pcStack_98 = FUN_109def58c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c0 = param_2;
  ppuStack_b8 = ppuVar24;
  ppuStack_b0 = param_1;
  plStack_a8 = plVar13;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (ppuVar10 == (undefined **)&DAT_10e05ae6c) {
    uVar23 = *puVar8;
    puStack_120 = &UNK_10e05aebc;
    func_0x000109de7c14(&puStack_120);
    FUN_109d32794(&puStack_e8,&puStack_120,uVar23);
    param_1 = &puStack_108;
    FUN_109de8290(auStack_100,&DAT_10e05ae44);
    ppuVar24 = &puStack_e8;
    ppuVar10 = &puStack_e8;
    param_4 = &puStack_108;
    FUN_109ded7a8(plVar7,&DAT_10e05ae6c,ppuVar10);
    func_0x000109d32234(auStack_100);
    plVar13 = alStack_e0;
    func_0x000109d32234();
    if ((*(int *)(puStack_120 + 8) - 0x40U < 0xffffff80) &&
       (plVar13 = plStack_118, plStack_118 != (long *)0x0)) {
      __ZdaPv();
    }
  }
  else {
    *plVar7 = (long)&UNK_10e05aebc;
    plVar13 = plVar7;
    func_0x000109de7c14();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return plVar7;
  }
  ___stack_chk_fail();
  func_0x000109d32234(param_1 + 1);
  func_0x000109d32234(alStack_e0);
  if ((*(int *)(puStack_120 + 8) - 0x40U < 0xffffff80) && (plStack_118 != (long *)0x0)) {
    __ZdaPv();
  }
  plVar7 = plVar13;
  __Unwind_Resume();
  pcStack_128 = FUN_109def6e8;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = param_2;
  ppuStack_148 = ppuVar24;
  ppuStack_140 = param_1;
  plStack_138 = plVar13;
  ppuStack_130 = &puStack_a0;
  FUN_109d32854(plVar7 + 1);
  puVar11 = (undefined1 *)0x1;
  FUN_109def2ec(&plStack_168,plVar7,ppuVar10);
  plStack_170 = plStack_168;
  ppuVar25 = (undefined1 **)(ulong)bStack_160;
  if ((bStack_160 & 1) == 0) {
    plStack_170 = (long *)0x0;
  }
  else {
    plStack_168 = (long *)0x0;
  }
  ppuVar9 = (undefined1 **)&uStack_171;
  FUN_109d3b1b0(&plStack_170);
  plVar13 = plStack_170;
  if (plStack_170 != (long *)0x0) {
    (**(code **)(*plStack_170 + 8))();
  }
  if (((bStack_160 & 1) != 0) && (plVar13 = plStack_168, plStack_168 != (long *)0x0)) {
    (**(code **)(*plStack_168 + 8))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return plVar7;
  }
  ___stack_chk_fail();
  if (plStack_170 != (long *)0x0) {
    (**(code **)(*plStack_170 + 8))();
  }
  if (((bStack_160 & 1) != 0) && (plStack_168 != (long *)0x0)) {
    (**(code **)(*plStack_168 + 8))();
  }
  func_0x000109d32234(plVar7 + 1);
  __Unwind_Resume();
  pcStack_188 = FUN_109def808;
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar13 + 1;
  pppuStack_190 = &ppuStack_130;
  if ((undefined1 **)*plVar7 == ppuVar9) {
    plVar16 = (long *)0x0;
    *puVar11 = 0;
  }
  else {
    ppuVar25 = ppuVar9;
    if ((undefined1 **)*plVar7 == (undefined1 **)&DAT_10e05ae6c) {
      plVar16 = (long *)(plVar13[2] + 8);
      FUN_109de8868(plVar16,ppuVar9);
      plVar27 = plVar7;
      if ((undefined *)plVar13[1] == &DAT_10e05ae6c) {
        plVar27 = (long *)(plVar13[2] + 8);
      }
      puStack_210 = &UNK_10e05aebc;
      func_0x000109de7c14(&puStack_210,plVar27);
      FUN_109d32794(&puStack_1e8,&puStack_210,ppuVar9);
      FUN_109d32568(plVar7,&stack0xfffffffffffffe20);
      plVar13 = (long *)&stack0xfffffffffffffe20;
      func_0x000109d32234();
      if (*(int *)(puStack_210 + 8) - 0x40U < 0xffffff80) {
        plVar27 = (long *)CONCAT44(uStack_204,uStack_208);
joined_r0x000109def924:
        plVar13 = plVar27;
        ppuVar25 = ppuVar9;
        if (plVar13 != (long *)0x0) {
          __ZdaPv();
        }
      }
    }
    else {
      if (ppuVar9 != (undefined1 **)&DAT_10e05ae6c) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) goto LAB_109def9c4;
        plVar27 = (long *)*plVar7;
        plVar16 = plVar7;
        puStack_1e8 = puVar11;
        FUN_109de9830();
        uVar22 = 0;
        uVar1 = *(int *)(ppuVar9 + 1) + 0x40;
        uVar2 = *(uint *)(plVar27 + 1);
        uVar26 = *(int *)(ppuVar9 + 1) - uVar2;
        if ((ppuVar9 != (undefined1 **)&DAT_10e05aea8) && (plVar27 == (long *)&DAT_10e05aea8)) {
          if ((*(byte *)((long)plVar13 + 0x1c) & 7) == 1) {
            if (uVar2 - 0x40 < 0xffffff80) {
              uVar15 = *(ulong *)plVar13[2];
            }
            else {
              uVar15 = plVar13[2];
            }
            if ((-1 < (long)uVar15) || ((uVar15 >> 0x3e & 1) == 0)) {
              uVar22 = 1;
              goto LAB_109de8918;
            }
          }
          uVar22 = 0;
        }
LAB_109de8918:
        uVar5 = uVar1 >> 6;
        uVar6 = uVar2 + 0x40 >> 6;
        uVar15 = (ulong)uVar6;
        plStack_200 = plVar16;
        plStack_1f8 = plVar27;
        if ((int)uVar26 < 0) {
          bVar4 = *(byte *)((long)plVar13 + 0x1c) & 7;
          if ((*(byte *)((long)plVar13 + 0x1c) & 6) == 0 || bVar4 == 3) {
            if ((bVar4 == 1) && ((int)plVar27[2] != 1)) {
LAB_109de8ce4:
              plVar16 = plVar13 + 2;
              if (uVar2 - 0x40 < 0xffffff80) {
                plVar16 = (long *)*plVar16;
              }
              lVar14 = (long)plVar16;
              uStack_204 = (uint)param_4;
              uStack_1f0 = uVar22;
              FUN_109dea7ec(plVar16,uVar15,-uVar26);
              iStack_1ec = (int)lVar14;
              func_0x000109df0f28(plVar16,uVar15,-uVar26);
              param_4 = (undefined **)(ulong)uStack_204;
              uVar22 = uStack_1f0;
              goto LAB_109de892c;
            }
          }
          else {
            plVar16 = plVar13 + 2;
            if (uVar2 - 0x40 < 0xffffff80) {
              plVar16 = (long *)*plVar16;
            }
            iVar17 = uVar6 * -0x40;
            uVar19 = uVar6 - 1;
            do {
              iVar17 = iVar17 + 0x40;
              if (plVar16[uVar19] != 0) {
                uVar19 = (int)LZCOUNT(plVar16[uVar19]) - iVar17 ^ 0x3f;
                goto LAB_109de8c20;
              }
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0xffffffff);
            uVar19 = 0xffffffff;
LAB_109de8c20:
            iVar17 = uVar19 + 1;
            iVar3 = (int)plVar13[3];
            uVar20 = *(int *)((long)ppuVar9 + 4) - iVar3;
            if (*(int *)((long)ppuVar9 + 4) <= (int)((iVar17 - uVar2) + iVar3)) {
              uVar20 = iVar17 - uVar2;
            }
            if ((int)uVar20 < 0) {
              if (uVar20 <= uVar26) {
                uVar20 = uVar26;
              }
              uVar26 = uVar26 - uVar20;
            }
            else {
              if (iVar17 + uVar26 != 0 && (int)(iVar17 + uVar26) < 0 == SCARRY4(iVar17,uVar26))
              goto LAB_109de8ce4;
              uVar20 = uVar19 + uVar26;
              uVar26 = -uVar19;
            }
            *(uint *)(plVar13 + 3) = uVar20 + iVar3;
            if ((int)uVar26 < 0) goto LAB_109de8ce4;
          }
        }
        iStack_1ec = 0;
LAB_109de892c:
        if (uVar6 < uVar5) {
          puVar8 = (undefined8 *)(ulong)(uVar5 << 3);
          uStack_1f0 = uVar22;
          __Znam();
          *puVar8 = 0;
          if (0x7f < uVar1) {
            _bzero(puVar8 + 1,(ulong)(uVar5 - 1) << 3);
          }
          bVar4 = *(byte *)((long)plVar13 + 0x1c) & 7;
          uVar1 = *(int *)(*plVar7 + 8) - 0x40;
          if ((bVar4 == 1) || ((*(byte *)((long)plVar13 + 0x1c) & 6) != 0 && bVar4 != 3)) {
            plVar16 = plVar13 + 2;
            if (uVar1 < 0xffffff80) {
              plVar16 = (long *)*plVar16;
            }
            puVar18 = puVar8;
            if (uVar2 < 0xffffffc0) {
              do {
                *puVar18 = *plVar16;
                uVar15 = uVar15 - 1;
                plVar16 = plVar16 + 1;
                puVar18 = puVar18 + 1;
              } while (uVar15 != 0);
            }
          }
          if ((uVar1 < 0xffffff80) && (plVar13[2] != 0)) {
            __ZdaPv();
          }
          plVar13[2] = (long)puVar8;
          uVar22 = uStack_1f0;
        }
        else if (uVar5 == 1 && uVar6 != 1) {
          bVar4 = *(byte *)((long)plVar13 + 0x1c) & 7;
          uVar1 = *(int *)(*plVar7 + 8) - 0x40;
          if ((bVar4 == 1) || ((*(byte *)((long)plVar13 + 0x1c) & 6) != 0 && bVar4 != 3)) {
            plVar16 = plVar13 + 2;
            if (uVar1 < 0xffffff80) {
              plVar16 = (long *)*plVar16;
            }
            lVar14 = *plVar16;
          }
          else {
            lVar14 = 0;
          }
          if ((uVar1 < 0xffffff80) && (plVar13[2] != 0)) {
            __ZdaPv();
          }
          plVar13[2] = lVar14;
        }
        uVar21 = (undefined1)uVar22;
        *plVar7 = (long)ppuVar9;
        if ((0 < (int)uVar26) &&
           (bVar4 = *(byte *)((long)plVar13 + 0x1c) & 7,
           bVar4 == 1 || (*(byte *)((long)plVar13 + 0x1c) & 6) != 0 && bVar4 != 3)) {
          plVar16 = plVar13 + 2;
          if (*(int *)(ppuVar9 + 1) - 0x40U < 0xffffff80) {
            plVar16 = (long *)*plVar16;
          }
          FUN_109df0fe4(plVar16,uVar5,uVar26);
        }
        bVar4 = *(byte *)((long)plVar13 + 0x1c);
        if (((bVar4 & 6) == 0) || ((bVar4 & 7) == 3)) {
          if ((bVar4 & 7) == 0) {
            if (*(int *)(*plVar7 + 0x10) == 1) {
              FUN_109de78e4(plVar7,0,bVar4 >> 3 & 1,0);
              *puStack_1e8 = 1;
              return (long *)0x10;
            }
          }
          else if ((bVar4 & 7) == 1) {
            puVar12 = (undefined *)*plVar7;
            if (*(int *)(puVar12 + 0x10) == 1) {
              *puStack_1e8 = (int)plStack_1f8[2] != 1;
              FUN_109de78e4(plVar7,0,*(byte *)((long)plVar13 + 0x1c) >> 3 & 1,0);
              return plStack_200;
            }
            if (iStack_1ec != 0) {
              uVar21 = 1;
            }
            *puStack_1e8 = uVar21;
            if (puVar12 != &DAT_10e05aea8) {
              uVar22 = 1;
            }
            if ((uVar22 & 1) == 0) {
              *(ulong *)plVar13[2] = *(ulong *)plVar13[2] | 0x8000000000000000;
            }
            if ((int)plStack_200 != 0) {
              plVar13 = plVar13 + 2;
              if (*(int *)(puVar12 + 8) - 0x40U < 0xffffff80) {
                plVar13 = (long *)*plVar13;
              }
              uVar1 = *(int *)(puVar12 + 8) - 2;
              uVar22 = uVar1 >> 6;
              plVar13[uVar22] = plVar13[uVar22] | 1L << ((ulong)uVar1 & 0x3f);
              return (long *)0x1;
            }
            return (long *)0x0;
          }
          plVar7 = (long *)0x0;
          *puStack_1e8 = 0;
        }
        else {
          FUN_109de7fd0(plVar7,param_4,iStack_1ec);
          *puStack_1e8 = (int)plVar7 != 0;
        }
        return plVar7;
      }
      plVar16 = plVar7;
      FUN_109de8868(plVar7,&UNK_10e05aed0);
      func_0x000109decc74(&plStack_1f8,plVar7);
      ppuVar9 = &puStack_1e8;
      FUN_109ded6cc(&stack0xfffffffffffffe20,&DAT_10e05ae6c,&plStack_1f8);
      FUN_109d32568(plVar7,&stack0xfffffffffffffe20);
      plVar13 = (long *)&stack0xfffffffffffffe20;
      func_0x000109d32234();
      ppuVar25 = ppuVar9;
      plVar27 = plStack_1f8;
      if (0x40 < uStack_1f0) goto joined_r0x000109def924;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return plVar16;
  }
LAB_109def9c4:
  ___stack_chk_fail();
  func_0x000109d32234(ppuVar25 + 1);
  if ((0x40 < uStack_1f0) && (plStack_1f8 != (long *)0x0)) {
    __ZdaPv();
  }
  plVar16 = plVar13;
  __Unwind_Resume();
  pcStack_218 = FUN_109defa38;
  plStack_230 = plVar7;
  plStack_228 = plVar13;
  ppppuStack_220 = &pppuStack_190;
  func_0x000109d301b0(&plStack_240,*(undefined4 *)((long)plVar16 + 0xc),0xffffffffffffffff,1);
  plVar7 = (long *)(extraout_x8 + 8);
  func_0x000109d322e8(plVar7,plVar16,&plStack_240);
  if ((0x40 < uStack_238) && (plVar7 = plStack_240, plStack_240 != (long *)0x0)) {
    __ZdaPv();
    plVar7 = plStack_240;
  }
  return plVar7;
}



/* Entry: 109def58c; end: 109def6e7;  */

long * FUN_109def58c(long *param_1,undefined8 *param_2,undefined *param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined1 **ppuVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  long *plVar12;
  long lVar13;
  long extraout_x8;
  ulong uVar14;
  long *plVar15;
  int iVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  undefined1 uVar20;
  uint uVar21;
  undefined1 *unaff_x20;
  undefined8 uVar22;
  undefined1 **ppuVar23;
  uint uVar24;
  long *plVar25;
  long *plStack_1b0;
  uint uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined4 uStack_178;
  uint uStack_174;
  long *plStack_170;
  long *plStack_168;
  uint uStack_160;
  int iStack_15c;
  undefined1 *puStack_158;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined1 uStack_e1;
  long *plStack_e0;
  long *plStack_d8;
  byte bStack_d0;
  long lStack_c8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long *plStack_88;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [8];
  long alStack_50 [3];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == &DAT_10e05ae6c) {
    uVar22 = *param_2;
    puStack_90 = &UNK_10e05aebc;
    func_0x000109de7c14(&puStack_90);
    FUN_109d32794(auStack_58,&puStack_90,uVar22);
    unaff_x20 = auStack_78;
    FUN_109de8290(auStack_70,&DAT_10e05ae44);
    param_3 = auStack_58;
    param_4 = auStack_78;
    FUN_109ded7a8(param_1,&DAT_10e05ae6c,param_3);
    FUN_109d32234(auStack_70);
    plVar8 = alStack_50;
    FUN_109d32234();
    if ((*(int *)(puStack_90 + 8) - 0x40U < 0xffffff80) &&
       (plVar8 = plStack_88, plStack_88 != (long *)0x0)) {
      __ZdaPv();
    }
  }
  else {
    *param_1 = (long)&UNK_10e05aebc;
    plVar8 = param_1;
    func_0x000109de7c14();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_109d32234(unaff_x20 + 8);
  FUN_109d32234(alStack_50);
  if ((*(int *)(puStack_90 + 8) - 0x40U < 0xffffff80) && (plStack_88 != (long *)0x0)) {
    __ZdaPv();
  }
  __Unwind_Resume();
  pcStack_98 = FUN_109def6e8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_109d32854(plVar8 + 1);
  puVar10 = (undefined1 *)0x1;
  FUN_109def2ec(&plStack_d8,plVar8,param_3);
  plStack_e0 = plStack_d8;
  ppuVar23 = (undefined1 **)(ulong)bStack_d0;
  if ((bStack_d0 & 1) == 0) {
    plStack_e0 = (long *)0x0;
  }
  else {
    plStack_d8 = (long *)0x0;
  }
  ppuVar9 = (undefined1 **)&uStack_e1;
  FUN_109d3b1b0(&plStack_e0);
  plVar12 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    (**(code **)(*plStack_e0 + 8))();
  }
  if (((bStack_d0 & 1) != 0) && (plVar12 = plStack_d8, plStack_d8 != (long *)0x0)) {
    (**(code **)(*plStack_d8 + 8))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return plVar8;
  }
  ___stack_chk_fail();
  if (plStack_e0 != (long *)0x0) {
    (**(code **)(*plStack_e0 + 8))();
  }
  if (((bStack_d0 & 1) != 0) && (plStack_d8 != (long *)0x0)) {
    (**(code **)(*plStack_d8 + 8))();
  }
  FUN_109d32234(plVar8 + 1);
  __Unwind_Resume();
  pcStack_f8 = FUN_109def808;
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = plVar12 + 1;
  ppuStack_100 = &puStack_a0;
  if ((undefined1 **)*plVar8 == ppuVar9) {
    plVar15 = (long *)0x0;
    *puVar10 = 0;
  }
  else {
    ppuVar23 = ppuVar9;
    if ((undefined1 **)*plVar8 == (undefined1 **)&DAT_10e05ae6c) {
      plVar15 = (long *)(plVar12[2] + 8);
      FUN_109de8868(plVar15,ppuVar9);
      plVar25 = plVar8;
      if ((undefined *)plVar12[1] == &DAT_10e05ae6c) {
        plVar25 = (long *)(plVar12[2] + 8);
      }
      puStack_180 = &UNK_10e05aebc;
      func_0x000109de7c14(&puStack_180,plVar25);
      FUN_109d32794(&puStack_158,&puStack_180,ppuVar9);
      FUN_109d32568(plVar8,&stack0xfffffffffffffeb0);
      plVar12 = (long *)&stack0xfffffffffffffeb0;
      FUN_109d32234();
      if (*(int *)(puStack_180 + 8) - 0x40U < 0xffffff80) {
        plVar25 = (long *)CONCAT44(uStack_174,uStack_178);
joined_r0x000109def924:
        plVar12 = plVar25;
        ppuVar23 = ppuVar9;
        if (plVar12 != (long *)0x0) {
          __ZdaPv();
        }
      }
    }
    else {
      if (ppuVar9 != (undefined1 **)&DAT_10e05ae6c) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) goto LAB_109def9c4;
        plVar25 = (long *)*plVar8;
        plVar15 = plVar8;
        puStack_158 = puVar10;
        FUN_109de9830();
        uVar21 = 0;
        uVar1 = *(int *)(ppuVar9 + 1) + 0x40;
        uVar2 = *(uint *)(plVar25 + 1);
        uVar24 = *(int *)(ppuVar9 + 1) - uVar2;
        if ((ppuVar9 != (undefined1 **)&DAT_10e05aea8) && (plVar25 == (long *)&DAT_10e05aea8)) {
          if ((*(byte *)((long)plVar12 + 0x1c) & 7) == 1) {
            if (uVar2 - 0x40 < 0xffffff80) {
              uVar14 = *(ulong *)plVar12[2];
            }
            else {
              uVar14 = plVar12[2];
            }
            if ((-1 < (long)uVar14) || ((uVar14 >> 0x3e & 1) == 0)) {
              uVar21 = 1;
              goto LAB_109de8918;
            }
          }
          uVar21 = 0;
        }
LAB_109de8918:
        uVar5 = uVar1 >> 6;
        uVar6 = uVar2 + 0x40 >> 6;
        uVar14 = (ulong)uVar6;
        plStack_170 = plVar15;
        plStack_168 = plVar25;
        if ((int)uVar24 < 0) {
          bVar4 = *(byte *)((long)plVar12 + 0x1c) & 7;
          if ((*(byte *)((long)plVar12 + 0x1c) & 6) == 0 || bVar4 == 3) {
            if ((bVar4 == 1) && ((int)plVar25[2] != 1)) {
LAB_109de8ce4:
              plVar15 = plVar12 + 2;
              if (uVar2 - 0x40 < 0xffffff80) {
                plVar15 = (long *)*plVar15;
              }
              lVar13 = (long)plVar15;
              uStack_174 = (uint)param_4;
              uStack_160 = uVar21;
              FUN_109dea7ec(plVar15,uVar14,-uVar24);
              iStack_15c = (int)lVar13;
              func_0x000109df0f28(plVar15,uVar14,-uVar24);
              param_4 = (undefined1 *)(ulong)uStack_174;
              uVar21 = uStack_160;
              goto LAB_109de892c;
            }
          }
          else {
            plVar15 = plVar12 + 2;
            if (uVar2 - 0x40 < 0xffffff80) {
              plVar15 = (long *)*plVar15;
            }
            iVar16 = uVar6 * -0x40;
            uVar18 = uVar6 - 1;
            do {
              iVar16 = iVar16 + 0x40;
              if (plVar15[uVar18] != 0) {
                uVar18 = (int)LZCOUNT(plVar15[uVar18]) - iVar16 ^ 0x3f;
                goto LAB_109de8c20;
              }
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0xffffffff);
            uVar18 = 0xffffffff;
LAB_109de8c20:
            iVar16 = uVar18 + 1;
            iVar3 = (int)plVar12[3];
            uVar19 = *(int *)((long)ppuVar9 + 4) - iVar3;
            if (*(int *)((long)ppuVar9 + 4) <= (int)((iVar16 - uVar2) + iVar3)) {
              uVar19 = iVar16 - uVar2;
            }
            if ((int)uVar19 < 0) {
              if (uVar19 <= uVar24) {
                uVar19 = uVar24;
              }
              uVar24 = uVar24 - uVar19;
            }
            else {
              if (iVar16 + uVar24 != 0 && (int)(iVar16 + uVar24) < 0 == SCARRY4(iVar16,uVar24))
              goto LAB_109de8ce4;
              uVar19 = uVar18 + uVar24;
              uVar24 = -uVar18;
            }
            *(uint *)(plVar12 + 3) = uVar19 + iVar3;
            if ((int)uVar24 < 0) goto LAB_109de8ce4;
          }
        }
        iStack_15c = 0;
LAB_109de892c:
        if (uVar6 < uVar5) {
          puVar7 = (undefined8 *)(ulong)(uVar5 << 3);
          uStack_160 = uVar21;
          __Znam();
          *puVar7 = 0;
          if (0x7f < uVar1) {
            _bzero(puVar7 + 1,(ulong)(uVar5 - 1) << 3);
          }
          bVar4 = *(byte *)((long)plVar12 + 0x1c) & 7;
          uVar1 = *(int *)(*plVar8 + 8) - 0x40;
          if ((bVar4 == 1) || ((*(byte *)((long)plVar12 + 0x1c) & 6) != 0 && bVar4 != 3)) {
            plVar15 = plVar12 + 2;
            if (uVar1 < 0xffffff80) {
              plVar15 = (long *)*plVar15;
            }
            puVar17 = puVar7;
            if (uVar2 < 0xffffffc0) {
              do {
                *puVar17 = *plVar15;
                uVar14 = uVar14 - 1;
                plVar15 = plVar15 + 1;
                puVar17 = puVar17 + 1;
              } while (uVar14 != 0);
            }
          }
          if ((uVar1 < 0xffffff80) && (plVar12[2] != 0)) {
            __ZdaPv();
          }
          plVar12[2] = (long)puVar7;
          uVar21 = uStack_160;
        }
        else if (uVar5 == 1 && uVar6 != 1) {
          bVar4 = *(byte *)((long)plVar12 + 0x1c) & 7;
          uVar1 = *(int *)(*plVar8 + 8) - 0x40;
          if ((bVar4 == 1) || ((*(byte *)((long)plVar12 + 0x1c) & 6) != 0 && bVar4 != 3)) {
            plVar15 = plVar12 + 2;
            if (uVar1 < 0xffffff80) {
              plVar15 = (long *)*plVar15;
            }
            lVar13 = *plVar15;
          }
          else {
            lVar13 = 0;
          }
          if ((uVar1 < 0xffffff80) && (plVar12[2] != 0)) {
            __ZdaPv();
          }
          plVar12[2] = lVar13;
        }
        uVar20 = (undefined1)uVar21;
        *plVar8 = (long)ppuVar9;
        if ((0 < (int)uVar24) &&
           (bVar4 = *(byte *)((long)plVar12 + 0x1c) & 7,
           bVar4 == 1 || (*(byte *)((long)plVar12 + 0x1c) & 6) != 0 && bVar4 != 3)) {
          plVar15 = plVar12 + 2;
          if (*(int *)(ppuVar9 + 1) - 0x40U < 0xffffff80) {
            plVar15 = (long *)*plVar15;
          }
          FUN_109df0fe4(plVar15,uVar5,uVar24);
        }
        bVar4 = *(byte *)((long)plVar12 + 0x1c);
        if (((bVar4 & 6) == 0) || ((bVar4 & 7) == 3)) {
          if ((bVar4 & 7) == 0) {
            if (*(int *)(*plVar8 + 0x10) == 1) {
              FUN_109de78e4(plVar8,0,bVar4 >> 3 & 1,0);
              *puStack_158 = 1;
              return (long *)0x10;
            }
          }
          else if ((bVar4 & 7) == 1) {
            puVar11 = (undefined *)*plVar8;
            if (*(int *)(puVar11 + 0x10) == 1) {
              *puStack_158 = (int)plStack_168[2] != 1;
              FUN_109de78e4(plVar8,0,*(byte *)((long)plVar12 + 0x1c) >> 3 & 1,0);
              return plStack_170;
            }
            if (iStack_15c != 0) {
              uVar20 = 1;
            }
            *puStack_158 = uVar20;
            if (puVar11 != &DAT_10e05aea8) {
              uVar21 = 1;
            }
            if ((uVar21 & 1) == 0) {
              *(ulong *)plVar12[2] = *(ulong *)plVar12[2] | 0x8000000000000000;
            }
            if ((int)plStack_170 != 0) {
              plVar12 = plVar12 + 2;
              if (*(int *)(puVar11 + 8) - 0x40U < 0xffffff80) {
                plVar12 = (long *)*plVar12;
              }
              uVar1 = *(int *)(puVar11 + 8) - 2;
              uVar21 = uVar1 >> 6;
              plVar12[uVar21] = plVar12[uVar21] | 1L << ((ulong)uVar1 & 0x3f);
              return (long *)0x1;
            }
            return (long *)0x0;
          }
          plVar8 = (long *)0x0;
          *puStack_158 = 0;
        }
        else {
          FUN_109de7fd0(plVar8,param_4,iStack_15c);
          *puStack_158 = (int)plVar8 != 0;
        }
        return plVar8;
      }
      plVar15 = plVar8;
      FUN_109de8868(plVar8,&UNK_10e05aed0);
      func_0x000109decc74(&plStack_168,plVar8);
      ppuVar9 = &puStack_158;
      FUN_109ded6cc(&stack0xfffffffffffffeb0,&DAT_10e05ae6c,&plStack_168);
      FUN_109d32568(plVar8,&stack0xfffffffffffffeb0);
      plVar12 = (long *)&stack0xfffffffffffffeb0;
      FUN_109d32234();
      ppuVar23 = ppuVar9;
      plVar25 = plStack_168;
      if (0x40 < uStack_160) goto joined_r0x000109def924;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return plVar15;
  }
LAB_109def9c4:
  ___stack_chk_fail();
  FUN_109d32234(ppuVar23 + 1);
  if ((0x40 < uStack_160) && (plStack_168 != (long *)0x0)) {
    __ZdaPv();
  }
  plVar15 = plVar12;
  __Unwind_Resume();
  pcStack_188 = FUN_109defa38;
  plStack_1a0 = plVar8;
  plStack_198 = plVar12;
  pppuStack_190 = &ppuStack_100;
  func_0x000109d301b0(&plStack_1b0,*(undefined4 *)((long)plVar15 + 0xc),0xffffffffffffffff,1);
  plVar8 = (long *)(extraout_x8 + 8);
  func_0x000109d322e8(plVar8,plVar15,&plStack_1b0);
  if ((0x40 < uStack_1a8) && (plVar8 = plStack_1b0, plStack_1b0 != (long *)0x0)) {
    __ZdaPv();
    plVar8 = plStack_1b0;
  }
  return plVar8;
}



/* Entry: 109def6e8; end: 109def807;  */

long * FUN_109def6e8(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined1 **ppuVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  long *plVar12;
  long lVar13;
  long extraout_x8;
  ulong uVar14;
  long *plVar15;
  int iVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  undefined1 uVar20;
  uint uVar21;
  undefined1 **ppuVar22;
  uint uVar23;
  long *plVar24;
  long *plStack_120;
  uint uStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  long *plStack_e0;
  long *plStack_d8;
  uint uStack_d0;
  int iStack_cc;
  undefined1 *puStack_c8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 uStack_51;
  long *plStack_50;
  long *plStack_48;
  byte bStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d32854(param_1 + 1);
  puVar10 = (undefined1 *)0x1;
  FUN_109def2ec(&plStack_48,param_1,param_3);
  plStack_50 = plStack_48;
  ppuVar22 = (undefined1 **)(ulong)bStack_40;
  if ((bStack_40 & 1) == 0) {
    plStack_50 = (long *)0x0;
  }
  else {
    plStack_48 = (long *)0x0;
  }
  ppuVar9 = (undefined1 **)&uStack_51;
  FUN_109d3b1b0(&plStack_50);
  plVar12 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    (**(code **)(*plStack_50 + 8))();
  }
  if (((bStack_40 & 1) != 0) && (plVar12 = plStack_48, plStack_48 != (long *)0x0)) {
    (**(code **)(*plStack_48 + 8))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (plStack_50 != (long *)0x0) {
    (**(code **)(*plStack_50 + 8))();
  }
  if (((bStack_40 & 1) != 0) && (plStack_48 != (long *)0x0)) {
    (**(code **)(*plStack_48 + 8))();
  }
  FUN_109d32234(param_1 + 1);
  __Unwind_Resume();
  pcStack_68 = FUN_109def808;
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = plVar12 + 1;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((undefined1 **)*plVar8 == ppuVar9) {
    plVar15 = (long *)0x0;
    *puVar10 = 0;
  }
  else {
    ppuVar22 = ppuVar9;
    if ((undefined1 **)*plVar8 == (undefined1 **)&DAT_10e05ae6c) {
      plVar15 = (long *)(plVar12[2] + 8);
      FUN_109de8868(plVar15,ppuVar9);
      plVar24 = plVar8;
      if ((undefined *)plVar12[1] == &DAT_10e05ae6c) {
        plVar24 = (long *)(plVar12[2] + 8);
      }
      puStack_f0 = &UNK_10e05aebc;
      func_0x000109de7c14(&puStack_f0,plVar24);
      FUN_109d32794(&puStack_c8,&puStack_f0,ppuVar9);
      FUN_109d32568(plVar8,&stack0xffffffffffffff40);
      plVar12 = (long *)&stack0xffffffffffffff40;
      FUN_109d32234();
      if (*(int *)(puStack_f0 + 8) - 0x40U < 0xffffff80) {
        plVar24 = (long *)CONCAT44(uStack_e4,uStack_e8);
joined_r0x000109def924:
        plVar12 = plVar24;
        ppuVar22 = ppuVar9;
        if (plVar12 != (long *)0x0) {
          __ZdaPv();
        }
      }
    }
    else {
      if (ppuVar9 != (undefined1 **)&DAT_10e05ae6c) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) goto LAB_109def9c4;
        plVar24 = (long *)*plVar8;
        plVar15 = plVar8;
        puStack_c8 = puVar10;
        FUN_109de9830();
        uVar21 = 0;
        uVar1 = *(int *)(ppuVar9 + 1) + 0x40;
        uVar2 = *(uint *)(plVar24 + 1);
        uVar23 = *(int *)(ppuVar9 + 1) - uVar2;
        if ((ppuVar9 != (undefined1 **)&DAT_10e05aea8) && (plVar24 == (long *)&DAT_10e05aea8)) {
          if ((*(byte *)((long)plVar12 + 0x1c) & 7) == 1) {
            if (uVar2 - 0x40 < 0xffffff80) {
              uVar14 = *(ulong *)plVar12[2];
            }
            else {
              uVar14 = plVar12[2];
            }
            if ((-1 < (long)uVar14) || ((uVar14 >> 0x3e & 1) == 0)) {
              uVar21 = 1;
              goto LAB_109de8918;
            }
          }
          uVar21 = 0;
        }
LAB_109de8918:
        uVar5 = uVar1 >> 6;
        uVar6 = uVar2 + 0x40 >> 6;
        uVar14 = (ulong)uVar6;
        plStack_e0 = plVar15;
        plStack_d8 = plVar24;
        if ((int)uVar23 < 0) {
          bVar4 = *(byte *)((long)plVar12 + 0x1c) & 7;
          if ((*(byte *)((long)plVar12 + 0x1c) & 6) == 0 || bVar4 == 3) {
            if ((bVar4 == 1) && ((int)plVar24[2] != 1)) {
LAB_109de8ce4:
              plVar15 = plVar12 + 2;
              if (uVar2 - 0x40 < 0xffffff80) {
                plVar15 = (long *)*plVar15;
              }
              lVar13 = (long)plVar15;
              uStack_e4 = (uint)param_4;
              uStack_d0 = uVar21;
              FUN_109dea7ec(plVar15,uVar14,-uVar23);
              iStack_cc = (int)lVar13;
              func_0x000109df0f28(plVar15,uVar14,-uVar23);
              param_4 = (ulong)uStack_e4;
              uVar21 = uStack_d0;
              goto LAB_109de892c;
            }
          }
          else {
            plVar15 = plVar12 + 2;
            if (uVar2 - 0x40 < 0xffffff80) {
              plVar15 = (long *)*plVar15;
            }
            iVar16 = uVar6 * -0x40;
            uVar18 = uVar6 - 1;
            do {
              iVar16 = iVar16 + 0x40;
              if (plVar15[uVar18] != 0) {
                uVar18 = (int)LZCOUNT(plVar15[uVar18]) - iVar16 ^ 0x3f;
                goto LAB_109de8c20;
              }
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0xffffffff);
            uVar18 = 0xffffffff;
LAB_109de8c20:
            iVar16 = uVar18 + 1;
            iVar3 = (int)plVar12[3];
            uVar19 = *(int *)((long)ppuVar9 + 4) - iVar3;
            if (*(int *)((long)ppuVar9 + 4) <= (int)((iVar16 - uVar2) + iVar3)) {
              uVar19 = iVar16 - uVar2;
            }
            if ((int)uVar19 < 0) {
              if (uVar19 <= uVar23) {
                uVar19 = uVar23;
              }
              uVar23 = uVar23 - uVar19;
            }
            else {
              if (iVar16 + uVar23 != 0 && (int)(iVar16 + uVar23) < 0 == SCARRY4(iVar16,uVar23))
              goto LAB_109de8ce4;
              uVar19 = uVar18 + uVar23;
              uVar23 = -uVar18;
            }
            *(uint *)(plVar12 + 3) = uVar19 + iVar3;
            if ((int)uVar23 < 0) goto LAB_109de8ce4;
          }
        }
        iStack_cc = 0;
LAB_109de892c:
        if (uVar6 < uVar5) {
          puVar7 = (undefined8 *)(ulong)(uVar5 << 3);
          uStack_d0 = uVar21;
          __Znam();
          *puVar7 = 0;
          if (0x7f < uVar1) {
            _bzero(puVar7 + 1,(ulong)(uVar5 - 1) << 3);
          }
          bVar4 = *(byte *)((long)plVar12 + 0x1c) & 7;
          uVar1 = *(int *)(*plVar8 + 8) - 0x40;
          if ((bVar4 == 1) || ((*(byte *)((long)plVar12 + 0x1c) & 6) != 0 && bVar4 != 3)) {
            plVar15 = plVar12 + 2;
            if (uVar1 < 0xffffff80) {
              plVar15 = (long *)*plVar15;
            }
            puVar17 = puVar7;
            if (uVar2 < 0xffffffc0) {
              do {
                *puVar17 = *plVar15;
                uVar14 = uVar14 - 1;
                plVar15 = plVar15 + 1;
                puVar17 = puVar17 + 1;
              } while (uVar14 != 0);
            }
          }
          if ((uVar1 < 0xffffff80) && (plVar12[2] != 0)) {
            __ZdaPv();
          }
          plVar12[2] = (long)puVar7;
          uVar21 = uStack_d0;
        }
        else if (uVar5 == 1 && uVar6 != 1) {
          bVar4 = *(byte *)((long)plVar12 + 0x1c) & 7;
          uVar1 = *(int *)(*plVar8 + 8) - 0x40;
          if ((bVar4 == 1) || ((*(byte *)((long)plVar12 + 0x1c) & 6) != 0 && bVar4 != 3)) {
            plVar15 = plVar12 + 2;
            if (uVar1 < 0xffffff80) {
              plVar15 = (long *)*plVar15;
            }
            lVar13 = *plVar15;
          }
          else {
            lVar13 = 0;
          }
          if ((uVar1 < 0xffffff80) && (plVar12[2] != 0)) {
            __ZdaPv();
          }
          plVar12[2] = lVar13;
        }
        uVar20 = (undefined1)uVar21;
        *plVar8 = (long)ppuVar9;
        if ((0 < (int)uVar23) &&
           (bVar4 = *(byte *)((long)plVar12 + 0x1c) & 7,
           bVar4 == 1 || (*(byte *)((long)plVar12 + 0x1c) & 6) != 0 && bVar4 != 3)) {
          plVar15 = plVar12 + 2;
          if (*(int *)(ppuVar9 + 1) - 0x40U < 0xffffff80) {
            plVar15 = (long *)*plVar15;
          }
          FUN_109df0fe4(plVar15,uVar5,uVar23);
        }
        bVar4 = *(byte *)((long)plVar12 + 0x1c);
        if (((bVar4 & 6) == 0) || ((bVar4 & 7) == 3)) {
          if ((bVar4 & 7) == 0) {
            if (*(int *)(*plVar8 + 0x10) == 1) {
              FUN_109de78e4(plVar8,0,bVar4 >> 3 & 1,0);
              *puStack_c8 = 1;
              return (long *)0x10;
            }
          }
          else if ((bVar4 & 7) == 1) {
            puVar11 = (undefined *)*plVar8;
            if (*(int *)(puVar11 + 0x10) == 1) {
              *puStack_c8 = (int)plStack_d8[2] != 1;
              FUN_109de78e4(plVar8,0,*(byte *)((long)plVar12 + 0x1c) >> 3 & 1,0);
              return plStack_e0;
            }
            if (iStack_cc != 0) {
              uVar20 = 1;
            }
            *puStack_c8 = uVar20;
            if (puVar11 != &DAT_10e05aea8) {
              uVar21 = 1;
            }
            if ((uVar21 & 1) == 0) {
              *(ulong *)plVar12[2] = *(ulong *)plVar12[2] | 0x8000000000000000;
            }
            if ((int)plStack_e0 != 0) {
              plVar12 = plVar12 + 2;
              if (*(int *)(puVar11 + 8) - 0x40U < 0xffffff80) {
                plVar12 = (long *)*plVar12;
              }
              uVar1 = *(int *)(puVar11 + 8) - 2;
              uVar21 = uVar1 >> 6;
              plVar12[uVar21] = plVar12[uVar21] | 1L << ((ulong)uVar1 & 0x3f);
              return (long *)0x1;
            }
            return (long *)0x0;
          }
          plVar8 = (long *)0x0;
          *puStack_c8 = 0;
        }
        else {
          FUN_109de7fd0(plVar8,param_4,iStack_cc);
          *puStack_c8 = (int)plVar8 != 0;
        }
        return plVar8;
      }
      plVar15 = plVar8;
      FUN_109de8868(plVar8,&UNK_10e05aed0);
      func_0x000109decc74(&plStack_d8,plVar8);
      ppuVar9 = &puStack_c8;
      FUN_109ded6cc(&stack0xffffffffffffff40,&DAT_10e05ae6c,&plStack_d8);
      FUN_109d32568(plVar8,&stack0xffffffffffffff40);
      plVar12 = (long *)&stack0xffffffffffffff40;
      FUN_109d32234();
      ppuVar22 = ppuVar9;
      plVar24 = plStack_d8;
      if (0x40 < uStack_d0) goto joined_r0x000109def924;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return plVar15;
  }
LAB_109def9c4:
  ___stack_chk_fail();
  FUN_109d32234(ppuVar22 + 1);
  if ((0x40 < uStack_d0) && (plStack_d8 != (long *)0x0)) {
    __ZdaPv();
  }
  plVar15 = plVar12;
  __Unwind_Resume();
  pcStack_f8 = FUN_109defa38;
  plStack_110 = plVar8;
  plStack_108 = plVar12;
  ppuStack_100 = &puStack_70;
  func_0x000109d301b0(&plStack_120,*(undefined4 *)((long)plVar15 + 0xc),0xffffffffffffffff,1);
  plVar12 = (long *)(extraout_x8 + 8);
  func_0x000109d322e8(plVar12,plVar15,&plStack_120);
  if ((0x40 < uStack_118) && (plVar12 = plStack_120, plStack_120 != (long *)0x0)) {
    __ZdaPv();
    plVar12 = plStack_120;
  }
  return plVar12;
}



/* Entry: 109def808; end: 109defa37;  */

long * FUN_109def808(undefined1 *param_1,undefined1 **param_2,ulong param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  long lVar10;
  long extraout_x8;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 uVar17;
  uint uVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined1 **unaff_x21;
  uint uVar21;
  undefined *puVar22;
  long *plStack_c0;
  uint uStack_b8;
  long *plStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined4 uStack_88;
  uint uStack_84;
  long *plStack_80;
  undefined *puStack_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 *puStack_68;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar20 = (long *)(param_1 + 8);
  if ((undefined1 **)*plVar20 == param_2) {
    plVar12 = (long *)0x0;
    *param_4 = 0;
  }
  else {
    unaff_x21 = param_2;
    if ((undefined1 **)*plVar20 == (undefined1 **)&DAT_10e05ae6c) {
      plVar12 = (long *)(*(long *)(param_1 + 0x10) + 8);
      FUN_109de8868(plVar12,param_2);
      plVar9 = plVar20;
      if (*(undefined **)(param_1 + 8) == &DAT_10e05ae6c) {
        plVar9 = (long *)(*(long *)(param_1 + 0x10) + 8);
      }
      puStack_90 = &UNK_10e05aebc;
      func_0x000109de7c14(&puStack_90,plVar9);
      FUN_109d32794(&puStack_68,&puStack_90,param_2);
      FUN_109d32568(plVar20,&stack0xffffffffffffffa0);
      param_1 = &stack0xffffffffffffffa0;
      FUN_109d32234();
      if (*(int *)(puStack_90 + 8) - 0x40U < 0xffffff80) {
        puVar8 = (undefined1 *)CONCAT44(uStack_84,uStack_88);
joined_r0x000109def924:
        param_1 = puVar8;
        unaff_x21 = param_2;
        if (param_1 != (undefined1 *)0x0) {
          __ZdaPv();
        }
      }
    }
    else {
      if (param_2 != (undefined1 **)&DAT_10e05ae6c) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) goto LAB_109def9c4;
        puVar22 = (undefined *)*plVar20;
        plVar12 = plVar20;
        puStack_68 = param_4;
        FUN_109de9830();
        uVar18 = 0;
        uVar1 = *(int *)(param_2 + 1) + 0x40;
        uVar2 = *(uint *)(puVar22 + 8);
        uVar21 = *(int *)(param_2 + 1) - uVar2;
        if ((param_2 != (undefined1 **)&DAT_10e05aea8) && (puVar22 == &DAT_10e05aea8)) {
          if ((param_1[0x1c] & 7) == 1) {
            if (uVar2 - 0x40 < 0xffffff80) {
              uVar11 = **(ulong **)(param_1 + 0x10);
            }
            else {
              uVar11 = *(ulong *)(param_1 + 0x10);
            }
            if ((-1 < (long)uVar11) || ((uVar11 >> 0x3e & 1) == 0)) {
              uVar18 = 1;
              goto LAB_109de8918;
            }
          }
          uVar18 = 0;
        }
LAB_109de8918:
        uVar5 = uVar1 >> 6;
        uVar6 = uVar2 + 0x40 >> 6;
        uVar11 = (ulong)uVar6;
        plStack_80 = plVar12;
        puStack_78 = puVar22;
        if ((int)uVar21 < 0) {
          bVar4 = param_1[0x1c] & 7;
          if ((param_1[0x1c] & 6) == 0 || bVar4 == 3) {
            if ((bVar4 == 1) && (*(int *)(puVar22 + 0x10) != 1)) {
LAB_109de8ce4:
              plVar12 = (long *)(param_1 + 0x10);
              if (uVar2 - 0x40 < 0xffffff80) {
                plVar12 = (long *)*plVar12;
              }
              lVar10 = (long)plVar12;
              uStack_84 = (uint)param_3;
              uStack_70 = uVar18;
              FUN_109dea7ec(plVar12,uVar11,-uVar21);
              iStack_6c = (int)lVar10;
              func_0x000109df0f28(plVar12,uVar11,-uVar21);
              param_3 = (ulong)uStack_84;
              uVar18 = uStack_70;
              goto LAB_109de892c;
            }
          }
          else {
            puVar7 = (undefined8 *)(param_1 + 0x10);
            if (uVar2 - 0x40 < 0xffffff80) {
              puVar7 = (undefined8 *)*puVar7;
            }
            iVar13 = uVar6 * -0x40;
            uVar15 = uVar6 - 1;
            do {
              iVar13 = iVar13 + 0x40;
              if (*(long *)((long)puVar7 + (ulong)uVar15 * 8) != 0) {
                uVar15 = (int)LZCOUNT(*(long *)((long)puVar7 + (ulong)uVar15 * 8)) - iVar13 ^ 0x3f;
                goto LAB_109de8c20;
              }
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0xffffffff);
            uVar15 = 0xffffffff;
LAB_109de8c20:
            iVar13 = uVar15 + 1;
            iVar3 = *(int *)(param_1 + 0x18);
            uVar16 = *(int *)((long)param_2 + 4) - iVar3;
            if (*(int *)((long)param_2 + 4) <= (int)((iVar13 - uVar2) + iVar3)) {
              uVar16 = iVar13 - uVar2;
            }
            if ((int)uVar16 < 0) {
              if (uVar16 <= uVar21) {
                uVar16 = uVar21;
              }
              uVar21 = uVar21 - uVar16;
            }
            else {
              if (iVar13 + uVar21 != 0 && (int)(iVar13 + uVar21) < 0 == SCARRY4(iVar13,uVar21))
              goto LAB_109de8ce4;
              uVar16 = uVar15 + uVar21;
              uVar21 = -uVar15;
            }
            *(uint *)(param_1 + 0x18) = uVar16 + iVar3;
            if ((int)uVar21 < 0) goto LAB_109de8ce4;
          }
        }
        iStack_6c = 0;
LAB_109de892c:
        if (uVar6 < uVar5) {
          puVar7 = (undefined8 *)(ulong)(uVar5 << 3);
          uStack_70 = uVar18;
          __Znam();
          *puVar7 = 0;
          if (0x7f < uVar1) {
            _bzero(puVar7 + 1,(ulong)(uVar5 - 1) << 3);
          }
          bVar4 = param_1[0x1c] & 7;
          uVar1 = *(int *)(*plVar20 + 8) - 0x40;
          if ((bVar4 == 1) || ((param_1[0x1c] & 6) != 0 && bVar4 != 3)) {
            plVar12 = (long *)(param_1 + 0x10);
            if (uVar1 < 0xffffff80) {
              plVar12 = (long *)*plVar12;
            }
            puVar14 = puVar7;
            if (uVar2 < 0xffffffc0) {
              do {
                *puVar14 = *plVar12;
                uVar11 = uVar11 - 1;
                plVar12 = plVar12 + 1;
                puVar14 = puVar14 + 1;
              } while (uVar11 != 0);
            }
          }
          if ((uVar1 < 0xffffff80) && (*(long *)(param_1 + 0x10) != 0)) {
            __ZdaPv();
          }
          *(undefined8 **)(param_1 + 0x10) = puVar7;
          uVar18 = uStack_70;
        }
        else if (uVar5 == 1 && uVar6 != 1) {
          bVar4 = param_1[0x1c] & 7;
          uVar1 = *(int *)(*plVar20 + 8) - 0x40;
          if ((bVar4 == 1) || ((param_1[0x1c] & 6) != 0 && bVar4 != 3)) {
            plVar12 = (long *)(param_1 + 0x10);
            if (uVar1 < 0xffffff80) {
              plVar12 = (long *)*plVar12;
            }
            uVar19 = *plVar12;
          }
          else {
            uVar19 = 0;
          }
          if ((uVar1 < 0xffffff80) && (*(long *)(param_1 + 0x10) != 0)) {
            __ZdaPv();
          }
          *(undefined8 *)(param_1 + 0x10) = uVar19;
        }
        uVar17 = (undefined1)uVar18;
        *plVar20 = (long)param_2;
        if ((0 < (int)uVar21) &&
           (bVar4 = param_1[0x1c] & 7, bVar4 == 1 || (param_1[0x1c] & 6) != 0 && bVar4 != 3)) {
          plVar12 = (long *)(param_1 + 0x10);
          if (*(int *)(param_2 + 1) - 0x40U < 0xffffff80) {
            plVar12 = (long *)*plVar12;
          }
          FUN_109df0fe4(plVar12,uVar5,uVar21);
        }
        bVar4 = param_1[0x1c];
        if (((bVar4 & 6) == 0) || ((bVar4 & 7) == 3)) {
          if ((bVar4 & 7) == 0) {
            if (*(int *)(*plVar20 + 0x10) == 1) {
              FUN_109de78e4(plVar20,0,bVar4 >> 3 & 1,0);
              *puStack_68 = 1;
              return (long *)0x10;
            }
          }
          else if ((bVar4 & 7) == 1) {
            puVar22 = (undefined *)*plVar20;
            if (*(int *)(puVar22 + 0x10) == 1) {
              *puStack_68 = *(int *)(puStack_78 + 0x10) != 1;
              FUN_109de78e4(plVar20,0,(byte)param_1[0x1c] >> 3 & 1,0);
              return plStack_80;
            }
            if (iStack_6c != 0) {
              uVar17 = 1;
            }
            *puStack_68 = uVar17;
            if (puVar22 != &DAT_10e05aea8) {
              uVar18 = 1;
            }
            if ((uVar18 & 1) == 0) {
              **(ulong **)(param_1 + 0x10) = **(ulong **)(param_1 + 0x10) | 0x8000000000000000;
            }
            if ((int)plStack_80 != 0) {
              puVar7 = (undefined8 *)(param_1 + 0x10);
              if (*(int *)(puVar22 + 8) - 0x40U < 0xffffff80) {
                puVar7 = (undefined8 *)*puVar7;
              }
              uVar1 = *(int *)(puVar22 + 8) - 2;
              uVar11 = (ulong)(uVar1 >> 6);
              *(ulong *)((long)puVar7 + uVar11 * 8) =
                   *(ulong *)((long)puVar7 + uVar11 * 8) | 1L << ((ulong)uVar1 & 0x3f);
              return (long *)0x1;
            }
            return (long *)0x0;
          }
          plVar20 = (long *)0x0;
          *puStack_68 = 0;
        }
        else {
          FUN_109de7fd0(plVar20,param_3,iStack_6c);
          *puStack_68 = (int)plVar20 != 0;
        }
        return plVar20;
      }
      plVar12 = plVar20;
      FUN_109de8868(plVar20,&UNK_10e05aed0);
      func_0x000109decc74(&puStack_78,plVar20);
      param_2 = &puStack_68;
      FUN_109ded6cc(&stack0xffffffffffffffa0,&DAT_10e05ae6c,&puStack_78);
      FUN_109d32568(plVar20,&stack0xffffffffffffffa0);
      param_1 = &stack0xffffffffffffffa0;
      FUN_109d32234();
      unaff_x21 = param_2;
      puVar8 = puStack_78;
      if (0x40 < uStack_70) goto joined_r0x000109def924;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return plVar12;
  }
LAB_109def9c4:
  ___stack_chk_fail();
  FUN_109d32234(unaff_x21 + 1);
  if ((0x40 < uStack_70) && (puStack_78 != (undefined1 *)0x0)) {
    __ZdaPv();
  }
  puVar8 = param_1;
  __Unwind_Resume();
  pcStack_98 = FUN_109defa38;
  plStack_b0 = plVar20;
  puStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000109d301b0(&plStack_c0,*(undefined4 *)(puVar8 + 0xc),0xffffffffffffffff,1);
  plVar20 = (long *)(extraout_x8 + 8);
  func_0x000109d322e8(plVar20,puVar8,&plStack_c0);
  if ((0x40 < uStack_b8) && (plVar20 = plStack_c0, plStack_c0 != (long *)0x0)) {
    __ZdaPv();
    plVar20 = plStack_c0;
  }
  return plVar20;
}



/* Entry: 109defa38; end: 109defabf;  */

void FUN_109defa38(long param_1,long param_2)

{
  long lStack_30;
  uint uStack_28;
  
  func_0x000109d301b0(&lStack_30,*(undefined4 *)(param_2 + 0xc),0xffffffffffffffff,1);
  func_0x000109d322e8(param_1 + 8,param_2,&lStack_30);
  if ((0x40 < uStack_28) && (lStack_30 != 0)) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109defac0; end: 109defbfb;  */

undefined1 * FUN_109defac0(undefined1 *param_1,long *param_2,undefined4 *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined1 *puStack_c8;
  undefined4 *puStack_c0;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  uint uStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(param_2 + 1);
  uVar7 = (ulong)uVar1;
  uStack_80 = 0;
  FUN_109defd7c(&puStack_78,uVar7 + 0x3f >> 6,&uStack_80);
  uVar5 = uVar7;
  puVar6 = param_3;
  FUN_109d32674(param_1,puStack_78,uStack_70,uVar7,(*(byte *)((long)param_2 + 0xc) ^ 0xff) & 1,
                param_3,param_4);
  puVar4 = puStack_78;
  uStack_88 = uVar1;
  func_0x000109defe68(&lStack_90,puStack_78,uStack_70);
  if ((0x40 < *(uint *)(param_2 + 1)) && (*param_2 != 0)) {
    __ZdaPv();
  }
  *param_2 = lStack_90;
  *(uint *)(param_2 + 1) = uStack_88;
  uStack_88 = 0;
  if (puStack_78 != auStack_68) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume(puStack_78);
  pcStack_98 = FUN_109defbfc;
  puVar2 = puStack_78;
  puStack_c0 = param_3;
  uStack_b8 = uVar7;
  puStack_b0 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_109d70578();
  puVar3 = puStack_78;
  puStack_c8 = puVar4;
  FUN_109d35318(puStack_78,&puStack_c8,puVar2,uVar5,*puVar6);
  func_0x000109d353f8(puStack_78,puStack_c8,puVar3,uVar5);
  return puStack_78;
}



/* Entry: 109defbfc; end: 109defc73;  */

void FUN_109defbfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined4 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  uStack_40 = param_2;
  FUN_109d70578(param_1,&uStack_40,param_3,param_4,*param_5);
  uStack_38 = uStack_40;
  uVar2 = param_1;
  FUN_109d35318(param_1,&uStack_38,uVar1,param_4,*param_6);
  func_0x000109d353f8(param_1,uStack_38,uVar2,param_4);
  return;
}



/* Entry: 109defc74; end: 109defd03;  */

void FUN_109defc74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  FUN_109d70578(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  FUN_109d35318(param_1,&uStack_48,uVar1,param_4,*param_6);
  FUN_109defd04(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109defd04; end: 109defd7b;  */

void FUN_109defd04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  uStack_40 = param_2;
  FUN_109d78e18(param_1,&uStack_40,param_3,param_4,*param_5);
  uStack_38 = uStack_40;
  uVar2 = param_1;
  FUN_109d358f0(param_1,&uStack_38,uVar1,param_4,*param_6);
  func_0x000109d353f8(param_1,uStack_38,uVar2,param_4);
  return;
}



/* Entry: 109defd7c; end: 109defdd7;  */

long * FUN_109defd7c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0x400000000;
  FUN_109d3ad38(param_1,param_2,*param_3);
  return param_1;
}



/* Entry: 109defdd8; end: 109defef3;  */

void FUN_109defdd8(ulong *param_1,long param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  uVar3 = param_1[1];
  plVar5 = (long *)(((ulong)(uint)uVar3 + 0x3f >> 6) * 8);
  plVar2 = plVar5;
  __Znam();
  _bzero();
  *param_1 = (ulong)plVar2;
  *plVar2 = param_2;
  if (((param_2 < 0) && (param_3 != 0)) && (0x40 < (uint)uVar3)) {
    lVar4 = 8;
    do {
      *(undefined8 *)(*param_1 + lVar4) = 0xffffffffffffffff;
      lVar4 = lVar4 + 8;
    } while ((long)plVar5 - lVar4 != 0);
  }
  uVar1 = (uint)param_1[1];
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffffffffffff >> ((ulong)-uVar1 & 0x3f);
    if (0x40 < uVar1) {
      param_1 = (ulong *)(*param_1 + (ulong)((int)((ulong)uVar1 + 0x3f >> 6) - 1) * 8);
    }
  }
  *param_1 = *param_1 & uVar3;
  return;
}



/* Entry: 109defef4; end: 109deff6b;  */

void FUN_109defef4(long *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_2 + 0x3f >> 6;
  if (uVar2 == (ulong)*(uint *)(param_1 + 1) + 0x3f >> 6) {
    *(uint *)(param_1 + 1) = param_2;
  }
  else {
    if ((0x40 < *(uint *)(param_1 + 1)) && (*param_1 != 0)) {
      __ZdaPv();
    }
    *(uint *)(param_1 + 1) = param_2;
    if (0x40 < param_2) {
      lVar1 = uVar2 << 3;
      __Znam();
      *param_1 = lVar1;
    }
  }
  return;
}



/* Entry: 109deff6c; end: 109deffcf;  */

void FUN_109deff6c(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    FUN_109defef4(param_1,*(undefined4 *)(param_2 + 1));
    if (0x40 < *(uint *)(param_1 + 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (*param_1,*param_2,(ulong)*(uint *)(param_1 + 1) + 0x3f >> 3 & 0x3ffffff8);
      return;
    }
    *param_1 = *param_2;
  }
  return;
}



/* Entry: 109deffd0; end: 109df01ab;  */

void FUN_109deffd0(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar2 = param_1[1];
  if ((uint)uVar2 < 0x41) {
    *param_1 = *param_1 + 1;
  }
  else {
    puVar3 = (ulong *)*param_1;
    uVar4 = *puVar3;
    *puVar3 = uVar4 + 1;
    if (uVar4 == 0xffffffffffffffff) {
      uVar2 = (ulong)(uint)uVar2 + 0x3f >> 6;
      do {
        uVar2 = uVar2 - 1;
        puVar3 = puVar3 + 1;
        if (uVar2 == 0) break;
        uVar4 = *puVar3;
        *puVar3 = uVar4 + 1;
      } while (0xfffffffffffffffe < uVar4);
    }
  }
  uVar1 = (uint)param_1[1];
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffffffffffff >> ((ulong)-uVar1 & 0x3f);
    if (0x40 < uVar1) {
      param_1 = (ulong *)(*param_1 + (ulong)((int)((ulong)uVar1 + 0x3f >> 6) - 1) * 8);
    }
  }
  *param_1 = *param_1 & uVar2;
  return;
}



/* Entry: 109df01ac; end: 109df026b;  */

long * FUN_109df01ac(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 < 0x41) {
    lVar2 = *param_2;
    lVar3 = *param_3;
    *(uint *)(param_1 + 1) = uVar1;
    if (uVar1 < 0x41) {
      *param_1 = lVar3 * lVar2;
      FUN_109d301fc(param_1);
    }
    else {
      FUN_109defdd8(param_1,lVar3 * lVar2,0);
    }
    return param_1;
  }
  lVar2 = ((ulong)uVar1 + 0x3f >> 6) << 3;
  __Znam();
  *(uint *)(param_1 + 1) = uVar1;
  *param_1 = lVar2;
  FUN_109df026c();
  FUN_109d301fc(param_1);
  return param_1;
}



/* Entry: 109df026c; end: 109df030b;  */

uint FUN_109df026c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  
  *param_1 = 0;
  uVar2 = (uint)param_4;
  if (uVar2 < 2) {
    if (uVar2 == 0) {
      return 0;
    }
  }
  else {
    _bzero(param_1 + 1,(ulong)(uVar2 - 1) << 3);
  }
  uVar2 = 0;
  uVar3 = param_4 & 0xffffffff;
  do {
    puVar1 = param_1;
    FUN_109df0364(param_1,param_2,*param_3,0,param_4,uVar3,1);
    uVar2 = (uint)puVar1 | uVar2;
    param_1 = param_1 + 1;
    uVar3 = uVar3 - 1;
    param_3 = param_3 + 1;
  } while (uVar3 != 0);
  return uVar2;
}


